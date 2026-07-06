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

// Function: sub_001E2828
// Address: 0x1e2828 - 0x1e2858
void sub_001E2828_0x1e2828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E2828_0x1e2828");
#endif

    ctx->pc = 0x1e2828u;

    // 0x1e2828: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e2828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1e282c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1e282cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1e2830: 0x8c82003c  lw          $v0, 0x3C($a0)
    ctx->pc = 0x1e2830u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x1e2834: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E2834u;
    {
        const bool branch_taken_0x1e2834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E2838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E2834u;
        // 0x1e2838: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e2834) {
            ctx->pc = 0x1E2848u;
            goto label_1e2848;
        }
    }
    ctx->pc = 0x1E283Cu;
    // 0x1e283c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e283cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e2840: 0x807ec2e  j           func_1FB0B8
    ctx->pc = 0x1E2840u;
    ctx->pc = 0x1E2844u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E2840u;
    // 0x1e2844: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB0B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB0B8u, 0x1E2840u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x1E2848u;
label_1e2848:
    // 0x1e2848: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1e2848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1e284c: 0x3e00008  jr          $ra
    ctx->pc = 0x1E284Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E2850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E284Cu;
        // 0x1e2850: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E284Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E2854u;
    // 0x1e2854: 0x0  nop
    ctx->pc = 0x1e2854u;
    // NOP
}
