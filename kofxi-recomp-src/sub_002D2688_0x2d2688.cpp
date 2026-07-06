#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D2688
// Address: 0x2d2688 - 0x2d2a20
void sub_002D2688_0x2d2688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D2688_0x2d2688");
#endif

    switch (ctx->pc) {
        case 0x2d26ccu: goto label_2d26cc;
        case 0x2d26d8u: goto label_2d26d8;
        case 0x2d26e0u: goto label_2d26e0;
        case 0x2d26fcu: goto label_2d26fc;
        case 0x2d2714u: goto label_2d2714;
        case 0x2d2734u: goto label_2d2734;
        case 0x2d2754u: goto label_2d2754;
        case 0x2d2780u: goto label_2d2780;
        case 0x2d2798u: goto label_2d2798;
        case 0x2d27a4u: goto label_2d27a4;
        case 0x2d27b0u: goto label_2d27b0;
        case 0x2d27c8u: goto label_2d27c8;
        case 0x2d27d0u: goto label_2d27d0;
        case 0x2d2800u: goto label_2d2800;
        case 0x2d2810u: goto label_2d2810;
        case 0x2d2818u: goto label_2d2818;
        case 0x2d281cu: goto label_2d281c;
        case 0x2d282cu: goto label_2d282c;
        case 0x2d2844u: goto label_2d2844;
        case 0x2d2864u: goto label_2d2864;
        case 0x2d287cu: goto label_2d287c;
        case 0x2d2894u: goto label_2d2894;
        case 0x2d289cu: goto label_2d289c;
        case 0x2d28b0u: goto label_2d28b0;
        case 0x2d28c8u: goto label_2d28c8;
        case 0x2d28ecu: goto label_2d28ec;
        case 0x2d2914u: goto label_2d2914;
        case 0x2d2920u: goto label_2d2920;
        case 0x2d292cu: goto label_2d292c;
        case 0x2d2938u: goto label_2d2938;
        case 0x2d294cu: goto label_2d294c;
        case 0x2d2964u: goto label_2d2964;
        case 0x2d2984u: goto label_2d2984;
        case 0x2d29acu: goto label_2d29ac;
        case 0x2d29c0u: goto label_2d29c0;
        case 0x2d29d0u: goto label_2d29d0;
        case 0x2d29e4u: goto label_2d29e4;
        case 0x2d29ecu: goto label_2d29ec;
        default: break;
    }

    ctx->pc = 0x2d2688u;

    // 0x2d2688: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2d2688u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2d268c: 0xffb50058  sd          $s5, 0x58($sp)
    ctx->pc = 0x2d268cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 21));
    // 0x2d2690: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2d2690u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2694: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2d2694u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2698: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x2d2698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x2d269c: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x2d269cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x2d26a0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2d26a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d26a4: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2d26a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x2d26a8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d26a8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d26ac: 0xffb70068  sd          $s7, 0x68($sp)
    ctx->pc = 0x2d26acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 23));
    // 0x2d26b0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2d26b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2d26b4: 0xffb30048  sd          $s3, 0x48($sp)
    ctx->pc = 0x2d26b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 19));
    // 0x2d26b8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2d26b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2d26bc: 0xffbe0070  sd          $fp, 0x70($sp)
    ctx->pc = 0x2d26bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 30));
    // 0x2d26c0: 0xffbf0078  sd          $ra, 0x78($sp)
    ctx->pc = 0x2d26c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 31));
    // 0x2d26c4: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D26C4u;
    SET_GPR_U32(ctx, 31, 0x2D26CCu);
    ctx->pc = 0x2D26C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D26C4u;
            // 0x2d26c8: 0xe0882d  daddu       $s1, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D26CCu; }
        if (ctx->pc != 0x2D26CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D26CCu; }
        if (ctx->pc != 0x2D26CCu) { return; }
    }
    ctx->pc = 0x2D26CCu;
label_2d26cc:
    // 0x2d26cc: 0x27b70010  addiu       $s7, $sp, 0x10
    ctx->pc = 0x2d26ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d26d0: 0xc0b4614  jal         func_2D1850
    ctx->pc = 0x2D26D0u;
    SET_GPR_U32(ctx, 31, 0x2D26D8u);
    ctx->pc = 0x2D26D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D26D0u;
            // 0x2d26d4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1850u;
    if (runtime->hasFunction(0x2D1850u)) {
        auto targetFn = runtime->lookupFunction(0x2D1850u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D26D8u; }
        if (ctx->pc != 0x2D26D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1850_0x2d1850(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D26D8u; }
        if (ctx->pc != 0x2D26D8u) { return; }
    }
    ctx->pc = 0x2D26D8u;
label_2d26d8:
    // 0x2d26d8: 0x100000a5  b           . + 4 + (0xA5 << 2)
    ctx->pc = 0x2D26D8u;
    {
        const bool branch_taken_0x2d26d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D26DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D26D8u;
            // 0x2d26dc: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d26d8) {
            ctx->pc = 0x2D2970u;
            goto label_2d2970;
        }
    }
    ctx->pc = 0x2D26E0u;
label_2d26e0:
    // 0x2d26e0: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2d26e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x2d26e4: 0x108200bd  beq         $a0, $v0, . + 4 + (0xBD << 2)
    ctx->pc = 0x2D26E4u;
    {
        const bool branch_taken_0x2d26e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2D26E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D26E4u;
            // 0x2d26e8: 0x24100106  addiu       $s0, $zero, 0x106 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 262));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d26e4) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D26ECu;
    // 0x2d26ec: 0x5880000d  blezl       $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x2D26ECu;
    {
        const bool branch_taken_0x2d26ec = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2d26ec) {
            ctx->pc = 0x2D26F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D26ECu;
            // 0x2d26f0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2724u;
            goto label_2d2724;
        }
    }
    ctx->pc = 0x2D26F4u;
    // 0x2d26f4: 0xc0b511c  jal         func_2D4470
    ctx->pc = 0x2D26F4u;
    SET_GPR_U32(ctx, 31, 0x2D26FCu);
    ctx->pc = 0x2D26F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D26F4u;
            // 0x2d26f8: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4470u;
    if (runtime->hasFunction(0x2D4470u)) {
        auto targetFn = runtime->lookupFunction(0x2D4470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D26FCu; }
        if (ctx->pc != 0x2D26FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4470_0x2d4470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D26FCu; }
        if (ctx->pc != 0x2D26FCu) { return; }
    }
    ctx->pc = 0x2D26FCu;
label_2d26fc:
    // 0x2d26fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d26fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2700: 0x160000b6  bnez        $s0, . + 4 + (0xB6 << 2)
    ctx->pc = 0x2D2700u;
    {
        const bool branch_taken_0x2d2700 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2700) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D2708u;
    // 0x2d2708: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d2708u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d270c: 0xc0b511c  jal         func_2D4470
    ctx->pc = 0x2D270Cu;
    SET_GPR_U32(ctx, 31, 0x2D2714u);
    ctx->pc = 0x2D2710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D270Cu;
            // 0x2d2710: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4470u;
    if (runtime->hasFunction(0x2D4470u)) {
        auto targetFn = runtime->lookupFunction(0x2D4470u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2714u; }
        if (ctx->pc != 0x2D2714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4470_0x2d4470(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2714u; }
        if (ctx->pc != 0x2D2714u) { return; }
    }
    ctx->pc = 0x2D2714u;
label_2d2714:
    // 0x2d2714: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2714u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2718: 0x160000b0  bnez        $s0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x2D2718u;
    {
        const bool branch_taken_0x2d2718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2718) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D2720u;
    // 0x2d2720: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d2720u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d2724:
    // 0x2d2724: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2724u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2728: 0x8eb30004  lw          $s3, 0x4($s5)
    ctx->pc = 0x2d2728u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x2d272c: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D272Cu;
    SET_GPR_U32(ctx, 31, 0x2D2734u);
    ctx->pc = 0x2D2730u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D272Cu;
            // 0x2d2730: 0x8e560004  lw          $s6, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (runtime->hasFunction(0x2CFBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2734u; }
        if (ctx->pc != 0x2D2734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2734u; }
        if (ctx->pc != 0x2D2734u) { return; }
    }
    ctx->pc = 0x2D2734u;
label_2d2734:
    // 0x2d2734: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2734u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2738: 0x160000a8  bnez        $s0, . + 4 + (0xA8 << 2)
    ctx->pc = 0x2D2738u;
    {
        const bool branch_taken_0x2d2738 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D273Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2738u;
            // 0x2d273c: 0x2d3102a  slt         $v0, $s6, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2738) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D2740u;
    // 0x2d2740: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x2D2740u;
    {
        const bool branch_taken_0x2d2740 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2740) {
            ctx->pc = 0x2D2744u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2740u;
            // 0x2d2744: 0x8e830008  lw          $v1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2768u;
            goto label_2d2768;
        }
    }
    ctx->pc = 0x2D2748u;
    // 0x2d2748: 0x2762023  subu        $a0, $s3, $s6
    ctx->pc = 0x2d2748u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
    // 0x2d274c: 0xc0b517a  jal         func_2D45E8
    ctx->pc = 0x2D274Cu;
    SET_GPR_U32(ctx, 31, 0x2D2754u);
    ctx->pc = 0x2D2750u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D274Cu;
            // 0x2d2750: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D45E8u;
    if (runtime->hasFunction(0x2D45E8u)) {
        auto targetFn = runtime->lookupFunction(0x2D45E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2754u; }
        if (ctx->pc != 0x2D2754u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D45E8_0x2d45e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2754u; }
        if (ctx->pc != 0x2D2754u) { return; }
    }
    ctx->pc = 0x2D2754u;
label_2d2754:
    // 0x2d2754: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2754u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2758: 0x5200000d  beql        $s0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x2D2758u;
    {
        const bool branch_taken_0x2d2758 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2758) {
            ctx->pc = 0x2D275Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2758u;
            // 0x2d275c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2790u;
            goto label_2d2790;
        }
    }
    ctx->pc = 0x2D2760u;
    // 0x2d2760: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x2D2760u;
    {
        const bool branch_taken_0x2d2760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d2760) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D2768u;
label_2d2768:
    // 0x2d2768: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2d2768u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d276c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d276cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2770: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d2770u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2774: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x2d2774u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x2d2778: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D2778u;
    SET_GPR_U32(ctx, 31, 0x2D2780u);
    ctx->pc = 0x2D277Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2778u;
            // 0x2d277c: 0xae9e0004  sw          $fp, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4058u;
    if (runtime->hasFunction(0x2D4058u)) {
        auto targetFn = runtime->lookupFunction(0x2D4058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2780u; }
        if (ctx->pc != 0x2D2780u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4058_0x2d4058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2780u; }
        if (ctx->pc != 0x2D2780u) { return; }
    }
    ctx->pc = 0x2D2780u;
label_2d2780:
    // 0x2d2780: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2784: 0x16000095  bnez        $s0, . + 4 + (0x95 << 2)
    ctx->pc = 0x2D2784u;
    {
        const bool branch_taken_0x2d2784 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2784) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D278Cu;
    // 0x2d278c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2d278cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d2790:
    // 0x2d2790: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D2790u;
    SET_GPR_U32(ctx, 31, 0x2D2798u);
    ctx->pc = 0x2D2794u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2790u;
            // 0x2d2794: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2798u; }
        if (ctx->pc != 0x2D2798u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2798u; }
        if (ctx->pc != 0x2D2798u) { return; }
    }
    ctx->pc = 0x2D2798u;
label_2d2798:
    // 0x2d2798: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2798u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d279c: 0x1600008f  bnez        $s0, . + 4 + (0x8F << 2)
    ctx->pc = 0x2D279Cu;
    {
        const bool branch_taken_0x2d279c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d279c) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D27A4u;
label_2d27a4:
    // 0x2d27a4: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d27a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d27a8: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D27A8u;
    SET_GPR_U32(ctx, 31, 0x2D27B0u);
    ctx->pc = 0x2D27ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D27A8u;
            // 0x2d27ac: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D27B0u; }
        if (ctx->pc != 0x2D27B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D27B0u; }
        if (ctx->pc != 0x2D27B0u) { return; }
    }
    ctx->pc = 0x2D27B0u;
label_2d27b0:
    // 0x2d27b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d27b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d27b4: 0x16000089  bnez        $s0, . + 4 + (0x89 << 2)
    ctx->pc = 0x2D27B4u;
    {
        const bool branch_taken_0x2d27b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D27B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D27B4u;
            // 0x2d27b8: 0x2761023  subu        $v0, $s3, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d27b4) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D27BCu;
    // 0x2d27bc: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x2D27BCu;
    {
        const bool branch_taken_0x2d27bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D27C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D27BCu;
            // 0x2d27c0: 0x2453ffff  addiu       $s3, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d27bc) {
            ctx->pc = 0x2D2888u;
            goto label_2d2888;
        }
    }
    ctx->pc = 0x2D27C4u;
    // 0x2d27c4: 0x0  nop
    ctx->pc = 0x2d27c4u;
    // NOP
label_2d27c8:
    // 0x2d27c8: 0xc0b50ac  jal         func_2D42B0
    ctx->pc = 0x2D27C8u;
    SET_GPR_U32(ctx, 31, 0x2D27D0u);
    ctx->pc = 0x2D27CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D27C8u;
            // 0x2d27cc: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D42B0u;
    if (runtime->hasFunction(0x2D42B0u)) {
        auto targetFn = runtime->lookupFunction(0x2D42B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D27D0u; }
        if (ctx->pc != 0x2D27D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D42B0_0x2d42b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D27D0u; }
        if (ctx->pc != 0x2D27D0u) { return; }
    }
    ctx->pc = 0x2D27D0u;
label_2d27d0:
    // 0x2d27d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d27d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d27d4: 0x16000081  bnez        $s0, . + 4 + (0x81 << 2)
    ctx->pc = 0x2D27D4u;
    {
        const bool branch_taken_0x2d27d4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d27d4) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D27DCu;
    // 0x2d27dc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x2d27dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x2d27e0: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x2d27e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x2d27e4: 0x50400028  beql        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D27E4u;
    {
        const bool branch_taken_0x2d27e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d27e4) {
            ctx->pc = 0x2D27E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D27E4u;
            // 0x2d27e8: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2888u;
            goto label_2d2888;
        }
    }
    ctx->pc = 0x2D27ECu;
    // 0x2d27ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d27ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d27f0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d27f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d27f4: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d27f4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d27f8: 0xc0b4b6a  jal         func_2D2DA8
    ctx->pc = 0x2D27F8u;
    SET_GPR_U32(ctx, 31, 0x2D2800u);
    ctx->pc = 0x2D27FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D27F8u;
            // 0x2d27fc: 0x2e0382d  daddu       $a3, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2DA8u;
    if (runtime->hasFunction(0x2D2DA8u)) {
        auto targetFn = runtime->lookupFunction(0x2D2DA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2800u; }
        if (ctx->pc != 0x2D2800u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2DA8_0x2d2da8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2800u; }
        if (ctx->pc != 0x2D2800u) { return; }
    }
    ctx->pc = 0x2D2800u;
label_2d2800:
    // 0x2d2800: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2800u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2804: 0x16000075  bnez        $s0, . + 4 + (0x75 << 2)
    ctx->pc = 0x2D2804u;
    {
        const bool branch_taken_0x2d2804 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2804) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D280Cu;
    // 0x2d280c: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d280cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d2810:
    // 0x2d2810: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D2810u;
    SET_GPR_U32(ctx, 31, 0x2D2818u);
    ctx->pc = 0x2D2814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2810u;
            // 0x2d2814: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2818u; }
        if (ctx->pc != 0x2D2818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2818u; }
        if (ctx->pc != 0x2D2818u) { return; }
    }
    ctx->pc = 0x2D2818u;
label_2d2818:
    // 0x2d2818: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d2818u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2d281c:
    // 0x2d281c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x2D281Cu;
    {
        const bool branch_taken_0x2d281c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2D2820u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D281Cu;
            // 0x2d2820: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d281c) {
            ctx->pc = 0x2D2850u;
            goto label_2d2850;
        }
    }
    ctx->pc = 0x2D2824u;
    // 0x2d2824: 0xc0b4062  jal         func_2D0188
    ctx->pc = 0x2D2824u;
    SET_GPR_U32(ctx, 31, 0x2D282Cu);
    ctx->pc = 0x2D0188u;
    if (runtime->hasFunction(0x2D0188u)) {
        auto targetFn = runtime->lookupFunction(0x2D0188u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D282Cu; }
        if (ctx->pc != 0x2D282Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D0188_0x2d0188(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D282Cu; }
        if (ctx->pc != 0x2D282Cu) { return; }
    }
    ctx->pc = 0x2D282Cu;
label_2d282c:
    // 0x2d282c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d282cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2830: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2830u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2834: 0x16000069  bnez        $s0, . + 4 + (0x69 << 2)
    ctx->pc = 0x2D2834u;
    {
        const bool branch_taken_0x2d2834 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2834u;
            // 0x2d2838: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2834) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D283Cu;
    // 0x2d283c: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D283Cu;
    SET_GPR_U32(ctx, 31, 0x2D2844u);
    ctx->pc = 0x2D4058u;
    if (runtime->hasFunction(0x2D4058u)) {
        auto targetFn = runtime->lookupFunction(0x2D4058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2844u; }
        if (ctx->pc != 0x2D2844u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4058_0x2d4058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2844u; }
        if (ctx->pc != 0x2D2844u) { return; }
    }
    ctx->pc = 0x2D2844u;
label_2d2844:
    // 0x2d2844: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2844u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2848: 0x1200fff1  beqz        $s0, . + 4 + (-0xF << 2)
    ctx->pc = 0x2D2848u;
    {
        const bool branch_taken_0x2d2848 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D284Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2848u;
            // 0x2d284c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2848) {
            ctx->pc = 0x2D2810u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d2810;
        }
    }
    ctx->pc = 0x2D2850u;
label_2d2850:
    // 0x2d2850: 0x16000062  bnez        $s0, . + 4 + (0x62 << 2)
    ctx->pc = 0x2D2850u;
    {
        const bool branch_taken_0x2d2850 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2854u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2850u;
            // 0x2d2854: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2850) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D2858u;
    // 0x2d2858: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d2858u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d285c: 0xc0b3fa4  jal         func_2CFE90
    ctx->pc = 0x2D285Cu;
    SET_GPR_U32(ctx, 31, 0x2D2864u);
    ctx->pc = 0x2D2860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D285Cu;
            // 0x2d2860: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE90u;
    if (runtime->hasFunction(0x2CFE90u)) {
        auto targetFn = runtime->lookupFunction(0x2CFE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2864u; }
        if (ctx->pc != 0x2D2864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFE90_0x2cfe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2864u; }
        if (ctx->pc != 0x2D2864u) { return; }
    }
    ctx->pc = 0x2D2864u;
label_2d2864:
    // 0x2d2864: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2864u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2868: 0x1600005c  bnez        $s0, . + 4 + (0x5C << 2)
    ctx->pc = 0x2D2868u;
    {
        const bool branch_taken_0x2d2868 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2868) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D2870u;
    // 0x2d2870: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d2870u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2874: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D2874u;
    SET_GPR_U32(ctx, 31, 0x2D287Cu);
    ctx->pc = 0x2D2878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2874u;
            // 0x2d2878: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4058u;
    if (runtime->hasFunction(0x2D4058u)) {
        auto targetFn = runtime->lookupFunction(0x2D4058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D287Cu; }
        if (ctx->pc != 0x2D287Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4058_0x2d4058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D287Cu; }
        if (ctx->pc != 0x2D287Cu) { return; }
    }
    ctx->pc = 0x2D287Cu;
label_2d287c:
    // 0x2d287c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d287cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2880: 0x16000056  bnez        $s0, . + 4 + (0x56 << 2)
    ctx->pc = 0x2D2880u;
    {
        const bool branch_taken_0x2d2880 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D2884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2880u;
            // 0x2d2884: 0x2673ffff  addiu       $s3, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2880) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D2888u;
label_2d2888:
    // 0x2d2888: 0x660001b  bltz        $s3, . + 4 + (0x1B << 2)
    ctx->pc = 0x2D2888u;
    {
        const bool branch_taken_0x2d2888 = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x2d2888) {
            ctx->pc = 0x2D28F8u;
            goto label_2d28f8;
        }
    }
    ctx->pc = 0x2D2890u;
    // 0x2d2890: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d2890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2894:
    // 0x2d2894: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D2894u;
    SET_GPR_U32(ctx, 31, 0x2D289Cu);
    ctx->pc = 0x2D2898u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2894u;
            // 0x2d2898: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D289Cu; }
        if (ctx->pc != 0x2D289Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D289Cu; }
        if (ctx->pc != 0x2D289Cu) { return; }
    }
    ctx->pc = 0x2D289Cu;
label_2d289c:
    // 0x2d289c: 0x442000e  bltzl       $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D289Cu;
    {
        const bool branch_taken_0x2d289c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d289c) {
            ctx->pc = 0x2D28A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D289Cu;
            // 0x2d28a0: 0x8ea30008  lw          $v1, 0x8($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D28D8u;
            goto label_2d28d8;
        }
    }
    ctx->pc = 0x2D28A4u;
    // 0x2d28a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d28a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d28a8: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D28A8u;
    SET_GPR_U32(ctx, 31, 0x2D28B0u);
    ctx->pc = 0x2D28ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D28A8u;
            // 0x2d28ac: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4058u;
    if (runtime->hasFunction(0x2D4058u)) {
        auto targetFn = runtime->lookupFunction(0x2D4058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28B0u; }
        if (ctx->pc != 0x2D28B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4058_0x2d4058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28B0u; }
        if (ctx->pc != 0x2D28B0u) { return; }
    }
    ctx->pc = 0x2D28B0u;
label_2d28b0:
    // 0x2d28b0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d28b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d28b4: 0x16000049  bnez        $s0, . + 4 + (0x49 << 2)
    ctx->pc = 0x2D28B4u;
    {
        const bool branch_taken_0x2d28b4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d28b4) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D28BCu;
    // 0x2d28bc: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2d28bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d28c0: 0xc0b3fa4  jal         func_2CFE90
    ctx->pc = 0x2D28C0u;
    SET_GPR_U32(ctx, 31, 0x2D28C8u);
    ctx->pc = 0x2D28C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D28C0u;
            // 0x2d28c4: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE90u;
    if (runtime->hasFunction(0x2CFE90u)) {
        auto targetFn = runtime->lookupFunction(0x2CFE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28C8u; }
        if (ctx->pc != 0x2D28C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFE90_0x2cfe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28C8u; }
        if (ctx->pc != 0x2D28C8u) { return; }
    }
    ctx->pc = 0x2D28C8u;
label_2d28c8:
    // 0x2d28c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d28c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d28cc: 0x16000043  bnez        $s0, . + 4 + (0x43 << 2)
    ctx->pc = 0x2D28CCu;
    {
        const bool branch_taken_0x2d28cc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d28cc) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D28D4u;
    // 0x2d28d4: 0x8ea30008  lw          $v1, 0x8($s5)
    ctx->pc = 0x2d28d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_2d28d8:
    // 0x2d28d8: 0x1310c0  sll         $v0, $s3, 3
    ctx->pc = 0x2d28d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
    // 0x2d28dc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2d28dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d28e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2d28e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2d28e4: 0xc0b4b3c  jal         func_2D2CF0
    ctx->pc = 0x2D28E4u;
    SET_GPR_U32(ctx, 31, 0x2D28ECu);
    ctx->pc = 0x2D28E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D28E4u;
            // 0x2d28e8: 0xdc440000  ld          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D2CF0u;
    if (runtime->hasFunction(0x2D2CF0u)) {
        auto targetFn = runtime->lookupFunction(0x2D2CF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28ECu; }
        if (ctx->pc != 0x2D28ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D2CF0_0x2d2cf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D28ECu; }
        if (ctx->pc != 0x2D28ECu) { return; }
    }
    ctx->pc = 0x2D28ECu;
label_2d28ec:
    // 0x2d28ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d28ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d28f0: 0x5200ffb5  beql        $s0, $zero, . + 4 + (-0x4B << 2)
    ctx->pc = 0x2D28F0u;
    {
        const bool branch_taken_0x2d28f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d28f0) {
            ctx->pc = 0x2D28F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D28F0u;
            // 0x2d28f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D27C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d27c8;
        }
    }
    ctx->pc = 0x2D28F8u;
label_2d28f8:
    // 0x2d28f8: 0x16000038  bnez        $s0, . + 4 + (0x38 << 2)
    ctx->pc = 0x2D28F8u;
    {
        const bool branch_taken_0x2d28f8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d28f8) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D2900u;
    // 0x2d2900: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2d2900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2d2904: 0x5880000a  blezl       $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x2D2904u;
    {
        const bool branch_taken_0x2d2904 = (GPR_S32(ctx, 4) <= 0);
        if (branch_taken_0x2d2904) {
            ctx->pc = 0x2D2908u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2904u;
            // 0x2d2908: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2930u;
            goto label_2d2930;
        }
    }
    ctx->pc = 0x2D290Cu;
    // 0x2d290c: 0xc0b5190  jal         func_2D4640
    ctx->pc = 0x2D290Cu;
    SET_GPR_U32(ctx, 31, 0x2D2914u);
    ctx->pc = 0x2D2910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D290Cu;
            // 0x2d2910: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4640u;
    if (runtime->hasFunction(0x2D4640u)) {
        auto targetFn = runtime->lookupFunction(0x2D4640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2914u; }
        if (ctx->pc != 0x2D2914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4640_0x2d4640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2914u; }
        if (ctx->pc != 0x2D2914u) { return; }
    }
    ctx->pc = 0x2D2914u;
label_2d2914:
    // 0x2d2914: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d2914u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2918: 0xc0b5190  jal         func_2D4640
    ctx->pc = 0x2D2918u;
    SET_GPR_U32(ctx, 31, 0x2D2920u);
    ctx->pc = 0x2D291Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2918u;
            // 0x2d291c: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4640u;
    if (runtime->hasFunction(0x2D4640u)) {
        auto targetFn = runtime->lookupFunction(0x2D4640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2920u; }
        if (ctx->pc != 0x2D2920u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4640_0x2d4640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2920u; }
        if (ctx->pc != 0x2D2920u) { return; }
    }
    ctx->pc = 0x2D2920u;
label_2d2920:
    // 0x2d2920: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d2920u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2924: 0xc0b5190  jal         func_2D4640
    ctx->pc = 0x2D2924u;
    SET_GPR_U32(ctx, 31, 0x2D292Cu);
    ctx->pc = 0x2D2928u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2924u;
            // 0x2d2928: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4640u;
    if (runtime->hasFunction(0x2D4640u)) {
        auto targetFn = runtime->lookupFunction(0x2D4640u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D292Cu; }
        if (ctx->pc != 0x2D292Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4640_0x2d4640(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D292Cu; }
        if (ctx->pc != 0x2D292Cu) { return; }
    }
    ctx->pc = 0x2D292Cu;
label_2d292c:
    // 0x2d292c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2d292cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2d2930:
    // 0x2d2930: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D2930u;
    SET_GPR_U32(ctx, 31, 0x2D2938u);
    ctx->pc = 0x2D2934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2930u;
            // 0x2d2934: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2938u; }
        if (ctx->pc != 0x2D2938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2938u; }
        if (ctx->pc != 0x2D2938u) { return; }
    }
    ctx->pc = 0x2D2938u;
label_2d2938:
    // 0x2d2938: 0x4400028  bltz        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x2D2938u;
    {
        const bool branch_taken_0x2d2938 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2d2938) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D2940u;
    // 0x2d2940: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2d2940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2944: 0xc0b5016  jal         func_2D4058
    ctx->pc = 0x2D2944u;
    SET_GPR_U32(ctx, 31, 0x2D294Cu);
    ctx->pc = 0x2D2948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2944u;
            // 0x2d2948: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4058u;
    if (runtime->hasFunction(0x2D4058u)) {
        auto targetFn = runtime->lookupFunction(0x2D4058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D294Cu; }
        if (ctx->pc != 0x2D294Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4058_0x2d4058(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D294Cu; }
        if (ctx->pc != 0x2D294Cu) { return; }
    }
    ctx->pc = 0x2D294Cu;
label_2d294c:
    // 0x2d294c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d294cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2950: 0x16000022  bnez        $s0, . + 4 + (0x22 << 2)
    ctx->pc = 0x2D2950u;
    {
        const bool branch_taken_0x2d2950 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2950) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D2958u;
    // 0x2d2958: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d2958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d295c: 0xc0b3fa4  jal         func_2CFE90
    ctx->pc = 0x2D295Cu;
    SET_GPR_U32(ctx, 31, 0x2D2964u);
    ctx->pc = 0x2D2960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D295Cu;
            // 0x2d2960: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFE90u;
    if (runtime->hasFunction(0x2CFE90u)) {
        auto targetFn = runtime->lookupFunction(0x2CFE90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2964u; }
        if (ctx->pc != 0x2D2964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFE90_0x2cfe90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2964u; }
        if (ctx->pc != 0x2D2964u) { return; }
    }
    ctx->pc = 0x2D2964u;
label_2d2964:
    // 0x2d2964: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x2D2964u;
    {
        const bool branch_taken_0x2d2964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D2968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2964u;
            // 0x2d2968: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d2964) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D296Cu;
    // 0x2d296c: 0x0  nop
    ctx->pc = 0x2d296cu;
    // NOP
label_2d2970:
    // 0x2d2970: 0x5c400008  bgtzl       $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2D2970u;
    {
        const bool branch_taken_0x2d2970 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2d2970) {
            ctx->pc = 0x2D2974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2970u;
            // 0x2d2974: 0x8e820008  lw          $v0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D2994u;
            goto label_2d2994;
        }
    }
    ctx->pc = 0x2D2978u;
    // 0x2d2978: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2d2978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2d297c: 0xc0b466a  jal         func_2D19A8
    ctx->pc = 0x2D297Cu;
    SET_GPR_U32(ctx, 31, 0x2D2984u);
    ctx->pc = 0x2D2980u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D297Cu;
            // 0x2d2980: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D19A8u;
    if (runtime->hasFunction(0x2D19A8u)) {
        auto targetFn = runtime->lookupFunction(0x2D19A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2984u; }
        if (ctx->pc != 0x2D2984u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D19A8_0x2d19a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D2984u; }
        if (ctx->pc != 0x2D2984u) { return; }
    }
    ctx->pc = 0x2D2984u;
label_2d2984:
    // 0x2d2984: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d2984u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d2988: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2D2988u;
    {
        const bool branch_taken_0x2d2988 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d2988) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D2990u;
    // 0x2d2990: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x2d2990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2d2994:
    // 0x2d2994: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x2d2994u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d2998: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d2998u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d299c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2d299cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d29a0: 0xfc400000  sd          $zero, 0x0($v0)
    ctx->pc = 0x2d29a0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 0));
    // 0x2d29a4: 0xc0b3f1a  jal         func_2CFC68
    ctx->pc = 0x2D29A4u;
    SET_GPR_U32(ctx, 31, 0x2D29ACu);
    ctx->pc = 0x2D29A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29A4u;
            // 0x2d29a8: 0xae9e0004  sw          $fp, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFC68u;
    if (runtime->hasFunction(0x2CFC68u)) {
        auto targetFn = runtime->lookupFunction(0x2CFC68u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29ACu; }
        if (ctx->pc != 0x2D29ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFC68_0x2cfc68(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29ACu; }
        if (ctx->pc != 0x2D29ACu) { return; }
    }
    ctx->pc = 0x2D29ACu;
label_2d29ac:
    // 0x2d29ac: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2D29ACu;
    {
        const bool branch_taken_0x2d29ac = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2D29B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29ACu;
            // 0x2d29b0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29ac) {
            ctx->pc = 0x2D29C8u;
            goto label_2d29c8;
        }
    }
    ctx->pc = 0x2D29B4u;
    // 0x2d29b4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2d29b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d29b8: 0xc0b3efe  jal         func_2CFBF8
    ctx->pc = 0x2D29B8u;
    SET_GPR_U32(ctx, 31, 0x2D29C0u);
    ctx->pc = 0x2D29BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29B8u;
            // 0x2d29bc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CFBF8u;
    if (runtime->hasFunction(0x2CFBF8u)) {
        auto targetFn = runtime->lookupFunction(0x2CFBF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29C0u; }
        if (ctx->pc != 0x2D29C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CFBF8_0x2cfbf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29C0u; }
        if (ctx->pc != 0x2D29C0u) { return; }
    }
    ctx->pc = 0x2D29C0u;
label_2d29c0:
    // 0x2d29c0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2D29C0u;
    {
        const bool branch_taken_0x2d29c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D29C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29C0u;
            // 0x2d29c4: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d29c0) {
            ctx->pc = 0x2D29DCu;
            goto label_2d29dc;
        }
    }
    ctx->pc = 0x2D29C8u;
label_2d29c8:
    // 0x2d29c8: 0xc0b51e8  jal         func_2D47A0
    ctx->pc = 0x2D29C8u;
    SET_GPR_U32(ctx, 31, 0x2D29D0u);
    ctx->pc = 0x2D29CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29C8u;
            // 0x2d29cc: 0x27a50020  addiu       $a1, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D47A0u;
    if (runtime->hasFunction(0x2D47A0u)) {
        auto targetFn = runtime->lookupFunction(0x2D47A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29D0u; }
        if (ctx->pc != 0x2D29D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D47A0_0x2d47a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29D0u; }
        if (ctx->pc != 0x2D29D0u) { return; }
    }
    ctx->pc = 0x2D29D0u;
label_2d29d0:
    // 0x2d29d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2d29d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d29d4: 0x5200ff42  beql        $s0, $zero, . + 4 + (-0xBE << 2)
    ctx->pc = 0x2D29D4u;
    {
        const bool branch_taken_0x2d29d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d29d4) {
            ctx->pc = 0x2D29D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29D4u;
            // 0x2d29d8: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D26E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d26e0;
        }
    }
    ctx->pc = 0x2D29DCu;
label_2d29dc:
    // 0x2d29dc: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D29DCu;
    SET_GPR_U32(ctx, 31, 0x2D29E4u);
    ctx->pc = 0x2D29E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29DCu;
            // 0x2d29e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29E4u; }
        if (ctx->pc != 0x2D29E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29E4u; }
        if (ctx->pc != 0x2D29E4u) { return; }
    }
    ctx->pc = 0x2D29E4u;
label_2d29e4:
    // 0x2d29e4: 0xc0b4618  jal         func_2D1860
    ctx->pc = 0x2D29E4u;
    SET_GPR_U32(ctx, 31, 0x2D29ECu);
    ctx->pc = 0x2D29E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D29E4u;
            // 0x2d29e8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D1860u;
    if (runtime->hasFunction(0x2D1860u)) {
        auto targetFn = runtime->lookupFunction(0x2D1860u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29ECu; }
        if (ctx->pc != 0x2D29ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D1860_0x2d1860(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D29ECu; }
        if (ctx->pc != 0x2D29ECu) { return; }
    }
    ctx->pc = 0x2D29ECu;
label_2d29ec:
    // 0x2d29ec: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2d29ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2d29f0: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x2d29f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2d29f4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2d29f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2d29f8: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x2d29f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2d29fc: 0xdfb30048  ld          $s3, 0x48($sp)
    ctx->pc = 0x2d29fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2d2a00: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2d2a00u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2d2a04: 0xdfb50058  ld          $s5, 0x58($sp)
    ctx->pc = 0x2d2a04u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2d2a08: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2d2a08u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2d2a0c: 0xdfb70068  ld          $s7, 0x68($sp)
    ctx->pc = 0x2d2a0cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2d2a10: 0xdfbe0070  ld          $fp, 0x70($sp)
    ctx->pc = 0x2d2a10u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2d2a14: 0xdfbf0078  ld          $ra, 0x78($sp)
    ctx->pc = 0x2d2a14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2d2a18: 0x3e00008  jr          $ra
    ctx->pc = 0x2D2A18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D2A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D2A18u;
            // 0x2d2a1c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D2A20u;
    ctx->pc = 0x2d2a20u;
}
