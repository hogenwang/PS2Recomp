#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A8818
// Address: 0x2a8818 - 0x2a89c8
void sub_002A8818_0x2a8818(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A8818_0x2a8818");
#endif

    switch (ctx->pc) {
        case 0x2a8850u: goto label_2a8850;
        case 0x2a8864u: goto label_2a8864;
        case 0x2a8874u: goto label_2a8874;
        case 0x2a8884u: goto label_2a8884;
        case 0x2a8894u: goto label_2a8894;
        case 0x2a88a4u: goto label_2a88a4;
        case 0x2a88b4u: goto label_2a88b4;
        case 0x2a88d0u: goto label_2a88d0;
        case 0x2a8918u: goto label_2a8918;
        case 0x2a89a0u: goto label_2a89a0;
        default: break;
    }

    ctx->pc = 0x2a8818u;

    // 0x2a8818: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2a8818u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2a881c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2a881cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
    // 0x2a8820: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2a8820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
    // 0x2a8824: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2a8824u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8828: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2a8828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x2a882c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a882cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
    // 0x2a8830: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2a8830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
    // 0x2a8834: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2a8834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x2a8838: 0x8c90000c  lw          $s0, 0xC($a0)
    ctx->pc = 0x2a8838u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x2a883c: 0x8e110024  lw          $s1, 0x24($s0)
    ctx->pc = 0x2a883cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a8840: 0x16200006  bnez        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2A8840u;
    {
        const bool branch_taken_0x2a8840 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8840u;
            // 0x2a8844: 0xa0982d  daddu       $s3, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8840) {
            ctx->pc = 0x2A885Cu;
            goto label_2a885c;
        }
    }
    ctx->pc = 0x2A8848u;
    // 0x2a8848: 0xc0a5b7e  jal         func_296DF8
    ctx->pc = 0x2A8848u;
    SET_GPR_U32(ctx, 31, 0x2A8850u);
    ctx->pc = 0x296DF8u;
    if (runtime->hasFunction(0x296DF8u)) {
        auto targetFn = runtime->lookupFunction(0x296DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8850u; }
        if (ctx->pc != 0x2A8850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296DF8_0x296df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8850u; }
        if (ctx->pc != 0x2A8850u) { return; }
    }
    ctx->pc = 0x2A8850u;
label_2a8850:
    // 0x2a8850: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2a8850u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8854: 0x12200053  beqz        $s1, . + 4 + (0x53 << 2)
    ctx->pc = 0x2A8854u;
    {
        const bool branch_taken_0x2a8854 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A8858u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8854u;
            // 0x2a8858: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8854) {
            ctx->pc = 0x2A89A4u;
            goto label_2a89a4;
        }
    }
    ctx->pc = 0x2A885Cu;
label_2a885c:
    // 0x2a885c: 0xc0a5af6  jal         func_296BD8
    ctx->pc = 0x2A885Cu;
    SET_GPR_U32(ctx, 31, 0x2A8864u);
    ctx->pc = 0x2A8860u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A885Cu;
            // 0x2a8860: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296BD8u;
    if (runtime->hasFunction(0x296BD8u)) {
        auto targetFn = runtime->lookupFunction(0x296BD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8864u; }
        if (ctx->pc != 0x2A8864u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296BD8_0x296bd8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8864u; }
        if (ctx->pc != 0x2A8864u) { return; }
    }
    ctx->pc = 0x2A8864u;
label_2a8864:
    // 0x2a8864: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x2a8864u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2a8868: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2a8868u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a886c: 0xc0a5102  jal         func_294408
    ctx->pc = 0x2A886Cu;
    SET_GPR_U32(ctx, 31, 0x2A8874u);
    ctx->pc = 0x2A8870u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A886Cu;
            // 0x2a8870: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294408u;
    if (runtime->hasFunction(0x294408u)) {
        auto targetFn = runtime->lookupFunction(0x294408u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8874u; }
        if (ctx->pc != 0x2A8874u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294408_0x294408(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8874u; }
        if (ctx->pc != 0x2A8874u) { return; }
    }
    ctx->pc = 0x2A8874u;
label_2a8874:
    // 0x2a8874: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2a8874u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8878: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8878u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a887c: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2A887Cu;
    SET_GPR_U32(ctx, 31, 0x2A8884u);
    ctx->pc = 0x2A8880u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A887Cu;
            // 0x2a8880: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8884u; }
        if (ctx->pc != 0x2A8884u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8884u; }
        if (ctx->pc != 0x2A8884u) { return; }
    }
    ctx->pc = 0x2A8884u;
label_2a8884:
    // 0x2a8884: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8884u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a8888: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2a8888u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a888c: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2A888Cu;
    SET_GPR_U32(ctx, 31, 0x2A8894u);
    ctx->pc = 0x2A8890u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A888Cu;
            // 0x2a8890: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8894u; }
        if (ctx->pc != 0x2A8894u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A8894u; }
        if (ctx->pc != 0x2A8894u) { return; }
    }
    ctx->pc = 0x2A8894u;
label_2a8894:
    // 0x2a8894: 0x8e050018  lw          $a1, 0x18($s0)
    ctx->pc = 0x2a8894u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a8898: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a8898u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a889c: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2A889Cu;
    SET_GPR_U32(ctx, 31, 0x2A88A4u);
    ctx->pc = 0x2A88A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A889Cu;
            // 0x2a88a0: 0x24060018  addiu       $a2, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88A4u; }
        if (ctx->pc != 0x2A88A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88A4u; }
        if (ctx->pc != 0x2A88A4u) { return; }
    }
    ctx->pc = 0x2A88A4u;
label_2a88a4:
    // 0x2a88a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a88a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a88a8: 0x2605001c  addiu       $a1, $s0, 0x1C
    ctx->pc = 0x2a88a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x2a88ac: 0xc0a513c  jal         func_2944F0
    ctx->pc = 0x2A88ACu;
    SET_GPR_U32(ctx, 31, 0x2A88B4u);
    ctx->pc = 0x2A88B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A88ACu;
            // 0x2a88b0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2944F0u;
    if (runtime->hasFunction(0x2944F0u)) {
        auto targetFn = runtime->lookupFunction(0x2944F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88B4u; }
        if (ctx->pc != 0x2A88B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002944F0_0x2944f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88B4u; }
        if (ctx->pc != 0x2A88B4u) { return; }
    }
    ctx->pc = 0x2A88B4u;
label_2a88b4:
    // 0x2a88b4: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2a88b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2a88b8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a88b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a88bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2a88bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a88c0: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x2a88c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2a88c4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a88c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2a88c8: 0xc0a5148  jal         func_294520
    ctx->pc = 0x2A88C8u;
    SET_GPR_U32(ctx, 31, 0x2A88D0u);
    ctx->pc = 0x2A88CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A88C8u;
            // 0x2a88cc: 0xae02001c  sw          $v0, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (runtime->hasFunction(0x294520u)) {
        auto targetFn = runtime->lookupFunction(0x294520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88D0u; }
        if (ctx->pc != 0x2A88D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294520_0x294520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A88D0u; }
        if (ctx->pc != 0x2A88D0u) { return; }
    }
    ctx->pc = 0x2A88D0u;
label_2a88d0:
    // 0x2a88d0: 0x125fc3  sra         $t3, $s2, 31
    ctx->pc = 0x2a88d0u;
    SET_GPR_S32(ctx, 11, SRA32(GPR_S32(ctx, 18), 31));
    // 0x2a88d4: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x2a88d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x2a88d8: 0x24b2823  subu        $a1, $s2, $t3
    ctx->pc = 0x2a88d8u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x2a88dc: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x2a88dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a88e0: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2a88e0u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2a88e4: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2a88e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a88e8: 0x852018  mult        $a0, $a0, $a1
    ctx->pc = 0x2a88e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2a88ec: 0x50600001  beql        $v1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A88ECu;
    {
        const bool branch_taken_0x2a88ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a88ec) {
            ctx->pc = 0x2A88F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A88ECu;
            // 0x2a88f0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A88F4u;
            goto label_2a88f4;
        }
    }
    ctx->pc = 0x2A88F4u;
label_2a88f4:
    // 0x2a88f4: 0x83001b  divu        $zero, $a0, $v1
    ctx->pc = 0x2a88f4u;
    { uint32_t divisor = GPR_U32(ctx, 3); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x2a88f8: 0x5010  mfhi        $t2
    ctx->pc = 0x2a88f8u;
    SET_GPR_U64(ctx, 10, ctx->hi);
    // 0x2a88fc: 0x1451021  addu        $v0, $t2, $a1
    ctx->pc = 0x2a88fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 5)));
    // 0x2a8900: 0x43001a  div         $zero, $v0, $v1
    ctx->pc = 0x2a8900u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a8904: 0x6810  mfhi        $t5
    ctx->pc = 0x2a8904u;
    SET_GPR_U64(ctx, 13, ctx->hi);
    // 0x2a8908: 0x18a00020  blez        $a1, . + 4 + (0x20 << 2)
    ctx->pc = 0x2A8908u;
    {
        const bool branch_taken_0x2a8908 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x2A890Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8908u;
            // 0x2a890c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8908) {
            ctx->pc = 0x2A898Cu;
            goto label_2a898c;
        }
    }
    ctx->pc = 0x2A8910u;
    // 0x2a8910: 0x24090018  addiu       $t1, $zero, 0x18
    ctx->pc = 0x2a8910u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2a8914: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x2a8914u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a8918:
    // 0x2a8918: 0x1481021  addu        $v0, $t2, $t0
    ctx->pc = 0x2a8918u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x2a891c: 0x1a81821  addu        $v1, $t5, $t0
    ctx->pc = 0x2a891cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 13), GPR_U32(ctx, 8)));
    // 0x2a8920: 0x49001a  div         $zero, $v0, $t1
    ctx->pc = 0x2a8920u;
    { int32_t divisor = GPR_S32(ctx, 9);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x2a8924: 0x7069001a  div1        $zero, $v1, $t1
    ctx->pc = 0x2a8924u;
    { int32_t divisor = GPR_S32(ctx, 9); int32_t dividend = GPR_S32(ctx, 3); if (divisor != 0) {     if (divisor == -1 && dividend == INT32_MIN) {         ctx->lo1 = (uint64_t)(int64_t)INT32_MIN; ctx->hi1 = 0;     } else {         ctx->lo1 = (uint64_t)(int64_t)(dividend / divisor);         ctx->hi1 = (uint64_t)(int64_t)(dividend % divisor);     } } else {     ctx->lo1 = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi1 = (uint64_t)(int64_t)dividend; } }
    // 0x2a8928: 0x512c0001  beql        $t1, $t4, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A8928u;
    {
        const bool branch_taken_0x2a8928 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 12));
        if (branch_taken_0x2a8928) {
            ctx->pc = 0x2A892Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8928u;
            // 0x2a892c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8930u;
            goto label_2a8930;
        }
    }
    ctx->pc = 0x2A8930u;
label_2a8930:
    // 0x2a8930: 0x3a81021  addu        $v0, $sp, $t0
    ctx->pc = 0x2a8930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 8)));
    // 0x2a8934: 0x24b2823  subu        $a1, $s2, $t3
    ctx->pc = 0x2a8934u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 11)));
    // 0x2a8938: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a8938u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2a893c: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x2a893cu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x2a8940: 0x1051021  addu        $v0, $t0, $a1
    ctx->pc = 0x2a8940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
    // 0x2a8944: 0x3a23021  addu        $a2, $sp, $v0
    ctx->pc = 0x2a8944u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x2a8948: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x2a8948u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x2a894c: 0x105282a  slt         $a1, $t0, $a1
    ctx->pc = 0x2a894cu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x2a8950: 0x2010  mfhi        $a0
    ctx->pc = 0x2a8950u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x2a8954: 0x70003810  mfhi1       $a3
    ctx->pc = 0x2a8954u;
    SET_GPR_U64(ctx, 7, ctx->hi1);
    // 0x2a8958: 0x2042021  addu        $a0, $s0, $a0
    ctx->pc = 0x2a8958u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    // 0x2a895c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x2a895cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2a8960: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x2a8960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x2a8964: 0xa0820000  sb          $v0, 0x0($a0)
    ctx->pc = 0x2a8964u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a8968: 0x512c0001  beql        $t1, $t4, . + 4 + (0x1 << 2)
    ctx->pc = 0x2A8968u;
    {
        const bool branch_taken_0x2a8968 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 12));
        if (branch_taken_0x2a8968) {
            ctx->pc = 0x2A896Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8968u;
            // 0x2a896c: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A8970u;
            goto label_2a8970;
        }
    }
    ctx->pc = 0x2A8970u;
label_2a8970:
    // 0x2a8970: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x2a8970u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x2a8974: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x2a8974u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a8978: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x2a8978u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x2a897c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a897cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2a8980: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x2a8980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x2a8984: 0x14a0ffe4  bnez        $a1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2A8984u;
    {
        const bool branch_taken_0x2a8984 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8984u;
            // 0x2a8988: 0xa0620000  sb          $v0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8984) {
            ctx->pc = 0x2A8918u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a8918;
        }
    }
    ctx->pc = 0x2A898Cu;
label_2a898c:
    // 0x2a898c: 0x8e020024  lw          $v0, 0x24($s0)
    ctx->pc = 0x2a898cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    // 0x2a8990: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2A8990u;
    {
        const bool branch_taken_0x2a8990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A8994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8990u;
            // 0x2a8994: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a8990) {
            ctx->pc = 0x2A89A4u;
            goto label_2a89a4;
        }
    }
    ctx->pc = 0x2A8998u;
    // 0x2a8998: 0xc0a5b9c  jal         func_296E70
    ctx->pc = 0x2A8998u;
    SET_GPR_U32(ctx, 31, 0x2A89A0u);
    ctx->pc = 0x2A899Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A8998u;
            // 0x2a899c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (runtime->hasFunction(0x296E70u)) {
        auto targetFn = runtime->lookupFunction(0x296E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89A0u; }
        if (ctx->pc != 0x2A89A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296E70_0x296e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A89A0u; }
        if (ctx->pc != 0x2A89A0u) { return; }
    }
    ctx->pc = 0x2A89A0u;
label_2a89a0:
    // 0x2a89a0: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2a89a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2a89a4:
    // 0x2a89a4: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x2a89a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2a89a8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2a89a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2a89ac: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2a89acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2a89b0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a89b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2a89b4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2a89b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a89b8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2a89b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a89bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2A89BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A89C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A89BCu;
            // 0x2a89c0: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A89C4u;
    // 0x2a89c4: 0x0  nop
    ctx->pc = 0x2a89c4u;
    // NOP
    ctx->pc = 0x2a89c8u;
}
