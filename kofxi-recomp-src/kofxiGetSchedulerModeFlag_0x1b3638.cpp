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

// Function: kofxiGetSchedulerModeFlag
// Address: 0x1b3638 - 0x1b3648
void kofxiGetSchedulerModeFlag_0x1b3638(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("kofxiGetSchedulerModeFlag_0x1b3638");
#endif

    ctx->pc = 0x1b3638u;

    // 0x1b3638: 0x3c030037  lui         $v1, 0x37
    ctx->pc = 0x1b3638u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)55 << 16));
    // 0x1b363c: 0x3e00008  jr          $ra
    ctx->pc = 0x1B363Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1B3640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1B363Cu;
        // 0x1b3640: 0x8c622ff8  lw          $v0, 0x2FF8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12280)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B363Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B3644u;
    // 0x1b3644: 0x0  nop
    ctx->pc = 0x1b3644u;
    // NOP
    if (ctx->pc == 0x1b3644u) { ctx->pc = 0x1b3648u; }
}
