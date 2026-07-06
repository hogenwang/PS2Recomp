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

// Function: sub_0019F720
// Address: 0x19f720 - 0x19f730
void sub_0019F720_0x19f720(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F720_0x19f720");
#endif

    ctx->pc = 0x19f720u;

    // 0x19f720: 0x3e00008  jr          $ra
    ctx->pc = 0x19F720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F728u;
    // 0x19f728: 0x0  nop
    ctx->pc = 0x19f728u;
    // NOP
    // 0x19f72c: 0x0  nop
    ctx->pc = 0x19f72cu;
    // NOP
    if (ctx->pc == 0x19f72cu) { ctx->pc = 0x19f730u; }
}
