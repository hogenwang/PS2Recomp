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

// Function: sub_0010CB10
// Address: 0x10cb10 - 0x10cb50
void sub_0010CB10_0x10cb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CB10_0x10cb10");
#endif

    ctx->pc = 0x10cb10u;

    // 0x10cb10: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x10cb10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x10cb14: 0xc  syscall     0
    ctx->pc = 0x10cb14u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cb18: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB20u;
    // 0x10cb20: 0x2403ffd4  addiu       $v1, $zero, -0x2C
    ctx->pc = 0x10cb20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967252));
    // 0x10cb24: 0xc  syscall     0
    ctx->pc = 0x10cb24u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cb28: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB30u;
    // 0x10cb30: 0x2403002d  addiu       $v1, $zero, 0x2D
    ctx->pc = 0x10cb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    // 0x10cb34: 0xc  syscall     0
    ctx->pc = 0x10cb34u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cb38: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB40u;
    // 0x10cb40: 0x2403ffd2  addiu       $v1, $zero, -0x2E
    ctx->pc = 0x10cb40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967250));
    // 0x10cb44: 0xc  syscall     0
    ctx->pc = 0x10cb44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cb48: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB50u;
}
