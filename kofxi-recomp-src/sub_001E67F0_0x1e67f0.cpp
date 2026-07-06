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

// Function: sub_001E67F0
// Address: 0x1e67f0 - 0x1e6820
void sub_001E67F0_0x1e67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E67F0_0x1e67f0");
#endif

    ctx->pc = 0x1e67f0u;

    // 0x1e67f0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1e67f0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1e67f4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1e67f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x1e67f8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1e67f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x1e67fc: 0x3e00008  jr          $ra
    ctx->pc = 0x1E67FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67FCu;
        // 0x1e6800: 0x8c421500  lw          $v0, 0x1500($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 5376)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E67FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E6804u;
    // 0x1e6804: 0x0  nop
    ctx->pc = 0x1e6804u;
    // NOP
    // 0x1e6808: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x1e6808u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x1e680c: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e680cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1e6810: 0x250821  addu        $at, $at, $a1
    ctx->pc = 0x1e6810u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 5)));
    // 0x1e6814: 0x3e00008  jr          $ra
    ctx->pc = 0x1E6814u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E6818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E6814u;
        // 0x1e6818: 0xac241500  sw          $a0, 0x1500($at) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 1), 5376), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E6814u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E681Cu;
    // 0x1e681c: 0x0  nop
    ctx->pc = 0x1e681cu;
    // NOP
}
