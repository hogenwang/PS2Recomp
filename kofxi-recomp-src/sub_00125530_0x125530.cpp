#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125530
// Address: 0x125530 - 0x1259a8
void sub_00125530_0x125530(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125530_0x125530");
#endif

    switch (ctx->pc) {
        case 0x125530u: goto label_125530;
        case 0x125534u: goto label_125534;
        case 0x125538u: goto label_125538;
        case 0x12553cu: goto label_12553c;
        case 0x125540u: goto label_125540;
        case 0x125544u: goto label_125544;
        case 0x125548u: goto label_125548;
        case 0x12554cu: goto label_12554c;
        case 0x125550u: goto label_125550;
        case 0x125554u: goto label_125554;
        case 0x125558u: goto label_125558;
        case 0x12555cu: goto label_12555c;
        case 0x125560u: goto label_125560;
        case 0x125564u: goto label_125564;
        case 0x125568u: goto label_125568;
        case 0x12556cu: goto label_12556c;
        case 0x125570u: goto label_125570;
        case 0x125574u: goto label_125574;
        case 0x125578u: goto label_125578;
        case 0x12557cu: goto label_12557c;
        case 0x125580u: goto label_125580;
        case 0x125584u: goto label_125584;
        case 0x125588u: goto label_125588;
        case 0x12558cu: goto label_12558c;
        case 0x125590u: goto label_125590;
        case 0x125594u: goto label_125594;
        case 0x125598u: goto label_125598;
        case 0x12559cu: goto label_12559c;
        case 0x1255a0u: goto label_1255a0;
        case 0x1255a4u: goto label_1255a4;
        case 0x1255a8u: goto label_1255a8;
        case 0x1255acu: goto label_1255ac;
        case 0x1255b0u: goto label_1255b0;
        case 0x1255b4u: goto label_1255b4;
        case 0x1255b8u: goto label_1255b8;
        case 0x1255bcu: goto label_1255bc;
        case 0x1255c0u: goto label_1255c0;
        case 0x1255c4u: goto label_1255c4;
        case 0x1255c8u: goto label_1255c8;
        case 0x1255ccu: goto label_1255cc;
        case 0x1255d0u: goto label_1255d0;
        case 0x1255d4u: goto label_1255d4;
        case 0x1255d8u: goto label_1255d8;
        case 0x1255dcu: goto label_1255dc;
        case 0x1255e0u: goto label_1255e0;
        case 0x1255e4u: goto label_1255e4;
        case 0x1255e8u: goto label_1255e8;
        case 0x1255ecu: goto label_1255ec;
        case 0x1255f0u: goto label_1255f0;
        case 0x1255f4u: goto label_1255f4;
        case 0x1255f8u: goto label_1255f8;
        case 0x1255fcu: goto label_1255fc;
        case 0x125600u: goto label_125600;
        case 0x125604u: goto label_125604;
        case 0x125608u: goto label_125608;
        case 0x12560cu: goto label_12560c;
        case 0x125610u: goto label_125610;
        case 0x125614u: goto label_125614;
        case 0x125618u: goto label_125618;
        case 0x12561cu: goto label_12561c;
        case 0x125620u: goto label_125620;
        case 0x125624u: goto label_125624;
        case 0x125628u: goto label_125628;
        case 0x12562cu: goto label_12562c;
        case 0x125630u: goto label_125630;
        case 0x125634u: goto label_125634;
        case 0x125638u: goto label_125638;
        case 0x12563cu: goto label_12563c;
        case 0x125640u: goto label_125640;
        case 0x125644u: goto label_125644;
        case 0x125648u: goto label_125648;
        case 0x12564cu: goto label_12564c;
        case 0x125650u: goto label_125650;
        case 0x125654u: goto label_125654;
        case 0x125658u: goto label_125658;
        case 0x12565cu: goto label_12565c;
        case 0x125660u: goto label_125660;
        case 0x125664u: goto label_125664;
        case 0x125668u: goto label_125668;
        case 0x12566cu: goto label_12566c;
        case 0x125670u: goto label_125670;
        case 0x125674u: goto label_125674;
        case 0x125678u: goto label_125678;
        case 0x12567cu: goto label_12567c;
        case 0x125680u: goto label_125680;
        case 0x125684u: goto label_125684;
        case 0x125688u: goto label_125688;
        case 0x12568cu: goto label_12568c;
        case 0x125690u: goto label_125690;
        case 0x125694u: goto label_125694;
        case 0x125698u: goto label_125698;
        case 0x12569cu: goto label_12569c;
        case 0x1256a0u: goto label_1256a0;
        case 0x1256a4u: goto label_1256a4;
        case 0x1256a8u: goto label_1256a8;
        case 0x1256acu: goto label_1256ac;
        case 0x1256b0u: goto label_1256b0;
        case 0x1256b4u: goto label_1256b4;
        case 0x1256b8u: goto label_1256b8;
        case 0x1256bcu: goto label_1256bc;
        case 0x1256c0u: goto label_1256c0;
        case 0x1256c4u: goto label_1256c4;
        case 0x1256c8u: goto label_1256c8;
        case 0x1256ccu: goto label_1256cc;
        case 0x1256d0u: goto label_1256d0;
        case 0x1256d4u: goto label_1256d4;
        case 0x1256d8u: goto label_1256d8;
        case 0x1256dcu: goto label_1256dc;
        case 0x1256e0u: goto label_1256e0;
        case 0x1256e4u: goto label_1256e4;
        case 0x1256e8u: goto label_1256e8;
        case 0x1256ecu: goto label_1256ec;
        case 0x1256f0u: goto label_1256f0;
        case 0x1256f4u: goto label_1256f4;
        case 0x1256f8u: goto label_1256f8;
        case 0x1256fcu: goto label_1256fc;
        case 0x125700u: goto label_125700;
        case 0x125704u: goto label_125704;
        case 0x125708u: goto label_125708;
        case 0x12570cu: goto label_12570c;
        case 0x125710u: goto label_125710;
        case 0x125714u: goto label_125714;
        case 0x125718u: goto label_125718;
        case 0x12571cu: goto label_12571c;
        case 0x125720u: goto label_125720;
        case 0x125724u: goto label_125724;
        case 0x125728u: goto label_125728;
        case 0x12572cu: goto label_12572c;
        case 0x125730u: goto label_125730;
        case 0x125734u: goto label_125734;
        case 0x125738u: goto label_125738;
        case 0x12573cu: goto label_12573c;
        case 0x125740u: goto label_125740;
        case 0x125744u: goto label_125744;
        case 0x125748u: goto label_125748;
        case 0x12574cu: goto label_12574c;
        case 0x125750u: goto label_125750;
        case 0x125754u: goto label_125754;
        case 0x125758u: goto label_125758;
        case 0x12575cu: goto label_12575c;
        case 0x125760u: goto label_125760;
        case 0x125764u: goto label_125764;
        case 0x125768u: goto label_125768;
        case 0x12576cu: goto label_12576c;
        case 0x125770u: goto label_125770;
        case 0x125774u: goto label_125774;
        case 0x125778u: goto label_125778;
        case 0x12577cu: goto label_12577c;
        case 0x125780u: goto label_125780;
        case 0x125784u: goto label_125784;
        case 0x125788u: goto label_125788;
        case 0x12578cu: goto label_12578c;
        case 0x125790u: goto label_125790;
        case 0x125794u: goto label_125794;
        case 0x125798u: goto label_125798;
        case 0x12579cu: goto label_12579c;
        case 0x1257a0u: goto label_1257a0;
        case 0x1257a4u: goto label_1257a4;
        case 0x1257a8u: goto label_1257a8;
        case 0x1257acu: goto label_1257ac;
        case 0x1257b0u: goto label_1257b0;
        case 0x1257b4u: goto label_1257b4;
        case 0x1257b8u: goto label_1257b8;
        case 0x1257bcu: goto label_1257bc;
        case 0x1257c0u: goto label_1257c0;
        case 0x1257c4u: goto label_1257c4;
        case 0x1257c8u: goto label_1257c8;
        case 0x1257ccu: goto label_1257cc;
        case 0x1257d0u: goto label_1257d0;
        case 0x1257d4u: goto label_1257d4;
        case 0x1257d8u: goto label_1257d8;
        case 0x1257dcu: goto label_1257dc;
        case 0x1257e0u: goto label_1257e0;
        case 0x1257e4u: goto label_1257e4;
        case 0x1257e8u: goto label_1257e8;
        case 0x1257ecu: goto label_1257ec;
        case 0x1257f0u: goto label_1257f0;
        case 0x1257f4u: goto label_1257f4;
        case 0x1257f8u: goto label_1257f8;
        case 0x1257fcu: goto label_1257fc;
        case 0x125800u: goto label_125800;
        case 0x125804u: goto label_125804;
        case 0x125808u: goto label_125808;
        case 0x12580cu: goto label_12580c;
        case 0x125810u: goto label_125810;
        case 0x125814u: goto label_125814;
        case 0x125818u: goto label_125818;
        case 0x12581cu: goto label_12581c;
        case 0x125820u: goto label_125820;
        case 0x125824u: goto label_125824;
        case 0x125828u: goto label_125828;
        case 0x12582cu: goto label_12582c;
        case 0x125830u: goto label_125830;
        case 0x125834u: goto label_125834;
        case 0x125838u: goto label_125838;
        case 0x12583cu: goto label_12583c;
        case 0x125840u: goto label_125840;
        case 0x125844u: goto label_125844;
        case 0x125848u: goto label_125848;
        case 0x12584cu: goto label_12584c;
        case 0x125850u: goto label_125850;
        case 0x125854u: goto label_125854;
        case 0x125858u: goto label_125858;
        case 0x12585cu: goto label_12585c;
        case 0x125860u: goto label_125860;
        case 0x125864u: goto label_125864;
        case 0x125868u: goto label_125868;
        case 0x12586cu: goto label_12586c;
        case 0x125870u: goto label_125870;
        case 0x125874u: goto label_125874;
        case 0x125878u: goto label_125878;
        case 0x12587cu: goto label_12587c;
        case 0x125880u: goto label_125880;
        case 0x125884u: goto label_125884;
        case 0x125888u: goto label_125888;
        case 0x12588cu: goto label_12588c;
        case 0x125890u: goto label_125890;
        case 0x125894u: goto label_125894;
        case 0x125898u: goto label_125898;
        case 0x12589cu: goto label_12589c;
        case 0x1258a0u: goto label_1258a0;
        case 0x1258a4u: goto label_1258a4;
        case 0x1258a8u: goto label_1258a8;
        case 0x1258acu: goto label_1258ac;
        case 0x1258b0u: goto label_1258b0;
        case 0x1258b4u: goto label_1258b4;
        case 0x1258b8u: goto label_1258b8;
        case 0x1258bcu: goto label_1258bc;
        case 0x1258c0u: goto label_1258c0;
        case 0x1258c4u: goto label_1258c4;
        case 0x1258c8u: goto label_1258c8;
        case 0x1258ccu: goto label_1258cc;
        case 0x1258d0u: goto label_1258d0;
        case 0x1258d4u: goto label_1258d4;
        case 0x1258d8u: goto label_1258d8;
        case 0x1258dcu: goto label_1258dc;
        case 0x1258e0u: goto label_1258e0;
        case 0x1258e4u: goto label_1258e4;
        case 0x1258e8u: goto label_1258e8;
        case 0x1258ecu: goto label_1258ec;
        case 0x1258f0u: goto label_1258f0;
        case 0x1258f4u: goto label_1258f4;
        case 0x1258f8u: goto label_1258f8;
        case 0x1258fcu: goto label_1258fc;
        case 0x125900u: goto label_125900;
        case 0x125904u: goto label_125904;
        case 0x125908u: goto label_125908;
        case 0x12590cu: goto label_12590c;
        case 0x125910u: goto label_125910;
        case 0x125914u: goto label_125914;
        case 0x125918u: goto label_125918;
        case 0x12591cu: goto label_12591c;
        case 0x125920u: goto label_125920;
        case 0x125924u: goto label_125924;
        case 0x125928u: goto label_125928;
        case 0x12592cu: goto label_12592c;
        case 0x125930u: goto label_125930;
        case 0x125934u: goto label_125934;
        case 0x125938u: goto label_125938;
        case 0x12593cu: goto label_12593c;
        case 0x125940u: goto label_125940;
        case 0x125944u: goto label_125944;
        case 0x125948u: goto label_125948;
        case 0x12594cu: goto label_12594c;
        case 0x125950u: goto label_125950;
        case 0x125954u: goto label_125954;
        case 0x125958u: goto label_125958;
        case 0x12595cu: goto label_12595c;
        case 0x125960u: goto label_125960;
        case 0x125964u: goto label_125964;
        case 0x125968u: goto label_125968;
        case 0x12596cu: goto label_12596c;
        case 0x125970u: goto label_125970;
        case 0x125974u: goto label_125974;
        case 0x125978u: goto label_125978;
        case 0x12597cu: goto label_12597c;
        case 0x125980u: goto label_125980;
        case 0x125984u: goto label_125984;
        case 0x125988u: goto label_125988;
        case 0x12598cu: goto label_12598c;
        case 0x125990u: goto label_125990;
        case 0x125994u: goto label_125994;
        case 0x125998u: goto label_125998;
        case 0x12599cu: goto label_12599c;
        case 0x1259a0u: goto label_1259a0;
        case 0x1259a4u: goto label_1259a4;
        default: break;
    }

    ctx->pc = 0x125530u;

label_125530:
    // 0x125530: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x125530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_125534:
    // 0x125534: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x125534u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_125538:
    // 0x125538: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x125538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
label_12553c:
    // 0x12553c: 0xffb50098  sd          $s5, 0x98($sp)
    ctx->pc = 0x12553cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 21));
label_125540:
    // 0x125540: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x125540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_125544:
    // 0x125544: 0xffb10078  sd          $s1, 0x78($sp)
    ctx->pc = 0x125544u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 120), GPR_U64(ctx, 17));
label_125548:
    // 0x125548: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x125548u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_12554c:
    // 0x12554c: 0xffb30088  sd          $s3, 0x88($sp)
    ctx->pc = 0x12554cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 19));
label_125550:
    // 0x125550: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x125550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_125554:
    // 0x125554: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x125554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_125558:
    // 0x125558: 0xffb700a8  sd          $s7, 0xA8($sp)
    ctx->pc = 0x125558u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 23));
label_12555c:
    // 0x12555c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x12555cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_125560:
    // 0x125560: 0x8c910054  lw          $s1, 0x54($a0)
    ctx->pc = 0x125560u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_125564:
    // 0x125564: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
label_125568:
    if (ctx->pc == 0x125568u) {
        ctx->pc = 0x125568u;
            // 0x125568: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12556Cu;
        goto label_12556c;
    }
    ctx->pc = 0x125564u;
    {
        const bool branch_taken_0x125564 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x125568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125564u;
            // 0x125568: 0xa0a82d  daddu       $s5, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125564) {
            ctx->pc = 0x12557Cu;
            goto label_12557c;
        }
    }
    ctx->pc = 0x12556Cu;
label_12556c:
    // 0x12556c: 0x3c0f0036  lui         $t7, 0x36
    ctx->pc = 0x12556cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)54 << 16));
label_125570:
    // 0x125570: 0x8deebde8  lw          $t6, -0x4218($t7)
    ctx->pc = 0x125570u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 15), 4294950376)));
label_125574:
    // 0x125574: 0xac8e0054  sw          $t6, 0x54($a0)
    ctx->pc = 0x125574u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 84), GPR_U32(ctx, 14));
label_125578:
    // 0x125578: 0x1c0882d  daddu       $s1, $t6, $zero
    ctx->pc = 0x125578u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 14) + (uint64_t)GPR_U64(ctx, 0));
label_12557c:
    // 0x12557c: 0x8e2f0038  lw          $t7, 0x38($s1)
    ctx->pc = 0x12557cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_125580:
    // 0x125580: 0x55e00005  bnel        $t7, $zero, . + 4 + (0x5 << 2)
label_125584:
    if (ctx->pc == 0x125584u) {
        ctx->pc = 0x125584u;
            // 0x125584: 0x8e0f000c  lw          $t7, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x125588u;
        goto label_125588;
    }
    ctx->pc = 0x125580u;
    {
        const bool branch_taken_0x125580 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125580) {
            ctx->pc = 0x125584u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125580u;
            // 0x125584: 0x8e0f000c  lw          $t7, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125598u;
            goto label_125598;
        }
    }
    ctx->pc = 0x125588u;
label_125588:
    // 0x125588: 0xc049360  jal         func_124D80
label_12558c:
    if (ctx->pc == 0x12558Cu) {
        ctx->pc = 0x12558Cu;
            // 0x12558c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125590u;
        goto label_125590;
    }
    ctx->pc = 0x125588u;
    SET_GPR_U32(ctx, 31, 0x125590u);
    ctx->pc = 0x12558Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125588u;
            // 0x12558c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124D80u;
    if (runtime->hasFunction(0x124D80u)) {
        auto targetFn = runtime->lookupFunction(0x124D80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125590u; }
        if (ctx->pc != 0x125590u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124D80_0x124d80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125590u; }
        if (ctx->pc != 0x125590u) { return; }
    }
    ctx->pc = 0x125590u;
label_125590:
    // 0x125590: 0x8e110054  lw          $s1, 0x54($s0)
    ctx->pc = 0x125590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_125594:
    // 0x125594: 0x8e0f000c  lw          $t7, 0xC($s0)
    ctx->pc = 0x125594u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_125598:
    // 0x125598: 0x240e0108  addiu       $t6, $zero, 0x108
    ctx->pc = 0x125598u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 264));
label_12559c:
    // 0x12559c: 0x31ef0108  andi        $t7, $t7, 0x108
    ctx->pc = 0x12559cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)264);
label_1255a0:
    // 0x1255a0: 0x55ee0004  bnel        $t7, $t6, . + 4 + (0x4 << 2)
label_1255a4:
    if (ctx->pc == 0x1255A4u) {
        ctx->pc = 0x1255A4u;
            // 0x1255a4: 0x8e140028  lw          $s4, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x1255A8u;
        goto label_1255a8;
    }
    ctx->pc = 0x1255A0u;
    {
        const bool branch_taken_0x1255a0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 14));
        if (branch_taken_0x1255a0) {
            ctx->pc = 0x1255A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1255A0u;
            // 0x1255a4: 0x8e140028  lw          $s4, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1255B4u;
            goto label_1255b4;
        }
    }
    ctx->pc = 0x1255A8u;
label_1255a8:
    // 0x1255a8: 0xc049258  jal         func_124960
label_1255ac:
    if (ctx->pc == 0x1255ACu) {
        ctx->pc = 0x1255ACu;
            // 0x1255ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1255B0u;
        goto label_1255b0;
    }
    ctx->pc = 0x1255A8u;
    SET_GPR_U32(ctx, 31, 0x1255B0u);
    ctx->pc = 0x1255ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1255A8u;
            // 0x1255ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    if (runtime->hasFunction(0x124960u)) {
        auto targetFn = runtime->lookupFunction(0x124960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1255B0u; }
        if (ctx->pc != 0x1255B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124960_0x124960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1255B0u; }
        if (ctx->pc != 0x1255B0u) { return; }
    }
    ctx->pc = 0x1255B0u;
label_1255b0:
    // 0x1255b0: 0x8e140028  lw          $s4, 0x28($s0)
    ctx->pc = 0x1255b0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1255b4:
    // 0x1255b4: 0x1680000f  bnez        $s4, . + 4 + (0xF << 2)
label_1255b8:
    if (ctx->pc == 0x1255B8u) {
        ctx->pc = 0x1255B8u;
            // 0x1255b8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1255BCu;
        goto label_1255bc;
    }
    ctx->pc = 0x1255B4u;
    {
        const bool branch_taken_0x1255b4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x1255B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1255B4u;
            // 0x1255b8: 0x240f0001  addiu       $t7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255b4) {
            ctx->pc = 0x1255F4u;
            goto label_1255f4;
        }
    }
    ctx->pc = 0x1255BCu;
label_1255bc:
    // 0x1255bc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1255bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1255c0:
    // 0x1255c0: 0x240f001d  addiu       $t7, $zero, 0x1D
    ctx->pc = 0x1255c0u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
label_1255c4:
    // 0x1255c4: 0xae2f0000  sw          $t7, 0x0($s1)
    ctx->pc = 0x1255c4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 15));
label_1255c8:
    // 0x1255c8: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x1255c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1255cc:
    // 0x1255cc: 0xdfb10078  ld          $s1, 0x78($sp)
    ctx->pc = 0x1255ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 120)));
label_1255d0:
    // 0x1255d0: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x1255d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1255d4:
    // 0x1255d4: 0xdfb30088  ld          $s3, 0x88($sp)
    ctx->pc = 0x1255d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 136)));
label_1255d8:
    // 0x1255d8: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x1255d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1255dc:
    // 0x1255dc: 0xdfb50098  ld          $s5, 0x98($sp)
    ctx->pc = 0x1255dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 152)));
label_1255e0:
    // 0x1255e0: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x1255e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_1255e4:
    // 0x1255e4: 0xdfb700a8  ld          $s7, 0xA8($sp)
    ctx->pc = 0x1255e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 168)));
label_1255e8:
    // 0x1255e8: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x1255e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_1255ec:
    // 0x1255ec: 0x3e00008  jr          $ra
label_1255f0:
    if (ctx->pc == 0x1255F0u) {
        ctx->pc = 0x1255F0u;
            // 0x1255f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x1255F4u;
        goto label_1255f4;
    }
    ctx->pc = 0x1255ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1255F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1255ECu;
            // 0x1255f0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1255F4u;
label_1255f4:
    // 0x1255f4: 0x124f00c4  beq         $s2, $t7, . + 4 + (0xC4 << 2)
label_1255f8:
    if (ctx->pc == 0x1255F8u) {
        ctx->pc = 0x1255F8u;
            // 0x1255f8: 0x2a4f0002  slti        $t7, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x1255FCu;
        goto label_1255fc;
    }
    ctx->pc = 0x1255F4u;
    {
        const bool branch_taken_0x1255f4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        ctx->pc = 0x1255F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1255F4u;
            // 0x1255f8: 0x2a4f0002  slti        $t7, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255f4) {
            ctx->pc = 0x125908u;
            goto label_125908;
        }
    }
    ctx->pc = 0x1255FCu;
label_1255fc:
    // 0x1255fc: 0x11e000be  beqz        $t7, . + 4 + (0xBE << 2)
label_125600:
    if (ctx->pc == 0x125600u) {
        ctx->pc = 0x125600u;
            // 0x125600: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x125604u;
        goto label_125604;
    }
    ctx->pc = 0x1255FCu;
    {
        const bool branch_taken_0x1255fc = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125600u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1255FCu;
            // 0x125600: 0x240f0002  addiu       $t7, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1255fc) {
            ctx->pc = 0x1258F8u;
            goto label_1258f8;
        }
    }
    ctx->pc = 0x125604u;
label_125604:
    // 0x125604: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_125608:
    if (ctx->pc == 0x125608u) {
        ctx->pc = 0x125608u;
            // 0x125608: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x12560Cu;
        goto label_12560c;
    }
    ctx->pc = 0x125604u;
    {
        const bool branch_taken_0x125604 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x125608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125604u;
            // 0x125608: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125604) {
            ctx->pc = 0x125614u;
            goto label_125614;
        }
    }
    ctx->pc = 0x12560Cu;
label_12560c:
    // 0x12560c: 0x1000ffed  b           . + 4 + (-0x13 << 2)
label_125610:
    if (ctx->pc == 0x125610u) {
        ctx->pc = 0x125610u;
            // 0x125610: 0x240f0016  addiu       $t7, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x125614u;
        goto label_125614;
    }
    ctx->pc = 0x12560Cu;
    {
        const bool branch_taken_0x12560c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12560Cu;
            // 0x125610: 0x240f0016  addiu       $t7, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12560c) {
            ctx->pc = 0x1255C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1255c4;
        }
    }
    ctx->pc = 0x125614u;
label_125614:
    // 0x125614: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x125614u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_125618:
    // 0x125618: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x125618u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12561c:
    // 0x12561c: 0x55600004  bnel        $t3, $zero, . + 4 + (0x4 << 2)
label_125620:
    if (ctx->pc == 0x125620u) {
        ctx->pc = 0x125620u;
            // 0x125620: 0x960c000c  lhu         $t4, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x125624u;
        goto label_125624;
    }
    ctx->pc = 0x12561Cu;
    {
        const bool branch_taken_0x12561c = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x12561c) {
            ctx->pc = 0x125620u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12561Cu;
            // 0x125620: 0x960c000c  lhu         $t4, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125630u;
            goto label_125630;
        }
    }
    ctx->pc = 0x125624u;
label_125624:
    // 0x125624: 0xc0498ae  jal         func_1262B8
label_125628:
    if (ctx->pc == 0x125628u) {
        ctx->pc = 0x125628u;
            // 0x125628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12562Cu;
        goto label_12562c;
    }
    ctx->pc = 0x125624u;
    SET_GPR_U32(ctx, 31, 0x12562Cu);
    ctx->pc = 0x125628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125624u;
            // 0x125628: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1262B8u;
    if (runtime->hasFunction(0x1262B8u)) {
        auto targetFn = runtime->lookupFunction(0x1262B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12562Cu; }
        if (ctx->pc != 0x12562Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001262B8_0x1262b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12562Cu; }
        if (ctx->pc != 0x12562Cu) { return; }
    }
    ctx->pc = 0x12562Cu;
label_12562c:
    // 0x12562c: 0x960c000c  lhu         $t4, 0xC($s0)
    ctx->pc = 0x12562cu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_125630:
    // 0x125630: 0x318f081a  andi        $t7, $t4, 0x81A
    ctx->pc = 0x125630u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)2074);
label_125634:
    // 0x125634: 0x15e00015  bnez        $t7, . + 4 + (0x15 << 2)
label_125638:
    if (ctx->pc == 0x125638u) {
        ctx->pc = 0x125638u;
            // 0x125638: 0x318f0400  andi        $t7, $t4, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1024);
        ctx->pc = 0x12563Cu;
        goto label_12563c;
    }
    ctx->pc = 0x125634u;
    {
        const bool branch_taken_0x125634 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125634u;
            // 0x125638: 0x318f0400  andi        $t7, $t4, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125634) {
            ctx->pc = 0x12568Cu;
            goto label_12568c;
        }
    }
    ctx->pc = 0x12563Cu;
label_12563c:
    // 0x12563c: 0x15e00033  bnez        $t7, . + 4 + (0x33 << 2)
label_125640:
    if (ctx->pc == 0x125640u) {
        ctx->pc = 0x125640u;
            // 0x125640: 0x3c0f0013  lui         $t7, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
        ctx->pc = 0x125644u;
        goto label_125644;
    }
    ctx->pc = 0x12563Cu;
    {
        const bool branch_taken_0x12563c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12563Cu;
            // 0x125640: 0x3c0f0013  lui         $t7, 0x13 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)19 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12563c) {
            ctx->pc = 0x12570Cu;
            goto label_12570c;
        }
    }
    ctx->pc = 0x125644u;
label_125644:
    // 0x125644: 0x25ef9a40  addiu       $t7, $t7, -0x65C0
    ctx->pc = 0x125644u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294941248));
label_125648:
    // 0x125648: 0x168f000f  bne         $s4, $t7, . + 4 + (0xF << 2)
label_12564c:
    if (ctx->pc == 0x12564Cu) {
        ctx->pc = 0x12564Cu;
            // 0x12564c: 0x358f0800  ori         $t7, $t4, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2048);
        ctx->pc = 0x125650u;
        goto label_125650;
    }
    ctx->pc = 0x125648u;
    {
        const bool branch_taken_0x125648 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 15));
        ctx->pc = 0x12564Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125648u;
            // 0x12564c: 0x358f0800  ori         $t7, $t4, 0x800 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2048);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125648) {
            ctx->pc = 0x125688u;
            goto label_125688;
        }
    }
    ctx->pc = 0x125650u;
label_125650:
    // 0x125650: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x125650u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_125654:
    // 0x125654: 0x4a0000c  bltz        $a1, . + 4 + (0xC << 2)
label_125658:
    if (ctx->pc == 0x125658u) {
        ctx->pc = 0x125658u;
            // 0x125658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12565Cu;
        goto label_12565c;
    }
    ctx->pc = 0x125654u;
    {
        const bool branch_taken_0x125654 = (GPR_S32(ctx, 5) < 0);
        ctx->pc = 0x125658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125654u;
            // 0x125658: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125654) {
            ctx->pc = 0x125688u;
            goto label_125688;
        }
    }
    ctx->pc = 0x12565Cu;
label_12565c:
    // 0x12565c: 0xc04966a  jal         func_1259A8
label_125660:
    if (ctx->pc == 0x125660u) {
        ctx->pc = 0x125660u;
            // 0x125660: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125664u;
        goto label_125664;
    }
    ctx->pc = 0x12565Cu;
    SET_GPR_U32(ctx, 31, 0x125664u);
    ctx->pc = 0x125660u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12565Cu;
            // 0x125660: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1259A8u;
    if (runtime->hasFunction(0x1259A8u)) {
        auto targetFn = runtime->lookupFunction(0x1259A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125664u; }
        if (ctx->pc != 0x125664u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001259A8_0x1259a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125664u; }
        if (ctx->pc != 0x125664u) { return; }
    }
    ctx->pc = 0x125664u;
label_125664:
    // 0x125664: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_125668:
    if (ctx->pc == 0x125668u) {
        ctx->pc = 0x125668u;
            // 0x125668: 0x960c000c  lhu         $t4, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x12566Cu;
        goto label_12566c;
    }
    ctx->pc = 0x125664u;
    {
        const bool branch_taken_0x125664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x125664) {
            ctx->pc = 0x125668u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125664u;
            // 0x125668: 0x960c000c  lhu         $t4, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125684u;
            goto label_125684;
        }
    }
    ctx->pc = 0x12566Cu;
label_12566c:
    // 0x12566c: 0x8faf0004  lw          $t7, 0x4($sp)
    ctx->pc = 0x12566cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_125670:
    // 0x125670: 0x340e8000  ori         $t6, $zero, 0x8000
    ctx->pc = 0x125670u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_125674:
    // 0x125674: 0x31eff000  andi        $t7, $t7, 0xF000
    ctx->pc = 0x125674u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)61440);
label_125678:
    // 0x125678: 0x51ee0020  beql        $t7, $t6, . + 4 + (0x20 << 2)
label_12567c:
    if (ctx->pc == 0x12567Cu) {
        ctx->pc = 0x12567Cu;
            // 0x12567c: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x125680u;
        goto label_125680;
    }
    ctx->pc = 0x125678u;
    {
        const bool branch_taken_0x125678 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        if (branch_taken_0x125678) {
            ctx->pc = 0x12567Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125678u;
            // 0x12567c: 0x960f000c  lhu         $t7, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1256FCu;
            goto label_1256fc;
        }
    }
    ctx->pc = 0x125680u;
label_125680:
    // 0x125680: 0x960c000c  lhu         $t4, 0xC($s0)
    ctx->pc = 0x125680u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_125684:
    // 0x125684: 0x358f0800  ori         $t7, $t4, 0x800
    ctx->pc = 0x125684u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)2048);
label_125688:
    // 0x125688: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x125688u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12568c:
    // 0x12568c: 0xc049258  jal         func_124960
label_125690:
    if (ctx->pc == 0x125690u) {
        ctx->pc = 0x125690u;
            // 0x125690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125694u;
        goto label_125694;
    }
    ctx->pc = 0x12568Cu;
    SET_GPR_U32(ctx, 31, 0x125694u);
    ctx->pc = 0x125690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12568Cu;
            // 0x125690: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    if (runtime->hasFunction(0x124960u)) {
        auto targetFn = runtime->lookupFunction(0x124960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125694u; }
        if (ctx->pc != 0x125694u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124960_0x124960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125694u; }
        if (ctx->pc != 0x125694u) { return; }
    }
    ctx->pc = 0x125694u;
label_125694:
    // 0x125694: 0x1440ffcc  bnez        $v0, . + 4 + (-0x34 << 2)
label_125698:
    if (ctx->pc == 0x125698u) {
        ctx->pc = 0x125698u;
            // 0x125698: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x12569Cu;
        goto label_12569c;
    }
    ctx->pc = 0x125694u;
    {
        const bool branch_taken_0x125694 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125698u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125694u;
            // 0x125698: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125694) {
            ctx->pc = 0x1255C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1255c8;
        }
    }
    ctx->pc = 0x12569Cu;
label_12569c:
    // 0x12569c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x12569cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1256a0:
    // 0x1256a0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x1256a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1256a4:
    // 0x1256a4: 0x280f809  jalr        $s4
label_1256a8:
    if (ctx->pc == 0x1256A8u) {
        ctx->pc = 0x1256A8u;
            // 0x1256a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1256ACu;
        goto label_1256ac;
    }
    ctx->pc = 0x1256A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x1256ACu);
        ctx->pc = 0x1256A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256A4u;
            // 0x1256a8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1256ACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1256ACu; }
            if (ctx->pc != 0x1256ACu) { return; }
        }
        }
    }
    ctx->pc = 0x1256ACu;
label_1256ac:
    // 0x1256ac: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1256acu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1256b0:
    // 0x1256b0: 0x544f0003  bnel        $v0, $t7, . + 4 + (0x3 << 2)
label_1256b4:
    if (ctx->pc == 0x1256B4u) {
        ctx->pc = 0x1256B4u;
            // 0x1256b4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x1256B8u;
        goto label_1256b8;
    }
    ctx->pc = 0x1256B0u;
    {
        const bool branch_taken_0x1256b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 15));
        if (branch_taken_0x1256b0) {
            ctx->pc = 0x1256B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1256B0u;
            // 0x1256b4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1256C0u;
            goto label_1256c0;
        }
    }
    ctx->pc = 0x1256B8u;
label_1256b8:
    // 0x1256b8: 0x1000ffc3  b           . + 4 + (-0x3D << 2)
label_1256bc:
    if (ctx->pc == 0x1256BCu) {
        ctx->pc = 0x1256BCu;
            // 0x1256bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1256C0u;
        goto label_1256c0;
    }
    ctx->pc = 0x1256B8u;
    {
        const bool branch_taken_0x1256b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256B8u;
            // 0x1256bc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256b8) {
            ctx->pc = 0x1255C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1255c8;
        }
    }
    ctx->pc = 0x1256C0u;
label_1256c0:
    // 0x1256c0: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_1256c4:
    if (ctx->pc == 0x1256C4u) {
        ctx->pc = 0x1256C4u;
            // 0x1256c4: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x1256C8u;
        goto label_1256c8;
    }
    ctx->pc = 0x1256C0u;
    {
        const bool branch_taken_0x1256c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256C0u;
            // 0x1256c4: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256c0) {
            ctx->pc = 0x1256DCu;
            goto label_1256dc;
        }
    }
    ctx->pc = 0x1256C8u;
label_1256c8:
    // 0x1256c8: 0x50af0004  beql        $a1, $t7, . + 4 + (0x4 << 2)
label_1256cc:
    if (ctx->pc == 0x1256CCu) {
        ctx->pc = 0x1256CCu;
            // 0x1256cc: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x1256D0u;
        goto label_1256d0;
    }
    ctx->pc = 0x1256C8u;
    {
        const bool branch_taken_0x1256c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x1256c8) {
            ctx->pc = 0x1256CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1256C8u;
            // 0x1256cc: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1256DCu;
            goto label_1256dc;
        }
    }
    ctx->pc = 0x1256D0u;
label_1256d0:
    // 0x1256d0: 0xc04943c  jal         func_1250F0
label_1256d4:
    if (ctx->pc == 0x1256D4u) {
        ctx->pc = 0x1256D4u;
            // 0x1256d4: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x1256D8u;
        goto label_1256d8;
    }
    ctx->pc = 0x1256D0u;
    SET_GPR_U32(ctx, 31, 0x1256D8u);
    ctx->pc = 0x1256D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1256D0u;
            // 0x1256d4: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (runtime->hasFunction(0x1250F0u)) {
        auto targetFn = runtime->lookupFunction(0x1250F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256D8u; }
        if (ctx->pc != 0x1256D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001250F0_0x1250f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1256D8u; }
        if (ctx->pc != 0x1256D8u) { return; }
    }
    ctx->pc = 0x1256D8u;
label_1256d8:
    // 0x1256d8: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1256d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1256dc:
    // 0x1256dc: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x1256dcu;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1256e0:
    // 0x1256e0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1256e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1256e4:
    // 0x1256e4: 0x8e0e0010  lw          $t6, 0x10($s0)
    ctx->pc = 0x1256e4u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1256e8:
    // 0x1256e8: 0x31efffdf  andi        $t7, $t7, 0xFFDF
    ctx->pc = 0x1256e8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65503);
label_1256ec:
    // 0x1256ec: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1256ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1256f0:
    // 0x1256f0: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x1256f0u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_1256f4:
    // 0x1256f4: 0x1000ffb4  b           . + 4 + (-0x4C << 2)
label_1256f8:
    if (ctx->pc == 0x1256F8u) {
        ctx->pc = 0x1256F8u;
            // 0x1256f8: 0xae0e0000  sw          $t6, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
        ctx->pc = 0x1256FCu;
        goto label_1256fc;
    }
    ctx->pc = 0x1256F4u;
    {
        const bool branch_taken_0x1256f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1256F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1256F4u;
            // 0x1256f8: 0xae0e0000  sw          $t6, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1256f4) {
            ctx->pc = 0x1255C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1255c8;
        }
    }
    ctx->pc = 0x1256FCu;
label_1256fc:
    // 0x1256fc: 0x240e0400  addiu       $t6, $zero, 0x400
    ctx->pc = 0x1256fcu;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_125700:
    // 0x125700: 0xae0e004c  sw          $t6, 0x4C($s0)
    ctx->pc = 0x125700u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 14));
label_125704:
    // 0x125704: 0x35ef0400  ori         $t7, $t7, 0x400
    ctx->pc = 0x125704u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)1024);
label_125708:
    // 0x125708: 0xa60f000c  sh          $t7, 0xC($s0)
    ctx->pc = 0x125708u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
label_12570c:
    // 0x12570c: 0x12400008  beqz        $s2, . + 4 + (0x8 << 2)
label_125710:
    if (ctx->pc == 0x125710u) {
        ctx->pc = 0x125710u;
            // 0x125710: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125714u;
        goto label_125714;
    }
    ctx->pc = 0x12570Cu;
    {
        const bool branch_taken_0x12570c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x125710u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12570Cu;
            // 0x125710: 0x2a0b02d  daddu       $s6, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12570c) {
            ctx->pc = 0x125730u;
            goto label_125730;
        }
    }
    ctx->pc = 0x125714u;
label_125714:
    // 0x125714: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x125714u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
label_125718:
    // 0x125718: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x125718u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_12571c:
    // 0x12571c: 0xc04966a  jal         func_1259A8
label_125720:
    if (ctx->pc == 0x125720u) {
        ctx->pc = 0x125720u;
            // 0x125720: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125724u;
        goto label_125724;
    }
    ctx->pc = 0x12571Cu;
    SET_GPR_U32(ctx, 31, 0x125724u);
    ctx->pc = 0x125720u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12571Cu;
            // 0x125720: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1259A8u;
    if (runtime->hasFunction(0x1259A8u)) {
        auto targetFn = runtime->lookupFunction(0x1259A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125724u; }
        if (ctx->pc != 0x125724u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001259A8_0x1259a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125724u; }
        if (ctx->pc != 0x125724u) { return; }
    }
    ctx->pc = 0x125724u;
label_125724:
    // 0x125724: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_125728:
    if (ctx->pc == 0x125728u) {
        ctx->pc = 0x125728u;
            // 0x125728: 0xdfaf0010  ld          $t7, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x12572Cu;
        goto label_12572c;
    }
    ctx->pc = 0x125724u;
    {
        const bool branch_taken_0x125724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x125728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125724u;
            // 0x125728: 0xdfaf0010  ld          $t7, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125724) {
            ctx->pc = 0x12568Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12568c;
        }
    }
    ctx->pc = 0x12572Cu;
label_12572c:
    // 0x12572c: 0x1f5b02d  daddu       $s6, $t7, $s5
    ctx->pc = 0x12572cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 15) + (uint64_t)GPR_U64(ctx, 21));
label_125730:
    // 0x125730: 0x16e0006e  bnez        $s7, . + 4 + (0x6E << 2)
label_125734:
    if (ctx->pc == 0x125734u) {
        ctx->pc = 0x125734u;
            // 0x125734: 0x960c000c  lhu         $t4, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x125738u;
        goto label_125738;
    }
    ctx->pc = 0x125730u;
    {
        const bool branch_taken_0x125730 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x125734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125730u;
            // 0x125734: 0x960c000c  lhu         $t4, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125730) {
            ctx->pc = 0x1258ECu;
            goto label_1258ec;
        }
    }
    ctx->pc = 0x125738u;
label_125738:
    // 0x125738: 0x318f1000  andi        $t7, $t4, 0x1000
    ctx->pc = 0x125738u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4096);
label_12573c:
    // 0x12573c: 0x51e00063  beql        $t7, $zero, . + 4 + (0x63 << 2)
label_125740:
    if (ctx->pc == 0x125740u) {
        ctx->pc = 0x125740u;
            // 0x125740: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x125744u;
        goto label_125744;
    }
    ctx->pc = 0x12573Cu;
    {
        const bool branch_taken_0x12573c = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x12573c) {
            ctx->pc = 0x125740u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12573Cu;
            // 0x125740: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1258CCu;
            goto label_1258cc;
        }
    }
    ctx->pc = 0x125744u;
label_125744:
    // 0x125744: 0x8e130050  lw          $s3, 0x50($s0)
    ctx->pc = 0x125744u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_125748:
    // 0x125748: 0x8e0d0004  lw          $t5, 0x4($s0)
    ctx->pc = 0x125748u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_12574c:
    // 0x12574c: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x12574cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_125750:
    // 0x125750: 0x10a00056  beqz        $a1, . + 4 + (0x56 << 2)
label_125754:
    if (ctx->pc == 0x125754u) {
        ctx->pc = 0x125754u;
            // 0x125754: 0x26d982f  dsubu       $s3, $s3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 13));
        ctx->pc = 0x125758u;
        goto label_125758;
    }
    ctx->pc = 0x125750u;
    {
        const bool branch_taken_0x125750 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x125754u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125750u;
            // 0x125754: 0x26d982f  dsubu       $s3, $s3, $t5 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125750) {
            ctx->pc = 0x1258ACu;
            goto label_1258ac;
        }
    }
    ctx->pc = 0x125758u;
label_125758:
    // 0x125758: 0x8e0f003c  lw          $t7, 0x3C($s0)
    ctx->pc = 0x125758u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_12575c:
    // 0x12575c: 0x26f982f  dsubu       $s3, $s3, $t7
    ctx->pc = 0x12575cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 15));
label_125760:
    // 0x125760: 0x50a00053  beql        $a1, $zero, . + 4 + (0x53 << 2)
label_125764:
    if (ctx->pc == 0x125764u) {
        ctx->pc = 0x125764u;
            // 0x125764: 0x8e0e0000  lw          $t6, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x125768u;
        goto label_125768;
    }
    ctx->pc = 0x125760u;
    {
        const bool branch_taken_0x125760 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x125760) {
            ctx->pc = 0x125764u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125760u;
            // 0x125764: 0x8e0e0000  lw          $t6, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1258B0u;
            goto label_1258b0;
        }
    }
    ctx->pc = 0x125768u;
label_125768:
    // 0x125768: 0x8e0f0038  lw          $t7, 0x38($s0)
    ctx->pc = 0x125768u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
label_12576c:
    // 0x12576c: 0x1b3982d  daddu       $s3, $t5, $s3
    ctx->pc = 0x12576cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 19));
label_125770:
    // 0x125770: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x125770u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_125774:
    // 0x125774: 0x8e0d003c  lw          $t5, 0x3C($s0)
    ctx->pc = 0x125774u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_125778:
    // 0x125778: 0x1eb8823  subu        $s1, $t7, $t3
    ctx->pc = 0x125778u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
label_12577c:
    // 0x12577c: 0x11703c  dsll32      $t6, $s1, 0
    ctx->pc = 0x12577cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) << (32 + 0));
label_125780:
    // 0x125780: 0xe703e  dsrl32      $t6, $t6, 0
    ctx->pc = 0x125780u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (32 + 0));
label_125784:
    // 0x125784: 0x22d8821  addu        $s1, $s1, $t5
    ctx->pc = 0x125784u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
label_125788:
    // 0x125788: 0x26e982f  dsubu       $s3, $s3, $t6
    ctx->pc = 0x125788u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 14));
label_12578c:
    // 0x12578c: 0x318f2000  andi        $t7, $t4, 0x2000
    ctx->pc = 0x12578cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)8192);
label_125790:
    // 0x125790: 0x55e0001d  bnel        $t7, $zero, . + 4 + (0x1D << 2)
label_125794:
    if (ctx->pc == 0x125794u) {
        ctx->pc = 0x125794u;
            // 0x125794: 0x8e0f004c  lw          $t7, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->pc = 0x125798u;
        goto label_125798;
    }
    ctx->pc = 0x125790u;
    {
        const bool branch_taken_0x125790 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x125790) {
            ctx->pc = 0x125794u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125790u;
            // 0x125794: 0x8e0f004c  lw          $t7, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125808u;
            goto label_125808;
        }
    }
    ctx->pc = 0x125798u;
label_125798:
    // 0x125798: 0x2d3782a  slt         $t7, $s6, $s3
    ctx->pc = 0x125798u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_12579c:
    // 0x12579c: 0x55e0001a  bnel        $t7, $zero, . + 4 + (0x1A << 2)
label_1257a0:
    if (ctx->pc == 0x1257A0u) {
        ctx->pc = 0x1257A0u;
            // 0x1257a0: 0x8e0f004c  lw          $t7, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->pc = 0x1257A4u;
        goto label_1257a4;
    }
    ctx->pc = 0x12579Cu;
    {
        const bool branch_taken_0x12579c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x12579c) {
            ctx->pc = 0x1257A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x12579Cu;
            // 0x1257a0: 0x8e0f004c  lw          $t7, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125808u;
            goto label_125808;
        }
    }
    ctx->pc = 0x1257A4u;
label_1257a4:
    // 0x1257a4: 0x11783c  dsll32      $t7, $s1, 0
    ctx->pc = 0x1257a4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << (32 + 0));
label_1257a8:
    // 0x1257a8: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1257a8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
label_1257ac:
    // 0x1257ac: 0x26f782d  daddu       $t7, $s3, $t7
    ctx->pc = 0x1257acu;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 15));
label_1257b0:
    // 0x1257b0: 0x2cf782a  slt         $t7, $s6, $t7
    ctx->pc = 0x1257b0u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 15)) ? 1 : 0);
label_1257b4:
    // 0x1257b4: 0x11e00013  beqz        $t7, . + 4 + (0x13 << 2)
label_1257b8:
    if (ctx->pc == 0x1257B8u) {
        ctx->pc = 0x1257B8u;
            // 0x1257b8: 0x2d3782f  dsubu       $t7, $s6, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 22) - GPR_U64(ctx, 19));
        ctx->pc = 0x1257BCu;
        goto label_1257bc;
    }
    ctx->pc = 0x1257B4u;
    {
        const bool branch_taken_0x1257b4 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1257B4u;
            // 0x1257b8: 0x2d3782f  dsubu       $t7, $s6, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 22) - GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257b4) {
            ctx->pc = 0x125804u;
            goto label_125804;
        }
    }
    ctx->pc = 0x1257BCu;
label_1257bc:
    // 0x1257bc: 0xf783c  dsll32      $t7, $t7, 0
    ctx->pc = 0x1257bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << (32 + 0));
label_1257c0:
    // 0x1257c0: 0xf783f  dsra32      $t7, $t7, 0
    ctx->pc = 0x1257c0u;
    SET_GPR_S64(ctx, 15, GPR_S64(ctx, 15) >> (32 + 0));
label_1257c4:
    // 0x1257c4: 0x22f7023  subu        $t6, $s1, $t7
    ctx->pc = 0x1257c4u;
    SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 15)));
label_1257c8:
    // 0x1257c8: 0x16f7821  addu        $t7, $t3, $t7
    ctx->pc = 0x1257c8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 15)));
label_1257cc:
    // 0x1257cc: 0xae0e0004  sw          $t6, 0x4($s0)
    ctx->pc = 0x1257ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 14));
label_1257d0:
    // 0x1257d0: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1257d4:
    if (ctx->pc == 0x1257D4u) {
        ctx->pc = 0x1257D4u;
            // 0x1257d4: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->pc = 0x1257D8u;
        goto label_1257d8;
    }
    ctx->pc = 0x1257D0u;
    {
        const bool branch_taken_0x1257d0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1257D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1257D0u;
            // 0x1257d4: 0xae0f0000  sw          $t7, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257d0) {
            ctx->pc = 0x1257F4u;
            goto label_1257f4;
        }
    }
    ctx->pc = 0x1257D8u;
label_1257d8:
    // 0x1257d8: 0x260f0040  addiu       $t7, $s0, 0x40
    ctx->pc = 0x1257d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_1257dc:
    // 0x1257dc: 0x50af0005  beql        $a1, $t7, . + 4 + (0x5 << 2)
label_1257e0:
    if (ctx->pc == 0x1257E0u) {
        ctx->pc = 0x1257E0u;
            // 0x1257e0: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x1257E4u;
        goto label_1257e4;
    }
    ctx->pc = 0x1257DCu;
    {
        const bool branch_taken_0x1257dc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x1257dc) {
            ctx->pc = 0x1257E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1257DCu;
            // 0x1257e0: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1257F4u;
            goto label_1257f4;
        }
    }
    ctx->pc = 0x1257E4u;
label_1257e4:
    // 0x1257e4: 0xc04943c  jal         func_1250F0
label_1257e8:
    if (ctx->pc == 0x1257E8u) {
        ctx->pc = 0x1257E8u;
            // 0x1257e8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x1257ECu;
        goto label_1257ec;
    }
    ctx->pc = 0x1257E4u;
    SET_GPR_U32(ctx, 31, 0x1257ECu);
    ctx->pc = 0x1257E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1257E4u;
            // 0x1257e8: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (runtime->hasFunction(0x1250F0u)) {
        auto targetFn = runtime->lookupFunction(0x1250F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1257ECu; }
        if (ctx->pc != 0x1257ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001250F0_0x1250f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1257ECu; }
        if (ctx->pc != 0x1257ECu) { return; }
    }
    ctx->pc = 0x1257ECu;
label_1257ec:
    // 0x1257ec: 0x960c000c  lhu         $t4, 0xC($s0)
    ctx->pc = 0x1257ecu;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_1257f0:
    // 0x1257f0: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1257f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1257f4:
    // 0x1257f4: 0x318fffdf  andi        $t7, $t4, 0xFFDF
    ctx->pc = 0x1257f4u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)65503);
label_1257f8:
    // 0x1257f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1257f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1257fc:
    // 0x1257fc: 0x1000ff72  b           . + 4 + (-0x8E << 2)
label_125800:
    if (ctx->pc == 0x125800u) {
        ctx->pc = 0x125800u;
            // 0x125800: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->pc = 0x125804u;
        goto label_125804;
    }
    ctx->pc = 0x1257FCu;
    {
        const bool branch_taken_0x1257fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125800u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1257FCu;
            // 0x125800: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1257fc) {
            ctx->pc = 0x1255C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1255c8;
        }
    }
    ctx->pc = 0x125804u;
label_125804:
    // 0x125804: 0x8e0f004c  lw          $t7, 0x4C($s0)
    ctx->pc = 0x125804u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_125808:
    // 0x125808: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x125808u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_12580c:
    // 0x12580c: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x12580cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_125810:
    // 0x125810: 0xf7823  negu        $t7, $t7
    ctx->pc = 0x125810u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 15)));
label_125814:
    // 0x125814: 0x1f69824  and         $s3, $t7, $s6
    ctx->pc = 0x125814u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 15) & GPR_U64(ctx, 22));
label_125818:
    // 0x125818: 0x280f809  jalr        $s4
label_12581c:
    if (ctx->pc == 0x12581Cu) {
        ctx->pc = 0x12581Cu;
            // 0x12581c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125820u;
        goto label_125820;
    }
    ctx->pc = 0x125818u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x125820u);
        ctx->pc = 0x12581Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125818u;
            // 0x12581c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x125820u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125820u; }
            if (ctx->pc != 0x125820u) { return; }
        }
        }
    }
    ctx->pc = 0x125820u;
label_125820:
    // 0x125820: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x125820u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125824:
    // 0x125824: 0x104fff99  beq         $v0, $t7, . + 4 + (-0x67 << 2)
label_125828:
    if (ctx->pc == 0x125828u) {
        ctx->pc = 0x12582Cu;
        goto label_12582c;
    }
    ctx->pc = 0x125824u;
    {
        const bool branch_taken_0x125824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        if (branch_taken_0x125824) {
            ctx->pc = 0x12568Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12568c;
        }
    }
    ctx->pc = 0x12582Cu;
label_12582c:
    // 0x12582c: 0x8e0f0010  lw          $t7, 0x10($s0)
    ctx->pc = 0x12582cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_125830:
    // 0x125830: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x125830u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_125834:
    // 0x125834: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x125834u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
label_125838:
    // 0x125838: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x125838u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_12583c:
    // 0x12583c: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_125840:
    if (ctx->pc == 0x125840u) {
        ctx->pc = 0x125840u;
            // 0x125840: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->pc = 0x125844u;
        goto label_125844;
    }
    ctx->pc = 0x12583Cu;
    {
        const bool branch_taken_0x12583c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x125840u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12583Cu;
            // 0x125840: 0x260f0040  addiu       $t7, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12583c) {
            ctx->pc = 0x125858u;
            goto label_125858;
        }
    }
    ctx->pc = 0x125844u;
label_125844:
    // 0x125844: 0x50af0004  beql        $a1, $t7, . + 4 + (0x4 << 2)
label_125848:
    if (ctx->pc == 0x125848u) {
        ctx->pc = 0x125848u;
            // 0x125848: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->pc = 0x12584Cu;
        goto label_12584c;
    }
    ctx->pc = 0x125844u;
    {
        const bool branch_taken_0x125844 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 15));
        if (branch_taken_0x125844) {
            ctx->pc = 0x125848u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125844u;
            // 0x125848: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125858u;
            goto label_125858;
        }
    }
    ctx->pc = 0x12584Cu;
label_12584c:
    // 0x12584c: 0xc04943c  jal         func_1250F0
label_125850:
    if (ctx->pc == 0x125850u) {
        ctx->pc = 0x125850u;
            // 0x125850: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->pc = 0x125854u;
        goto label_125854;
    }
    ctx->pc = 0x12584Cu;
    SET_GPR_U32(ctx, 31, 0x125854u);
    ctx->pc = 0x125850u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x12584Cu;
            // 0x125850: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1250F0u;
    if (runtime->hasFunction(0x1250F0u)) {
        auto targetFn = runtime->lookupFunction(0x1250F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125854u; }
        if (ctx->pc != 0x125854u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001250F0_0x1250f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125854u; }
        if (ctx->pc != 0x125854u) { return; }
    }
    ctx->pc = 0x125854u;
label_125854:
    // 0x125854: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x125854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_125858:
    // 0x125858: 0x960f000c  lhu         $t7, 0xC($s0)
    ctx->pc = 0x125858u;
    SET_GPR_U32(ctx, 15, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_12585c:
    // 0x12585c: 0x2d3702f  dsubu       $t6, $s6, $s3
    ctx->pc = 0x12585cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 22) - GPR_U64(ctx, 19));
label_125860:
    // 0x125860: 0xe883c  dsll32      $s1, $t6, 0
    ctx->pc = 0x125860u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 14) << (32 + 0));
label_125864:
    // 0x125864: 0x31efffdf  andi        $t7, $t7, 0xFFDF
    ctx->pc = 0x125864u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & (uint64_t)(uint16_t)65503);
label_125868:
    // 0x125868: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x125868u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_12586c:
    // 0x12586c: 0x1220000d  beqz        $s1, . + 4 + (0xD << 2)
label_125870:
    if (ctx->pc == 0x125870u) {
        ctx->pc = 0x125870u;
            // 0x125870: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->pc = 0x125874u;
        goto label_125874;
    }
    ctx->pc = 0x12586Cu;
    {
        const bool branch_taken_0x12586c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x125870u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12586Cu;
            // 0x125870: 0xa60f000c  sh          $t7, 0xC($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12586c) {
            ctx->pc = 0x1258A4u;
            goto label_1258a4;
        }
    }
    ctx->pc = 0x125874u;
label_125874:
    // 0x125874: 0xc04a566  jal         func_129598
label_125878:
    if (ctx->pc == 0x125878u) {
        ctx->pc = 0x125878u;
            // 0x125878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x12587Cu;
        goto label_12587c;
    }
    ctx->pc = 0x125874u;
    SET_GPR_U32(ctx, 31, 0x12587Cu);
    ctx->pc = 0x125878u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125874u;
            // 0x125878: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129598u;
    if (runtime->hasFunction(0x129598u)) {
        auto targetFn = runtime->lookupFunction(0x129598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12587Cu; }
        if (ctx->pc != 0x12587Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129598_0x129598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x12587Cu; }
        if (ctx->pc != 0x12587Cu) { return; }
    }
    ctx->pc = 0x12587Cu;
label_12587c:
    // 0x12587c: 0x1440ff83  bnez        $v0, . + 4 + (-0x7D << 2)
label_125880:
    if (ctx->pc == 0x125880u) {
        ctx->pc = 0x125884u;
        goto label_125884;
    }
    ctx->pc = 0x12587Cu;
    {
        const bool branch_taken_0x12587c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x12587c) {
            ctx->pc = 0x12568Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12568c;
        }
    }
    ctx->pc = 0x125884u;
label_125884:
    // 0x125884: 0x8e0e0004  lw          $t6, 0x4($s0)
    ctx->pc = 0x125884u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_125888:
    // 0x125888: 0x1d1782b  sltu        $t7, $t6, $s1
    ctx->pc = 0x125888u;
    SET_GPR_U64(ctx, 15, ((uint64_t)GPR_U64(ctx, 14) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_12588c:
    // 0x12588c: 0x15e0ff7f  bnez        $t7, . + 4 + (-0x81 << 2)
label_125890:
    if (ctx->pc == 0x125890u) {
        ctx->pc = 0x125890u;
            // 0x125890: 0x1d17023  subu        $t6, $t6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
        ctx->pc = 0x125894u;
        goto label_125894;
    }
    ctx->pc = 0x12588Cu;
    {
        const bool branch_taken_0x12588c = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x125890u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12588Cu;
            // 0x125890: 0x1d17023  subu        $t6, $t6, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12588c) {
            ctx->pc = 0x12568Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12568c;
        }
    }
    ctx->pc = 0x125894u;
label_125894:
    // 0x125894: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x125894u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_125898:
    // 0x125898: 0xae0e0004  sw          $t6, 0x4($s0)
    ctx->pc = 0x125898u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 14));
label_12589c:
    // 0x12589c: 0x1f17821  addu        $t7, $t7, $s1
    ctx->pc = 0x12589cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), GPR_U32(ctx, 17)));
label_1258a0:
    // 0x1258a0: 0xae0f0000  sw          $t7, 0x0($s0)
    ctx->pc = 0x1258a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 15));
label_1258a4:
    // 0x1258a4: 0x1000ff48  b           . + 4 + (-0xB8 << 2)
label_1258a8:
    if (ctx->pc == 0x1258A8u) {
        ctx->pc = 0x1258A8u;
            // 0x1258a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1258ACu;
        goto label_1258ac;
    }
    ctx->pc = 0x1258A4u;
    {
        const bool branch_taken_0x1258a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1258A4u;
            // 0x1258a8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258a4) {
            ctx->pc = 0x1255C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1255c8;
        }
    }
    ctx->pc = 0x1258ACu;
label_1258ac:
    // 0x1258ac: 0x8e0e0000  lw          $t6, 0x0($s0)
    ctx->pc = 0x1258acu;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1258b0:
    // 0x1258b0: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x1258b0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_1258b4:
    // 0x1258b4: 0x1cb8823  subu        $s1, $t6, $t3
    ctx->pc = 0x1258b4u;
    SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 14), GPR_U32(ctx, 11)));
label_1258b8:
    // 0x1258b8: 0x11783c  dsll32      $t7, $s1, 0
    ctx->pc = 0x1258b8u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 17) << (32 + 0));
label_1258bc:
    // 0x1258bc: 0xf783e  dsrl32      $t7, $t7, 0
    ctx->pc = 0x1258bcu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (32 + 0));
label_1258c0:
    // 0x1258c0: 0x22d8821  addu        $s1, $s1, $t5
    ctx->pc = 0x1258c0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 13)));
label_1258c4:
    // 0x1258c4: 0x1000ffb1  b           . + 4 + (-0x4F << 2)
label_1258c8:
    if (ctx->pc == 0x1258C8u) {
        ctx->pc = 0x1258C8u;
            // 0x1258c8: 0x26f982f  dsubu       $s3, $s3, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 15));
        ctx->pc = 0x1258CCu;
        goto label_1258cc;
    }
    ctx->pc = 0x1258C4u;
    {
        const bool branch_taken_0x1258c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1258C4u;
            // 0x1258c8: 0x26f982f  dsubu       $s3, $s3, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258c4) {
            ctx->pc = 0x12578Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12578c;
        }
    }
    ctx->pc = 0x1258CCu;
label_1258cc:
    // 0x1258cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1258ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1258d0:
    // 0x1258d0: 0x280f809  jalr        $s4
label_1258d4:
    if (ctx->pc == 0x1258D4u) {
        ctx->pc = 0x1258D4u;
            // 0x1258d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1258D8u;
        goto label_1258d8;
    }
    ctx->pc = 0x1258D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x1258D8u);
        ctx->pc = 0x1258D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1258D0u;
            // 0x1258d4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1258D8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1258D8u; }
            if (ctx->pc != 0x1258D8u) { return; }
        }
        }
    }
    ctx->pc = 0x1258D8u;
label_1258d8:
    // 0x1258d8: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x1258d8u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1258dc:
    // 0x1258dc: 0x104fff6b  beq         $v0, $t7, . + 4 + (-0x95 << 2)
label_1258e0:
    if (ctx->pc == 0x1258E0u) {
        ctx->pc = 0x1258E0u;
            // 0x1258e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1258E4u;
        goto label_1258e4;
    }
    ctx->pc = 0x1258DCu;
    {
        const bool branch_taken_0x1258dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 15));
        ctx->pc = 0x1258E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1258DCu;
            // 0x1258e0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258dc) {
            ctx->pc = 0x12568Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12568c;
        }
    }
    ctx->pc = 0x1258E4u;
label_1258e4:
    // 0x1258e4: 0x1000ff98  b           . + 4 + (-0x68 << 2)
label_1258e8:
    if (ctx->pc == 0x1258E8u) {
        ctx->pc = 0x1258E8u;
            // 0x1258e8: 0x960c000c  lhu         $t4, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1258ECu;
        goto label_1258ec;
    }
    ctx->pc = 0x1258E4u;
    {
        const bool branch_taken_0x1258e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1258E4u;
            // 0x1258e8: 0x960c000c  lhu         $t4, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258e4) {
            ctx->pc = 0x125748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125748;
        }
    }
    ctx->pc = 0x1258ECu;
label_1258ec:
    // 0x1258ec: 0x8e0d0004  lw          $t5, 0x4($s0)
    ctx->pc = 0x1258ecu;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1258f0:
    // 0x1258f0: 0x1000ff9b  b           . + 4 + (-0x65 << 2)
label_1258f4:
    if (ctx->pc == 0x1258F4u) {
        ctx->pc = 0x1258F4u;
            // 0x1258f4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x1258F8u;
        goto label_1258f8;
    }
    ctx->pc = 0x1258F0u;
    {
        const bool branch_taken_0x1258f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1258F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1258F0u;
            // 0x1258f4: 0x8e050030  lw          $a1, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258f0) {
            ctx->pc = 0x125760u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125760;
        }
    }
    ctx->pc = 0x1258F8u;
label_1258f8:
    // 0x1258f8: 0x124fff46  beq         $s2, $t7, . + 4 + (-0xBA << 2)
label_1258fc:
    if (ctx->pc == 0x1258FCu) {
        ctx->pc = 0x1258FCu;
            // 0x1258fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x125900u;
        goto label_125900;
    }
    ctx->pc = 0x1258F8u;
    {
        const bool branch_taken_0x1258f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 15));
        ctx->pc = 0x1258FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1258F8u;
            // 0x1258fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1258f8) {
            ctx->pc = 0x125614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125614;
        }
    }
    ctx->pc = 0x125900u;
label_125900:
    // 0x125900: 0x1000ff30  b           . + 4 + (-0xD0 << 2)
label_125904:
    if (ctx->pc == 0x125904u) {
        ctx->pc = 0x125904u;
            // 0x125904: 0x240f0016  addiu       $t7, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->pc = 0x125908u;
        goto label_125908;
    }
    ctx->pc = 0x125900u;
    {
        const bool branch_taken_0x125900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125904u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125900u;
            // 0x125904: 0x240f0016  addiu       $t7, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125900) {
            ctx->pc = 0x1255C4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1255c4;
        }
    }
    ctx->pc = 0x125908u;
label_125908:
    // 0x125908: 0xc049258  jal         func_124960
label_12590c:
    if (ctx->pc == 0x12590Cu) {
        ctx->pc = 0x12590Cu;
            // 0x12590c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x125910u;
        goto label_125910;
    }
    ctx->pc = 0x125908u;
    SET_GPR_U32(ctx, 31, 0x125910u);
    ctx->pc = 0x12590Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125908u;
            // 0x12590c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    if (runtime->hasFunction(0x124960u)) {
        auto targetFn = runtime->lookupFunction(0x124960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125910u; }
        if (ctx->pc != 0x125910u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124960_0x124960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125910u; }
        if (ctx->pc != 0x125910u) { return; }
    }
    ctx->pc = 0x125910u;
label_125910:
    // 0x125910: 0x960c000c  lhu         $t4, 0xC($s0)
    ctx->pc = 0x125910u;
    SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_125914:
    // 0x125914: 0x318f1000  andi        $t7, $t4, 0x1000
    ctx->pc = 0x125914u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4096);
label_125918:
    // 0x125918: 0x51e0001a  beql        $t7, $zero, . + 4 + (0x1A << 2)
label_12591c:
    if (ctx->pc == 0x12591Cu) {
        ctx->pc = 0x12591Cu;
            // 0x12591c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x125920u;
        goto label_125920;
    }
    ctx->pc = 0x125918u;
    {
        const bool branch_taken_0x125918 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125918) {
            ctx->pc = 0x12591Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x125918u;
            // 0x12591c: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x125984u;
            goto label_125984;
        }
    }
    ctx->pc = 0x125920u;
label_125920:
    // 0x125920: 0x8e130050  lw          $s3, 0x50($s0)
    ctx->pc = 0x125920u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_125924:
    // 0x125924: 0x318f0004  andi        $t7, $t4, 0x4
    ctx->pc = 0x125924u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)4);
label_125928:
    // 0x125928: 0x11e0000e  beqz        $t7, . + 4 + (0xE << 2)
label_12592c:
    if (ctx->pc == 0x12592Cu) {
        ctx->pc = 0x12592Cu;
            // 0x12592c: 0x318f0008  andi        $t7, $t4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)8);
        ctx->pc = 0x125930u;
        goto label_125930;
    }
    ctx->pc = 0x125928u;
    {
        const bool branch_taken_0x125928 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x12592Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125928u;
            // 0x12592c: 0x318f0008  andi        $t7, $t4, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x125928) {
            ctx->pc = 0x125964u;
            goto label_125964;
        }
    }
    ctx->pc = 0x125930u;
label_125930:
    // 0x125930: 0x8e0f0004  lw          $t7, 0x4($s0)
    ctx->pc = 0x125930u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_125934:
    // 0x125934: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x125934u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
label_125938:
    // 0x125938: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_12593c:
    if (ctx->pc == 0x12593Cu) {
        ctx->pc = 0x12593Cu;
            // 0x12593c: 0x26f982f  dsubu       $s3, $s3, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 15));
        ctx->pc = 0x125940u;
        goto label_125940;
    }
    ctx->pc = 0x125938u;
    {
        const bool branch_taken_0x125938 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x12593Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125938u;
            // 0x12593c: 0x26f982f  dsubu       $s3, $s3, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125938) {
            ctx->pc = 0x12595Cu;
            goto label_12595c;
        }
    }
    ctx->pc = 0x125940u;
label_125940:
    // 0x125940: 0x8e0f003c  lw          $t7, 0x3C($s0)
    ctx->pc = 0x125940u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_125944:
    // 0x125944: 0x8e0b0010  lw          $t3, 0x10($s0)
    ctx->pc = 0x125944u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_125948:
    // 0x125948: 0x26f982f  dsubu       $s3, $s3, $t7
    ctx->pc = 0x125948u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) - GPR_U64(ctx, 15));
label_12594c:
    // 0x12594c: 0x2b3a82d  daddu       $s5, $s5, $s3
    ctx->pc = 0x12594cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 19));
label_125950:
    // 0x125950: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x125950u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125954:
    // 0x125954: 0x1000ff31  b           . + 4 + (-0xCF << 2)
label_125958:
    if (ctx->pc == 0x125958u) {
        ctx->pc = 0x125958u;
            // 0x125958: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x12595Cu;
        goto label_12595c;
    }
    ctx->pc = 0x125954u;
    {
        const bool branch_taken_0x125954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125958u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125954u;
            // 0x125958: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125954) {
            ctx->pc = 0x12561Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12561c;
        }
    }
    ctx->pc = 0x12595Cu;
label_12595c:
    // 0x12595c: 0x1000fffb  b           . + 4 + (-0x5 << 2)
label_125960:
    if (ctx->pc == 0x125960u) {
        ctx->pc = 0x125960u;
            // 0x125960: 0x8e0b0010  lw          $t3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x125964u;
        goto label_125964;
    }
    ctx->pc = 0x12595Cu;
    {
        const bool branch_taken_0x12595c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12595Cu;
            // 0x125960: 0x8e0b0010  lw          $t3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12595c) {
            ctx->pc = 0x12594Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12594c;
        }
    }
    ctx->pc = 0x125964u;
label_125964:
    // 0x125964: 0x11e0fff9  beqz        $t7, . + 4 + (-0x7 << 2)
label_125968:
    if (ctx->pc == 0x125968u) {
        ctx->pc = 0x125968u;
            // 0x125968: 0x8e0b0010  lw          $t3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x12596Cu;
        goto label_12596c;
    }
    ctx->pc = 0x125964u;
    {
        const bool branch_taken_0x125964 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        ctx->pc = 0x125968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125964u;
            // 0x125968: 0x8e0b0010  lw          $t3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125964) {
            ctx->pc = 0x12594Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12594c;
        }
    }
    ctx->pc = 0x12596Cu;
label_12596c:
    // 0x12596c: 0x8e0f0000  lw          $t7, 0x0($s0)
    ctx->pc = 0x12596cu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_125970:
    // 0x125970: 0x11e0fff6  beqz        $t7, . + 4 + (-0xA << 2)
label_125974:
    if (ctx->pc == 0x125974u) {
        ctx->pc = 0x125978u;
        goto label_125978;
    }
    ctx->pc = 0x125970u;
    {
        const bool branch_taken_0x125970 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 0));
        if (branch_taken_0x125970) {
            ctx->pc = 0x12594Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12594c;
        }
    }
    ctx->pc = 0x125978u;
label_125978:
    // 0x125978: 0x1eb7823  subu        $t7, $t7, $t3
    ctx->pc = 0x125978u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 11)));
label_12597c:
    // 0x12597c: 0x1000fff3  b           . + 4 + (-0xD << 2)
label_125980:
    if (ctx->pc == 0x125980u) {
        ctx->pc = 0x125980u;
            // 0x125980: 0x26f982d  daddu       $s3, $s3, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 15));
        ctx->pc = 0x125984u;
        goto label_125984;
    }
    ctx->pc = 0x12597Cu;
    {
        const bool branch_taken_0x12597c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x125980u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x12597Cu;
            // 0x125980: 0x26f982d  daddu       $s3, $s3, $t7 (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x12597c) {
            ctx->pc = 0x12594Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_12594c;
        }
    }
    ctx->pc = 0x125984u;
label_125984:
    // 0x125984: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x125984u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_125988:
    // 0x125988: 0x280f809  jalr        $s4
label_12598c:
    if (ctx->pc == 0x12598Cu) {
        ctx->pc = 0x12598Cu;
            // 0x12598c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x125990u;
        goto label_125990;
    }
    ctx->pc = 0x125988u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 20);
        SET_GPR_U32(ctx, 31, 0x125990u);
        ctx->pc = 0x12598Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125988u;
            // 0x12598c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x125990u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x125990u; }
            if (ctx->pc != 0x125990u) { return; }
        }
        }
    }
    ctx->pc = 0x125990u;
label_125990:
    // 0x125990: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x125990u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_125994:
    // 0x125994: 0x240fffff  addiu       $t7, $zero, -0x1
    ctx->pc = 0x125994u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_125998:
    // 0x125998: 0x126fff0b  beq         $s3, $t7, . + 4 + (-0xF5 << 2)
label_12599c:
    if (ctx->pc == 0x12599Cu) {
        ctx->pc = 0x12599Cu;
            // 0x12599c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1259A0u;
        goto label_1259a0;
    }
    ctx->pc = 0x125998u;
    {
        const bool branch_taken_0x125998 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 15));
        ctx->pc = 0x12599Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125998u;
            // 0x12599c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x125998) {
            ctx->pc = 0x1255C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1255c8;
        }
    }
    ctx->pc = 0x1259A0u;
label_1259a0:
    // 0x1259a0: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
label_1259a4:
    if (ctx->pc == 0x1259A4u) {
        ctx->pc = 0x1259A4u;
            // 0x1259a4: 0x960c000c  lhu         $t4, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->pc = 0x1259A8u;
        goto label_fallthrough_0x1259a0;
    }
    ctx->pc = 0x1259A0u;
    {
        const bool branch_taken_0x1259a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1259A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1259A0u;
            // 0x1259a4: 0x960c000c  lhu         $t4, 0xC($s0) (Delay Slot)
        SET_GPR_U32(ctx, 12, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1259a0) {
            ctx->pc = 0x125924u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_125924;
        }
    }
label_fallthrough_0x1259a0:
    ctx->pc = 0x1259A8u;
    ctx->pc = 0x1259a8u;
}
