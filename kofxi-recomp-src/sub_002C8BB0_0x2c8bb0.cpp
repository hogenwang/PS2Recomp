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

// Function: sub_002C8BB0
// Address: 0x2c8bb0 - 0x2c8be8
void sub_002C8BB0_0x2c8bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8BB0_0x2c8bb0");
#endif

    ctx->pc = 0x2c8bb0u;

    // 0x2c8bb0: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C8BB0u;
    {
        const bool branch_taken_0x2c8bb0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c8bb0) {
            ctx->pc = 0x2C8BB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2C8BB0u;
            // 0x2c8bb4: 0x24040204  addiu       $a0, $zero, 0x204 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2C8BDCu;
            goto label_2c8bdc;
        }
    }
    ctx->pc = 0x2C8BB8u;
    // 0x2c8bb8: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x2c8bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x2c8bbc: 0x14440007  bne         $v0, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C8BBCu;
    {
        const bool branch_taken_0x2c8bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2C8BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BBCu;
        // 0x2c8bc0: 0x24040204  addiu       $a0, $zero, 0x204 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bbc) {
            ctx->pc = 0x2C8BDCu;
            goto label_2c8bdc;
        }
    }
    ctx->pc = 0x2C8BC4u;
    // 0x2c8bc4: 0x8c430030  lw          $v1, 0x30($v0)
    ctx->pc = 0x2c8bc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x2c8bc8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2c8bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2c8bcc: 0x24428368  addiu       $v0, $v0, -0x7C98
    ctx->pc = 0x2c8bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294935400));
    // 0x2c8bd0: 0x10620002  beq         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x2C8BD0u;
    {
        const bool branch_taken_0x2c8bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2C8BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BD0u;
        // 0x2c8bd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bd0) {
            ctx->pc = 0x2C8BDCu;
            goto label_2c8bdc;
        }
    }
    ctx->pc = 0x2C8BD8u;
    // 0x2c8bd8: 0x24040204  addiu       $a0, $zero, 0x204
    ctx->pc = 0x2c8bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 516));
label_2c8bdc:
    // 0x2c8bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x2C8BDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2C8BDCu;
        // 0x2c8be0: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C8BDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C8BE4u;
    // 0x2c8be4: 0x0  nop
    ctx->pc = 0x2c8be4u;
    // NOP
}
