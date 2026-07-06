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

// Function: sub_0020ED98
// Address: 0x20ed98 - 0x20f1f8
void sub_0020ED98_0x20ed98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020ED98_0x20ed98");
#endif

    switch (ctx->pc) {
        case 0x20edfcu: goto label_20edfc;
        case 0x20ee04u: goto label_20ee04;
        case 0x20ee0cu: goto label_20ee0c;
        case 0x20ee2cu: goto label_20ee2c;
        case 0x20ee30u: goto label_20ee30;
        case 0x20ee3cu: goto label_20ee3c;
        case 0x20ee58u: goto label_20ee58;
        case 0x20ee5cu: goto label_20ee5c;
        case 0x20eee0u: goto label_20eee0;
        case 0x20eef8u: goto label_20eef8;
        case 0x20ef2cu: goto label_20ef2c;
        case 0x20ef40u: goto label_20ef40;
        case 0x20ef70u: goto label_20ef70;
        case 0x20ef90u: goto label_20ef90;
        case 0x20efb4u: goto label_20efb4;
        case 0x20efd0u: goto label_20efd0;
        case 0x20efd8u: goto label_20efd8;
        case 0x20efecu: goto label_20efec;
        case 0x20eff8u: goto label_20eff8;
        case 0x20f020u: goto label_20f020;
        case 0x20f054u: goto label_20f054;
        case 0x20f064u: goto label_20f064;
        case 0x20f0c4u: goto label_20f0c4;
        case 0x20f10cu: goto label_20f10c;
        case 0x20f114u: goto label_20f114;
        case 0x20f140u: goto label_20f140;
        case 0x20f1c0u: goto label_20f1c0;
        case 0x20f1d8u: goto label_20f1d8;
        case 0x20f1e4u: goto label_20f1e4;
        default: break;
    }

    ctx->pc = 0x20ed98u;

    // 0x20ed98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x20ed98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x20ed9c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x20ed9cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x20eda0: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x20eda0u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x20eda4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x20eda4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x20eda8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x20eda8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x20edac: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x20edacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
    // 0x20edb0: 0x1e0882d  daddu       $s1, $t7, $zero
    ctx->pc = 0x20edb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20edb4: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x20edb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
    // 0x20edb8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20edb8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20edbc: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x20edbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
    // 0x20edc0: 0x24130003  addiu       $s3, $zero, 0x3
    ctx->pc = 0x20edc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x20edc4: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x20edc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
    // 0x20edc8: 0x24140005  addiu       $s4, $zero, 0x5
    ctx->pc = 0x20edc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x20edcc: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x20edccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
    // 0x20edd0: 0x2415ffff  addiu       $s5, $zero, -0x1
    ctx->pc = 0x20edd0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20edd4: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x20edd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
    // 0x20edd8: 0x2416fffe  addiu       $s6, $zero, -0x2
    ctx->pc = 0x20edd8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x20eddc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x20eddcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x20ede0: 0x24170004  addiu       $s7, $zero, 0x4
    ctx->pc = 0x20ede0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ede4: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x20ede4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
    // 0x20ede8: 0x3c1e003a  lui         $fp, 0x3A
    ctx->pc = 0x20ede8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
    // 0x20edec: 0xade0a93c  sw          $zero, -0x56C4($t7)
    ctx->pc = 0x20edecu;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945084), GPR_U32(ctx, 0));
    // 0x20edf0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x20edf0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x20edf4: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x20edf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x20edf8: 0x8e25a93c  lw          $a1, -0x56C4($s1)
    ctx->pc = 0x20edf8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945084)));
label_20edfc:
    // 0x20edfc: 0xc08982a  jal         func_2260A8
    ctx->pc = 0x20EDFCu;
    SET_GPR_U32(ctx, 31, 0x20EE04u);
    ctx->pc = 0x20EE00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EDFCu;
    // 0x20ee00: 0x27c4ab48  addiu       $a0, $fp, -0x54B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 4294945608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2260A8u, 0x20EDFCu, 0x20EE04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE04u;
label_20ee04:
    // 0x20ee04: 0x14400095  bnez        $v0, . + 4 + (0x95 << 2)
    ctx->pc = 0x20EE04u;
    {
        const bool branch_taken_0x20ee04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE04u;
        // 0x20ee08: 0xae22a93c  sw          $v0, -0x56C4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4294945084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee04) {
            ctx->pc = 0x20F05Cu;
            goto label_20f05c;
        }
    }
    ctx->pc = 0x20EE0Cu;
label_20ee0c:
    // 0x20ee0c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x20ee0cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x20ee10: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x20ee10u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
    // 0x20ee14: 0xade0a93c  sw          $zero, -0x56C4($t7)
    ctx->pc = 0x20ee14u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 4294945084), GPR_U32(ctx, 0));
    // 0x20ee18: 0x1e0982d  daddu       $s3, $t7, $zero
    ctx->pc = 0x20ee18u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee1c: 0x1e0b02d  daddu       $s6, $t7, $zero
    ctx->pc = 0x20ee1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee20: 0x3c14003f  lui         $s4, 0x3F
    ctx->pc = 0x20ee20u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)63 << 16));
    // 0x20ee24: 0x2a0b82d  daddu       $s7, $s5, $zero
    ctx->pc = 0x20ee24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20ee28: 0x3c1e003f  lui         $fp, 0x3F
    ctx->pc = 0x20ee28u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)63 << 16));
label_20ee2c:
    // 0x20ee2c: 0x8e65a93c  lw          $a1, -0x56C4($s3)
    ctx->pc = 0x20ee2cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945084)));
label_20ee30:
    // 0x20ee30: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x20ee30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x20ee34: 0xc08982a  jal         func_2260A8
    ctx->pc = 0x20EE34u;
    SET_GPR_U32(ctx, 31, 0x20EE3Cu);
    ctx->pc = 0x20EE38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EE34u;
    // 0x20ee38: 0x2484ab48  addiu       $a0, $a0, -0x54B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2260A8u, 0x20EE34u, 0x20EE3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EE3Cu;
label_20ee3c:
    // 0x20ee3c: 0x14400013  bnez        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x20EE3Cu;
    {
        const bool branch_taken_0x20ee3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20EE40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE3Cu;
        // 0x20ee40: 0xae62a93c  sw          $v0, -0x56C4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4294945084), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee3c) {
            ctx->pc = 0x20EE8Cu;
            goto label_20ee8c;
        }
    }
    ctx->pc = 0x20EE44u;
    // 0x20ee44: 0x8fae0000  lw          $t6, 0x0($sp)
    ctx->pc = 0x20ee44u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ee48: 0x11c00002  beqz        $t6, . + 4 + (0x2 << 2)
    ctx->pc = 0x20EE48u;
    {
        const bool branch_taken_0x20ee48 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EE4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE48u;
        // 0x20ee4c: 0x8faf0004  lw          $t7, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee48) {
            ctx->pc = 0x20EE54u;
            goto label_20ee54;
        }
    }
    ctx->pc = 0x20EE50u;
    // 0x20ee50: 0xae4f0000  sw          $t7, 0x0($s2)
    ctx->pc = 0x20ee50u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 15));
label_20ee54:
    // 0x20ee54: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x20ee54u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_20ee58:
    // 0x20ee58: 0x8de2a928  lw          $v0, -0x56D8($t7)
    ctx->pc = 0x20ee58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294945064)));
label_20ee5c:
    // 0x20ee5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x20ee5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20ee60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x20ee60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x20ee64: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x20ee64u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20ee68: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x20ee68u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x20ee6c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x20ee6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20ee70: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x20ee70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x20ee74: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x20ee74u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20ee78: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x20ee78u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20ee7c: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x20ee7cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20ee80: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x20ee80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x20ee84: 0x3e00008  jr          $ra
    ctx->pc = 0x20EE84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20EE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE84u;
        // 0x20ee88: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20EE84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20EE8Cu;
label_20ee8c:
    // 0x20ee8c: 0x8c4f0000  lw          $t7, 0x0($v0)
    ctx->pc = 0x20ee8cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20ee90: 0xae4f0000  sw          $t7, 0x0($s2)
    ctx->pc = 0x20ee90u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 15));
    // 0x20ee94: 0xade00034  sw          $zero, 0x34($t7)
    ctx->pc = 0x20ee94u;
    WRITE32(ADD32(GPR_U32(ctx, 15), 52), GPR_U32(ctx, 0));
    // 0x20ee98: 0x8faf0000  lw          $t7, 0x0($sp)
    ctx->pc = 0x20ee98u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20ee9c: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x20EE9Cu;
    {
        const bool branch_taken_0x20ee9c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EE9Cu;
        // 0x20eea0: 0x8fae0004  lw          $t6, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ee9c) {
            ctx->pc = 0x20EEE8u;
            goto label_20eee8;
        }
    }
    ctx->pc = 0x20EEA4u;
    // 0x20eea4: 0x8c480000  lw          $t0, 0x0($v0)
    ctx->pc = 0x20eea4u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x20eea8: 0x110e000f  beq         $t0, $t6, . + 4 + (0xF << 2)
    ctx->pc = 0x20EEA8u;
    {
        const bool branch_taken_0x20eea8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 14));
        ctx->pc = 0x20EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEA8u;
        // 0x20eeac: 0x240f0003  addiu       $t7, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eea8) {
            ctx->pc = 0x20EEE8u;
            goto label_20eee8;
        }
    }
    ctx->pc = 0x20EEB0u;
    // 0x20eeb0: 0x810e002b  lb          $t6, 0x2B($t0)
    ctx->pc = 0x20eeb0u;
    SET_GPR_S32(ctx, 14, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 43)));
    // 0x20eeb4: 0x15cf000d  bne         $t6, $t7, . + 4 + (0xD << 2)
    ctx->pc = 0x20EEB4u;
    {
        const bool branch_taken_0x20eeb4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x20EEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEB4u;
        // 0x20eeb8: 0x3c11003a  lui         $s1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eeb4) {
            ctx->pc = 0x20EEECu;
            goto label_20eeec;
        }
    }
    ctx->pc = 0x20EEBCu;
    // 0x20eebc: 0x8d0e0038  lw          $t6, 0x38($t0)
    ctx->pc = 0x20eebcu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 56)));
    // 0x20eec0: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20eec0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20eec4: 0x11cf0009  beq         $t6, $t7, . + 4 + (0x9 << 2)
    ctx->pc = 0x20EEC4u;
    {
        const bool branch_taken_0x20eec4 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 15));
        ctx->pc = 0x20EEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEC4u;
        // 0x20eec8: 0x3c0f003f  lui         $t7, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eec4) {
            ctx->pc = 0x20EEECu;
            goto label_20eeec;
        }
    }
    ctx->pc = 0x20EECCu;
    // 0x20eecc: 0x26a4f9c8  addiu       $a0, $s5, -0x638
    ctx->pc = 0x20eeccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294965704));
    // 0x20eed0: 0x24050089  addiu       $a1, $zero, 0x89
    ctx->pc = 0x20eed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 137));
    // 0x20eed4: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x20eed4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20eed8: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20EED8u;
    SET_GPR_U32(ctx, 31, 0x20EEE0u);
    ctx->pc = 0x20EEDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EED8u;
    // 0x20eedc: 0x25e7fa38  addiu       $a3, $t7, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 15), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20EED8u, 0x20EEE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EEE0u;
label_20eee0:
    // 0x20eee0: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
    ctx->pc = 0x20EEE0u;
    {
        const bool branch_taken_0x20eee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EEE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EEE0u;
        // 0x20eee4: 0x8e65a93c  lw          $a1, -0x56C4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20eee0) {
            ctx->pc = 0x20EE30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ee30;
        }
    }
    ctx->pc = 0x20EEE8u;
label_20eee8:
    // 0x20eee8: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x20eee8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
label_20eeec:
    // 0x20eeec: 0x8e2fa93c  lw          $t7, -0x56C4($s1)
    ctx->pc = 0x20eeecu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945084)));
    // 0x20eef0: 0xc084246  jal         func_210918
    ctx->pc = 0x20EEF0u;
    SET_GPR_U32(ctx, 31, 0x20EEF8u);
    ctx->pc = 0x20EEF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EEF0u;
    // 0x20eef4: 0x8de40000  lw          $a0, 0x0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x210918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x210918u, 0x20EEF0u, 0x20EEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EEF8u;
label_20eef8:
    // 0x20eef8: 0x8e2fa93c  lw          $t7, -0x56C4($s1)
    ctx->pc = 0x20eef8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945084)));
    // 0x20eefc: 0x8de80000  lw          $t0, 0x0($t7)
    ctx->pc = 0x20eefcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x20ef00: 0x8d0e0024  lw          $t6, 0x24($t0)
    ctx->pc = 0x20ef00u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 36)));
    // 0x20ef04: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x20ef04u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x20ef08: 0x15cf000f  bne         $t6, $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x20EF08u;
    {
        const bool branch_taken_0x20ef08 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        ctx->pc = 0x20EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF08u;
        // 0x20ef0c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef08) {
            ctx->pc = 0x20EF48u;
            goto label_20ef48;
        }
    }
    ctx->pc = 0x20EF10u;
    // 0x20ef10: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20ef10u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20ef14: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20ef14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20ef18: 0x24e7fa50  addiu       $a3, $a3, -0x5B0
    ctx->pc = 0x20ef18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965840));
    // 0x20ef1c: 0x2484f9c8  addiu       $a0, $a0, -0x638
    ctx->pc = 0x20ef1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965704));
    // 0x20ef20: 0x24050093  addiu       $a1, $zero, 0x93
    ctx->pc = 0x20ef20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 147));
    // 0x20ef24: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20EF24u;
    SET_GPR_U32(ctx, 31, 0x20EF2Cu);
    ctx->pc = 0x20EF28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF24u;
    // 0x20ef28: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20EF24u, 0x20EF2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF2Cu;
label_20ef2c:
    // 0x20ef2c: 0x8e2fa93c  lw          $t7, -0x56C4($s1)
    ctx->pc = 0x20ef2cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945084)));
    // 0x20ef30: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x20ef30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x20ef34: 0x2484ab48  addiu       $a0, $a0, -0x54B8
    ctx->pc = 0x20ef34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945608));
    // 0x20ef38: 0xc089870  jal         func_2261C0
    ctx->pc = 0x20EF38u;
    SET_GPR_U32(ctx, 31, 0x20EF40u);
    ctx->pc = 0x20EF3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF38u;
    // 0x20ef3c: 0x8de50000  lw          $a1, 0x0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2261C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2261C0u, 0x20EF38u, 0x20EF40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF40u;
label_20ef40:
    // 0x20ef40: 0x1000ffc5  b           . + 4 + (-0x3B << 2)
    ctx->pc = 0x20EF40u;
    {
        const bool branch_taken_0x20ef40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF40u;
        // 0x20ef44: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef40) {
            ctx->pc = 0x20EE58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ee58;
        }
    }
    ctx->pc = 0x20EF48u;
label_20ef48:
    // 0x20ef48: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x20ef48u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ef4c: 0x544f000c  bnel        $v0, $t7, . + 4 + (0xC << 2)
    ctx->pc = 0x20EF4Cu;
    {
        const bool branch_taken_0x20ef4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x20ef4c) {
            ctx->pc = 0x20EF50u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20EF4Cu;
            // 0x20ef50: 0x8d0f0034  lw          $t7, 0x34($t0) (Delay Slot)
            SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EF80u;
            goto label_20ef80;
        }
    }
    ctx->pc = 0x20EF54u;
    // 0x20ef54: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20ef54u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20ef58: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20ef58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20ef5c: 0x24e7fa68  addiu       $a3, $a3, -0x598
    ctx->pc = 0x20ef5cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965864));
    // 0x20ef60: 0x2484f9c8  addiu       $a0, $a0, -0x638
    ctx->pc = 0x20ef60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965704));
    // 0x20ef64: 0x2405009a  addiu       $a1, $zero, 0x9A
    ctx->pc = 0x20ef64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 154));
    // 0x20ef68: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20EF68u;
    SET_GPR_U32(ctx, 31, 0x20EF70u);
    ctx->pc = 0x20EF6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF68u;
    // 0x20ef6c: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20EF68u, 0x20EF70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF70u;
label_20ef70:
    // 0x20ef70: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x20ef70u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x20ef74: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x20ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20ef78: 0x1000ffb8  b           . + 4 + (-0x48 << 2)
    ctx->pc = 0x20EF78u;
    {
        const bool branch_taken_0x20ef78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EF7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EF78u;
        // 0x20ef7c: 0xadf0a928  sw          $s0, -0x56D8($t7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 15), 4294945064), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20ef78) {
            ctx->pc = 0x20EE5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ee5c;
        }
    }
    ctx->pc = 0x20EF80u;
label_20ef80:
    // 0x20ef80: 0x11e0000f  beqz        $t7, . + 4 + (0xF << 2)
    ctx->pc = 0x20EF80u;
    {
        const bool branch_taken_0x20ef80 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x20ef80) {
            ctx->pc = 0x20EFC0u;
            goto label_20efc0;
        }
    }
    ctx->pc = 0x20EF88u;
    // 0x20ef88: 0xc083caa  jal         func_20F2A8
    ctx->pc = 0x20EF88u;
    SET_GPR_U32(ctx, 31, 0x20EF90u);
    ctx->pc = 0x20EF8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EF88u;
    // 0x20ef8c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F2A8u, 0x20EF88u, 0x20EF90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EF90u;
label_20ef90:
    // 0x20ef90: 0x8e480000  lw          $t0, 0x0($s2)
    ctx->pc = 0x20ef90u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20ef94: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20ef94u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20ef98: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20ef98u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20ef9c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x20ef9cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20efa0: 0x2484f9c8  addiu       $a0, $a0, -0x638
    ctx->pc = 0x20efa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965704));
    // 0x20efa4: 0x24e7fa88  addiu       $a3, $a3, -0x578
    ctx->pc = 0x20efa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965896));
    // 0x20efa8: 0x240500a2  addiu       $a1, $zero, 0xA2
    ctx->pc = 0x20efa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 162));
    // 0x20efac: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20EFACu;
    SET_GPR_U32(ctx, 31, 0x20EFB4u);
    ctx->pc = 0x20EFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EFACu;
    // 0x20efb0: 0x24060009  addiu       $a2, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20EFACu, 0x20EFB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFB4u;
label_20efb4:
    // 0x20efb4: 0x1000ffa8  b           . + 4 + (-0x58 << 2)
    ctx->pc = 0x20EFB4u;
    {
        const bool branch_taken_0x20efb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFB4u;
        // 0x20efb8: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efb4) {
            ctx->pc = 0x20EE58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ee58;
        }
    }
    ctx->pc = 0x20EFBCu;
    // 0x20efbc: 0x0  nop
    ctx->pc = 0x20efbcu;
    // NOP
label_20efc0:
    // 0x20efc0: 0x1100001e  beqz        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x20EFC0u;
    {
        const bool branch_taken_0x20efc0 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFC0u;
        // 0x20efc4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efc0) {
            ctx->pc = 0x20F03Cu;
            goto label_20f03c;
        }
    }
    ctx->pc = 0x20EFC8u;
    // 0x20efc8: 0xc083caa  jal         func_20F2A8
    ctx->pc = 0x20EFC8u;
    SET_GPR_U32(ctx, 31, 0x20EFD0u);
    ctx->pc = 0x20EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EFC8u;
    // 0x20efcc: 0x100202d  daddu       $a0, $t0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F2A8u, 0x20EFC8u, 0x20EFD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFD0u;
label_20efd0:
    // 0x20efd0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20efd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20efd4: 0x260ffffd  addiu       $t7, $s0, -0x3
    ctx->pc = 0x20efd4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
label_20efd8:
    // 0x20efd8: 0x2def0002  sltiu       $t7, $t7, 0x2
    ctx->pc = 0x20efd8u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 15) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x20efdc: 0x11e00012  beqz        $t7, . + 4 + (0x12 << 2)
    ctx->pc = 0x20EFDCu;
    {
        const bool branch_taken_0x20efdc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x20EFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20EFDCu;
        // 0x20efe0: 0x8ecfa93c  lw          $t7, -0x56C4($s6) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20efdc) {
            ctx->pc = 0x20F028u;
            goto label_20f028;
        }
    }
    ctx->pc = 0x20EFE4u;
    // 0x20efe4: 0xc083caa  jal         func_20F2A8
    ctx->pc = 0x20EFE4u;
    SET_GPR_U32(ctx, 31, 0x20EFECu);
    ctx->pc = 0x20EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EFE4u;
    // 0x20efe8: 0x8de40000  lw          $a0, 0x0($t7) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F2A8u, 0x20EFE4u, 0x20EFECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFECu;
label_20efec:
    // 0x20efec: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x20efecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x20eff0: 0xc083caa  jal         func_20F2A8
    ctx->pc = 0x20EFF0u;
    SET_GPR_U32(ctx, 31, 0x20EFF8u);
    ctx->pc = 0x20EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20EFF0u;
    // 0x20eff4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F2A8u, 0x20EFF0u, 0x20EFF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20EFF8u;
label_20eff8:
    // 0x20eff8: 0x8ecfa93c  lw          $t7, -0x56C4($s6)
    ctx->pc = 0x20eff8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294945084)));
    // 0x20effc: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x20effcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f000: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x20f000u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f004: 0x26e4f9c8  addiu       $a0, $s7, -0x638
    ctx->pc = 0x20f004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 23), 4294965704));
    // 0x20f008: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x20f008u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x20f00c: 0x240500b7  addiu       $a1, $zero, 0xB7
    ctx->pc = 0x20f00cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 183));
    // 0x20f010: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x20f010u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20f014: 0x27c7fa08  addiu       $a3, $fp, -0x5F8
    ctx->pc = 0x20f014u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294965768));
    // 0x20f018: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F018u;
    SET_GPR_U32(ctx, 31, 0x20F020u);
    ctx->pc = 0x20F01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F018u;
    // 0x20f01c: 0x8dc80034  lw          $t0, 0x34($t6) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F018u, 0x20F020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F020u;
label_20f020:
    // 0x20f020: 0x1000ff83  b           . + 4 + (-0x7D << 2)
    ctx->pc = 0x20F020u;
    {
        const bool branch_taken_0x20f020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F020u;
        // 0x20f024: 0x8e65a93c  lw          $a1, -0x56C4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f020) {
            ctx->pc = 0x20EE30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ee30;
        }
    }
    ctx->pc = 0x20F028u;
label_20f028:
    // 0x20f028: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x20f028u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f02c: 0x520fff7f  beql        $s0, $t7, . + 4 + (-0x81 << 2)
    ctx->pc = 0x20F02Cu;
    {
        const bool branch_taken_0x20f02c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 15));
        if (branch_taken_0x20f02c) {
            ctx->pc = 0x20F030u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x20F02Cu;
            // 0x20f030: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x20EE2Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ee2c;
        }
    }
    ctx->pc = 0x20F034u;
    // 0x20f034: 0x1000ff7e  b           . + 4 + (-0x82 << 2)
    ctx->pc = 0x20F034u;
    {
        const bool branch_taken_0x20f034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F034u;
        // 0x20f038: 0x8e65a93c  lw          $a1, -0x56C4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294945084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f034) {
            ctx->pc = 0x20EE30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ee30;
        }
    }
    ctx->pc = 0x20F03Cu;
label_20f03c:
    // 0x20f03c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20f03cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f040: 0x2484f9c8  addiu       $a0, $a0, -0x638
    ctx->pc = 0x20f040u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965704));
    // 0x20f044: 0x240500ad  addiu       $a1, $zero, 0xAD
    ctx->pc = 0x20f044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 173));
    // 0x20f048: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x20f048u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20f04c: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F04Cu;
    SET_GPR_U32(ctx, 31, 0x20F054u);
    ctx->pc = 0x20F050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F04Cu;
    // 0x20f050: 0x2687f9d8  addiu       $a3, $s4, -0x628 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 20), 4294965720));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F04Cu, 0x20F054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F054u;
label_20f054:
    // 0x20f054: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x20F054u;
    {
        const bool branch_taken_0x20f054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F054u;
        // 0x20f058: 0x260ffffd  addiu       $t7, $s0, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f054) {
            ctx->pc = 0x20EFD8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20efd8;
        }
    }
    ctx->pc = 0x20F05Cu;
label_20f05c:
    // 0x20f05c: 0xc083caa  jal         func_20F2A8
    ctx->pc = 0x20F05Cu;
    SET_GPR_U32(ctx, 31, 0x20F064u);
    ctx->pc = 0x20F060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F05Cu;
    // 0x20f060: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20F2A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F2A8u, 0x20F05Cu, 0x20F064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F064u;
label_20f064:
    // 0x20f064: 0x10570007  beq         $v0, $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F064u;
    {
        const bool branch_taken_0x20f064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        ctx->pc = 0x20F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F064u;
        // 0x20f068: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f064) {
            ctx->pc = 0x20F084u;
            goto label_20f084;
        }
    }
    ctx->pc = 0x20F06Cu;
    // 0x20f06c: 0x10560006  beq         $v0, $s6, . + 4 + (0x6 << 2)
    ctx->pc = 0x20F06Cu;
    {
        const bool branch_taken_0x20f06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x20F070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F06Cu;
        // 0x20f070: 0x3c0e003a  lui         $t6, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f06c) {
            ctx->pc = 0x20F088u;
            goto label_20f088;
        }
    }
    ctx->pc = 0x20F074u;
    // 0x20f074: 0x10550005  beq         $v0, $s5, . + 4 + (0x5 << 2)
    ctx->pc = 0x20F074u;
    {
        const bool branch_taken_0x20f074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        ctx->pc = 0x20F078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F074u;
        // 0x20f078: 0x3c0f003a  lui         $t7, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f074) {
            ctx->pc = 0x20F08Cu;
            goto label_20f08c;
        }
    }
    ctx->pc = 0x20F07Cu;
    // 0x20f07c: 0x14540014  bne         $v0, $s4, . + 4 + (0x14 << 2)
    ctx->pc = 0x20F07Cu;
    {
        const bool branch_taken_0x20f07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x20f07c) {
            ctx->pc = 0x20F0D0u;
            goto label_20f0d0;
        }
    }
    ctx->pc = 0x20F084u;
label_20f084:
    // 0x20f084: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x20f084u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
label_20f088:
    // 0x20f088: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x20f088u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
label_20f08c:
    // 0x20f08c: 0x8dcda93c  lw          $t5, -0x56C4($t6)
    ctx->pc = 0x20f08cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294945084)));
    // 0x20f090: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f094: 0x8de9a928  lw          $t1, -0x56D8($t7)
    ctx->pc = 0x20f094u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294945064)));
    // 0x20f098: 0x3c07003f  lui         $a3, 0x3F
    ctx->pc = 0x20f098u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)63 << 16));
    // 0x20f09c: 0x8dae0000  lw          $t6, 0x0($t5)
    ctx->pc = 0x20f09cu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x20f0a0: 0x2484f9c8  addiu       $a0, $a0, -0x638
    ctx->pc = 0x20f0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965704));
    // 0x20f0a4: 0x24e7fac0  addiu       $a3, $a3, -0x540
    ctx->pc = 0x20f0a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294965952));
    // 0x20f0a8: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20f0a8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f0ac: 0xae4e0000  sw          $t6, 0x0($s2)
    ctx->pc = 0x20f0acu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 14));
    // 0x20f0b0: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x20f0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
    // 0x20f0b4: 0x24060009  addiu       $a2, $zero, 0x9
    ctx->pc = 0x20f0b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x20f0b8: 0x8daf0000  lw          $t7, 0x0($t5)
    ctx->pc = 0x20f0b8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 0)));
    // 0x20f0bc: 0xc0897d6  jal         func_225F58
    ctx->pc = 0x20F0BCu;
    SET_GPR_U32(ctx, 31, 0x20F0C4u);
    ctx->pc = 0x20F0C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F0BCu;
    // 0x20f0c0: 0xade00034  sw          $zero, 0x34($t7) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 15), 52), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225F58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x225F58u, 0x20F0BCu, 0x20F0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F0C4u;
label_20f0c4:
    // 0x20f0c4: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x20f0c4u;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x20f0c8: 0x1000ff64  b           . + 4 + (-0x9C << 2)
    ctx->pc = 0x20F0C8u;
    {
        const bool branch_taken_0x20f0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0C8u;
        // 0x20f0cc: 0x8dc2a928  lw          $v0, -0x56D8($t6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 4294945064)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0c8) {
            ctx->pc = 0x20EE5Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ee5c;
        }
    }
    ctx->pc = 0x20F0D0u;
label_20f0d0:
    // 0x20f0d0: 0x1453ff4a  bne         $v0, $s3, . + 4 + (-0xB6 << 2)
    ctx->pc = 0x20F0D0u;
    {
        const bool branch_taken_0x20f0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x20F0D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0D0u;
        // 0x20f0d4: 0x8e25a93c  lw          $a1, -0x56C4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945084)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0d0) {
            ctx->pc = 0x20EDFCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20edfc;
        }
    }
    ctx->pc = 0x20F0D8u;
    // 0x20f0d8: 0x8e2fa93c  lw          $t7, -0x56C4($s1)
    ctx->pc = 0x20f0d8u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4294945084)));
    // 0x20f0dc: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x20f0dcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20f0e0: 0xafae0000  sw          $t6, 0x0($sp)
    ctx->pc = 0x20f0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 14));
    // 0x20f0e4: 0x8def0000  lw          $t7, 0x0($t7)
    ctx->pc = 0x20f0e4u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
    // 0x20f0e8: 0x1000ff48  b           . + 4 + (-0xB8 << 2)
    ctx->pc = 0x20F0E8u;
    {
        const bool branch_taken_0x20f0e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F0E8u;
        // 0x20f0ec: 0xafaf0004  sw          $t7, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f0e8) {
            ctx->pc = 0x20EE0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20ee0c;
        }
    }
    ctx->pc = 0x20F0F0u;
    // 0x20f0f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20f0f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20f0f4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f0f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20f0f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20f0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x20f0fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x20f0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x20f100: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x20f100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f104: 0x3c11003a  lui         $s1, 0x3A
    ctx->pc = 0x20f104u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)58 << 16));
    // 0x20f108: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x20f108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20f10c:
    // 0x20f10c: 0xc08982a  jal         func_2260A8
    ctx->pc = 0x20F10Cu;
    SET_GPR_U32(ctx, 31, 0x20F114u);
    ctx->pc = 0x20F110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F10Cu;
    // 0x20f110: 0x2624ab48  addiu       $a0, $s1, -0x54B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4294945608));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2260A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2260A8u, 0x20F10Cu, 0x20F114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F114u;
label_20f114:
    // 0x20f114: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x20f114u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f118: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x20F118u;
    {
        const bool branch_taken_0x20f118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F118u;
        // 0x20f11c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f118) {
            ctx->pc = 0x20F138u;
            goto label_20f138;
        }
    }
    ctx->pc = 0x20F120u;
    // 0x20f120: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f120u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f124: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20f124u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20f128: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20f128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f12c: 0x3e00008  jr          $ra
    ctx->pc = 0x20F12Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F12Cu;
        // 0x20f130: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F12Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F134u;
    // 0x20f134: 0x0  nop
    ctx->pc = 0x20f134u;
    // NOP
label_20f138:
    // 0x20f138: 0xc083d6c  jal         func_20F5B0
    ctx->pc = 0x20F138u;
    SET_GPR_U32(ctx, 31, 0x20F140u);
    ctx->pc = 0x20F5B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20F5B0u, 0x20F138u, 0x20F140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F140u;
label_20f140:
    // 0x20f140: 0x1000fff2  b           . + 4 + (-0xE << 2)
    ctx->pc = 0x20F140u;
    {
        const bool branch_taken_0x20f140 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F140u;
        // 0x20f144: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f140) {
            ctx->pc = 0x20F10Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20f10c;
        }
    }
    ctx->pc = 0x20F148u;
    // 0x20f148: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x20f148u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x20f14c: 0x8defa93c  lw          $t7, -0x56C4($t7)
    ctx->pc = 0x20f14cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294945084)));
    // 0x20f150: 0x11e00002  beqz        $t7, . + 4 + (0x2 << 2)
    ctx->pc = 0x20F150u;
    {
        const bool branch_taken_0x20f150 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F150u;
        // 0x20f154: 0x702d  daddu       $t6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f150) {
            ctx->pc = 0x20F15Cu;
            goto label_20f15c;
        }
    }
    ctx->pc = 0x20F158u;
    // 0x20f158: 0x8dee0000  lw          $t6, 0x0($t7)
    ctx->pc = 0x20f158u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 0)));
label_20f15c:
    // 0x20f15c: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x20f15cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x20f160: 0xac8e0000  sw          $t6, 0x0($a0)
    ctx->pc = 0x20f160u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 14));
    // 0x20f164: 0x3e00008  jr          $ra
    ctx->pc = 0x20F164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F164u;
        // 0x20f168: 0x8de2a928  lw          $v0, -0x56D8($t7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294945064)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F164u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F16Cu;
    // 0x20f16c: 0x0  nop
    ctx->pc = 0x20f16cu;
    // NOP
    // 0x20f170: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x20f170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x20f174: 0x3c0f003a  lui         $t7, 0x3A
    ctx->pc = 0x20f174u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)58 << 16));
    // 0x20f178: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x20f178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x20f17c: 0x3c0e003a  lui         $t6, 0x3A
    ctx->pc = 0x20f17cu;
    SET_GPR_S32(ctx, 14, (int32_t)((uint32_t)58 << 16));
    // 0x20f180: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x20f180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x20f184: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20f184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f188: 0xadc7f1c0  sw          $a3, -0xE40($t6)
    ctx->pc = 0x20f188u;
    WRITE32(ADD32(GPR_U32(ctx, 14), 4294963648), GPR_U32(ctx, 7));
    // 0x20f18c: 0x8dedf1c4  lw          $t5, -0xE3C($t7)
    ctx->pc = 0x20f18cu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294963652)));
    // 0x20f190: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x20f190u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f194: 0xffa80010  sd          $t0, 0x10($sp)
    ctx->pc = 0x20f194u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 8));
    // 0x20f198: 0xffa90018  sd          $t1, 0x18($sp)
    ctx->pc = 0x20f198u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 9));
    // 0x20f19c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x20f19cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1a0: 0xffaa0020  sd          $t2, 0x20($sp)
    ctx->pc = 0x20f1a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 10));
    // 0x20f1a4: 0x1e0302d  daddu       $a2, $t7, $zero
    ctx->pc = 0x20f1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1a8: 0x29ad0003  slti        $t5, $t5, 0x3
    ctx->pc = 0x20f1a8u;
    SET_GPR_U64(ctx, 13, ((int64_t)GPR_S64(ctx, 13) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x20f1ac: 0x15a0000d  bnez        $t5, . + 4 + (0xD << 2)
    ctx->pc = 0x20F1ACu;
    {
        const bool branch_taken_0x20f1ac = (GPR_U64(ctx, 13) != GPR_U64(ctx, 0));
        ctx->pc = 0x20F1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1ACu;
        // 0x20f1b0: 0xffab0028  sd          $t3, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1ac) {
            ctx->pc = 0x20F1E4u;
            goto label_20f1e4;
        }
    }
    ctx->pc = 0x20F1B4u;
    // 0x20f1b4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f1b8: 0xc043e52  jal         func_10F948
    ctx->pc = 0x20F1B8u;
    SET_GPR_U32(ctx, 31, 0x20F1C0u);
    ctx->pc = 0x20F1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1B8u;
    // 0x20f1bc: 0x2484faf8  addiu       $a0, $a0, -0x508 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966008));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x20F1B8u, 0x20F1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1C0u;
label_20f1c0:
    // 0x20f1c0: 0x8faf0010  lw          $t7, 0x10($sp)
    ctx->pc = 0x20f1c0u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20f1c4: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x20f1c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x20f1c8: 0x11e00003  beqz        $t7, . + 4 + (0x3 << 2)
    ctx->pc = 0x20F1C8u;
    {
        const bool branch_taken_0x20f1c8 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x20F1CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1C8u;
        // 0x20f1cc: 0x1e0202d  daddu       $a0, $t7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20f1c8) {
            ctx->pc = 0x20F1D8u;
            goto label_20f1d8;
        }
    }
    ctx->pc = 0x20F1D0u;
    // 0x20f1d0: 0xc043e36  jal         func_10F8D8
    ctx->pc = 0x20F1D0u;
    SET_GPR_U32(ctx, 31, 0x20F1D8u);
    ctx->pc = 0x10F8D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F8D8u, 0x20F1D0u, 0x20F1D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1D8u;
label_20f1d8:
    // 0x20f1d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x20f1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x20f1dc: 0xc043e52  jal         func_10F948
    ctx->pc = 0x20F1DCu;
    SET_GPR_U32(ctx, 31, 0x20F1E4u);
    ctx->pc = 0x20F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20F1DCu;
    // 0x20f1e0: 0x2484fb08  addiu       $a0, $a0, -0x4F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x20F1DCu, 0x20F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20F1E4u;
label_20f1e4:
    // 0x20f1e4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x20f1e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20f1e8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x20f1e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x20f1ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x20f1ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20f1f0: 0x3e00008  jr          $ra
    ctx->pc = 0x20F1F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20F1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20F1F0u;
        // 0x20f1f4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20F1F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20F1F8u;
}
