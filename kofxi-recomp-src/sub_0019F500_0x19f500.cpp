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

// Function: sub_0019F500
// Address: 0x19f500 - 0x19f510
void sub_0019F500_0x19f500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F500_0x19f500");
#endif

    ctx->pc = 0x19f500u;

    // 0x19f500: 0x3e00008  jr          $ra
    ctx->pc = 0x19F500u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F500u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F508u;
    // 0x19f508: 0x0  nop
    ctx->pc = 0x19f508u;
    // NOP
    // 0x19f50c: 0x0  nop
    ctx->pc = 0x19f50cu;
    // NOP
    if (ctx->pc == 0x19f50cu) { ctx->pc = 0x19f510u; }
}
