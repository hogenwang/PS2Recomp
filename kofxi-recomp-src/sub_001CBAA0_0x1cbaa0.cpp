#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CBAA0
// Address: 0x1cbaa0 - 0x1cbc70
void sub_001CBAA0_0x1cbaa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBAA0_0x1cbaa0");
#endif

    switch (ctx->pc) {
        case 0x1cbaa0u: goto label_1cbaa0;
        case 0x1cbaa4u: goto label_1cbaa4;
        case 0x1cbaa8u: goto label_1cbaa8;
        case 0x1cbaacu: goto label_1cbaac;
        case 0x1cbab0u: goto label_1cbab0;
        case 0x1cbab4u: goto label_1cbab4;
        case 0x1cbab8u: goto label_1cbab8;
        case 0x1cbabcu: goto label_1cbabc;
        case 0x1cbac0u: goto label_1cbac0;
        case 0x1cbac4u: goto label_1cbac4;
        case 0x1cbac8u: goto label_1cbac8;
        case 0x1cbaccu: goto label_1cbacc;
        case 0x1cbad0u: goto label_1cbad0;
        case 0x1cbad4u: goto label_1cbad4;
        case 0x1cbad8u: goto label_1cbad8;
        case 0x1cbadcu: goto label_1cbadc;
        case 0x1cbae0u: goto label_1cbae0;
        case 0x1cbae4u: goto label_1cbae4;
        case 0x1cbae8u: goto label_1cbae8;
        case 0x1cbaecu: goto label_1cbaec;
        case 0x1cbaf0u: goto label_1cbaf0;
        case 0x1cbaf4u: goto label_1cbaf4;
        case 0x1cbaf8u: goto label_1cbaf8;
        case 0x1cbafcu: goto label_1cbafc;
        case 0x1cbb00u: goto label_1cbb00;
        case 0x1cbb04u: goto label_1cbb04;
        case 0x1cbb08u: goto label_1cbb08;
        case 0x1cbb0cu: goto label_1cbb0c;
        case 0x1cbb10u: goto label_1cbb10;
        case 0x1cbb14u: goto label_1cbb14;
        case 0x1cbb18u: goto label_1cbb18;
        case 0x1cbb1cu: goto label_1cbb1c;
        case 0x1cbb20u: goto label_1cbb20;
        case 0x1cbb24u: goto label_1cbb24;
        case 0x1cbb28u: goto label_1cbb28;
        case 0x1cbb2cu: goto label_1cbb2c;
        case 0x1cbb30u: goto label_1cbb30;
        case 0x1cbb34u: goto label_1cbb34;
        case 0x1cbb38u: goto label_1cbb38;
        case 0x1cbb3cu: goto label_1cbb3c;
        case 0x1cbb40u: goto label_1cbb40;
        case 0x1cbb44u: goto label_1cbb44;
        case 0x1cbb48u: goto label_1cbb48;
        case 0x1cbb4cu: goto label_1cbb4c;
        case 0x1cbb50u: goto label_1cbb50;
        case 0x1cbb54u: goto label_1cbb54;
        case 0x1cbb58u: goto label_1cbb58;
        case 0x1cbb5cu: goto label_1cbb5c;
        case 0x1cbb60u: goto label_1cbb60;
        case 0x1cbb64u: goto label_1cbb64;
        case 0x1cbb68u: goto label_1cbb68;
        case 0x1cbb6cu: goto label_1cbb6c;
        case 0x1cbb70u: goto label_1cbb70;
        case 0x1cbb74u: goto label_1cbb74;
        case 0x1cbb78u: goto label_1cbb78;
        case 0x1cbb7cu: goto label_1cbb7c;
        case 0x1cbb80u: goto label_1cbb80;
        case 0x1cbb84u: goto label_1cbb84;
        case 0x1cbb88u: goto label_1cbb88;
        case 0x1cbb8cu: goto label_1cbb8c;
        case 0x1cbb90u: goto label_1cbb90;
        case 0x1cbb94u: goto label_1cbb94;
        case 0x1cbb98u: goto label_1cbb98;
        case 0x1cbb9cu: goto label_1cbb9c;
        case 0x1cbba0u: goto label_1cbba0;
        case 0x1cbba4u: goto label_1cbba4;
        case 0x1cbba8u: goto label_1cbba8;
        case 0x1cbbacu: goto label_1cbbac;
        case 0x1cbbb0u: goto label_1cbbb0;
        case 0x1cbbb4u: goto label_1cbbb4;
        case 0x1cbbb8u: goto label_1cbbb8;
        case 0x1cbbbcu: goto label_1cbbbc;
        case 0x1cbbc0u: goto label_1cbbc0;
        case 0x1cbbc4u: goto label_1cbbc4;
        case 0x1cbbc8u: goto label_1cbbc8;
        case 0x1cbbccu: goto label_1cbbcc;
        case 0x1cbbd0u: goto label_1cbbd0;
        case 0x1cbbd4u: goto label_1cbbd4;
        case 0x1cbbd8u: goto label_1cbbd8;
        case 0x1cbbdcu: goto label_1cbbdc;
        case 0x1cbbe0u: goto label_1cbbe0;
        case 0x1cbbe4u: goto label_1cbbe4;
        case 0x1cbbe8u: goto label_1cbbe8;
        case 0x1cbbecu: goto label_1cbbec;
        case 0x1cbbf0u: goto label_1cbbf0;
        case 0x1cbbf4u: goto label_1cbbf4;
        case 0x1cbbf8u: goto label_1cbbf8;
        case 0x1cbbfcu: goto label_1cbbfc;
        case 0x1cbc00u: goto label_1cbc00;
        case 0x1cbc04u: goto label_1cbc04;
        case 0x1cbc08u: goto label_1cbc08;
        case 0x1cbc0cu: goto label_1cbc0c;
        case 0x1cbc10u: goto label_1cbc10;
        case 0x1cbc14u: goto label_1cbc14;
        case 0x1cbc18u: goto label_1cbc18;
        case 0x1cbc1cu: goto label_1cbc1c;
        case 0x1cbc20u: goto label_1cbc20;
        case 0x1cbc24u: goto label_1cbc24;
        case 0x1cbc28u: goto label_1cbc28;
        case 0x1cbc2cu: goto label_1cbc2c;
        case 0x1cbc30u: goto label_1cbc30;
        case 0x1cbc34u: goto label_1cbc34;
        case 0x1cbc38u: goto label_1cbc38;
        case 0x1cbc3cu: goto label_1cbc3c;
        case 0x1cbc40u: goto label_1cbc40;
        case 0x1cbc44u: goto label_1cbc44;
        case 0x1cbc48u: goto label_1cbc48;
        case 0x1cbc4cu: goto label_1cbc4c;
        case 0x1cbc50u: goto label_1cbc50;
        case 0x1cbc54u: goto label_1cbc54;
        case 0x1cbc58u: goto label_1cbc58;
        case 0x1cbc5cu: goto label_1cbc5c;
        case 0x1cbc60u: goto label_1cbc60;
        case 0x1cbc64u: goto label_1cbc64;
        case 0x1cbc68u: goto label_1cbc68;
        case 0x1cbc6cu: goto label_1cbc6c;
        default: break;
    }

    ctx->pc = 0x1cbaa0u;

label_1cbaa0:
    // 0x1cbaa0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cbaa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cbaa4:
    // 0x1cbaa4: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x1cbaa4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cbaa8:
    // 0x1cbaa8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbaa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cbaac:
    // 0x1cbaac: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cbaacu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cbab0:
    // 0x1cbab0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cbab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cbab4:
    // 0x1cbab4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cbab4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cbab8:
    // 0x1cbab8: 0x1600000b  bnez        $s0, . + 4 + (0xB << 2)
label_1cbabc:
    if (ctx->pc == 0x1CBABCu) {
        ctx->pc = 0x1CBABCu;
            // 0x1cbabc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1CBAC0u;
        goto label_1cbac0;
    }
    ctx->pc = 0x1CBAB8u;
    {
        const bool branch_taken_0x1cbab8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBABCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBAB8u;
            // 0x1cbabc: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbab8) {
            ctx->pc = 0x1CBAE8u;
            goto label_1cbae8;
        }
    }
    ctx->pc = 0x1CBAC0u;
label_1cbac0:
    // 0x1cbac0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cbac0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cbac4:
    // 0x1cbac4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cbac4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cbac8:
    // 0x1cbac8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbac8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbacc:
    // 0x1cbacc: 0x2484bad0  addiu       $a0, $a0, -0x4530
    ctx->pc = 0x1cbaccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949584));
label_1cbad0:
    // 0x1cbad0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbad0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cbad4:
    // 0x1cbad4: 0x24a5b9c8  addiu       $a1, $a1, -0x4638
    ctx->pc = 0x1cbad4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949320));
label_1cbad8:
    // 0x1cbad8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cbad8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbadc:
    // 0x1cbadc: 0x8072c9a  j           func_1CB268
label_1cbae0:
    if (ctx->pc == 0x1CBAE0u) {
        ctx->pc = 0x1CBAE0u;
            // 0x1cbae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1CBAE4u;
        goto label_1cbae4;
    }
    ctx->pc = 0x1CBADCu;
    ctx->pc = 0x1CBAE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBADCu;
            // 0x1cbae0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    if (runtime->hasFunction(0x1CB268u)) {
        auto targetFn = runtime->lookupFunction(0x1CB268u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CBAE4u;
label_1cbae4:
    // 0x1cbae4: 0x0  nop
    ctx->pc = 0x1cbae4u;
    // NOP
label_1cbae8:
    // 0x1cbae8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cbae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1cbaec:
    // 0x1cbaec: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1cbaf0:
    if (ctx->pc == 0x1CBAF0u) {
        ctx->pc = 0x1CBAF0u;
            // 0x1cbaf0: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1CBAF4u;
        goto label_1cbaf4;
    }
    ctx->pc = 0x1CBAECu;
    {
        const bool branch_taken_0x1cbaec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbaec) {
            ctx->pc = 0x1CBAF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBAECu;
            // 0x1cbaf0: 0x8e280004  lw          $t0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBB18u;
            goto label_1cbb18;
        }
    }
    ctx->pc = 0x1CBAF4u;
label_1cbaf4:
    // 0x1cbaf4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cbaf4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cbaf8:
    // 0x1cbaf8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cbaf8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cbafc:
    // 0x1cbafc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbafcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbb00:
    // 0x1cbb00: 0x2484bae0  addiu       $a0, $a0, -0x4520
    ctx->pc = 0x1cbb00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949600));
label_1cbb04:
    // 0x1cbb04: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbb04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cbb08:
    // 0x1cbb08: 0x24a5ba48  addiu       $a1, $a1, -0x45B8
    ctx->pc = 0x1cbb08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949448));
label_1cbb0c:
    // 0x1cbb0c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cbb0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbb10:
    // 0x1cbb10: 0x8072c9a  j           func_1CB268
label_1cbb14:
    if (ctx->pc == 0x1CBB14u) {
        ctx->pc = 0x1CBB14u;
            // 0x1cbb14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1CBB18u;
        goto label_1cbb18;
    }
    ctx->pc = 0x1CBB10u;
    ctx->pc = 0x1CBB14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB10u;
            // 0x1cbb14: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    if (runtime->hasFunction(0x1CB268u)) {
        auto targetFn = runtime->lookupFunction(0x1CB268u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CBB18u;
label_1cbb18:
    // 0x1cbb18: 0x1900003b  blez        $t0, . + 4 + (0x3B << 2)
label_1cbb1c:
    if (ctx->pc == 0x1CBB1Cu) {
        ctx->pc = 0x1CBB1Cu;
            // 0x1cbb1c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB20u;
        goto label_1cbb20;
    }
    ctx->pc = 0x1CBB18u;
    {
        const bool branch_taken_0x1cbb18 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1CBB1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB18u;
            // 0x1cbb1c: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb18) {
            ctx->pc = 0x1CBC08u;
            goto label_1cbc08;
        }
    }
    ctx->pc = 0x1CBB20u;
label_1cbb20:
    // 0x1cbb20: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1cbb20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cbb24:
    // 0x1cbb24: 0x10a00038  beqz        $a1, . + 4 + (0x38 << 2)
label_1cbb28:
    if (ctx->pc == 0x1CBB28u) {
        ctx->pc = 0x1CBB28u;
            // 0x1cbb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CBB2Cu;
        goto label_1cbb2c;
    }
    ctx->pc = 0x1CBB24u;
    {
        const bool branch_taken_0x1cbb24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB24u;
            // 0x1cbb28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb24) {
            ctx->pc = 0x1CBC08u;
            goto label_1cbc08;
        }
    }
    ctx->pc = 0x1CBB2Cu;
label_1cbb2c:
    // 0x1cbb2c: 0x14620026  bne         $v1, $v0, . + 4 + (0x26 << 2)
label_1cbb30:
    if (ctx->pc == 0x1CBB30u) {
        ctx->pc = 0x1CBB34u;
        goto label_1cbb34;
    }
    ctx->pc = 0x1CBB2Cu;
    {
        const bool branch_taken_0x1cbb2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbb2c) {
            ctx->pc = 0x1CBBC8u;
            goto label_1cbbc8;
        }
    }
    ctx->pc = 0x1CBB34u;
label_1cbb34:
    // 0x1cbb34: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x1cbb34u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cbb38:
    // 0x1cbb38: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x1cbb38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_1cbb3c:
    // 0x1cbb3c: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x1cbb3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1cbb40:
    // 0x1cbb40: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x1cbb40u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1cbb44:
    // 0x1cbb44: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1cbb48:
    if (ctx->pc == 0x1CBB48u) {
        ctx->pc = 0x1CBB48u;
            // 0x1cbb48: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x1CBB4Cu;
        goto label_1cbb4c;
    }
    ctx->pc = 0x1CBB44u;
    {
        const bool branch_taken_0x1cbb44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBB48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB44u;
            // 0x1cbb48: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbb44) {
            ctx->pc = 0x1CBB78u;
            goto label_1cbb78;
        }
    }
    ctx->pc = 0x1CBB4Cu;
label_1cbb4c:
    // 0x1cbb4c: 0xc33023  subu        $a2, $a2, $v1
    ctx->pc = 0x1cbb4cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_1cbb50:
    // 0x1cbb50: 0x106102a  slt         $v0, $t0, $a2
    ctx->pc = 0x1cbb50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1cbb54:
    // 0x1cbb54: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1cbb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cbb58:
    // 0x1cbb58: 0x102300b  movn        $a2, $t0, $v0
    ctx->pc = 0x1cbb58u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 8));
label_1cbb5c:
    // 0x1cbb5c: 0xc049c48  jal         func_127120
label_1cbb60:
    if (ctx->pc == 0x1CBB60u) {
        ctx->pc = 0x1CBB60u;
            // 0x1cbb60: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->pc = 0x1CBB64u;
        goto label_1cbb64;
    }
    ctx->pc = 0x1CBB5Cu;
    SET_GPR_U32(ctx, 31, 0x1CBB64u);
    ctx->pc = 0x1CBB60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB5Cu;
            // 0x1cbb60: 0xe42021  addu        $a0, $a3, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB64u; }
        if (ctx->pc != 0x1CBB64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBB64u; }
        if (ctx->pc != 0x1CBB64u) { return; }
    }
    ctx->pc = 0x1CBB64u;
label_1cbb64:
    // 0x1cbb64: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x1cbb64u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1cbb68:
    // 0x1cbb68: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1cbb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cbb6c:
    // 0x1cbb6c: 0x8e07001c  lw          $a3, 0x1C($s0)
    ctx->pc = 0x1cbb6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cbb70:
    // 0x1cbb70: 0xa71823  subu        $v1, $a1, $a3
    ctx->pc = 0x1cbb70u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1cbb74:
    // 0x1cbb74: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x1cbb74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_1cbb78:
    // 0x1cbb78: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1cbb78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1cbb7c:
    // 0x1cbb7c: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1cbb7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1cbb80:
    // 0x1cbb80: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_1cbb84:
    if (ctx->pc == 0x1CBB84u) {
        ctx->pc = 0x1CBB84u;
            // 0x1cbb84: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1CBB88u;
        goto label_1cbb88;
    }
    ctx->pc = 0x1CBB80u;
    {
        const bool branch_taken_0x1cbb80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbb80) {
            ctx->pc = 0x1CBB84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB80u;
            // 0x1cbb84: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBBACu;
            goto label_1cbbac;
        }
    }
    ctx->pc = 0x1CBB88u;
label_1cbb88:
    // 0x1cbb88: 0x643023  subu        $a2, $v1, $a0
    ctx->pc = 0x1cbb88u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1cbb8c:
    // 0x1cbb8c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x1cbb8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1cbb90:
    // 0x1cbb90: 0x126102a  slt         $v0, $t1, $a2
    ctx->pc = 0x1cbb90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_1cbb94:
    // 0x1cbb94: 0x122300b  movn        $a2, $t1, $v0
    ctx->pc = 0x1cbb94u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 9));
label_1cbb98:
    // 0x1cbb98: 0x662823  subu        $a1, $v1, $a2
    ctx->pc = 0x1cbb98u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1cbb9c:
    // 0x1cbb9c: 0xc049c48  jal         func_127120
label_1cbba0:
    if (ctx->pc == 0x1CBBA0u) {
        ctx->pc = 0x1CBBA0u;
            // 0x1cbba0: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->pc = 0x1CBBA4u;
        goto label_1cbba4;
    }
    ctx->pc = 0x1CBB9Cu;
    SET_GPR_U32(ctx, 31, 0x1CBBA4u);
    ctx->pc = 0x1CBBA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBB9Cu;
            // 0x1cbba0: 0x852821  addu        $a1, $a0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBBA4u; }
        if (ctx->pc != 0x1CBBA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBBA4u; }
        if (ctx->pc != 0x1CBBA4u) { return; }
    }
    ctx->pc = 0x1CBBA4u;
label_1cbba4:
    // 0x1cbba4: 0x8e290004  lw          $t1, 0x4($s1)
    ctx->pc = 0x1cbba4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1cbba8:
    // 0x1cbba8: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cbba8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cbbac:
    // 0x1cbbac: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x1cbbacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_1cbbb0:
    // 0x1cbbb0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1cbbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1cbbb4:
    // 0x1cbbb4: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x1cbbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_1cbbb8:
    // 0x1cbbb8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1cbbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1cbbbc:
    // 0x1cbbbc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1cbbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cbbc0:
    // 0x1cbbc0: 0x10000011  b           . + 4 + (0x11 << 2)
label_1cbbc4:
    if (ctx->pc == 0x1CBBC4u) {
        ctx->pc = 0x1CBBC4u;
            // 0x1cbbc4: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->pc = 0x1CBBC8u;
        goto label_1cbbc8;
    }
    ctx->pc = 0x1CBBC0u;
    {
        const bool branch_taken_0x1cbbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBC0u;
            // 0x1cbbc4: 0xae040034  sw          $a0, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbc0) {
            ctx->pc = 0x1CBC08u;
            goto label_1cbc08;
        }
    }
    ctx->pc = 0x1CBBC8u;
label_1cbbc8:
    // 0x1cbbc8: 0x54600009  bnel        $v1, $zero, . + 4 + (0x9 << 2)
label_1cbbcc:
    if (ctx->pc == 0x1CBBCCu) {
        ctx->pc = 0x1CBBCCu;
            // 0x1cbbcc: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->pc = 0x1CBBD0u;
        goto label_1cbbd0;
    }
    ctx->pc = 0x1CBBC8u;
    {
        const bool branch_taken_0x1cbbc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbbc8) {
            ctx->pc = 0x1CBBCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBC8u;
            // 0x1cbbcc: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CBBF0u;
            goto label_1cbbf0;
        }
    }
    ctx->pc = 0x1CBBD0u;
label_1cbbd0:
    // 0x1cbbd0: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1cbbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1cbbd4:
    // 0x1cbbd4: 0x8e04002c  lw          $a0, 0x2C($s0)
    ctx->pc = 0x1cbbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1cbbd8:
    // 0x1cbbd8: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x1cbbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1cbbdc:
    // 0x1cbbdc: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x1cbbdcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_1cbbe0:
    // 0x1cbbe0: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1cbbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1cbbe4:
    // 0x1cbbe4: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x1cbbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_1cbbe8:
    // 0x1cbbe8: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cbbec:
    if (ctx->pc == 0x1CBBECu) {
        ctx->pc = 0x1CBBECu;
            // 0x1cbbec: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->pc = 0x1CBBF0u;
        goto label_1cbbf0;
    }
    ctx->pc = 0x1CBBE8u;
    {
        const bool branch_taken_0x1cbbe8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBE8u;
            // 0x1cbbec: 0xae04002c  sw          $a0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbe8) {
            ctx->pc = 0x1CBC08u;
            goto label_1cbc08;
        }
    }
    ctx->pc = 0x1CBBF0u;
label_1cbbf0:
    // 0x1cbbf0: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1cbbf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1cbbf4:
    // 0x1cbbf4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1cbbf8:
    if (ctx->pc == 0x1CBBF8u) {
        ctx->pc = 0x1CBBF8u;
            // 0x1cbbf8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x1CBBFCu;
        goto label_1cbbfc;
    }
    ctx->pc = 0x1CBBF4u;
    {
        const bool branch_taken_0x1cbbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBBF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBBF4u;
            // 0x1cbbf8: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbbf4) {
            ctx->pc = 0x1CBC08u;
            goto label_1cbc08;
        }
    }
    ctx->pc = 0x1CBBFCu;
label_1cbbfc:
    // 0x1cbbfc: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1cbbfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1cbc00:
    // 0x1cbc00: 0x40f809  jalr        $v0
label_1cbc04:
    if (ctx->pc == 0x1CBC04u) {
        ctx->pc = 0x1CBC04u;
            // 0x1cbc04: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->pc = 0x1CBC08u;
        goto label_1cbc08;
    }
    ctx->pc = 0x1CBC00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBC08u);
        ctx->pc = 0x1CBC04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC00u;
            // 0x1cbc04: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CBC08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC08u; }
            if (ctx->pc != 0x1CBC08u) { return; }
        }
        }
    }
    ctx->pc = 0x1CBC08u;
label_1cbc08:
    // 0x1cbc08: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbc08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbc0c:
    // 0x1cbc0c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbc0cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cbc10:
    // 0x1cbc10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cbc10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbc14:
    // 0x1cbc14: 0x3e00008  jr          $ra
label_1cbc18:
    if (ctx->pc == 0x1CBC18u) {
        ctx->pc = 0x1CBC18u;
            // 0x1cbc18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1CBC1Cu;
        goto label_1cbc1c;
    }
    ctx->pc = 0x1CBC14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBC18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC14u;
            // 0x1cbc18: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CBC1Cu;
label_1cbc1c:
    // 0x1cbc1c: 0x0  nop
    ctx->pc = 0x1cbc1cu;
    // NOP
label_1cbc20:
    // 0x1cbc20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cbc20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cbc24:
    // 0x1cbc24: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbc24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cbc28:
    // 0x1cbc28: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cbc28u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc2c:
    // 0x1cbc2c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cbc2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cbc30:
    // 0x1cbc30: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cbc30u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc34:
    // 0x1cbc34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cbc34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cbc38:
    // 0x1cbc38: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cbc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1cbc3c:
    // 0x1cbc3c: 0xc0729fa  jal         func_1CA7E8
label_1cbc40:
    if (ctx->pc == 0x1CBC40u) {
        ctx->pc = 0x1CBC40u;
            // 0x1cbc40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC44u;
        goto label_1cbc44;
    }
    ctx->pc = 0x1CBC3Cu;
    SET_GPR_U32(ctx, 31, 0x1CBC44u);
    ctx->pc = 0x1CBC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC3Cu;
            // 0x1cbc40: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC44u; }
        if (ctx->pc != 0x1CBC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC44u; }
        if (ctx->pc != 0x1CBC44u) { return; }
    }
    ctx->pc = 0x1CBC44u;
label_1cbc44:
    // 0x1cbc44: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbc44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc48:
    // 0x1cbc48: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cbc48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc4c:
    // 0x1cbc4c: 0xc072f1c  jal         func_1CBC70
label_1cbc50:
    if (ctx->pc == 0x1CBC50u) {
        ctx->pc = 0x1CBC50u;
            // 0x1cbc50: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC54u;
        goto label_1cbc54;
    }
    ctx->pc = 0x1CBC4Cu;
    SET_GPR_U32(ctx, 31, 0x1CBC54u);
    ctx->pc = 0x1CBC50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC4Cu;
            // 0x1cbc50: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CBC70u;
    if (runtime->hasFunction(0x1CBC70u)) {
        auto targetFn = runtime->lookupFunction(0x1CBC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC54u; }
        if (ctx->pc != 0x1CBC54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CBC70_0x1cbc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CBC54u; }
        if (ctx->pc != 0x1CBC54u) { return; }
    }
    ctx->pc = 0x1CBC54u;
label_1cbc54:
    // 0x1cbc54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbc54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbc58:
    // 0x1cbc58: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbc58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cbc5c:
    // 0x1cbc5c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cbc5cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbc60:
    // 0x1cbc60: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cbc60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cbc64:
    // 0x1cbc64: 0x8072a00  j           func_1CA800
label_1cbc68:
    if (ctx->pc == 0x1CBC68u) {
        ctx->pc = 0x1CBC68u;
            // 0x1cbc68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1CBC6Cu;
        goto label_1cbc6c;
    }
    ctx->pc = 0x1CBC64u;
    ctx->pc = 0x1CBC68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CBC64u;
            // 0x1cbc68: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CBC6Cu;
label_1cbc6c:
    // 0x1cbc6c: 0x0  nop
    ctx->pc = 0x1cbc6cu;
    // NOP
    ctx->pc = 0x1cbc70u;
}
