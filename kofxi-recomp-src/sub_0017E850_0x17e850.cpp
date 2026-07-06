#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0017E850
// Address: 0x17e850 - 0x17e940
void sub_0017E850_0x17e850(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017E850_0x17e850");
#endif

    switch (ctx->pc) {
        case 0x17e864u: goto label_17e864;
        default: break;
    }

    ctx->pc = 0x17e850u;

    // 0x17e850: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x17e850u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x17e854: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x17e854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x17e858: 0xa060b858  sb          $zero, -0x47A8($v1)
    ctx->pc = 0x17e858u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294948952), (uint8_t)GPR_U32(ctx, 0));
    // 0x17e85c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x17e85cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17e860: 0x2484b860  addiu       $a0, $a0, -0x47A0
    ctx->pc = 0x17e860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948960));
label_17e864:
    // 0x17e864: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x17e864u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x17e868: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x17e868u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x17e86c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x17e86cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x17e870: 0x28a30020  slti        $v1, $a1, 0x20
    ctx->pc = 0x17e870u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x17e874: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x17e874u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x17e878: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x17e878u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x17e87c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x17e87cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x17e880: 0xa4800014  sh          $zero, 0x14($a0)
    ctx->pc = 0x17e880u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 20), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e884: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x17e884u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x17e888: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x17e888u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x17e88c: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x17e88cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x17e890: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x17e890u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x17e894: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x17e894u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x17e898: 0xa480002c  sh          $zero, 0x2C($a0)
    ctx->pc = 0x17e898u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 44), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e89c: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x17e89cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x17e8a0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x17e8a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x17e8a4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x17e8a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x17e8a8: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x17e8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x17e8ac: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x17e8acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x17e8b0: 0xa4800044  sh          $zero, 0x44($a0)
    ctx->pc = 0x17e8b0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 68), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e8b4: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x17e8b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x17e8b8: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x17e8b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x17e8bc: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x17e8bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x17e8c0: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x17e8c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x17e8c4: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x17e8c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x17e8c8: 0xa480005c  sh          $zero, 0x5C($a0)
    ctx->pc = 0x17e8c8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 92), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e8cc: 0xac800060  sw          $zero, 0x60($a0)
    ctx->pc = 0x17e8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 0));
    // 0x17e8d0: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x17e8d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
    // 0x17e8d4: 0xac800068  sw          $zero, 0x68($a0)
    ctx->pc = 0x17e8d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 104), GPR_U32(ctx, 0));
    // 0x17e8d8: 0xac80006c  sw          $zero, 0x6C($a0)
    ctx->pc = 0x17e8d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 108), GPR_U32(ctx, 0));
    // 0x17e8dc: 0xac800070  sw          $zero, 0x70($a0)
    ctx->pc = 0x17e8dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 112), GPR_U32(ctx, 0));
    // 0x17e8e0: 0xa4800074  sh          $zero, 0x74($a0)
    ctx->pc = 0x17e8e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 116), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e8e4: 0xac800078  sw          $zero, 0x78($a0)
    ctx->pc = 0x17e8e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 120), GPR_U32(ctx, 0));
    // 0x17e8e8: 0xac80007c  sw          $zero, 0x7C($a0)
    ctx->pc = 0x17e8e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 0));
    // 0x17e8ec: 0xac800080  sw          $zero, 0x80($a0)
    ctx->pc = 0x17e8ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 128), GPR_U32(ctx, 0));
    // 0x17e8f0: 0xac800084  sw          $zero, 0x84($a0)
    ctx->pc = 0x17e8f0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 132), GPR_U32(ctx, 0));
    // 0x17e8f4: 0xac800088  sw          $zero, 0x88($a0)
    ctx->pc = 0x17e8f4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 136), GPR_U32(ctx, 0));
    // 0x17e8f8: 0xa480008c  sh          $zero, 0x8C($a0)
    ctx->pc = 0x17e8f8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 140), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e8fc: 0xac800090  sw          $zero, 0x90($a0)
    ctx->pc = 0x17e8fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 0));
    // 0x17e900: 0xac800094  sw          $zero, 0x94($a0)
    ctx->pc = 0x17e900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 148), GPR_U32(ctx, 0));
    // 0x17e904: 0xac800098  sw          $zero, 0x98($a0)
    ctx->pc = 0x17e904u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 152), GPR_U32(ctx, 0));
    // 0x17e908: 0xac80009c  sw          $zero, 0x9C($a0)
    ctx->pc = 0x17e908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 156), GPR_U32(ctx, 0));
    // 0x17e90c: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x17e90cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
    // 0x17e910: 0xa48000a4  sh          $zero, 0xA4($a0)
    ctx->pc = 0x17e910u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 164), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e914: 0xac8000a8  sw          $zero, 0xA8($a0)
    ctx->pc = 0x17e914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 168), GPR_U32(ctx, 0));
    // 0x17e918: 0xac8000ac  sw          $zero, 0xAC($a0)
    ctx->pc = 0x17e918u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 172), GPR_U32(ctx, 0));
    // 0x17e91c: 0xac8000b0  sw          $zero, 0xB0($a0)
    ctx->pc = 0x17e91cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 176), GPR_U32(ctx, 0));
    // 0x17e920: 0xac8000b4  sw          $zero, 0xB4($a0)
    ctx->pc = 0x17e920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 180), GPR_U32(ctx, 0));
    // 0x17e924: 0xac8000b8  sw          $zero, 0xB8($a0)
    ctx->pc = 0x17e924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 184), GPR_U32(ctx, 0));
    // 0x17e928: 0xa48000bc  sh          $zero, 0xBC($a0)
    ctx->pc = 0x17e928u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 188), (uint16_t)GPR_U32(ctx, 0));
    // 0x17e92c: 0x1460ffcd  bnez        $v1, . + 4 + (-0x33 << 2)
    ctx->pc = 0x17E92Cu;
    {
        const bool branch_taken_0x17e92c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x17E930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17E92Cu;
        // 0x17e930: 0x248400c0  addiu       $a0, $a0, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17e92c) {
            ctx->pc = 0x17E864u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_17e864;
        }
    }
    ctx->pc = 0x17E934u;
    // 0x17e934: 0x3e00008  jr          $ra
    ctx->pc = 0x17E934u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17E934u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17E93Cu;
    // 0x17e93c: 0x0  nop
    ctx->pc = 0x17e93cu;
    // NOP
}
