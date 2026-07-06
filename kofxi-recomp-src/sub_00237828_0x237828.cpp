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

// Function: sub_00237828
// Address: 0x237828 - 0x237850
void sub_00237828_0x237828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237828_0x237828");
#endif

    switch (ctx->pc) {
        case 0x237830u: goto label_237830;
        default: break;
    }

    ctx->pc = 0x237828u;

    // 0x237828: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x237828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x23782c: 0x8c43fe78  lw          $v1, -0x188($v0)
    ctx->pc = 0x23782cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966904)));
label_237830:
    // 0x237830: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x237830u;
    {
        const bool branch_taken_0x237830 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x237830) {
            ctx->pc = 0x237844u;
            goto label_237844;
        }
    }
    ctx->pc = 0x237838u;
    // 0x237838: 0x8c624e80  lw          $v0, 0x4E80($v1)
    ctx->pc = 0x237838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20096)));
    // 0x23783c: 0x5040fffc  beql        $v0, $zero, . + 4 + (-0x4 << 2)
    ctx->pc = 0x23783Cu;
    {
        const bool branch_taken_0x23783c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23783c) {
            ctx->pc = 0x237840u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23783Cu;
            // 0x237840: 0x8c634e30  lw          $v1, 0x4E30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20016)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x237830u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237830;
        }
    }
    ctx->pc = 0x237844u;
label_237844:
    // 0x237844: 0x3e00008  jr          $ra
    ctx->pc = 0x237844u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x237844u;
        // 0x237848: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x237844u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23784Cu;
    // 0x23784c: 0x0  nop
    ctx->pc = 0x23784cu;
    // NOP
}
