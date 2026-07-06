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

// Function: sub_001F86C0
// Address: 0x1f86c0 - 0x1f8700
void sub_001F86C0_0x1f86c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F86C0_0x1f86c0");
#endif

    switch (ctx->pc) {
        case 0x1f86d0u: goto label_1f86d0;
        default: break;
    }

    ctx->pc = 0x1f86c0u;

    // 0x1f86c0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f86c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1f86c4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1f86c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86c8: 0x2446174c  addiu       $a2, $v0, 0x174C
    ctx->pc = 0x1f86c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 5964));
    // 0x1f86cc: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x1f86ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1f86d0:
    // 0x1f86d0: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1f86d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x1f86d4: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x1f86d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f86d8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1f86d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1f86dc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F86DCu;
    {
        const bool branch_taken_0x1f86dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F86E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F86DCu;
        // 0x1f86e0: 0x28a40008  slti        $a0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f86dc) {
            ctx->pc = 0x1F86F8u;
            goto label_1f86f8;
        }
    }
    ctx->pc = 0x1F86E4u;
    // 0x1f86e4: 0x0  nop
    ctx->pc = 0x1f86e4u;
    // NOP
    // 0x1f86e8: 0x0  nop
    ctx->pc = 0x1f86e8u;
    // NOP
    // 0x1f86ec: 0x5480fff8  bnel        $a0, $zero, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1F86ECu;
    {
        const bool branch_taken_0x1f86ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f86ec) {
            ctx->pc = 0x1F86F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F86ECu;
            // 0x1f86f0: 0x8cc30000  lw          $v1, 0x0($a2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F86D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f86d0;
        }
    }
    ctx->pc = 0x1F86F4u;
    // 0x1f86f4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1f86f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1f86f8:
    // 0x1f86f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1F86F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F86F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8700u;
}
