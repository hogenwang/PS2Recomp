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

// Function: kofxiSyscallStartExitThreadWrappers
// Address: 0x10ca80 - 0x10caa0
void kofxiSyscallStartExitThreadWrappers_0x10ca80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSyscallStartExitThreadWrappers_0x10ca80");
#endif

    ctx->pc = 0x10ca80u;

    // 0x10ca80: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x10ca80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x10ca84: 0xc  syscall     0
    ctx->pc = 0x10ca84u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ca88: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CA90u;
    // 0x10ca90: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x10ca90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x10ca94: 0xc  syscall     0
    ctx->pc = 0x10ca94u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ca98: 0x3e00008  jr          $ra
    ctx->pc = 0x10CA98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CA98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CAA0u;
}
