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

// Function: sub_0019F2E0
// Address: 0x19f2e0 - 0x19f2f0
void sub_0019F2E0_0x19f2e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F2E0_0x19f2e0");
#endif

    ctx->pc = 0x19f2e0u;

    // 0x19f2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x19F2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F2E8u;
    // 0x19f2e8: 0x0  nop
    ctx->pc = 0x19f2e8u;
    // NOP
    // 0x19f2ec: 0x0  nop
    ctx->pc = 0x19f2ecu;
    // NOP
    if (ctx->pc == 0x19f2ecu) { ctx->pc = 0x19f2f0u; }
}
