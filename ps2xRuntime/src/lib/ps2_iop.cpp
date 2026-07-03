#include "runtime/ps2_iop.h"
#include "runtime/ps2_iop_audio.h"
#include "runtime/ps2_iop_dbcman.h"
#include "runtime/ps2_memory.h"
#include "ps2_runtime.h"
#include "Kernel/Syscalls/RPC.h"

#include <algorithm>
#include <cstring>

// ps2_iop.cpp

namespace
{
    constexpr uint32_t kMcServSio2Sid = 0x80000400u;
    constexpr uint32_t kMcServDev9Sid = 0x80000480u;
    constexpr uint32_t kMcServVersion = 0x020Eu;
    constexpr uint32_t kMcManVersion = 0x020Eu;
    constexpr int32_t kMcResultSucceed = 0;
    constexpr int32_t kMcResultNoEntry = -4;
    constexpr int32_t kMcResultDeniedPermit = -5;
    constexpr uint32_t kMcTypePs2 = 2u;
    constexpr uint32_t kMcFreeClusters = 0x2000u;
    constexpr uint32_t kMcFormatted = 1u;

    bool isMcservSid(uint32_t sid)
    {
        return sid == kMcServSio2Sid || sid == kMcServDev9Sid;
    }

    bool readGuestU32(const uint8_t *rdram, uint32_t addr, uint32_t &out)
    {
        const uint8_t *ptr = getConstMemPtr(rdram, addr);
        if (!ptr)
        {
            out = 0u;
            return false;
        }

        std::memcpy(&out, ptr, sizeof(out));
        return true;
    }

    bool writeGuestU32(uint8_t *rdram, uint32_t addr, uint32_t value)
    {
        uint8_t *ptr = getMemPtr(rdram, addr);
        if (!ptr)
        {
            return false;
        }

        std::memcpy(ptr, &value, sizeof(value));
        return true;
    }

    void clearGuestRange(uint8_t *rdram, uint32_t addr, uint32_t size)
    {
        for (uint32_t i = 0; i < size; ++i)
        {
            if (uint8_t *ptr = getMemPtr(rdram, addr + i))
            {
                *ptr = 0u;
            }
        }
    }

    void writeMcservRpcResult(uint8_t *rdram, uint32_t recvBufAddr, uint32_t recvSize, int32_t result)
    {
        if (recvBufAddr == 0u || recvSize < sizeof(uint32_t))
        {
            return;
        }

        (void)writeGuestU32(rdram, recvBufAddr, static_cast<uint32_t>(result));
        if (recvSize > sizeof(uint32_t))
        {
            clearGuestRange(rdram, recvBufAddr + sizeof(uint32_t), recvSize - sizeof(uint32_t));
        }
    }

    void writeMcservRpcStat(uint8_t *rdram, uint32_t recvBufAddr, uint32_t recvSize)
    {
        if (recvBufAddr == 0u || recvSize == 0u)
        {
            return;
        }

        clearGuestRange(rdram, recvBufAddr, recvSize);
        if (recvSize >= sizeof(uint32_t))
        {
            (void)writeGuestU32(rdram, recvBufAddr + 0x00u, static_cast<uint32_t>(kMcResultSucceed));
        }
        if (recvSize >= 2u * sizeof(uint32_t))
        {
            (void)writeGuestU32(rdram, recvBufAddr + 0x04u, kMcServVersion);
        }
        if (recvSize >= 3u * sizeof(uint32_t))
        {
            (void)writeGuestU32(rdram, recvBufAddr + 0x08u, kMcManVersion);
        }
    }

    bool writeMcservGetInfoPayload(uint8_t *rdram, uint32_t sendBufAddr, bool extended)
    {
        if (sendBufAddr == 0u)
        {
            return false;
        }

        uint32_t paramAddr = 0u;
        (void)readGuestU32(rdram, sendBufAddr + 0x1Cu, paramAddr);
        if (paramAddr == 0u)
        {
            return false;
        }

        clearGuestRange(rdram, paramAddr, extended ? 192u : 64u);
        (void)writeGuestU32(rdram, paramAddr + 0x00u, kMcTypePs2);
        (void)writeGuestU32(rdram, paramAddr + 0x04u, kMcFreeClusters);
        if (extended)
        {
            (void)writeGuestU32(rdram, paramAddr + 0x90u, kMcFormatted);
        }
        return true;
    }

    bool handleMcservRpc(uint8_t *rdram,
                         uint32_t sid,
                         uint32_t rpcNum,
                         uint32_t sendBufAddr,
                         uint32_t recvBufAddr,
                         uint32_t recvSize,
                         uint32_t &resultPtr)
    {
        if (!rdram || !isMcservSid(sid))
        {
            return false;
        }

        resultPtr = recvBufAddr;

        switch (rpcNum)
        {
        case 0xFEu: // XMCSERV init, returns mcRpcStat_t.
            writeMcservRpcStat(rdram, recvBufAddr, recvSize);
            return true;

        case 0x70u: // MCSERV init fallback, returns result only.
            writeMcservRpcResult(rdram, recvBufAddr, recvSize, kMcResultSucceed);
            return true;

        case 0x01u: // XMCSERV get info.
            (void)writeMcservGetInfoPayload(rdram, sendBufAddr, true);
            writeMcservRpcResult(rdram, recvBufAddr, recvSize, kMcResultSucceed);
            return true;

        case 0x78u: // MCSERV get info.
            (void)writeMcservGetInfoPayload(rdram, sendBufAddr, false);
            writeMcservRpcResult(rdram, recvBufAddr, recvSize, kMcResultSucceed);
            return true;

        case 0x0Au: // XMCSERV flush.
        case 0x7Au: // MCSERV flush.
        {
            uint32_t fd = 0u;
            (void)readGuestU32(rdram, sendBufAddr, fd);
            writeMcservRpcResult(
                rdram,
                recvBufAddr,
                recvSize,
                fd == 0xFFFFFFFFu ? kMcResultDeniedPermit : kMcResultSucceed);
            return true;
        }

        case 0x02u: // XMCSERV open.
        case 0x71u: // MCSERV open.
            writeMcservRpcResult(rdram, recvBufAddr, recvSize, kMcResultNoEntry);
            return true;

        case 0x12u: // XMCSERV get entry space.
            writeMcservRpcResult(rdram, recvBufAddr, recvSize, 1024);
            return true;

        case 0x03u: // close
        case 0x04u: // seek
        case 0x05u: // read
        case 0x06u: // write
        case 0x0Cu: // chdir
        case 0x0Du: // getdir
        case 0x0Eu: // set info
        case 0x0Fu: // delete
        case 0x10u: // format
        case 0x11u: // unformat
        case 0x33u: // check block
        case 0x72u:
        case 0x73u:
        case 0x74u:
        case 0x75u:
        case 0x76u:
        case 0x77u:
        case 0x79u:
        case 0x7Bu:
        case 0x7Cu:
        case 0x7Du:
        case 0x7Eu:
        case 0x7Fu:
        case 0x80u:
            writeMcservRpcResult(rdram, recvBufAddr, recvSize, kMcResultSucceed);
            return true;

        default:
            return false;
        }
    }
}
ps2_iop::ps2_iop()
{
    reset();
}

void ps2_iop::init(uint8_t *rdram)
{
    m_rdram = rdram;
}

void ps2_iop::reset()
{
}

bool ps2_iop::handleRPC(PS2Runtime *runtime,
                        uint32_t sid, uint32_t rpcNum,
                        uint32_t sendBufAddr, uint32_t sendSize,
                        uint32_t recvBufAddr, uint32_t recvSize,
                        uint32_t &resultPtr,
                        bool &signalNowaitCompletion)
{
    resultPtr = 0u;
    signalNowaitCompletion = false;

    if (!runtime || !m_rdram)
    {
        return false;
    }

    if (ps2_syscalls::handleSoundDriverRpcService(m_rdram, runtime,
                                                  sid, rpcNum,
                                                  sendBufAddr, sendSize,
                                                  recvBufAddr, recvSize,
                                                  resultPtr,
                                                  signalNowaitCompletion))
    {
        return true;
    }

    if (ps2_iop_dbcman::handleDbcManRpc(m_rdram,
                                        sid, rpcNum,
                                        sendBufAddr, sendSize,
                                        recvBufAddr, recvSize,
                                        resultPtr))
    {
        return true;
    }

    if (handleMcservRpc(m_rdram,
                        sid,
                        rpcNum,
                        sendBufAddr,
                        recvBufAddr,
                        recvSize,
                        resultPtr))
    {
        return true;
    }

    if (sid == IOP_SID_LIBSD)
    {
        const uint8_t *sendPtr = sendBufAddr ? getConstMemPtr(m_rdram, sendBufAddr) : nullptr;
        uint8_t *recvPtr = recvBufAddr ? getMemPtr(m_rdram, recvBufAddr) : nullptr;
        ps2_iop_audio::handleLibSdRpc(runtime, sid, rpcNum, sendPtr, sendSize, recvPtr, recvSize);
        resultPtr = recvBufAddr;
        return true;
    }

    return false;
}
