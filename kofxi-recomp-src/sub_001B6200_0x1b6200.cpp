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

// Function: sub_001B6200
// Address: 0x1b6200 - 0x1b6210
void sub_001B6200_0x1b6200(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B6200_0x1b6200");
#endif

    ctx->pc = 0x1b6200u;

    // 0x1b6200: 0xac86004c  sw          $a2, 0x4C($a0)
    ctx->pc = 0x1b6200u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 6));
    // 0x1b6204: 0x3e00008  jr          $ra
    ctx->pc = 0x1B6204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B6208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B6204u;
        // 0x1b6208: 0xac850048  sw          $a1, 0x48($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B6204u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B620Cu;
    // 0x1b620c: 0x0  nop
    ctx->pc = 0x1b620cu;
    // NOP
    if (ctx->pc == 0x1b620cu) { ctx->pc = 0x1b6210u; }
}
