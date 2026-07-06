#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F9828
// Address: 0x1f9828 - 0x1f9920
void sub_001F9828_0x1f9828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9828_0x1f9828");
#endif

    switch (ctx->pc) {
        case 0x1f9828u: goto label_1f9828;
        case 0x1f982cu: goto label_1f982c;
        case 0x1f9830u: goto label_1f9830;
        case 0x1f9834u: goto label_1f9834;
        case 0x1f9838u: goto label_1f9838;
        case 0x1f983cu: goto label_1f983c;
        case 0x1f9840u: goto label_1f9840;
        case 0x1f9844u: goto label_1f9844;
        case 0x1f9848u: goto label_1f9848;
        case 0x1f984cu: goto label_1f984c;
        case 0x1f9850u: goto label_1f9850;
        case 0x1f9854u: goto label_1f9854;
        case 0x1f9858u: goto label_1f9858;
        case 0x1f985cu: goto label_1f985c;
        case 0x1f9860u: goto label_1f9860;
        case 0x1f9864u: goto label_1f9864;
        case 0x1f9868u: goto label_1f9868;
        case 0x1f986cu: goto label_1f986c;
        case 0x1f9870u: goto label_1f9870;
        case 0x1f9874u: goto label_1f9874;
        case 0x1f9878u: goto label_1f9878;
        case 0x1f987cu: goto label_1f987c;
        case 0x1f9880u: goto label_1f9880;
        case 0x1f9884u: goto label_1f9884;
        case 0x1f9888u: goto label_1f9888;
        case 0x1f988cu: goto label_1f988c;
        case 0x1f9890u: goto label_1f9890;
        case 0x1f9894u: goto label_1f9894;
        case 0x1f9898u: goto label_1f9898;
        case 0x1f989cu: goto label_1f989c;
        case 0x1f98a0u: goto label_1f98a0;
        case 0x1f98a4u: goto label_1f98a4;
        case 0x1f98a8u: goto label_1f98a8;
        case 0x1f98acu: goto label_1f98ac;
        case 0x1f98b0u: goto label_1f98b0;
        case 0x1f98b4u: goto label_1f98b4;
        case 0x1f98b8u: goto label_1f98b8;
        case 0x1f98bcu: goto label_1f98bc;
        case 0x1f98c0u: goto label_1f98c0;
        case 0x1f98c4u: goto label_1f98c4;
        case 0x1f98c8u: goto label_1f98c8;
        case 0x1f98ccu: goto label_1f98cc;
        case 0x1f98d0u: goto label_1f98d0;
        case 0x1f98d4u: goto label_1f98d4;
        case 0x1f98d8u: goto label_1f98d8;
        case 0x1f98dcu: goto label_1f98dc;
        case 0x1f98e0u: goto label_1f98e0;
        case 0x1f98e4u: goto label_1f98e4;
        case 0x1f98e8u: goto label_1f98e8;
        case 0x1f98ecu: goto label_1f98ec;
        case 0x1f98f0u: goto label_1f98f0;
        case 0x1f98f4u: goto label_1f98f4;
        case 0x1f98f8u: goto label_1f98f8;
        case 0x1f98fcu: goto label_1f98fc;
        case 0x1f9900u: goto label_1f9900;
        case 0x1f9904u: goto label_1f9904;
        case 0x1f9908u: goto label_1f9908;
        case 0x1f990cu: goto label_1f990c;
        case 0x1f9910u: goto label_1f9910;
        case 0x1f9914u: goto label_1f9914;
        case 0x1f9918u: goto label_1f9918;
        case 0x1f991cu: goto label_1f991c;
        default: break;
    }

    ctx->pc = 0x1f9828u;

label_1f9828:
    // 0x1f9828: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f9828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1f982c:
    // 0x1f982c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1f9830:
    // 0x1f9830: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f9830u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1f9834:
    // 0x1f9834: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1f9838:
    // 0x1f9838: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9838u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1f983c:
    // 0x1f983c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1f9840:
    // 0x1f9840: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f9840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1f9844:
    // 0x1f9844: 0xc07b648  jal         func_1ED920
label_1f9848:
    if (ctx->pc == 0x1F9848u) {
        ctx->pc = 0x1F9848u;
            // 0x1f9848: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1F984Cu;
        goto label_1f984c;
    }
    ctx->pc = 0x1F9844u;
    SET_GPR_U32(ctx, 31, 0x1F984Cu);
    ctx->pc = 0x1F9848u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9844u;
            // 0x1f9848: 0xae200000  sw          $zero, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (runtime->hasFunction(0x1ED920u)) {
        auto targetFn = runtime->lookupFunction(0x1ED920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F984Cu; }
        if (ctx->pc != 0x1F984Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED920_0x1ed920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F984Cu; }
        if (ctx->pc != 0x1F984Cu) { return; }
    }
    ctx->pc = 0x1F984Cu;
label_1f984c:
    // 0x1f984c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_1f9850:
    if (ctx->pc == 0x1F9850u) {
        ctx->pc = 0x1F9850u;
            // 0x1f9850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9854u;
        goto label_1f9854;
    }
    ctx->pc = 0x1F984Cu;
    {
        const bool branch_taken_0x1f984c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F9850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F984Cu;
            // 0x1f9850: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f984c) {
            ctx->pc = 0x1F9878u;
            goto label_1f9878;
        }
    }
    ctx->pc = 0x1F9854u;
label_1f9854:
    // 0x1f9854: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f9854u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
label_1f9858:
    // 0x1f9858: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9858u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f985c:
    // 0x1f985c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f985cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f9860:
    // 0x1f9860: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f9860u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9864:
    // 0x1f9864: 0x34a50136  ori         $a1, $a1, 0x136
    ctx->pc = 0x1f9864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)310);
label_1f9868:
    // 0x1f9868: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f9868u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f986c:
    // 0x1f986c: 0x807b5c0  j           func_1ED700
label_1f9870:
    if (ctx->pc == 0x1F9870u) {
        ctx->pc = 0x1F9870u;
            // 0x1f9870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F9874u;
        goto label_1f9874;
    }
    ctx->pc = 0x1F986Cu;
    ctx->pc = 0x1F9870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F986Cu;
            // 0x1f9870: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    if (runtime->hasFunction(0x1ED700u)) {
        auto targetFn = runtime->lookupFunction(0x1ED700u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1F9874u;
label_1f9874:
    // 0x1f9874: 0x0  nop
    ctx->pc = 0x1f9874u;
    // NOP
label_1f9878:
    // 0x1f9878: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f9878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f987c:
    // 0x1f987c: 0xc07e672  jal         func_1F99C8
label_1f9880:
    if (ctx->pc == 0x1F9880u) {
        ctx->pc = 0x1F9880u;
            // 0x1f9880: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1F9884u;
        goto label_1f9884;
    }
    ctx->pc = 0x1F987Cu;
    SET_GPR_U32(ctx, 31, 0x1F9884u);
    ctx->pc = 0x1F9880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F987Cu;
            // 0x1f9880: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1F99C8u;
    if (runtime->hasFunction(0x1F99C8u)) {
        auto targetFn = runtime->lookupFunction(0x1F99C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9884u; }
        if (ctx->pc != 0x1F9884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001F99C8_0x1f99c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F9884u; }
        if (ctx->pc != 0x1F9884u) { return; }
    }
    ctx->pc = 0x1F9884u;
label_1f9884:
    // 0x1f9884: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_1f9888:
    if (ctx->pc == 0x1F9888u) {
        ctx->pc = 0x1F9888u;
            // 0x1f9888: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1F988Cu;
        goto label_1f988c;
    }
    ctx->pc = 0x1F9884u;
    {
        const bool branch_taken_0x1f9884 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f9884) {
            ctx->pc = 0x1F9888u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9884u;
            // 0x1f9888: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9908u;
            goto label_1f9908;
        }
    }
    ctx->pc = 0x1F988Cu;
label_1f988c:
    // 0x1f988c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f988cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1f9890:
    // 0x1f9890: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x1f9890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_1f9894:
    // 0x1f9894: 0x2406000b  addiu       $a2, $zero, 0xB
    ctx->pc = 0x1f9894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_1f9898:
    // 0x1f9898: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x1f9898u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f989c:
    // 0x1f989c: 0xc07f662  jal         func_1FD988
label_1f98a0:
    if (ctx->pc == 0x1F98A0u) {
        ctx->pc = 0x1F98A0u;
            // 0x1f98a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F98A4u;
        goto label_1f98a4;
    }
    ctx->pc = 0x1F989Cu;
    SET_GPR_U32(ctx, 31, 0x1F98A4u);
    ctx->pc = 0x1F98A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F989Cu;
            // 0x1f98a0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1FD988u;
    if (runtime->hasFunction(0x1FD988u)) {
        auto targetFn = runtime->lookupFunction(0x1FD988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98A4u; }
        if (ctx->pc != 0x1F98A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD988_0x1fd988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98A4u; }
        if (ctx->pc != 0x1F98A4u) { return; }
    }
    ctx->pc = 0x1F98A4u;
label_1f98a4:
    // 0x1f98a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f98a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1f98a8:
    // 0x1f98a8: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1f98a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f98ac:
    // 0x1f98ac: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1f98b0:
    if (ctx->pc == 0x1F98B0u) {
        ctx->pc = 0x1F98B0u;
            // 0x1f98b0: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->pc = 0x1F98B4u;
        goto label_1f98b4;
    }
    ctx->pc = 0x1F98ACu;
    {
        const bool branch_taken_0x1f98ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F98B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98ACu;
            // 0x1f98b0: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f98ac) {
            ctx->pc = 0x1F98E8u;
            goto label_1f98e8;
        }
    }
    ctx->pc = 0x1F98B4u;
label_1f98b4:
    // 0x1f98b4: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1f98b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_1f98b8:
    // 0x1f98b8: 0x8e02096c  lw          $v0, 0x96C($s0)
    ctx->pc = 0x1f98b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2412)));
label_1f98bc:
    // 0x1f98bc: 0x5462000a  bnel        $v1, $v0, . + 4 + (0xA << 2)
label_1f98c0:
    if (ctx->pc == 0x1F98C0u) {
        ctx->pc = 0x1F98C0u;
            // 0x1f98c0: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->pc = 0x1F98C4u;
        goto label_1f98c4;
    }
    ctx->pc = 0x1F98BCu;
    {
        const bool branch_taken_0x1f98bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1f98bc) {
            ctx->pc = 0x1F98C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98BCu;
            // 0x1f98c0: 0x3c020039  lui         $v0, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F98E8u;
            goto label_1f98e8;
        }
    }
    ctx->pc = 0x1F98C4u;
label_1f98c4:
    // 0x1f98c4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_1f98c8:
    if (ctx->pc == 0x1F98C8u) {
        ctx->pc = 0x1F98C8u;
            // 0x1f98c8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x1F98CCu;
        goto label_1f98cc;
    }
    ctx->pc = 0x1F98C4u;
    {
        const bool branch_taken_0x1f98c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1f98c4) {
            ctx->pc = 0x1F98C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98C4u;
            // 0x1f98c8: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F98E0u;
            goto label_1f98e0;
        }
    }
    ctx->pc = 0x1F98CCu;
label_1f98cc:
    // 0x1f98cc: 0xc07f446  jal         func_1FD118
label_1f98d0:
    if (ctx->pc == 0x1F98D0u) {
        ctx->pc = 0x1F98D4u;
        goto label_1f98d4;
    }
    ctx->pc = 0x1F98CCu;
    SET_GPR_U32(ctx, 31, 0x1F98D4u);
    ctx->pc = 0x1FD118u;
    if (runtime->hasFunction(0x1FD118u)) {
        auto targetFn = runtime->lookupFunction(0x1FD118u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98D4u; }
        if (ctx->pc != 0x1F98D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001FD118_0x1fd118(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F98D4u; }
        if (ctx->pc != 0x1F98D4u) { return; }
    }
    ctx->pc = 0x1F98D4u;
label_1f98d4:
    // 0x1f98d4: 0x8e030968  lw          $v1, 0x968($s0)
    ctx->pc = 0x1f98d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 2408)));
label_1f98d8:
    // 0x1f98d8: 0xfe0237d8  sd          $v0, 0x37D8($s0)
    ctx->pc = 0x1f98d8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 14296), GPR_U64(ctx, 2));
label_1f98dc:
    // 0x1f98dc: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1f98dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1f98e0:
    // 0x1f98e0: 0xae020968  sw          $v0, 0x968($s0)
    ctx->pc = 0x1f98e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2408), GPR_U32(ctx, 2));
label_1f98e4:
    // 0x1f98e4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1f98e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1f98e8:
    // 0x1f98e8: 0x8c421794  lw          $v0, 0x1794($v0)
    ctx->pc = 0x1f98e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6036)));
label_1f98ec:
    // 0x1f98ec: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1f98f0:
    if (ctx->pc == 0x1F98F0u) {
        ctx->pc = 0x1F98F0u;
            // 0x1f98f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F98F4u;
        goto label_1f98f4;
    }
    ctx->pc = 0x1F98ECu;
    {
        const bool branch_taken_0x1f98ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f98ec) {
            ctx->pc = 0x1F98F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98ECu;
            // 0x1f98f0: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F9904u;
            goto label_1f9904;
        }
    }
    ctx->pc = 0x1F98F4u;
label_1f98f4:
    // 0x1f98f4: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x1f98f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1f98f8:
    // 0x1f98f8: 0x40f809  jalr        $v0
label_1f98fc:
    if (ctx->pc == 0x1F98FCu) {
        ctx->pc = 0x1F98FCu;
            // 0x1f98fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1F9900u;
        goto label_1f9900;
    }
    ctx->pc = 0x1F98F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1F9900u);
        ctx->pc = 0x1F98FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F98F8u;
            // 0x1f98fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1F9900u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1F9900u; }
            if (ctx->pc != 0x1F9900u) { return; }
        }
        }
    }
    ctx->pc = 0x1F9900u;
label_1f9900:
    // 0x1f9900: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1f9900u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1f9904:
    // 0x1f9904: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f9904u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1f9908:
    // 0x1f9908: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f9908u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1f990c:
    // 0x1f990c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f990cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1f9910:
    // 0x1f9910: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f9910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1f9914:
    // 0x1f9914: 0x3e00008  jr          $ra
label_1f9918:
    if (ctx->pc == 0x1F9918u) {
        ctx->pc = 0x1F9918u;
            // 0x1f9918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1F991Cu;
        goto label_1f991c;
    }
    ctx->pc = 0x1F9914u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F9918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F9914u;
            // 0x1f9918: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F991Cu;
label_1f991c:
    // 0x1f991c: 0x0  nop
    ctx->pc = 0x1f991cu;
    // NOP
    ctx->pc = 0x1f9920u;
}
