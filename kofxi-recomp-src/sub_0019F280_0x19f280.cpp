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

// Function: sub_0019F280
// Address: 0x19f280 - 0x19f290
void sub_0019F280_0x19f280(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F280_0x19f280");
#endif

    ctx->pc = 0x19f280u;

    // 0x19f280: 0x3e00008  jr          $ra
    ctx->pc = 0x19F280u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F280u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F288u;
    // 0x19f288: 0x0  nop
    ctx->pc = 0x19f288u;
    // NOP
    // 0x19f28c: 0x0  nop
    ctx->pc = 0x19f28cu;
    // NOP
    if (ctx->pc == 0x19f28cu) { ctx->pc = 0x19f290u; }
}
