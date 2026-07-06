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

// Function: sub_001E1FC0
// Address: 0x1e1fc0 - 0x1e1fe0
void sub_001E1FC0_0x1e1fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E1FC0_0x1e1fc0");
#endif

    ctx->pc = 0x1e1fc0u;

    // 0x1e1fc0: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1e1fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
    // 0x1e1fc4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1FC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FC4u;
        // 0x1e1fc8: 0x8c6214f0  lw          $v0, 0x14F0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5360)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1FC4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1FCCu;
    // 0x1e1fcc: 0x0  nop
    ctx->pc = 0x1e1fccu;
    // NOP
    // 0x1e1fd0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e1fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e1fd4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E1FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E1FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E1FD4u;
        // 0x1e1fd8: 0xac4414f4  sw          $a0, 0x14F4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 5364), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E1FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E1FDCu;
    // 0x1e1fdc: 0x0  nop
    ctx->pc = 0x1e1fdcu;
    // NOP
}
