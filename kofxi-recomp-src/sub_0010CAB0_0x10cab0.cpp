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

// Function: sub_0010CAB0
// Address: 0x10cab0 - 0x10caf0
void sub_0010CAB0_0x10cab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CAB0_0x10cab0");
#endif

    ctx->pc = 0x10cab0u;

    // 0x10cab0: 0x24030025  addiu       $v1, $zero, 0x25
    ctx->pc = 0x10cab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x10cab4: 0xc  syscall     0
    ctx->pc = 0x10cab4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cab8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CAB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CAB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CAC0u;
    // 0x10cac0: 0x2403ffda  addiu       $v1, $zero, -0x26
    ctx->pc = 0x10cac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967258));
    // 0x10cac4: 0xc  syscall     0
    ctx->pc = 0x10cac4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cac8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CAC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CAC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CAD0u;
    // 0x10cad0: 0x24030027  addiu       $v1, $zero, 0x27
    ctx->pc = 0x10cad0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x10cad4: 0xc  syscall     0
    ctx->pc = 0x10cad4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cad8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CAD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CAD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CAE0u;
    // 0x10cae0: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x10cae0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    // 0x10cae4: 0xc  syscall     0
    ctx->pc = 0x10cae4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cae8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CAE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CAE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CAF0u;
}
