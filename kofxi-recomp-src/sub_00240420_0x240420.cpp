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

// Function: sub_00240420
// Address: 0x240420 - 0x2409a8
void sub_00240420_0x240420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00240420_0x240420");
#endif

    switch (ctx->pc) {
        case 0x240420u: goto label_240420;
        case 0x240424u: goto label_240424;
        case 0x240428u: goto label_240428;
        case 0x24042cu: goto label_24042c;
        case 0x240430u: goto label_240430;
        case 0x240434u: goto label_240434;
        case 0x240438u: goto label_240438;
        case 0x24043cu: goto label_24043c;
        case 0x240440u: goto label_240440;
        case 0x240444u: goto label_240444;
        case 0x240448u: goto label_240448;
        case 0x24044cu: goto label_24044c;
        case 0x240450u: goto label_240450;
        case 0x240454u: goto label_240454;
        case 0x240458u: goto label_240458;
        case 0x24045cu: goto label_24045c;
        case 0x240460u: goto label_240460;
        case 0x240464u: goto label_240464;
        case 0x240468u: goto label_240468;
        case 0x24046cu: goto label_24046c;
        case 0x240470u: goto label_240470;
        case 0x240474u: goto label_240474;
        case 0x240478u: goto label_240478;
        case 0x24047cu: goto label_24047c;
        case 0x240480u: goto label_240480;
        case 0x240484u: goto label_240484;
        case 0x240488u: goto label_240488;
        case 0x24048cu: goto label_24048c;
        case 0x240490u: goto label_240490;
        case 0x240494u: goto label_240494;
        case 0x240498u: goto label_240498;
        case 0x24049cu: goto label_24049c;
        case 0x2404a0u: goto label_2404a0;
        case 0x2404a4u: goto label_2404a4;
        case 0x2404a8u: goto label_2404a8;
        case 0x2404acu: goto label_2404ac;
        case 0x2404b0u: goto label_2404b0;
        case 0x2404b4u: goto label_2404b4;
        case 0x2404b8u: goto label_2404b8;
        case 0x2404bcu: goto label_2404bc;
        case 0x2404c0u: goto label_2404c0;
        case 0x2404c4u: goto label_2404c4;
        case 0x2404c8u: goto label_2404c8;
        case 0x2404ccu: goto label_2404cc;
        case 0x2404d0u: goto label_2404d0;
        case 0x2404d4u: goto label_2404d4;
        case 0x2404d8u: goto label_2404d8;
        case 0x2404dcu: goto label_2404dc;
        case 0x2404e0u: goto label_2404e0;
        case 0x2404e4u: goto label_2404e4;
        case 0x2404e8u: goto label_2404e8;
        case 0x2404ecu: goto label_2404ec;
        case 0x2404f0u: goto label_2404f0;
        case 0x2404f4u: goto label_2404f4;
        case 0x2404f8u: goto label_2404f8;
        case 0x2404fcu: goto label_2404fc;
        case 0x240500u: goto label_240500;
        case 0x240504u: goto label_240504;
        case 0x240508u: goto label_240508;
        case 0x24050cu: goto label_24050c;
        case 0x240510u: goto label_240510;
        case 0x240514u: goto label_240514;
        case 0x240518u: goto label_240518;
        case 0x24051cu: goto label_24051c;
        case 0x240520u: goto label_240520;
        case 0x240524u: goto label_240524;
        case 0x240528u: goto label_240528;
        case 0x24052cu: goto label_24052c;
        case 0x240530u: goto label_240530;
        case 0x240534u: goto label_240534;
        case 0x240538u: goto label_240538;
        case 0x24053cu: goto label_24053c;
        case 0x240540u: goto label_240540;
        case 0x240544u: goto label_240544;
        case 0x240548u: goto label_240548;
        case 0x24054cu: goto label_24054c;
        case 0x240550u: goto label_240550;
        case 0x240554u: goto label_240554;
        case 0x240558u: goto label_240558;
        case 0x24055cu: goto label_24055c;
        case 0x240560u: goto label_240560;
        case 0x240564u: goto label_240564;
        case 0x240568u: goto label_240568;
        case 0x24056cu: goto label_24056c;
        case 0x240570u: goto label_240570;
        case 0x240574u: goto label_240574;
        case 0x240578u: goto label_240578;
        case 0x24057cu: goto label_24057c;
        case 0x240580u: goto label_240580;
        case 0x240584u: goto label_240584;
        case 0x240588u: goto label_240588;
        case 0x24058cu: goto label_24058c;
        case 0x240590u: goto label_240590;
        case 0x240594u: goto label_240594;
        case 0x240598u: goto label_240598;
        case 0x24059cu: goto label_24059c;
        case 0x2405a0u: goto label_2405a0;
        case 0x2405a4u: goto label_2405a4;
        case 0x2405a8u: goto label_2405a8;
        case 0x2405acu: goto label_2405ac;
        case 0x2405b0u: goto label_2405b0;
        case 0x2405b4u: goto label_2405b4;
        case 0x2405b8u: goto label_2405b8;
        case 0x2405bcu: goto label_2405bc;
        case 0x2405c0u: goto label_2405c0;
        case 0x2405c4u: goto label_2405c4;
        case 0x2405c8u: goto label_2405c8;
        case 0x2405ccu: goto label_2405cc;
        case 0x2405d0u: goto label_2405d0;
        case 0x2405d4u: goto label_2405d4;
        case 0x2405d8u: goto label_2405d8;
        case 0x2405dcu: goto label_2405dc;
        case 0x2405e0u: goto label_2405e0;
        case 0x2405e4u: goto label_2405e4;
        case 0x2405e8u: goto label_2405e8;
        case 0x2405ecu: goto label_2405ec;
        case 0x2405f0u: goto label_2405f0;
        case 0x2405f4u: goto label_2405f4;
        case 0x2405f8u: goto label_2405f8;
        case 0x2405fcu: goto label_2405fc;
        case 0x240600u: goto label_240600;
        case 0x240604u: goto label_240604;
        case 0x240608u: goto label_240608;
        case 0x24060cu: goto label_24060c;
        case 0x240610u: goto label_240610;
        case 0x240614u: goto label_240614;
        case 0x240618u: goto label_240618;
        case 0x24061cu: goto label_24061c;
        case 0x240620u: goto label_240620;
        case 0x240624u: goto label_240624;
        case 0x240628u: goto label_240628;
        case 0x24062cu: goto label_24062c;
        case 0x240630u: goto label_240630;
        case 0x240634u: goto label_240634;
        case 0x240638u: goto label_240638;
        case 0x24063cu: goto label_24063c;
        case 0x240640u: goto label_240640;
        case 0x240644u: goto label_240644;
        case 0x240648u: goto label_240648;
        case 0x24064cu: goto label_24064c;
        case 0x240650u: goto label_240650;
        case 0x240654u: goto label_240654;
        case 0x240658u: goto label_240658;
        case 0x24065cu: goto label_24065c;
        case 0x240660u: goto label_240660;
        case 0x240664u: goto label_240664;
        case 0x240668u: goto label_240668;
        case 0x24066cu: goto label_24066c;
        case 0x240670u: goto label_240670;
        case 0x240674u: goto label_240674;
        case 0x240678u: goto label_240678;
        case 0x24067cu: goto label_24067c;
        case 0x240680u: goto label_240680;
        case 0x240684u: goto label_240684;
        case 0x240688u: goto label_240688;
        case 0x24068cu: goto label_24068c;
        case 0x240690u: goto label_240690;
        case 0x240694u: goto label_240694;
        case 0x240698u: goto label_240698;
        case 0x24069cu: goto label_24069c;
        case 0x2406a0u: goto label_2406a0;
        case 0x2406a4u: goto label_2406a4;
        case 0x2406a8u: goto label_2406a8;
        case 0x2406acu: goto label_2406ac;
        case 0x2406b0u: goto label_2406b0;
        case 0x2406b4u: goto label_2406b4;
        case 0x2406b8u: goto label_2406b8;
        case 0x2406bcu: goto label_2406bc;
        case 0x2406c0u: goto label_2406c0;
        case 0x2406c4u: goto label_2406c4;
        case 0x2406c8u: goto label_2406c8;
        case 0x2406ccu: goto label_2406cc;
        case 0x2406d0u: goto label_2406d0;
        case 0x2406d4u: goto label_2406d4;
        case 0x2406d8u: goto label_2406d8;
        case 0x2406dcu: goto label_2406dc;
        case 0x2406e0u: goto label_2406e0;
        case 0x2406e4u: goto label_2406e4;
        case 0x2406e8u: goto label_2406e8;
        case 0x2406ecu: goto label_2406ec;
        case 0x2406f0u: goto label_2406f0;
        case 0x2406f4u: goto label_2406f4;
        case 0x2406f8u: goto label_2406f8;
        case 0x2406fcu: goto label_2406fc;
        case 0x240700u: goto label_240700;
        case 0x240704u: goto label_240704;
        case 0x240708u: goto label_240708;
        case 0x24070cu: goto label_24070c;
        case 0x240710u: goto label_240710;
        case 0x240714u: goto label_240714;
        case 0x240718u: goto label_240718;
        case 0x24071cu: goto label_24071c;
        case 0x240720u: goto label_240720;
        case 0x240724u: goto label_240724;
        case 0x240728u: goto label_240728;
        case 0x24072cu: goto label_24072c;
        case 0x240730u: goto label_240730;
        case 0x240734u: goto label_240734;
        case 0x240738u: goto label_240738;
        case 0x24073cu: goto label_24073c;
        case 0x240740u: goto label_240740;
        case 0x240744u: goto label_240744;
        case 0x240748u: goto label_240748;
        case 0x24074cu: goto label_24074c;
        case 0x240750u: goto label_240750;
        case 0x240754u: goto label_240754;
        case 0x240758u: goto label_240758;
        case 0x24075cu: goto label_24075c;
        case 0x240760u: goto label_240760;
        case 0x240764u: goto label_240764;
        case 0x240768u: goto label_240768;
        case 0x24076cu: goto label_24076c;
        case 0x240770u: goto label_240770;
        case 0x240774u: goto label_240774;
        case 0x240778u: goto label_240778;
        case 0x24077cu: goto label_24077c;
        case 0x240780u: goto label_240780;
        case 0x240784u: goto label_240784;
        case 0x240788u: goto label_240788;
        case 0x24078cu: goto label_24078c;
        case 0x240790u: goto label_240790;
        case 0x240794u: goto label_240794;
        case 0x240798u: goto label_240798;
        case 0x24079cu: goto label_24079c;
        case 0x2407a0u: goto label_2407a0;
        case 0x2407a4u: goto label_2407a4;
        case 0x2407a8u: goto label_2407a8;
        case 0x2407acu: goto label_2407ac;
        case 0x2407b0u: goto label_2407b0;
        case 0x2407b4u: goto label_2407b4;
        case 0x2407b8u: goto label_2407b8;
        case 0x2407bcu: goto label_2407bc;
        case 0x2407c0u: goto label_2407c0;
        case 0x2407c4u: goto label_2407c4;
        case 0x2407c8u: goto label_2407c8;
        case 0x2407ccu: goto label_2407cc;
        case 0x2407d0u: goto label_2407d0;
        case 0x2407d4u: goto label_2407d4;
        case 0x2407d8u: goto label_2407d8;
        case 0x2407dcu: goto label_2407dc;
        case 0x2407e0u: goto label_2407e0;
        case 0x2407e4u: goto label_2407e4;
        case 0x2407e8u: goto label_2407e8;
        case 0x2407ecu: goto label_2407ec;
        case 0x2407f0u: goto label_2407f0;
        case 0x2407f4u: goto label_2407f4;
        case 0x2407f8u: goto label_2407f8;
        case 0x2407fcu: goto label_2407fc;
        case 0x240800u: goto label_240800;
        case 0x240804u: goto label_240804;
        case 0x240808u: goto label_240808;
        case 0x24080cu: goto label_24080c;
        case 0x240810u: goto label_240810;
        case 0x240814u: goto label_240814;
        case 0x240818u: goto label_240818;
        case 0x24081cu: goto label_24081c;
        case 0x240820u: goto label_240820;
        case 0x240824u: goto label_240824;
        case 0x240828u: goto label_240828;
        case 0x24082cu: goto label_24082c;
        case 0x240830u: goto label_240830;
        case 0x240834u: goto label_240834;
        case 0x240838u: goto label_240838;
        case 0x24083cu: goto label_24083c;
        case 0x240840u: goto label_240840;
        case 0x240844u: goto label_240844;
        case 0x240848u: goto label_240848;
        case 0x24084cu: goto label_24084c;
        case 0x240850u: goto label_240850;
        case 0x240854u: goto label_240854;
        case 0x240858u: goto label_240858;
        case 0x24085cu: goto label_24085c;
        case 0x240860u: goto label_240860;
        case 0x240864u: goto label_240864;
        case 0x240868u: goto label_240868;
        case 0x24086cu: goto label_24086c;
        case 0x240870u: goto label_240870;
        case 0x240874u: goto label_240874;
        case 0x240878u: goto label_240878;
        case 0x24087cu: goto label_24087c;
        case 0x240880u: goto label_240880;
        case 0x240884u: goto label_240884;
        case 0x240888u: goto label_240888;
        case 0x24088cu: goto label_24088c;
        case 0x240890u: goto label_240890;
        case 0x240894u: goto label_240894;
        case 0x240898u: goto label_240898;
        case 0x24089cu: goto label_24089c;
        case 0x2408a0u: goto label_2408a0;
        case 0x2408a4u: goto label_2408a4;
        case 0x2408a8u: goto label_2408a8;
        case 0x2408acu: goto label_2408ac;
        case 0x2408b0u: goto label_2408b0;
        case 0x2408b4u: goto label_2408b4;
        case 0x2408b8u: goto label_2408b8;
        case 0x2408bcu: goto label_2408bc;
        case 0x2408c0u: goto label_2408c0;
        case 0x2408c4u: goto label_2408c4;
        case 0x2408c8u: goto label_2408c8;
        case 0x2408ccu: goto label_2408cc;
        case 0x2408d0u: goto label_2408d0;
        case 0x2408d4u: goto label_2408d4;
        case 0x2408d8u: goto label_2408d8;
        case 0x2408dcu: goto label_2408dc;
        case 0x2408e0u: goto label_2408e0;
        case 0x2408e4u: goto label_2408e4;
        case 0x2408e8u: goto label_2408e8;
        case 0x2408ecu: goto label_2408ec;
        case 0x2408f0u: goto label_2408f0;
        case 0x2408f4u: goto label_2408f4;
        case 0x2408f8u: goto label_2408f8;
        case 0x2408fcu: goto label_2408fc;
        case 0x240900u: goto label_240900;
        case 0x240904u: goto label_240904;
        case 0x240908u: goto label_240908;
        case 0x24090cu: goto label_24090c;
        case 0x240910u: goto label_240910;
        case 0x240914u: goto label_240914;
        case 0x240918u: goto label_240918;
        case 0x24091cu: goto label_24091c;
        case 0x240920u: goto label_240920;
        case 0x240924u: goto label_240924;
        case 0x240928u: goto label_240928;
        case 0x24092cu: goto label_24092c;
        case 0x240930u: goto label_240930;
        case 0x240934u: goto label_240934;
        case 0x240938u: goto label_240938;
        case 0x24093cu: goto label_24093c;
        case 0x240940u: goto label_240940;
        case 0x240944u: goto label_240944;
        case 0x240948u: goto label_240948;
        case 0x24094cu: goto label_24094c;
        case 0x240950u: goto label_240950;
        case 0x240954u: goto label_240954;
        case 0x240958u: goto label_240958;
        case 0x24095cu: goto label_24095c;
        case 0x240960u: goto label_240960;
        case 0x240964u: goto label_240964;
        case 0x240968u: goto label_240968;
        case 0x24096cu: goto label_24096c;
        case 0x240970u: goto label_240970;
        case 0x240974u: goto label_240974;
        case 0x240978u: goto label_240978;
        case 0x24097cu: goto label_24097c;
        case 0x240980u: goto label_240980;
        case 0x240984u: goto label_240984;
        case 0x240988u: goto label_240988;
        case 0x24098cu: goto label_24098c;
        case 0x240990u: goto label_240990;
        case 0x240994u: goto label_240994;
        case 0x240998u: goto label_240998;
        case 0x24099cu: goto label_24099c;
        case 0x2409a0u: goto label_2409a0;
        case 0x2409a4u: goto label_2409a4;
        default: break;
    }

    ctx->pc = 0x240420u;

label_240420:
    // 0x240420: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x240420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_240424:
    // 0x240424: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x240424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_240428:
    // 0x240428: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x240428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_24042c:
    // 0x24042c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24042cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_240430:
    // 0x240430: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x240430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_240434:
    // 0x240434: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x240434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_240438:
    // 0x240438: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x240438u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24043c:
    // 0x24043c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x24043cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_240440:
    // 0x240440: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x240440u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_240444:
    // 0x240444: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x240444u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_240448:
    // 0x240448: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x240448u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_24044c:
    // 0x24044c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24044cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_240450:
    // 0x240450: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x240450u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_240454:
    // 0x240454: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x240454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_240458:
    // 0x240458: 0x8e540018  lw          $s4, 0x18($s2)
    ctx->pc = 0x240458u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_24045c:
    // 0x24045c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x24045cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_240460:
    // 0x240460: 0x90c30002  lbu         $v1, 0x2($a2)
    ctx->pc = 0x240460u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 2)));
label_240464:
    // 0x240464: 0x90c40003  lbu         $a0, 0x3($a2)
    ctx->pc = 0x240464u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_240468:
    // 0x240468: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x240468u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_24046c:
    // 0x24046c: 0x90d60000  lbu         $s6, 0x0($a2)
    ctx->pc = 0x24046cu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_240470:
    // 0x240470: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x240470u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_240474:
    // 0x240474: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_240478:
    if (ctx->pc == 0x240478u) {
        ctx->pc = 0x240478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240474u;
        // 0x240478: 0x90d70001  lbu         $s7, 0x1($a2) (Delay Slot)
        SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24047Cu;
        goto label_24047c;
    }
    ctx->pc = 0x240474u;
    {
        const bool branch_taken_0x240474 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240474u;
        // 0x240478: 0x90d70001  lbu         $s7, 0x1($a2) (Delay Slot)
        SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240474) {
            ctx->pc = 0x240490u;
            goto label_240490;
        }
    }
    ctx->pc = 0x24047Cu;
label_24047c:
    // 0x24047c: 0x2402002f  addiu       $v0, $zero, 0x2F
    ctx->pc = 0x24047cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 47));
label_240480:
    // 0x240480: 0x106200ee  beq         $v1, $v0, . + 4 + (0xEE << 2)
label_240484:
    if (ctx->pc == 0x240484u) {
        ctx->pc = 0x240484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240480u;
        // 0x240484: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240488u;
        goto label_240488;
    }
    ctx->pc = 0x240480u;
    {
        const bool branch_taken_0x240480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x240484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240480u;
        // 0x240484: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240480) {
            ctx->pc = 0x24083Cu;
            goto label_24083c;
        }
    }
    ctx->pc = 0x240488u;
label_240488:
    // 0x240488: 0x1000013c  b           . + 4 + (0x13C << 2)
label_24048c:
    if (ctx->pc == 0x24048Cu) {
        ctx->pc = 0x24048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240488u;
        // 0x24048c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240490u;
        goto label_240490;
    }
    ctx->pc = 0x240488u;
    {
        const bool branch_taken_0x240488 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24048Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240488u;
        // 0x24048c: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240488) {
            ctx->pc = 0x24097Cu;
            goto label_24097c;
        }
    }
    ctx->pc = 0x240490u;
label_240490:
    // 0x240490: 0x24020013  addiu       $v0, $zero, 0x13
    ctx->pc = 0x240490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_240494:
    // 0x240494: 0x24100014  addiu       $s0, $zero, 0x14
    ctx->pc = 0x240494u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_240498:
    // 0x240498: 0x54102b  sltu        $v0, $v0, $s4
    ctx->pc = 0x240498u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_24049c:
    // 0x24049c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x24049cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2404a0:
    // 0x2404a0: 0x282800a  movz        $s0, $s4, $v0
    ctx->pc = 0x2404a0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 20));
label_2404a4:
    // 0x2404a4: 0xb0182a  slt         $v1, $a1, $s0
    ctx->pc = 0x2404a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_2404a8:
    // 0x2404a8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_2404ac:
    if (ctx->pc == 0x2404ACu) {
        ctx->pc = 0x2404ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404A8u;
        // 0x2404ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404B0u;
        goto label_2404b0;
    }
    ctx->pc = 0x2404A8u;
    {
        const bool branch_taken_0x2404a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2404ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404A8u;
        // 0x2404ac: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404a8) {
            ctx->pc = 0x2404D8u;
            goto label_2404d8;
        }
    }
    ctx->pc = 0x2404B0u;
label_2404b0:
    // 0x2404b0: 0xc08acea  jal         func_22B3A8
label_2404b4:
    if (ctx->pc == 0x2404B4u) {
        ctx->pc = 0x2404B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404B0u;
        // 0x2404b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404B8u;
        goto label_2404b8;
    }
    ctx->pc = 0x2404B0u;
    SET_GPR_U32(ctx, 31, 0x2404B8u);
    ctx->pc = 0x2404B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404B0u;
    // 0x2404b4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3A8u, 0x2404B0u, 0x2404B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404B8u;
label_2404b8:
    // 0x2404b8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2404b8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2404bc:
    // 0x2404bc: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_2404c0:
    if (ctx->pc == 0x2404C0u) {
        ctx->pc = 0x2404C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404BCu;
        // 0x2404c0: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404C4u;
        goto label_2404c4;
    }
    ctx->pc = 0x2404BCu;
    {
        const bool branch_taken_0x2404bc = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2404bc) {
            ctx->pc = 0x2404C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2404BCu;
            // 0x2404c0: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2404D4u;
            goto label_2404d4;
        }
    }
    ctx->pc = 0x2404C4u;
label_2404c4:
    // 0x2404c4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2404c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2404c8:
    // 0x2404c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2404c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2404cc:
    // 0x2404cc: 0x1000011a  b           . + 4 + (0x11A << 2)
label_2404d0:
    if (ctx->pc == 0x2404D0u) {
        ctx->pc = 0x2404D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404CCu;
        // 0x2404d0: 0x24a560c0  addiu       $a1, $a1, 0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404D4u;
        goto label_2404d4;
    }
    ctx->pc = 0x2404CCu;
    {
        const bool branch_taken_0x2404cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2404D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404CCu;
        // 0x2404d0: 0x24a560c0  addiu       $a1, $a1, 0x60C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404cc) {
            ctx->pc = 0x240938u;
            goto label_240938;
        }
    }
    ctx->pc = 0x2404D4u;
label_2404d4:
    // 0x2404d4: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x2404d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2404d8:
    // 0x2404d8: 0x24c40004  addiu       $a0, $a2, 0x4
    ctx->pc = 0x2404d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_2404dc:
    // 0x2404dc: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x2404dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_2404e0:
    // 0x2404e0: 0x2686fffc  addiu       $a2, $s4, -0x4
    ctx->pc = 0x2404e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_2404e4:
    // 0x2404e4: 0x24070080  addiu       $a3, $zero, 0x80
    ctx->pc = 0x2404e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2404e8:
    // 0x2404e8: 0x266802dc  addiu       $t0, $s3, 0x2DC
    ctx->pc = 0x2404e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 732));
label_2404ec:
    // 0x2404ec: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x2404ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2404f0:
    // 0x2404f0: 0xc0919de  jal         func_246778
label_2404f4:
    if (ctx->pc == 0x2404F4u) {
        ctx->pc = 0x2404F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404F0u;
        // 0x2404f4: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2404F8u;
        goto label_2404f8;
    }
    ctx->pc = 0x2404F0u;
    SET_GPR_U32(ctx, 31, 0x2404F8u);
    ctx->pc = 0x2404F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2404F0u;
    // 0x2404f4: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246778u, 0x2404F0u, 0x2404F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2404F8u;
label_2404f8:
    // 0x2404f8: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2404f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2404fc:
    // 0x2404fc: 0x1ea0000e  bgtz        $s5, . + 4 + (0xE << 2)
label_240500:
    if (ctx->pc == 0x240500u) {
        ctx->pc = 0x240500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404FCu;
        // 0x240500: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240504u;
        goto label_240504;
    }
    ctx->pc = 0x2404FCu;
    {
        const bool branch_taken_0x2404fc = (GPR_S32(ctx, 21) > 0);
        ctx->pc = 0x240500u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2404FCu;
        // 0x240500: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2404fc) {
            ctx->pc = 0x240538u;
            goto label_240538;
        }
    }
    ctx->pc = 0x240504u;
label_240504:
    // 0x240504: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x240504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_240508:
    // 0x240508: 0x1000010b  b           . + 4 + (0x10B << 2)
label_24050c:
    if (ctx->pc == 0x24050Cu) {
        ctx->pc = 0x24050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240508u;
        // 0x24050c: 0x24a560f0  addiu       $a1, $a1, 0x60F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24816));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240510u;
        goto label_240510;
    }
    ctx->pc = 0x240508u;
    {
        const bool branch_taken_0x240508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24050Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240508u;
        // 0x24050c: 0x24a560f0  addiu       $a1, $a1, 0x60F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240508) {
            ctx->pc = 0x240938u;
            goto label_240938;
        }
    }
    ctx->pc = 0x240510u;
label_240510:
    // 0x240510: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x240510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_240514:
    // 0x240514: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x240514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_240518:
    // 0x240518: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x240518u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24051c:
    // 0x24051c: 0xa6220010  sh          $v0, 0x10($s1)
    ctx->pc = 0x24051cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 2));
label_240520:
    // 0x240520: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x240520u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
label_240524:
    // 0x240524: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x240524u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
label_240528:
    // 0x240528: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x240528u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_24052c:
    // 0x24052c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x24052cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_240530:
    // 0x240530: 0x1000000f  b           . + 4 + (0xF << 2)
label_240534:
    if (ctx->pc == 0x240534u) {
        ctx->pc = 0x240534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240530u;
        // 0x240534: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240538u;
        goto label_240538;
    }
    ctx->pc = 0x240530u;
    {
        const bool branch_taken_0x240530 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240530u;
        // 0x240534: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240530) {
            ctx->pc = 0x240570u;
            goto label_240570;
        }
    }
    ctx->pc = 0x240538u;
label_240538:
    // 0x240538: 0xc08c682  jal         func_231A08
label_24053c:
    if (ctx->pc == 0x24053Cu) {
        ctx->pc = 0x240540u;
        goto label_240540;
    }
    ctx->pc = 0x240538u;
    SET_GPR_U32(ctx, 31, 0x240540u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x240538u, 0x240540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240540u;
label_240540:
    // 0x240540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x240540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240544:
    // 0x240544: 0xc098552  jal         func_261548
label_240548:
    if (ctx->pc == 0x240548u) {
        ctx->pc = 0x240548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240544u;
        // 0x240548: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24054Cu;
        goto label_24054c;
    }
    ctx->pc = 0x240544u;
    SET_GPR_U32(ctx, 31, 0x24054Cu);
    ctx->pc = 0x240548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240544u;
    // 0x240548: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x240544u, 0x24054Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24054Cu;
label_24054c:
    // 0x24054c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24054cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240550:
    // 0x240550: 0xc08c698  jal         func_231A60
label_240554:
    if (ctx->pc == 0x240554u) {
        ctx->pc = 0x240554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240550u;
        // 0x240554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240558u;
        goto label_240558;
    }
    ctx->pc = 0x240550u;
    SET_GPR_U32(ctx, 31, 0x240558u);
    ctx->pc = 0x240554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240550u;
    // 0x240554: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x240550u, 0x240558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240558u;
label_240558:
    // 0x240558: 0x1620ffed  bnez        $s1, . + 4 + (-0x13 << 2)
label_24055c:
    if (ctx->pc == 0x24055Cu) {
        ctx->pc = 0x24055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240558u;
        // 0x24055c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240560u;
        goto label_240560;
    }
    ctx->pc = 0x240558u;
    {
        const bool branch_taken_0x240558 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24055Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240558u;
        // 0x24055c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240558) {
            ctx->pc = 0x240510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_240510;
        }
    }
    ctx->pc = 0x240560u;
label_240560:
    // 0x240560: 0xc08a8cc  jal         func_22A330
label_240564:
    if (ctx->pc == 0x240564u) {
        ctx->pc = 0x240564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240560u;
        // 0x240564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240568u;
        goto label_240568;
    }
    ctx->pc = 0x240560u;
    SET_GPR_U32(ctx, 31, 0x240568u);
    ctx->pc = 0x240564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240560u;
    // 0x240564: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x240560u, 0x240568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240568u;
label_240568:
    // 0x240568: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x240568u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24056c:
    // 0x24056c: 0x0  nop
    ctx->pc = 0x24056cu;
    // NOP
label_240570:
    // 0x240570: 0x522000fc  beql        $s1, $zero, . + 4 + (0xFC << 2)
label_240574:
    if (ctx->pc == 0x240574u) {
        ctx->pc = 0x240574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240570u;
        // 0x240574: 0xde620060  ld          $v0, 0x60($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240578u;
        goto label_240578;
    }
    ctx->pc = 0x240570u;
    {
        const bool branch_taken_0x240570 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x240570) {
            ctx->pc = 0x240574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240570u;
            // 0x240574: 0xde620060  ld          $v0, 0x60($s3) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240964u;
            goto label_240964;
        }
    }
    ctx->pc = 0x240578u;
label_240578:
    // 0x240578: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x240578u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
label_24057c:
    // 0x24057c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x24057cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_240580:
    // 0x240580: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x240580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_240584:
    // 0x240584: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x240584u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_240588:
    // 0x240588: 0x2c4200e1  sltiu       $v0, $v0, 0xE1
    ctx->pc = 0x240588u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
label_24058c:
    // 0x24058c: 0x54400038  bnel        $v0, $zero, . + 4 + (0x38 << 2)
label_240590:
    if (ctx->pc == 0x240590u) {
        ctx->pc = 0x240590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24058Cu;
        // 0x240590: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240594u;
        goto label_240594;
    }
    ctx->pc = 0x24058Cu;
    {
        const bool branch_taken_0x24058c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24058c) {
            ctx->pc = 0x240590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24058Cu;
            // 0x240590: 0x8e250008  lw          $a1, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240670u;
            goto label_240670;
        }
    }
    ctx->pc = 0x240594u;
label_240594:
    // 0x240594: 0xc08c682  jal         func_231A08
label_240598:
    if (ctx->pc == 0x240598u) {
        ctx->pc = 0x24059Cu;
        goto label_24059c;
    }
    ctx->pc = 0x240594u;
    SET_GPR_U32(ctx, 31, 0x24059Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x240594u, 0x24059Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24059Cu;
label_24059c:
    // 0x24059c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24059cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2405a0:
    // 0x2405a0: 0xc098552  jal         func_261548
label_2405a4:
    if (ctx->pc == 0x2405A4u) {
        ctx->pc = 0x2405A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405A0u;
        // 0x2405a4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405A8u;
        goto label_2405a8;
    }
    ctx->pc = 0x2405A0u;
    SET_GPR_U32(ctx, 31, 0x2405A8u);
    ctx->pc = 0x2405A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405A0u;
    // 0x2405a4: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2405A0u, 0x2405A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405A8u;
label_2405a8:
    // 0x2405a8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2405ac:
    if (ctx->pc == 0x2405ACu) {
        ctx->pc = 0x2405ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405A8u;
        // 0x2405ac: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405B0u;
        goto label_2405b0;
    }
    ctx->pc = 0x2405A8u;
    {
        const bool branch_taken_0x2405a8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2405ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405A8u;
        // 0x2405ac: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405a8) {
            ctx->pc = 0x2405C8u;
            goto label_2405c8;
        }
    }
    ctx->pc = 0x2405B0u;
label_2405b0:
    // 0x2405b0: 0xc08a8ec  jal         func_22A3B0
label_2405b4:
    if (ctx->pc == 0x2405B4u) {
        ctx->pc = 0x2405B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405B0u;
        // 0x2405b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405B8u;
        goto label_2405b8;
    }
    ctx->pc = 0x2405B0u;
    SET_GPR_U32(ctx, 31, 0x2405B8u);
    ctx->pc = 0x2405B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405B0u;
    // 0x2405b4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3B0u, 0x2405B0u, 0x2405B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405B8u;
label_2405b8:
    // 0x2405b8: 0xc098552  jal         func_261548
label_2405bc:
    if (ctx->pc == 0x2405BCu) {
        ctx->pc = 0x2405BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405B8u;
        // 0x2405bc: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405C0u;
        goto label_2405c0;
    }
    ctx->pc = 0x2405B8u;
    SET_GPR_U32(ctx, 31, 0x2405C0u);
    ctx->pc = 0x2405BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405B8u;
    // 0x2405bc: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2405B8u, 0x2405C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405C0u;
label_2405c0:
    // 0x2405c0: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x2405c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_2405c4:
    // 0x2405c4: 0x0  nop
    ctx->pc = 0x2405c4u;
    // NOP
label_2405c8:
    // 0x2405c8: 0xc08c698  jal         func_231A60
label_2405cc:
    if (ctx->pc == 0x2405CCu) {
        ctx->pc = 0x2405CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405C8u;
        // 0x2405cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405D0u;
        goto label_2405d0;
    }
    ctx->pc = 0x2405C8u;
    SET_GPR_U32(ctx, 31, 0x2405D0u);
    ctx->pc = 0x2405CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2405C8u;
    // 0x2405cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2405C8u, 0x2405D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2405D0u;
label_2405d0:
    // 0x2405d0: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x2405d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2405d4:
    // 0x2405d4: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_2405d8:
    if (ctx->pc == 0x2405D8u) {
        ctx->pc = 0x2405D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405D4u;
        // 0x2405d8: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2405DCu;
        goto label_2405dc;
    }
    ctx->pc = 0x2405D4u;
    {
        const bool branch_taken_0x2405d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2405D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2405D4u;
        // 0x2405d8: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2405d4) {
            ctx->pc = 0x240600u;
            goto label_240600;
        }
    }
    ctx->pc = 0x2405DCu;
label_2405dc:
    // 0x2405dc: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x2405dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2405e0:
    // 0x2405e0: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x2405e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
label_2405e4:
    // 0x2405e4: 0x34630009  ori         $v1, $v1, 0x9
    ctx->pc = 0x2405e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
label_2405e8:
    // 0x2405e8: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x2405e8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
label_2405ec:
    // 0x2405ec: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x2405ecu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
label_2405f0:
    // 0x2405f0: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x2405f0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
label_2405f4:
    // 0x2405f4: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x2405f4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
label_2405f8:
    // 0x2405f8: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x2405f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
label_2405fc:
    // 0x2405fc: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x2405fcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_240600:
    // 0x240600: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x240600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_240604:
    // 0x240604: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x240604u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_240608:
    // 0x240608: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x240608u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24060c:
    // 0x24060c: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_240610:
    if (ctx->pc == 0x240610u) {
        ctx->pc = 0x240610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24060Cu;
        // 0x240610: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240614u;
        goto label_240614;
    }
    ctx->pc = 0x24060Cu;
    {
        const bool branch_taken_0x24060c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24060Cu;
        // 0x240610: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24060c) {
            ctx->pc = 0x240640u;
            goto label_240640;
        }
    }
    ctx->pc = 0x240614u;
label_240614:
    // 0x240614: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x240614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_240618:
    // 0x240618: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x240618u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_24061c:
    // 0x24061c: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x24061cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_240620:
    // 0x240620: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x240620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_240624:
    // 0x240624: 0xa31821  addu        $v1, $a1, $v1
    ctx->pc = 0x240624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
label_240628:
    // 0x240628: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x240628u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_24062c:
    // 0x24062c: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x24062cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_240630:
    // 0x240630: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_240634:
    if (ctx->pc == 0x240634u) {
        ctx->pc = 0x240634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240630u;
        // 0x240634: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240638u;
        goto label_240638;
    }
    ctx->pc = 0x240630u;
    {
        const bool branch_taken_0x240630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x240634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240630u;
        // 0x240634: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240630) {
            ctx->pc = 0x240660u;
            goto label_240660;
        }
    }
    ctx->pc = 0x240638u;
label_240638:
    // 0x240638: 0x1000000f  b           . + 4 + (0xF << 2)
label_24063c:
    if (ctx->pc == 0x24063Cu) {
        ctx->pc = 0x24063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240638u;
        // 0x24063c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240640u;
        goto label_240640;
    }
    ctx->pc = 0x240638u;
    {
        const bool branch_taken_0x240638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240638u;
        // 0x24063c: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240638) {
            ctx->pc = 0x240678u;
            goto label_240678;
        }
    }
    ctx->pc = 0x240640u;
label_240640:
    // 0x240640: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x240640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_240644:
    // 0x240644: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x240644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_240648:
    // 0x240648: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x240648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_24064c:
    // 0x24064c: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x24064cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
label_240650:
    // 0x240650: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x240650u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_240654:
    // 0x240654: 0x46102a  slt         $v0, $v0, $a2
    ctx->pc = 0x240654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_240658:
    // 0x240658: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24065c:
    if (ctx->pc == 0x24065Cu) {
        ctx->pc = 0x24065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240658u;
        // 0x24065c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240660u;
        goto label_240660;
    }
    ctx->pc = 0x240658u;
    {
        const bool branch_taken_0x240658 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24065Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240658u;
        // 0x24065c: 0xa0182d  daddu       $v1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240658) {
            ctx->pc = 0x240674u;
            goto label_240674;
        }
    }
    ctx->pc = 0x240660u;
label_240660:
    // 0x240660: 0xc08a9d6  jal         func_22A758
label_240664:
    if (ctx->pc == 0x240664u) {
        ctx->pc = 0x240664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240660u;
        // 0x240664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240668u;
        goto label_240668;
    }
    ctx->pc = 0x240660u;
    SET_GPR_U32(ctx, 31, 0x240668u);
    ctx->pc = 0x240664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240660u;
    // 0x240664: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x240660u, 0x240668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240668u;
label_240668:
    // 0x240668: 0x100000be  b           . + 4 + (0xBE << 2)
label_24066c:
    if (ctx->pc == 0x24066Cu) {
        ctx->pc = 0x24066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240668u;
        // 0x24066c: 0xde620060  ld          $v0, 0x60($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240670u;
        goto label_240670;
    }
    ctx->pc = 0x240668u;
    {
        const bool branch_taken_0x240668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240668u;
        // 0x24066c: 0xde620060  ld          $v0, 0x60($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240668) {
            ctx->pc = 0x240964u;
            goto label_240964;
        }
    }
    ctx->pc = 0x240670u;
label_240670:
    // 0x240670: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x240670u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_240674:
    // 0x240674: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x240674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_240678:
    // 0x240678: 0xa0760000  sb          $s6, 0x0($v1)
    ctx->pc = 0x240678u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 22));
label_24067c:
    // 0x24067c: 0x24650004  addiu       $a1, $v1, 0x4
    ctx->pc = 0x24067cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_240680:
    // 0x240680: 0xa0770001  sb          $s7, 0x1($v1)
    ctx->pc = 0x240680u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 23));
label_240684:
    // 0x240684: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x240684u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_240688:
    // 0x240688: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x240688u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_24068c:
    // 0x24068c: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x24068cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_240690:
    // 0x240690: 0xc08b4f8  jal         func_22D3E0
label_240694:
    if (ctx->pc == 0x240694u) {
        ctx->pc = 0x240694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240690u;
        // 0x240694: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240698u;
        goto label_240698;
    }
    ctx->pc = 0x240690u;
    SET_GPR_U32(ctx, 31, 0x240698u);
    ctx->pc = 0x240694u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240690u;
    // 0x240694: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x240690u, 0x240698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240698u;
label_240698:
    // 0x240698: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x240698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_24069c:
    // 0x24069c: 0x26a40004  addiu       $a0, $s5, 0x4
    ctx->pc = 0x24069cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4));
label_2406a0:
    // 0x2406a0: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2406a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2406a4:
    // 0x2406a4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2406a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_2406a8:
    // 0x2406a8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2406a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2406ac:
    // 0x2406ac: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2406acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2406b0:
    // 0x2406b0: 0x2463fffc  addiu       $v1, $v1, -0x4
    ctx->pc = 0x2406b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967292));
label_2406b4:
    // 0x2406b4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2406b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2406b8:
    // 0x2406b8: 0x753823  subu        $a3, $v1, $s5
    ctx->pc = 0x2406b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
label_2406bc:
    // 0x2406bc: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x2406bcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_2406c0:
    // 0x2406c0: 0xae47000c  sw          $a3, 0xC($s2)
    ctx->pc = 0x2406c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 7));
label_2406c4:
    // 0x2406c4: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2406c4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2406c8:
    // 0x2406c8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2406c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2406cc:
    // 0x2406cc: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2406d0:
    if (ctx->pc == 0x2406D0u) {
        ctx->pc = 0x2406D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406CCu;
        // 0x2406d0: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406D4u;
        goto label_2406d4;
    }
    ctx->pc = 0x2406CCu;
    {
        const bool branch_taken_0x2406cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406CCu;
        // 0x2406d0: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406cc) {
            ctx->pc = 0x240704u;
            goto label_240704;
        }
    }
    ctx->pc = 0x2406D4u;
label_2406d4:
    // 0x2406d4: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x2406d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_2406d8:
    // 0x2406d8: 0x8e24002c  lw          $a0, 0x2C($s1)
    ctx->pc = 0x2406d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_2406dc:
    // 0x2406dc: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x2406dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2406e0:
    // 0x2406e0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2406e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2406e4:
    // 0x2406e4: 0xa61821  addu        $v1, $a1, $a2
    ctx->pc = 0x2406e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_2406e8:
    // 0x2406e8: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x2406e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2406ec:
    // 0x2406ec: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x2406ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2406f0:
    // 0x2406f0: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x2406f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_2406f4:
    // 0x2406f4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2406f8:
    if (ctx->pc == 0x2406F8u) {
        ctx->pc = 0x2406F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406F4u;
        // 0x2406f8: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2406FCu;
        goto label_2406fc;
    }
    ctx->pc = 0x2406F4u;
    {
        const bool branch_taken_0x2406f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2406F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406F4u;
        // 0x2406f8: 0xa62821  addu        $a1, $a1, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406f4) {
            ctx->pc = 0x240728u;
            goto label_240728;
        }
    }
    ctx->pc = 0x2406FCu;
label_2406fc:
    // 0x2406fc: 0x10000048  b           . + 4 + (0x48 << 2)
label_240700:
    if (ctx->pc == 0x240700u) {
        ctx->pc = 0x240700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406FCu;
        // 0x240700: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240704u;
        goto label_240704;
    }
    ctx->pc = 0x2406FCu;
    {
        const bool branch_taken_0x2406fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2406FCu;
        // 0x240700: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2406fc) {
            ctx->pc = 0x240820u;
            goto label_240820;
        }
    }
    ctx->pc = 0x240704u;
label_240704:
    // 0x240704: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x240704u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_240708:
    // 0x240708: 0xa61021  addu        $v0, $a1, $a2
    ctx->pc = 0x240708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_24070c:
    // 0x24070c: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x24070cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
label_240710:
    // 0x240710: 0x2221023  subu        $v0, $s1, $v0
    ctx->pc = 0x240710u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_240714:
    // 0x240714: 0x461023  subu        $v0, $v0, $a2
    ctx->pc = 0x240714u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_240718:
    // 0x240718: 0x47102a  slt         $v0, $v0, $a3
    ctx->pc = 0x240718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
label_24071c:
    // 0x24071c: 0x54400040  bnel        $v0, $zero, . + 4 + (0x40 << 2)
label_240720:
    if (ctx->pc == 0x240720u) {
        ctx->pc = 0x240720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24071Cu;
        // 0x240720: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240724u;
        goto label_240724;
    }
    ctx->pc = 0x24071Cu;
    {
        const bool branch_taken_0x24071c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24071c) {
            ctx->pc = 0x240720u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24071Cu;
            // 0x240720: 0xae320000  sw          $s2, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240820u;
            goto label_240820;
        }
    }
    ctx->pc = 0x240724u;
label_240724:
    // 0x240724: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x240724u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_240728:
    // 0x240728: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x240728u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_24072c:
    // 0x24072c: 0xc08b4f8  jal         func_22D3E0
label_240730:
    if (ctx->pc == 0x240730u) {
        ctx->pc = 0x240730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24072Cu;
        // 0x240730: 0x8e46000c  lw          $a2, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240734u;
        goto label_240734;
    }
    ctx->pc = 0x24072Cu;
    SET_GPR_U32(ctx, 31, 0x240734u);
    ctx->pc = 0x240730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24072Cu;
    // 0x240730: 0x8e46000c  lw          $a2, 0xC($s2) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x24072Cu, 0x240734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240734u;
label_240734:
    // 0x240734: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x240734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_240738:
    // 0x240738: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x240738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_24073c:
    // 0x24073c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x24073cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_240740:
    // 0x240740: 0xc08c682  jal         func_231A08
label_240744:
    if (ctx->pc == 0x240744u) {
        ctx->pc = 0x240744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240740u;
        // 0x240744: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240748u;
        goto label_240748;
    }
    ctx->pc = 0x240740u;
    SET_GPR_U32(ctx, 31, 0x240748u);
    ctx->pc = 0x240744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240740u;
    // 0x240744: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x240740u, 0x240748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240748u;
label_240748:
    // 0x240748: 0x96450012  lhu         $a1, 0x12($s2)
    ctx->pc = 0x240748u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_24074c:
    // 0x24074c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24074cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240750:
    // 0x240750: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x240750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_240754:
    // 0x240754: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_240758:
    if (ctx->pc == 0x240758u) {
        ctx->pc = 0x240758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240754u;
        // 0x240758: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24075Cu;
        goto label_24075c;
    }
    ctx->pc = 0x240754u;
    {
        const bool branch_taken_0x240754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240754u;
        // 0x240758: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x240754) {
            ctx->pc = 0x240780u;
            goto label_240780;
        }
    }
    ctx->pc = 0x24075Cu;
label_24075c:
    // 0x24075c: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x24075cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_240760:
    // 0x240760: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_240764:
    if (ctx->pc == 0x240764u) {
        ctx->pc = 0x240768u;
        goto label_240768;
    }
    ctx->pc = 0x240760u;
    {
        const bool branch_taken_0x240760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x240760) {
            ctx->pc = 0x240780u;
            goto label_240780;
        }
    }
    ctx->pc = 0x240768u;
label_240768:
    // 0x240768: 0xc08a9d6  jal         func_22A758
label_24076c:
    if (ctx->pc == 0x24076Cu) {
        ctx->pc = 0x240770u;
        goto label_240770;
    }
    ctx->pc = 0x240768u;
    SET_GPR_U32(ctx, 31, 0x240770u);
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x240768u, 0x240770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240770u;
label_240770:
    // 0x240770: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x240770u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
label_240774:
    // 0x240774: 0x96450012  lhu         $a1, 0x12($s2)
    ctx->pc = 0x240774u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_240778:
    // 0x240778: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x240778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_24077c:
    // 0x24077c: 0x0  nop
    ctx->pc = 0x24077cu;
    // NOP
label_240780:
    // 0x240780: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_240784:
    if (ctx->pc == 0x240784u) {
        ctx->pc = 0x240784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240780u;
        // 0x240784: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240788u;
        goto label_240788;
    }
    ctx->pc = 0x240780u;
    {
        const bool branch_taken_0x240780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x240780) {
            ctx->pc = 0x240784u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240780u;
            // 0x240784: 0x8e420000  lw          $v0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240804u;
            goto label_240804;
        }
    }
    ctx->pc = 0x240788u;
label_240788:
    // 0x240788: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x240788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_24078c:
    // 0x24078c: 0x50720008  beql        $v1, $s2, . + 4 + (0x8 << 2)
label_240790:
    if (ctx->pc == 0x240790u) {
        ctx->pc = 0x240790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24078Cu;
        // 0x240790: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240794u;
        goto label_240794;
    }
    ctx->pc = 0x24078Cu;
    {
        const bool branch_taken_0x24078c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 18));
        if (branch_taken_0x24078c) {
            ctx->pc = 0x240790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24078Cu;
            // 0x240790: 0x30a20008  andi        $v0, $a1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x2407B0u;
            goto label_2407b0;
        }
    }
    ctx->pc = 0x240794u;
label_240794:
    // 0x240794: 0x8e420038  lw          $v0, 0x38($s2)
    ctx->pc = 0x240794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_240798:
    // 0x240798: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x240798u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_24079c:
    // 0x24079c: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x24079cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
label_2407a0:
    // 0x2407a0: 0x8e420034  lw          $v0, 0x34($s2)
    ctx->pc = 0x2407a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
label_2407a4:
    // 0x2407a4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2407a8:
    if (ctx->pc == 0x2407A8u) {
        ctx->pc = 0x2407A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407A4u;
        // 0x2407a8: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407ACu;
        goto label_2407ac;
    }
    ctx->pc = 0x2407A4u;
    {
        const bool branch_taken_0x2407a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2407A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407A4u;
        // 0x2407a8: 0xac620034  sw          $v0, 0x34($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407a4) {
            ctx->pc = 0x2407F0u;
            goto label_2407f0;
        }
    }
    ctx->pc = 0x2407ACu;
label_2407ac:
    // 0x2407ac: 0x0  nop
    ctx->pc = 0x2407acu;
    // NOP
label_2407b0:
    // 0x2407b0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2407b4:
    if (ctx->pc == 0x2407B4u) {
        ctx->pc = 0x2407B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407B0u;
        // 0x2407b4: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407B8u;
        goto label_2407b8;
    }
    ctx->pc = 0x2407B0u;
    {
        const bool branch_taken_0x2407b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2407b0) {
            ctx->pc = 0x2407B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2407B0u;
            // 0x2407b4: 0x8e420024  lw          $v0, 0x24($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 36)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2407C8u;
            goto label_2407c8;
        }
    }
    ctx->pc = 0x2407B8u;
label_2407b8:
    // 0x2407b8: 0xc098560  jal         func_261580
label_2407bc:
    if (ctx->pc == 0x2407BCu) {
        ctx->pc = 0x2407BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407B8u;
        // 0x2407bc: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407C0u;
        goto label_2407c0;
    }
    ctx->pc = 0x2407B8u;
    SET_GPR_U32(ctx, 31, 0x2407C0u);
    ctx->pc = 0x2407BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407B8u;
    // 0x2407bc: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2407B8u, 0x2407C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407C0u;
label_2407c0:
    // 0x2407c0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2407c4:
    if (ctx->pc == 0x2407C4u) {
        ctx->pc = 0x2407C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407C0u;
        // 0x2407c4: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407C8u;
        goto label_2407c8;
    }
    ctx->pc = 0x2407C0u;
    {
        const bool branch_taken_0x2407c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2407C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407C0u;
        // 0x2407c4: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407c0) {
            ctx->pc = 0x2407F4u;
            goto label_2407f4;
        }
    }
    ctx->pc = 0x2407C8u;
label_2407c8:
    // 0x2407c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2407cc:
    if (ctx->pc == 0x2407CCu) {
        ctx->pc = 0x2407D0u;
        goto label_2407d0;
    }
    ctx->pc = 0x2407C8u;
    {
        const bool branch_taken_0x2407c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2407c8) {
            ctx->pc = 0x2407E8u;
            goto label_2407e8;
        }
    }
    ctx->pc = 0x2407D0u;
label_2407d0:
    // 0x2407d0: 0x8e440020  lw          $a0, 0x20($s2)
    ctx->pc = 0x2407d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
label_2407d4:
    // 0x2407d4: 0x8e45002c  lw          $a1, 0x2C($s2)
    ctx->pc = 0x2407d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2407d8:
    // 0x2407d8: 0x40f809  jalr        $v0
label_2407dc:
    if (ctx->pc == 0x2407DCu) {
        ctx->pc = 0x2407DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407D8u;
        // 0x2407dc: 0x8e460028  lw          $a2, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407E0u;
        goto label_2407e0;
    }
    ctx->pc = 0x2407D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2407E0u);
        ctx->pc = 0x2407DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407D8u;
        // 0x2407dc: 0x8e460028  lw          $a2, 0x28($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2407D8u, 0x2407E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2407E0u;
label_2407e0:
    // 0x2407e0: 0x10000004  b           . + 4 + (0x4 << 2)
label_2407e4:
    if (ctx->pc == 0x2407E4u) {
        ctx->pc = 0x2407E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407E0u;
        // 0x2407e4: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407E8u;
        goto label_2407e8;
    }
    ctx->pc = 0x2407E0u;
    {
        const bool branch_taken_0x2407e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2407E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407E0u;
        // 0x2407e4: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2407e0) {
            ctx->pc = 0x2407F4u;
            goto label_2407f4;
        }
    }
    ctx->pc = 0x2407E8u;
label_2407e8:
    // 0x2407e8: 0xc098560  jal         func_261580
label_2407ec:
    if (ctx->pc == 0x2407ECu) {
        ctx->pc = 0x2407ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2407E8u;
        // 0x2407ec: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2407F0u;
        goto label_2407f0;
    }
    ctx->pc = 0x2407E8u;
    SET_GPR_U32(ctx, 31, 0x2407F0u);
    ctx->pc = 0x2407ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2407E8u;
    // 0x2407ec: 0x8e440020  lw          $a0, 0x20($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2407E8u, 0x2407F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2407F0u;
label_2407f0:
    // 0x2407f0: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x2407f0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_2407f4:
    // 0x2407f4: 0xae40002c  sw          $zero, 0x2C($s2)
    ctx->pc = 0x2407f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 0));
label_2407f8:
    // 0x2407f8: 0x3042fff6  andi        $v0, $v0, 0xFFF6
    ctx->pc = 0x2407f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65526);
label_2407fc:
    // 0x2407fc: 0xa6420012  sh          $v0, 0x12($s2)
    ctx->pc = 0x2407fcu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
label_240800:
    // 0x240800: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x240800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_240804:
    // 0x240804: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240804u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240808:
    // 0x240808: 0xc098560  jal         func_261580
label_24080c:
    if (ctx->pc == 0x24080Cu) {
        ctx->pc = 0x24080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240808u;
        // 0x24080c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240810u;
        goto label_240810;
    }
    ctx->pc = 0x240808u;
    SET_GPR_U32(ctx, 31, 0x240810u);
    ctx->pc = 0x24080Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240808u;
    // 0x24080c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x240808u, 0x240810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240810u;
label_240810:
    // 0x240810: 0xc08c698  jal         func_231A60
label_240814:
    if (ctx->pc == 0x240814u) {
        ctx->pc = 0x240814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240810u;
        // 0x240814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240818u;
        goto label_240818;
    }
    ctx->pc = 0x240810u;
    SET_GPR_U32(ctx, 31, 0x240818u);
    ctx->pc = 0x240814u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240810u;
    // 0x240814: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x240810u, 0x240818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240818u;
label_240818:
    // 0x240818: 0x10000002  b           . + 4 + (0x2 << 2)
label_24081c:
    if (ctx->pc == 0x24081Cu) {
        ctx->pc = 0x24081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240818u;
        // 0x24081c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240820u;
        goto label_240820;
    }
    ctx->pc = 0x240818u;
    {
        const bool branch_taken_0x240818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240818u;
        // 0x24081c: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240818) {
            ctx->pc = 0x240824u;
            goto label_240824;
        }
    }
    ctx->pc = 0x240820u;
label_240820:
    // 0x240820: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x240820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_240824:
    // 0x240824: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x240824u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_240828:
    // 0x240828: 0xae530014  sw          $s3, 0x14($s2)
    ctx->pc = 0x240828u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 19));
label_24082c:
    // 0x24082c: 0x551023  subu        $v0, $v0, $s5
    ctx->pc = 0x24082cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
label_240830:
    // 0x240830: 0x282a021  addu        $s4, $s4, $v0
    ctx->pc = 0x240830u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_240834:
    // 0x240834: 0x10000049  b           . + 4 + (0x49 << 2)
label_240838:
    if (ctx->pc == 0x240838u) {
        ctx->pc = 0x240838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240834u;
        // 0x240838: 0xae540018  sw          $s4, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24083Cu;
        goto label_24083c;
    }
    ctx->pc = 0x240834u;
    {
        const bool branch_taken_0x240834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240838u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240834u;
        // 0x240838: 0xae540018  sw          $s4, 0x18($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240834) {
            ctx->pc = 0x24095Cu;
            goto label_24095c;
        }
    }
    ctx->pc = 0x24083Cu;
label_24083c:
    // 0x24083c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x24083cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_240840:
    // 0x240840: 0x2ca20018  sltiu       $v0, $a1, 0x18
    ctx->pc = 0x240840u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
label_240844:
    // 0x240844: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_240848:
    if (ctx->pc == 0x240848u) {
        ctx->pc = 0x240848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240844u;
        // 0x240848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24084Cu;
        goto label_24084c;
    }
    ctx->pc = 0x240844u;
    {
        const bool branch_taken_0x240844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x240848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240844u;
        // 0x240848: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240844) {
            ctx->pc = 0x240874u;
            goto label_240874;
        }
    }
    ctx->pc = 0x24084Cu;
label_24084c:
    // 0x24084c: 0xc08acea  jal         func_22B3A8
label_240850:
    if (ctx->pc == 0x240850u) {
        ctx->pc = 0x240850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24084Cu;
        // 0x240850: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240854u;
        goto label_240854;
    }
    ctx->pc = 0x24084Cu;
    SET_GPR_U32(ctx, 31, 0x240854u);
    ctx->pc = 0x240850u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24084Cu;
    // 0x240850: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3A8u, 0x24084Cu, 0x240854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240854u;
label_240854:
    // 0x240854: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x240854u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_240858:
    // 0x240858: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_24085c:
    if (ctx->pc == 0x24085Cu) {
        ctx->pc = 0x24085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240858u;
        // 0x24085c: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240860u;
        goto label_240860;
    }
    ctx->pc = 0x240858u;
    {
        const bool branch_taken_0x240858 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x240858) {
            ctx->pc = 0x24085Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240858u;
            // 0x24085c: 0x8e460008  lw          $a2, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240870u;
            goto label_240870;
        }
    }
    ctx->pc = 0x240860u;
label_240860:
    // 0x240860: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x240860u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_240864:
    // 0x240864: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x240864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_240868:
    // 0x240868: 0x10000033  b           . + 4 + (0x33 << 2)
label_24086c:
    if (ctx->pc == 0x24086Cu) {
        ctx->pc = 0x24086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240868u;
        // 0x24086c: 0x24a56120  addiu       $a1, $a1, 0x6120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240870u;
        goto label_240870;
    }
    ctx->pc = 0x240868u;
    {
        const bool branch_taken_0x240868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24086Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240868u;
        // 0x24086c: 0x24a56120  addiu       $a1, $a1, 0x6120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240868) {
            ctx->pc = 0x240938u;
            goto label_240938;
        }
    }
    ctx->pc = 0x240870u;
label_240870:
    // 0x240870: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x240870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_240874:
    // 0x240874: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x240874u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_240878:
    // 0x240878: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x240878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_24087c:
    // 0x24087c: 0x28080  sll         $s0, $v0, 2
    ctx->pc = 0x24087cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_240880:
    // 0x240880: 0x26030018  addiu       $v1, $s0, 0x18
    ctx->pc = 0x240880u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_240884:
    // 0x240884: 0xa3102b  sltu        $v0, $a1, $v1
    ctx->pc = 0x240884u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_240888:
    // 0x240888: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_24088c:
    if (ctx->pc == 0x24088Cu) {
        ctx->pc = 0x24088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240888u;
        // 0x24088c: 0x24d10004  addiu       $s1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240890u;
        goto label_240890;
    }
    ctx->pc = 0x240888u;
    {
        const bool branch_taken_0x240888 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240888u;
        // 0x24088c: 0x24d10004  addiu       $s1, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240888) {
            ctx->pc = 0x2408B8u;
            goto label_2408b8;
        }
    }
    ctx->pc = 0x240890u;
label_240890:
    // 0x240890: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240890u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240894:
    // 0x240894: 0xc08acea  jal         func_22B3A8
label_240898:
    if (ctx->pc == 0x240898u) {
        ctx->pc = 0x240898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240894u;
        // 0x240898: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24089Cu;
        goto label_24089c;
    }
    ctx->pc = 0x240894u;
    SET_GPR_U32(ctx, 31, 0x24089Cu);
    ctx->pc = 0x240898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240894u;
    // 0x240898: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3A8u, 0x240894u, 0x24089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24089Cu;
label_24089c:
    // 0x24089c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x24089cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2408a0:
    // 0x2408a0: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_2408a4:
    if (ctx->pc == 0x2408A4u) {
        ctx->pc = 0x2408A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408A0u;
        // 0x2408a4: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2408A8u;
        goto label_2408a8;
    }
    ctx->pc = 0x2408A0u;
    {
        const bool branch_taken_0x2408a0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2408a0) {
            ctx->pc = 0x2408A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2408A0u;
            // 0x2408a4: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2408B8u;
            goto label_2408b8;
        }
    }
    ctx->pc = 0x2408A8u;
label_2408a8:
    // 0x2408a8: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2408a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2408ac:
    // 0x2408ac: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2408acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2408b0:
    // 0x2408b0: 0x10000021  b           . + 4 + (0x21 << 2)
label_2408b4:
    if (ctx->pc == 0x2408B4u) {
        ctx->pc = 0x2408B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408B0u;
        // 0x2408b4: 0x24a56120  addiu       $a1, $a1, 0x6120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2408B8u;
        goto label_2408b8;
    }
    ctx->pc = 0x2408B0u;
    {
        const bool branch_taken_0x2408b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408B0u;
        // 0x2408b4: 0x24a56120  addiu       $a1, $a1, 0x6120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408b0) {
            ctx->pc = 0x240938u;
            goto label_240938;
        }
    }
    ctx->pc = 0x2408B8u;
label_2408b8:
    // 0x2408b8: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x2408b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2408bc:
    // 0x2408bc: 0x9043000c  lbu         $v1, 0xC($v0)
    ctx->pc = 0x2408bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 12)));
label_2408c0:
    // 0x2408c0: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x2408c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
label_2408c4:
    // 0x2408c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2408c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2408c8:
    // 0x2408c8: 0x2038021  addu        $s0, $s0, $v1
    ctx->pc = 0x2408c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 3)));
label_2408cc:
    // 0x2408cc: 0x26030004  addiu       $v1, $s0, 0x4
    ctx->pc = 0x2408ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2408d0:
    // 0x2408d0: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x2408d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2408d4:
    // 0x2408d4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2408d8:
    if (ctx->pc == 0x2408D8u) {
        ctx->pc = 0x2408D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408D4u;
        // 0x2408d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2408DCu;
        goto label_2408dc;
    }
    ctx->pc = 0x2408D4u;
    {
        const bool branch_taken_0x2408d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408D4u;
        // 0x2408d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408d4) {
            ctx->pc = 0x240900u;
            goto label_240900;
        }
    }
    ctx->pc = 0x2408DCu;
label_2408dc:
    // 0x2408dc: 0xc08acea  jal         func_22B3A8
label_2408e0:
    if (ctx->pc == 0x2408E0u) {
        ctx->pc = 0x2408E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408DCu;
        // 0x2408e0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2408E4u;
        goto label_2408e4;
    }
    ctx->pc = 0x2408DCu;
    SET_GPR_U32(ctx, 31, 0x2408E4u);
    ctx->pc = 0x2408E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2408DCu;
    // 0x2408e0: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3A8u, 0x2408DCu, 0x2408E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2408E4u;
label_2408e4:
    // 0x2408e4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2408e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2408e8:
    // 0x2408e8: 0x56400005  bnel        $s2, $zero, . + 4 + (0x5 << 2)
label_2408ec:
    if (ctx->pc == 0x2408ECu) {
        ctx->pc = 0x2408ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408E8u;
        // 0x2408ec: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2408F0u;
        goto label_2408f0;
    }
    ctx->pc = 0x2408E8u;
    {
        const bool branch_taken_0x2408e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x2408e8) {
            ctx->pc = 0x2408ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2408E8u;
            // 0x2408ec: 0x8e45000c  lw          $a1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240900u;
            goto label_240900;
        }
    }
    ctx->pc = 0x2408F0u;
label_2408f0:
    // 0x2408f0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2408f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2408f4:
    // 0x2408f4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2408f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2408f8:
    // 0x2408f8: 0x1000000f  b           . + 4 + (0xF << 2)
label_2408fc:
    if (ctx->pc == 0x2408FCu) {
        ctx->pc = 0x2408FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408F8u;
        // 0x2408fc: 0x24a56120  addiu       $a1, $a1, 0x6120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24864));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240900u;
        goto label_240900;
    }
    ctx->pc = 0x2408F8u;
    {
        const bool branch_taken_0x2408f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2408FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2408F8u;
        // 0x2408fc: 0x24a56120  addiu       $a1, $a1, 0x6120 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24864));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2408f8) {
            ctx->pc = 0x240938u;
            goto label_240938;
        }
    }
    ctx->pc = 0x240900u;
label_240900:
    // 0x240900: 0x8e440008  lw          $a0, 0x8($s2)
    ctx->pc = 0x240900u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_240904:
    // 0x240904: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x240904u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
label_240908:
    // 0x240908: 0x2686fffc  addiu       $a2, $s4, -0x4
    ctx->pc = 0x240908u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967292));
label_24090c:
    // 0x24090c: 0x24070070  addiu       $a3, $zero, 0x70
    ctx->pc = 0x24090cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
label_240910:
    // 0x240910: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x240910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_240914:
    // 0x240914: 0x266802dc  addiu       $t0, $s3, 0x2DC
    ctx->pc = 0x240914u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 19), 732));
label_240918:
    // 0x240918: 0x3a0482d  daddu       $t1, $sp, $zero
    ctx->pc = 0x240918u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_24091c:
    // 0x24091c: 0xc0919de  jal         func_246778
label_240920:
    if (ctx->pc == 0x240920u) {
        ctx->pc = 0x240920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24091Cu;
        // 0x240920: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x240924u;
        goto label_240924;
    }
    ctx->pc = 0x24091Cu;
    SET_GPR_U32(ctx, 31, 0x240924u);
    ctx->pc = 0x240920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24091Cu;
    // 0x240920: 0x37aa0004  ori         $t2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x246778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x246778u, 0x24091Cu, 0x240924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240924u;
label_240924:
    // 0x240924: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
label_240928:
    if (ctx->pc == 0x240928u) {
        ctx->pc = 0x240928u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240924u;
        // 0x240928: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24092Cu;
        goto label_24092c;
    }
    ctx->pc = 0x240924u;
    {
        const bool branch_taken_0x240924 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x240924) {
            ctx->pc = 0x240928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x240924u;
            // 0x240928: 0x8e430008  lw          $v1, 0x8($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x240948u;
            goto label_240948;
        }
    }
    ctx->pc = 0x24092Cu;
label_24092c:
    // 0x24092c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x24092cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_240930:
    // 0x240930: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x240930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_240934:
    // 0x240934: 0x24a56150  addiu       $a1, $a1, 0x6150
    ctx->pc = 0x240934u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24912));
label_240938:
    // 0x240938: 0xc08b5ac  jal         func_22D6B0
label_24093c:
    if (ctx->pc == 0x24093Cu) {
        ctx->pc = 0x24093Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240938u;
        // 0x24093c: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240940u;
        goto label_240940;
    }
    ctx->pc = 0x240938u;
    SET_GPR_U32(ctx, 31, 0x240940u);
    ctx->pc = 0x24093Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x240938u;
    // 0x24093c: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x240938u, 0x240940u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240940u;
label_240940:
    // 0x240940: 0x10000008  b           . + 4 + (0x8 << 2)
label_240944:
    if (ctx->pc == 0x240944u) {
        ctx->pc = 0x240944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240940u;
        // 0x240944: 0xde620060  ld          $v0, 0x60($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240948u;
        goto label_240948;
    }
    ctx->pc = 0x240940u;
    {
        const bool branch_taken_0x240940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x240940u;
        // 0x240944: 0xde620060  ld          $v0, 0x60($s3) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x240940) {
            ctx->pc = 0x240964u;
            goto label_240964;
        }
    }
    ctx->pc = 0x240948u;
label_240948:
    // 0x240948: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x240948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_24094c:
    // 0x24094c: 0xa0620003  sb          $v0, 0x3($v1)
    ctx->pc = 0x24094cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 2));
label_240950:
    // 0x240950: 0xa0760000  sb          $s6, 0x0($v1)
    ctx->pc = 0x240950u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 22));
label_240954:
    // 0x240954: 0xa0770001  sb          $s7, 0x1($v1)
    ctx->pc = 0x240954u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 23));
label_240958:
    // 0x240958: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x240958u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_24095c:
    // 0x24095c: 0x10000006  b           . + 4 + (0x6 << 2)
label_240960:
    if (ctx->pc == 0x240960u) {
        ctx->pc = 0x240960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24095Cu;
        // 0x240960: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240964u;
        goto label_240964;
    }
    ctx->pc = 0x24095Cu;
    {
        const bool branch_taken_0x24095c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x240960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24095Cu;
        // 0x240960: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24095c) {
            ctx->pc = 0x240978u;
            goto label_240978;
        }
    }
    ctx->pc = 0x240964u;
label_240964:
    // 0x240964: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x240964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_240968:
    // 0x240968: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x240968u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24096c:
    // 0x24096c: 0xc08a9d6  jal         func_22A758
label_240970:
    if (ctx->pc == 0x240970u) {
        ctx->pc = 0x240970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24096Cu;
        // 0x240970: 0xfe620060  sd          $v0, 0x60($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x240974u;
        goto label_240974;
    }
    ctx->pc = 0x24096Cu;
    SET_GPR_U32(ctx, 31, 0x240974u);
    ctx->pc = 0x240970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24096Cu;
    // 0x240970: 0xfe620060  sd          $v0, 0x60($s3) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 19), 96), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x24096Cu, 0x240974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x240974u;
label_240974:
    // 0x240974: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x240974u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_240978:
    // 0x240978: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x240978u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24097c:
    // 0x24097c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24097cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_240980:
    // 0x240980: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x240980u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_240984:
    // 0x240984: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x240984u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_240988:
    // 0x240988: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x240988u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24098c:
    // 0x24098c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24098cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_240990:
    // 0x240990: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x240990u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_240994:
    // 0x240994: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x240994u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_240998:
    // 0x240998: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x240998u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24099c:
    // 0x24099c: 0x3e00008  jr          $ra
label_2409a0:
    if (ctx->pc == 0x2409A0u) {
        ctx->pc = 0x2409A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24099Cu;
        // 0x2409a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2409A4u;
        goto label_2409a4;
    }
    ctx->pc = 0x24099Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2409A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24099Cu;
        // 0x2409a0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24099Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2409A4u;
label_2409a4:
    // 0x2409a4: 0x0  nop
    ctx->pc = 0x2409a4u;
    // NOP
}
