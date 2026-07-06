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

// Function: sub_00308860
// Address: 0x308860 - 0x3088a0
void sub_00308860_0x308860(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00308860_0x308860");
#endif

    switch (ctx->pc) {
        case 0x308870u: goto label_308870;
        default: break;
    }

    ctx->pc = 0x308860u;

    // 0x308860: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x308860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x308864: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x308864u;
    {
        const bool branch_taken_0x308864 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x308864) {
            ctx->pc = 0x308890u;
            goto label_308890;
        }
    }
    ctx->pc = 0x30886Cu;
    // 0x30886c: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x30886cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_308870:
    // 0x308870: 0x8c63000c  lw          $v1, 0xC($v1)
    ctx->pc = 0x308870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x308874: 0x54650003  bnel        $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x308874u;
    {
        const bool branch_taken_0x308874 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x308874) {
            ctx->pc = 0x308878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308874u;
            // 0x308878: 0x8c420004  lw          $v0, 0x4($v0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308884u;
            goto label_308884;
        }
    }
    ctx->pc = 0x30887Cu;
    // 0x30887c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x30887Cu;
    {
        const bool branch_taken_0x30887c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30887c) {
            ctx->pc = 0x308894u;
            goto label_308894;
        }
    }
    ctx->pc = 0x308884u;
label_308884:
    // 0x308884: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x308884u;
    {
        const bool branch_taken_0x308884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x308884) {
            ctx->pc = 0x308888u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x308884u;
            // 0x308888: 0x8c430008  lw          $v1, 0x8($v0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x308870u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_308870;
        }
    }
    ctx->pc = 0x30888Cu;
    // 0x30888c: 0x0  nop
    ctx->pc = 0x30888cu;
    // NOP
label_308890:
    // 0x308890: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x308890u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_308894:
    // 0x308894: 0x3e00008  jr          $ra
    ctx->pc = 0x308894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x308894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30889Cu;
    // 0x30889c: 0x0  nop
    ctx->pc = 0x30889cu;
    // NOP
}
