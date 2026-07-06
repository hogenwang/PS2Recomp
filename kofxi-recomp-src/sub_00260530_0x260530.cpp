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

// Function: sub_00260530
// Address: 0x260530 - 0x260550
void sub_00260530_0x260530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260530_0x260530");
#endif

    switch (ctx->pc) {
        case 0x260534u: goto label_260534;
        default: break;
    }

    ctx->pc = 0x260530u;

    // 0x260530: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x260530u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_260534:
    // 0x260534: 0x3e00008  jr          $ra
    ctx->pc = 0x260534u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260534u;
        // 0x260538: 0xac4417e8  sw          $a0, 0x17E8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6120), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260534u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26053Cu;
    // 0x26053c: 0x0  nop
    ctx->pc = 0x26053cu;
    // NOP
    // 0x260540: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x260540u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x260544: 0x3e00008  jr          $ra
    ctx->pc = 0x260544u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260544u;
        // 0x260548: 0x8c6217e8  lw          $v0, 0x17E8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 6120)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x260544u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26054Cu;
    // 0x26054c: 0x0  nop
    ctx->pc = 0x26054cu;
    // NOP
}
