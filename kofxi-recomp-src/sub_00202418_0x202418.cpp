#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00202418
// Address: 0x202418 - 0x202750
void sub_00202418_0x202418(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00202418_0x202418");
#endif

    switch (ctx->pc) {
        case 0x202418u: goto label_202418;
        case 0x20241cu: goto label_20241c;
        case 0x202420u: goto label_202420;
        case 0x202424u: goto label_202424;
        case 0x202428u: goto label_202428;
        case 0x20242cu: goto label_20242c;
        case 0x202430u: goto label_202430;
        case 0x202434u: goto label_202434;
        case 0x202438u: goto label_202438;
        case 0x20243cu: goto label_20243c;
        case 0x202440u: goto label_202440;
        case 0x202444u: goto label_202444;
        case 0x202448u: goto label_202448;
        case 0x20244cu: goto label_20244c;
        case 0x202450u: goto label_202450;
        case 0x202454u: goto label_202454;
        case 0x202458u: goto label_202458;
        case 0x20245cu: goto label_20245c;
        case 0x202460u: goto label_202460;
        case 0x202464u: goto label_202464;
        case 0x202468u: goto label_202468;
        case 0x20246cu: goto label_20246c;
        case 0x202470u: goto label_202470;
        case 0x202474u: goto label_202474;
        case 0x202478u: goto label_202478;
        case 0x20247cu: goto label_20247c;
        case 0x202480u: goto label_202480;
        case 0x202484u: goto label_202484;
        case 0x202488u: goto label_202488;
        case 0x20248cu: goto label_20248c;
        case 0x202490u: goto label_202490;
        case 0x202494u: goto label_202494;
        case 0x202498u: goto label_202498;
        case 0x20249cu: goto label_20249c;
        case 0x2024a0u: goto label_2024a0;
        case 0x2024a4u: goto label_2024a4;
        case 0x2024a8u: goto label_2024a8;
        case 0x2024acu: goto label_2024ac;
        case 0x2024b0u: goto label_2024b0;
        case 0x2024b4u: goto label_2024b4;
        case 0x2024b8u: goto label_2024b8;
        case 0x2024bcu: goto label_2024bc;
        case 0x2024c0u: goto label_2024c0;
        case 0x2024c4u: goto label_2024c4;
        case 0x2024c8u: goto label_2024c8;
        case 0x2024ccu: goto label_2024cc;
        case 0x2024d0u: goto label_2024d0;
        case 0x2024d4u: goto label_2024d4;
        case 0x2024d8u: goto label_2024d8;
        case 0x2024dcu: goto label_2024dc;
        case 0x2024e0u: goto label_2024e0;
        case 0x2024e4u: goto label_2024e4;
        case 0x2024e8u: goto label_2024e8;
        case 0x2024ecu: goto label_2024ec;
        case 0x2024f0u: goto label_2024f0;
        case 0x2024f4u: goto label_2024f4;
        case 0x2024f8u: goto label_2024f8;
        case 0x2024fcu: goto label_2024fc;
        case 0x202500u: goto label_202500;
        case 0x202504u: goto label_202504;
        case 0x202508u: goto label_202508;
        case 0x20250cu: goto label_20250c;
        case 0x202510u: goto label_202510;
        case 0x202514u: goto label_202514;
        case 0x202518u: goto label_202518;
        case 0x20251cu: goto label_20251c;
        case 0x202520u: goto label_202520;
        case 0x202524u: goto label_202524;
        case 0x202528u: goto label_202528;
        case 0x20252cu: goto label_20252c;
        case 0x202530u: goto label_202530;
        case 0x202534u: goto label_202534;
        case 0x202538u: goto label_202538;
        case 0x20253cu: goto label_20253c;
        case 0x202540u: goto label_202540;
        case 0x202544u: goto label_202544;
        case 0x202548u: goto label_202548;
        case 0x20254cu: goto label_20254c;
        case 0x202550u: goto label_202550;
        case 0x202554u: goto label_202554;
        case 0x202558u: goto label_202558;
        case 0x20255cu: goto label_20255c;
        case 0x202560u: goto label_202560;
        case 0x202564u: goto label_202564;
        case 0x202568u: goto label_202568;
        case 0x20256cu: goto label_20256c;
        case 0x202570u: goto label_202570;
        case 0x202574u: goto label_202574;
        case 0x202578u: goto label_202578;
        case 0x20257cu: goto label_20257c;
        case 0x202580u: goto label_202580;
        case 0x202584u: goto label_202584;
        case 0x202588u: goto label_202588;
        case 0x20258cu: goto label_20258c;
        case 0x202590u: goto label_202590;
        case 0x202594u: goto label_202594;
        case 0x202598u: goto label_202598;
        case 0x20259cu: goto label_20259c;
        case 0x2025a0u: goto label_2025a0;
        case 0x2025a4u: goto label_2025a4;
        case 0x2025a8u: goto label_2025a8;
        case 0x2025acu: goto label_2025ac;
        case 0x2025b0u: goto label_2025b0;
        case 0x2025b4u: goto label_2025b4;
        case 0x2025b8u: goto label_2025b8;
        case 0x2025bcu: goto label_2025bc;
        case 0x2025c0u: goto label_2025c0;
        case 0x2025c4u: goto label_2025c4;
        case 0x2025c8u: goto label_2025c8;
        case 0x2025ccu: goto label_2025cc;
        case 0x2025d0u: goto label_2025d0;
        case 0x2025d4u: goto label_2025d4;
        case 0x2025d8u: goto label_2025d8;
        case 0x2025dcu: goto label_2025dc;
        case 0x2025e0u: goto label_2025e0;
        case 0x2025e4u: goto label_2025e4;
        case 0x2025e8u: goto label_2025e8;
        case 0x2025ecu: goto label_2025ec;
        case 0x2025f0u: goto label_2025f0;
        case 0x2025f4u: goto label_2025f4;
        case 0x2025f8u: goto label_2025f8;
        case 0x2025fcu: goto label_2025fc;
        case 0x202600u: goto label_202600;
        case 0x202604u: goto label_202604;
        case 0x202608u: goto label_202608;
        case 0x20260cu: goto label_20260c;
        case 0x202610u: goto label_202610;
        case 0x202614u: goto label_202614;
        case 0x202618u: goto label_202618;
        case 0x20261cu: goto label_20261c;
        case 0x202620u: goto label_202620;
        case 0x202624u: goto label_202624;
        case 0x202628u: goto label_202628;
        case 0x20262cu: goto label_20262c;
        case 0x202630u: goto label_202630;
        case 0x202634u: goto label_202634;
        case 0x202638u: goto label_202638;
        case 0x20263cu: goto label_20263c;
        case 0x202640u: goto label_202640;
        case 0x202644u: goto label_202644;
        case 0x202648u: goto label_202648;
        case 0x20264cu: goto label_20264c;
        case 0x202650u: goto label_202650;
        case 0x202654u: goto label_202654;
        case 0x202658u: goto label_202658;
        case 0x20265cu: goto label_20265c;
        case 0x202660u: goto label_202660;
        case 0x202664u: goto label_202664;
        case 0x202668u: goto label_202668;
        case 0x20266cu: goto label_20266c;
        case 0x202670u: goto label_202670;
        case 0x202674u: goto label_202674;
        case 0x202678u: goto label_202678;
        case 0x20267cu: goto label_20267c;
        case 0x202680u: goto label_202680;
        case 0x202684u: goto label_202684;
        case 0x202688u: goto label_202688;
        case 0x20268cu: goto label_20268c;
        case 0x202690u: goto label_202690;
        case 0x202694u: goto label_202694;
        case 0x202698u: goto label_202698;
        case 0x20269cu: goto label_20269c;
        case 0x2026a0u: goto label_2026a0;
        case 0x2026a4u: goto label_2026a4;
        case 0x2026a8u: goto label_2026a8;
        case 0x2026acu: goto label_2026ac;
        case 0x2026b0u: goto label_2026b0;
        case 0x2026b4u: goto label_2026b4;
        case 0x2026b8u: goto label_2026b8;
        case 0x2026bcu: goto label_2026bc;
        case 0x2026c0u: goto label_2026c0;
        case 0x2026c4u: goto label_2026c4;
        case 0x2026c8u: goto label_2026c8;
        case 0x2026ccu: goto label_2026cc;
        case 0x2026d0u: goto label_2026d0;
        case 0x2026d4u: goto label_2026d4;
        case 0x2026d8u: goto label_2026d8;
        case 0x2026dcu: goto label_2026dc;
        case 0x2026e0u: goto label_2026e0;
        case 0x2026e4u: goto label_2026e4;
        case 0x2026e8u: goto label_2026e8;
        case 0x2026ecu: goto label_2026ec;
        case 0x2026f0u: goto label_2026f0;
        case 0x2026f4u: goto label_2026f4;
        case 0x2026f8u: goto label_2026f8;
        case 0x2026fcu: goto label_2026fc;
        case 0x202700u: goto label_202700;
        case 0x202704u: goto label_202704;
        case 0x202708u: goto label_202708;
        case 0x20270cu: goto label_20270c;
        case 0x202710u: goto label_202710;
        case 0x202714u: goto label_202714;
        case 0x202718u: goto label_202718;
        case 0x20271cu: goto label_20271c;
        case 0x202720u: goto label_202720;
        case 0x202724u: goto label_202724;
        case 0x202728u: goto label_202728;
        case 0x20272cu: goto label_20272c;
        case 0x202730u: goto label_202730;
        case 0x202734u: goto label_202734;
        case 0x202738u: goto label_202738;
        case 0x20273cu: goto label_20273c;
        case 0x202740u: goto label_202740;
        case 0x202744u: goto label_202744;
        case 0x202748u: goto label_202748;
        case 0x20274cu: goto label_20274c;
        default: break;
    }

    ctx->pc = 0x202418u;

label_202418:
    // 0x202418: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x202418u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_20241c:
    // 0x20241c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x20241cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_202420:
    // 0x202420: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x202420u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_202424:
    // 0x202424: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_202428:
    // 0x202428: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x202428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20242c:
    // 0x20242c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20242cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_202430:
    // 0x202430: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x202430u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_202434:
    // 0x202434: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x202434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_202438:
    // 0x202438: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x202438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_20243c:
    // 0x20243c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x20243cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_202440:
    // 0x202440: 0x26930400  addiu       $s3, $s4, 0x400
    ctx->pc = 0x202440u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 1024));
label_202444:
    // 0x202444: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202444u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202448:
    // 0x202448: 0x24060400  addiu       $a2, $zero, 0x400
    ctx->pc = 0x202448u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_20244c:
    // 0x20244c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x20244cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_202450:
    // 0x202450: 0xc049cb6  jal         func_1272D8
label_202454:
    if (ctx->pc == 0x202454u) {
        ctx->pc = 0x202454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202450u;
        // 0x202454: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202458u;
        goto label_202458;
    }
    ctx->pc = 0x202450u;
    SET_GPR_U32(ctx, 31, 0x202458u);
    ctx->pc = 0x202454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202450u;
    // 0x202454: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x202450u, 0x202458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x202458u;
label_202458:
    // 0x202458: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x202458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_20245c:
    // 0x20245c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20245cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202460:
    // 0x202460: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x202460u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_202464:
    // 0x202464: 0xc08089c  jal         func_202270
label_202468:
    if (ctx->pc == 0x202468u) {
        ctx->pc = 0x202468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202464u;
        // 0x202468: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20246Cu;
        goto label_20246c;
    }
    ctx->pc = 0x202464u;
    SET_GPR_U32(ctx, 31, 0x20246Cu);
    ctx->pc = 0x202468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202464u;
    // 0x202468: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202270u, 0x202464u, 0x20246Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20246Cu;
label_20246c:
    // 0x20246c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x20246cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_202470:
    // 0x202470: 0x8e420044  lw          $v0, 0x44($s2)
    ctx->pc = 0x202470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 68)));
label_202474:
    // 0x202474: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x202474u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_202478:
    // 0x202478: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_20247c:
    if (ctx->pc == 0x20247Cu) {
        ctx->pc = 0x20247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202478u;
        // 0x20247c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202480u;
        goto label_202480;
    }
    ctx->pc = 0x202478u;
    {
        const bool branch_taken_0x202478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20247Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202478u;
        // 0x20247c: 0x24030010  addiu       $v1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202478) {
            ctx->pc = 0x2024E0u;
            goto label_2024e0;
        }
    }
    ctx->pc = 0x202480u;
label_202480:
    // 0x202480: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x202480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_202484:
    // 0x202484: 0x1443000c  bne         $v0, $v1, . + 4 + (0xC << 2)
label_202488:
    if (ctx->pc == 0x202488u) {
        ctx->pc = 0x202488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202484u;
        // 0x202488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20248Cu;
        goto label_20248c;
    }
    ctx->pc = 0x202484u;
    {
        const bool branch_taken_0x202484 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x202488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202484u;
        // 0x202488: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202484) {
            ctx->pc = 0x2024B8u;
            goto label_2024b8;
        }
    }
    ctx->pc = 0x20248Cu;
label_20248c:
    // 0x20248c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x20248cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_202490:
    // 0x202490: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x202490u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_202494:
    // 0x202494: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x202494u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_202498:
    // 0x202498: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x202498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_20249c:
    // 0x20249c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x20249cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2024a0:
    // 0x2024a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2024a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2024a4:
    // 0x2024a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2024a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2024a8:
    // 0x2024a8: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2024a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2024ac:
    // 0x2024ac: 0x8080944  j           func_202510
label_2024b0:
    if (ctx->pc == 0x2024B0u) {
        ctx->pc = 0x2024B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024ACu;
        // 0x2024b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2024B4u;
        goto label_2024b4;
    }
    ctx->pc = 0x2024ACu;
    ctx->pc = 0x2024B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024ACu;
    // 0x2024b0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202510u;
    goto label_202510;
    ctx->pc = 0x2024B4u;
label_2024b4:
    // 0x2024b4: 0x0  nop
    ctx->pc = 0x2024b4u;
    // NOP
label_2024b8:
    // 0x2024b8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2024b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2024bc:
    // 0x2024bc: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2024bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2024c0:
    // 0x2024c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2024c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2024c4:
    // 0x2024c4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2024c4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2024c8:
    // 0x2024c8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2024c8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2024cc:
    // 0x2024cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2024ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2024d0:
    // 0x2024d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2024d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2024d4:
    // 0x2024d4: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x2024d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2024d8:
    // 0x2024d8: 0x8080968  j           func_2025A0
label_2024dc:
    if (ctx->pc == 0x2024DCu) {
        ctx->pc = 0x2024DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024D8u;
        // 0x2024dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2024E0u;
        goto label_2024e0;
    }
    ctx->pc = 0x2024D8u;
    ctx->pc = 0x2024DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2024D8u;
    // 0x2024dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2025A0u;
    goto label_2025a0;
    ctx->pc = 0x2024E0u;
label_2024e0:
    // 0x2024e0: 0xc64d0040  lwc1        $f13, 0x40($s2)
    ctx->pc = 0x2024e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2024e4:
    // 0x2024e4: 0x40f809  jalr        $v0
label_2024e8:
    if (ctx->pc == 0x2024E8u) {
        ctx->pc = 0x2024E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024E4u;
        // 0x2024e8: 0xc64c003c  lwc1        $f12, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2024ECu;
        goto label_2024ec;
    }
    ctx->pc = 0x2024E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2024ECu);
        ctx->pc = 0x2024E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2024E4u;
        // 0x2024e8: 0xc64c003c  lwc1        $f12, 0x3C($s2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2024E4u, 0x2024ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2024ECu;
label_2024ec:
    // 0x2024ec: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2024ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2024f0:
    // 0x2024f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2024f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2024f4:
    // 0x2024f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2024f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2024f8:
    // 0x2024f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2024f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2024fc:
    // 0x2024fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2024fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_202500:
    // 0x202500: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x202500u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_202504:
    // 0x202504: 0x3e00008  jr          $ra
label_202508:
    if (ctx->pc == 0x202508u) {
        ctx->pc = 0x202508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202504u;
        // 0x202508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20250Cu;
        goto label_20250c;
    }
    ctx->pc = 0x202504u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202504u;
        // 0x202508: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202504u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20250Cu;
label_20250c:
    // 0x20250c: 0x0  nop
    ctx->pc = 0x20250cu;
    // NOP
label_202510:
    // 0x202510: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x202510u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_202514:
    // 0x202514: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x202514u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_202518:
    // 0x202518: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x202518u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_20251c:
    // 0x20251c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x20251cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_202520:
    // 0x202520: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x202520u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_202524:
    // 0x202524: 0xc0809f6  jal         func_2027D8
label_202528:
    if (ctx->pc == 0x202528u) {
        ctx->pc = 0x202528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202524u;
        // 0x202528: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20252Cu;
        goto label_20252c;
    }
    ctx->pc = 0x202524u;
    SET_GPR_U32(ctx, 31, 0x20252Cu);
    ctx->pc = 0x202528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202524u;
    // 0x202528: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2027D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2027D8u, 0x202524u, 0x20252Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20252Cu;
label_20252c:
    // 0x20252c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20252cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202530:
    // 0x202530: 0x54430013  bnel        $v0, $v1, . + 4 + (0x13 << 2)
label_202534:
    if (ctx->pc == 0x202534u) {
        ctx->pc = 0x202534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202530u;
        // 0x202534: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202538u;
        goto label_202538;
    }
    ctx->pc = 0x202530u;
    {
        const bool branch_taken_0x202530 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x202530) {
            ctx->pc = 0x202534u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x202530u;
            // 0x202534: 0x3c06003f  lui         $a2, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x202580u;
            goto label_202580;
        }
    }
    ctx->pc = 0x202538u;
label_202538:
    // 0x202538: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x202538u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_20253c:
    // 0x20253c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x20253cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_202540:
    // 0x202540: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202540u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202544:
    // 0x202544: 0x0  nop
    ctx->pc = 0x202544u;
    // NOP
label_202548:
    // 0x202548: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x202548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_20254c:
    // 0x20254c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x20254cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_202550:
    // 0x202550: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x202550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_202554:
    // 0x202554: 0x213c2  srl         $v0, $v0, 15
    ctx->pc = 0x202554u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 15));
label_202558:
    // 0x202558: 0x28830100  slti        $v1, $a0, 0x100
    ctx->pc = 0x202558u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
label_20255c:
    // 0x20255c: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x20255cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
label_202560:
    // 0x202560: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
label_202564:
    if (ctx->pc == 0x202564u) {
        ctx->pc = 0x202564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202560u;
        // 0x202564: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202568u;
        goto label_202568;
    }
    ctx->pc = 0x202560u;
    {
        const bool branch_taken_0x202560 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x202564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202560u;
        // 0x202564: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202560) {
            ctx->pc = 0x202548u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202548;
        }
    }
    ctx->pc = 0x202568u;
label_202568:
    // 0x202568: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20256c:
    // 0x20256c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x20256cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_202570:
    // 0x202570: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x202570u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_202574:
    // 0x202574: 0x3e00008  jr          $ra
label_202578:
    if (ctx->pc == 0x202578u) {
        ctx->pc = 0x202578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202574u;
        // 0x202578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20257Cu;
        goto label_20257c;
    }
    ctx->pc = 0x202574u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202574u;
        // 0x202578: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202574u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20257Cu;
label_20257c:
    // 0x20257c: 0x0  nop
    ctx->pc = 0x20257cu;
    // NOP
label_202580:
    // 0x202580: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202580u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_202584:
    // 0x202584: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x202584u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_202588:
    // 0x202588: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202588u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20258c:
    // 0x20258c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x20258cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_202590:
    // 0x202590: 0x24c6f2c0  addiu       $a2, $a2, -0xD40
    ctx->pc = 0x202590u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963904));
label_202594:
    // 0x202594: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x202594u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202598:
    // 0x202598: 0x808063e  j           func_2018F8
label_20259c:
    if (ctx->pc == 0x20259Cu) {
        ctx->pc = 0x20259Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202598u;
        // 0x20259c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2025A0u;
        goto label_2025a0;
    }
    ctx->pc = 0x202598u;
    ctx->pc = 0x20259Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202598u;
    // 0x20259c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2018F8u;
    sub_002018F8_0x2018f8(rdram, ctx, runtime); return;
    ctx->pc = 0x2025A0u;
label_2025a0:
    // 0x2025a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2025a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2025a4:
    // 0x2025a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2025a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2025a8:
    // 0x2025a8: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2025a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2025ac:
    // 0x2025ac: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2025acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2025b0:
    // 0x2025b0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2025b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2025b4:
    // 0x2025b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2025b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2025b8:
    // 0x2025b8: 0xe7b40018  swc1        $f20, 0x18($sp)
    ctx->pc = 0x2025b8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2025bc:
    // 0x2025bc: 0xc0809f6  jal         func_2027D8
label_2025c0:
    if (ctx->pc == 0x2025C0u) {
        ctx->pc = 0x2025C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025BCu;
        // 0x2025c0: 0xc4940040  lwc1        $f20, 0x40($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2025C4u;
        goto label_2025c4;
    }
    ctx->pc = 0x2025BCu;
    SET_GPR_U32(ctx, 31, 0x2025C4u);
    ctx->pc = 0x2025C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2025BCu;
    // 0x2025c0: 0xc4940040  lwc1        $f20, 0x40($a0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2027D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2027D8u, 0x2025BCu, 0x2025C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2025C4u;
label_2025c4:
    // 0x2025c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2025c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2025c8:
    // 0x2025c8: 0x1443000f  bne         $v0, $v1, . + 4 + (0xF << 2)
label_2025cc:
    if (ctx->pc == 0x2025CCu) {
        ctx->pc = 0x2025CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025C8u;
        // 0x2025cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2025D0u;
        goto label_2025d0;
    }
    ctx->pc = 0x2025C8u;
    {
        const bool branch_taken_0x2025c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2025CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025C8u;
        // 0x2025cc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025c8) {
            ctx->pc = 0x202608u;
            goto label_202608;
        }
    }
    ctx->pc = 0x2025D0u;
label_2025d0:
    // 0x2025d0: 0x3c077fff  lui         $a3, 0x7FFF
    ctx->pc = 0x2025d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32767 << 16));
label_2025d4:
    // 0x2025d4: 0x34e7ff80  ori         $a3, $a3, 0xFF80
    ctx->pc = 0x2025d4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65408);
label_2025d8:
    // 0x2025d8: 0x62080  sll         $a0, $a2, 2
    ctx->pc = 0x2025d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_2025dc:
    // 0x2025dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x2025dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_2025e0:
    // 0x2025e0: 0x911821  addu        $v1, $a0, $s1
    ctx->pc = 0x2025e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_2025e4:
    // 0x2025e4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2025e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2025e8:
    // 0x2025e8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2025e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2025ec:
    // 0x2025ec: 0x28c50100  slti        $a1, $a2, 0x100
    ctx->pc = 0x2025ecu;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
label_2025f0:
    // 0x2025f0: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x2025f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
label_2025f4:
    // 0x2025f4: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x2025f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_2025f8:
    // 0x2025f8: 0x14a0fff7  bnez        $a1, . + 4 + (-0x9 << 2)
label_2025fc:
    if (ctx->pc == 0x2025FCu) {
        ctx->pc = 0x2025FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025F8u;
        // 0x2025fc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202600u;
        goto label_202600;
    }
    ctx->pc = 0x2025F8u;
    {
        const bool branch_taken_0x2025f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2025FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2025F8u;
        // 0x2025fc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2025f8) {
            ctx->pc = 0x2025D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2025d8;
        }
    }
    ctx->pc = 0x202600u;
label_202600:
    // 0x202600: 0x10000033  b           . + 4 + (0x33 << 2)
label_202604:
    if (ctx->pc == 0x202604u) {
        ctx->pc = 0x202604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202600u;
        // 0x202604: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202608u;
        goto label_202608;
    }
    ctx->pc = 0x202600u;
    {
        const bool branch_taken_0x202600 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202600u;
        // 0x202604: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x202600) {
            ctx->pc = 0x2026D0u;
            goto label_2026d0;
        }
    }
    ctx->pc = 0x202608u;
label_202608:
    // 0x202608: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x202608u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
label_20260c:
    // 0x20260c: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x20260cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_202610:
    // 0x202610: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x202610u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
label_202614:
    // 0x202614: 0x3c014b7f  lui         $at, 0x4B7F
    ctx->pc = 0x202614u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)19327 << 16));
label_202618:
    // 0x202618: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x202618u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_20261c:
    // 0x20261c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x20261cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
label_202620:
    // 0x202620: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x202620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202624:
    // 0x202624: 0x3c098000  lui         $t1, 0x8000
    ctx->pc = 0x202624u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32768 << 16));
label_202628:
    // 0x202628: 0x61080  sll         $v0, $a2, 2
    ctx->pc = 0x202628u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_20262c:
    // 0x20262c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x20262cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_202630:
    // 0x202630: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x202630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_202634:
    // 0x202634: 0x28c70100  slti        $a3, $a2, 0x100
    ctx->pc = 0x202634u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)256) ? 1 : 0);
label_202638:
    // 0x202638: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x202638u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_20263c:
    // 0x20263c: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
label_202640:
    if (ctx->pc == 0x202640u) {
        ctx->pc = 0x202640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20263Cu;
        // 0x202640: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202644u;
        goto label_202644;
    }
    ctx->pc = 0x20263Cu;
    {
        const bool branch_taken_0x20263c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x202640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20263Cu;
        // 0x202640: 0x502821  addu        $a1, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20263c) {
            ctx->pc = 0x20264Cu;
            goto label_20264c;
        }
    }
    ctx->pc = 0x202644u;
label_202644:
    // 0x202644: 0xac680000  sw          $t0, 0x0($v1)
    ctx->pc = 0x202644u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 8));
label_202648:
    // 0x202648: 0x100202d  daddu       $a0, $t0, $zero
    ctx->pc = 0x202648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_20264c:
    // 0x20264c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
label_202650:
    if (ctx->pc == 0x202650u) {
        ctx->pc = 0x202650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20264Cu;
        // 0x202650: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202654u;
        goto label_202654;
    }
    ctx->pc = 0x20264Cu;
    {
        const bool branch_taken_0x20264c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x202650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20264Cu;
        // 0x202650: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20264c) {
            ctx->pc = 0x202668u;
            goto label_202668;
        }
    }
    ctx->pc = 0x202654u;
label_202654:
    // 0x202654: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x202654u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_202658:
    // 0x202658: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202658u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_20265c:
    // 0x20265c: 0x10000008  b           . + 4 + (0x8 << 2)
label_202660:
    if (ctx->pc == 0x202660u) {
        ctx->pc = 0x202660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20265Cu;
        // 0x202660: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x202664u;
        goto label_202664;
    }
    ctx->pc = 0x20265Cu;
    {
        const bool branch_taken_0x20265c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x202660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20265Cu;
        // 0x202660: 0x4600a002  mul.s       $f0, $f20, $f0 (Delay Slot)
        ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20265c) {
            ctx->pc = 0x202680u;
            goto label_202680;
        }
    }
    ctx->pc = 0x202664u;
label_202664:
    // 0x202664: 0x0  nop
    ctx->pc = 0x202664u;
    // NOP
label_202668:
    // 0x202668: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x202668u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_20266c:
    // 0x20266c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x20266cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_202670:
    // 0x202670: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x202670u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_202674:
    // 0x202674: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x202674u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_202678:
    // 0x202678: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x202678u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_20267c:
    // 0x20267c: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x20267cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
label_202680:
    // 0x202680: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x202680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_202684:
    // 0x202684: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x202684u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_202688:
    // 0x202688: 0x0  nop
    ctx->pc = 0x202688u;
    // NOP
label_20268c:
    // 0x20268c: 0x0  nop
    ctx->pc = 0x20268cu;
    // NOP
label_202690:
    // 0x202690: 0x46030003  div.s       $f0, $f0, $f3
    ctx->pc = 0x202690u;
    if (ctx->f[3] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[3];
label_202694:
    // 0x202694: 0x0  nop
    ctx->pc = 0x202694u;
    // NOP
label_202698:
    // 0x202698: 0x0  nop
    ctx->pc = 0x202698u;
    // NOP
label_20269c:
    // 0x20269c: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x20269cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[0] = ctx->f[2] / ctx->f[0];
label_2026a0:
    // 0x2026a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2026a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2026a4:
    // 0x2026a4: 0x46000124  .word       0x46000124                   # cvt.w.s     $f4, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2026a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
label_2026a8:
    // 0x2026a8: 0x44022000  mfc1        $v0, $f4
    ctx->pc = 0x2026a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2026ac:
    // 0x2026ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2026b0:
    if (ctx->pc == 0x2026B0u) {
        ctx->pc = 0x2026B4u;
        goto label_2026b4;
    }
    ctx->pc = 0x2026ACu;
    {
        const bool branch_taken_0x2026ac = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2026ac) {
            ctx->pc = 0x2026C4u;
            goto label_2026c4;
        }
    }
    ctx->pc = 0x2026B4u;
label_2026b4:
    // 0x2026b4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x2026b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
label_2026b8:
    // 0x2026b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2026b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2026bc:
    // 0x2026bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2026bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2026c0:
    // 0x2026c0: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2026c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_2026c4:
    // 0x2026c4: 0x14e0ffd8  bnez        $a3, . + 4 + (-0x28 << 2)
label_2026c8:
    if (ctx->pc == 0x2026C8u) {
        ctx->pc = 0x2026C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026C4u;
        // 0x2026c8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2026CCu;
        goto label_2026cc;
    }
    ctx->pc = 0x2026C4u;
    {
        const bool branch_taken_0x2026c4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x2026C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026C4u;
        // 0x2026c8: 0xaca20000  sw          $v0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2026c4) {
            ctx->pc = 0x202628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_202628;
        }
    }
    ctx->pc = 0x2026CCu;
label_2026cc:
    // 0x2026cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2026ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2026d0:
    // 0x2026d0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2026d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2026d4:
    // 0x2026d4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2026d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2026d8:
    // 0x2026d8: 0xc7b40018  lwc1        $f20, 0x18($sp)
    ctx->pc = 0x2026d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2026dc:
    // 0x2026dc: 0x3e00008  jr          $ra
label_2026e0:
    if (ctx->pc == 0x2026E0u) {
        ctx->pc = 0x2026E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026DCu;
        // 0x2026e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2026E4u;
        goto label_2026e4;
    }
    ctx->pc = 0x2026DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2026E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2026DCu;
        // 0x2026e0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2026DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2026E4u;
label_2026e4:
    // 0x2026e4: 0x0  nop
    ctx->pc = 0x2026e4u;
    // NOP
label_2026e8:
    // 0x2026e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2026e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2026ec:
    // 0x2026ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2026ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2026f0:
    // 0x2026f0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2026f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2026f4:
    // 0x2026f4: 0xe7b50018  swc1        $f21, 0x18($sp)
    ctx->pc = 0x2026f4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 24), bits); }
label_2026f8:
    // 0x2026f8: 0x46006546  mov.s       $f21, $f12
    ctx->pc = 0x2026f8u;
    ctx->f[21] = FPU_MOV_S(ctx->f[12]);
label_2026fc:
    // 0x2026fc: 0xe7b40010  swc1        $f20, 0x10($sp)
    ctx->pc = 0x2026fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
label_202700:
    // 0x202700: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x202700u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_202704:
    // 0x202704: 0xc0809d4  jal         func_202750
label_202708:
    if (ctx->pc == 0x202708u) {
        ctx->pc = 0x202708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202704u;
        // 0x202708: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
        ctx->f[20] = FPU_MOV_S(ctx->f[13]);
        ctx->in_delay_slot = false;
        ctx->pc = 0x20270Cu;
        goto label_20270c;
    }
    ctx->pc = 0x202704u;
    SET_GPR_U32(ctx, 31, 0x20270Cu);
    ctx->pc = 0x202708u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x202704u;
    // 0x202708: 0x46006d06  mov.s       $f20, $f13 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[13]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x202750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x202750u, 0x202704u, 0x20270Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20270Cu;
label_20270c:
    // 0x20270c: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x20270cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_202710:
    // 0x202710: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x202710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_202714:
    // 0x202714: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x202714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_202718:
    // 0x202718: 0x24c6f300  addiu       $a2, $a2, -0xD00
    ctx->pc = 0x202718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294963968));
label_20271c:
    // 0x20271c: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
label_202720:
    if (ctx->pc == 0x202720u) {
        ctx->pc = 0x202720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20271Cu;
        // 0x202720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x202724u;
        goto label_202724;
    }
    ctx->pc = 0x20271Cu;
    {
        const bool branch_taken_0x20271c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x202720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20271Cu;
        // 0x202720: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20271c) {
            ctx->pc = 0x20272Cu;
            goto label_20272c;
        }
    }
    ctx->pc = 0x202724u;
label_202724:
    // 0x202724: 0xc08063e  jal         func_2018F8
label_202728:
    if (ctx->pc == 0x202728u) {
        ctx->pc = 0x20272Cu;
        goto label_20272c;
    }
    ctx->pc = 0x202724u;
    SET_GPR_U32(ctx, 31, 0x20272Cu);
    ctx->pc = 0x2018F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2018F8u, 0x202724u, 0x20272Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20272Cu;
label_20272c:
    // 0x20272c: 0xe6140040  swc1        $f20, 0x40($s0)
    ctx->pc = 0x20272cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 64), bits); }
label_202730:
    // 0x202730: 0xe615003c  swc1        $f21, 0x3C($s0)
    ctx->pc = 0x202730u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 60), bits); }
label_202734:
    // 0x202734: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x202734u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_202738:
    // 0x202738: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x202738u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_20273c:
    // 0x20273c: 0xc7b50018  lwc1        $f21, 0x18($sp)
    ctx->pc = 0x20273cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_202740:
    // 0x202740: 0xc7b40010  lwc1        $f20, 0x10($sp)
    ctx->pc = 0x202740u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_202744:
    // 0x202744: 0x3e00008  jr          $ra
label_202748:
    if (ctx->pc == 0x202748u) {
        ctx->pc = 0x202748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202744u;
        // 0x202748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20274Cu;
        goto label_20274c;
    }
    ctx->pc = 0x202744u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x202748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x202744u;
        // 0x202748: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x202744u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x20274Cu;
label_20274c:
    // 0x20274c: 0x0  nop
    ctx->pc = 0x20274cu;
    // NOP
    if (ctx->pc == 0x20274cu) { ctx->pc = 0x202750u; }
}
