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

// Function: sub_002FCBA8
// Address: 0x2fcba8 - 0x2fcc78
void sub_002FCBA8_0x2fcba8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FCBA8_0x2fcba8");
#endif

    switch (ctx->pc) {
        case 0x2fcbb8u: goto label_2fcbb8;
        case 0x2fcbd0u: goto label_2fcbd0;
        case 0x2fcbf8u: goto label_2fcbf8;
        case 0x2fcc20u: goto label_2fcc20;
        case 0x2fcc38u: goto label_2fcc38;
        case 0x2fcc60u: goto label_2fcc60;
        default: break;
    }

    ctx->pc = 0x2fcba8u;

    // 0x2fcba8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fcba8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fcbac: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fcbacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fcbb0: 0xc0bf26c  jal         func_2FC9B0
    ctx->pc = 0x2FCBB0u;
    SET_GPR_U32(ctx, 31, 0x2FCBB8u);
    ctx->pc = 0x2FC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC9B0u, 0x2FCBB0u, 0x2FCBB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBB8u;
label_2fcbb8:
    // 0x2fcbb8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCBB8u;
    {
        const bool branch_taken_0x2fcbb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBB8u;
        // 0x2fcbbc: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbb8) {
            ctx->pc = 0x2FCBC8u;
            goto label_2fcbc8;
        }
    }
    ctx->pc = 0x2FCBC0u;
    // 0x2fcbc0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2FCBC0u;
    {
        const bool branch_taken_0x2fcbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBC0u;
        // 0x2fcbc4: 0x904206ae  lbu         $v0, 0x6AE($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1710)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbc0) {
            ctx->pc = 0x2FCC04u;
            goto label_2fcc04;
        }
    }
    ctx->pc = 0x2FCBC8u;
label_2fcbc8:
    // 0x2fcbc8: 0xc043344  jal         func_10CD10
    ctx->pc = 0x2FCBC8u;
    SET_GPR_U32(ctx, 31, 0x2FCBD0u);
    ctx->pc = 0x2FCBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCBC8u;
    // 0x2fcbcc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD10u, 0x2FCBC8u, 0x2FCBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBD0u;
label_2fcbd0:
    // 0x2fcbd0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fcbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcbd4: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x2fcbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2fcbd8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2fcbd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2fcbdc: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCBDCu;
    {
        const bool branch_taken_0x2fcbdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBDCu;
        // 0x2fcbe0: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbdc) {
            ctx->pc = 0x2FCBECu;
            goto label_2fcbec;
        }
    }
    ctx->pc = 0x2FCBE4u;
    // 0x2fcbe4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FCBE4u;
    {
        const bool branch_taken_0x2fcbe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCBE4u;
        // 0x2fcbe8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcbe4) {
            ctx->pc = 0x2FCC04u;
            goto label_2fcc04;
        }
    }
    ctx->pc = 0x2FCBECu;
label_2fcbec:
    // 0x2fcbec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fcbecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcbf0: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x2FCBF0u;
    SET_GPR_U32(ctx, 31, 0x2FCBF8u);
    ctx->pc = 0x2FCBF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCBF0u;
    // 0x2fcbf4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x2FCBF0u, 0x2FCBF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCBF8u;
label_2fcbf8:
    // 0x2fcbf8: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x2fcbf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fcbfc: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2fcbfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x2fcc00: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2fcc00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2fcc04:
    // 0x2fcc04: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fcc04u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcc08: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC08u;
        // 0x2fcc0c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCC10u;
    // 0x2fcc10: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2fcc10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2fcc14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2fcc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2fcc18: 0xc0bf26c  jal         func_2FC9B0
    ctx->pc = 0x2FCC18u;
    SET_GPR_U32(ctx, 31, 0x2FCC20u);
    ctx->pc = 0x2FC9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FC9B0u, 0x2FCC18u, 0x2FCC20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC20u;
label_2fcc20:
    // 0x2fcc20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCC20u;
    {
        const bool branch_taken_0x2fcc20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC20u;
        // 0x2fcc24: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc20) {
            ctx->pc = 0x2FCC30u;
            goto label_2fcc30;
        }
    }
    ctx->pc = 0x2FCC28u;
    // 0x2fcc28: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2FCC28u;
    {
        const bool branch_taken_0x2fcc28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC28u;
        // 0x2fcc2c: 0x904206af  lbu         $v0, 0x6AF($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1711)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc28) {
            ctx->pc = 0x2FCC6Cu;
            goto label_2fcc6c;
        }
    }
    ctx->pc = 0x2FCC30u;
label_2fcc30:
    // 0x2fcc30: 0xc043344  jal         func_10CD10
    ctx->pc = 0x2FCC30u;
    SET_GPR_U32(ctx, 31, 0x2FCC38u);
    ctx->pc = 0x2FCC34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC30u;
    // 0x2fcc34: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CD10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CD10u, 0x2FCC30u, 0x2FCC38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC38u;
label_2fcc38:
    // 0x2fcc38: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fcc38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fcc3c: 0x21342  srl         $v0, $v0, 13
    ctx->pc = 0x2fcc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x2fcc40: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2fcc40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x2fcc44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2FCC44u;
    {
        const bool branch_taken_0x2fcc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC44u;
        // 0x2fcc48: 0x37a40004  ori         $a0, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc44) {
            ctx->pc = 0x2FCC54u;
            goto label_2fcc54;
        }
    }
    ctx->pc = 0x2FCC4Cu;
    // 0x2fcc4c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x2FCC4Cu;
    {
        const bool branch_taken_0x2fcc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FCC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC4Cu;
        // 0x2fcc50: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fcc4c) {
            ctx->pc = 0x2FCC6Cu;
            goto label_2fcc6c;
        }
    }
    ctx->pc = 0x2FCC54u;
label_2fcc54:
    // 0x2fcc54: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fcc54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2fcc58: 0xc0433dc  jal         func_10CF70
    ctx->pc = 0x2FCC58u;
    SET_GPR_U32(ctx, 31, 0x2FCC60u);
    ctx->pc = 0x2FCC5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FCC58u;
    // 0x2fcc5c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CF70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CF70u, 0x2FCC58u, 0x2FCC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FCC60u;
label_2fcc60:
    // 0x2fcc60: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x2fcc60u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2fcc64: 0x31942  srl         $v1, $v1, 5
    ctx->pc = 0x2fcc64u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 5));
    // 0x2fcc68: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2fcc68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2fcc6c:
    // 0x2fcc6c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2fcc6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fcc70: 0x3e00008  jr          $ra
    ctx->pc = 0x2FCC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FCC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FCC70u;
        // 0x2fcc74: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FCC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FCC78u;
}
