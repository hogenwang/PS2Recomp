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

// Function: sub_00156380
// Address: 0x156380 - 0x156390
void sub_00156380_0x156380(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00156380_0x156380");
#endif

    ctx->pc = 0x156380u;

    // 0x156380: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x156380u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x156384: 0xac44f788  sw          $a0, -0x878($v0)
    ctx->pc = 0x156384u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294965128), GPR_U32(ctx, 4));
    // 0x156388: 0x3e00008  jr          $ra
    ctx->pc = 0x156388u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x156388u;
        // 0x15638c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x156388u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x156390u;
}
