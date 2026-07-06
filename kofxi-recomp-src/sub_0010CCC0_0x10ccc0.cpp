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

// Function: sub_0010CCC0
// Address: 0x10ccc0 - 0x10ccd0
void sub_0010CCC0_0x10ccc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010CCC0_0x10ccc0");
#endif

    ctx->pc = 0x10ccc0u;

    // 0x10ccc0: 0x2403ffba  addiu       $v1, $zero, -0x46
    ctx->pc = 0x10ccc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967226));
    // 0x10ccc4: 0xc  syscall     0
    ctx->pc = 0x10ccc4u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
    // 0x10ccc8: 0x3e00008  jr          $ra
    ctx->pc = 0x10CCC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10CCC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10CCD0u;
}
