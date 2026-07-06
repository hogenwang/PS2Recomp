#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002ACBF8
// Address: 0x2acbf8 - 0x2accc8
void sub_002ACBF8_0x2acbf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002ACBF8_0x2acbf8");
#endif

    switch (ctx->pc) {
        case 0x2acbf8u: goto label_2acbf8;
        case 0x2acbfcu: goto label_2acbfc;
        case 0x2acc00u: goto label_2acc00;
        case 0x2acc04u: goto label_2acc04;
        case 0x2acc08u: goto label_2acc08;
        case 0x2acc0cu: goto label_2acc0c;
        case 0x2acc10u: goto label_2acc10;
        case 0x2acc14u: goto label_2acc14;
        case 0x2acc18u: goto label_2acc18;
        case 0x2acc1cu: goto label_2acc1c;
        case 0x2acc20u: goto label_2acc20;
        case 0x2acc24u: goto label_2acc24;
        case 0x2acc28u: goto label_2acc28;
        case 0x2acc2cu: goto label_2acc2c;
        case 0x2acc30u: goto label_2acc30;
        case 0x2acc34u: goto label_2acc34;
        case 0x2acc38u: goto label_2acc38;
        case 0x2acc3cu: goto label_2acc3c;
        case 0x2acc40u: goto label_2acc40;
        case 0x2acc44u: goto label_2acc44;
        case 0x2acc48u: goto label_2acc48;
        case 0x2acc4cu: goto label_2acc4c;
        case 0x2acc50u: goto label_2acc50;
        case 0x2acc54u: goto label_2acc54;
        case 0x2acc58u: goto label_2acc58;
        case 0x2acc5cu: goto label_2acc5c;
        case 0x2acc60u: goto label_2acc60;
        case 0x2acc64u: goto label_2acc64;
        case 0x2acc68u: goto label_2acc68;
        case 0x2acc6cu: goto label_2acc6c;
        case 0x2acc70u: goto label_2acc70;
        case 0x2acc74u: goto label_2acc74;
        case 0x2acc78u: goto label_2acc78;
        case 0x2acc7cu: goto label_2acc7c;
        case 0x2acc80u: goto label_2acc80;
        case 0x2acc84u: goto label_2acc84;
        case 0x2acc88u: goto label_2acc88;
        case 0x2acc8cu: goto label_2acc8c;
        case 0x2acc90u: goto label_2acc90;
        case 0x2acc94u: goto label_2acc94;
        case 0x2acc98u: goto label_2acc98;
        case 0x2acc9cu: goto label_2acc9c;
        case 0x2acca0u: goto label_2acca0;
        case 0x2acca4u: goto label_2acca4;
        case 0x2acca8u: goto label_2acca8;
        case 0x2accacu: goto label_2accac;
        case 0x2accb0u: goto label_2accb0;
        case 0x2accb4u: goto label_2accb4;
        case 0x2accb8u: goto label_2accb8;
        case 0x2accbcu: goto label_2accbc;
        case 0x2accc0u: goto label_2accc0;
        case 0x2accc4u: goto label_2accc4;
        default: break;
    }

    ctx->pc = 0x2acbf8u;

label_2acbf8:
    // 0x2acbf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2acbf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2acbfc:
    // 0x2acbfc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2acbfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2acc00:
    // 0x2acc00: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2acc00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2acc04:
    // 0x2acc04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2acc04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2acc08:
    // 0x2acc08: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2acc08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2acc0c:
    // 0x2acc0c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2acc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2acc10:
    // 0x2acc10: 0x8e220030  lw          $v0, 0x30($s1)
    ctx->pc = 0x2acc10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2acc14:
    // 0x2acc14: 0x14450023  bne         $v0, $a1, . + 4 + (0x23 << 2)
label_2acc18:
    if (ctx->pc == 0x2ACC18u) {
        ctx->pc = 0x2ACC18u;
            // 0x2acc18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC1Cu;
        goto label_2acc1c;
    }
    ctx->pc = 0x2ACC14u;
    {
        const bool branch_taken_0x2acc14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x2ACC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC14u;
            // 0x2acc18: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc14) {
            ctx->pc = 0x2ACCA4u;
            goto label_2acca4;
        }
    }
    ctx->pc = 0x2ACC1Cu;
label_2acc1c:
    // 0x2acc1c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x2acc1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2acc20:
    // 0x2acc20: 0x8e26003c  lw          $a2, 0x3C($s1)
    ctx->pc = 0x2acc20u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2acc24:
    // 0x2acc24: 0x8c450054  lw          $a1, 0x54($v0)
    ctx->pc = 0x2acc24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_2acc28:
    // 0x2acc28: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x2acc28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
label_2acc2c:
    // 0x2acc2c: 0x8cd00004  lw          $s0, 0x4($a2)
    ctx->pc = 0x2acc2cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2acc30:
    // 0x2acc30: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2acc30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2acc34:
    // 0x2acc34: 0x8c6600fc  lw          $a2, 0xFC($v1)
    ctx->pc = 0x2acc34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 252)));
label_2acc38:
    // 0x2acc38: 0x26090004  addiu       $t1, $s0, 0x4
    ctx->pc = 0x2acc38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2acc3c:
    // 0x2acc3c: 0x40f809  jalr        $v0
label_2acc40:
    if (ctx->pc == 0x2ACC40u) {
        ctx->pc = 0x2ACC40u;
            // 0x2acc40: 0x8c6500f8  lw          $a1, 0xF8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
        ctx->pc = 0x2ACC44u;
        goto label_2acc44;
    }
    ctx->pc = 0x2ACC3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2ACC44u);
        ctx->pc = 0x2ACC40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC3Cu;
            // 0x2acc40: 0x8c6500f8  lw          $a1, 0xF8($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 248)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2ACC44u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2ACC44u; }
            if (ctx->pc != 0x2ACC44u) { return; }
        }
        }
    }
    ctx->pc = 0x2ACC44u;
label_2acc44:
    // 0x2acc44: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2acc48:
    if (ctx->pc == 0x2ACC48u) {
        ctx->pc = 0x2ACC48u;
            // 0x2acc48: 0x40102d  daddu       $v0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC4Cu;
        goto label_2acc4c;
    }
    ctx->pc = 0x2ACC44u;
    {
        const bool branch_taken_0x2acc44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC44u;
            // 0x2acc48: 0x40102d  daddu       $v0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc44) {
            ctx->pc = 0x2ACC54u;
            goto label_2acc54;
        }
    }
    ctx->pc = 0x2ACC4Cu;
label_2acc4c:
    // 0x2acc4c: 0x10000018  b           . + 4 + (0x18 << 2)
label_2acc50:
    if (ctx->pc == 0x2ACC50u) {
        ctx->pc = 0x2ACC50u;
            // 0x2acc50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2ACC54u;
        goto label_2acc54;
    }
    ctx->pc = 0x2ACC4Cu;
    {
        const bool branch_taken_0x2acc4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2ACC50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACC4Cu;
            // 0x2acc50: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2acc4c) {
            ctx->pc = 0x2ACCB0u;
            goto label_2accb0;
        }
    }
    ctx->pc = 0x2ACC54u;
label_2acc54:
    // 0x2acc54: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2acc54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2acc58:
    // 0x2acc58: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2acc58u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2acc5c:
    // 0x2acc5c: 0x2243a  dsrl        $a0, $v0, 16
    ctx->pc = 0x2acc5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) >> 16);
label_2acc60:
    // 0x2acc60: 0x22a3a  dsrl        $a1, $v0, 8
    ctx->pc = 0x2acc60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) >> 8);
label_2acc64:
    // 0x2acc64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x2acc64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2acc68:
    // 0x2acc68: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2acc68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2acc6c:
    // 0x2acc6c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2acc6cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2acc70:
    // 0x2acc70: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2acc70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2acc74:
    // 0x2acc74: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2acc74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2acc78:
    // 0x2acc78: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2acc78u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2acc7c:
    // 0x2acc7c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2acc7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2acc80:
    // 0x2acc80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2acc80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2acc84:
    // 0x2acc84: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2acc84u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2acc88:
    // 0x2acc88: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x2acc88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_2acc8c:
    // 0x2acc8c: 0xa2040000  sb          $a0, 0x0($s0)
    ctx->pc = 0x2acc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 4));
label_2acc90:
    // 0x2acc90: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2acc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2acc94:
    // 0x2acc94: 0xa2050001  sb          $a1, 0x1($s0)
    ctx->pc = 0x2acc94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 5));
label_2acc98:
    // 0x2acc98: 0xae220040  sw          $v0, 0x40($s1)
    ctx->pc = 0x2acc98u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 2));
label_2acc9c:
    // 0x2acc9c: 0xae320030  sw          $s2, 0x30($s1)
    ctx->pc = 0x2acc9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 18));
label_2acca0:
    // 0x2acca0: 0xae200044  sw          $zero, 0x44($s1)
    ctx->pc = 0x2acca0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 0));
label_2acca4:
    // 0x2acca4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2acca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2acca8:
    // 0x2acca8: 0xc0adc0a  jal         func_2B7028
label_2accac:
    if (ctx->pc == 0x2ACCACu) {
        ctx->pc = 0x2ACCACu;
            // 0x2accac: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x2ACCB0u;
        goto label_2accb0;
    }
    ctx->pc = 0x2ACCA8u;
    SET_GPR_U32(ctx, 31, 0x2ACCB0u);
    ctx->pc = 0x2ACCACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACCA8u;
            // 0x2accac: 0x24050016  addiu       $a1, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B7028u;
    if (runtime->hasFunction(0x2B7028u)) {
        auto targetFn = runtime->lookupFunction(0x2B7028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCB0u; }
        if (ctx->pc != 0x2ACCB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B7028_0x2b7028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2ACCB0u; }
        if (ctx->pc != 0x2ACCB0u) { return; }
    }
    ctx->pc = 0x2ACCB0u;
label_2accb0:
    // 0x2accb0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2accb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2accb4:
    // 0x2accb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2accb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2accb8:
    // 0x2accb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2accb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2accbc:
    // 0x2accbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2accbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2accc0:
    // 0x2accc0: 0x3e00008  jr          $ra
label_2accc4:
    if (ctx->pc == 0x2ACCC4u) {
        ctx->pc = 0x2ACCC4u;
            // 0x2accc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2ACCC8u;
        goto label_fallthrough_0x2accc0;
    }
    ctx->pc = 0x2ACCC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2ACCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2ACCC0u;
            // 0x2accc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2accc0:
    ctx->pc = 0x2ACCC8u;
    ctx->pc = 0x2accc8u;
}
