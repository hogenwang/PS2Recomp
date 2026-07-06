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

// Function: sub_002AF610
// Address: 0x2af610 - 0x2af638
void sub_002AF610_0x2af610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AF610_0x2af610");
#endif

    ctx->pc = 0x2af610u;

    // 0x2af610: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2af610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2af614: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AF614u;
    {
        const bool branch_taken_0x2af614 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2AF618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF614u;
        // 0x2af618: 0xac820018  sw          $v0, 0x18($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2af614) {
            ctx->pc = 0x2AF624u;
            goto label_2af624;
        }
    }
    ctx->pc = 0x2AF61Cu;
    // 0x2af61c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF61Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF61Cu;
        // 0x2af620: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF61Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF624u;
label_2af624:
    // 0x2af624: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x2af624u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x2af628: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2af628u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2af62c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2af62cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2af630: 0x3e00008  jr          $ra
    ctx->pc = 0x2AF630u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AF634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2AF630u;
        // 0x2af634: 0xac830040  sw          $v1, 0x40($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2AF630u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2AF638u;
}
