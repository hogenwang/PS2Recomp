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

// Function: sub_00295000
// Address: 0x295000 - 0x295020
void sub_00295000_0x295000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00295000_0x295000");
#endif

    ctx->pc = 0x295000u;

    // 0x295000: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295000u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295004: 0x3e00008  jr          $ra
    ctx->pc = 0x295004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295004u;
        // 0x295008: 0x24424c20  addiu       $v0, $v0, 0x4C20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19488));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295004u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29500Cu;
    // 0x29500c: 0x0  nop
    ctx->pc = 0x29500cu;
    // NOP
    // 0x295010: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x295010u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x295014: 0x3e00008  jr          $ra
    ctx->pc = 0x295014u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x295018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x295014u;
        // 0x295018: 0x24424c50  addiu       $v0, $v0, 0x4C50 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 19536));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x295014u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29501Cu;
    // 0x29501c: 0x0  nop
    ctx->pc = 0x29501cu;
    // NOP
}
