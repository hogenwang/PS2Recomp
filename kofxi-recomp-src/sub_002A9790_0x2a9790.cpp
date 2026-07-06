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

// Function: sub_002A9790
// Address: 0x2a9790 - 0x2a97a0
void sub_002A9790_0x2a9790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9790_0x2a9790");
#endif

    ctx->pc = 0x2a9790u;

    // 0x2a9790: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a9790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x2a9794: 0x3e00008  jr          $ra
    ctx->pc = 0x2A9794u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2A9794u;
        // 0x2a9798: 0x24426cb0  addiu       $v0, $v0, 0x6CB0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27824));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2A9794u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2A979Cu;
    // 0x2a979c: 0x0  nop
    ctx->pc = 0x2a979cu;
    // NOP
}
