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

// Function: sub_001CBC70
// Address: 0x1cbc70 - 0x1cbeb8
void sub_001CBC70_0x1cbc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CBC70_0x1cbc70");
#endif

    switch (ctx->pc) {
        case 0x1cbc70u: goto label_1cbc70;
        case 0x1cbc74u: goto label_1cbc74;
        case 0x1cbc78u: goto label_1cbc78;
        case 0x1cbc7cu: goto label_1cbc7c;
        case 0x1cbc80u: goto label_1cbc80;
        case 0x1cbc84u: goto label_1cbc84;
        case 0x1cbc88u: goto label_1cbc88;
        case 0x1cbc8cu: goto label_1cbc8c;
        case 0x1cbc90u: goto label_1cbc90;
        case 0x1cbc94u: goto label_1cbc94;
        case 0x1cbc98u: goto label_1cbc98;
        case 0x1cbc9cu: goto label_1cbc9c;
        case 0x1cbca0u: goto label_1cbca0;
        case 0x1cbca4u: goto label_1cbca4;
        case 0x1cbca8u: goto label_1cbca8;
        case 0x1cbcacu: goto label_1cbcac;
        case 0x1cbcb0u: goto label_1cbcb0;
        case 0x1cbcb4u: goto label_1cbcb4;
        case 0x1cbcb8u: goto label_1cbcb8;
        case 0x1cbcbcu: goto label_1cbcbc;
        case 0x1cbcc0u: goto label_1cbcc0;
        case 0x1cbcc4u: goto label_1cbcc4;
        case 0x1cbcc8u: goto label_1cbcc8;
        case 0x1cbcccu: goto label_1cbccc;
        case 0x1cbcd0u: goto label_1cbcd0;
        case 0x1cbcd4u: goto label_1cbcd4;
        case 0x1cbcd8u: goto label_1cbcd8;
        case 0x1cbcdcu: goto label_1cbcdc;
        case 0x1cbce0u: goto label_1cbce0;
        case 0x1cbce4u: goto label_1cbce4;
        case 0x1cbce8u: goto label_1cbce8;
        case 0x1cbcecu: goto label_1cbcec;
        case 0x1cbcf0u: goto label_1cbcf0;
        case 0x1cbcf4u: goto label_1cbcf4;
        case 0x1cbcf8u: goto label_1cbcf8;
        case 0x1cbcfcu: goto label_1cbcfc;
        case 0x1cbd00u: goto label_1cbd00;
        case 0x1cbd04u: goto label_1cbd04;
        case 0x1cbd08u: goto label_1cbd08;
        case 0x1cbd0cu: goto label_1cbd0c;
        case 0x1cbd10u: goto label_1cbd10;
        case 0x1cbd14u: goto label_1cbd14;
        case 0x1cbd18u: goto label_1cbd18;
        case 0x1cbd1cu: goto label_1cbd1c;
        case 0x1cbd20u: goto label_1cbd20;
        case 0x1cbd24u: goto label_1cbd24;
        case 0x1cbd28u: goto label_1cbd28;
        case 0x1cbd2cu: goto label_1cbd2c;
        case 0x1cbd30u: goto label_1cbd30;
        case 0x1cbd34u: goto label_1cbd34;
        case 0x1cbd38u: goto label_1cbd38;
        case 0x1cbd3cu: goto label_1cbd3c;
        case 0x1cbd40u: goto label_1cbd40;
        case 0x1cbd44u: goto label_1cbd44;
        case 0x1cbd48u: goto label_1cbd48;
        case 0x1cbd4cu: goto label_1cbd4c;
        case 0x1cbd50u: goto label_1cbd50;
        case 0x1cbd54u: goto label_1cbd54;
        case 0x1cbd58u: goto label_1cbd58;
        case 0x1cbd5cu: goto label_1cbd5c;
        case 0x1cbd60u: goto label_1cbd60;
        case 0x1cbd64u: goto label_1cbd64;
        case 0x1cbd68u: goto label_1cbd68;
        case 0x1cbd6cu: goto label_1cbd6c;
        case 0x1cbd70u: goto label_1cbd70;
        case 0x1cbd74u: goto label_1cbd74;
        case 0x1cbd78u: goto label_1cbd78;
        case 0x1cbd7cu: goto label_1cbd7c;
        case 0x1cbd80u: goto label_1cbd80;
        case 0x1cbd84u: goto label_1cbd84;
        case 0x1cbd88u: goto label_1cbd88;
        case 0x1cbd8cu: goto label_1cbd8c;
        case 0x1cbd90u: goto label_1cbd90;
        case 0x1cbd94u: goto label_1cbd94;
        case 0x1cbd98u: goto label_1cbd98;
        case 0x1cbd9cu: goto label_1cbd9c;
        case 0x1cbda0u: goto label_1cbda0;
        case 0x1cbda4u: goto label_1cbda4;
        case 0x1cbda8u: goto label_1cbda8;
        case 0x1cbdacu: goto label_1cbdac;
        case 0x1cbdb0u: goto label_1cbdb0;
        case 0x1cbdb4u: goto label_1cbdb4;
        case 0x1cbdb8u: goto label_1cbdb8;
        case 0x1cbdbcu: goto label_1cbdbc;
        case 0x1cbdc0u: goto label_1cbdc0;
        case 0x1cbdc4u: goto label_1cbdc4;
        case 0x1cbdc8u: goto label_1cbdc8;
        case 0x1cbdccu: goto label_1cbdcc;
        case 0x1cbdd0u: goto label_1cbdd0;
        case 0x1cbdd4u: goto label_1cbdd4;
        case 0x1cbdd8u: goto label_1cbdd8;
        case 0x1cbddcu: goto label_1cbddc;
        case 0x1cbde0u: goto label_1cbde0;
        case 0x1cbde4u: goto label_1cbde4;
        case 0x1cbde8u: goto label_1cbde8;
        case 0x1cbdecu: goto label_1cbdec;
        case 0x1cbdf0u: goto label_1cbdf0;
        case 0x1cbdf4u: goto label_1cbdf4;
        case 0x1cbdf8u: goto label_1cbdf8;
        case 0x1cbdfcu: goto label_1cbdfc;
        case 0x1cbe00u: goto label_1cbe00;
        case 0x1cbe04u: goto label_1cbe04;
        case 0x1cbe08u: goto label_1cbe08;
        case 0x1cbe0cu: goto label_1cbe0c;
        case 0x1cbe10u: goto label_1cbe10;
        case 0x1cbe14u: goto label_1cbe14;
        case 0x1cbe18u: goto label_1cbe18;
        case 0x1cbe1cu: goto label_1cbe1c;
        case 0x1cbe20u: goto label_1cbe20;
        case 0x1cbe24u: goto label_1cbe24;
        case 0x1cbe28u: goto label_1cbe28;
        case 0x1cbe2cu: goto label_1cbe2c;
        case 0x1cbe30u: goto label_1cbe30;
        case 0x1cbe34u: goto label_1cbe34;
        case 0x1cbe38u: goto label_1cbe38;
        case 0x1cbe3cu: goto label_1cbe3c;
        case 0x1cbe40u: goto label_1cbe40;
        case 0x1cbe44u: goto label_1cbe44;
        case 0x1cbe48u: goto label_1cbe48;
        case 0x1cbe4cu: goto label_1cbe4c;
        case 0x1cbe50u: goto label_1cbe50;
        case 0x1cbe54u: goto label_1cbe54;
        case 0x1cbe58u: goto label_1cbe58;
        case 0x1cbe5cu: goto label_1cbe5c;
        case 0x1cbe60u: goto label_1cbe60;
        case 0x1cbe64u: goto label_1cbe64;
        case 0x1cbe68u: goto label_1cbe68;
        case 0x1cbe6cu: goto label_1cbe6c;
        case 0x1cbe70u: goto label_1cbe70;
        case 0x1cbe74u: goto label_1cbe74;
        case 0x1cbe78u: goto label_1cbe78;
        case 0x1cbe7cu: goto label_1cbe7c;
        case 0x1cbe80u: goto label_1cbe80;
        case 0x1cbe84u: goto label_1cbe84;
        case 0x1cbe88u: goto label_1cbe88;
        case 0x1cbe8cu: goto label_1cbe8c;
        case 0x1cbe90u: goto label_1cbe90;
        case 0x1cbe94u: goto label_1cbe94;
        case 0x1cbe98u: goto label_1cbe98;
        case 0x1cbe9cu: goto label_1cbe9c;
        case 0x1cbea0u: goto label_1cbea0;
        case 0x1cbea4u: goto label_1cbea4;
        case 0x1cbea8u: goto label_1cbea8;
        case 0x1cbeacu: goto label_1cbeac;
        case 0x1cbeb0u: goto label_1cbeb0;
        case 0x1cbeb4u: goto label_1cbeb4;
        default: break;
    }

    ctx->pc = 0x1cbc70u;

label_1cbc70:
    // 0x1cbc70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cbc70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cbc74:
    // 0x1cbc74: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cbc78:
    // 0x1cbc78: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cbc78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc7c:
    // 0x1cbc7c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cbc7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cbc80:
    // 0x1cbc80: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1cbc80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cbc84:
    // 0x1cbc84: 0x1600000a  bnez        $s0, . + 4 + (0xA << 2)
label_1cbc88:
    if (ctx->pc == 0x1CBC88u) {
        ctx->pc = 0x1CBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC84u;
        // 0x1cbc88: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBC8Cu;
        goto label_1cbc8c;
    }
    ctx->pc = 0x1CBC84u;
    {
        const bool branch_taken_0x1cbc84 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBC84u;
        // 0x1cbc88: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbc84) {
            ctx->pc = 0x1CBCB0u;
            goto label_1cbcb0;
        }
    }
    ctx->pc = 0x1CBC8Cu;
label_1cbc8c:
    // 0x1cbc8c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cbc8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cbc90:
    // 0x1cbc90: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cbc90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cbc94:
    // 0x1cbc94: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbc94u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbc98:
    // 0x1cbc98: 0x2484baf0  addiu       $a0, $a0, -0x4510
    ctx->pc = 0x1cbc98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949616));
label_1cbc9c:
    // 0x1cbc9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbc9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cbca0:
    // 0x1cbca0: 0x24a5b9c8  addiu       $a1, $a1, -0x4638
    ctx->pc = 0x1cbca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949320));
label_1cbca4:
    // 0x1cbca4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cbca4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbca8:
    // 0x1cbca8: 0x8072c9a  j           func_1CB268
label_1cbcac:
    if (ctx->pc == 0x1CBCACu) {
        ctx->pc = 0x1CBCACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCA8u;
        // 0x1cbcac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCB0u;
        goto label_1cbcb0;
    }
    ctx->pc = 0x1CBCA8u;
    ctx->pc = 0x1CBCACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBCA8u;
    // 0x1cbcac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    ctx->pc = 0x1CBCB0u;
label_1cbcb0:
    // 0x1cbcb0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1cbcb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1cbcb4:
    // 0x1cbcb4: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1cbcb8:
    if (ctx->pc == 0x1CBCB8u) {
        ctx->pc = 0x1CBCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCB4u;
        // 0x1cbcb8: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCBCu;
        goto label_1cbcbc;
    }
    ctx->pc = 0x1CBCB4u;
    {
        const bool branch_taken_0x1cbcb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbcb4) {
            ctx->pc = 0x1CBCB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBCB4u;
            // 0x1cbcb8: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBCE0u;
            goto label_1cbce0;
        }
    }
    ctx->pc = 0x1CBCBCu;
label_1cbcbc:
    // 0x1cbcbc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cbcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cbcc0:
    // 0x1cbcc0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cbcc0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cbcc4:
    // 0x1cbcc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbcc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbcc8:
    // 0x1cbcc8: 0x2484bb00  addiu       $a0, $a0, -0x4500
    ctx->pc = 0x1cbcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949632));
label_1cbccc:
    // 0x1cbccc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbcccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cbcd0:
    // 0x1cbcd0: 0x24a5ba48  addiu       $a1, $a1, -0x45B8
    ctx->pc = 0x1cbcd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949448));
label_1cbcd4:
    // 0x1cbcd4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cbcd4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbcd8:
    // 0x1cbcd8: 0x8072c9a  j           func_1CB268
label_1cbcdc:
    if (ctx->pc == 0x1CBCDCu) {
        ctx->pc = 0x1CBCDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCD8u;
        // 0x1cbcdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCE0u;
        goto label_1cbce0;
    }
    ctx->pc = 0x1CBCD8u;
    ctx->pc = 0x1CBCDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBCD8u;
    // 0x1cbcdc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    ctx->pc = 0x1CBCE0u;
label_1cbce0:
    // 0x1cbce0: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
label_1cbce4:
    if (ctx->pc == 0x1CBCE4u) {
        ctx->pc = 0x1CBCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBCE0u;
        // 0x1cbce4: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBCE8u;
        goto label_1cbce8;
    }
    ctx->pc = 0x1CBCE0u;
    {
        const bool branch_taken_0x1cbce0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cbce0) {
            ctx->pc = 0x1CBCE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBCE0u;
            // 0x1cbce4: 0x8e270004  lw          $a3, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBD10u;
            goto label_1cbd10;
        }
    }
    ctx->pc = 0x1CBCE8u;
label_1cbce8:
    // 0x1cbce8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1cbce8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1cbcec:
    // 0x1cbcec: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1cbcecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_1cbcf0:
    // 0x1cbcf0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbcf0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbcf4:
    // 0x1cbcf4: 0x2484bb10  addiu       $a0, $a0, -0x44F0
    ctx->pc = 0x1cbcf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949648));
label_1cbcf8:
    // 0x1cbcf8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbcf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cbcfc:
    // 0x1cbcfc: 0x24a5bab8  addiu       $a1, $a1, -0x4548
    ctx->pc = 0x1cbcfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294949560));
label_1cbd00:
    // 0x1cbd00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cbd00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbd04:
    // 0x1cbd04: 0x8072c9a  j           func_1CB268
label_1cbd08:
    if (ctx->pc == 0x1CBD08u) {
        ctx->pc = 0x1CBD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD04u;
        // 0x1cbd08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD0Cu;
        goto label_1cbd0c;
    }
    ctx->pc = 0x1CBD04u;
    ctx->pc = 0x1CBD08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBD04u;
    // 0x1cbd08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CB268u;
    sub_001CB268_0x1cb268(rdram, ctx, runtime); return;
    ctx->pc = 0x1CBD0Cu;
label_1cbd0c:
    // 0x1cbd0c: 0x0  nop
    ctx->pc = 0x1cbd0cu;
    // NOP
label_1cbd10:
    // 0x1cbd10: 0x58e0004a  blezl       $a3, . + 4 + (0x4A << 2)
label_1cbd14:
    if (ctx->pc == 0x1CBD14u) {
        ctx->pc = 0x1CBD14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD10u;
        // 0x1cbd14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD18u;
        goto label_1cbd18;
    }
    ctx->pc = 0x1CBD10u;
    {
        const bool branch_taken_0x1cbd10 = (GPR_S32(ctx, 7) <= 0);
        if (branch_taken_0x1cbd10) {
            ctx->pc = 0x1CBD14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBD10u;
            // 0x1cbd14: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBE3Cu;
            goto label_1cbe3c;
        }
    }
    ctx->pc = 0x1CBD18u;
label_1cbd18:
    // 0x1cbd18: 0x8e280000  lw          $t0, 0x0($s1)
    ctx->pc = 0x1cbd18u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1cbd1c:
    // 0x1cbd1c: 0x51000047  beql        $t0, $zero, . + 4 + (0x47 << 2)
label_1cbd20:
    if (ctx->pc == 0x1CBD20u) {
        ctx->pc = 0x1CBD20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD1Cu;
        // 0x1cbd20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD24u;
        goto label_1cbd24;
    }
    ctx->pc = 0x1CBD1Cu;
    {
        const bool branch_taken_0x1cbd1c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd1c) {
            ctx->pc = 0x1CBD20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBD1Cu;
            // 0x1cbd20: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBE3Cu;
            goto label_1cbe3c;
        }
    }
    ctx->pc = 0x1CBD24u;
label_1cbd24:
    // 0x1cbd24: 0x14a0001e  bnez        $a1, . + 4 + (0x1E << 2)
label_1cbd28:
    if (ctx->pc == 0x1CBD28u) {
        ctx->pc = 0x1CBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD24u;
        // 0x1cbd28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD2Cu;
        goto label_1cbd2c;
    }
    ctx->pc = 0x1CBD24u;
    {
        const bool branch_taken_0x1cbd24 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD24u;
        // 0x1cbd28: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd24) {
            ctx->pc = 0x1CBDA0u;
            goto label_1cbda0;
        }
    }
    ctx->pc = 0x1CBD2Cu;
label_1cbd2c:
    // 0x1cbd2c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x1cbd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_1cbd30:
    // 0x1cbd30: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1cbd34:
    if (ctx->pc == 0x1CBD34u) {
        ctx->pc = 0x1CBD34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD30u;
        // 0x1cbd34: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD38u;
        goto label_1cbd38;
    }
    ctx->pc = 0x1CBD30u;
    {
        const bool branch_taken_0x1cbd30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd30) {
            ctx->pc = 0x1CBD34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBD30u;
            // 0x1cbd34: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBD38u;
            goto label_1cbd38;
        }
    }
    ctx->pc = 0x1CBD38u;
label_1cbd38:
    // 0x1cbd38: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1cbd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cbd3c:
    // 0x1cbd3c: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cbd3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1cbd40:
    // 0x1cbd40: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1cbd40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cbd44:
    // 0x1cbd44: 0x1031823  subu        $v1, $t0, $v1
    ctx->pc = 0x1cbd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1cbd48:
    // 0x1cbd48: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1cbd48u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cbd4c:
    // 0x1cbd4c: 0x7066001a  div1        $zero, $v1, $a2
    ctx->pc = 0x1cbd4cu;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_1cbd50:
    // 0x1cbd50: 0x2010  mfhi        $a0
    ctx->pc = 0x1cbd50u;
    SET_GPR_U64(ctx, 4, ctx->hi);
label_1cbd54:
    // 0x1cbd54: 0x70002810  mfhi1       $a1
    ctx->pc = 0x1cbd54u;
    SET_GPR_U64(ctx, 5, ctx->hi1);
label_1cbd58:
    // 0x1cbd58: 0x54850007  bnel        $a0, $a1, . + 4 + (0x7 << 2)
label_1cbd5c:
    if (ctx->pc == 0x1CBD5Cu) {
        ctx->pc = 0x1CBD5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD58u;
        // 0x1cbd5c: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD60u;
        goto label_1cbd60;
    }
    ctx->pc = 0x1CBD58u;
    {
        const bool branch_taken_0x1cbd58 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        if (branch_taken_0x1cbd58) {
            ctx->pc = 0x1CBD5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBD58u;
            // 0x1cbd5c: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBD78u;
            goto label_1cbd78;
        }
    }
    ctx->pc = 0x1CBD60u;
label_1cbd60:
    // 0x1cbd60: 0xae040014  sw          $a0, 0x14($s0)
    ctx->pc = 0x1cbd60u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 4));
label_1cbd64:
    // 0x1cbd64: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1cbd64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1cbd68:
    // 0x1cbd68: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1cbd68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1cbd6c:
    // 0x1cbd6c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbd6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbd70:
    // 0x1cbd70: 0x10000006  b           . + 4 + (0x6 << 2)
label_1cbd74:
    if (ctx->pc == 0x1CBD74u) {
        ctx->pc = 0x1CBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD70u;
        // 0x1cbd74: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD78u;
        goto label_1cbd78;
    }
    ctx->pc = 0x1CBD70u;
    {
        const bool branch_taken_0x1cbd70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD70u;
        // 0x1cbd74: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd70) {
            ctx->pc = 0x1CBD8Cu;
            goto label_1cbd8c;
        }
    }
    ctx->pc = 0x1CBD78u;
label_1cbd78:
    // 0x1cbd78: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1cbd7c:
    if (ctx->pc == 0x1CBD7Cu) {
        ctx->pc = 0x1CBD7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD78u;
        // 0x1cbd7c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD80u;
        goto label_1cbd80;
    }
    ctx->pc = 0x1CBD78u;
    {
        const bool branch_taken_0x1cbd78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbd78) {
            ctx->pc = 0x1CBD7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBD78u;
            // 0x1cbd7c: 0x8e020028  lw          $v0, 0x28($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBD94u;
            goto label_1cbd94;
        }
    }
    ctx->pc = 0x1CBD80u;
label_1cbd80:
    // 0x1cbd80: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1cbd80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1cbd84:
    // 0x1cbd84: 0x40f809  jalr        $v0
label_1cbd88:
    if (ctx->pc == 0x1CBD88u) {
        ctx->pc = 0x1CBD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD84u;
        // 0x1cbd88: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBD8Cu;
        goto label_1cbd8c;
    }
    ctx->pc = 0x1CBD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBD8Cu);
        ctx->pc = 0x1CBD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD84u;
        // 0x1cbd88: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBD84u, 0x1CBD8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBD8Cu;
label_1cbd8c:
    // 0x1cbd8c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x1cbd8cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1cbd90:
    // 0x1cbd90: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1cbd90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1cbd94:
    // 0x1cbd94: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1cbd94u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cbd98:
    // 0x1cbd98: 0x10000027  b           . + 4 + (0x27 << 2)
label_1cbd9c:
    if (ctx->pc == 0x1CBD9Cu) {
        ctx->pc = 0x1CBD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD98u;
        // 0x1cbd9c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDA0u;
        goto label_1cbda0;
    }
    ctx->pc = 0x1CBD98u;
    {
        const bool branch_taken_0x1cbd98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBD9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBD98u;
        // 0x1cbd9c: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbd98) {
            ctx->pc = 0x1CBE38u;
            goto label_1cbe38;
        }
    }
    ctx->pc = 0x1CBDA0u;
label_1cbda0:
    // 0x1cbda0: 0x54a2001f  bnel        $a1, $v0, . + 4 + (0x1F << 2)
label_1cbda4:
    if (ctx->pc == 0x1CBDA4u) {
        ctx->pc = 0x1CBDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDA0u;
        // 0x1cbda4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDA8u;
        goto label_1cbda8;
    }
    ctx->pc = 0x1CBDA0u;
    {
        const bool branch_taken_0x1cbda0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x1cbda0) {
            ctx->pc = 0x1CBDA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBDA0u;
            // 0x1cbda4: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBE20u;
            goto label_1cbe20;
        }
    }
    ctx->pc = 0x1CBDA8u;
label_1cbda8:
    // 0x1cbda8: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x1cbda8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_1cbdac:
    // 0x1cbdac: 0x50c00001  beql        $a2, $zero, . + 4 + (0x1 << 2)
label_1cbdb0:
    if (ctx->pc == 0x1CBDB0u) {
        ctx->pc = 0x1CBDB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDACu;
        // 0x1cbdb0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDB4u;
        goto label_1cbdb4;
    }
    ctx->pc = 0x1CBDACu;
    {
        const bool branch_taken_0x1cbdac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdac) {
            ctx->pc = 0x1CBDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBDACu;
            // 0x1cbdb0: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBDB4u;
            goto label_1cbdb4;
        }
    }
    ctx->pc = 0x1CBDB4u;
label_1cbdb4:
    // 0x1cbdb4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x1cbdb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1cbdb8:
    // 0x1cbdb8: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x1cbdb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_1cbdbc:
    // 0x1cbdbc: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1cbdbcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cbdc0:
    // 0x1cbdc0: 0x1042023  subu        $a0, $t0, $a0
    ctx->pc = 0x1cbdc0u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1cbdc4:
    // 0x1cbdc4: 0x46001a  div         $zero, $v0, $a2
    ctx->pc = 0x1cbdc4u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1cbdc8:
    // 0x1cbdc8: 0x7086001a  div1        $zero, $a0, $a2
    ctx->pc = 0x1cbdc8u;
    { int32_t divisor = GPR_S32(ctx, 6); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_1cbdcc:
    // 0x1cbdcc: 0x1010  mfhi        $v0
    ctx->pc = 0x1cbdccu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_1cbdd0:
    // 0x1cbdd0: 0x70001810  mfhi1       $v1
    ctx->pc = 0x1cbdd0u;
    SET_GPR_U64(ctx, 3, ctx->hi1);
label_1cbdd4:
    // 0x1cbdd4: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
label_1cbdd8:
    if (ctx->pc == 0x1CBDD8u) {
        ctx->pc = 0x1CBDD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDD4u;
        // 0x1cbdd8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDDCu;
        goto label_1cbddc;
    }
    ctx->pc = 0x1CBDD4u;
    {
        const bool branch_taken_0x1cbdd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1cbdd4) {
            ctx->pc = 0x1CBDD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBDD4u;
            // 0x1cbdd8: 0x8e020038  lw          $v0, 0x38($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBDF8u;
            goto label_1cbdf8;
        }
    }
    ctx->pc = 0x1CBDDCu;
label_1cbddc:
    // 0x1cbddc: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x1cbddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_1cbde0:
    // 0x1cbde0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x1cbde0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1cbde4:
    // 0x1cbde4: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1cbde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1cbde8:
    // 0x1cbde8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cbde8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1cbdec:
    // 0x1cbdec: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cbdf0:
    if (ctx->pc == 0x1CBDF0u) {
        ctx->pc = 0x1CBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDECu;
        // 0x1cbdf0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBDF4u;
        goto label_1cbdf4;
    }
    ctx->pc = 0x1CBDECu;
    {
        const bool branch_taken_0x1cbdec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBDF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDECu;
        // 0x1cbdf0: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbdec) {
            ctx->pc = 0x1CBE0Cu;
            goto label_1cbe0c;
        }
    }
    ctx->pc = 0x1CBDF4u;
label_1cbdf4:
    // 0x1cbdf4: 0x0  nop
    ctx->pc = 0x1cbdf4u;
    // NOP
label_1cbdf8:
    // 0x1cbdf8: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1cbdfc:
    if (ctx->pc == 0x1CBDFCu) {
        ctx->pc = 0x1CBDFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBDF8u;
        // 0x1cbdfc: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE00u;
        goto label_1cbe00;
    }
    ctx->pc = 0x1CBDF8u;
    {
        const bool branch_taken_0x1cbdf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cbdf8) {
            ctx->pc = 0x1CBDFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1CBDF8u;
            // 0x1cbdfc: 0x8e020030  lw          $v0, 0x30($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1CBE14u;
            goto label_1cbe14;
        }
    }
    ctx->pc = 0x1CBE00u;
label_1cbe00:
    // 0x1cbe00: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1cbe00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1cbe04:
    // 0x1cbe04: 0x40f809  jalr        $v0
label_1cbe08:
    if (ctx->pc == 0x1CBE08u) {
        ctx->pc = 0x1CBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE04u;
        // 0x1cbe08: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE0Cu;
        goto label_1cbe0c;
    }
    ctx->pc = 0x1CBE04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBE0Cu);
        ctx->pc = 0x1CBE08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE04u;
        // 0x1cbe08: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBE04u, 0x1CBE0Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBE0Cu;
label_1cbe0c:
    // 0x1cbe0c: 0x8e270004  lw          $a3, 0x4($s1)
    ctx->pc = 0x1cbe0cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1cbe10:
    // 0x1cbe10: 0x8e020030  lw          $v0, 0x30($s0)
    ctx->pc = 0x1cbe10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_1cbe14:
    // 0x1cbe14: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x1cbe14u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1cbe18:
    // 0x1cbe18: 0x10000007  b           . + 4 + (0x7 << 2)
label_1cbe1c:
    if (ctx->pc == 0x1CBE1Cu) {
        ctx->pc = 0x1CBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE18u;
        // 0x1cbe1c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE20u;
        goto label_1cbe20;
    }
    ctx->pc = 0x1CBE18u;
    {
        const bool branch_taken_0x1cbe18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE18u;
        // 0x1cbe1c: 0xae020030  sw          $v0, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe18) {
            ctx->pc = 0x1CBE38u;
            goto label_1cbe38;
        }
    }
    ctx->pc = 0x1CBE20u;
label_1cbe20:
    // 0x1cbe20: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1cbe20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1cbe24:
    // 0x1cbe24: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_1cbe28:
    if (ctx->pc == 0x1CBE28u) {
        ctx->pc = 0x1CBE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE24u;
        // 0x1cbe28: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE2Cu;
        goto label_1cbe2c;
    }
    ctx->pc = 0x1CBE24u;
    {
        const bool branch_taken_0x1cbe24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CBE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE24u;
        // 0x1cbe28: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cbe24) {
            ctx->pc = 0x1CBE38u;
            goto label_1cbe38;
        }
    }
    ctx->pc = 0x1CBE2Cu;
label_1cbe2c:
    // 0x1cbe2c: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1cbe2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1cbe30:
    // 0x1cbe30: 0x40f809  jalr        $v0
label_1cbe34:
    if (ctx->pc == 0x1CBE34u) {
        ctx->pc = 0x1CBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE30u;
        // 0x1cbe34: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE38u;
        goto label_1cbe38;
    }
    ctx->pc = 0x1CBE30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CBE38u);
        ctx->pc = 0x1CBE34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE30u;
        // 0x1cbe34: 0x2405fffd  addiu       $a1, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBE30u, 0x1CBE38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1CBE38u;
label_1cbe38:
    // 0x1cbe38: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbe38u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbe3c:
    // 0x1cbe3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbe3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cbe40:
    // 0x1cbe40: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cbe40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbe44:
    // 0x1cbe44: 0x3e00008  jr          $ra
label_1cbe48:
    if (ctx->pc == 0x1CBE48u) {
        ctx->pc = 0x1CBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE44u;
        // 0x1cbe48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE4Cu;
        goto label_1cbe4c;
    }
    ctx->pc = 0x1CBE44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBE48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE44u;
        // 0x1cbe48: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBE44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CBE4Cu;
label_1cbe4c:
    // 0x1cbe4c: 0x0  nop
    ctx->pc = 0x1cbe4cu;
    // NOP
label_1cbe50:
    // 0x1cbe50: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1cbe50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1cbe54:
    // 0x1cbe54: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cbe54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cbe58:
    // 0x1cbe58: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cbe58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe5c:
    // 0x1cbe5c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cbe5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cbe60:
    // 0x1cbe60: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1cbe60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe64:
    // 0x1cbe64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1cbe64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1cbe68:
    // 0x1cbe68: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x1cbe68u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe6c:
    // 0x1cbe6c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1cbe6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1cbe70:
    // 0x1cbe70: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1cbe70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_1cbe74:
    // 0x1cbe74: 0xc0729fa  jal         func_1CA7E8
label_1cbe78:
    if (ctx->pc == 0x1CBE78u) {
        ctx->pc = 0x1CBE78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE74u;
        // 0x1cbe78: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE7Cu;
        goto label_1cbe7c;
    }
    ctx->pc = 0x1CBE74u;
    SET_GPR_U32(ctx, 31, 0x1CBE7Cu);
    ctx->pc = 0x1CBE78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE74u;
    // 0x1cbe78: 0xe0982d  daddu       $s3, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA7E8u, 0x1CBE74u, 0x1CBE7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE7Cu;
label_1cbe7c:
    // 0x1cbe7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cbe7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe80:
    // 0x1cbe80: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1cbe80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe84:
    // 0x1cbe84: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1cbe84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1cbe88:
    // 0x1cbe88: 0xc072fae  jal         func_1CBEB8
label_1cbe8c:
    if (ctx->pc == 0x1CBE8Cu) {
        ctx->pc = 0x1CBE8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE88u;
        // 0x1cbe8c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE90u;
        goto label_1cbe90;
    }
    ctx->pc = 0x1CBE88u;
    SET_GPR_U32(ctx, 31, 0x1CBE90u);
    ctx->pc = 0x1CBE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE88u;
    // 0x1cbe8c: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CBEB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CBEB8u, 0x1CBE88u, 0x1CBE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE90u;
label_1cbe90:
    // 0x1cbe90: 0xc072a00  jal         func_1CA800
label_1cbe94:
    if (ctx->pc == 0x1CBE94u) {
        ctx->pc = 0x1CBE94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBE90u;
        // 0x1cbe94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBE98u;
        goto label_1cbe98;
    }
    ctx->pc = 0x1CBE90u;
    SET_GPR_U32(ctx, 31, 0x1CBE98u);
    ctx->pc = 0x1CBE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CBE90u;
    // 0x1cbe94: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CA800u, 0x1CBE90u, 0x1CBE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CBE98u;
label_1cbe98:
    // 0x1cbe98: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cbe98u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cbe9c:
    // 0x1cbe9c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1cbe9cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cbea0:
    // 0x1cbea0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1cbea0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cbea4:
    // 0x1cbea4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cbea4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cbea8:
    // 0x1cbea8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1cbea8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cbeac:
    // 0x1cbeac: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1cbeacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cbeb0:
    // 0x1cbeb0: 0x3e00008  jr          $ra
label_1cbeb4:
    if (ctx->pc == 0x1CBEB4u) {
        ctx->pc = 0x1CBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEB0u;
        // 0x1cbeb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1CBEB8u;
        goto label_fallthrough_0x1cbeb0;
    }
    ctx->pc = 0x1CBEB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CBEB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CBEB0u;
        // 0x1cbeb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CBEB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1cbeb0:
    ctx->pc = 0x1CBEB8u;
}
