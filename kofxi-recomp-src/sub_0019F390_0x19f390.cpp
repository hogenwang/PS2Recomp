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

// Function: sub_0019F390
// Address: 0x19f390 - 0x19f3a0
void sub_0019F390_0x19f390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019F390_0x19f390");
#endif

    ctx->pc = 0x19f390u;

    // 0x19f390: 0x3e00008  jr          $ra
    ctx->pc = 0x19F390u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19F390u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19F398u;
    // 0x19f398: 0x0  nop
    ctx->pc = 0x19f398u;
    // NOP
    // 0x19f39c: 0x0  nop
    ctx->pc = 0x19f39cu;
    // NOP
    if (ctx->pc == 0x19f39cu) { ctx->pc = 0x19f3a0u; }
}
