#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001BCF70
// Address: 0x1bcf70 - 0x1bd0f0
void sub_001BCF70_0x1bcf70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BCF70_0x1bcf70");
#endif

    switch (ctx->pc) {
        case 0x1bcf70u: goto label_1bcf70;
        case 0x1bcf74u: goto label_1bcf74;
        case 0x1bcf78u: goto label_1bcf78;
        case 0x1bcf7cu: goto label_1bcf7c;
        case 0x1bcf80u: goto label_1bcf80;
        case 0x1bcf84u: goto label_1bcf84;
        case 0x1bcf88u: goto label_1bcf88;
        case 0x1bcf8cu: goto label_1bcf8c;
        case 0x1bcf90u: goto label_1bcf90;
        case 0x1bcf94u: goto label_1bcf94;
        case 0x1bcf98u: goto label_1bcf98;
        case 0x1bcf9cu: goto label_1bcf9c;
        case 0x1bcfa0u: goto label_1bcfa0;
        case 0x1bcfa4u: goto label_1bcfa4;
        case 0x1bcfa8u: goto label_1bcfa8;
        case 0x1bcfacu: goto label_1bcfac;
        case 0x1bcfb0u: goto label_1bcfb0;
        case 0x1bcfb4u: goto label_1bcfb4;
        case 0x1bcfb8u: goto label_1bcfb8;
        case 0x1bcfbcu: goto label_1bcfbc;
        case 0x1bcfc0u: goto label_1bcfc0;
        case 0x1bcfc4u: goto label_1bcfc4;
        case 0x1bcfc8u: goto label_1bcfc8;
        case 0x1bcfccu: goto label_1bcfcc;
        case 0x1bcfd0u: goto label_1bcfd0;
        case 0x1bcfd4u: goto label_1bcfd4;
        case 0x1bcfd8u: goto label_1bcfd8;
        case 0x1bcfdcu: goto label_1bcfdc;
        case 0x1bcfe0u: goto label_1bcfe0;
        case 0x1bcfe4u: goto label_1bcfe4;
        case 0x1bcfe8u: goto label_1bcfe8;
        case 0x1bcfecu: goto label_1bcfec;
        case 0x1bcff0u: goto label_1bcff0;
        case 0x1bcff4u: goto label_1bcff4;
        case 0x1bcff8u: goto label_1bcff8;
        case 0x1bcffcu: goto label_1bcffc;
        case 0x1bd000u: goto label_1bd000;
        case 0x1bd004u: goto label_1bd004;
        case 0x1bd008u: goto label_1bd008;
        case 0x1bd00cu: goto label_1bd00c;
        case 0x1bd010u: goto label_1bd010;
        case 0x1bd014u: goto label_1bd014;
        case 0x1bd018u: goto label_1bd018;
        case 0x1bd01cu: goto label_1bd01c;
        case 0x1bd020u: goto label_1bd020;
        case 0x1bd024u: goto label_1bd024;
        case 0x1bd028u: goto label_1bd028;
        case 0x1bd02cu: goto label_1bd02c;
        case 0x1bd030u: goto label_1bd030;
        case 0x1bd034u: goto label_1bd034;
        case 0x1bd038u: goto label_1bd038;
        case 0x1bd03cu: goto label_1bd03c;
        case 0x1bd040u: goto label_1bd040;
        case 0x1bd044u: goto label_1bd044;
        case 0x1bd048u: goto label_1bd048;
        case 0x1bd04cu: goto label_1bd04c;
        case 0x1bd050u: goto label_1bd050;
        case 0x1bd054u: goto label_1bd054;
        case 0x1bd058u: goto label_1bd058;
        case 0x1bd05cu: goto label_1bd05c;
        case 0x1bd060u: goto label_1bd060;
        case 0x1bd064u: goto label_1bd064;
        case 0x1bd068u: goto label_1bd068;
        case 0x1bd06cu: goto label_1bd06c;
        case 0x1bd070u: goto label_1bd070;
        case 0x1bd074u: goto label_1bd074;
        case 0x1bd078u: goto label_1bd078;
        case 0x1bd07cu: goto label_1bd07c;
        case 0x1bd080u: goto label_1bd080;
        case 0x1bd084u: goto label_1bd084;
        case 0x1bd088u: goto label_1bd088;
        case 0x1bd08cu: goto label_1bd08c;
        case 0x1bd090u: goto label_1bd090;
        case 0x1bd094u: goto label_1bd094;
        case 0x1bd098u: goto label_1bd098;
        case 0x1bd09cu: goto label_1bd09c;
        case 0x1bd0a0u: goto label_1bd0a0;
        case 0x1bd0a4u: goto label_1bd0a4;
        case 0x1bd0a8u: goto label_1bd0a8;
        case 0x1bd0acu: goto label_1bd0ac;
        case 0x1bd0b0u: goto label_1bd0b0;
        case 0x1bd0b4u: goto label_1bd0b4;
        case 0x1bd0b8u: goto label_1bd0b8;
        case 0x1bd0bcu: goto label_1bd0bc;
        case 0x1bd0c0u: goto label_1bd0c0;
        case 0x1bd0c4u: goto label_1bd0c4;
        case 0x1bd0c8u: goto label_1bd0c8;
        case 0x1bd0ccu: goto label_1bd0cc;
        case 0x1bd0d0u: goto label_1bd0d0;
        case 0x1bd0d4u: goto label_1bd0d4;
        case 0x1bd0d8u: goto label_1bd0d8;
        case 0x1bd0dcu: goto label_1bd0dc;
        case 0x1bd0e0u: goto label_1bd0e0;
        case 0x1bd0e4u: goto label_1bd0e4;
        case 0x1bd0e8u: goto label_1bd0e8;
        case 0x1bd0ecu: goto label_1bd0ec;
        default: break;
    }

    ctx->pc = 0x1bcf70u;

label_1bcf70:
    // 0x1bcf70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1bcf70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1bcf74:
    // 0x1bcf74: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1bcf74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1bcf78:
    // 0x1bcf78: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1bcf78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1bcf7c:
    // 0x1bcf7c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1bcf7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bcf80:
    // 0x1bcf80: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1bcf80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1bcf84:
    // 0x1bcf84: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1bcf84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1bcf88:
    // 0x1bcf88: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1bcf88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1bcf8c:
    // 0x1bcf8c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1bcf8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1bcf90:
    // 0x1bcf90: 0x8e32000c  lw          $s2, 0xC($s1)
    ctx->pc = 0x1bcf90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1bcf94:
    // 0x1bcf94: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x1bcf94u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1bcf98:
    // 0x1bcf98: 0xc06d2f8  jal         func_1B4BE0
label_1bcf9c:
    if (ctx->pc == 0x1BCF9Cu) {
        ctx->pc = 0x1BCF9Cu;
            // 0x1bcf9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BCFA0u;
        goto label_1bcfa0;
    }
    ctx->pc = 0x1BCF98u;
    SET_GPR_U32(ctx, 31, 0x1BCFA0u);
    ctx->pc = 0x1BCF9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCF98u;
            // 0x1bcf9c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BE0u;
    if (runtime->hasFunction(0x1B4BE0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4BE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFA0u; }
        if (ctx->pc != 0x1BCFA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4BE0_0x1b4be0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFA0u; }
        if (ctx->pc != 0x1BCFA0u) { return; }
    }
    ctx->pc = 0x1BCFA0u;
label_1bcfa0:
    // 0x1bcfa0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bcfa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bcfa4:
    // 0x1bcfa4: 0xc06d2fe  jal         func_1B4BF8
label_1bcfa8:
    if (ctx->pc == 0x1BCFA8u) {
        ctx->pc = 0x1BCFA8u;
            // 0x1bcfa8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BCFACu;
        goto label_1bcfac;
    }
    ctx->pc = 0x1BCFA4u;
    SET_GPR_U32(ctx, 31, 0x1BCFACu);
    ctx->pc = 0x1BCFA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFA4u;
            // 0x1bcfa8: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BF8u;
    if (runtime->hasFunction(0x1B4BF8u)) {
        auto targetFn = runtime->lookupFunction(0x1B4BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFACu; }
        if (ctx->pc != 0x1BCFACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4BF8_0x1b4bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFACu; }
        if (ctx->pc != 0x1BCFACu) { return; }
    }
    ctx->pc = 0x1BCFACu;
label_1bcfac:
    // 0x1bcfac: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x1bcfacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bcfb0:
    // 0x1bcfb0: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1bcfb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1bcfb4:
    // 0x1bcfb4: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x1bcfb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_1bcfb8:
    // 0x1bcfb8: 0x28432001  slti        $v1, $v0, 0x2001
    ctx->pc = 0x1bcfb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)8193) ? 1 : 0);
label_1bcfbc:
    // 0x1bcfbc: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x1bcfbcu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_1bcfc0:
    // 0x1bcfc0: 0x202802a  slt         $s0, $s0, $v0
    ctx->pc = 0x1bcfc0u;
    SET_GPR_U64(ctx, 16, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1bcfc4:
    // 0x1bcfc4: 0x5200000c  beql        $s0, $zero, . + 4 + (0xC << 2)
label_1bcfc8:
    if (ctx->pc == 0x1BCFC8u) {
        ctx->pc = 0x1BCFC8u;
            // 0x1bcfc8: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x1BCFCCu;
        goto label_1bcfcc;
    }
    ctx->pc = 0x1BCFC4u;
    {
        const bool branch_taken_0x1bcfc4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfc4) {
            ctx->pc = 0x1BCFC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFC4u;
            // 0x1bcfc8: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCFF8u;
            goto label_1bcff8;
        }
    }
    ctx->pc = 0x1BCFCCu;
label_1bcfcc:
    // 0x1bcfcc: 0xc06d8a8  jal         func_1B62A0
label_1bcfd0:
    if (ctx->pc == 0x1BCFD0u) {
        ctx->pc = 0x1BCFD0u;
            // 0x1bcfd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BCFD4u;
        goto label_1bcfd4;
    }
    ctx->pc = 0x1BCFCCu;
    SET_GPR_U32(ctx, 31, 0x1BCFD4u);
    ctx->pc = 0x1BCFD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFCCu;
            // 0x1bcfd0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B62A0u;
    if (runtime->hasFunction(0x1B62A0u)) {
        auto targetFn = runtime->lookupFunction(0x1B62A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFD4u; }
        if (ctx->pc != 0x1BCFD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B62A0_0x1b62a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFD4u; }
        if (ctx->pc != 0x1BCFD4u) { return; }
    }
    ctx->pc = 0x1BCFD4u;
label_1bcfd4:
    // 0x1bcfd4: 0x53102a  slt         $v0, $v0, $s3
    ctx->pc = 0x1bcfd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_1bcfd8:
    // 0x1bcfd8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1bcfdc:
    if (ctx->pc == 0x1BCFDCu) {
        ctx->pc = 0x1BCFDCu;
            // 0x1bcfdc: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->pc = 0x1BCFE0u;
        goto label_1bcfe0;
    }
    ctx->pc = 0x1BCFD8u;
    {
        const bool branch_taken_0x1bcfd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bcfd8) {
            ctx->pc = 0x1BCFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFD8u;
            // 0x1bcfdc: 0x82220070  lb          $v0, 0x70($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BCFF8u;
            goto label_1bcff8;
        }
    }
    ctx->pc = 0x1BCFE0u;
label_1bcfe0:
    // 0x1bcfe0: 0xc06d446  jal         func_1B5118
label_1bcfe4:
    if (ctx->pc == 0x1BCFE4u) {
        ctx->pc = 0x1BCFE4u;
            // 0x1bcfe4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1BCFE8u;
        goto label_1bcfe8;
    }
    ctx->pc = 0x1BCFE0u;
    SET_GPR_U32(ctx, 31, 0x1BCFE8u);
    ctx->pc = 0x1BCFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFE0u;
            // 0x1bcfe4: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5118u;
    if (runtime->hasFunction(0x1B5118u)) {
        auto targetFn = runtime->lookupFunction(0x1B5118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFE8u; }
        if (ctx->pc != 0x1BCFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5118_0x1b5118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BCFE8u; }
        if (ctx->pc != 0x1BCFE8u) { return; }
    }
    ctx->pc = 0x1BCFE8u;
label_1bcfe8:
    // 0x1bcfe8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bcfe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bcfec:
    // 0x1bcfec: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
label_1bcff0:
    if (ctx->pc == 0x1BCFF0u) {
        ctx->pc = 0x1BCFF4u;
        goto label_1bcff4;
    }
    ctx->pc = 0x1BCFECu;
    {
        const bool branch_taken_0x1bcfec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1bcfec) {
            ctx->pc = 0x1BD03Cu;
            goto label_1bd03c;
        }
    }
    ctx->pc = 0x1BCFF4u;
label_1bcff4:
    // 0x1bcff4: 0x82220070  lb          $v0, 0x70($s1)
    ctx->pc = 0x1bcff4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 112)));
label_1bcff8:
    // 0x1bcff8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_1bcffc:
    if (ctx->pc == 0x1BCFFCu) {
        ctx->pc = 0x1BCFFCu;
            // 0x1bcffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BD000u;
        goto label_1bd000;
    }
    ctx->pc = 0x1BCFF8u;
    {
        const bool branch_taken_0x1bcff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BCFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BCFF8u;
            // 0x1bcffc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bcff8) {
            ctx->pc = 0x1BD038u;
            goto label_1bd038;
        }
    }
    ctx->pc = 0x1BD000u;
label_1bd000:
    // 0x1bd000: 0x82220072  lb          $v0, 0x72($s1)
    ctx->pc = 0x1bd000u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 114)));
label_1bd004:
    // 0x1bd004: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1bd008:
    if (ctx->pc == 0x1BD008u) {
        ctx->pc = 0x1BD008u;
            // 0x1bd008: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x1BD00Cu;
        goto label_1bd00c;
    }
    ctx->pc = 0x1BD004u;
    {
        const bool branch_taken_0x1bd004 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd004) {
            ctx->pc = 0x1BD008u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD004u;
            // 0x1bd008: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD030u;
            goto label_1bd030;
        }
    }
    ctx->pc = 0x1BD00Cu;
label_1bd00c:
    // 0x1bd00c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bd00cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bd010:
    // 0x1bd010: 0xc06d2ec  jal         func_1B4BB0
label_1bd014:
    if (ctx->pc == 0x1BD014u) {
        ctx->pc = 0x1BD014u;
            // 0x1bd014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1BD018u;
        goto label_1bd018;
    }
    ctx->pc = 0x1BD010u;
    SET_GPR_U32(ctx, 31, 0x1BD018u);
    ctx->pc = 0x1BD014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD010u;
            // 0x1bd014: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4BB0u;
    if (runtime->hasFunction(0x1B4BB0u)) {
        auto targetFn = runtime->lookupFunction(0x1B4BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD018u; }
        if (ctx->pc != 0x1BD018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4BB0_0x1b4bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD018u; }
        if (ctx->pc != 0x1BD018u) { return; }
    }
    ctx->pc = 0x1BD018u;
label_1bd018:
    // 0x1bd018: 0xae20009c  sw          $zero, 0x9C($s1)
    ctx->pc = 0x1bd018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 156), GPR_U32(ctx, 0));
label_1bd01c:
    // 0x1bd01c: 0x3c020037  lui         $v0, 0x37
    ctx->pc = 0x1bd01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)55 << 16));
label_1bd020:
    // 0x1bd020: 0x24422360  addiu       $v0, $v0, 0x2360
    ctx->pc = 0x1bd020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9056));
label_1bd024:
    // 0x1bd024: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x1bd024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1bd028:
    // 0x1bd028: 0xae2300a0  sw          $v1, 0xA0($s1)
    ctx->pc = 0x1bd028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 160), GPR_U32(ctx, 3));
label_1bd02c:
    // 0x1bd02c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1bd02cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bd030:
    // 0x1bd030: 0xa2220001  sb          $v0, 0x1($s1)
    ctx->pc = 0x1bd030u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 2));
label_1bd034:
    // 0x1bd034: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1bd034u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd038:
    // 0x1bd038: 0xa2220071  sb          $v0, 0x71($s1)
    ctx->pc = 0x1bd038u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 113), (uint8_t)GPR_U32(ctx, 2));
label_1bd03c:
    // 0x1bd03c: 0xc06d446  jal         func_1B5118
label_1bd040:
    if (ctx->pc == 0x1BD040u) {
        ctx->pc = 0x1BD040u;
            // 0x1bd040: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x1BD044u;
        goto label_1bd044;
    }
    ctx->pc = 0x1BD03Cu;
    SET_GPR_U32(ctx, 31, 0x1BD044u);
    ctx->pc = 0x1BD040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD03Cu;
            // 0x1bd040: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B5118u;
    if (runtime->hasFunction(0x1B5118u)) {
        auto targetFn = runtime->lookupFunction(0x1B5118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD044u; }
        if (ctx->pc != 0x1BD044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B5118_0x1b5118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD044u; }
        if (ctx->pc != 0x1BD044u) { return; }
    }
    ctx->pc = 0x1BD044u;
label_1bd044:
    // 0x1bd044: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1bd044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1bd048:
    // 0x1bd048: 0x14430021  bne         $v0, $v1, . + 4 + (0x21 << 2)
label_1bd04c:
    if (ctx->pc == 0x1BD04Cu) {
        ctx->pc = 0x1BD04Cu;
            // 0x1bd04c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1BD050u;
        goto label_1bd050;
    }
    ctx->pc = 0x1BD048u;
    {
        const bool branch_taken_0x1bd048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1BD04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD048u;
            // 0x1bd04c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd048) {
            ctx->pc = 0x1BD0D0u;
            goto label_1bd0d0;
        }
    }
    ctx->pc = 0x1BD050u;
label_1bd050:
    // 0x1bd050: 0xc06e6f4  jal         func_1B9BD0
label_1bd054:
    if (ctx->pc == 0x1BD054u) {
        ctx->pc = 0x1BD054u;
            // 0x1bd054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD058u;
        goto label_1bd058;
    }
    ctx->pc = 0x1BD050u;
    SET_GPR_U32(ctx, 31, 0x1BD058u);
    ctx->pc = 0x1BD054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD050u;
            // 0x1bd054: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B9BD0u;
    if (runtime->hasFunction(0x1B9BD0u)) {
        auto targetFn = runtime->lookupFunction(0x1B9BD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD058u; }
        if (ctx->pc != 0x1BD058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B9BD0_0x1b9bd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD058u; }
        if (ctx->pc != 0x1BD058u) { return; }
    }
    ctx->pc = 0x1BD058u;
label_1bd058:
    // 0x1bd058: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bd058u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bd05c:
    // 0x1bd05c: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x1bd05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_1bd060:
    // 0x1bd060: 0x431018  mult        $v0, $v0, $v1
    ctx->pc = 0x1bd060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1bd064:
    // 0x1bd064: 0x18600019  blez        $v1, . + 4 + (0x19 << 2)
label_1bd068:
    if (ctx->pc == 0x1BD068u) {
        ctx->pc = 0x1BD068u;
            // 0x1bd068: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->pc = 0x1BD06Cu;
        goto label_1bd06c;
    }
    ctx->pc = 0x1BD064u;
    {
        const bool branch_taken_0x1bd064 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1BD068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD064u;
            // 0x1bd068: 0x29840  sll         $s3, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bd064) {
            ctx->pc = 0x1BD0CCu;
            goto label_1bd0cc;
        }
    }
    ctx->pc = 0x1BD06Cu;
label_1bd06c:
    // 0x1bd06c: 0x26320018  addiu       $s2, $s1, 0x18
    ctx->pc = 0x1bd06cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
label_1bd070:
    // 0x1bd070: 0x60882d  daddu       $s1, $v1, $zero
    ctx->pc = 0x1bd070u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bd074:
    // 0x1bd074: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x1bd074u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1bd078:
    // 0x1bd078: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1bd078u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_1bd07c:
    // 0x1bd07c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1bd07cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bd080:
    // 0x1bd080: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd080u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd084:
    // 0x1bd084: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bd088:
    // 0x1bd088: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bd08c:
    // 0x1bd08c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1bd08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1bd090:
    // 0x1bd090: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1bd090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1bd094:
    // 0x1bd094: 0x40f809  jalr        $v0
label_1bd098:
    if (ctx->pc == 0x1BD098u) {
        ctx->pc = 0x1BD098u;
            // 0x1bd098: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1BD09Cu;
        goto label_1bd09c;
    }
    ctx->pc = 0x1BD094u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD09Cu);
        ctx->pc = 0x1BD098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD094u;
            // 0x1bd098: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD09Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD09Cu; }
            if (ctx->pc != 0x1BD09Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1BD09Cu;
label_1bd09c:
    // 0x1bd09c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1bd09cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bd0a0:
    // 0x1bd0a0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1bd0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1bd0a4:
    // 0x1bd0a4: 0xc049cb6  jal         func_1272D8
label_1bd0a8:
    if (ctx->pc == 0x1BD0A8u) {
        ctx->pc = 0x1BD0A8u;
            // 0x1bd0a8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x1BD0ACu;
        goto label_1bd0ac;
    }
    ctx->pc = 0x1BD0A4u;
    SET_GPR_U32(ctx, 31, 0x1BD0ACu);
    ctx->pc = 0x1BD0A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0A4u;
            // 0x1bd0a8: 0x8fa60004  lw          $a2, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0ACu; }
        if (ctx->pc != 0x1BD0ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0ACu; }
        if (ctx->pc != 0x1BD0ACu) { return; }
    }
    ctx->pc = 0x1BD0ACu;
label_1bd0ac:
    // 0x1bd0ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1bd0acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bd0b0:
    // 0x1bd0b0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1bd0b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bd0b4:
    // 0x1bd0b4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1bd0b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1bd0b8:
    // 0x1bd0b8: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1bd0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1bd0bc:
    // 0x1bd0bc: 0x40f809  jalr        $v0
label_1bd0c0:
    if (ctx->pc == 0x1BD0C0u) {
        ctx->pc = 0x1BD0C0u;
            // 0x1bd0c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1BD0C4u;
        goto label_1bd0c4;
    }
    ctx->pc = 0x1BD0BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BD0C4u);
        ctx->pc = 0x1BD0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0BCu;
            // 0x1bd0c0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1BD0C4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1BD0C4u; }
            if (ctx->pc != 0x1BD0C4u) { return; }
        }
        }
    }
    ctx->pc = 0x1BD0C4u;
label_1bd0c4:
    // 0x1bd0c4: 0x5620ffec  bnel        $s1, $zero, . + 4 + (-0x14 << 2)
label_1bd0c8:
    if (ctx->pc == 0x1BD0C8u) {
        ctx->pc = 0x1BD0C8u;
            // 0x1bd0c8: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x1BD0CCu;
        goto label_1bd0cc;
    }
    ctx->pc = 0x1BD0C4u;
    {
        const bool branch_taken_0x1bd0c4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bd0c4) {
            ctx->pc = 0x1BD0C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0C4u;
            // 0x1bd0c8: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1BD078u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bd078;
        }
    }
    ctx->pc = 0x1BD0CCu;
label_1bd0cc:
    // 0x1bd0cc: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1bd0ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1bd0d0:
    // 0x1bd0d0: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1bd0d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1bd0d4:
    // 0x1bd0d4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1bd0d4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bd0d8:
    // 0x1bd0d8: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1bd0d8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bd0dc:
    // 0x1bd0dc: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1bd0dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bd0e0:
    // 0x1bd0e0: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1bd0e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1bd0e4:
    // 0x1bd0e4: 0x3e00008  jr          $ra
label_1bd0e8:
    if (ctx->pc == 0x1BD0E8u) {
        ctx->pc = 0x1BD0E8u;
            // 0x1bd0e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1BD0ECu;
        goto label_1bd0ec;
    }
    ctx->pc = 0x1BD0E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BD0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1BD0E4u;
            // 0x1bd0e8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1BD0ECu;
label_1bd0ec:
    // 0x1bd0ec: 0x0  nop
    ctx->pc = 0x1bd0ecu;
    // NOP
    ctx->pc = 0x1bd0f0u;
}
