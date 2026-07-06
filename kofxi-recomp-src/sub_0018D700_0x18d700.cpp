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

// Function: sub_0018D700
// Address: 0x18d700 - 0x18d710
void sub_0018D700_0x18d700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D700_0x18d700");
#endif

    ctx->pc = 0x18d700u;

    // 0x18d700: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18d700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18d704: 0x3e00008  jr          $ra
    ctx->pc = 0x18D704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18D704u;
        // 0x18d708: 0x8c42bc00  lw          $v0, -0x4400($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294949888)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18D704u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18D70Cu;
    // 0x18d70c: 0x0  nop
    ctx->pc = 0x18d70cu;
    // NOP
    if (ctx->pc == 0x18d70cu) { ctx->pc = 0x18d710u; }
}
