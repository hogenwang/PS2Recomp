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

// Function: sub_0019F4F0
// Address: 0x19f4f0 - 0x19f500
void sub_0019F4F0_0x19f4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F4F0_0x19f4f0");
#endif

    ctx->pc = 0x19f4f0u;

    // 0x19f4f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F4F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F4F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F4F8u;
    // 0x19f4f8: 0x0  nop
    ctx->pc = 0x19f4f8u;
    // NOP
    // 0x19f4fc: 0x0  nop
    ctx->pc = 0x19f4fcu;
    // NOP
    if (ctx->pc == 0x19f4fcu) { ctx->pc = 0x19f500u; }
}
