#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0020B7D0
// Address: 0x20b7d0 - 0x20b9b0
void sub_0020B7D0_0x20b7d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0020B7D0_0x20b7d0");
#endif

    switch (ctx->pc) {
        case 0x20b838u: goto label_20b838;
        case 0x20b86cu: goto label_20b86c;
        case 0x20b8b4u: goto label_20b8b4;
        case 0x20b8e0u: goto label_20b8e0;
        case 0x20b928u: goto label_20b928;
        case 0x20b938u: goto label_20b938;
        case 0x20b988u: goto label_20b988;
        default: break;
    }

    ctx->pc = 0x20b7d0u;

    // 0x20b7d0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x20b7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x20b7d4: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x20b7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x20b7d8: 0x7fb50070  sq          $s5, 0x70($sp)
    ctx->pc = 0x20b7d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 21));
    // 0x20b7dc: 0x7fb40060  sq          $s4, 0x60($sp)
    ctx->pc = 0x20b7dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 20));
    // 0x20b7e0: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x20b7e0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7e4: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x20b7e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
    // 0x20b7e8: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x20b7e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7ec: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x20b7ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x20b7f0: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x20b7f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7f4: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x20b7f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x20b7f8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x20b7f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b7fc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x20b7fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x20b800: 0x120882d  daddu       $s1, $t1, $zero
    ctx->pc = 0x20b800u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b804: 0x95220008  lhu         $v0, 0x8($t1)
    ctx->pc = 0x20b804u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 8)));
    // 0x20b808: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x20b808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b80c: 0x95260006  lhu         $a2, 0x6($t1)
    ctx->pc = 0x20b80cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 6)));
    // 0x20b810: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20b810u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b814: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x20b814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b818: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x20b818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x20b81c: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x20b81cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x20b820: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20b820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20b824: 0x95220000  lhu         $v0, 0x0($t1)
    ctx->pc = 0x20b824u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 0)));
    // 0x20b828: 0x952a0002  lhu         $t2, 0x2($t1)
    ctx->pc = 0x20b828u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 2)));
    // 0x20b82c: 0x952b0004  lhu         $t3, 0x4($t1)
    ctx->pc = 0x20b82cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x20b830: 0xc0829bc  jal         func_20A6F0
    ctx->pc = 0x20B830u;
    SET_GPR_U32(ctx, 31, 0x20B838u);
    ctx->pc = 0x20B834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B830u;
            // 0x20b834: 0x40482d  daddu       $t1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A6F0u;
    if (runtime->hasFunction(0x20A6F0u)) {
        auto targetFn = runtime->lookupFunction(0x20A6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B838u; }
        if (ctx->pc != 0x20B838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A6F0_0x20a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B838u; }
        if (ctx->pc != 0x20B838u) { return; }
    }
    ctx->pc = 0x20B838u;
label_20b838:
    // 0x20b838: 0x96270020  lhu         $a3, 0x20($s1)
    ctx->pc = 0x20b838u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x20b83c: 0x2b31021  addu        $v0, $s5, $s3
    ctx->pc = 0x20b83cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
    // 0x20b840: 0x9626001e  lhu         $a2, 0x1E($s1)
    ctx->pc = 0x20b840u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x20b844: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20b844u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b848: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x20b848u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b84c: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x20b84cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x20b850: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x20b850u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x20b854: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20b854u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20b858: 0x96290018  lhu         $t1, 0x18($s1)
    ctx->pc = 0x20b858u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x20b85c: 0x962a001a  lhu         $t2, 0x1A($s1)
    ctx->pc = 0x20b85cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 26)));
    // 0x20b860: 0x962b001c  lhu         $t3, 0x1C($s1)
    ctx->pc = 0x20b860u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x20b864: 0xc0829bc  jal         func_20A6F0
    ctx->pc = 0x20B864u;
    SET_GPR_U32(ctx, 31, 0x20B86Cu);
    ctx->pc = 0x20B868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B864u;
            // 0x20b868: 0x462023  subu        $a0, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A6F0u;
    if (runtime->hasFunction(0x20A6F0u)) {
        auto targetFn = runtime->lookupFunction(0x20A6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B86Cu; }
        if (ctx->pc != 0x20B86Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A6F0_0x20a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B86Cu; }
        if (ctx->pc != 0x20B86Cu) { return; }
    }
    ctx->pc = 0x20B86Cu;
label_20b86c:
    // 0x20b86c: 0x96250006  lhu         $a1, 0x6($s1)
    ctx->pc = 0x20b86cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x20b870: 0x9623001e  lhu         $v1, 0x1E($s1)
    ctx->pc = 0x20b870u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
    // 0x20b874: 0x2652023  subu        $a0, $s3, $a1
    ctx->pc = 0x20b874u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 5)));
    // 0x20b878: 0x833023  subu        $a2, $a0, $v1
    ctx->pc = 0x20b878u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x20b87c: 0x58c0000e  blezl       $a2, . + 4 + (0xE << 2)
    ctx->pc = 0x20B87Cu;
    {
        const bool branch_taken_0x20b87c = (GPR_S32(ctx, 6) <= 0);
        if (branch_taken_0x20b87c) {
            ctx->pc = 0x20B880u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B87Cu;
            // 0x20b880: 0xdfbf0080  ld          $ra, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B8B8u;
            goto label_20b8b8;
        }
    }
    ctx->pc = 0x20B884u;
    // 0x20b884: 0x96270014  lhu         $a3, 0x14($s1)
    ctx->pc = 0x20b884u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 20)));
    // 0x20b888: 0x2a52021  addu        $a0, $s5, $a1
    ctx->pc = 0x20b888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 5)));
    // 0x20b88c: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x20b88cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x20b890: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x20b890u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b894: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20b894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20b898: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x20b898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x20b89c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x20b89cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x20b8a0: 0x9629000c  lhu         $t1, 0xC($s1)
    ctx->pc = 0x20b8a0u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x20b8a4: 0x962a000e  lhu         $t2, 0xE($s1)
    ctx->pc = 0x20b8a4u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 14)));
    // 0x20b8a8: 0x962b0010  lhu         $t3, 0x10($s1)
    ctx->pc = 0x20b8a8u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x20b8ac: 0xc0829bc  jal         func_20A6F0
    ctx->pc = 0x20B8ACu;
    SET_GPR_U32(ctx, 31, 0x20B8B4u);
    ctx->pc = 0x20B8B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8ACu;
            // 0x20b8b0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20A6F0u;
    if (runtime->hasFunction(0x20A6F0u)) {
        auto targetFn = runtime->lookupFunction(0x20A6F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8B4u; }
        if (ctx->pc != 0x20B8B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020A6F0_0x20a6f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B8B4u; }
        if (ctx->pc != 0x20B8B4u) { return; }
    }
    ctx->pc = 0x20B8B4u;
label_20b8b4:
    // 0x20b8b4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x20b8b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_20b8b8:
    // 0x20b8b8: 0x7bb50070  lq          $s5, 0x70($sp)
    ctx->pc = 0x20b8b8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x20b8bc: 0x7bb40060  lq          $s4, 0x60($sp)
    ctx->pc = 0x20b8bcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x20b8c0: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x20b8c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x20b8c4: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x20b8c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b8c8: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x20b8c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b8cc: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x20b8ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b8d0: 0x3e00008  jr          $ra
    ctx->pc = 0x20B8D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B8D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B8D0u;
            // 0x20b8d4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20B8D8u;
    // 0x20b8d8: 0x0  nop
    ctx->pc = 0x20b8d8u;
    // NOP
    // 0x20b8dc: 0x0  nop
    ctx->pc = 0x20b8dcu;
    // NOP
label_20b8e0:
    // 0x20b8e0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x20b8e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x20b8e4: 0x24080080  addiu       $t0, $zero, 0x80
    ctx->pc = 0x20b8e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x20b8e8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x20b8e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x20b8ec: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x20b8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x20b8f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x20b8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x20b8f4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x20b8f4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b8f8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x20b8f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x20b8fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x20b8fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b900: 0x94c70008  lhu         $a3, 0x8($a2)
    ctx->pc = 0x20b900u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x20b904: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x20b904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b908: 0x94c20006  lhu         $v0, 0x6($a2)
    ctx->pc = 0x20b908u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
    // 0x20b90c: 0xffa20000  sd          $v0, 0x0($sp)
    ctx->pc = 0x20b90cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 2));
    // 0x20b910: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x20b910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x20b914: 0x94c90000  lhu         $t1, 0x0($a2)
    ctx->pc = 0x20b914u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x20b918: 0x94ca0002  lhu         $t2, 0x2($a2)
    ctx->pc = 0x20b918u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
    // 0x20b91c: 0x94cb0004  lhu         $t3, 0x4($a2)
    ctx->pc = 0x20b91cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x20b920: 0xc082c08  jal         func_20B020
    ctx->pc = 0x20B920u;
    SET_GPR_U32(ctx, 31, 0x20B928u);
    ctx->pc = 0x20B924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B920u;
            // 0x20b924: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20B020u;
    if (runtime->hasFunction(0x20B020u)) {
        auto targetFn = runtime->lookupFunction(0x20B020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B928u; }
        if (ctx->pc != 0x20B928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020B020_0x20b020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B928u; }
        if (ctx->pc != 0x20B928u) { return; }
    }
    ctx->pc = 0x20B928u;
label_20b928:
    // 0x20b928: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x20b928u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20b92c: 0x1060001a  beqz        $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x20B92Cu;
    {
        const bool branch_taken_0x20b92c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b92c) {
            ctx->pc = 0x20B998u;
            goto label_20b998;
        }
    }
    ctx->pc = 0x20B934u;
    // 0x20b934: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x20b934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_20b938:
    // 0x20b938: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x20b938u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x20b93c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x20B93Cu;
    {
        const bool branch_taken_0x20b93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x20b93c) {
            ctx->pc = 0x20B950u;
            goto label_20b950;
        }
    }
    ctx->pc = 0x20B944u;
    // 0x20b944: 0x96020006  lhu         $v0, 0x6($s0)
    ctx->pc = 0x20b944u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x20b948: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x20B948u;
    {
        const bool branch_taken_0x20b948 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20B94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B948u;
            // 0x20b94c: 0x2429021  addu        $s2, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20b948) {
            ctx->pc = 0x20B958u;
            goto label_20b958;
        }
    }
    ctx->pc = 0x20B950u;
label_20b950:
    // 0x20b950: 0x96020008  lhu         $v0, 0x8($s0)
    ctx->pc = 0x20b950u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20b954: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x20b954u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_20b958:
    // 0x20b958: 0x2610000c  addiu       $s0, $s0, 0xC
    ctx->pc = 0x20b958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x20b95c: 0x96070008  lhu         $a3, 0x8($s0)
    ctx->pc = 0x20b95cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x20b960: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x20b960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b964: 0x96060006  lhu         $a2, 0x6($s0)
    ctx->pc = 0x20b964u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x20b968: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20b968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20b96c: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x20b96cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x20b970: 0xffa70008  sd          $a3, 0x8($sp)
    ctx->pc = 0x20b970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 7));
    // 0x20b974: 0x96090000  lhu         $t1, 0x0($s0)
    ctx->pc = 0x20b974u;
    SET_GPR_U32(ctx, 9, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x20b978: 0x960a0002  lhu         $t2, 0x2($s0)
    ctx->pc = 0x20b978u;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x20b97c: 0x960b0004  lhu         $t3, 0x4($s0)
    ctx->pc = 0x20b97cu;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x20b980: 0xc082c08  jal         func_20B020
    ctx->pc = 0x20B980u;
    SET_GPR_U32(ctx, 31, 0x20B988u);
    ctx->pc = 0x20B984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x20B980u;
            // 0x20b984: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x20B020u;
    if (runtime->hasFunction(0x20B020u)) {
        auto targetFn = runtime->lookupFunction(0x20B020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B988u; }
        if (ctx->pc != 0x20B988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0020B020_0x20b020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x20B988u; }
        if (ctx->pc != 0x20B988u) { return; }
    }
    ctx->pc = 0x20B988u;
label_20b988:
    // 0x20b988: 0x9603000a  lhu         $v1, 0xA($s0)
    ctx->pc = 0x20b988u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
    // 0x20b98c: 0x5460ffea  bnel        $v1, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x20B98Cu;
    {
        const bool branch_taken_0x20b98c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x20b98c) {
            ctx->pc = 0x20B990u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20B98Cu;
            // 0x20b990: 0x3062ffff  andi        $v0, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x20B938u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20b938;
        }
    }
    ctx->pc = 0x20B994u;
    // 0x20b994: 0x0  nop
    ctx->pc = 0x20b994u;
    // NOP
label_20b998:
    // 0x20b998: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x20b998u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x20b99c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x20b99cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x20b9a0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x20b9a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x20b9a4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x20b9a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x20b9a8: 0x3e00008  jr          $ra
    ctx->pc = 0x20B9A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20B9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20B9A8u;
            // 0x20b9ac: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20B9B0u;
    ctx->pc = 0x20b9b0u;
}
