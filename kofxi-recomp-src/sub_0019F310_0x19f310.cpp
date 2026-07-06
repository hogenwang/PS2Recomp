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

// Function: sub_0019F310
// Address: 0x19f310 - 0x19f320
void sub_0019F310_0x19f310(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F310_0x19f310");
#endif

    ctx->pc = 0x19f310u;

    // 0x19f310: 0x3e00008  jr          $ra
    ctx->pc = 0x19F310u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F310u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F318u;
    // 0x19f318: 0x0  nop
    ctx->pc = 0x19f318u;
    // NOP
    // 0x19f31c: 0x0  nop
    ctx->pc = 0x19f31cu;
    // NOP
    if (ctx->pc == 0x19f31cu) { ctx->pc = 0x19f320u; }
}
