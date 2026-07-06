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

// Function: sub_0012F670
// Address: 0x12f670 - 0x12f700
void sub_0012F670_0x12f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0012F670_0x12f670");
#endif

    switch (ctx->pc) {
        case 0x12f684u: goto label_12f684;
        default: break;
    }

    ctx->pc = 0x12f670u;

    // 0x12f670: 0x3c030041  lui         $v1, 0x41
    ctx->pc = 0x12f670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65 << 16));
    // 0x12f674: 0x3c040041  lui         $a0, 0x41
    ctx->pc = 0x12f674u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65 << 16));
    // 0x12f678: 0xa4605500  sh          $zero, 0x5500($v1)
    ctx->pc = 0x12f678u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 21760), (uint16_t)GPR_U32(ctx, 0));
    // 0x12f67c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x12f67cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x12f680: 0x24845200  addiu       $a0, $a0, 0x5200
    ctx->pc = 0x12f680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20992));
label_12f684:
    // 0x12f684: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x12f684u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x12f688: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x12f688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x12f68c: 0xac800004  sw          $zero, 0x4($a0)
    ctx->pc = 0x12f68cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 0));
    // 0x12f690: 0x28a30040  slti        $v1, $a1, 0x40
    ctx->pc = 0x12f690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)64) ? 1 : 0);
    // 0x12f694: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x12f694u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x12f698: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x12f698u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x12f69c: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x12f69cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
    // 0x12f6a0: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x12f6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x12f6a4: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x12f6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x12f6a8: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x12f6a8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x12f6ac: 0xac800020  sw          $zero, 0x20($a0)
    ctx->pc = 0x12f6acu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
    // 0x12f6b0: 0xac800024  sw          $zero, 0x24($a0)
    ctx->pc = 0x12f6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 36), GPR_U32(ctx, 0));
    // 0x12f6b4: 0xac800028  sw          $zero, 0x28($a0)
    ctx->pc = 0x12f6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 40), GPR_U32(ctx, 0));
    // 0x12f6b8: 0xac80002c  sw          $zero, 0x2C($a0)
    ctx->pc = 0x12f6b8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 44), GPR_U32(ctx, 0));
    // 0x12f6bc: 0xac800030  sw          $zero, 0x30($a0)
    ctx->pc = 0x12f6bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 0));
    // 0x12f6c0: 0xac800034  sw          $zero, 0x34($a0)
    ctx->pc = 0x12f6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 0));
    // 0x12f6c4: 0xac800038  sw          $zero, 0x38($a0)
    ctx->pc = 0x12f6c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 0));
    // 0x12f6c8: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x12f6c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x12f6cc: 0xac800040  sw          $zero, 0x40($a0)
    ctx->pc = 0x12f6ccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 0));
    // 0x12f6d0: 0xac800044  sw          $zero, 0x44($a0)
    ctx->pc = 0x12f6d0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 68), GPR_U32(ctx, 0));
    // 0x12f6d4: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x12f6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x12f6d8: 0xac80004c  sw          $zero, 0x4C($a0)
    ctx->pc = 0x12f6d8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 0));
    // 0x12f6dc: 0xac800050  sw          $zero, 0x50($a0)
    ctx->pc = 0x12f6dcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 0));
    // 0x12f6e0: 0xac800054  sw          $zero, 0x54($a0)
    ctx->pc = 0x12f6e0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 0));
    // 0x12f6e4: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x12f6e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
    // 0x12f6e8: 0xac80005c  sw          $zero, 0x5C($a0)
    ctx->pc = 0x12f6e8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 0));
    // 0x12f6ec: 0x1460ffe5  bnez        $v1, . + 4 + (-0x1B << 2)
    ctx->pc = 0x12F6ECu;
    {
        const bool branch_taken_0x12f6ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x12F6F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x12F6ECu;
        // 0x12f6f0: 0x24840060  addiu       $a0, $a0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12f6ec) {
            ctx->pc = 0x12F684u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12f684;
        }
    }
    ctx->pc = 0x12F6F4u;
    // 0x12f6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x12F6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x12F6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x12F6FCu;
    // 0x12f6fc: 0x0  nop
    ctx->pc = 0x12f6fcu;
    // NOP
    if (ctx->pc == 0x12f6fcu) { ctx->pc = 0x12f700u; }
}
