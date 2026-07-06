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

// Function: sub_002EDBD8
// Address: 0x2edbd8 - 0x2edbe8
void sub_002EDBD8_0x2edbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDBD8_0x2edbd8");
#endif

    ctx->pc = 0x2edbd8u;

    // 0x2edbd8: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2edbd8u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2edbdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDBDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBDCu;
        // 0x2edbe0: 0x8de2ecf4  lw          $v0, -0x130C($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294962420)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDBDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDBE4u;
    // 0x2edbe4: 0x0  nop
    ctx->pc = 0x2edbe4u;
    // NOP
}
