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

// Function: sub_002773B0
// Address: 0x2773b0 - 0x2779c8
void sub_002773B0_0x2773b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002773B0_0x2773b0");
#endif

    switch (ctx->pc) {
        case 0x2773b0u: goto label_2773b0;
        case 0x2773b4u: goto label_2773b4;
        case 0x2773b8u: goto label_2773b8;
        case 0x2773bcu: goto label_2773bc;
        case 0x2773c0u: goto label_2773c0;
        case 0x2773c4u: goto label_2773c4;
        case 0x2773c8u: goto label_2773c8;
        case 0x2773ccu: goto label_2773cc;
        case 0x2773d0u: goto label_2773d0;
        case 0x2773d4u: goto label_2773d4;
        case 0x2773d8u: goto label_2773d8;
        case 0x2773dcu: goto label_2773dc;
        case 0x2773e0u: goto label_2773e0;
        case 0x2773e4u: goto label_2773e4;
        case 0x2773e8u: goto label_2773e8;
        case 0x2773ecu: goto label_2773ec;
        case 0x2773f0u: goto label_2773f0;
        case 0x2773f4u: goto label_2773f4;
        case 0x2773f8u: goto label_2773f8;
        case 0x2773fcu: goto label_2773fc;
        case 0x277400u: goto label_277400;
        case 0x277404u: goto label_277404;
        case 0x277408u: goto label_277408;
        case 0x27740cu: goto label_27740c;
        case 0x277410u: goto label_277410;
        case 0x277414u: goto label_277414;
        case 0x277418u: goto label_277418;
        case 0x27741cu: goto label_27741c;
        case 0x277420u: goto label_277420;
        case 0x277424u: goto label_277424;
        case 0x277428u: goto label_277428;
        case 0x27742cu: goto label_27742c;
        case 0x277430u: goto label_277430;
        case 0x277434u: goto label_277434;
        case 0x277438u: goto label_277438;
        case 0x27743cu: goto label_27743c;
        case 0x277440u: goto label_277440;
        case 0x277444u: goto label_277444;
        case 0x277448u: goto label_277448;
        case 0x27744cu: goto label_27744c;
        case 0x277450u: goto label_277450;
        case 0x277454u: goto label_277454;
        case 0x277458u: goto label_277458;
        case 0x27745cu: goto label_27745c;
        case 0x277460u: goto label_277460;
        case 0x277464u: goto label_277464;
        case 0x277468u: goto label_277468;
        case 0x27746cu: goto label_27746c;
        case 0x277470u: goto label_277470;
        case 0x277474u: goto label_277474;
        case 0x277478u: goto label_277478;
        case 0x27747cu: goto label_27747c;
        case 0x277480u: goto label_277480;
        case 0x277484u: goto label_277484;
        case 0x277488u: goto label_277488;
        case 0x27748cu: goto label_27748c;
        case 0x277490u: goto label_277490;
        case 0x277494u: goto label_277494;
        case 0x277498u: goto label_277498;
        case 0x27749cu: goto label_27749c;
        case 0x2774a0u: goto label_2774a0;
        case 0x2774a4u: goto label_2774a4;
        case 0x2774a8u: goto label_2774a8;
        case 0x2774acu: goto label_2774ac;
        case 0x2774b0u: goto label_2774b0;
        case 0x2774b4u: goto label_2774b4;
        case 0x2774b8u: goto label_2774b8;
        case 0x2774bcu: goto label_2774bc;
        case 0x2774c0u: goto label_2774c0;
        case 0x2774c4u: goto label_2774c4;
        case 0x2774c8u: goto label_2774c8;
        case 0x2774ccu: goto label_2774cc;
        case 0x2774d0u: goto label_2774d0;
        case 0x2774d4u: goto label_2774d4;
        case 0x2774d8u: goto label_2774d8;
        case 0x2774dcu: goto label_2774dc;
        case 0x2774e0u: goto label_2774e0;
        case 0x2774e4u: goto label_2774e4;
        case 0x2774e8u: goto label_2774e8;
        case 0x2774ecu: goto label_2774ec;
        case 0x2774f0u: goto label_2774f0;
        case 0x2774f4u: goto label_2774f4;
        case 0x2774f8u: goto label_2774f8;
        case 0x2774fcu: goto label_2774fc;
        case 0x277500u: goto label_277500;
        case 0x277504u: goto label_277504;
        case 0x277508u: goto label_277508;
        case 0x27750cu: goto label_27750c;
        case 0x277510u: goto label_277510;
        case 0x277514u: goto label_277514;
        case 0x277518u: goto label_277518;
        case 0x27751cu: goto label_27751c;
        case 0x277520u: goto label_277520;
        case 0x277524u: goto label_277524;
        case 0x277528u: goto label_277528;
        case 0x27752cu: goto label_27752c;
        case 0x277530u: goto label_277530;
        case 0x277534u: goto label_277534;
        case 0x277538u: goto label_277538;
        case 0x27753cu: goto label_27753c;
        case 0x277540u: goto label_277540;
        case 0x277544u: goto label_277544;
        case 0x277548u: goto label_277548;
        case 0x27754cu: goto label_27754c;
        case 0x277550u: goto label_277550;
        case 0x277554u: goto label_277554;
        case 0x277558u: goto label_277558;
        case 0x27755cu: goto label_27755c;
        case 0x277560u: goto label_277560;
        case 0x277564u: goto label_277564;
        case 0x277568u: goto label_277568;
        case 0x27756cu: goto label_27756c;
        case 0x277570u: goto label_277570;
        case 0x277574u: goto label_277574;
        case 0x277578u: goto label_277578;
        case 0x27757cu: goto label_27757c;
        case 0x277580u: goto label_277580;
        case 0x277584u: goto label_277584;
        case 0x277588u: goto label_277588;
        case 0x27758cu: goto label_27758c;
        case 0x277590u: goto label_277590;
        case 0x277594u: goto label_277594;
        case 0x277598u: goto label_277598;
        case 0x27759cu: goto label_27759c;
        case 0x2775a0u: goto label_2775a0;
        case 0x2775a4u: goto label_2775a4;
        case 0x2775a8u: goto label_2775a8;
        case 0x2775acu: goto label_2775ac;
        case 0x2775b0u: goto label_2775b0;
        case 0x2775b4u: goto label_2775b4;
        case 0x2775b8u: goto label_2775b8;
        case 0x2775bcu: goto label_2775bc;
        case 0x2775c0u: goto label_2775c0;
        case 0x2775c4u: goto label_2775c4;
        case 0x2775c8u: goto label_2775c8;
        case 0x2775ccu: goto label_2775cc;
        case 0x2775d0u: goto label_2775d0;
        case 0x2775d4u: goto label_2775d4;
        case 0x2775d8u: goto label_2775d8;
        case 0x2775dcu: goto label_2775dc;
        case 0x2775e0u: goto label_2775e0;
        case 0x2775e4u: goto label_2775e4;
        case 0x2775e8u: goto label_2775e8;
        case 0x2775ecu: goto label_2775ec;
        case 0x2775f0u: goto label_2775f0;
        case 0x2775f4u: goto label_2775f4;
        case 0x2775f8u: goto label_2775f8;
        case 0x2775fcu: goto label_2775fc;
        case 0x277600u: goto label_277600;
        case 0x277604u: goto label_277604;
        case 0x277608u: goto label_277608;
        case 0x27760cu: goto label_27760c;
        case 0x277610u: goto label_277610;
        case 0x277614u: goto label_277614;
        case 0x277618u: goto label_277618;
        case 0x27761cu: goto label_27761c;
        case 0x277620u: goto label_277620;
        case 0x277624u: goto label_277624;
        case 0x277628u: goto label_277628;
        case 0x27762cu: goto label_27762c;
        case 0x277630u: goto label_277630;
        case 0x277634u: goto label_277634;
        case 0x277638u: goto label_277638;
        case 0x27763cu: goto label_27763c;
        case 0x277640u: goto label_277640;
        case 0x277644u: goto label_277644;
        case 0x277648u: goto label_277648;
        case 0x27764cu: goto label_27764c;
        case 0x277650u: goto label_277650;
        case 0x277654u: goto label_277654;
        case 0x277658u: goto label_277658;
        case 0x27765cu: goto label_27765c;
        case 0x277660u: goto label_277660;
        case 0x277664u: goto label_277664;
        case 0x277668u: goto label_277668;
        case 0x27766cu: goto label_27766c;
        case 0x277670u: goto label_277670;
        case 0x277674u: goto label_277674;
        case 0x277678u: goto label_277678;
        case 0x27767cu: goto label_27767c;
        case 0x277680u: goto label_277680;
        case 0x277684u: goto label_277684;
        case 0x277688u: goto label_277688;
        case 0x27768cu: goto label_27768c;
        case 0x277690u: goto label_277690;
        case 0x277694u: goto label_277694;
        case 0x277698u: goto label_277698;
        case 0x27769cu: goto label_27769c;
        case 0x2776a0u: goto label_2776a0;
        case 0x2776a4u: goto label_2776a4;
        case 0x2776a8u: goto label_2776a8;
        case 0x2776acu: goto label_2776ac;
        case 0x2776b0u: goto label_2776b0;
        case 0x2776b4u: goto label_2776b4;
        case 0x2776b8u: goto label_2776b8;
        case 0x2776bcu: goto label_2776bc;
        case 0x2776c0u: goto label_2776c0;
        case 0x2776c4u: goto label_2776c4;
        case 0x2776c8u: goto label_2776c8;
        case 0x2776ccu: goto label_2776cc;
        case 0x2776d0u: goto label_2776d0;
        case 0x2776d4u: goto label_2776d4;
        case 0x2776d8u: goto label_2776d8;
        case 0x2776dcu: goto label_2776dc;
        case 0x2776e0u: goto label_2776e0;
        case 0x2776e4u: goto label_2776e4;
        case 0x2776e8u: goto label_2776e8;
        case 0x2776ecu: goto label_2776ec;
        case 0x2776f0u: goto label_2776f0;
        case 0x2776f4u: goto label_2776f4;
        case 0x2776f8u: goto label_2776f8;
        case 0x2776fcu: goto label_2776fc;
        case 0x277700u: goto label_277700;
        case 0x277704u: goto label_277704;
        case 0x277708u: goto label_277708;
        case 0x27770cu: goto label_27770c;
        case 0x277710u: goto label_277710;
        case 0x277714u: goto label_277714;
        case 0x277718u: goto label_277718;
        case 0x27771cu: goto label_27771c;
        case 0x277720u: goto label_277720;
        case 0x277724u: goto label_277724;
        case 0x277728u: goto label_277728;
        case 0x27772cu: goto label_27772c;
        case 0x277730u: goto label_277730;
        case 0x277734u: goto label_277734;
        case 0x277738u: goto label_277738;
        case 0x27773cu: goto label_27773c;
        case 0x277740u: goto label_277740;
        case 0x277744u: goto label_277744;
        case 0x277748u: goto label_277748;
        case 0x27774cu: goto label_27774c;
        case 0x277750u: goto label_277750;
        case 0x277754u: goto label_277754;
        case 0x277758u: goto label_277758;
        case 0x27775cu: goto label_27775c;
        case 0x277760u: goto label_277760;
        case 0x277764u: goto label_277764;
        case 0x277768u: goto label_277768;
        case 0x27776cu: goto label_27776c;
        case 0x277770u: goto label_277770;
        case 0x277774u: goto label_277774;
        case 0x277778u: goto label_277778;
        case 0x27777cu: goto label_27777c;
        case 0x277780u: goto label_277780;
        case 0x277784u: goto label_277784;
        case 0x277788u: goto label_277788;
        case 0x27778cu: goto label_27778c;
        case 0x277790u: goto label_277790;
        case 0x277794u: goto label_277794;
        case 0x277798u: goto label_277798;
        case 0x27779cu: goto label_27779c;
        case 0x2777a0u: goto label_2777a0;
        case 0x2777a4u: goto label_2777a4;
        case 0x2777a8u: goto label_2777a8;
        case 0x2777acu: goto label_2777ac;
        case 0x2777b0u: goto label_2777b0;
        case 0x2777b4u: goto label_2777b4;
        case 0x2777b8u: goto label_2777b8;
        case 0x2777bcu: goto label_2777bc;
        case 0x2777c0u: goto label_2777c0;
        case 0x2777c4u: goto label_2777c4;
        case 0x2777c8u: goto label_2777c8;
        case 0x2777ccu: goto label_2777cc;
        case 0x2777d0u: goto label_2777d0;
        case 0x2777d4u: goto label_2777d4;
        case 0x2777d8u: goto label_2777d8;
        case 0x2777dcu: goto label_2777dc;
        case 0x2777e0u: goto label_2777e0;
        case 0x2777e4u: goto label_2777e4;
        case 0x2777e8u: goto label_2777e8;
        case 0x2777ecu: goto label_2777ec;
        case 0x2777f0u: goto label_2777f0;
        case 0x2777f4u: goto label_2777f4;
        case 0x2777f8u: goto label_2777f8;
        case 0x2777fcu: goto label_2777fc;
        case 0x277800u: goto label_277800;
        case 0x277804u: goto label_277804;
        case 0x277808u: goto label_277808;
        case 0x27780cu: goto label_27780c;
        case 0x277810u: goto label_277810;
        case 0x277814u: goto label_277814;
        case 0x277818u: goto label_277818;
        case 0x27781cu: goto label_27781c;
        case 0x277820u: goto label_277820;
        case 0x277824u: goto label_277824;
        case 0x277828u: goto label_277828;
        case 0x27782cu: goto label_27782c;
        case 0x277830u: goto label_277830;
        case 0x277834u: goto label_277834;
        case 0x277838u: goto label_277838;
        case 0x27783cu: goto label_27783c;
        case 0x277840u: goto label_277840;
        case 0x277844u: goto label_277844;
        case 0x277848u: goto label_277848;
        case 0x27784cu: goto label_27784c;
        case 0x277850u: goto label_277850;
        case 0x277854u: goto label_277854;
        case 0x277858u: goto label_277858;
        case 0x27785cu: goto label_27785c;
        case 0x277860u: goto label_277860;
        case 0x277864u: goto label_277864;
        case 0x277868u: goto label_277868;
        case 0x27786cu: goto label_27786c;
        case 0x277870u: goto label_277870;
        case 0x277874u: goto label_277874;
        case 0x277878u: goto label_277878;
        case 0x27787cu: goto label_27787c;
        case 0x277880u: goto label_277880;
        case 0x277884u: goto label_277884;
        case 0x277888u: goto label_277888;
        case 0x27788cu: goto label_27788c;
        case 0x277890u: goto label_277890;
        case 0x277894u: goto label_277894;
        case 0x277898u: goto label_277898;
        case 0x27789cu: goto label_27789c;
        case 0x2778a0u: goto label_2778a0;
        case 0x2778a4u: goto label_2778a4;
        case 0x2778a8u: goto label_2778a8;
        case 0x2778acu: goto label_2778ac;
        case 0x2778b0u: goto label_2778b0;
        case 0x2778b4u: goto label_2778b4;
        case 0x2778b8u: goto label_2778b8;
        case 0x2778bcu: goto label_2778bc;
        case 0x2778c0u: goto label_2778c0;
        case 0x2778c4u: goto label_2778c4;
        case 0x2778c8u: goto label_2778c8;
        case 0x2778ccu: goto label_2778cc;
        case 0x2778d0u: goto label_2778d0;
        case 0x2778d4u: goto label_2778d4;
        case 0x2778d8u: goto label_2778d8;
        case 0x2778dcu: goto label_2778dc;
        case 0x2778e0u: goto label_2778e0;
        case 0x2778e4u: goto label_2778e4;
        case 0x2778e8u: goto label_2778e8;
        case 0x2778ecu: goto label_2778ec;
        case 0x2778f0u: goto label_2778f0;
        case 0x2778f4u: goto label_2778f4;
        case 0x2778f8u: goto label_2778f8;
        case 0x2778fcu: goto label_2778fc;
        case 0x277900u: goto label_277900;
        case 0x277904u: goto label_277904;
        case 0x277908u: goto label_277908;
        case 0x27790cu: goto label_27790c;
        case 0x277910u: goto label_277910;
        case 0x277914u: goto label_277914;
        case 0x277918u: goto label_277918;
        case 0x27791cu: goto label_27791c;
        case 0x277920u: goto label_277920;
        case 0x277924u: goto label_277924;
        case 0x277928u: goto label_277928;
        case 0x27792cu: goto label_27792c;
        case 0x277930u: goto label_277930;
        case 0x277934u: goto label_277934;
        case 0x277938u: goto label_277938;
        case 0x27793cu: goto label_27793c;
        case 0x277940u: goto label_277940;
        case 0x277944u: goto label_277944;
        case 0x277948u: goto label_277948;
        case 0x27794cu: goto label_27794c;
        case 0x277950u: goto label_277950;
        case 0x277954u: goto label_277954;
        case 0x277958u: goto label_277958;
        case 0x27795cu: goto label_27795c;
        case 0x277960u: goto label_277960;
        case 0x277964u: goto label_277964;
        case 0x277968u: goto label_277968;
        case 0x27796cu: goto label_27796c;
        case 0x277970u: goto label_277970;
        case 0x277974u: goto label_277974;
        case 0x277978u: goto label_277978;
        case 0x27797cu: goto label_27797c;
        case 0x277980u: goto label_277980;
        case 0x277984u: goto label_277984;
        case 0x277988u: goto label_277988;
        case 0x27798cu: goto label_27798c;
        case 0x277990u: goto label_277990;
        case 0x277994u: goto label_277994;
        case 0x277998u: goto label_277998;
        case 0x27799cu: goto label_27799c;
        case 0x2779a0u: goto label_2779a0;
        case 0x2779a4u: goto label_2779a4;
        case 0x2779a8u: goto label_2779a8;
        case 0x2779acu: goto label_2779ac;
        case 0x2779b0u: goto label_2779b0;
        case 0x2779b4u: goto label_2779b4;
        case 0x2779b8u: goto label_2779b8;
        case 0x2779bcu: goto label_2779bc;
        case 0x2779c0u: goto label_2779c0;
        case 0x2779c4u: goto label_2779c4;
        default: break;
    }

    ctx->pc = 0x2773b0u;

label_2773b0:
    // 0x2773b0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2773b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2773b4:
    // 0x2773b4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2773b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2773b8:
    // 0x2773b8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2773b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2773bc:
    // 0x2773bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2773bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2773c0:
    // 0x2773c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2773c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2773c4:
    // 0x2773c4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2773c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2773c8:
    // 0x2773c8: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x2773c8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2773cc:
    // 0x2773cc: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2773ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2773d0:
    // 0x2773d0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2773d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2773d4:
    // 0x2773d4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2773d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2773d8:
    // 0x2773d8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2773d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2773dc:
    // 0x2773dc: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2773dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2773e0:
    // 0x2773e0: 0xe7b60048  swc1        $f22, 0x48($sp)
    ctx->pc = 0x2773e0u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
label_2773e4:
    // 0x2773e4: 0xe7b50040  swc1        $f21, 0x40($sp)
    ctx->pc = 0x2773e4u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
label_2773e8:
    // 0x2773e8: 0xc09c8c4  jal         func_272310
label_2773ec:
    if (ctx->pc == 0x2773ECu) {
        ctx->pc = 0x2773ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773E8u;
        // 0x2773ec: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2773F0u;
        goto label_2773f0;
    }
    ctx->pc = 0x2773E8u;
    SET_GPR_U32(ctx, 31, 0x2773F0u);
    ctx->pc = 0x2773ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2773E8u;
    // 0x2773ec: 0xe7b40038  swc1        $f20, 0x38($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x272310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272310u, 0x2773E8u, 0x2773F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2773F0u;
label_2773f0:
    // 0x2773f0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2773f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2773f4:
    // 0x2773f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2773f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2773f8:
    // 0x2773f8: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_2773fc:
    if (ctx->pc == 0x2773FCu) {
        ctx->pc = 0x2773FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773F8u;
        // 0x2773fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277400u;
        goto label_277400;
    }
    ctx->pc = 0x2773F8u;
    {
        const bool branch_taken_0x2773f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2773FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2773F8u;
        // 0x2773fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2773f8) {
            ctx->pc = 0x277414u;
            goto label_277414;
        }
    }
    ctx->pc = 0x277400u;
label_277400:
    // 0x277400: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x277400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
label_277404:
    // 0x277404: 0x8c8334b4  lw          $v1, 0x34B4($a0)
    ctx->pc = 0x277404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 13492)));
label_277408:
    // 0x277408: 0x10650163  beq         $v1, $a1, . + 4 + (0x163 << 2)
label_27740c:
    if (ctx->pc == 0x27740Cu) {
        ctx->pc = 0x27740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277408u;
        // 0x27740c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277410u;
        goto label_277410;
    }
    ctx->pc = 0x277408u;
    {
        const bool branch_taken_0x277408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x27740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277408u;
        // 0x27740c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277408) {
            ctx->pc = 0x277998u;
            goto label_277998;
        }
    }
    ctx->pc = 0x277410u;
label_277410:
    // 0x277410: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x277410u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_277414:
    // 0x277414: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x277414u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_277418:
    // 0x277418: 0xc09dbfa  jal         func_276FE8
label_27741c:
    if (ctx->pc == 0x27741Cu) {
        ctx->pc = 0x27741Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277418u;
        // 0x27741c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277420u;
        goto label_277420;
    }
    ctx->pc = 0x277418u;
    SET_GPR_U32(ctx, 31, 0x277420u);
    ctx->pc = 0x27741Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277418u;
    // 0x27741c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x276FE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FE8u, 0x277418u, 0x277420u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277420u;
label_277420:
    // 0x277420: 0x442015e  bltzl       $v0, . + 4 + (0x15E << 2)
label_277424:
    if (ctx->pc == 0x277424u) {
        ctx->pc = 0x277424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277420u;
        // 0x277424: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277428u;
        goto label_277428;
    }
    ctx->pc = 0x277420u;
    {
        const bool branch_taken_0x277420 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x277420) {
            ctx->pc = 0x277424u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x277420u;
            // 0x277424: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x27799Cu;
            goto label_27799c;
        }
    }
    ctx->pc = 0x277428u;
label_277428:
    // 0x277428: 0xc09c940  jal         func_272500
label_27742c:
    if (ctx->pc == 0x27742Cu) {
        ctx->pc = 0x277430u;
        goto label_277430;
    }
    ctx->pc = 0x277428u;
    SET_GPR_U32(ctx, 31, 0x277430u);
    ctx->pc = 0x272500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x272500u, 0x277428u, 0x277430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277430u;
label_277430:
    // 0x277430: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
label_277434:
    if (ctx->pc == 0x277434u) {
        ctx->pc = 0x277434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277430u;
        // 0x277434: 0x3c14003a  lui         $s4, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277438u;
        goto label_277438;
    }
    ctx->pc = 0x277430u;
    {
        const bool branch_taken_0x277430 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x277434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277430u;
        // 0x277434: 0x3c14003a  lui         $s4, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277430) {
            ctx->pc = 0x277440u;
            goto label_277440;
        }
    }
    ctx->pc = 0x277438u;
label_277438:
    // 0x277438: 0x10000157  b           . + 4 + (0x157 << 2)
label_27743c:
    if (ctx->pc == 0x27743Cu) {
        ctx->pc = 0x27743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277438u;
        // 0x27743c: 0x2402fda7  addiu       $v0, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277440u;
        goto label_277440;
    }
    ctx->pc = 0x277438u;
    {
        const bool branch_taken_0x277438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27743Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277438u;
        // 0x27743c: 0x2402fda7  addiu       $v0, $zero, -0x259 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966695));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277438) {
            ctx->pc = 0x277998u;
            goto label_277998;
        }
    }
    ctx->pc = 0x277440u;
label_277440:
    // 0x277440: 0x26902d78  addiu       $s0, $s4, 0x2D78
    ctx->pc = 0x277440u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
label_277444:
    // 0x277444: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x277444u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_277448:
    // 0x277448: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x277448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_27744c:
    // 0x27744c: 0xc043320  jal         func_10CC80
label_277450:
    if (ctx->pc == 0x277450u) {
        ctx->pc = 0x277450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27744Cu;
        // 0x277450: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277454u;
        goto label_277454;
    }
    ctx->pc = 0x27744Cu;
    SET_GPR_U32(ctx, 31, 0x277454u);
    ctx->pc = 0x277450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27744Cu;
    // 0x277450: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x27744Cu, 0x277454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277454u;
label_277454:
    // 0x277454: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x277454u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_277458:
    // 0x277458: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x277458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_27745c:
    // 0x27745c: 0x8c420714  lw          $v0, 0x714($v0)
    ctx->pc = 0x27745cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1812)));
label_277460:
    // 0x277460: 0x40f809  jalr        $v0
label_277464:
    if (ctx->pc == 0x277464u) {
        ctx->pc = 0x277468u;
        goto label_277468;
    }
    ctx->pc = 0x277460u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277468u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277460u, 0x277468u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277468u;
label_277468:
    // 0x277468: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x277468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_27746c:
    // 0x27746c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x27746cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_277470:
    // 0x277470: 0x8c8406d0  lw          $a0, 0x6D0($a0)
    ctx->pc = 0x277470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
label_277474:
    // 0x277474: 0xc04332c  jal         func_10CCB0
label_277478:
    if (ctx->pc == 0x277478u) {
        ctx->pc = 0x277478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277474u;
        // 0x277478: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27747Cu;
        goto label_27747c;
    }
    ctx->pc = 0x277474u;
    SET_GPR_U32(ctx, 31, 0x27747Cu);
    ctx->pc = 0x277478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277474u;
    // 0x277478: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x277474u, 0x27747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27747Cu;
label_27747c:
    // 0x27747c: 0x62000cd  bltz        $s1, . + 4 + (0xCD << 2)
label_277480:
    if (ctx->pc == 0x277480u) {
        ctx->pc = 0x277480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27747Cu;
        // 0x277480: 0x26822d78  addiu       $v0, $s4, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277484u;
        goto label_277484;
    }
    ctx->pc = 0x27747Cu;
    {
        const bool branch_taken_0x27747c = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x277480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27747Cu;
        // 0x277480: 0x26822d78  addiu       $v0, $s4, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27747c) {
            ctx->pc = 0x2777B4u;
            goto label_2777b4;
        }
    }
    ctx->pc = 0x277484u;
label_277484:
    // 0x277484: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x277484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_277488:
    // 0x277488: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x277488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_27748c:
    // 0x27748c: 0x8c4206a0  lw          $v0, 0x6A0($v0)
    ctx->pc = 0x27748cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1696)));
label_277490:
    // 0x277490: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x277490u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_277494:
    // 0x277494: 0xf03821  addu        $a3, $a3, $s0
    ctx->pc = 0x277494u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 16)));
label_277498:
    // 0x277498: 0x8ce706ac  lw          $a3, 0x6AC($a3)
    ctx->pc = 0x277498u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1708)));
label_27749c:
    // 0x27749c: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x27749cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_2774a0:
    // 0x2774a0: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2774a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_2774a4:
    // 0x2774a4: 0x8cc6069c  lw          $a2, 0x69C($a2)
    ctx->pc = 0x2774a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1692)));
label_2774a8:
    // 0x2774a8: 0x1840000d  blez        $v0, . + 4 + (0xD << 2)
label_2774ac:
    if (ctx->pc == 0x2774ACu) {
        ctx->pc = 0x2774ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774A8u;
        // 0x2774ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2774B0u;
        goto label_2774b0;
    }
    ctx->pc = 0x2774A8u;
    {
        const bool branch_taken_0x2774a8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2774ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774A8u;
        // 0x2774ac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774a8) {
            ctx->pc = 0x2774E0u;
            goto label_2774e0;
        }
    }
    ctx->pc = 0x2774B0u;
label_2774b0:
    // 0x2774b0: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2774b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2774b4:
    // 0x2774b4: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x2774b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2774b8:
    // 0x2774b8: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x2774b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_2774bc:
    // 0x2774bc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2774bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2774c0:
    // 0x2774c0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x2774c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_2774c4:
    // 0x2774c4: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x2774c4u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_2774c8:
    // 0x2774c8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2774c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2774cc:
    // 0x2774cc: 0x481021  addu        $v0, $v0, $t0
    ctx->pc = 0x2774ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_2774d0:
    // 0x2774d0: 0x8c4206a0  lw          $v0, 0x6A0($v0)
    ctx->pc = 0x2774d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1696)));
label_2774d4:
    // 0x2774d4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2774d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2774d8:
    // 0x2774d8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_2774dc:
    if (ctx->pc == 0x2774DCu) {
        ctx->pc = 0x2774DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774D8u;
        // 0x2774dc: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2774E0u;
        goto label_2774e0;
    }
    ctx->pc = 0x2774D8u;
    {
        const bool branch_taken_0x2774d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2774DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2774D8u;
        // 0x2774dc: 0xc51021  addu        $v0, $a2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2774d8) {
            ctx->pc = 0x2774B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2774b8;
        }
    }
    ctx->pc = 0x2774E0u;
label_2774e0:
    // 0x2774e0: 0x26862d78  addiu       $a2, $s4, 0x2D78
    ctx->pc = 0x2774e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
label_2774e4:
    // 0x2774e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2774e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2774e8:
    // 0x2774e8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2774e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2774ec:
    // 0x2774ec: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x2774ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2774f0:
    // 0x2774f0: 0x8c4206a0  lw          $v0, 0x6A0($v0)
    ctx->pc = 0x2774f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1696)));
label_2774f4:
    // 0x2774f4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2774f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2774f8:
    // 0x2774f8: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x2774f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_2774fc:
    // 0x2774fc: 0x8c6306ac  lw          $v1, 0x6AC($v1)
    ctx->pc = 0x2774fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1708)));
label_277500:
    // 0x277500: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x277500u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_277504:
    // 0x277504: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x277504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_277508:
    // 0x277508: 0x8c8406a8  lw          $a0, 0x6A8($a0)
    ctx->pc = 0x277508u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1704)));
label_27750c:
    // 0x27750c: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x27750cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_277510:
    // 0x277510: 0x260821  addu        $at, $at, $a2
    ctx->pc = 0x277510u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 6)));
label_277514:
    // 0x277514: 0xac2206b0  sw          $v0, 0x6B0($at)
    ctx->pc = 0x277514u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1712), GPR_U32(ctx, 2));
label_277518:
    // 0x277518: 0x3c070001  lui         $a3, 0x1
    ctx->pc = 0x277518u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)1 << 16));
label_27751c:
    // 0x27751c: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x27751cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_277520:
    // 0x277520: 0x8ce706a4  lw          $a3, 0x6A4($a3)
    ctx->pc = 0x277520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 1700)));
label_277524:
    // 0x277524: 0x1880000c  blez        $a0, . + 4 + (0xC << 2)
label_277528:
    if (ctx->pc == 0x277528u) {
        ctx->pc = 0x277528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277524u;
        // 0x277528: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27752Cu;
        goto label_27752c;
    }
    ctx->pc = 0x277524u;
    {
        const bool branch_taken_0x277524 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x277528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277524u;
        // 0x277528: 0x624021  addu        $t0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277524) {
            ctx->pc = 0x277558u;
            goto label_277558;
        }
    }
    ctx->pc = 0x27752Cu;
label_27752c:
    // 0x27752c: 0xe51021  addu        $v0, $a3, $a1
    ctx->pc = 0x27752cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_277530:
    // 0x277530: 0x1052021  addu        $a0, $t0, $a1
    ctx->pc = 0x277530u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
label_277534:
    // 0x277534: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x277534u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_277538:
    // 0x277538: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x277538u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_27753c:
    // 0x27753c: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x27753cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_277540:
    // 0x277540: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x277540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_277544:
    // 0x277544: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x277544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_277548:
    // 0x277548: 0x8c4206a8  lw          $v0, 0x6A8($v0)
    ctx->pc = 0x277548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1704)));
label_27754c:
    // 0x27754c: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x27754cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_277550:
    // 0x277550: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_277554:
    if (ctx->pc == 0x277554u) {
        ctx->pc = 0x277554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277550u;
        // 0x277554: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277558u;
        goto label_277558;
    }
    ctx->pc = 0x277550u;
    {
        const bool branch_taken_0x277550 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x277554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277550u;
        // 0x277554: 0xe51021  addu        $v0, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277550) {
            ctx->pc = 0x277530u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_277530;
        }
    }
    ctx->pc = 0x277558u;
label_277558:
    // 0x277558: 0x26822d78  addiu       $v0, $s4, 0x2D78
    ctx->pc = 0x277558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
label_27755c:
    // 0x27755c: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x27755cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
label_277560:
    // 0x277560: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x277560u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_277564:
    // 0x277564: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x277564u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_277568:
    // 0x277568: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x277568u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_27756c:
    // 0x27756c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x27756cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_277570:
    // 0x277570: 0x8c6306b0  lw          $v1, 0x6B0($v1)
    ctx->pc = 0x277570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1712)));
label_277574:
    // 0x277574: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x277574u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277578:
    // 0x277578: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x277578u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_27757c:
    // 0x27757c: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x27757cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_277580:
    // 0x277580: 0x8c8406a8  lw          $a0, 0x6A8($a0)
    ctx->pc = 0x277580u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1704)));
label_277584:
    // 0x277584: 0x3c128000  lui         $s2, 0x8000
    ctx->pc = 0x277584u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32768 << 16));
label_277588:
    // 0x277588: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x277588u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
label_27758c:
    // 0x27758c: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x27758cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_277590:
    // 0x277590: 0x8e31069c  lw          $s1, 0x69C($s1)
    ctx->pc = 0x277590u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1692)));
label_277594:
    // 0x277594: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x277594u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_277598:
    // 0x277598: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x277598u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_27759c:
    // 0x27759c: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x27759cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2775a0:
    // 0x2775a0: 0x3c010001  lui         $at, 0x1
    ctx->pc = 0x2775a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)1 << 16));
label_2775a4:
    // 0x2775a4: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x2775a4u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_2775a8:
    // 0x2775a8: 0xac2306b0  sw          $v1, 0x6B0($at)
    ctx->pc = 0x2775a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 1712), GPR_U32(ctx, 3));
label_2775ac:
    // 0x2775ac: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2775acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_2775b0:
    // 0x2775b0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2775b0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2775b4:
    // 0x2775b4: 0x0  nop
    ctx->pc = 0x2775b4u;
    // NOP
label_2775b8:
    // 0x2775b8: 0xc0b7c76  jal         func_2DF1D8
label_2775bc:
    if (ctx->pc == 0x2775BCu) {
        ctx->pc = 0x2775C0u;
        goto label_2775c0;
    }
    ctx->pc = 0x2775B8u;
    SET_GPR_U32(ctx, 31, 0x2775C0u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2775B8u, 0x2775C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2775C0u;
label_2775c0:
    // 0x2775c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2775c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2775c4:
    // 0x2775c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2775c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2775c8:
    // 0x2775c8: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x2775c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2775cc:
    // 0x2775cc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2775ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2775d0:
    // 0x2775d0: 0x0  nop
    ctx->pc = 0x2775d0u;
    // NOP
label_2775d4:
    // 0x2775d4: 0x0  nop
    ctx->pc = 0x2775d4u;
    // NOP
label_2775d8:
    // 0x2775d8: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x2775d8u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
label_2775dc:
    // 0x2775dc: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x2775dcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2775e0:
    // 0x2775e0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2775e0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2775e4:
    // 0x2775e4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2775e4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2775e8:
    // 0x2775e8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2775e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2775ec:
    // 0x2775ec: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2775f0:
    if (ctx->pc == 0x2775F0u) {
        ctx->pc = 0x2775F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775ECu;
        // 0x2775f0: 0x2a030400  slti        $v1, $s0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2775F4u;
        goto label_2775f4;
    }
    ctx->pc = 0x2775ECu;
    {
        const bool branch_taken_0x2775ec = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2775F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2775ECu;
        // 0x2775f0: 0x2a030400  slti        $v1, $s0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2775ec) {
            ctx->pc = 0x277604u;
            goto label_277604;
        }
    }
    ctx->pc = 0x2775F4u;
label_2775f4:
    // 0x2775f4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2775f4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2775f8:
    // 0x2775f8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2775f8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2775fc:
    // 0x2775fc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2775fcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_277600:
    // 0x277600: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x277600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
label_277604:
    // 0x277604: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_277608:
    if (ctx->pc == 0x277608u) {
        ctx->pc = 0x277608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277604u;
        // 0x277608: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27760Cu;
        goto label_27760c;
    }
    ctx->pc = 0x277604u;
    {
        const bool branch_taken_0x277604 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277604u;
        // 0x277608: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277604) {
            ctx->pc = 0x2775B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2775b8;
        }
    }
    ctx->pc = 0x27760Cu;
label_27760c:
    // 0x27760c: 0x26822d78  addiu       $v0, $s4, 0x2D78
    ctx->pc = 0x27760cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
label_277610:
    // 0x277610: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x277610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
label_277614:
    // 0x277614: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x277614u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_277618:
    // 0x277618: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x277618u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_27761c:
    // 0x27761c: 0x3c110001  lui         $s1, 0x1
    ctx->pc = 0x27761cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)1 << 16));
label_277620:
    // 0x277620: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x277620u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_277624:
    // 0x277624: 0x8e3106a4  lw          $s1, 0x6A4($s1)
    ctx->pc = 0x277624u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1700)));
label_277628:
    // 0x277628: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x277628u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27762c:
    // 0x27762c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27762cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_277630:
    // 0x277630: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x277630u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_277634:
    // 0x277634: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x277634u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
label_277638:
    // 0x277638: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x277638u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_27763c:
    // 0x27763c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27763cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_277640:
    // 0x277640: 0x34128032  ori         $s2, $zero, 0x8032
    ctx->pc = 0x277640u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32818);
label_277644:
    // 0x277644: 0x0  nop
    ctx->pc = 0x277644u;
    // NOP
label_277648:
    // 0x277648: 0xc0b7c76  jal         func_2DF1D8
label_27764c:
    if (ctx->pc == 0x27764Cu) {
        ctx->pc = 0x277650u;
        goto label_277650;
    }
    ctx->pc = 0x277648u;
    SET_GPR_U32(ctx, 31, 0x277650u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x277648u, 0x277650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277650u;
label_277650:
    // 0x277650: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277650u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277654:
    // 0x277654: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x277654u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_277658:
    // 0x277658: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x277658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_27765c:
    // 0x27765c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27765cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_277660:
    // 0x277660: 0x0  nop
    ctx->pc = 0x277660u;
    // NOP
label_277664:
    // 0x277664: 0x0  nop
    ctx->pc = 0x277664u;
    // NOP
label_277668:
    // 0x277668: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x277668u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
label_27766c:
    // 0x27766c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27766cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_277670:
    // 0x277670: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x277670u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277674:
    // 0x277674: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x277674u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_277678:
    // 0x277678: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x277678u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27767c:
    // 0x27767c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_277680:
    if (ctx->pc == 0x277680u) {
        ctx->pc = 0x277680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27767Cu;
        // 0x277680: 0x250182b  sltu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277684u;
        goto label_277684;
    }
    ctx->pc = 0x27767Cu;
    {
        const bool branch_taken_0x27767c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27767Cu;
        // 0x277680: 0x250182b  sltu        $v1, $s2, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27767c) {
            ctx->pc = 0x277694u;
            goto label_277694;
        }
    }
    ctx->pc = 0x277684u;
label_277684:
    // 0x277684: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x277684u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_277688:
    // 0x277688: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x277688u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27768c:
    // 0x27768c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27768cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_277690:
    // 0x277690: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x277690u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_277694:
    // 0x277694: 0x1060ffec  beqz        $v1, . + 4 + (-0x14 << 2)
label_277698:
    if (ctx->pc == 0x277698u) {
        ctx->pc = 0x277698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277694u;
        // 0x277698: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27769Cu;
        goto label_27769c;
    }
    ctx->pc = 0x277694u;
    {
        const bool branch_taken_0x277694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x277698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277694u;
        // 0x277698: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277694) {
            ctx->pc = 0x277648u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_277648;
        }
    }
    ctx->pc = 0x27769Cu;
label_27769c:
    // 0x27769c: 0x26902d78  addiu       $s0, $s4, 0x2D78
    ctx->pc = 0x27769cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
label_2776a0:
    // 0x2776a0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2776a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_2776a4:
    // 0x2776a4: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2776a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2776a8:
    // 0x2776a8: 0xc043320  jal         func_10CC80
label_2776ac:
    if (ctx->pc == 0x2776ACu) {
        ctx->pc = 0x2776ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776A8u;
        // 0x2776ac: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776B0u;
        goto label_2776b0;
    }
    ctx->pc = 0x2776A8u;
    SET_GPR_U32(ctx, 31, 0x2776B0u);
    ctx->pc = 0x2776ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776A8u;
    // 0x2776ac: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x2776A8u, 0x2776B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776B0u;
label_2776b0:
    // 0x2776b0: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x2776b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_2776b4:
    // 0x2776b4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x2776b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2776b8:
    // 0x2776b8: 0x8c420718  lw          $v0, 0x718($v0)
    ctx->pc = 0x2776b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1816)));
label_2776bc:
    // 0x2776bc: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2776bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_2776c0:
    // 0x2776c0: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2776c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2776c4:
    // 0x2776c4: 0x8c8406ac  lw          $a0, 0x6AC($a0)
    ctx->pc = 0x2776c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1708)));
label_2776c8:
    // 0x2776c8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x2776c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_2776cc:
    // 0x2776cc: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x2776ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_2776d0:
    // 0x2776d0: 0x8ca506b0  lw          $a1, 0x6B0($a1)
    ctx->pc = 0x2776d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1712)));
label_2776d4:
    // 0x2776d4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x2776d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_2776d8:
    // 0x2776d8: 0xd03021  addu        $a2, $a2, $s0
    ctx->pc = 0x2776d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_2776dc:
    // 0x2776dc: 0x40f809  jalr        $v0
label_2776e0:
    if (ctx->pc == 0x2776E0u) {
        ctx->pc = 0x2776E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776DCu;
        // 0x2776e0: 0x8cc6070c  lw          $a2, 0x70C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1804)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776E4u;
        goto label_2776e4;
    }
    ctx->pc = 0x2776DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2776E4u);
        ctx->pc = 0x2776E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776DCu;
        // 0x2776e0: 0x8cc6070c  lw          $a2, 0x70C($a2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 1804)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2776DCu, 0x2776E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2776E4u;
label_2776e4:
    // 0x2776e4: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x2776e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_2776e8:
    // 0x2776e8: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2776e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2776ec:
    // 0x2776ec: 0x8c8406d0  lw          $a0, 0x6D0($a0)
    ctx->pc = 0x2776ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
label_2776f0:
    // 0x2776f0: 0xc04332c  jal         func_10CCB0
label_2776f4:
    if (ctx->pc == 0x2776F4u) {
        ctx->pc = 0x2776F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776F0u;
        // 0x2776f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2776F8u;
        goto label_2776f8;
    }
    ctx->pc = 0x2776F0u;
    SET_GPR_U32(ctx, 31, 0x2776F8u);
    ctx->pc = 0x2776F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2776F0u;
    // 0x2776f4: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x2776F0u, 0x2776F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2776F8u;
label_2776f8:
    // 0x2776f8: 0x620002e  bltz        $s1, . + 4 + (0x2E << 2)
label_2776fc:
    if (ctx->pc == 0x2776FCu) {
        ctx->pc = 0x2776FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776F8u;
        // 0x2776fc: 0x26822d78  addiu       $v0, $s4, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277700u;
        goto label_277700;
    }
    ctx->pc = 0x2776F8u;
    {
        const bool branch_taken_0x2776f8 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2776FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2776F8u;
        // 0x2776fc: 0x26822d78  addiu       $v0, $s4, 0x2D78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2776f8) {
            ctx->pc = 0x2777B4u;
            goto label_2777b4;
        }
    }
    ctx->pc = 0x277700u;
label_277700:
    // 0x277700: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x277700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_277704:
    // 0x277704: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x277704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_277708:
    // 0x277708: 0x8c4206b0  lw          $v0, 0x6B0($v0)
    ctx->pc = 0x277708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1712)));
label_27770c:
    // 0x27770c: 0x12220004  beq         $s1, $v0, . + 4 + (0x4 << 2)
label_277710:
    if (ctx->pc == 0x277710u) {
        ctx->pc = 0x277710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27770Cu;
        // 0x277710: 0x34138432  ori         $s3, $zero, 0x8432 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33842);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277714u;
        goto label_277714;
    }
    ctx->pc = 0x27770Cu;
    {
        const bool branch_taken_0x27770c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x277710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27770Cu;
        // 0x277710: 0x34138432  ori         $s3, $zero, 0x8432 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33842);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27770c) {
            ctx->pc = 0x277720u;
            goto label_277720;
        }
    }
    ctx->pc = 0x277714u;
label_277714:
    // 0x277714: 0x10000026  b           . + 4 + (0x26 << 2)
label_277718:
    if (ctx->pc == 0x277718u) {
        ctx->pc = 0x277718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277714u;
        // 0x277718: 0x2411ff95  addiu       $s1, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27771Cu;
        goto label_27771c;
    }
    ctx->pc = 0x277714u;
    {
        const bool branch_taken_0x277714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x277718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277714u;
        // 0x277718: 0x2411ff95  addiu       $s1, $zero, -0x6B (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967189));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277714) {
            ctx->pc = 0x2777B0u;
            goto label_2777b0;
        }
    }
    ctx->pc = 0x27771Cu;
label_27771c:
    // 0x27771c: 0x0  nop
    ctx->pc = 0x27771cu;
    // NOP
label_277720:
    // 0x277720: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x277720u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
label_277724:
    // 0x277724: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x277724u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_277728:
    // 0x277728: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x277728u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_27772c:
    // 0x27772c: 0x3c148000  lui         $s4, 0x8000
    ctx->pc = 0x27772cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32768 << 16));
label_277730:
    // 0x277730: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x277730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_277734:
    // 0x277734: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x277734u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_277738:
    // 0x277738: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x277738u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_27773c:
    // 0x27773c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27773cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_277740:
    // 0x277740: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x277740u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_277744:
    // 0x277744: 0x2509021  addu        $s2, $s2, $s0
    ctx->pc = 0x277744u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_277748:
    // 0x277748: 0x8e5206ac  lw          $s2, 0x6AC($s2)
    ctx->pc = 0x277748u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
label_27774c:
    // 0x27774c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x27774cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_277750:
    // 0x277750: 0xc0b7c76  jal         func_2DF1D8
label_277754:
    if (ctx->pc == 0x277754u) {
        ctx->pc = 0x277758u;
        goto label_277758;
    }
    ctx->pc = 0x277750u;
    SET_GPR_U32(ctx, 31, 0x277758u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x277750u, 0x277758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277758u;
label_277758:
    // 0x277758: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277758u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27775c:
    // 0x27775c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x27775cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_277760:
    // 0x277760: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x277760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_277764:
    // 0x277764: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x277764u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_277768:
    // 0x277768: 0x0  nop
    ctx->pc = 0x277768u;
    // NOP
label_27776c:
    // 0x27776c: 0x0  nop
    ctx->pc = 0x27776cu;
    // NOP
label_277770:
    // 0x277770: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x277770u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
label_277774:
    // 0x277774: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x277774u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_277778:
    // 0x277778: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x277778u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27777c:
    // 0x27777c: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x27777cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_277780:
    // 0x277780: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x277780u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_277784:
    // 0x277784: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_277788:
    if (ctx->pc == 0x277788u) {
        ctx->pc = 0x277788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277784u;
        // 0x277788: 0x270182b  sltu        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27778Cu;
        goto label_27778c;
    }
    ctx->pc = 0x277784u;
    {
        const bool branch_taken_0x277784 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277788u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277784u;
        // 0x277788: 0x270182b  sltu        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x277784) {
            ctx->pc = 0x27779Cu;
            goto label_27779c;
        }
    }
    ctx->pc = 0x27778Cu;
label_27778c:
    // 0x27778c: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x27778cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_277790:
    // 0x277790: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x277790u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_277794:
    // 0x277794: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x277794u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_277798:
    // 0x277798: 0x541025  or          $v0, $v0, $s4
    ctx->pc = 0x277798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_27779c:
    // 0x27779c: 0x1060ffec  beqz        $v1, . + 4 + (-0x14 << 2)
label_2777a0:
    if (ctx->pc == 0x2777A0u) {
        ctx->pc = 0x2777A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27779Cu;
        // 0x2777a0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777A4u;
        goto label_2777a4;
    }
    ctx->pc = 0x27779Cu;
    {
        const bool branch_taken_0x27779c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2777A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27779Cu;
        // 0x2777a0: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27779c) {
            ctx->pc = 0x277750u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_277750;
        }
    }
    ctx->pc = 0x2777A4u;
label_2777a4:
    // 0x2777a4: 0x1000007c  b           . + 4 + (0x7C << 2)
label_2777a8:
    if (ctx->pc == 0x2777A8u) {
        ctx->pc = 0x2777A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777A4u;
        // 0x2777a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2777ACu;
        goto label_2777ac;
    }
    ctx->pc = 0x2777A4u;
    {
        const bool branch_taken_0x2777a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2777A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2777A4u;
        // 0x2777a8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2777a4) {
            ctx->pc = 0x277998u;
            goto label_277998;
        }
    }
    ctx->pc = 0x2777ACu;
label_2777ac:
    // 0x2777ac: 0x0  nop
    ctx->pc = 0x2777acu;
    // NOP
label_2777b0:
    // 0x2777b0: 0x26822d78  addiu       $v0, $s4, 0x2D78
    ctx->pc = 0x2777b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
label_2777b4:
    // 0x2777b4: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2777b4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
label_2777b8:
    // 0x2777b8: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2777b8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_2777bc:
    // 0x2777bc: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2777bcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2777c0:
    // 0x2777c0: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x2777c0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_2777c4:
    // 0x2777c4: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2777c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2777c8:
    // 0x2777c8: 0x8e52069c  lw          $s2, 0x69C($s2)
    ctx->pc = 0x2777c8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1692)));
label_2777cc:
    // 0x2777cc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2777ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2777d0:
    // 0x2777d0: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2777d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_2777d4:
    // 0x2777d4: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2777d4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2777d8:
    // 0x2777d8: 0x3c138000  lui         $s3, 0x8000
    ctx->pc = 0x2777d8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32768 << 16));
label_2777dc:
    // 0x2777dc: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2777dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_2777e0:
    // 0x2777e0: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2777e0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_2777e4:
    // 0x2777e4: 0x0  nop
    ctx->pc = 0x2777e4u;
    // NOP
label_2777e8:
    // 0x2777e8: 0xc0b7c76  jal         func_2DF1D8
label_2777ec:
    if (ctx->pc == 0x2777ECu) {
        ctx->pc = 0x2777F0u;
        goto label_2777f0;
    }
    ctx->pc = 0x2777E8u;
    SET_GPR_U32(ctx, 31, 0x2777F0u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2777E8u, 0x2777F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2777F0u;
label_2777f0:
    // 0x2777f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2777f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_2777f4:
    // 0x2777f4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x2777f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_2777f8:
    // 0x2777f8: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x2777f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2777fc:
    // 0x2777fc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2777fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_277800:
    // 0x277800: 0x0  nop
    ctx->pc = 0x277800u;
    // NOP
label_277804:
    // 0x277804: 0x0  nop
    ctx->pc = 0x277804u;
    // NOP
label_277808:
    // 0x277808: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x277808u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
label_27780c:
    // 0x27780c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27780cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_277810:
    // 0x277810: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x277810u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277814:
    // 0x277814: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x277814u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_277818:
    // 0x277818: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x277818u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27781c:
    // 0x27781c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_277820:
    if (ctx->pc == 0x277820u) {
        ctx->pc = 0x277820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27781Cu;
        // 0x277820: 0x2a030400  slti        $v1, $s0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277824u;
        goto label_277824;
    }
    ctx->pc = 0x27781Cu;
    {
        const bool branch_taken_0x27781c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27781Cu;
        // 0x277820: 0x2a030400  slti        $v1, $s0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)1024) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27781c) {
            ctx->pc = 0x277834u;
            goto label_277834;
        }
    }
    ctx->pc = 0x277824u;
label_277824:
    // 0x277824: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x277824u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_277828:
    // 0x277828: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x277828u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27782c:
    // 0x27782c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27782cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_277830:
    // 0x277830: 0x531025  or          $v0, $v0, $s3
    ctx->pc = 0x277830u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 19));
label_277834:
    // 0x277834: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
label_277838:
    if (ctx->pc == 0x277838u) {
        ctx->pc = 0x277838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277834u;
        // 0x277838: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27783Cu;
        goto label_27783c;
    }
    ctx->pc = 0x277834u;
    {
        const bool branch_taken_0x277834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x277838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277834u;
        // 0x277838: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277834) {
            ctx->pc = 0x2777E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2777e8;
        }
    }
    ctx->pc = 0x27783Cu;
label_27783c:
    // 0x27783c: 0x26822d78  addiu       $v0, $s4, 0x2D78
    ctx->pc = 0x27783cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
label_277840:
    // 0x277840: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x277840u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
label_277844:
    // 0x277844: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x277844u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_277848:
    // 0x277848: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x277848u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_27784c:
    // 0x27784c: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x27784cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_277850:
    // 0x277850: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x277850u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_277854:
    // 0x277854: 0x8e5206a4  lw          $s2, 0x6A4($s2)
    ctx->pc = 0x277854u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1700)));
label_277858:
    // 0x277858: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x277858u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27785c:
    // 0x27785c: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x27785cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_277860:
    // 0x277860: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x277860u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_277864:
    // 0x277864: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x277864u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_277868:
    // 0x277868: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x277868u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_27786c:
    // 0x27786c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x27786cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_277870:
    // 0x277870: 0x34138032  ori         $s3, $zero, 0x8032
    ctx->pc = 0x277870u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32818);
label_277874:
    // 0x277874: 0x0  nop
    ctx->pc = 0x277874u;
    // NOP
label_277878:
    // 0x277878: 0xc0b7c76  jal         func_2DF1D8
label_27787c:
    if (ctx->pc == 0x27787Cu) {
        ctx->pc = 0x277880u;
        goto label_277880;
    }
    ctx->pc = 0x277878u;
    SET_GPR_U32(ctx, 31, 0x277880u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x277878u, 0x277880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277880u;
label_277880:
    // 0x277880: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277880u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277884:
    // 0x277884: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x277884u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_277888:
    // 0x277888: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x277888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_27788c:
    // 0x27788c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27788cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_277890:
    // 0x277890: 0x0  nop
    ctx->pc = 0x277890u;
    // NOP
label_277894:
    // 0x277894: 0x0  nop
    ctx->pc = 0x277894u;
    // NOP
label_277898:
    // 0x277898: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x277898u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
label_27789c:
    // 0x27789c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27789cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_2778a0:
    // 0x2778a0: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x2778a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_2778a4:
    // 0x2778a4: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2778a4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2778a8:
    // 0x2778a8: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2778a8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2778ac:
    // 0x2778ac: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_2778b0:
    if (ctx->pc == 0x2778B0u) {
        ctx->pc = 0x2778B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778ACu;
        // 0x2778b0: 0x270182b  sltu        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2778B4u;
        goto label_2778b4;
    }
    ctx->pc = 0x2778ACu;
    {
        const bool branch_taken_0x2778ac = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x2778B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778ACu;
        // 0x2778b0: 0x270182b  sltu        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778ac) {
            ctx->pc = 0x2778C4u;
            goto label_2778c4;
        }
    }
    ctx->pc = 0x2778B4u;
label_2778b4:
    // 0x2778b4: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x2778b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_2778b8:
    // 0x2778b8: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x2778b8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_2778bc:
    // 0x2778bc: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x2778bcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_2778c0:
    // 0x2778c0: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x2778c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_2778c4:
    // 0x2778c4: 0x1060ffec  beqz        $v1, . + 4 + (-0x14 << 2)
label_2778c8:
    if (ctx->pc == 0x2778C8u) {
        ctx->pc = 0x2778C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778C4u;
        // 0x2778c8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2778CCu;
        goto label_2778cc;
    }
    ctx->pc = 0x2778C4u;
    {
        const bool branch_taken_0x2778c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2778C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2778C4u;
        // 0x2778c8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2778c4) {
            ctx->pc = 0x277878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_277878;
        }
    }
    ctx->pc = 0x2778CCu;
label_2778cc:
    // 0x2778cc: 0x26822d78  addiu       $v0, $s4, 0x2D78
    ctx->pc = 0x2778ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
label_2778d0:
    // 0x2778d0: 0x3c014eff  lui         $at, 0x4EFF
    ctx->pc = 0x2778d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20223 << 16));
label_2778d4:
    // 0x2778d4: 0x3421ffff  ori         $at, $at, 0xFFFF
    ctx->pc = 0x2778d4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)65535);
label_2778d8:
    // 0x2778d8: 0x4481b000  mtc1        $at, $f22
    ctx->pc = 0x2778d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[22], &bits, sizeof(bits)); }
label_2778dc:
    // 0x2778dc: 0x3c120001  lui         $s2, 0x1
    ctx->pc = 0x2778dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)1 << 16));
label_2778e0:
    // 0x2778e0: 0x2429021  addu        $s2, $s2, $v0
    ctx->pc = 0x2778e0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2778e4:
    // 0x2778e4: 0x8e5206ac  lw          $s2, 0x6AC($s2)
    ctx->pc = 0x2778e4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1708)));
label_2778e8:
    // 0x2778e8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2778e8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2778ec:
    // 0x2778ec: 0x3c014380  lui         $at, 0x4380
    ctx->pc = 0x2778ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17280 << 16));
label_2778f0:
    // 0x2778f0: 0x4481a800  mtc1        $at, $f21
    ctx->pc = 0x2778f0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[21], &bits, sizeof(bits)); }
label_2778f4:
    // 0x2778f4: 0x3c158000  lui         $s5, 0x8000
    ctx->pc = 0x2778f4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32768 << 16));
label_2778f8:
    // 0x2778f8: 0x3c014f00  lui         $at, 0x4F00
    ctx->pc = 0x2778f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)20224 << 16));
label_2778fc:
    // 0x2778fc: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x2778fcu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
label_277900:
    // 0x277900: 0x34138432  ori         $s3, $zero, 0x8432
    ctx->pc = 0x277900u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33842);
label_277904:
    // 0x277904: 0x0  nop
    ctx->pc = 0x277904u;
    // NOP
label_277908:
    // 0x277908: 0xc0b7c76  jal         func_2DF1D8
label_27790c:
    if (ctx->pc == 0x27790Cu) {
        ctx->pc = 0x277910u;
        goto label_277910;
    }
    ctx->pc = 0x277908u;
    SET_GPR_U32(ctx, 31, 0x277910u);
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x277908u, 0x277910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277910u;
label_277910:
    // 0x277910: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x277910u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_277914:
    // 0x277914: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x277914u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_277918:
    // 0x277918: 0x2502021  addu        $a0, $s2, $s0
    ctx->pc = 0x277918u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_27791c:
    // 0x27791c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27791cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_277920:
    // 0x277920: 0x0  nop
    ctx->pc = 0x277920u;
    // NOP
label_277924:
    // 0x277924: 0x0  nop
    ctx->pc = 0x277924u;
    // NOP
label_277928:
    // 0x277928: 0x46160003  div.s       $f0, $f0, $f22
    ctx->pc = 0x277928u;
    if (ctx->f[22] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[0] * 0.0f); } else ctx->f[0] = ctx->f[0] / ctx->f[22];
label_27792c:
    // 0x27792c: 0x46150002  mul.s       $f0, $f0, $f21
    ctx->pc = 0x27792cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
label_277930:
    // 0x277930: 0x4600a036  c.le.s      $f20, $f0
    ctx->pc = 0x277930u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[20], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_277934:
    // 0x277934: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x277934u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_277938:
    // 0x277938: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x277938u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_27793c:
    // 0x27793c: 0x45000005  bc1f        . + 4 + (0x5 << 2)
label_277940:
    if (ctx->pc == 0x277940u) {
        ctx->pc = 0x277940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27793Cu;
        // 0x277940: 0x270182b  sltu        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x277944u;
        goto label_277944;
    }
    ctx->pc = 0x27793Cu;
    {
        const bool branch_taken_0x27793c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x277940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27793Cu;
        // 0x277940: 0x270182b  sltu        $v1, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x27793c) {
            ctx->pc = 0x277954u;
            goto label_277954;
        }
    }
    ctx->pc = 0x277944u;
label_277944:
    // 0x277944: 0x46140001  sub.s       $f0, $f0, $f20
    ctx->pc = 0x277944u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[20]);
label_277948:
    // 0x277948: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x277948u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
label_27794c:
    // 0x27794c: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x27794cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
label_277950:
    // 0x277950: 0x551025  or          $v0, $v0, $s5
    ctx->pc = 0x277950u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 21));
label_277954:
    // 0x277954: 0x1060ffec  beqz        $v1, . + 4 + (-0x14 << 2)
label_277958:
    if (ctx->pc == 0x277958u) {
        ctx->pc = 0x277958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277954u;
        // 0x277958: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27795Cu;
        goto label_27795c;
    }
    ctx->pc = 0x277954u;
    {
        const bool branch_taken_0x277954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x277958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277954u;
        // 0x277958: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x277954) {
            ctx->pc = 0x277908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_277908;
        }
    }
    ctx->pc = 0x27795Cu;
label_27795c:
    // 0x27795c: 0x26902d78  addiu       $s0, $s4, 0x2D78
    ctx->pc = 0x27795cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 11640));
label_277960:
    // 0x277960: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x277960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_277964:
    // 0x277964: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x277964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_277968:
    // 0x277968: 0xc043320  jal         func_10CC80
label_27796c:
    if (ctx->pc == 0x27796Cu) {
        ctx->pc = 0x27796Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x277968u;
        // 0x27796c: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277970u;
        goto label_277970;
    }
    ctx->pc = 0x277968u;
    SET_GPR_U32(ctx, 31, 0x277970u);
    ctx->pc = 0x27796Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x277968u;
    // 0x27796c: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x277968u, 0x277970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277970u;
label_277970:
    // 0x277970: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x277970u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_277974:
    // 0x277974: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x277974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_277978:
    // 0x277978: 0x8c420720  lw          $v0, 0x720($v0)
    ctx->pc = 0x277978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1824)));
label_27797c:
    // 0x27797c: 0x40f809  jalr        $v0
label_277980:
    if (ctx->pc == 0x277980u) {
        ctx->pc = 0x277984u;
        goto label_277984;
    }
    ctx->pc = 0x27797Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x277984u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27797Cu, 0x277984u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x277984u;
label_277984:
    // 0x277984: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x277984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_277988:
    // 0x277988: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x277988u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_27798c:
    // 0x27798c: 0xc04332c  jal         func_10CCB0
label_277990:
    if (ctx->pc == 0x277990u) {
        ctx->pc = 0x277990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27798Cu;
        // 0x277990: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x277994u;
        goto label_277994;
    }
    ctx->pc = 0x27798Cu;
    SET_GPR_U32(ctx, 31, 0x277994u);
    ctx->pc = 0x277990u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27798Cu;
    // 0x277990: 0x8c8406d0  lw          $a0, 0x6D0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1744)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x27798Cu, 0x277994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277994u;
label_277994:
    // 0x277994: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x277994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_277998:
    // 0x277998: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x277998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27799c:
    // 0x27799c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27799cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2779a0:
    // 0x2779a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2779a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2779a4:
    // 0x2779a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2779a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2779a8:
    // 0x2779a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2779a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2779ac:
    // 0x2779ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2779acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2779b0:
    // 0x2779b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2779b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2779b4:
    // 0x2779b4: 0xc7b60048  lwc1        $f22, 0x48($sp)
    ctx->pc = 0x2779b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
label_2779b8:
    // 0x2779b8: 0xc7b50040  lwc1        $f21, 0x40($sp)
    ctx->pc = 0x2779b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2779bc:
    // 0x2779bc: 0xc7b40038  lwc1        $f20, 0x38($sp)
    ctx->pc = 0x2779bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_2779c0:
    // 0x2779c0: 0x3e00008  jr          $ra
label_2779c4:
    if (ctx->pc == 0x2779C4u) {
        ctx->pc = 0x2779C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779C0u;
        // 0x2779c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2779C8u;
        goto label_fallthrough_0x2779c0;
    }
    ctx->pc = 0x2779C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2779C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2779C0u;
        // 0x2779c4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2779C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2779c0:
    ctx->pc = 0x2779C8u;
}
