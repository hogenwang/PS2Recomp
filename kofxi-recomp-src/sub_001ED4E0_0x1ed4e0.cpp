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

// Function: sub_001ED4E0
// Address: 0x1ed4e0 - 0x1ed4f0
void sub_001ED4E0_0x1ed4e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ED4E0_0x1ed4e0");
#endif

    ctx->pc = 0x1ed4e0u;

    // 0x1ed4e0: 0x38a23808  xori        $v0, $a1, 0x3808
    ctx->pc = 0x1ed4e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)14344);
    // 0x1ed4e4: 0x3e00008  jr          $ra
    ctx->pc = 0x1ED4E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ED4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1ED4E4u;
        // 0x1ed4e8: 0x2c420001  sltiu       $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1ED4E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1ED4ECu;
    // 0x1ed4ec: 0x0  nop
    ctx->pc = 0x1ed4ecu;
    // NOP
    if (ctx->pc == 0x1ed4ecu) { ctx->pc = 0x1ed4f0u; }
}
