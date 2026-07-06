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

// Function: sub_001E67D8
// Address: 0x1e67d8 - 0x1e67f0
void sub_001E67D8_0x1e67d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E67D8_0x1e67d8");
#endif

    ctx->pc = 0x1e67d8u;

    // 0x1e67d8: 0x410c0  sll         $v0, $a0, 3
    ctx->pc = 0x1e67d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x1e67dc: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x1e67dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x1e67e0: 0x24211500  addiu       $at, $at, 0x1500
    ctx->pc = 0x1e67e0u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 5376));
    // 0x1e67e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1E67E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E67E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E67E4u;
        // 0x1e67e8: 0x221021  addu        $v0, $at, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E67E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E67ECu;
    // 0x1e67ec: 0x0  nop
    ctx->pc = 0x1e67ecu;
    // NOP
    if (ctx->pc == 0x1e67ecu) { ctx->pc = 0x1e67f0u; }
}
