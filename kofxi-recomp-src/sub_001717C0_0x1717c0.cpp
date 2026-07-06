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

// Function: sub_001717C0
// Address: 0x1717c0 - 0x1717d0
void sub_001717C0_0x1717c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001717C0_0x1717c0");
#endif

    ctx->pc = 0x1717c0u;

    // 0x1717c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1717C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1717C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1717C8u;
    // 0x1717c8: 0x0  nop
    ctx->pc = 0x1717c8u;
    // NOP
    // 0x1717cc: 0x0  nop
    ctx->pc = 0x1717ccu;
    // NOP
}
