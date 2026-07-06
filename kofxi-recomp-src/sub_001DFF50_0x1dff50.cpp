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

// Function: sub_001DFF50
// Address: 0x1dff50 - 0x1dffc0
void sub_001DFF50_0x1dff50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DFF50_0x1dff50");
#endif

    switch (ctx->pc) {
        case 0x1dff64u: goto label_1dff64;
        default: break;
    }

    ctx->pc = 0x1dff50u;

    // 0x1dff50: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1dff50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1dff54: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x1dff54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x1dff58: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1dff58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1dff5c: 0xc0800d2  jal         func_200348
    ctx->pc = 0x1DFF5Cu;
    SET_GPR_U32(ctx, 31, 0x1DFF64u);
    ctx->pc = 0x1DFF60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DFF5Cu;
    // 0x1dff60: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x200348u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x200348u, 0x1DFF5Cu, 0x1DFF64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1DFF64u;
label_1dff64:
    // 0x1dff64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1dff64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1dff68: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x1DFF68u;
    {
        const bool branch_taken_0x1dff68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DFF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF68u;
        // 0x1dff6c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff68) {
            ctx->pc = 0x1DFFB4u;
            goto label_1dffb4;
        }
    }
    ctx->pc = 0x1DFF70u;
    // 0x1dff70: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1dff70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1dff74: 0x2c620009  sltiu       $v0, $v1, 0x9
    ctx->pc = 0x1dff74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x1dff78: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1DFF78u;
    {
        const bool branch_taken_0x1dff78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF78u;
        // 0x1dff7c: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff78) {
            ctx->pc = 0x1DFFB4u;
            goto label_1dffb4;
        }
    }
    ctx->pc = 0x1DFF80u;
    // 0x1dff80: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x1dff80u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1dff84: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x1dff84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x1dff88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x1dff88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1dff8c: 0x8c63cc50  lw          $v1, -0x33B0($v1)
    ctx->pc = 0x1dff8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954064)));
    // 0x1dff90: 0x600008  jr          $v1
    ctx->pc = 0x1DFF90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x1DFF98u: goto label_1dff98;
            case 0x1DFFA0u: goto label_1dffa0;
            case 0x1DFFA8u: goto label_1dffa8;
            case 0x1DFFB0u: goto label_1dffb0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFF90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x1DFF98u;
label_1dff98:
    // 0x1dff98: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1DFF98u;
    {
        const bool branch_taken_0x1dff98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFF98u;
        // 0x1dff9c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dff98) {
            ctx->pc = 0x1DFFB4u;
            goto label_1dffb4;
        }
    }
    ctx->pc = 0x1DFFA0u;
label_1dffa0:
    // 0x1dffa0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1DFFA0u;
    {
        const bool branch_taken_0x1dffa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFA0u;
        // 0x1dffa4: 0x24020051  addiu       $v0, $zero, 0x51 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dffa0) {
            ctx->pc = 0x1DFFB4u;
            goto label_1dffb4;
        }
    }
    ctx->pc = 0x1DFFA8u;
label_1dffa8:
    // 0x1dffa8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DFFA8u;
    {
        const bool branch_taken_0x1dffa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DFFACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFA8u;
        // 0x1dffac: 0x24020061  addiu       $v0, $zero, 0x61 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 97));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1dffa8) {
            ctx->pc = 0x1DFFB4u;
            goto label_1dffb4;
        }
    }
    ctx->pc = 0x1DFFB0u;
label_1dffb0:
    // 0x1dffb0: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x1dffb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_1dffb4:
    // 0x1dffb4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1dffb4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1dffb8: 0x3e00008  jr          $ra
    ctx->pc = 0x1DFFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DFFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DFFB8u;
        // 0x1dffbc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DFFB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DFFC0u;
}
