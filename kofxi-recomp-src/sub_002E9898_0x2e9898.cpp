#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002E9898
// Address: 0x2e9898 - 0x2e9bc8
void sub_002E9898_0x2e9898(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E9898_0x2e9898");
#endif

    switch (ctx->pc) {
        case 0x2e98c8u: goto label_2e98c8;
        case 0x2e98f0u: goto label_2e98f0;
        case 0x2e9900u: goto label_2e9900;
        case 0x2e9924u: goto label_2e9924;
        case 0x2e9928u: goto label_2e9928;
        case 0x2e9938u: goto label_2e9938;
        case 0x2e9960u: goto label_2e9960;
        case 0x2e9970u: goto label_2e9970;
        case 0x2e9998u: goto label_2e9998;
        case 0x2e99c8u: goto label_2e99c8;
        case 0x2e99d8u: goto label_2e99d8;
        case 0x2e9a00u: goto label_2e9a00;
        case 0x2e9a10u: goto label_2e9a10;
        case 0x2e9a38u: goto label_2e9a38;
        case 0x2e9a68u: goto label_2e9a68;
        case 0x2e9a98u: goto label_2e9a98;
        case 0x2e9ac8u: goto label_2e9ac8;
        case 0x2e9ae8u: goto label_2e9ae8;
        case 0x2e9b00u: goto label_2e9b00;
        case 0x2e9b38u: goto label_2e9b38;
        case 0x2e9b58u: goto label_2e9b58;
        case 0x2e9ba8u: goto label_2e9ba8;
        case 0x2e9bb8u: goto label_2e9bb8;
        default: break;
    }

    ctx->pc = 0x2e9898u;

    // 0x2e9898: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2e9898u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2e989c: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x2e989cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e98a0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2e98a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2e98a4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e98a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98a8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e98a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e98ac: 0x26306c80  addiu       $s0, $s1, 0x6C80
    ctx->pc = 0x2e98acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 27776));
    // 0x2e98b0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2e98b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x2e98b4: 0x26254e48  addiu       $a1, $s1, 0x4E48
    ctx->pc = 0x2e98b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20040));
    // 0x2e98b8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e98b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98bc: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2e98bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2e98c0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E98C0u;
    SET_GPR_U32(ctx, 31, 0x2E98C8u);
    ctx->pc = 0x2E98C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E98C0u;
            // 0x2e98c4: 0x26327cc4  addiu       $s2, $s1, 0x7CC4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 31940));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E98C8u; }
        if (ctx->pc != 0x2E98C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E98C8u; }
        if (ctx->pc != 0x2E98C8u) { return; }
    }
    ctx->pc = 0x2E98C8u;
label_2e98c8:
    // 0x2e98c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e98c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98cc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e98ccu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98d0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e98d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e98d4: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x2e98d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2e98d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e98d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98dc: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x2e98dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e98e0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e98e0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98e4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e98e4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98e8: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2E98E8u;
    SET_GPR_U32(ctx, 31, 0x2E98F0u);
    ctx->pc = 0x2E98ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E98E8u;
            // 0x2e98ec: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E98F0u; }
        if (ctx->pc != 0x2E98F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E98F0u; }
        if (ctx->pc != 0x2E98F0u) { return; }
    }
    ctx->pc = 0x2E98F0u;
label_2e98f0:
    // 0x2e98f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e98f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e98f4: 0x26255248  addiu       $a1, $s1, 0x5248
    ctx->pc = 0x2e98f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 21064));
    // 0x2e98f8: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E98F8u;
    SET_GPR_U32(ctx, 31, 0x2E9900u);
    ctx->pc = 0x2E98FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E98F8u;
            // 0x2e98fc: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9900u; }
        if (ctx->pc != 0x2E9900u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9900u; }
        if (ctx->pc != 0x2E9900u) { return; }
    }
    ctx->pc = 0x2E9900u;
label_2e9900:
    // 0x2e9900: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9900u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9904: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e9904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9908: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e9908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e990c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2e990cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9910: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9910u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9914: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e9914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e9918: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e991c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e991cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9920: 0xc098b12  jal         func_262C48
label_2e9924:
    if (ctx->pc == 0x2E9924u) {
        ctx->pc = 0x2E9924u;
            // 0x2e9924: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2E9928u;
        goto label_2e9928;
    }
    ctx->pc = 0x2E9920u;
    SET_GPR_U32(ctx, 31, 0x2E9928u);
    ctx->pc = 0x2E9924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9920u;
            // 0x2e9924: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9928u; }
        if (ctx->pc != 0x2E9928u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9928u; }
        if (ctx->pc != 0x2E9928u) { return; }
    }
    ctx->pc = 0x2E9928u;
label_2e9928:
    // 0x2e9928: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9928u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e992c: 0x26255348  addiu       $a1, $s1, 0x5348
    ctx->pc = 0x2e992cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 21320));
    // 0x2e9930: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E9930u;
    SET_GPR_U32(ctx, 31, 0x2E9938u);
    ctx->pc = 0x2E9934u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9930u;
            // 0x2e9934: 0x24060400  addiu       $a2, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9938u; }
        if (ctx->pc != 0x2E9938u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9938u; }
        if (ctx->pc != 0x2E9938u) { return; }
    }
    ctx->pc = 0x2E9938u;
label_2e9938:
    // 0x2e9938: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9938u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e993c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e993cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9940: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e9940u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e9944: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x2e9944u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2e9948: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9948u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e994c: 0x24080400  addiu       $t0, $zero, 0x400
    ctx->pc = 0x2e994cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x2e9950: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9950u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9954: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e9954u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9958: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2E9958u;
    SET_GPR_U32(ctx, 31, 0x2E9960u);
    ctx->pc = 0x2E995Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9958u;
            // 0x2e995c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9960u; }
        if (ctx->pc != 0x2E9960u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9960u; }
        if (ctx->pc != 0x2E9960u) { return; }
    }
    ctx->pc = 0x2E9960u;
label_2e9960:
    // 0x2e9960: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9960u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9964: 0x26255748  addiu       $a1, $s1, 0x5748
    ctx->pc = 0x2e9964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 22344));
    // 0x2e9968: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E9968u;
    SET_GPR_U32(ctx, 31, 0x2E9970u);
    ctx->pc = 0x2E996Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9968u;
            // 0x2e996c: 0x24060300  addiu       $a2, $zero, 0x300 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9970u; }
        if (ctx->pc != 0x2E9970u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9970u; }
        if (ctx->pc != 0x2E9970u) { return; }
    }
    ctx->pc = 0x2E9970u;
label_2e9970:
    // 0x2e9970: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9974: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e9974u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9978: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e9978u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e997c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e997cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e9980: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9980u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9984: 0x24080300  addiu       $t0, $zero, 0x300
    ctx->pc = 0x2e9984u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
    // 0x2e9988: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9988u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e998c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e998cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9990: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2E9990u;
    SET_GPR_U32(ctx, 31, 0x2E9998u);
    ctx->pc = 0x2E9994u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9990u;
            // 0x2e9994: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9998u; }
        if (ctx->pc != 0x2E9998u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9998u; }
        if (ctx->pc != 0x2E9998u) { return; }
    }
    ctx->pc = 0x2E9998u;
label_2e9998:
    // 0x2e9998: 0x92225a48  lbu         $v0, 0x5A48($s1)
    ctx->pc = 0x2e9998u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 23112)));
    // 0x2e999c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e999cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e99a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e99a4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e99a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99a8: 0xae226c80  sw          $v0, 0x6C80($s1)
    ctx->pc = 0x2e99a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 27776), GPR_U32(ctx, 2));
    // 0x2e99ac: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x2e99acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x2e99b0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e99b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99b4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2e99b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e99b8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e99b8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99bc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e99bcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99c0: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2E99C0u;
    SET_GPR_U32(ctx, 31, 0x2E99C8u);
    ctx->pc = 0x2E99C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E99C0u;
            // 0x2e99c4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99C8u; }
        if (ctx->pc != 0x2E99C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99C8u; }
        if (ctx->pc != 0x2E99C8u) { return; }
    }
    ctx->pc = 0x2E99C8u;
label_2e99c8:
    // 0x2e99c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e99c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99cc: 0x26255a49  addiu       $a1, $s1, 0x5A49
    ctx->pc = 0x2e99ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23113));
    // 0x2e99d0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E99D0u;
    SET_GPR_U32(ctx, 31, 0x2E99D8u);
    ctx->pc = 0x2E99D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E99D0u;
            // 0x2e99d4: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99D8u; }
        if (ctx->pc != 0x2E99D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E99D8u; }
        if (ctx->pc != 0x2E99D8u) { return; }
    }
    ctx->pc = 0x2E99D8u;
label_2e99d8:
    // 0x2e99d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e99d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99dc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e99dcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99e0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e99e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e99e4: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e99e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2e99e8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e99e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99ec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e99ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e99f0: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e99f0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e99f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e99f8: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2E99F8u;
    SET_GPR_U32(ctx, 31, 0x2E9A00u);
    ctx->pc = 0x2E99FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E99F8u;
            // 0x2e99fc: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A00u; }
        if (ctx->pc != 0x2E9A00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A00u; }
        if (ctx->pc != 0x2E9A00u) { return; }
    }
    ctx->pc = 0x2E9A00u;
label_2e9a00:
    // 0x2e9a00: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e9a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a04: 0x26255b49  addiu       $a1, $s1, 0x5B49
    ctx->pc = 0x2e9a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 23369));
    // 0x2e9a08: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x2E9A08u;
    SET_GPR_U32(ctx, 31, 0x2E9A10u);
    ctx->pc = 0x2E9A0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A08u;
            // 0x2e9a0c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A10u; }
        if (ctx->pc != 0x2E9A10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A10u; }
        if (ctx->pc != 0x2E9A10u) { return; }
    }
    ctx->pc = 0x2E9A10u;
label_2e9a10:
    // 0x2e9a10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9a10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a14: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e9a14u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a18: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e9a18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e9a1c: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2e9a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2e9a20: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9a20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2e9a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2e9a28: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9a28u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a2c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e9a2cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a30: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2E9A30u;
    SET_GPR_U32(ctx, 31, 0x2E9A38u);
    ctx->pc = 0x2E9A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A30u;
            // 0x2e9a34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A38u; }
        if (ctx->pc != 0x2E9A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A38u; }
        if (ctx->pc != 0x2E9A38u) { return; }
    }
    ctx->pc = 0x2E9A38u;
label_2e9a38:
    // 0x2e9a38: 0x8e225c4c  lw          $v0, 0x5C4C($s1)
    ctx->pc = 0x2e9a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23628)));
    // 0x2e9a3c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9a3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a40: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e9a40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e9a44: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e9a44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a48: 0xae226c80  sw          $v0, 0x6C80($s1)
    ctx->pc = 0x2e9a48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 27776), GPR_U32(ctx, 2));
    // 0x2e9a4c: 0x2405000a  addiu       $a1, $zero, 0xA
    ctx->pc = 0x2e9a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x2e9a50: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9a50u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a54: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2e9a54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9a58: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9a58u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a5c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e9a5cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a60: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2E9A60u;
    SET_GPR_U32(ctx, 31, 0x2E9A68u);
    ctx->pc = 0x2E9A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A60u;
            // 0x2e9a64: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A68u; }
        if (ctx->pc != 0x2E9A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A68u; }
        if (ctx->pc != 0x2E9A68u) { return; }
    }
    ctx->pc = 0x2E9A68u;
label_2e9a68:
    // 0x2e9a68: 0x8e225c50  lw          $v0, 0x5C50($s1)
    ctx->pc = 0x2e9a68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23632)));
    // 0x2e9a6c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9a6cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a70: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e9a70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e9a74: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e9a74u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a78: 0xae226c80  sw          $v0, 0x6C80($s1)
    ctx->pc = 0x2e9a78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 27776), GPR_U32(ctx, 2));
    // 0x2e9a7c: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x2e9a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x2e9a80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9a80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a84: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2e9a84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9a88: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9a88u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a8c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e9a8cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9a90: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2E9A90u;
    SET_GPR_U32(ctx, 31, 0x2E9A98u);
    ctx->pc = 0x2E9A94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9A90u;
            // 0x2e9a94: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A98u; }
        if (ctx->pc != 0x2E9A98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9A98u; }
        if (ctx->pc != 0x2E9A98u) { return; }
    }
    ctx->pc = 0x2E9A98u;
label_2e9a98:
    // 0x2e9a98: 0x8e225c58  lw          $v0, 0x5C58($s1)
    ctx->pc = 0x2e9a98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 23640)));
    // 0x2e9a9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2e9a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9aa0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e9aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e9aa4: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e9aa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9aa8: 0xae226c80  sw          $v0, 0x6C80($s1)
    ctx->pc = 0x2e9aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 27776), GPR_U32(ctx, 2));
    // 0x2e9aac: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x2e9aacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2e9ab0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9ab0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ab4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x2e9ab4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9ab8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2e9ab8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9abc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2e9abcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ac0: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2E9AC0u;
    SET_GPR_U32(ctx, 31, 0x2E9AC8u);
    ctx->pc = 0x2E9AC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9AC0u;
            // 0x2e9ac4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9AC8u; }
        if (ctx->pc != 0x2E9AC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9AC8u; }
        if (ctx->pc != 0x2E9AC8u) { return; }
    }
    ctx->pc = 0x2E9AC8u;
label_2e9ac8:
    // 0x2e9ac8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2e9ac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2e9acc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e9accu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9ad0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2e9ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e9ad4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2e9ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9ad8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e9ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9adc: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9ADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9ADCu;
            // 0x2e9ae0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9AE4u;
    // 0x2e9ae4: 0x0  nop
    ctx->pc = 0x2e9ae4u;
    // NOP
label_2e9ae8:
    // 0x2e9ae8: 0x8c820284  lw          $v0, 0x284($a0)
    ctx->pc = 0x2e9ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 644)));
    // 0x2e9aec: 0x8c830280  lw          $v1, 0x280($a0)
    ctx->pc = 0x2e9aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 640)));
    // 0x2e9af0: 0xac827f5c  sw          $v0, 0x7F5C($a0)
    ctx->pc = 0x2e9af0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 32604), GPR_U32(ctx, 2));
    // 0x2e9af4: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9AF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9AF4u;
            // 0x2e9af8: 0xac837f7c  sw          $v1, 0x7F7C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32636), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9AFCu;
    // 0x2e9afc: 0x0  nop
    ctx->pc = 0x2e9afcu;
    // NOP
label_2e9b00:
    // 0x2e9b00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2e9b00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2e9b04: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2e9b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9b08: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2e9b08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2e9b0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9b0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b10: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2e9b10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2e9b14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2e9b18: 0x26047cc4  addiu       $a0, $s0, 0x7CC4
    ctx->pc = 0x2e9b18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 31940));
    // 0x2e9b1c: 0x26096c80  addiu       $t1, $s0, 0x6C80
    ctx->pc = 0x2e9b1cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 27776));
    // 0x2e9b20: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e9b20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e9b24: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9b24u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b28: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9b28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b2c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2e9b2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9b30: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2E9B30u;
    SET_GPR_U32(ctx, 31, 0x2E9B38u);
    ctx->pc = 0x2E9B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B30u;
            // 0x2e9b34: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B38u; }
        if (ctx->pc != 0x2E9B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9B38u; }
        if (ctx->pc != 0x2E9B38u) { return; }
    }
    ctx->pc = 0x2E9B38u;
label_2e9b38:
    // 0x2e9b38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e9b38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2e9b3c: 0xae007ff0  sw          $zero, 0x7FF0($s0)
    ctx->pc = 0x2e9b3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32752), GPR_U32(ctx, 0));
    // 0x2e9b40: 0xae025c60  sw          $v0, 0x5C60($s0)
    ctx->pc = 0x2e9b40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23648), GPR_U32(ctx, 2));
    // 0x2e9b44: 0xae025c5c  sw          $v0, 0x5C5C($s0)
    ctx->pc = 0x2e9b44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 23644), GPR_U32(ctx, 2));
    // 0x2e9b48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2e9b48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e9b4c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2e9b4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9b50: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9B50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B50u;
            // 0x2e9b54: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9B58u;
label_2e9b58:
    // 0x2e9b58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2e9b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2e9b5c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2e9b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2e9b60: 0x8c835c60  lw          $v1, 0x5C60($a0)
    ctx->pc = 0x2e9b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 23648)));
    // 0x2e9b64: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x2e9b64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x2e9b68: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2E9B68u;
    {
        const bool branch_taken_0x2e9b68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E9B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B68u;
            // 0x2e9b6c: 0x24896c80  addiu       $t1, $a0, 0x6C80 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 27776));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b68) {
            ctx->pc = 0x2E9B84u;
            goto label_2e9b84;
        }
    }
    ctx->pc = 0x2E9B70u;
    // 0x2e9b70: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2e9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2e9b74: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2E9B74u;
    {
        const bool branch_taken_0x2e9b74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E9B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9B74u;
            // 0x2e9b78: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e9b74) {
            ctx->pc = 0x2E9B84u;
            goto label_2e9b84;
        }
    }
    ctx->pc = 0x2E9B7Cu;
    // 0x2e9b7c: 0xac825c60  sw          $v0, 0x5C60($a0)
    ctx->pc = 0x2e9b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 23648), GPR_U32(ctx, 2));
    // 0x2e9b80: 0x24896c80  addiu       $t1, $a0, 0x6C80
    ctx->pc = 0x2e9b80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 27776));
label_2e9b84:
    // 0x2e9b84: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x2e9b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x2e9b88: 0x24847cc4  addiu       $a0, $a0, 0x7CC4
    ctx->pc = 0x2e9b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31940));
    // 0x2e9b8c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2e9b8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2e9b90: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e9b90u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b94: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2e9b94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b98: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2e9b98u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e9b9c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x2e9b9cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9ba0: 0xc098b12  jal         func_262C48
    ctx->pc = 0x2E9BA0u;
    SET_GPR_U32(ctx, 31, 0x2E9BA8u);
    ctx->pc = 0x2E9BA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9BA0u;
            // 0x2e9ba4: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262C48u;
    if (runtime->hasFunction(0x262C48u)) {
        auto targetFn = runtime->lookupFunction(0x262C48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9BA8u; }
        if (ctx->pc != 0x2E9BA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262C48_0x262c48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2E9BA8u; }
        if (ctx->pc != 0x2E9BA8u) { return; }
    }
    ctx->pc = 0x2E9BA8u;
label_2e9ba8:
    // 0x2e9ba8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2e9ba8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e9bac: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9BACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9BACu;
            // 0x2e9bb0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9BB4u;
    // 0x2e9bb4: 0x0  nop
    ctx->pc = 0x2e9bb4u;
    // NOP
label_2e9bb8:
    // 0x2e9bb8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2e9bbc: 0xac825c60  sw          $v0, 0x5C60($a0)
    ctx->pc = 0x2e9bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 23648), GPR_U32(ctx, 2));
    // 0x2e9bc0: 0x3e00008  jr          $ra
    ctx->pc = 0x2E9BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E9BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2E9BC0u;
            // 0x2e9bc4: 0xac825c5c  sw          $v0, 0x5C5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 23644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2E9BC8u;
    ctx->pc = 0x2e9bc8u;
}
