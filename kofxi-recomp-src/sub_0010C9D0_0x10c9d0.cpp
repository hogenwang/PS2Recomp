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

// Function: sub_0010C9D0
// Address: 0x10c9d0 - 0x10ca00
void sub_0010C9D0_0x10c9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010C9D0_0x10c9d0");
#endif

    ctx->pc = 0x10c9d0u;

    // 0x10c9d0: 0x24030017  addiu       $v1, $zero, 0x17
    ctx->pc = 0x10c9d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x10c9d4: 0xc  syscall     0
    ctx->pc = 0x10c9d4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c9d8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C9D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C9D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C9E0u;
    // 0x10c9e0: 0x240300fc  addiu       $v1, $zero, 0xFC
    ctx->pc = 0x10c9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 252));
    // 0x10c9e4: 0xc  syscall     0
    ctx->pc = 0x10c9e4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c9e8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C9E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C9E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10C9F0u;
    // 0x10c9f0: 0x240300fd  addiu       $v1, $zero, 0xFD
    ctx->pc = 0x10c9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 253));
    // 0x10c9f4: 0xc  syscall     0
    ctx->pc = 0x10c9f4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10c9f8: 0x3e00008  jr          $ra
    ctx->pc = 0x10C9F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10C9F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CA00u;
}
