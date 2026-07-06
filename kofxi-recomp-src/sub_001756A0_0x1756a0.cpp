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

// Function: sub_001756A0
// Address: 0x1756a0 - 0x1756b0
void sub_001756A0_0x1756a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001756A0_0x1756a0");
#endif

    ctx->pc = 0x1756a0u;

    // 0x1756a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1756A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1756A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1756A8u;
    // 0x1756a8: 0x0  nop
    ctx->pc = 0x1756a8u;
    // NOP
    // 0x1756ac: 0x0  nop
    ctx->pc = 0x1756acu;
    // NOP
    if (ctx->pc == 0x1756acu) { ctx->pc = 0x1756b0u; }
}
