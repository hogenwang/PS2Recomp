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

// Function: sub_002BBA10
// Address: 0x2bba10 - 0x2bbab8
void sub_002BBA10_0x2bba10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002BBA10_0x2bba10");
#endif

    switch (ctx->pc) {
        case 0x2bba48u: goto label_2bba48;
        case 0x2bba54u: goto label_2bba54;
        case 0x2bba64u: goto label_2bba64;
        case 0x2bba78u: goto label_2bba78;
        case 0x2bba98u: goto label_2bba98;
        default: break;
    }

    ctx->pc = 0x2bba10u;

    // 0x2bba10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2bba10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2bba14: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2bba14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2bba18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2bba18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2bba1c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2bba1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2bba20: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2bba20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2bba24: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2bba24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2bba28: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2BBA28u;
    {
        const bool branch_taken_0x2bba28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA28u;
        // 0x2bba2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba28) {
            ctx->pc = 0x2BBAA4u;
            goto label_2bbaa4;
        }
    }
    ctx->pc = 0x2BBA30u;
    // 0x2bba30: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x2bba30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x2bba34: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2bba34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2bba38: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x2BBA38u;
    {
        const bool branch_taken_0x2bba38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA38u;
        // 0x2bba3c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba38) {
            ctx->pc = 0x2BBAA4u;
            goto label_2bbaa4;
        }
    }
    ctx->pc = 0x2BBA40u;
    // 0x2bba40: 0xc0ac604  jal         func_2B1810
    ctx->pc = 0x2BBA40u;
    SET_GPR_U32(ctx, 31, 0x2BBA48u);
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2BBA40u, 0x2BBA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA48u;
label_2bba48:
    // 0x2bba48: 0x30503000  andi        $s0, $v0, 0x3000
    ctx->pc = 0x2bba48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
    // 0x2bba4c: 0xc0ac604  jal         func_2B1810
    ctx->pc = 0x2BBA4Cu;
    SET_GPR_U32(ctx, 31, 0x2BBA54u);
    ctx->pc = 0x2BBA50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA4Cu;
    // 0x2bba50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2BBA4Cu, 0x2BBA54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA54u;
label_2bba54:
    // 0x2bba54: 0x12020013  beq         $s0, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x2BBA54u;
    {
        const bool branch_taken_0x2bba54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BBA58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA54u;
        // 0x2bba58: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba54) {
            ctx->pc = 0x2BBAA4u;
            goto label_2bbaa4;
        }
    }
    ctx->pc = 0x2BBA5Cu;
    // 0x2bba5c: 0xc0ac604  jal         func_2B1810
    ctx->pc = 0x2BBA5Cu;
    SET_GPR_U32(ctx, 31, 0x2BBA64u);
    ctx->pc = 0x2BBA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA5Cu;
    // 0x2bba60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2BBA5Cu, 0x2BBA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA64u;
label_2bba64:
    // 0x2bba64: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2bba64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
    // 0x2bba68: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2BBA68u;
    {
        const bool branch_taken_0x2bba68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA68u;
        // 0x2bba6c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba68) {
            ctx->pc = 0x2BBAA4u;
            goto label_2bbaa4;
        }
    }
    ctx->pc = 0x2BBA70u;
    // 0x2bba70: 0xc0ac604  jal         func_2B1810
    ctx->pc = 0x2BBA70u;
    SET_GPR_U32(ctx, 31, 0x2BBA78u);
    ctx->pc = 0x2BBA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA70u;
    // 0x2bba74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1810u, 0x2BBA70u, 0x2BBA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA78u;
label_2bba78:
    // 0x2bba78: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bba78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2bba7c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2BBA7Cu;
    {
        const bool branch_taken_0x2bba7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BBA80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA7Cu;
        // 0x2bba80: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba7c) {
            ctx->pc = 0x2BBAA0u;
            goto label_2bbaa0;
        }
    }
    ctx->pc = 0x2BBA84u;
    // 0x2bba84: 0x8e2300b0  lw          $v1, 0xB0($s1)
    ctx->pc = 0x2bba84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2bba88: 0xac62008c  sw          $v0, 0x8C($v1)
    ctx->pc = 0x2bba88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 140), GPR_U32(ctx, 2));
    // 0x2bba8c: 0x8e2500b0  lw          $a1, 0xB0($s1)
    ctx->pc = 0x2bba8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
    // 0x2bba90: 0xc0aecfe  jal         func_2BB3F8
    ctx->pc = 0x2BBA90u;
    SET_GPR_U32(ctx, 31, 0x2BBA98u);
    ctx->pc = 0x2BBA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BBA90u;
    // 0x2bba94: 0x8e2400dc  lw          $a0, 0xDC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BB3F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BB3F8u, 0x2BBA90u, 0x2BBA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BBA98u;
label_2bba98:
    // 0x2bba98: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2BBA98u;
    {
        const bool branch_taken_0x2bba98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BBA9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBA98u;
        // 0x2bba9c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bba98) {
            ctx->pc = 0x2BBAA4u;
            goto label_2bbaa4;
        }
    }
    ctx->pc = 0x2BBAA0u;
label_2bbaa0:
    // 0x2bbaa0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bbaa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bbaa4:
    // 0x2bbaa4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2bbaa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2bbaa8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2bbaa8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2bbaac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2bbaacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2bbab0: 0x3e00008  jr          $ra
    ctx->pc = 0x2BBAB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BBAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BBAB0u;
        // 0x2bbab4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BBAB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BBAB8u;
}
