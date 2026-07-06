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

// Function: sub_001CE888
// Address: 0x1ce888 - 0x1ce8b8
void sub_001CE888_0x1ce888(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CE888_0x1ce888");
#endif

    switch (ctx->pc) {
        case 0x1ce8a0u: goto label_1ce8a0;
        default: break;
    }

    ctx->pc = 0x1ce888u;

    // 0x1ce888: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1ce888u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1ce88c: 0x24428000  addiu       $v0, $v0, -0x8000
    ctx->pc = 0x1ce88cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    // 0x1ce890: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1ce890u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1ce894: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE894u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE894u;
        // 0x1ce898: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE894u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE89Cu;
    // 0x1ce89c: 0x0  nop
    ctx->pc = 0x1ce89cu;
    // NOP
label_1ce8a0:
    // 0x1ce8a0: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1ce8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1ce8a4: 0x24428008  addiu       $v0, $v0, -0x7FF8
    ctx->pc = 0x1ce8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934536));
    // 0x1ce8a8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1ce8a8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1ce8ac: 0x3e00008  jr          $ra
    ctx->pc = 0x1CE8ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CE8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CE8ACu;
        // 0x1ce8b0: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CE8ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CE8B4u;
    // 0x1ce8b4: 0x0  nop
    ctx->pc = 0x1ce8b4u;
    // NOP
    if (ctx->pc == 0x1ce8b4u) { ctx->pc = 0x1ce8b8u; }
}
