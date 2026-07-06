#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F67F0
// Address: 0x1f67f0 - 0x1f6988
void sub_001F67F0_0x1f67f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F67F0_0x1f67f0");
#endif

    switch (ctx->pc) {
        case 0x1f6824u: goto label_1f6824;
        case 0x1f6864u: goto label_1f6864;
        case 0x1f6874u: goto label_1f6874;
        case 0x1f6890u: goto label_1f6890;
        case 0x1f68c8u: goto label_1f68c8;
        case 0x1f68d8u: goto label_1f68d8;
        case 0x1f6908u: goto label_1f6908;
        case 0x1f6918u: goto label_1f6918;
        case 0x1f6938u: goto label_1f6938;
        case 0x1f694cu: goto label_1f694c;
        case 0x1f6960u: goto label_1f6960;
        case 0x1f6974u: goto label_1f6974;
        default: break;
    }

    ctx->pc = 0x1f67f0u;

label_1f67f0:
    // 0x1f67f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f67f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f67f4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f67f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f67f8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f67f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f67fc: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1f67fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x1f6800: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f6800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6804: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1f6804u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
    // 0x1f6808: 0x27a70008  addiu       $a3, $sp, 0x8
    ctx->pc = 0x1f6808u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x1f680c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f680cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6810: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x1f6810u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
    // 0x1f6814: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1f6814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1f6818: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1f6818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x1f681c: 0xc07d704  jal         func_1F5C10
    ctx->pc = 0x1F681Cu;
    SET_GPR_U32(ctx, 31, 0x1F6824u);
    ctx->pc = 0x1F6820u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F681Cu;
            // 0x1f6820: 0x80902d  daddu       $s2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5C10u;
    if (runtime->hasFunction(0x1F5C10u)) {
        auto targetFn = runtime->lookupFunction(0x1F5C10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6824u; }
        if (ctx->pc != 0x1F6824u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5C10_0x1f5c10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6824u; }
        if (ctx->pc != 0x1F6824u) { return; }
    }
    ctx->pc = 0x1F6824u;
label_1f6824:
    // 0x1f6824: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1f6824u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6828: 0x3c020fff  lui         $v0, 0xFFF
    ctx->pc = 0x1f6828u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4095 << 16));
    // 0x1f682c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1f682cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6830: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f6830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f6834: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x1f6834u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x1f6838: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x1f6838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f683c: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x1f683cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1f6840: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x1f6840u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x1f6844: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x1f6844u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x1f6848: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x1f6848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f684c: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x1f684cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6850: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1f6850u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1f6854: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x1f6854u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x1f6858: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1f6858u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f685c: 0xc07dae2  jal         func_1F6B88
    ctx->pc = 0x1F685Cu;
    SET_GPR_U32(ctx, 31, 0x1F6864u);
    ctx->pc = 0x1F6860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F685Cu;
            // 0x1f6860: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F6B88u;
    if (runtime->hasFunction(0x1F6B88u)) {
        auto targetFn = runtime->lookupFunction(0x1F6B88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6864u; }
        if (ctx->pc != 0x1F6864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F6B88_0x1f6b88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6864u; }
        if (ctx->pc != 0x1F6864u) { return; }
    }
    ctx->pc = 0x1F6864u;
label_1f6864:
    // 0x1f6864: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1f6864u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6868: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1f6868u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f686c: 0xc07d740  jal         func_1F5D00
    ctx->pc = 0x1F686Cu;
    SET_GPR_U32(ctx, 31, 0x1F6874u);
    ctx->pc = 0x1F6870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F686Cu;
            // 0x1f6870: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5D00u;
    if (runtime->hasFunction(0x1F5D00u)) {
        auto targetFn = runtime->lookupFunction(0x1F5D00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6874u; }
        if (ctx->pc != 0x1F6874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5D00_0x1f5d00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6874u; }
        if (ctx->pc != 0x1F6874u) { return; }
    }
    ctx->pc = 0x1F6874u;
label_1f6874:
    // 0x1f6874: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f6874u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6878: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1f6878u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f687c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f687cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6880: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1f6880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f6884: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1f6884u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1f6888: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6888u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F688Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6888u;
            // 0x1f688c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F6890u;
label_1f6890:
    // 0x1f6890: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f6890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f6894: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f6894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f6898: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f6898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f689c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f689cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f68a0: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x1f68a0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f68a4: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f68a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f68a8: 0x8cc22018  lw          $v0, 0x2018($a2)
    ctx->pc = 0x1f68a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8216)));
    // 0x1f68ac: 0x24511128  addiu       $s1, $v0, 0x1128
    ctx->pc = 0x1f68acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4392));
    // 0x1f68b0: 0x24441150  addiu       $a0, $v0, 0x1150
    ctx->pc = 0x1f68b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4432));
    // 0x1f68b4: 0x8e230018  lw          $v1, 0x18($s1)
    ctx->pc = 0x1f68b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x1f68b8: 0x14720005  bne         $v1, $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F68B8u;
    {
        const bool branch_taken_0x1f68b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 18));
        ctx->pc = 0x1F68BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F68B8u;
            // 0x1f68bc: 0x24501198  addiu       $s0, $v0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4504));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68b8) {
            ctx->pc = 0x1F68D0u;
            goto label_1f68d0;
        }
    }
    ctx->pc = 0x1F68C0u;
    // 0x1f68c0: 0xc0429aa  jal         func_10A6A8
    ctx->pc = 0x1F68C0u;
    SET_GPR_U32(ctx, 31, 0x1F68C8u);
    ctx->pc = 0x10A6A8u;
    if (runtime->hasFunction(0x10A6A8u)) {
        auto targetFn = runtime->lookupFunction(0x10A6A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F68C8u; }
        if (ctx->pc != 0x1F68C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010A6A8_0x10a6a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F68C8u; }
        if (ctx->pc != 0x1F68C8u) { return; }
    }
    ctx->pc = 0x1F68C8u;
label_1f68c8:
    // 0x1f68c8: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x1F68C8u;
    {
        const bool branch_taken_0x1f68c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F68CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F68C8u;
            // 0x1f68cc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68c8) {
            ctx->pc = 0x1F691Cu;
            goto label_1f691c;
        }
    }
    ctx->pc = 0x1F68D0u;
label_1f68d0:
    // 0x1f68d0: 0xc07d774  jal         func_1F5DD0
    ctx->pc = 0x1F68D0u;
    SET_GPR_U32(ctx, 31, 0x1F68D8u);
    ctx->pc = 0x1F68D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F68D0u;
            // 0x1f68d4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5DD0u;
    if (runtime->hasFunction(0x1F5DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1F5DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F68D8u; }
        if (ctx->pc != 0x1F68D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5DD0_0x1f5dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F68D8u; }
        if (ctx->pc != 0x1F68D8u) { return; }
    }
    ctx->pc = 0x1F68D8u;
label_1f68d8:
    // 0x1f68d8: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1f68d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x1f68dc: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x1F68DCu;
    {
        const bool branch_taken_0x1f68dc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F68E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F68DCu;
            // 0x1f68e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68dc) {
            ctx->pc = 0x1F691Cu;
            goto label_1f691c;
        }
    }
    ctx->pc = 0x1F68E4u;
    // 0x1f68e4: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x1f68e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1f68e8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1F68E8u;
    {
        const bool branch_taken_0x1f68e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F68ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F68E8u;
            // 0x1f68ec: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f68e8) {
            ctx->pc = 0x1F691Cu;
            goto label_1f691c;
        }
    }
    ctx->pc = 0x1F68F0u;
    // 0x1f68f0: 0xae320018  sw          $s2, 0x18($s1)
    ctx->pc = 0x1f68f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
    // 0x1f68f4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x1f68f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x1f68f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f68f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f68fc: 0x24a5e968  addiu       $a1, $a1, -0x1698
    ctx->pc = 0x1f68fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961512));
    // 0x1f6900: 0xc07d9fc  jal         func_1F67F0
    ctx->pc = 0x1F6900u;
    SET_GPR_U32(ctx, 31, 0x1F6908u);
    ctx->pc = 0x1F6904u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6900u;
            // 0x1f6904: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F67F0u;
    goto label_1f67f0;
    ctx->pc = 0x1F6908u;
label_1f6908:
    // 0x1f6908: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x1f6908u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x1f690c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f690cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f6910: 0xc07d774  jal         func_1F5DD0
    ctx->pc = 0x1F6910u;
    SET_GPR_U32(ctx, 31, 0x1F6918u);
    ctx->pc = 0x1F6914u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6910u;
            // 0x1f6914: 0xae030014  sw          $v1, 0x14($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5DD0u;
    if (runtime->hasFunction(0x1F5DD0u)) {
        auto targetFn = runtime->lookupFunction(0x1F5DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6918u; }
        if (ctx->pc != 0x1F6918u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5DD0_0x1f5dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6918u; }
        if (ctx->pc != 0x1F6918u) { return; }
    }
    ctx->pc = 0x1F6918u;
label_1f6918:
    // 0x1f6918: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f691c:
    // 0x1f691c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f691cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6920: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f6920u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f6924: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f6924u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f6928: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f6928u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f692c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F692Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F692Cu;
            // 0x1f6930: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F6934u;
    // 0x1f6934: 0x0  nop
    ctx->pc = 0x1f6934u;
    // NOP
label_1f6938:
    // 0x1f6938: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6938u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f693c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f693cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6940: 0x8cc42018  lw          $a0, 0x2018($a2)
    ctx->pc = 0x1f6940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8216)));
    // 0x1f6944: 0xc07d7f4  jal         func_1F5FD0
    ctx->pc = 0x1F6944u;
    SET_GPR_U32(ctx, 31, 0x1F694Cu);
    ctx->pc = 0x1F6948u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6944u;
            // 0x1f6948: 0x24841198  addiu       $a0, $a0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F5FD0u;
    if (runtime->hasFunction(0x1F5FD0u)) {
        auto targetFn = runtime->lookupFunction(0x1F5FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F694Cu; }
        if (ctx->pc != 0x1F694Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F5FD0_0x1f5fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F694Cu; }
        if (ctx->pc != 0x1F694Cu) { return; }
    }
    ctx->pc = 0x1F694Cu;
label_1f694c:
    // 0x1f694c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f694cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f6954: 0x3e00008  jr          $ra
    ctx->pc = 0x1F6954u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F6954u;
            // 0x1f6958: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F695Cu;
    // 0x1f695c: 0x0  nop
    ctx->pc = 0x1f695cu;
    // NOP
label_1f6960:
    // 0x1f6960: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1f6960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1f6964: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1f6964u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1f6968: 0x8cc42018  lw          $a0, 0x2018($a2)
    ctx->pc = 0x1f6968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8216)));
    // 0x1f696c: 0xc07d834  jal         func_1F60D0
    ctx->pc = 0x1F696Cu;
    SET_GPR_U32(ctx, 31, 0x1F6974u);
    ctx->pc = 0x1F6970u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F696Cu;
            // 0x1f6970: 0x24841198  addiu       $a0, $a0, 0x1198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F60D0u;
    if (runtime->hasFunction(0x1F60D0u)) {
        auto targetFn = runtime->lookupFunction(0x1F60D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6974u; }
        if (ctx->pc != 0x1F6974u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F60D0_0x1f60d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F6974u; }
        if (ctx->pc != 0x1F6974u) { return; }
    }
    ctx->pc = 0x1F6974u;
label_1f6974:
    // 0x1f6974: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f6974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f6978: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1f6978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f697c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F697Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F6980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F697Cu;
            // 0x1f6980: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F6984u;
    // 0x1f6984: 0x0  nop
    ctx->pc = 0x1f6984u;
    // NOP
    ctx->pc = 0x1f6988u;
}
