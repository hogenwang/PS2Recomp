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

// Function: sub_002B0710
// Address: 0x2b0710 - 0x2b0740
void sub_002B0710_0x2b0710(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B0710_0x2b0710");
#endif

    ctx->pc = 0x2b0710u;

    // 0x2b0710: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B0710u;
    {
        const bool branch_taken_0x2b0710 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b0710) {
            ctx->pc = 0x2B0714u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B0710u;
            // 0x2b0714: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B0728u;
            goto label_2b0728;
        }
    }
    ctx->pc = 0x2B0718u;
    // 0x2b0718: 0x8c820060  lw          $v0, 0x60($a0)
    ctx->pc = 0x2b0718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 96)));
    // 0x2b071c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B071Cu;
    {
        const bool branch_taken_0x2b071c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b071c) {
            ctx->pc = 0x2B0734u;
            goto label_2b0734;
        }
    }
    ctx->pc = 0x2B0724u;
    // 0x2b0724: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x2b0724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
label_2b0728:
    // 0x2b0728: 0x10800002  beqz        $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2B0728u;
    {
        const bool branch_taken_0x2b0728 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B0728u;
        // 0x2b072c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b0728) {
            ctx->pc = 0x2B0734u;
            goto label_2b0734;
        }
    }
    ctx->pc = 0x2B0730u;
    // 0x2b0730: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b0730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b0734:
    // 0x2b0734: 0x3e00008  jr          $ra
    ctx->pc = 0x2B0734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B0734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B073Cu;
    // 0x2b073c: 0x0  nop
    ctx->pc = 0x2b073cu;
    // NOP
    if (ctx->pc == 0x2b073cu) { ctx->pc = 0x2b0740u; }
}
