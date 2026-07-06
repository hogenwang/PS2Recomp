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

// Function: sub_0019F540
// Address: 0x19f540 - 0x19f550
void sub_0019F540_0x19f540(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F540_0x19f540");
#endif

    ctx->pc = 0x19f540u;

    // 0x19f540: 0x3e00008  jr          $ra
    ctx->pc = 0x19F540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F548u;
    // 0x19f548: 0x0  nop
    ctx->pc = 0x19f548u;
    // NOP
    // 0x19f54c: 0x0  nop
    ctx->pc = 0x19f54cu;
    // NOP
    if (ctx->pc == 0x19f54cu) { ctx->pc = 0x19f550u; }
}
