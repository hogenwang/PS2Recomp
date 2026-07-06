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

// Function: sub_0019F440
// Address: 0x19f440 - 0x19f450
void sub_0019F440_0x19f440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F440_0x19f440");
#endif

    ctx->pc = 0x19f440u;

    // 0x19f440: 0x3e00008  jr          $ra
    ctx->pc = 0x19F440u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F440u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F448u;
    // 0x19f448: 0x0  nop
    ctx->pc = 0x19f448u;
    // NOP
    // 0x19f44c: 0x0  nop
    ctx->pc = 0x19f44cu;
    // NOP
    if (ctx->pc == 0x19f44cu) { ctx->pc = 0x19f450u; }
}
