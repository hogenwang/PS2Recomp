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

// Function: sub_002BF130
// Address: 0x2bf130 - 0x2bf140
void sub_002BF130_0x2bf130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BF130_0x2bf130");
#endif

    ctx->pc = 0x2bf130u;

    // 0x2bf130: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2bf130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x2bf134: 0x3e00008  jr          $ra
    ctx->pc = 0x2BF134u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BF134u;
        // 0x2bf138: 0x8c620014  lw          $v0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BF134u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BF13Cu;
    // 0x2bf13c: 0x0  nop
    ctx->pc = 0x2bf13cu;
    // NOP
    if (ctx->pc == 0x2bf13cu) { ctx->pc = 0x2bf140u; }
}
