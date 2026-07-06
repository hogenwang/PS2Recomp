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

// Function: sub_0010CC40
// Address: 0x10cc40 - 0x10cc60
void sub_0010CC40_0x10cc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CC40_0x10cc40");
#endif

    ctx->pc = 0x10cc40u;

    // 0x10cc40: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x10cc40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x10cc44: 0xc  syscall     0
    ctx->pc = 0x10cc44u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cc48: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CC48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CC50u;
    // 0x10cc50: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x10cc50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x10cc54: 0xc  syscall     0
    ctx->pc = 0x10cc54u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cc58: 0x3e00008  jr          $ra
    ctx->pc = 0x10CC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CC60u;
}
