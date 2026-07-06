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

// Function: sub_002442A0
// Address: 0x2442a0 - 0x244ee0
void sub_002442A0_0x2442a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002442A0_0x2442a0");
#endif

    switch (ctx->pc) {
        case 0x2442a0u: goto label_2442a0;
        case 0x2442a4u: goto label_2442a4;
        case 0x2442a8u: goto label_2442a8;
        case 0x2442acu: goto label_2442ac;
        case 0x2442b0u: goto label_2442b0;
        case 0x2442b4u: goto label_2442b4;
        case 0x2442b8u: goto label_2442b8;
        case 0x2442bcu: goto label_2442bc;
        case 0x2442c0u: goto label_2442c0;
        case 0x2442c4u: goto label_2442c4;
        case 0x2442c8u: goto label_2442c8;
        case 0x2442ccu: goto label_2442cc;
        case 0x2442d0u: goto label_2442d0;
        case 0x2442d4u: goto label_2442d4;
        case 0x2442d8u: goto label_2442d8;
        case 0x2442dcu: goto label_2442dc;
        case 0x2442e0u: goto label_2442e0;
        case 0x2442e4u: goto label_2442e4;
        case 0x2442e8u: goto label_2442e8;
        case 0x2442ecu: goto label_2442ec;
        case 0x2442f0u: goto label_2442f0;
        case 0x2442f4u: goto label_2442f4;
        case 0x2442f8u: goto label_2442f8;
        case 0x2442fcu: goto label_2442fc;
        case 0x244300u: goto label_244300;
        case 0x244304u: goto label_244304;
        case 0x244308u: goto label_244308;
        case 0x24430cu: goto label_24430c;
        case 0x244310u: goto label_244310;
        case 0x244314u: goto label_244314;
        case 0x244318u: goto label_244318;
        case 0x24431cu: goto label_24431c;
        case 0x244320u: goto label_244320;
        case 0x244324u: goto label_244324;
        case 0x244328u: goto label_244328;
        case 0x24432cu: goto label_24432c;
        case 0x244330u: goto label_244330;
        case 0x244334u: goto label_244334;
        case 0x244338u: goto label_244338;
        case 0x24433cu: goto label_24433c;
        case 0x244340u: goto label_244340;
        case 0x244344u: goto label_244344;
        case 0x244348u: goto label_244348;
        case 0x24434cu: goto label_24434c;
        case 0x244350u: goto label_244350;
        case 0x244354u: goto label_244354;
        case 0x244358u: goto label_244358;
        case 0x24435cu: goto label_24435c;
        case 0x244360u: goto label_244360;
        case 0x244364u: goto label_244364;
        case 0x244368u: goto label_244368;
        case 0x24436cu: goto label_24436c;
        case 0x244370u: goto label_244370;
        case 0x244374u: goto label_244374;
        case 0x244378u: goto label_244378;
        case 0x24437cu: goto label_24437c;
        case 0x244380u: goto label_244380;
        case 0x244384u: goto label_244384;
        case 0x244388u: goto label_244388;
        case 0x24438cu: goto label_24438c;
        case 0x244390u: goto label_244390;
        case 0x244394u: goto label_244394;
        case 0x244398u: goto label_244398;
        case 0x24439cu: goto label_24439c;
        case 0x2443a0u: goto label_2443a0;
        case 0x2443a4u: goto label_2443a4;
        case 0x2443a8u: goto label_2443a8;
        case 0x2443acu: goto label_2443ac;
        case 0x2443b0u: goto label_2443b0;
        case 0x2443b4u: goto label_2443b4;
        case 0x2443b8u: goto label_2443b8;
        case 0x2443bcu: goto label_2443bc;
        case 0x2443c0u: goto label_2443c0;
        case 0x2443c4u: goto label_2443c4;
        case 0x2443c8u: goto label_2443c8;
        case 0x2443ccu: goto label_2443cc;
        case 0x2443d0u: goto label_2443d0;
        case 0x2443d4u: goto label_2443d4;
        case 0x2443d8u: goto label_2443d8;
        case 0x2443dcu: goto label_2443dc;
        case 0x2443e0u: goto label_2443e0;
        case 0x2443e4u: goto label_2443e4;
        case 0x2443e8u: goto label_2443e8;
        case 0x2443ecu: goto label_2443ec;
        case 0x2443f0u: goto label_2443f0;
        case 0x2443f4u: goto label_2443f4;
        case 0x2443f8u: goto label_2443f8;
        case 0x2443fcu: goto label_2443fc;
        case 0x244400u: goto label_244400;
        case 0x244404u: goto label_244404;
        case 0x244408u: goto label_244408;
        case 0x24440cu: goto label_24440c;
        case 0x244410u: goto label_244410;
        case 0x244414u: goto label_244414;
        case 0x244418u: goto label_244418;
        case 0x24441cu: goto label_24441c;
        case 0x244420u: goto label_244420;
        case 0x244424u: goto label_244424;
        case 0x244428u: goto label_244428;
        case 0x24442cu: goto label_24442c;
        case 0x244430u: goto label_244430;
        case 0x244434u: goto label_244434;
        case 0x244438u: goto label_244438;
        case 0x24443cu: goto label_24443c;
        case 0x244440u: goto label_244440;
        case 0x244444u: goto label_244444;
        case 0x244448u: goto label_244448;
        case 0x24444cu: goto label_24444c;
        case 0x244450u: goto label_244450;
        case 0x244454u: goto label_244454;
        case 0x244458u: goto label_244458;
        case 0x24445cu: goto label_24445c;
        case 0x244460u: goto label_244460;
        case 0x244464u: goto label_244464;
        case 0x244468u: goto label_244468;
        case 0x24446cu: goto label_24446c;
        case 0x244470u: goto label_244470;
        case 0x244474u: goto label_244474;
        case 0x244478u: goto label_244478;
        case 0x24447cu: goto label_24447c;
        case 0x244480u: goto label_244480;
        case 0x244484u: goto label_244484;
        case 0x244488u: goto label_244488;
        case 0x24448cu: goto label_24448c;
        case 0x244490u: goto label_244490;
        case 0x244494u: goto label_244494;
        case 0x244498u: goto label_244498;
        case 0x24449cu: goto label_24449c;
        case 0x2444a0u: goto label_2444a0;
        case 0x2444a4u: goto label_2444a4;
        case 0x2444a8u: goto label_2444a8;
        case 0x2444acu: goto label_2444ac;
        case 0x2444b0u: goto label_2444b0;
        case 0x2444b4u: goto label_2444b4;
        case 0x2444b8u: goto label_2444b8;
        case 0x2444bcu: goto label_2444bc;
        case 0x2444c0u: goto label_2444c0;
        case 0x2444c4u: goto label_2444c4;
        case 0x2444c8u: goto label_2444c8;
        case 0x2444ccu: goto label_2444cc;
        case 0x2444d0u: goto label_2444d0;
        case 0x2444d4u: goto label_2444d4;
        case 0x2444d8u: goto label_2444d8;
        case 0x2444dcu: goto label_2444dc;
        case 0x2444e0u: goto label_2444e0;
        case 0x2444e4u: goto label_2444e4;
        case 0x2444e8u: goto label_2444e8;
        case 0x2444ecu: goto label_2444ec;
        case 0x2444f0u: goto label_2444f0;
        case 0x2444f4u: goto label_2444f4;
        case 0x2444f8u: goto label_2444f8;
        case 0x2444fcu: goto label_2444fc;
        case 0x244500u: goto label_244500;
        case 0x244504u: goto label_244504;
        case 0x244508u: goto label_244508;
        case 0x24450cu: goto label_24450c;
        case 0x244510u: goto label_244510;
        case 0x244514u: goto label_244514;
        case 0x244518u: goto label_244518;
        case 0x24451cu: goto label_24451c;
        case 0x244520u: goto label_244520;
        case 0x244524u: goto label_244524;
        case 0x244528u: goto label_244528;
        case 0x24452cu: goto label_24452c;
        case 0x244530u: goto label_244530;
        case 0x244534u: goto label_244534;
        case 0x244538u: goto label_244538;
        case 0x24453cu: goto label_24453c;
        case 0x244540u: goto label_244540;
        case 0x244544u: goto label_244544;
        case 0x244548u: goto label_244548;
        case 0x24454cu: goto label_24454c;
        case 0x244550u: goto label_244550;
        case 0x244554u: goto label_244554;
        case 0x244558u: goto label_244558;
        case 0x24455cu: goto label_24455c;
        case 0x244560u: goto label_244560;
        case 0x244564u: goto label_244564;
        case 0x244568u: goto label_244568;
        case 0x24456cu: goto label_24456c;
        case 0x244570u: goto label_244570;
        case 0x244574u: goto label_244574;
        case 0x244578u: goto label_244578;
        case 0x24457cu: goto label_24457c;
        case 0x244580u: goto label_244580;
        case 0x244584u: goto label_244584;
        case 0x244588u: goto label_244588;
        case 0x24458cu: goto label_24458c;
        case 0x244590u: goto label_244590;
        case 0x244594u: goto label_244594;
        case 0x244598u: goto label_244598;
        case 0x24459cu: goto label_24459c;
        case 0x2445a0u: goto label_2445a0;
        case 0x2445a4u: goto label_2445a4;
        case 0x2445a8u: goto label_2445a8;
        case 0x2445acu: goto label_2445ac;
        case 0x2445b0u: goto label_2445b0;
        case 0x2445b4u: goto label_2445b4;
        case 0x2445b8u: goto label_2445b8;
        case 0x2445bcu: goto label_2445bc;
        case 0x2445c0u: goto label_2445c0;
        case 0x2445c4u: goto label_2445c4;
        case 0x2445c8u: goto label_2445c8;
        case 0x2445ccu: goto label_2445cc;
        case 0x2445d0u: goto label_2445d0;
        case 0x2445d4u: goto label_2445d4;
        case 0x2445d8u: goto label_2445d8;
        case 0x2445dcu: goto label_2445dc;
        case 0x2445e0u: goto label_2445e0;
        case 0x2445e4u: goto label_2445e4;
        case 0x2445e8u: goto label_2445e8;
        case 0x2445ecu: goto label_2445ec;
        case 0x2445f0u: goto label_2445f0;
        case 0x2445f4u: goto label_2445f4;
        case 0x2445f8u: goto label_2445f8;
        case 0x2445fcu: goto label_2445fc;
        case 0x244600u: goto label_244600;
        case 0x244604u: goto label_244604;
        case 0x244608u: goto label_244608;
        case 0x24460cu: goto label_24460c;
        case 0x244610u: goto label_244610;
        case 0x244614u: goto label_244614;
        case 0x244618u: goto label_244618;
        case 0x24461cu: goto label_24461c;
        case 0x244620u: goto label_244620;
        case 0x244624u: goto label_244624;
        case 0x244628u: goto label_244628;
        case 0x24462cu: goto label_24462c;
        case 0x244630u: goto label_244630;
        case 0x244634u: goto label_244634;
        case 0x244638u: goto label_244638;
        case 0x24463cu: goto label_24463c;
        case 0x244640u: goto label_244640;
        case 0x244644u: goto label_244644;
        case 0x244648u: goto label_244648;
        case 0x24464cu: goto label_24464c;
        case 0x244650u: goto label_244650;
        case 0x244654u: goto label_244654;
        case 0x244658u: goto label_244658;
        case 0x24465cu: goto label_24465c;
        case 0x244660u: goto label_244660;
        case 0x244664u: goto label_244664;
        case 0x244668u: goto label_244668;
        case 0x24466cu: goto label_24466c;
        case 0x244670u: goto label_244670;
        case 0x244674u: goto label_244674;
        case 0x244678u: goto label_244678;
        case 0x24467cu: goto label_24467c;
        case 0x244680u: goto label_244680;
        case 0x244684u: goto label_244684;
        case 0x244688u: goto label_244688;
        case 0x24468cu: goto label_24468c;
        case 0x244690u: goto label_244690;
        case 0x244694u: goto label_244694;
        case 0x244698u: goto label_244698;
        case 0x24469cu: goto label_24469c;
        case 0x2446a0u: goto label_2446a0;
        case 0x2446a4u: goto label_2446a4;
        case 0x2446a8u: goto label_2446a8;
        case 0x2446acu: goto label_2446ac;
        case 0x2446b0u: goto label_2446b0;
        case 0x2446b4u: goto label_2446b4;
        case 0x2446b8u: goto label_2446b8;
        case 0x2446bcu: goto label_2446bc;
        case 0x2446c0u: goto label_2446c0;
        case 0x2446c4u: goto label_2446c4;
        case 0x2446c8u: goto label_2446c8;
        case 0x2446ccu: goto label_2446cc;
        case 0x2446d0u: goto label_2446d0;
        case 0x2446d4u: goto label_2446d4;
        case 0x2446d8u: goto label_2446d8;
        case 0x2446dcu: goto label_2446dc;
        case 0x2446e0u: goto label_2446e0;
        case 0x2446e4u: goto label_2446e4;
        case 0x2446e8u: goto label_2446e8;
        case 0x2446ecu: goto label_2446ec;
        case 0x2446f0u: goto label_2446f0;
        case 0x2446f4u: goto label_2446f4;
        case 0x2446f8u: goto label_2446f8;
        case 0x2446fcu: goto label_2446fc;
        case 0x244700u: goto label_244700;
        case 0x244704u: goto label_244704;
        case 0x244708u: goto label_244708;
        case 0x24470cu: goto label_24470c;
        case 0x244710u: goto label_244710;
        case 0x244714u: goto label_244714;
        case 0x244718u: goto label_244718;
        case 0x24471cu: goto label_24471c;
        case 0x244720u: goto label_244720;
        case 0x244724u: goto label_244724;
        case 0x244728u: goto label_244728;
        case 0x24472cu: goto label_24472c;
        case 0x244730u: goto label_244730;
        case 0x244734u: goto label_244734;
        case 0x244738u: goto label_244738;
        case 0x24473cu: goto label_24473c;
        case 0x244740u: goto label_244740;
        case 0x244744u: goto label_244744;
        case 0x244748u: goto label_244748;
        case 0x24474cu: goto label_24474c;
        case 0x244750u: goto label_244750;
        case 0x244754u: goto label_244754;
        case 0x244758u: goto label_244758;
        case 0x24475cu: goto label_24475c;
        case 0x244760u: goto label_244760;
        case 0x244764u: goto label_244764;
        case 0x244768u: goto label_244768;
        case 0x24476cu: goto label_24476c;
        case 0x244770u: goto label_244770;
        case 0x244774u: goto label_244774;
        case 0x244778u: goto label_244778;
        case 0x24477cu: goto label_24477c;
        case 0x244780u: goto label_244780;
        case 0x244784u: goto label_244784;
        case 0x244788u: goto label_244788;
        case 0x24478cu: goto label_24478c;
        case 0x244790u: goto label_244790;
        case 0x244794u: goto label_244794;
        case 0x244798u: goto label_244798;
        case 0x24479cu: goto label_24479c;
        case 0x2447a0u: goto label_2447a0;
        case 0x2447a4u: goto label_2447a4;
        case 0x2447a8u: goto label_2447a8;
        case 0x2447acu: goto label_2447ac;
        case 0x2447b0u: goto label_2447b0;
        case 0x2447b4u: goto label_2447b4;
        case 0x2447b8u: goto label_2447b8;
        case 0x2447bcu: goto label_2447bc;
        case 0x2447c0u: goto label_2447c0;
        case 0x2447c4u: goto label_2447c4;
        case 0x2447c8u: goto label_2447c8;
        case 0x2447ccu: goto label_2447cc;
        case 0x2447d0u: goto label_2447d0;
        case 0x2447d4u: goto label_2447d4;
        case 0x2447d8u: goto label_2447d8;
        case 0x2447dcu: goto label_2447dc;
        case 0x2447e0u: goto label_2447e0;
        case 0x2447e4u: goto label_2447e4;
        case 0x2447e8u: goto label_2447e8;
        case 0x2447ecu: goto label_2447ec;
        case 0x2447f0u: goto label_2447f0;
        case 0x2447f4u: goto label_2447f4;
        case 0x2447f8u: goto label_2447f8;
        case 0x2447fcu: goto label_2447fc;
        case 0x244800u: goto label_244800;
        case 0x244804u: goto label_244804;
        case 0x244808u: goto label_244808;
        case 0x24480cu: goto label_24480c;
        case 0x244810u: goto label_244810;
        case 0x244814u: goto label_244814;
        case 0x244818u: goto label_244818;
        case 0x24481cu: goto label_24481c;
        case 0x244820u: goto label_244820;
        case 0x244824u: goto label_244824;
        case 0x244828u: goto label_244828;
        case 0x24482cu: goto label_24482c;
        case 0x244830u: goto label_244830;
        case 0x244834u: goto label_244834;
        case 0x244838u: goto label_244838;
        case 0x24483cu: goto label_24483c;
        case 0x244840u: goto label_244840;
        case 0x244844u: goto label_244844;
        case 0x244848u: goto label_244848;
        case 0x24484cu: goto label_24484c;
        case 0x244850u: goto label_244850;
        case 0x244854u: goto label_244854;
        case 0x244858u: goto label_244858;
        case 0x24485cu: goto label_24485c;
        case 0x244860u: goto label_244860;
        case 0x244864u: goto label_244864;
        case 0x244868u: goto label_244868;
        case 0x24486cu: goto label_24486c;
        case 0x244870u: goto label_244870;
        case 0x244874u: goto label_244874;
        case 0x244878u: goto label_244878;
        case 0x24487cu: goto label_24487c;
        case 0x244880u: goto label_244880;
        case 0x244884u: goto label_244884;
        case 0x244888u: goto label_244888;
        case 0x24488cu: goto label_24488c;
        case 0x244890u: goto label_244890;
        case 0x244894u: goto label_244894;
        case 0x244898u: goto label_244898;
        case 0x24489cu: goto label_24489c;
        case 0x2448a0u: goto label_2448a0;
        case 0x2448a4u: goto label_2448a4;
        case 0x2448a8u: goto label_2448a8;
        case 0x2448acu: goto label_2448ac;
        case 0x2448b0u: goto label_2448b0;
        case 0x2448b4u: goto label_2448b4;
        case 0x2448b8u: goto label_2448b8;
        case 0x2448bcu: goto label_2448bc;
        case 0x2448c0u: goto label_2448c0;
        case 0x2448c4u: goto label_2448c4;
        case 0x2448c8u: goto label_2448c8;
        case 0x2448ccu: goto label_2448cc;
        case 0x2448d0u: goto label_2448d0;
        case 0x2448d4u: goto label_2448d4;
        case 0x2448d8u: goto label_2448d8;
        case 0x2448dcu: goto label_2448dc;
        case 0x2448e0u: goto label_2448e0;
        case 0x2448e4u: goto label_2448e4;
        case 0x2448e8u: goto label_2448e8;
        case 0x2448ecu: goto label_2448ec;
        case 0x2448f0u: goto label_2448f0;
        case 0x2448f4u: goto label_2448f4;
        case 0x2448f8u: goto label_2448f8;
        case 0x2448fcu: goto label_2448fc;
        case 0x244900u: goto label_244900;
        case 0x244904u: goto label_244904;
        case 0x244908u: goto label_244908;
        case 0x24490cu: goto label_24490c;
        case 0x244910u: goto label_244910;
        case 0x244914u: goto label_244914;
        case 0x244918u: goto label_244918;
        case 0x24491cu: goto label_24491c;
        case 0x244920u: goto label_244920;
        case 0x244924u: goto label_244924;
        case 0x244928u: goto label_244928;
        case 0x24492cu: goto label_24492c;
        case 0x244930u: goto label_244930;
        case 0x244934u: goto label_244934;
        case 0x244938u: goto label_244938;
        case 0x24493cu: goto label_24493c;
        case 0x244940u: goto label_244940;
        case 0x244944u: goto label_244944;
        case 0x244948u: goto label_244948;
        case 0x24494cu: goto label_24494c;
        case 0x244950u: goto label_244950;
        case 0x244954u: goto label_244954;
        case 0x244958u: goto label_244958;
        case 0x24495cu: goto label_24495c;
        case 0x244960u: goto label_244960;
        case 0x244964u: goto label_244964;
        case 0x244968u: goto label_244968;
        case 0x24496cu: goto label_24496c;
        case 0x244970u: goto label_244970;
        case 0x244974u: goto label_244974;
        case 0x244978u: goto label_244978;
        case 0x24497cu: goto label_24497c;
        case 0x244980u: goto label_244980;
        case 0x244984u: goto label_244984;
        case 0x244988u: goto label_244988;
        case 0x24498cu: goto label_24498c;
        case 0x244990u: goto label_244990;
        case 0x244994u: goto label_244994;
        case 0x244998u: goto label_244998;
        case 0x24499cu: goto label_24499c;
        case 0x2449a0u: goto label_2449a0;
        case 0x2449a4u: goto label_2449a4;
        case 0x2449a8u: goto label_2449a8;
        case 0x2449acu: goto label_2449ac;
        case 0x2449b0u: goto label_2449b0;
        case 0x2449b4u: goto label_2449b4;
        case 0x2449b8u: goto label_2449b8;
        case 0x2449bcu: goto label_2449bc;
        case 0x2449c0u: goto label_2449c0;
        case 0x2449c4u: goto label_2449c4;
        case 0x2449c8u: goto label_2449c8;
        case 0x2449ccu: goto label_2449cc;
        case 0x2449d0u: goto label_2449d0;
        case 0x2449d4u: goto label_2449d4;
        case 0x2449d8u: goto label_2449d8;
        case 0x2449dcu: goto label_2449dc;
        case 0x2449e0u: goto label_2449e0;
        case 0x2449e4u: goto label_2449e4;
        case 0x2449e8u: goto label_2449e8;
        case 0x2449ecu: goto label_2449ec;
        case 0x2449f0u: goto label_2449f0;
        case 0x2449f4u: goto label_2449f4;
        case 0x2449f8u: goto label_2449f8;
        case 0x2449fcu: goto label_2449fc;
        case 0x244a00u: goto label_244a00;
        case 0x244a04u: goto label_244a04;
        case 0x244a08u: goto label_244a08;
        case 0x244a0cu: goto label_244a0c;
        case 0x244a10u: goto label_244a10;
        case 0x244a14u: goto label_244a14;
        case 0x244a18u: goto label_244a18;
        case 0x244a1cu: goto label_244a1c;
        case 0x244a20u: goto label_244a20;
        case 0x244a24u: goto label_244a24;
        case 0x244a28u: goto label_244a28;
        case 0x244a2cu: goto label_244a2c;
        case 0x244a30u: goto label_244a30;
        case 0x244a34u: goto label_244a34;
        case 0x244a38u: goto label_244a38;
        case 0x244a3cu: goto label_244a3c;
        case 0x244a40u: goto label_244a40;
        case 0x244a44u: goto label_244a44;
        case 0x244a48u: goto label_244a48;
        case 0x244a4cu: goto label_244a4c;
        case 0x244a50u: goto label_244a50;
        case 0x244a54u: goto label_244a54;
        case 0x244a58u: goto label_244a58;
        case 0x244a5cu: goto label_244a5c;
        case 0x244a60u: goto label_244a60;
        case 0x244a64u: goto label_244a64;
        case 0x244a68u: goto label_244a68;
        case 0x244a6cu: goto label_244a6c;
        case 0x244a70u: goto label_244a70;
        case 0x244a74u: goto label_244a74;
        case 0x244a78u: goto label_244a78;
        case 0x244a7cu: goto label_244a7c;
        case 0x244a80u: goto label_244a80;
        case 0x244a84u: goto label_244a84;
        case 0x244a88u: goto label_244a88;
        case 0x244a8cu: goto label_244a8c;
        case 0x244a90u: goto label_244a90;
        case 0x244a94u: goto label_244a94;
        case 0x244a98u: goto label_244a98;
        case 0x244a9cu: goto label_244a9c;
        case 0x244aa0u: goto label_244aa0;
        case 0x244aa4u: goto label_244aa4;
        case 0x244aa8u: goto label_244aa8;
        case 0x244aacu: goto label_244aac;
        case 0x244ab0u: goto label_244ab0;
        case 0x244ab4u: goto label_244ab4;
        case 0x244ab8u: goto label_244ab8;
        case 0x244abcu: goto label_244abc;
        case 0x244ac0u: goto label_244ac0;
        case 0x244ac4u: goto label_244ac4;
        case 0x244ac8u: goto label_244ac8;
        case 0x244accu: goto label_244acc;
        case 0x244ad0u: goto label_244ad0;
        case 0x244ad4u: goto label_244ad4;
        case 0x244ad8u: goto label_244ad8;
        case 0x244adcu: goto label_244adc;
        case 0x244ae0u: goto label_244ae0;
        case 0x244ae4u: goto label_244ae4;
        case 0x244ae8u: goto label_244ae8;
        case 0x244aecu: goto label_244aec;
        case 0x244af0u: goto label_244af0;
        case 0x244af4u: goto label_244af4;
        case 0x244af8u: goto label_244af8;
        case 0x244afcu: goto label_244afc;
        case 0x244b00u: goto label_244b00;
        case 0x244b04u: goto label_244b04;
        case 0x244b08u: goto label_244b08;
        case 0x244b0cu: goto label_244b0c;
        case 0x244b10u: goto label_244b10;
        case 0x244b14u: goto label_244b14;
        case 0x244b18u: goto label_244b18;
        case 0x244b1cu: goto label_244b1c;
        case 0x244b20u: goto label_244b20;
        case 0x244b24u: goto label_244b24;
        case 0x244b28u: goto label_244b28;
        case 0x244b2cu: goto label_244b2c;
        case 0x244b30u: goto label_244b30;
        case 0x244b34u: goto label_244b34;
        case 0x244b38u: goto label_244b38;
        case 0x244b3cu: goto label_244b3c;
        case 0x244b40u: goto label_244b40;
        case 0x244b44u: goto label_244b44;
        case 0x244b48u: goto label_244b48;
        case 0x244b4cu: goto label_244b4c;
        case 0x244b50u: goto label_244b50;
        case 0x244b54u: goto label_244b54;
        case 0x244b58u: goto label_244b58;
        case 0x244b5cu: goto label_244b5c;
        case 0x244b60u: goto label_244b60;
        case 0x244b64u: goto label_244b64;
        case 0x244b68u: goto label_244b68;
        case 0x244b6cu: goto label_244b6c;
        case 0x244b70u: goto label_244b70;
        case 0x244b74u: goto label_244b74;
        case 0x244b78u: goto label_244b78;
        case 0x244b7cu: goto label_244b7c;
        case 0x244b80u: goto label_244b80;
        case 0x244b84u: goto label_244b84;
        case 0x244b88u: goto label_244b88;
        case 0x244b8cu: goto label_244b8c;
        case 0x244b90u: goto label_244b90;
        case 0x244b94u: goto label_244b94;
        case 0x244b98u: goto label_244b98;
        case 0x244b9cu: goto label_244b9c;
        case 0x244ba0u: goto label_244ba0;
        case 0x244ba4u: goto label_244ba4;
        case 0x244ba8u: goto label_244ba8;
        case 0x244bacu: goto label_244bac;
        case 0x244bb0u: goto label_244bb0;
        case 0x244bb4u: goto label_244bb4;
        case 0x244bb8u: goto label_244bb8;
        case 0x244bbcu: goto label_244bbc;
        case 0x244bc0u: goto label_244bc0;
        case 0x244bc4u: goto label_244bc4;
        case 0x244bc8u: goto label_244bc8;
        case 0x244bccu: goto label_244bcc;
        case 0x244bd0u: goto label_244bd0;
        case 0x244bd4u: goto label_244bd4;
        case 0x244bd8u: goto label_244bd8;
        case 0x244bdcu: goto label_244bdc;
        case 0x244be0u: goto label_244be0;
        case 0x244be4u: goto label_244be4;
        case 0x244be8u: goto label_244be8;
        case 0x244becu: goto label_244bec;
        case 0x244bf0u: goto label_244bf0;
        case 0x244bf4u: goto label_244bf4;
        case 0x244bf8u: goto label_244bf8;
        case 0x244bfcu: goto label_244bfc;
        case 0x244c00u: goto label_244c00;
        case 0x244c04u: goto label_244c04;
        case 0x244c08u: goto label_244c08;
        case 0x244c0cu: goto label_244c0c;
        case 0x244c10u: goto label_244c10;
        case 0x244c14u: goto label_244c14;
        case 0x244c18u: goto label_244c18;
        case 0x244c1cu: goto label_244c1c;
        case 0x244c20u: goto label_244c20;
        case 0x244c24u: goto label_244c24;
        case 0x244c28u: goto label_244c28;
        case 0x244c2cu: goto label_244c2c;
        case 0x244c30u: goto label_244c30;
        case 0x244c34u: goto label_244c34;
        case 0x244c38u: goto label_244c38;
        case 0x244c3cu: goto label_244c3c;
        case 0x244c40u: goto label_244c40;
        case 0x244c44u: goto label_244c44;
        case 0x244c48u: goto label_244c48;
        case 0x244c4cu: goto label_244c4c;
        case 0x244c50u: goto label_244c50;
        case 0x244c54u: goto label_244c54;
        case 0x244c58u: goto label_244c58;
        case 0x244c5cu: goto label_244c5c;
        case 0x244c60u: goto label_244c60;
        case 0x244c64u: goto label_244c64;
        case 0x244c68u: goto label_244c68;
        case 0x244c6cu: goto label_244c6c;
        case 0x244c70u: goto label_244c70;
        case 0x244c74u: goto label_244c74;
        case 0x244c78u: goto label_244c78;
        case 0x244c7cu: goto label_244c7c;
        case 0x244c80u: goto label_244c80;
        case 0x244c84u: goto label_244c84;
        case 0x244c88u: goto label_244c88;
        case 0x244c8cu: goto label_244c8c;
        case 0x244c90u: goto label_244c90;
        case 0x244c94u: goto label_244c94;
        case 0x244c98u: goto label_244c98;
        case 0x244c9cu: goto label_244c9c;
        case 0x244ca0u: goto label_244ca0;
        case 0x244ca4u: goto label_244ca4;
        case 0x244ca8u: goto label_244ca8;
        case 0x244cacu: goto label_244cac;
        case 0x244cb0u: goto label_244cb0;
        case 0x244cb4u: goto label_244cb4;
        case 0x244cb8u: goto label_244cb8;
        case 0x244cbcu: goto label_244cbc;
        case 0x244cc0u: goto label_244cc0;
        case 0x244cc4u: goto label_244cc4;
        case 0x244cc8u: goto label_244cc8;
        case 0x244cccu: goto label_244ccc;
        case 0x244cd0u: goto label_244cd0;
        case 0x244cd4u: goto label_244cd4;
        case 0x244cd8u: goto label_244cd8;
        case 0x244cdcu: goto label_244cdc;
        case 0x244ce0u: goto label_244ce0;
        case 0x244ce4u: goto label_244ce4;
        case 0x244ce8u: goto label_244ce8;
        case 0x244cecu: goto label_244cec;
        case 0x244cf0u: goto label_244cf0;
        case 0x244cf4u: goto label_244cf4;
        case 0x244cf8u: goto label_244cf8;
        case 0x244cfcu: goto label_244cfc;
        case 0x244d00u: goto label_244d00;
        case 0x244d04u: goto label_244d04;
        case 0x244d08u: goto label_244d08;
        case 0x244d0cu: goto label_244d0c;
        case 0x244d10u: goto label_244d10;
        case 0x244d14u: goto label_244d14;
        case 0x244d18u: goto label_244d18;
        case 0x244d1cu: goto label_244d1c;
        case 0x244d20u: goto label_244d20;
        case 0x244d24u: goto label_244d24;
        case 0x244d28u: goto label_244d28;
        case 0x244d2cu: goto label_244d2c;
        case 0x244d30u: goto label_244d30;
        case 0x244d34u: goto label_244d34;
        case 0x244d38u: goto label_244d38;
        case 0x244d3cu: goto label_244d3c;
        case 0x244d40u: goto label_244d40;
        case 0x244d44u: goto label_244d44;
        case 0x244d48u: goto label_244d48;
        case 0x244d4cu: goto label_244d4c;
        case 0x244d50u: goto label_244d50;
        case 0x244d54u: goto label_244d54;
        case 0x244d58u: goto label_244d58;
        case 0x244d5cu: goto label_244d5c;
        case 0x244d60u: goto label_244d60;
        case 0x244d64u: goto label_244d64;
        case 0x244d68u: goto label_244d68;
        case 0x244d6cu: goto label_244d6c;
        case 0x244d70u: goto label_244d70;
        case 0x244d74u: goto label_244d74;
        case 0x244d78u: goto label_244d78;
        case 0x244d7cu: goto label_244d7c;
        case 0x244d80u: goto label_244d80;
        case 0x244d84u: goto label_244d84;
        case 0x244d88u: goto label_244d88;
        case 0x244d8cu: goto label_244d8c;
        case 0x244d90u: goto label_244d90;
        case 0x244d94u: goto label_244d94;
        case 0x244d98u: goto label_244d98;
        case 0x244d9cu: goto label_244d9c;
        case 0x244da0u: goto label_244da0;
        case 0x244da4u: goto label_244da4;
        case 0x244da8u: goto label_244da8;
        case 0x244dacu: goto label_244dac;
        case 0x244db0u: goto label_244db0;
        case 0x244db4u: goto label_244db4;
        case 0x244db8u: goto label_244db8;
        case 0x244dbcu: goto label_244dbc;
        case 0x244dc0u: goto label_244dc0;
        case 0x244dc4u: goto label_244dc4;
        case 0x244dc8u: goto label_244dc8;
        case 0x244dccu: goto label_244dcc;
        case 0x244dd0u: goto label_244dd0;
        case 0x244dd4u: goto label_244dd4;
        case 0x244dd8u: goto label_244dd8;
        case 0x244ddcu: goto label_244ddc;
        case 0x244de0u: goto label_244de0;
        case 0x244de4u: goto label_244de4;
        case 0x244de8u: goto label_244de8;
        case 0x244decu: goto label_244dec;
        case 0x244df0u: goto label_244df0;
        case 0x244df4u: goto label_244df4;
        case 0x244df8u: goto label_244df8;
        case 0x244dfcu: goto label_244dfc;
        case 0x244e00u: goto label_244e00;
        case 0x244e04u: goto label_244e04;
        case 0x244e08u: goto label_244e08;
        case 0x244e0cu: goto label_244e0c;
        case 0x244e10u: goto label_244e10;
        case 0x244e14u: goto label_244e14;
        case 0x244e18u: goto label_244e18;
        case 0x244e1cu: goto label_244e1c;
        case 0x244e20u: goto label_244e20;
        case 0x244e24u: goto label_244e24;
        case 0x244e28u: goto label_244e28;
        case 0x244e2cu: goto label_244e2c;
        case 0x244e30u: goto label_244e30;
        case 0x244e34u: goto label_244e34;
        case 0x244e38u: goto label_244e38;
        case 0x244e3cu: goto label_244e3c;
        case 0x244e40u: goto label_244e40;
        case 0x244e44u: goto label_244e44;
        case 0x244e48u: goto label_244e48;
        case 0x244e4cu: goto label_244e4c;
        case 0x244e50u: goto label_244e50;
        case 0x244e54u: goto label_244e54;
        case 0x244e58u: goto label_244e58;
        case 0x244e5cu: goto label_244e5c;
        case 0x244e60u: goto label_244e60;
        case 0x244e64u: goto label_244e64;
        case 0x244e68u: goto label_244e68;
        case 0x244e6cu: goto label_244e6c;
        case 0x244e70u: goto label_244e70;
        case 0x244e74u: goto label_244e74;
        case 0x244e78u: goto label_244e78;
        case 0x244e7cu: goto label_244e7c;
        case 0x244e80u: goto label_244e80;
        case 0x244e84u: goto label_244e84;
        case 0x244e88u: goto label_244e88;
        case 0x244e8cu: goto label_244e8c;
        case 0x244e90u: goto label_244e90;
        case 0x244e94u: goto label_244e94;
        case 0x244e98u: goto label_244e98;
        case 0x244e9cu: goto label_244e9c;
        case 0x244ea0u: goto label_244ea0;
        case 0x244ea4u: goto label_244ea4;
        case 0x244ea8u: goto label_244ea8;
        case 0x244eacu: goto label_244eac;
        case 0x244eb0u: goto label_244eb0;
        case 0x244eb4u: goto label_244eb4;
        case 0x244eb8u: goto label_244eb8;
        case 0x244ebcu: goto label_244ebc;
        case 0x244ec0u: goto label_244ec0;
        case 0x244ec4u: goto label_244ec4;
        case 0x244ec8u: goto label_244ec8;
        case 0x244eccu: goto label_244ecc;
        case 0x244ed0u: goto label_244ed0;
        case 0x244ed4u: goto label_244ed4;
        case 0x244ed8u: goto label_244ed8;
        case 0x244edcu: goto label_244edc;
        default: break;
    }

    ctx->pc = 0x2442a0u;

label_2442a0:
    // 0x2442a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2442a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2442a4:
    // 0x2442a4: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2442a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2442a8:
    // 0x2442a8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2442a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2442ac:
    // 0x2442ac: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2442acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2442b0:
    // 0x2442b0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2442b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2442b4:
    // 0x2442b4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2442b4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2442b8:
    // 0x2442b8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2442b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2442bc:
    // 0x2442bc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2442bcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2442c0:
    // 0x2442c0: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x2442c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_2442c4:
    // 0x2442c4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2442c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2442c8:
    // 0x2442c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2442c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2442cc:
    // 0x2442cc: 0xdc5417c0  ld          $s4, 0x17C0($v0)
    ctx->pc = 0x2442ccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 2), 6080)));
label_2442d0:
    // 0x2442d0: 0x8e3000ac  lw          $s0, 0xAC($s1)
    ctx->pc = 0x2442d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_2442d4:
    // 0x2442d4: 0x0  nop
    ctx->pc = 0x2442d4u;
    // NOP
label_2442d8:
    // 0x2442d8: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2442dc:
    if (ctx->pc == 0x2442DCu) {
        ctx->pc = 0x2442E0u;
        goto label_2442e0;
    }
    ctx->pc = 0x2442D8u;
    {
        const bool branch_taken_0x2442d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2442d8) {
            ctx->pc = 0x244344u;
            goto label_244344;
        }
    }
    ctx->pc = 0x2442E0u;
label_2442e0:
    // 0x2442e0: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x2442e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_2442e4:
    // 0x2442e4: 0x5453fffc  bnel        $v0, $s3, . + 4 + (-0x4 << 2)
label_2442e8:
    if (ctx->pc == 0x2442E8u) {
        ctx->pc = 0x2442E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442E4u;
        // 0x2442e8: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442ECu;
        goto label_2442ec;
    }
    ctx->pc = 0x2442E4u;
    {
        const bool branch_taken_0x2442e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x2442e4) {
            ctx->pc = 0x2442E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2442E4u;
            // 0x2442e8: 0x8e100008  lw          $s0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2442D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2442d8;
        }
    }
    ctx->pc = 0x2442ECu;
label_2442ec:
    // 0x2442ec: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2442ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2442f0:
    // 0x2442f0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_2442f4:
    if (ctx->pc == 0x2442F4u) {
        ctx->pc = 0x2442F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442F0u;
        // 0x2442f4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2442F8u;
        goto label_2442f8;
    }
    ctx->pc = 0x2442F0u;
    {
        const bool branch_taken_0x2442f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2442F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2442F0u;
        // 0x2442f4: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2442f0) {
            ctx->pc = 0x244308u;
            goto label_244308;
        }
    }
    ctx->pc = 0x2442F8u;
label_2442f8:
    // 0x2442f8: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2442f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2442fc:
    // 0x2442fc: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x2442fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_244300:
    // 0x244300: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x244300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_244304:
    // 0x244304: 0x0  nop
    ctx->pc = 0x244304u;
    // NOP
label_244308:
    // 0x244308: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x244308u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24430c:
    // 0x24430c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24430cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244310:
    // 0x244310: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_244314:
    if (ctx->pc == 0x244314u) {
        ctx->pc = 0x244314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244310u;
        // 0x244314: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244318u;
        goto label_244318;
    }
    ctx->pc = 0x244310u;
    {
        const bool branch_taken_0x244310 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244310) {
            ctx->pc = 0x244314u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244310u;
            // 0x244314: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244328u;
            goto label_244328;
        }
    }
    ctx->pc = 0x244318u;
label_244318:
    // 0x244318: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x244318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24431c:
    // 0x24431c: 0x10000004  b           . + 4 + (0x4 << 2)
label_244320:
    if (ctx->pc == 0x244320u) {
        ctx->pc = 0x244320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24431Cu;
        // 0x244320: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244324u;
        goto label_244324;
    }
    ctx->pc = 0x24431Cu;
    {
        const bool branch_taken_0x24431c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24431Cu;
        // 0x244320: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24431c) {
            ctx->pc = 0x244330u;
            goto label_244330;
        }
    }
    ctx->pc = 0x244324u;
label_244324:
    // 0x244324: 0x0  nop
    ctx->pc = 0x244324u;
    // NOP
label_244328:
    // 0x244328: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x244328u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_24432c:
    // 0x24432c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x24432cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_244330:
    // 0x244330: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x244330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_244334:
    // 0x244334: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x244334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244338:
    // 0x244338: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x244338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_24433c:
    // 0x24433c: 0xc098560  jal         func_261580
label_244340:
    if (ctx->pc == 0x244340u) {
        ctx->pc = 0x244340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24433Cu;
        // 0x244340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244344u;
        goto label_244344;
    }
    ctx->pc = 0x24433Cu;
    SET_GPR_U32(ctx, 31, 0x244344u);
    ctx->pc = 0x244340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24433Cu;
    // 0x244340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x24433Cu, 0x244344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244344u;
label_244344:
    // 0x244344: 0xc098552  jal         func_261548
label_244348:
    if (ctx->pc == 0x244348u) {
        ctx->pc = 0x244348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244344u;
        // 0x244348: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24434Cu;
        goto label_24434c;
    }
    ctx->pc = 0x244344u;
    SET_GPR_U32(ctx, 31, 0x24434Cu);
    ctx->pc = 0x244348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244344u;
    // 0x244348: 0x24040028  addiu       $a0, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x244344u, 0x24434Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24434Cu;
label_24434c:
    // 0x24434c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24434cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244350:
    // 0x244350: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_244354:
    if (ctx->pc == 0x244354u) {
        ctx->pc = 0x244354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244350u;
        // 0x244354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244358u;
        goto label_244358;
    }
    ctx->pc = 0x244350u;
    {
        const bool branch_taken_0x244350 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x244354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244350u;
        // 0x244354: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244350) {
            ctx->pc = 0x244360u;
            goto label_244360;
        }
    }
    ctx->pc = 0x244358u;
label_244358:
    // 0x244358: 0x10000017  b           . + 4 + (0x17 << 2)
label_24435c:
    if (ctx->pc == 0x24435Cu) {
        ctx->pc = 0x24435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244358u;
        // 0x24435c: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244360u;
        goto label_244360;
    }
    ctx->pc = 0x244358u;
    {
        const bool branch_taken_0x244358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24435Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244358u;
        // 0x24435c: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244358) {
            ctx->pc = 0x2443B8u;
            goto label_2443b8;
        }
    }
    ctx->pc = 0x244360u;
label_244360:
    // 0x244360: 0xc048c96  jal         func_123258
label_244364:
    if (ctx->pc == 0x244364u) {
        ctx->pc = 0x244364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244360u;
        // 0x244364: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244368u;
        goto label_244368;
    }
    ctx->pc = 0x244360u;
    SET_GPR_U32(ctx, 31, 0x244368u);
    ctx->pc = 0x244364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244360u;
    // 0x244364: 0x24050028  addiu       $a1, $zero, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x244360u, 0x244368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244368u;
label_244368:
    // 0x244368: 0xfe140020  sd          $s4, 0x20($s0)
    ctx->pc = 0x244368u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 20));
label_24436c:
    // 0x24436c: 0xae130018  sw          $s3, 0x18($s0)
    ctx->pc = 0x24436cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 19));
label_244370:
    // 0x244370: 0xae110014  sw          $s1, 0x14($s0)
    ctx->pc = 0x244370u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 17));
label_244374:
    // 0x244374: 0xae120010  sw          $s2, 0x10($s0)
    ctx->pc = 0x244374u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 18));
label_244378:
    // 0x244378: 0x8e2200ac  lw          $v0, 0xAC($s1)
    ctx->pc = 0x244378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_24437c:
    // 0x24437c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_244380:
    if (ctx->pc == 0x244380u) {
        ctx->pc = 0x244380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24437Cu;
        // 0x244380: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244384u;
        goto label_244384;
    }
    ctx->pc = 0x24437Cu;
    {
        const bool branch_taken_0x24437c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24437Cu;
        // 0x244380: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24437c) {
            ctx->pc = 0x244390u;
            goto label_244390;
        }
    }
    ctx->pc = 0x244384u;
label_244384:
    // 0x244384: 0x8e2300ac  lw          $v1, 0xAC($s1)
    ctx->pc = 0x244384u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 172)));
label_244388:
    // 0x244388: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x244388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_24438c:
    // 0x24438c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x24438cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_244390:
    // 0x244390: 0x262200ac  addiu       $v0, $s1, 0xAC
    ctx->pc = 0x244390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 172));
label_244394:
    // 0x244394: 0xae3000ac  sw          $s0, 0xAC($s1)
    ctx->pc = 0x244394u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 172), GPR_U32(ctx, 16));
label_244398:
    // 0x244398: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x244398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_24439c:
    // 0x24439c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x24439cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_2443a0:
    // 0x2443a0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x2443a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2443a4:
    // 0x2443a4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x2443a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_2443a8:
    // 0x2443a8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2443a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2443ac:
    // 0x2443ac: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x2443acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
label_2443b0:
    // 0x2443b0: 0xae50000c  sw          $s0, 0xC($s2)
    ctx->pc = 0x2443b0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 16));
label_2443b4:
    // 0x2443b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2443b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2443b8:
    // 0x2443b8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2443b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2443bc:
    // 0x2443bc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2443bcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2443c0:
    // 0x2443c0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2443c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2443c4:
    // 0x2443c4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2443c4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2443c8:
    // 0x2443c8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2443c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2443cc:
    // 0x2443cc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2443ccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2443d0:
    // 0x2443d0: 0x3e00008  jr          $ra
label_2443d4:
    if (ctx->pc == 0x2443D4u) {
        ctx->pc = 0x2443D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443D0u;
        // 0x2443d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2443D8u;
        goto label_2443d8;
    }
    ctx->pc = 0x2443D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2443D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443D0u;
        // 0x2443d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2443D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2443D8u;
label_2443d8:
    // 0x2443d8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2443d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2443dc:
    // 0x2443dc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2443dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2443e0:
    // 0x2443e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2443e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2443e4:
    // 0x2443e4: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2443e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2443e8:
    // 0x2443e8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2443e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2443ec:
    // 0x2443ec: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2443ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2443f0:
    // 0x2443f0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2443f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2443f4:
    // 0x2443f4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2443f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2443f8:
    // 0x2443f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2443f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2443fc:
    // 0x2443fc: 0xc08c682  jal         func_231A08
label_244400:
    if (ctx->pc == 0x244400u) {
        ctx->pc = 0x244400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2443FCu;
        // 0x244400: 0xdc5217c0  ld          $s2, 0x17C0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 6080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244404u;
        goto label_244404;
    }
    ctx->pc = 0x2443FCu;
    SET_GPR_U32(ctx, 31, 0x244404u);
    ctx->pc = 0x244400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2443FCu;
    // 0x244400: 0xdc5217c0  ld          $s2, 0x17C0($v0) (Delay Slot)
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 2), 6080)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2443FCu, 0x244404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244404u;
label_244404:
    // 0x244404: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x244404u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244408:
    // 0x244408: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x244408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_24440c:
    // 0x24440c: 0x8c51ffb8  lw          $s1, -0x48($v0)
    ctx->pc = 0x24440cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967224)));
label_244410:
    // 0x244410: 0x12200032  beqz        $s1, . + 4 + (0x32 << 2)
label_244414:
    if (ctx->pc == 0x244414u) {
        ctx->pc = 0x244414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244410u;
        // 0x244414: 0x3c14003a  lui         $s4, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244418u;
        goto label_244418;
    }
    ctx->pc = 0x244410u;
    {
        const bool branch_taken_0x244410 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x244414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244410u;
        // 0x244414: 0x3c14003a  lui         $s4, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244410) {
            ctx->pc = 0x2444DCu;
            goto label_2444dc;
        }
    }
    ctx->pc = 0x244418u;
label_244418:
    // 0x244418: 0x10000022  b           . + 4 + (0x22 << 2)
label_24441c:
    if (ctx->pc == 0x24441Cu) {
        ctx->pc = 0x24441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244418u;
        // 0x24441c: 0x3c130024  lui         $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244420u;
        goto label_244420;
    }
    ctx->pc = 0x244418u;
    {
        const bool branch_taken_0x244418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24441Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244418u;
        // 0x24441c: 0x3c130024  lui         $s3, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244418) {
            ctx->pc = 0x2444A4u;
            goto label_2444a4;
        }
    }
    ctx->pc = 0x244420u;
label_244420:
    // 0x244420: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_244424:
    if (ctx->pc == 0x244424u) {
        ctx->pc = 0x244424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244420u;
        // 0x244424: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244428u;
        goto label_244428;
    }
    ctx->pc = 0x244420u;
    {
        const bool branch_taken_0x244420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x244424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244420u;
        // 0x244424: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244420) {
            ctx->pc = 0x244438u;
            goto label_244438;
        }
    }
    ctx->pc = 0x244428u;
label_244428:
    // 0x244428: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x244428u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_24442c:
    // 0x24442c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x24442cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_244430:
    // 0x244430: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x244430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_244434:
    // 0x244434: 0x0  nop
    ctx->pc = 0x244434u;
    // NOP
label_244438:
    // 0x244438: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x244438u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_24443c:
    // 0x24443c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x24443cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_244440:
    // 0x244440: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_244444:
    if (ctx->pc == 0x244444u) {
        ctx->pc = 0x244444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244440u;
        // 0x244444: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244448u;
        goto label_244448;
    }
    ctx->pc = 0x244440u;
    {
        const bool branch_taken_0x244440 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x244444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244440u;
        // 0x244444: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244440) {
            ctx->pc = 0x244450u;
            goto label_244450;
        }
    }
    ctx->pc = 0x244448u;
label_244448:
    // 0x244448: 0x10000002  b           . + 4 + (0x2 << 2)
label_24444c:
    if (ctx->pc == 0x24444Cu) {
        ctx->pc = 0x24444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244448u;
        // 0x24444c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244450u;
        goto label_244450;
    }
    ctx->pc = 0x244448u;
    {
        const bool branch_taken_0x244448 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24444Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244448u;
        // 0x24444c: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244448) {
            ctx->pc = 0x244454u;
            goto label_244454;
        }
    }
    ctx->pc = 0x244450u;
label_244450:
    // 0x244450: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x244450u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_244454:
    // 0x244454: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x244454u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_244458:
    // 0x244458: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x244458u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24445c:
    // 0x24445c: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x24445cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
label_244460:
    // 0x244460: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x244460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_244464:
    // 0x244464: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_244468:
    if (ctx->pc == 0x244468u) {
        ctx->pc = 0x244468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244464u;
        // 0x244468: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24446Cu;
        goto label_24446c;
    }
    ctx->pc = 0x244464u;
    {
        const bool branch_taken_0x244464 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244464) {
            ctx->pc = 0x244468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244464u;
            // 0x244468: 0x8e020014  lw          $v0, 0x14($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244480u;
            goto label_244480;
        }
    }
    ctx->pc = 0x24446Cu;
label_24446c:
    // 0x24446c: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x24446cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_244470:
    // 0x244470: 0x40f809  jalr        $v0
label_244474:
    if (ctx->pc == 0x244474u) {
        ctx->pc = 0x244474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244470u;
        // 0x244474: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244478u;
        goto label_244478;
    }
    ctx->pc = 0x244470u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244478u);
        ctx->pc = 0x244474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244470u;
        // 0x244474: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244470u, 0x244478u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244478u;
label_244478:
    // 0x244478: 0x10000008  b           . + 4 + (0x8 << 2)
label_24447c:
    if (ctx->pc == 0x24447Cu) {
        ctx->pc = 0x244480u;
        goto label_244480;
    }
    ctx->pc = 0x244478u;
    {
        const bool branch_taken_0x244478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244478) {
            ctx->pc = 0x24449Cu;
            goto label_24449c;
        }
    }
    ctx->pc = 0x244480u;
label_244480:
    // 0x244480: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x244480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244484:
    // 0x244484: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244484u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244488:
    // 0x244488: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x244488u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24448c:
    // 0x24448c: 0x8c45000c  lw          $a1, 0xC($v0)
    ctx->pc = 0x24448cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_244490:
    // 0x244490: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x244490u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244494:
    // 0x244494: 0xc090d8e  jal         func_243638
label_244498:
    if (ctx->pc == 0x244498u) {
        ctx->pc = 0x244498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244494u;
        // 0x244498: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24449Cu;
        goto label_24449c;
    }
    ctx->pc = 0x244494u;
    SET_GPR_U32(ctx, 31, 0x24449Cu);
    ctx->pc = 0x244498u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244494u;
    // 0x244498: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243638u, 0x244494u, 0x24449Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24449Cu;
label_24449c:
    // 0x24449c: 0xc098560  jal         func_261580
label_2444a0:
    if (ctx->pc == 0x2444A0u) {
        ctx->pc = 0x2444A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24449Cu;
        // 0x2444a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444A4u;
        goto label_2444a4;
    }
    ctx->pc = 0x24449Cu;
    SET_GPR_U32(ctx, 31, 0x2444A4u);
    ctx->pc = 0x2444A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24449Cu;
    // 0x2444a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x24449Cu, 0x2444A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444A4u;
label_2444a4:
    // 0x2444a4: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x2444a4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_2444a8:
    // 0x2444a8: 0x52000008  beql        $s0, $zero, . + 4 + (0x8 << 2)
label_2444ac:
    if (ctx->pc == 0x2444ACu) {
        ctx->pc = 0x2444ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444A8u;
        // 0x2444ac: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444B0u;
        goto label_2444b0;
    }
    ctx->pc = 0x2444A8u;
    {
        const bool branch_taken_0x2444a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2444a8) {
            ctx->pc = 0x2444ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2444A8u;
            // 0x2444ac: 0x8e310010  lw          $s1, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2444CCu;
            goto label_2444cc;
        }
    }
    ctx->pc = 0x2444B0u;
label_2444b0:
    // 0x2444b0: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x2444b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_2444b4:
    // 0x2444b4: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x2444b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
label_2444b8:
    // 0x2444b8: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x2444b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_2444bc:
    // 0x2444bc: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2444bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2444c0:
    // 0x2444c0: 0x5440ffd7  bnel        $v0, $zero, . + 4 + (-0x29 << 2)
label_2444c4:
    if (ctx->pc == 0x2444C4u) {
        ctx->pc = 0x2444C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444C0u;
        // 0x2444c4: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444C8u;
        goto label_2444c8;
    }
    ctx->pc = 0x2444C0u;
    {
        const bool branch_taken_0x2444c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2444c0) {
            ctx->pc = 0x2444C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2444C0u;
            // 0x2444c4: 0x8e030008  lw          $v1, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244420u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244420;
        }
    }
    ctx->pc = 0x2444C8u;
label_2444c8:
    // 0x2444c8: 0x8e310010  lw          $s1, 0x10($s1)
    ctx->pc = 0x2444c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2444cc:
    // 0x2444cc: 0x5620fff6  bnel        $s1, $zero, . + 4 + (-0xA << 2)
label_2444d0:
    if (ctx->pc == 0x2444D0u) {
        ctx->pc = 0x2444D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444CCu;
        // 0x2444d0: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444D4u;
        goto label_2444d4;
    }
    ctx->pc = 0x2444CCu;
    {
        const bool branch_taken_0x2444cc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2444cc) {
            ctx->pc = 0x2444D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2444CCu;
            // 0x2444d0: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2444A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2444a8;
        }
    }
    ctx->pc = 0x2444D4u;
label_2444d4:
    // 0x2444d4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2444d8:
    if (ctx->pc == 0x2444D8u) {
        ctx->pc = 0x2444DCu;
        goto label_2444dc;
    }
    ctx->pc = 0x2444D4u;
    {
        const bool branch_taken_0x2444d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2444d4) {
            ctx->pc = 0x2444E0u;
            goto label_2444e0;
        }
    }
    ctx->pc = 0x2444DCu;
label_2444dc:
    // 0x2444dc: 0x3c130024  lui         $s3, 0x24
    ctx->pc = 0x2444dcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)36 << 16));
label_2444e0:
    // 0x2444e0: 0xc08c698  jal         func_231A60
label_2444e4:
    if (ctx->pc == 0x2444E4u) {
        ctx->pc = 0x2444E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2444E0u;
        // 0x2444e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2444E8u;
        goto label_2444e8;
    }
    ctx->pc = 0x2444E0u;
    SET_GPR_U32(ctx, 31, 0x2444E8u);
    ctx->pc = 0x2444E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2444E0u;
    // 0x2444e4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2444E0u, 0x2444E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2444E8u;
label_2444e8:
    // 0x2444e8: 0x2684ff98  addiu       $a0, $s4, -0x68
    ctx->pc = 0x2444e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967192));
label_2444ec:
    // 0x2444ec: 0x266643d8  addiu       $a2, $s3, 0x43D8
    ctx->pc = 0x2444ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 17368));
label_2444f0:
    // 0x2444f0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2444f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2444f4:
    // 0x2444f4: 0x24050064  addiu       $a1, $zero, 0x64
    ctx->pc = 0x2444f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_2444f8:
    // 0x2444f8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2444f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2444fc:
    // 0x2444fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2444fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244500:
    // 0x244500: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x244500u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_244504:
    // 0x244504: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x244504u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_244508:
    // 0x244508: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x244508u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24450c:
    // 0x24450c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24450cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_244510:
    // 0x244510: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244510u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_244514:
    // 0x244514: 0x808a058  j           func_228160
label_244518:
    if (ctx->pc == 0x244518u) {
        ctx->pc = 0x244518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244514u;
        // 0x244518: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24451Cu;
        goto label_24451c;
    }
    ctx->pc = 0x244514u;
    ctx->pc = 0x244518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244514u;
    // 0x244518: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    sub_00228160_0x228160(rdram, ctx, runtime); return;
    ctx->pc = 0x24451Cu;
label_24451c:
    // 0x24451c: 0x0  nop
    ctx->pc = 0x24451cu;
    // NOP
label_244520:
    // 0x244520: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x244520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_244524:
    // 0x244524: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x244524u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_244528:
    // 0x244528: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x244528u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_24452c:
    // 0x24452c: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x24452cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_244530:
    // 0x244530: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x244530u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_244534:
    // 0x244534: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x244534u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_244538:
    // 0x244538: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x244538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_24453c:
    // 0x24453c: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x24453cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_244540:
    // 0x244540: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x244540u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_244544:
    // 0x244544: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x244544u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_244548:
    // 0x244548: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x244548u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_24454c:
    // 0x24454c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24454cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_244550:
    // 0x244550: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x244550u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_244554:
    // 0x244554: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x244554u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_244558:
    // 0x244558: 0x16400009  bnez        $s2, . + 4 + (0x9 << 2)
label_24455c:
    if (ctx->pc == 0x24455Cu) {
        ctx->pc = 0x24455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244558u;
        // 0x24455c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244560u;
        goto label_244560;
    }
    ctx->pc = 0x244558u;
    {
        const bool branch_taken_0x244558 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x24455Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244558u;
        // 0x24455c: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244558) {
            ctx->pc = 0x244580u;
            goto label_244580;
        }
    }
    ctx->pc = 0x244560u;
label_244560:
    // 0x244560: 0xc098552  jal         func_261548
label_244564:
    if (ctx->pc == 0x244564u) {
        ctx->pc = 0x244564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244560u;
        // 0x244564: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244568u;
        goto label_244568;
    }
    ctx->pc = 0x244560u;
    SET_GPR_U32(ctx, 31, 0x244568u);
    ctx->pc = 0x244564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244560u;
    // 0x244564: 0x24040018  addiu       $a0, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x244560u, 0x244568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244568u;
label_244568:
    // 0x244568: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244568u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24456c:
    // 0x24456c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_244570:
    if (ctx->pc == 0x244570u) {
        ctx->pc = 0x244570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24456Cu;
        // 0x244570: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244574u;
        goto label_244574;
    }
    ctx->pc = 0x24456Cu;
    {
        const bool branch_taken_0x24456c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x244570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24456Cu;
        // 0x244570: 0xae300008  sw          $s0, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24456c) {
            ctx->pc = 0x244580u;
            goto label_244580;
        }
    }
    ctx->pc = 0x244574u;
label_244574:
    // 0x244574: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x244574u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244578:
    // 0x244578: 0xc048c96  jal         func_123258
label_24457c:
    if (ctx->pc == 0x24457Cu) {
        ctx->pc = 0x24457Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244578u;
        // 0x24457c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244580u;
        goto label_244580;
    }
    ctx->pc = 0x244578u;
    SET_GPR_U32(ctx, 31, 0x244580u);
    ctx->pc = 0x24457Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244578u;
    // 0x24457c: 0x24050018  addiu       $a1, $zero, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x244578u, 0x244580u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244580u;
label_244580:
    // 0x244580: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x244580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244584:
    // 0x244584: 0x16420025  bne         $s2, $v0, . + 4 + (0x25 << 2)
label_244588:
    if (ctx->pc == 0x244588u) {
        ctx->pc = 0x24458Cu;
        goto label_24458c;
    }
    ctx->pc = 0x244584u;
    {
        const bool branch_taken_0x244584 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        if (branch_taken_0x244584) {
            ctx->pc = 0x24461Cu;
            goto label_24461c;
        }
    }
    ctx->pc = 0x24458Cu;
label_24458c:
    // 0x24458c: 0x12000023  beqz        $s0, . + 4 + (0x23 << 2)
label_244590:
    if (ctx->pc == 0x244590u) {
        ctx->pc = 0x244590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24458Cu;
        // 0x244590: 0x3c06003a  lui         $a2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244594u;
        goto label_244594;
    }
    ctx->pc = 0x24458Cu;
    {
        const bool branch_taken_0x24458c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x244590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24458Cu;
        // 0x244590: 0x3c06003a  lui         $a2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24458c) {
            ctx->pc = 0x24461Cu;
            goto label_24461c;
        }
    }
    ctx->pc = 0x244594u;
label_244594:
    // 0x244594: 0x96040016  lhu         $a0, 0x16($s0)
    ctx->pc = 0x244594u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_244598:
    // 0x244598: 0x24c5fee8  addiu       $a1, $a2, -0x118
    ctx->pc = 0x244598u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967016));
label_24459c:
    // 0x24459c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24459cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2445a0:
    // 0x2445a0: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x2445a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_2445a4:
    // 0x2445a4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2445a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2445a8:
    // 0x2445a8: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
label_2445ac:
    if (ctx->pc == 0x2445ACu) {
        ctx->pc = 0x2445ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445A8u;
        // 0x2445ac: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445B0u;
        goto label_2445b0;
    }
    ctx->pc = 0x2445A8u;
    {
        const bool branch_taken_0x2445a8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2445ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445A8u;
        // 0x2445ac: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445a8) {
            ctx->pc = 0x244600u;
            goto label_244600;
        }
    }
    ctx->pc = 0x2445B0u;
label_2445b0:
    // 0x2445b0: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x2445b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
label_2445b4:
    // 0x2445b4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2445b8:
    if (ctx->pc == 0x2445B8u) {
        ctx->pc = 0x2445B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445B4u;
        // 0x2445b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445BCu;
        goto label_2445bc;
    }
    ctx->pc = 0x2445B4u;
    {
        const bool branch_taken_0x2445b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445B4u;
        // 0x2445b8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445b4) {
            ctx->pc = 0x2445CCu;
            goto label_2445cc;
        }
    }
    ctx->pc = 0x2445BCu;
label_2445bc:
    // 0x2445bc: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_2445c0:
    if (ctx->pc == 0x2445C0u) {
        ctx->pc = 0x2445C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445BCu;
        // 0x2445c0: 0x8cc2fee8  lw          $v0, -0x118($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967016)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445C4u;
        goto label_2445c4;
    }
    ctx->pc = 0x2445BCu;
    {
        const bool branch_taken_0x2445bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2445C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445BCu;
        // 0x2445c0: 0x8cc2fee8  lw          $v0, -0x118($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967016)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445bc) {
            ctx->pc = 0x2445E8u;
            goto label_2445e8;
        }
    }
    ctx->pc = 0x2445C4u;
label_2445c4:
    // 0x2445c4: 0x10000015  b           . + 4 + (0x15 << 2)
label_2445c8:
    if (ctx->pc == 0x2445C8u) {
        ctx->pc = 0x2445CCu;
        goto label_2445cc;
    }
    ctx->pc = 0x2445C4u;
    {
        const bool branch_taken_0x2445c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2445c4) {
            ctx->pc = 0x24461Cu;
            goto label_24461c;
        }
    }
    ctx->pc = 0x2445CCu;
label_2445cc:
    // 0x2445cc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2445ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2445d0:
    // 0x2445d0: 0x1082000f  beq         $a0, $v0, . + 4 + (0xF << 2)
label_2445d4:
    if (ctx->pc == 0x2445D4u) {
        ctx->pc = 0x2445D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445D0u;
        // 0x2445d4: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445D8u;
        goto label_2445d8;
    }
    ctx->pc = 0x2445D0u;
    {
        const bool branch_taken_0x2445d0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2445D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445D0u;
        // 0x2445d4: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445d0) {
            ctx->pc = 0x244610u;
            goto label_244610;
        }
    }
    ctx->pc = 0x2445D8u;
label_2445d8:
    // 0x2445d8: 0x50820006  beql        $a0, $v0, . + 4 + (0x6 << 2)
label_2445dc:
    if (ctx->pc == 0x2445DCu) {
        ctx->pc = 0x2445DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445D8u;
        // 0x2445dc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445E0u;
        goto label_2445e0;
    }
    ctx->pc = 0x2445D8u;
    {
        const bool branch_taken_0x2445d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2445d8) {
            ctx->pc = 0x2445DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2445D8u;
            // 0x2445dc: 0x8ca20008  lw          $v0, 0x8($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2445F4u;
            goto label_2445f4;
        }
    }
    ctx->pc = 0x2445E0u;
label_2445e0:
    // 0x2445e0: 0x1000000e  b           . + 4 + (0xE << 2)
label_2445e4:
    if (ctx->pc == 0x2445E4u) {
        ctx->pc = 0x2445E8u;
        goto label_2445e8;
    }
    ctx->pc = 0x2445E0u;
    {
        const bool branch_taken_0x2445e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2445e0) {
            ctx->pc = 0x24461Cu;
            goto label_24461c;
        }
    }
    ctx->pc = 0x2445E8u;
label_2445e8:
    // 0x2445e8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2445e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2445ec:
    // 0x2445ec: 0x1000000b  b           . + 4 + (0xB << 2)
label_2445f0:
    if (ctx->pc == 0x2445F0u) {
        ctx->pc = 0x2445F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445ECu;
        // 0x2445f0: 0xacc2fee8  sw          $v0, -0x118($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294967016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2445F4u;
        goto label_2445f4;
    }
    ctx->pc = 0x2445ECu;
    {
        const bool branch_taken_0x2445ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445ECu;
        // 0x2445f0: 0xacc2fee8  sw          $v0, -0x118($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294967016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445ec) {
            ctx->pc = 0x24461Cu;
            goto label_24461c;
        }
    }
    ctx->pc = 0x2445F4u;
label_2445f4:
    // 0x2445f4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2445f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2445f8:
    // 0x2445f8: 0x10000008  b           . + 4 + (0x8 << 2)
label_2445fc:
    if (ctx->pc == 0x2445FCu) {
        ctx->pc = 0x2445FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445F8u;
        // 0x2445fc: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244600u;
        goto label_244600;
    }
    ctx->pc = 0x2445F8u;
    {
        const bool branch_taken_0x2445f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2445FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2445F8u;
        // 0x2445fc: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2445f8) {
            ctx->pc = 0x24461Cu;
            goto label_24461c;
        }
    }
    ctx->pc = 0x244600u;
label_244600:
    // 0x244600: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x244600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_244604:
    // 0x244604: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x244604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_244608:
    // 0x244608: 0x10000004  b           . + 4 + (0x4 << 2)
label_24460c:
    if (ctx->pc == 0x24460Cu) {
        ctx->pc = 0x24460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244608u;
        // 0x24460c: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244610u;
        goto label_244610;
    }
    ctx->pc = 0x244608u;
    {
        const bool branch_taken_0x244608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24460Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244608u;
        // 0x24460c: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244608) {
            ctx->pc = 0x24461Cu;
            goto label_24461c;
        }
    }
    ctx->pc = 0x244610u;
label_244610:
    // 0x244610: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x244610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_244614:
    // 0x244614: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x244614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_244618:
    // 0x244618: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x244618u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_24461c:
    // 0x24461c: 0xc08c682  jal         func_231A08
label_244620:
    if (ctx->pc == 0x244620u) {
        ctx->pc = 0x244624u;
        goto label_244624;
    }
    ctx->pc = 0x24461Cu;
    SET_GPR_U32(ctx, 31, 0x244624u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x24461Cu, 0x244624u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244624u;
label_244624:
    // 0x244624: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
label_244628:
    if (ctx->pc == 0x244628u) {
        ctx->pc = 0x244628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244624u;
        // 0x244628: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24462Cu;
        goto label_24462c;
    }
    ctx->pc = 0x244624u;
    {
        const bool branch_taken_0x244624 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x244628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244624u;
        // 0x244628: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244624) {
            ctx->pc = 0x244640u;
            goto label_244640;
        }
    }
    ctx->pc = 0x24462Cu;
label_24462c:
    // 0x24462c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x24462cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244630:
    // 0x244630: 0xc090a42  jal         func_242908
label_244634:
    if (ctx->pc == 0x244634u) {
        ctx->pc = 0x244634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244630u;
        // 0x244634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244638u;
        goto label_244638;
    }
    ctx->pc = 0x244630u;
    SET_GPR_U32(ctx, 31, 0x244638u);
    ctx->pc = 0x244634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244630u;
    // 0x244634: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242908u, 0x244630u, 0x244638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244638u;
label_244638:
    // 0x244638: 0x10000008  b           . + 4 + (0x8 << 2)
label_24463c:
    if (ctx->pc == 0x24463Cu) {
        ctx->pc = 0x24463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244638u;
        // 0x24463c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244640u;
        goto label_244640;
    }
    ctx->pc = 0x244638u;
    {
        const bool branch_taken_0x244638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24463Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244638u;
        // 0x24463c: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244638) {
            ctx->pc = 0x24465Cu;
            goto label_24465c;
        }
    }
    ctx->pc = 0x244640u;
label_244640:
    // 0x244640: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x244640u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_244644:
    // 0x244644: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x244644u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_244648:
    // 0x244648: 0x2c0402d  daddu       $t0, $s6, $zero
    ctx->pc = 0x244648u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24464c:
    // 0x24464c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x24464cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244650:
    // 0x244650: 0xc090b16  jal         func_242C58
label_244654:
    if (ctx->pc == 0x244654u) {
        ctx->pc = 0x244654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244650u;
        // 0x244654: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244658u;
        goto label_244658;
    }
    ctx->pc = 0x244650u;
    SET_GPR_U32(ctx, 31, 0x244658u);
    ctx->pc = 0x244654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244650u;
    // 0x244654: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242C58u, 0x244650u, 0x244658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244658u;
label_244658:
    // 0x244658: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x244658u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24465c:
    // 0x24465c: 0x16400038  bnez        $s2, . + 4 + (0x38 << 2)
label_244660:
    if (ctx->pc == 0x244660u) {
        ctx->pc = 0x244660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24465Cu;
        // 0x244660: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244664u;
        goto label_244664;
    }
    ctx->pc = 0x24465Cu;
    {
        const bool branch_taken_0x24465c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x244660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24465Cu;
        // 0x244660: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24465c) {
            ctx->pc = 0x244740u;
            goto label_244740;
        }
    }
    ctx->pc = 0x244664u;
label_244664:
    // 0x244664: 0x12000036  beqz        $s0, . + 4 + (0x36 << 2)
label_244668:
    if (ctx->pc == 0x244668u) {
        ctx->pc = 0x24466Cu;
        goto label_24466c;
    }
    ctx->pc = 0x244664u;
    {
        const bool branch_taken_0x244664 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x244664) {
            ctx->pc = 0x244740u;
            goto label_244740;
        }
    }
    ctx->pc = 0x24466Cu;
label_24466c:
    // 0x24466c: 0x12600005  beqz        $s3, . + 4 + (0x5 << 2)
label_244670:
    if (ctx->pc == 0x244670u) {
        ctx->pc = 0x244670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24466Cu;
        // 0x244670: 0x3c06003a  lui         $a2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244674u;
        goto label_244674;
    }
    ctx->pc = 0x24466Cu;
    {
        const bool branch_taken_0x24466c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x244670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24466Cu;
        // 0x244670: 0x3c06003a  lui         $a2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24466c) {
            ctx->pc = 0x244684u;
            goto label_244684;
        }
    }
    ctx->pc = 0x244674u;
label_244674:
    // 0x244674: 0xc098560  jal         func_261580
label_244678:
    if (ctx->pc == 0x244678u) {
        ctx->pc = 0x244678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244674u;
        // 0x244678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24467Cu;
        goto label_24467c;
    }
    ctx->pc = 0x244674u;
    SET_GPR_U32(ctx, 31, 0x24467Cu);
    ctx->pc = 0x244678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244674u;
    // 0x244678: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x244674u, 0x24467Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24467Cu;
label_24467c:
    // 0x24467c: 0x10000030  b           . + 4 + (0x30 << 2)
label_244680:
    if (ctx->pc == 0x244680u) {
        ctx->pc = 0x244684u;
        goto label_244684;
    }
    ctx->pc = 0x24467Cu;
    {
        const bool branch_taken_0x24467c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24467c) {
            ctx->pc = 0x244740u;
            goto label_244740;
        }
    }
    ctx->pc = 0x244684u;
label_244684:
    // 0x244684: 0x96040016  lhu         $a0, 0x16($s0)
    ctx->pc = 0x244684u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 22)));
label_244688:
    // 0x244688: 0x24c5fee8  addiu       $a1, $a2, -0x118
    ctx->pc = 0x244688u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967016));
label_24468c:
    // 0x24468c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x24468cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_244690:
    // 0x244690: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x244690u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_244694:
    // 0x244694: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x244694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_244698:
    // 0x244698: 0x10830017  beq         $a0, $v1, . + 4 + (0x17 << 2)
label_24469c:
    if (ctx->pc == 0x24469Cu) {
        ctx->pc = 0x24469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244698u;
        // 0x24469c: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446A0u;
        goto label_2446a0;
    }
    ctx->pc = 0x244698u;
    {
        const bool branch_taken_0x244698 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x24469Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244698u;
        // 0x24469c: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244698) {
            ctx->pc = 0x2446F8u;
            goto label_2446f8;
        }
    }
    ctx->pc = 0x2446A0u;
label_2446a0:
    // 0x2446a0: 0x28820007  slti        $v0, $a0, 0x7
    ctx->pc = 0x2446a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
label_2446a4:
    // 0x2446a4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2446a8:
    if (ctx->pc == 0x2446A8u) {
        ctx->pc = 0x2446A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446A4u;
        // 0x2446a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446ACu;
        goto label_2446ac;
    }
    ctx->pc = 0x2446A4u;
    {
        const bool branch_taken_0x2446a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2446A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446A4u;
        // 0x2446a8: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446a4) {
            ctx->pc = 0x2446BCu;
            goto label_2446bc;
        }
    }
    ctx->pc = 0x2446ACu;
label_2446ac:
    // 0x2446ac: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_2446b0:
    if (ctx->pc == 0x2446B0u) {
        ctx->pc = 0x2446B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446ACu;
        // 0x2446b0: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446B4u;
        goto label_2446b4;
    }
    ctx->pc = 0x2446ACu;
    {
        const bool branch_taken_0x2446ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2446B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446ACu;
        // 0x2446b0: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446ac) {
            ctx->pc = 0x2446D8u;
            goto label_2446d8;
        }
    }
    ctx->pc = 0x2446B4u;
label_2446b4:
    // 0x2446b4: 0x10000019  b           . + 4 + (0x19 << 2)
label_2446b8:
    if (ctx->pc == 0x2446B8u) {
        ctx->pc = 0x2446B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446B4u;
        // 0x2446b8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446BCu;
        goto label_2446bc;
    }
    ctx->pc = 0x2446B4u;
    {
        const bool branch_taken_0x2446b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2446B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446B4u;
        // 0x2446b8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446b4) {
            ctx->pc = 0x24471Cu;
            goto label_24471c;
        }
    }
    ctx->pc = 0x2446BCu;
label_2446bc:
    // 0x2446bc: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x2446bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2446c0:
    // 0x2446c0: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
label_2446c4:
    if (ctx->pc == 0x2446C4u) {
        ctx->pc = 0x2446C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446C0u;
        // 0x2446c4: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446C8u;
        goto label_2446c8;
    }
    ctx->pc = 0x2446C0u;
    {
        const bool branch_taken_0x2446c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2446C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446C0u;
        // 0x2446c4: 0x24020017  addiu       $v0, $zero, 0x17 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446c0) {
            ctx->pc = 0x244708u;
            goto label_244708;
        }
    }
    ctx->pc = 0x2446C8u;
label_2446c8:
    // 0x2446c8: 0x10820007  beq         $a0, $v0, . + 4 + (0x7 << 2)
label_2446cc:
    if (ctx->pc == 0x2446CCu) {
        ctx->pc = 0x2446CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446C8u;
        // 0x2446cc: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446D0u;
        goto label_2446d0;
    }
    ctx->pc = 0x2446C8u;
    {
        const bool branch_taken_0x2446c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2446CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446C8u;
        // 0x2446cc: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446c8) {
            ctx->pc = 0x2446E8u;
            goto label_2446e8;
        }
    }
    ctx->pc = 0x2446D0u;
label_2446d0:
    // 0x2446d0: 0x10000012  b           . + 4 + (0x12 << 2)
label_2446d4:
    if (ctx->pc == 0x2446D4u) {
        ctx->pc = 0x2446D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446D0u;
        // 0x2446d4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446D8u;
        goto label_2446d8;
    }
    ctx->pc = 0x2446D0u;
    {
        const bool branch_taken_0x2446d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2446D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446D0u;
        // 0x2446d4: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446d0) {
            ctx->pc = 0x24471Cu;
            goto label_24471c;
        }
    }
    ctx->pc = 0x2446D8u;
label_2446d8:
    // 0x2446d8: 0x8cc2fee8  lw          $v0, -0x118($a2)
    ctx->pc = 0x2446d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294967016)));
label_2446dc:
    // 0x2446dc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2446dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2446e0:
    // 0x2446e0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2446e4:
    if (ctx->pc == 0x2446E4u) {
        ctx->pc = 0x2446E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446E0u;
        // 0x2446e4: 0xacc2fee8  sw          $v0, -0x118($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294967016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446E8u;
        goto label_2446e8;
    }
    ctx->pc = 0x2446E0u;
    {
        const bool branch_taken_0x2446e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2446E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446E0u;
        // 0x2446e4: 0xacc2fee8  sw          $v0, -0x118($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4294967016), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446e0) {
            ctx->pc = 0x244714u;
            goto label_244714;
        }
    }
    ctx->pc = 0x2446E8u;
label_2446e8:
    // 0x2446e8: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x2446e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
label_2446ec:
    // 0x2446ec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2446ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2446f0:
    // 0x2446f0: 0x10000008  b           . + 4 + (0x8 << 2)
label_2446f4:
    if (ctx->pc == 0x2446F4u) {
        ctx->pc = 0x2446F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446F0u;
        // 0x2446f4: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2446F8u;
        goto label_2446f8;
    }
    ctx->pc = 0x2446F0u;
    {
        const bool branch_taken_0x2446f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2446F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2446F0u;
        // 0x2446f4: 0xaca20008  sw          $v0, 0x8($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2446f0) {
            ctx->pc = 0x244714u;
            goto label_244714;
        }
    }
    ctx->pc = 0x2446F8u;
label_2446f8:
    // 0x2446f8: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x2446f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
label_2446fc:
    // 0x2446fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2446fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_244700:
    // 0x244700: 0x10000004  b           . + 4 + (0x4 << 2)
label_244704:
    if (ctx->pc == 0x244704u) {
        ctx->pc = 0x244704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244700u;
        // 0x244704: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244708u;
        goto label_244708;
    }
    ctx->pc = 0x244700u;
    {
        const bool branch_taken_0x244700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244700u;
        // 0x244704: 0xaca2000c  sw          $v0, 0xC($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244700) {
            ctx->pc = 0x244714u;
            goto label_244714;
        }
    }
    ctx->pc = 0x244708u;
label_244708:
    // 0x244708: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x244708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_24470c:
    // 0x24470c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x24470cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_244710:
    // 0x244710: 0xaca20010  sw          $v0, 0x10($a1)
    ctx->pc = 0x244710u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
label_244714:
    // 0x244714: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x244714u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_244718:
    // 0x244718: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x244718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_24471c:
    // 0x24471c: 0x2463ffd0  addiu       $v1, $v1, -0x30
    ctx->pc = 0x24471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_244720:
    // 0x244720: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x244720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_244724:
    // 0x244724: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x244724u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_244728:
    // 0x244728: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_24472c:
    // 0x24472c: 0xc08c0ee  jal         func_2303B8
label_244730:
    if (ctx->pc == 0x244730u) {
        ctx->pc = 0x244730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24472Cu;
        // 0x244730: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244734u;
        goto label_244734;
    }
    ctx->pc = 0x24472Cu;
    SET_GPR_U32(ctx, 31, 0x244734u);
    ctx->pc = 0x244730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24472Cu;
    // 0x244730: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2303B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2303B8u, 0x24472Cu, 0x244734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244734u;
label_244734:
    // 0x244734: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x244734u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_244738:
    // 0x244738: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x244738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_24473c:
    // 0x24473c: 0xa6220002  sh          $v0, 0x2($s1)
    ctx->pc = 0x24473cu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 2), (uint16_t)GPR_U32(ctx, 2));
label_244740:
    // 0x244740: 0xc08c698  jal         func_231A60
label_244744:
    if (ctx->pc == 0x244744u) {
        ctx->pc = 0x244744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244740u;
        // 0x244744: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244748u;
        goto label_244748;
    }
    ctx->pc = 0x244740u;
    SET_GPR_U32(ctx, 31, 0x244748u);
    ctx->pc = 0x244744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244740u;
    // 0x244744: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x244740u, 0x244748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244748u;
label_244748:
    // 0x244748: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x244748u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24474c:
    // 0x24474c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x24474cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_244750:
    // 0x244750: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x244750u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_244754:
    // 0x244754: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x244754u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_244758:
    // 0x244758: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x244758u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24475c:
    // 0x24475c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x24475cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_244760:
    // 0x244760: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x244760u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_244764:
    // 0x244764: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x244764u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_244768:
    // 0x244768: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x244768u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_24476c:
    // 0x24476c: 0x3e00008  jr          $ra
label_244770:
    if (ctx->pc == 0x244770u) {
        ctx->pc = 0x244770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24476Cu;
        // 0x244770: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244774u;
        goto label_244774;
    }
    ctx->pc = 0x24476Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24476Cu;
        // 0x244770: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24476Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244774u;
label_244774:
    // 0x244774: 0x0  nop
    ctx->pc = 0x244774u;
    // NOP
label_244778:
    // 0x244778: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x244778u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_24477c:
    // 0x24477c: 0xffa50118  sd          $a1, 0x118($sp)
    ctx->pc = 0x24477cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 5));
label_244780:
    // 0x244780: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x244780u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
label_244784:
    // 0x244784: 0x24050024  addiu       $a1, $zero, 0x24
    ctx->pc = 0x244784u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_244788:
    // 0x244788: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x244788u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24478c:
    // 0x24478c: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x24478cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
label_244790:
    // 0x244790: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x244790u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
label_244794:
    // 0x244794: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x244794u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244798:
    // 0x244798: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x244798u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
label_24479c:
    // 0x24479c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x24479cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2447a0:
    // 0x2447a0: 0xffb30070  sd          $s3, 0x70($sp)
    ctx->pc = 0x2447a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
label_2447a4:
    // 0x2447a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2447a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2447a8:
    // 0x2447a8: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x2447a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
label_2447ac:
    // 0x2447ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2447acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2447b0:
    // 0x2447b0: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x2447b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
label_2447b4:
    // 0x2447b4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2447b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2447b8:
    // 0x2447b8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2447b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2447bc:
    // 0x2447bc: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2447bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2447c0:
    // 0x2447c0: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x2447c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
label_2447c4:
    // 0x2447c4: 0xffa60120  sd          $a2, 0x120($sp)
    ctx->pc = 0x2447c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 6));
label_2447c8:
    // 0x2447c8: 0x8fb70118  lw          $s7, 0x118($sp)
    ctx->pc = 0x2447c8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
label_2447cc:
    // 0x2447cc: 0xffa70128  sd          $a3, 0x128($sp)
    ctx->pc = 0x2447ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 7));
label_2447d0:
    // 0x2447d0: 0xffa80130  sd          $t0, 0x130($sp)
    ctx->pc = 0x2447d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 8));
label_2447d4:
    // 0x2447d4: 0xffa90138  sd          $t1, 0x138($sp)
    ctx->pc = 0x2447d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 9));
label_2447d8:
    // 0x2447d8: 0xffaa0140  sd          $t2, 0x140($sp)
    ctx->pc = 0x2447d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 10));
label_2447dc:
    // 0x2447dc: 0xffab0148  sd          $t3, 0x148($sp)
    ctx->pc = 0x2447dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 11));
label_2447e0:
    // 0x2447e0: 0xc048c96  jal         func_123258
label_2447e4:
    if (ctx->pc == 0x2447E4u) {
        ctx->pc = 0x2447E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447E0u;
        // 0x2447e4: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447E8u;
        goto label_2447e8;
    }
    ctx->pc = 0x2447E0u;
    SET_GPR_U32(ctx, 31, 0x2447E8u);
    ctx->pc = 0x2447E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2447E0u;
    // 0x2447e4: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x2447E0u, 0x2447E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2447E8u;
label_2447e8:
    // 0x2447e8: 0x12a001b1  beqz        $s5, . + 4 + (0x1B1 << 2)
label_2447ec:
    if (ctx->pc == 0x2447ECu) {
        ctx->pc = 0x2447ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447E8u;
        // 0x2447ec: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2447F0u;
        goto label_2447f0;
    }
    ctx->pc = 0x2447E8u;
    {
        const bool branch_taken_0x2447e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447E8u;
        // 0x2447ec: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447e8) {
            ctx->pc = 0x244EB0u;
            goto label_244eb0;
        }
    }
    ctx->pc = 0x2447F0u;
label_2447f0:
    // 0x2447f0: 0x8ea2000c  lw          $v0, 0xC($s5)
    ctx->pc = 0x2447f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_2447f4:
    // 0x2447f4: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2447f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2447f8:
    // 0x2447f8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2447fc:
    if (ctx->pc == 0x2447FCu) {
        ctx->pc = 0x2447FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447F8u;
        // 0x2447fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244800u;
        goto label_244800;
    }
    ctx->pc = 0x2447F8u;
    {
        const bool branch_taken_0x2447f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2447FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2447F8u;
        // 0x2447fc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2447f8) {
            ctx->pc = 0x24481Cu;
            goto label_24481c;
        }
    }
    ctx->pc = 0x244800u;
label_244800:
    // 0x244800: 0xc08acea  jal         func_22B3A8
label_244804:
    if (ctx->pc == 0x244804u) {
        ctx->pc = 0x244804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244800u;
        // 0x244804: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244808u;
        goto label_244808;
    }
    ctx->pc = 0x244800u;
    SET_GPR_U32(ctx, 31, 0x244808u);
    ctx->pc = 0x244804u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244800u;
    // 0x244804: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3A8u, 0x244800u, 0x244808u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244808u;
label_244808:
    // 0x244808: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x244808u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24480c:
    // 0x24480c: 0x56a00004  bnel        $s5, $zero, . + 4 + (0x4 << 2)
label_244810:
    if (ctx->pc == 0x244810u) {
        ctx->pc = 0x244810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24480Cu;
        // 0x244810: 0x96a20012  lhu         $v0, 0x12($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244814u;
        goto label_244814;
    }
    ctx->pc = 0x24480Cu;
    {
        const bool branch_taken_0x24480c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        if (branch_taken_0x24480c) {
            ctx->pc = 0x244810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24480Cu;
            // 0x244810: 0x96a20012  lhu         $v0, 0x12($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244820u;
            goto label_244820;
        }
    }
    ctx->pc = 0x244814u;
label_244814:
    // 0x244814: 0x100001a6  b           . + 4 + (0x1A6 << 2)
label_244818:
    if (ctx->pc == 0x244818u) {
        ctx->pc = 0x244818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244814u;
        // 0x244818: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24481Cu;
        goto label_24481c;
    }
    ctx->pc = 0x244814u;
    {
        const bool branch_taken_0x244814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244814u;
        // 0x244818: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244814) {
            ctx->pc = 0x244EB0u;
            goto label_244eb0;
        }
    }
    ctx->pc = 0x24481Cu;
label_24481c:
    // 0x24481c: 0x96a20012  lhu         $v0, 0x12($s5)
    ctx->pc = 0x24481cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 18)));
label_244820:
    // 0x244820: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x244820u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_244824:
    // 0x244824: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_244828:
    if (ctx->pc == 0x244828u) {
        ctx->pc = 0x244828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244824u;
        // 0x244828: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24482Cu;
        goto label_24482c;
    }
    ctx->pc = 0x244824u;
    {
        const bool branch_taken_0x244824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244824) {
            ctx->pc = 0x244828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244824u;
            // 0x244828: 0x8ea40018  lw          $a0, 0x18($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24483Cu;
            goto label_24483c;
        }
    }
    ctx->pc = 0x24482Cu;
label_24482c:
    // 0x24482c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x24482cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_244830:
    // 0x244830: 0xc08b5e0  jal         func_22D780
label_244834:
    if (ctx->pc == 0x244834u) {
        ctx->pc = 0x244834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244830u;
        // 0x244834: 0x24846720  addiu       $a0, $a0, 0x6720 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26400));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244838u;
        goto label_244838;
    }
    ctx->pc = 0x244830u;
    SET_GPR_U32(ctx, 31, 0x244838u);
    ctx->pc = 0x244834u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244830u;
    // 0x244834: 0x24846720  addiu       $a0, $a0, 0x6720 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26400));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x244830u, 0x244838u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244838u;
label_244838:
    // 0x244838: 0x8ea40018  lw          $a0, 0x18($s5)
    ctx->pc = 0x244838u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 24)));
label_24483c:
    // 0x24483c: 0x2c820078  sltiu       $v0, $a0, 0x78
    ctx->pc = 0x24483cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)120) ? 1 : 0);
label_244840:
    // 0x244840: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_244844:
    if (ctx->pc == 0x244844u) {
        ctx->pc = 0x244844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244840u;
        // 0x244844: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244848u;
        goto label_244848;
    }
    ctx->pc = 0x244840u;
    {
        const bool branch_taken_0x244840 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244840u;
        // 0x244844: 0xafa40034  sw          $a0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244840) {
            ctx->pc = 0x244858u;
            goto label_244858;
        }
    }
    ctx->pc = 0x244848u;
label_244848:
    // 0x244848: 0x8ea20008  lw          $v0, 0x8($s5)
    ctx->pc = 0x244848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 8)));
label_24484c:
    // 0x24484c: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x24484cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_244850:
    // 0x244850: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_244854:
    if (ctx->pc == 0x244854u) {
        ctx->pc = 0x244858u;
        goto label_244858;
    }
    ctx->pc = 0x244850u;
    {
        const bool branch_taken_0x244850 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x244850) {
            ctx->pc = 0x244868u;
            goto label_244868;
        }
    }
    ctx->pc = 0x244858u;
label_244858:
    // 0x244858: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x244858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_24485c:
    // 0x24485c: 0x1000015c  b           . + 4 + (0x15C << 2)
label_244860:
    if (ctx->pc == 0x244860u) {
        ctx->pc = 0x244860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24485Cu;
        // 0x244860: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244864u;
        goto label_244864;
    }
    ctx->pc = 0x24485Cu;
    {
        const bool branch_taken_0x24485c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24485Cu;
        // 0x244860: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24485c) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244864u;
label_244864:
    // 0x244864: 0x0  nop
    ctx->pc = 0x244864u;
    // NOP
label_244868:
    // 0x244868: 0xc098552  jal         func_261548
label_24486c:
    if (ctx->pc == 0x24486Cu) {
        ctx->pc = 0x24486Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244868u;
        // 0x24486c: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244870u;
        goto label_244870;
    }
    ctx->pc = 0x244868u;
    SET_GPR_U32(ctx, 31, 0x244870u);
    ctx->pc = 0x24486Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244868u;
    // 0x24486c: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x244868u, 0x244870u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244870u;
label_244870:
    // 0x244870: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x244870u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244874:
    // 0x244874: 0x16200004  bnez        $s1, . + 4 + (0x4 << 2)
label_244878:
    if (ctx->pc == 0x244878u) {
        ctx->pc = 0x244878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244874u;
        // 0x244878: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24487Cu;
        goto label_24487c;
    }
    ctx->pc = 0x244874u;
    {
        const bool branch_taken_0x244874 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x244878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244874u;
        // 0x244878: 0x8fa60034  lw          $a2, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244874) {
            ctx->pc = 0x244888u;
            goto label_244888;
        }
    }
    ctx->pc = 0x24487Cu;
label_24487c:
    // 0x24487c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x24487cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_244880:
    // 0x244880: 0x10000153  b           . + 4 + (0x153 << 2)
label_244884:
    if (ctx->pc == 0x244884u) {
        ctx->pc = 0x244884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244880u;
        // 0x244884: 0x24120069  addiu       $s2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244888u;
        goto label_244888;
    }
    ctx->pc = 0x244880u;
    {
        const bool branch_taken_0x244880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244880u;
        // 0x244884: 0x24120069  addiu       $s2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244880) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244888u;
label_244888:
    // 0x244888: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x244888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24488c:
    // 0x24488c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x24488cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244890:
    // 0x244890: 0xc08ac18  jal         func_22B060
label_244894:
    if (ctx->pc == 0x244894u) {
        ctx->pc = 0x244894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244890u;
        // 0x244894: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244898u;
        goto label_244898;
    }
    ctx->pc = 0x244890u;
    SET_GPR_U32(ctx, 31, 0x244898u);
    ctx->pc = 0x244894u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244890u;
    // 0x244894: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B060u, 0x244890u, 0x244898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244898u;
label_244898:
    // 0x244898: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x244898u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_24489c:
    // 0x24489c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24489cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2448a0:
    // 0x2448a0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_2448a4:
    if (ctx->pc == 0x2448A4u) {
        ctx->pc = 0x2448A8u;
        goto label_2448a8;
    }
    ctx->pc = 0x2448A0u;
    {
        const bool branch_taken_0x2448a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2448a0) {
            ctx->pc = 0x2448B8u;
            goto label_2448b8;
        }
    }
    ctx->pc = 0x2448A8u;
label_2448a8:
    // 0x2448a8: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2448a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2448ac:
    // 0x2448ac: 0x10000148  b           . + 4 + (0x148 << 2)
label_2448b0:
    if (ctx->pc == 0x2448B0u) {
        ctx->pc = 0x2448B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448ACu;
        // 0x2448b0: 0x2412007b  addiu       $s2, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448B4u;
        goto label_2448b4;
    }
    ctx->pc = 0x2448ACu;
    {
        const bool branch_taken_0x2448ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2448B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448ACu;
        // 0x2448b0: 0x2412007b  addiu       $s2, $zero, 0x7B (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 123));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2448ac) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x2448B4u;
label_2448b4:
    // 0x2448b4: 0x0  nop
    ctx->pc = 0x2448b4u;
    // NOP
label_2448b8:
    // 0x2448b8: 0xc0432d4  jal         func_10CB50
label_2448bc:
    if (ctx->pc == 0x2448BCu) {
        ctx->pc = 0x2448C0u;
        goto label_2448c0;
    }
    ctx->pc = 0x2448B8u;
    SET_GPR_U32(ctx, 31, 0x2448C0u);
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x2448B8u, 0x2448C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448C0u;
label_2448c0:
    // 0x2448c0: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x2448c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_2448c4:
    // 0x2448c4: 0x26240078  addiu       $a0, $s1, 0x78
    ctx->pc = 0x2448c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_2448c8:
    // 0x2448c8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2448c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2448cc:
    // 0x2448cc: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2448ccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2448d0:
    // 0x2448d0: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x2448d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_2448d4:
    // 0x2448d4: 0x2252821  addu        $a1, $s1, $a1
    ctx->pc = 0x2448d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
label_2448d8:
    // 0x2448d8: 0xc0913e4  jal         func_244F90
label_2448dc:
    if (ctx->pc == 0x2448DCu) {
        ctx->pc = 0x2448DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448D8u;
        // 0x2448dc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448E0u;
        goto label_2448e0;
    }
    ctx->pc = 0x2448D8u;
    SET_GPR_U32(ctx, 31, 0x2448E0u);
    ctx->pc = 0x2448DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2448D8u;
    // 0x2448dc: 0xafa30000  sw          $v1, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244F90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244F90u, 0x2448D8u, 0x2448E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2448E0u;
label_2448e0:
    // 0x2448e0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2448e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2448e4:
    // 0x2448e4: 0x5040013a  beql        $v0, $zero, . + 4 + (0x13A << 2)
label_2448e8:
    if (ctx->pc == 0x2448E8u) {
        ctx->pc = 0x2448E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448E4u;
        // 0x2448e8: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448ECu;
        goto label_2448ec;
    }
    ctx->pc = 0x2448E4u;
    {
        const bool branch_taken_0x2448e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2448e4) {
            ctx->pc = 0x2448E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2448E4u;
            // 0x2448e8: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x2448ECu;
label_2448ec:
    // 0x2448ec: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x2448ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2448f0:
    // 0x2448f0: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x2448f0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_2448f4:
    // 0x2448f4: 0x50400136  beql        $v0, $zero, . + 4 + (0x136 << 2)
label_2448f8:
    if (ctx->pc == 0x2448F8u) {
        ctx->pc = 0x2448F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2448F4u;
        // 0x2448f8: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2448FCu;
        goto label_2448fc;
    }
    ctx->pc = 0x2448F4u;
    {
        const bool branch_taken_0x2448f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2448f4) {
            ctx->pc = 0x2448F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2448F4u;
            // 0x2448f8: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x2448FCu;
label_2448fc:
    // 0x2448fc: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x2448fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_244900:
    // 0x244900: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_244904:
    if (ctx->pc == 0x244904u) {
        ctx->pc = 0x244904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244900u;
        // 0x244904: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244908u;
        goto label_244908;
    }
    ctx->pc = 0x244900u;
    {
        const bool branch_taken_0x244900 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244900u;
        // 0x244904: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244900) {
            ctx->pc = 0x244920u;
            goto label_244920;
        }
    }
    ctx->pc = 0x244908u;
label_244908:
    // 0x244908: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x244908u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_24490c:
    // 0x24490c: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x24490cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_244910:
    // 0x244910: 0x5040012f  beql        $v0, $zero, . + 4 + (0x12F << 2)
label_244914:
    if (ctx->pc == 0x244914u) {
        ctx->pc = 0x244914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244910u;
        // 0x244914: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244918u;
        goto label_244918;
    }
    ctx->pc = 0x244910u;
    {
        const bool branch_taken_0x244910 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244910) {
            ctx->pc = 0x244914u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244910u;
            // 0x244914: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244918u;
label_244918:
    // 0x244918: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x244918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_24491c:
    // 0x24491c: 0x0  nop
    ctx->pc = 0x24491cu;
    // NOP
label_244920:
    // 0x244920: 0x50800011  beql        $a0, $zero, . + 4 + (0x11 << 2)
label_244924:
    if (ctx->pc == 0x244924u) {
        ctx->pc = 0x244924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244920u;
        // 0x244924: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244928u;
        goto label_244928;
    }
    ctx->pc = 0x244920u;
    {
        const bool branch_taken_0x244920 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x244920) {
            ctx->pc = 0x244924u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244920u;
            // 0x244924: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244968u;
            goto label_244968;
        }
    }
    ctx->pc = 0x244928u;
label_244928:
    // 0x244928: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x244928u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24492c:
    // 0x24492c: 0xc090624  jal         func_241890
label_244930:
    if (ctx->pc == 0x244930u) {
        ctx->pc = 0x244930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24492Cu;
        // 0x244930: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244934u;
        goto label_244934;
    }
    ctx->pc = 0x24492Cu;
    SET_GPR_U32(ctx, 31, 0x244934u);
    ctx->pc = 0x244930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24492Cu;
    // 0x244930: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x241890u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241890u, 0x24492Cu, 0x244934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244934u;
label_244934:
    // 0x244934: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244934u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244938:
    // 0x244938: 0x52000125  beql        $s0, $zero, . + 4 + (0x125 << 2)
label_24493c:
    if (ctx->pc == 0x24493Cu) {
        ctx->pc = 0x24493Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244938u;
        // 0x24493c: 0x24120069  addiu       $s2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244940u;
        goto label_244940;
    }
    ctx->pc = 0x244938u;
    {
        const bool branch_taken_0x244938 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x244938) {
            ctx->pc = 0x24493Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244938u;
            // 0x24493c: 0x24120069  addiu       $s2, $zero, 0x69 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244940u;
label_244940:
    // 0x244940: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x244940u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_244944:
    // 0x244944: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x244944u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_244948:
    // 0x244948: 0xc048c5e  jal         func_123178
label_24494c:
    if (ctx->pc == 0x24494Cu) {
        ctx->pc = 0x24494Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244948u;
        // 0x24494c: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244950u;
        goto label_244950;
    }
    ctx->pc = 0x244948u;
    SET_GPR_U32(ctx, 31, 0x244950u);
    ctx->pc = 0x24494Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244948u;
    // 0x24494c: 0x90860000  lbu         $a2, 0x0($a0) (Delay Slot)
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x244948u, 0x244950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244950u;
label_244950:
    // 0x244950: 0x5440011f  bnel        $v0, $zero, . + 4 + (0x11F << 2)
label_244954:
    if (ctx->pc == 0x244954u) {
        ctx->pc = 0x244954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244950u;
        // 0x244954: 0x24120069  addiu       $s2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244958u;
        goto label_244958;
    }
    ctx->pc = 0x244950u;
    {
        const bool branch_taken_0x244950 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244950) {
            ctx->pc = 0x244954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244950u;
            // 0x244954: 0x24120069  addiu       $s2, $zero, 0x69 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244958u;
label_244958:
    // 0x244958: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x244958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24495c:
    // 0x24495c: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x24495cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_244960:
    // 0x244960: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x244960u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_244964:
    // 0x244964: 0x0  nop
    ctx->pc = 0x244964u;
    // NOP
label_244968:
    // 0x244968: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x244968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_24496c:
    // 0x24496c: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x24496cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_244970:
    // 0x244970: 0x10600116  beqz        $v1, . + 4 + (0x116 << 2)
label_244974:
    if (ctx->pc == 0x244974u) {
        ctx->pc = 0x244974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244970u;
        // 0x244974: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244978u;
        goto label_244978;
    }
    ctx->pc = 0x244970u;
    {
        const bool branch_taken_0x244970 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x244974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244970u;
        // 0x244974: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244970) {
            ctx->pc = 0x244DCCu;
            goto label_244dcc;
        }
    }
    ctx->pc = 0x244978u;
label_244978:
    // 0x244978: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x244978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_24497c:
    // 0x24497c: 0x24426730  addiu       $v0, $v0, 0x6730
    ctx->pc = 0x24497cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26416));
label_244980:
    // 0x244980: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x244980u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_244984:
    // 0x244984: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x244984u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_244988:
    // 0x244988: 0x800008  jr          $a0
label_24498c:
    if (ctx->pc == 0x24498Cu) {
        ctx->pc = 0x244990u;
        goto label_244990;
    }
    ctx->pc = 0x244988u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x244990u: goto label_244990;
            case 0x2449F8u: goto label_2449f8;
            case 0x244A34u: goto label_244a34;
            case 0x244DCCu: goto label_244dcc;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244988u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x244990u;
label_244990:
    // 0x244990: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x244990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_244994:
    // 0x244994: 0x10c0010e  beqz        $a2, . + 4 + (0x10E << 2)
label_244998:
    if (ctx->pc == 0x244998u) {
        ctx->pc = 0x244998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244994u;
        // 0x244998: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24499Cu;
        goto label_24499c;
    }
    ctx->pc = 0x244994u;
    {
        const bool branch_taken_0x244994 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x244998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244994u;
        // 0x244998: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244994) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x24499Cu;
label_24499c:
    // 0x24499c: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x24499cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2449a0:
    // 0x2449a0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2449a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2449a4:
    // 0x2449a4: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x2449a4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2449a8:
    // 0x2449a8: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x2449a8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2449ac:
    // 0x2449ac: 0xc090d8e  jal         func_243638
label_2449b0:
    if (ctx->pc == 0x2449B0u) {
        ctx->pc = 0x2449B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449ACu;
        // 0x2449b0: 0x8e280008  lw          $t0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449B4u;
        goto label_2449b4;
    }
    ctx->pc = 0x2449ACu;
    SET_GPR_U32(ctx, 31, 0x2449B4u);
    ctx->pc = 0x2449B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2449ACu;
    // 0x2449b0: 0x8e280008  lw          $t0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243638u, 0x2449ACu, 0x2449B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449B4u;
label_2449b4:
    // 0x2449b4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2449b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2449b8:
    // 0x2449b8: 0x16400105  bnez        $s2, . + 4 + (0x105 << 2)
label_2449bc:
    if (ctx->pc == 0x2449BCu) {
        ctx->pc = 0x2449BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449B8u;
        // 0x2449bc: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449C0u;
        goto label_2449c0;
    }
    ctx->pc = 0x2449B8u;
    {
        const bool branch_taken_0x2449b8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2449BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449B8u;
        // 0x2449bc: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449b8) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x2449C0u;
label_2449c0:
    // 0x2449c0: 0x10c00103  beqz        $a2, . + 4 + (0x103 << 2)
label_2449c4:
    if (ctx->pc == 0x2449C4u) {
        ctx->pc = 0x2449C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449C0u;
        // 0x2449c4: 0x24c60058  addiu       $a2, $a2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449C8u;
        goto label_2449c8;
    }
    ctx->pc = 0x2449C0u;
    {
        const bool branch_taken_0x2449c0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2449C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449C0u;
        // 0x2449c4: 0x24c60058  addiu       $a2, $a2, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 88));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449c0) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x2449C8u;
label_2449c8:
    // 0x2449c8: 0xde240020  ld          $a0, 0x20($s1)
    ctx->pc = 0x2449c8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_2449cc:
    // 0x2449cc: 0xc0913b8  jal         func_244EE0
label_2449d0:
    if (ctx->pc == 0x2449D0u) {
        ctx->pc = 0x2449D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449CCu;
        // 0x2449d0: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449D4u;
        goto label_2449d4;
    }
    ctx->pc = 0x2449CCu;
    SET_GPR_U32(ctx, 31, 0x2449D4u);
    ctx->pc = 0x2449D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2449CCu;
    // 0x2449d0: 0x26250028  addiu       $a1, $s1, 0x28 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE0u, 0x2449CCu, 0x2449D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2449D4u;
label_2449d4:
    // 0x2449d4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2449d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2449d8:
    // 0x2449d8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x2449d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
label_2449dc:
    // 0x2449dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2449dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2449e0:
    // 0x2449e0: 0xac620038  sw          $v0, 0x38($v1)
    ctx->pc = 0x2449e0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 2));
label_2449e4:
    // 0x2449e4: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x2449e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2449e8:
    // 0x2449e8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2449e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2449ec:
    // 0x2449ec: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_2449f0:
    if (ctx->pc == 0x2449F0u) {
        ctx->pc = 0x2449F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449ECu;
        // 0x2449f0: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2449F4u;
        goto label_2449f4;
    }
    ctx->pc = 0x2449ECu;
    {
        const bool branch_taken_0x2449ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2449F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2449ECu;
        // 0x2449f0: 0xac820050  sw          $v0, 0x50($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2449ec) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x2449F4u;
label_2449f4:
    // 0x2449f4: 0x0  nop
    ctx->pc = 0x2449f4u;
    // NOP
label_2449f8:
    // 0x2449f8: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x2449f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2449fc:
    // 0x2449fc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2449fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244a00:
    // 0x244a00: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x244a00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_244a04:
    // 0x244a04: 0x27a90030  addiu       $t1, $sp, 0x30
    ctx->pc = 0x244a04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_244a08:
    // 0x244a08: 0x8fa7000c  lw          $a3, 0xC($sp)
    ctx->pc = 0x244a08u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_244a0c:
    // 0x244a0c: 0xc090d8e  jal         func_243638
label_244a10:
    if (ctx->pc == 0x244A10u) {
        ctx->pc = 0x244A10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A0Cu;
        // 0x244a10: 0x8e280008  lw          $t0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A14u;
        goto label_244a14;
    }
    ctx->pc = 0x244A0Cu;
    SET_GPR_U32(ctx, 31, 0x244A14u);
    ctx->pc = 0x244A10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244A0Cu;
    // 0x244a10: 0x8e280008  lw          $t0, 0x8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243638u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243638u, 0x244A0Cu, 0x244A14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244A14u;
label_244a14:
    // 0x244a14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x244a14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244a18:
    // 0x244a18: 0x164000ed  bnez        $s2, . + 4 + (0xED << 2)
label_244a1c:
    if (ctx->pc == 0x244A1Cu) {
        ctx->pc = 0x244A20u;
        goto label_244a20;
    }
    ctx->pc = 0x244A18u;
    {
        const bool branch_taken_0x244a18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x244a18) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244A20u;
label_244a20:
    // 0x244a20: 0x8fb40030  lw          $s4, 0x30($sp)
    ctx->pc = 0x244a20u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_244a24:
    // 0x244a24: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x244a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_244a28:
    // 0x244a28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x244a28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_244a2c:
    // 0x244a2c: 0x1000002a  b           . + 4 + (0x2A << 2)
label_244a30:
    if (ctx->pc == 0x244A30u) {
        ctx->pc = 0x244A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A2Cu;
        // 0x244a30: 0xae820038  sw          $v0, 0x38($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A34u;
        goto label_244a34;
    }
    ctx->pc = 0x244A2Cu;
    {
        const bool branch_taken_0x244a2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A2Cu;
        // 0x244a30: 0xae820038  sw          $v0, 0x38($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a2c) {
            ctx->pc = 0x244AD8u;
            goto label_244ad8;
        }
    }
    ctx->pc = 0x244A34u;
label_244a34:
    // 0x244a34: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x244a34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_244a38:
    // 0x244a38: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x244a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_244a3c:
    // 0x244a3c: 0x2463ff10  addiu       $v1, $v1, -0xF0
    ctx->pc = 0x244a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967056));
label_244a40:
    // 0x244a40: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x244a40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_244a44:
    // 0x244a44: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x244a44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_244a48:
    // 0x244a48: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x244a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_244a4c:
    // 0x244a4c: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x244a4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_244a50:
    // 0x244a50: 0x54c00003  bnel        $a2, $zero, . + 4 + (0x3 << 2)
label_244a54:
    if (ctx->pc == 0x244A54u) {
        ctx->pc = 0x244A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A50u;
        // 0x244a54: 0x8cc20020  lw          $v0, 0x20($a2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A58u;
        goto label_244a58;
    }
    ctx->pc = 0x244A50u;
    {
        const bool branch_taken_0x244a50 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x244a50) {
            ctx->pc = 0x244A54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244A50u;
            // 0x244a54: 0x8cc20020  lw          $v0, 0x20($a2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244A60u;
            goto label_244a60;
        }
    }
    ctx->pc = 0x244A58u;
label_244a58:
    // 0x244a58: 0x100000dd  b           . + 4 + (0xDD << 2)
label_244a5c:
    if (ctx->pc == 0x244A5Cu) {
        ctx->pc = 0x244A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A58u;
        // 0x244a5c: 0x2412006a  addiu       $s2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A60u;
        goto label_244a60;
    }
    ctx->pc = 0x244A58u;
    {
        const bool branch_taken_0x244a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A58u;
        // 0x244a5c: 0x2412006a  addiu       $s2, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a58) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244A60u;
label_244a60:
    // 0x244a60: 0x40f809  jalr        $v0
label_244a64:
    if (ctx->pc == 0x244A64u) {
        ctx->pc = 0x244A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A60u;
        // 0x244a64: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A68u;
        goto label_244a68;
    }
    ctx->pc = 0x244A60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244A68u);
        ctx->pc = 0x244A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A60u;
        // 0x244a64: 0x8fa5000c  lw          $a1, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244A60u, 0x244A68u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244A68u;
label_244a68:
    // 0x244a68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244a6c:
    // 0x244a6c: 0x520000d8  beql        $s0, $zero, . + 4 + (0xD8 << 2)
label_244a70:
    if (ctx->pc == 0x244A70u) {
        ctx->pc = 0x244A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A6Cu;
        // 0x244a70: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A74u;
        goto label_244a74;
    }
    ctx->pc = 0x244A6Cu;
    {
        const bool branch_taken_0x244a6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a6c) {
            ctx->pc = 0x244A70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244A6Cu;
            // 0x244a70: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244A74u;
label_244a74:
    // 0x244a74: 0x9202000b  lbu         $v0, 0xB($s0)
    ctx->pc = 0x244a74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 11)));
label_244a78:
    // 0x244a78: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x244a78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_244a7c:
    // 0x244a7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_244a80:
    if (ctx->pc == 0x244A80u) {
        ctx->pc = 0x244A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A7Cu;
        // 0x244a80: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A84u;
        goto label_244a84;
    }
    ctx->pc = 0x244A7Cu;
    {
        const bool branch_taken_0x244a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244a7c) {
            ctx->pc = 0x244A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244A7Cu;
            // 0x244a80: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244A90u;
            goto label_244a90;
        }
    }
    ctx->pc = 0x244A84u;
label_244a84:
    // 0x244a84: 0x100000d2  b           . + 4 + (0xD2 << 2)
label_244a88:
    if (ctx->pc == 0x244A88u) {
        ctx->pc = 0x244A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A84u;
        // 0x244a88: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244A8Cu;
        goto label_244a8c;
    }
    ctx->pc = 0x244A84u;
    {
        const bool branch_taken_0x244a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244A84u;
        // 0x244a88: 0x24120003  addiu       $s2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244a84) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244A8Cu;
label_244a8c:
    // 0x244a8c: 0x0  nop
    ctx->pc = 0x244a8cu;
    // NOP
label_244a90:
    // 0x244a90: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x244a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_244a94:
    // 0x244a94: 0x8e820038  lw          $v0, 0x38($s4)
    ctx->pc = 0x244a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 56)));
label_244a98:
    // 0x244a98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x244a98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_244a9c:
    // 0x244a9c: 0xae820038  sw          $v0, 0x38($s4)
    ctx->pc = 0x244a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 56), GPR_U32(ctx, 2));
label_244aa0:
    // 0x244aa0: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x244aa0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_244aa4:
    // 0x244aa4: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
label_244aa8:
    if (ctx->pc == 0x244AA8u) {
        ctx->pc = 0x244AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AA4u;
        // 0x244aa8: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AACu;
        goto label_244aac;
    }
    ctx->pc = 0x244AA4u;
    {
        const bool branch_taken_0x244aa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x244AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AA4u;
        // 0x244aa8: 0x28820005  slti        $v0, $a0, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x244aa4) {
            ctx->pc = 0x244AD8u;
            goto label_244ad8;
        }
    }
    ctx->pc = 0x244AACu;
label_244aac:
    // 0x244aac: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_244ab0:
    if (ctx->pc == 0x244AB0u) {
        ctx->pc = 0x244AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AACu;
        // 0x244ab0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AB4u;
        goto label_244ab4;
    }
    ctx->pc = 0x244AACu;
    {
        const bool branch_taken_0x244aac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AACu;
        // 0x244ab0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244aac) {
            ctx->pc = 0x244AC4u;
            goto label_244ac4;
        }
    }
    ctx->pc = 0x244AB4u;
label_244ab4:
    // 0x244ab4: 0x1082005e  beq         $a0, $v0, . + 4 + (0x5E << 2)
label_244ab8:
    if (ctx->pc == 0x244AB8u) {
        ctx->pc = 0x244AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AB4u;
        // 0x244ab8: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244ABCu;
        goto label_244abc;
    }
    ctx->pc = 0x244AB4u;
    {
        const bool branch_taken_0x244ab4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x244AB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AB4u;
        // 0x244ab8: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ab4) {
            ctx->pc = 0x244C30u;
            goto label_244c30;
        }
    }
    ctx->pc = 0x244ABCu;
label_244abc:
    // 0x244abc: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_244ac0:
    if (ctx->pc == 0x244AC0u) {
        ctx->pc = 0x244AC4u;
        goto label_244ac4;
    }
    ctx->pc = 0x244ABCu;
    {
        const bool branch_taken_0x244abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244abc) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244AC4u;
label_244ac4:
    // 0x244ac4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x244ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_244ac8:
    // 0x244ac8: 0x508200b6  beql        $a0, $v0, . + 4 + (0xB6 << 2)
label_244acc:
    if (ctx->pc == 0x244ACCu) {
        ctx->pc = 0x244ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244AC8u;
        // 0x244acc: 0xde220020  ld          $v0, 0x20($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244AD0u;
        goto label_244ad0;
    }
    ctx->pc = 0x244AC8u;
    {
        const bool branch_taken_0x244ac8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x244ac8) {
            ctx->pc = 0x244ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244AC8u;
            // 0x244acc: 0xde220020  ld          $v0, 0x20($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244DA4u;
            goto label_244da4;
        }
    }
    ctx->pc = 0x244AD0u;
label_244ad0:
    // 0x244ad0: 0x100000bf  b           . + 4 + (0xBF << 2)
label_244ad4:
    if (ctx->pc == 0x244AD4u) {
        ctx->pc = 0x244AD8u;
        goto label_244ad8;
    }
    ctx->pc = 0x244AD0u;
    {
        const bool branch_taken_0x244ad0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x244ad0) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244AD8u;
label_244ad8:
    // 0x244ad8: 0x8e82000c  lw          $v0, 0xC($s4)
    ctx->pc = 0x244ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_244adc:
    // 0x244adc: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x244adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_244ae0:
    // 0x244ae0: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x244ae0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
label_244ae4:
    // 0x244ae4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x244ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_244ae8:
    // 0x244ae8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x244ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_244aec:
    // 0x244aec: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x244aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_244af0:
    // 0x244af0: 0x8e830050  lw          $v1, 0x50($s4)
    ctx->pc = 0x244af0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 80)));
label_244af4:
    // 0x244af4: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x244af4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_244af8:
    // 0x244af8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x244af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_244afc:
    // 0x244afc: 0x30420030  andi        $v0, $v0, 0x30
    ctx->pc = 0x244afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)48);
label_244b00:
    // 0x244b00: 0x50400016  beql        $v0, $zero, . + 4 + (0x16 << 2)
label_244b04:
    if (ctx->pc == 0x244B04u) {
        ctx->pc = 0x244B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B00u;
        // 0x244b04: 0x92240003  lbu         $a0, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B08u;
        goto label_244b08;
    }
    ctx->pc = 0x244B00u;
    {
        const bool branch_taken_0x244b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244b00) {
            ctx->pc = 0x244B04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244B00u;
            // 0x244b04: 0x92240003  lbu         $a0, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244B5Cu;
            goto label_244b5c;
        }
    }
    ctx->pc = 0x244B08u;
label_244b08:
    // 0x244b08: 0x8e960048  lw          $s6, 0x48($s4)
    ctx->pc = 0x244b08u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 72)));
label_244b0c:
    // 0x244b0c: 0x52c00011  beql        $s6, $zero, . + 4 + (0x11 << 2)
label_244b10:
    if (ctx->pc == 0x244B10u) {
        ctx->pc = 0x244B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B0Cu;
        // 0x244b10: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B14u;
        goto label_244b14;
    }
    ctx->pc = 0x244B0Cu;
    {
        const bool branch_taken_0x244b0c = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x244b0c) {
            ctx->pc = 0x244B10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244B0Cu;
            // 0x244b10: 0xafa00014  sw          $zero, 0x14($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244B54u;
            goto label_244b54;
        }
    }
    ctx->pc = 0x244B14u;
label_244b14:
    // 0x244b14: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x244b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_244b18:
    // 0x244b18: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_244b1c:
    // 0x244b1c: 0xafa30014  sw          $v1, 0x14($sp)
    ctx->pc = 0x244b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 3));
label_244b20:
    // 0x244b20: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x244b20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_244b24:
    // 0x244b24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x244b24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_244b28:
    // 0x244b28: 0xafa30018  sw          $v1, 0x18($sp)
    ctx->pc = 0x244b28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 3));
label_244b2c:
    // 0x244b2c: 0x96c20030  lhu         $v0, 0x30($s6)
    ctx->pc = 0x244b2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 48)));
label_244b30:
    // 0x244b30: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x244b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_244b34:
    // 0x244b34: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_244b38:
    if (ctx->pc == 0x244B38u) {
        ctx->pc = 0x244B38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B34u;
        // 0x244b38: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B3Cu;
        goto label_244b3c;
    }
    ctx->pc = 0x244B34u;
    {
        const bool branch_taken_0x244b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244b34) {
            ctx->pc = 0x244B38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244B34u;
            // 0x244b38: 0xafa00020  sw          $zero, 0x20($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244B48u;
            goto label_244b48;
        }
    }
    ctx->pc = 0x244B3Cu;
label_244b3c:
    // 0x244b3c: 0x8e82004c  lw          $v0, 0x4C($s4)
    ctx->pc = 0x244b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 76)));
label_244b40:
    // 0x244b40: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x244b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_244b44:
    // 0x244b44: 0xafa30020  sw          $v1, 0x20($sp)
    ctx->pc = 0x244b44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 3));
label_244b48:
    // 0x244b48: 0x96c2002c  lhu         $v0, 0x2C($s6)
    ctx->pc = 0x244b48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 44)));
label_244b4c:
    // 0x244b4c: 0x10000002  b           . + 4 + (0x2 << 2)
label_244b50:
    if (ctx->pc == 0x244B50u) {
        ctx->pc = 0x244B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B4Cu;
        // 0x244b50: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B54u;
        goto label_244b54;
    }
    ctx->pc = 0x244B4Cu;
    {
        const bool branch_taken_0x244b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B4Cu;
        // 0x244b50: 0xa6220004  sh          $v0, 0x4($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 4), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244b4c) {
            ctx->pc = 0x244B58u;
            goto label_244b58;
        }
    }
    ctx->pc = 0x244B54u;
label_244b54:
    // 0x244b54: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x244b54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
label_244b58:
    // 0x244b58: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x244b58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_244b5c:
    // 0x244b5c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x244b5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244b60:
    // 0x244b60: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x244b60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244b64:
    // 0x244b64: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x244b64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244b68:
    // 0x244b68: 0xc09148a  jal         func_245228
label_244b6c:
    if (ctx->pc == 0x244B6Cu) {
        ctx->pc = 0x244B6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B68u;
        // 0x244b6c: 0x27a80034  addiu       $t0, $sp, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B70u;
        goto label_244b70;
    }
    ctx->pc = 0x244B68u;
    SET_GPR_U32(ctx, 31, 0x244B70u);
    ctx->pc = 0x244B6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244B68u;
    // 0x244b6c: 0x27a80034  addiu       $t0, $sp, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245228u, 0x244B68u, 0x244B70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B70u;
label_244b70:
    // 0x244b70: 0x8fa40034  lw          $a0, 0x34($sp)
    ctx->pc = 0x244b70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_244b74:
    // 0x244b74: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x244b74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_244b78:
    // 0x244b78: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x244b78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_244b7c:
    // 0x244b7c: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
label_244b80:
    if (ctx->pc == 0x244B80u) {
        ctx->pc = 0x244B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B7Cu;
        // 0x244b80: 0x92240003  lbu         $a0, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B84u;
        goto label_244b84;
    }
    ctx->pc = 0x244B7Cu;
    {
        const bool branch_taken_0x244b7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244b7c) {
            ctx->pc = 0x244B80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244B7Cu;
            // 0x244b80: 0x92240003  lbu         $a0, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244BB8u;
            goto label_244bb8;
        }
    }
    ctx->pc = 0x244B84u;
label_244b84:
    // 0x244b84: 0xc098552  jal         func_261548
label_244b88:
    if (ctx->pc == 0x244B88u) {
        ctx->pc = 0x244B8Cu;
        goto label_244b8c;
    }
    ctx->pc = 0x244B84u;
    SET_GPR_U32(ctx, 31, 0x244B8Cu);
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x244B84u, 0x244B8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244B8Cu;
label_244b8c:
    // 0x244b8c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x244b8cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244b90:
    // 0x244b90: 0x5200008f  beql        $s0, $zero, . + 4 + (0x8F << 2)
label_244b94:
    if (ctx->pc == 0x244B94u) {
        ctx->pc = 0x244B94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244B90u;
        // 0x244b94: 0x24120069  addiu       $s2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244B98u;
        goto label_244b98;
    }
    ctx->pc = 0x244B90u;
    {
        const bool branch_taken_0x244b90 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x244b90) {
            ctx->pc = 0x244B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244B90u;
            // 0x244b94: 0x24120069  addiu       $s2, $zero, 0x69 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244B98u;
label_244b98:
    // 0x244b98: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x244b98u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_244b9c:
    // 0x244b9c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x244b9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244ba0:
    // 0x244ba0: 0xc08b4f8  jal         func_22D3E0
label_244ba4:
    if (ctx->pc == 0x244BA4u) {
        ctx->pc = 0x244BA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BA0u;
        // 0x244ba4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244BA8u;
        goto label_244ba8;
    }
    ctx->pc = 0x244BA0u;
    SET_GPR_U32(ctx, 31, 0x244BA8u);
    ctx->pc = 0x244BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BA0u;
    // 0x244ba4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x244BA0u, 0x244BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BA8u;
label_244ba8:
    // 0x244ba8: 0xc098560  jal         func_261580
label_244bac:
    if (ctx->pc == 0x244BACu) {
        ctx->pc = 0x244BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BA8u;
        // 0x244bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244BB0u;
        goto label_244bb0;
    }
    ctx->pc = 0x244BA8u;
    SET_GPR_U32(ctx, 31, 0x244BB0u);
    ctx->pc = 0x244BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BA8u;
    // 0x244bac: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x244BA8u, 0x244BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BB0u;
label_244bb0:
    // 0x244bb0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x244bb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_244bb4:
    // 0x244bb4: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x244bb4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_244bb8:
    // 0x244bb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x244bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_244bbc:
    // 0x244bbc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x244bbcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_244bc0:
    // 0x244bc0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x244bc0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_244bc4:
    // 0x244bc4: 0xc09148a  jal         func_245228
label_244bc8:
    if (ctx->pc == 0x244BC8u) {
        ctx->pc = 0x244BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244BC4u;
        // 0x244bc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244BCCu;
        goto label_244bcc;
    }
    ctx->pc = 0x244BC4u;
    SET_GPR_U32(ctx, 31, 0x244BCCu);
    ctx->pc = 0x244BC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244BC4u;
    // 0x244bc8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x245228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245228u, 0x244BC4u, 0x244BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244BCCu;
label_244bcc:
    // 0x244bcc: 0x8e820034  lw          $v0, 0x34($s4)
    ctx->pc = 0x244bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 52)));
label_244bd0:
    // 0x244bd0: 0x26850098  addiu       $a1, $s4, 0x98
    ctx->pc = 0x244bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 152));
label_244bd4:
    // 0x244bd4: 0x26240028  addiu       $a0, $s1, 0x28
    ctx->pc = 0x244bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_244bd8:
    // 0x244bd8: 0x26830058  addiu       $v1, $s4, 0x58
    ctx->pc = 0x244bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 88));
label_244bdc:
    // 0x244bdc: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x244bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_244be0:
    // 0x244be0: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x244be0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_244be4:
    // 0x244be4: 0xdc660008  ld          $a2, 0x8($v1)
    ctx->pc = 0x244be4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_244be8:
    // 0x244be8: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x244be8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_244bec:
    // 0x244bec: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x244becu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
label_244bf0:
    // 0x244bf0: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x244bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_244bf4:
    // 0x244bf4: 0xfc860008  sd          $a2, 0x8($a0)
    ctx->pc = 0x244bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 6));
label_244bf8:
    // 0x244bf8: 0xfc870010  sd          $a3, 0x10($a0)
    ctx->pc = 0x244bf8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 16), GPR_U64(ctx, 7));
label_244bfc:
    // 0x244bfc: 0xfc880018  sd          $t0, 0x18($a0)
    ctx->pc = 0x244bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 24), GPR_U64(ctx, 8));
label_244c00:
    // 0x244c00: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x244c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_244c04:
    // 0x244c04: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x244c04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
label_244c08:
    // 0x244c08: 0x0  nop
    ctx->pc = 0x244c08u;
    // NOP
label_244c0c:
    // 0x244c0c: 0x1465fff4  bne         $v1, $a1, . + 4 + (-0xC << 2)
label_244c10:
    if (ctx->pc == 0x244C10u) {
        ctx->pc = 0x244C14u;
        goto label_244c14;
    }
    ctx->pc = 0x244C0Cu;
    {
        const bool branch_taken_0x244c0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x244c0c) {
            ctx->pc = 0x244BE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_244be0;
        }
    }
    ctx->pc = 0x244C14u;
label_244c14:
    // 0x244c14: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x244c14u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_244c18:
    // 0x244c18: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x244c18u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
label_244c1c:
    // 0x244c1c: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x244c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_244c20:
    // 0x244c20: 0xfc850008  sd          $a1, 0x8($a0)
    ctx->pc = 0x244c20u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 8), GPR_U64(ctx, 5));
label_244c24:
    // 0x244c24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x244c24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_244c28:
    // 0x244c28: 0x10000069  b           . + 4 + (0x69 << 2)
label_244c2c:
    if (ctx->pc == 0x244C2Cu) {
        ctx->pc = 0x244C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C28u;
        // 0x244c2c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C30u;
        goto label_244c30;
    }
    ctx->pc = 0x244C28u;
    {
        const bool branch_taken_0x244c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C28u;
        // 0x244c2c: 0xae22000c  sw          $v0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c28) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244C30u;
label_244c30:
    // 0x244c30: 0x10c00009  beqz        $a2, . + 4 + (0x9 << 2)
label_244c34:
    if (ctx->pc == 0x244C34u) {
        ctx->pc = 0x244C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C30u;
        // 0x244c34: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C38u;
        goto label_244c38;
    }
    ctx->pc = 0x244C30u;
    {
        const bool branch_taken_0x244c30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C30u;
        // 0x244c34: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c30) {
            ctx->pc = 0x244C58u;
            goto label_244c58;
        }
    }
    ctx->pc = 0x244C38u;
label_244c38:
    // 0x244c38: 0x8e85000c  lw          $a1, 0xC($s4)
    ctx->pc = 0x244c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_244c3c:
    // 0x244c3c: 0xc090eec  jal         func_243BB0
label_244c40:
    if (ctx->pc == 0x244C40u) {
        ctx->pc = 0x244C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C3Cu;
        // 0x244c40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C44u;
        goto label_244c44;
    }
    ctx->pc = 0x244C3Cu;
    SET_GPR_U32(ctx, 31, 0x244C44u);
    ctx->pc = 0x244C40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244C3Cu;
    // 0x244c40: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243BB0u, 0x244C3Cu, 0x244C44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C44u;
label_244c44:
    // 0x244c44: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_244c48:
    if (ctx->pc == 0x244C48u) {
        ctx->pc = 0x244C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C44u;
        // 0x244c48: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C4Cu;
        goto label_244c4c;
    }
    ctx->pc = 0x244C44u;
    {
        const bool branch_taken_0x244c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C44u;
        // 0x244c48: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c44) {
            ctx->pc = 0x244C58u;
            goto label_244c58;
        }
    }
    ctx->pc = 0x244C4Cu;
label_244c4c:
    // 0x244c4c: 0x10000060  b           . + 4 + (0x60 << 2)
label_244c50:
    if (ctx->pc == 0x244C50u) {
        ctx->pc = 0x244C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C4Cu;
        // 0x244c50: 0x24120084  addiu       $s2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C54u;
        goto label_244c54;
    }
    ctx->pc = 0x244C4Cu;
    {
        const bool branch_taken_0x244c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C4Cu;
        // 0x244c50: 0x24120084  addiu       $s2, $zero, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c4c) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244C54u;
label_244c54:
    // 0x244c54: 0x0  nop
    ctx->pc = 0x244c54u;
    // NOP
label_244c58:
    // 0x244c58: 0x50800017  beql        $a0, $zero, . + 4 + (0x17 << 2)
label_244c5c:
    if (ctx->pc == 0x244C5Cu) {
        ctx->pc = 0x244C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C58u;
        // 0x244c5c: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C60u;
        goto label_244c60;
    }
    ctx->pc = 0x244C58u;
    {
        const bool branch_taken_0x244c58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x244c58) {
            ctx->pc = 0x244C5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244C58u;
            // 0x244c5c: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244CB8u;
            goto label_244cb8;
        }
    }
    ctx->pc = 0x244C60u;
label_244c60:
    // 0x244c60: 0xc08d3d0  jal         func_234F40
label_244c64:
    if (ctx->pc == 0x244C64u) {
        ctx->pc = 0x244C68u;
        goto label_244c68;
    }
    ctx->pc = 0x244C60u;
    SET_GPR_U32(ctx, 31, 0x244C68u);
    ctx->pc = 0x234F40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234F40u, 0x244C60u, 0x244C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244C68u;
label_244c68:
    // 0x244c68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x244c68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244c6c:
    // 0x244c6c: 0x12600012  beqz        $s3, . + 4 + (0x12 << 2)
label_244c70:
    if (ctx->pc == 0x244C70u) {
        ctx->pc = 0x244C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C6Cu;
        // 0x244c70: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C74u;
        goto label_244c74;
    }
    ctx->pc = 0x244C6Cu;
    {
        const bool branch_taken_0x244c6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C6Cu;
        // 0x244c70: 0x8fa40018  lw          $a0, 0x18($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c6c) {
            ctx->pc = 0x244CB8u;
            goto label_244cb8;
        }
    }
    ctx->pc = 0x244C74u;
label_244c74:
    // 0x244c74: 0x8e76000c  lw          $s6, 0xC($s3)
    ctx->pc = 0x244c74u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_244c78:
    // 0x244c78: 0x12c0000f  beqz        $s6, . + 4 + (0xF << 2)
label_244c7c:
    if (ctx->pc == 0x244C7Cu) {
        ctx->pc = 0x244C80u;
        goto label_244c80;
    }
    ctx->pc = 0x244C78u;
    {
        const bool branch_taken_0x244c78 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x244c78) {
            ctx->pc = 0x244CB8u;
            goto label_244cb8;
        }
    }
    ctx->pc = 0x244C80u;
label_244c80:
    // 0x244c80: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_244c84:
    if (ctx->pc == 0x244C84u) {
        ctx->pc = 0x244C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C80u;
        // 0x244c84: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C88u;
        goto label_244c88;
    }
    ctx->pc = 0x244C80u;
    {
        const bool branch_taken_0x244c80 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x244C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C80u;
        // 0x244c84: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c80) {
            ctx->pc = 0x244C9Cu;
            goto label_244c9c;
        }
    }
    ctx->pc = 0x244C88u;
label_244c88:
    // 0x244c88: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x244c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_244c8c:
    // 0x244c8c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_244c90:
    if (ctx->pc == 0x244C90u) {
        ctx->pc = 0x244C94u;
        goto label_244c94;
    }
    ctx->pc = 0x244C8Cu;
    {
        const bool branch_taken_0x244c8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244c8c) {
            ctx->pc = 0x244CB8u;
            goto label_244cb8;
        }
    }
    ctx->pc = 0x244C94u;
label_244c94:
    // 0x244c94: 0x10000003  b           . + 4 + (0x3 << 2)
label_244c98:
    if (ctx->pc == 0x244C98u) {
        ctx->pc = 0x244C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C94u;
        // 0x244c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244C9Cu;
        goto label_244c9c;
    }
    ctx->pc = 0x244C94u;
    {
        const bool branch_taken_0x244c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244C94u;
        // 0x244c98: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244c94) {
            ctx->pc = 0x244CA4u;
            goto label_244ca4;
        }
    }
    ctx->pc = 0x244C9Cu;
label_244c9c:
    // 0x244c9c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x244c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_244ca0:
    // 0x244ca0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x244ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244ca4:
    // 0x244ca4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x244ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_244ca8:
    // 0x244ca8: 0xc08d460  jal         func_235180
label_244cac:
    if (ctx->pc == 0x244CACu) {
        ctx->pc = 0x244CACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CA8u;
        // 0x244cac: 0x63200b  movn        $a0, $v1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CB0u;
        goto label_244cb0;
    }
    ctx->pc = 0x244CA8u;
    SET_GPR_U32(ctx, 31, 0x244CB0u);
    ctx->pc = 0x244CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CA8u;
    // 0x244cac: 0x63200b  movn        $a0, $v1, $v1 (Delay Slot)
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x244CA8u, 0x244CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CB0u;
label_244cb0:
    // 0x244cb0: 0x10000012  b           . + 4 + (0x12 << 2)
label_244cb4:
    if (ctx->pc == 0x244CB4u) {
        ctx->pc = 0x244CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CB0u;
        // 0x244cb4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CB8u;
        goto label_244cb8;
    }
    ctx->pc = 0x244CB0u;
    {
        const bool branch_taken_0x244cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244CB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CB0u;
        // 0x244cb4: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cb0) {
            ctx->pc = 0x244CFCu;
            goto label_244cfc;
        }
    }
    ctx->pc = 0x244CB8u;
label_244cb8:
    // 0x244cb8: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_244cbc:
    if (ctx->pc == 0x244CBCu) {
        ctx->pc = 0x244CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CB8u;
        // 0x244cbc: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CC0u;
        goto label_244cc0;
    }
    ctx->pc = 0x244CB8u;
    {
        const bool branch_taken_0x244cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x244CBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CB8u;
        // 0x244cbc: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244cb8) {
            ctx->pc = 0x244CD8u;
            goto label_244cd8;
        }
    }
    ctx->pc = 0x244CC0u;
label_244cc0:
    // 0x244cc0: 0xc08d360  jal         func_234D80
label_244cc4:
    if (ctx->pc == 0x244CC4u) {
        ctx->pc = 0x244CC8u;
        goto label_244cc8;
    }
    ctx->pc = 0x244CC0u;
    SET_GPR_U32(ctx, 31, 0x244CC8u);
    ctx->pc = 0x234D80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234D80u, 0x244CC0u, 0x244CC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CC8u;
label_244cc8:
    // 0x244cc8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x244cc8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244ccc:
    // 0x244ccc: 0x5660000b  bnel        $s3, $zero, . + 4 + (0xB << 2)
label_244cd0:
    if (ctx->pc == 0x244CD0u) {
        ctx->pc = 0x244CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CCCu;
        // 0x244cd0: 0x8e76000c  lw          $s6, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CD4u;
        goto label_244cd4;
    }
    ctx->pc = 0x244CCCu;
    {
        const bool branch_taken_0x244ccc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x244ccc) {
            ctx->pc = 0x244CD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244CCCu;
            // 0x244cd0: 0x8e76000c  lw          $s6, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244CFCu;
            goto label_244cfc;
        }
    }
    ctx->pc = 0x244CD4u;
label_244cd4:
    // 0x244cd4: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x244cd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_244cd8:
    // 0x244cd8: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
label_244cdc:
    if (ctx->pc == 0x244CDCu) {
        ctx->pc = 0x244CE0u;
        goto label_244ce0;
    }
    ctx->pc = 0x244CD8u;
    {
        const bool branch_taken_0x244cd8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x244cd8) {
            ctx->pc = 0x244CFCu;
            goto label_244cfc;
        }
    }
    ctx->pc = 0x244CE0u;
label_244ce0:
    // 0x244ce0: 0x8e040034  lw          $a0, 0x34($s0)
    ctx->pc = 0x244ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 52)));
label_244ce4:
    // 0x244ce4: 0xc090d52  jal         func_243548
label_244ce8:
    if (ctx->pc == 0x244CE8u) {
        ctx->pc = 0x244CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CE4u;
        // 0x244ce8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CECu;
        goto label_244cec;
    }
    ctx->pc = 0x244CE4u;
    SET_GPR_U32(ctx, 31, 0x244CECu);
    ctx->pc = 0x244CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244CE4u;
    // 0x244ce8: 0x8e05000c  lw          $a1, 0xC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243548u, 0x244CE4u, 0x244CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244CECu;
label_244cec:
    // 0x244cec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x244cecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_244cf0:
    // 0x244cf0: 0x5260001c  beql        $s3, $zero, . + 4 + (0x1C << 2)
label_244cf4:
    if (ctx->pc == 0x244CF4u) {
        ctx->pc = 0x244CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CF0u;
        // 0x244cf4: 0xde240020  ld          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244CF8u;
        goto label_244cf8;
    }
    ctx->pc = 0x244CF0u;
    {
        const bool branch_taken_0x244cf0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x244cf0) {
            ctx->pc = 0x244CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244CF0u;
            // 0x244cf4: 0xde240020  ld          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244D64u;
            goto label_244d64;
        }
    }
    ctx->pc = 0x244CF8u;
label_244cf8:
    // 0x244cf8: 0x8e76000c  lw          $s6, 0xC($s3)
    ctx->pc = 0x244cf8u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_244cfc:
    // 0x244cfc: 0x52600019  beql        $s3, $zero, . + 4 + (0x19 << 2)
label_244d00:
    if (ctx->pc == 0x244D00u) {
        ctx->pc = 0x244D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244CFCu;
        // 0x244d00: 0xde240020  ld          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D04u;
        goto label_244d04;
    }
    ctx->pc = 0x244CFCu;
    {
        const bool branch_taken_0x244cfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x244cfc) {
            ctx->pc = 0x244D00u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244CFCu;
            // 0x244d00: 0xde240020  ld          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244D64u;
            goto label_244d64;
        }
    }
    ctx->pc = 0x244D04u;
label_244d04:
    // 0x244d04: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x244d04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_244d08:
    // 0x244d08: 0x50730016  beql        $v1, $s3, . + 4 + (0x16 << 2)
label_244d0c:
    if (ctx->pc == 0x244D0Cu) {
        ctx->pc = 0x244D0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D08u;
        // 0x244d0c: 0xde240020  ld          $a0, 0x20($s1) (Delay Slot)
        SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D10u;
        goto label_244d10;
    }
    ctx->pc = 0x244D08u;
    {
        const bool branch_taken_0x244d08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        if (branch_taken_0x244d08) {
            ctx->pc = 0x244D0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244D08u;
            // 0x244d0c: 0xde240020  ld          $a0, 0x20($s1) (Delay Slot)
            SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244D64u;
            goto label_244d64;
        }
    }
    ctx->pc = 0x244D10u;
label_244d10:
    // 0x244d10: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
label_244d14:
    if (ctx->pc == 0x244D14u) {
        ctx->pc = 0x244D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D10u;
        // 0x244d14: 0x8c620030  lw          $v0, 0x30($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D18u;
        goto label_244d18;
    }
    ctx->pc = 0x244D10u;
    {
        const bool branch_taken_0x244d10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d10) {
            ctx->pc = 0x244D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244D10u;
            // 0x244d14: 0x8c620030  lw          $v0, 0x30($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244D38u;
            goto label_244d38;
        }
    }
    ctx->pc = 0x244D18u;
label_244d18:
    // 0x244d18: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x244d18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_244d1c:
    // 0x244d1c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_244d20:
    if (ctx->pc == 0x244D20u) {
        ctx->pc = 0x244D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D1Cu;
        // 0x244d20: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D24u;
        goto label_244d24;
    }
    ctx->pc = 0x244D1Cu;
    {
        const bool branch_taken_0x244d1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D1Cu;
        // 0x244d20: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d1c) {
            ctx->pc = 0x244D34u;
            goto label_244d34;
        }
    }
    ctx->pc = 0x244D24u;
label_244d24:
    // 0x244d24: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x244d24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_244d28:
    // 0x244d28: 0x40f809  jalr        $v0
label_244d2c:
    if (ctx->pc == 0x244D2Cu) {
        ctx->pc = 0x244D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D28u;
        // 0x244d2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D30u;
        goto label_244d30;
    }
    ctx->pc = 0x244D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244D30u);
        ctx->pc = 0x244D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D28u;
        // 0x244d2c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D28u, 0x244D30u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244D30u;
label_244d30:
    // 0x244d30: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x244d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_244d34:
    // 0x244d34: 0x8c620030  lw          $v0, 0x30($v1)
    ctx->pc = 0x244d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_244d38:
    // 0x244d38: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x244d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_244d3c:
    // 0x244d3c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_244d40:
    if (ctx->pc == 0x244D40u) {
        ctx->pc = 0x244D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D3Cu;
        // 0x244d40: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D44u;
        goto label_244d44;
    }
    ctx->pc = 0x244D3Cu;
    {
        const bool branch_taken_0x244d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D3Cu;
        // 0x244d40: 0xac620030  sw          $v0, 0x30($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d3c) {
            ctx->pc = 0x244D4Cu;
            goto label_244d4c;
        }
    }
    ctx->pc = 0x244D44u;
label_244d44:
    // 0x244d44: 0xc090c82  jal         func_243208
label_244d48:
    if (ctx->pc == 0x244D48u) {
        ctx->pc = 0x244D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D44u;
        // 0x244d48: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D4Cu;
        goto label_244d4c;
    }
    ctx->pc = 0x244D44u;
    SET_GPR_U32(ctx, 31, 0x244D4Cu);
    ctx->pc = 0x244D48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D44u;
    // 0x244d48: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243208u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243208u, 0x244D44u, 0x244D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D4Cu;
label_244d4c:
    // 0x244d4c: 0xae13004c  sw          $s3, 0x4C($s0)
    ctx->pc = 0x244d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 19));
label_244d50:
    // 0x244d50: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x244d50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
label_244d54:
    // 0x244d54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x244d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_244d58:
    // 0x244d58: 0xae620030  sw          $v0, 0x30($s3)
    ctx->pc = 0x244d58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 48), GPR_U32(ctx, 2));
label_244d5c:
    // 0x244d5c: 0xae160048  sw          $s6, 0x48($s0)
    ctx->pc = 0x244d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 72), GPR_U32(ctx, 22));
label_244d60:
    // 0x244d60: 0xde240020  ld          $a0, 0x20($s1)
    ctx->pc = 0x244d60u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_244d64:
    // 0x244d64: 0x26250028  addiu       $a1, $s1, 0x28
    ctx->pc = 0x244d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 40));
label_244d68:
    // 0x244d68: 0xc0913b8  jal         func_244EE0
label_244d6c:
    if (ctx->pc == 0x244D6Cu) {
        ctx->pc = 0x244D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D68u;
        // 0x244d6c: 0x26060058  addiu       $a2, $s0, 0x58 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D70u;
        goto label_244d70;
    }
    ctx->pc = 0x244D68u;
    SET_GPR_U32(ctx, 31, 0x244D70u);
    ctx->pc = 0x244D6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244D68u;
    // 0x244d6c: 0x26060058  addiu       $a2, $s0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x244EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244EE0u, 0x244D68u, 0x244D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244D70u;
label_244d70:
    // 0x244d70: 0x8e02004c  lw          $v0, 0x4C($s0)
    ctx->pc = 0x244d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
label_244d74:
    // 0x244d74: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
label_244d78:
    if (ctx->pc == 0x244D78u) {
        ctx->pc = 0x244D78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D74u;
        // 0x244d78: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D7Cu;
        goto label_244d7c;
    }
    ctx->pc = 0x244D74u;
    {
        const bool branch_taken_0x244d74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244d74) {
            ctx->pc = 0x244D78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244D74u;
            // 0x244d78: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244D98u;
            goto label_244d98;
        }
    }
    ctx->pc = 0x244D7Cu;
label_244d7c:
    // 0x244d7c: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x244d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_244d80:
    // 0x244d80: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_244d84:
    if (ctx->pc == 0x244D84u) {
        ctx->pc = 0x244D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D80u;
        // 0x244d84: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D88u;
        goto label_244d88;
    }
    ctx->pc = 0x244D80u;
    {
        const bool branch_taken_0x244d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D80u;
        // 0x244d84: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244d80) {
            ctx->pc = 0x244D94u;
            goto label_244d94;
        }
    }
    ctx->pc = 0x244D88u;
label_244d88:
    // 0x244d88: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x244d88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_244d8c:
    // 0x244d8c: 0x40f809  jalr        $v0
label_244d90:
    if (ctx->pc == 0x244D90u) {
        ctx->pc = 0x244D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D8Cu;
        // 0x244d90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244D94u;
        goto label_244d94;
    }
    ctx->pc = 0x244D8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x244D94u);
        ctx->pc = 0x244D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D8Cu;
        // 0x244d90: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244D8Cu, 0x244D94u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x244D94u;
label_244d94:
    // 0x244d94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x244d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_244d98:
    // 0x244d98: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_244d9c:
    if (ctx->pc == 0x244D9Cu) {
        ctx->pc = 0x244D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244D98u;
        // 0x244d9c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DA0u;
        goto label_244da0;
    }
    ctx->pc = 0x244D98u;
    {
        const bool branch_taken_0x244d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x244d98) {
            ctx->pc = 0x244D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244D98u;
            // 0x244d9c: 0xae020050  sw          $v0, 0x50($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244DA0u;
            goto label_244da0;
        }
    }
    ctx->pc = 0x244DA0u;
label_244da0:
    // 0x244da0: 0xde220020  ld          $v0, 0x20($s1)
    ctx->pc = 0x244da0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_244da4:
    // 0x244da4: 0xde040058  ld          $a0, 0x58($s0)
    ctx->pc = 0x244da4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 88)));
label_244da8:
    // 0x244da8: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x244da8u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_244dac:
    // 0x244dac: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x244dacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_244db0:
    // 0x244db0: 0xfe040058  sd          $a0, 0x58($s0)
    ctx->pc = 0x244db0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 4));
label_244db4:
    // 0x244db4: 0xde220020  ld          $v0, 0x20($s1)
    ctx->pc = 0x244db4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_244db8:
    // 0x244db8: 0xde230028  ld          $v1, 0x28($s1)
    ctx->pc = 0x244db8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 40)));
label_244dbc:
    // 0x244dbc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x244dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_244dc0:
    // 0x244dc0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x244dc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_244dc4:
    // 0x244dc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_244dc8:
    if (ctx->pc == 0x244DC8u) {
        ctx->pc = 0x244DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DC4u;
        // 0x244dc8: 0xfe040058  sd          $a0, 0x58($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DCCu;
        goto label_244dcc;
    }
    ctx->pc = 0x244DC4u;
    {
        const bool branch_taken_0x244dc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DC4u;
        // 0x244dc8: 0xfe040058  sd          $a0, 0x58($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 88), GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244dc4) {
            ctx->pc = 0x244DD0u;
            goto label_244dd0;
        }
    }
    ctx->pc = 0x244DCCu;
label_244dcc:
    // 0x244dcc: 0x2412005f  addiu       $s2, $zero, 0x5F
    ctx->pc = 0x244dccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 95));
label_244dd0:
    // 0x244dd0: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_244dd4:
    if (ctx->pc == 0x244DD4u) {
        ctx->pc = 0x244DD8u;
        goto label_244dd8;
    }
    ctx->pc = 0x244DD0u;
    {
        const bool branch_taken_0x244dd0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x244dd0) {
            ctx->pc = 0x244DF0u;
            goto label_244df0;
        }
    }
    ctx->pc = 0x244DD8u;
label_244dd8:
    // 0x244dd8: 0x52400003  beql        $s2, $zero, . + 4 + (0x3 << 2)
label_244ddc:
    if (ctx->pc == 0x244DDCu) {
        ctx->pc = 0x244DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DD8u;
        // 0x244ddc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DE0u;
        goto label_244de0;
    }
    ctx->pc = 0x244DD8u;
    {
        const bool branch_taken_0x244dd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x244dd8) {
            ctx->pc = 0x244DDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244DD8u;
            // 0x244ddc: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244DE8u;
            goto label_244de8;
        }
    }
    ctx->pc = 0x244DE0u;
label_244de0:
    // 0x244de0: 0x10000003  b           . + 4 + (0x3 << 2)
label_244de4:
    if (ctx->pc == 0x244DE4u) {
        ctx->pc = 0x244DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DE0u;
        // 0x244de4: 0xae320018  sw          $s2, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DE8u;
        goto label_244de8;
    }
    ctx->pc = 0x244DE0u;
    {
        const bool branch_taken_0x244de0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DE0u;
        // 0x244de4: 0xae320018  sw          $s2, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244de0) {
            ctx->pc = 0x244DF0u;
            goto label_244df0;
        }
    }
    ctx->pc = 0x244DE8u;
label_244de8:
    // 0x244de8: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x244de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_244dec:
    // 0x244dec: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x244decu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_244df0:
    // 0x244df0: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
label_244df4:
    if (ctx->pc == 0x244DF4u) {
        ctx->pc = 0x244DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DF0u;
        // 0x244df4: 0x96e20002  lhu         $v0, 0x2($s7) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244DF8u;
        goto label_244df8;
    }
    ctx->pc = 0x244DF0u;
    {
        const bool branch_taken_0x244df0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x244df0) {
            ctx->pc = 0x244DF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244DF0u;
            // 0x244df4: 0x96e20002  lhu         $v0, 0x2($s7) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244E04u;
            goto label_244e04;
        }
    }
    ctx->pc = 0x244DF8u;
label_244df8:
    // 0x244df8: 0xc090c4c  jal         func_243130
label_244dfc:
    if (ctx->pc == 0x244DFCu) {
        ctx->pc = 0x244DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244DF8u;
        // 0x244dfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E00u;
        goto label_244e00;
    }
    ctx->pc = 0x244DF8u;
    SET_GPR_U32(ctx, 31, 0x244E00u);
    ctx->pc = 0x244DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244DF8u;
    // 0x244dfc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x244DF8u, 0x244E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E00u;
label_244e00:
    // 0x244e00: 0x96e20002  lhu         $v0, 0x2($s7)
    ctx->pc = 0x244e00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 23), 2)));
label_244e04:
    // 0x244e04: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x244e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
label_244e08:
    // 0x244e08: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_244e0c:
    if (ctx->pc == 0x244E0Cu) {
        ctx->pc = 0x244E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E08u;
        // 0x244e0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E10u;
        goto label_244e10;
    }
    ctx->pc = 0x244E08u;
    {
        const bool branch_taken_0x244e08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x244E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E08u;
        // 0x244e0c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e08) {
            ctx->pc = 0x244E44u;
            goto label_244e44;
        }
    }
    ctx->pc = 0x244E10u;
label_244e10:
    // 0x244e10: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x244e10u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_244e14:
    // 0x244e14: 0x8c62fefc  lw          $v0, -0x104($v1)
    ctx->pc = 0x244e14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294967036)));
label_244e18:
    // 0x244e18: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x244e18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_244e1c:
    // 0x244e1c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_244e20:
    if (ctx->pc == 0x244E20u) {
        ctx->pc = 0x244E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E1Cu;
        // 0x244e20: 0x8ef00008  lw          $s0, 0x8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E24u;
        goto label_244e24;
    }
    ctx->pc = 0x244E1Cu;
    {
        const bool branch_taken_0x244e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x244e1c) {
            ctx->pc = 0x244E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244E1Cu;
            // 0x244e20: 0x8ef00008  lw          $s0, 0x8($s7) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244E44u;
            goto label_244e44;
        }
    }
    ctx->pc = 0x244E24u;
label_244e24:
    // 0x244e24: 0x12200003  beqz        $s1, . + 4 + (0x3 << 2)
label_244e28:
    if (ctx->pc == 0x244E28u) {
        ctx->pc = 0x244E2Cu;
        goto label_244e2c;
    }
    ctx->pc = 0x244E24u;
    {
        const bool branch_taken_0x244e24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x244e24) {
            ctx->pc = 0x244E34u;
            goto label_244e34;
        }
    }
    ctx->pc = 0x244E2Cu;
label_244e2c:
    // 0x244e2c: 0xc098560  jal         func_261580
label_244e30:
    if (ctx->pc == 0x244E30u) {
        ctx->pc = 0x244E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E2Cu;
        // 0x244e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E34u;
        goto label_244e34;
    }
    ctx->pc = 0x244E2Cu;
    SET_GPR_U32(ctx, 31, 0x244E34u);
    ctx->pc = 0x244E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E2Cu;
    // 0x244e30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x244E2Cu, 0x244E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E34u;
label_244e34:
    // 0x244e34: 0xc08a9d6  jal         func_22A758
label_244e38:
    if (ctx->pc == 0x244E38u) {
        ctx->pc = 0x244E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E34u;
        // 0x244e38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E3Cu;
        goto label_244e3c;
    }
    ctx->pc = 0x244E34u;
    SET_GPR_U32(ctx, 31, 0x244E3Cu);
    ctx->pc = 0x244E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E34u;
    // 0x244e38: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x244E34u, 0x244E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E3Cu;
label_244e3c:
    // 0x244e3c: 0x1000001c  b           . + 4 + (0x1C << 2)
label_244e40:
    if (ctx->pc == 0x244E40u) {
        ctx->pc = 0x244E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E3Cu;
        // 0x244e40: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E44u;
        goto label_244e44;
    }
    ctx->pc = 0x244E3Cu;
    {
        const bool branch_taken_0x244e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E3Cu;
        // 0x244e40: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e3c) {
            ctx->pc = 0x244EB0u;
            goto label_244eb0;
        }
    }
    ctx->pc = 0x244E44u;
label_244e44:
    // 0x244e44: 0x12200007  beqz        $s1, . + 4 + (0x7 << 2)
label_244e48:
    if (ctx->pc == 0x244E48u) {
        ctx->pc = 0x244E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E44u;
        // 0x244e48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E4Cu;
        goto label_244e4c;
    }
    ctx->pc = 0x244E44u;
    {
        const bool branch_taken_0x244e44 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E44u;
        // 0x244e48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e44) {
            ctx->pc = 0x244E64u;
            goto label_244e64;
        }
    }
    ctx->pc = 0x244E4Cu;
label_244e4c:
    // 0x244e4c: 0x96260000  lhu         $a2, 0x0($s1)
    ctx->pc = 0x244e4cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_244e50:
    // 0x244e50: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x244e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_244e54:
    // 0x244e54: 0xc08aee0  jal         func_22BB80
label_244e58:
    if (ctx->pc == 0x244E58u) {
        ctx->pc = 0x244E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E54u;
        // 0x244e58: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E5Cu;
        goto label_244e5c;
    }
    ctx->pc = 0x244E54u;
    SET_GPR_U32(ctx, 31, 0x244E5Cu);
    ctx->pc = 0x244E58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E54u;
    // 0x244e58: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22BB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22BB80u, 0x244E54u, 0x244E5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E5Cu;
label_244e5c:
    // 0x244e5c: 0xc098560  jal         func_261580
label_244e60:
    if (ctx->pc == 0x244E60u) {
        ctx->pc = 0x244E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E5Cu;
        // 0x244e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E64u;
        goto label_244e64;
    }
    ctx->pc = 0x244E5Cu;
    SET_GPR_U32(ctx, 31, 0x244E64u);
    ctx->pc = 0x244E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E5Cu;
    // 0x244e60: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x244E5Cu, 0x244E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244E64u;
label_244e64:
    // 0x244e64: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
label_244e68:
    if (ctx->pc == 0x244E68u) {
        ctx->pc = 0x244E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E64u;
        // 0x244e68: 0xa6000014  sh          $zero, 0x14($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E6Cu;
        goto label_244e6c;
    }
    ctx->pc = 0x244E64u;
    {
        const bool branch_taken_0x244e64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x244e64) {
            ctx->pc = 0x244E68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x244E64u;
            // 0x244e68: 0xa6000014  sh          $zero, 0x14($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x244E6Cu;
            goto label_244e6c;
        }
    }
    ctx->pc = 0x244E6Cu;
label_244e6c:
    // 0x244e6c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x244e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_244e70:
    // 0x244e70: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_244e74:
    if (ctx->pc == 0x244E74u) {
        ctx->pc = 0x244E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E70u;
        // 0x244e74: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244E78u;
        goto label_244e78;
    }
    ctx->pc = 0x244E70u;
    {
        const bool branch_taken_0x244e70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x244E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E70u;
        // 0x244e74: 0x3c05003a  lui         $a1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244e70) {
            ctx->pc = 0x244E84u;
            goto label_244e84;
        }
    }
    ctx->pc = 0x244E78u;
label_244e78:
    // 0x244e78: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x244e78u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_244e7c:
    // 0x244e7c: 0x24a2ffe0  addiu       $v0, $a1, -0x20
    ctx->pc = 0x244e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_244e80:
    // 0x244e80: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x244e80u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
label_244e84:
    // 0x244e84: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x244e84u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_244e88:
    // 0x244e88: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x244e88u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
label_244e8c:
    // 0x244e8c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x244e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_244e90:
    // 0x244e90: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x244e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_244e94:
    // 0x244e94: 0x24c6ffd0  addiu       $a2, $a2, -0x30
    ctx->pc = 0x244e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967248));
label_244e98:
    // 0x244e98: 0xc090a8e  jal         func_242A38
label_244e9c:
    if (ctx->pc == 0x244E9Cu) {
        ctx->pc = 0x244E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244E98u;
        // 0x244e9c: 0x24e7ffc0  addiu       $a3, $a3, -0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244EA0u;
        goto label_244ea0;
    }
    ctx->pc = 0x244E98u;
    SET_GPR_U32(ctx, 31, 0x244EA0u);
    ctx->pc = 0x244E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x244E98u;
    // 0x244e9c: 0x24e7ffc0  addiu       $a3, $a3, -0x40 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242A38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242A38u, 0x244E98u, 0x244EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x244EA0u;
label_244ea0:
    // 0x244ea0: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
label_244ea4:
    if (ctx->pc == 0x244EA4u) {
        ctx->pc = 0x244EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EA0u;
        // 0x244ea4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244EA8u;
        goto label_244ea8;
    }
    ctx->pc = 0x244EA0u;
    {
        const bool branch_taken_0x244ea0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x244EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244EA0u;
        // 0x244ea4: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x244ea0) {
            ctx->pc = 0x244EACu;
            goto label_244eac;
        }
    }
    ctx->pc = 0x244EA8u;
label_244ea8:
    // 0x244ea8: 0xa6020014  sh          $v0, 0x14($s0)
    ctx->pc = 0x244ea8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 20), (uint16_t)GPR_U32(ctx, 2));
label_244eac:
    // 0x244eac: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x244eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_244eb0:
    // 0x244eb0: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x244eb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_244eb4:
    // 0x244eb4: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x244eb4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_244eb8:
    // 0x244eb8: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x244eb8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_244ebc:
    // 0x244ebc: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x244ebcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_244ec0:
    // 0x244ec0: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x244ec0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_244ec4:
    // 0x244ec4: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x244ec4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_244ec8:
    // 0x244ec8: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x244ec8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_244ecc:
    // 0x244ecc: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x244eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_244ed0:
    // 0x244ed0: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x244ed0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_244ed4:
    // 0x244ed4: 0x3e00008  jr          $ra
label_244ed8:
    if (ctx->pc == 0x244ED8u) {
        ctx->pc = 0x244ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244ED4u;
        // 0x244ed8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x244EDCu;
        goto label_244edc;
    }
    ctx->pc = 0x244ED4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x244ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x244ED4u;
        // 0x244ed8: 0x27bd0150  addiu       $sp, $sp, 0x150 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x244ED4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x244EDCu;
label_244edc:
    // 0x244edc: 0x0  nop
    ctx->pc = 0x244edcu;
    // NOP
}
