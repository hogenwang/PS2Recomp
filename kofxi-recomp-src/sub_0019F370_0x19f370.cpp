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

// Function: sub_0019F370
// Address: 0x19f370 - 0x19f380
void sub_0019F370_0x19f370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F370_0x19f370");
#endif

    ctx->pc = 0x19f370u;

    // 0x19f370: 0x3e00008  jr          $ra
    ctx->pc = 0x19F370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F378u;
    // 0x19f378: 0x0  nop
    ctx->pc = 0x19f378u;
    // NOP
    // 0x19f37c: 0x0  nop
    ctx->pc = 0x19f37cu;
    // NOP
    if (ctx->pc == 0x19f37cu) { ctx->pc = 0x19f380u; }
}
