#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001CD4F0
// Address: 0x1cd4f0 - 0x1cd6f8
void sub_001CD4F0_0x1cd4f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CD4F0_0x1cd4f0");
#endif

    switch (ctx->pc) {
        case 0x1cd4f0u: goto label_1cd4f0;
        case 0x1cd4f4u: goto label_1cd4f4;
        case 0x1cd4f8u: goto label_1cd4f8;
        case 0x1cd4fcu: goto label_1cd4fc;
        case 0x1cd500u: goto label_1cd500;
        case 0x1cd504u: goto label_1cd504;
        case 0x1cd508u: goto label_1cd508;
        case 0x1cd50cu: goto label_1cd50c;
        case 0x1cd510u: goto label_1cd510;
        case 0x1cd514u: goto label_1cd514;
        case 0x1cd518u: goto label_1cd518;
        case 0x1cd51cu: goto label_1cd51c;
        case 0x1cd520u: goto label_1cd520;
        case 0x1cd524u: goto label_1cd524;
        case 0x1cd528u: goto label_1cd528;
        case 0x1cd52cu: goto label_1cd52c;
        case 0x1cd530u: goto label_1cd530;
        case 0x1cd534u: goto label_1cd534;
        case 0x1cd538u: goto label_1cd538;
        case 0x1cd53cu: goto label_1cd53c;
        case 0x1cd540u: goto label_1cd540;
        case 0x1cd544u: goto label_1cd544;
        case 0x1cd548u: goto label_1cd548;
        case 0x1cd54cu: goto label_1cd54c;
        case 0x1cd550u: goto label_1cd550;
        case 0x1cd554u: goto label_1cd554;
        case 0x1cd558u: goto label_1cd558;
        case 0x1cd55cu: goto label_1cd55c;
        case 0x1cd560u: goto label_1cd560;
        case 0x1cd564u: goto label_1cd564;
        case 0x1cd568u: goto label_1cd568;
        case 0x1cd56cu: goto label_1cd56c;
        case 0x1cd570u: goto label_1cd570;
        case 0x1cd574u: goto label_1cd574;
        case 0x1cd578u: goto label_1cd578;
        case 0x1cd57cu: goto label_1cd57c;
        case 0x1cd580u: goto label_1cd580;
        case 0x1cd584u: goto label_1cd584;
        case 0x1cd588u: goto label_1cd588;
        case 0x1cd58cu: goto label_1cd58c;
        case 0x1cd590u: goto label_1cd590;
        case 0x1cd594u: goto label_1cd594;
        case 0x1cd598u: goto label_1cd598;
        case 0x1cd59cu: goto label_1cd59c;
        case 0x1cd5a0u: goto label_1cd5a0;
        case 0x1cd5a4u: goto label_1cd5a4;
        case 0x1cd5a8u: goto label_1cd5a8;
        case 0x1cd5acu: goto label_1cd5ac;
        case 0x1cd5b0u: goto label_1cd5b0;
        case 0x1cd5b4u: goto label_1cd5b4;
        case 0x1cd5b8u: goto label_1cd5b8;
        case 0x1cd5bcu: goto label_1cd5bc;
        case 0x1cd5c0u: goto label_1cd5c0;
        case 0x1cd5c4u: goto label_1cd5c4;
        case 0x1cd5c8u: goto label_1cd5c8;
        case 0x1cd5ccu: goto label_1cd5cc;
        case 0x1cd5d0u: goto label_1cd5d0;
        case 0x1cd5d4u: goto label_1cd5d4;
        case 0x1cd5d8u: goto label_1cd5d8;
        case 0x1cd5dcu: goto label_1cd5dc;
        case 0x1cd5e0u: goto label_1cd5e0;
        case 0x1cd5e4u: goto label_1cd5e4;
        case 0x1cd5e8u: goto label_1cd5e8;
        case 0x1cd5ecu: goto label_1cd5ec;
        case 0x1cd5f0u: goto label_1cd5f0;
        case 0x1cd5f4u: goto label_1cd5f4;
        case 0x1cd5f8u: goto label_1cd5f8;
        case 0x1cd5fcu: goto label_1cd5fc;
        case 0x1cd600u: goto label_1cd600;
        case 0x1cd604u: goto label_1cd604;
        case 0x1cd608u: goto label_1cd608;
        case 0x1cd60cu: goto label_1cd60c;
        case 0x1cd610u: goto label_1cd610;
        case 0x1cd614u: goto label_1cd614;
        case 0x1cd618u: goto label_1cd618;
        case 0x1cd61cu: goto label_1cd61c;
        case 0x1cd620u: goto label_1cd620;
        case 0x1cd624u: goto label_1cd624;
        case 0x1cd628u: goto label_1cd628;
        case 0x1cd62cu: goto label_1cd62c;
        case 0x1cd630u: goto label_1cd630;
        case 0x1cd634u: goto label_1cd634;
        case 0x1cd638u: goto label_1cd638;
        case 0x1cd63cu: goto label_1cd63c;
        case 0x1cd640u: goto label_1cd640;
        case 0x1cd644u: goto label_1cd644;
        case 0x1cd648u: goto label_1cd648;
        case 0x1cd64cu: goto label_1cd64c;
        case 0x1cd650u: goto label_1cd650;
        case 0x1cd654u: goto label_1cd654;
        case 0x1cd658u: goto label_1cd658;
        case 0x1cd65cu: goto label_1cd65c;
        case 0x1cd660u: goto label_1cd660;
        case 0x1cd664u: goto label_1cd664;
        case 0x1cd668u: goto label_1cd668;
        case 0x1cd66cu: goto label_1cd66c;
        case 0x1cd670u: goto label_1cd670;
        case 0x1cd674u: goto label_1cd674;
        case 0x1cd678u: goto label_1cd678;
        case 0x1cd67cu: goto label_1cd67c;
        case 0x1cd680u: goto label_1cd680;
        case 0x1cd684u: goto label_1cd684;
        case 0x1cd688u: goto label_1cd688;
        case 0x1cd68cu: goto label_1cd68c;
        case 0x1cd690u: goto label_1cd690;
        case 0x1cd694u: goto label_1cd694;
        case 0x1cd698u: goto label_1cd698;
        case 0x1cd69cu: goto label_1cd69c;
        case 0x1cd6a0u: goto label_1cd6a0;
        case 0x1cd6a4u: goto label_1cd6a4;
        case 0x1cd6a8u: goto label_1cd6a8;
        case 0x1cd6acu: goto label_1cd6ac;
        case 0x1cd6b0u: goto label_1cd6b0;
        case 0x1cd6b4u: goto label_1cd6b4;
        case 0x1cd6b8u: goto label_1cd6b8;
        case 0x1cd6bcu: goto label_1cd6bc;
        case 0x1cd6c0u: goto label_1cd6c0;
        case 0x1cd6c4u: goto label_1cd6c4;
        case 0x1cd6c8u: goto label_1cd6c8;
        case 0x1cd6ccu: goto label_1cd6cc;
        case 0x1cd6d0u: goto label_1cd6d0;
        case 0x1cd6d4u: goto label_1cd6d4;
        case 0x1cd6d8u: goto label_1cd6d8;
        case 0x1cd6dcu: goto label_1cd6dc;
        case 0x1cd6e0u: goto label_1cd6e0;
        case 0x1cd6e4u: goto label_1cd6e4;
        case 0x1cd6e8u: goto label_1cd6e8;
        case 0x1cd6ecu: goto label_1cd6ec;
        case 0x1cd6f0u: goto label_1cd6f0;
        case 0x1cd6f4u: goto label_1cd6f4;
        default: break;
    }

    ctx->pc = 0x1cd4f0u;

label_1cd4f0:
    // 0x1cd4f0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd4f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cd4f4:
    // 0x1cd4f4: 0x3c030039  lui         $v1, 0x39
    ctx->pc = 0x1cd4f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57 << 16));
label_1cd4f8:
    // 0x1cd4f8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cd4fc:
    // 0x1cd4fc: 0x2463d9e4  addiu       $v1, $v1, -0x261C
    ctx->pc = 0x1cd4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957540));
label_1cd500:
    // 0x1cd500: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1cd500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1cd504:
    // 0x1cd504: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1cd504u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1cd508:
    // 0x1cd508: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1cd50c:
    if (ctx->pc == 0x1CD50Cu) {
        ctx->pc = 0x1CD50Cu;
            // 0x1cd50c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1CD510u;
        goto label_1cd510;
    }
    ctx->pc = 0x1CD508u;
    {
        const bool branch_taken_0x1cd508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD50Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD508u;
            // 0x1cd50c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd508) {
            ctx->pc = 0x1CD520u;
            goto label_1cd520;
        }
    }
    ctx->pc = 0x1CD510u;
label_1cd510:
    // 0x1cd510: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd510u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd514:
    // 0x1cd514: 0x8070950  j           func_1C2540
label_1cd518:
    if (ctx->pc == 0x1CD518u) {
        ctx->pc = 0x1CD518u;
            // 0x1cd518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CD51Cu;
        goto label_1cd51c;
    }
    ctx->pc = 0x1CD514u;
    ctx->pc = 0x1CD518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD514u;
            // 0x1cd518: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2540u;
    if (runtime->hasFunction(0x1C2540u)) {
        auto targetFn = runtime->lookupFunction(0x1C2540u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C2540_0x1c2540(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CD51Cu;
label_1cd51c:
    // 0x1cd51c: 0x0  nop
    ctx->pc = 0x1cd51cu;
    // NOP
label_1cd520:
    // 0x1cd520: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd520u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd524:
    // 0x1cd524: 0x3e00008  jr          $ra
label_1cd528:
    if (ctx->pc == 0x1CD528u) {
        ctx->pc = 0x1CD528u;
            // 0x1cd528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CD52Cu;
        goto label_1cd52c;
    }
    ctx->pc = 0x1CD524u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD524u;
            // 0x1cd528: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD52Cu;
label_1cd52c:
    // 0x1cd52c: 0x0  nop
    ctx->pc = 0x1cd52cu;
    // NOP
label_1cd530:
    // 0x1cd530: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cd530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1cd534:
    // 0x1cd534: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1cd534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1cd538:
    // 0x1cd538: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1cd538u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd53c:
    // 0x1cd53c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1cd53cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1cd540:
    // 0x1cd540: 0x16000009  bnez        $s0, . + 4 + (0x9 << 2)
label_1cd544:
    if (ctx->pc == 0x1CD544u) {
        ctx->pc = 0x1CD544u;
            // 0x1cd544: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1CD548u;
        goto label_1cd548;
    }
    ctx->pc = 0x1CD540u;
    {
        const bool branch_taken_0x1cd540 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD540u;
            // 0x1cd544: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd540) {
            ctx->pc = 0x1CD568u;
            goto label_1cd568;
        }
    }
    ctx->pc = 0x1CD548u;
label_1cd548:
    // 0x1cd548: 0x0  nop
    ctx->pc = 0x1cd548u;
    // NOP
label_1cd54c:
    // 0x1cd54c: 0x0  nop
    ctx->pc = 0x1cd54cu;
    // NOP
label_1cd550:
    // 0x1cd550: 0x0  nop
    ctx->pc = 0x1cd550u;
    // NOP
label_1cd554:
    // 0x1cd554: 0x0  nop
    ctx->pc = 0x1cd554u;
    // NOP
label_1cd558:
    // 0x1cd558: 0x0  nop
    ctx->pc = 0x1cd558u;
    // NOP
label_1cd55c:
    // 0x1cd55c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1cd560:
    if (ctx->pc == 0x1CD560u) {
        ctx->pc = 0x1CD564u;
        goto label_1cd564;
    }
    ctx->pc = 0x1CD55Cu;
    {
        const bool branch_taken_0x1cd55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd55c) {
            ctx->pc = 0x1CD548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd548;
        }
    }
    ctx->pc = 0x1CD564u;
label_1cd564:
    // 0x1cd564: 0x0  nop
    ctx->pc = 0x1cd564u;
    // NOP
label_1cd568:
    // 0x1cd568: 0xc0729fa  jal         func_1CA7E8
label_1cd56c:
    if (ctx->pc == 0x1CD56Cu) {
        ctx->pc = 0x1CD56Cu;
            // 0x1cd56c: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CD570u;
        goto label_1cd570;
    }
    ctx->pc = 0x1CD568u;
    SET_GPR_U32(ctx, 31, 0x1CD570u);
    ctx->pc = 0x1CD56Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD568u;
            // 0x1cd56c: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD570u; }
        if (ctx->pc != 0x1CD570u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD570u; }
        if (ctx->pc != 0x1CD570u) { return; }
    }
    ctx->pc = 0x1CD570u;
label_1cd570:
    // 0x1cd570: 0x5a200012  blezl       $s1, . + 4 + (0x12 << 2)
label_1cd574:
    if (ctx->pc == 0x1CD574u) {
        ctx->pc = 0x1CD574u;
            // 0x1cd574: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CD578u;
        goto label_1cd578;
    }
    ctx->pc = 0x1CD570u;
    {
        const bool branch_taken_0x1cd570 = (GPR_S32(ctx, 17) <= 0);
        if (branch_taken_0x1cd570) {
            ctx->pc = 0x1CD574u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD570u;
            // 0x1cd574: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD5BCu;
            goto label_1cd5bc;
        }
    }
    ctx->pc = 0x1CD578u;
label_1cd578:
    // 0x1cd578: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1cd578u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1cd57c:
    // 0x1cd57c: 0x0  nop
    ctx->pc = 0x1cd57cu;
    // NOP
label_1cd580:
    // 0x1cd580: 0x24b00010  addiu       $s0, $a1, 0x10
    ctx->pc = 0x1cd580u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1cd584:
    // 0x1cd584: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1cd584u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1cd588:
    // 0x1cd588: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_1cd58c:
    if (ctx->pc == 0x1CD58Cu) {
        ctx->pc = 0x1CD58Cu;
            // 0x1cd58c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1CD590u;
        goto label_1cd590;
    }
    ctx->pc = 0x1CD588u;
    {
        const bool branch_taken_0x1cd588 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd588) {
            ctx->pc = 0x1CD58Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD588u;
            // 0x1cd58c: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD5B0u;
            goto label_1cd5b0;
        }
    }
    ctx->pc = 0x1CD590u;
label_1cd590:
    // 0x1cd590: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x1cd590u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_1cd594:
    // 0x1cd594: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x1cd594u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_1cd598:
    // 0x1cd598: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x1cd598u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1cd59c:
    // 0x1cd59c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cd59cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cd5a0:
    // 0x1cd5a0: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1cd5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1cd5a4:
    // 0x1cd5a4: 0x40f809  jalr        $v0
label_1cd5a8:
    if (ctx->pc == 0x1CD5A8u) {
        ctx->pc = 0x1CD5A8u;
            // 0x1cd5a8: 0x80a50011  lb          $a1, 0x11($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->pc = 0x1CD5ACu;
        goto label_1cd5ac;
    }
    ctx->pc = 0x1CD5A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD5ACu);
        ctx->pc = 0x1CD5A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5A4u;
            // 0x1cd5a8: 0x80a50011  lb          $a1, 0x11($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 17)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD5ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD5ACu; }
            if (ctx->pc != 0x1CD5ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1CD5ACu;
label_1cd5ac:
    // 0x1cd5ac: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1cd5acu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1cd5b0:
    // 0x1cd5b0: 0x1620fff3  bnez        $s1, . + 4 + (-0xD << 2)
label_1cd5b4:
    if (ctx->pc == 0x1CD5B4u) {
        ctx->pc = 0x1CD5B4u;
            // 0x1cd5b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5B8u;
        goto label_1cd5b8;
    }
    ctx->pc = 0x1CD5B0u;
    {
        const bool branch_taken_0x1cd5b0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD5B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5B0u;
            // 0x1cd5b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd5b0) {
            ctx->pc = 0x1CD580u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd580;
        }
    }
    ctx->pc = 0x1CD5B8u;
label_1cd5b8:
    // 0x1cd5b8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1cd5b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd5bc:
    // 0x1cd5bc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1cd5bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1cd5c0:
    // 0x1cd5c0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1cd5c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cd5c4:
    // 0x1cd5c4: 0x8072a00  j           func_1CA800
label_1cd5c8:
    if (ctx->pc == 0x1CD5C8u) {
        ctx->pc = 0x1CD5C8u;
            // 0x1cd5c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1CD5CCu;
        goto label_1cd5cc;
    }
    ctx->pc = 0x1CD5C4u;
    ctx->pc = 0x1CD5C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD5C4u;
            // 0x1cd5c8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001CA800_0x1ca800(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CD5CCu;
label_1cd5cc:
    // 0x1cd5cc: 0x0  nop
    ctx->pc = 0x1cd5ccu;
    // NOP
label_1cd5d0:
    // 0x1cd5d0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1cd5d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1cd5d4:
    // 0x1cd5d4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1cd5d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1cd5d8:
    // 0x1cd5d8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1cd5d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1cd5dc:
    // 0x1cd5dc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1cd5dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5e0:
    // 0x1cd5e0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1cd5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1cd5e4:
    // 0x1cd5e4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1cd5e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5e8:
    // 0x1cd5e8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1cd5e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1cd5ec:
    // 0x1cd5ec: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1cd5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1cd5f0:
    // 0x1cd5f0: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x1cd5f0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1cd5f4:
    // 0x1cd5f4: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x1cd5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_1cd5f8:
    // 0x1cd5f8: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x1cd5f8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1cd5fc:
    // 0x1cd5fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cd5fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1cd600:
    // 0x1cd600: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1cd600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1cd604:
    // 0x1cd604: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1cd604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1cd608:
    // 0x1cd608: 0xc0729fa  jal         func_1CA7E8
label_1cd60c:
    if (ctx->pc == 0x1CD60Cu) {
        ctx->pc = 0x1CD60Cu;
            // 0x1cd60c: 0x26d50010  addiu       $s5, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->pc = 0x1CD610u;
        goto label_1cd610;
    }
    ctx->pc = 0x1CD608u;
    SET_GPR_U32(ctx, 31, 0x1CD610u);
    ctx->pc = 0x1CD60Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD608u;
            // 0x1cd60c: 0x26d50010  addiu       $s5, $s6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 22), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA7E8u;
    if (runtime->hasFunction(0x1CA7E8u)) {
        auto targetFn = runtime->lookupFunction(0x1CA7E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD610u; }
        if (ctx->pc != 0x1CD610u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA7E8_0x1ca7e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD610u; }
        if (ctx->pc != 0x1CD610u) { return; }
    }
    ctx->pc = 0x1CD610u;
label_1cd610:
    // 0x1cd610: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x1cd610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_1cd614:
    // 0x1cd614: 0x2451da00  addiu       $s1, $v0, -0x2600
    ctx->pc = 0x1cd614u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957568));
label_1cd618:
    // 0x1cd618: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1cd618u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1cd61c:
    // 0x1cd61c: 0x5457001f  bnel        $v0, $s7, . + 4 + (0x1F << 2)
label_1cd620:
    if (ctx->pc == 0x1CD620u) {
        ctx->pc = 0x1CD620u;
            // 0x1cd620: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x1CD624u;
        goto label_1cd624;
    }
    ctx->pc = 0x1CD61Cu;
    {
        const bool branch_taken_0x1cd61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x1cd61c) {
            ctx->pc = 0x1CD620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD61Cu;
            // 0x1cd620: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD69Cu;
            goto label_1cd69c;
        }
    }
    ctx->pc = 0x1CD624u;
label_1cd624:
    // 0x1cd624: 0x121100  sll         $v0, $s2, 4
    ctx->pc = 0x1cd624u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 4));
label_1cd628:
    // 0x1cd628: 0x24140080  addiu       $s4, $zero, 0x80
    ctx->pc = 0x1cd628u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_1cd62c:
    // 0x1cd62c: 0x1000000e  b           . + 4 + (0xE << 2)
label_1cd630:
    if (ctx->pc == 0x1CD630u) {
        ctx->pc = 0x1CD630u;
            // 0x1cd630: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->pc = 0x1CD634u;
        goto label_1cd634;
    }
    ctx->pc = 0x1CD62Cu;
    {
        const bool branch_taken_0x1cd62c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CD630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD62Cu;
            // 0x1cd630: 0x558021  addu        $s0, $v0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd62c) {
            ctx->pc = 0x1CD668u;
            goto label_1cd668;
        }
    }
    ctx->pc = 0x1CD634u;
label_1cd634:
    // 0x1cd634: 0x0  nop
    ctx->pc = 0x1cd634u;
    // NOP
label_1cd638:
    // 0x1cd638: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1cd638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1cd63c:
    // 0x1cd63c: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x1cd63cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_1cd640:
    // 0x1cd640: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1cd640u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1cd644:
    // 0x1cd644: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x1cd644u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
label_1cd648:
    // 0x1cd648: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1cd648u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1cd64c:
    // 0x1cd64c: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x1cd64cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_1cd650:
    // 0x1cd650: 0x6ba30007  ldl         $v1, 0x7($sp)
    ctx->pc = 0x1cd650u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_1cd654:
    // 0x1cd654: 0x6fa30000  ldr         $v1, 0x0($sp)
    ctx->pc = 0x1cd654u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_1cd658:
    // 0x1cd658: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x1cd658u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cd65c:
    // 0x1cd65c: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x1cd65cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_1cd660:
    // 0x1cd660: 0xa6020002  sh          $v0, 0x2($s0)
    ctx->pc = 0x1cd660u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 2));
label_1cd664:
    // 0x1cd664: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1cd664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1cd668:
    // 0x1cd668: 0x1254000f  beq         $s2, $s4, . + 4 + (0xF << 2)
label_1cd66c:
    if (ctx->pc == 0x1CD66Cu) {
        ctx->pc = 0x1CD66Cu;
            // 0x1cd66c: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->pc = 0x1CD670u;
        goto label_1cd670;
    }
    ctx->pc = 0x1CD668u;
    {
        const bool branch_taken_0x1cd668 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 20));
        ctx->pc = 0x1CD66Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD668u;
            // 0x1cd66c: 0x3c067fff  lui         $a2, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd668) {
            ctx->pc = 0x1CD6A8u;
            goto label_1cd6a8;
        }
    }
    ctx->pc = 0x1CD670u;
label_1cd670:
    // 0x1cd670: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x1cd670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1cd674:
    // 0x1cd674: 0x8e25000c  lw          $a1, 0xC($s1)
    ctx->pc = 0x1cd674u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_1cd678:
    // 0x1cd678: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1cd678u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1cd67c:
    // 0x1cd67c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1cd67cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1cd680:
    // 0x1cd680: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1cd680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1cd684:
    // 0x1cd684: 0x40f809  jalr        $v0
label_1cd688:
    if (ctx->pc == 0x1CD688u) {
        ctx->pc = 0x1CD688u;
            // 0x1cd688: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CD68Cu;
        goto label_1cd68c;
    }
    ctx->pc = 0x1CD684u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CD68Cu);
        ctx->pc = 0x1CD688u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD684u;
            // 0x1cd688: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CD68Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CD68Cu; }
            if (ctx->pc != 0x1CD68Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CD68Cu;
label_1cd68c:
    // 0x1cd68c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1cd68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1cd690:
    // 0x1cd690: 0x5460ffe9  bnel        $v1, $zero, . + 4 + (-0x17 << 2)
label_1cd694:
    if (ctx->pc == 0x1CD694u) {
        ctx->pc = 0x1CD694u;
            // 0x1cd694: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1CD698u;
        goto label_1cd698;
    }
    ctx->pc = 0x1CD690u;
    {
        const bool branch_taken_0x1cd690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1cd690) {
            ctx->pc = 0x1CD694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD690u;
            // 0x1cd694: 0xa2000000  sb          $zero, 0x0($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CD638u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd638;
        }
    }
    ctx->pc = 0x1CD698u;
label_1cd698:
    // 0x1cd698: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1cd698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1cd69c:
    // 0x1cd69c: 0x2a620020  slti        $v0, $s3, 0x20
    ctx->pc = 0x1cd69cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)32) ? 1 : 0);
label_1cd6a0:
    // 0x1cd6a0: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_1cd6a4:
    if (ctx->pc == 0x1CD6A4u) {
        ctx->pc = 0x1CD6A4u;
            // 0x1cd6a4: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->pc = 0x1CD6A8u;
        goto label_1cd6a8;
    }
    ctx->pc = 0x1CD6A0u;
    {
        const bool branch_taken_0x1cd6a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CD6A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6A0u;
            // 0x1cd6a4: 0x26310014  addiu       $s1, $s1, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cd6a0) {
            ctx->pc = 0x1CD618u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1cd618;
        }
    }
    ctx->pc = 0x1CD6A8u;
label_1cd6a8:
    // 0x1cd6a8: 0xc072a00  jal         func_1CA800
label_1cd6ac:
    if (ctx->pc == 0x1CD6ACu) {
        ctx->pc = 0x1CD6B0u;
        goto label_1cd6b0;
    }
    ctx->pc = 0x1CD6A8u;
    SET_GPR_U32(ctx, 31, 0x1CD6B0u);
    ctx->pc = 0x1CA800u;
    if (runtime->hasFunction(0x1CA800u)) {
        auto targetFn = runtime->lookupFunction(0x1CA800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6B0u; }
        if (ctx->pc != 0x1CD6B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA800_0x1ca800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CD6B0u; }
        if (ctx->pc != 0x1CD6B0u) { return; }
    }
    ctx->pc = 0x1CD6B0u;
label_1cd6b0:
    // 0x1cd6b0: 0xaed20000  sw          $s2, 0x0($s6)
    ctx->pc = 0x1cd6b0u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 18));
label_1cd6b4:
    // 0x1cd6b4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cd6b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1cd6b8:
    // 0x1cd6b8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1cd6b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1cd6bc:
    // 0x1cd6bc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1cd6bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1cd6c0:
    // 0x1cd6c0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1cd6c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1cd6c4:
    // 0x1cd6c4: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1cd6c4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1cd6c8:
    // 0x1cd6c8: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1cd6c8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1cd6cc:
    // 0x1cd6cc: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1cd6ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1cd6d0:
    // 0x1cd6d0: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x1cd6d0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1cd6d4:
    // 0x1cd6d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1cd6d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1cd6d8:
    // 0x1cd6d8: 0x3e00008  jr          $ra
label_1cd6dc:
    if (ctx->pc == 0x1CD6DCu) {
        ctx->pc = 0x1CD6DCu;
            // 0x1cd6dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1CD6E0u;
        goto label_1cd6e0;
    }
    ctx->pc = 0x1CD6D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CD6DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6D8u;
            // 0x1cd6dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CD6E0u;
label_1cd6e0:
    // 0x1cd6e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1cd6e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1cd6e4:
    // 0x1cd6e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cd6e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1cd6e8:
    // 0x1cd6e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cd6e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1cd6ec:
    // 0x1cd6ec: 0x80709b0  j           func_1C26C0
label_1cd6f0:
    if (ctx->pc == 0x1CD6F0u) {
        ctx->pc = 0x1CD6F0u;
            // 0x1cd6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CD6F4u;
        goto label_1cd6f4;
    }
    ctx->pc = 0x1CD6ECu;
    ctx->pc = 0x1CD6F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CD6ECu;
            // 0x1cd6f0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C26C0u;
    if (runtime->hasFunction(0x1C26C0u)) {
        auto targetFn = runtime->lookupFunction(0x1C26C0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C26C0_0x1c26c0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CD6F4u;
label_1cd6f4:
    // 0x1cd6f4: 0x0  nop
    ctx->pc = 0x1cd6f4u;
    // NOP
    ctx->pc = 0x1cd6f8u;
}
