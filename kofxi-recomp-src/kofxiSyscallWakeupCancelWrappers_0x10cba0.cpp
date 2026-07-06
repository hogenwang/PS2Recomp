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

// Function: kofxiSyscallWakeupCancelWrappers
// Address: 0x10cba0 - 0x10cbd0
void kofxiSyscallWakeupCancelWrappers_0x10cba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSyscallWakeupCancelWrappers_0x10cba0");
#endif

    ctx->pc = 0x10cba0u;

    // 0x10cba0: 0x2403ffcc  addiu       $v1, $zero, -0x34
    ctx->pc = 0x10cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967244));
    // 0x10cba4: 0xc  syscall     0
    ctx->pc = 0x10cba4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cba8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CBA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CBA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CBB0u;
    // 0x10cbb0: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x10cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x10cbb4: 0xc  syscall     0
    ctx->pc = 0x10cbb4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cbb8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CBB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CBB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CBC0u;
    // 0x10cbc0: 0x2403ffca  addiu       $v1, $zero, -0x36
    ctx->pc = 0x10cbc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967242));
    // 0x10cbc4: 0xc  syscall     0
    ctx->pc = 0x10cbc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cbc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CBC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CBC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CBD0u;
}
