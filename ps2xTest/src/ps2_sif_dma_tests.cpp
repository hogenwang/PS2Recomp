#include "MiniTest.h"
#include "ps2_runtime.h"
#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#include <array>
#include <cstdint>
#include <cstring>
#include <cstdlib>
#include <unordered_set>
#include <vector>

#include "Syscalls/Helpers/State.h"

namespace ps2_stubs
{
    void resetSifState();
    void pumpSifPadScriptInput(uint8_t *rdram);
}

namespace
{
    struct TestEnv
    {
        std::vector<uint8_t> rdram;
        R5900Context ctx{};
        PS2Runtime runtime;

        TestEnv() : rdram(PS2_RAM_SIZE, 0u)
        {
            ps2_stubs::resetSifState();
            ps2_syscalls::resetSoundDriverRpcState();
            ps2_syscalls::clearSoundDriverCompatLayout();
            ps2_syscalls::clearDtxCompatLayout();
            std::memset(&ctx, 0, sizeof(ctx));
        }
    };

    void setRecvxDtxCompatLayout()
    {
        PS2DtxCompatLayout layout{};
        layout.rpcSid = 0x7D000000u;
        layout.urpcObjBase = 0x01F18000u;
        layout.urpcObjLimit = 0x01F1FF00u;
        layout.urpcObjStride = 0x20u;
        layout.urpcFnTableBase = 0x0034FED0u;
        layout.urpcObjTableBase = 0x0034FFD0u;
        layout.dispatcherFuncAddr = 0x002FABC0u;
        ps2_syscalls::setDtxCompatLayout(layout);
    }

    #pragma pack(push, 1)
    struct Ps2SifDmaTransfer
    {
        uint32_t src;
        uint32_t dest;
        int32_t size;
        int32_t attr;
    };

    struct SifRpcHeader
    {
        uint32_t pkt_addr;
        uint32_t rpc_id;
        int32_t sema_id;
        uint32_t mode;
    };

    struct SifRpcReceiveData
    {
        SifRpcHeader hdr;
        uint32_t src;
        uint32_t dest;
        int32_t size;
    };
    #pragma pack(pop)

    static_assert(sizeof(Ps2SifDmaTransfer) == 16u, "Unexpected Ps2SifDmaTransfer size.");
    static_assert(sizeof(SifRpcReceiveData) == 28u, "Unexpected SifRpcReceiveData size.");

    void setRegU32(R5900Context &ctx, int reg, uint32_t value)
    {
        ctx.r[reg] = _mm_set_epi64x(0, static_cast<int64_t>(value));
    }

    int32_t getRegS32(const R5900Context &ctx, int reg)
    {
        return static_cast<int32_t>(::getRegU32(&ctx, reg));
    }

    void writeGuestU32(uint8_t *rdram, uint32_t addr, uint32_t value)
    {
        std::memcpy(rdram + addr, &value, sizeof(value));
    }

    uint32_t readGuestU32(const uint8_t *rdram, uint32_t addr)
    {
        uint32_t value = 0;
        std::memcpy(&value, rdram + addr, sizeof(value));
        return value;
    }

    uint16_t readGuestU16(const uint8_t *rdram, uint32_t addr)
    {
        uint16_t value = 0;
        std::memcpy(&value, rdram + addr, sizeof(value));
        return value;
    }

    void setTestEnv(const char *name, const char *value)
    {
#if defined(_WIN32)
        _putenv_s(name, value ? value : "");
#else
        if (value && value[0] != '\0')
        {
            setenv(name, value, 1);
        }
        else
        {
            unsetenv(name);
        }
#endif
    }

    void writeGuestS16(uint8_t *rdram, uint32_t addr, int16_t value)
    {
        std::memcpy(rdram + addr, &value, sizeof(value));
    }

    int16_t readGuestS16(const uint8_t *rdram, uint32_t addr)
    {
        int16_t value = 0;
        std::memcpy(&value, rdram + addr, sizeof(value));
        return value;
    }

    uint32_t g_dmacHandlerWriteAddr = 0u;
    uint32_t g_dmacHandlerValue = 0u;
    uint32_t g_dmacHandlerLastCause = 0u;
    uint32_t g_dmacHandlerLastArg = 0u;
    int32_t g_dmacHandlerThreadId = 0;

    void testDmacHandler(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        (void)runtime;
        g_dmacHandlerLastCause = ::getRegU32(ctx, 4);
        g_dmacHandlerLastArg = ::getRegU32(ctx, 5);
        if (g_dmacHandlerWriteAddr != 0u)
        {
            writeGuestU32(rdram, g_dmacHandlerWriteAddr, g_dmacHandlerValue);
        }
        ctx->pc = 0u;
    }

    void testDmacGetThreadIdHandler(uint8_t *rdram, R5900Context *ctx, PS2Runtime *runtime)
    {
        ps2_syscalls::GetThreadId(rdram, ctx, runtime);
        g_dmacHandlerThreadId = getRegS32(*ctx, 2);
        ctx->pc = 0u;
    }

    struct ScopedTestThreadId
    {
        explicit ScopedTestThreadId(int tid)
            : previous(g_currentThreadId)
        {
            g_currentThreadId = tid;
        }

        ~ScopedTestThreadId()
        {
            g_currentThreadId = previous;
        }

        int previous;
    };
}

void register_ps2_sif_dma_tests()
{
    MiniTest::Case("PS2SifDma", [](TestCase &tc)
    {
        tc.Run("sceSifSetDma copies payload and sceSifDmaStat reports complete", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kDescAddr = 0x00020000u;
            constexpr uint32_t kSrcAddr = 0x00020100u;
            constexpr uint32_t kDstAddr = 0x00020200u;

            std::array<uint8_t, 16> payload{};
            for (size_t i = 0; i < payload.size(); ++i)
            {
                payload[i] = static_cast<uint8_t>(0x30u + i);
            }
            std::memcpy(env.rdram.data() + kSrcAddr, payload.data(), payload.size());
            std::memset(env.rdram.data() + kDstAddr, 0, payload.size());

            const Ps2SifDmaTransfer desc{
                kSrcAddr,
                kDstAddr,
                static_cast<int32_t>(payload.size()),
                0};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t dmaId = getRegS32(env.ctx, 2);
            t.IsTrue(dmaId > 0, "sceSifSetDma should return a positive transfer id on success");

            t.IsTrue(std::memcmp(env.rdram.data() + kDstAddr, payload.data(), payload.size()) == 0,
                     "sceSifSetDma should copy transfer payload to destination");

            setRegU32(env.ctx, 4, static_cast<uint32_t>(dmaId));
            ps2_stubs::sceSifDmaStat(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) < 0, "sceSifDmaStat should be negative when transfer is complete");
        });

        tc.Run("isceSifSetDma and isceSifSetDChain alias the SIF DMA helpers", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kDescAddr = 0x00020240u;
            constexpr uint32_t kSrcAddr = 0x00020340u;
            constexpr uint32_t kDstAddr = 0x00020440u;

            std::array<uint8_t, 12> payload{};
            for (size_t i = 0; i < payload.size(); ++i)
            {
                payload[i] = static_cast<uint8_t>(0x50u + i);
            }
            std::memcpy(env.rdram.data() + kSrcAddr, payload.data(), payload.size());
            std::memset(env.rdram.data() + kDstAddr, 0, payload.size());

            const Ps2SifDmaTransfer desc{
                kSrcAddr,
                kDstAddr,
                static_cast<int32_t>(payload.size()),
                0};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::isceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "isceSifSetDma should report a successful transfer id");
            t.IsTrue(std::memcmp(env.rdram.data() + kDstAddr, payload.data(), payload.size()) == 0,
                     "isceSifSetDma should copy transfer payload like sceSifSetDma");

            ps2_stubs::isceSifSetDChain(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), 0, "isceSifSetDChain should mirror sceSifSetDChain");
        });

        tc.Run("sceSifSetDma dispatches enabled SIF DMAC handlers", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kDescAddr = 0x00020300u;
            constexpr uint32_t kSrcAddr = 0x00020400u;
            constexpr uint32_t kDstAddr = 0x00020500u;
            constexpr uint32_t kHandlerAddr = 0x00100000u;
            constexpr uint32_t kHandlerWriteAddr = 0x00020600u;
            constexpr uint32_t kHandlerArg = 0x12345678u;

            g_dmacHandlerWriteAddr = kHandlerWriteAddr;
            g_dmacHandlerValue = 0xCAFEBABEu;
            g_dmacHandlerLastCause = 0u;
            g_dmacHandlerLastArg = 0u;
            env.runtime.registerFunction(kHandlerAddr, &testDmacHandler);

            setRegU32(env.ctx, 4, 5u);
            setRegU32(env.ctx, 5, kHandlerAddr);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kHandlerArg);
            ps2_syscalls::AddDmacHandler(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t handlerId = getRegS32(env.ctx, 2);
            t.IsTrue(handlerId > 0, "AddDmacHandler should register a handler");

            setRegU32(env.ctx, 4, 5u);
            ps2_syscalls::EnableDmac(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), 0, "EnableDmac should succeed");

            std::array<uint8_t, 16> payload{};
            for (size_t i = 0; i < payload.size(); ++i)
            {
                payload[i] = static_cast<uint8_t>(0x40u + i);
            }
            std::memcpy(env.rdram.data() + kSrcAddr, payload.data(), payload.size());

            const Ps2SifDmaTransfer desc{
                kSrcAddr,
                kDstAddr,
                static_cast<int32_t>(payload.size()),
                0};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);

            t.IsTrue(getRegS32(env.ctx, 2) > 0, "sceSifSetDma should still report success");
            t.Equals(readGuestU32(env.rdram.data(), kHandlerWriteAddr), g_dmacHandlerValue,
                     "sceSifSetDma should invoke registered DMAC handlers");
            t.Equals(g_dmacHandlerLastCause, 5u, "DMAC handler should observe the SIF cause");
            t.Equals(g_dmacHandlerLastArg, kHandlerArg, "DMAC handler should receive registered argument");
        });

        tc.Run("DMAC handlers run with the registering EE thread identity", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kDescAddr = 0x00020380u;
            constexpr uint32_t kSrcAddr = 0x00020480u;
            constexpr uint32_t kDstAddr = 0x00020580u;
            constexpr uint32_t kHandlerAddr = 0x00100020u;

            g_dmacHandlerThreadId = 0;
            env.runtime.registerFunction(kHandlerAddr, &testDmacGetThreadIdHandler);

            setRegU32(env.ctx, 4, 5u);
            setRegU32(env.ctx, 5, kHandlerAddr);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, 0u);
            ps2_syscalls::AddDmacHandler(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t handlerId = getRegS32(env.ctx, 2);
            t.IsTrue(handlerId > 0, "AddDmacHandler should register a handler");

            std::array<uint8_t, 8> payload{};
            for (size_t i = 0; i < payload.size(); ++i)
            {
                payload[i] = static_cast<uint8_t>(0x60u + i);
            }
            std::memcpy(env.rdram.data() + kSrcAddr, payload.data(), payload.size());

            const Ps2SifDmaTransfer desc{
                kSrcAddr,
                kDstAddr,
                static_cast<int32_t>(payload.size()),
                0};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);

            t.IsTrue(getRegS32(env.ctx, 2) > 0, "sceSifSetDma should still report success");
            t.Equals(g_dmacHandlerThreadId, 1, "handler GetThreadId should see the registering EE thread");

            setRegU32(env.ctx, 4, 5u);
            setRegU32(env.ctx, 5, static_cast<uint32_t>(handlerId));
            ps2_syscalls::RemoveDmacHandler(env.rdram.data(), &env.ctx, &env.runtime);
        });

        tc.Run("DMAC handlers restore owner identity from interrupt worker context", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kDescAddr = 0x000203C0u;
            constexpr uint32_t kSrcAddr = 0x000204C0u;
            constexpr uint32_t kDstAddr = 0x000205C0u;
            constexpr uint32_t kHandlerAddr = 0x00100030u;

            ScopedTestThreadId testThread(3);

            g_dmacHandlerThreadId = 0;
            env.runtime.registerFunction(kHandlerAddr, &testDmacGetThreadIdHandler);

            setRegU32(env.ctx, 4, 5u);
            setRegU32(env.ctx, 5, kHandlerAddr);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, 0u);
            ps2_syscalls::AddDmacHandler(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t handlerId = getRegS32(env.ctx, 2);
            t.IsTrue(handlerId > 0, "AddDmacHandler should register a handler with owner tid 3");

            g_currentThreadId = -1;

            std::array<uint8_t, 8> payload{};
            for (size_t i = 0; i < payload.size(); ++i)
            {
                payload[i] = static_cast<uint8_t>(0x68u + i);
            }
            std::memcpy(env.rdram.data() + kSrcAddr, payload.data(), payload.size());

            const Ps2SifDmaTransfer desc{
                kSrcAddr,
                kDstAddr,
                static_cast<int32_t>(payload.size()),
                0};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);

            t.IsTrue(getRegS32(env.ctx, 2) > 0, "sceSifSetDma should still report success");
            t.Equals(g_dmacHandlerThreadId, 3, "handler GetThreadId should force the registered owner over worker tid");
            t.Equals(g_currentThreadId, -1, "DMAC dispatch should restore the worker thread id after callback");

            setRegU32(env.ctx, 4, 5u);
            setRegU32(env.ctx, 5, static_cast<uint32_t>(handlerId));
            ps2_syscalls::RemoveDmacHandler(env.rdram.data(), &env.ctx, &env.runtime);
        });

        tc.Run("sceSifSetDma acknowledges blocking SIF RPC call packets", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kSemaParamAddr = 0x00020200u;
            constexpr uint32_t kClientAddr = 0x00020300u;
            constexpr uint32_t kRecvAddr = 0x00020400u;
            constexpr uint32_t kPacketAddr = 0x00020500u;
            constexpr uint32_t kDescAddr = 0x00020600u;

            const uint32_t semaParam[6] = {
                0u,
                1u,
                0u,
                0u,
                0u,
                0u};
            std::memcpy(env.rdram.data() + kSemaParamAddr, semaParam, sizeof(semaParam));

            setRegU32(env.ctx, 4, kSemaParamAddr);
            ps2_syscalls::CreateSema(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t semaId = getRegS32(env.ctx, 2);
            t.IsTrue(semaId > 0, "CreateSema should return a positive semaphore id");

            writeGuestU32(env.rdram.data(), kClientAddr + 0x00u, kPacketAddr);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x04u, 2u);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x08u, static_cast<uint32_t>(semaId));
            writeGuestU32(env.rdram.data(), kClientAddr + 0x0Cu, 0u);
            writeGuestU32(env.rdram.data(), 0u, 0x11223344u);

            std::memset(env.rdram.data() + kRecvAddr, 0xA5, 0x10u);

            const uint32_t packetWords[] = {
                0x00000440u, // psize=0x40, dsize=0x04
                0x00000000u,
                0x8000000Au,
                0x00000000u,
                0x00000005u,
                kPacketAddr | 0x20000000u,
                0x00000002u,
                kClientAddr,
                0x00000000u,
                0x00000004u,
                kRecvAddr,
                0x00000010u,
                0x00000001u,
                0x01F10000u,
                0x00000000u,
                0x00000000u};
            std::memcpy(env.rdram.data() + kPacketAddr, packetWords, sizeof(packetWords));

            const Ps2SifDmaTransfer desc{
                kPacketAddr,
                0u,
                static_cast<int32_t>(sizeof(packetWords)),
                0x44};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, static_cast<uint32_t>(semaId));
            ps2_syscalls::PollSema(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_SEMA_ZERO, "semaphore should start empty");

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "sceSifSetDma should still report success");

            setRegU32(env.ctx, 4, static_cast<uint32_t>(semaId));
            ps2_syscalls::PollSema(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "blocking SIF RPC call should signal its client sema");
            t.Equals(readGuestU32(env.rdram.data(), kClientAddr), 0u, "RPC completion should clear client packet address");
            t.Equals(readGuestU32(env.rdram.data(), kPacketAddr + 0x10u) & 1u, 0u,
                     "RPC completion should release the command request slot");
            t.Equals(readGuestU32(env.rdram.data(), kPacketAddr + 0x18u), 0u,
                     "RPC completion should clear the command request cookie");
            t.Equals(readGuestU32(env.rdram.data(), kRecvAddr), 0u, "fallback RPC response should clear receive buffer");
            t.Equals(readGuestU32(env.rdram.data(), 0u), 0x11223344u,
                     "SIF command DMA to IOP address zero should not overwrite EE RDRAM zero");
        });

        tc.Run("sceSifSetDma acknowledges blocking SIF RPC bind packets", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kSemaParamAddr = 0x00020200u;
            constexpr uint32_t kClientAddr = 0x00020300u;
            constexpr uint32_t kPacketAddr = 0x00020400u;
            constexpr uint32_t kDescAddr = 0x00020500u;
            constexpr uint32_t kPadSid = 0x80000100u;

            const uint32_t semaParam[6] = {
                0u,
                1u,
                0u,
                0u,
                0u,
                0u};
            std::memcpy(env.rdram.data() + kSemaParamAddr, semaParam, sizeof(semaParam));

            setRegU32(env.ctx, 4, kSemaParamAddr);
            ps2_syscalls::CreateSema(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t semaId = getRegS32(env.ctx, 2);
            t.IsTrue(semaId > 0, "CreateSema should return a positive semaphore id");

            writeGuestU32(env.rdram.data(), kClientAddr + 0x00u, kPacketAddr);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x04u, 1u);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x08u, static_cast<uint32_t>(semaId));
            writeGuestU32(env.rdram.data(), kClientAddr + 0x0Cu, 0u);

            const uint32_t packetWords[] = {
                0x00000040u,
                0x00000000u,
                0x80000009u,
                0x00000000u,
                0x00000045u,
                kPacketAddr | 0x20000000u,
                0x00000021u,
                kClientAddr,
                kPadSid,
                0x00000000u,
                0x00000000u,
                0x00000000u,
                0x00000000u,
                0x00000000u,
                0x00000000u,
                0x00000000u};
            std::memcpy(env.rdram.data() + kPacketAddr, packetWords, sizeof(packetWords));

            const Ps2SifDmaTransfer desc{
                kPacketAddr,
                0u,
                static_cast<int32_t>(sizeof(packetWords)),
                0x44};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, static_cast<uint32_t>(semaId));
            ps2_syscalls::PollSema(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_SEMA_ZERO, "semaphore should start empty");

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "SIF RPC bind DMA should report success");

            setRegU32(env.ctx, 4, static_cast<uint32_t>(semaId));
            ps2_syscalls::PollSema(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "blocking SIF RPC bind should signal its client sema");
            t.Equals(readGuestU32(env.rdram.data(), kClientAddr + 0x00u), 0u,
                     "bind completion should clear client packet address");
            t.Equals(readGuestU32(env.rdram.data(), kClientAddr + 0x04u), 0x21u,
                     "bind completion should preserve the packet RPC id");
            t.IsTrue(readGuestU32(env.rdram.data(), kClientAddr + 0x14u) != 0u,
                     "bind completion should provide a remote server buffer");
            t.IsTrue(readGuestU32(env.rdram.data(), kClientAddr + 0x24u) != 0u,
                     "bind completion should provide a remote server pointer");
            t.Equals(readGuestU32(env.rdram.data(), readGuestU32(env.rdram.data(), kClientAddr + 0x24u)), kPadSid,
                     "packet bind should seed a server record with the requested sid");
        });

        tc.Run("sceSifSetDma handles PAD open RPC packet and seeds stable pad data", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kSemaParamAddr = 0x00020200u;
            constexpr uint32_t kClientAddr = 0x00020300u;
            constexpr uint32_t kBindPacketAddr = 0x00020400u;
            constexpr uint32_t kCallPacketAddr = 0x00020500u;
            constexpr uint32_t kDescAddr = 0x00020600u;
            constexpr uint32_t kRecvAddr = 0x00020700u;
            constexpr uint32_t kPadAreaAddr = 0x00020800u;
            constexpr uint32_t kPadSid = 0x80000100u;

            const uint32_t semaParam[6] = {
                0u,
                1u,
                0u,
                0u,
                0u,
                0u};
            std::memcpy(env.rdram.data() + kSemaParamAddr, semaParam, sizeof(semaParam));

            setRegU32(env.ctx, 4, kSemaParamAddr);
            ps2_syscalls::CreateSema(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t semaId = getRegS32(env.ctx, 2);
            t.IsTrue(semaId > 0, "CreateSema should return a positive semaphore id");

            writeGuestU32(env.rdram.data(), kClientAddr + 0x00u, kBindPacketAddr);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x04u, 1u);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x08u, static_cast<uint32_t>(semaId));
            writeGuestU32(env.rdram.data(), kClientAddr + 0x0Cu, 0u);

            const uint32_t bindPacketWords[] = {
                0x00000040u,
                0x00000000u,
                0x80000009u,
                0x00000000u,
                0x00000046u,
                kBindPacketAddr | 0x20000000u,
                0x00000022u,
                kClientAddr,
                kPadSid,
                0x00000000u,
                0x00000000u,
                0x00000000u,
                0x00000000u,
                0x00000000u,
                0x00000000u,
                0x00000000u};
            std::memcpy(env.rdram.data() + kBindPacketAddr, bindPacketWords, sizeof(bindPacketWords));

            Ps2SifDmaTransfer desc{
                kBindPacketAddr,
                0u,
                static_cast<int32_t>(sizeof(bindPacketWords)),
                0x44};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "SIF RPC bind DMA should report success");

            setRegU32(env.ctx, 4, static_cast<uint32_t>(semaId));
            ps2_syscalls::PollSema(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "bind completion should make the semaphore available");

            writeGuestU32(env.rdram.data(), kRecvAddr + 0x00u, 0x01u);
            writeGuestU32(env.rdram.data(), kRecvAddr + 0x04u, 0u);
            writeGuestU32(env.rdram.data(), kRecvAddr + 0x08u, 0u);
            writeGuestU32(env.rdram.data(), kRecvAddr + 0x10u, kPadAreaAddr);
            std::memset(env.rdram.data() + kPadAreaAddr, 0xA5, 0x100u);

            const uint32_t callPacketWords[] = {
                0x00000040u,
                0x00000000u,
                0x8000000Au,
                0x00000000u,
                0x00000047u,
                kCallPacketAddr | 0x20000000u,
                0x00000023u,
                kClientAddr,
                0x00000001u,
                0x00000080u,
                kRecvAddr,
                0x00000080u,
                0x00000001u,
                readGuestU32(env.rdram.data(), kClientAddr + 0x24u),
                0x00000000u,
                0x00000000u};
            std::memcpy(env.rdram.data() + kCallPacketAddr, callPacketWords, sizeof(callPacketWords));

            desc = Ps2SifDmaTransfer{
                kCallPacketAddr,
                0u,
                static_cast<int32_t>(sizeof(callPacketWords)),
                0x44};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, static_cast<uint32_t>(semaId));
            ps2_syscalls::PollSema(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_SEMA_ZERO, "call semaphore should start empty after the bind poll");

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "PAD open RPC DMA should report success");

            setRegU32(env.ctx, 4, static_cast<uint32_t>(semaId));
            ps2_syscalls::PollSema(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "blocking PAD RPC should signal its client sema");
            t.Equals(readGuestU32(env.rdram.data(), kRecvAddr + 0x0Cu), 1u,
                     "PAD open should report success in response word 3");
            t.Equals(readGuestU32(env.rdram.data(), kRecvAddr + 0x14u), kPadAreaAddr,
                     "PAD open should return the seeded pad area as the pad buffer");
            t.Equals(readGuestU32(env.rdram.data(), kPadAreaAddr + 0x58u), 1u,
                     "first PAD frame should have an initial frame counter");
            t.Equals(readGuestU32(env.rdram.data(), kPadAreaAddr + 0xD8u), 2u,
                     "second PAD frame should have the newer frame counter");
            t.Equals(static_cast<uint32_t>(env.rdram[kPadAreaAddr + 0x81u]), 0x73u,
                     "newer PAD frame should expose the DualShock analog mode byte");
            t.Equals(static_cast<uint32_t>(env.rdram[kPadAreaAddr + 0xE5u]), 0x73u,
                     "newer PAD frame should expose the full current mode id");
            t.Equals(static_cast<uint32_t>(env.rdram[kPadAreaAddr + 0xF0u]), 6u,
                     "newer PAD frame should report stable state");
            t.Equals(static_cast<uint32_t>(env.rdram[kPadAreaAddr + 0xF1u]), 0u,
                     "newer PAD frame should report no pending request");
            t.Equals(static_cast<uint32_t>(readGuestU16(env.rdram.data(), kPadAreaAddr + 0x82u)), 0xFFFFu,
                     "newer PAD frame should report all buttons released");

            setTestEnv("PS2X_PAD_SCRIPT", "1:left+circle:2");
            ps2_stubs::pumpSifPadScriptInput(env.rdram.data());
            const uint16_t scriptedButtons = readGuestU16(env.rdram.data(), kPadAreaAddr + 0x82u);
            t.IsTrue((scriptedButtons & (1u << 7)) == 0u,
                     "PAD pump should press left in the seeded SIF pad buffer");
            t.IsTrue((scriptedButtons & (1u << 13)) == 0u,
                     "PAD pump should press circle in the seeded SIF pad buffer");
            t.IsTrue(readGuestU32(env.rdram.data(), kPadAreaAddr + 0xD8u) > 2u,
                     "PAD pump should advance the current frame counter");
            setTestEnv("PS2X_PAD_SCRIPT", "");
        });

        tc.Run("sceSifSetDma returns LOADFILE version for RPC get-version packets", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kSemaParamAddr = 0x00020200u;
            constexpr uint32_t kClientAddr = 0x00020300u;
            constexpr uint32_t kRecvAddr = 0x00020400u;
            constexpr uint32_t kPacketAddr = 0x00020500u;
            constexpr uint32_t kDescAddr = 0x00020600u;

            const uint32_t semaParam[6] = {
                0u,
                1u,
                0u,
                0u,
                0u,
                0u};
            std::memcpy(env.rdram.data() + kSemaParamAddr, semaParam, sizeof(semaParam));

            setRegU32(env.ctx, 4, kSemaParamAddr);
            ps2_syscalls::CreateSema(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t semaId = getRegS32(env.ctx, 2);
            t.IsTrue(semaId > 0, "CreateSema should return a positive semaphore id");

            writeGuestU32(env.rdram.data(), kClientAddr + 0x00u, kPacketAddr);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x04u, 3u);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x08u, static_cast<uint32_t>(semaId));
            writeGuestU32(env.rdram.data(), kClientAddr + 0x0Cu, 0u);
            writeGuestU32(env.rdram.data(), kRecvAddr, 0xA5A5A5A5u);

            const uint32_t packetWords[] = {
                0x00000040u,
                0x00000000u,
                0x8000000Au,
                0x00000000u,
                0x00020005u,
                kPacketAddr | 0x20000000u,
                0x00000003u,
                kClientAddr,
                0x000000FFu,
                0x00000000u,
                kRecvAddr,
                0x00000004u,
                0x00000001u,
                0x01F10100u,
                0x00000000u,
                0x00000000u};
            std::memcpy(env.rdram.data() + kPacketAddr, packetWords, sizeof(packetWords));

            const Ps2SifDmaTransfer desc{
                kPacketAddr,
                0u,
                static_cast<int32_t>(sizeof(packetWords)),
                0x44};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "LOADFILE get-version DMA should report success");
            t.Equals(readGuestU32(env.rdram.data(), kRecvAddr), 0x30303133u,
                     "LOADFILE get-version should return the PS2SDK IOP version word");
        });

        tc.Run("sceSifSetDma handles IOP heap allocation RPC packets", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kSemaParamAddr = 0x00020200u;
            constexpr uint32_t kClientAddr = 0x00020300u;
            constexpr uint32_t kSendAddr = 0x00020400u;
            constexpr uint32_t kPacketAddr = 0x00020500u;
            constexpr uint32_t kDescAddr = 0x00020600u;
            constexpr uint32_t kRecvAddr = 0x00020700u;
            constexpr uint32_t kServerAddr = 0x00020800u;
            constexpr uint32_t kRequestSize = 0x8D0u;

            const uint32_t semaParam[6] = {
                0u,
                1u,
                0u,
                0u,
                0u,
                0u};
            std::memcpy(env.rdram.data() + kSemaParamAddr, semaParam, sizeof(semaParam));

            setRegU32(env.ctx, 4, kSemaParamAddr);
            ps2_syscalls::CreateSema(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t semaId = getRegS32(env.ctx, 2);
            t.IsTrue(semaId > 0, "CreateSema should return a positive semaphore id");

            writeGuestU32(env.rdram.data(), kClientAddr + 0x00u, kPacketAddr);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x04u, 0x17u);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x08u, static_cast<uint32_t>(semaId));
            writeGuestU32(env.rdram.data(), kClientAddr + 0x0Cu, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr, kRequestSize);
            writeGuestU32(env.rdram.data(), kRecvAddr, 0u);
            writeGuestU32(env.rdram.data(), kServerAddr, 0x80000003u);

            const uint32_t packetWords[] = {
                0x00000040u,
                0x00000000u,
                0x8000000Au,
                0x00000000u,
                0x00160005u,
                kPacketAddr | 0x20000000u,
                0x00000017u,
                kClientAddr,
                0x00000001u,
                0x00000004u,
                kRecvAddr,
                0x00000004u,
                0x00000001u,
                kServerAddr,
                0x00000000u,
                0x00000000u};
            std::memcpy(env.rdram.data() + kPacketAddr, packetWords, sizeof(packetWords));

            const Ps2SifDmaTransfer descs[] = {
                {kSendAddr, 0u, 4, 0},
                {kPacketAddr, 0u, static_cast<int32_t>(sizeof(packetWords)), 0x44}};
            std::memcpy(env.rdram.data() + kDescAddr, descs, sizeof(descs));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 2u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "IOP heap alloc RPC DMA should report success");

            setRegU32(env.ctx, 4, static_cast<uint32_t>(semaId));
            ps2_syscalls::PollSema(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "blocking IOP heap RPC should signal its client sema");

            const uint32_t iopAddr = readGuestU32(env.rdram.data(), kRecvAddr);
            t.IsTrue(iopAddr != 0u, "IOP heap alloc RPC should return a non-zero IOP address");
            t.Equals(iopAddr & 0x0Fu, 0u, "IOP heap alloc RPC should return an aligned address");
        });

        tc.Run("sceSifSetDma handles KOFXI custom IOP resource create RPC packets", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kSemaParamAddr = 0x00020200u;
            constexpr uint32_t kClientAddr = 0x00020300u;
            constexpr uint32_t kSendAddr = 0x00020400u;
            constexpr uint32_t kPacketAddr = 0x00020500u;
            constexpr uint32_t kDescAddr = 0x00020600u;
            constexpr uint32_t kRecvAddr = 0x00020700u;
            constexpr uint32_t kServerAddr = 0x00020800u;
            constexpr uint32_t kKofxiIopSid = 0x90000200u;

            const uint32_t semaParam[6] = {
                0u,
                1u,
                0u,
                0u,
                0u,
                0u};
            std::memcpy(env.rdram.data() + kSemaParamAddr, semaParam, sizeof(semaParam));

            setRegU32(env.ctx, 4, kSemaParamAddr);
            ps2_syscalls::CreateSema(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t semaId = getRegS32(env.ctx, 2);
            t.IsTrue(semaId > 0, "CreateSema should return a positive semaphore id");

            writeGuestU32(env.rdram.data(), kClientAddr + 0x00u, kPacketAddr);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x04u, 0x18u);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x08u, static_cast<uint32_t>(semaId));
            writeGuestU32(env.rdram.data(), kClientAddr + 0x0Cu, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, 0x01A00040u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x0Cu, 0x00000880u);
            writeGuestU32(env.rdram.data(), kRecvAddr, 0u);
            writeGuestU32(env.rdram.data(), kServerAddr, kKofxiIopSid);

            const uint32_t packetWords[] = {
                0x00000040u,
                0x00000000u,
                0x8000000Au,
                0x00000000u,
                0x00170005u,
                kPacketAddr | 0x20000000u,
                0x00000018u,
                kClientAddr,
                0x00000002u,
                0x00000010u,
                kRecvAddr,
                0x00000004u,
                0x00000001u,
                kServerAddr,
                0x00000000u,
                0x00000000u};
            std::memcpy(env.rdram.data() + kPacketAddr, packetWords, sizeof(packetWords));

            const Ps2SifDmaTransfer descs[] = {
                {kSendAddr, 0u, 0x10, 0},
                {kPacketAddr, 0u, static_cast<int32_t>(sizeof(packetWords)), 0x44}};
            std::memcpy(env.rdram.data() + kDescAddr, descs, sizeof(descs));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 2u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "KOFXI custom RPC DMA should report success");

            setRegU32(env.ctx, 4, static_cast<uint32_t>(semaId));
            ps2_syscalls::PollSema(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "blocking KOFXI custom RPC should signal its client sema");
            t.IsTrue(readGuestU32(env.rdram.data(), kRecvAddr) != 0u,
                     "KOFXI custom resource create should return a non-zero handle");
        });

        tc.Run("sceSifSetDma handles KOFXI packet SJRMT create RPC packets", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kSemaParamAddr = 0x00020200u;
            constexpr uint32_t kClientAddr = 0x00020300u;
            constexpr uint32_t kSendAddr = 0x00020400u;
            constexpr uint32_t kPacketAddr = 0x00020500u;
            constexpr uint32_t kDescAddr = 0x00020600u;
            constexpr uint32_t kRecvAddr = 0x00020700u;
            constexpr uint32_t kServerAddr = 0x00020800u;
            constexpr uint32_t kKofxiIopSid = 0x90000200u;

            const uint32_t semaParam[6] = {
                0u,
                1u,
                0u,
                0u,
                0u,
                0u};
            std::memcpy(env.rdram.data() + kSemaParamAddr, semaParam, sizeof(semaParam));

            setRegU32(env.ctx, 4, kSemaParamAddr);
            ps2_syscalls::CreateSema(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t semaId = getRegS32(env.ctx, 2);
            t.IsTrue(semaId > 0, "CreateSema should return a positive semaphore id");

            writeGuestU32(env.rdram.data(), kClientAddr + 0x00u, kPacketAddr);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x04u, 0x1Cu);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x08u, static_cast<uint32_t>(semaId));
            writeGuestU32(env.rdram.data(), kClientAddr + 0x0Cu, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 1u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, 0x01A00940u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, 0x00000100u);
            writeGuestU32(env.rdram.data(), kRecvAddr, 0u);
            writeGuestU32(env.rdram.data(), kServerAddr, kKofxiIopSid);

            const uint32_t packetWords[] = {
                0x00000040u,
                0x00000000u,
                0x8000000Au,
                0x00000000u,
                0x001B0005u,
                kPacketAddr | 0x20000000u,
                0x0000001Cu,
                kClientAddr,
                0x00000422u,
                0x0000000Cu,
                kRecvAddr,
                0x00000004u,
                0x00000001u,
                kServerAddr,
                0x00000000u,
                0x00000000u};
            std::memcpy(env.rdram.data() + kPacketAddr, packetWords, sizeof(packetWords));

            const Ps2SifDmaTransfer descs[] = {
                {kSendAddr, 0u, 0x0C, 0},
                {kPacketAddr, 0u, static_cast<int32_t>(sizeof(packetWords)), 0x44}};
            std::memcpy(env.rdram.data() + kDescAddr, descs, sizeof(descs));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 2u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "KOFXI SJRMT create DMA should report success");

            setRegU32(env.ctx, 4, static_cast<uint32_t>(semaId));
            ps2_syscalls::PollSema(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "blocking KOFXI SJRMT create RPC should signal its client sema");
            t.IsTrue(readGuestU32(env.rdram.data(), kRecvAddr) != 0u,
                     "KOFXI SJRMT create should return a non-zero handle");
        });

        tc.Run("sceSifSetDma acknowledges KOFXI packet-created DTX work buffers", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kSemaParamAddr = 0x00021200u;
            constexpr uint32_t kClientAddr = 0x00021300u;
            constexpr uint32_t kSendAddr = 0x00021400u;
            constexpr uint32_t kPacketAddr = 0x00021500u;
            constexpr uint32_t kDescAddr = 0x00021600u;
            constexpr uint32_t kRecvAddr = 0x00021700u;
            constexpr uint32_t kServerAddr = 0x00021800u;
            constexpr uint32_t kEeWorkAddr = 0x00021A00u;
            constexpr uint32_t kIopWorkAddr = 0x00021E00u;
            constexpr uint32_t kKofxiIopSid = 0x90000200u;
            constexpr uint32_t kWorkLen = 0x100u;
            constexpr uint32_t kFooterTicketAddr = kEeWorkAddr + kWorkLen - sizeof(uint32_t);

            const uint32_t semaParam[6] = {
                0u,
                255u,
                0u,
                0u,
                0u,
                0u};
            std::memcpy(env.rdram.data() + kSemaParamAddr, semaParam, sizeof(semaParam));

            setRegU32(env.ctx, 4, kSemaParamAddr);
            ps2_syscalls::CreateSema(env.rdram.data(), &env.ctx, &env.runtime);
            const int32_t semaId = getRegS32(env.ctx, 2);
            t.IsTrue(semaId > 0, "CreateSema should return a positive semaphore id");

            writeGuestU32(env.rdram.data(), kClientAddr + 0x00u, kPacketAddr);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x04u, 0x18u);
            writeGuestU32(env.rdram.data(), kClientAddr + 0x08u, static_cast<uint32_t>(semaId));
            writeGuestU32(env.rdram.data(), kClientAddr + 0x0Cu, 0u);
            writeGuestU32(env.rdram.data(), kServerAddr, kKofxiIopSid);

            auto callKofxiPacketRpc = [&](uint32_t rpcNumber, uint32_t sendSize, uint32_t recvSize)
            {
                static uint32_t s_rpcId = 0x30u;
                const uint32_t packetWords[] = {
                    0x00000040u,
                    0x00000000u,
                    0x8000000Au,
                    0x00000000u,
                    (s_rpcId++ << 16u) | 0x0005u,
                    kPacketAddr | 0x20000000u,
                    0x00000018u,
                    kClientAddr,
                    rpcNumber,
                    sendSize,
                    kRecvAddr,
                    recvSize,
                    0x00000001u,
                    kServerAddr,
                    0x00000000u,
                    0x00000000u};
                std::memcpy(env.rdram.data() + kPacketAddr, packetWords, sizeof(packetWords));

                const Ps2SifDmaTransfer descs[] = {
                    {kSendAddr, 0u, static_cast<int32_t>(sendSize), 0},
                    {kPacketAddr, 0u, static_cast<int32_t>(sizeof(packetWords)), 0x44}};
                std::memcpy(env.rdram.data() + kDescAddr, descs, sizeof(descs));

                setRegU32(env.ctx, 4, kDescAddr);
                setRegU32(env.ctx, 5, 2u);
                ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
                t.IsTrue(getRegS32(env.ctx, 2) > 0, "KOFXI packet RPC DMA should report success");
            };

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, kEeWorkAddr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, kIopWorkAddr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x0Cu, kWorkLen);
            writeGuestU32(env.rdram.data(), kRecvAddr, 0u);
            callKofxiPacketRpc(2u, 0x10u, 0x04u);
            t.IsTrue(readGuestU32(env.rdram.data(), kRecvAddr) != 0u,
                     "KOFXI packet DTX create should return a non-zero remote handle");

            std::memset(env.rdram.data() + kEeWorkAddr, 0x44, kWorkLen);
            std::memset(env.rdram.data() + kIopWorkAddr, 0x00, kWorkLen);
            writeGuestU32(env.rdram.data(), kFooterTicketAddr, 1u);

            const Ps2SifDmaTransfer workDesc{
                kEeWorkAddr,
                kIopWorkAddr,
                static_cast<int32_t>(kWorkLen),
                0};
            std::memcpy(env.rdram.data() + kDescAddr, &workDesc, sizeof(workDesc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "KOFXI packet-created DTX DMA should report success");
            t.Equals(readGuestU32(env.rdram.data(), kFooterTicketAddr), 2u,
                     "KOFXI packet-created DTX DMA should advance the EE footer ticket");
        });

        tc.Run("sceSifSetDma acknowledges SIF reset command completion bit", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kDescAddr = 0x00020600u;
            constexpr uint32_t kPacketAddr = 0x00020700u;
            constexpr uint32_t kPacketSize = 0x68u;
            constexpr uint32_t kSifCmdResetCmd = 0x80000003u;

            writeGuestU32(env.rdram.data(), kPacketAddr + 0x00u, kPacketSize);
            writeGuestU32(env.rdram.data(), kPacketAddr + 0x08u, kSifCmdResetCmd);
            writeGuestU32(env.rdram.data(), kPacketAddr + 0x10u, 0x27u);
            writeGuestU32(env.rdram.data(), kPacketAddr + 0x14u, 0u);
            const char resetArg[] = "rom0:UDNL cdrom0:\\MODULES\\DNAS310.IMG;1";
            std::memcpy(env.rdram.data() + kPacketAddr + 0x18u, resetArg, sizeof(resetArg));

            const Ps2SifDmaTransfer desc{
                kPacketAddr,
                0u,
                static_cast<int32_t>(kPacketSize),
                0x44};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "reset command DMA should report success");

            setRegU32(env.ctx, 4, 0x4u);
            setRegU32(env.ctx, 5, 0x00040000u);
            ps2_stubs::sceSifSetReg(env.rdram.data(), &env.ctx, &env.runtime);
            setRegU32(env.ctx, 4, 0x4u);
            setRegU32(env.ctx, 5, 0x00010000u);
            ps2_stubs::sceSifSetReg(env.rdram.data(), &env.ctx, &env.runtime);
            setRegU32(env.ctx, 4, 0x4u);
            setRegU32(env.ctx, 5, 0x00020000u);
            ps2_stubs::sceSifSetReg(env.rdram.data(), &env.ctx, &env.runtime);

            setRegU32(env.ctx, 4, 0x4u);
            ps2_stubs::sceSifGetReg(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(::getRegU32(&env.ctx, 2), 0x00060000u,
                     "reset command should preserve boot-ready and expose reset-complete bits");
        });

        tc.Run("sceSifSetDma acknowledges DTX work-buffer transfers by advancing the EE footer ticket", [](TestCase &t)
        {
            TestEnv env;
            setRecvxDtxCompatLayout();

            constexpr uint32_t kClientAddr = 0x0002D000u;
            constexpr uint32_t kDtxSid = 0x7D000000u;
            constexpr uint32_t kSendAddr = 0x0002D100u;
            constexpr uint32_t kRecvAddr = 0x0002D200u;
            constexpr uint32_t kDescAddr = 0x0002D300u;
            constexpr uint32_t kEeWorkAddr = 0x0002D400u;
            constexpr uint32_t kIopWorkAddr = 0x0002D800u;
            constexpr uint32_t kDtxId = 3u;
            constexpr uint32_t kWorkLen = 0x100u;
            constexpr uint32_t kFooterTicketAddr = kEeWorkAddr + kWorkLen - sizeof(uint32_t);

            ps2_syscalls::SifInitRpc(env.rdram.data(), &env.ctx, &env.runtime);

            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, kDtxSid);
            setRegU32(env.ctx, 6, 0u);
            ps2_syscalls::SifBindRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "SifBindRpc should succeed for the DTX sid");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, kDtxId);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, kEeWorkAddr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, kIopWorkAddr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x0Cu, kWorkLen);
            writeGuestU32(env.rdram.data(), kRecvAddr + 0x00u, 0u);

            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 2u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 16u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "SifCallRpc should create the DTX transport");
            t.IsTrue(readGuestU32(env.rdram.data(), kRecvAddr) != 0u, "DTX create should return a remote handle");

            std::memset(env.rdram.data() + kEeWorkAddr, 0x44, kWorkLen);
            std::memset(env.rdram.data() + kIopWorkAddr, 0x00, kWorkLen);
            writeGuestU32(env.rdram.data(), kFooterTicketAddr, 1u);

            const Ps2SifDmaTransfer desc{
                kEeWorkAddr,
                kIopWorkAddr,
                static_cast<int32_t>(kWorkLen),
                0};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "sceSifSetDma should succeed for the DTX transfer");

            t.Equals(readGuestU32(env.rdram.data(), kFooterTicketAddr), 2u,
                     "sceSifSetDma should advance the EE footer ticket so DTX clears wait_flag");
        });

        tc.Run("sceSifSetDma applies SJX DTX payloads into the emulated SJRMT data ring", [](TestCase &t)
        {
            TestEnv env;
            setRecvxDtxCompatLayout();

            constexpr uint32_t kClientAddr = 0x0002E000u;
            constexpr uint32_t kDtxSid = 0x7D000000u;
            constexpr uint32_t kRecvAddr = 0x0002E100u;
            constexpr uint32_t kSendAddr = 0x0002E200u;
            constexpr uint32_t kDescAddr = 0x0002E300u;
            constexpr uint32_t kEeWorkAddr = 0x0002E400u;
            constexpr uint32_t kIopWorkAddr = 0x0002E800u;
            constexpr uint32_t kRingAddr = 0x0002EC00u;
            constexpr uint32_t kChunkDataAddr = 0x0002ED00u;
            constexpr uint32_t kWorkLen = 0x100u;
            constexpr uint32_t kChunkLen = 8u;

            ps2_syscalls::SifInitRpc(env.rdram.data(), &env.ctx, &env.runtime);

            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, kDtxSid);
            setRegU32(env.ctx, 6, 0u);
            ps2_syscalls::SifBindRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "SifBindRpc should bind the DTX sid");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 1u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, kRingAddr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, kWorkLen);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x422u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 12u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            const uint32_t sjrmtHandle = readGuestU32(env.rdram.data(), kRecvAddr);
            t.IsTrue(sjrmtHandle != 0u, "SJRMT_UNI_CREATE should return a handle");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, sjrmtHandle);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, 1u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x0Cu, 0x12345678u);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x400u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 16u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            const uint32_t sjxHandle = readGuestU32(env.rdram.data(), kRecvAddr);
            t.IsTrue(sjxHandle != 0u, "SJX_CREATE should return a handle");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, kEeWorkAddr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, kIopWorkAddr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x0Cu, kWorkLen);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 2u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 16u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "DTX create should succeed");

            std::memset(env.rdram.data() + kEeWorkAddr, 0, kWorkLen);
            std::memset(env.rdram.data() + kIopWorkAddr, 0, kWorkLen);
            std::memset(env.rdram.data() + kRingAddr, 0, kWorkLen);
            for (uint32_t i = 0; i < kChunkLen; ++i)
            {
                env.rdram[kChunkDataAddr + i] = static_cast<uint8_t>(0xA0u + i);
            }

            writeGuestU32(env.rdram.data(), kEeWorkAddr + 0x00u, 1u);
            env.rdram[kEeWorkAddr + 0x10u] = 0u;
            env.rdram[kEeWorkAddr + 0x11u] = 1u;
            std::memcpy(env.rdram.data() + kEeWorkAddr + 0x12u, "\0\0", 2u);
            writeGuestU32(env.rdram.data(), kEeWorkAddr + 0x14u, sjxHandle);
            writeGuestU32(env.rdram.data(), kEeWorkAddr + 0x18u, kChunkDataAddr);
            writeGuestU32(env.rdram.data(), kEeWorkAddr + 0x1Cu, kChunkLen);
            writeGuestU32(env.rdram.data(), kEeWorkAddr + kWorkLen - sizeof(uint32_t), 1u);

            const Ps2SifDmaTransfer desc{
                kEeWorkAddr,
                kIopWorkAddr,
                static_cast<int32_t>(kWorkLen),
                0};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "sceSifSetDma should succeed for the SJX transport");
            t.Equals(env.rdram[kEeWorkAddr + 0x11u], static_cast<uint8_t>(0u),
                     "SJX DMA ack should rewrite the response line to room so EE recycles the chunk");
            t.Equals(readGuestU32(env.rdram.data(), kEeWorkAddr + kWorkLen - sizeof(uint32_t)), 2u,
                     "SJX DMA ack should still advance the EE footer ticket");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, sjrmtHandle);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, 1u);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x429u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 8u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(readGuestU32(env.rdram.data(), kRecvAddr), kChunkLen,
                     "SJX DMA should make SJRMT report available data");
            t.IsTrue(std::memcmp(env.rdram.data() + kRingAddr, env.rdram.data() + kChunkDataAddr, kChunkLen) == 0,
                     "SJX DMA should copy the chunk payload into the emulated SJRMT ring");
        });

        tc.Run("sceSifSetDma recognizes SJX DTX payloads from rotated EE work buffers", [](TestCase &t)
        {
            TestEnv env;
            setRecvxDtxCompatLayout();

            constexpr uint32_t kClientAddr = 0x00031000u;
            constexpr uint32_t kDtxSid = 0x7D000000u;
            constexpr uint32_t kRecvAddr = 0x00031100u;
            constexpr uint32_t kSendAddr = 0x00031200u;
            constexpr uint32_t kDescAddr = 0x00031300u;
            constexpr uint32_t kRegisteredEeWorkAddr = 0x00031400u;
            constexpr uint32_t kRegisteredIopWorkAddr = 0x00031800u;
            constexpr uint32_t kAltEeWorkAddr = 0x00031C00u;
            constexpr uint32_t kAltIopWorkAddr = 0x00032000u;
            constexpr uint32_t kRingAddr = 0x00032400u;
            constexpr uint32_t kChunkDataAddr = 0x00032500u;
            constexpr uint32_t kRegisteredWorkLen = 0x100u;
            constexpr uint32_t kAltWorkLen = 0x180u;
            constexpr uint32_t kChunkLen = 12u;

            ps2_syscalls::SifInitRpc(env.rdram.data(), &env.ctx, &env.runtime);

            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, kDtxSid);
            setRegU32(env.ctx, 6, 0u);
            ps2_syscalls::SifBindRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "SifBindRpc should bind the DTX sid");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 1u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, kRingAddr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, kRegisteredWorkLen);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x422u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 12u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            const uint32_t sjrmtHandle = readGuestU32(env.rdram.data(), kRecvAddr);
            t.IsTrue(sjrmtHandle != 0u, "SJRMT_UNI_CREATE should return a handle");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, sjrmtHandle);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, 1u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x0Cu, 0x87654321u);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x400u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 16u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            const uint32_t sjxHandle = readGuestU32(env.rdram.data(), kRecvAddr);
            t.IsTrue(sjxHandle != 0u, "SJX_CREATE should return a handle");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, kRegisteredEeWorkAddr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, kRegisteredIopWorkAddr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x0Cu, kRegisteredWorkLen);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 2u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 16u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "DTX create should succeed");

            std::memset(env.rdram.data() + kRegisteredEeWorkAddr, 0, kRegisteredWorkLen);
            std::memset(env.rdram.data() + kRegisteredIopWorkAddr, 0, kRegisteredWorkLen);
            std::memset(env.rdram.data() + kAltEeWorkAddr, 0, kAltWorkLen);
            std::memset(env.rdram.data() + kAltIopWorkAddr, 0, kAltWorkLen);
            std::memset(env.rdram.data() + kRingAddr, 0, kRegisteredWorkLen);
            for (uint32_t i = 0; i < kChunkLen; ++i)
            {
                env.rdram[kChunkDataAddr + i] = static_cast<uint8_t>(0xC0u + i);
            }

            writeGuestU32(env.rdram.data(), kAltEeWorkAddr + 0x00u, 1u);
            env.rdram[kAltEeWorkAddr + 0x10u] = 0u;
            env.rdram[kAltEeWorkAddr + 0x11u] = 1u;
            std::memcpy(env.rdram.data() + kAltEeWorkAddr + 0x12u, "\0\0", 2u);
            writeGuestU32(env.rdram.data(), kAltEeWorkAddr + 0x14u, sjxHandle);
            writeGuestU32(env.rdram.data(), kAltEeWorkAddr + 0x18u, kChunkDataAddr);
            writeGuestU32(env.rdram.data(), kAltEeWorkAddr + 0x1Cu, kChunkLen);
            writeGuestU32(env.rdram.data(), kAltEeWorkAddr + kAltWorkLen - sizeof(uint32_t), 9u);

            const Ps2SifDmaTransfer desc{
                kAltEeWorkAddr,
                kAltIopWorkAddr,
                static_cast<int32_t>(kAltWorkLen),
                0};
            std::memcpy(env.rdram.data() + kDescAddr, &desc, sizeof(desc));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "sceSifSetDma should succeed for the rotated SJX transport");
            t.Equals(env.rdram[kAltEeWorkAddr + 0x11u], static_cast<uint8_t>(0u),
                     "rotated SJX DMA ack should rewrite the response line to room");
            t.Equals(readGuestU32(env.rdram.data(), kAltEeWorkAddr + kAltWorkLen - sizeof(uint32_t)), 10u,
                     "rotated SJX DMA ack should advance the alternate EE footer ticket");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, sjrmtHandle);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, 1u);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x429u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 8u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(readGuestU32(env.rdram.data(), kRecvAddr), kChunkLen,
                     "rotated SJX DMA should make SJRMT report available data");
            t.IsTrue(std::memcmp(env.rdram.data() + kRingAddr, env.rdram.data() + kChunkDataAddr, kChunkLen) == 0,
                     "rotated SJX DMA should copy the chunk payload into the emulated SJRMT ring");
        });

        tc.Run("sceSifSetDma lets active PS2RNA playback drain emulated SJRMT data", [](TestCase &t)
        {
            TestEnv env;
            setRecvxDtxCompatLayout();

            constexpr uint32_t kClientAddr = 0x0002F000u;
            constexpr uint32_t kDtxSid = 0x7D000000u;
            constexpr uint32_t kRecvAddr = 0x0002F100u;
            constexpr uint32_t kSendAddr = 0x0002F200u;
            constexpr uint32_t kDesc0Addr = 0x0002F300u;
            constexpr uint32_t kDesc1Addr = 0x0002F320u;
            constexpr uint32_t kEeWork0Addr = 0x0002F400u;
            constexpr uint32_t kIopWork0Addr = 0x0002F800u;
            constexpr uint32_t kEeWork1Addr = 0x0002FC00u;
            constexpr uint32_t kIopWork1Addr = 0x00030000u;
            constexpr uint32_t kRingAddr = 0x00030400u;
            constexpr uint32_t kChunkDataAddr = 0x00030500u;
            constexpr uint32_t kWorkLen = 0x100u;
            constexpr uint32_t kChunkLen = 8u;

            ps2_syscalls::SifInitRpc(env.rdram.data(), &env.ctx, &env.runtime);

            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, kDtxSid);
            setRegU32(env.ctx, 6, 0u);
            ps2_syscalls::SifBindRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "SifBindRpc should bind the DTX sid");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 1u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, kRingAddr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, kWorkLen);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x422u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 12u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            const uint32_t sjrmtHandle = readGuestU32(env.rdram.data(), kRecvAddr);
            t.IsTrue(sjrmtHandle != 0u, "SJRMT_UNI_CREATE should return a handle");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, sjrmtHandle);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, 1u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x0Cu, 0xCAFEBABEu);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x400u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 16u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            const uint32_t sjxHandle = readGuestU32(env.rdram.data(), kRecvAddr);
            t.IsTrue(sjxHandle != 0u, "SJX_CREATE should return a handle");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 1u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, sjrmtHandle);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x0Cu, 0u);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x408u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 16u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            const uint32_t ps2RnaHandle = readGuestU32(env.rdram.data(), kRecvAddr);
            t.IsTrue(ps2RnaHandle != 0u, "PS2RNA_CREATE should return a handle");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 0u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, kEeWork0Addr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, kIopWork0Addr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x0Cu, kWorkLen);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 2u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 16u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "DTX create should succeed for SJX transport");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, 1u);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, kEeWork1Addr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x08u, kIopWork1Addr);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x0Cu, kWorkLen);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 2u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 16u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "DTX create should succeed for PS2RNA transport");

            std::memset(env.rdram.data() + kEeWork0Addr, 0, kWorkLen);
            std::memset(env.rdram.data() + kIopWork0Addr, 0, kWorkLen);
            std::memset(env.rdram.data() + kEeWork1Addr, 0, kWorkLen);
            std::memset(env.rdram.data() + kIopWork1Addr, 0, kWorkLen);
            std::memset(env.rdram.data() + kRingAddr, 0, kWorkLen);
            for (uint32_t i = 0; i < kChunkLen; ++i)
            {
                env.rdram[kChunkDataAddr + i] = static_cast<uint8_t>(0xB0u + i);
            }

            writeGuestU32(env.rdram.data(), kEeWork1Addr + 0x00u, 1u);
            writeGuestU32(env.rdram.data(), kEeWork1Addr + 0x10u, 2u);
            writeGuestU32(env.rdram.data(), kEeWork1Addr + 0x14u, ps2RnaHandle);
            writeGuestU32(env.rdram.data(), kEeWork1Addr + 0x18u, 1u);
            writeGuestU32(env.rdram.data(), kEeWork1Addr + 0x1Cu, 0u);
            writeGuestU32(env.rdram.data(), kEeWork1Addr + kWorkLen - sizeof(uint32_t), 1u);

            const Ps2SifDmaTransfer desc1{
                kEeWork1Addr,
                kIopWork1Addr,
                static_cast<int32_t>(kWorkLen),
                0};
            std::memcpy(env.rdram.data() + kDesc1Addr, &desc1, sizeof(desc1));

            setRegU32(env.ctx, 4, kDesc1Addr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "sceSifSetDma should succeed for the PS2RNA control transport");
            t.Equals(readGuestU32(env.rdram.data(), kEeWork1Addr + kWorkLen - sizeof(uint32_t)), 2u,
                     "PS2RNA control DMA should advance the EE footer ticket");

            writeGuestU32(env.rdram.data(), kEeWork0Addr + 0x00u, 1u);
            env.rdram[kEeWork0Addr + 0x10u] = 0u;
            env.rdram[kEeWork0Addr + 0x11u] = 1u;
            std::memcpy(env.rdram.data() + kEeWork0Addr + 0x12u, "\0\0", 2u);
            writeGuestU32(env.rdram.data(), kEeWork0Addr + 0x14u, sjxHandle);
            writeGuestU32(env.rdram.data(), kEeWork0Addr + 0x18u, kChunkDataAddr);
            writeGuestU32(env.rdram.data(), kEeWork0Addr + 0x1Cu, kChunkLen);
            writeGuestU32(env.rdram.data(), kEeWork0Addr + kWorkLen - sizeof(uint32_t), 1u);

            const Ps2SifDmaTransfer desc0{
                kEeWork0Addr,
                kIopWork0Addr,
                static_cast<int32_t>(kWorkLen),
                0};
            std::memcpy(env.rdram.data() + kDesc0Addr, &desc0, sizeof(desc0));

            setRegU32(env.ctx, 4, kDesc0Addr);
            setRegU32(env.ctx, 5, 1u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.IsTrue(getRegS32(env.ctx, 2) > 0, "sceSifSetDma should succeed for the SJX transport");
            t.Equals(env.rdram[kEeWork0Addr + 0x11u], static_cast<uint8_t>(0u),
                     "SJX DMA ack should still rewrite the response line to room");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, sjrmtHandle);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, 1u);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x429u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 8u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(readGuestU32(env.rdram.data(), kRecvAddr), 0u,
                     "active PS2RNA playback should drain remote SJRMT data instead of leaving it queued forever");

            writeGuestU32(env.rdram.data(), kSendAddr + 0x00u, sjrmtHandle);
            writeGuestU32(env.rdram.data(), kSendAddr + 0x04u, 0u);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x429u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, kSendAddr);
            setRegU32(env.ctx, 8, 8u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(readGuestU32(env.rdram.data(), kRecvAddr), kWorkLen,
                     "drained PS2RNA playback should return remote SJRMT room to full capacity");
        });

        tc.Run("resetSifState seeds boot-ready SIF registers", [](TestCase &t)
        {
            TestEnv env;

            auto getReg = [&](uint32_t reg) -> uint32_t
            {
                setRegU32(env.ctx, 4, reg);
                ps2_stubs::sceSifGetReg(env.rdram.data(), &env.ctx, &env.runtime);
                return ::getRegU32(&env.ctx, 2);
            };

            t.Equals(getReg(0x4u), 0x00020000u, "SIF boot status register should expose ready bit by default");
            t.Equals(getReg(0x80000000u), 0u, "SIF main-address register should default to zero");
            t.Equals(getReg(0x80000001u), 0u, "SIF sub-address register should default to zero");
            t.Equals(getReg(0x80000002u), 0u, "SIF mscom register should default to zero");
        });

        tc.Run("numeric SIF register syscalls dispatch to SIF stubs", [](TestCase &t)
        {
            TestEnv env;

            setRegU32(env.ctx, 4, 0x80000002u);
            setRegU32(env.ctx, 5, 0x12345678u);
            t.IsTrue(ps2_syscalls::dispatchNumericSyscall(0x79u, env.rdram.data(), &env.ctx, &env.runtime),
                     "sceSifSetReg numeric syscall should dispatch");
            t.Equals(::getRegU32(&env.ctx, 2), 0u, "sceSifSetReg should return previous register value");

            setRegU32(env.ctx, 4, 0x80000002u);
            t.IsTrue(ps2_syscalls::dispatchNumericSyscall(0x7Au, env.rdram.data(), &env.ctx, &env.runtime),
                     "sceSifGetReg numeric syscall should dispatch");
            t.Equals(::getRegU32(&env.ctx, 2), 0x12345678u, "sceSifGetReg should return stored register value");
        });

        tc.Run("numeric SIF StopDma syscall dispatches to immediate-complete stub", [](TestCase &t)
        {
            TestEnv env;

            t.IsTrue(ps2_syscalls::dispatchNumericSyscall(0x6Bu, env.rdram.data(), &env.ctx, &env.runtime),
                     "SifStopDma numeric syscall should dispatch");
            t.Equals(getRegS32(env.ctx, 2), 1, "SifStopDma should report immediate completion");
        });

        tc.Run("SIF sub-address write marks MSCOM ready", [](TestCase &t)
        {
            TestEnv env;

            setRegU32(env.ctx, 4, 0x80000002u);
            ps2_stubs::sceSifGetReg(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(::getRegU32(&env.ctx, 2), 0u, "MSCOM should default to idle");

            setRegU32(env.ctx, 4, 0x80000001u);
            setRegU32(env.ctx, 5, 0x004067D8u);
            ps2_stubs::sceSifSetReg(env.rdram.data(), &env.ctx, &env.runtime);

            setRegU32(env.ctx, 4, 0x80000002u);
            ps2_stubs::sceSifGetReg(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(::getRegU32(&env.ctx, 2), 1u, "MSCOM should expose a ready token after SUBADDR is set");
        });

        tc.Run("sceSifExitCmd restores default boot-ready SIF registers", [](TestCase &t)
        {
            TestEnv env;

            setRegU32(env.ctx, 4, 0x4u);
            setRegU32(env.ctx, 5, 0x12340000u);
            ps2_stubs::sceSifSetReg(env.rdram.data(), &env.ctx, &env.runtime);

            setRegU32(env.ctx, 4, 0x80000002u);
            setRegU32(env.ctx, 5, 0x89ABCDEFu);
            ps2_stubs::sceSifSetReg(env.rdram.data(), &env.ctx, &env.runtime);

            ps2_stubs::sceSifExitCmd(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), 0, "sceSifExitCmd should succeed");

            auto getReg = [&](uint32_t reg) -> uint32_t
            {
                setRegU32(env.ctx, 4, reg);
                ps2_stubs::sceSifGetReg(env.rdram.data(), &env.ctx, &env.runtime);
                return ::getRegU32(&env.ctx, 2);
            };

            t.Equals(getReg(0x4u), 0x00020000u, "sceSifExitCmd should restore the boot-ready status bit");
            t.Equals(getReg(0x80000002u), 0u, "sceSifExitCmd should clear transient mscom state");
        });

        tc.Run("sceSifSetDma rejects invalid descriptors without partial writes", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kDescAddr = 0x00021000u;
            constexpr uint32_t kSrcA = 0x00021100u;
            constexpr uint32_t kDstA = 0x00021200u;
            constexpr uint32_t kSrcB = 0x00021300u;
            constexpr uint32_t kInvalidDstB = 0xE0000100u; // unsupported guest segment

            std::array<uint8_t, 8> payloadA{};
            for (size_t i = 0; i < payloadA.size(); ++i)
            {
                payloadA[i] = static_cast<uint8_t>(0x70u + i);
            }
            std::array<uint8_t, 8> payloadB{};
            for (size_t i = 0; i < payloadB.size(); ++i)
            {
                payloadB[i] = static_cast<uint8_t>(0x90u + i);
            }

            std::memcpy(env.rdram.data() + kSrcA, payloadA.data(), payloadA.size());
            std::memcpy(env.rdram.data() + kSrcB, payloadB.data(), payloadB.size());
            std::memset(env.rdram.data() + kDstA, 0x5Au, payloadA.size());

            const Ps2SifDmaTransfer descs[2] = {
                {kSrcA, kDstA, static_cast<int32_t>(payloadA.size()), 0},
                {kSrcB, kInvalidDstB, static_cast<int32_t>(payloadB.size()), 0}};
            std::memcpy(env.rdram.data() + kDescAddr, descs, sizeof(descs));

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 2u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), 0, "sceSifSetDma should fail when any descriptor is invalid");

            const std::array<uint8_t, 8> expectedUnchanged{
                0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A, 0x5A};
            t.IsTrue(std::memcmp(env.rdram.data() + kDstA, expectedUnchanged.data(), expectedUnchanged.size()) == 0,
                     "failed multi-descriptor sceSifSetDma should not partially write earlier descriptors");
        });

        tc.Run("sceSifSetDma enforces descriptor count limit", [](TestCase &t)
        {
            TestEnv env;
            constexpr uint32_t kDescAddr = 0x00022000u;

            setRegU32(env.ctx, 4, kDescAddr);
            setRegU32(env.ctx, 5, 33u);
            ps2_stubs::sceSifSetDma(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), 0, "sceSifSetDma should reject count > 32");
        });

        tc.Run("sceSifGetOtherData copies payload and writes receive metadata", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kRdAddr = 0x00023000u;
            constexpr uint32_t kSrcAddr = 0x00023100u;
            constexpr uint32_t kDstAddr = 0x00023200u;
            constexpr uint32_t kSize = 20u;

            std::array<uint8_t, kSize> payload{};
            for (size_t i = 0; i < payload.size(); ++i)
            {
                payload[i] = static_cast<uint8_t>((i * 7u) & 0xFFu);
            }
            std::memcpy(env.rdram.data() + kSrcAddr, payload.data(), payload.size());
            std::memset(env.rdram.data() + kDstAddr, 0, payload.size());
            std::memset(env.rdram.data() + kRdAddr, 0, sizeof(SifRpcReceiveData));

            setRegU32(env.ctx, 4, kRdAddr);
            setRegU32(env.ctx, 5, kSrcAddr);
            setRegU32(env.ctx, 6, kDstAddr);
            setRegU32(env.ctx, 7, kSize);
            ps2_stubs::sceSifGetOtherData(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), 0, "sceSifGetOtherData should succeed for valid transfer");

            t.IsTrue(std::memcmp(env.rdram.data() + kDstAddr, payload.data(), payload.size()) == 0,
                     "sceSifGetOtherData should copy payload");

            const SifRpcReceiveData rd = *reinterpret_cast<const SifRpcReceiveData *>(env.rdram.data() + kRdAddr);
            t.Equals(rd.src, kSrcAddr, "receive metadata src should be populated");
            t.Equals(rd.dest, kDstAddr, "receive metadata dest should be populated");
            t.Equals(static_cast<uint32_t>(rd.size), kSize, "receive metadata size should be populated");
        });

        tc.Run("sceSifGetOtherData preserves live sound-status sums when compat backfill is enabled", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kRdAddr = 0x00023300u;
            constexpr uint32_t kDstAddr = 0x00023400u;
            constexpr uint32_t kSize = 0x42u;
            constexpr uint32_t kPrimarySeCheckAddr = 0x01E0EF10u;
            constexpr uint32_t kPrimaryMidiCheckAddr = 0x01E0EF20u;
            constexpr uint32_t kMidiSumOffset = 0x1Eu;
            constexpr uint32_t kSeSumOffset = 0x26u;
            constexpr uint32_t kBank = 1u;

            PS2SoundDriverCompatLayout compat{};
            compat.primarySeCheckAddr = kPrimarySeCheckAddr;
            compat.primaryMidiCheckAddr = kPrimaryMidiCheckAddr;
            ps2_syscalls::setSoundDriverCompatLayout(compat);

            constexpr uint32_t kClientAddr = 0x00023500u;
            constexpr uint32_t kRecvAddr = 0x00023600u;
            constexpr uint32_t kSid = 1u;

            ps2_syscalls::SifInitRpc(env.rdram.data(), &env.ctx, &env.runtime);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, kSid);
            setRegU32(env.ctx, 6, 0u);
            ps2_syscalls::SifBindRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "SifBindRpc should succeed for sound-driver sid");

            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x12u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, 0u);
            setRegU32(env.ctx, 8, 0u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            const uint32_t kSrcAddr = readGuestU32(env.rdram.data(), kRecvAddr);

            std::memset(env.rdram.data() + kDstAddr, 0, kSize);
            std::memset(env.rdram.data() + kRdAddr, 0, sizeof(SifRpcReceiveData));

            writeGuestS16(env.rdram.data(), kSrcAddr + kSeSumOffset + (kBank * 2u), static_cast<int16_t>(0x1357));
            writeGuestS16(env.rdram.data(), kSrcAddr + kMidiSumOffset + (kBank * 2u), static_cast<int16_t>(0x2468));

            writeGuestS16(env.rdram.data(), kPrimarySeCheckAddr + (kBank * 2u), static_cast<int16_t>(0x7B7B));
            writeGuestS16(env.rdram.data(), kPrimaryMidiCheckAddr + (kBank * 2u), static_cast<int16_t>(0x6A6A));

            setRegU32(env.ctx, 4, kRdAddr);
            setRegU32(env.ctx, 5, kSrcAddr);
            setRegU32(env.ctx, 6, kDstAddr);
            setRegU32(env.ctx, 7, kSize);
            ps2_stubs::sceSifGetOtherData(env.rdram.data(), &env.ctx, &env.runtime);

            t.Equals(getRegS32(env.ctx, 2), 0,
                     "sceSifGetOtherData should succeed for sound-status transfer");
            t.Equals(readGuestS16(env.rdram.data(), kDstAddr + kSeSumOffset + (kBank * 2u)),
                     static_cast<int16_t>(0x1357),
                     "live se_sum for the active bank should not be clobbered by compat check arrays");
            t.Equals(readGuestS16(env.rdram.data(), kDstAddr + kMidiSumOffset + (kBank * 2u)),
                     static_cast<int16_t>(0x2468),
                     "live midi_sum for the active bank should not be clobbered by compat check arrays");
        });

        tc.Run("sceSifGetOtherData backfills zero sound-status sums for later banks", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kRdAddr = 0x00023700u;
            constexpr uint32_t kDstAddr = 0x00023800u;
            constexpr uint32_t kSize = 0x42u;
            constexpr uint32_t kPrimarySeCheckAddr = 0x01E0EF10u;
            constexpr uint32_t kPrimaryMidiCheckAddr = 0x01E0EF20u;
            constexpr uint32_t kMidiSumOffset = 0x1Eu;
            constexpr uint32_t kSeSumOffset = 0x26u;
            constexpr uint32_t kLiveBank = 0u;
            constexpr uint32_t kPendingBank = 1u;

            PS2SoundDriverCompatLayout compat{};
            compat.primarySeCheckAddr = kPrimarySeCheckAddr;
            compat.primaryMidiCheckAddr = kPrimaryMidiCheckAddr;
            ps2_syscalls::setSoundDriverCompatLayout(compat);

            constexpr uint32_t kClientAddr = 0x00023900u;
            constexpr uint32_t kRecvAddr = 0x00023A00u;

            ps2_syscalls::SifInitRpc(env.rdram.data(), &env.ctx, &env.runtime);
            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 1u);
            setRegU32(env.ctx, 6, 0u);
            ps2_syscalls::SifBindRpc(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), KE_OK, "SifBindRpc should succeed for sound-driver sid");

            setRegU32(env.ctx, 4, kClientAddr);
            setRegU32(env.ctx, 5, 0x12u);
            setRegU32(env.ctx, 6, 0u);
            setRegU32(env.ctx, 7, 0u);
            setRegU32(env.ctx, 8, 0u);
            setRegU32(env.ctx, 9, kRecvAddr);
            setRegU32(env.ctx, 10, 4u);
            setRegU32(env.ctx, 11, 0u);
            ps2_syscalls::SifCallRpc(env.rdram.data(), &env.ctx, &env.runtime);
            const uint32_t kSrcAddr = readGuestU32(env.rdram.data(), kRecvAddr);

            std::memset(env.rdram.data() + kDstAddr, 0, kSize);
            std::memset(env.rdram.data() + kRdAddr, 0, sizeof(SifRpcReceiveData));

            writeGuestS16(env.rdram.data(), kSrcAddr + kSeSumOffset + (kLiveBank * 2u), static_cast<int16_t>(0x1111));
            writeGuestS16(env.rdram.data(), kSrcAddr + kMidiSumOffset + (kLiveBank * 2u), static_cast<int16_t>(0x2222));

            writeGuestS16(env.rdram.data(), kPrimarySeCheckAddr + (kPendingBank * 2u), static_cast<int16_t>(0x3333));
            writeGuestS16(env.rdram.data(), kPrimaryMidiCheckAddr + (kPendingBank * 2u), static_cast<int16_t>(0x4444));

            setRegU32(env.ctx, 4, kRdAddr);
            setRegU32(env.ctx, 5, kSrcAddr);
            setRegU32(env.ctx, 6, kDstAddr);
            setRegU32(env.ctx, 7, kSize);
            ps2_stubs::sceSifGetOtherData(env.rdram.data(), &env.ctx, &env.runtime);

            t.Equals(getRegS32(env.ctx, 2), 0,
                     "sceSifGetOtherData should succeed for later-bank sound-status transfer");
            t.Equals(readGuestS16(env.rdram.data(), kDstAddr + kSeSumOffset + (kLiveBank * 2u)),
                     static_cast<int16_t>(0x1111),
                     "existing live se_sum values should remain intact");
            t.Equals(readGuestS16(env.rdram.data(), kDstAddr + kMidiSumOffset + (kLiveBank * 2u)),
                     static_cast<int16_t>(0x2222),
                     "existing live midi_sum values should remain intact");
            t.Equals(readGuestS16(env.rdram.data(), kDstAddr + kSeSumOffset + (kPendingBank * 2u)),
                     static_cast<int16_t>(0x3333),
                     "zero se_sum slots should backfill from compat tables for later banks");
            t.Equals(readGuestS16(env.rdram.data(), kDstAddr + kMidiSumOffset + (kPendingBank * 2u)),
                     static_cast<int16_t>(0x4444),
                     "zero midi_sum slots should backfill from compat tables for later banks");
        });

        tc.Run("sceSifGetOtherData rejects unsupported guest segments", [](TestCase &t)
        {
            TestEnv env;

            constexpr uint32_t kRdAddr = 0x00024000u;
            constexpr uint32_t kDstAddr = 0x00024100u;
            constexpr uint32_t kInvalidSrcAddr = 0xE0000200u;
            constexpr uint32_t kSize = 16u;

            std::memset(env.rdram.data() + kDstAddr, 0xA5, kSize);
            writeGuestU32(env.rdram.data(), kRdAddr + 0x10u, 0x11111111u);
            writeGuestU32(env.rdram.data(), kRdAddr + 0x14u, 0x22222222u);
            writeGuestU32(env.rdram.data(), kRdAddr + 0x18u, 0x33333333u);

            setRegU32(env.ctx, 4, kRdAddr);
            setRegU32(env.ctx, 5, kInvalidSrcAddr);
            setRegU32(env.ctx, 6, kDstAddr);
            setRegU32(env.ctx, 7, kSize);
            ps2_stubs::sceSifGetOtherData(env.rdram.data(), &env.ctx, &env.runtime);
            t.Equals(getRegS32(env.ctx, 2), -1, "sceSifGetOtherData should fail for unsupported source segment");

            std::array<uint8_t, kSize> expected{};
            expected.fill(0xA5u);
            t.IsTrue(std::memcmp(env.rdram.data() + kDstAddr, expected.data(), expected.size()) == 0,
                     "failed sceSifGetOtherData should not modify destination");
            t.Equals(readGuestU32(env.rdram.data(), kRdAddr + 0x10u), 0x11111111u,
                     "failed sceSifGetOtherData should not overwrite rd metadata");
        });
    });
}
