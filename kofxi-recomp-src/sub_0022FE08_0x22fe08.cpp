#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0022FE08
// Address: 0x22fe08 - 0x2300b0
void sub_0022FE08_0x22fe08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022FE08_0x22fe08");
#endif

    switch (ctx->pc) {
        case 0x22fe08u: goto label_22fe08;
        case 0x22fe0cu: goto label_22fe0c;
        case 0x22fe10u: goto label_22fe10;
        case 0x22fe14u: goto label_22fe14;
        case 0x22fe18u: goto label_22fe18;
        case 0x22fe1cu: goto label_22fe1c;
        case 0x22fe20u: goto label_22fe20;
        case 0x22fe24u: goto label_22fe24;
        case 0x22fe28u: goto label_22fe28;
        case 0x22fe2cu: goto label_22fe2c;
        case 0x22fe30u: goto label_22fe30;
        case 0x22fe34u: goto label_22fe34;
        case 0x22fe38u: goto label_22fe38;
        case 0x22fe3cu: goto label_22fe3c;
        case 0x22fe40u: goto label_22fe40;
        case 0x22fe44u: goto label_22fe44;
        case 0x22fe48u: goto label_22fe48;
        case 0x22fe4cu: goto label_22fe4c;
        case 0x22fe50u: goto label_22fe50;
        case 0x22fe54u: goto label_22fe54;
        case 0x22fe58u: goto label_22fe58;
        case 0x22fe5cu: goto label_22fe5c;
        case 0x22fe60u: goto label_22fe60;
        case 0x22fe64u: goto label_22fe64;
        case 0x22fe68u: goto label_22fe68;
        case 0x22fe6cu: goto label_22fe6c;
        case 0x22fe70u: goto label_22fe70;
        case 0x22fe74u: goto label_22fe74;
        case 0x22fe78u: goto label_22fe78;
        case 0x22fe7cu: goto label_22fe7c;
        case 0x22fe80u: goto label_22fe80;
        case 0x22fe84u: goto label_22fe84;
        case 0x22fe88u: goto label_22fe88;
        case 0x22fe8cu: goto label_22fe8c;
        case 0x22fe90u: goto label_22fe90;
        case 0x22fe94u: goto label_22fe94;
        case 0x22fe98u: goto label_22fe98;
        case 0x22fe9cu: goto label_22fe9c;
        case 0x22fea0u: goto label_22fea0;
        case 0x22fea4u: goto label_22fea4;
        case 0x22fea8u: goto label_22fea8;
        case 0x22feacu: goto label_22feac;
        case 0x22feb0u: goto label_22feb0;
        case 0x22feb4u: goto label_22feb4;
        case 0x22feb8u: goto label_22feb8;
        case 0x22febcu: goto label_22febc;
        case 0x22fec0u: goto label_22fec0;
        case 0x22fec4u: goto label_22fec4;
        case 0x22fec8u: goto label_22fec8;
        case 0x22feccu: goto label_22fecc;
        case 0x22fed0u: goto label_22fed0;
        case 0x22fed4u: goto label_22fed4;
        case 0x22fed8u: goto label_22fed8;
        case 0x22fedcu: goto label_22fedc;
        case 0x22fee0u: goto label_22fee0;
        case 0x22fee4u: goto label_22fee4;
        case 0x22fee8u: goto label_22fee8;
        case 0x22feecu: goto label_22feec;
        case 0x22fef0u: goto label_22fef0;
        case 0x22fef4u: goto label_22fef4;
        case 0x22fef8u: goto label_22fef8;
        case 0x22fefcu: goto label_22fefc;
        case 0x22ff00u: goto label_22ff00;
        case 0x22ff04u: goto label_22ff04;
        case 0x22ff08u: goto label_22ff08;
        case 0x22ff0cu: goto label_22ff0c;
        case 0x22ff10u: goto label_22ff10;
        case 0x22ff14u: goto label_22ff14;
        case 0x22ff18u: goto label_22ff18;
        case 0x22ff1cu: goto label_22ff1c;
        case 0x22ff20u: goto label_22ff20;
        case 0x22ff24u: goto label_22ff24;
        case 0x22ff28u: goto label_22ff28;
        case 0x22ff2cu: goto label_22ff2c;
        case 0x22ff30u: goto label_22ff30;
        case 0x22ff34u: goto label_22ff34;
        case 0x22ff38u: goto label_22ff38;
        case 0x22ff3cu: goto label_22ff3c;
        case 0x22ff40u: goto label_22ff40;
        case 0x22ff44u: goto label_22ff44;
        case 0x22ff48u: goto label_22ff48;
        case 0x22ff4cu: goto label_22ff4c;
        case 0x22ff50u: goto label_22ff50;
        case 0x22ff54u: goto label_22ff54;
        case 0x22ff58u: goto label_22ff58;
        case 0x22ff5cu: goto label_22ff5c;
        case 0x22ff60u: goto label_22ff60;
        case 0x22ff64u: goto label_22ff64;
        case 0x22ff68u: goto label_22ff68;
        case 0x22ff6cu: goto label_22ff6c;
        case 0x22ff70u: goto label_22ff70;
        case 0x22ff74u: goto label_22ff74;
        case 0x22ff78u: goto label_22ff78;
        case 0x22ff7cu: goto label_22ff7c;
        case 0x22ff80u: goto label_22ff80;
        case 0x22ff84u: goto label_22ff84;
        case 0x22ff88u: goto label_22ff88;
        case 0x22ff8cu: goto label_22ff8c;
        case 0x22ff90u: goto label_22ff90;
        case 0x22ff94u: goto label_22ff94;
        case 0x22ff98u: goto label_22ff98;
        case 0x22ff9cu: goto label_22ff9c;
        case 0x22ffa0u: goto label_22ffa0;
        case 0x22ffa4u: goto label_22ffa4;
        case 0x22ffa8u: goto label_22ffa8;
        case 0x22ffacu: goto label_22ffac;
        case 0x22ffb0u: goto label_22ffb0;
        case 0x22ffb4u: goto label_22ffb4;
        case 0x22ffb8u: goto label_22ffb8;
        case 0x22ffbcu: goto label_22ffbc;
        case 0x22ffc0u: goto label_22ffc0;
        case 0x22ffc4u: goto label_22ffc4;
        case 0x22ffc8u: goto label_22ffc8;
        case 0x22ffccu: goto label_22ffcc;
        case 0x22ffd0u: goto label_22ffd0;
        case 0x22ffd4u: goto label_22ffd4;
        case 0x22ffd8u: goto label_22ffd8;
        case 0x22ffdcu: goto label_22ffdc;
        case 0x22ffe0u: goto label_22ffe0;
        case 0x22ffe4u: goto label_22ffe4;
        case 0x22ffe8u: goto label_22ffe8;
        case 0x22ffecu: goto label_22ffec;
        case 0x22fff0u: goto label_22fff0;
        case 0x22fff4u: goto label_22fff4;
        case 0x22fff8u: goto label_22fff8;
        case 0x22fffcu: goto label_22fffc;
        case 0x230000u: goto label_230000;
        case 0x230004u: goto label_230004;
        case 0x230008u: goto label_230008;
        case 0x23000cu: goto label_23000c;
        case 0x230010u: goto label_230010;
        case 0x230014u: goto label_230014;
        case 0x230018u: goto label_230018;
        case 0x23001cu: goto label_23001c;
        case 0x230020u: goto label_230020;
        case 0x230024u: goto label_230024;
        case 0x230028u: goto label_230028;
        case 0x23002cu: goto label_23002c;
        case 0x230030u: goto label_230030;
        case 0x230034u: goto label_230034;
        case 0x230038u: goto label_230038;
        case 0x23003cu: goto label_23003c;
        case 0x230040u: goto label_230040;
        case 0x230044u: goto label_230044;
        case 0x230048u: goto label_230048;
        case 0x23004cu: goto label_23004c;
        case 0x230050u: goto label_230050;
        case 0x230054u: goto label_230054;
        case 0x230058u: goto label_230058;
        case 0x23005cu: goto label_23005c;
        case 0x230060u: goto label_230060;
        case 0x230064u: goto label_230064;
        case 0x230068u: goto label_230068;
        case 0x23006cu: goto label_23006c;
        case 0x230070u: goto label_230070;
        case 0x230074u: goto label_230074;
        case 0x230078u: goto label_230078;
        case 0x23007cu: goto label_23007c;
        case 0x230080u: goto label_230080;
        case 0x230084u: goto label_230084;
        case 0x230088u: goto label_230088;
        case 0x23008cu: goto label_23008c;
        case 0x230090u: goto label_230090;
        case 0x230094u: goto label_230094;
        case 0x230098u: goto label_230098;
        case 0x23009cu: goto label_23009c;
        case 0x2300a0u: goto label_2300a0;
        case 0x2300a4u: goto label_2300a4;
        case 0x2300a8u: goto label_2300a8;
        case 0x2300acu: goto label_2300ac;
        default: break;
    }

    ctx->pc = 0x22fe08u;

label_22fe08:
    // 0x22fe08: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x22fe08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_22fe0c:
    // 0x22fe0c: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x22fe0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_22fe10:
    // 0x22fe10: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22fe10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_22fe14:
    // 0x22fe14: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x22fe14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_22fe18:
    // 0x22fe18: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22fe18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_22fe1c:
    // 0x22fe1c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x22fe1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_22fe20:
    // 0x22fe20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22fe20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_22fe24:
    // 0x22fe24: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x22fe24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_22fe28:
    // 0x22fe28: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x22fe28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_22fe2c:
    // 0x22fe2c: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x22fe2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_22fe30:
    // 0x22fe30: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_22fe34:
    if (ctx->pc == 0x22FE34u) {
        ctx->pc = 0x22FE34u;
            // 0x22fe34: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->pc = 0x22FE38u;
        goto label_22fe38;
    }
    ctx->pc = 0x22FE30u;
    {
        const bool branch_taken_0x22fe30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FE34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE30u;
            // 0x22fe34: 0xffb20030  sd          $s2, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe30) {
            ctx->pc = 0x22FE6Cu;
            goto label_22fe6c;
        }
    }
    ctx->pc = 0x22FE38u;
label_22fe38:
    // 0x22fe38: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x22fe38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_22fe3c:
    // 0x22fe3c: 0x50400095  beql        $v0, $zero, . + 4 + (0x95 << 2)
label_22fe40:
    if (ctx->pc == 0x22FE40u) {
        ctx->pc = 0x22FE40u;
            // 0x22fe40: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->pc = 0x22FE44u;
        goto label_22fe44;
    }
    ctx->pc = 0x22FE3Cu;
    {
        const bool branch_taken_0x22fe3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fe3c) {
            ctx->pc = 0x22FE40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE3Cu;
            // 0x22fe40: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230094u;
            goto label_230094;
        }
    }
    ctx->pc = 0x22FE44u;
label_22fe44:
    // 0x22fe44: 0x8c420018  lw          $v0, 0x18($v0)
    ctx->pc = 0x22fe44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_22fe48:
    // 0x22fe48: 0x1040008e  beqz        $v0, . + 4 + (0x8E << 2)
label_22fe4c:
    if (ctx->pc == 0x22FE4Cu) {
        ctx->pc = 0x22FE4Cu;
            // 0x22fe4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FE50u;
        goto label_22fe50;
    }
    ctx->pc = 0x22FE48u;
    {
        const bool branch_taken_0x22fe48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE48u;
            // 0x22fe4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe48) {
            ctx->pc = 0x230084u;
            goto label_230084;
        }
    }
    ctx->pc = 0x22FE50u;
label_22fe50:
    // 0x22fe50: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x22fe50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_22fe54:
    // 0x22fe54: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x22fe54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_22fe58:
    // 0x22fe58: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x22fe58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_22fe5c:
    // 0x22fe5c: 0x40f809  jalr        $v0
label_22fe60:
    if (ctx->pc == 0x22FE60u) {
        ctx->pc = 0x22FE60u;
            // 0x22fe60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x22FE64u;
        goto label_22fe64;
    }
    ctx->pc = 0x22FE5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x22FE64u);
        ctx->pc = 0x22FE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE5Cu;
            // 0x22fe60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x22FE64u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x22FE64u; }
            if (ctx->pc != 0x22FE64u) { return; }
        }
        }
    }
    ctx->pc = 0x22FE64u;
label_22fe64:
    // 0x22fe64: 0x1000008c  b           . + 4 + (0x8C << 2)
label_22fe68:
    if (ctx->pc == 0x22FE68u) {
        ctx->pc = 0x22FE68u;
            // 0x22fe68: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->pc = 0x22FE6Cu;
        goto label_22fe6c;
    }
    ctx->pc = 0x22FE64u;
    {
        const bool branch_taken_0x22fe64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE64u;
            // 0x22fe68: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe64) {
            ctx->pc = 0x230098u;
            goto label_230098;
        }
    }
    ctx->pc = 0x22FE6Cu;
label_22fe6c:
    // 0x22fe6c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x22fe6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22fe70:
    // 0x22fe70: 0xc08a922  jal         func_22A488
label_22fe74:
    if (ctx->pc == 0x22FE74u) {
        ctx->pc = 0x22FE74u;
            // 0x22fe74: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22FE78u;
        goto label_22fe78;
    }
    ctx->pc = 0x22FE70u;
    SET_GPR_U32(ctx, 31, 0x22FE78u);
    ctx->pc = 0x22FE74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE70u;
            // 0x22fe74: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (runtime->hasFunction(0x22A488u)) {
        auto targetFn = runtime->lookupFunction(0x22A488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FE78u; }
        if (ctx->pc != 0x22FE78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A488_0x22a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x22FE78u; }
        if (ctx->pc != 0x22FE78u) { return; }
    }
    ctx->pc = 0x22FE78u;
label_22fe78:
    // 0x22fe78: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x22fe78u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22fe7c:
    // 0x22fe7c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
label_22fe80:
    if (ctx->pc == 0x22FE80u) {
        ctx->pc = 0x22FE80u;
            // 0x22fe80: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x22FE84u;
        goto label_22fe84;
    }
    ctx->pc = 0x22FE7Cu;
    {
        const bool branch_taken_0x22fe7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x22FE80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE7Cu;
            // 0x22fe80: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe7c) {
            ctx->pc = 0x22FE8Cu;
            goto label_22fe8c;
        }
    }
    ctx->pc = 0x22FE84u;
label_22fe84:
    // 0x22fe84: 0x10000083  b           . + 4 + (0x83 << 2)
label_22fe88:
    if (ctx->pc == 0x22FE88u) {
        ctx->pc = 0x22FE88u;
            // 0x22fe88: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->pc = 0x22FE8Cu;
        goto label_22fe8c;
    }
    ctx->pc = 0x22FE84u;
    {
        const bool branch_taken_0x22fe84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FE88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE84u;
            // 0x22fe88: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe84) {
            ctx->pc = 0x230094u;
            goto label_230094;
        }
    }
    ctx->pc = 0x22FE8Cu;
label_22fe8c:
    // 0x22fe8c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x22fe8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_22fe90:
    // 0x22fe90: 0x1202004e  beq         $s0, $v0, . + 4 + (0x4E << 2)
label_22fe94:
    if (ctx->pc == 0x22FE94u) {
        ctx->pc = 0x22FE94u;
            // 0x22fe94: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x22FE98u;
        goto label_22fe98;
    }
    ctx->pc = 0x22FE90u;
    {
        const bool branch_taken_0x22fe90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE90u;
            // 0x22fe94: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe90) {
            ctx->pc = 0x22FFCCu;
            goto label_22ffcc;
        }
    }
    ctx->pc = 0x22FE98u;
label_22fe98:
    // 0x22fe98: 0x2a020401  slti        $v0, $s0, 0x401
    ctx->pc = 0x22fe98u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1025) ? 1 : 0);
label_22fe9c:
    // 0x22fe9c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
label_22fea0:
    if (ctx->pc == 0x22FEA0u) {
        ctx->pc = 0x22FEA0u;
            // 0x22fea0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x22FEA4u;
        goto label_22fea4;
    }
    ctx->pc = 0x22FE9Cu;
    {
        const bool branch_taken_0x22fe9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FE9Cu;
            // 0x22fea0: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fe9c) {
            ctx->pc = 0x22FF2Cu;
            goto label_22ff2c;
        }
    }
    ctx->pc = 0x22FEA4u;
label_22fea4:
    // 0x22fea4: 0x12020049  beq         $s0, $v0, . + 4 + (0x49 << 2)
label_22fea8:
    if (ctx->pc == 0x22FEA8u) {
        ctx->pc = 0x22FEA8u;
            // 0x22fea8: 0x2a020021  slti        $v0, $s0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->pc = 0x22FEACu;
        goto label_22feac;
    }
    ctx->pc = 0x22FEA4u;
    {
        const bool branch_taken_0x22fea4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FEA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEA4u;
            // 0x22fea8: 0x2a020021  slti        $v0, $s0, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fea4) {
            ctx->pc = 0x22FFCCu;
            goto label_22ffcc;
        }
    }
    ctx->pc = 0x22FEACu;
label_22feac:
    // 0x22feac: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_22feb0:
    if (ctx->pc == 0x22FEB0u) {
        ctx->pc = 0x22FEB0u;
            // 0x22feb0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x22FEB4u;
        goto label_22feb4;
    }
    ctx->pc = 0x22FEACu;
    {
        const bool branch_taken_0x22feac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEACu;
            // 0x22feb0: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22feac) {
            ctx->pc = 0x22FEF0u;
            goto label_22fef0;
        }
    }
    ctx->pc = 0x22FEB4u;
label_22feb4:
    // 0x22feb4: 0x12030045  beq         $s0, $v1, . + 4 + (0x45 << 2)
label_22feb8:
    if (ctx->pc == 0x22FEB8u) {
        ctx->pc = 0x22FEB8u;
            // 0x22feb8: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->pc = 0x22FEBCu;
        goto label_22febc;
    }
    ctx->pc = 0x22FEB4u;
    {
        const bool branch_taken_0x22feb4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x22FEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEB4u;
            // 0x22feb8: 0x2a020005  slti        $v0, $s0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22feb4) {
            ctx->pc = 0x22FFCCu;
            goto label_22ffcc;
        }
    }
    ctx->pc = 0x22FEBCu;
label_22febc:
    // 0x22febc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22fec0:
    if (ctx->pc == 0x22FEC0u) {
        ctx->pc = 0x22FEC0u;
            // 0x22fec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x22FEC4u;
        goto label_22fec4;
    }
    ctx->pc = 0x22FEBCu;
    {
        const bool branch_taken_0x22febc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEBCu;
            // 0x22fec0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22febc) {
            ctx->pc = 0x22FED4u;
            goto label_22fed4;
        }
    }
    ctx->pc = 0x22FEC4u;
label_22fec4:
    // 0x22fec4: 0x52020042  beql        $s0, $v0, . + 4 + (0x42 << 2)
label_22fec8:
    if (ctx->pc == 0x22FEC8u) {
        ctx->pc = 0x22FEC8u;
            // 0x22fec8: 0x86220002  lh          $v0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x22FECCu;
        goto label_22fecc;
    }
    ctx->pc = 0x22FEC4u;
    {
        const bool branch_taken_0x22fec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fec4) {
            ctx->pc = 0x22FEC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEC4u;
            // 0x22fec8: 0x86220002  lh          $v0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FFD0u;
            goto label_22ffd0;
        }
    }
    ctx->pc = 0x22FECCu;
label_22fecc:
    // 0x22fecc: 0x1000006b  b           . + 4 + (0x6B << 2)
label_22fed0:
    if (ctx->pc == 0x22FED0u) {
        ctx->pc = 0x22FED4u;
        goto label_22fed4;
    }
    ctx->pc = 0x22FECCu;
    {
        const bool branch_taken_0x22fecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fecc) {
            ctx->pc = 0x23007Cu;
            goto label_23007c;
        }
    }
    ctx->pc = 0x22FED4u;
label_22fed4:
    // 0x22fed4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x22fed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22fed8:
    // 0x22fed8: 0x1202003c  beq         $s0, $v0, . + 4 + (0x3C << 2)
label_22fedc:
    if (ctx->pc == 0x22FEDCu) {
        ctx->pc = 0x22FEDCu;
            // 0x22fedc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x22FEE0u;
        goto label_22fee0;
    }
    ctx->pc = 0x22FED8u;
    {
        const bool branch_taken_0x22fed8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FEDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FED8u;
            // 0x22fedc: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fed8) {
            ctx->pc = 0x22FFCCu;
            goto label_22ffcc;
        }
    }
    ctx->pc = 0x22FEE0u;
label_22fee0:
    // 0x22fee0: 0x5202003b  beql        $s0, $v0, . + 4 + (0x3B << 2)
label_22fee4:
    if (ctx->pc == 0x22FEE4u) {
        ctx->pc = 0x22FEE4u;
            // 0x22fee4: 0x86220002  lh          $v0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x22FEE8u;
        goto label_22fee8;
    }
    ctx->pc = 0x22FEE0u;
    {
        const bool branch_taken_0x22fee0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x22fee0) {
            ctx->pc = 0x22FEE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEE0u;
            // 0x22fee4: 0x86220002  lh          $v0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FFD0u;
            goto label_22ffd0;
        }
    }
    ctx->pc = 0x22FEE8u;
label_22fee8:
    // 0x22fee8: 0x10000064  b           . + 4 + (0x64 << 2)
label_22feec:
    if (ctx->pc == 0x22FEECu) {
        ctx->pc = 0x22FEF0u;
        goto label_22fef0;
    }
    ctx->pc = 0x22FEE8u;
    {
        const bool branch_taken_0x22fee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22fee8) {
            ctx->pc = 0x23007Cu;
            goto label_23007c;
        }
    }
    ctx->pc = 0x22FEF0u;
label_22fef0:
    // 0x22fef0: 0x1202002c  beq         $s0, $v0, . + 4 + (0x2C << 2)
label_22fef4:
    if (ctx->pc == 0x22FEF4u) {
        ctx->pc = 0x22FEF4u;
            // 0x22fef4: 0x2a020081  slti        $v0, $s0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->pc = 0x22FEF8u;
        goto label_22fef8;
    }
    ctx->pc = 0x22FEF0u;
    {
        const bool branch_taken_0x22fef0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FEF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEF0u;
            // 0x22fef4: 0x2a020081  slti        $v0, $s0, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fef0) {
            ctx->pc = 0x22FFA4u;
            goto label_22ffa4;
        }
    }
    ctx->pc = 0x22FEF8u;
label_22fef8:
    // 0x22fef8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22fefc:
    if (ctx->pc == 0x22FEFCu) {
        ctx->pc = 0x22FEFCu;
            // 0x22fefc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x22FF00u;
        goto label_22ff00;
    }
    ctx->pc = 0x22FEF8u;
    {
        const bool branch_taken_0x22fef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FEF8u;
            // 0x22fefc: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fef8) {
            ctx->pc = 0x22FF10u;
            goto label_22ff10;
        }
    }
    ctx->pc = 0x22FF00u;
label_22ff00:
    // 0x22ff00: 0x52020033  beql        $s0, $v0, . + 4 + (0x33 << 2)
label_22ff04:
    if (ctx->pc == 0x22FF04u) {
        ctx->pc = 0x22FF04u;
            // 0x22ff04: 0x86220002  lh          $v0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x22FF08u;
        goto label_22ff08;
    }
    ctx->pc = 0x22FF00u;
    {
        const bool branch_taken_0x22ff00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ff00) {
            ctx->pc = 0x22FF04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF00u;
            // 0x22ff04: 0x86220002  lh          $v0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FFD0u;
            goto label_22ffd0;
        }
    }
    ctx->pc = 0x22FF08u;
label_22ff08:
    // 0x22ff08: 0x1000005c  b           . + 4 + (0x5C << 2)
label_22ff0c:
    if (ctx->pc == 0x22FF0Cu) {
        ctx->pc = 0x22FF10u;
        goto label_22ff10;
    }
    ctx->pc = 0x22FF08u;
    {
        const bool branch_taken_0x22ff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ff08) {
            ctx->pc = 0x23007Cu;
            goto label_23007c;
        }
    }
    ctx->pc = 0x22FF10u;
label_22ff10:
    // 0x22ff10: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x22ff10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_22ff14:
    // 0x22ff14: 0x1202002d  beq         $s0, $v0, . + 4 + (0x2D << 2)
label_22ff18:
    if (ctx->pc == 0x22FF18u) {
        ctx->pc = 0x22FF18u;
            // 0x22ff18: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->pc = 0x22FF1Cu;
        goto label_22ff1c;
    }
    ctx->pc = 0x22FF14u;
    {
        const bool branch_taken_0x22ff14 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FF18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF14u;
            // 0x22ff18: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff14) {
            ctx->pc = 0x22FFCCu;
            goto label_22ffcc;
        }
    }
    ctx->pc = 0x22FF1Cu;
label_22ff1c:
    // 0x22ff1c: 0x5202002c  beql        $s0, $v0, . + 4 + (0x2C << 2)
label_22ff20:
    if (ctx->pc == 0x22FF20u) {
        ctx->pc = 0x22FF20u;
            // 0x22ff20: 0x86220002  lh          $v0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->pc = 0x22FF24u;
        goto label_22ff24;
    }
    ctx->pc = 0x22FF1Cu;
    {
        const bool branch_taken_0x22ff1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ff1c) {
            ctx->pc = 0x22FF20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF1Cu;
            // 0x22ff20: 0x86220002  lh          $v0, 0x2($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FFD0u;
            goto label_22ffd0;
        }
    }
    ctx->pc = 0x22FF24u;
label_22ff24:
    // 0x22ff24: 0x10000055  b           . + 4 + (0x55 << 2)
label_22ff28:
    if (ctx->pc == 0x22FF28u) {
        ctx->pc = 0x22FF2Cu;
        goto label_22ff2c;
    }
    ctx->pc = 0x22FF24u;
    {
        const bool branch_taken_0x22ff24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ff24) {
            ctx->pc = 0x23007Cu;
            goto label_23007c;
        }
    }
    ctx->pc = 0x22FF2Cu;
label_22ff2c:
    // 0x22ff2c: 0x2a021007  slti        $v0, $s0, 0x1007
    ctx->pc = 0x22ff2cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4103) ? 1 : 0);
label_22ff30:
    // 0x22ff30: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_22ff34:
    if (ctx->pc == 0x22FF34u) {
        ctx->pc = 0x22FF34u;
            // 0x22ff34: 0x2a021005  slti        $v0, $s0, 0x1005 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4101) ? 1 : 0);
        ctx->pc = 0x22FF38u;
        goto label_22ff38;
    }
    ctx->pc = 0x22FF30u;
    {
        const bool branch_taken_0x22ff30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF30u;
            // 0x22ff34: 0x2a021005  slti        $v0, $s0, 0x1005 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4101) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff30) {
            ctx->pc = 0x22FF7Cu;
            goto label_22ff7c;
        }
    }
    ctx->pc = 0x22FF38u;
label_22ff38:
    // 0x22ff38: 0x10400035  beqz        $v0, . + 4 + (0x35 << 2)
label_22ff3c:
    if (ctx->pc == 0x22FF3Cu) {
        ctx->pc = 0x22FF3Cu;
            // 0x22ff3c: 0x24021002  addiu       $v0, $zero, 0x1002 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
        ctx->pc = 0x22FF40u;
        goto label_22ff40;
    }
    ctx->pc = 0x22FF38u;
    {
        const bool branch_taken_0x22ff38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF38u;
            // 0x22ff3c: 0x24021002  addiu       $v0, $zero, 0x1002 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff38) {
            ctx->pc = 0x230010u;
            goto label_230010;
        }
    }
    ctx->pc = 0x22FF40u;
label_22ff40:
    // 0x22ff40: 0x1202002d  beq         $s0, $v0, . + 4 + (0x2D << 2)
label_22ff44:
    if (ctx->pc == 0x22FF44u) {
        ctx->pc = 0x22FF44u;
            // 0x22ff44: 0x2a021003  slti        $v0, $s0, 0x1003 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4099) ? 1 : 0);
        ctx->pc = 0x22FF48u;
        goto label_22ff48;
    }
    ctx->pc = 0x22FF40u;
    {
        const bool branch_taken_0x22ff40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF40u;
            // 0x22ff44: 0x2a021003  slti        $v0, $s0, 0x1003 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4099) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff40) {
            ctx->pc = 0x22FFF8u;
            goto label_22fff8;
        }
    }
    ctx->pc = 0x22FF48u;
label_22ff48:
    // 0x22ff48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_22ff4c:
    if (ctx->pc == 0x22FF4Cu) {
        ctx->pc = 0x22FF4Cu;
            // 0x22ff4c: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->pc = 0x22FF50u;
        goto label_22ff50;
    }
    ctx->pc = 0x22FF48u;
    {
        const bool branch_taken_0x22ff48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF48u;
            // 0x22ff4c: 0x24021001  addiu       $v0, $zero, 0x1001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff48) {
            ctx->pc = 0x22FF60u;
            goto label_22ff60;
        }
    }
    ctx->pc = 0x22FF50u;
label_22ff50:
    // 0x22ff50: 0x5202002c  beql        $s0, $v0, . + 4 + (0x2C << 2)
label_22ff54:
    if (ctx->pc == 0x22FF54u) {
        ctx->pc = 0x22FF54u;
            // 0x22ff54: 0x8e230088  lw          $v1, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x22FF58u;
        goto label_22ff58;
    }
    ctx->pc = 0x22FF50u;
    {
        const bool branch_taken_0x22ff50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ff50) {
            ctx->pc = 0x22FF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF50u;
            // 0x22ff54: 0x8e230088  lw          $v1, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230004u;
            goto label_230004;
        }
    }
    ctx->pc = 0x22FF58u;
label_22ff58:
    // 0x22ff58: 0x10000048  b           . + 4 + (0x48 << 2)
label_22ff5c:
    if (ctx->pc == 0x22FF5Cu) {
        ctx->pc = 0x22FF60u;
        goto label_22ff60;
    }
    ctx->pc = 0x22FF58u;
    {
        const bool branch_taken_0x22ff58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ff58) {
            ctx->pc = 0x23007Cu;
            goto label_23007c;
        }
    }
    ctx->pc = 0x22FF60u;
label_22ff60:
    // 0x22ff60: 0x24021003  addiu       $v0, $zero, 0x1003
    ctx->pc = 0x22ff60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
label_22ff64:
    // 0x22ff64: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
label_22ff68:
    if (ctx->pc == 0x22FF68u) {
        ctx->pc = 0x22FF68u;
            // 0x22ff68: 0x24021004  addiu       $v0, $zero, 0x1004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
        ctx->pc = 0x22FF6Cu;
        goto label_22ff6c;
    }
    ctx->pc = 0x22FF64u;
    {
        const bool branch_taken_0x22ff64 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FF68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF64u;
            // 0x22ff68: 0x24021004  addiu       $v0, $zero, 0x1004 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff64) {
            ctx->pc = 0x230000u;
            goto label_230000;
        }
    }
    ctx->pc = 0x22FF6Cu;
label_22ff6c:
    // 0x22ff6c: 0x52020025  beql        $s0, $v0, . + 4 + (0x25 << 2)
label_22ff70:
    if (ctx->pc == 0x22FF70u) {
        ctx->pc = 0x22FF70u;
            // 0x22ff70: 0x8e230068  lw          $v1, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->pc = 0x22FF74u;
        goto label_22ff74;
    }
    ctx->pc = 0x22FF6Cu;
    {
        const bool branch_taken_0x22ff6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ff6c) {
            ctx->pc = 0x22FF70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF6Cu;
            // 0x22ff70: 0x8e230068  lw          $v1, 0x68($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230004u;
            goto label_230004;
        }
    }
    ctx->pc = 0x22FF74u;
label_22ff74:
    // 0x22ff74: 0x10000041  b           . + 4 + (0x41 << 2)
label_22ff78:
    if (ctx->pc == 0x22FF78u) {
        ctx->pc = 0x22FF7Cu;
        goto label_22ff7c;
    }
    ctx->pc = 0x22FF74u;
    {
        const bool branch_taken_0x22ff74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ff74) {
            ctx->pc = 0x23007Cu;
            goto label_23007c;
        }
    }
    ctx->pc = 0x22FF7Cu;
label_22ff7c:
    // 0x22ff7c: 0x24021008  addiu       $v0, $zero, 0x1008
    ctx->pc = 0x22ff7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4104));
label_22ff80:
    // 0x22ff80: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
label_22ff84:
    if (ctx->pc == 0x22FF84u) {
        ctx->pc = 0x22FF84u;
            // 0x22ff84: 0x2a021008  slti        $v0, $s0, 0x1008 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4104) ? 1 : 0);
        ctx->pc = 0x22FF88u;
        goto label_22ff88;
    }
    ctx->pc = 0x22FF80u;
    {
        const bool branch_taken_0x22ff80 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x22FF84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF80u;
            // 0x22ff84: 0x2a021008  slti        $v0, $s0, 0x1008 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4104) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ff80) {
            ctx->pc = 0x22FFE0u;
            goto label_22ffe0;
        }
    }
    ctx->pc = 0x22FF88u;
label_22ff88:
    // 0x22ff88: 0x54400017  bnel        $v0, $zero, . + 4 + (0x17 << 2)
label_22ff8c:
    if (ctx->pc == 0x22FF8Cu) {
        ctx->pc = 0x22FF8Cu;
            // 0x22ff8c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x22FF90u;
        goto label_22ff90;
    }
    ctx->pc = 0x22FF88u;
    {
        const bool branch_taken_0x22ff88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ff88) {
            ctx->pc = 0x22FF8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF88u;
            // 0x22ff8c: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x22FFE8u;
            goto label_22ffe8;
        }
    }
    ctx->pc = 0x22FF90u;
label_22ff90:
    // 0x22ff90: 0x24021009  addiu       $v0, $zero, 0x1009
    ctx->pc = 0x22ff90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4105));
label_22ff94:
    // 0x22ff94: 0x52020035  beql        $s0, $v0, . + 4 + (0x35 << 2)
label_22ff98:
    if (ctx->pc == 0x22FF98u) {
        ctx->pc = 0x22FF98u;
            // 0x22ff98: 0x96220006  lhu         $v0, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->pc = 0x22FF9Cu;
        goto label_22ff9c;
    }
    ctx->pc = 0x22FF94u;
    {
        const bool branch_taken_0x22ff94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x22ff94) {
            ctx->pc = 0x22FF98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x22FF94u;
            // 0x22ff98: 0x96220006  lhu         $v0, 0x6($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23006Cu;
            goto label_23006c;
        }
    }
    ctx->pc = 0x22FF9Cu;
label_22ff9c:
    // 0x22ff9c: 0x10000037  b           . + 4 + (0x37 << 2)
label_22ffa0:
    if (ctx->pc == 0x22FFA0u) {
        ctx->pc = 0x22FFA4u;
        goto label_22ffa4;
    }
    ctx->pc = 0x22FF9Cu;
    {
        const bool branch_taken_0x22ff9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ff9c) {
            ctx->pc = 0x23007Cu;
            goto label_23007c;
        }
    }
    ctx->pc = 0x22FFA4u;
label_22ffa4:
    // 0x22ffa4: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x22ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_22ffa8:
    // 0x22ffa8: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x22ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_22ffac:
    // 0x22ffac: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x22ffacu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
label_22ffb0:
    // 0x22ffb0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x22ffb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_22ffb4:
    // 0x22ffb4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x22ffb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_22ffb8:
    // 0x22ffb8: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x22ffb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_22ffbc:
    // 0x22ffbc: 0x86230004  lh          $v1, 0x4($s1)
    ctx->pc = 0x22ffbcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
label_22ffc0:
    // 0x22ffc0: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x22ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_22ffc4:
    // 0x22ffc4: 0x10000031  b           . + 4 + (0x31 << 2)
label_22ffc8:
    if (ctx->pc == 0x22FFC8u) {
        ctx->pc = 0x22FFC8u;
            // 0x22ffc8: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x22FFCCu;
        goto label_22ffcc;
    }
    ctx->pc = 0x22FFC4u;
    {
        const bool branch_taken_0x22ffc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFC4u;
            // 0x22ffc8: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffc4) {
            ctx->pc = 0x23008Cu;
            goto label_23008c;
        }
    }
    ctx->pc = 0x22FFCCu;
label_22ffcc:
    // 0x22ffcc: 0x86220002  lh          $v0, 0x2($s1)
    ctx->pc = 0x22ffccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_22ffd0:
    // 0x22ffd0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x22ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_22ffd4:
    // 0x22ffd4: 0x501024  and         $v0, $v0, $s0
    ctx->pc = 0x22ffd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 16));
label_22ffd8:
    // 0x22ffd8: 0x1000002c  b           . + 4 + (0x2C << 2)
label_22ffdc:
    if (ctx->pc == 0x22FFDCu) {
        ctx->pc = 0x22FFDCu;
            // 0x22ffdc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x22FFE0u;
        goto label_22ffe0;
    }
    ctx->pc = 0x22FFD8u;
    {
        const bool branch_taken_0x22ffd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFD8u;
            // 0x22ffdc: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffd8) {
            ctx->pc = 0x23008Cu;
            goto label_23008c;
        }
    }
    ctx->pc = 0x22FFE0u;
label_22ffe0:
    // 0x22ffe0: 0x10000008  b           . + 4 + (0x8 << 2)
label_22ffe4:
    if (ctx->pc == 0x22FFE4u) {
        ctx->pc = 0x22FFE4u;
            // 0x22ffe4: 0x86230000  lh          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x22FFE8u;
        goto label_22ffe8;
    }
    ctx->pc = 0x22FFE0u;
    {
        const bool branch_taken_0x22ffe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFE0u;
            // 0x22ffe4: 0x86230000  lh          $v1, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ffe0) {
            ctx->pc = 0x230004u;
            goto label_230004;
        }
    }
    ctx->pc = 0x22FFE8u;
label_22ffe8:
    // 0x22ffe8: 0x96220038  lhu         $v0, 0x38($s1)
    ctx->pc = 0x22ffe8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 56)));
label_22ffec:
    // 0x22ffec: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x22ffecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_22fff0:
    // 0x22fff0: 0x10000026  b           . + 4 + (0x26 << 2)
label_22fff4:
    if (ctx->pc == 0x22FFF4u) {
        ctx->pc = 0x22FFF4u;
            // 0x22fff4: 0xa6200038  sh          $zero, 0x38($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x22FFF8u;
        goto label_22fff8;
    }
    ctx->pc = 0x22FFF0u;
    {
        const bool branch_taken_0x22fff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFF0u;
            // 0x22fff4: 0xa6200038  sh          $zero, 0x38($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 56), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fff0) {
            ctx->pc = 0x23008Cu;
            goto label_23008c;
        }
    }
    ctx->pc = 0x22FFF8u;
label_22fff8:
    // 0x22fff8: 0x10000002  b           . + 4 + (0x2 << 2)
label_22fffc:
    if (ctx->pc == 0x22FFFCu) {
        ctx->pc = 0x22FFFCu;
            // 0x22fffc: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->pc = 0x230000u;
        goto label_230000;
    }
    ctx->pc = 0x22FFF8u;
    {
        const bool branch_taken_0x22fff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22FFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x22FFF8u;
            // 0x22fffc: 0x8e230050  lw          $v1, 0x50($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22fff8) {
            ctx->pc = 0x230004u;
            goto label_230004;
        }
    }
    ctx->pc = 0x230000u;
label_230000:
    // 0x230000: 0x8e2300a0  lw          $v1, 0xA0($s1)
    ctx->pc = 0x230000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_230004:
    // 0x230004: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x230004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_230008:
    // 0x230008: 0x10000020  b           . + 4 + (0x20 << 2)
label_23000c:
    if (ctx->pc == 0x23000Cu) {
        ctx->pc = 0x23000Cu;
            // 0x23000c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x230010u;
        goto label_230010;
    }
    ctx->pc = 0x230008u;
    {
        const bool branch_taken_0x230008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23000Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230008u;
            // 0x23000c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230008) {
            ctx->pc = 0x23008Cu;
            goto label_23008c;
        }
    }
    ctx->pc = 0x230010u;
label_230010:
    // 0x230010: 0x24021005  addiu       $v0, $zero, 0x1005
    ctx->pc = 0x230010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4101));
label_230014:
    // 0x230014: 0x56020002  bnel        $s0, $v0, . + 4 + (0x2 << 2)
label_230018:
    if (ctx->pc == 0x230018u) {
        ctx->pc = 0x230018u;
            // 0x230018: 0x8624007a  lh          $a0, 0x7A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->pc = 0x23001Cu;
        goto label_23001c;
    }
    ctx->pc = 0x230014u;
    {
        const bool branch_taken_0x230014 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x230014) {
            ctx->pc = 0x230018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x230014u;
            // 0x230018: 0x8624007a  lh          $a0, 0x7A($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 122)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x230020u;
            goto label_230020;
        }
    }
    ctx->pc = 0x23001Cu;
label_23001c:
    // 0x23001c: 0x862400b2  lh          $a0, 0xB2($s1)
    ctx->pc = 0x23001cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 178)));
label_230020:
    // 0x230020: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x230020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_230024:
    // 0x230024: 0x24032710  addiu       $v1, $zero, 0x2710
    ctx->pc = 0x230024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10000));
label_230028:
    // 0x230028: 0x7082001a  div1        $zero, $a0, $v0
    ctx->pc = 0x230028u;
    { int32_t divisor = GPR_S32(ctx, 2); int32_t dividend = GPR_S32(ctx, 4); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
label_23002c:
    // 0x23002c: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_230030:
    if (ctx->pc == 0x230030u) {
        ctx->pc = 0x230030u;
            // 0x230030: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x230034u;
        goto label_230034;
    }
    ctx->pc = 0x23002Cu;
    {
        const bool branch_taken_0x23002c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23002c) {
            ctx->pc = 0x230030u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23002Cu;
            // 0x230030: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x230034u;
            goto label_230034;
        }
    }
    ctx->pc = 0x230034u;
label_230034:
    // 0x230034: 0x24070064  addiu       $a3, $zero, 0x64
    ctx->pc = 0x230034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_230038:
    // 0x230038: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x230038u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_23003c:
    // 0x23003c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x23003cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_230040:
    // 0x230040: 0x70002010  mfhi1       $a0
    ctx->pc = 0x230040u;
    SET_GPR_U64(ctx, 4, ctx->hi1);
label_230044:
    // 0x230044: 0x70001012  mflo1       $v0
    ctx->pc = 0x230044u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_230048:
    // 0x230048: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x230048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
label_23004c:
    // 0x23004c: 0x830018  mult        $zero, $a0, $v1
    ctx->pc = 0x23004cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_230050:
    // 0x230050: 0x1812  mflo        $v1
    ctx->pc = 0x230050u;
    SET_GPR_U64(ctx, 3, ctx->lo);
label_230054:
    // 0x230054: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x230054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_230058:
    // 0x230058: 0xc08b538  jal         func_22D4E0
label_23005c:
    if (ctx->pc == 0x23005Cu) {
        ctx->pc = 0x23005Cu;
            // 0x23005c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->pc = 0x230060u;
        goto label_230060;
    }
    ctx->pc = 0x230058u;
    SET_GPR_U32(ctx, 31, 0x230060u);
    ctx->pc = 0x23005Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x230058u;
            // 0x23005c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230060u; }
        if (ctx->pc != 0x230060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230060u; }
        if (ctx->pc != 0x230060u) { return; }
    }
    ctx->pc = 0x230060u;
label_230060:
    // 0x230060: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x230060u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_230064:
    // 0x230064: 0x10000009  b           . + 4 + (0x9 << 2)
label_230068:
    if (ctx->pc == 0x230068u) {
        ctx->pc = 0x230068u;
            // 0x230068: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x23006Cu;
        goto label_23006c;
    }
    ctx->pc = 0x230064u;
    {
        const bool branch_taken_0x230064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230064u;
            // 0x230068: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230064) {
            ctx->pc = 0x23008Cu;
            goto label_23008c;
        }
    }
    ctx->pc = 0x23006Cu;
label_23006c:
    // 0x23006c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x23006cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_230070:
    // 0x230070: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x230070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
label_230074:
    // 0x230074: 0x10000005  b           . + 4 + (0x5 << 2)
label_230078:
    if (ctx->pc == 0x230078u) {
        ctx->pc = 0x230078u;
            // 0x230078: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x23007Cu;
        goto label_23007c;
    }
    ctx->pc = 0x230074u;
    {
        const bool branch_taken_0x230074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230074u;
            // 0x230078: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230074) {
            ctx->pc = 0x23008Cu;
            goto label_23008c;
        }
    }
    ctx->pc = 0x23007Cu;
label_23007c:
    // 0x23007c: 0xc08a996  jal         func_22A658
label_230080:
    if (ctx->pc == 0x230080u) {
        ctx->pc = 0x230080u;
            // 0x230080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x230084u;
        goto label_230084;
    }
    ctx->pc = 0x23007Cu;
    SET_GPR_U32(ctx, 31, 0x230084u);
    ctx->pc = 0x230080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23007Cu;
            // 0x230080: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230084u; }
        if (ctx->pc != 0x230084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x230084u; }
        if (ctx->pc != 0x230084u) { return; }
    }
    ctx->pc = 0x230084u;
label_230084:
    // 0x230084: 0x10000003  b           . + 4 + (0x3 << 2)
label_230088:
    if (ctx->pc == 0x230088u) {
        ctx->pc = 0x230088u;
            // 0x230088: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->pc = 0x23008Cu;
        goto label_23008c;
    }
    ctx->pc = 0x230084u;
    {
        const bool branch_taken_0x230084 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x230084u;
            // 0x230088: 0x2402006d  addiu       $v0, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230084) {
            ctx->pc = 0x230094u;
            goto label_230094;
        }
    }
    ctx->pc = 0x23008Cu;
label_23008c:
    // 0x23008c: 0xae720000  sw          $s2, 0x0($s3)
    ctx->pc = 0x23008cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 18));
label_230090:
    // 0x230090: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x230090u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_230094:
    // 0x230094: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x230094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_230098:
    // 0x230098: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x230098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23009c:
    // 0x23009c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x23009cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2300a0:
    // 0x2300a0: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2300a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2300a4:
    // 0x2300a4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2300a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2300a8:
    // 0x2300a8: 0x3e00008  jr          $ra
label_2300ac:
    if (ctx->pc == 0x2300ACu) {
        ctx->pc = 0x2300ACu;
            // 0x2300ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2300B0u;
        goto label_fallthrough_0x2300a8;
    }
    ctx->pc = 0x2300A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2300ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2300A8u;
            // 0x2300ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2300a8:
    ctx->pc = 0x2300B0u;
    ctx->pc = 0x2300b0u;
}
