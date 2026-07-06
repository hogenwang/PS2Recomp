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

// Function: sub_0010D070
// Address: 0x10d070 - 0x10d090
void sub_0010D070_0x10d070(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D070_0x10d070");
#endif

    switch (ctx->pc) {
        case 0x10d080u: goto label_10d080;
        default: break;
    }

    ctx->pc = 0x10d070u;

    // 0x10d070: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x10d070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
    // 0x10d074: 0xc  syscall     0
    ctx->pc = 0x10d074u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10d078: 0x3e00008  jr          $ra
    ctx->pc = 0x10D078u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D078u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D080u;
label_10d080:
    // 0x10d080: 0x2403007b  addiu       $v1, $zero, 0x7B
    ctx->pc = 0x10d080u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
    // 0x10d084: 0xc  syscall     0
    ctx->pc = 0x10d084u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10d088: 0x3e00008  jr          $ra
    ctx->pc = 0x10D088u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D088u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D090u;
}
