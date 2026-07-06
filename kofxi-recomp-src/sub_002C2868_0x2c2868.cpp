#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C2868
// Address: 0x2c2868 - 0x2c2b10
void sub_002C2868_0x2c2868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C2868_0x2c2868");
#endif

    switch (ctx->pc) {
        case 0x2c28bcu: goto label_2c28bc;
        case 0x2c28d0u: goto label_2c28d0;
        case 0x2c28e0u: goto label_2c28e0;
        case 0x2c28f0u: goto label_2c28f0;
        case 0x2c2900u: goto label_2c2900;
        case 0x2c2910u: goto label_2c2910;
        case 0x2c2920u: goto label_2c2920;
        case 0x2c2930u: goto label_2c2930;
        case 0x2c2944u: goto label_2c2944;
        case 0x2c295cu: goto label_2c295c;
        case 0x2c298cu: goto label_2c298c;
        case 0x2c29a0u: goto label_2c29a0;
        case 0x2c29b4u: goto label_2c29b4;
        case 0x2c29dcu: goto label_2c29dc;
        case 0x2c29fcu: goto label_2c29fc;
        case 0x2c2a08u: goto label_2c2a08;
        case 0x2c2a14u: goto label_2c2a14;
        case 0x2c2a20u: goto label_2c2a20;
        case 0x2c2a2cu: goto label_2c2a2c;
        case 0x2c2a38u: goto label_2c2a38;
        case 0x2c2a44u: goto label_2c2a44;
        case 0x2c2a50u: goto label_2c2a50;
        case 0x2c2a64u: goto label_2c2a64;
        case 0x2c2a88u: goto label_2c2a88;
        case 0x2c2ac4u: goto label_2c2ac4;
        case 0x2c2ae0u: goto label_2c2ae0;
        default: break;
    }

    ctx->pc = 0x2c2868u;

    // 0x2c2868: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2c2868u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2c286c: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2c286cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x2c2870: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2c2870u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x2c2874: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c2874u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2878: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2c2878u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2c287c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2c287cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2880: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2c2880u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2c2884: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c2884u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2888: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c2888u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2c288c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2c288cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2890: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2c2890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2c2894: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2c2894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2898: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C2898u;
    {
        const bool branch_taken_0x2c2898 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C289Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2898u;
            // 0x2c289c: 0xffb40050  sd          $s4, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2898) {
            ctx->pc = 0x2C28A8u;
            goto label_2c28a8;
        }
    }
    ctx->pc = 0x2C28A0u;
    // 0x2c28a0: 0x10000092  b           . + 4 + (0x92 << 2)
    ctx->pc = 0x2C28A0u;
    {
        const bool branch_taken_0x2c28a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C28A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C28A0u;
            // 0x2c28a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c28a0) {
            ctx->pc = 0x2C2AECu;
            goto label_2c2aec;
        }
    }
    ctx->pc = 0x2C28A8u;
label_2c28a8:
    // 0x2c28a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c28a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c28ac: 0x5080000a  beql        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2C28ACu;
    {
        const bool branch_taken_0x2c28ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c28ac) {
            ctx->pc = 0x2C28B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C28ACu;
            // 0x2c28b0: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C28D8u;
            goto label_2c28d8;
        }
    }
    ctx->pc = 0x2C28B4u;
    // 0x2c28b4: 0xc0a004a  jal         func_280128
    ctx->pc = 0x2C28B4u;
    SET_GPR_U32(ctx, 31, 0x2C28BCu);
    ctx->pc = 0x2C28B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C28B4u;
            // 0x2c28b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (runtime->hasFunction(0x280128u)) {
        auto targetFn = runtime->lookupFunction(0x280128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C28BCu; }
        if (ctx->pc != 0x2C28BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280128_0x280128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C28BCu; }
        if (ctx->pc != 0x2C28BCu) { return; }
    }
    ctx->pc = 0x2C28BCu;
label_2c28bc:
    // 0x2c28bc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2c28bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28c0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c28c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c28c4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2c28c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28c8: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2C28C8u;
    SET_GPR_U32(ctx, 31, 0x2C28D0u);
    ctx->pc = 0x2C28CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C28C8u;
            // 0x2c28cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (runtime->hasFunction(0x2818E8u)) {
        auto targetFn = runtime->lookupFunction(0x2818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C28D0u; }
        if (ctx->pc != 0x2C28D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002818E8_0x2818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C28D0u; }
        if (ctx->pc != 0x2C28D0u) { return; }
    }
    ctx->pc = 0x2C28D0u;
label_2c28d0:
    // 0x2c28d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c28d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c28d4: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c28d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2c28d8:
    // 0x2c28d8: 0xc0a004a  jal         func_280128
    ctx->pc = 0x2C28D8u;
    SET_GPR_U32(ctx, 31, 0x2C28E0u);
    ctx->pc = 0x2C28DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C28D8u;
            // 0x2c28dc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (runtime->hasFunction(0x280128u)) {
        auto targetFn = runtime->lookupFunction(0x280128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C28E0u; }
        if (ctx->pc != 0x2C28E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280128_0x280128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C28E0u; }
        if (ctx->pc != 0x2C28E0u) { return; }
    }
    ctx->pc = 0x2C28E0u;
label_2c28e0:
    // 0x2c28e0: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c28e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c28e4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c28e4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c28e8: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C28E8u;
    SET_GPR_U32(ctx, 31, 0x2C28F0u);
    ctx->pc = 0x2C28ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C28E8u;
            // 0x2c28ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (runtime->hasFunction(0x2C24F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C28F0u; }
        if (ctx->pc != 0x2C28F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C24F0_0x2c24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C28F0u; }
        if (ctx->pc != 0x2C28F0u) { return; }
    }
    ctx->pc = 0x2C28F0u;
label_2c28f0:
    // 0x2c28f0: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2c28f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c28f4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c28f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c28f8: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x2C28F8u;
    SET_GPR_U32(ctx, 31, 0x2C2900u);
    ctx->pc = 0x2C28FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C28F8u;
            // 0x2c28fc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281FE0u;
    if (runtime->hasFunction(0x281FE0u)) {
        auto targetFn = runtime->lookupFunction(0x281FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2900u; }
        if (ctx->pc != 0x2C2900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FE0_0x281fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2900u; }
        if (ctx->pc != 0x2C2900u) { return; }
    }
    ctx->pc = 0x2C2900u;
label_2c2900:
    // 0x2c2900: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2c2900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c2904: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c2904u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c2908: 0xc0b1444  jal         func_2C5110
    ctx->pc = 0x2C2908u;
    SET_GPR_U32(ctx, 31, 0x2C2910u);
    ctx->pc = 0x2C290Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2908u;
            // 0x2c290c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5110u;
    if (runtime->hasFunction(0x2C5110u)) {
        auto targetFn = runtime->lookupFunction(0x2C5110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2910u; }
        if (ctx->pc != 0x2C2910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5110_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2910u; }
        if (ctx->pc != 0x2C2910u) { return; }
    }
    ctx->pc = 0x2C2910u;
label_2c2910:
    // 0x2c2910: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2c2910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c2914: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c2914u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c2918: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x2C2918u;
    SET_GPR_U32(ctx, 31, 0x2C2920u);
    ctx->pc = 0x2C291Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2918u;
            // 0x2c291c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281FE0u;
    if (runtime->hasFunction(0x281FE0u)) {
        auto targetFn = runtime->lookupFunction(0x281FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2920u; }
        if (ctx->pc != 0x2C2920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FE0_0x281fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2920u; }
        if (ctx->pc != 0x2C2920u) { return; }
    }
    ctx->pc = 0x2C2920u;
label_2c2920:
    // 0x2c2920: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2c2920u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c2924: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c2924u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c2928: 0xc0b11be  jal         func_2C46F8
    ctx->pc = 0x2C2928u;
    SET_GPR_U32(ctx, 31, 0x2C2930u);
    ctx->pc = 0x2C292Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2928u;
            // 0x2c292c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C46F8u;
    if (runtime->hasFunction(0x2C46F8u)) {
        auto targetFn = runtime->lookupFunction(0x2C46F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2930u; }
        if (ctx->pc != 0x2C2930u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C46F8_0x2c46f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2930u; }
        if (ctx->pc != 0x2C2930u) { return; }
    }
    ctx->pc = 0x2C2930u;
label_2c2930:
    // 0x2c2930: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2c2930u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2c2934: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C2934u;
    {
        const bool branch_taken_0x2c2934 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2938u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2934u;
            // 0x2c2938: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2934) {
            ctx->pc = 0x2C2948u;
            goto label_2c2948;
        }
    }
    ctx->pc = 0x2C293Cu;
    // 0x2c293c: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x2C293Cu;
    SET_GPR_U32(ctx, 31, 0x2C2944u);
    ctx->pc = 0x2C2940u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C293Cu;
            // 0x2c2940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (runtime->hasFunction(0x27F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x27F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2944u; }
        if (ctx->pc != 0x2C2944u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F0C8_0x27f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2944u; }
        if (ctx->pc != 0x2C2944u) { return; }
    }
    ctx->pc = 0x2C2944u;
label_2c2944:
    // 0x2c2944: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c2944u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c2948:
    // 0x2c2948: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2c2948u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2c294c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C294Cu;
    {
        const bool branch_taken_0x2c294c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c294c) {
            ctx->pc = 0x2C2950u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C294Cu;
            // 0x2c2950: 0x8e240024  lw          $a0, 0x24($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C2964u;
            goto label_2c2964;
        }
    }
    ctx->pc = 0x2C2954u;
    // 0x2c2954: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x2C2954u;
    SET_GPR_U32(ctx, 31, 0x2C295Cu);
    ctx->pc = 0x2C2958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2954u;
            // 0x2c2958: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (runtime->hasFunction(0x27F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x27F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C295Cu; }
        if (ctx->pc != 0x2C295Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F0C8_0x27f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C295Cu; }
        if (ctx->pc != 0x2C295Cu) { return; }
    }
    ctx->pc = 0x2C295Cu;
label_2c295c:
    // 0x2c295c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c295cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x2c2960: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2c2960u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_2c2964:
    // 0x2c2964: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x2C2964u;
    {
        const bool branch_taken_0x2c2964 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c2964) {
            ctx->pc = 0x2C2968u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2964u;
            // 0x2c2968: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C29A8u;
            goto label_2c29a8;
        }
    }
    ctx->pc = 0x2C296Cu;
    // 0x2c296c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2c296cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c2970: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2C2970u;
    {
        const bool branch_taken_0x2c2970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2970u;
            // 0x2c2974: 0x3c06002c  lui         $a2, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2970) {
            ctx->pc = 0x2C29A4u;
            goto label_2c29a4;
        }
    }
    ctx->pc = 0x2C2978u;
    // 0x2c2978: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c2978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c297c: 0x24c642b8  addiu       $a2, $a2, 0x42B8
    ctx->pc = 0x2c297cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17080));
    // 0x2c2980: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c2980u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c2984: 0xc0a09b8  jal         func_2826E0
    ctx->pc = 0x2C2984u;
    SET_GPR_U32(ctx, 31, 0x2C298Cu);
    ctx->pc = 0x2C2988u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2984u;
            // 0x2c2988: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2826E0u;
    if (runtime->hasFunction(0x2826E0u)) {
        auto targetFn = runtime->lookupFunction(0x2826E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C298Cu; }
        if (ctx->pc != 0x2C298Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002826E0_0x2826e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C298Cu; }
        if (ctx->pc != 0x2C298Cu) { return; }
    }
    ctx->pc = 0x2C298Cu;
label_2c298c:
    // 0x2c298c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2c298cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2990: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c2990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2994: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2c2994u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2998: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2C2998u;
    SET_GPR_U32(ctx, 31, 0x2C29A0u);
    ctx->pc = 0x2C299Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2998u;
            // 0x2c299c: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (runtime->hasFunction(0x2818E8u)) {
        auto targetFn = runtime->lookupFunction(0x2818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29A0u; }
        if (ctx->pc != 0x2C29A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002818E8_0x2818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29A0u; }
        if (ctx->pc != 0x2C29A0u) { return; }
    }
    ctx->pc = 0x2C29A0u;
label_2c29a0:
    // 0x2c29a0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x2c29a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_2c29a4:
    // 0x2c29a4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2c29a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2c29a8:
    // 0x2c29a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2c29a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29ac: 0xc0a063a  jal         func_2818E8
    ctx->pc = 0x2C29ACu;
    SET_GPR_U32(ctx, 31, 0x2C29B4u);
    ctx->pc = 0x2C29B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29ACu;
            // 0x2c29b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2818E8u;
    if (runtime->hasFunction(0x2818E8u)) {
        auto targetFn = runtime->lookupFunction(0x2818E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29B4u; }
        if (ctx->pc != 0x2C29B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002818E8_0x2818e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29B4u; }
        if (ctx->pc != 0x2C29B4u) { return; }
    }
    ctx->pc = 0x2C29B4u;
label_2c29b4:
    // 0x2c29b4: 0x1240004d  beqz        $s2, . + 4 + (0x4D << 2)
    ctx->pc = 0x2C29B4u;
    {
        const bool branch_taken_0x2c29b4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C29B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29B4u;
            // 0x2c29b8: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29b4) {
            ctx->pc = 0x2C2AECu;
            goto label_2c2aec;
        }
    }
    ctx->pc = 0x2C29BCu;
    // 0x2c29bc: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2c29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2c29c0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c29c0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29c4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c29c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29c8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c29c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c29cc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2c29ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x2c29d0: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c29d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c29d4: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C29D4u;
    SET_GPR_U32(ctx, 31, 0x2C29DCu);
    ctx->pc = 0x2C29D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29D4u;
            // 0x2c29d8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (runtime->hasFunction(0x281740u)) {
        auto targetFn = runtime->lookupFunction(0x281740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29DCu; }
        if (ctx->pc != 0x2C29DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281740_0x281740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29DCu; }
        if (ctx->pc != 0x2C29DCu) { return; }
    }
    ctx->pc = 0x2C29DCu;
label_2c29dc:
    // 0x2c29dc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2c29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c29e0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x2C29E0u;
    {
        const bool branch_taken_0x2c29e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C29E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29E0u;
            // 0x2c29e4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c29e0) {
            ctx->pc = 0x2C2A08u;
            goto label_2c2a08;
        }
    }
    ctx->pc = 0x2C29E8u;
    // 0x2c29e8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c29e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c29ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c29f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c29f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c29f4: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C29F4u;
    SET_GPR_U32(ctx, 31, 0x2C29FCu);
    ctx->pc = 0x2C29F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C29F4u;
            // 0x2c29f8: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (runtime->hasFunction(0x281740u)) {
        auto targetFn = runtime->lookupFunction(0x281740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29FCu; }
        if (ctx->pc != 0x2C29FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281740_0x281740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C29FCu; }
        if (ctx->pc != 0x2C29FCu) { return; }
    }
    ctx->pc = 0x2C29FCu;
label_2c29fc:
    // 0x2c29fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2c29fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2c2a00: 0xc0a004a  jal         func_280128
    ctx->pc = 0x2C2A00u;
    SET_GPR_U32(ctx, 31, 0x2C2A08u);
    ctx->pc = 0x2C2A04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A00u;
            // 0x2c2a04: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (runtime->hasFunction(0x280128u)) {
        auto targetFn = runtime->lookupFunction(0x280128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A08u; }
        if (ctx->pc != 0x2C2A08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280128_0x280128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A08u; }
        if (ctx->pc != 0x2C2A08u) { return; }
    }
    ctx->pc = 0x2C2A08u;
label_2c2a08:
    // 0x2c2a08: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2c2a08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2c2a0c: 0xc0a004a  jal         func_280128
    ctx->pc = 0x2C2A0Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A14u);
    ctx->pc = 0x2C2A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A0Cu;
            // 0x2c2a10: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x280128u;
    if (runtime->hasFunction(0x280128u)) {
        auto targetFn = runtime->lookupFunction(0x280128u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A14u; }
        if (ctx->pc != 0x2C2A14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00280128_0x280128(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A14u; }
        if (ctx->pc != 0x2C2A14u) { return; }
    }
    ctx->pc = 0x2C2A14u;
label_2c2a14:
    // 0x2c2a14: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x2c2a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2c2a18: 0xc0b093c  jal         func_2C24F0
    ctx->pc = 0x2C2A18u;
    SET_GPR_U32(ctx, 31, 0x2C2A20u);
    ctx->pc = 0x2C2A1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A18u;
            // 0x2c2a1c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C24F0u;
    if (runtime->hasFunction(0x2C24F0u)) {
        auto targetFn = runtime->lookupFunction(0x2C24F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A20u; }
        if (ctx->pc != 0x2C2A20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C24F0_0x2c24f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A20u; }
        if (ctx->pc != 0x2C2A20u) { return; }
    }
    ctx->pc = 0x2C2A20u;
label_2c2a20:
    // 0x2c2a20: 0x8e24000c  lw          $a0, 0xC($s1)
    ctx->pc = 0x2c2a20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2c2a24: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x2C2A24u;
    SET_GPR_U32(ctx, 31, 0x2C2A2Cu);
    ctx->pc = 0x2C2A28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A24u;
            // 0x2c2a28: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281FE0u;
    if (runtime->hasFunction(0x281FE0u)) {
        auto targetFn = runtime->lookupFunction(0x281FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A2Cu; }
        if (ctx->pc != 0x2C2A2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FE0_0x281fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A2Cu; }
        if (ctx->pc != 0x2C2A2Cu) { return; }
    }
    ctx->pc = 0x2C2A2Cu;
label_2c2a2c:
    // 0x2c2a2c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2c2a2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2c2a30: 0xc0b1444  jal         func_2C5110
    ctx->pc = 0x2C2A30u;
    SET_GPR_U32(ctx, 31, 0x2C2A38u);
    ctx->pc = 0x2C2A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A30u;
            // 0x2c2a34: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C5110u;
    if (runtime->hasFunction(0x2C5110u)) {
        auto targetFn = runtime->lookupFunction(0x2C5110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A38u; }
        if (ctx->pc != 0x2C2A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C5110_0x2c5110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A38u; }
        if (ctx->pc != 0x2C2A38u) { return; }
    }
    ctx->pc = 0x2C2A38u;
label_2c2a38:
    // 0x2c2a38: 0x8e240014  lw          $a0, 0x14($s1)
    ctx->pc = 0x2c2a38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x2c2a3c: 0xc0a07f8  jal         func_281FE0
    ctx->pc = 0x2C2A3Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A44u);
    ctx->pc = 0x2C2A40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A3Cu;
            // 0x2c2a40: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281FE0u;
    if (runtime->hasFunction(0x281FE0u)) {
        auto targetFn = runtime->lookupFunction(0x281FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A44u; }
        if (ctx->pc != 0x2C2A44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281FE0_0x281fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A44u; }
        if (ctx->pc != 0x2C2A44u) { return; }
    }
    ctx->pc = 0x2C2A44u;
label_2c2a44:
    // 0x2c2a44: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x2c2a44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x2c2a48: 0xc0b11be  jal         func_2C46F8
    ctx->pc = 0x2C2A48u;
    SET_GPR_U32(ctx, 31, 0x2C2A50u);
    ctx->pc = 0x2C2A4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A48u;
            // 0x2c2a4c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2C46F8u;
    if (runtime->hasFunction(0x2C46F8u)) {
        auto targetFn = runtime->lookupFunction(0x2C46F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A50u; }
        if (ctx->pc != 0x2C2A50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C46F8_0x2c46f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A50u; }
        if (ctx->pc != 0x2C2A50u) { return; }
    }
    ctx->pc = 0x2C2A50u;
label_2c2a50:
    // 0x2c2a50: 0x8e24001c  lw          $a0, 0x1C($s1)
    ctx->pc = 0x2c2a50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x2c2a54: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2A54u;
    {
        const bool branch_taken_0x2c2a54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A54u;
            // 0x2c2a58: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a54) {
            ctx->pc = 0x2C2A74u;
            goto label_2c2a74;
        }
    }
    ctx->pc = 0x2C2A5Cu;
    // 0x2c2a5c: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x2C2A5Cu;
    SET_GPR_U32(ctx, 31, 0x2C2A64u);
    ctx->pc = 0x2C2A60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A5Cu;
            // 0x2c2a60: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (runtime->hasFunction(0x27F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x27F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A64u; }
        if (ctx->pc != 0x2C2A64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F0C8_0x27f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A64u; }
        if (ctx->pc != 0x2C2A64u) { return; }
    }
    ctx->pc = 0x2C2A64u;
label_2c2a64:
    // 0x2c2a64: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2c2a64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c2a68: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2c2a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2c2a6c: 0x34630081  ori         $v1, $v1, 0x81
    ctx->pc = 0x2c2a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)129);
    // 0x2c2a70: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2c2a70u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2c2a74:
    // 0x2c2a74: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2c2a74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x2c2a78: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2C2A78u;
    {
        const bool branch_taken_0x2c2a78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A78u;
            // 0x2c2a7c: 0x8fb00000  lw          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a78) {
            ctx->pc = 0x2C2A98u;
            goto label_2c2a98;
        }
    }
    ctx->pc = 0x2C2A80u;
    // 0x2c2a80: 0xc09fc32  jal         func_27F0C8
    ctx->pc = 0x2C2A80u;
    SET_GPR_U32(ctx, 31, 0x2C2A88u);
    ctx->pc = 0x2C2A84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A80u;
            // 0x2c2a84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27F0C8u;
    if (runtime->hasFunction(0x27F0C8u)) {
        auto targetFn = runtime->lookupFunction(0x27F0C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A88u; }
        if (ctx->pc != 0x2C2A88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027F0C8_0x27f0c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2A88u; }
        if (ctx->pc != 0x2C2A88u) { return; }
    }
    ctx->pc = 0x2C2A88u;
label_2c2a88:
    // 0x2c2a88: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2c2a88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2c2a8c: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x2c2a8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x2c2a90: 0x34630082  ori         $v1, $v1, 0x82
    ctx->pc = 0x2c2a90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)130);
    // 0x2c2a94: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2c2a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2c2a98:
    // 0x2c2a98: 0x8e220024  lw          $v0, 0x24($s1)
    ctx->pc = 0x2c2a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2c2a9c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x2C2A9Cu;
    {
        const bool branch_taken_0x2c2a9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2A9Cu;
            // 0x2c2aa0: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2a9c) {
            ctx->pc = 0x2C2AE4u;
            goto label_2c2ae4;
        }
    }
    ctx->pc = 0x2C2AA4u;
    // 0x2c2aa4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2c2aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c2aa8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2C2AA8u;
    {
        const bool branch_taken_0x2c2aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C2AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2AA8u;
            // 0x2c2aac: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c2aa8) {
            ctx->pc = 0x2C2AE4u;
            goto label_2c2ae4;
        }
    }
    ctx->pc = 0x2C2AB0u;
    // 0x2c2ab0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2c2ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ab4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2c2ab4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c2ab8: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2c2ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2c2abc: 0xc0a05d0  jal         func_281740
    ctx->pc = 0x2C2ABCu;
    SET_GPR_U32(ctx, 31, 0x2C2AC4u);
    ctx->pc = 0x2C2AC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2ABCu;
            // 0x2c2ac0: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281740u;
    if (runtime->hasFunction(0x281740u)) {
        auto targetFn = runtime->lookupFunction(0x281740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AC4u; }
        if (ctx->pc != 0x2C2AC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281740_0x281740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AC4u; }
        if (ctx->pc != 0x2C2AC4u) { return; }
    }
    ctx->pc = 0x2C2AC4u;
label_2c2ac4:
    // 0x2c2ac4: 0x3c06002c  lui         $a2, 0x2C
    ctx->pc = 0x2c2ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)44 << 16));
    // 0x2c2ac8: 0x8e240024  lw          $a0, 0x24($s1)
    ctx->pc = 0x2c2ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
    // 0x2c2acc: 0x24c642b8  addiu       $a2, $a2, 0x42B8
    ctx->pc = 0x2c2accu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 17080));
    // 0x2c2ad0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2c2ad0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ad4: 0x24070010  addiu       $a3, $zero, 0x10
    ctx->pc = 0x2c2ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2c2ad8: 0xc0a09b8  jal         func_2826E0
    ctx->pc = 0x2C2AD8u;
    SET_GPR_U32(ctx, 31, 0x2C2AE0u);
    ctx->pc = 0x2C2ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2AD8u;
            // 0x2c2adc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2826E0u;
    if (runtime->hasFunction(0x2826E0u)) {
        auto targetFn = runtime->lookupFunction(0x2826E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AE0u; }
        if (ctx->pc != 0x2C2AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002826E0_0x2826e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C2AE0u; }
        if (ctx->pc != 0x2C2AE0u) { return; }
    }
    ctx->pc = 0x2C2AE0u;
label_2c2ae0:
    // 0x2c2ae0: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c2ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c2ae4:
    // 0x2c2ae4: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2c2ae4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c2ae8: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x2c2ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_2c2aec:
    // 0x2c2aec: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2c2aecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c2af0: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2c2af0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c2af4: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2c2af4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2c2af8: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2c2af8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c2afc: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2c2afcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c2b00: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2c2b00u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c2b04: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c2b04u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c2b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2C2B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C2B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C2B08u;
            // 0x2c2b0c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C2B10u;
    ctx->pc = 0x2c2b10u;
}
