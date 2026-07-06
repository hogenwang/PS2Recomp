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

// Function: sub_002A0640
// Address: 0x2a0640 - 0x2a0660
void sub_002A0640_0x2a0640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A0640_0x2a0640");
#endif

    ctx->pc = 0x2a0640u;

    // 0x2a0640: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a0640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a0644: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0644u;
        // 0x2a0648: 0x24426900  addiu       $v0, $v0, 0x6900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26880));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A064Cu;
    // 0x2a064c: 0x0  nop
    ctx->pc = 0x2a064cu;
    // NOP
    // 0x2a0650: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a0650u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a0654: 0x3e00008  jr          $ra
    ctx->pc = 0x2A0654u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A0658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A0654u;
        // 0x2a0658: 0x24426930  addiu       $v0, $v0, 0x6930 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26928));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A0654u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A065Cu;
    // 0x2a065c: 0x0  nop
    ctx->pc = 0x2a065cu;
    // NOP
}
