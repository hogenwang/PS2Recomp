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

// Function: kofxiSyscallResumeThreadWrapper
// Address: 0x10cbf0 - 0x10cc00
void kofxiSyscallResumeThreadWrapper_0x10cbf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSyscallResumeThreadWrapper_0x10cbf0");
#endif

    ctx->pc = 0x10cbf0u;

    // 0x10cbf0: 0x24030039  addiu       $v1, $zero, 0x39
    ctx->pc = 0x10cbf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
    // 0x10cbf4: 0xc  syscall     0
    ctx->pc = 0x10cbf4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CC00u;
}
