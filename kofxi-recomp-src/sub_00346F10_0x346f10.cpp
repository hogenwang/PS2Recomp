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

// Function: sub_00346F10
// Address: 0x346f10 - 0x346f20
void sub_00346F10_0x346f10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00346F10_0x346f10");
#endif

    ctx->pc = 0x346f10u;

    // 0x346f10: 0x3e00008  jr          $ra
    ctx->pc = 0x346F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x346F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x346F18u;
    // 0x346f18: 0x0  nop
    ctx->pc = 0x346f18u;
    // NOP
    // 0x346f1c: 0x0  nop
    ctx->pc = 0x346f1cu;
    // NOP
    if (ctx->pc == 0x346f1cu) { ctx->pc = 0x346f20u; }
}
