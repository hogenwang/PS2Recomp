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

// Function: sub_001DC2B0
// Address: 0x1dc2b0 - 0x1dc300
void sub_001DC2B0_0x1dc2b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DC2B0_0x1dc2b0");
#endif

    switch (ctx->pc) {
        case 0x1dc2d0u: goto label_1dc2d0;
        default: break;
    }

    ctx->pc = 0x1dc2b0u;

    // 0x1dc2b0: 0x3c0201c0  lui         $v0, 0x1C0
    ctx->pc = 0x1dc2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)448 << 16));
    // 0x1dc2b4: 0x24428080  addiu       $v0, $v0, -0x7F80
    ctx->pc = 0x1dc2b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934656));
    // 0x1dc2b8: 0x8c460054  lw          $a2, 0x54($v0)
    ctx->pc = 0x1dc2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
    // 0x1dc2bc: 0x18c0000d  blez        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x1DC2BCu;
    {
        const bool branch_taken_0x1dc2bc = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x1DC2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2BCu;
        // 0x1dc2c0: 0x8c430058  lw          $v1, 0x58($v0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2bc) {
            ctx->pc = 0x1DC2F4u;
            goto label_1dc2f4;
        }
    }
    ctx->pc = 0x1DC2C4u;
    // 0x1dc2c4: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x1dc2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1dc2c8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x1dc2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1dc2cc: 0x24440190  addiu       $a0, $v0, 0x190
    ctx->pc = 0x1dc2ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 400));
label_1dc2d0:
    // 0x1dc2d0: 0x8c620188  lw          $v0, 0x188($v1)
    ctx->pc = 0x1dc2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 392)));
    // 0x1dc2d4: 0x14470003  bne         $v0, $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x1DC2D4u;
    {
        const bool branch_taken_0x1dc2d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        ctx->pc = 0x1DC2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2D4u;
        // 0x1dc2d8: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2d4) {
            ctx->pc = 0x1DC2E4u;
            goto label_1dc2e4;
        }
    }
    ctx->pc = 0x1DC2DCu;
    // 0x1dc2dc: 0x641021  addu        $v0, $v1, $a0
    ctx->pc = 0x1dc2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1dc2e0: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1dc2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
label_1dc2e4:
    // 0x1dc2e4: 0x0  nop
    ctx->pc = 0x1dc2e4u;
    // NOP
    // 0x1dc2e8: 0x0  nop
    ctx->pc = 0x1dc2e8u;
    // NOP
    // 0x1dc2ec: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1DC2ECu;
    {
        const bool branch_taken_0x1dc2ec = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DC2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DC2ECu;
        // 0x1dc2f0: 0x24630440  addiu       $v1, $v1, 0x440 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dc2ec) {
            ctx->pc = 0x1DC2D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1dc2d0;
        }
    }
    ctx->pc = 0x1DC2F4u;
label_1dc2f4:
    // 0x1dc2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x1DC2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DC2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DC2FCu;
    // 0x1dc2fc: 0x0  nop
    ctx->pc = 0x1dc2fcu;
    // NOP
}
