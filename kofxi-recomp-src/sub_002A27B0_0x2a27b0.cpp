#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A27B0
// Address: 0x2a27b0 - 0x2a28f0
void sub_002A27B0_0x2a27b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A27B0_0x2a27b0");
#endif

    switch (ctx->pc) {
        case 0x2a27f0u: goto label_2a27f0;
        case 0x2a2818u: goto label_2a2818;
        case 0x2a2840u: goto label_2a2840;
        case 0x2a2864u: goto label_2a2864;
        case 0x2a287cu: goto label_2a287c;
        case 0x2a28bcu: goto label_2a28bc;
        default: break;
    }

    ctx->pc = 0x2a27b0u;

    // 0x2a27b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2a27b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x2a27b4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2a27b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x2a27b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2a27b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x2a27bc: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2a27bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27c0: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2a27c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x2a27c4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2a27c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27c8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2a27c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x2a27cc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a27ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x2a27d0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a27d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x2a27d4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a27d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2a27d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2a27d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2a27dc: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x2a27dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a27e0: 0x18e0000b  blez        $a3, . + 4 + (0xB << 2)
    ctx->pc = 0x2A27E0u;
    {
        const bool branch_taken_0x2a27e0 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2A27E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A27E0u;
            // 0x2a27e4: 0x8e90000c  lw          $s0, 0xC($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a27e0) {
            ctx->pc = 0x2A2810u;
            goto label_2a2810;
        }
    }
    ctx->pc = 0x2A27E8u;
    // 0x2a27e8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2a27e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a27ec: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a27ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a27f0:
    // 0x2a27f0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2a27f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2a27f4: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2a27f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2a27f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A27F8u;
    {
        const bool branch_taken_0x2a27f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A27FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A27F8u;
            // 0x2a27fc: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a27f8) {
            ctx->pc = 0x2A2808u;
            goto label_2a2808;
        }
    }
    ctx->pc = 0x2A2800u;
    // 0x2a2800: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2a2800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x2a2804: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2a2804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2a2808:
    // 0x2a2808: 0x1620fff9  bnez        $s1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A2808u;
    {
        const bool branch_taken_0x2a2808 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A280Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2808u;
            // 0x2a280c: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2808) {
            ctx->pc = 0x2A27F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a27f0;
        }
    }
    ctx->pc = 0x2A2810u;
label_2a2810:
    // 0x2a2810: 0xc0a8bf6  jal         func_2A2FD8
    ctx->pc = 0x2A2810u;
    SET_GPR_U32(ctx, 31, 0x2A2818u);
    ctx->pc = 0x2A2FD8u;
    if (runtime->hasFunction(0x2A2FD8u)) {
        auto targetFn = runtime->lookupFunction(0x2A2FD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2818u; }
        if (ctx->pc != 0x2A2818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A2FD8_0x2a2fd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2818u; }
        if (ctx->pc != 0x2A2818u) { return; }
    }
    ctx->pc = 0x2A2818u;
label_2a2818:
    // 0x2a2818: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a2818u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a281c: 0x56400003  bnel        $s2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2A281Cu;
    {
        const bool branch_taken_0x2a281c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a281c) {
            ctx->pc = 0x2A2820u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A281Cu;
            // 0x2a2820: 0x8e870004  lw          $a3, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A282Cu;
            goto label_2a282c;
        }
    }
    ctx->pc = 0x2A2824u;
    // 0x2a2824: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x2A2824u;
    {
        const bool branch_taken_0x2a2824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2824u;
            // 0x2a2828: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2824) {
            ctx->pc = 0x2A28C4u;
            goto label_2a28c4;
        }
    }
    ctx->pc = 0x2A282Cu;
label_2a282c:
    // 0x2a282c: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x2a282cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a2830: 0x18e0001d  blez        $a3, . + 4 + (0x1D << 2)
    ctx->pc = 0x2A2830u;
    {
        const bool branch_taken_0x2a2830 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x2A2834u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2830u;
            // 0x2a2834: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a2830) {
            ctx->pc = 0x2A28A8u;
            goto label_2a28a8;
        }
    }
    ctx->pc = 0x2A2838u;
    // 0x2a2838: 0x200982d  daddu       $s3, $s0, $zero
    ctx->pc = 0x2a2838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a283c: 0x2415fffd  addiu       $s5, $zero, -0x3
    ctx->pc = 0x2a283cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2a2840:
    // 0x2a2840: 0x8e700000  lw          $s0, 0x0($s3)
    ctx->pc = 0x2a2840u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x2a2844: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x2a2844u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x2a2848: 0x50a00014  beql        $a1, $zero, . + 4 + (0x14 << 2)
    ctx->pc = 0x2A2848u;
    {
        const bool branch_taken_0x2a2848 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2848) {
            ctx->pc = 0x2A284Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2848u;
            // 0x2a284c: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A289Cu;
            goto label_2a289c;
        }
    }
    ctx->pc = 0x2A2850u;
    // 0x2a2850: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x2a2850u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a2854: 0x50c00011  beql        $a2, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x2A2854u;
    {
        const bool branch_taken_0x2a2854 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a2854) {
            ctx->pc = 0x2A2858u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2854u;
            // 0x2a2858: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A289Cu;
            goto label_2a289c;
        }
    }
    ctx->pc = 0x2A285Cu;
    // 0x2a285c: 0xc049c48  jal         func_127120
    ctx->pc = 0x2A285Cu;
    SET_GPR_U32(ctx, 31, 0x2A2864u);
    ctx->pc = 0x2A2860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A285Cu;
            // 0x2a2860: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2864u; }
        if (ctx->pc != 0x2A2864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A2864u; }
        if (ctx->pc != 0x2A2864u) { return; }
    }
    ctx->pc = 0x2A2864u;
label_2a2864:
    // 0x2a2864: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a2864u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a2868: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2a2868u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x2a286c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A286Cu;
    {
        const bool branch_taken_0x2a286c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A2870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A286Cu;
            // 0x2a2870: 0x751024  and         $v0, $v1, $s5 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a286c) {
            ctx->pc = 0x2A2884u;
            goto label_2a2884;
        }
    }
    ctx->pc = 0x2A2874u;
    // 0x2a2874: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A2874u;
    SET_GPR_U32(ctx, 31, 0x2A287Cu);
    ctx->pc = 0x2A2878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A2874u;
            // 0x2a2878: 0x8e04000c  lw          $a0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A287Cu; }
        if (ctx->pc != 0x2A287Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A287Cu; }
        if (ctx->pc != 0x2A287Cu) { return; }
    }
    ctx->pc = 0x2A287Cu;
label_2a287c:
    // 0x2a287c: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2a287cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a2880: 0x751024  and         $v0, $v1, $s5
    ctx->pc = 0x2a2880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 21));
label_2a2884:
    // 0x2a2884: 0xae12000c  sw          $s2, 0xC($s0)
    ctx->pc = 0x2a2884u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 18));
    // 0x2a2888: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x2a2888u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x2a288c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2a288cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a2890: 0x8e870004  lw          $a3, 0x4($s4)
    ctx->pc = 0x2a2890u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x2a2894: 0x2439021  addu        $s2, $s2, $v1
    ctx->pc = 0x2a2894u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x2a2898: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2a2898u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2a289c:
    // 0x2a289c: 0x227102a  slt         $v0, $s1, $a3
    ctx->pc = 0x2a289cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x2a28a0: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x2A28A0u;
    {
        const bool branch_taken_0x2a28a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A28A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A28A0u;
            // 0x2a28a4: 0x26730004  addiu       $s3, $s3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a28a0) {
            ctx->pc = 0x2A2840u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a2840;
        }
    }
    ctx->pc = 0x2A28A8u;
label_2a28a8:
    // 0x2a28a8: 0x8e840010  lw          $a0, 0x10($s4)
    ctx->pc = 0x2a28a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x2a28ac: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A28ACu;
    {
        const bool branch_taken_0x2a28ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a28ac) {
            ctx->pc = 0x2A28B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A28ACu;
            // 0x2a28b0: 0xae960010  sw          $s6, 0x10($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A28C0u;
            goto label_2a28c0;
        }
    }
    ctx->pc = 0x2A28B4u;
    // 0x2a28b4: 0xc0a8c0a  jal         func_2A3028
    ctx->pc = 0x2A28B4u;
    SET_GPR_U32(ctx, 31, 0x2A28BCu);
    ctx->pc = 0x2A3028u;
    if (runtime->hasFunction(0x2A3028u)) {
        auto targetFn = runtime->lookupFunction(0x2A3028u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A28BCu; }
        if (ctx->pc != 0x2A28BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3028_0x2a3028(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A28BCu; }
        if (ctx->pc != 0x2A28BCu) { return; }
    }
    ctx->pc = 0x2A28BCu;
label_2a28bc:
    // 0x2a28bc: 0xae960010  sw          $s6, 0x10($s4)
    ctx->pc = 0x2a28bcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 22));
label_2a28c0:
    // 0x2a28c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2a28c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a28c4:
    // 0x2a28c4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2a28c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a28c8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2a28c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a28cc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2a28ccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a28d0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2a28d0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a28d4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a28d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a28d8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a28d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a28dc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a28dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a28e0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a28e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a28e4: 0x3e00008  jr          $ra
    ctx->pc = 0x2A28E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A28E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A28E4u;
            // 0x2a28e8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A28ECu;
    // 0x2a28ec: 0x0  nop
    ctx->pc = 0x2a28ecu;
    // NOP
    ctx->pc = 0x2a28f0u;
}
