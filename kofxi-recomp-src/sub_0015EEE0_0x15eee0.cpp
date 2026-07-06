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

// Function: sub_0015EEE0
// Address: 0x15eee0 - 0x15eef0
void sub_0015EEE0_0x15eee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EEE0_0x15eee0");
#endif

    ctx->pc = 0x15eee0u;

    // 0x15eee0: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x15eee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x15eee4: 0xa04044a0  sb          $zero, 0x44A0($v0)
    ctx->pc = 0x15eee4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 17568), (uint8_t)GPR_U32(ctx, 0));
    // 0x15eee8: 0x3e00008  jr          $ra
    ctx->pc = 0x15EEE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15EEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15EEE8u;
        // 0x15eeec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15EEE8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15EEF0u;
}
