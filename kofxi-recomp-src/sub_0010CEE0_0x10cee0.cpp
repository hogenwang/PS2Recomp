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

// Function: sub_0010CEE0
// Address: 0x10cee0 - 0x10cf30
void sub_0010CEE0_0x10cee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CEE0_0x10cee0");
#endif

    ctx->pc = 0x10cee0u;

    // 0x10cee0: 0x24030064  addiu       $v1, $zero, 0x64
    ctx->pc = 0x10cee0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x10cee4: 0xc  syscall     0
    ctx->pc = 0x10cee4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cee8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CEF0u;
    // 0x10cef0: 0x24030066  addiu       $v1, $zero, 0x66
    ctx->pc = 0x10cef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x10cef4: 0xc  syscall     0
    ctx->pc = 0x10cef4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cef8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CEF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CEF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CF00u;
    // 0x10cf00: 0x2403ff99  addiu       $v1, $zero, -0x67
    ctx->pc = 0x10cf00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967193));
    // 0x10cf04: 0xc  syscall     0
    ctx->pc = 0x10cf04u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cf08: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CF10u;
    // 0x10cf10: 0x2403ff98  addiu       $v1, $zero, -0x68
    ctx->pc = 0x10cf10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967192));
    // 0x10cf14: 0xc  syscall     0
    ctx->pc = 0x10cf14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cf18: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CF20u;
    // 0x10cf20: 0x2403ff96  addiu       $v1, $zero, -0x6A
    ctx->pc = 0x10cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967190));
    // 0x10cf24: 0xc  syscall     0
    ctx->pc = 0x10cf24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cf28: 0x3e00008  jr          $ra
    ctx->pc = 0x10CF28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CF28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CF30u;
}
