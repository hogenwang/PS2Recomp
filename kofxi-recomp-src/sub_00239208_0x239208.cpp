#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00239208
// Address: 0x239208 - 0x239bc8
void sub_00239208_0x239208(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00239208_0x239208");
#endif

    switch (ctx->pc) {
        case 0x239208u: goto label_239208;
        case 0x23920cu: goto label_23920c;
        case 0x239210u: goto label_239210;
        case 0x239214u: goto label_239214;
        case 0x239218u: goto label_239218;
        case 0x23921cu: goto label_23921c;
        case 0x239220u: goto label_239220;
        case 0x239224u: goto label_239224;
        case 0x239228u: goto label_239228;
        case 0x23922cu: goto label_23922c;
        case 0x239230u: goto label_239230;
        case 0x239234u: goto label_239234;
        case 0x239238u: goto label_239238;
        case 0x23923cu: goto label_23923c;
        case 0x239240u: goto label_239240;
        case 0x239244u: goto label_239244;
        case 0x239248u: goto label_239248;
        case 0x23924cu: goto label_23924c;
        case 0x239250u: goto label_239250;
        case 0x239254u: goto label_239254;
        case 0x239258u: goto label_239258;
        case 0x23925cu: goto label_23925c;
        case 0x239260u: goto label_239260;
        case 0x239264u: goto label_239264;
        case 0x239268u: goto label_239268;
        case 0x23926cu: goto label_23926c;
        case 0x239270u: goto label_239270;
        case 0x239274u: goto label_239274;
        case 0x239278u: goto label_239278;
        case 0x23927cu: goto label_23927c;
        case 0x239280u: goto label_239280;
        case 0x239284u: goto label_239284;
        case 0x239288u: goto label_239288;
        case 0x23928cu: goto label_23928c;
        case 0x239290u: goto label_239290;
        case 0x239294u: goto label_239294;
        case 0x239298u: goto label_239298;
        case 0x23929cu: goto label_23929c;
        case 0x2392a0u: goto label_2392a0;
        case 0x2392a4u: goto label_2392a4;
        case 0x2392a8u: goto label_2392a8;
        case 0x2392acu: goto label_2392ac;
        case 0x2392b0u: goto label_2392b0;
        case 0x2392b4u: goto label_2392b4;
        case 0x2392b8u: goto label_2392b8;
        case 0x2392bcu: goto label_2392bc;
        case 0x2392c0u: goto label_2392c0;
        case 0x2392c4u: goto label_2392c4;
        case 0x2392c8u: goto label_2392c8;
        case 0x2392ccu: goto label_2392cc;
        case 0x2392d0u: goto label_2392d0;
        case 0x2392d4u: goto label_2392d4;
        case 0x2392d8u: goto label_2392d8;
        case 0x2392dcu: goto label_2392dc;
        case 0x2392e0u: goto label_2392e0;
        case 0x2392e4u: goto label_2392e4;
        case 0x2392e8u: goto label_2392e8;
        case 0x2392ecu: goto label_2392ec;
        case 0x2392f0u: goto label_2392f0;
        case 0x2392f4u: goto label_2392f4;
        case 0x2392f8u: goto label_2392f8;
        case 0x2392fcu: goto label_2392fc;
        case 0x239300u: goto label_239300;
        case 0x239304u: goto label_239304;
        case 0x239308u: goto label_239308;
        case 0x23930cu: goto label_23930c;
        case 0x239310u: goto label_239310;
        case 0x239314u: goto label_239314;
        case 0x239318u: goto label_239318;
        case 0x23931cu: goto label_23931c;
        case 0x239320u: goto label_239320;
        case 0x239324u: goto label_239324;
        case 0x239328u: goto label_239328;
        case 0x23932cu: goto label_23932c;
        case 0x239330u: goto label_239330;
        case 0x239334u: goto label_239334;
        case 0x239338u: goto label_239338;
        case 0x23933cu: goto label_23933c;
        case 0x239340u: goto label_239340;
        case 0x239344u: goto label_239344;
        case 0x239348u: goto label_239348;
        case 0x23934cu: goto label_23934c;
        case 0x239350u: goto label_239350;
        case 0x239354u: goto label_239354;
        case 0x239358u: goto label_239358;
        case 0x23935cu: goto label_23935c;
        case 0x239360u: goto label_239360;
        case 0x239364u: goto label_239364;
        case 0x239368u: goto label_239368;
        case 0x23936cu: goto label_23936c;
        case 0x239370u: goto label_239370;
        case 0x239374u: goto label_239374;
        case 0x239378u: goto label_239378;
        case 0x23937cu: goto label_23937c;
        case 0x239380u: goto label_239380;
        case 0x239384u: goto label_239384;
        case 0x239388u: goto label_239388;
        case 0x23938cu: goto label_23938c;
        case 0x239390u: goto label_239390;
        case 0x239394u: goto label_239394;
        case 0x239398u: goto label_239398;
        case 0x23939cu: goto label_23939c;
        case 0x2393a0u: goto label_2393a0;
        case 0x2393a4u: goto label_2393a4;
        case 0x2393a8u: goto label_2393a8;
        case 0x2393acu: goto label_2393ac;
        case 0x2393b0u: goto label_2393b0;
        case 0x2393b4u: goto label_2393b4;
        case 0x2393b8u: goto label_2393b8;
        case 0x2393bcu: goto label_2393bc;
        case 0x2393c0u: goto label_2393c0;
        case 0x2393c4u: goto label_2393c4;
        case 0x2393c8u: goto label_2393c8;
        case 0x2393ccu: goto label_2393cc;
        case 0x2393d0u: goto label_2393d0;
        case 0x2393d4u: goto label_2393d4;
        case 0x2393d8u: goto label_2393d8;
        case 0x2393dcu: goto label_2393dc;
        case 0x2393e0u: goto label_2393e0;
        case 0x2393e4u: goto label_2393e4;
        case 0x2393e8u: goto label_2393e8;
        case 0x2393ecu: goto label_2393ec;
        case 0x2393f0u: goto label_2393f0;
        case 0x2393f4u: goto label_2393f4;
        case 0x2393f8u: goto label_2393f8;
        case 0x2393fcu: goto label_2393fc;
        case 0x239400u: goto label_239400;
        case 0x239404u: goto label_239404;
        case 0x239408u: goto label_239408;
        case 0x23940cu: goto label_23940c;
        case 0x239410u: goto label_239410;
        case 0x239414u: goto label_239414;
        case 0x239418u: goto label_239418;
        case 0x23941cu: goto label_23941c;
        case 0x239420u: goto label_239420;
        case 0x239424u: goto label_239424;
        case 0x239428u: goto label_239428;
        case 0x23942cu: goto label_23942c;
        case 0x239430u: goto label_239430;
        case 0x239434u: goto label_239434;
        case 0x239438u: goto label_239438;
        case 0x23943cu: goto label_23943c;
        case 0x239440u: goto label_239440;
        case 0x239444u: goto label_239444;
        case 0x239448u: goto label_239448;
        case 0x23944cu: goto label_23944c;
        case 0x239450u: goto label_239450;
        case 0x239454u: goto label_239454;
        case 0x239458u: goto label_239458;
        case 0x23945cu: goto label_23945c;
        case 0x239460u: goto label_239460;
        case 0x239464u: goto label_239464;
        case 0x239468u: goto label_239468;
        case 0x23946cu: goto label_23946c;
        case 0x239470u: goto label_239470;
        case 0x239474u: goto label_239474;
        case 0x239478u: goto label_239478;
        case 0x23947cu: goto label_23947c;
        case 0x239480u: goto label_239480;
        case 0x239484u: goto label_239484;
        case 0x239488u: goto label_239488;
        case 0x23948cu: goto label_23948c;
        case 0x239490u: goto label_239490;
        case 0x239494u: goto label_239494;
        case 0x239498u: goto label_239498;
        case 0x23949cu: goto label_23949c;
        case 0x2394a0u: goto label_2394a0;
        case 0x2394a4u: goto label_2394a4;
        case 0x2394a8u: goto label_2394a8;
        case 0x2394acu: goto label_2394ac;
        case 0x2394b0u: goto label_2394b0;
        case 0x2394b4u: goto label_2394b4;
        case 0x2394b8u: goto label_2394b8;
        case 0x2394bcu: goto label_2394bc;
        case 0x2394c0u: goto label_2394c0;
        case 0x2394c4u: goto label_2394c4;
        case 0x2394c8u: goto label_2394c8;
        case 0x2394ccu: goto label_2394cc;
        case 0x2394d0u: goto label_2394d0;
        case 0x2394d4u: goto label_2394d4;
        case 0x2394d8u: goto label_2394d8;
        case 0x2394dcu: goto label_2394dc;
        case 0x2394e0u: goto label_2394e0;
        case 0x2394e4u: goto label_2394e4;
        case 0x2394e8u: goto label_2394e8;
        case 0x2394ecu: goto label_2394ec;
        case 0x2394f0u: goto label_2394f0;
        case 0x2394f4u: goto label_2394f4;
        case 0x2394f8u: goto label_2394f8;
        case 0x2394fcu: goto label_2394fc;
        case 0x239500u: goto label_239500;
        case 0x239504u: goto label_239504;
        case 0x239508u: goto label_239508;
        case 0x23950cu: goto label_23950c;
        case 0x239510u: goto label_239510;
        case 0x239514u: goto label_239514;
        case 0x239518u: goto label_239518;
        case 0x23951cu: goto label_23951c;
        case 0x239520u: goto label_239520;
        case 0x239524u: goto label_239524;
        case 0x239528u: goto label_239528;
        case 0x23952cu: goto label_23952c;
        case 0x239530u: goto label_239530;
        case 0x239534u: goto label_239534;
        case 0x239538u: goto label_239538;
        case 0x23953cu: goto label_23953c;
        case 0x239540u: goto label_239540;
        case 0x239544u: goto label_239544;
        case 0x239548u: goto label_239548;
        case 0x23954cu: goto label_23954c;
        case 0x239550u: goto label_239550;
        case 0x239554u: goto label_239554;
        case 0x239558u: goto label_239558;
        case 0x23955cu: goto label_23955c;
        case 0x239560u: goto label_239560;
        case 0x239564u: goto label_239564;
        case 0x239568u: goto label_239568;
        case 0x23956cu: goto label_23956c;
        case 0x239570u: goto label_239570;
        case 0x239574u: goto label_239574;
        case 0x239578u: goto label_239578;
        case 0x23957cu: goto label_23957c;
        case 0x239580u: goto label_239580;
        case 0x239584u: goto label_239584;
        case 0x239588u: goto label_239588;
        case 0x23958cu: goto label_23958c;
        case 0x239590u: goto label_239590;
        case 0x239594u: goto label_239594;
        case 0x239598u: goto label_239598;
        case 0x23959cu: goto label_23959c;
        case 0x2395a0u: goto label_2395a0;
        case 0x2395a4u: goto label_2395a4;
        case 0x2395a8u: goto label_2395a8;
        case 0x2395acu: goto label_2395ac;
        case 0x2395b0u: goto label_2395b0;
        case 0x2395b4u: goto label_2395b4;
        case 0x2395b8u: goto label_2395b8;
        case 0x2395bcu: goto label_2395bc;
        case 0x2395c0u: goto label_2395c0;
        case 0x2395c4u: goto label_2395c4;
        case 0x2395c8u: goto label_2395c8;
        case 0x2395ccu: goto label_2395cc;
        case 0x2395d0u: goto label_2395d0;
        case 0x2395d4u: goto label_2395d4;
        case 0x2395d8u: goto label_2395d8;
        case 0x2395dcu: goto label_2395dc;
        case 0x2395e0u: goto label_2395e0;
        case 0x2395e4u: goto label_2395e4;
        case 0x2395e8u: goto label_2395e8;
        case 0x2395ecu: goto label_2395ec;
        case 0x2395f0u: goto label_2395f0;
        case 0x2395f4u: goto label_2395f4;
        case 0x2395f8u: goto label_2395f8;
        case 0x2395fcu: goto label_2395fc;
        case 0x239600u: goto label_239600;
        case 0x239604u: goto label_239604;
        case 0x239608u: goto label_239608;
        case 0x23960cu: goto label_23960c;
        case 0x239610u: goto label_239610;
        case 0x239614u: goto label_239614;
        case 0x239618u: goto label_239618;
        case 0x23961cu: goto label_23961c;
        case 0x239620u: goto label_239620;
        case 0x239624u: goto label_239624;
        case 0x239628u: goto label_239628;
        case 0x23962cu: goto label_23962c;
        case 0x239630u: goto label_239630;
        case 0x239634u: goto label_239634;
        case 0x239638u: goto label_239638;
        case 0x23963cu: goto label_23963c;
        case 0x239640u: goto label_239640;
        case 0x239644u: goto label_239644;
        case 0x239648u: goto label_239648;
        case 0x23964cu: goto label_23964c;
        case 0x239650u: goto label_239650;
        case 0x239654u: goto label_239654;
        case 0x239658u: goto label_239658;
        case 0x23965cu: goto label_23965c;
        case 0x239660u: goto label_239660;
        case 0x239664u: goto label_239664;
        case 0x239668u: goto label_239668;
        case 0x23966cu: goto label_23966c;
        case 0x239670u: goto label_239670;
        case 0x239674u: goto label_239674;
        case 0x239678u: goto label_239678;
        case 0x23967cu: goto label_23967c;
        case 0x239680u: goto label_239680;
        case 0x239684u: goto label_239684;
        case 0x239688u: goto label_239688;
        case 0x23968cu: goto label_23968c;
        case 0x239690u: goto label_239690;
        case 0x239694u: goto label_239694;
        case 0x239698u: goto label_239698;
        case 0x23969cu: goto label_23969c;
        case 0x2396a0u: goto label_2396a0;
        case 0x2396a4u: goto label_2396a4;
        case 0x2396a8u: goto label_2396a8;
        case 0x2396acu: goto label_2396ac;
        case 0x2396b0u: goto label_2396b0;
        case 0x2396b4u: goto label_2396b4;
        case 0x2396b8u: goto label_2396b8;
        case 0x2396bcu: goto label_2396bc;
        case 0x2396c0u: goto label_2396c0;
        case 0x2396c4u: goto label_2396c4;
        case 0x2396c8u: goto label_2396c8;
        case 0x2396ccu: goto label_2396cc;
        case 0x2396d0u: goto label_2396d0;
        case 0x2396d4u: goto label_2396d4;
        case 0x2396d8u: goto label_2396d8;
        case 0x2396dcu: goto label_2396dc;
        case 0x2396e0u: goto label_2396e0;
        case 0x2396e4u: goto label_2396e4;
        case 0x2396e8u: goto label_2396e8;
        case 0x2396ecu: goto label_2396ec;
        case 0x2396f0u: goto label_2396f0;
        case 0x2396f4u: goto label_2396f4;
        case 0x2396f8u: goto label_2396f8;
        case 0x2396fcu: goto label_2396fc;
        case 0x239700u: goto label_239700;
        case 0x239704u: goto label_239704;
        case 0x239708u: goto label_239708;
        case 0x23970cu: goto label_23970c;
        case 0x239710u: goto label_239710;
        case 0x239714u: goto label_239714;
        case 0x239718u: goto label_239718;
        case 0x23971cu: goto label_23971c;
        case 0x239720u: goto label_239720;
        case 0x239724u: goto label_239724;
        case 0x239728u: goto label_239728;
        case 0x23972cu: goto label_23972c;
        case 0x239730u: goto label_239730;
        case 0x239734u: goto label_239734;
        case 0x239738u: goto label_239738;
        case 0x23973cu: goto label_23973c;
        case 0x239740u: goto label_239740;
        case 0x239744u: goto label_239744;
        case 0x239748u: goto label_239748;
        case 0x23974cu: goto label_23974c;
        case 0x239750u: goto label_239750;
        case 0x239754u: goto label_239754;
        case 0x239758u: goto label_239758;
        case 0x23975cu: goto label_23975c;
        case 0x239760u: goto label_239760;
        case 0x239764u: goto label_239764;
        case 0x239768u: goto label_239768;
        case 0x23976cu: goto label_23976c;
        case 0x239770u: goto label_239770;
        case 0x239774u: goto label_239774;
        case 0x239778u: goto label_239778;
        case 0x23977cu: goto label_23977c;
        case 0x239780u: goto label_239780;
        case 0x239784u: goto label_239784;
        case 0x239788u: goto label_239788;
        case 0x23978cu: goto label_23978c;
        case 0x239790u: goto label_239790;
        case 0x239794u: goto label_239794;
        case 0x239798u: goto label_239798;
        case 0x23979cu: goto label_23979c;
        case 0x2397a0u: goto label_2397a0;
        case 0x2397a4u: goto label_2397a4;
        case 0x2397a8u: goto label_2397a8;
        case 0x2397acu: goto label_2397ac;
        case 0x2397b0u: goto label_2397b0;
        case 0x2397b4u: goto label_2397b4;
        case 0x2397b8u: goto label_2397b8;
        case 0x2397bcu: goto label_2397bc;
        case 0x2397c0u: goto label_2397c0;
        case 0x2397c4u: goto label_2397c4;
        case 0x2397c8u: goto label_2397c8;
        case 0x2397ccu: goto label_2397cc;
        case 0x2397d0u: goto label_2397d0;
        case 0x2397d4u: goto label_2397d4;
        case 0x2397d8u: goto label_2397d8;
        case 0x2397dcu: goto label_2397dc;
        case 0x2397e0u: goto label_2397e0;
        case 0x2397e4u: goto label_2397e4;
        case 0x2397e8u: goto label_2397e8;
        case 0x2397ecu: goto label_2397ec;
        case 0x2397f0u: goto label_2397f0;
        case 0x2397f4u: goto label_2397f4;
        case 0x2397f8u: goto label_2397f8;
        case 0x2397fcu: goto label_2397fc;
        case 0x239800u: goto label_239800;
        case 0x239804u: goto label_239804;
        case 0x239808u: goto label_239808;
        case 0x23980cu: goto label_23980c;
        case 0x239810u: goto label_239810;
        case 0x239814u: goto label_239814;
        case 0x239818u: goto label_239818;
        case 0x23981cu: goto label_23981c;
        case 0x239820u: goto label_239820;
        case 0x239824u: goto label_239824;
        case 0x239828u: goto label_239828;
        case 0x23982cu: goto label_23982c;
        case 0x239830u: goto label_239830;
        case 0x239834u: goto label_239834;
        case 0x239838u: goto label_239838;
        case 0x23983cu: goto label_23983c;
        case 0x239840u: goto label_239840;
        case 0x239844u: goto label_239844;
        case 0x239848u: goto label_239848;
        case 0x23984cu: goto label_23984c;
        case 0x239850u: goto label_239850;
        case 0x239854u: goto label_239854;
        case 0x239858u: goto label_239858;
        case 0x23985cu: goto label_23985c;
        case 0x239860u: goto label_239860;
        case 0x239864u: goto label_239864;
        case 0x239868u: goto label_239868;
        case 0x23986cu: goto label_23986c;
        case 0x239870u: goto label_239870;
        case 0x239874u: goto label_239874;
        case 0x239878u: goto label_239878;
        case 0x23987cu: goto label_23987c;
        case 0x239880u: goto label_239880;
        case 0x239884u: goto label_239884;
        case 0x239888u: goto label_239888;
        case 0x23988cu: goto label_23988c;
        case 0x239890u: goto label_239890;
        case 0x239894u: goto label_239894;
        case 0x239898u: goto label_239898;
        case 0x23989cu: goto label_23989c;
        case 0x2398a0u: goto label_2398a0;
        case 0x2398a4u: goto label_2398a4;
        case 0x2398a8u: goto label_2398a8;
        case 0x2398acu: goto label_2398ac;
        case 0x2398b0u: goto label_2398b0;
        case 0x2398b4u: goto label_2398b4;
        case 0x2398b8u: goto label_2398b8;
        case 0x2398bcu: goto label_2398bc;
        case 0x2398c0u: goto label_2398c0;
        case 0x2398c4u: goto label_2398c4;
        case 0x2398c8u: goto label_2398c8;
        case 0x2398ccu: goto label_2398cc;
        case 0x2398d0u: goto label_2398d0;
        case 0x2398d4u: goto label_2398d4;
        case 0x2398d8u: goto label_2398d8;
        case 0x2398dcu: goto label_2398dc;
        case 0x2398e0u: goto label_2398e0;
        case 0x2398e4u: goto label_2398e4;
        case 0x2398e8u: goto label_2398e8;
        case 0x2398ecu: goto label_2398ec;
        case 0x2398f0u: goto label_2398f0;
        case 0x2398f4u: goto label_2398f4;
        case 0x2398f8u: goto label_2398f8;
        case 0x2398fcu: goto label_2398fc;
        case 0x239900u: goto label_239900;
        case 0x239904u: goto label_239904;
        case 0x239908u: goto label_239908;
        case 0x23990cu: goto label_23990c;
        case 0x239910u: goto label_239910;
        case 0x239914u: goto label_239914;
        case 0x239918u: goto label_239918;
        case 0x23991cu: goto label_23991c;
        case 0x239920u: goto label_239920;
        case 0x239924u: goto label_239924;
        case 0x239928u: goto label_239928;
        case 0x23992cu: goto label_23992c;
        case 0x239930u: goto label_239930;
        case 0x239934u: goto label_239934;
        case 0x239938u: goto label_239938;
        case 0x23993cu: goto label_23993c;
        case 0x239940u: goto label_239940;
        case 0x239944u: goto label_239944;
        case 0x239948u: goto label_239948;
        case 0x23994cu: goto label_23994c;
        case 0x239950u: goto label_239950;
        case 0x239954u: goto label_239954;
        case 0x239958u: goto label_239958;
        case 0x23995cu: goto label_23995c;
        case 0x239960u: goto label_239960;
        case 0x239964u: goto label_239964;
        case 0x239968u: goto label_239968;
        case 0x23996cu: goto label_23996c;
        case 0x239970u: goto label_239970;
        case 0x239974u: goto label_239974;
        case 0x239978u: goto label_239978;
        case 0x23997cu: goto label_23997c;
        case 0x239980u: goto label_239980;
        case 0x239984u: goto label_239984;
        case 0x239988u: goto label_239988;
        case 0x23998cu: goto label_23998c;
        case 0x239990u: goto label_239990;
        case 0x239994u: goto label_239994;
        case 0x239998u: goto label_239998;
        case 0x23999cu: goto label_23999c;
        case 0x2399a0u: goto label_2399a0;
        case 0x2399a4u: goto label_2399a4;
        case 0x2399a8u: goto label_2399a8;
        case 0x2399acu: goto label_2399ac;
        case 0x2399b0u: goto label_2399b0;
        case 0x2399b4u: goto label_2399b4;
        case 0x2399b8u: goto label_2399b8;
        case 0x2399bcu: goto label_2399bc;
        case 0x2399c0u: goto label_2399c0;
        case 0x2399c4u: goto label_2399c4;
        case 0x2399c8u: goto label_2399c8;
        case 0x2399ccu: goto label_2399cc;
        case 0x2399d0u: goto label_2399d0;
        case 0x2399d4u: goto label_2399d4;
        case 0x2399d8u: goto label_2399d8;
        case 0x2399dcu: goto label_2399dc;
        case 0x2399e0u: goto label_2399e0;
        case 0x2399e4u: goto label_2399e4;
        case 0x2399e8u: goto label_2399e8;
        case 0x2399ecu: goto label_2399ec;
        case 0x2399f0u: goto label_2399f0;
        case 0x2399f4u: goto label_2399f4;
        case 0x2399f8u: goto label_2399f8;
        case 0x2399fcu: goto label_2399fc;
        case 0x239a00u: goto label_239a00;
        case 0x239a04u: goto label_239a04;
        case 0x239a08u: goto label_239a08;
        case 0x239a0cu: goto label_239a0c;
        case 0x239a10u: goto label_239a10;
        case 0x239a14u: goto label_239a14;
        case 0x239a18u: goto label_239a18;
        case 0x239a1cu: goto label_239a1c;
        case 0x239a20u: goto label_239a20;
        case 0x239a24u: goto label_239a24;
        case 0x239a28u: goto label_239a28;
        case 0x239a2cu: goto label_239a2c;
        case 0x239a30u: goto label_239a30;
        case 0x239a34u: goto label_239a34;
        case 0x239a38u: goto label_239a38;
        case 0x239a3cu: goto label_239a3c;
        case 0x239a40u: goto label_239a40;
        case 0x239a44u: goto label_239a44;
        case 0x239a48u: goto label_239a48;
        case 0x239a4cu: goto label_239a4c;
        case 0x239a50u: goto label_239a50;
        case 0x239a54u: goto label_239a54;
        case 0x239a58u: goto label_239a58;
        case 0x239a5cu: goto label_239a5c;
        case 0x239a60u: goto label_239a60;
        case 0x239a64u: goto label_239a64;
        case 0x239a68u: goto label_239a68;
        case 0x239a6cu: goto label_239a6c;
        case 0x239a70u: goto label_239a70;
        case 0x239a74u: goto label_239a74;
        case 0x239a78u: goto label_239a78;
        case 0x239a7cu: goto label_239a7c;
        case 0x239a80u: goto label_239a80;
        case 0x239a84u: goto label_239a84;
        case 0x239a88u: goto label_239a88;
        case 0x239a8cu: goto label_239a8c;
        case 0x239a90u: goto label_239a90;
        case 0x239a94u: goto label_239a94;
        case 0x239a98u: goto label_239a98;
        case 0x239a9cu: goto label_239a9c;
        case 0x239aa0u: goto label_239aa0;
        case 0x239aa4u: goto label_239aa4;
        case 0x239aa8u: goto label_239aa8;
        case 0x239aacu: goto label_239aac;
        case 0x239ab0u: goto label_239ab0;
        case 0x239ab4u: goto label_239ab4;
        case 0x239ab8u: goto label_239ab8;
        case 0x239abcu: goto label_239abc;
        case 0x239ac0u: goto label_239ac0;
        case 0x239ac4u: goto label_239ac4;
        case 0x239ac8u: goto label_239ac8;
        case 0x239accu: goto label_239acc;
        case 0x239ad0u: goto label_239ad0;
        case 0x239ad4u: goto label_239ad4;
        case 0x239ad8u: goto label_239ad8;
        case 0x239adcu: goto label_239adc;
        case 0x239ae0u: goto label_239ae0;
        case 0x239ae4u: goto label_239ae4;
        case 0x239ae8u: goto label_239ae8;
        case 0x239aecu: goto label_239aec;
        case 0x239af0u: goto label_239af0;
        case 0x239af4u: goto label_239af4;
        case 0x239af8u: goto label_239af8;
        case 0x239afcu: goto label_239afc;
        case 0x239b00u: goto label_239b00;
        case 0x239b04u: goto label_239b04;
        case 0x239b08u: goto label_239b08;
        case 0x239b0cu: goto label_239b0c;
        case 0x239b10u: goto label_239b10;
        case 0x239b14u: goto label_239b14;
        case 0x239b18u: goto label_239b18;
        case 0x239b1cu: goto label_239b1c;
        case 0x239b20u: goto label_239b20;
        case 0x239b24u: goto label_239b24;
        case 0x239b28u: goto label_239b28;
        case 0x239b2cu: goto label_239b2c;
        case 0x239b30u: goto label_239b30;
        case 0x239b34u: goto label_239b34;
        case 0x239b38u: goto label_239b38;
        case 0x239b3cu: goto label_239b3c;
        case 0x239b40u: goto label_239b40;
        case 0x239b44u: goto label_239b44;
        case 0x239b48u: goto label_239b48;
        case 0x239b4cu: goto label_239b4c;
        case 0x239b50u: goto label_239b50;
        case 0x239b54u: goto label_239b54;
        case 0x239b58u: goto label_239b58;
        case 0x239b5cu: goto label_239b5c;
        case 0x239b60u: goto label_239b60;
        case 0x239b64u: goto label_239b64;
        case 0x239b68u: goto label_239b68;
        case 0x239b6cu: goto label_239b6c;
        case 0x239b70u: goto label_239b70;
        case 0x239b74u: goto label_239b74;
        case 0x239b78u: goto label_239b78;
        case 0x239b7cu: goto label_239b7c;
        case 0x239b80u: goto label_239b80;
        case 0x239b84u: goto label_239b84;
        case 0x239b88u: goto label_239b88;
        case 0x239b8cu: goto label_239b8c;
        case 0x239b90u: goto label_239b90;
        case 0x239b94u: goto label_239b94;
        case 0x239b98u: goto label_239b98;
        case 0x239b9cu: goto label_239b9c;
        case 0x239ba0u: goto label_239ba0;
        case 0x239ba4u: goto label_239ba4;
        case 0x239ba8u: goto label_239ba8;
        case 0x239bacu: goto label_239bac;
        case 0x239bb0u: goto label_239bb0;
        case 0x239bb4u: goto label_239bb4;
        case 0x239bb8u: goto label_239bb8;
        case 0x239bbcu: goto label_239bbc;
        case 0x239bc0u: goto label_239bc0;
        case 0x239bc4u: goto label_239bc4;
        default: break;
    }

    ctx->pc = 0x239208u;

label_239208:
    // 0x239208: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x239208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_23920c:
    // 0x23920c: 0x3e00008  jr          $ra
label_239210:
    if (ctx->pc == 0x239210u) {
        ctx->pc = 0x239210u;
            // 0x239210: 0xac40adc0  sw          $zero, -0x5240($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946240), GPR_U32(ctx, 0));
        ctx->pc = 0x239214u;
        goto label_239214;
    }
    ctx->pc = 0x23920Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23920Cu;
            // 0x239210: 0xac40adc0  sw          $zero, -0x5240($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294946240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x239214u;
label_239214:
    // 0x239214: 0x0  nop
    ctx->pc = 0x239214u;
    // NOP
label_239218:
    // 0x239218: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x239218u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_23921c:
    // 0x23921c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23921cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_239220:
    // 0x239220: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x239220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_239224:
    // 0x239224: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x239224u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_239228:
    // 0x239228: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x239228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23922c:
    // 0x23922c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x23922cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_239230:
    // 0x239230: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x239230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_239234:
    // 0x239234: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x239234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_239238:
    // 0x239238: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x239238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23923c:
    // 0x23923c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23923cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_239240:
    // 0x239240: 0x96820030  lhu         $v0, 0x30($s4)
    ctx->pc = 0x239240u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_239244:
    // 0x239244: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x239244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_239248:
    // 0x239248: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_23924c:
    if (ctx->pc == 0x23924Cu) {
        ctx->pc = 0x23924Cu;
            // 0x23924c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239250u;
        goto label_239250;
    }
    ctx->pc = 0x239248u;
    {
        const bool branch_taken_0x239248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23924Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239248u;
            // 0x23924c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239248) {
            ctx->pc = 0x239270u;
            goto label_239270;
        }
    }
    ctx->pc = 0x239250u;
label_239250:
    // 0x239250: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x239250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_239254:
    // 0x239254: 0x8e840130  lw          $a0, 0x130($s4)
    ctx->pc = 0x239254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 304)));
label_239258:
    // 0x239258: 0xde830080  ld          $v1, 0x80($s4)
    ctx->pc = 0x239258u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 128)));
label_23925c:
    // 0x23925c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x23925cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_239260:
    // 0x239260: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_239264:
    // 0x239264: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x239264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_239268:
    // 0x239268: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x239268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_23926c:
    // 0x23926c: 0xfe830080  sd          $v1, 0x80($s4)
    ctx->pc = 0x23926cu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 128), GPR_U64(ctx, 3));
label_239270:
    // 0x239270: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x239270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_239274:
    // 0x239274: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x239274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_239278:
    // 0x239278: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_23927c:
    if (ctx->pc == 0x23927Cu) {
        ctx->pc = 0x23927Cu;
            // 0x23927c: 0x8e670018  lw          $a3, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->pc = 0x239280u;
        goto label_239280;
    }
    ctx->pc = 0x239278u;
    {
        const bool branch_taken_0x239278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239278) {
            ctx->pc = 0x23927Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239278u;
            // 0x23927c: 0x8e670018  lw          $a3, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23932Cu;
            goto label_23932c;
        }
    }
    ctx->pc = 0x239280u;
label_239280:
    // 0x239280: 0x96630012  lhu         $v1, 0x12($s3)
    ctx->pc = 0x239280u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_239284:
    // 0x239284: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x239284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_239288:
    // 0x239288: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_23928c:
    if (ctx->pc == 0x23928Cu) {
        ctx->pc = 0x23928Cu;
            // 0x23928c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239290u;
        goto label_239290;
    }
    ctx->pc = 0x239288u;
    {
        const bool branch_taken_0x239288 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23928Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239288u;
            // 0x23928c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239288) {
            ctx->pc = 0x2392E4u;
            goto label_2392e4;
        }
    }
    ctx->pc = 0x239290u;
label_239290:
    // 0x239290: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x239290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_239294:
    // 0x239294: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_239298:
    if (ctx->pc == 0x239298u) {
        ctx->pc = 0x239298u;
            // 0x239298: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x23929Cu;
        goto label_23929c;
    }
    ctx->pc = 0x239294u;
    {
        const bool branch_taken_0x239294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239298u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239294u;
            // 0x239298: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239294) {
            ctx->pc = 0x2392B8u;
            goto label_2392b8;
        }
    }
    ctx->pc = 0x23929Cu;
label_23929c:
    // 0x23929c: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x23929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
label_2392a0:
    // 0x2392a0: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2392a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2392a4:
    // 0x2392a4: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2392a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2392a8:
    // 0x2392a8: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_2392ac:
    if (ctx->pc == 0x2392ACu) {
        ctx->pc = 0x2392ACu;
            // 0x2392ac: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x2392B0u;
        goto label_2392b0;
    }
    ctx->pc = 0x2392A8u;
    {
        const bool branch_taken_0x2392a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2392a8) {
            ctx->pc = 0x2392ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2392A8u;
            // 0x2392ac: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2392D0u;
            goto label_2392d0;
        }
    }
    ctx->pc = 0x2392B0u;
label_2392b0:
    // 0x2392b0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2392b4:
    if (ctx->pc == 0x2392B4u) {
        ctx->pc = 0x2392B4u;
            // 0x2392b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2392B8u;
        goto label_2392b8;
    }
    ctx->pc = 0x2392B0u;
    {
        const bool branch_taken_0x2392b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2392B0u;
            // 0x2392b4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392b0) {
            ctx->pc = 0x2392E4u;
            goto label_2392e4;
        }
    }
    ctx->pc = 0x2392B8u;
label_2392b8:
    // 0x2392b8: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x2392b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_2392bc:
    // 0x2392bc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2392bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2392c0:
    // 0x2392c0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2392c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2392c4:
    // 0x2392c4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2392c8:
    if (ctx->pc == 0x2392C8u) {
        ctx->pc = 0x2392C8u;
            // 0x2392c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2392CCu;
        goto label_2392cc;
    }
    ctx->pc = 0x2392C4u;
    {
        const bool branch_taken_0x2392c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2392c4) {
            ctx->pc = 0x2392C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2392C4u;
            // 0x2392c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2392E4u;
            goto label_2392e4;
        }
    }
    ctx->pc = 0x2392CCu;
label_2392cc:
    // 0x2392cc: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x2392ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2392d0:
    // 0x2392d0: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x2392d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_2392d4:
    // 0x2392d4: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x2392d4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_2392d8:
    // 0x2392d8: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x2392d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_2392dc:
    // 0x2392dc: 0x10000005  b           . + 4 + (0x5 << 2)
label_2392e0:
    if (ctx->pc == 0x2392E0u) {
        ctx->pc = 0x2392E0u;
            // 0x2392e0: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x2392E4u;
        goto label_2392e4;
    }
    ctx->pc = 0x2392DCu;
    {
        const bool branch_taken_0x2392dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2392DCu;
            // 0x2392e0: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392dc) {
            ctx->pc = 0x2392F4u;
            goto label_2392f4;
        }
    }
    ctx->pc = 0x2392E4u;
label_2392e4:
    // 0x2392e4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2392e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2392e8:
    // 0x2392e8: 0xc08aa1c  jal         func_22A870
label_2392ec:
    if (ctx->pc == 0x2392ECu) {
        ctx->pc = 0x2392ECu;
            // 0x2392ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2392F0u;
        goto label_2392f0;
    }
    ctx->pc = 0x2392E8u;
    SET_GPR_U32(ctx, 31, 0x2392F0u);
    ctx->pc = 0x2392ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2392E8u;
            // 0x2392ec: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A870u;
    if (runtime->hasFunction(0x22A870u)) {
        auto targetFn = runtime->lookupFunction(0x22A870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392F0u; }
        if (ctx->pc != 0x2392F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A870_0x22a870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2392F0u; }
        if (ctx->pc != 0x2392F0u) { return; }
    }
    ctx->pc = 0x2392F0u;
label_2392f0:
    // 0x2392f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2392f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2392f4:
    // 0x2392f4: 0x12600009  beqz        $s3, . + 4 + (0x9 << 2)
label_2392f8:
    if (ctx->pc == 0x2392F8u) {
        ctx->pc = 0x2392F8u;
            // 0x2392f8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x2392FCu;
        goto label_2392fc;
    }
    ctx->pc = 0x2392F4u;
    {
        const bool branch_taken_0x2392f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2392F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2392F4u;
            // 0x2392f8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2392f4) {
            ctx->pc = 0x23931Cu;
            goto label_23931c;
        }
    }
    ctx->pc = 0x2392FCu;
label_2392fc:
    // 0x2392fc: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x2392fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_239300:
    // 0x239300: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x239300u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_239304:
    // 0x239304: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_239308:
    if (ctx->pc == 0x239308u) {
        ctx->pc = 0x239308u;
            // 0x239308: 0x8e670018  lw          $a3, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->pc = 0x23930Cu;
        goto label_23930c;
    }
    ctx->pc = 0x239304u;
    {
        const bool branch_taken_0x239304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239304) {
            ctx->pc = 0x239308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239304u;
            // 0x239308: 0x8e670018  lw          $a3, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23932Cu;
            goto label_23932c;
        }
    }
    ctx->pc = 0x23930Cu;
label_23930c:
    // 0x23930c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x23930cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_239310:
    // 0x239310: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x239310u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_239314:
    // 0x239314: 0x10000004  b           . + 4 + (0x4 << 2)
label_239318:
    if (ctx->pc == 0x239318u) {
        ctx->pc = 0x239318u;
            // 0x239318: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x23931Cu;
        goto label_23931c;
    }
    ctx->pc = 0x239314u;
    {
        const bool branch_taken_0x239314 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239314u;
            // 0x239318: 0xae620018  sw          $v0, 0x18($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239314) {
            ctx->pc = 0x239328u;
            goto label_239328;
        }
    }
    ctx->pc = 0x23931Cu;
label_23931c:
    // 0x23931c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x23931cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_239320:
    // 0x239320: 0x1000010e  b           . + 4 + (0x10E << 2)
label_239324:
    if (ctx->pc == 0x239324u) {
        ctx->pc = 0x239324u;
            // 0x239324: 0x24a551c8  addiu       $a1, $a1, 0x51C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20936));
        ctx->pc = 0x239328u;
        goto label_239328;
    }
    ctx->pc = 0x239320u;
    {
        const bool branch_taken_0x239320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239320u;
            // 0x239324: 0x24a551c8  addiu       $a1, $a1, 0x51C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239320) {
            ctx->pc = 0x23975Cu;
            goto label_23975c;
        }
    }
    ctx->pc = 0x239328u;
label_239328:
    // 0x239328: 0x8e670018  lw          $a3, 0x18($s3)
    ctx->pc = 0x239328u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_23932c:
    // 0x23932c: 0x2ce20005  sltiu       $v0, $a3, 0x5
    ctx->pc = 0x23932cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_239330:
    // 0x239330: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_239334:
    if (ctx->pc == 0x239334u) {
        ctx->pc = 0x239334u;
            // 0x239334: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x239338u;
        goto label_239338;
    }
    ctx->pc = 0x239330u;
    {
        const bool branch_taken_0x239330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239330u;
            // 0x239334: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239330) {
            ctx->pc = 0x239388u;
            goto label_239388;
        }
    }
    ctx->pc = 0x239338u;
label_239338:
    // 0x239338: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x239338u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_23933c:
    // 0x23933c: 0x24a551f0  addiu       $a1, $a1, 0x51F0
    ctx->pc = 0x23933cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 20976));
label_239340:
    // 0x239340: 0xc08b5ac  jal         func_22D6B0
label_239344:
    if (ctx->pc == 0x239344u) {
        ctx->pc = 0x239344u;
            // 0x239344: 0x26860014  addiu       $a2, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->pc = 0x239348u;
        goto label_239348;
    }
    ctx->pc = 0x239340u;
    SET_GPR_U32(ctx, 31, 0x239348u);
    ctx->pc = 0x239344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239340u;
            // 0x239344: 0x26860014  addiu       $a2, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239348u; }
        if (ctx->pc != 0x239348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239348u; }
        if (ctx->pc != 0x239348u) { return; }
    }
    ctx->pc = 0x239348u;
label_239348:
    // 0x239348: 0xde830060  ld          $v1, 0x60($s4)
    ctx->pc = 0x239348u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 96)));
label_23934c:
    // 0x23934c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23934cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239350:
    // 0x239350: 0xde8200a0  ld          $v0, 0xA0($s4)
    ctx->pc = 0x239350u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 160)));
label_239354:
    // 0x239354: 0x64630001  daddiu      $v1, $v1, 0x1
    ctx->pc = 0x239354u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)1);
label_239358:
    // 0x239358: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x239358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23935c:
    // 0x23935c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x23935cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_239360:
    // 0x239360: 0xfe830060  sd          $v1, 0x60($s4)
    ctx->pc = 0x239360u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 96), GPR_U64(ctx, 3));
label_239364:
    // 0x239364: 0xfe8200a0  sd          $v0, 0xA0($s4)
    ctx->pc = 0x239364u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 160), GPR_U64(ctx, 2));
label_239368:
    // 0x239368: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x239368u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23936c:
    // 0x23936c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x23936cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_239370:
    // 0x239370: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x239370u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_239374:
    // 0x239374: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x239374u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239378:
    // 0x239378: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239378u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23937c:
    // 0x23937c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23937cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239380:
    // 0x239380: 0x808a9d6  j           func_22A758
label_239384:
    if (ctx->pc == 0x239384u) {
        ctx->pc = 0x239384u;
            // 0x239384: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x239388u;
        goto label_239388;
    }
    ctx->pc = 0x239380u;
    ctx->pc = 0x239384u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239380u;
            // 0x239384: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x239388u;
label_239388:
    // 0x239388: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x239388u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_23938c:
    // 0x23938c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x23938cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_239390:
    // 0x239390: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239394:
    if (ctx->pc == 0x239394u) {
        ctx->pc = 0x239394u;
            // 0x239394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239398u;
        goto label_239398;
    }
    ctx->pc = 0x239390u;
    {
        const bool branch_taken_0x239390 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239390u;
            // 0x239394: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239390) {
            ctx->pc = 0x2393A4u;
            goto label_2393a4;
        }
    }
    ctx->pc = 0x239398u;
label_239398:
    // 0x239398: 0xc08acea  jal         func_22B3A8
label_23939c:
    if (ctx->pc == 0x23939Cu) {
        ctx->pc = 0x23939Cu;
            // 0x23939c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2393A0u;
        goto label_2393a0;
    }
    ctx->pc = 0x239398u;
    SET_GPR_U32(ctx, 31, 0x2393A0u);
    ctx->pc = 0x23939Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239398u;
            // 0x23939c: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (runtime->hasFunction(0x22B3A8u)) {
        auto targetFn = runtime->lookupFunction(0x22B3A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2393A0u; }
        if (ctx->pc != 0x2393A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B3A8_0x22b3a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2393A0u; }
        if (ctx->pc != 0x2393A0u) { return; }
    }
    ctx->pc = 0x2393A0u;
label_2393a0:
    // 0x2393a0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2393a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2393a4:
    // 0x2393a4: 0x1260ffdd  beqz        $s3, . + 4 + (-0x23 << 2)
label_2393a8:
    if (ctx->pc == 0x2393A8u) {
        ctx->pc = 0x2393A8u;
            // 0x2393a8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x2393ACu;
        goto label_2393ac;
    }
    ctx->pc = 0x2393A4u;
    {
        const bool branch_taken_0x2393a4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2393A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2393A4u;
            // 0x2393a8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393a4) {
            ctx->pc = 0x23931Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23931c;
        }
    }
    ctx->pc = 0x2393ACu;
label_2393ac:
    // 0x2393ac: 0x8e8202cc  lw          $v0, 0x2CC($s4)
    ctx->pc = 0x2393acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 716)));
label_2393b0:
    // 0x2393b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2393b4:
    if (ctx->pc == 0x2393B4u) {
        ctx->pc = 0x2393B4u;
            // 0x2393b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2393B8u;
        goto label_2393b8;
    }
    ctx->pc = 0x2393B0u;
    {
        const bool branch_taken_0x2393b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2393B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2393B0u;
            // 0x2393b4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393b0) {
            ctx->pc = 0x2393CCu;
            goto label_2393cc;
        }
    }
    ctx->pc = 0x2393B8u;
label_2393b8:
    // 0x2393b8: 0xc090108  jal         func_240420
label_2393bc:
    if (ctx->pc == 0x2393BCu) {
        ctx->pc = 0x2393BCu;
            // 0x2393bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2393C0u;
        goto label_2393c0;
    }
    ctx->pc = 0x2393B8u;
    SET_GPR_U32(ctx, 31, 0x2393C0u);
    ctx->pc = 0x2393BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2393B8u;
            // 0x2393bc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240420u;
    if (runtime->hasFunction(0x240420u)) {
        auto targetFn = runtime->lookupFunction(0x240420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2393C0u; }
        if (ctx->pc != 0x2393C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240420_0x240420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2393C0u; }
        if (ctx->pc != 0x2393C0u) { return; }
    }
    ctx->pc = 0x2393C0u;
label_2393c0:
    // 0x2393c0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2393c0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2393c4:
    // 0x2393c4: 0x5260ffe1  beql        $s3, $zero, . + 4 + (-0x1F << 2)
label_2393c8:
    if (ctx->pc == 0x2393C8u) {
        ctx->pc = 0x2393C8u;
            // 0x2393c8: 0xde830060  ld          $v1, 0x60($s4) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->pc = 0x2393CCu;
        goto label_2393cc;
    }
    ctx->pc = 0x2393C4u;
    {
        const bool branch_taken_0x2393c4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x2393c4) {
            ctx->pc = 0x2393C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2393C4u;
            // 0x2393c8: 0xde830060  ld          $v1, 0x60($s4) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23934Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23934c;
        }
    }
    ctx->pc = 0x2393CCu;
label_2393cc:
    // 0x2393cc: 0x8e710008  lw          $s1, 0x8($s3)
    ctx->pc = 0x2393ccu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_2393d0:
    // 0x2393d0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2393d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2393d4:
    // 0x2393d4: 0xc08ac88  jal         func_22B220
label_2393d8:
    if (ctx->pc == 0x2393D8u) {
        ctx->pc = 0x2393D8u;
            // 0x2393d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x2393DCu;
        goto label_2393dc;
    }
    ctx->pc = 0x2393D4u;
    SET_GPR_U32(ctx, 31, 0x2393DCu);
    ctx->pc = 0x2393D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2393D4u;
            // 0x2393d8: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (runtime->hasFunction(0x22B220u)) {
        auto targetFn = runtime->lookupFunction(0x22B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2393DCu; }
        if (ctx->pc != 0x2393DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B220_0x22b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2393DCu; }
        if (ctx->pc != 0x2393DCu) { return; }
    }
    ctx->pc = 0x2393DCu;
label_2393dc:
    // 0x2393dc: 0x8e82012c  lw          $v0, 0x12C($s4)
    ctx->pc = 0x2393dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 300)));
label_2393e0:
    // 0x2393e0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x2393e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_2393e4:
    // 0x2393e4: 0x5440001b  bnel        $v0, $zero, . + 4 + (0x1B << 2)
label_2393e8:
    if (ctx->pc == 0x2393E8u) {
        ctx->pc = 0x2393E8u;
            // 0x2393e8: 0x92240003  lbu         $a0, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x2393ECu;
        goto label_2393ec;
    }
    ctx->pc = 0x2393E4u;
    {
        const bool branch_taken_0x2393e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2393e4) {
            ctx->pc = 0x2393E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2393E4u;
            // 0x2393e8: 0x92240003  lbu         $a0, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239454u;
            goto label_239454;
        }
    }
    ctx->pc = 0x2393ECu;
label_2393ec:
    // 0x2393ec: 0x92350000  lbu         $s5, 0x0($s1)
    ctx->pc = 0x2393ecu;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2393f0:
    // 0x2393f0: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x2393f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2393f4:
    // 0x2393f4: 0x16a20005  bne         $s5, $v0, . + 4 + (0x5 << 2)
label_2393f8:
    if (ctx->pc == 0x2393F8u) {
        ctx->pc = 0x2393F8u;
            // 0x2393f8: 0x92240003  lbu         $a0, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->pc = 0x2393FCu;
        goto label_2393fc;
    }
    ctx->pc = 0x2393F4u;
    {
        const bool branch_taken_0x2393f4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x2393F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2393F4u;
            // 0x2393f8: 0x92240003  lbu         $a0, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2393f4) {
            ctx->pc = 0x23940Cu;
            goto label_23940c;
        }
    }
    ctx->pc = 0x2393FCu;
label_2393fc:
    // 0x2393fc: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x2393fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_239400:
    // 0x239400: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x239400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_239404:
    // 0x239404: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
label_239408:
    if (ctx->pc == 0x239408u) {
        ctx->pc = 0x23940Cu;
        goto label_23940c;
    }
    ctx->pc = 0x239404u;
    {
        const bool branch_taken_0x239404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x239404) {
            ctx->pc = 0x239454u;
            goto label_239454;
        }
    }
    ctx->pc = 0x23940Cu;
label_23940c:
    // 0x23940c: 0x3c10003f  lui         $s0, 0x3F
    ctx->pc = 0x23940cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
label_239410:
    // 0x239410: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x239410u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_239414:
    // 0x239414: 0x26105220  addiu       $s0, $s0, 0x5220
    ctx->pc = 0x239414u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21024));
label_239418:
    // 0x239418: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x239418u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23941c:
    // 0x23941c: 0x92320001  lbu         $s2, 0x1($s1)
    ctx->pc = 0x23941cu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
label_239420:
    // 0x239420: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x239420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_239424:
    // 0x239424: 0x26910014  addiu       $s1, $s4, 0x14
    ctx->pc = 0x239424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_239428:
    // 0x239428: 0xc08b60c  jal         func_22D830
label_23942c:
    if (ctx->pc == 0x23942Cu) {
        ctx->pc = 0x23942Cu;
            // 0x23942c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x239430u;
        goto label_239430;
    }
    ctx->pc = 0x239428u;
    SET_GPR_U32(ctx, 31, 0x239430u);
    ctx->pc = 0x23942Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239428u;
            // 0x23942c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239430u; }
        if (ctx->pc != 0x239430u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239430u; }
        if (ctx->pc != 0x239430u) { return; }
    }
    ctx->pc = 0x239430u;
label_239430:
    // 0x239430: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x239430u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239434:
    // 0x239434: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x239434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239438:
    // 0x239438: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x239438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_23943c:
    // 0x23943c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x23943cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_239440:
    // 0x239440: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x239440u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239444:
    // 0x239444: 0xc08b5ac  jal         func_22D6B0
label_239448:
    if (ctx->pc == 0x239448u) {
        ctx->pc = 0x239448u;
            // 0x239448: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x23944Cu;
        goto label_23944c;
    }
    ctx->pc = 0x239444u;
    SET_GPR_U32(ctx, 31, 0x23944Cu);
    ctx->pc = 0x239448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239444u;
            // 0x239448: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23944Cu; }
        if (ctx->pc != 0x23944Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23944Cu; }
        if (ctx->pc != 0x23944Cu) { return; }
    }
    ctx->pc = 0x23944Cu;
label_23944c:
    // 0x23944c: 0x1000ffbf  b           . + 4 + (-0x41 << 2)
label_239450:
    if (ctx->pc == 0x239450u) {
        ctx->pc = 0x239450u;
            // 0x239450: 0xde830060  ld          $v1, 0x60($s4) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->pc = 0x239454u;
        goto label_239454;
    }
    ctx->pc = 0x23944Cu;
    {
        const bool branch_taken_0x23944c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23944Cu;
            // 0x239450: 0xde830060  ld          $v1, 0x60($s4) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23944c) {
            ctx->pc = 0x23934Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23934c;
        }
    }
    ctx->pc = 0x239454u;
label_239454:
    // 0x239454: 0x92220002  lbu         $v0, 0x2($s1)
    ctx->pc = 0x239454u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_239458:
    // 0x239458: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x239458u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_23945c:
    // 0x23945c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x23945cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_239460:
    // 0x239460: 0xc08b60c  jal         func_22D830
label_239464:
    if (ctx->pc == 0x239464u) {
        ctx->pc = 0x239464u;
            // 0x239464: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x239468u;
        goto label_239468;
    }
    ctx->pc = 0x239460u;
    SET_GPR_U32(ctx, 31, 0x239468u);
    ctx->pc = 0x239464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239460u;
            // 0x239464: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239468u; }
        if (ctx->pc != 0x239468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239468u; }
        if (ctx->pc != 0x239468u) { return; }
    }
    ctx->pc = 0x239468u;
label_239468:
    // 0x239468: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x239468u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23946c:
    // 0x23946c: 0x3402c021  ori         $v0, $zero, 0xC021
    ctx->pc = 0x23946cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
label_239470:
    // 0x239470: 0x12220058  beq         $s1, $v0, . + 4 + (0x58 << 2)
label_239474:
    if (ctx->pc == 0x239474u) {
        ctx->pc = 0x239474u;
            // 0x239474: 0x51102a  slt         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->pc = 0x239478u;
        goto label_239478;
    }
    ctx->pc = 0x239470u;
    {
        const bool branch_taken_0x239470 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x239474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239470u;
            // 0x239474: 0x51102a  slt         $v0, $v0, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239470) {
            ctx->pc = 0x2395D4u;
            goto label_2395d4;
        }
    }
    ctx->pc = 0x239478u;
label_239478:
    // 0x239478: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_23947c:
    if (ctx->pc == 0x23947Cu) {
        ctx->pc = 0x23947Cu;
            // 0x23947c: 0x3402c023  ori         $v0, $zero, 0xC023 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
        ctx->pc = 0x239480u;
        goto label_239480;
    }
    ctx->pc = 0x239478u;
    {
        const bool branch_taken_0x239478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23947Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239478u;
            // 0x23947c: 0x3402c023  ori         $v0, $zero, 0xC023 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49187);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239478) {
            ctx->pc = 0x23949Cu;
            goto label_23949c;
        }
    }
    ctx->pc = 0x239480u;
label_239480:
    // 0x239480: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x239480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_239484:
    // 0x239484: 0x12220095  beq         $s1, $v0, . + 4 + (0x95 << 2)
label_239488:
    if (ctx->pc == 0x239488u) {
        ctx->pc = 0x239488u;
            // 0x239488: 0x34028021  ori         $v0, $zero, 0x8021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
        ctx->pc = 0x23948Cu;
        goto label_23948c;
    }
    ctx->pc = 0x239484u;
    {
        const bool branch_taken_0x239484 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x239488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239484u;
            // 0x239488: 0x34028021  ori         $v0, $zero, 0x8021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32801);
        ctx->in_delay_slot = false;
        if (branch_taken_0x239484) {
            ctx->pc = 0x2396DCu;
            goto label_2396dc;
        }
    }
    ctx->pc = 0x23948Cu;
label_23948c:
    // 0x23948c: 0x52220081  beql        $s1, $v0, . + 4 + (0x81 << 2)
label_239490:
    if (ctx->pc == 0x239490u) {
        ctx->pc = 0x239490u;
            // 0x239490: 0x8e830160  lw          $v1, 0x160($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
        ctx->pc = 0x239494u;
        goto label_239494;
    }
    ctx->pc = 0x23948Cu;
    {
        const bool branch_taken_0x23948c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x23948c) {
            ctx->pc = 0x239490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23948Cu;
            // 0x239490: 0x8e830160  lw          $v1, 0x160($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239694u;
            goto label_239694;
        }
    }
    ctx->pc = 0x239494u;
label_239494:
    // 0x239494: 0x10000006  b           . + 4 + (0x6 << 2)
label_239498:
    if (ctx->pc == 0x239498u) {
        ctx->pc = 0x239498u;
            // 0x239498: 0x8e830164  lw          $v1, 0x164($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 356)));
        ctx->pc = 0x23949Cu;
        goto label_23949c;
    }
    ctx->pc = 0x239494u;
    {
        const bool branch_taken_0x239494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239498u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239494u;
            // 0x239498: 0x8e830164  lw          $v1, 0x164($s4) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 356)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239494) {
            ctx->pc = 0x2394B0u;
            goto label_2394b0;
        }
    }
    ctx->pc = 0x23949Cu;
label_23949c:
    // 0x23949c: 0x1222005c  beq         $s1, $v0, . + 4 + (0x5C << 2)
label_2394a0:
    if (ctx->pc == 0x2394A0u) {
        ctx->pc = 0x2394A0u;
            // 0x2394a0: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->pc = 0x2394A4u;
        goto label_2394a4;
    }
    ctx->pc = 0x23949Cu;
    {
        const bool branch_taken_0x23949c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2394A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23949Cu;
            // 0x2394a0: 0x3402c223  ori         $v0, $zero, 0xC223 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49699);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23949c) {
            ctx->pc = 0x239610u;
            goto label_239610;
        }
    }
    ctx->pc = 0x2394A4u;
label_2394a4:
    // 0x2394a4: 0x5222006b  beql        $s1, $v0, . + 4 + (0x6B << 2)
label_2394a8:
    if (ctx->pc == 0x2394A8u) {
        ctx->pc = 0x2394A8u;
            // 0x2394a8: 0x8e820160  lw          $v0, 0x160($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
        ctx->pc = 0x2394ACu;
        goto label_2394ac;
    }
    ctx->pc = 0x2394A4u;
    {
        const bool branch_taken_0x2394a4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2394a4) {
            ctx->pc = 0x2394A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2394A4u;
            // 0x2394a8: 0x8e820160  lw          $v0, 0x160($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239654u;
            goto label_239654;
        }
    }
    ctx->pc = 0x2394ACu;
label_2394ac:
    // 0x2394ac: 0x8e830164  lw          $v1, 0x164($s4)
    ctx->pc = 0x2394acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 356)));
label_2394b0:
    // 0x2394b0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2394b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2394b4:
    // 0x2394b4: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_2394b8:
    if (ctx->pc == 0x2394B8u) {
        ctx->pc = 0x2394B8u;
            // 0x2394b8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x2394BCu;
        goto label_2394bc;
    }
    ctx->pc = 0x2394B4u;
    {
        const bool branch_taken_0x2394b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2394B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394B4u;
            // 0x2394b8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394b4) {
            ctx->pc = 0x2395B0u;
            goto label_2395b0;
        }
    }
    ctx->pc = 0x2394BCu;
label_2394bc:
    // 0x2394bc: 0x96630012  lhu         $v1, 0x12($s3)
    ctx->pc = 0x2394bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_2394c0:
    // 0x2394c0: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2394c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2394c4:
    // 0x2394c4: 0x14400017  bnez        $v0, . + 4 + (0x17 << 2)
label_2394c8:
    if (ctx->pc == 0x2394C8u) {
        ctx->pc = 0x2394C8u;
            // 0x2394c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2394CCu;
        goto label_2394cc;
    }
    ctx->pc = 0x2394C4u;
    {
        const bool branch_taken_0x2394c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2394C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394C4u;
            // 0x2394c8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394c4) {
            ctx->pc = 0x239524u;
            goto label_239524;
        }
    }
    ctx->pc = 0x2394CCu;
label_2394cc:
    // 0x2394cc: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2394ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2394d0:
    // 0x2394d0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_2394d4:
    if (ctx->pc == 0x2394D4u) {
        ctx->pc = 0x2394D4u;
            // 0x2394d4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x2394D8u;
        goto label_2394d8;
    }
    ctx->pc = 0x2394D0u;
    {
        const bool branch_taken_0x2394d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394D0u;
            // 0x2394d4: 0x8e640008  lw          $a0, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394d0) {
            ctx->pc = 0x2394F8u;
            goto label_2394f8;
        }
    }
    ctx->pc = 0x2394D8u;
label_2394d8:
    // 0x2394d8: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x2394d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
label_2394dc:
    // 0x2394dc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2394dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2394e0:
    // 0x2394e0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2394e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2394e4:
    // 0x2394e4: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_2394e8:
    if (ctx->pc == 0x2394E8u) {
        ctx->pc = 0x2394E8u;
            // 0x2394e8: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->pc = 0x2394ECu;
        goto label_2394ec;
    }
    ctx->pc = 0x2394E4u;
    {
        const bool branch_taken_0x2394e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2394e4) {
            ctx->pc = 0x2394E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2394E4u;
            // 0x2394e8: 0x8e63000c  lw          $v1, 0xC($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239510u;
            goto label_239510;
        }
    }
    ctx->pc = 0x2394ECu;
label_2394ec:
    // 0x2394ec: 0x1000000d  b           . + 4 + (0xD << 2)
label_2394f0:
    if (ctx->pc == 0x2394F0u) {
        ctx->pc = 0x2394F0u;
            // 0x2394f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2394F4u;
        goto label_2394f4;
    }
    ctx->pc = 0x2394ECu;
    {
        const bool branch_taken_0x2394ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2394F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2394ECu;
            // 0x2394f0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2394ec) {
            ctx->pc = 0x239524u;
            goto label_239524;
        }
    }
    ctx->pc = 0x2394F4u;
label_2394f4:
    // 0x2394f4: 0x0  nop
    ctx->pc = 0x2394f4u;
    // NOP
label_2394f8:
    // 0x2394f8: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x2394f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_2394fc:
    // 0x2394fc: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x2394fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_239500:
    // 0x239500: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x239500u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_239504:
    // 0x239504: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_239508:
    if (ctx->pc == 0x239508u) {
        ctx->pc = 0x239508u;
            // 0x239508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23950Cu;
        goto label_23950c;
    }
    ctx->pc = 0x239504u;
    {
        const bool branch_taken_0x239504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239504) {
            ctx->pc = 0x239508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239504u;
            // 0x239508: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239524u;
            goto label_239524;
        }
    }
    ctx->pc = 0x23950Cu;
label_23950c:
    // 0x23950c: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x23950cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_239510:
    // 0x239510: 0x2482fffe  addiu       $v0, $a0, -0x2
    ctx->pc = 0x239510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967294));
label_239514:
    // 0x239514: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x239514u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
label_239518:
    // 0x239518: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x239518u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_23951c:
    // 0x23951c: 0x10000005  b           . + 4 + (0x5 << 2)
label_239520:
    if (ctx->pc == 0x239520u) {
        ctx->pc = 0x239520u;
            // 0x239520: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x239524u;
        goto label_239524;
    }
    ctx->pc = 0x23951Cu;
    {
        const bool branch_taken_0x23951c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23951Cu;
            // 0x239520: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23951c) {
            ctx->pc = 0x239534u;
            goto label_239534;
        }
    }
    ctx->pc = 0x239524u;
label_239524:
    // 0x239524: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x239524u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_239528:
    // 0x239528: 0xc08aa1c  jal         func_22A870
label_23952c:
    if (ctx->pc == 0x23952Cu) {
        ctx->pc = 0x23952Cu;
            // 0x23952c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x239530u;
        goto label_239530;
    }
    ctx->pc = 0x239528u;
    SET_GPR_U32(ctx, 31, 0x239530u);
    ctx->pc = 0x23952Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239528u;
            // 0x23952c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A870u;
    if (runtime->hasFunction(0x22A870u)) {
        auto targetFn = runtime->lookupFunction(0x22A870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239530u; }
        if (ctx->pc != 0x239530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A870_0x22a870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239530u; }
        if (ctx->pc != 0x239530u) { return; }
    }
    ctx->pc = 0x239530u;
label_239530:
    // 0x239530: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x239530u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239534:
    // 0x239534: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
label_239538:
    if (ctx->pc == 0x239538u) {
        ctx->pc = 0x23953Cu;
        goto label_23953c;
    }
    ctx->pc = 0x239534u;
    {
        const bool branch_taken_0x239534 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x239534) {
            ctx->pc = 0x239558u;
            goto label_239558;
        }
    }
    ctx->pc = 0x23953Cu;
label_23953c:
    // 0x23953c: 0x96620012  lhu         $v0, 0x12($s3)
    ctx->pc = 0x23953cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
label_239540:
    // 0x239540: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x239540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_239544:
    // 0x239544: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_239548:
    if (ctx->pc == 0x239548u) {
        ctx->pc = 0x23954Cu;
        goto label_23954c;
    }
    ctx->pc = 0x239544u;
    {
        const bool branch_taken_0x239544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239544) {
            ctx->pc = 0x239558u;
            goto label_239558;
        }
    }
    ctx->pc = 0x23954Cu;
label_23954c:
    // 0x23954c: 0x8e620018  lw          $v0, 0x18($s3)
    ctx->pc = 0x23954cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_239550:
    // 0x239550: 0x24420002  addiu       $v0, $v0, 0x2
    ctx->pc = 0x239550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
label_239554:
    // 0x239554: 0xae620018  sw          $v0, 0x18($s3)
    ctx->pc = 0x239554u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 24), GPR_U32(ctx, 2));
label_239558:
    // 0x239558: 0xc098552  jal         func_261548
label_23955c:
    if (ctx->pc == 0x23955Cu) {
        ctx->pc = 0x23955Cu;
            // 0x23955c: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->pc = 0x239560u;
        goto label_239560;
    }
    ctx->pc = 0x239558u;
    SET_GPR_U32(ctx, 31, 0x239560u);
    ctx->pc = 0x23955Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239558u;
            // 0x23955c: 0x8e640018  lw          $a0, 0x18($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239560u; }
        if (ctx->pc != 0x239560u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239560u; }
        if (ctx->pc != 0x239560u) { return; }
    }
    ctx->pc = 0x239560u;
label_239560:
    // 0x239560: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x239560u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239564:
    // 0x239564: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
label_239568:
    if (ctx->pc == 0x239568u) {
        ctx->pc = 0x239568u;
            // 0x239568: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23956Cu;
        goto label_23956c;
    }
    ctx->pc = 0x239564u;
    {
        const bool branch_taken_0x239564 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x239568u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239564u;
            // 0x239568: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239564) {
            ctx->pc = 0x2395ACu;
            goto label_2395ac;
        }
    }
    ctx->pc = 0x23956Cu;
label_23956c:
    // 0x23956c: 0x8e660018  lw          $a2, 0x18($s3)
    ctx->pc = 0x23956cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
label_239570:
    // 0x239570: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x239570u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239574:
    // 0x239574: 0xc08ac18  jal         func_22B060
label_239578:
    if (ctx->pc == 0x239578u) {
        ctx->pc = 0x239578u;
            // 0x239578: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23957Cu;
        goto label_23957c;
    }
    ctx->pc = 0x239574u;
    SET_GPR_U32(ctx, 31, 0x23957Cu);
    ctx->pc = 0x239578u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239574u;
            // 0x239578: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B060u;
    if (runtime->hasFunction(0x22B060u)) {
        auto targetFn = runtime->lookupFunction(0x22B060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23957Cu; }
        if (ctx->pc != 0x23957Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B060_0x22b060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23957Cu; }
        if (ctx->pc != 0x23957Cu) { return; }
    }
    ctx->pc = 0x23957Cu;
label_23957c:
    // 0x23957c: 0x8e870138  lw          $a3, 0x138($s4)
    ctx->pc = 0x23957cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 312)));
label_239580:
    // 0x239580: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x239580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_239584:
    // 0x239584: 0x3405c021  ori         $a1, $zero, 0xC021
    ctx->pc = 0x239584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49185);
label_239588:
    // 0x239588: 0x24060008  addiu       $a2, $zero, 0x8
    ctx->pc = 0x239588u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_23958c:
    // 0x23958c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x23958cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_239590:
    // 0x239590: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x239590u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_239594:
    // 0x239594: 0xae870138  sw          $a3, 0x138($s4)
    ctx->pc = 0x239594u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 312), GPR_U32(ctx, 7));
label_239598:
    // 0x239598: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x239598u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_23959c:
    // 0x23959c: 0xc08e8be  jal         func_23A2F8
label_2395a0:
    if (ctx->pc == 0x2395A0u) {
        ctx->pc = 0x2395A0u;
            // 0x2395a0: 0x96680018  lhu         $t0, 0x18($s3) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->pc = 0x2395A4u;
        goto label_2395a4;
    }
    ctx->pc = 0x23959Cu;
    SET_GPR_U32(ctx, 31, 0x2395A4u);
    ctx->pc = 0x2395A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23959Cu;
            // 0x2395a0: 0x96680018  lhu         $t0, 0x18($s3) (Delay Slot)
        SET_GPR_U32(ctx, 8, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A2F8u;
    if (runtime->hasFunction(0x23A2F8u)) {
        auto targetFn = runtime->lookupFunction(0x23A2F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395A4u; }
        if (ctx->pc != 0x2395A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A2F8_0x23a2f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395A4u; }
        if (ctx->pc != 0x2395A4u) { return; }
    }
    ctx->pc = 0x2395A4u;
label_2395a4:
    // 0x2395a4: 0xc098560  jal         func_261580
label_2395a8:
    if (ctx->pc == 0x2395A8u) {
        ctx->pc = 0x2395A8u;
            // 0x2395a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2395ACu;
        goto label_2395ac;
    }
    ctx->pc = 0x2395A4u;
    SET_GPR_U32(ctx, 31, 0x2395ACu);
    ctx->pc = 0x2395A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2395A4u;
            // 0x2395a8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395ACu; }
        if (ctx->pc != 0x2395ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395ACu; }
        if (ctx->pc != 0x2395ACu) { return; }
    }
    ctx->pc = 0x2395ACu;
label_2395ac:
    // 0x2395ac: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2395acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2395b0:
    // 0x2395b0: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2395b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2395b4:
    // 0x2395b4: 0x24a55260  addiu       $a1, $a1, 0x5260
    ctx->pc = 0x2395b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21088));
label_2395b8:
    // 0x2395b8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2395b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2395bc:
    // 0x2395bc: 0xc08b5ac  jal         func_22D6B0
label_2395c0:
    if (ctx->pc == 0x2395C0u) {
        ctx->pc = 0x2395C0u;
            // 0x2395c0: 0x26860014  addiu       $a2, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->pc = 0x2395C4u;
        goto label_2395c4;
    }
    ctx->pc = 0x2395BCu;
    SET_GPR_U32(ctx, 31, 0x2395C4u);
    ctx->pc = 0x2395C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2395BCu;
            // 0x2395c0: 0x26860014  addiu       $a2, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395C4u; }
        if (ctx->pc != 0x2395C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395C4u; }
        if (ctx->pc != 0x2395C4u) { return; }
    }
    ctx->pc = 0x2395C4u;
label_2395c4:
    // 0x2395c4: 0xde8200a8  ld          $v0, 0xA8($s4)
    ctx->pc = 0x2395c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 20), 168)));
label_2395c8:
    // 0x2395c8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2395c8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_2395cc:
    // 0x2395cc: 0x1000ff5e  b           . + 4 + (-0xA2 << 2)
label_2395d0:
    if (ctx->pc == 0x2395D0u) {
        ctx->pc = 0x2395D0u;
            // 0x2395d0: 0xfe8200a8  sd          $v0, 0xA8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 168), GPR_U64(ctx, 2));
        ctx->pc = 0x2395D4u;
        goto label_2395d4;
    }
    ctx->pc = 0x2395CCu;
    {
        const bool branch_taken_0x2395cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2395D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2395CCu;
            // 0x2395d0: 0xfe8200a8  sd          $v0, 0xA8($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 168), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2395cc) {
            ctx->pc = 0x239348u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_239348;
        }
    }
    ctx->pc = 0x2395D4u;
label_2395d4:
    // 0x2395d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2395d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2395d8:
    // 0x2395d8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2395d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2395dc:
    // 0x2395dc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2395dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2395e0:
    // 0x2395e0: 0xc08e96c  jal         func_23A5B0
label_2395e4:
    if (ctx->pc == 0x2395E4u) {
        ctx->pc = 0x2395E4u;
            // 0x2395e4: 0x24845060  addiu       $a0, $a0, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
        ctx->pc = 0x2395E8u;
        goto label_2395e8;
    }
    ctx->pc = 0x2395E0u;
    SET_GPR_U32(ctx, 31, 0x2395E8u);
    ctx->pc = 0x2395E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2395E0u;
            // 0x2395e4: 0x24845060  addiu       $a0, $a0, 0x5060 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A5B0u;
    if (runtime->hasFunction(0x23A5B0u)) {
        auto targetFn = runtime->lookupFunction(0x23A5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395E8u; }
        if (ctx->pc != 0x2395E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A5B0_0x23a5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2395E8u; }
        if (ctx->pc != 0x2395E8u) { return; }
    }
    ctx->pc = 0x2395E8u;
label_2395e8:
    // 0x2395e8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2395e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2395ec:
    // 0x2395ec: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2395ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2395f0:
    // 0x2395f0: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2395f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2395f4:
    // 0x2395f4: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2395f4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2395f8:
    // 0x2395f8: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2395f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2395fc:
    // 0x2395fc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2395fcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239600:
    // 0x239600: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239600u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239604:
    // 0x239604: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239604u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239608:
    // 0x239608: 0x808a9d6  j           func_22A758
label_23960c:
    if (ctx->pc == 0x23960Cu) {
        ctx->pc = 0x23960Cu;
            // 0x23960c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x239610u;
        goto label_239610;
    }
    ctx->pc = 0x239608u;
    ctx->pc = 0x23960Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239608u;
            // 0x23960c: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x239610u;
label_239610:
    // 0x239610: 0x8e820160  lw          $v0, 0x160($s4)
    ctx->pc = 0x239610u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 352)));
label_239614:
    // 0x239614: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x239614u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_239618:
    // 0x239618: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23961c:
    if (ctx->pc == 0x23961Cu) {
        ctx->pc = 0x23961Cu;
            // 0x23961c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239620u;
        goto label_239620;
    }
    ctx->pc = 0x239618u;
    {
        const bool branch_taken_0x239618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23961Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239618u;
            // 0x23961c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239618) {
            ctx->pc = 0x239630u;
            goto label_239630;
        }
    }
    ctx->pc = 0x239620u;
label_239620:
    // 0x239620: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x239620u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_239624:
    // 0x239624: 0xc08fc72  jal         func_23F1C8
label_239628:
    if (ctx->pc == 0x239628u) {
        ctx->pc = 0x239628u;
            // 0x239628: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23962Cu;
        goto label_23962c;
    }
    ctx->pc = 0x239624u;
    SET_GPR_U32(ctx, 31, 0x23962Cu);
    ctx->pc = 0x239628u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239624u;
            // 0x239628: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23F1C8u;
    if (runtime->hasFunction(0x23F1C8u)) {
        auto targetFn = runtime->lookupFunction(0x23F1C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23962Cu; }
        if (ctx->pc != 0x23962Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023F1C8_0x23f1c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23962Cu; }
        if (ctx->pc != 0x23962Cu) { return; }
    }
    ctx->pc = 0x23962Cu;
label_23962c:
    // 0x23962c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23962cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239630:
    // 0x239630: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x239630u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_239634:
    // 0x239634: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x239634u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_239638:
    // 0x239638: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x239638u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23963c:
    // 0x23963c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23963cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_239640:
    // 0x239640: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x239640u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239644:
    // 0x239644: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239644u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239648:
    // 0x239648: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239648u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23964c:
    // 0x23964c: 0x808a9d6  j           func_22A758
label_239650:
    if (ctx->pc == 0x239650u) {
        ctx->pc = 0x239650u;
            // 0x239650: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x239654u;
        goto label_239654;
    }
    ctx->pc = 0x23964Cu;
    ctx->pc = 0x239650u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23964Cu;
            // 0x239650: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x239654u;
label_239654:
    // 0x239654: 0x2c420003  sltiu       $v0, $v0, 0x3
    ctx->pc = 0x239654u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
label_239658:
    // 0x239658: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_23965c:
    if (ctx->pc == 0x23965Cu) {
        ctx->pc = 0x23965Cu;
            // 0x23965c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239660u;
        goto label_239660;
    }
    ctx->pc = 0x239658u;
    {
        const bool branch_taken_0x239658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23965Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239658u;
            // 0x23965c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239658) {
            ctx->pc = 0x239670u;
            goto label_239670;
        }
    }
    ctx->pc = 0x239660u;
label_239660:
    // 0x239660: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x239660u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_239664:
    // 0x239664: 0xc08f926  jal         func_23E498
label_239668:
    if (ctx->pc == 0x239668u) {
        ctx->pc = 0x239668u;
            // 0x239668: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23966Cu;
        goto label_23966c;
    }
    ctx->pc = 0x239664u;
    SET_GPR_U32(ctx, 31, 0x23966Cu);
    ctx->pc = 0x239668u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239664u;
            // 0x239668: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23E498u;
    if (runtime->hasFunction(0x23E498u)) {
        auto targetFn = runtime->lookupFunction(0x23E498u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23966Cu; }
        if (ctx->pc != 0x23966Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023E498_0x23e498(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23966Cu; }
        if (ctx->pc != 0x23966Cu) { return; }
    }
    ctx->pc = 0x23966Cu;
label_23966c:
    // 0x23966c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x23966cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239670:
    // 0x239670: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x239670u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_239674:
    // 0x239674: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x239674u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_239678:
    // 0x239678: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x239678u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23967c:
    // 0x23967c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23967cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_239680:
    // 0x239680: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x239680u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239684:
    // 0x239684: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239684u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239688:
    // 0x239688: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239688u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23968c:
    // 0x23968c: 0x808a9d6  j           func_22A758
label_239690:
    if (ctx->pc == 0x239690u) {
        ctx->pc = 0x239690u;
            // 0x239690: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x239694u;
        goto label_239694;
    }
    ctx->pc = 0x23968Cu;
    ctx->pc = 0x239690u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23968Cu;
            // 0x239690: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x239694u;
label_239694:
    // 0x239694: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x239694u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_239698:
    // 0x239698: 0x14620007  bne         $v1, $v0, . + 4 + (0x7 << 2)
label_23969c:
    if (ctx->pc == 0x23969Cu) {
        ctx->pc = 0x23969Cu;
            // 0x23969c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2396A0u;
        goto label_2396a0;
    }
    ctx->pc = 0x239698u;
    {
        const bool branch_taken_0x239698 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x23969Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239698u;
            // 0x23969c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239698) {
            ctx->pc = 0x2396B8u;
            goto label_2396b8;
        }
    }
    ctx->pc = 0x2396A0u;
label_2396a0:
    // 0x2396a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2396a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_2396a4:
    // 0x2396a4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2396a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2396a8:
    // 0x2396a8: 0x248450a8  addiu       $a0, $a0, 0x50A8
    ctx->pc = 0x2396a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 20648));
label_2396ac:
    // 0x2396ac: 0xc08e96c  jal         func_23A5B0
label_2396b0:
    if (ctx->pc == 0x2396B0u) {
        ctx->pc = 0x2396B0u;
            // 0x2396b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2396B4u;
        goto label_2396b4;
    }
    ctx->pc = 0x2396ACu;
    SET_GPR_U32(ctx, 31, 0x2396B4u);
    ctx->pc = 0x2396B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2396ACu;
            // 0x2396b0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x23A5B0u;
    if (runtime->hasFunction(0x23A5B0u)) {
        auto targetFn = runtime->lookupFunction(0x23A5B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2396B4u; }
        if (ctx->pc != 0x2396B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0023A5B0_0x23a5b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2396B4u; }
        if (ctx->pc != 0x2396B4u) { return; }
    }
    ctx->pc = 0x2396B4u;
label_2396b4:
    // 0x2396b4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2396b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2396b8:
    // 0x2396b8: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x2396b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2396bc:
    // 0x2396bc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2396bcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2396c0:
    // 0x2396c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2396c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2396c4:
    // 0x2396c4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2396c4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2396c8:
    // 0x2396c8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2396c8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2396cc:
    // 0x2396cc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2396ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2396d0:
    // 0x2396d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2396d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2396d4:
    // 0x2396d4: 0x808a9d6  j           func_22A758
label_2396d8:
    if (ctx->pc == 0x2396D8u) {
        ctx->pc = 0x2396D8u;
            // 0x2396d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2396DCu;
        goto label_2396dc;
    }
    ctx->pc = 0x2396D4u;
    ctx->pc = 0x2396D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2396D4u;
            // 0x2396d8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2396DCu;
label_2396dc:
    // 0x2396dc: 0x8e830168  lw          $v1, 0x168($s4)
    ctx->pc = 0x2396dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 360)));
label_2396e0:
    // 0x2396e0: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x2396e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_2396e4:
    // 0x2396e4: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_2396e8:
    if (ctx->pc == 0x2396E8u) {
        ctx->pc = 0x2396E8u;
            // 0x2396e8: 0x96820030  lhu         $v0, 0x30($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->pc = 0x2396ECu;
        goto label_2396ec;
    }
    ctx->pc = 0x2396E4u;
    {
        const bool branch_taken_0x2396e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2396e4) {
            ctx->pc = 0x2396E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2396E4u;
            // 0x2396e8: 0x96820030  lhu         $v0, 0x30($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23970Cu;
            goto label_23970c;
        }
    }
    ctx->pc = 0x2396ECu;
label_2396ec:
    // 0x2396ec: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2396ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2396f0:
    // 0x2396f0: 0x8c431770  lw          $v1, 0x1770($v0)
    ctx->pc = 0x2396f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6000)));
label_2396f4:
    // 0x2396f4: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x2396f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_2396f8:
    // 0x2396f8: 0xc097de6  jal         func_25F798
label_2396fc:
    if (ctx->pc == 0x2396FCu) {
        ctx->pc = 0x2396FCu;
            // 0x2396fc: 0xac431770  sw          $v1, 0x1770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6000), GPR_U32(ctx, 3));
        ctx->pc = 0x239700u;
        goto label_239700;
    }
    ctx->pc = 0x2396F8u;
    SET_GPR_U32(ctx, 31, 0x239700u);
    ctx->pc = 0x2396FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2396F8u;
            // 0x2396fc: 0xac431770  sw          $v1, 0x1770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6000), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25F798u;
    if (runtime->hasFunction(0x25F798u)) {
        auto targetFn = runtime->lookupFunction(0x25F798u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239700u; }
        if (ctx->pc != 0x239700u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025F798_0x25f798(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239700u; }
        if (ctx->pc != 0x239700u) { return; }
    }
    ctx->pc = 0x239700u;
label_239700:
    // 0x239700: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x239700u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_239704:
    // 0x239704: 0x245011a8  addiu       $s0, $v0, 0x11A8
    ctx->pc = 0x239704u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4520));
label_239708:
    // 0x239708: 0x96820030  lhu         $v0, 0x30($s4)
    ctx->pc = 0x239708u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 48)));
label_23970c:
    // 0x23970c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x23970cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_239710:
    // 0x239710: 0x5040ff0e  beql        $v0, $zero, . + 4 + (-0xF2 << 2)
label_239714:
    if (ctx->pc == 0x239714u) {
        ctx->pc = 0x239714u;
            // 0x239714: 0xde830060  ld          $v1, 0x60($s4) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->pc = 0x239718u;
        goto label_239718;
    }
    ctx->pc = 0x239710u;
    {
        const bool branch_taken_0x239710 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239710) {
            ctx->pc = 0x239714u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239710u;
            // 0x239714: 0xde830060  ld          $v1, 0x60($s4) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23934Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23934c;
        }
    }
    ctx->pc = 0x239718u;
label_239718:
    // 0x239718: 0x5200ff0c  beql        $s0, $zero, . + 4 + (-0xF4 << 2)
label_23971c:
    if (ctx->pc == 0x23971Cu) {
        ctx->pc = 0x23971Cu;
            // 0x23971c: 0xde830060  ld          $v1, 0x60($s4) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->pc = 0x239720u;
        goto label_239720;
    }
    ctx->pc = 0x239718u;
    {
        const bool branch_taken_0x239718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x239718) {
            ctx->pc = 0x23971Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239718u;
            // 0x23971c: 0xde830060  ld          $v1, 0x60($s4) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23934Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23934c;
        }
    }
    ctx->pc = 0x239720u;
label_239720:
    // 0x239720: 0xc08c682  jal         func_231A08
label_239724:
    if (ctx->pc == 0x239724u) {
        ctx->pc = 0x239728u;
        goto label_239728;
    }
    ctx->pc = 0x239720u;
    SET_GPR_U32(ctx, 31, 0x239728u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239728u; }
        if (ctx->pc != 0x239728u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239728u; }
        if (ctx->pc != 0x239728u) { return; }
    }
    ctx->pc = 0x239728u;
label_239728:
    // 0x239728: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x239728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_23972c:
    // 0x23972c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x23972cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_239730:
    // 0x239730: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x239730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_239734:
    // 0x239734: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x239734u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_239738:
    // 0x239738: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_23973c:
    if (ctx->pc == 0x23973Cu) {
        ctx->pc = 0x23973Cu;
            // 0x23973c: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->pc = 0x239740u;
        goto label_239740;
    }
    ctx->pc = 0x239738u;
    {
        const bool branch_taken_0x239738 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239738) {
            ctx->pc = 0x23973Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239738u;
            // 0x23973c: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23976Cu;
            goto label_23976c;
        }
    }
    ctx->pc = 0x239740u;
label_239740:
    // 0x239740: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x239740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_239744:
    // 0x239744: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239744u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_239748:
    // 0x239748: 0xc08c698  jal         func_231A60
label_23974c:
    if (ctx->pc == 0x23974Cu) {
        ctx->pc = 0x23974Cu;
            // 0x23974c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->pc = 0x239750u;
        goto label_239750;
    }
    ctx->pc = 0x239748u;
    SET_GPR_U32(ctx, 31, 0x239750u);
    ctx->pc = 0x23974Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239748u;
            // 0x23974c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239750u; }
        if (ctx->pc != 0x239750u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239750u; }
        if (ctx->pc != 0x239750u) { return; }
    }
    ctx->pc = 0x239750u;
label_239750:
    // 0x239750: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x239750u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_239754:
    // 0x239754: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x239754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_239758:
    // 0x239758: 0x24a55290  addiu       $a1, $a1, 0x5290
    ctx->pc = 0x239758u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21136));
label_23975c:
    // 0x23975c: 0xc08b5ac  jal         func_22D6B0
label_239760:
    if (ctx->pc == 0x239760u) {
        ctx->pc = 0x239760u;
            // 0x239760: 0x26860014  addiu       $a2, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->pc = 0x239764u;
        goto label_239764;
    }
    ctx->pc = 0x23975Cu;
    SET_GPR_U32(ctx, 31, 0x239764u);
    ctx->pc = 0x239760u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23975Cu;
            // 0x239760: 0x26860014  addiu       $a2, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239764u; }
        if (ctx->pc != 0x239764u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239764u; }
        if (ctx->pc != 0x239764u) { return; }
    }
    ctx->pc = 0x239764u;
label_239764:
    // 0x239764: 0x1000fef9  b           . + 4 + (-0x107 << 2)
label_239768:
    if (ctx->pc == 0x239768u) {
        ctx->pc = 0x239768u;
            // 0x239768: 0xde830060  ld          $v1, 0x60($s4) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->pc = 0x23976Cu;
        goto label_23976c;
    }
    ctx->pc = 0x239764u;
    {
        const bool branch_taken_0x239764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239764u;
            // 0x239768: 0xde830060  ld          $v1, 0x60($s4) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239764) {
            ctx->pc = 0x23934Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_23934c;
        }
    }
    ctx->pc = 0x23976Cu;
label_23976c:
    // 0x23976c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x23976cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_239770:
    // 0x239770: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_239774:
    if (ctx->pc == 0x239774u) {
        ctx->pc = 0x239774u;
            // 0x239774: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
        ctx->pc = 0x239778u;
        goto label_239778;
    }
    ctx->pc = 0x239770u;
    {
        const bool branch_taken_0x239770 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239770) {
            ctx->pc = 0x239774u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239770u;
            // 0x239774: 0xac530004  sw          $s3, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23977Cu;
            goto label_23977c;
        }
    }
    ctx->pc = 0x239778u;
label_239778:
    // 0x239778: 0xae130000  sw          $s3, 0x0($s0)
    ctx->pc = 0x239778u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 19));
label_23977c:
    // 0x23977c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x23977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_239780:
    // 0x239780: 0xae130004  sw          $s3, 0x4($s0)
    ctx->pc = 0x239780u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 19));
label_239784:
    // 0x239784: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_239788:
    // 0x239788: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x239788u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_23978c:
    // 0x23978c: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x23978cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_239790:
    // 0x239790: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x239790u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_239794:
    // 0x239794: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x239794u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_239798:
    // 0x239798: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x239798u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23979c:
    // 0x23979c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23979cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2397a0:
    // 0x2397a0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2397a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2397a4:
    // 0x2397a4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2397a4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2397a8:
    // 0x2397a8: 0x808c698  j           func_231A60
label_2397ac:
    if (ctx->pc == 0x2397ACu) {
        ctx->pc = 0x2397ACu;
            // 0x2397ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x2397B0u;
        goto label_2397b0;
    }
    ctx->pc = 0x2397A8u;
    ctx->pc = 0x2397ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2397A8u;
            // 0x2397ac: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2397B0u;
label_2397b0:
    // 0x2397b0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2397b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_2397b4:
    // 0x2397b4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2397b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2397b8:
    // 0x2397b8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2397b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2397bc:
    // 0x2397bc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2397bcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2397c0:
    // 0x2397c0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2397c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2397c4:
    // 0x2397c4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2397c4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2397c8:
    // 0x2397c8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2397c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2397cc:
    // 0x2397cc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2397ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2397d0:
    // 0x2397d0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2397d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2397d4:
    // 0x2397d4: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x2397d4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2397d8:
    // 0x2397d8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x2397d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_2397dc:
    // 0x2397dc: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2397dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2397e0:
    // 0x2397e0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2397e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2397e4:
    // 0x2397e4: 0xc08c682  jal         func_231A08
label_2397e8:
    if (ctx->pc == 0x2397E8u) {
        ctx->pc = 0x2397E8u;
            // 0x2397e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2397ECu;
        goto label_2397ec;
    }
    ctx->pc = 0x2397E4u;
    SET_GPR_U32(ctx, 31, 0x2397ECu);
    ctx->pc = 0x2397E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2397E4u;
            // 0x2397e8: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2397ECu; }
        if (ctx->pc != 0x2397ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2397ECu; }
        if (ctx->pc != 0x2397ECu) { return; }
    }
    ctx->pc = 0x2397ECu;
label_2397ec:
    // 0x2397ec: 0x96630030  lhu         $v1, 0x30($s3)
    ctx->pc = 0x2397ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_2397f0:
    // 0x2397f0: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x2397f0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2397f4:
    // 0x2397f4: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2397f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_2397f8:
    // 0x2397f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2397fc:
    if (ctx->pc == 0x2397FCu) {
        ctx->pc = 0x2397FCu;
            // 0x2397fc: 0x30642040  andi        $a0, $v1, 0x2040 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8256);
        ctx->pc = 0x239800u;
        goto label_239800;
    }
    ctx->pc = 0x2397F8u;
    {
        const bool branch_taken_0x2397f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2397FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2397F8u;
            // 0x2397fc: 0x30642040  andi        $a0, $v1, 0x2040 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2397f8) {
            ctx->pc = 0x239808u;
            goto label_239808;
        }
    }
    ctx->pc = 0x239800u;
label_239800:
    // 0x239800: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_239804:
    if (ctx->pc == 0x239804u) {
        ctx->pc = 0x239804u;
            // 0x239804: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x239808u;
        goto label_239808;
    }
    ctx->pc = 0x239800u;
    {
        const bool branch_taken_0x239800 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x239804u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239800u;
            // 0x239804: 0x24022000  addiu       $v0, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239800) {
            ctx->pc = 0x239820u;
            goto label_239820;
        }
    }
    ctx->pc = 0x239808u;
label_239808:
    // 0x239808: 0xc08a9d6  jal         func_22A758
label_23980c:
    if (ctx->pc == 0x23980Cu) {
        ctx->pc = 0x23980Cu;
            // 0x23980c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239810u;
        goto label_239810;
    }
    ctx->pc = 0x239808u;
    SET_GPR_U32(ctx, 31, 0x239810u);
    ctx->pc = 0x23980Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239808u;
            // 0x23980c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239810u; }
        if (ctx->pc != 0x239810u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239810u; }
        if (ctx->pc != 0x239810u) { return; }
    }
    ctx->pc = 0x239810u;
label_239810:
    // 0x239810: 0xc08c698  jal         func_231A60
label_239814:
    if (ctx->pc == 0x239814u) {
        ctx->pc = 0x239814u;
            // 0x239814: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239818u;
        goto label_239818;
    }
    ctx->pc = 0x239810u;
    SET_GPR_U32(ctx, 31, 0x239818u);
    ctx->pc = 0x239814u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239810u;
            // 0x239814: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239818u; }
        if (ctx->pc != 0x239818u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239818u; }
        if (ctx->pc != 0x239818u) { return; }
    }
    ctx->pc = 0x239818u;
label_239818:
    // 0x239818: 0x100000e0  b           . + 4 + (0xE0 << 2)
label_23981c:
    if (ctx->pc == 0x23981Cu) {
        ctx->pc = 0x23981Cu;
            // 0x23981c: 0x24020073  addiu       $v0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->pc = 0x239820u;
        goto label_239820;
    }
    ctx->pc = 0x239818u;
    {
        const bool branch_taken_0x239818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23981Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239818u;
            // 0x23981c: 0x24020073  addiu       $v0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239818) {
            ctx->pc = 0x239B9Cu;
            goto label_239b9c;
        }
    }
    ctx->pc = 0x239820u;
label_239820:
    // 0x239820: 0x5482000d  bnel        $a0, $v0, . + 4 + (0xD << 2)
label_239824:
    if (ctx->pc == 0x239824u) {
        ctx->pc = 0x239824u;
            // 0x239824: 0x92e30001  lbu         $v1, 0x1($s7) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
        ctx->pc = 0x239828u;
        goto label_239828;
    }
    ctx->pc = 0x239820u;
    {
        const bool branch_taken_0x239820 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x239820) {
            ctx->pc = 0x239824u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239820u;
            // 0x239824: 0x92e30001  lbu         $v1, 0x1($s7) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239858u;
            goto label_239858;
        }
    }
    ctx->pc = 0x239828u;
label_239828:
    // 0x239828: 0x34620040  ori         $v0, $v1, 0x40
    ctx->pc = 0x239828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_23982c:
    // 0x23982c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x23982cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_239830:
    // 0x239830: 0xc08c698  jal         func_231A60
label_239834:
    if (ctx->pc == 0x239834u) {
        ctx->pc = 0x239834u;
            // 0x239834: 0xa6620030  sh          $v0, 0x30($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x239838u;
        goto label_239838;
    }
    ctx->pc = 0x239830u;
    SET_GPR_U32(ctx, 31, 0x239838u);
    ctx->pc = 0x239834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239830u;
            // 0x239834: 0xa6620030  sh          $v0, 0x30($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 48), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239838u; }
        if (ctx->pc != 0x239838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239838u; }
        if (ctx->pc != 0x239838u) { return; }
    }
    ctx->pc = 0x239838u;
label_239838:
    // 0x239838: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x239838u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
label_23983c:
    // 0x23983c: 0x8c625070  lw          $v0, 0x5070($v1)
    ctx->pc = 0x23983cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20592)));
label_239840:
    // 0x239840: 0x40f809  jalr        $v0
label_239844:
    if (ctx->pc == 0x239844u) {
        ctx->pc = 0x239844u;
            // 0x239844: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239848u;
        goto label_239848;
    }
    ctx->pc = 0x239840u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239848u);
        ctx->pc = 0x239844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239840u;
            // 0x239844: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239848u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239848u; }
            if (ctx->pc != 0x239848u) { return; }
        }
        }
    }
    ctx->pc = 0x239848u;
label_239848:
    // 0x239848: 0xc08c682  jal         func_231A08
label_23984c:
    if (ctx->pc == 0x23984Cu) {
        ctx->pc = 0x239850u;
        goto label_239850;
    }
    ctx->pc = 0x239848u;
    SET_GPR_U32(ctx, 31, 0x239850u);
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239850u; }
        if (ctx->pc != 0x239850u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239850u; }
        if (ctx->pc != 0x239850u) { return; }
    }
    ctx->pc = 0x239850u;
label_239850:
    // 0x239850: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x239850u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_239854:
    // 0x239854: 0x92e30001  lbu         $v1, 0x1($s7)
    ctx->pc = 0x239854u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_239858:
    // 0x239858: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x239858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_23985c:
    // 0x23985c: 0x54620044  bnel        $v1, $v0, . + 4 + (0x44 << 2)
label_239860:
    if (ctx->pc == 0x239860u) {
        ctx->pc = 0x239860u;
            // 0x239860: 0x96230012  lhu         $v1, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->pc = 0x239864u;
        goto label_239864;
    }
    ctx->pc = 0x23985Cu;
    {
        const bool branch_taken_0x23985c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x23985c) {
            ctx->pc = 0x239860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x23985Cu;
            // 0x239860: 0x96230012  lhu         $v1, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239970u;
            goto label_239970;
        }
    }
    ctx->pc = 0x239864u;
label_239864:
    // 0x239864: 0x8e320008  lw          $s2, 0x8($s1)
    ctx->pc = 0x239864u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_239868:
    // 0x239868: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x239868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_23986c:
    // 0x23986c: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x23986cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_239870:
    // 0x239870: 0x8a50000f  lwl         $s0, 0xF($s2)
    ctx->pc = 0x239870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
label_239874:
    // 0x239874: 0x9a50000c  lwr         $s0, 0xC($s2)
    ctx->pc = 0x239874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
label_239878:
    // 0x239878: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x239878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_23987c:
    // 0x23987c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x23987cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_239880:
    // 0x239880: 0xc08a254  jal         func_228950
label_239884:
    if (ctx->pc == 0x239884u) {
        ctx->pc = 0x239884u;
            // 0x239884: 0x242a021  addu        $s4, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->pc = 0x239888u;
        goto label_239888;
    }
    ctx->pc = 0x239880u;
    SET_GPR_U32(ctx, 31, 0x239888u);
    ctx->pc = 0x239884u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239880u;
            // 0x239884: 0x242a021  addu        $s4, $s2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (runtime->hasFunction(0x228950u)) {
        auto targetFn = runtime->lookupFunction(0x228950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239888u; }
        if (ctx->pc != 0x239888u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228950_0x228950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239888u; }
        if (ctx->pc != 0x239888u) { return; }
    }
    ctx->pc = 0x239888u;
label_239888:
    // 0x239888: 0x5602000a  bnel        $s0, $v0, . + 4 + (0xA << 2)
label_23988c:
    if (ctx->pc == 0x23988Cu) {
        ctx->pc = 0x23988Cu;
            // 0x23988c: 0x8e620108  lw          $v0, 0x108($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
        ctx->pc = 0x239890u;
        goto label_239890;
    }
    ctx->pc = 0x239888u;
    {
        const bool branch_taken_0x239888 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x239888) {
            ctx->pc = 0x23988Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239888u;
            // 0x23988c: 0x8e620108  lw          $v0, 0x108($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2398B4u;
            goto label_2398b4;
        }
    }
    ctx->pc = 0x239890u;
label_239890:
    // 0x239890: 0xc08a9d6  jal         func_22A758
label_239894:
    if (ctx->pc == 0x239894u) {
        ctx->pc = 0x239894u;
            // 0x239894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239898u;
        goto label_239898;
    }
    ctx->pc = 0x239890u;
    SET_GPR_U32(ctx, 31, 0x239898u);
    ctx->pc = 0x239894u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239890u;
            // 0x239894: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239898u; }
        if (ctx->pc != 0x239898u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239898u; }
        if (ctx->pc != 0x239898u) { return; }
    }
    ctx->pc = 0x239898u;
label_239898:
    // 0x239898: 0xc08c698  jal         func_231A60
label_23989c:
    if (ctx->pc == 0x23989Cu) {
        ctx->pc = 0x23989Cu;
            // 0x23989c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2398A0u;
        goto label_2398a0;
    }
    ctx->pc = 0x239898u;
    SET_GPR_U32(ctx, 31, 0x2398A0u);
    ctx->pc = 0x23989Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239898u;
            // 0x23989c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398A0u; }
        if (ctx->pc != 0x2398A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2398A0u; }
        if (ctx->pc != 0x2398A0u) { return; }
    }
    ctx->pc = 0x2398A0u;
label_2398a0:
    // 0x2398a0: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x2398a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_2398a4:
    // 0x2398a4: 0x2402007d  addiu       $v0, $zero, 0x7D
    ctx->pc = 0x2398a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2398a8:
    // 0x2398a8: 0x38630006  xori        $v1, $v1, 0x6
    ctx->pc = 0x2398a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)6);
label_2398ac:
    // 0x2398ac: 0x100000bb  b           . + 4 + (0xBB << 2)
label_2398b0:
    if (ctx->pc == 0x2398B0u) {
        ctx->pc = 0x2398B0u;
            // 0x2398b0: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->pc = 0x2398B4u;
        goto label_2398b4;
    }
    ctx->pc = 0x2398ACu;
    {
        const bool branch_taken_0x2398ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2398B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2398ACu;
            // 0x2398b0: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398ac) {
            ctx->pc = 0x239B9Cu;
            goto label_239b9c;
        }
    }
    ctx->pc = 0x2398B4u;
label_2398b4:
    // 0x2398b4: 0x8e63010c  lw          $v1, 0x10C($s3)
    ctx->pc = 0x2398b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_2398b8:
    // 0x2398b8: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x2398b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2398bc:
    // 0x2398bc: 0x5040002c  beql        $v0, $zero, . + 4 + (0x2C << 2)
label_2398c0:
    if (ctx->pc == 0x2398C0u) {
        ctx->pc = 0x2398C0u;
            // 0x2398c0: 0x96230012  lhu         $v1, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->pc = 0x2398C4u;
        goto label_2398c4;
    }
    ctx->pc = 0x2398BCu;
    {
        const bool branch_taken_0x2398bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2398bc) {
            ctx->pc = 0x2398C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2398BCu;
            // 0x2398c0: 0x96230012  lhu         $v1, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239970u;
            goto label_239970;
        }
    }
    ctx->pc = 0x2398C4u;
label_2398c4:
    // 0x2398c4: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x2398c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_2398c8:
    // 0x2398c8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x2398c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_2398cc:
    // 0x2398cc: 0x54400027  bnel        $v0, $zero, . + 4 + (0x27 << 2)
label_2398d0:
    if (ctx->pc == 0x2398D0u) {
        ctx->pc = 0x2398D0u;
            // 0x2398d0: 0x26760100  addiu       $s6, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->pc = 0x2398D4u;
        goto label_2398d4;
    }
    ctx->pc = 0x2398CCu;
    {
        const bool branch_taken_0x2398cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2398cc) {
            ctx->pc = 0x2398D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2398CCu;
            // 0x2398d0: 0x26760100  addiu       $s6, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23996Cu;
            goto label_23996c;
        }
    }
    ctx->pc = 0x2398D4u;
label_2398d4:
    // 0x2398d4: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x2398d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_2398d8:
    // 0x2398d8: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2398d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2398dc:
    // 0x2398dc: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
label_2398e0:
    if (ctx->pc == 0x2398E0u) {
        ctx->pc = 0x2398E0u;
            // 0x2398e0: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
        ctx->pc = 0x2398E4u;
        goto label_2398e4;
    }
    ctx->pc = 0x2398DCu;
    {
        const bool branch_taken_0x2398dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2398E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2398DCu;
            // 0x2398e0: 0x3c12003a  lui         $s2, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2398dc) {
            ctx->pc = 0x239934u;
            goto label_239934;
        }
    }
    ctx->pc = 0x2398E4u;
label_2398e4:
    // 0x2398e4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2398e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2398e8:
    // 0x2398e8: 0x2c420028  sltiu       $v0, $v0, 0x28
    ctx->pc = 0x2398e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)40) ? 1 : 0);
label_2398ec:
    // 0x2398ec: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
label_2398f0:
    if (ctx->pc == 0x2398F0u) {
        ctx->pc = 0x2398F0u;
            // 0x2398f0: 0x92840003  lbu         $a0, 0x3($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
        ctx->pc = 0x2398F4u;
        goto label_2398f4;
    }
    ctx->pc = 0x2398ECu;
    {
        const bool branch_taken_0x2398ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2398ec) {
            ctx->pc = 0x2398F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2398ECu;
            // 0x2398f0: 0x92840003  lbu         $a0, 0x3($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239938u;
            goto label_239938;
        }
    }
    ctx->pc = 0x2398F4u;
label_2398f4:
    // 0x2398f4: 0x92840001  lbu         $a0, 0x1($s4)
    ctx->pc = 0x2398f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 1)));
label_2398f8:
    // 0x2398f8: 0x3c12003a  lui         $s2, 0x3A
    ctx->pc = 0x2398f8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)58 << 16));
label_2398fc:
    // 0x2398fc: 0x92820000  lbu         $v0, 0x0($s4)
    ctx->pc = 0x2398fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_239900:
    // 0x239900: 0x2650fe80  addiu       $s0, $s2, -0x180
    ctx->pc = 0x239900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966912));
label_239904:
    // 0x239904: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x239904u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_239908:
    // 0x239908: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x239908u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_23990c:
    // 0x23990c: 0xc08b60c  jal         func_22D830
label_239910:
    if (ctx->pc == 0x239910u) {
        ctx->pc = 0x239910u;
            // 0x239910: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x239914u;
        goto label_239914;
    }
    ctx->pc = 0x23990Cu;
    SET_GPR_U32(ctx, 31, 0x239914u);
    ctx->pc = 0x239910u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x23990Cu;
            // 0x239910: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239914u; }
        if (ctx->pc != 0x239914u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239914u; }
        if (ctx->pc != 0x239914u) { return; }
    }
    ctx->pc = 0x239914u;
label_239914:
    // 0x239914: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x239914u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_239918:
    // 0x239918: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x239918u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_23991c:
    // 0x23991c: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x23991cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_239920:
    // 0x239920: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x239920u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_239924:
    // 0x239924: 0x50820011  beql        $a0, $v0, . + 4 + (0x11 << 2)
label_239928:
    if (ctx->pc == 0x239928u) {
        ctx->pc = 0x239928u;
            // 0x239928: 0x26760100  addiu       $s6, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->pc = 0x23992Cu;
        goto label_23992c;
    }
    ctx->pc = 0x239924u;
    {
        const bool branch_taken_0x239924 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x239924) {
            ctx->pc = 0x239928u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239924u;
            // 0x239928: 0x26760100  addiu       $s6, $s3, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
        ctx->in_delay_slot = false;
            ctx->pc = 0x23996Cu;
            goto label_23996c;
        }
    }
    ctx->pc = 0x23992Cu;
label_23992c:
    // 0x23992c: 0x10000002  b           . + 4 + (0x2 << 2)
label_239930:
    if (ctx->pc == 0x239930u) {
        ctx->pc = 0x239930u;
            // 0x239930: 0x92840003  lbu         $a0, 0x3($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
        ctx->pc = 0x239934u;
        goto label_239934;
    }
    ctx->pc = 0x23992Cu;
    {
        const bool branch_taken_0x23992c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23992Cu;
            // 0x239930: 0x92840003  lbu         $a0, 0x3($s4) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23992c) {
            ctx->pc = 0x239938u;
            goto label_239938;
        }
    }
    ctx->pc = 0x239934u;
label_239934:
    // 0x239934: 0x92840003  lbu         $a0, 0x3($s4)
    ctx->pc = 0x239934u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 3)));
label_239938:
    // 0x239938: 0x2650fe80  addiu       $s0, $s2, -0x180
    ctx->pc = 0x239938u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294966912));
label_23993c:
    // 0x23993c: 0x92820002  lbu         $v0, 0x2($s4)
    ctx->pc = 0x23993cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 2)));
label_239940:
    // 0x239940: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x239940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_239944:
    // 0x239944: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x239944u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_239948:
    // 0x239948: 0xc08b60c  jal         func_22D830
label_23994c:
    if (ctx->pc == 0x23994Cu) {
        ctx->pc = 0x23994Cu;
            // 0x23994c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x239950u;
        goto label_239950;
    }
    ctx->pc = 0x239948u;
    SET_GPR_U32(ctx, 31, 0x239950u);
    ctx->pc = 0x23994Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239948u;
            // 0x23994c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (runtime->hasFunction(0x22D830u)) {
        auto targetFn = runtime->lookupFunction(0x22D830u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239950u; }
        if (ctx->pc != 0x239950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D830_0x22d830(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239950u; }
        if (ctx->pc != 0x239950u) { return; }
    }
    ctx->pc = 0x239950u;
label_239950:
    // 0x239950: 0x30430007  andi        $v1, $v0, 0x7
    ctx->pc = 0x239950u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_239954:
    // 0x239954: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x239954u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
label_239958:
    // 0x239958: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x239958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_23995c:
    // 0x23995c: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x23995cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_239960:
    // 0x239960: 0x54820003  bnel        $a0, $v0, . + 4 + (0x3 << 2)
label_239964:
    if (ctx->pc == 0x239964u) {
        ctx->pc = 0x239964u;
            // 0x239964: 0x96230012  lhu         $v1, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->pc = 0x239968u;
        goto label_239968;
    }
    ctx->pc = 0x239960u;
    {
        const bool branch_taken_0x239960 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x239960) {
            ctx->pc = 0x239964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239960u;
            // 0x239964: 0x96230012  lhu         $v1, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239970u;
            goto label_239970;
        }
    }
    ctx->pc = 0x239968u;
label_239968:
    // 0x239968: 0x26760100  addiu       $s6, $s3, 0x100
    ctx->pc = 0x239968u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 256));
label_23996c:
    // 0x23996c: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x23996cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_239970:
    // 0x239970: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x239970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_239974:
    // 0x239974: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_239978:
    if (ctx->pc == 0x239978u) {
        ctx->pc = 0x239978u;
            // 0x239978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x23997Cu;
        goto label_23997c;
    }
    ctx->pc = 0x239974u;
    {
        const bool branch_taken_0x239974 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x239978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239974u;
            // 0x239978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239974) {
            ctx->pc = 0x2399D0u;
            goto label_2399d0;
        }
    }
    ctx->pc = 0x23997Cu;
label_23997c:
    // 0x23997c: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x23997cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_239980:
    // 0x239980: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_239984:
    if (ctx->pc == 0x239984u) {
        ctx->pc = 0x239984u;
            // 0x239984: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x239988u;
        goto label_239988;
    }
    ctx->pc = 0x239980u;
    {
        const bool branch_taken_0x239980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239980u;
            // 0x239984: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239980) {
            ctx->pc = 0x2399A4u;
            goto label_2399a4;
        }
    }
    ctx->pc = 0x239988u;
label_239988:
    // 0x239988: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x239988u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
label_23998c:
    // 0x23998c: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x23998cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_239990:
    // 0x239990: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x239990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_239994:
    // 0x239994: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_239998:
    if (ctx->pc == 0x239998u) {
        ctx->pc = 0x239998u;
            // 0x239998: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->pc = 0x23999Cu;
        goto label_23999c;
    }
    ctx->pc = 0x239994u;
    {
        const bool branch_taken_0x239994 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x239994) {
            ctx->pc = 0x239998u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239994u;
            // 0x239998: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2399BCu;
            goto label_2399bc;
        }
    }
    ctx->pc = 0x23999Cu;
label_23999c:
    // 0x23999c: 0x1000000c  b           . + 4 + (0xC << 2)
label_2399a0:
    if (ctx->pc == 0x2399A0u) {
        ctx->pc = 0x2399A0u;
            // 0x2399a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2399A4u;
        goto label_2399a4;
    }
    ctx->pc = 0x23999Cu;
    {
        const bool branch_taken_0x23999c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2399A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x23999Cu;
            // 0x2399a0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23999c) {
            ctx->pc = 0x2399D0u;
            goto label_2399d0;
        }
    }
    ctx->pc = 0x2399A4u;
label_2399a4:
    // 0x2399a4: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x2399a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_2399a8:
    // 0x2399a8: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x2399a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2399ac:
    // 0x2399ac: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x2399acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_2399b0:
    // 0x2399b0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2399b4:
    if (ctx->pc == 0x2399B4u) {
        ctx->pc = 0x2399B4u;
            // 0x2399b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2399B8u;
        goto label_2399b8;
    }
    ctx->pc = 0x2399B0u;
    {
        const bool branch_taken_0x2399b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2399b0) {
            ctx->pc = 0x2399B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2399B0u;
            // 0x2399b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2399D0u;
            goto label_2399d0;
        }
    }
    ctx->pc = 0x2399B8u;
label_2399b8:
    // 0x2399b8: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x2399b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_2399bc:
    // 0x2399bc: 0x2482fffc  addiu       $v0, $a0, -0x4
    ctx->pc = 0x2399bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_2399c0:
    // 0x2399c0: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2399c0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_2399c4:
    // 0x2399c4: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x2399c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_2399c8:
    // 0x2399c8: 0x10000005  b           . + 4 + (0x5 << 2)
label_2399cc:
    if (ctx->pc == 0x2399CCu) {
        ctx->pc = 0x2399CCu;
            // 0x2399cc: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x2399D0u;
        goto label_2399d0;
    }
    ctx->pc = 0x2399C8u;
    {
        const bool branch_taken_0x2399c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2399CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2399C8u;
            // 0x2399cc: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2399c8) {
            ctx->pc = 0x2399E0u;
            goto label_2399e0;
        }
    }
    ctx->pc = 0x2399D0u;
label_2399d0:
    // 0x2399d0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x2399d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2399d4:
    // 0x2399d4: 0xc08aa1c  jal         func_22A870
label_2399d8:
    if (ctx->pc == 0x2399D8u) {
        ctx->pc = 0x2399D8u;
            // 0x2399d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2399DCu;
        goto label_2399dc;
    }
    ctx->pc = 0x2399D4u;
    SET_GPR_U32(ctx, 31, 0x2399DCu);
    ctx->pc = 0x2399D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2399D4u;
            // 0x2399d8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A870u;
    if (runtime->hasFunction(0x22A870u)) {
        auto targetFn = runtime->lookupFunction(0x22A870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399DCu; }
        if (ctx->pc != 0x2399DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A870_0x22a870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2399DCu; }
        if (ctx->pc != 0x2399DCu) { return; }
    }
    ctx->pc = 0x2399DCu;
label_2399dc:
    // 0x2399dc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2399dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2399e0:
    // 0x2399e0: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_2399e4:
    if (ctx->pc == 0x2399E4u) {
        ctx->pc = 0x2399E4u;
            // 0x2399e4: 0x96620030  lhu         $v0, 0x30($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->pc = 0x2399E8u;
        goto label_2399e8;
    }
    ctx->pc = 0x2399E0u;
    {
        const bool branch_taken_0x2399e0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2399e0) {
            ctx->pc = 0x2399E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2399E0u;
            // 0x2399e4: 0x96620030  lhu         $v0, 0x30($s3) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239A08u;
            goto label_239a08;
        }
    }
    ctx->pc = 0x2399E8u;
label_2399e8:
    // 0x2399e8: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2399e8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2399ec:
    // 0x2399ec: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2399ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2399f0:
    // 0x2399f0: 0x50400014  beql        $v0, $zero, . + 4 + (0x14 << 2)
label_2399f4:
    if (ctx->pc == 0x2399F4u) {
        ctx->pc = 0x2399F4u;
            // 0x2399f4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->pc = 0x2399F8u;
        goto label_2399f8;
    }
    ctx->pc = 0x2399F0u;
    {
        const bool branch_taken_0x2399f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2399f0) {
            ctx->pc = 0x2399F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2399F0u;
            // 0x2399f4: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239A44u;
            goto label_239a44;
        }
    }
    ctx->pc = 0x2399F8u;
label_2399f8:
    // 0x2399f8: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x2399f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2399fc:
    // 0x2399fc: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x2399fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_239a00:
    // 0x239a00: 0x1000000f  b           . + 4 + (0xF << 2)
label_239a04:
    if (ctx->pc == 0x239A04u) {
        ctx->pc = 0x239A04u;
            // 0x239a04: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x239A08u;
        goto label_239a08;
    }
    ctx->pc = 0x239A00u;
    {
        const bool branch_taken_0x239a00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A00u;
            // 0x239a04: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a00) {
            ctx->pc = 0x239A40u;
            goto label_239a40;
        }
    }
    ctx->pc = 0x239A08u;
label_239a08:
    // 0x239a08: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x239a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_239a0c:
    // 0x239a0c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_239a10:
    if (ctx->pc == 0x239A10u) {
        ctx->pc = 0x239A10u;
            // 0x239a10: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x239A14u;
        goto label_239a14;
    }
    ctx->pc = 0x239A0Cu;
    {
        const bool branch_taken_0x239a0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A0Cu;
            // 0x239a10: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a0c) {
            ctx->pc = 0x239A24u;
            goto label_239a24;
        }
    }
    ctx->pc = 0x239A14u;
label_239a14:
    // 0x239a14: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x239a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_239a18:
    // 0x239a18: 0x24a552b0  addiu       $a1, $a1, 0x52B0
    ctx->pc = 0x239a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21168));
label_239a1c:
    // 0x239a1c: 0xc08b5ac  jal         func_22D6B0
label_239a20:
    if (ctx->pc == 0x239A20u) {
        ctx->pc = 0x239A20u;
            // 0x239a20: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->pc = 0x239A24u;
        goto label_239a24;
    }
    ctx->pc = 0x239A1Cu;
    SET_GPR_U32(ctx, 31, 0x239A24u);
    ctx->pc = 0x239A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239A1Cu;
            // 0x239a20: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A24u; }
        if (ctx->pc != 0x239A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A24u; }
        if (ctx->pc != 0x239A24u) { return; }
    }
    ctx->pc = 0x239A24u;
label_239a24:
    // 0x239a24: 0xde620070  ld          $v0, 0x70($s3)
    ctx->pc = 0x239a24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 112)));
label_239a28:
    // 0x239a28: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x239a28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_239a2c:
    // 0x239a2c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x239a2cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_239a30:
    // 0x239a30: 0xc08c698  jal         func_231A60
label_239a34:
    if (ctx->pc == 0x239A34u) {
        ctx->pc = 0x239A34u;
            // 0x239a34: 0xfe620070  sd          $v0, 0x70($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 2));
        ctx->pc = 0x239A38u;
        goto label_239a38;
    }
    ctx->pc = 0x239A30u;
    SET_GPR_U32(ctx, 31, 0x239A38u);
    ctx->pc = 0x239A34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239A30u;
            // 0x239a34: 0xfe620070  sd          $v0, 0x70($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A38u; }
        if (ctx->pc != 0x239A38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A38u; }
        if (ctx->pc != 0x239A38u) { return; }
    }
    ctx->pc = 0x239A38u;
label_239a38:
    // 0x239a38: 0x10000058  b           . + 4 + (0x58 << 2)
label_239a3c:
    if (ctx->pc == 0x239A3Cu) {
        ctx->pc = 0x239A3Cu;
            // 0x239a3c: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->pc = 0x239A40u;
        goto label_239a40;
    }
    ctx->pc = 0x239A38u;
    {
        const bool branch_taken_0x239a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A38u;
            // 0x239a3c: 0x24020069  addiu       $v0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a38) {
            ctx->pc = 0x239B9Cu;
            goto label_239b9c;
        }
    }
    ctx->pc = 0x239A40u;
label_239a40:
    // 0x239a40: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x239a40u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_239a44:
    // 0x239a44: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x239a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_239a48:
    // 0x239a48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x239a48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_239a4c:
    // 0x239a4c: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x239a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_239a50:
    // 0x239a50: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x239a50u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_239a54:
    // 0x239a54: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x239a54u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_239a58:
    // 0x239a58: 0x92e20001  lbu         $v0, 0x1($s7)
    ctx->pc = 0x239a58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 1)));
label_239a5c:
    // 0x239a5c: 0x1044000a  beq         $v0, $a0, . + 4 + (0xA << 2)
label_239a60:
    if (ctx->pc == 0x239A60u) {
        ctx->pc = 0x239A60u;
            // 0x239a60: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->pc = 0x239A64u;
        goto label_239a64;
    }
    ctx->pc = 0x239A5Cu;
    {
        const bool branch_taken_0x239a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x239A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A5Cu;
            // 0x239a60: 0x24040021  addiu       $a0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a5c) {
            ctx->pc = 0x239A88u;
            goto label_239a88;
        }
    }
    ctx->pc = 0x239A64u;
label_239a64:
    // 0x239a64: 0xc08a9d6  jal         func_22A758
label_239a68:
    if (ctx->pc == 0x239A68u) {
        ctx->pc = 0x239A68u;
            // 0x239a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239A6Cu;
        goto label_239a6c;
    }
    ctx->pc = 0x239A64u;
    SET_GPR_U32(ctx, 31, 0x239A6Cu);
    ctx->pc = 0x239A68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239A64u;
            // 0x239a68: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A6Cu; }
        if (ctx->pc != 0x239A6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A6Cu; }
        if (ctx->pc != 0x239A6Cu) { return; }
    }
    ctx->pc = 0x239A6Cu;
label_239a6c:
    // 0x239a6c: 0xde620070  ld          $v0, 0x70($s3)
    ctx->pc = 0x239a6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 112)));
label_239a70:
    // 0x239a70: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x239a70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_239a74:
    // 0x239a74: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x239a74u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_239a78:
    // 0x239a78: 0xc08c698  jal         func_231A60
label_239a7c:
    if (ctx->pc == 0x239A7Cu) {
        ctx->pc = 0x239A7Cu;
            // 0x239a7c: 0xfe620070  sd          $v0, 0x70($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 2));
        ctx->pc = 0x239A80u;
        goto label_239a80;
    }
    ctx->pc = 0x239A78u;
    SET_GPR_U32(ctx, 31, 0x239A80u);
    ctx->pc = 0x239A7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239A78u;
            // 0x239a7c: 0xfe620070  sd          $v0, 0x70($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A80u; }
        if (ctx->pc != 0x239A80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A80u; }
        if (ctx->pc != 0x239A80u) { return; }
    }
    ctx->pc = 0x239A80u;
label_239a80:
    // 0x239a80: 0x10000046  b           . + 4 + (0x46 << 2)
label_239a84:
    if (ctx->pc == 0x239A84u) {
        ctx->pc = 0x239A84u;
            // 0x239a84: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->pc = 0x239A88u;
        goto label_239a88;
    }
    ctx->pc = 0x239A80u;
    {
        const bool branch_taken_0x239a80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239A84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239A80u;
            // 0x239a84: 0x2402006a  addiu       $v0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239a80) {
            ctx->pc = 0x239B9Cu;
            goto label_239b9c;
        }
    }
    ctx->pc = 0x239A88u;
label_239a88:
    // 0x239a88: 0xc08a262  jal         func_228988
label_239a8c:
    if (ctx->pc == 0x239A8Cu) {
        ctx->pc = 0x239A8Cu;
            // 0x239a8c: 0x24120073  addiu       $s2, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->pc = 0x239A90u;
        goto label_239a90;
    }
    ctx->pc = 0x239A88u;
    SET_GPR_U32(ctx, 31, 0x239A90u);
    ctx->pc = 0x239A8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239A88u;
            // 0x239a8c: 0x24120073  addiu       $s2, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A90u; }
        if (ctx->pc != 0x239A90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239A90u; }
        if (ctx->pc != 0x239A90u) { return; }
    }
    ctx->pc = 0x239A90u;
label_239a90:
    // 0x239a90: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x239a90u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_239a94:
    // 0x239a94: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x239a94u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_239a98:
    // 0x239a98: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x239a98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_239a9c:
    // 0x239a9c: 0x8e620168  lw          $v0, 0x168($s3)
    ctx->pc = 0x239a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 360)));
label_239aa0:
    // 0x239aa0: 0x8e6302c8  lw          $v1, 0x2C8($s3)
    ctx->pc = 0x239aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 712)));
label_239aa4:
    // 0x239aa4: 0x38420009  xori        $v0, $v0, 0x9
    ctx->pc = 0x239aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)9);
label_239aa8:
    // 0x239aa8: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_239aac:
    if (ctx->pc == 0x239AACu) {
        ctx->pc = 0x239AACu;
            // 0x239aac: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->pc = 0x239AB0u;
        goto label_239ab0;
    }
    ctx->pc = 0x239AA8u;
    {
        const bool branch_taken_0x239aa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239AA8u;
            // 0x239aac: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239aa8) {
            ctx->pc = 0x239ABCu;
            goto label_239abc;
        }
    }
    ctx->pc = 0x239AB0u;
label_239ab0:
    // 0x239ab0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x239ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_239ab4:
    // 0x239ab4: 0xc0900c4  jal         func_240310
label_239ab8:
    if (ctx->pc == 0x239AB8u) {
        ctx->pc = 0x239AB8u;
            // 0x239ab8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239ABCu;
        goto label_239abc;
    }
    ctx->pc = 0x239AB4u;
    SET_GPR_U32(ctx, 31, 0x239ABCu);
    ctx->pc = 0x239AB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239AB4u;
            // 0x239ab8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x240310u;
    if (runtime->hasFunction(0x240310u)) {
        auto targetFn = runtime->lookupFunction(0x240310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239ABCu; }
        if (ctx->pc != 0x239ABCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00240310_0x240310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239ABCu; }
        if (ctx->pc != 0x239ABCu) { return; }
    }
    ctx->pc = 0x239ABCu;
label_239abc:
    // 0x239abc: 0x8e62012c  lw          $v0, 0x12C($s3)
    ctx->pc = 0x239abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 300)));
label_239ac0:
    // 0x239ac0: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x239ac0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
label_239ac4:
    // 0x239ac4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_239ac8:
    if (ctx->pc == 0x239AC8u) {
        ctx->pc = 0x239AC8u;
            // 0x239ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239ACCu;
        goto label_239acc;
    }
    ctx->pc = 0x239AC4u;
    {
        const bool branch_taken_0x239ac4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x239AC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239AC4u;
            // 0x239ac8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ac4) {
            ctx->pc = 0x239AD4u;
            goto label_239ad4;
        }
    }
    ctx->pc = 0x239ACCu;
label_239acc:
    // 0x239acc: 0xc08ac88  jal         func_22B220
label_239ad0:
    if (ctx->pc == 0x239AD0u) {
        ctx->pc = 0x239AD0u;
            // 0x239ad0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x239AD4u;
        goto label_239ad4;
    }
    ctx->pc = 0x239ACCu;
    SET_GPR_U32(ctx, 31, 0x239AD4u);
    ctx->pc = 0x239AD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239ACCu;
            // 0x239ad0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (runtime->hasFunction(0x22B220u)) {
        auto targetFn = runtime->lookupFunction(0x22B220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239AD4u; }
        if (ctx->pc != 0x239AD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022B220_0x22b220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239AD4u; }
        if (ctx->pc != 0x239AD4u) { return; }
    }
    ctx->pc = 0x239AD4u;
label_239ad4:
    // 0x239ad4: 0x266200dc  addiu       $v0, $s3, 0xDC
    ctx->pc = 0x239ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 220));
label_239ad8:
    // 0x239ad8: 0x56b00a  movz        $s6, $v0, $s6
    ctx->pc = 0x239ad8u;
    if (GPR_U64(ctx, 22) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
label_239adc:
    // 0x239adc: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x239adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_239ae0:
    // 0x239ae0: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x239ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_239ae4:
    // 0x239ae4: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x239ae4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_239ae8:
    // 0x239ae8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_239aec:
    if (ctx->pc == 0x239AECu) {
        ctx->pc = 0x239AECu;
            // 0x239aec: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->pc = 0x239AF0u;
        goto label_239af0;
    }
    ctx->pc = 0x239AE8u;
    {
        const bool branch_taken_0x239ae8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x239AECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239AE8u;
            // 0x239aec: 0x8e300018  lw          $s0, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239ae8) {
            ctx->pc = 0x239B10u;
            goto label_239b10;
        }
    }
    ctx->pc = 0x239AF0u;
label_239af0:
    // 0x239af0: 0x8e6200ec  lw          $v0, 0xEC($s3)
    ctx->pc = 0x239af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 236)));
label_239af4:
    // 0x239af4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x239af4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_239af8:
    // 0x239af8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239af8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_239afc:
    // 0x239afc: 0xc08a9d6  jal         func_22A758
label_239b00:
    if (ctx->pc == 0x239B00u) {
        ctx->pc = 0x239B00u;
            // 0x239b00: 0xae6200ec  sw          $v0, 0xEC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 2));
        ctx->pc = 0x239B04u;
        goto label_239b04;
    }
    ctx->pc = 0x239AFCu;
    SET_GPR_U32(ctx, 31, 0x239B04u);
    ctx->pc = 0x239B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239AFCu;
            // 0x239b00: 0xae6200ec  sw          $v0, 0xEC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B04u; }
        if (ctx->pc != 0x239B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B04u; }
        if (ctx->pc != 0x239B04u) { return; }
    }
    ctx->pc = 0x239B04u;
label_239b04:
    // 0x239b04: 0x24020069  addiu       $v0, $zero, 0x69
    ctx->pc = 0x239b04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_239b08:
    // 0x239b08: 0x1000000b  b           . + 4 + (0xB << 2)
label_239b0c:
    if (ctx->pc == 0x239B0Cu) {
        ctx->pc = 0x239B0Cu;
            // 0x239b0c: 0x52900a  movz        $s2, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->pc = 0x239B10u;
        goto label_239b10;
    }
    ctx->pc = 0x239B08u;
    {
        const bool branch_taken_0x239b08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B08u;
            // 0x239b0c: 0x52900a  movz        $s2, $v0, $s2 (Delay Slot)
        if (GPR_U64(ctx, 18) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b08) {
            ctx->pc = 0x239B38u;
            goto label_239b38;
        }
    }
    ctx->pc = 0x239B10u;
label_239b10:
    // 0x239b10: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x239b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_239b14:
    // 0x239b14: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x239b14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_239b18:
    // 0x239b18: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_239b1c:
    if (ctx->pc == 0x239B1Cu) {
        ctx->pc = 0x239B1Cu;
            // 0x239b1c: 0xac510004  sw          $s1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
        ctx->pc = 0x239B20u;
        goto label_239b20;
    }
    ctx->pc = 0x239B18u;
    {
        const bool branch_taken_0x239b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239b18) {
            ctx->pc = 0x239B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239B18u;
            // 0x239b1c: 0xac510004  sw          $s1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239B24u;
            goto label_239b24;
        }
    }
    ctx->pc = 0x239B20u;
label_239b20:
    // 0x239b20: 0xaed10000  sw          $s1, 0x0($s6)
    ctx->pc = 0x239b20u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 17));
label_239b24:
    // 0x239b24: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x239b24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_239b28:
    // 0x239b28: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x239b28u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239b2c:
    // 0x239b2c: 0xaed10004  sw          $s1, 0x4($s6)
    ctx->pc = 0x239b2cu;
    WRITE32(ADD32(GPR_U32(ctx, 22), 4), GPR_U32(ctx, 17));
label_239b30:
    // 0x239b30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x239b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_239b34:
    // 0x239b34: 0xaec20008  sw          $v0, 0x8($s6)
    ctx->pc = 0x239b34u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 8), GPR_U32(ctx, 2));
label_239b38:
    // 0x239b38: 0x12400007  beqz        $s2, . + 4 + (0x7 << 2)
label_239b3c:
    if (ctx->pc == 0x239B3Cu) {
        ctx->pc = 0x239B3Cu;
            // 0x239b3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239B40u;
        goto label_239b40;
    }
    ctx->pc = 0x239B38u;
    {
        const bool branch_taken_0x239b38 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B38u;
            // 0x239b3c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b38) {
            ctx->pc = 0x239B58u;
            goto label_239b58;
        }
    }
    ctx->pc = 0x239B40u;
label_239b40:
    // 0x239b40: 0xde620070  ld          $v0, 0x70($s3)
    ctx->pc = 0x239b40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 112)));
label_239b44:
    // 0x239b44: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x239b44u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_239b48:
    // 0x239b48: 0xc08c698  jal         func_231A60
label_239b4c:
    if (ctx->pc == 0x239B4Cu) {
        ctx->pc = 0x239B4Cu;
            // 0x239b4c: 0xfe620070  sd          $v0, 0x70($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 2));
        ctx->pc = 0x239B50u;
        goto label_239b50;
    }
    ctx->pc = 0x239B48u;
    SET_GPR_U32(ctx, 31, 0x239B50u);
    ctx->pc = 0x239B4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239B48u;
            // 0x239b4c: 0xfe620070  sd          $v0, 0x70($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 112), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B50u; }
        if (ctx->pc != 0x239B50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B50u; }
        if (ctx->pc != 0x239B50u) { return; }
    }
    ctx->pc = 0x239B50u;
label_239b50:
    // 0x239b50: 0x10000012  b           . + 4 + (0x12 << 2)
label_239b54:
    if (ctx->pc == 0x239B54u) {
        ctx->pc = 0x239B54u;
            // 0x239b54: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239B58u;
        goto label_239b58;
    }
    ctx->pc = 0x239B50u;
    {
        const bool branch_taken_0x239b50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x239B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B50u;
            // 0x239b54: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x239b50) {
            ctx->pc = 0x239B9Cu;
            goto label_239b9c;
        }
    }
    ctx->pc = 0x239B58u;
label_239b58:
    // 0x239b58: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x239b58u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_239b5c:
    // 0x239b5c: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x239b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_239b60:
    // 0x239b60: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_239b64:
    if (ctx->pc == 0x239B64u) {
        ctx->pc = 0x239B64u;
            // 0x239b64: 0x8e620130  lw          $v0, 0x130($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
        ctx->pc = 0x239B68u;
        goto label_239b68;
    }
    ctx->pc = 0x239B60u;
    {
        const bool branch_taken_0x239b60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x239b60) {
            ctx->pc = 0x239B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x239B60u;
            // 0x239b64: 0x8e620130  lw          $v0, 0x130($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x239B78u;
            goto label_239b78;
        }
    }
    ctx->pc = 0x239B68u;
label_239b68:
    // 0x239b68: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x239b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_239b6c:
    // 0x239b6c: 0x40f809  jalr        $v0
label_239b70:
    if (ctx->pc == 0x239B70u) {
        ctx->pc = 0x239B70u;
            // 0x239b70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x239B74u;
        goto label_239b74;
    }
    ctx->pc = 0x239B6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x239B74u);
        ctx->pc = 0x239B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239B6Cu;
            // 0x239b70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x239B74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x239B74u; }
            if (ctx->pc != 0x239B74u) { return; }
        }
        }
    }
    ctx->pc = 0x239B74u;
label_239b74:
    // 0x239b74: 0x8e620130  lw          $v0, 0x130($s3)
    ctx->pc = 0x239b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 304)));
label_239b78:
    // 0x239b78: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x239b78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_239b7c:
    // 0x239b7c: 0xde630088  ld          $v1, 0x88($s3)
    ctx->pc = 0x239b7cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 136)));
label_239b80:
    // 0x239b80: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x239b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_239b84:
    // 0x239b84: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x239b84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_239b88:
    // 0x239b88: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x239b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_239b8c:
    // 0x239b8c: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x239b8cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_239b90:
    // 0x239b90: 0xc08c698  jal         func_231A60
label_239b94:
    if (ctx->pc == 0x239B94u) {
        ctx->pc = 0x239B94u;
            // 0x239b94: 0xfe630088  sd          $v1, 0x88($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 136), GPR_U64(ctx, 3));
        ctx->pc = 0x239B98u;
        goto label_239b98;
    }
    ctx->pc = 0x239B90u;
    SET_GPR_U32(ctx, 31, 0x239B98u);
    ctx->pc = 0x239B94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x239B90u;
            // 0x239b94: 0xfe630088  sd          $v1, 0x88($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 136), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B98u; }
        if (ctx->pc != 0x239B98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x239B98u; }
        if (ctx->pc != 0x239B98u) { return; }
    }
    ctx->pc = 0x239B98u;
label_239b98:
    // 0x239b98: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x239b98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_239b9c:
    // 0x239b9c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x239b9cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_239ba0:
    // 0x239ba0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x239ba0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_239ba4:
    // 0x239ba4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x239ba4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_239ba8:
    // 0x239ba8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x239ba8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_239bac:
    // 0x239bac: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x239bacu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_239bb0:
    // 0x239bb0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x239bb0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_239bb4:
    // 0x239bb4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x239bb4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_239bb8:
    // 0x239bb8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x239bb8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_239bbc:
    // 0x239bbc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x239bbcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_239bc0:
    // 0x239bc0: 0x3e00008  jr          $ra
label_239bc4:
    if (ctx->pc == 0x239BC4u) {
        ctx->pc = 0x239BC4u;
            // 0x239bc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x239BC8u;
        goto label_fallthrough_0x239bc0;
    }
    ctx->pc = 0x239BC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x239BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x239BC0u;
            // 0x239bc4: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x239bc0:
    ctx->pc = 0x239BC8u;
    ctx->pc = 0x239bc8u;
}
