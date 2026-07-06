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

// Function: sub_00189990
// Address: 0x189990 - 0x1899a0
void sub_00189990_0x189990(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00189990_0x189990");
#endif

    ctx->pc = 0x189990u;

    // 0x189990: 0xa48004f8  sh          $zero, 0x4F8($a0)
    ctx->pc = 0x189990u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1272), (uint16_t)GPR_U32(ctx, 0));
    // 0x189994: 0xa48004fa  sh          $zero, 0x4FA($a0)
    ctx->pc = 0x189994u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 1274), (uint16_t)GPR_U32(ctx, 0));
    // 0x189998: 0x3e00008  jr          $ra
    ctx->pc = 0x189998u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18999Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x189998u;
        // 0x18999c: 0xa48004f6  sh          $zero, 0x4F6($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 1270), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x189998u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1899A0u;
}
