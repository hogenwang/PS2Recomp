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

// Function: sub_0010A6A8
// Address: 0x10a6a8 - 0x10a6b8
void sub_0010A6A8_0x10a6a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010A6A8_0x10a6a8");
#endif

    ctx->pc = 0x10a6a8u;

    // 0x10a6a8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x10a6a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x10a6ac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x10a6acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10a6b0: 0x3e00008  jr          $ra
    ctx->pc = 0x10A6B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10A6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10A6B0u;
        // 0x10a6b4: 0xac620878  sw          $v0, 0x878($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 2168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10A6B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10A6B8u;
}
