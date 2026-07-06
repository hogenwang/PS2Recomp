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

// Function: sub_002F1DE0
// Address: 0x2f1de0 - 0x2f1df0
void sub_002F1DE0_0x2f1de0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F1DE0_0x2f1de0");
#endif

    ctx->pc = 0x2f1de0u;

    // 0x2f1de0: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f1de0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f1de4: 0x3e00008  jr          $ra
    ctx->pc = 0x2F1DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F1DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F1DE4u;
        // 0x2f1de8: 0x8de2ed58  lw          $v0, -0x12A8($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962520)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F1DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F1DECu;
    // 0x2f1dec: 0x0  nop
    ctx->pc = 0x2f1decu;
    // NOP
}
