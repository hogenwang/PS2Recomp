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

// Function: sub_001BE6C0
// Address: 0x1be6c0 - 0x1be6d0
void sub_001BE6C0_0x1be6c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BE6C0_0x1be6c0");
#endif

    ctx->pc = 0x1be6c0u;

    // 0x1be6c0: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1be6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
    // 0x1be6c4: 0x3e00008  jr          $ra
    ctx->pc = 0x1BE6C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BE6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BE6C4u;
        // 0x1be6c8: 0x24425790  addiu       $v0, $v0, 0x5790 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 22416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BE6C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BE6CCu;
    // 0x1be6cc: 0x0  nop
    ctx->pc = 0x1be6ccu;
    // NOP
    if (ctx->pc == 0x1be6ccu) { ctx->pc = 0x1be6d0u; }
}
