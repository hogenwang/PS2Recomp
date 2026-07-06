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

// Function: sub_0029F9E0
// Address: 0x29f9e0 - 0x29f9f0
void sub_0029F9E0_0x29f9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029F9E0_0x29f9e0");
#endif

    ctx->pc = 0x29f9e0u;

    // 0x29f9e0: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x29f9e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x29f9e4: 0x3e00008  jr          $ra
    ctx->pc = 0x29F9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29F9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29F9E4u;
        // 0x29f9e8: 0x244268b0  addiu       $v0, $v0, 0x68B0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26800));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29F9E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29F9ECu;
    // 0x29f9ec: 0x0  nop
    ctx->pc = 0x29f9ecu;
    // NOP
}
