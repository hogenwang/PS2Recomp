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

// Function: sub_001DEED8
// Address: 0x1deed8 - 0x1deef8
void sub_001DEED8_0x1deed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DEED8_0x1deed8");
#endif

    switch (ctx->pc) {
        case 0x1deee8u: goto label_1deee8;
        default: break;
    }

    ctx->pc = 0x1deed8u;

    // 0x1deed8: 0x8c820404  lw          $v0, 0x404($a0)
    ctx->pc = 0x1deed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
    // 0x1deedc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1deedcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1deee0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEEE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEE0u;
        // 0x1deee4: 0xac820404  sw          $v0, 0x404($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEEE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEEE8u;
label_1deee8:
    // 0x1deee8: 0x8c820404  lw          $v0, 0x404($a0)
    ctx->pc = 0x1deee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1028)));
    // 0x1deeec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1deeecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1deef0: 0x3e00008  jr          $ra
    ctx->pc = 0x1DEEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DEEF0u;
        // 0x1deef4: 0xac820404  sw          $v0, 0x404($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 1028), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DEEF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DEEF8u;
}
