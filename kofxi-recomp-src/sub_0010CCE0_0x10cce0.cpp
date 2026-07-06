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

// Function: sub_0010CCE0
// Address: 0x10cce0 - 0x10cd00
void sub_0010CCE0_0x10cce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CCE0_0x10cce0");
#endif

    ctx->pc = 0x10cce0u;

    // 0x10cce0: 0x2403ffb8  addiu       $v1, $zero, -0x48
    ctx->pc = 0x10cce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967224));
    // 0x10cce4: 0xc  syscall     0
    ctx->pc = 0x10cce4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cce8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CCE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CCE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CCF0u;
    // 0x10ccf0: 0x24030049  addiu       $v1, $zero, 0x49
    ctx->pc = 0x10ccf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 73));
    // 0x10ccf4: 0xc  syscall     0
    ctx->pc = 0x10ccf4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ccf8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CCF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CCF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CD00u;
}
