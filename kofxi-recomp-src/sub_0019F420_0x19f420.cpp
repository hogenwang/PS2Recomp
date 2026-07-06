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

// Function: sub_0019F420
// Address: 0x19f420 - 0x19f430
void sub_0019F420_0x19f420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F420_0x19f420");
#endif

    ctx->pc = 0x19f420u;

    // 0x19f420: 0x3e00008  jr          $ra
    ctx->pc = 0x19F420u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F420u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F428u;
    // 0x19f428: 0x0  nop
    ctx->pc = 0x19f428u;
    // NOP
    // 0x19f42c: 0x0  nop
    ctx->pc = 0x19f42cu;
    // NOP
    if (ctx->pc == 0x19f42cu) { ctx->pc = 0x19f430u; }
}
