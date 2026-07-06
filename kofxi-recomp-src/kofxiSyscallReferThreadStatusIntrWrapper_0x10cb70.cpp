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

// Function: kofxiSyscallReferThreadStatusIntrWrapper
// Address: 0x10cb70 - 0x10cb80
void kofxiSyscallReferThreadStatusIntrWrapper_0x10cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiSyscallReferThreadStatusIntrWrapper_0x10cb70");
#endif

    ctx->pc = 0x10cb70u;

    // 0x10cb70: 0x2403ffcf  addiu       $v1, $zero, -0x31
    ctx->pc = 0x10cb70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967247));
    // 0x10cb74: 0xc  syscall     0
    ctx->pc = 0x10cb74u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10cb78: 0x3e00008  jr          $ra
    ctx->pc = 0x10CB78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CB78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CB80u;
}
