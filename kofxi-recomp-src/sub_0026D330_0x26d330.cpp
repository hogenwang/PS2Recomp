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

// Function: sub_0026D330
// Address: 0x26d330 - 0x26d348
void sub_0026D330_0x26d330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026D330_0x26d330");
#endif

    ctx->pc = 0x26d330u;

    // 0x26d330: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x26D330u;
    {
        const bool branch_taken_0x26d330 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x26D334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26D330u;
        // 0x26d334: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26d330) {
            ctx->pc = 0x26D340u;
            goto label_26d340;
        }
    }
    ctx->pc = 0x26D338u;
    // 0x26d338: 0x8049cb6  j           func_1272D8
    ctx->pc = 0x26D338u;
    ctx->pc = 0x26D33Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26D338u;
    // 0x26d33c: 0x24060404  addiu       $a2, $zero, 0x404 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1028));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    sub_001272D8_0x1272d8(rdram, ctx, runtime); return;
    ctx->pc = 0x26D340u;
label_26d340:
    // 0x26d340: 0x3e00008  jr          $ra
    ctx->pc = 0x26D340u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26D340u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26D348u;
}
