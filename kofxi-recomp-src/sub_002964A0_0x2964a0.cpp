#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002964A0
// Address: 0x2964a0 - 0x2965f8
void sub_002964A0_0x2964a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002964A0_0x2964a0");
#endif

    switch (ctx->pc) {
        case 0x2964a0u: goto label_2964a0;
        case 0x2964a4u: goto label_2964a4;
        case 0x2964a8u: goto label_2964a8;
        case 0x2964acu: goto label_2964ac;
        case 0x2964b0u: goto label_2964b0;
        case 0x2964b4u: goto label_2964b4;
        case 0x2964b8u: goto label_2964b8;
        case 0x2964bcu: goto label_2964bc;
        case 0x2964c0u: goto label_2964c0;
        case 0x2964c4u: goto label_2964c4;
        case 0x2964c8u: goto label_2964c8;
        case 0x2964ccu: goto label_2964cc;
        case 0x2964d0u: goto label_2964d0;
        case 0x2964d4u: goto label_2964d4;
        case 0x2964d8u: goto label_2964d8;
        case 0x2964dcu: goto label_2964dc;
        case 0x2964e0u: goto label_2964e0;
        case 0x2964e4u: goto label_2964e4;
        case 0x2964e8u: goto label_2964e8;
        case 0x2964ecu: goto label_2964ec;
        case 0x2964f0u: goto label_2964f0;
        case 0x2964f4u: goto label_2964f4;
        case 0x2964f8u: goto label_2964f8;
        case 0x2964fcu: goto label_2964fc;
        case 0x296500u: goto label_296500;
        case 0x296504u: goto label_296504;
        case 0x296508u: goto label_296508;
        case 0x29650cu: goto label_29650c;
        case 0x296510u: goto label_296510;
        case 0x296514u: goto label_296514;
        case 0x296518u: goto label_296518;
        case 0x29651cu: goto label_29651c;
        case 0x296520u: goto label_296520;
        case 0x296524u: goto label_296524;
        case 0x296528u: goto label_296528;
        case 0x29652cu: goto label_29652c;
        case 0x296530u: goto label_296530;
        case 0x296534u: goto label_296534;
        case 0x296538u: goto label_296538;
        case 0x29653cu: goto label_29653c;
        case 0x296540u: goto label_296540;
        case 0x296544u: goto label_296544;
        case 0x296548u: goto label_296548;
        case 0x29654cu: goto label_29654c;
        case 0x296550u: goto label_296550;
        case 0x296554u: goto label_296554;
        case 0x296558u: goto label_296558;
        case 0x29655cu: goto label_29655c;
        case 0x296560u: goto label_296560;
        case 0x296564u: goto label_296564;
        case 0x296568u: goto label_296568;
        case 0x29656cu: goto label_29656c;
        case 0x296570u: goto label_296570;
        case 0x296574u: goto label_296574;
        case 0x296578u: goto label_296578;
        case 0x29657cu: goto label_29657c;
        case 0x296580u: goto label_296580;
        case 0x296584u: goto label_296584;
        case 0x296588u: goto label_296588;
        case 0x29658cu: goto label_29658c;
        case 0x296590u: goto label_296590;
        case 0x296594u: goto label_296594;
        case 0x296598u: goto label_296598;
        case 0x29659cu: goto label_29659c;
        case 0x2965a0u: goto label_2965a0;
        case 0x2965a4u: goto label_2965a4;
        case 0x2965a8u: goto label_2965a8;
        case 0x2965acu: goto label_2965ac;
        case 0x2965b0u: goto label_2965b0;
        case 0x2965b4u: goto label_2965b4;
        case 0x2965b8u: goto label_2965b8;
        case 0x2965bcu: goto label_2965bc;
        case 0x2965c0u: goto label_2965c0;
        case 0x2965c4u: goto label_2965c4;
        case 0x2965c8u: goto label_2965c8;
        case 0x2965ccu: goto label_2965cc;
        case 0x2965d0u: goto label_2965d0;
        case 0x2965d4u: goto label_2965d4;
        case 0x2965d8u: goto label_2965d8;
        case 0x2965dcu: goto label_2965dc;
        case 0x2965e0u: goto label_2965e0;
        case 0x2965e4u: goto label_2965e4;
        case 0x2965e8u: goto label_2965e8;
        case 0x2965ecu: goto label_2965ec;
        case 0x2965f0u: goto label_2965f0;
        case 0x2965f4u: goto label_2965f4;
        default: break;
    }

    ctx->pc = 0x2964a0u;

label_2964a0:
    // 0x2964a0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x2964a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_2964a4:
    // 0x2964a4: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2964a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2964a8:
    // 0x2964a8: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2964a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2964ac:
    // 0x2964ac: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2964acu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2964b0:
    // 0x2964b0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2964b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2964b4:
    // 0x2964b4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2964b4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2964b8:
    // 0x2964b8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2964b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2964bc:
    // 0x2964bc: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2964bcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2964c0:
    // 0x2964c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2964c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2964c4:
    // 0x2964c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2964c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2964c8:
    // 0x2964c8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x2964c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_2964cc:
    // 0x2964cc: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x2964ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2964d0:
    // 0x2964d0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2964d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2964d4:
    // 0x2964d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2964d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2964d8:
    // 0x2964d8: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2964d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2964dc:
    // 0x2964dc: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x2964dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2964e0:
    // 0x2964e0: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x2964e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2964e4:
    // 0x2964e4: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
label_2964e8:
    if (ctx->pc == 0x2964E8u) {
        ctx->pc = 0x2964E8u;
            // 0x2964e8: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2964ECu;
        goto label_2964ec;
    }
    ctx->pc = 0x2964E4u;
    {
        const bool branch_taken_0x2964e4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x2964E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2964E4u;
            // 0x2964e8: 0xaec00000  sw          $zero, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964e4) {
            ctx->pc = 0x2964F4u;
            goto label_2964f4;
        }
    }
    ctx->pc = 0x2964ECu;
label_2964ec:
    // 0x2964ec: 0x14900039  bne         $a0, $s0, . + 4 + (0x39 << 2)
label_2964f0:
    if (ctx->pc == 0x2964F0u) {
        ctx->pc = 0x2964F0u;
            // 0x2964f0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x2964F4u;
        goto label_2964f4;
    }
    ctx->pc = 0x2964ECu;
    {
        const bool branch_taken_0x2964ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 16));
        ctx->pc = 0x2964F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2964ECu;
            // 0x2964f0: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964ec) {
            ctx->pc = 0x2965D4u;
            goto label_2965d4;
        }
    }
    ctx->pc = 0x2964F4u;
label_2964f4:
    // 0x2964f4: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
label_2964f8:
    if (ctx->pc == 0x2964F8u) {
        ctx->pc = 0x2964F8u;
            // 0x2964f8: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->pc = 0x2964FCu;
        goto label_2964fc;
    }
    ctx->pc = 0x2964F4u;
    {
        const bool branch_taken_0x2964f4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2964F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2964F4u;
            // 0x2964f8: 0x911021  addu        $v0, $a0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2964f4) {
            ctx->pc = 0x296578u;
            goto label_296578;
        }
    }
    ctx->pc = 0x2964FCu;
label_2964fc:
    // 0x2964fc: 0x50102a  slt         $v0, $v0, $s0
    ctx->pc = 0x2964fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_296500:
    // 0x296500: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_296504:
    if (ctx->pc == 0x296504u) {
        ctx->pc = 0x296504u;
            // 0x296504: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296508u;
        goto label_296508;
    }
    ctx->pc = 0x296500u;
    {
        const bool branch_taken_0x296500 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x296504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296500u;
            // 0x296504: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296500) {
            ctx->pc = 0x296528u;
            goto label_296528;
        }
    }
    ctx->pc = 0x296508u;
label_296508:
    // 0x296508: 0x922021  addu        $a0, $a0, $s2
    ctx->pc = 0x296508u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_29650c:
    // 0x29650c: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x29650cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_296510:
    // 0x296510: 0xc049c48  jal         func_127120
label_296514:
    if (ctx->pc == 0x296514u) {
        ctx->pc = 0x296514u;
            // 0x296514: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296518u;
        goto label_296518;
    }
    ctx->pc = 0x296510u;
    SET_GPR_U32(ctx, 31, 0x296518u);
    ctx->pc = 0x296514u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x296510u;
            // 0x296514: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296518u; }
        if (ctx->pc != 0x296518u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296518u; }
        if (ctx->pc != 0x296518u) { return; }
    }
    ctx->pc = 0x296518u;
label_296518:
    // 0x296518: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x296518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_29651c:
    // 0x29651c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x29651cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_296520:
    // 0x296520: 0x1000002b  b           . + 4 + (0x2B << 2)
label_296524:
    if (ctx->pc == 0x296524u) {
        ctx->pc = 0x296524u;
            // 0x296524: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x296528u;
        goto label_296528;
    }
    ctx->pc = 0x296520u;
    {
        const bool branch_taken_0x296520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x296524u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296520u;
            // 0x296524: 0xae430008  sw          $v1, 0x8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x296520) {
            ctx->pc = 0x2965D0u;
            goto label_2965d0;
        }
    }
    ctx->pc = 0x296528u;
label_296528:
    // 0x296528: 0x2049823  subu        $s3, $s0, $a0
    ctx->pc = 0x296528u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_29652c:
    // 0x29652c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_296530:
    if (ctx->pc == 0x296530u) {
        ctx->pc = 0x296530u;
            // 0x296530: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->pc = 0x296534u;
        goto label_296534;
    }
    ctx->pc = 0x29652Cu;
    {
        const bool branch_taken_0x29652c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x296530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29652Cu;
            // 0x296530: 0x922021  addu        $a0, $a0, $s2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29652c) {
            ctx->pc = 0x296544u;
            goto label_296544;
        }
    }
    ctx->pc = 0x296534u;
label_296534:
    // 0x296534: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x296534u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_296538:
    // 0x296538: 0x2484004c  addiu       $a0, $a0, 0x4C
    ctx->pc = 0x296538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 76));
label_29653c:
    // 0x29653c: 0xc049c48  jal         func_127120
label_296540:
    if (ctx->pc == 0x296540u) {
        ctx->pc = 0x296540u;
            // 0x296540: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296544u;
        goto label_296544;
    }
    ctx->pc = 0x29653Cu;
    SET_GPR_U32(ctx, 31, 0x296544u);
    ctx->pc = 0x296540u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29653Cu;
            // 0x296540: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296544u; }
        if (ctx->pc != 0x296544u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x296544u; }
        if (ctx->pc != 0x296544u) { return; }
    }
    ctx->pc = 0x296544u;
label_296544:
    // 0x296544: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x296544u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_296548:
    // 0x296548: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x296548u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29654c:
    // 0x29654c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x29654cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_296550:
    // 0x296550: 0x2646004c  addiu       $a2, $s2, 0x4C
    ctx->pc = 0x296550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_296554:
    // 0x296554: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x296554u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_296558:
    // 0x296558: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x296558u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29655c:
    // 0x29655c: 0x293a021  addu        $s4, $s4, $s3
    ctx->pc = 0x29655cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_296560:
    // 0x296560: 0x60f809  jalr        $v1
label_296564:
    if (ctx->pc == 0x296564u) {
        ctx->pc = 0x296564u;
            // 0x296564: 0x2338823  subu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->pc = 0x296568u;
        goto label_296568;
    }
    ctx->pc = 0x296560u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x296568u);
        ctx->pc = 0x296564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x296560u;
            // 0x296564: 0x2338823  subu        $s1, $s1, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x296568u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x296568u; }
            if (ctx->pc != 0x296568u) { return; }
        }
        }
    }
    ctx->pc = 0x296568u;
label_296568:
    // 0x296568: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x296568u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_29656c:
    // 0x29656c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x29656cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_296570:
    // 0x296570: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x296570u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_296574:
    // 0x296574: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x296574u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_296578:
    // 0x296578: 0x230001a  div         $zero, $s1, $s0
    ctx->pc = 0x296578u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 17);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_29657c:
    // 0x29657c: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_296580:
    if (ctx->pc == 0x296580u) {
        ctx->pc = 0x296580u;
            // 0x296580: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x296584u;
        goto label_296584;
    }
    ctx->pc = 0x29657Cu;
    {
        const bool branch_taken_0x29657c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x29657c) {
            ctx->pc = 0x296580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29657Cu;
            // 0x296580: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x296584u;
            goto label_296584;
        }
    }
    ctx->pc = 0x296584u;
label_296584:
    // 0x296584: 0x9810  mfhi        $s3
    ctx->pc = 0x296584u;
    SET_GPR_U64(ctx, 19, ctx->hi);
label_296588:
    // 0x296588: 0x2338823  subu        $s1, $s1, $s3
    ctx->pc = 0x296588u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 19)));
label_29658c:
    // 0x29658c: 0x1a20000a  blez        $s1, . + 4 + (0xA << 2)
label_296590:
    if (ctx->pc == 0x296590u) {
        ctx->pc = 0x296590u;
            // 0x296590: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x296594u;
        goto label_296594;
    }
    ctx->pc = 0x29658Cu;
    {
        const bool branch_taken_0x29658c = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x296590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29658Cu;
            // 0x296590: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29658c) {
            ctx->pc = 0x2965B8u;
            goto label_2965b8;
        }
    }
    ctx->pc = 0x296594u;
label_296594:
    // 0x296594: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x296594u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_296598:
    // 0x296598: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x296598u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_29659c:
    // 0x29659c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x29659cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2965a0:
    // 0x2965a0: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x2965a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_2965a4:
    // 0x2965a4: 0x60f809  jalr        $v1
label_2965a8:
    if (ctx->pc == 0x2965A8u) {
        ctx->pc = 0x2965A8u;
            // 0x2965a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2965ACu;
        goto label_2965ac;
    }
    ctx->pc = 0x2965A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2965ACu);
        ctx->pc = 0x2965A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2965A4u;
            // 0x2965a8: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2965ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2965ACu; }
            if (ctx->pc != 0x2965ACu) { return; }
        }
        }
    }
    ctx->pc = 0x2965ACu;
label_2965ac:
    // 0x2965ac: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2965acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2965b0:
    // 0x2965b0: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2965b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2965b4:
    // 0x2965b4: 0xaec20000  sw          $v0, 0x0($s6)
    ctx->pc = 0x2965b4u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 2));
label_2965b8:
    // 0x2965b8: 0x12600004  beqz        $s3, . + 4 + (0x4 << 2)
label_2965bc:
    if (ctx->pc == 0x2965BCu) {
        ctx->pc = 0x2965BCu;
            // 0x2965bc: 0x2912821  addu        $a1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->pc = 0x2965C0u;
        goto label_2965c0;
    }
    ctx->pc = 0x2965B8u;
    {
        const bool branch_taken_0x2965b8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2965BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2965B8u;
            // 0x2965bc: 0x2912821  addu        $a1, $s4, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2965b8) {
            ctx->pc = 0x2965CCu;
            goto label_2965cc;
        }
    }
    ctx->pc = 0x2965C0u;
label_2965c0:
    // 0x2965c0: 0x2644004c  addiu       $a0, $s2, 0x4C
    ctx->pc = 0x2965c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 76));
label_2965c4:
    // 0x2965c4: 0xc049c48  jal         func_127120
label_2965c8:
    if (ctx->pc == 0x2965C8u) {
        ctx->pc = 0x2965C8u;
            // 0x2965c8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2965CCu;
        goto label_2965cc;
    }
    ctx->pc = 0x2965C4u;
    SET_GPR_U32(ctx, 31, 0x2965CCu);
    ctx->pc = 0x2965C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2965C4u;
            // 0x2965c8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2965CCu; }
        if (ctx->pc != 0x2965CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2965CCu; }
        if (ctx->pc != 0x2965CCu) { return; }
    }
    ctx->pc = 0x2965CCu;
label_2965cc:
    // 0x2965cc: 0xae530008  sw          $s3, 0x8($s2)
    ctx->pc = 0x2965ccu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 19));
label_2965d0:
    // 0x2965d0: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x2965d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2965d4:
    // 0x2965d4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2965d4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2965d8:
    // 0x2965d8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2965d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2965dc:
    // 0x2965dc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2965dcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2965e0:
    // 0x2965e0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2965e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2965e4:
    // 0x2965e4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2965e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2965e8:
    // 0x2965e8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2965e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2965ec:
    // 0x2965ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2965ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2965f0:
    // 0x2965f0: 0x3e00008  jr          $ra
label_2965f4:
    if (ctx->pc == 0x2965F4u) {
        ctx->pc = 0x2965F4u;
            // 0x2965f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x2965F8u;
        goto label_fallthrough_0x2965f0;
    }
    ctx->pc = 0x2965F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2965F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2965F0u;
            // 0x2965f4: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2965f0:
    ctx->pc = 0x2965F8u;
    ctx->pc = 0x2965f8u;
}
