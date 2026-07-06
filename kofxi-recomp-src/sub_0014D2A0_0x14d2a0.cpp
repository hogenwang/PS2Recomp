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

// Function: sub_0014D2A0
// Address: 0x14d2a0 - 0x14d2f0
void sub_0014D2A0_0x14d2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D2A0_0x14d2a0");
#endif

    ctx->pc = 0x14d2a0u;

    // 0x14d2a0: 0x948300ea  lhu         $v1, 0xEA($a0)
    ctx->pc = 0x14d2a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 234)));
    // 0x14d2a4: 0x24020025  addiu       $v0, $zero, 0x25
    ctx->pc = 0x14d2a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
    // 0x14d2a8: 0x5062000d  beql        $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x14D2A8u;
    {
        const bool branch_taken_0x14d2a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d2a8) {
            ctx->pc = 0x14D2ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D2A8u;
            // 0x14d2ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D2E0u;
            goto label_14d2e0;
        }
    }
    ctx->pc = 0x14D2B0u;
    // 0x14d2b0: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x14d2b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x14d2b4: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x14D2B4u;
    {
        const bool branch_taken_0x14d2b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d2b4) {
            ctx->pc = 0x14D2DCu;
            goto label_14d2dc;
        }
    }
    ctx->pc = 0x14D2BCu;
    // 0x14d2bc: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x14d2bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x14d2c0: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x14D2C0u;
    {
        const bool branch_taken_0x14d2c0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d2c0) {
            ctx->pc = 0x14D2DCu;
            goto label_14d2dc;
        }
    }
    ctx->pc = 0x14D2C8u;
    // 0x14d2c8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x14d2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x14d2cc: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x14D2CCu;
    {
        const bool branch_taken_0x14d2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x14d2cc) {
            ctx->pc = 0x14D2DCu;
            goto label_14d2dc;
        }
    }
    ctx->pc = 0x14D2D4u;
    // 0x14d2d4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x14D2D4u;
    {
        const bool branch_taken_0x14d2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D2D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D2D4u;
        // 0x14d2d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d2d4) {
            ctx->pc = 0x14D2E0u;
            goto label_14d2e0;
        }
    }
    ctx->pc = 0x14D2DCu;
label_14d2dc:
    // 0x14d2dc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14d2dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14d2e0:
    // 0x14d2e0: 0x3e00008  jr          $ra
    ctx->pc = 0x14D2E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D2E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D2E8u;
    // 0x14d2e8: 0x0  nop
    ctx->pc = 0x14d2e8u;
    // NOP
    // 0x14d2ec: 0x0  nop
    ctx->pc = 0x14d2ecu;
    // NOP
}
