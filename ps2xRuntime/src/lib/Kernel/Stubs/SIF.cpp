#include "Common.h"
#include "SIF.h"
#include "../Syscalls/RPC.h"
#include "../Syscalls/Sync.h"

#include <algorithm>
#include <array>
#include <atomic>
#include <chrono>
#include <cstring>
#include <cstdlib>
#include <iomanip>
#include <map>
#include <string>
#include <thread>
#include <unordered_map>

namespace ps2_syscalls
{
    void syncDtxSjrmtObjectState(uint32_t handle,
                                 uint32_t readPos,
                                 uint32_t writePos,
                                 uint32_t roomBytes,
                                 uint32_t dataBytes);
}

namespace ps2_stubs
{
    void sceSifCmdIntrHdlr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        TODO_NAMED("sceSifCmdIntrHdlr", rdram, ctx, runtime);
    }

    void sceSifLoadModule(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::SifLoadModule(rdram, ctx, runtime);
    }

    void sceSifSendCmd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t srcAddr = getRegU32(ctx, 7); // $a3
        const uint32_t dstAddr = readStackU32(rdram, ctx, 16);
        const uint32_t size = readStackU32(rdram, ctx, 20);
        if (size != 0u && srcAddr != 0u && dstAddr != 0u)
        {
            for (uint32_t i = 0; i < size; ++i)
            {
                const uint8_t *src = getConstMemPtr(rdram, srcAddr + i);
                uint8_t *dst = getMemPtr(rdram, dstAddr + i);
                if (!src || !dst)
                {
                    break;
                }
                *dst = *src;
            }
        }

        setReturnS32(ctx, 1);
    }

    namespace
    {
        struct Ps2SifDmaTransfer
        {
            uint32_t src = 0;
            uint32_t dest = 0;
            int32_t size = 0;
            int32_t attr = 0;
        };
        static_assert(sizeof(Ps2SifDmaTransfer) == 16u, "Unexpected SIF DMA descriptor size");

        struct SifPacketRpcClient
        {
            uint32_t sid = 0u;
            uint32_t server = 0u;
            uint32_t serverBuf = 0u;
            uint32_t cbuf = 0u;
        };

        struct KofxiSjrmtState
        {
            uint32_t handle = 0u;
            uint32_t mode = 0u;
            uint32_t wkAddr = 0u;
            uint32_t wkSize = 0u;
            uint32_t readPos = 0u;
            uint32_t writePos = 0u;
            uint32_t roomBytes = 0u;
            uint32_t dataBytes = 0u;
            uint32_t uuid0 = 0u;
            uint32_t uuid1 = 0u;
            uint32_t uuid2 = 0u;
            uint32_t uuid3 = 0u;
        };

        struct KofxiSjxState
        {
            uint32_t handle = 0u;
            uint32_t srcSjHandle = 0u;
            uint32_t dstSjHandle = 0u;
            uint32_t line = 0u;
            uint32_t eeObjAddr = 0u;
            uint16_t xid = 0u;
        };

        struct KofxiPs2RnaState
        {
            uint32_t handle = 0u;
            uint32_t maxChannels = 0u;
            uint32_t sjHandle0 = 0u;
            uint32_t sjHandle1 = 0u;
            uint32_t channelCount = 0u;
            bool playEnabled = false;
        };

        std::mutex g_sifDmaTransferMutex;
        uint32_t g_nextSifDmaTransferId = 1u;
        std::mutex g_sifCmdStateMutex;
        std::mutex g_sifHeapMutex;
        std::mutex g_kofxiIopServiceMutex;
        std::unordered_map<uint32_t, uint32_t> g_sifRegs;
        std::unordered_map<uint32_t, uint32_t> g_sifSregs;
        std::unordered_map<uint32_t, uint32_t> g_sifCmdHandlers;
        std::unordered_map<uint32_t, SifPacketRpcClient> g_sifPacketRpcClients;
        std::unordered_map<uint32_t, uint32_t> g_sifPacketSidByServer;
        std::array<uint32_t, 2> g_sifPadAreas{};
        uint64_t g_sifPadPumpFrame = 0u;
        uint32_t g_sifPadLastPressedMask = std::numeric_limits<uint32_t>::max();
        std::chrono::steady_clock::time_point g_sifPadScriptStart{};
        std::unordered_map<uint32_t, KofxiSjrmtState> g_kofxiSjrmtByHandle;
        std::unordered_map<uint32_t, KofxiSjxState> g_kofxiSjxByHandle;
        std::unordered_map<uint32_t, KofxiPs2RnaState> g_kofxiPs2RnaByHandle;
        std::map<uint32_t, uint32_t> g_sifHeapAllocations;
        uint32_t g_sifCmdBuffer = 0u;
        uint32_t g_sifSysCmdBuffer = 0u;
        bool g_sifCmdInitialized = false;
        bool g_sifResetCommandPending = false;
        uint32_t g_sifGetRegLogCount = 0u;
        uint32_t g_sifSetRegLogCount = 0u;
        uint32_t g_nextSifPacketServerAddr = 0x01F1C000u;
        std::atomic<uint32_t> g_nextKofxiIopServiceHandle{1u};

        constexpr uint32_t kSifRegBootStatus = 0x4u;
        constexpr uint32_t kSifRegMainAddr = 0x80000000u;
        constexpr uint32_t kSifRegSubAddr = 0x80000001u;
        constexpr uint32_t kSifRegMsCom = 0x80000002u;
        constexpr uint32_t kSifBootReadyMask = 0x00020000u;
        constexpr uint32_t kSifBootResetCompleteMask = 0x00040000u;
        constexpr uint32_t kSifPacketServerBase = 0x01F1C000u;
        constexpr uint32_t kSifPacketServerLimit = 0x01F20000u;
        constexpr uint32_t kSifPacketServerStride = 0x80u;

        void seedDefaultSifRegsLocked()
        {
            g_sifRegs.clear();
            g_sifSregs.clear();
            g_sifCmdHandlers.clear();
            g_sifPacketRpcClients.clear();
            g_sifPacketSidByServer.clear();
            g_sifPadAreas.fill(0u);
            g_sifPadPumpFrame = 0u;
            g_sifPadLastPressedMask = std::numeric_limits<uint32_t>::max();
            g_sifPadScriptStart = {};
            g_kofxiSjrmtByHandle.clear();
            g_kofxiSjxByHandle.clear();
            g_kofxiPs2RnaByHandle.clear();
            g_sifCmdBuffer = 0u;
            g_sifSysCmdBuffer = 0u;
            g_sifCmdInitialized = false;
            g_sifResetCommandPending = false;
            g_sifGetRegLogCount = 0u;
            g_sifSetRegLogCount = 0u;
            g_nextSifPacketServerAddr = kSifPacketServerBase;
            g_nextKofxiIopServiceHandle.store(1u, std::memory_order_relaxed);

            g_sifRegs[kSifRegBootStatus] = kSifBootReadyMask;
            g_sifRegs[kSifRegMainAddr] = 0u;
            g_sifRegs[kSifRegSubAddr] = 0u;
            g_sifRegs[kSifRegMsCom] = 0u;
        }

        bool shouldTraceSifReg(uint32_t reg)
        {
            switch (reg)
            {
            case 0x2u:
            case 0x4u:
            case 0x80000000u:
            case 0x80000001u:
            case 0x80000002u:
                return true;
            default:
                return false;
            }
        }

        struct SifStateInitializer
        {
            SifStateInitializer()
            {
                std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
                seedDefaultSifRegsLocked();
            }
        } g_sifStateInitializer;

        uint32_t allocateSifDmaTransferId()
        {
            std::lock_guard<std::mutex> lock(g_sifDmaTransferMutex);
            uint32_t id = g_nextSifDmaTransferId++;
            if (id == 0u)
            {
                id = g_nextSifDmaTransferId++;
            }
            return id;
        }

        uint32_t alignIopHeapSize(uint32_t size)
        {
            return (size + (kIopHeapAlign - 1u)) & ~(kIopHeapAlign - 1u);
        }

        uint32_t allocateSifHeapBlock(uint32_t requestSize)
        {
            const uint32_t alignedSize = alignIopHeapSize(requestSize);
            if (alignedSize == 0u)
            {
                return 0u;
            }

            std::lock_guard<std::mutex> lock(g_sifHeapMutex);
            uint32_t candidate = kIopHeapBase;
            for (const auto &[addr, size] : g_sifHeapAllocations)
            {
                if (candidate + alignedSize <= addr)
                {
                    break;
                }

                const uint32_t blockEnd = alignIopHeapSize(addr + size);
                if (blockEnd > candidate)
                {
                    candidate = blockEnd;
                }
            }

            if (candidate < kIopHeapBase || candidate + alignedSize > kIopHeapLimit)
            {
                return 0u;
            }

            g_sifHeapAllocations[candidate] = alignedSize;
            g_iopHeapNext = candidate + alignedSize;
            return candidate;
        }

        bool freeSifHeapBlock(uint32_t addr)
        {
            std::lock_guard<std::mutex> lock(g_sifHeapMutex);
            const auto it = g_sifHeapAllocations.find(addr);
            if (it == g_sifHeapAllocations.end())
            {
                return false;
            }

            g_sifHeapAllocations.erase(it);
            if (g_sifHeapAllocations.empty())
            {
                g_iopHeapNext = kIopHeapBase;
            }
            return true;
        }

        void resetSifHeapState()
        {
            std::lock_guard<std::mutex> lock(g_sifHeapMutex);
            g_sifHeapAllocations.clear();
            g_iopHeapNext = kIopHeapBase;
        }

        bool isCopyableGuestAddress(uint32_t addr)
        {
            if (addr >= PS2_SCRATCHPAD_BASE && addr < (PS2_SCRATCHPAD_BASE + PS2_SCRATCHPAD_SIZE))
            {
                return true;
            }

            if (addr < 0x20000000u)
            {
                return true;
            }

            if (addr >= 0x20000000u && addr < 0x40000000u)
            {
                return true;
            }

            if (addr >= 0x80000000u && addr < 0xC0000000u)
            {
                return true;
            }

            return false;
        }

        bool canCopyGuestByteRange(const uint8_t *rdram, uint32_t dstAddr, uint32_t srcAddr, uint32_t sizeBytes)
        {
            if (!rdram)
            {
                return false;
            }

            if (sizeBytes == 0u)
            {
                return true;
            }

            for (uint32_t i = 0u; i < sizeBytes; ++i)
            {
                const uint32_t srcByteAddr = srcAddr + i;
                const uint32_t dstByteAddr = dstAddr + i;

                if (!isCopyableGuestAddress(srcByteAddr) || !isCopyableGuestAddress(dstByteAddr))
                {
                    return false;
                }

                const uint8_t *src = getConstMemPtr(rdram, srcByteAddr);
                const uint8_t *dst = getConstMemPtr(rdram, dstByteAddr);
                if (!src || !dst)
                {
                    return false;
                }
            }

            return true;
        }

        bool canReadGuestByteRange(const uint8_t *rdram, uint32_t srcAddr, uint32_t sizeBytes)
        {
            if (!rdram)
            {
                return false;
            }

            if (sizeBytes == 0u)
            {
                return true;
            }

            for (uint32_t i = 0u; i < sizeBytes; ++i)
            {
                const uint32_t srcByteAddr = srcAddr + i;
                if (!isCopyableGuestAddress(srcByteAddr) || !getConstMemPtr(rdram, srcByteAddr))
                {
                    return false;
                }
            }

            return true;
        }

        void printSifDmaBytes(const uint8_t *rdram, const char *label, uint32_t addr, uint32_t size)
        {
            std::cout << ' ' << label << '=';
            const uint32_t count = std::min<uint32_t>(size, 64u);
            for (uint32_t i = 0u; i < count; ++i)
            {
                const uint8_t *ptr = getConstMemPtr(rdram, addr + i);
                if (!ptr)
                {
                    std::cout << " ??";
                    continue;
                }
                std::cout << ' ' << std::setw(2) << std::setfill('0') << static_cast<uint32_t>(*ptr);
            }
            std::cout << std::setfill(' ');
        }

        bool copyGuestByteRange(uint8_t *rdram, uint32_t dstAddr, uint32_t srcAddr, uint32_t sizeBytes)
        {
            if (!canCopyGuestByteRange(rdram, dstAddr, srcAddr, sizeBytes))
            {
                return false;
            }

            if (sizeBytes == 0u)
            {
                return true;
            }

            const uint64_t srcBegin = srcAddr;
            const uint64_t srcEnd = srcBegin + static_cast<uint64_t>(sizeBytes);
            const uint64_t dstBegin = dstAddr;
            const bool copyBackward = (dstBegin > srcBegin) && (dstBegin < srcEnd);

            if (copyBackward)
            {
                for (uint32_t i = sizeBytes; i > 0u; --i)
                {
                    const uint32_t index = i - 1u;
                    const uint8_t *src = getConstMemPtr(rdram, srcAddr + index);
                    uint8_t *dst = getMemPtr(rdram, dstAddr + index);
                    if (!src || !dst)
                    {
                        return false;
                    }
                    *dst = *src;
                }
                return true;
            }

            for (uint32_t i = 0; i < sizeBytes; ++i)
            {
                const uint8_t *src = getConstMemPtr(rdram, srcAddr + i);
                uint8_t *dst = getMemPtr(rdram, dstAddr + i);
                if (!src || !dst)
                {
                    return false;
                }
                *dst = *src;
            }
            return true;
        }

        bool readSifGuestU32(const uint8_t *rdram, uint32_t addr, uint32_t &out)
        {
            const uint8_t *ptr = getConstMemPtr(rdram, addr);
            if (!ptr)
            {
                return false;
            }
            std::memcpy(&out, ptr, sizeof(out));
            return true;
        }

        bool readSifGuestU8(const uint8_t *rdram, uint32_t addr, uint8_t &out)
        {
            const uint8_t *ptr = getConstMemPtr(rdram, addr);
            if (!ptr)
            {
                return false;
            }
            out = *ptr;
            return true;
        }

        bool writeSifGuestU32(uint8_t *rdram, uint32_t addr, uint32_t value)
        {
            uint8_t *ptr = getMemPtr(rdram, addr);
            if (!ptr)
            {
                return false;
            }
            std::memcpy(ptr, &value, sizeof(value));
            return true;
        }

        bool writeSifGuestU16(uint8_t *rdram, uint32_t addr, uint16_t value)
        {
            uint8_t *ptr = getMemPtr(rdram, addr);
            if (!ptr)
            {
                return false;
            }
            std::memcpy(ptr, &value, sizeof(value));
            return true;
        }

        bool writeSifGuestU8(uint8_t *rdram, uint32_t addr, uint8_t value)
        {
            uint8_t *ptr = getMemPtr(rdram, addr);
            if (!ptr)
            {
                return false;
            }
            *ptr = value;
            return true;
        }

        void clearSifGuestRange(uint8_t *rdram, uint32_t addr, uint32_t size)
        {
            if (size == 0u)
            {
                return;
            }

            for (uint32_t i = 0u; i < size; ++i)
            {
                if (uint8_t *ptr = getMemPtr(rdram, addr + i))
                {
                    *ptr = 0u;
                }
            }
        }

        bool isSifEnvEnabled(const char *name)
        {
            const char *value = std::getenv(name);
            if (!value || value[0] == '\0')
            {
                return false;
            }

            return std::strcmp(value, "0") != 0 &&
                   std::strcmp(value, "false") != 0 &&
                   std::strcmp(value, "FALSE") != 0 &&
                   std::strcmp(value, "off") != 0 &&
                   std::strcmp(value, "OFF") != 0;
        }

        bool traceKofxiIopRpcEnabled()
        {
            static const bool enabled = isSifEnvEnabled("PS2X_TRACE_KOFXI_IOP_RPC");
            return enabled;
        }

        bool traceSifRpcEnabled()
        {
            static const bool enabled = isSifEnvEnabled("PS2X_TRACE_SIF_RPC");
            return enabled;
        }

        bool sifPacketRpcEndCallbackEnabled()
        {
            const char *value = std::getenv("PS2X_SIF_PACKET_RPC_END_CALLBACK");
            if (!value || value[0] == '\0')
            {
                return true;
            }

            return std::strcmp(value, "0") != 0 &&
                   std::strcmp(value, "false") != 0 &&
                   std::strcmp(value, "FALSE") != 0 &&
                   std::strcmp(value, "off") != 0 &&
                   std::strcmp(value, "OFF") != 0;
        }

        bool traceSifPacketRpcEndCallbackEnabled()
        {
            static const bool enabled =
                traceSifRpcEnabled() || isSifEnvEnabled("PS2X_TRACE_SIF_PACKET_RPC_END_CALLBACK");
            return enabled;
        }

        bool traceSifDmaEnabled()
        {
            static const bool enabled = isSifEnvEnabled("PS2X_TRACE_SIF_DMA");
            return enabled;
        }

        bool sifInvokePacketCallback(uint8_t *rdram,
                                     R5900Context *ctx,
                                     PS2Runtime *runtime,
                                     uint32_t funcAddr,
                                     uint32_t a0)
        {
            if (!rdram || !ctx || !runtime || funcAddr == 0u || !runtime->hasFunction(funcAddr))
            {
                return false;
            }

            constexpr uint32_t kCallbackStackSize = 0x4000u;
            constexpr uint32_t kCallbackReturnSentinel = 0x00FFF000u;
            constexpr uint32_t kCallbackMaxSteps = 0x8000u;

            R5900Context tmp = *ctx;
            SET_GPR_U32(&tmp, 4, a0);
            SET_GPR_U32(&tmp, 5, 0u);
            SET_GPR_U32(&tmp, 6, 0u);
            SET_GPR_U32(&tmp, 7, 0u);

            thread_local uint32_t s_callbackStackBase = 0u;
            thread_local uint32_t s_callbackStackTop = 0u;
            if (s_callbackStackTop == 0u)
            {
                const uint32_t stackBase = runtime->guestMalloc(kCallbackStackSize, 16u);
                if (stackBase != 0u)
                {
                    s_callbackStackBase = stackBase;
                    s_callbackStackTop = (stackBase + kCallbackStackSize) & ~0xFu;
                }
            }
            if (s_callbackStackTop != 0u)
            {
                SET_GPR_U32(&tmp, 29, s_callbackStackTop);
            }
            (void)s_callbackStackBase;

            SET_GPR_U32(&tmp, 31, kCallbackReturnSentinel);
            tmp.pc = funcAddr;

            uint32_t steps = 0u;
            uint32_t lastPc = 0xFFFFFFFFu;
            uint32_t samePcCount = 0u;
            while (tmp.pc != 0u &&
                   tmp.pc != kCallbackReturnSentinel &&
                   runtime->hasFunction(tmp.pc) &&
                   steps < kCallbackMaxSteps)
            {
                const uint32_t pc = tmp.pc;
                if (pc == lastPc)
                {
                    ++samePcCount;
                    if (samePcCount > 0x2000u)
                    {
                        break;
                    }
                }
                else
                {
                    lastPc = pc;
                    samePcCount = 0u;
                }

                PS2Runtime::RecompiledFunction func = runtime->lookupFunction(pc);
                {
                    PS2Runtime::GuestExecutionScope guestExecution(runtime);
                    func(rdram, &tmp, runtime);
                }
                ++steps;
            }

            const bool returned = (tmp.pc == kCallbackReturnSentinel);
            if (!returned && traceSifPacketRpcEndCallbackEnabled())
            {
                static std::atomic<uint32_t> s_callbackFailureLogCount{0u};
                const uint32_t logIndex = s_callbackFailureLogCount.fetch_add(1u, std::memory_order_relaxed);
                if (logIndex < 32u)
                {
                    auto flags = std::cerr.flags();
                    std::cerr << "[SIF_CMD_RPC_CALL:end-callback-failed]"
                              << " func=0x" << std::hex << funcAddr
                              << " exitPc=0x" << tmp.pc
                              << " ra=0x" << getRegU32(&tmp, 31)
                              << std::dec
                              << " steps=" << steps
                              << " samePc=" << samePcCount
                              << std::endl;
                    std::cerr.flags(flags);
                }
            }

            return returned;
        }

        const char *kofxiUrpcCommandName(uint32_t command)
        {
            switch (command)
            {
            case 0u:
                return "SJX_CREATE";
            case 1u:
                return "SJX_DESTROY";
            case 2u:
                return "SJX_RESET";
            case 3u:
                return "SJX_REINIT";
            case 8u:
                return "PS2RNA_CREATE";
            case 9u:
                return "PS2RNA_DESTROY";
            case 10u:
                return "PS2RNA_REINIT";
            case 32u:
                return "SJRMT_RBF_CREATE";
            case 33u:
                return "SJRMT_MEM_CREATE";
            case 34u:
                return "SJRMT_UNI_CREATE";
            case 35u:
                return "SJRMT_DESTROY";
            case 36u:
                return "SJRMT_GET_UUID";
            case 37u:
                return "SJRMT_RESET";
            case 38u:
                return "SJRMT_GET_CHUNK";
            case 39u:
                return "SJRMT_UNGET_CHUNK";
            case 40u:
                return "SJRMT_PUT_CHUNK";
            case 41u:
                return "SJRMT_GET_NUM_DATA";
            case 42u:
                return "SJRMT_IS_GET_CHUNK";
            case 43u:
                return "SJRMT_INIT";
            case 44u:
                return "SJRMT_FINISH";
            default:
                return "UNKNOWN";
            }
        }

        void appendSifWordList(std::ostream &os,
                               const char *label,
                               const uint8_t *rdram,
                               uint32_t addr,
                               uint32_t byteSize,
                               uint32_t maxWords)
        {
            os << " " << label << "=0x" << std::hex << addr << "[";
            const uint32_t wordCount = std::min(byteSize / static_cast<uint32_t>(sizeof(uint32_t)), maxWords);
            for (uint32_t i = 0u; i < wordCount; ++i)
            {
                uint32_t value = 0u;
                if (i != 0u)
                {
                    os << ",";
                }

                if (readSifGuestU32(rdram, addr + (i * static_cast<uint32_t>(sizeof(uint32_t))), value))
                {
                    os << "0x" << value;
                }
                else
                {
                    os << "unreadable";
                }
            }
            os << "]";
        }

        void appendHostWordList(std::ostream &os, const char *label, const uint32_t *words, uint32_t wordCount)
        {
            os << " " << label << "=[";
            for (uint32_t i = 0u; i < wordCount; ++i)
            {
                if (i != 0u)
                {
                    os << ",";
                }
                os << "0x" << std::hex << words[i];
            }
            os << "]";
        }

        void appendKofxiSjrmtState(std::ostream &os, uint32_t handle)
        {
            if (handle == 0u)
            {
                return;
            }

            std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
            const auto it = g_kofxiSjrmtByHandle.find(handle);
            if (it == g_kofxiSjrmtByHandle.end())
            {
                return;
            }

            const KofxiSjrmtState &state = it->second;
            os << " sjrmt{handle=0x" << std::hex << state.handle
               << " mode=0x" << state.mode
               << " wk=0x" << state.wkAddr
               << " size=0x" << state.wkSize
               << " read=0x" << state.readPos
               << " write=0x" << state.writePos
               << " room=0x" << state.roomBytes
               << " data=0x" << state.dataBytes
               << "}";
        }

        void appendKofxiSjxState(std::ostream &os, uint32_t handle)
        {
            if (handle == 0u)
            {
                return;
            }

            std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
            const auto it = g_kofxiSjxByHandle.find(handle);
            if (it == g_kofxiSjxByHandle.end())
            {
                return;
            }

            const KofxiSjxState &state = it->second;
            os << " sjx{handle=0x" << std::hex << state.handle
               << " src=0x" << state.srcSjHandle
               << " dst=0x" << state.dstSjHandle
               << " line=0x" << state.line
               << " obj=0x" << state.eeObjAddr
               << " xid=0x" << state.xid
               << "}";
        }

        void appendKofxiPs2RnaState(std::ostream &os, uint32_t handle)
        {
            if (handle == 0u)
            {
                return;
            }

            std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
            const auto it = g_kofxiPs2RnaByHandle.find(handle);
            if (it == g_kofxiPs2RnaByHandle.end())
            {
                return;
            }

            const KofxiPs2RnaState &state = it->second;
            os << " ps2rna{handle=0x" << std::hex << state.handle
               << " maxCh=0x" << state.maxChannels
               << " sj0=0x" << state.sjHandle0
               << " sj1=0x" << state.sjHandle1
               << " channels=0x" << state.channelCount
               << " play=" << std::dec << (state.playEnabled ? 1 : 0)
               << "}";
        }

        bool releaseSifPacketRequestSlot(uint8_t *rdram, uint32_t packetAddr)
        {
            uint32_t state = 0u;
            if (!readSifGuestU32(rdram, packetAddr + 0x10u, state))
            {
                return false;
            }

            const bool wroteState = writeSifGuestU32(rdram, packetAddr + 0x10u, state & ~1u);
            const bool wroteCookie = writeSifGuestU32(rdram, packetAddr + 0x18u, 0u);
            return wroteState && wroteCookie;
        }

        bool signalSifCompletionSema(uint8_t *rdram, PS2Runtime *runtime, uint32_t semaId)
        {
            if (semaId == 0u || semaId == 0xFFFFFFFFu)
            {
                return false;
            }

            R5900Context signalCtx{};
            SET_GPR_U32(&signalCtx, 4, semaId);
            ps2_syscalls::SignalSema(rdram, &signalCtx, runtime);
            return static_cast<int32_t>(getRegU32(&signalCtx, 2)) == 0;
        }

        uint32_t normalizePadRpcCommand(uint32_t command)
        {
            if ((command & 0x80000000u) != 0u && (command & 0x00000100u) != 0u)
            {
                return (command & 0xFFu) + 1u;
            }
            return command;
        }

        bool isPadRpcSid(uint32_t sid)
        {
            switch (sid)
            {
            case 0x80000100u:
            case 0x80000101u:
            case 0x8000010Fu:
            case 0x8000011Fu:
                return true;
            default:
                return false;
            }
        }

        bool lookupSifPacketClient(uint32_t clientAddr, SifPacketRpcClient &out)
        {
            std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
            const auto it = g_sifPacketRpcClients.find(clientAddr);
            if (it == g_sifPacketRpcClients.end())
            {
                return false;
            }
            out = it->second;
            return true;
        }

        uint32_t lookupSifPacketServerSid(uint32_t serverAddr)
        {
            if (serverAddr == 0u)
            {
                return 0u;
            }

            {
                std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
                const auto it = g_sifPacketSidByServer.find(serverAddr);
                if (it != g_sifPacketSidByServer.end())
                {
                    return it->second;
                }
            }

            return 0u;
        }

        uint32_t readSifServerSidFromGuest(const uint8_t *rdram, uint32_t serverAddr)
        {
            if (serverAddr == 0u)
            {
                return 0u;
            }

            uint32_t sid = lookupSifPacketServerSid(serverAddr);
            if (sid != 0u)
            {
                return sid;
            }

            (void)readSifGuestU32(rdram, serverAddr, sid);
            return sid;
        }

        bool sifEnvEnabled(const char *name)
        {
            const char *value = std::getenv(name);
            if (!value || value[0] == '\0')
            {
                return false;
            }
            return std::strcmp(value, "0") != 0 &&
                   std::strcmp(value, "false") != 0 &&
                   std::strcmp(value, "FALSE") != 0 &&
                   std::strcmp(value, "off") != 0 &&
                   std::strcmp(value, "OFF") != 0;
        }

        std::string trimSifToken(const std::string &value)
        {
            size_t begin = 0u;
            while (begin < value.size() && std::isspace(static_cast<unsigned char>(value[begin])))
                ++begin;
            size_t end = value.size();
            while (end > begin && std::isspace(static_cast<unsigned char>(value[end - 1u])))
                --end;
            return value.substr(begin, end - begin);
        }

        std::string lowerSifToken(std::string value)
        {
            value = trimSifToken(value);
            std::transform(value.begin(), value.end(), value.begin(),
                           [](unsigned char ch)
                           { return static_cast<char>(std::tolower(ch)); });
            value.erase(std::remove_if(value.begin(), value.end(),
                                       [](char ch)
                                       { return ch == '_' || ch == '-'; }),
                        value.end());
            return value;
        }

        bool parseSifUnsigned(const std::string &token, uint64_t &out)
        {
            const std::string trimmed = trimSifToken(token);
            if (trimmed.empty())
                return false;
            char *end = nullptr;
            const unsigned long long parsed = std::strtoull(trimmed.c_str(), &end, 0);
            if (end == trimmed.c_str())
                return false;
            out = static_cast<uint64_t>(parsed);
            return true;
        }

        bool parseSifDouble(const std::string &token, double &out)
        {
            const std::string trimmed = trimSifToken(token);
            if (trimmed.empty())
                return false;
            char *end = nullptr;
            const double parsed = std::strtod(trimmed.c_str(), &end);
            if (end == trimmed.c_str())
                return false;
            out = parsed;
            return true;
        }

        bool parseSifPadTimeToken(const std::string &rawToken, bool &timed, double &seconds, uint64_t &frames)
        {
            std::string token = trimSifToken(rawToken);
            if (token.empty())
                return false;

            bool forceTime = false;
            bool forceFrame = false;
            if (token[0] == 't' || token[0] == 'T')
            {
                forceTime = true;
                token.erase(token.begin());
            }
            else if (token[0] == 'f' || token[0] == 'F' || token[0] == 'r' || token[0] == 'R')
            {
                forceFrame = true;
                token.erase(token.begin());
            }

            if (!token.empty() && (token.back() == 's' || token.back() == 'S'))
            {
                forceTime = true;
                token.pop_back();
            }

            if (forceTime || (!forceFrame && token.find('.') != std::string::npos))
            {
                timed = true;
                return parseSifDouble(token, seconds);
            }

            timed = false;
            return parseSifUnsigned(token, frames);
        }

        bool parseSifPadButtonToken(const std::string &rawToken, uint16_t &mask)
        {
            const std::string token = lowerSifToken(rawToken);
            if (token.empty() || token == "none" || token == "release")
                return true;

            if (token.rfind("0x", 0) == 0)
            {
                uint64_t parsed = 0u;
                if (!parseSifUnsigned(token, parsed))
                    return false;
                mask = static_cast<uint16_t>(mask | static_cast<uint16_t>(parsed & 0xFFFFu));
                return true;
            }

            uint16_t button = 0u;
            if (token == "select")
                button = 1u << 0;
            else if (token == "l3")
                button = 1u << 1;
            else if (token == "r3")
                button = 1u << 2;
            else if (token == "start")
                button = 1u << 3;
            else if (token == "up" || token == "dpadup")
                button = 1u << 4;
            else if (token == "right" || token == "dpadright")
                button = 1u << 5;
            else if (token == "down" || token == "dpaddown")
                button = 1u << 6;
            else if (token == "left" || token == "dpadleft")
                button = 1u << 7;
            else if (token == "l2")
                button = 1u << 8;
            else if (token == "r2")
                button = 1u << 9;
            else if (token == "l1")
                button = 1u << 10;
            else if (token == "r1")
                button = 1u << 11;
            else if (token == "triangle")
                button = 1u << 12;
            else if (token == "circle" || token == "o" || token == "confirm" || token == "maru")
                button = 1u << 13;
            else if (token == "cross" || token == "x" || token == "cancel" || token == "batsu")
                button = 1u << 14;
            else if (token == "square")
                button = 1u << 15;
            else
                return false;

            mask = static_cast<uint16_t>(mask | button);
            return true;
        }

        bool parseSifPadButtonList(std::string list, uint16_t &mask)
        {
            std::replace(list.begin(), list.end(), '|', '+');
            std::replace(list.begin(), list.end(), '&', '+');
            size_t begin = 0u;
            while (begin <= list.size())
            {
                const size_t plus = list.find('+', begin);
                if (!parseSifPadButtonToken(list.substr(
                        begin, plus == std::string::npos ? std::string::npos : plus - begin),
                                            mask))
                {
                    return false;
                }
                if (plus == std::string::npos)
                    break;
                begin = plus + 1u;
            }
            return true;
        }

        uint16_t computeSifPadScriptPressedMask(uint64_t frameIndex)
        {
            const char *scriptEnv = std::getenv("PS2X_PAD_SCRIPT");
            if (!scriptEnv || scriptEnv[0] == '\0')
            {
                return 0u;
            }

            if (g_sifPadScriptStart.time_since_epoch().count() == 0)
            {
                g_sifPadScriptStart = std::chrono::steady_clock::now();
            }

            const double elapsedSeconds =
                std::chrono::duration<double>(std::chrono::steady_clock::now() - g_sifPadScriptStart).count();
            const std::string script(scriptEnv);
            uint16_t pressedMask = 0u;
            size_t begin = 0u;
            while (begin <= script.size())
            {
                const size_t semi = script.find(';', begin);
                const std::string eventSpec = trimSifToken(script.substr(
                    begin, semi == std::string::npos ? std::string::npos : semi - begin));
                if (!eventSpec.empty())
                {
                    std::array<std::string, 3> fields{};
                    size_t fieldCount = 0u;
                    size_t fieldBegin = 0u;
                    while (fieldBegin <= eventSpec.size() && fieldCount < fields.size())
                    {
                        const size_t colon = eventSpec.find(':', fieldBegin);
                        fields[fieldCount++] = trimSifToken(eventSpec.substr(
                            fieldBegin, colon == std::string::npos ? std::string::npos : colon - fieldBegin));
                        if (colon == std::string::npos)
                            break;
                        fieldBegin = colon + 1u;
                    }

                    bool timed = false;
                    uint64_t startFrame = 0u;
                    double startSeconds = 0.0;
                    uint16_t eventMask = 0u;
                    if (fieldCount >= 2u &&
                        parseSifPadTimeToken(fields[0], timed, startSeconds, startFrame) &&
                        parseSifPadButtonList(fields[1], eventMask))
                    {
                        bool active = false;
                        if (timed)
                        {
                            double durationSeconds = 0.25;
                            if (fieldCount >= 3u)
                            {
                                bool durationTimed = true;
                                uint64_t durationFrames = 0u;
                                double parsedDuration = 0.0;
                                if (parseSifPadTimeToken(fields[2], durationTimed, parsedDuration, durationFrames))
                                {
                                    durationSeconds = durationTimed
                                                          ? parsedDuration
                                                          : static_cast<double>(durationFrames) / 60.0;
                                }
                            }
                            durationSeconds = std::clamp(durationSeconds, 0.001, 60.0);
                            active = elapsedSeconds >= startSeconds &&
                                     elapsedSeconds < startSeconds + durationSeconds;
                        }
                        else
                        {
                            uint64_t durationFrames = 4u;
                            if (fieldCount >= 3u)
                            {
                                bool durationTimed = false;
                                uint64_t parsedFrames = 0u;
                                double durationSeconds = 0.0;
                                if (parseSifPadTimeToken(fields[2], durationTimed, durationSeconds, parsedFrames))
                                {
                                    durationFrames = durationTimed
                                                         ? std::max<uint64_t>(1u, static_cast<uint64_t>(std::llround(durationSeconds * 60.0)))
                                                         : parsedFrames;
                                }
                            }
                            durationFrames = std::clamp<uint64_t>(durationFrames, 1u, 1000000u);
                            active = frameIndex >= startFrame &&
                                     frameIndex < startFrame + durationFrames;
                        }

                        if (active)
                        {
                            pressedMask = static_cast<uint16_t>(pressedMask | eventMask);
                        }
                    }
                }

                if (semi == std::string::npos)
                    break;
                begin = semi + 1u;
            }

            return pressedMask;
        }

        void writeStablePadFrame(uint8_t *rdram, uint32_t frameAddr, uint32_t frameCounter, uint16_t buttons = 0xFFFFu)
        {
            clearSifGuestRange(rdram, frameAddr, 0x80u);

            // padButtonStatus plus ps2sdk pad_data_new metadata.
            (void)writeSifGuestU8(rdram, frameAddr + 0x00u, 0u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x01u, 0x73u);
            (void)writeSifGuestU16(rdram, frameAddr + 0x02u, buttons);
            (void)writeSifGuestU8(rdram, frameAddr + 0x04u, 0x80u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x05u, 0x80u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x06u, 0x80u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x07u, 0x80u);

            (void)writeSifGuestU16(rdram, frameAddr + 0x50u, 0x0004u);
            (void)writeSifGuestU16(rdram, frameAddr + 0x52u, 0x0007u);
            (void)writeSifGuestU32(rdram, frameAddr + 0x58u, frameCounter);
            (void)writeSifGuestU32(rdram, frameAddr + 0x60u, 0x20u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x64u, 2u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x65u, 0x73u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x66u, 3u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x67u, 1u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x68u, 2u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x69u, 1u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x6Au, 2u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x6Du, 1u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x6Eu, 3u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x6Fu, 8u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x70u, 6u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x71u, 0u);
            (void)writeSifGuestU8(rdram, frameAddr + 0x72u, 1u);
        }

        void seedStablePadArea(uint8_t *rdram, uint32_t padArea)
        {
            if (padArea == 0u)
            {
                return;
            }

            writeStablePadFrame(rdram, padArea, 1u);
            writeStablePadFrame(rdram, padArea + 0x80u, 2u);
        }

        void rememberSifPadArea(uint32_t port, uint32_t padArea)
        {
            if (port >= g_sifPadAreas.size() || padArea == 0u)
            {
                return;
            }
            g_sifPadAreas[port] = padArea;
        }

        bool handleSifPacketPadRpc(
            uint8_t *rdram,
            uint32_t sid,
            uint32_t rpcNumber,
            uint32_t recvBuf,
            uint32_t recvSize,
            uint32_t &commandOut)
        {
            commandOut = 0u;
            if (!isPadRpcSid(sid) || rpcNumber != 1u || recvBuf == 0u || recvSize < sizeof(uint32_t))
            {
                return false;
            }

            uint32_t rawCommand = 0u;
            if (!readSifGuestU32(rdram, recvBuf, rawCommand))
            {
                return false;
            }
            const uint32_t command = normalizePadRpcCommand(rawCommand);
            commandOut = command;

            uint32_t port = 0u;
            uint32_t slot = 0u;
            uint32_t arg3 = 0u;
            uint32_t arg4 = 0u;
            (void)readSifGuestU32(rdram, recvBuf + 0x04u, port);
            (void)readSifGuestU32(rdram, recvBuf + 0x08u, slot);
            (void)readSifGuestU32(rdram, recvBuf + 0x0Cu, arg3);
            (void)readSifGuestU32(rdram, recvBuf + 0x10u, arg4);

            switch (command)
            {
            case 0x01u: // PAD_RPCCMD_OPEN
                seedStablePadArea(rdram, arg4);
                rememberSifPadArea(port, arg4);
                (void)writeSifGuestU32(rdram, recvBuf + 0x0Cu, 1u);
                (void)writeSifGuestU32(rdram, recvBuf + 0x14u, arg4);
                return true;

            case 0x05u: // PAD_RPCCMD_INFO_MODE
            {
                uint32_t value = 0u;
                if (arg3 == 1u) // PAD_MODECURID
                {
                    value = 7u;
                }
                else if (arg3 == 3u) // PAD_MODECUROFFS
                {
                    value = 1u;
                }
                else if (arg3 == 4u) // PAD_MODETABLE
                {
                    value = (arg4 == 0xFFFFFFFFu) ? 2u : ((arg4 == 0u) ? 4u : ((arg4 == 1u) ? 7u : 0u));
                }
                (void)writeSifGuestU32(rdram, recvBuf + 0x14u, value);
                return true;
            }

            case 0x09u: // PAD_RPCCMD_GET_BTNMASK
                (void)writeSifGuestU32(rdram, recvBuf + 0x0Cu, 0xFFFFu);
                return true;

            case 0x0Cu: // PAD_RPCCMD_GET_PORTMAX
                (void)writeSifGuestU32(rdram, recvBuf + 0x0Cu, 2u);
                return true;

            case 0x0Du: // PAD_RPCCMD_GET_SLOTMAX
                (void)writeSifGuestU32(rdram, recvBuf + 0x0Cu, 1u);
                return true;

            case 0x12u: // PAD_RPCCMD_GET_MODVER
                (void)writeSifGuestU32(rdram, recvBuf + 0x0Cu, 0x1400u);
                return true;

            case 0x06u: // PAD_RPCCMD_SET_MMODE
            case 0x07u: // PAD_RPCCMD_SET_ACTDIR
            case 0x08u: // PAD_RPCCMD_SET_ACTALIGN
            case 0x0Au: // PAD_RPCCMD_SET_BTNINFO
            case 0x0Bu: // PAD_RPCCMD_SET_VREF
            case 0x0Eu: // PAD_RPCCMD_CLOSE
            case 0x0Fu: // PAD_RPCCMD_END
            case 0x10u: // PAD_RPCCMD_INIT
                (void)writeSifGuestU32(rdram, recvBuf + 0x0Cu, 1u);
                (void)writeSifGuestU32(rdram, recvBuf + 0x14u, 1u);
                return true;

            default:
                (void)port;
                (void)slot;
                (void)writeSifGuestU32(rdram, recvBuf + 0x0Cu, 1u);
                (void)writeSifGuestU32(rdram, recvBuf + 0x14u, 1u);
                return true;
            }
        }

        bool handleSifPacketIopHeapRpc(
            uint8_t *rdram,
            uint32_t sid,
            uint32_t rpcNumber,
            uint32_t sendPayloadAddr,
            uint32_t sendPayloadSize,
            uint32_t recvBuf,
            uint32_t recvSize,
            const char *&responseName)
        {
            constexpr uint32_t kIopHeapSid = 0x80000003u;
            if (sid != kIopHeapSid || recvBuf == 0u || recvSize < sizeof(uint32_t))
            {
                return false;
            }

            uint32_t requestValue = 0u;
            if (sendPayloadAddr != 0u && sendPayloadSize >= sizeof(uint32_t))
            {
                (void)readSifGuestU32(rdram, sendPayloadAddr, requestValue);
            }

            switch (rpcNumber)
            {
            case 1u: // AllocIopHeap(size)
            {
                const uint32_t iopAddr = allocateSifHeapBlock(requestValue);
                const bool wrote = writeSifGuestU32(rdram, recvBuf, iopAddr);
                responseName = wrote ? "iopheap-alloc" : "zero";
                return wrote;
            }

            case 2u: // FreeIopHeap(addr)
            {
                const int32_t result = freeSifHeapBlock(requestValue) ? 0 : -1;
                const bool wrote = writeSifGuestU32(rdram, recvBuf, static_cast<uint32_t>(result));
                responseName = wrote ? "iopheap-free" : "zero";
                return wrote;
            }

            default:
                return false;
            }
        }

        uint32_t allocateKofxiIopServiceHandle()
        {
            uint32_t handle = g_nextKofxiIopServiceHandle.fetch_add(1u, std::memory_order_relaxed);
            if (handle == 0u)
            {
                handle = g_nextKofxiIopServiceHandle.fetch_add(1u, std::memory_order_relaxed);
            }
            return handle;
        }

        uint32_t normalizeKofxiSjrmtCapacity(uint32_t size)
        {
            return size != 0u ? size : 0x4000u;
        }

        bool writeKofxiIopResponseWords(
            uint8_t *rdram,
            uint32_t recvBuf,
            uint32_t recvSize,
            const uint32_t *words,
            uint32_t wordCount)
        {
            if (recvBuf == 0u || recvSize == 0u)
            {
                return true;
            }

            const uint32_t recvWordCapacity = recvSize / sizeof(uint32_t);
            const uint32_t wordsToWrite = std::min(wordCount, recvWordCapacity);
            for (uint32_t i = 0u; i < wordsToWrite; ++i)
            {
                if (!writeSifGuestU32(rdram, recvBuf + (i * sizeof(uint32_t)), words[i]))
                {
                    return false;
                }
            }

            const uint32_t bytesWritten = wordsToWrite * static_cast<uint32_t>(sizeof(uint32_t));
            if (recvSize > bytesWritten)
            {
                clearSifGuestRange(rdram, recvBuf + bytesWritten, recvSize - bytesWritten);
            }
            return true;
        }

        void syncGenericDtxSjrmtObjectStateFromKofxi(const KofxiSjrmtState &state)
        {
            ps2_syscalls::syncDtxSjrmtObjectState(state.handle,
                                                  state.readPos,
                                                  state.writePos,
                                                  state.roomBytes,
                                                  state.dataBytes);
        }

        constexpr uint32_t kKofxiDiscSid = 0x8000059Cu;
        constexpr uint32_t kKofxiDiscRpcClientAddr = 0x0035AF90u;
        constexpr uint32_t kKofxiDiscRpcEndFunc = 0x0011B0D0u;
        constexpr uint32_t kKofxiDiscRpcEndParam = 0x0035AEC0u;

        bool isKofxiDiscReadPacketClient(
            const uint8_t *rdram,
            uint32_t clientAddr,
            uint32_t rpcNumber,
            uint32_t sendPayloadAddr,
            uint32_t sendPayloadSize,
            uint32_t recvBuf,
            uint32_t recvSize,
            uint32_t endFunc,
            uint32_t endParam)
        {
            if (clientAddr != kKofxiDiscRpcClientAddr ||
                rpcNumber != 1u ||
                sendPayloadAddr == 0u ||
                sendPayloadSize < 0x10u)
            {
                return false;
            }

            if ((endFunc != 0u && endFunc != kKofxiDiscRpcEndFunc) ||
                (endParam != 0u && endParam != kKofxiDiscRpcEndParam))
            {
                return false;
            }

            uint32_t sectors = 0u;
            uint32_t targetAddr = 0u;
            uint8_t mode2 = 0u;
            if (!readSifGuestU32(rdram, sendPayloadAddr + 0x04u, sectors) ||
                !readSifGuestU32(rdram, sendPayloadAddr + 0x08u, targetAddr) ||
                !readSifGuestU8(rdram, sendPayloadAddr + 0x0Eu, mode2))
            {
                return false;
            }

            const uint32_t targetPhys = targetAddr & PS2_RAM_MASK;
            return sectors <= 0x1000u &&
                   targetPhys < PS2_RAM_SIZE &&
                   mode2 <= 2u;
        }

        bool handleSifPacketKofxiDiscRpc(
            uint8_t *rdram,
            uint32_t sid,
            uint32_t rpcNumber,
            uint32_t sendPayloadAddr,
            uint32_t sendPayloadSize,
            uint32_t recvBuf,
            uint32_t recvSize,
            const char *&responseName)
        {
            constexpr uint32_t kCdSectorBytes = 0x800u;
            if (sid != kKofxiDiscSid)
            {
                return false;
            }

            if (rpcNumber == 4u)
            {
                bool wrote = true;
                if (recvBuf != 0u && recvSize >= sizeof(uint32_t))
                {
                    wrote = writeSifGuestU32(rdram, recvBuf, 0u);
                }
                responseName = wrote ? "kofxi-disc-submit" : "zero";
                return wrote;
            }

            if (rpcNumber != 1u || sendPayloadAddr == 0u || sendPayloadSize < 0x10u)
            {
                return false;
            }

            uint32_t lbn = 0u;
            uint32_t sectors = 0u;
            uint32_t targetAddr = 0u;
            uint8_t mode0 = 0u;
            uint8_t mode1 = 0u;
            uint8_t mode2 = 0u;
            if (!readSifGuestU32(rdram, sendPayloadAddr + 0x00u, lbn) ||
                !readSifGuestU32(rdram, sendPayloadAddr + 0x04u, sectors) ||
                !readSifGuestU32(rdram, sendPayloadAddr + 0x08u, targetAddr) ||
                !readSifGuestU8(rdram, sendPayloadAddr + 0x0Cu, mode0) ||
                !readSifGuestU8(rdram, sendPayloadAddr + 0x0Du, mode1) ||
                !readSifGuestU8(rdram, sendPayloadAddr + 0x0Eu, mode2))
            {
                responseName = "zero";
                return false;
            }

            const uint32_t bytesPerSector = (mode2 == 1u) ? 0x918u : ((mode2 == 2u) ? 0x924u : kCdSectorBytes);
            const uint64_t requestedBytes64 = static_cast<uint64_t>(sectors) * static_cast<uint64_t>(bytesPerSector);
            bool ok = false;
            const char *resultName = "kofxi-disc-read-fail";
            const uint32_t targetPhys = targetAddr & PS2_RAM_MASK;

            if (mode2 != 0u)
            {
                resultName = "kofxi-disc-read-mode";
            }
            else if (sectors == 0u)
            {
                ok = true;
                resultName = "kofxi-disc-read-empty";
            }
            else if (requestedBytes64 > static_cast<uint64_t>(PS2_RAM_SIZE))
            {
                resultName = "kofxi-disc-read-size";
            }
            else
            {
                const uint32_t requestedBytes = static_cast<uint32_t>(requestedBytes64);
                const bool targetFits =
                    targetPhys < PS2_RAM_SIZE &&
                    requestedBytes <= (PS2_RAM_SIZE - targetPhys);
                uint8_t *dst = targetFits ? (rdram + targetPhys) : nullptr;
                if (dst != nullptr)
                {
                    ok = readCdSectors(lbn, sectors, dst, requestedBytes);
                    resultName = ok ? "kofxi-disc-read" : "kofxi-disc-read-fail";
                }
                else
                {
                    resultName = "kofxi-disc-read-target";
                }
            }

            bool wrote = true;
            if (recvBuf != 0u && recvSize >= sizeof(uint32_t))
            {
                wrote = writeSifGuestU32(rdram, recvBuf, ok ? 0u : 0xFFFFFFFFu);
            }
            responseName = (ok && wrote) ? "kofxi-disc-read" : resultName;

            if (traceKofxiIopRpcEnabled())
            {
                static std::atomic<uint32_t> s_discRpcTraceCount{0u};
                const uint32_t traceIndex = s_discRpcTraceCount.fetch_add(1u, std::memory_order_relaxed);
                if (traceIndex < 512u)
                {
                    auto flags = std::cerr.flags();
                    std::cerr << "[kofxi:disc-rpc] sid=0x" << std::hex << sid
                              << " rpc=0x" << rpcNumber
                              << " name=" << responseName
                              << " sendSize=0x" << sendPayloadSize
                              << " recv=0x" << recvBuf
                              << " recvSize=0x" << recvSize
                              << " lbn=0x" << lbn
                              << " sectors=0x" << sectors
                              << " target=0x" << targetAddr
                              << " phys=0x" << targetPhys
                              << " mode=[" << static_cast<uint32_t>(mode0)
                              << "," << static_cast<uint32_t>(mode1)
                              << "," << static_cast<uint32_t>(mode2) << "]"
                              << " bytes=0x" << requestedBytes64
                              << " ok=" << std::dec << (ok ? 1 : 0)
                              << " wrote=" << (wrote ? 1 : 0);
                    appendSifWordList(std::cerr, "send", rdram, sendPayloadAddr, sendPayloadSize, 4u);
                    if (ok && requestedBytes64 != 0u)
                    {
                        appendSifWordList(std::cerr, "dst", rdram, targetAddr, 0x10u, 4u);
                    }
                    std::cerr << std::endl;
                    std::cerr.flags(flags);
                }
            }

            return true;
        }

        bool handleSifPacketKofxiIopServiceRpc(
            uint8_t *rdram,
            uint32_t sid,
            uint32_t rpcNumber,
            uint32_t sendPayloadAddr,
            uint32_t sendPayloadSize,
            uint32_t recvBuf,
            uint32_t recvSize,
            const char *&responseName)
        {
            constexpr uint32_t kKofxiIopServiceSid = 0x90000200u;
            if (sid != kKofxiIopServiceSid)
            {
                return false;
            }

            if (rpcNumber == 2u)
            {
                if (recvBuf == 0u || recvSize < sizeof(uint32_t))
                {
                    return false;
                }

                uint32_t iopAddr = 0u;
                uint32_t size = 0u;
                uint32_t dtxId = 0u;
                uint32_t eeWorkAddr = 0u;
                if (sendPayloadAddr != 0u && sendPayloadSize >= 0x10u)
                {
                    (void)readSifGuestU32(rdram, sendPayloadAddr + 0x00u, dtxId);
                    (void)readSifGuestU32(rdram, sendPayloadAddr + 0x04u, eeWorkAddr);
                    (void)readSifGuestU32(rdram, sendPayloadAddr + 0x08u, iopAddr);
                    (void)readSifGuestU32(rdram, sendPayloadAddr + 0x0Cu, size);
                }

                const uint32_t handle = (iopAddr != 0u && size != 0u) ? allocateKofxiIopServiceHandle() : 0u;
                if (handle != 0u && eeWorkAddr != 0u)
                {
                    (void)ps2_syscalls::registerDtxSifTransfer(rdram, dtxId, eeWorkAddr, iopAddr, size, handle);
                }
                const bool wrote = writeSifGuestU32(rdram, recvBuf, handle);
                responseName = wrote ? ((eeWorkAddr != 0u) ? "kofxi-dtx-create" : "kofxi-iop-create") : "zero";
                if (traceKofxiIopRpcEnabled())
                {
                    static std::atomic<uint32_t> s_iopCreateTraceCount{0u};
                    const uint32_t traceIndex = s_iopCreateTraceCount.fetch_add(1u, std::memory_order_relaxed);
                    if (traceIndex < 256u)
                    {
                        auto flags = std::cerr.flags();
                        std::cerr << "[kofxi:iop-rpc] sid=0x" << std::hex << sid
                                  << " rpc=0x" << rpcNumber
                                  << " name=" << responseName
                                  << " sendSize=0x" << sendPayloadSize
                                  << " recv=0x" << recvBuf
                                  << " recvSize=0x" << recvSize
                                  << " dtxId=0x" << dtxId
                                  << " eeWork=0x" << eeWorkAddr
                                  << " iopAddr=0x" << iopAddr
                                  << " size=0x" << size
                                  << " wrote=" << std::dec << (wrote ? 1 : 0);
                        appendSifWordList(std::cerr, "send", rdram, sendPayloadAddr, sendPayloadSize, 4u);
                        std::cerr << " out=[0x" << std::hex << handle << "]" << std::endl;
                        std::cerr.flags(flags);
                    }
                }
                return wrote;
            }

            if ((rpcNumber & 0xFF00u) != 0x0400u)
            {
                return false;
            }

            auto readSendWord = [&](uint32_t index, uint32_t &out) -> bool {
                if (sendPayloadAddr == 0u || sendPayloadSize < ((index + 1u) * sizeof(uint32_t)))
                {
                    out = 0u;
                    return false;
                }
                return readSifGuestU32(rdram, sendPayloadAddr + (index * sizeof(uint32_t)), out);
            };

            const uint32_t urpcCommand = rpcNumber & 0x3Fu;
            uint32_t outWords[4] = {0u, 0u, 0u, 0u};
            uint32_t outWordCount = 1u;

            switch (urpcCommand)
            {
            case 0u:
            {
                uint32_t srcSjHandle = 0u;
                uint32_t dstSjHandle = 0u;
                uint32_t line = 0u;
                uint32_t eeObjAddr = 0u;
                (void)readSendWord(0u, srcSjHandle);
                (void)readSendWord(1u, dstSjHandle);
                (void)readSendWord(2u, line);
                (void)readSendWord(3u, eeObjAddr);

                const uint32_t handle = allocateKofxiIopServiceHandle();
                KofxiSjxState state{};
                state.handle = handle;
                state.srcSjHandle = srcSjHandle;
                state.dstSjHandle = dstSjHandle;
                state.line = line;
                state.eeObjAddr = eeObjAddr;
                {
                    std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                    g_kofxiSjxByHandle[handle] = state;
                }
                ps2_syscalls::registerDtxSjxObject(handle, srcSjHandle, dstSjHandle, line, eeObjAddr);

                outWords[0] = handle;
                responseName = "kofxi-sjx-create";
                break;
            }

            case 1u:
            {
                uint32_t handle = 0u;
                (void)readSendWord(0u, handle);
                {
                    std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                    g_kofxiSjxByHandle.erase(handle);
                }
                ps2_syscalls::eraseDtxSjxObject(handle);
                outWords[0] = 1u;
                responseName = "kofxi-sjx-destroy";
                break;
            }

            case 2u:
            case 3u:
            {
                uint32_t handle = 0u;
                uint32_t xid = 0u;
                (void)readSendWord(0u, handle);
                (void)readSendWord(1u, xid);
                {
                    std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                    const auto it = g_kofxiSjxByHandle.find(handle);
                    if (it != g_kofxiSjxByHandle.end())
                    {
                        it->second.xid = static_cast<uint16_t>(xid & 0xFFFFu);
                    }
                }
                ps2_syscalls::resetDtxSjxObject(handle, xid);
                outWords[0] = 1u;
                responseName = (urpcCommand == 2u) ? "kofxi-sjx-reset" : "kofxi-sjx-reinit";
                break;
            }

            case 8u:
            {
                uint32_t maxChannels = 0u;
                uint32_t sjHandle0 = 0u;
                uint32_t sjHandle1 = 0u;
                (void)readSendWord(0u, maxChannels);
                (void)readSendWord(2u, sjHandle0);
                (void)readSendWord(3u, sjHandle1);

                const uint32_t handle = allocateKofxiIopServiceHandle();
                KofxiPs2RnaState state{};
                state.handle = handle;
                state.maxChannels = maxChannels;
                state.sjHandle0 = sjHandle0;
                state.sjHandle1 = sjHandle1;
                state.channelCount = maxChannels;
                {
                    std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                    g_kofxiPs2RnaByHandle[handle] = state;
                }
                ps2_syscalls::registerDtxPs2RnaObject(handle, maxChannels, sjHandle0, sjHandle1);

                outWords[0] = handle;
                responseName = "kofxi-ps2rna-create";
                break;
            }

            case 9u:
            {
                uint32_t handle = 0u;
                (void)readSendWord(0u, handle);
                {
                    std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                    g_kofxiPs2RnaByHandle.erase(handle);
                }
                ps2_syscalls::eraseDtxPs2RnaObject(handle);
                outWords[0] = 1u;
                responseName = "kofxi-ps2rna-destroy";
                break;
            }

            case 10u:
            {
                uint32_t sjHandle = 0u;
                uint32_t iopWorkAddr = 0u;
                uint32_t ps2RnaHandle = 0u;
                (void)readSendWord(0u, sjHandle);
                (void)readSendWord(1u, iopWorkAddr);
                (void)readSendWord(2u, ps2RnaHandle);
                (void)iopWorkAddr;
                {
                    std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                    if (ps2RnaHandle != 0u)
                    {
                        const auto it = g_kofxiPs2RnaByHandle.find(ps2RnaHandle);
                        if (it != g_kofxiPs2RnaByHandle.end())
                        {
                            it->second.sjHandle0 = sjHandle;
                            it->second.playEnabled = true;
                        }
                    }
                }
                outWords[0] = sjHandle != 0u ? sjHandle : 1u;
                responseName = "kofxi-ps2rna-reinit";
                break;
            }

            case 32u:
            case 33u:
            case 34u:
            {
                uint32_t arg0 = 0u;
                uint32_t arg1 = 0u;
                uint32_t arg2 = 0u;
                (void)readSendWord(0u, arg0);
                (void)readSendWord(1u, arg1);
                (void)readSendWord(2u, arg2);

                uint32_t mode = 0u;
                uint32_t wkAddr = 0u;
                uint32_t wkSize = 0u;
                if (urpcCommand == 34u)
                {
                    mode = arg0;
                    wkAddr = arg1;
                    wkSize = arg2;
                }
                else if (urpcCommand == 33u)
                {
                    wkAddr = arg0;
                    wkSize = arg1;
                }
                else
                {
                    wkAddr = arg0;
                    wkSize = (arg1 != 0u) ? arg1 : arg2;
                }

                wkSize = normalizeKofxiSjrmtCapacity(wkSize);
                const uint32_t handle = allocateKofxiIopServiceHandle();
                KofxiSjrmtState state{};
                state.handle = handle;
                state.mode = mode;
                state.wkAddr = wkAddr;
                state.wkSize = wkSize;
                state.roomBytes = wkSize;
                state.uuid0 = 0x53524D54u;
                state.uuid1 = handle;
                state.uuid2 = wkAddr;
                state.uuid3 = wkSize;
                {
                    std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                    g_kofxiSjrmtByHandle[handle] = state;
                }
                ps2_syscalls::registerDtxSjrmtObject(handle, mode, wkAddr, wkSize);

                outWords[0] = handle;
                responseName = "kofxi-sjrmt-create";
                break;
            }

            case 35u:
            {
                uint32_t handle = 0u;
                (void)readSendWord(0u, handle);
                std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                g_kofxiSjrmtByHandle.erase(handle);
                ps2_syscalls::eraseDtxSjrmtObject(handle);
                outWords[0] = 1u;
                responseName = "kofxi-sjrmt-destroy";
                break;
            }

            case 36u:
            {
                uint32_t handle = 0u;
                (void)readSendWord(0u, handle);
                {
                    std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                    const auto it = g_kofxiSjrmtByHandle.find(handle);
                    if (it != g_kofxiSjrmtByHandle.end())
                    {
                        outWords[0] = it->second.uuid0;
                        outWords[1] = it->second.uuid1;
                        outWords[2] = it->second.uuid2;
                        outWords[3] = it->second.uuid3;
                    }
                }
                outWordCount = 4u;
                responseName = "kofxi-sjrmt-uuid";
                break;
            }

            case 37u:
            {
                uint32_t handle = 0u;
                (void)readSendWord(0u, handle);
                {
                    std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                    const auto it = g_kofxiSjrmtByHandle.find(handle);
                    if (it != g_kofxiSjrmtByHandle.end())
                    {
                        it->second.readPos = 0u;
                        it->second.writePos = 0u;
                        it->second.roomBytes = it->second.wkSize;
                        it->second.dataBytes = 0u;
                    }
                }
                ps2_syscalls::resetDtxSjrmtObject(handle);
                outWords[0] = 1u;
                responseName = "kofxi-sjrmt-reset";
                break;
            }

            case 38u:
            {
                uint32_t handle = 0u;
                uint32_t streamId = 0u;
                uint32_t requestedBytes = 0u;
                (void)readSendWord(0u, handle);
                (void)readSendWord(1u, streamId);
                (void)readSendWord(2u, requestedBytes);

                std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                const auto it = g_kofxiSjrmtByHandle.find(handle);
                if (it != g_kofxiSjrmtByHandle.end())
                {
                    KofxiSjrmtState &state = it->second;
                    const uint32_t cap = normalizeKofxiSjrmtCapacity(state.wkSize);
                    if (streamId == 0u)
                    {
                        outWords[1] = std::min(requestedBytes, state.roomBytes);
                        outWords[0] = state.wkAddr + (cap ? (state.writePos % cap) : 0u);
                        if (cap != 0u)
                        {
                            state.writePos = (state.writePos + outWords[1]) % cap;
                        }
                        state.roomBytes -= outWords[1];
                    }
                    else
                    {
                        outWords[1] = std::min(requestedBytes, state.dataBytes);
                        outWords[0] = state.wkAddr + (cap ? (state.readPos % cap) : 0u);
                        if (cap != 0u)
                        {
                            state.readPos = (state.readPos + outWords[1]) % cap;
                        }
                        state.dataBytes -= outWords[1];
                    }
                    syncGenericDtxSjrmtObjectStateFromKofxi(state);
                }
                outWordCount = 2u;
                responseName = "kofxi-sjrmt-get-chunk";
                break;
            }

            case 39u:
            case 40u:
            {
                uint32_t handle = 0u;
                uint32_t streamId = 0u;
                uint32_t len = 0u;
                (void)readSendWord(0u, handle);
                (void)readSendWord(1u, streamId);
                (void)readSendWord(3u, len);

                std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                const auto it = g_kofxiSjrmtByHandle.find(handle);
                if (it != g_kofxiSjrmtByHandle.end())
                {
                    KofxiSjrmtState &state = it->second;
                    const uint32_t cap = normalizeKofxiSjrmtCapacity(state.wkSize);
                    if (streamId == 0u)
                    {
                        state.roomBytes = std::min(cap, state.roomBytes + len);
                    }
                    else
                    {
                        state.dataBytes = std::min(cap, state.dataBytes + len);
                    }
                    syncGenericDtxSjrmtObjectStateFromKofxi(state);
                }
                outWords[0] = 1u;
                responseName = (urpcCommand == 39u) ? "kofxi-sjrmt-unget-chunk" : "kofxi-sjrmt-put-chunk";
                break;
            }

            case 41u:
            {
                uint32_t handle = 0u;
                uint32_t streamId = 0u;
                (void)readSendWord(0u, handle);
                (void)readSendWord(1u, streamId);

                std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                const auto it = g_kofxiSjrmtByHandle.find(handle);
                if (it != g_kofxiSjrmtByHandle.end())
                {
                    outWords[0] = (streamId == 0u) ? it->second.roomBytes : it->second.dataBytes;
                }
                responseName = "kofxi-sjrmt-num-data";
                break;
            }

            case 42u:
            {
                uint32_t handle = 0u;
                uint32_t streamId = 0u;
                uint32_t requestedBytes = 0u;
                (void)readSendWord(0u, handle);
                (void)readSendWord(1u, streamId);
                (void)readSendWord(2u, requestedBytes);

                uint32_t available = 0u;
                {
                    std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
                    const auto it = g_kofxiSjrmtByHandle.find(handle);
                    if (it != g_kofxiSjrmtByHandle.end())
                    {
                        available = (streamId == 0u) ? it->second.roomBytes : it->second.dataBytes;
                    }
                }
                outWords[0] = (available >= requestedBytes) ? 1u : 0u;
                outWords[1] = available;
                outWordCount = 2u;
                responseName = "kofxi-sjrmt-is-get-chunk";
                break;
            }

            case 43u:
            case 44u:
                outWords[0] = 1u;
                responseName = (urpcCommand == 43u) ? "kofxi-sjrmt-init" : "kofxi-sjrmt-finish";
                break;

            default:
            {
                uint32_t fallback = 0u;
                (void)readSendWord(0u, fallback);
                outWords[0] = fallback != 0u ? fallback : 1u;
                responseName = "kofxi-urpc-default";
                break;
            }
            }

            const bool wrote = writeKofxiIopResponseWords(rdram, recvBuf, recvSize, outWords, outWordCount);
            if (traceKofxiIopRpcEnabled())
            {
                static std::atomic<uint32_t> s_urpcTraceCount{0u};
                const uint32_t traceIndex = s_urpcTraceCount.fetch_add(1u, std::memory_order_relaxed);
                if (traceIndex < 512u)
                {
                    uint32_t stateHandle = 0u;
                    uint32_t sjxStateHandle = 0u;
                    uint32_t ps2RnaStateHandle = 0u;
                    if (urpcCommand == 0u)
                    {
                        sjxStateHandle = outWords[0];
                    }
                    else if (urpcCommand >= 1u && urpcCommand <= 3u)
                    {
                        (void)readSendWord(0u, sjxStateHandle);
                    }
                    else if (urpcCommand == 8u)
                    {
                        ps2RnaStateHandle = outWords[0];
                    }
                    else if (urpcCommand == 9u)
                    {
                        (void)readSendWord(0u, ps2RnaStateHandle);
                    }
                    else if (urpcCommand == 10u)
                    {
                        (void)readSendWord(0u, stateHandle);
                        (void)readSendWord(2u, ps2RnaStateHandle);
                    }
                    else if (urpcCommand >= 32u && urpcCommand <= 34u)
                    {
                        stateHandle = outWords[0];
                    }
                    else if (urpcCommand >= 35u && urpcCommand <= 42u)
                    {
                        (void)readSendWord(0u, stateHandle);
                    }

                    auto flags = std::cerr.flags();
                    std::cerr << "[kofxi:iop-rpc] sid=0x" << std::hex << sid
                              << " rpc=0x" << rpcNumber
                              << " cmd=0x" << urpcCommand
                              << " cmdName=" << kofxiUrpcCommandName(urpcCommand)
                              << " name=" << responseName
                              << " sendSize=0x" << sendPayloadSize
                              << " recv=0x" << recvBuf
                              << " recvSize=0x" << recvSize
                              << " wrote=" << std::dec << (wrote ? 1 : 0);
                    appendSifWordList(std::cerr, "send", rdram, sendPayloadAddr, sendPayloadSize, 4u);
                    appendHostWordList(std::cerr, "out", outWords, outWordCount);
                    appendSifWordList(std::cerr, "recv", rdram, recvBuf, recvSize, 4u);
                    appendKofxiSjrmtState(std::cerr, stateHandle);
                    appendKofxiSjxState(std::cerr, sjxStateHandle);
                    appendKofxiPs2RnaState(std::cerr, ps2RnaStateHandle);
                    std::cerr << std::endl;
                    std::cerr.flags(flags);
                }
            }

            return wrote;
        }

        bool completeSifRpcBindFromPacket(uint8_t *rdram, PS2Runtime *runtime, uint32_t packetAddr, uint32_t packetSize)
        {
            constexpr uint32_t kSifCmdRpcBind = 0x80000009u;
            if (!rdram || packetSize < 0x24u)
            {
                return false;
            }

            uint32_t packedSize = 0u;
            uint32_t cid = 0u;
            if (!readSifGuestU32(rdram, packetAddr + 0x00u, packedSize) ||
                !readSifGuestU32(rdram, packetAddr + 0x08u, cid) ||
                cid != kSifCmdRpcBind)
            {
                return false;
            }

            const uint32_t payloadSize = packedSize & 0xFFu;
            if (payloadSize < 0x24u || payloadSize > packetSize)
            {
                return false;
            }

            uint32_t recId = 0u;
            uint32_t pktAddr = 0u;
            uint32_t rpcId = 0u;
            uint32_t clientAddr = 0u;
            uint32_t sid = 0u;
            if (!readSifGuestU32(rdram, packetAddr + 0x10u, recId) ||
                !readSifGuestU32(rdram, packetAddr + 0x14u, pktAddr) ||
                !readSifGuestU32(rdram, packetAddr + 0x18u, rpcId) ||
                !readSifGuestU32(rdram, packetAddr + 0x1Cu, clientAddr) ||
                !readSifGuestU32(rdram, packetAddr + 0x20u, sid))
            {
                return false;
            }

            uint32_t clientSema = 0u;
            uint32_t clientMode = 0u;
            if (!readSifGuestU32(rdram, clientAddr + 0x08u, clientSema) ||
                !readSifGuestU32(rdram, clientAddr + 0x0Cu, clientMode))
            {
                return false;
            }

            SifPacketRpcClient client{};
            {
                std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
                uint32_t serverAddr = g_nextSifPacketServerAddr;
                if (serverAddr < kSifPacketServerBase || serverAddr + kSifPacketServerStride > kSifPacketServerLimit)
                {
                    serverAddr = kSifPacketServerBase;
                }
                g_nextSifPacketServerAddr = serverAddr + kSifPacketServerStride;

                client.sid = sid;
                client.server = serverAddr;
                client.serverBuf = serverAddr + 0x50u;
                client.cbuf = 0u;
                g_sifPacketRpcClients[clientAddr] = client;
                g_sifPacketSidByServer[serverAddr] = sid;
            }

            clearSifGuestRange(rdram, client.server, kSifPacketServerStride);
            (void)writeSifGuestU32(rdram, client.server + 0x00u, sid);
            (void)writeSifGuestU32(rdram, client.server + 0x08u, client.serverBuf);
            (void)writeSifGuestU32(rdram, clientAddr + 0x00u, 0u);
            (void)writeSifGuestU32(rdram, clientAddr + 0x04u, rpcId);
            (void)writeSifGuestU32(rdram, clientAddr + 0x10u, 0u);
            (void)writeSifGuestU32(rdram, clientAddr + 0x14u, client.serverBuf);
            (void)writeSifGuestU32(rdram, clientAddr + 0x18u, client.cbuf);
            (void)writeSifGuestU32(rdram, clientAddr + 0x24u, client.server);

            const bool shouldSignalBlockingBind = (clientMode & 0x1u) == 0u;
            const bool signaled = shouldSignalBlockingBind && signalSifCompletionSema(rdram, runtime, clientSema);
            (void)releaseSifPacketRequestSlot(rdram, packetAddr);

            static std::atomic<uint32_t> s_rpcBindAckLogCount{0u};
            const uint32_t logIndex = s_rpcBindAckLogCount.fetch_add(1u, std::memory_order_relaxed);
            if (logIndex < 64u)
            {
                auto flags = std::cout.flags();
                std::cout << "[SIF_CMD_RPC_BIND:ack] rec=0x" << std::hex << recId
                          << " pkt=0x" << pktAddr
                          << " rpcId=0x" << rpcId
                          << " cd=0x" << clientAddr
                          << " sid=0x" << sid
                          << " server=0x" << client.server
                          << " buf=0x" << client.serverBuf
                          << " mode=0x" << clientMode
                          << " sema=0x" << clientSema
                          << " signal=" << std::dec << (signaled ? 1 : 0)
                          << std::endl;
                std::cout.flags(flags);
            }

            return true;
        }

        bool completeSifRpcCallFromPacket(
            uint8_t *rdram,
            R5900Context *ctx,
            PS2Runtime *runtime,
            uint32_t packetAddr,
            uint32_t packetSize,
            uint32_t sendPayloadAddr,
            uint32_t sendPayloadSize)
        {
            constexpr uint32_t kSifCmdRpcCall = 0x8000000Au;
            if (!rdram || packetSize < 0x38u)
            {
                return false;
            }

            uint32_t packedSize = 0u;
            uint32_t cid = 0u;
            if (!readSifGuestU32(rdram, packetAddr + 0x00u, packedSize) ||
                !readSifGuestU32(rdram, packetAddr + 0x08u, cid) ||
                cid != kSifCmdRpcCall)
            {
                return false;
            }

            const uint32_t payloadSize = packedSize & 0xFFu;
            if (payloadSize < 0x38u || payloadSize > packetSize)
            {
                return false;
            }

            uint32_t recId = 0u;
            uint32_t rpcId = 0u;
            uint32_t clientAddr = 0u;
            uint32_t rpcNumber = 0u;
            uint32_t sendSize = 0u;
            uint32_t recvBuf = 0u;
            uint32_t recvSize = 0u;
            uint32_t rmode = 0u;
            uint32_t serverPtr = 0u;
            if (!readSifGuestU32(rdram, packetAddr + 0x10u, recId) ||
                !readSifGuestU32(rdram, packetAddr + 0x18u, rpcId) ||
                !readSifGuestU32(rdram, packetAddr + 0x1Cu, clientAddr) ||
                !readSifGuestU32(rdram, packetAddr + 0x20u, rpcNumber) ||
                !readSifGuestU32(rdram, packetAddr + 0x24u, sendSize) ||
                !readSifGuestU32(rdram, packetAddr + 0x28u, recvBuf) ||
                !readSifGuestU32(rdram, packetAddr + 0x2Cu, recvSize) ||
                !readSifGuestU32(rdram, packetAddr + 0x30u, rmode) ||
                !readSifGuestU32(rdram, packetAddr + 0x34u, serverPtr))
            {
                return false;
            }

            uint32_t clientSema = 0u;
            uint32_t clientMode = 0u;
            uint32_t endFunc = 0u;
            uint32_t endParam = 0u;
            if (!readSifGuestU32(rdram, clientAddr + 0x08u, clientSema) ||
                !readSifGuestU32(rdram, clientAddr + 0x0Cu, clientMode) ||
                !readSifGuestU32(rdram, clientAddr + 0x1Cu, endFunc) ||
                !readSifGuestU32(rdram, clientAddr + 0x20u, endParam))
            {
                return false;
            }

            bool wroteResponse = false;
            const char *responseName = "zero";
            uint32_t packetSid = 0u;
            SifPacketRpcClient packetClient{};
            if (lookupSifPacketClient(clientAddr, packetClient))
            {
                packetSid = packetClient.sid;
            }
            if (packetSid == 0u)
            {
                packetSid = readSifServerSidFromGuest(rdram, serverPtr);
            }

            const uint32_t effectiveSendPayloadSize = std::min(sendPayloadSize, sendSize);
            const bool isKofxiDiscReadClient = isKofxiDiscReadPacketClient(
                rdram,
                clientAddr,
                rpcNumber,
                sendPayloadAddr,
                effectiveSendPayloadSize,
                recvBuf,
                recvSize,
                endFunc,
                endParam);
            const uint32_t effectiveDiscSid = isKofxiDiscReadClient ? kKofxiDiscSid : packetSid;

            uint32_t padCommand = 0u;
            if (handleSifPacketPadRpc(rdram, packetSid, rpcNumber, recvBuf, recvSize, padCommand))
            {
                wroteResponse = true;
                responseName = "pad";
            }
            else if (handleSifPacketIopHeapRpc(
                         rdram,
                          packetSid,
                          rpcNumber,
                          sendPayloadAddr,
                          effectiveSendPayloadSize,
                          recvBuf,
                          recvSize,
                          responseName))
            {
                wroteResponse = true;
            }
            else if (runtime && (packetSid == 0x80000400u || packetSid == 0x80000480u))
            {
                runtime->iop().init(rdram);
                uint32_t iopResultPtr = 0u;
                bool iopSignalNowaitCompletion = false;
                if (runtime->iop().handleRPC(runtime,
                                             packetSid,
                                             rpcNumber,
                                             sendPayloadAddr,
                                             effectiveSendPayloadSize,
                                             recvBuf,
                                             recvSize,
                                             iopResultPtr,
                                             iopSignalNowaitCompletion))
                {
                    (void)iopResultPtr;
                    (void)iopSignalNowaitCompletion;
                    wroteResponse = true;
                    responseName = "mcserv";
                }
            }
            else if (handleSifPacketKofxiDiscRpc(
                          rdram,
                          effectiveDiscSid,
                          rpcNumber,
                          sendPayloadAddr,
                          effectiveSendPayloadSize,
                          recvBuf,
                          recvSize,
                          responseName))
            {
                wroteResponse = true;
            }
            else if (handleSifPacketKofxiIopServiceRpc(
                         rdram,
                          packetSid,
                          rpcNumber,
                          sendPayloadAddr,
                          effectiveSendPayloadSize,
                          recvBuf,
                          recvSize,
                          responseName))
            {
                wroteResponse = true;
            }
            else if (recvBuf != 0u && recvSize >= sizeof(uint32_t) && rpcNumber == 0xFFu)
            {
                // LOADFILE LF_F_GET_VERSION returns the ASCII word "3100" on PS2SDK's IOP server.
                wroteResponse = writeSifGuestU32(rdram, recvBuf, 0x30303133u);
                responseName = wroteResponse ? "loadfile-version" : "zero";
            }
            else if (recvBuf != 0u && recvSize <= 0x10000u)
            {
                clearSifGuestRange(rdram, recvBuf, recvSize);
            }

            (void)writeSifGuestU32(rdram, clientAddr + 0x00u, 0u);
            (void)writeSifGuestU32(rdram, clientAddr + 0x04u, rpcId);
            (void)releaseSifPacketRequestSlot(rdram, packetAddr);

            bool callbackInvoked = false;
            if (sifPacketRpcEndCallbackEnabled() && endFunc != 0u)
            {
                callbackInvoked = sifInvokePacketCallback(rdram, ctx, runtime, endFunc, endParam);
                if (!callbackInvoked && endFunc >= 0x10000u)
                {
                    const uint32_t normalizedEndFunc = endFunc - 0x10000u;
                    if (runtime && runtime->hasFunction(normalizedEndFunc))
                    {
                        callbackInvoked = sifInvokePacketCallback(rdram, ctx, runtime, normalizedEndFunc, endParam);
                    }
                }
            }

            const bool shouldSignalBlockingCall = (clientMode & 0x1u) == 0u;
            const bool signaled = shouldSignalBlockingCall && signalSifCompletionSema(rdram, runtime, clientSema);

            if (endFunc != 0u && traceSifPacketRpcEndCallbackEnabled())
            {
                static std::atomic<uint32_t> s_rpcCallEndCallbackLogCount{0u};
                const uint32_t logIndex = s_rpcCallEndCallbackLogCount.fetch_add(1u, std::memory_order_relaxed);
                if (logIndex < 64u)
                {
                    auto flags = std::cout.flags();
                    std::cout << "[SIF_CMD_RPC_CALL:end-callback] rec=0x" << std::hex << recId
                              << " rpc=0x" << rpcNumber
                              << " cd=0x" << clientAddr
                              << " mode=0x" << clientMode
                              << " end=0x" << endFunc
                              << " param=0x" << endParam
                              << " invoked=" << std::dec << (callbackInvoked ? 1 : 0)
                              << " signal=" << (signaled ? 1 : 0)
                              << std::endl;
                    std::cout.flags(flags);
                }
            }

            if (traceSifRpcEnabled())
            {
                static std::atomic<uint32_t> s_rpcCallAckLogCount{0u};
                const uint32_t logIndex = s_rpcCallAckLogCount.fetch_add(1u, std::memory_order_relaxed);
                if (logIndex < 64u)
                {
                    auto flags = std::cout.flags();
                    std::cout << "[SIF_CMD_RPC_CALL:ack] rec=0x" << std::hex << recId
                              << " rpcId=0x" << rpcId
                              << " rpc=0x" << rpcNumber
                              << " cd=0x" << clientAddr
                              << " mode=0x" << clientMode
                              << " rmode=0x" << rmode
                              << " sid=0x" << packetSid
                              << " sd=0x" << serverPtr
                              << " sema=0x" << clientSema
                              << " end=0x" << endFunc
                              << " endParam=0x" << endParam
                              << " sendSize=0x" << sendSize
                              << " recv=0x" << recvBuf
                              << " recvSize=0x" << recvSize
                              << " response=" << responseName
                              << " padCmd=0x" << padCommand
                              << " cb=" << std::dec << (callbackInvoked ? 1 : 0)
                              << " signal=" << std::dec << (signaled ? 1 : 0)
                              << std::endl;
                    std::cout.flags(flags);
                }
            }

            return true;
        }

        bool isSifCommandPacket(uint8_t *rdram, uint32_t packetAddr, uint32_t packetSize)
        {
            if (!rdram || packetSize < 0x0Cu)
            {
                return false;
            }

            uint32_t cid = 0u;
            if (!readSifGuestU32(rdram, packetAddr + 0x08u, cid))
            {
                return false;
            }

            switch (cid)
            {
            case 0x80000003u: // RESET_CMD
            case 0x80000009u: // RPC_BIND
            case 0x8000000Au: // RPC_CALL
                return true;
            default:
                return false;
            }
        }

        bool completeSifResetCommandFromPacket(uint8_t *rdram, uint32_t packetAddr, uint32_t packetSize)
        {
            constexpr uint32_t kSifCmdResetCmd = 0x80000003u;
            constexpr uint32_t kResetArgOffset = 0x18u;
            constexpr uint32_t kResetArgMax = 79u;
            if (!rdram || packetSize < kResetArgOffset)
            {
                return false;
            }

            uint32_t packedSize = 0u;
            uint32_t cid = 0u;
            uint32_t argLen = 0u;
            uint32_t mode = 0u;
            if (!readSifGuestU32(rdram, packetAddr + 0x00u, packedSize) ||
                !readSifGuestU32(rdram, packetAddr + 0x08u, cid) ||
                cid != kSifCmdResetCmd ||
                !readSifGuestU32(rdram, packetAddr + 0x10u, argLen) ||
                !readSifGuestU32(rdram, packetAddr + 0x14u, mode))
            {
                return false;
            }

            const uint32_t payloadSize = packedSize & 0xFFu;
            if (payloadSize < kResetArgOffset || payloadSize > packetSize)
            {
                return false;
            }

            const uint32_t argBytes = std::min<uint32_t>(std::min<uint32_t>(argLen, kResetArgMax), payloadSize - kResetArgOffset);
            std::string arg;
            arg.reserve(argBytes);
            for (uint32_t i = 0u; i < argBytes; ++i)
            {
                const uint8_t *ptr = getConstMemPtr(rdram, packetAddr + kResetArgOffset + i);
                if (!ptr || *ptr == 0u)
                {
                    break;
                }
                const char ch = static_cast<char>(*ptr);
                arg.push_back((ch >= 0x20 && ch < 0x7F) ? ch : '.');
            }

            {
                std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
                g_sifResetCommandPending = true;
            }

            static std::atomic<uint32_t> s_resetCmdAckLogCount{0u};
            const uint32_t logIndex = s_resetCmdAckLogCount.fetch_add(1u, std::memory_order_relaxed);
            if (logIndex < 32u)
            {
                auto flags = std::cout.flags();
                std::cout << "[SIF_CMD_RESET_CMD:ack] argLen=0x" << std::hex << argLen
                          << " mode=0x" << mode
                          << " arg=\"" << arg << "\""
                          << std::dec << std::endl;
                std::cout.flags(flags);
            }

            return true;
        }
    }

    void resetSifState()
    {
        std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
        seedDefaultSifRegsLocked();
        resetSifHeapState();
    }

    void syncKofxiDtxSjrmtObjectState(uint32_t handle,
                                      uint32_t readPos,
                                      uint32_t writePos,
                                      uint32_t roomBytes,
                                      uint32_t dataBytes)
    {
        if (handle == 0u)
        {
            return;
        }

        std::lock_guard<std::mutex> lock(g_kofxiIopServiceMutex);
        auto it = g_kofxiSjrmtByHandle.find(handle);
        if (it == g_kofxiSjrmtByHandle.end())
        {
            return;
        }

        KofxiSjrmtState &state = it->second;
        const uint32_t cap = normalizeKofxiSjrmtCapacity(state.wkSize);
        state.readPos = (cap != 0u) ? (readPos % cap) : 0u;
        state.writePos = (cap != 0u) ? (writePos % cap) : 0u;
        state.roomBytes = std::min(cap, roomBytes);
        state.dataBytes = std::min(cap, dataBytes);
    }

    void sceSifAddCmdHandler(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t cid = getRegU32(ctx, 4);
        const uint32_t handler = getRegU32(ctx, 5);
        std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
        g_sifCmdHandlers[cid] = handler;
        setReturnS32(ctx, 0);
    }

    void sceSifAllocIopHeap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;

        const uint32_t reqSize = getRegU32(ctx, 4);
        setReturnU32(ctx, allocateSifHeapBlock(reqSize));
    }

    void sceSifAllocSysMemory(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;

        const uint32_t size = getRegU32(ctx, 5);
        setReturnU32(ctx, allocateSifHeapBlock(size));
    }

    void sceSifBindRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::SifBindRpc(rdram, ctx, runtime);
    }

    void sceSifCheckStatRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::SifCheckStatRpc(rdram, ctx, runtime);
    }

    void sceSifDmaStat(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        (void)getRegU32(ctx, 4); // trid

        // Transfers are applied immediately by sceSifSetDma in this runtime.
        setReturnS32(ctx, -1);
    }

    void sceSifExecRequest(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 0);
    }

    void sceSifExitCmd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
        seedDefaultSifRegsLocked();
        setReturnS32(ctx, 0);
    }

    void sceSifExitRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 0);
    }

    void sceSifFreeIopHeap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;

        const uint32_t addr = getRegU32(ctx, 4);
        setReturnS32(ctx, freeSifHeapBlock(addr) ? 0 : -1);
    }

    void sceSifFreeSysMemory(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;

        const uint32_t addr = getRegU32(ctx, 4);
        setReturnS32(ctx, freeSifHeapBlock(addr) ? 0 : -1);
    }

    void sceSifGetDataTable(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
        setReturnU32(ctx, g_sifCmdBuffer);
    }

    void sceSifGetIopAddr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnU32(ctx, getRegU32(ctx, 4));
    }

    void sceSifGetNextRequest(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 0);
    }

    void sceSifGetOtherData(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)runtime;

        const uint32_t rdAddr = getRegU32(ctx, 4);
        const uint32_t srcAddr = getRegU32(ctx, 5);
        const uint32_t dstAddr = getRegU32(ctx, 6);
        const int32_t sizeSigned = static_cast<int32_t>(getRegU32(ctx, 7));

        if (sizeSigned <= 0)
        {
            setReturnS32(ctx, 0);
            return;
        }

        const uint32_t size = static_cast<uint32_t>(sizeSigned);
        if (size > PS2_RAM_SIZE)
        {
            static uint32_t warnCount = 0;
            if (warnCount < 32u)
            {
                std::cerr << "sceSifGetOtherData rejected oversized transfer size=0x"
                          << std::hex << size << std::dec << std::endl;
                ++warnCount;
            }
            setReturnS32(ctx, -1);
            return;
        }

        ps2_syscalls::prepareSoundDriverStatusTransfer(rdram, srcAddr, size);

        if (!copyGuestByteRange(rdram, dstAddr, srcAddr, size))
        {
            static uint32_t warnCount = 0;
            if (warnCount < 32u)
            {
                PS2_IF_AGRESSIVE_LOGS({
                    std::cerr << "sceSifGetOtherData copy failed src=0x" << std::hex << srcAddr
                              << " dst=0x" << dstAddr
                              << " size=0x" << size
                              << std::dec << std::endl;
                });
                ++warnCount;
            }
            setReturnS32(ctx, -1);
            return;
        }

        // SifRpcReceiveData_t keeps src/dest/size at offsets 0x10/0x14/0x18.
        if (uint8_t *rd = getMemPtr(rdram, rdAddr))
        {
            std::memcpy(rd + 0x10u, &srcAddr, sizeof(srcAddr));
            std::memcpy(rd + 0x14u, &dstAddr, sizeof(dstAddr));
            std::memcpy(rd + 0x18u, &size, sizeof(size));
        }

        ps2_syscalls::finalizeSoundDriverStatusTransfer(rdram, srcAddr, dstAddr, size);

        setReturnS32(ctx, 0);
    }

    void sceSifGetReg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t reg = getRegU32(ctx, 4);
        uint32_t value = 0u;
        bool shouldLog = false;
        {
            std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
            auto it = g_sifRegs.find(reg);
            if (it != g_sifRegs.end())
            {
                value = it->second;
            }
            shouldLog = shouldTraceSifReg(reg) && g_sifGetRegLogCount < 128u;
            if (shouldLog)
            {
                ++g_sifGetRegLogCount;
            }
        }
        if (shouldLog)
        {
            PS2_IF_AGRESSIVE_LOGS({
                auto flags = std::cerr.flags();
                std::cerr << "[sceSifGetReg] reg=0x" << std::hex << reg
                          << " value=0x" << value
                          << " pc=0x" << (ctx ? ctx->pc : 0u)
                          << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                          << std::dec << std::endl;
                std::cerr.flags(flags);
            });
        }
        setReturnU32(ctx, value);
    }

    void sceSifGetSreg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t reg = getRegU32(ctx, 4);
        uint32_t value = 0u;
        {
            std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
            auto it = g_sifSregs.find(reg);
            if (it != g_sifSregs.end())
            {
                value = it->second;
            }
        }
        setReturnU32(ctx, value);
    }

    void sceSifInitCmd(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
        g_sifCmdInitialized = true;
        setReturnS32(ctx, 0);
    }

    void sceSifInitIopHeap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        resetSifHeapState();
        setReturnS32(ctx, 0);
    }

    void sceSifInitRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::SifInitRpc(rdram, ctx, runtime);
    }

    void sceSifIsAliveIop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 1);
    }

    void sceSifLoadElf(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::sceSifLoadElf(rdram, ctx, runtime);
    }

    void sceSifLoadElfPart(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::sceSifLoadElfPart(rdram, ctx, runtime);
    }

    void sceSifLoadFileReset(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 0);
    }

    void sceSifLoadIopHeap(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 0);
    }

    void sceSifLoadModuleBuffer(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::sceSifLoadModuleBuffer(rdram, ctx, runtime);
    }

    void sceSifRebootIop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 1);
    }

    void sceSifRegisterRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::SifRegisterRpc(rdram, ctx, runtime);
    }

    void sceSifRemoveCmdHandler(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t cid = getRegU32(ctx, 4);
        std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
        g_sifCmdHandlers.erase(cid);
        setReturnS32(ctx, 0);
    }

    void sceSifRemoveRpc(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::SifRemoveRpc(rdram, ctx, runtime);
    }

    void sceSifRemoveRpcQueue(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::SifRemoveRpcQueue(rdram, ctx, runtime);
    }

    void sceSifResetIop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 1);
    }

    void sceSifRpcLoop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 0);
    }

    void sceSifSetCmdBuffer(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t newBuffer = getRegU32(ctx, 4);
        uint32_t prev = 0u;
        {
            std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
            prev = g_sifCmdBuffer;
            g_sifCmdBuffer = newBuffer;
        }
        setReturnU32(ctx, prev);
    }

    void isceSifSetDChain(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        sceSifSetDChain(rdram, ctx, runtime);
    }

    void isceSifSetDma(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        sceSifSetDma(rdram, ctx, runtime);
    }

    void sceSifSetDChain(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        setReturnS32(ctx, 0);
    }

    void sceSifSetDma(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)runtime;

        const uint32_t dmatAddr = getRegU32(ctx, 4);
        const uint32_t count = getRegU32(ctx, 5);

        const uint32_t listAddr = getRegU32(ctx, 4);
        PS2_IF_AGRESSIVE_LOGS({
            std::cerr << "[sceSifSetDma:CALL] pc=0x" << std::hex << ctx->pc
                      << " ra=0x" << getRegU32(ctx, 31)
                      << " list=0x" << listAddr
                      << " count=" << std::dec << count
                      << std::endl;

            for (uint32_t i = 0; i < count; ++i)
            {
                const uint32_t desc = listAddr + i * 16;
                const uint32_t src = READ32(desc + 0);
                const uint32_t dst = READ32(desc + 4);
                const uint32_t size = READ32(desc + 8);
                const uint32_t attr = READ32(desc + 12);

                std::cerr << "[sceSifSetDma:DESC] i=" << i
                          << " src=0x" << std::hex << src
                          << " dst=0x" << dst
                          << " size=0x" << size
                          << " attr=0x" << attr
                          << " pc=0x" << ctx->pc
                          << " ra=0x" << getRegU32(ctx, 31)
                          << std::dec << std::endl;
            }
        });

        if (!dmatAddr || count == 0u || count > 32u)
        {
            setReturnS32(ctx, 0);
            return;
        }

        std::array<Ps2SifDmaTransfer, 32u> pending{};
        uint32_t pendingCount = 0u;
        bool ok = true;
        for (uint32_t i = 0; i < count; ++i)
        {
            const uint32_t entryAddr = dmatAddr + (i * static_cast<uint32_t>(sizeof(Ps2SifDmaTransfer)));
            const uint8_t *entry = getConstMemPtr(rdram, entryAddr);
            if (!entry)
            {
                ok = false;
                break;
            }

            Ps2SifDmaTransfer xfer{};
            std::memcpy(&xfer, entry, sizeof(xfer));
            if (xfer.size <= 0)
            {
                continue;
            }

            const uint32_t sizeBytes = static_cast<uint32_t>(xfer.size);
            if (sizeBytes > PS2_RAM_SIZE)
            {
                ok = false;
                break;
            }
            const bool commandOnlyTransfer = (xfer.dest == 0u);
            if (commandOnlyTransfer ? !canReadGuestByteRange(rdram, xfer.src, sizeBytes)
                                    : !canCopyGuestByteRange(rdram, xfer.dest, xfer.src, sizeBytes))
            {
                ok = false;
                break;
            }

            pending[pendingCount++] = xfer;
        }

        if (ok)
        {
            uint32_t lastCommandPayloadSrc = 0u;
            uint32_t lastCommandPayloadSize = 0u;
            for (uint32_t i = 0; i < pendingCount; ++i)
            {
                const Ps2SifDmaTransfer &xfer = pending[i];
                const bool commandOnlyTransfer = (xfer.dest == 0u);
                if (!commandOnlyTransfer &&
                    !copyGuestByteRange(rdram, xfer.dest, xfer.src, static_cast<uint32_t>(xfer.size)))
                {
                    ok = false;
                    break;
                }

                if (!commandOnlyTransfer)
                {
                    ps2_syscalls::noteDtxSifDmaTransfer(
                        rdram,
                        xfer.src,
                        xfer.dest,
                        static_cast<uint32_t>(xfer.size));
                }
                else
                {
                    const uint32_t xferSize = static_cast<uint32_t>(xfer.size);
                    const bool isCommandPacket = isSifCommandPacket(rdram, xfer.src, xferSize);
                    (void)completeSifResetCommandFromPacket(
                        rdram,
                        xfer.src,
                        xferSize);
                    (void)completeSifRpcBindFromPacket(
                        rdram,
                        runtime,
                        xfer.src,
                        xferSize);
                    (void)completeSifRpcCallFromPacket(
                        rdram,
                        ctx,
                        runtime,
                        xfer.src,
                        xferSize,
                        lastCommandPayloadSrc,
                        lastCommandPayloadSize);
                    if (!isCommandPacket)
                    {
                        lastCommandPayloadSrc = xfer.src;
                        lastCommandPayloadSize = xferSize;
                    }
                }
            }
        }

        if (traceSifDmaEnabled())
        {
            static std::atomic<uint32_t> s_sifSetDmaLogCount{0};
            const uint32_t sifSetDmaLog = s_sifSetDmaLogCount.fetch_add(1u, std::memory_order_relaxed);
            if (sifSetDmaLog < 64u)
            {
                auto flags = std::cout.flags();
                std::cout << "[sceSifSetDma] dmat=0x" << std::hex << dmatAddr
                          << " count=0x" << count
                          << " copied=0x" << pendingCount
                          << " completionCause=0x5"
                          << std::dec << std::endl;
                std::cout << std::hex;
                for (uint32_t i = 0u; i < pendingCount; ++i)
                {
                    const Ps2SifDmaTransfer &xfer = pending[i];
                    std::cout << "  [sceSifSetDma:desc] index=" << std::dec << i
                              << std::hex
                              << " src=0x" << xfer.src
                              << " dest=0x" << xfer.dest
                              << " size=0x" << static_cast<uint32_t>(xfer.size)
                              << " attr=0x" << static_cast<uint32_t>(xfer.attr);
                    printSifDmaBytes(rdram, "src16", xfer.src, static_cast<uint32_t>(xfer.size));
                    printSifDmaBytes(rdram, "dst16", xfer.dest, static_cast<uint32_t>(xfer.size));
                    std::cout << std::dec << std::endl;
                }
                std::cout.flags(flags);
            }
        }

        if (!ok)
        {
            static uint32_t warnCount = 0;
            if (warnCount < 32u)
            {
                PS2_IF_AGRESSIVE_LOGS({
                    std::cerr << "sceSifSetDma failed dmat=0x" << std::hex << dmatAddr
                              << " count=0x" << count
                              << std::dec << std::endl;
                });
                ++warnCount;
            }
            setReturnS32(ctx, 0);
            return;
        }

        ps2_syscalls::dispatchDmacHandlersForCause(rdram, runtime, 5u);

        setReturnS32(ctx, static_cast<int32_t>(allocateSifDmaTransferId()));
    }

    void sceSifSetIopAddr(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnU32(ctx, getRegU32(ctx, 5));
    }

    void sceSifSetReg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t reg = getRegU32(ctx, 4);
        uint32_t value = getRegU32(ctx, 5);
        uint32_t prev = 0u;
        bool shouldLog = false;
        {
            std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
            auto it = g_sifRegs.find(reg);
            if (it != g_sifRegs.end())
            {
                prev = it->second;
            }
            if (reg == kSifRegBootStatus &&
                g_sifResetCommandPending &&
                (value & kSifBootReadyMask) != 0u)
            {
                value |= kSifBootResetCompleteMask;
                g_sifResetCommandPending = false;
            }
            g_sifRegs[reg] = value;
            if (reg == kSifRegSubAddr && value != 0u && g_sifRegs[kSifRegMsCom] == 0u)
            {
                g_sifRegs[kSifRegMsCom] = 1u;
            }
            shouldLog = shouldTraceSifReg(reg) && g_sifSetRegLogCount < 128u;
            if (shouldLog)
            {
                ++g_sifSetRegLogCount;
            }
        }
        if (shouldLog)
        {
            PS2_IF_AGRESSIVE_LOGS({
                auto flags = std::cerr.flags();
                std::cerr << "[sceSifSetReg] reg=0x" << std::hex << reg
                          << " prev=0x" << prev
                          << " value=0x" << value
                          << " pc=0x" << (ctx ? ctx->pc : 0u)
                          << " ra=0x" << (ctx ? getRegU32(ctx, 31) : 0u)
                          << std::dec << std::endl;
                std::cerr.flags(flags);
            });
        }
        setReturnU32(ctx, prev);
    }

    void sceSifSetRpcQueue(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::SifSetRpcQueue(rdram, ctx, runtime);
    }

    void sceSifSetSreg(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t reg = getRegU32(ctx, 4);
        const uint32_t value = getRegU32(ctx, 5);
        uint32_t prev = 0u;
        {
            std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
            auto it = g_sifSregs.find(reg);
            if (it != g_sifSregs.end())
            {
                prev = it->second;
            }
            g_sifSregs[reg] = value;
        }
        setReturnU32(ctx, prev);
    }

    void sceSifSetSysCmdBuffer(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        const uint32_t newBuffer = getRegU32(ctx, 4);
        uint32_t prev = 0u;
        {
            std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
            prev = g_sifSysCmdBuffer;
            g_sifSysCmdBuffer = newBuffer;
        }
        setReturnU32(ctx, prev);
    }

    void sceSifStopDma(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)rdram;
        (void)runtime;
        setReturnS32(ctx, 1);
    }

    void sceSifSyncIop(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 1);
    }

    void sceSifWriteBackDCache(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        setReturnS32(ctx, 0);
    }

    void pumpSifPadScriptInput(uint8_t *rdram)
    {
        const char *scriptEnv = std::getenv("PS2X_PAD_SCRIPT");
        if (!rdram || !scriptEnv || scriptEnv[0] == '\0')
        {
            return;
        }

        std::array<uint32_t, 2> padAreas{};
        {
            std::lock_guard<std::mutex> lock(g_sifCmdStateMutex);
            padAreas = g_sifPadAreas;
        }

        const uint64_t frameIndex = ++g_sifPadPumpFrame;
        const uint16_t pressedMask = computeSifPadScriptPressedMask(frameIndex);
        const uint16_t buttons = static_cast<uint16_t>(0xFFFFu & ~pressedMask);
        for (uint32_t port = 0u; port < padAreas.size(); ++port)
        {
            const uint32_t padArea = padAreas[port];
            if (padArea == 0u)
            {
                continue;
            }

            const uint32_t frameCounter = static_cast<uint32_t>(frameIndex * 2u + port * 0x10000u);
            writeStablePadFrame(rdram, padArea, frameCounter, buttons);
            writeStablePadFrame(rdram, padArea + 0x80u, frameCounter + 1u, buttons);
        }

        if (sifEnvEnabled("PS2X_TRACE_PAD_SCRIPT") &&
            g_sifPadLastPressedMask != pressedMask)
        {
            g_sifPadLastPressedMask = pressedMask;
            std::cout << "[pad:script:sif] frame=" << frameIndex
                      << " pressedMask=0x" << std::hex << pressedMask
                      << " buttons=0x" << buttons
                      << " pad0=0x" << padAreas[0]
                      << " pad1=0x" << padAreas[1]
                      << std::dec << std::endl;
        }
    }
}
