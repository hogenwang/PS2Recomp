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

// Function: sub_00156340
// Address: 0x156340 - 0x156350
void sub_00156340_0x156340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156340_0x156340");
#endif

    ctx->pc = 0x156340u;

    // 0x156340: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x156340u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x156344: 0xac44f78c  sw          $a0, -0x874($v0)
    ctx->pc = 0x156344u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965132), GPR_U32(ctx, 4));
    // 0x156348: 0x3e00008  jr          $ra
    ctx->pc = 0x156348u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156348u;
        // 0x15634c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156348u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156350u;
}
