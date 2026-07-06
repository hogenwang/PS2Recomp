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

// Function: sub_001F8DA0
// Address: 0x1f8da0 - 0x1f8db0
void sub_001F8DA0_0x1f8da0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F8DA0_0x1f8da0");
#endif

    ctx->pc = 0x1f8da0u;

    // 0x1f8da0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1f8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1f8da4: 0x3e00008  jr          $ra
    ctx->pc = 0x1F8DA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F8DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F8DA4u;
        // 0x1f8da8: 0x8c621744  lw          $v0, 0x1744($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5956)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F8DA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F8DACu;
    // 0x1f8dac: 0x0  nop
    ctx->pc = 0x1f8dacu;
    // NOP
}
