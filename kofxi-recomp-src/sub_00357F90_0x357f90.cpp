#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00357F90
// Address: 0x357f90 - 0x35c0ec
void sub_00357F90_0x357f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357F90_0x357f90");
#endif

    switch (ctx->pc) {
        case 0x357f90u: goto label_357f90;
        case 0x357f94u: goto label_357f94;
        case 0x357f98u: goto label_357f98;
        case 0x357f9cu: goto label_357f9c;
        case 0x357fa0u: goto label_357fa0;
        case 0x357fa4u: goto label_357fa4;
        case 0x357fa8u: goto label_357fa8;
        case 0x357facu: goto label_357fac;
        case 0x357fb0u: goto label_357fb0;
        case 0x357fb4u: goto label_357fb4;
        case 0x357fb8u: goto label_357fb8;
        case 0x357fbcu: goto label_357fbc;
        case 0x357fc0u: goto label_357fc0;
        case 0x357fc4u: goto label_357fc4;
        case 0x357fc8u: goto label_357fc8;
        case 0x357fccu: goto label_357fcc;
        case 0x357fd0u: goto label_357fd0;
        case 0x357fd4u: goto label_357fd4;
        case 0x357fd8u: goto label_357fd8;
        case 0x357fdcu: goto label_357fdc;
        case 0x357fe0u: goto label_357fe0;
        case 0x357fe4u: goto label_357fe4;
        case 0x357fe8u: goto label_357fe8;
        case 0x357fecu: goto label_357fec;
        case 0x357ff0u: goto label_357ff0;
        case 0x357ff4u: goto label_357ff4;
        case 0x357ff8u: goto label_357ff8;
        case 0x357ffcu: goto label_357ffc;
        case 0x358000u: goto label_358000;
        case 0x358004u: goto label_358004;
        case 0x358008u: goto label_358008;
        case 0x35800cu: goto label_35800c;
        case 0x358010u: goto label_358010;
        case 0x358014u: goto label_358014;
        case 0x358018u: goto label_358018;
        case 0x35801cu: goto label_35801c;
        case 0x358020u: goto label_358020;
        case 0x358024u: goto label_358024;
        case 0x358028u: goto label_358028;
        case 0x35802cu: goto label_35802c;
        case 0x358030u: goto label_358030;
        case 0x358034u: goto label_358034;
        case 0x358038u: goto label_358038;
        case 0x35803cu: goto label_35803c;
        case 0x358040u: goto label_358040;
        case 0x358044u: goto label_358044;
        case 0x358048u: goto label_358048;
        case 0x35804cu: goto label_35804c;
        case 0x358050u: goto label_358050;
        case 0x358054u: goto label_358054;
        case 0x358058u: goto label_358058;
        case 0x35805cu: goto label_35805c;
        case 0x358060u: goto label_358060;
        case 0x358064u: goto label_358064;
        case 0x358068u: goto label_358068;
        case 0x35806cu: goto label_35806c;
        case 0x358070u: goto label_358070;
        case 0x358074u: goto label_358074;
        case 0x358078u: goto label_358078;
        case 0x35807cu: goto label_35807c;
        case 0x358080u: goto label_358080;
        case 0x358084u: goto label_358084;
        case 0x358088u: goto label_358088;
        case 0x35808cu: goto label_35808c;
        case 0x358090u: goto label_358090;
        case 0x358094u: goto label_358094;
        case 0x358098u: goto label_358098;
        case 0x35809cu: goto label_35809c;
        case 0x3580a0u: goto label_3580a0;
        case 0x3580a4u: goto label_3580a4;
        case 0x3580a8u: goto label_3580a8;
        case 0x3580acu: goto label_3580ac;
        case 0x3580b0u: goto label_3580b0;
        case 0x3580b4u: goto label_3580b4;
        case 0x3580b8u: goto label_3580b8;
        case 0x3580bcu: goto label_3580bc;
        case 0x3580c0u: goto label_3580c0;
        case 0x3580c4u: goto label_3580c4;
        case 0x3580c8u: goto label_3580c8;
        case 0x3580ccu: goto label_3580cc;
        case 0x3580d0u: goto label_3580d0;
        case 0x3580d4u: goto label_3580d4;
        case 0x3580d8u: goto label_3580d8;
        case 0x3580dcu: goto label_3580dc;
        case 0x3580e0u: goto label_3580e0;
        case 0x3580e4u: goto label_3580e4;
        case 0x3580e8u: goto label_3580e8;
        case 0x3580ecu: goto label_3580ec;
        case 0x3580f0u: goto label_3580f0;
        case 0x3580f4u: goto label_3580f4;
        case 0x3580f8u: goto label_3580f8;
        case 0x3580fcu: goto label_3580fc;
        case 0x358100u: goto label_358100;
        case 0x358104u: goto label_358104;
        case 0x358108u: goto label_358108;
        case 0x35810cu: goto label_35810c;
        case 0x358110u: goto label_358110;
        case 0x358114u: goto label_358114;
        case 0x358118u: goto label_358118;
        case 0x35811cu: goto label_35811c;
        case 0x358120u: goto label_358120;
        case 0x358124u: goto label_358124;
        case 0x358128u: goto label_358128;
        case 0x35812cu: goto label_35812c;
        case 0x358130u: goto label_358130;
        case 0x358134u: goto label_358134;
        case 0x358138u: goto label_358138;
        case 0x35813cu: goto label_35813c;
        case 0x358140u: goto label_358140;
        case 0x358144u: goto label_358144;
        case 0x358148u: goto label_358148;
        case 0x35814cu: goto label_35814c;
        case 0x358150u: goto label_358150;
        case 0x358154u: goto label_358154;
        case 0x358158u: goto label_358158;
        case 0x35815cu: goto label_35815c;
        case 0x358160u: goto label_358160;
        case 0x358164u: goto label_358164;
        case 0x358168u: goto label_358168;
        case 0x35816cu: goto label_35816c;
        case 0x358170u: goto label_358170;
        case 0x358174u: goto label_358174;
        case 0x358178u: goto label_358178;
        case 0x35817cu: goto label_35817c;
        case 0x358180u: goto label_358180;
        case 0x358184u: goto label_358184;
        case 0x358188u: goto label_358188;
        case 0x35818cu: goto label_35818c;
        case 0x358190u: goto label_358190;
        case 0x358194u: goto label_358194;
        case 0x358198u: goto label_358198;
        case 0x35819cu: goto label_35819c;
        case 0x3581a0u: goto label_3581a0;
        case 0x3581a4u: goto label_3581a4;
        case 0x3581a8u: goto label_3581a8;
        case 0x3581acu: goto label_3581ac;
        case 0x3581b0u: goto label_3581b0;
        case 0x3581b4u: goto label_3581b4;
        case 0x3581b8u: goto label_3581b8;
        case 0x3581bcu: goto label_3581bc;
        case 0x3581c0u: goto label_3581c0;
        case 0x3581c4u: goto label_3581c4;
        case 0x3581c8u: goto label_3581c8;
        case 0x3581ccu: goto label_3581cc;
        case 0x3581d0u: goto label_3581d0;
        case 0x3581d4u: goto label_3581d4;
        case 0x3581d8u: goto label_3581d8;
        case 0x3581dcu: goto label_3581dc;
        case 0x3581e0u: goto label_3581e0;
        case 0x3581e4u: goto label_3581e4;
        case 0x3581e8u: goto label_3581e8;
        case 0x3581ecu: goto label_3581ec;
        case 0x3581f0u: goto label_3581f0;
        case 0x3581f4u: goto label_3581f4;
        case 0x3581f8u: goto label_3581f8;
        case 0x3581fcu: goto label_3581fc;
        case 0x358200u: goto label_358200;
        case 0x358204u: goto label_358204;
        case 0x358208u: goto label_358208;
        case 0x35820cu: goto label_35820c;
        case 0x358210u: goto label_358210;
        case 0x358214u: goto label_358214;
        case 0x358218u: goto label_358218;
        case 0x35821cu: goto label_35821c;
        case 0x358220u: goto label_358220;
        case 0x358224u: goto label_358224;
        case 0x358228u: goto label_358228;
        case 0x35822cu: goto label_35822c;
        case 0x358230u: goto label_358230;
        case 0x358234u: goto label_358234;
        case 0x358238u: goto label_358238;
        case 0x35823cu: goto label_35823c;
        case 0x358240u: goto label_358240;
        case 0x358244u: goto label_358244;
        case 0x358248u: goto label_358248;
        case 0x35824cu: goto label_35824c;
        case 0x358250u: goto label_358250;
        case 0x358254u: goto label_358254;
        case 0x358258u: goto label_358258;
        case 0x35825cu: goto label_35825c;
        case 0x358260u: goto label_358260;
        case 0x358264u: goto label_358264;
        case 0x358268u: goto label_358268;
        case 0x35826cu: goto label_35826c;
        case 0x358270u: goto label_358270;
        case 0x358274u: goto label_358274;
        case 0x358278u: goto label_358278;
        case 0x35827cu: goto label_35827c;
        case 0x358280u: goto label_358280;
        case 0x358284u: goto label_358284;
        case 0x358288u: goto label_358288;
        case 0x35828cu: goto label_35828c;
        case 0x358290u: goto label_358290;
        case 0x358294u: goto label_358294;
        case 0x358298u: goto label_358298;
        case 0x35829cu: goto label_35829c;
        case 0x3582a0u: goto label_3582a0;
        case 0x3582a4u: goto label_3582a4;
        case 0x3582a8u: goto label_3582a8;
        case 0x3582acu: goto label_3582ac;
        case 0x3582b0u: goto label_3582b0;
        case 0x3582b4u: goto label_3582b4;
        case 0x3582b8u: goto label_3582b8;
        case 0x3582bcu: goto label_3582bc;
        case 0x3582c0u: goto label_3582c0;
        case 0x3582c4u: goto label_3582c4;
        case 0x3582c8u: goto label_3582c8;
        case 0x3582ccu: goto label_3582cc;
        case 0x3582d0u: goto label_3582d0;
        case 0x3582d4u: goto label_3582d4;
        case 0x3582d8u: goto label_3582d8;
        case 0x3582dcu: goto label_3582dc;
        case 0x3582e0u: goto label_3582e0;
        case 0x3582e4u: goto label_3582e4;
        case 0x3582e8u: goto label_3582e8;
        case 0x3582ecu: goto label_3582ec;
        case 0x3582f0u: goto label_3582f0;
        case 0x3582f4u: goto label_3582f4;
        case 0x3582f8u: goto label_3582f8;
        case 0x3582fcu: goto label_3582fc;
        case 0x358300u: goto label_358300;
        case 0x358304u: goto label_358304;
        case 0x358308u: goto label_358308;
        case 0x35830cu: goto label_35830c;
        case 0x358310u: goto label_358310;
        case 0x358314u: goto label_358314;
        case 0x358318u: goto label_358318;
        case 0x35831cu: goto label_35831c;
        case 0x358320u: goto label_358320;
        case 0x358324u: goto label_358324;
        case 0x358328u: goto label_358328;
        case 0x35832cu: goto label_35832c;
        case 0x358330u: goto label_358330;
        case 0x358334u: goto label_358334;
        case 0x358338u: goto label_358338;
        case 0x35833cu: goto label_35833c;
        case 0x358340u: goto label_358340;
        case 0x358344u: goto label_358344;
        case 0x358348u: goto label_358348;
        case 0x35834cu: goto label_35834c;
        case 0x358350u: goto label_358350;
        case 0x358354u: goto label_358354;
        case 0x358358u: goto label_358358;
        case 0x35835cu: goto label_35835c;
        case 0x358360u: goto label_358360;
        case 0x358364u: goto label_358364;
        case 0x358368u: goto label_358368;
        case 0x35836cu: goto label_35836c;
        case 0x358370u: goto label_358370;
        case 0x358374u: goto label_358374;
        case 0x358378u: goto label_358378;
        case 0x35837cu: goto label_35837c;
        case 0x358380u: goto label_358380;
        case 0x358384u: goto label_358384;
        case 0x358388u: goto label_358388;
        case 0x35838cu: goto label_35838c;
        case 0x358390u: goto label_358390;
        case 0x358394u: goto label_358394;
        case 0x358398u: goto label_358398;
        case 0x35839cu: goto label_35839c;
        case 0x3583a0u: goto label_3583a0;
        case 0x3583a4u: goto label_3583a4;
        case 0x3583a8u: goto label_3583a8;
        case 0x3583acu: goto label_3583ac;
        case 0x3583b0u: goto label_3583b0;
        case 0x3583b4u: goto label_3583b4;
        case 0x3583b8u: goto label_3583b8;
        case 0x3583bcu: goto label_3583bc;
        case 0x3583c0u: goto label_3583c0;
        case 0x3583c4u: goto label_3583c4;
        case 0x3583c8u: goto label_3583c8;
        case 0x3583ccu: goto label_3583cc;
        case 0x3583d0u: goto label_3583d0;
        case 0x3583d4u: goto label_3583d4;
        case 0x3583d8u: goto label_3583d8;
        case 0x3583dcu: goto label_3583dc;
        case 0x3583e0u: goto label_3583e0;
        case 0x3583e4u: goto label_3583e4;
        case 0x3583e8u: goto label_3583e8;
        case 0x3583ecu: goto label_3583ec;
        case 0x3583f0u: goto label_3583f0;
        case 0x3583f4u: goto label_3583f4;
        case 0x3583f8u: goto label_3583f8;
        case 0x3583fcu: goto label_3583fc;
        case 0x358400u: goto label_358400;
        case 0x358404u: goto label_358404;
        case 0x358408u: goto label_358408;
        case 0x35840cu: goto label_35840c;
        case 0x358410u: goto label_358410;
        case 0x358414u: goto label_358414;
        case 0x358418u: goto label_358418;
        case 0x35841cu: goto label_35841c;
        case 0x358420u: goto label_358420;
        case 0x358424u: goto label_358424;
        case 0x358428u: goto label_358428;
        case 0x35842cu: goto label_35842c;
        case 0x358430u: goto label_358430;
        case 0x358434u: goto label_358434;
        case 0x358438u: goto label_358438;
        case 0x35843cu: goto label_35843c;
        case 0x358440u: goto label_358440;
        case 0x358444u: goto label_358444;
        case 0x358448u: goto label_358448;
        case 0x35844cu: goto label_35844c;
        case 0x358450u: goto label_358450;
        case 0x358454u: goto label_358454;
        case 0x358458u: goto label_358458;
        case 0x35845cu: goto label_35845c;
        case 0x358460u: goto label_358460;
        case 0x358464u: goto label_358464;
        case 0x358468u: goto label_358468;
        case 0x35846cu: goto label_35846c;
        case 0x358470u: goto label_358470;
        case 0x358474u: goto label_358474;
        case 0x358478u: goto label_358478;
        case 0x35847cu: goto label_35847c;
        case 0x358480u: goto label_358480;
        case 0x358484u: goto label_358484;
        case 0x358488u: goto label_358488;
        case 0x35848cu: goto label_35848c;
        case 0x358490u: goto label_358490;
        case 0x358494u: goto label_358494;
        case 0x358498u: goto label_358498;
        case 0x35849cu: goto label_35849c;
        case 0x3584a0u: goto label_3584a0;
        case 0x3584a4u: goto label_3584a4;
        case 0x3584a8u: goto label_3584a8;
        case 0x3584acu: goto label_3584ac;
        case 0x3584b0u: goto label_3584b0;
        case 0x3584b4u: goto label_3584b4;
        case 0x3584b8u: goto label_3584b8;
        case 0x3584bcu: goto label_3584bc;
        case 0x3584c0u: goto label_3584c0;
        case 0x3584c4u: goto label_3584c4;
        case 0x3584c8u: goto label_3584c8;
        case 0x3584ccu: goto label_3584cc;
        case 0x3584d0u: goto label_3584d0;
        case 0x3584d4u: goto label_3584d4;
        case 0x3584d8u: goto label_3584d8;
        case 0x3584dcu: goto label_3584dc;
        case 0x3584e0u: goto label_3584e0;
        case 0x3584e4u: goto label_3584e4;
        case 0x3584e8u: goto label_3584e8;
        case 0x3584ecu: goto label_3584ec;
        case 0x3584f0u: goto label_3584f0;
        case 0x3584f4u: goto label_3584f4;
        case 0x3584f8u: goto label_3584f8;
        case 0x3584fcu: goto label_3584fc;
        case 0x358500u: goto label_358500;
        case 0x358504u: goto label_358504;
        case 0x358508u: goto label_358508;
        case 0x35850cu: goto label_35850c;
        case 0x358510u: goto label_358510;
        case 0x358514u: goto label_358514;
        case 0x358518u: goto label_358518;
        case 0x35851cu: goto label_35851c;
        case 0x358520u: goto label_358520;
        case 0x358524u: goto label_358524;
        case 0x358528u: goto label_358528;
        case 0x35852cu: goto label_35852c;
        case 0x358530u: goto label_358530;
        case 0x358534u: goto label_358534;
        case 0x358538u: goto label_358538;
        case 0x35853cu: goto label_35853c;
        case 0x358540u: goto label_358540;
        case 0x358544u: goto label_358544;
        case 0x358548u: goto label_358548;
        case 0x35854cu: goto label_35854c;
        case 0x358550u: goto label_358550;
        case 0x358554u: goto label_358554;
        case 0x358558u: goto label_358558;
        case 0x35855cu: goto label_35855c;
        case 0x358560u: goto label_358560;
        case 0x358564u: goto label_358564;
        case 0x358568u: goto label_358568;
        case 0x35856cu: goto label_35856c;
        case 0x358570u: goto label_358570;
        case 0x358574u: goto label_358574;
        case 0x358578u: goto label_358578;
        case 0x35857cu: goto label_35857c;
        case 0x358580u: goto label_358580;
        case 0x358584u: goto label_358584;
        case 0x358588u: goto label_358588;
        case 0x35858cu: goto label_35858c;
        case 0x358590u: goto label_358590;
        case 0x358594u: goto label_358594;
        case 0x358598u: goto label_358598;
        case 0x35859cu: goto label_35859c;
        case 0x3585a0u: goto label_3585a0;
        case 0x3585a4u: goto label_3585a4;
        case 0x3585a8u: goto label_3585a8;
        case 0x3585acu: goto label_3585ac;
        case 0x3585b0u: goto label_3585b0;
        case 0x3585b4u: goto label_3585b4;
        case 0x3585b8u: goto label_3585b8;
        case 0x3585bcu: goto label_3585bc;
        case 0x3585c0u: goto label_3585c0;
        case 0x3585c4u: goto label_3585c4;
        case 0x3585c8u: goto label_3585c8;
        case 0x3585ccu: goto label_3585cc;
        case 0x3585d0u: goto label_3585d0;
        case 0x3585d4u: goto label_3585d4;
        case 0x3585d8u: goto label_3585d8;
        case 0x3585dcu: goto label_3585dc;
        case 0x3585e0u: goto label_3585e0;
        case 0x3585e4u: goto label_3585e4;
        case 0x3585e8u: goto label_3585e8;
        case 0x3585ecu: goto label_3585ec;
        case 0x3585f0u: goto label_3585f0;
        case 0x3585f4u: goto label_3585f4;
        case 0x3585f8u: goto label_3585f8;
        case 0x3585fcu: goto label_3585fc;
        case 0x358600u: goto label_358600;
        case 0x358604u: goto label_358604;
        case 0x358608u: goto label_358608;
        case 0x35860cu: goto label_35860c;
        case 0x358610u: goto label_358610;
        case 0x358614u: goto label_358614;
        case 0x358618u: goto label_358618;
        case 0x35861cu: goto label_35861c;
        case 0x358620u: goto label_358620;
        case 0x358624u: goto label_358624;
        case 0x358628u: goto label_358628;
        case 0x35862cu: goto label_35862c;
        case 0x358630u: goto label_358630;
        case 0x358634u: goto label_358634;
        case 0x358638u: goto label_358638;
        case 0x35863cu: goto label_35863c;
        case 0x358640u: goto label_358640;
        case 0x358644u: goto label_358644;
        case 0x358648u: goto label_358648;
        case 0x35864cu: goto label_35864c;
        case 0x358650u: goto label_358650;
        case 0x358654u: goto label_358654;
        case 0x358658u: goto label_358658;
        case 0x35865cu: goto label_35865c;
        case 0x358660u: goto label_358660;
        case 0x358664u: goto label_358664;
        case 0x358668u: goto label_358668;
        case 0x35866cu: goto label_35866c;
        case 0x358670u: goto label_358670;
        case 0x358674u: goto label_358674;
        case 0x358678u: goto label_358678;
        case 0x35867cu: goto label_35867c;
        case 0x358680u: goto label_358680;
        case 0x358684u: goto label_358684;
        case 0x358688u: goto label_358688;
        case 0x35868cu: goto label_35868c;
        case 0x358690u: goto label_358690;
        case 0x358694u: goto label_358694;
        case 0x358698u: goto label_358698;
        case 0x35869cu: goto label_35869c;
        case 0x3586a0u: goto label_3586a0;
        case 0x3586a4u: goto label_3586a4;
        case 0x3586a8u: goto label_3586a8;
        case 0x3586acu: goto label_3586ac;
        case 0x3586b0u: goto label_3586b0;
        case 0x3586b4u: goto label_3586b4;
        case 0x3586b8u: goto label_3586b8;
        case 0x3586bcu: goto label_3586bc;
        case 0x3586c0u: goto label_3586c0;
        case 0x3586c4u: goto label_3586c4;
        case 0x3586c8u: goto label_3586c8;
        case 0x3586ccu: goto label_3586cc;
        case 0x3586d0u: goto label_3586d0;
        case 0x3586d4u: goto label_3586d4;
        case 0x3586d8u: goto label_3586d8;
        case 0x3586dcu: goto label_3586dc;
        case 0x3586e0u: goto label_3586e0;
        case 0x3586e4u: goto label_3586e4;
        case 0x3586e8u: goto label_3586e8;
        case 0x3586ecu: goto label_3586ec;
        case 0x3586f0u: goto label_3586f0;
        case 0x3586f4u: goto label_3586f4;
        case 0x3586f8u: goto label_3586f8;
        case 0x3586fcu: goto label_3586fc;
        case 0x358700u: goto label_358700;
        case 0x358704u: goto label_358704;
        case 0x358708u: goto label_358708;
        case 0x35870cu: goto label_35870c;
        case 0x358710u: goto label_358710;
        case 0x358714u: goto label_358714;
        case 0x358718u: goto label_358718;
        case 0x35871cu: goto label_35871c;
        case 0x358720u: goto label_358720;
        case 0x358724u: goto label_358724;
        case 0x358728u: goto label_358728;
        case 0x35872cu: goto label_35872c;
        case 0x358730u: goto label_358730;
        case 0x358734u: goto label_358734;
        case 0x358738u: goto label_358738;
        case 0x35873cu: goto label_35873c;
        case 0x358740u: goto label_358740;
        case 0x358744u: goto label_358744;
        case 0x358748u: goto label_358748;
        case 0x35874cu: goto label_35874c;
        case 0x358750u: goto label_358750;
        case 0x358754u: goto label_358754;
        case 0x358758u: goto label_358758;
        case 0x35875cu: goto label_35875c;
        case 0x358760u: goto label_358760;
        case 0x358764u: goto label_358764;
        case 0x358768u: goto label_358768;
        case 0x35876cu: goto label_35876c;
        case 0x358770u: goto label_358770;
        case 0x358774u: goto label_358774;
        case 0x358778u: goto label_358778;
        case 0x35877cu: goto label_35877c;
        case 0x358780u: goto label_358780;
        case 0x358784u: goto label_358784;
        case 0x358788u: goto label_358788;
        case 0x35878cu: goto label_35878c;
        case 0x358790u: goto label_358790;
        case 0x358794u: goto label_358794;
        case 0x358798u: goto label_358798;
        case 0x35879cu: goto label_35879c;
        case 0x3587a0u: goto label_3587a0;
        case 0x3587a4u: goto label_3587a4;
        case 0x3587a8u: goto label_3587a8;
        case 0x3587acu: goto label_3587ac;
        case 0x3587b0u: goto label_3587b0;
        case 0x3587b4u: goto label_3587b4;
        case 0x3587b8u: goto label_3587b8;
        case 0x3587bcu: goto label_3587bc;
        case 0x3587c0u: goto label_3587c0;
        case 0x3587c4u: goto label_3587c4;
        case 0x3587c8u: goto label_3587c8;
        case 0x3587ccu: goto label_3587cc;
        case 0x3587d0u: goto label_3587d0;
        case 0x3587d4u: goto label_3587d4;
        case 0x3587d8u: goto label_3587d8;
        case 0x3587dcu: goto label_3587dc;
        case 0x3587e0u: goto label_3587e0;
        case 0x3587e4u: goto label_3587e4;
        case 0x3587e8u: goto label_3587e8;
        case 0x3587ecu: goto label_3587ec;
        case 0x3587f0u: goto label_3587f0;
        case 0x3587f4u: goto label_3587f4;
        case 0x3587f8u: goto label_3587f8;
        case 0x3587fcu: goto label_3587fc;
        case 0x358800u: goto label_358800;
        case 0x358804u: goto label_358804;
        case 0x358808u: goto label_358808;
        case 0x35880cu: goto label_35880c;
        case 0x358810u: goto label_358810;
        case 0x358814u: goto label_358814;
        case 0x358818u: goto label_358818;
        case 0x35881cu: goto label_35881c;
        case 0x358820u: goto label_358820;
        case 0x358824u: goto label_358824;
        case 0x358828u: goto label_358828;
        case 0x35882cu: goto label_35882c;
        case 0x358830u: goto label_358830;
        case 0x358834u: goto label_358834;
        case 0x358838u: goto label_358838;
        case 0x35883cu: goto label_35883c;
        case 0x358840u: goto label_358840;
        case 0x358844u: goto label_358844;
        case 0x358848u: goto label_358848;
        case 0x35884cu: goto label_35884c;
        case 0x358850u: goto label_358850;
        case 0x358854u: goto label_358854;
        case 0x358858u: goto label_358858;
        case 0x35885cu: goto label_35885c;
        case 0x358860u: goto label_358860;
        case 0x358864u: goto label_358864;
        case 0x358868u: goto label_358868;
        case 0x35886cu: goto label_35886c;
        case 0x358870u: goto label_358870;
        case 0x358874u: goto label_358874;
        case 0x358878u: goto label_358878;
        case 0x35887cu: goto label_35887c;
        case 0x358880u: goto label_358880;
        case 0x358884u: goto label_358884;
        case 0x358888u: goto label_358888;
        case 0x35888cu: goto label_35888c;
        case 0x358890u: goto label_358890;
        case 0x358894u: goto label_358894;
        case 0x358898u: goto label_358898;
        case 0x35889cu: goto label_35889c;
        case 0x3588a0u: goto label_3588a0;
        case 0x3588a4u: goto label_3588a4;
        case 0x3588a8u: goto label_3588a8;
        case 0x3588acu: goto label_3588ac;
        case 0x3588b0u: goto label_3588b0;
        case 0x3588b4u: goto label_3588b4;
        case 0x3588b8u: goto label_3588b8;
        case 0x3588bcu: goto label_3588bc;
        case 0x3588c0u: goto label_3588c0;
        case 0x3588c4u: goto label_3588c4;
        case 0x3588c8u: goto label_3588c8;
        case 0x3588ccu: goto label_3588cc;
        case 0x3588d0u: goto label_3588d0;
        case 0x3588d4u: goto label_3588d4;
        case 0x3588d8u: goto label_3588d8;
        case 0x3588dcu: goto label_3588dc;
        case 0x3588e0u: goto label_3588e0;
        case 0x3588e4u: goto label_3588e4;
        case 0x3588e8u: goto label_3588e8;
        case 0x3588ecu: goto label_3588ec;
        case 0x3588f0u: goto label_3588f0;
        case 0x3588f4u: goto label_3588f4;
        case 0x3588f8u: goto label_3588f8;
        case 0x3588fcu: goto label_3588fc;
        case 0x358900u: goto label_358900;
        case 0x358904u: goto label_358904;
        case 0x358908u: goto label_358908;
        case 0x35890cu: goto label_35890c;
        case 0x358910u: goto label_358910;
        case 0x358914u: goto label_358914;
        case 0x358918u: goto label_358918;
        case 0x35891cu: goto label_35891c;
        case 0x358920u: goto label_358920;
        case 0x358924u: goto label_358924;
        case 0x358928u: goto label_358928;
        case 0x35892cu: goto label_35892c;
        case 0x358930u: goto label_358930;
        case 0x358934u: goto label_358934;
        case 0x358938u: goto label_358938;
        case 0x35893cu: goto label_35893c;
        case 0x358940u: goto label_358940;
        case 0x358944u: goto label_358944;
        case 0x358948u: goto label_358948;
        case 0x35894cu: goto label_35894c;
        case 0x358950u: goto label_358950;
        case 0x358954u: goto label_358954;
        case 0x358958u: goto label_358958;
        case 0x35895cu: goto label_35895c;
        case 0x358960u: goto label_358960;
        case 0x358964u: goto label_358964;
        case 0x358968u: goto label_358968;
        case 0x35896cu: goto label_35896c;
        case 0x358970u: goto label_358970;
        case 0x358974u: goto label_358974;
        case 0x358978u: goto label_358978;
        case 0x35897cu: goto label_35897c;
        case 0x358980u: goto label_358980;
        case 0x358984u: goto label_358984;
        case 0x358988u: goto label_358988;
        case 0x35898cu: goto label_35898c;
        case 0x358990u: goto label_358990;
        case 0x358994u: goto label_358994;
        case 0x358998u: goto label_358998;
        case 0x35899cu: goto label_35899c;
        case 0x3589a0u: goto label_3589a0;
        case 0x3589a4u: goto label_3589a4;
        case 0x3589a8u: goto label_3589a8;
        case 0x3589acu: goto label_3589ac;
        case 0x3589b0u: goto label_3589b0;
        case 0x3589b4u: goto label_3589b4;
        case 0x3589b8u: goto label_3589b8;
        case 0x3589bcu: goto label_3589bc;
        case 0x3589c0u: goto label_3589c0;
        case 0x3589c4u: goto label_3589c4;
        case 0x3589c8u: goto label_3589c8;
        case 0x3589ccu: goto label_3589cc;
        case 0x3589d0u: goto label_3589d0;
        case 0x3589d4u: goto label_3589d4;
        case 0x3589d8u: goto label_3589d8;
        case 0x3589dcu: goto label_3589dc;
        case 0x3589e0u: goto label_3589e0;
        case 0x3589e4u: goto label_3589e4;
        case 0x3589e8u: goto label_3589e8;
        case 0x3589ecu: goto label_3589ec;
        case 0x3589f0u: goto label_3589f0;
        case 0x3589f4u: goto label_3589f4;
        case 0x3589f8u: goto label_3589f8;
        case 0x3589fcu: goto label_3589fc;
        case 0x358a00u: goto label_358a00;
        case 0x358a04u: goto label_358a04;
        case 0x358a08u: goto label_358a08;
        case 0x358a0cu: goto label_358a0c;
        case 0x358a10u: goto label_358a10;
        case 0x358a14u: goto label_358a14;
        case 0x358a18u: goto label_358a18;
        case 0x358a1cu: goto label_358a1c;
        case 0x358a20u: goto label_358a20;
        case 0x358a24u: goto label_358a24;
        case 0x358a28u: goto label_358a28;
        case 0x358a2cu: goto label_358a2c;
        case 0x358a30u: goto label_358a30;
        case 0x358a34u: goto label_358a34;
        case 0x358a38u: goto label_358a38;
        case 0x358a3cu: goto label_358a3c;
        case 0x358a40u: goto label_358a40;
        case 0x358a44u: goto label_358a44;
        case 0x358a48u: goto label_358a48;
        case 0x358a4cu: goto label_358a4c;
        case 0x358a50u: goto label_358a50;
        case 0x358a54u: goto label_358a54;
        case 0x358a58u: goto label_358a58;
        case 0x358a5cu: goto label_358a5c;
        case 0x358a60u: goto label_358a60;
        case 0x358a64u: goto label_358a64;
        case 0x358a68u: goto label_358a68;
        case 0x358a6cu: goto label_358a6c;
        case 0x358a70u: goto label_358a70;
        case 0x358a74u: goto label_358a74;
        case 0x358a78u: goto label_358a78;
        case 0x358a7cu: goto label_358a7c;
        case 0x358a80u: goto label_358a80;
        case 0x358a84u: goto label_358a84;
        case 0x358a88u: goto label_358a88;
        case 0x358a8cu: goto label_358a8c;
        case 0x358a90u: goto label_358a90;
        case 0x358a94u: goto label_358a94;
        case 0x358a98u: goto label_358a98;
        case 0x358a9cu: goto label_358a9c;
        case 0x358aa0u: goto label_358aa0;
        case 0x358aa4u: goto label_358aa4;
        case 0x358aa8u: goto label_358aa8;
        case 0x358aacu: goto label_358aac;
        case 0x358ab0u: goto label_358ab0;
        case 0x358ab4u: goto label_358ab4;
        case 0x358ab8u: goto label_358ab8;
        case 0x358abcu: goto label_358abc;
        case 0x358ac0u: goto label_358ac0;
        case 0x358ac4u: goto label_358ac4;
        case 0x358ac8u: goto label_358ac8;
        case 0x358accu: goto label_358acc;
        case 0x358ad0u: goto label_358ad0;
        case 0x358ad4u: goto label_358ad4;
        case 0x358ad8u: goto label_358ad8;
        case 0x358adcu: goto label_358adc;
        case 0x358ae0u: goto label_358ae0;
        case 0x358ae4u: goto label_358ae4;
        case 0x358ae8u: goto label_358ae8;
        case 0x358aecu: goto label_358aec;
        case 0x358af0u: goto label_358af0;
        case 0x358af4u: goto label_358af4;
        case 0x358af8u: goto label_358af8;
        case 0x358afcu: goto label_358afc;
        case 0x358b00u: goto label_358b00;
        case 0x358b04u: goto label_358b04;
        case 0x358b08u: goto label_358b08;
        case 0x358b0cu: goto label_358b0c;
        case 0x358b10u: goto label_358b10;
        case 0x358b14u: goto label_358b14;
        case 0x358b18u: goto label_358b18;
        case 0x358b1cu: goto label_358b1c;
        case 0x358b20u: goto label_358b20;
        case 0x358b24u: goto label_358b24;
        case 0x358b28u: goto label_358b28;
        case 0x358b2cu: goto label_358b2c;
        case 0x358b30u: goto label_358b30;
        case 0x358b34u: goto label_358b34;
        case 0x358b38u: goto label_358b38;
        case 0x358b3cu: goto label_358b3c;
        case 0x358b40u: goto label_358b40;
        case 0x358b44u: goto label_358b44;
        case 0x358b48u: goto label_358b48;
        case 0x358b4cu: goto label_358b4c;
        case 0x358b50u: goto label_358b50;
        case 0x358b54u: goto label_358b54;
        case 0x358b58u: goto label_358b58;
        case 0x358b5cu: goto label_358b5c;
        case 0x358b60u: goto label_358b60;
        case 0x358b64u: goto label_358b64;
        case 0x358b68u: goto label_358b68;
        case 0x358b6cu: goto label_358b6c;
        case 0x358b70u: goto label_358b70;
        case 0x358b74u: goto label_358b74;
        case 0x358b78u: goto label_358b78;
        case 0x358b7cu: goto label_358b7c;
        case 0x358b80u: goto label_358b80;
        case 0x358b84u: goto label_358b84;
        case 0x358b88u: goto label_358b88;
        case 0x358b8cu: goto label_358b8c;
        case 0x358b90u: goto label_358b90;
        case 0x358b94u: goto label_358b94;
        case 0x358b98u: goto label_358b98;
        case 0x358b9cu: goto label_358b9c;
        case 0x358ba0u: goto label_358ba0;
        case 0x358ba4u: goto label_358ba4;
        case 0x358ba8u: goto label_358ba8;
        case 0x358bacu: goto label_358bac;
        case 0x358bb0u: goto label_358bb0;
        case 0x358bb4u: goto label_358bb4;
        case 0x358bb8u: goto label_358bb8;
        case 0x358bbcu: goto label_358bbc;
        case 0x358bc0u: goto label_358bc0;
        case 0x358bc4u: goto label_358bc4;
        case 0x358bc8u: goto label_358bc8;
        case 0x358bccu: goto label_358bcc;
        case 0x358bd0u: goto label_358bd0;
        case 0x358bd4u: goto label_358bd4;
        case 0x358bd8u: goto label_358bd8;
        case 0x358bdcu: goto label_358bdc;
        case 0x358be0u: goto label_358be0;
        case 0x358be4u: goto label_358be4;
        case 0x358be8u: goto label_358be8;
        case 0x358becu: goto label_358bec;
        case 0x358bf0u: goto label_358bf0;
        case 0x358bf4u: goto label_358bf4;
        case 0x358bf8u: goto label_358bf8;
        case 0x358bfcu: goto label_358bfc;
        case 0x358c00u: goto label_358c00;
        case 0x358c04u: goto label_358c04;
        case 0x358c08u: goto label_358c08;
        case 0x358c0cu: goto label_358c0c;
        case 0x358c10u: goto label_358c10;
        case 0x358c14u: goto label_358c14;
        case 0x358c18u: goto label_358c18;
        case 0x358c1cu: goto label_358c1c;
        case 0x358c20u: goto label_358c20;
        case 0x358c24u: goto label_358c24;
        case 0x358c28u: goto label_358c28;
        case 0x358c2cu: goto label_358c2c;
        case 0x358c30u: goto label_358c30;
        case 0x358c34u: goto label_358c34;
        case 0x358c38u: goto label_358c38;
        case 0x358c3cu: goto label_358c3c;
        case 0x358c40u: goto label_358c40;
        case 0x358c44u: goto label_358c44;
        case 0x358c48u: goto label_358c48;
        case 0x358c4cu: goto label_358c4c;
        case 0x358c50u: goto label_358c50;
        case 0x358c54u: goto label_358c54;
        case 0x358c58u: goto label_358c58;
        case 0x358c5cu: goto label_358c5c;
        case 0x358c60u: goto label_358c60;
        case 0x358c64u: goto label_358c64;
        case 0x358c68u: goto label_358c68;
        case 0x358c6cu: goto label_358c6c;
        case 0x358c70u: goto label_358c70;
        case 0x358c74u: goto label_358c74;
        case 0x358c78u: goto label_358c78;
        case 0x358c7cu: goto label_358c7c;
        case 0x358c80u: goto label_358c80;
        case 0x358c84u: goto label_358c84;
        case 0x358c88u: goto label_358c88;
        case 0x358c8cu: goto label_358c8c;
        case 0x358c90u: goto label_358c90;
        case 0x358c94u: goto label_358c94;
        case 0x358c98u: goto label_358c98;
        case 0x358c9cu: goto label_358c9c;
        case 0x358ca0u: goto label_358ca0;
        case 0x358ca4u: goto label_358ca4;
        case 0x358ca8u: goto label_358ca8;
        case 0x358cacu: goto label_358cac;
        case 0x358cb0u: goto label_358cb0;
        case 0x358cb4u: goto label_358cb4;
        case 0x358cb8u: goto label_358cb8;
        case 0x358cbcu: goto label_358cbc;
        case 0x358cc0u: goto label_358cc0;
        case 0x358cc4u: goto label_358cc4;
        case 0x358cc8u: goto label_358cc8;
        case 0x358cccu: goto label_358ccc;
        case 0x358cd0u: goto label_358cd0;
        case 0x358cd4u: goto label_358cd4;
        case 0x358cd8u: goto label_358cd8;
        case 0x358cdcu: goto label_358cdc;
        case 0x358ce0u: goto label_358ce0;
        case 0x358ce4u: goto label_358ce4;
        case 0x358ce8u: goto label_358ce8;
        case 0x358cecu: goto label_358cec;
        case 0x358cf0u: goto label_358cf0;
        case 0x358cf4u: goto label_358cf4;
        case 0x358cf8u: goto label_358cf8;
        case 0x358cfcu: goto label_358cfc;
        case 0x358d00u: goto label_358d00;
        case 0x358d04u: goto label_358d04;
        case 0x358d08u: goto label_358d08;
        case 0x358d0cu: goto label_358d0c;
        case 0x358d10u: goto label_358d10;
        case 0x358d14u: goto label_358d14;
        case 0x358d18u: goto label_358d18;
        case 0x358d1cu: goto label_358d1c;
        case 0x358d20u: goto label_358d20;
        case 0x358d24u: goto label_358d24;
        case 0x358d28u: goto label_358d28;
        case 0x358d2cu: goto label_358d2c;
        case 0x358d30u: goto label_358d30;
        case 0x358d34u: goto label_358d34;
        case 0x358d38u: goto label_358d38;
        case 0x358d3cu: goto label_358d3c;
        case 0x358d40u: goto label_358d40;
        case 0x358d44u: goto label_358d44;
        case 0x358d48u: goto label_358d48;
        case 0x358d4cu: goto label_358d4c;
        case 0x358d50u: goto label_358d50;
        case 0x358d54u: goto label_358d54;
        case 0x358d58u: goto label_358d58;
        case 0x358d5cu: goto label_358d5c;
        case 0x358d60u: goto label_358d60;
        case 0x358d64u: goto label_358d64;
        case 0x358d68u: goto label_358d68;
        case 0x358d6cu: goto label_358d6c;
        case 0x358d70u: goto label_358d70;
        case 0x358d74u: goto label_358d74;
        case 0x358d78u: goto label_358d78;
        case 0x358d7cu: goto label_358d7c;
        case 0x358d80u: goto label_358d80;
        case 0x358d84u: goto label_358d84;
        case 0x358d88u: goto label_358d88;
        case 0x358d8cu: goto label_358d8c;
        case 0x358d90u: goto label_358d90;
        case 0x358d94u: goto label_358d94;
        case 0x358d98u: goto label_358d98;
        case 0x358d9cu: goto label_358d9c;
        case 0x358da0u: goto label_358da0;
        case 0x358da4u: goto label_358da4;
        case 0x358da8u: goto label_358da8;
        case 0x358dacu: goto label_358dac;
        case 0x358db0u: goto label_358db0;
        case 0x358db4u: goto label_358db4;
        case 0x358db8u: goto label_358db8;
        case 0x358dbcu: goto label_358dbc;
        case 0x358dc0u: goto label_358dc0;
        case 0x358dc4u: goto label_358dc4;
        case 0x358dc8u: goto label_358dc8;
        case 0x358dccu: goto label_358dcc;
        case 0x358dd0u: goto label_358dd0;
        case 0x358dd4u: goto label_358dd4;
        case 0x358dd8u: goto label_358dd8;
        case 0x358ddcu: goto label_358ddc;
        case 0x358de0u: goto label_358de0;
        case 0x358de4u: goto label_358de4;
        case 0x358de8u: goto label_358de8;
        case 0x358decu: goto label_358dec;
        case 0x358df0u: goto label_358df0;
        case 0x358df4u: goto label_358df4;
        case 0x358df8u: goto label_358df8;
        case 0x358dfcu: goto label_358dfc;
        case 0x358e00u: goto label_358e00;
        case 0x358e04u: goto label_358e04;
        case 0x358e08u: goto label_358e08;
        case 0x358e0cu: goto label_358e0c;
        case 0x358e10u: goto label_358e10;
        case 0x358e14u: goto label_358e14;
        case 0x358e18u: goto label_358e18;
        case 0x358e1cu: goto label_358e1c;
        case 0x358e20u: goto label_358e20;
        case 0x358e24u: goto label_358e24;
        case 0x358e28u: goto label_358e28;
        case 0x358e2cu: goto label_358e2c;
        case 0x358e30u: goto label_358e30;
        case 0x358e34u: goto label_358e34;
        case 0x358e38u: goto label_358e38;
        case 0x358e3cu: goto label_358e3c;
        case 0x358e40u: goto label_358e40;
        case 0x358e44u: goto label_358e44;
        case 0x358e48u: goto label_358e48;
        case 0x358e4cu: goto label_358e4c;
        case 0x358e50u: goto label_358e50;
        case 0x358e54u: goto label_358e54;
        case 0x358e58u: goto label_358e58;
        case 0x358e5cu: goto label_358e5c;
        case 0x358e60u: goto label_358e60;
        case 0x358e64u: goto label_358e64;
        case 0x358e68u: goto label_358e68;
        case 0x358e6cu: goto label_358e6c;
        case 0x358e70u: goto label_358e70;
        case 0x358e74u: goto label_358e74;
        case 0x358e78u: goto label_358e78;
        case 0x358e7cu: goto label_358e7c;
        case 0x358e80u: goto label_358e80;
        case 0x358e84u: goto label_358e84;
        case 0x358e88u: goto label_358e88;
        case 0x358e8cu: goto label_358e8c;
        case 0x358e90u: goto label_358e90;
        case 0x358e94u: goto label_358e94;
        case 0x358e98u: goto label_358e98;
        case 0x358e9cu: goto label_358e9c;
        case 0x358ea0u: goto label_358ea0;
        case 0x358ea4u: goto label_358ea4;
        case 0x358ea8u: goto label_358ea8;
        case 0x358eacu: goto label_358eac;
        case 0x358eb0u: goto label_358eb0;
        case 0x358eb4u: goto label_358eb4;
        case 0x358eb8u: goto label_358eb8;
        case 0x358ebcu: goto label_358ebc;
        case 0x358ec0u: goto label_358ec0;
        case 0x358ec4u: goto label_358ec4;
        case 0x358ec8u: goto label_358ec8;
        case 0x358eccu: goto label_358ecc;
        case 0x358ed0u: goto label_358ed0;
        case 0x358ed4u: goto label_358ed4;
        case 0x358ed8u: goto label_358ed8;
        case 0x358edcu: goto label_358edc;
        case 0x358ee0u: goto label_358ee0;
        case 0x358ee4u: goto label_358ee4;
        case 0x358ee8u: goto label_358ee8;
        case 0x358eecu: goto label_358eec;
        case 0x358ef0u: goto label_358ef0;
        case 0x358ef4u: goto label_358ef4;
        case 0x358ef8u: goto label_358ef8;
        case 0x358efcu: goto label_358efc;
        case 0x358f00u: goto label_358f00;
        case 0x358f04u: goto label_358f04;
        case 0x358f08u: goto label_358f08;
        case 0x358f0cu: goto label_358f0c;
        case 0x358f10u: goto label_358f10;
        case 0x358f14u: goto label_358f14;
        case 0x358f18u: goto label_358f18;
        case 0x358f1cu: goto label_358f1c;
        case 0x358f20u: goto label_358f20;
        case 0x358f24u: goto label_358f24;
        case 0x358f28u: goto label_358f28;
        case 0x358f2cu: goto label_358f2c;
        case 0x358f30u: goto label_358f30;
        case 0x358f34u: goto label_358f34;
        case 0x358f38u: goto label_358f38;
        case 0x358f3cu: goto label_358f3c;
        case 0x358f40u: goto label_358f40;
        case 0x358f44u: goto label_358f44;
        case 0x358f48u: goto label_358f48;
        case 0x358f4cu: goto label_358f4c;
        case 0x358f50u: goto label_358f50;
        case 0x358f54u: goto label_358f54;
        case 0x358f58u: goto label_358f58;
        case 0x358f5cu: goto label_358f5c;
        case 0x358f60u: goto label_358f60;
        case 0x358f64u: goto label_358f64;
        case 0x358f68u: goto label_358f68;
        case 0x358f6cu: goto label_358f6c;
        case 0x358f70u: goto label_358f70;
        case 0x358f74u: goto label_358f74;
        case 0x358f78u: goto label_358f78;
        case 0x358f7cu: goto label_358f7c;
        case 0x358f80u: goto label_358f80;
        case 0x358f84u: goto label_358f84;
        case 0x358f88u: goto label_358f88;
        case 0x358f8cu: goto label_358f8c;
        case 0x358f90u: goto label_358f90;
        case 0x358f94u: goto label_358f94;
        case 0x358f98u: goto label_358f98;
        case 0x358f9cu: goto label_358f9c;
        case 0x358fa0u: goto label_358fa0;
        case 0x358fa4u: goto label_358fa4;
        case 0x358fa8u: goto label_358fa8;
        case 0x358facu: goto label_358fac;
        case 0x358fb0u: goto label_358fb0;
        case 0x358fb4u: goto label_358fb4;
        case 0x358fb8u: goto label_358fb8;
        case 0x358fbcu: goto label_358fbc;
        case 0x358fc0u: goto label_358fc0;
        case 0x358fc4u: goto label_358fc4;
        case 0x358fc8u: goto label_358fc8;
        case 0x358fccu: goto label_358fcc;
        case 0x358fd0u: goto label_358fd0;
        case 0x358fd4u: goto label_358fd4;
        case 0x358fd8u: goto label_358fd8;
        case 0x358fdcu: goto label_358fdc;
        case 0x358fe0u: goto label_358fe0;
        case 0x358fe4u: goto label_358fe4;
        case 0x358fe8u: goto label_358fe8;
        case 0x358fecu: goto label_358fec;
        case 0x358ff0u: goto label_358ff0;
        case 0x358ff4u: goto label_358ff4;
        case 0x358ff8u: goto label_358ff8;
        case 0x358ffcu: goto label_358ffc;
        case 0x359000u: goto label_359000;
        case 0x359004u: goto label_359004;
        case 0x359008u: goto label_359008;
        case 0x35900cu: goto label_35900c;
        case 0x359010u: goto label_359010;
        case 0x359014u: goto label_359014;
        case 0x359018u: goto label_359018;
        case 0x35901cu: goto label_35901c;
        case 0x359020u: goto label_359020;
        case 0x359024u: goto label_359024;
        case 0x359028u: goto label_359028;
        case 0x35902cu: goto label_35902c;
        case 0x359030u: goto label_359030;
        case 0x359034u: goto label_359034;
        case 0x359038u: goto label_359038;
        case 0x35903cu: goto label_35903c;
        case 0x359040u: goto label_359040;
        case 0x359044u: goto label_359044;
        case 0x359048u: goto label_359048;
        case 0x35904cu: goto label_35904c;
        case 0x359050u: goto label_359050;
        case 0x359054u: goto label_359054;
        case 0x359058u: goto label_359058;
        case 0x35905cu: goto label_35905c;
        case 0x359060u: goto label_359060;
        case 0x359064u: goto label_359064;
        case 0x359068u: goto label_359068;
        case 0x35906cu: goto label_35906c;
        case 0x359070u: goto label_359070;
        case 0x359074u: goto label_359074;
        case 0x359078u: goto label_359078;
        case 0x35907cu: goto label_35907c;
        case 0x359080u: goto label_359080;
        case 0x359084u: goto label_359084;
        case 0x359088u: goto label_359088;
        case 0x35908cu: goto label_35908c;
        case 0x359090u: goto label_359090;
        case 0x359094u: goto label_359094;
        case 0x359098u: goto label_359098;
        case 0x35909cu: goto label_35909c;
        case 0x3590a0u: goto label_3590a0;
        case 0x3590a4u: goto label_3590a4;
        case 0x3590a8u: goto label_3590a8;
        case 0x3590acu: goto label_3590ac;
        case 0x3590b0u: goto label_3590b0;
        case 0x3590b4u: goto label_3590b4;
        case 0x3590b8u: goto label_3590b8;
        case 0x3590bcu: goto label_3590bc;
        case 0x3590c0u: goto label_3590c0;
        case 0x3590c4u: goto label_3590c4;
        case 0x3590c8u: goto label_3590c8;
        case 0x3590ccu: goto label_3590cc;
        case 0x3590d0u: goto label_3590d0;
        case 0x3590d4u: goto label_3590d4;
        case 0x3590d8u: goto label_3590d8;
        case 0x3590dcu: goto label_3590dc;
        case 0x3590e0u: goto label_3590e0;
        case 0x3590e4u: goto label_3590e4;
        case 0x3590e8u: goto label_3590e8;
        case 0x3590ecu: goto label_3590ec;
        case 0x3590f0u: goto label_3590f0;
        case 0x3590f4u: goto label_3590f4;
        case 0x3590f8u: goto label_3590f8;
        case 0x3590fcu: goto label_3590fc;
        case 0x359100u: goto label_359100;
        case 0x359104u: goto label_359104;
        case 0x359108u: goto label_359108;
        case 0x35910cu: goto label_35910c;
        case 0x359110u: goto label_359110;
        case 0x359114u: goto label_359114;
        case 0x359118u: goto label_359118;
        case 0x35911cu: goto label_35911c;
        case 0x359120u: goto label_359120;
        case 0x359124u: goto label_359124;
        case 0x359128u: goto label_359128;
        case 0x35912cu: goto label_35912c;
        case 0x359130u: goto label_359130;
        case 0x359134u: goto label_359134;
        case 0x359138u: goto label_359138;
        case 0x35913cu: goto label_35913c;
        case 0x359140u: goto label_359140;
        case 0x359144u: goto label_359144;
        case 0x359148u: goto label_359148;
        case 0x35914cu: goto label_35914c;
        case 0x359150u: goto label_359150;
        case 0x359154u: goto label_359154;
        case 0x359158u: goto label_359158;
        case 0x35915cu: goto label_35915c;
        case 0x359160u: goto label_359160;
        case 0x359164u: goto label_359164;
        case 0x359168u: goto label_359168;
        case 0x35916cu: goto label_35916c;
        case 0x359170u: goto label_359170;
        case 0x359174u: goto label_359174;
        case 0x359178u: goto label_359178;
        case 0x35917cu: goto label_35917c;
        case 0x359180u: goto label_359180;
        case 0x359184u: goto label_359184;
        case 0x359188u: goto label_359188;
        case 0x35918cu: goto label_35918c;
        case 0x359190u: goto label_359190;
        case 0x359194u: goto label_359194;
        case 0x359198u: goto label_359198;
        case 0x35919cu: goto label_35919c;
        case 0x3591a0u: goto label_3591a0;
        case 0x3591a4u: goto label_3591a4;
        case 0x3591a8u: goto label_3591a8;
        case 0x3591acu: goto label_3591ac;
        case 0x3591b0u: goto label_3591b0;
        case 0x3591b4u: goto label_3591b4;
        case 0x3591b8u: goto label_3591b8;
        case 0x3591bcu: goto label_3591bc;
        case 0x3591c0u: goto label_3591c0;
        case 0x3591c4u: goto label_3591c4;
        case 0x3591c8u: goto label_3591c8;
        case 0x3591ccu: goto label_3591cc;
        case 0x3591d0u: goto label_3591d0;
        case 0x3591d4u: goto label_3591d4;
        case 0x3591d8u: goto label_3591d8;
        case 0x3591dcu: goto label_3591dc;
        case 0x3591e0u: goto label_3591e0;
        case 0x3591e4u: goto label_3591e4;
        case 0x3591e8u: goto label_3591e8;
        case 0x3591ecu: goto label_3591ec;
        case 0x3591f0u: goto label_3591f0;
        case 0x3591f4u: goto label_3591f4;
        case 0x3591f8u: goto label_3591f8;
        case 0x3591fcu: goto label_3591fc;
        case 0x359200u: goto label_359200;
        case 0x359204u: goto label_359204;
        case 0x359208u: goto label_359208;
        case 0x35920cu: goto label_35920c;
        case 0x359210u: goto label_359210;
        case 0x359214u: goto label_359214;
        case 0x359218u: goto label_359218;
        case 0x35921cu: goto label_35921c;
        case 0x359220u: goto label_359220;
        case 0x359224u: goto label_359224;
        case 0x359228u: goto label_359228;
        case 0x35922cu: goto label_35922c;
        case 0x359230u: goto label_359230;
        case 0x359234u: goto label_359234;
        case 0x359238u: goto label_359238;
        case 0x35923cu: goto label_35923c;
        case 0x359240u: goto label_359240;
        case 0x359244u: goto label_359244;
        case 0x359248u: goto label_359248;
        case 0x35924cu: goto label_35924c;
        case 0x359250u: goto label_359250;
        case 0x359254u: goto label_359254;
        case 0x359258u: goto label_359258;
        case 0x35925cu: goto label_35925c;
        case 0x359260u: goto label_359260;
        case 0x359264u: goto label_359264;
        case 0x359268u: goto label_359268;
        case 0x35926cu: goto label_35926c;
        case 0x359270u: goto label_359270;
        case 0x359274u: goto label_359274;
        case 0x359278u: goto label_359278;
        case 0x35927cu: goto label_35927c;
        case 0x359280u: goto label_359280;
        case 0x359284u: goto label_359284;
        case 0x359288u: goto label_359288;
        case 0x35928cu: goto label_35928c;
        case 0x359290u: goto label_359290;
        case 0x359294u: goto label_359294;
        case 0x359298u: goto label_359298;
        case 0x35929cu: goto label_35929c;
        case 0x3592a0u: goto label_3592a0;
        case 0x3592a4u: goto label_3592a4;
        case 0x3592a8u: goto label_3592a8;
        case 0x3592acu: goto label_3592ac;
        case 0x3592b0u: goto label_3592b0;
        case 0x3592b4u: goto label_3592b4;
        case 0x3592b8u: goto label_3592b8;
        case 0x3592bcu: goto label_3592bc;
        case 0x3592c0u: goto label_3592c0;
        case 0x3592c4u: goto label_3592c4;
        case 0x3592c8u: goto label_3592c8;
        case 0x3592ccu: goto label_3592cc;
        case 0x3592d0u: goto label_3592d0;
        case 0x3592d4u: goto label_3592d4;
        case 0x3592d8u: goto label_3592d8;
        case 0x3592dcu: goto label_3592dc;
        case 0x3592e0u: goto label_3592e0;
        case 0x3592e4u: goto label_3592e4;
        case 0x3592e8u: goto label_3592e8;
        case 0x3592ecu: goto label_3592ec;
        case 0x3592f0u: goto label_3592f0;
        case 0x3592f4u: goto label_3592f4;
        case 0x3592f8u: goto label_3592f8;
        case 0x3592fcu: goto label_3592fc;
        case 0x359300u: goto label_359300;
        case 0x359304u: goto label_359304;
        case 0x359308u: goto label_359308;
        case 0x35930cu: goto label_35930c;
        case 0x359310u: goto label_359310;
        case 0x359314u: goto label_359314;
        case 0x359318u: goto label_359318;
        case 0x35931cu: goto label_35931c;
        case 0x359320u: goto label_359320;
        case 0x359324u: goto label_359324;
        case 0x359328u: goto label_359328;
        case 0x35932cu: goto label_35932c;
        case 0x359330u: goto label_359330;
        case 0x359334u: goto label_359334;
        case 0x359338u: goto label_359338;
        case 0x35933cu: goto label_35933c;
        case 0x359340u: goto label_359340;
        case 0x359344u: goto label_359344;
        case 0x359348u: goto label_359348;
        case 0x35934cu: goto label_35934c;
        case 0x359350u: goto label_359350;
        case 0x359354u: goto label_359354;
        case 0x359358u: goto label_359358;
        case 0x35935cu: goto label_35935c;
        case 0x359360u: goto label_359360;
        case 0x359364u: goto label_359364;
        case 0x359368u: goto label_359368;
        case 0x35936cu: goto label_35936c;
        case 0x359370u: goto label_359370;
        case 0x359374u: goto label_359374;
        case 0x359378u: goto label_359378;
        case 0x35937cu: goto label_35937c;
        case 0x359380u: goto label_359380;
        case 0x359384u: goto label_359384;
        case 0x359388u: goto label_359388;
        case 0x35938cu: goto label_35938c;
        case 0x359390u: goto label_359390;
        case 0x359394u: goto label_359394;
        case 0x359398u: goto label_359398;
        case 0x35939cu: goto label_35939c;
        case 0x3593a0u: goto label_3593a0;
        case 0x3593a4u: goto label_3593a4;
        case 0x3593a8u: goto label_3593a8;
        case 0x3593acu: goto label_3593ac;
        case 0x3593b0u: goto label_3593b0;
        case 0x3593b4u: goto label_3593b4;
        case 0x3593b8u: goto label_3593b8;
        case 0x3593bcu: goto label_3593bc;
        case 0x3593c0u: goto label_3593c0;
        case 0x3593c4u: goto label_3593c4;
        case 0x3593c8u: goto label_3593c8;
        case 0x3593ccu: goto label_3593cc;
        case 0x3593d0u: goto label_3593d0;
        case 0x3593d4u: goto label_3593d4;
        case 0x3593d8u: goto label_3593d8;
        case 0x3593dcu: goto label_3593dc;
        case 0x3593e0u: goto label_3593e0;
        case 0x3593e4u: goto label_3593e4;
        case 0x3593e8u: goto label_3593e8;
        case 0x3593ecu: goto label_3593ec;
        case 0x3593f0u: goto label_3593f0;
        case 0x3593f4u: goto label_3593f4;
        case 0x3593f8u: goto label_3593f8;
        case 0x3593fcu: goto label_3593fc;
        case 0x359400u: goto label_359400;
        case 0x359404u: goto label_359404;
        case 0x359408u: goto label_359408;
        case 0x35940cu: goto label_35940c;
        case 0x359410u: goto label_359410;
        case 0x359414u: goto label_359414;
        case 0x359418u: goto label_359418;
        case 0x35941cu: goto label_35941c;
        case 0x359420u: goto label_359420;
        case 0x359424u: goto label_359424;
        case 0x359428u: goto label_359428;
        case 0x35942cu: goto label_35942c;
        case 0x359430u: goto label_359430;
        case 0x359434u: goto label_359434;
        case 0x359438u: goto label_359438;
        case 0x35943cu: goto label_35943c;
        case 0x359440u: goto label_359440;
        case 0x359444u: goto label_359444;
        case 0x359448u: goto label_359448;
        case 0x35944cu: goto label_35944c;
        case 0x359450u: goto label_359450;
        case 0x359454u: goto label_359454;
        case 0x359458u: goto label_359458;
        case 0x35945cu: goto label_35945c;
        case 0x359460u: goto label_359460;
        case 0x359464u: goto label_359464;
        case 0x359468u: goto label_359468;
        case 0x35946cu: goto label_35946c;
        case 0x359470u: goto label_359470;
        case 0x359474u: goto label_359474;
        case 0x359478u: goto label_359478;
        case 0x35947cu: goto label_35947c;
        case 0x359480u: goto label_359480;
        case 0x359484u: goto label_359484;
        case 0x359488u: goto label_359488;
        case 0x35948cu: goto label_35948c;
        case 0x359490u: goto label_359490;
        case 0x359494u: goto label_359494;
        case 0x359498u: goto label_359498;
        case 0x35949cu: goto label_35949c;
        case 0x3594a0u: goto label_3594a0;
        case 0x3594a4u: goto label_3594a4;
        case 0x3594a8u: goto label_3594a8;
        case 0x3594acu: goto label_3594ac;
        case 0x3594b0u: goto label_3594b0;
        case 0x3594b4u: goto label_3594b4;
        case 0x3594b8u: goto label_3594b8;
        case 0x3594bcu: goto label_3594bc;
        case 0x3594c0u: goto label_3594c0;
        case 0x3594c4u: goto label_3594c4;
        case 0x3594c8u: goto label_3594c8;
        case 0x3594ccu: goto label_3594cc;
        case 0x3594d0u: goto label_3594d0;
        case 0x3594d4u: goto label_3594d4;
        case 0x3594d8u: goto label_3594d8;
        case 0x3594dcu: goto label_3594dc;
        case 0x3594e0u: goto label_3594e0;
        case 0x3594e4u: goto label_3594e4;
        case 0x3594e8u: goto label_3594e8;
        case 0x3594ecu: goto label_3594ec;
        case 0x3594f0u: goto label_3594f0;
        case 0x3594f4u: goto label_3594f4;
        case 0x3594f8u: goto label_3594f8;
        case 0x3594fcu: goto label_3594fc;
        case 0x359500u: goto label_359500;
        case 0x359504u: goto label_359504;
        case 0x359508u: goto label_359508;
        case 0x35950cu: goto label_35950c;
        case 0x359510u: goto label_359510;
        case 0x359514u: goto label_359514;
        case 0x359518u: goto label_359518;
        case 0x35951cu: goto label_35951c;
        case 0x359520u: goto label_359520;
        case 0x359524u: goto label_359524;
        case 0x359528u: goto label_359528;
        case 0x35952cu: goto label_35952c;
        case 0x359530u: goto label_359530;
        case 0x359534u: goto label_359534;
        case 0x359538u: goto label_359538;
        case 0x35953cu: goto label_35953c;
        case 0x359540u: goto label_359540;
        case 0x359544u: goto label_359544;
        case 0x359548u: goto label_359548;
        case 0x35954cu: goto label_35954c;
        case 0x359550u: goto label_359550;
        case 0x359554u: goto label_359554;
        case 0x359558u: goto label_359558;
        case 0x35955cu: goto label_35955c;
        case 0x359560u: goto label_359560;
        case 0x359564u: goto label_359564;
        case 0x359568u: goto label_359568;
        case 0x35956cu: goto label_35956c;
        case 0x359570u: goto label_359570;
        case 0x359574u: goto label_359574;
        case 0x359578u: goto label_359578;
        case 0x35957cu: goto label_35957c;
        case 0x359580u: goto label_359580;
        case 0x359584u: goto label_359584;
        case 0x359588u: goto label_359588;
        case 0x35958cu: goto label_35958c;
        case 0x359590u: goto label_359590;
        case 0x359594u: goto label_359594;
        case 0x359598u: goto label_359598;
        case 0x35959cu: goto label_35959c;
        case 0x3595a0u: goto label_3595a0;
        case 0x3595a4u: goto label_3595a4;
        case 0x3595a8u: goto label_3595a8;
        case 0x3595acu: goto label_3595ac;
        case 0x3595b0u: goto label_3595b0;
        case 0x3595b4u: goto label_3595b4;
        case 0x3595b8u: goto label_3595b8;
        case 0x3595bcu: goto label_3595bc;
        case 0x3595c0u: goto label_3595c0;
        case 0x3595c4u: goto label_3595c4;
        case 0x3595c8u: goto label_3595c8;
        case 0x3595ccu: goto label_3595cc;
        case 0x3595d0u: goto label_3595d0;
        case 0x3595d4u: goto label_3595d4;
        case 0x3595d8u: goto label_3595d8;
        case 0x3595dcu: goto label_3595dc;
        case 0x3595e0u: goto label_3595e0;
        case 0x3595e4u: goto label_3595e4;
        case 0x3595e8u: goto label_3595e8;
        case 0x3595ecu: goto label_3595ec;
        case 0x3595f0u: goto label_3595f0;
        case 0x3595f4u: goto label_3595f4;
        case 0x3595f8u: goto label_3595f8;
        case 0x3595fcu: goto label_3595fc;
        case 0x359600u: goto label_359600;
        case 0x359604u: goto label_359604;
        case 0x359608u: goto label_359608;
        case 0x35960cu: goto label_35960c;
        case 0x359610u: goto label_359610;
        case 0x359614u: goto label_359614;
        case 0x359618u: goto label_359618;
        case 0x35961cu: goto label_35961c;
        case 0x359620u: goto label_359620;
        case 0x359624u: goto label_359624;
        case 0x359628u: goto label_359628;
        case 0x35962cu: goto label_35962c;
        case 0x359630u: goto label_359630;
        case 0x359634u: goto label_359634;
        case 0x359638u: goto label_359638;
        case 0x35963cu: goto label_35963c;
        case 0x359640u: goto label_359640;
        case 0x359644u: goto label_359644;
        case 0x359648u: goto label_359648;
        case 0x35964cu: goto label_35964c;
        case 0x359650u: goto label_359650;
        case 0x359654u: goto label_359654;
        case 0x359658u: goto label_359658;
        case 0x35965cu: goto label_35965c;
        case 0x359660u: goto label_359660;
        case 0x359664u: goto label_359664;
        case 0x359668u: goto label_359668;
        case 0x35966cu: goto label_35966c;
        case 0x359670u: goto label_359670;
        case 0x359674u: goto label_359674;
        case 0x359678u: goto label_359678;
        case 0x35967cu: goto label_35967c;
        case 0x359680u: goto label_359680;
        case 0x359684u: goto label_359684;
        case 0x359688u: goto label_359688;
        case 0x35968cu: goto label_35968c;
        case 0x359690u: goto label_359690;
        case 0x359694u: goto label_359694;
        case 0x359698u: goto label_359698;
        case 0x35969cu: goto label_35969c;
        case 0x3596a0u: goto label_3596a0;
        case 0x3596a4u: goto label_3596a4;
        case 0x3596a8u: goto label_3596a8;
        case 0x3596acu: goto label_3596ac;
        case 0x3596b0u: goto label_3596b0;
        case 0x3596b4u: goto label_3596b4;
        case 0x3596b8u: goto label_3596b8;
        case 0x3596bcu: goto label_3596bc;
        case 0x3596c0u: goto label_3596c0;
        case 0x3596c4u: goto label_3596c4;
        case 0x3596c8u: goto label_3596c8;
        case 0x3596ccu: goto label_3596cc;
        case 0x3596d0u: goto label_3596d0;
        case 0x3596d4u: goto label_3596d4;
        case 0x3596d8u: goto label_3596d8;
        case 0x3596dcu: goto label_3596dc;
        case 0x3596e0u: goto label_3596e0;
        case 0x3596e4u: goto label_3596e4;
        case 0x3596e8u: goto label_3596e8;
        case 0x3596ecu: goto label_3596ec;
        case 0x3596f0u: goto label_3596f0;
        case 0x3596f4u: goto label_3596f4;
        case 0x3596f8u: goto label_3596f8;
        case 0x3596fcu: goto label_3596fc;
        case 0x359700u: goto label_359700;
        case 0x359704u: goto label_359704;
        case 0x359708u: goto label_359708;
        case 0x35970cu: goto label_35970c;
        case 0x359710u: goto label_359710;
        case 0x359714u: goto label_359714;
        case 0x359718u: goto label_359718;
        case 0x35971cu: goto label_35971c;
        case 0x359720u: goto label_359720;
        case 0x359724u: goto label_359724;
        case 0x359728u: goto label_359728;
        case 0x35972cu: goto label_35972c;
        case 0x359730u: goto label_359730;
        case 0x359734u: goto label_359734;
        case 0x359738u: goto label_359738;
        case 0x35973cu: goto label_35973c;
        case 0x359740u: goto label_359740;
        case 0x359744u: goto label_359744;
        case 0x359748u: goto label_359748;
        case 0x35974cu: goto label_35974c;
        case 0x359750u: goto label_359750;
        case 0x359754u: goto label_359754;
        case 0x359758u: goto label_359758;
        case 0x35975cu: goto label_35975c;
        case 0x359760u: goto label_359760;
        case 0x359764u: goto label_359764;
        case 0x359768u: goto label_359768;
        case 0x35976cu: goto label_35976c;
        case 0x359770u: goto label_359770;
        case 0x359774u: goto label_359774;
        case 0x359778u: goto label_359778;
        case 0x35977cu: goto label_35977c;
        case 0x359780u: goto label_359780;
        case 0x359784u: goto label_359784;
        case 0x359788u: goto label_359788;
        case 0x35978cu: goto label_35978c;
        case 0x359790u: goto label_359790;
        case 0x359794u: goto label_359794;
        case 0x359798u: goto label_359798;
        case 0x35979cu: goto label_35979c;
        case 0x3597a0u: goto label_3597a0;
        case 0x3597a4u: goto label_3597a4;
        case 0x3597a8u: goto label_3597a8;
        case 0x3597acu: goto label_3597ac;
        case 0x3597b0u: goto label_3597b0;
        case 0x3597b4u: goto label_3597b4;
        case 0x3597b8u: goto label_3597b8;
        case 0x3597bcu: goto label_3597bc;
        case 0x3597c0u: goto label_3597c0;
        case 0x3597c4u: goto label_3597c4;
        case 0x3597c8u: goto label_3597c8;
        case 0x3597ccu: goto label_3597cc;
        case 0x3597d0u: goto label_3597d0;
        case 0x3597d4u: goto label_3597d4;
        case 0x3597d8u: goto label_3597d8;
        case 0x3597dcu: goto label_3597dc;
        case 0x3597e0u: goto label_3597e0;
        case 0x3597e4u: goto label_3597e4;
        case 0x3597e8u: goto label_3597e8;
        case 0x3597ecu: goto label_3597ec;
        case 0x3597f0u: goto label_3597f0;
        case 0x3597f4u: goto label_3597f4;
        case 0x3597f8u: goto label_3597f8;
        case 0x3597fcu: goto label_3597fc;
        case 0x359800u: goto label_359800;
        case 0x359804u: goto label_359804;
        case 0x359808u: goto label_359808;
        case 0x35980cu: goto label_35980c;
        case 0x359810u: goto label_359810;
        case 0x359814u: goto label_359814;
        case 0x359818u: goto label_359818;
        case 0x35981cu: goto label_35981c;
        case 0x359820u: goto label_359820;
        case 0x359824u: goto label_359824;
        case 0x359828u: goto label_359828;
        case 0x35982cu: goto label_35982c;
        case 0x359830u: goto label_359830;
        case 0x359834u: goto label_359834;
        case 0x359838u: goto label_359838;
        case 0x35983cu: goto label_35983c;
        case 0x359840u: goto label_359840;
        case 0x359844u: goto label_359844;
        case 0x359848u: goto label_359848;
        case 0x35984cu: goto label_35984c;
        case 0x359850u: goto label_359850;
        case 0x359854u: goto label_359854;
        case 0x359858u: goto label_359858;
        case 0x35985cu: goto label_35985c;
        case 0x359860u: goto label_359860;
        case 0x359864u: goto label_359864;
        case 0x359868u: goto label_359868;
        case 0x35986cu: goto label_35986c;
        case 0x359870u: goto label_359870;
        case 0x359874u: goto label_359874;
        case 0x359878u: goto label_359878;
        case 0x35987cu: goto label_35987c;
        case 0x359880u: goto label_359880;
        case 0x359884u: goto label_359884;
        case 0x359888u: goto label_359888;
        case 0x35988cu: goto label_35988c;
        case 0x359890u: goto label_359890;
        case 0x359894u: goto label_359894;
        case 0x359898u: goto label_359898;
        case 0x35989cu: goto label_35989c;
        case 0x3598a0u: goto label_3598a0;
        case 0x3598a4u: goto label_3598a4;
        case 0x3598a8u: goto label_3598a8;
        case 0x3598acu: goto label_3598ac;
        case 0x3598b0u: goto label_3598b0;
        case 0x3598b4u: goto label_3598b4;
        case 0x3598b8u: goto label_3598b8;
        case 0x3598bcu: goto label_3598bc;
        case 0x3598c0u: goto label_3598c0;
        case 0x3598c4u: goto label_3598c4;
        case 0x3598c8u: goto label_3598c8;
        case 0x3598ccu: goto label_3598cc;
        case 0x3598d0u: goto label_3598d0;
        case 0x3598d4u: goto label_3598d4;
        case 0x3598d8u: goto label_3598d8;
        case 0x3598dcu: goto label_3598dc;
        case 0x3598e0u: goto label_3598e0;
        case 0x3598e4u: goto label_3598e4;
        case 0x3598e8u: goto label_3598e8;
        case 0x3598ecu: goto label_3598ec;
        case 0x3598f0u: goto label_3598f0;
        case 0x3598f4u: goto label_3598f4;
        case 0x3598f8u: goto label_3598f8;
        case 0x3598fcu: goto label_3598fc;
        case 0x359900u: goto label_359900;
        case 0x359904u: goto label_359904;
        case 0x359908u: goto label_359908;
        case 0x35990cu: goto label_35990c;
        case 0x359910u: goto label_359910;
        case 0x359914u: goto label_359914;
        case 0x359918u: goto label_359918;
        case 0x35991cu: goto label_35991c;
        case 0x359920u: goto label_359920;
        case 0x359924u: goto label_359924;
        case 0x359928u: goto label_359928;
        case 0x35992cu: goto label_35992c;
        case 0x359930u: goto label_359930;
        case 0x359934u: goto label_359934;
        case 0x359938u: goto label_359938;
        case 0x35993cu: goto label_35993c;
        case 0x359940u: goto label_359940;
        case 0x359944u: goto label_359944;
        case 0x359948u: goto label_359948;
        case 0x35994cu: goto label_35994c;
        case 0x359950u: goto label_359950;
        case 0x359954u: goto label_359954;
        case 0x359958u: goto label_359958;
        case 0x35995cu: goto label_35995c;
        case 0x359960u: goto label_359960;
        case 0x359964u: goto label_359964;
        case 0x359968u: goto label_359968;
        case 0x35996cu: goto label_35996c;
        case 0x359970u: goto label_359970;
        case 0x359974u: goto label_359974;
        case 0x359978u: goto label_359978;
        case 0x35997cu: goto label_35997c;
        case 0x359980u: goto label_359980;
        case 0x359984u: goto label_359984;
        case 0x359988u: goto label_359988;
        case 0x35998cu: goto label_35998c;
        case 0x359990u: goto label_359990;
        case 0x359994u: goto label_359994;
        case 0x359998u: goto label_359998;
        case 0x35999cu: goto label_35999c;
        case 0x3599a0u: goto label_3599a0;
        case 0x3599a4u: goto label_3599a4;
        case 0x3599a8u: goto label_3599a8;
        case 0x3599acu: goto label_3599ac;
        case 0x3599b0u: goto label_3599b0;
        case 0x3599b4u: goto label_3599b4;
        case 0x3599b8u: goto label_3599b8;
        case 0x3599bcu: goto label_3599bc;
        case 0x3599c0u: goto label_3599c0;
        case 0x3599c4u: goto label_3599c4;
        case 0x3599c8u: goto label_3599c8;
        case 0x3599ccu: goto label_3599cc;
        case 0x3599d0u: goto label_3599d0;
        case 0x3599d4u: goto label_3599d4;
        case 0x3599d8u: goto label_3599d8;
        case 0x3599dcu: goto label_3599dc;
        case 0x3599e0u: goto label_3599e0;
        case 0x3599e4u: goto label_3599e4;
        case 0x3599e8u: goto label_3599e8;
        case 0x3599ecu: goto label_3599ec;
        case 0x3599f0u: goto label_3599f0;
        case 0x3599f4u: goto label_3599f4;
        case 0x3599f8u: goto label_3599f8;
        case 0x3599fcu: goto label_3599fc;
        case 0x359a00u: goto label_359a00;
        case 0x359a04u: goto label_359a04;
        case 0x359a08u: goto label_359a08;
        case 0x359a0cu: goto label_359a0c;
        case 0x359a10u: goto label_359a10;
        case 0x359a14u: goto label_359a14;
        case 0x359a18u: goto label_359a18;
        case 0x359a1cu: goto label_359a1c;
        case 0x359a20u: goto label_359a20;
        case 0x359a24u: goto label_359a24;
        case 0x359a28u: goto label_359a28;
        case 0x359a2cu: goto label_359a2c;
        case 0x359a30u: goto label_359a30;
        case 0x359a34u: goto label_359a34;
        case 0x359a38u: goto label_359a38;
        case 0x359a3cu: goto label_359a3c;
        case 0x359a40u: goto label_359a40;
        case 0x359a44u: goto label_359a44;
        case 0x359a48u: goto label_359a48;
        case 0x359a4cu: goto label_359a4c;
        case 0x359a50u: goto label_359a50;
        case 0x359a54u: goto label_359a54;
        case 0x359a58u: goto label_359a58;
        case 0x359a5cu: goto label_359a5c;
        case 0x359a60u: goto label_359a60;
        case 0x359a64u: goto label_359a64;
        case 0x359a68u: goto label_359a68;
        case 0x359a6cu: goto label_359a6c;
        case 0x359a70u: goto label_359a70;
        case 0x359a74u: goto label_359a74;
        case 0x359a78u: goto label_359a78;
        case 0x359a7cu: goto label_359a7c;
        case 0x359a80u: goto label_359a80;
        case 0x359a84u: goto label_359a84;
        case 0x359a88u: goto label_359a88;
        case 0x359a8cu: goto label_359a8c;
        case 0x359a90u: goto label_359a90;
        case 0x359a94u: goto label_359a94;
        case 0x359a98u: goto label_359a98;
        case 0x359a9cu: goto label_359a9c;
        case 0x359aa0u: goto label_359aa0;
        case 0x359aa4u: goto label_359aa4;
        case 0x359aa8u: goto label_359aa8;
        case 0x359aacu: goto label_359aac;
        case 0x359ab0u: goto label_359ab0;
        case 0x359ab4u: goto label_359ab4;
        case 0x359ab8u: goto label_359ab8;
        case 0x359abcu: goto label_359abc;
        case 0x359ac0u: goto label_359ac0;
        case 0x359ac4u: goto label_359ac4;
        case 0x359ac8u: goto label_359ac8;
        case 0x359accu: goto label_359acc;
        case 0x359ad0u: goto label_359ad0;
        case 0x359ad4u: goto label_359ad4;
        case 0x359ad8u: goto label_359ad8;
        case 0x359adcu: goto label_359adc;
        case 0x359ae0u: goto label_359ae0;
        case 0x359ae4u: goto label_359ae4;
        case 0x359ae8u: goto label_359ae8;
        case 0x359aecu: goto label_359aec;
        case 0x359af0u: goto label_359af0;
        case 0x359af4u: goto label_359af4;
        case 0x359af8u: goto label_359af8;
        case 0x359afcu: goto label_359afc;
        case 0x359b00u: goto label_359b00;
        case 0x359b04u: goto label_359b04;
        case 0x359b08u: goto label_359b08;
        case 0x359b0cu: goto label_359b0c;
        case 0x359b10u: goto label_359b10;
        case 0x359b14u: goto label_359b14;
        case 0x359b18u: goto label_359b18;
        case 0x359b1cu: goto label_359b1c;
        case 0x359b20u: goto label_359b20;
        case 0x359b24u: goto label_359b24;
        case 0x359b28u: goto label_359b28;
        case 0x359b2cu: goto label_359b2c;
        case 0x359b30u: goto label_359b30;
        case 0x359b34u: goto label_359b34;
        case 0x359b38u: goto label_359b38;
        case 0x359b3cu: goto label_359b3c;
        case 0x359b40u: goto label_359b40;
        case 0x359b44u: goto label_359b44;
        case 0x359b48u: goto label_359b48;
        case 0x359b4cu: goto label_359b4c;
        case 0x359b50u: goto label_359b50;
        case 0x359b54u: goto label_359b54;
        case 0x359b58u: goto label_359b58;
        case 0x359b5cu: goto label_359b5c;
        case 0x359b60u: goto label_359b60;
        case 0x359b64u: goto label_359b64;
        case 0x359b68u: goto label_359b68;
        case 0x359b6cu: goto label_359b6c;
        case 0x359b70u: goto label_359b70;
        case 0x359b74u: goto label_359b74;
        case 0x359b78u: goto label_359b78;
        case 0x359b7cu: goto label_359b7c;
        case 0x359b80u: goto label_359b80;
        case 0x359b84u: goto label_359b84;
        case 0x359b88u: goto label_359b88;
        case 0x359b8cu: goto label_359b8c;
        case 0x359b90u: goto label_359b90;
        case 0x359b94u: goto label_359b94;
        case 0x359b98u: goto label_359b98;
        case 0x359b9cu: goto label_359b9c;
        case 0x359ba0u: goto label_359ba0;
        case 0x359ba4u: goto label_359ba4;
        case 0x359ba8u: goto label_359ba8;
        case 0x359bacu: goto label_359bac;
        case 0x359bb0u: goto label_359bb0;
        case 0x359bb4u: goto label_359bb4;
        case 0x359bb8u: goto label_359bb8;
        case 0x359bbcu: goto label_359bbc;
        case 0x359bc0u: goto label_359bc0;
        case 0x359bc4u: goto label_359bc4;
        case 0x359bc8u: goto label_359bc8;
        case 0x359bccu: goto label_359bcc;
        case 0x359bd0u: goto label_359bd0;
        case 0x359bd4u: goto label_359bd4;
        case 0x359bd8u: goto label_359bd8;
        case 0x359bdcu: goto label_359bdc;
        case 0x359be0u: goto label_359be0;
        case 0x359be4u: goto label_359be4;
        case 0x359be8u: goto label_359be8;
        case 0x359becu: goto label_359bec;
        case 0x359bf0u: goto label_359bf0;
        case 0x359bf4u: goto label_359bf4;
        case 0x359bf8u: goto label_359bf8;
        case 0x359bfcu: goto label_359bfc;
        case 0x359c00u: goto label_359c00;
        case 0x359c04u: goto label_359c04;
        case 0x359c08u: goto label_359c08;
        case 0x359c0cu: goto label_359c0c;
        case 0x359c10u: goto label_359c10;
        case 0x359c14u: goto label_359c14;
        case 0x359c18u: goto label_359c18;
        case 0x359c1cu: goto label_359c1c;
        case 0x359c20u: goto label_359c20;
        case 0x359c24u: goto label_359c24;
        case 0x359c28u: goto label_359c28;
        case 0x359c2cu: goto label_359c2c;
        case 0x359c30u: goto label_359c30;
        case 0x359c34u: goto label_359c34;
        case 0x359c38u: goto label_359c38;
        case 0x359c3cu: goto label_359c3c;
        case 0x359c40u: goto label_359c40;
        case 0x359c44u: goto label_359c44;
        case 0x359c48u: goto label_359c48;
        case 0x359c4cu: goto label_359c4c;
        case 0x359c50u: goto label_359c50;
        case 0x359c54u: goto label_359c54;
        case 0x359c58u: goto label_359c58;
        case 0x359c5cu: goto label_359c5c;
        case 0x359c60u: goto label_359c60;
        case 0x359c64u: goto label_359c64;
        case 0x359c68u: goto label_359c68;
        case 0x359c6cu: goto label_359c6c;
        case 0x359c70u: goto label_359c70;
        case 0x359c74u: goto label_359c74;
        case 0x359c78u: goto label_359c78;
        case 0x359c7cu: goto label_359c7c;
        case 0x359c80u: goto label_359c80;
        case 0x359c84u: goto label_359c84;
        case 0x359c88u: goto label_359c88;
        case 0x359c8cu: goto label_359c8c;
        case 0x359c90u: goto label_359c90;
        case 0x359c94u: goto label_359c94;
        case 0x359c98u: goto label_359c98;
        case 0x359c9cu: goto label_359c9c;
        case 0x359ca0u: goto label_359ca0;
        case 0x359ca4u: goto label_359ca4;
        case 0x359ca8u: goto label_359ca8;
        case 0x359cacu: goto label_359cac;
        case 0x359cb0u: goto label_359cb0;
        case 0x359cb4u: goto label_359cb4;
        case 0x359cb8u: goto label_359cb8;
        case 0x359cbcu: goto label_359cbc;
        case 0x359cc0u: goto label_359cc0;
        case 0x359cc4u: goto label_359cc4;
        case 0x359cc8u: goto label_359cc8;
        case 0x359cccu: goto label_359ccc;
        case 0x359cd0u: goto label_359cd0;
        case 0x359cd4u: goto label_359cd4;
        case 0x359cd8u: goto label_359cd8;
        case 0x359cdcu: goto label_359cdc;
        case 0x359ce0u: goto label_359ce0;
        case 0x359ce4u: goto label_359ce4;
        case 0x359ce8u: goto label_359ce8;
        case 0x359cecu: goto label_359cec;
        case 0x359cf0u: goto label_359cf0;
        case 0x359cf4u: goto label_359cf4;
        case 0x359cf8u: goto label_359cf8;
        case 0x359cfcu: goto label_359cfc;
        case 0x359d00u: goto label_359d00;
        case 0x359d04u: goto label_359d04;
        case 0x359d08u: goto label_359d08;
        case 0x359d0cu: goto label_359d0c;
        case 0x359d10u: goto label_359d10;
        case 0x359d14u: goto label_359d14;
        case 0x359d18u: goto label_359d18;
        case 0x359d1cu: goto label_359d1c;
        case 0x359d20u: goto label_359d20;
        case 0x359d24u: goto label_359d24;
        case 0x359d28u: goto label_359d28;
        case 0x359d2cu: goto label_359d2c;
        case 0x359d30u: goto label_359d30;
        case 0x359d34u: goto label_359d34;
        case 0x359d38u: goto label_359d38;
        case 0x359d3cu: goto label_359d3c;
        case 0x359d40u: goto label_359d40;
        case 0x359d44u: goto label_359d44;
        case 0x359d48u: goto label_359d48;
        case 0x359d4cu: goto label_359d4c;
        case 0x359d50u: goto label_359d50;
        case 0x359d54u: goto label_359d54;
        case 0x359d58u: goto label_359d58;
        case 0x359d5cu: goto label_359d5c;
        case 0x359d60u: goto label_359d60;
        case 0x359d64u: goto label_359d64;
        case 0x359d68u: goto label_359d68;
        case 0x359d6cu: goto label_359d6c;
        case 0x359d70u: goto label_359d70;
        case 0x359d74u: goto label_359d74;
        case 0x359d78u: goto label_359d78;
        case 0x359d7cu: goto label_359d7c;
        case 0x359d80u: goto label_359d80;
        case 0x359d84u: goto label_359d84;
        case 0x359d88u: goto label_359d88;
        case 0x359d8cu: goto label_359d8c;
        case 0x359d90u: goto label_359d90;
        case 0x359d94u: goto label_359d94;
        case 0x359d98u: goto label_359d98;
        case 0x359d9cu: goto label_359d9c;
        case 0x359da0u: goto label_359da0;
        case 0x359da4u: goto label_359da4;
        case 0x359da8u: goto label_359da8;
        case 0x359dacu: goto label_359dac;
        case 0x359db0u: goto label_359db0;
        case 0x359db4u: goto label_359db4;
        case 0x359db8u: goto label_359db8;
        case 0x359dbcu: goto label_359dbc;
        case 0x359dc0u: goto label_359dc0;
        case 0x359dc4u: goto label_359dc4;
        case 0x359dc8u: goto label_359dc8;
        case 0x359dccu: goto label_359dcc;
        case 0x359dd0u: goto label_359dd0;
        case 0x359dd4u: goto label_359dd4;
        case 0x359dd8u: goto label_359dd8;
        case 0x359ddcu: goto label_359ddc;
        case 0x359de0u: goto label_359de0;
        case 0x359de4u: goto label_359de4;
        case 0x359de8u: goto label_359de8;
        case 0x359decu: goto label_359dec;
        case 0x359df0u: goto label_359df0;
        case 0x359df4u: goto label_359df4;
        case 0x359df8u: goto label_359df8;
        case 0x359dfcu: goto label_359dfc;
        case 0x359e00u: goto label_359e00;
        case 0x359e04u: goto label_359e04;
        case 0x359e08u: goto label_359e08;
        case 0x359e0cu: goto label_359e0c;
        case 0x359e10u: goto label_359e10;
        case 0x359e14u: goto label_359e14;
        case 0x359e18u: goto label_359e18;
        case 0x359e1cu: goto label_359e1c;
        case 0x359e20u: goto label_359e20;
        case 0x359e24u: goto label_359e24;
        case 0x359e28u: goto label_359e28;
        case 0x359e2cu: goto label_359e2c;
        case 0x359e30u: goto label_359e30;
        case 0x359e34u: goto label_359e34;
        case 0x359e38u: goto label_359e38;
        case 0x359e3cu: goto label_359e3c;
        case 0x359e40u: goto label_359e40;
        case 0x359e44u: goto label_359e44;
        case 0x359e48u: goto label_359e48;
        case 0x359e4cu: goto label_359e4c;
        case 0x359e50u: goto label_359e50;
        case 0x359e54u: goto label_359e54;
        case 0x359e58u: goto label_359e58;
        case 0x359e5cu: goto label_359e5c;
        case 0x359e60u: goto label_359e60;
        case 0x359e64u: goto label_359e64;
        case 0x359e68u: goto label_359e68;
        case 0x359e6cu: goto label_359e6c;
        case 0x359e70u: goto label_359e70;
        case 0x359e74u: goto label_359e74;
        case 0x359e78u: goto label_359e78;
        case 0x359e7cu: goto label_359e7c;
        case 0x359e80u: goto label_359e80;
        case 0x359e84u: goto label_359e84;
        case 0x359e88u: goto label_359e88;
        case 0x359e8cu: goto label_359e8c;
        case 0x359e90u: goto label_359e90;
        case 0x359e94u: goto label_359e94;
        case 0x359e98u: goto label_359e98;
        case 0x359e9cu: goto label_359e9c;
        case 0x359ea0u: goto label_359ea0;
        case 0x359ea4u: goto label_359ea4;
        case 0x359ea8u: goto label_359ea8;
        case 0x359eacu: goto label_359eac;
        case 0x359eb0u: goto label_359eb0;
        case 0x359eb4u: goto label_359eb4;
        case 0x359eb8u: goto label_359eb8;
        case 0x359ebcu: goto label_359ebc;
        case 0x359ec0u: goto label_359ec0;
        case 0x359ec4u: goto label_359ec4;
        case 0x359ec8u: goto label_359ec8;
        case 0x359eccu: goto label_359ecc;
        case 0x359ed0u: goto label_359ed0;
        case 0x359ed4u: goto label_359ed4;
        case 0x359ed8u: goto label_359ed8;
        case 0x359edcu: goto label_359edc;
        case 0x359ee0u: goto label_359ee0;
        case 0x359ee4u: goto label_359ee4;
        case 0x359ee8u: goto label_359ee8;
        case 0x359eecu: goto label_359eec;
        case 0x359ef0u: goto label_359ef0;
        case 0x359ef4u: goto label_359ef4;
        case 0x359ef8u: goto label_359ef8;
        case 0x359efcu: goto label_359efc;
        case 0x359f00u: goto label_359f00;
        case 0x359f04u: goto label_359f04;
        case 0x359f08u: goto label_359f08;
        case 0x359f0cu: goto label_359f0c;
        case 0x359f10u: goto label_359f10;
        case 0x359f14u: goto label_359f14;
        case 0x359f18u: goto label_359f18;
        case 0x359f1cu: goto label_359f1c;
        case 0x359f20u: goto label_359f20;
        case 0x359f24u: goto label_359f24;
        case 0x359f28u: goto label_359f28;
        case 0x359f2cu: goto label_359f2c;
        case 0x359f30u: goto label_359f30;
        case 0x359f34u: goto label_359f34;
        case 0x359f38u: goto label_359f38;
        case 0x359f3cu: goto label_359f3c;
        case 0x359f40u: goto label_359f40;
        case 0x359f44u: goto label_359f44;
        case 0x359f48u: goto label_359f48;
        case 0x359f4cu: goto label_359f4c;
        case 0x359f50u: goto label_359f50;
        case 0x359f54u: goto label_359f54;
        case 0x359f58u: goto label_359f58;
        case 0x359f5cu: goto label_359f5c;
        case 0x359f60u: goto label_359f60;
        case 0x359f64u: goto label_359f64;
        case 0x359f68u: goto label_359f68;
        case 0x359f6cu: goto label_359f6c;
        case 0x359f70u: goto label_359f70;
        case 0x359f74u: goto label_359f74;
        case 0x359f78u: goto label_359f78;
        case 0x359f7cu: goto label_359f7c;
        case 0x359f80u: goto label_359f80;
        case 0x359f84u: goto label_359f84;
        case 0x359f88u: goto label_359f88;
        case 0x359f8cu: goto label_359f8c;
        case 0x359f90u: goto label_359f90;
        case 0x359f94u: goto label_359f94;
        case 0x359f98u: goto label_359f98;
        case 0x359f9cu: goto label_359f9c;
        case 0x359fa0u: goto label_359fa0;
        case 0x359fa4u: goto label_359fa4;
        case 0x359fa8u: goto label_359fa8;
        case 0x359facu: goto label_359fac;
        case 0x359fb0u: goto label_359fb0;
        case 0x359fb4u: goto label_359fb4;
        case 0x359fb8u: goto label_359fb8;
        case 0x359fbcu: goto label_359fbc;
        case 0x359fc0u: goto label_359fc0;
        case 0x359fc4u: goto label_359fc4;
        case 0x359fc8u: goto label_359fc8;
        case 0x359fccu: goto label_359fcc;
        case 0x359fd0u: goto label_359fd0;
        case 0x359fd4u: goto label_359fd4;
        case 0x359fd8u: goto label_359fd8;
        case 0x359fdcu: goto label_359fdc;
        case 0x359fe0u: goto label_359fe0;
        case 0x359fe4u: goto label_359fe4;
        case 0x359fe8u: goto label_359fe8;
        case 0x359fecu: goto label_359fec;
        case 0x359ff0u: goto label_359ff0;
        case 0x359ff4u: goto label_359ff4;
        case 0x359ff8u: goto label_359ff8;
        case 0x359ffcu: goto label_359ffc;
        case 0x35a000u: goto label_35a000;
        case 0x35a004u: goto label_35a004;
        case 0x35a008u: goto label_35a008;
        case 0x35a00cu: goto label_35a00c;
        case 0x35a010u: goto label_35a010;
        case 0x35a014u: goto label_35a014;
        case 0x35a018u: goto label_35a018;
        case 0x35a01cu: goto label_35a01c;
        case 0x35a020u: goto label_35a020;
        case 0x35a024u: goto label_35a024;
        case 0x35a028u: goto label_35a028;
        case 0x35a02cu: goto label_35a02c;
        case 0x35a030u: goto label_35a030;
        case 0x35a034u: goto label_35a034;
        case 0x35a038u: goto label_35a038;
        case 0x35a03cu: goto label_35a03c;
        case 0x35a040u: goto label_35a040;
        case 0x35a044u: goto label_35a044;
        case 0x35a048u: goto label_35a048;
        case 0x35a04cu: goto label_35a04c;
        case 0x35a050u: goto label_35a050;
        case 0x35a054u: goto label_35a054;
        case 0x35a058u: goto label_35a058;
        case 0x35a05cu: goto label_35a05c;
        case 0x35a060u: goto label_35a060;
        case 0x35a064u: goto label_35a064;
        case 0x35a068u: goto label_35a068;
        case 0x35a06cu: goto label_35a06c;
        case 0x35a070u: goto label_35a070;
        case 0x35a074u: goto label_35a074;
        case 0x35a078u: goto label_35a078;
        case 0x35a07cu: goto label_35a07c;
        case 0x35a080u: goto label_35a080;
        case 0x35a084u: goto label_35a084;
        case 0x35a088u: goto label_35a088;
        case 0x35a08cu: goto label_35a08c;
        case 0x35a090u: goto label_35a090;
        case 0x35a094u: goto label_35a094;
        case 0x35a098u: goto label_35a098;
        case 0x35a09cu: goto label_35a09c;
        case 0x35a0a0u: goto label_35a0a0;
        case 0x35a0a4u: goto label_35a0a4;
        case 0x35a0a8u: goto label_35a0a8;
        case 0x35a0acu: goto label_35a0ac;
        case 0x35a0b0u: goto label_35a0b0;
        case 0x35a0b4u: goto label_35a0b4;
        case 0x35a0b8u: goto label_35a0b8;
        case 0x35a0bcu: goto label_35a0bc;
        case 0x35a0c0u: goto label_35a0c0;
        case 0x35a0c4u: goto label_35a0c4;
        case 0x35a0c8u: goto label_35a0c8;
        case 0x35a0ccu: goto label_35a0cc;
        case 0x35a0d0u: goto label_35a0d0;
        case 0x35a0d4u: goto label_35a0d4;
        case 0x35a0d8u: goto label_35a0d8;
        case 0x35a0dcu: goto label_35a0dc;
        case 0x35a0e0u: goto label_35a0e0;
        case 0x35a0e4u: goto label_35a0e4;
        case 0x35a0e8u: goto label_35a0e8;
        case 0x35a0ecu: goto label_35a0ec;
        case 0x35a0f0u: goto label_35a0f0;
        case 0x35a0f4u: goto label_35a0f4;
        case 0x35a0f8u: goto label_35a0f8;
        case 0x35a0fcu: goto label_35a0fc;
        case 0x35a100u: goto label_35a100;
        case 0x35a104u: goto label_35a104;
        case 0x35a108u: goto label_35a108;
        case 0x35a10cu: goto label_35a10c;
        case 0x35a110u: goto label_35a110;
        case 0x35a114u: goto label_35a114;
        case 0x35a118u: goto label_35a118;
        case 0x35a11cu: goto label_35a11c;
        case 0x35a120u: goto label_35a120;
        case 0x35a124u: goto label_35a124;
        case 0x35a128u: goto label_35a128;
        case 0x35a12cu: goto label_35a12c;
        case 0x35a130u: goto label_35a130;
        case 0x35a134u: goto label_35a134;
        case 0x35a138u: goto label_35a138;
        case 0x35a13cu: goto label_35a13c;
        case 0x35a140u: goto label_35a140;
        case 0x35a144u: goto label_35a144;
        case 0x35a148u: goto label_35a148;
        case 0x35a14cu: goto label_35a14c;
        case 0x35a150u: goto label_35a150;
        case 0x35a154u: goto label_35a154;
        case 0x35a158u: goto label_35a158;
        case 0x35a15cu: goto label_35a15c;
        case 0x35a160u: goto label_35a160;
        case 0x35a164u: goto label_35a164;
        case 0x35a168u: goto label_35a168;
        case 0x35a16cu: goto label_35a16c;
        case 0x35a170u: goto label_35a170;
        case 0x35a174u: goto label_35a174;
        case 0x35a178u: goto label_35a178;
        case 0x35a17cu: goto label_35a17c;
        case 0x35a180u: goto label_35a180;
        case 0x35a184u: goto label_35a184;
        case 0x35a188u: goto label_35a188;
        case 0x35a18cu: goto label_35a18c;
        case 0x35a190u: goto label_35a190;
        case 0x35a194u: goto label_35a194;
        case 0x35a198u: goto label_35a198;
        case 0x35a19cu: goto label_35a19c;
        case 0x35a1a0u: goto label_35a1a0;
        case 0x35a1a4u: goto label_35a1a4;
        case 0x35a1a8u: goto label_35a1a8;
        case 0x35a1acu: goto label_35a1ac;
        case 0x35a1b0u: goto label_35a1b0;
        case 0x35a1b4u: goto label_35a1b4;
        case 0x35a1b8u: goto label_35a1b8;
        case 0x35a1bcu: goto label_35a1bc;
        case 0x35a1c0u: goto label_35a1c0;
        case 0x35a1c4u: goto label_35a1c4;
        case 0x35a1c8u: goto label_35a1c8;
        case 0x35a1ccu: goto label_35a1cc;
        case 0x35a1d0u: goto label_35a1d0;
        case 0x35a1d4u: goto label_35a1d4;
        case 0x35a1d8u: goto label_35a1d8;
        case 0x35a1dcu: goto label_35a1dc;
        case 0x35a1e0u: goto label_35a1e0;
        case 0x35a1e4u: goto label_35a1e4;
        case 0x35a1e8u: goto label_35a1e8;
        case 0x35a1ecu: goto label_35a1ec;
        case 0x35a1f0u: goto label_35a1f0;
        case 0x35a1f4u: goto label_35a1f4;
        case 0x35a1f8u: goto label_35a1f8;
        case 0x35a1fcu: goto label_35a1fc;
        case 0x35a200u: goto label_35a200;
        case 0x35a204u: goto label_35a204;
        case 0x35a208u: goto label_35a208;
        case 0x35a20cu: goto label_35a20c;
        case 0x35a210u: goto label_35a210;
        case 0x35a214u: goto label_35a214;
        case 0x35a218u: goto label_35a218;
        case 0x35a21cu: goto label_35a21c;
        case 0x35a220u: goto label_35a220;
        case 0x35a224u: goto label_35a224;
        case 0x35a228u: goto label_35a228;
        case 0x35a22cu: goto label_35a22c;
        case 0x35a230u: goto label_35a230;
        case 0x35a234u: goto label_35a234;
        case 0x35a238u: goto label_35a238;
        case 0x35a23cu: goto label_35a23c;
        case 0x35a240u: goto label_35a240;
        case 0x35a244u: goto label_35a244;
        case 0x35a248u: goto label_35a248;
        case 0x35a24cu: goto label_35a24c;
        case 0x35a250u: goto label_35a250;
        case 0x35a254u: goto label_35a254;
        case 0x35a258u: goto label_35a258;
        case 0x35a25cu: goto label_35a25c;
        case 0x35a260u: goto label_35a260;
        case 0x35a264u: goto label_35a264;
        case 0x35a268u: goto label_35a268;
        case 0x35a26cu: goto label_35a26c;
        case 0x35a270u: goto label_35a270;
        case 0x35a274u: goto label_35a274;
        case 0x35a278u: goto label_35a278;
        case 0x35a27cu: goto label_35a27c;
        case 0x35a280u: goto label_35a280;
        case 0x35a284u: goto label_35a284;
        case 0x35a288u: goto label_35a288;
        case 0x35a28cu: goto label_35a28c;
        case 0x35a290u: goto label_35a290;
        case 0x35a294u: goto label_35a294;
        case 0x35a298u: goto label_35a298;
        case 0x35a29cu: goto label_35a29c;
        case 0x35a2a0u: goto label_35a2a0;
        case 0x35a2a4u: goto label_35a2a4;
        case 0x35a2a8u: goto label_35a2a8;
        case 0x35a2acu: goto label_35a2ac;
        case 0x35a2b0u: goto label_35a2b0;
        case 0x35a2b4u: goto label_35a2b4;
        case 0x35a2b8u: goto label_35a2b8;
        case 0x35a2bcu: goto label_35a2bc;
        case 0x35a2c0u: goto label_35a2c0;
        case 0x35a2c4u: goto label_35a2c4;
        case 0x35a2c8u: goto label_35a2c8;
        case 0x35a2ccu: goto label_35a2cc;
        case 0x35a2d0u: goto label_35a2d0;
        case 0x35a2d4u: goto label_35a2d4;
        case 0x35a2d8u: goto label_35a2d8;
        case 0x35a2dcu: goto label_35a2dc;
        case 0x35a2e0u: goto label_35a2e0;
        case 0x35a2e4u: goto label_35a2e4;
        case 0x35a2e8u: goto label_35a2e8;
        case 0x35a2ecu: goto label_35a2ec;
        case 0x35a2f0u: goto label_35a2f0;
        case 0x35a2f4u: goto label_35a2f4;
        case 0x35a2f8u: goto label_35a2f8;
        case 0x35a2fcu: goto label_35a2fc;
        case 0x35a300u: goto label_35a300;
        case 0x35a304u: goto label_35a304;
        case 0x35a308u: goto label_35a308;
        case 0x35a30cu: goto label_35a30c;
        case 0x35a310u: goto label_35a310;
        case 0x35a314u: goto label_35a314;
        case 0x35a318u: goto label_35a318;
        case 0x35a31cu: goto label_35a31c;
        case 0x35a320u: goto label_35a320;
        case 0x35a324u: goto label_35a324;
        case 0x35a328u: goto label_35a328;
        case 0x35a32cu: goto label_35a32c;
        case 0x35a330u: goto label_35a330;
        case 0x35a334u: goto label_35a334;
        case 0x35a338u: goto label_35a338;
        case 0x35a33cu: goto label_35a33c;
        case 0x35a340u: goto label_35a340;
        case 0x35a344u: goto label_35a344;
        case 0x35a348u: goto label_35a348;
        case 0x35a34cu: goto label_35a34c;
        case 0x35a350u: goto label_35a350;
        case 0x35a354u: goto label_35a354;
        case 0x35a358u: goto label_35a358;
        case 0x35a35cu: goto label_35a35c;
        case 0x35a360u: goto label_35a360;
        case 0x35a364u: goto label_35a364;
        case 0x35a368u: goto label_35a368;
        case 0x35a36cu: goto label_35a36c;
        case 0x35a370u: goto label_35a370;
        case 0x35a374u: goto label_35a374;
        case 0x35a378u: goto label_35a378;
        case 0x35a37cu: goto label_35a37c;
        case 0x35a380u: goto label_35a380;
        case 0x35a384u: goto label_35a384;
        case 0x35a388u: goto label_35a388;
        case 0x35a38cu: goto label_35a38c;
        case 0x35a390u: goto label_35a390;
        case 0x35a394u: goto label_35a394;
        case 0x35a398u: goto label_35a398;
        case 0x35a39cu: goto label_35a39c;
        case 0x35a3a0u: goto label_35a3a0;
        case 0x35a3a4u: goto label_35a3a4;
        case 0x35a3a8u: goto label_35a3a8;
        case 0x35a3acu: goto label_35a3ac;
        case 0x35a3b0u: goto label_35a3b0;
        case 0x35a3b4u: goto label_35a3b4;
        case 0x35a3b8u: goto label_35a3b8;
        case 0x35a3bcu: goto label_35a3bc;
        case 0x35a3c0u: goto label_35a3c0;
        case 0x35a3c4u: goto label_35a3c4;
        case 0x35a3c8u: goto label_35a3c8;
        case 0x35a3ccu: goto label_35a3cc;
        case 0x35a3d0u: goto label_35a3d0;
        case 0x35a3d4u: goto label_35a3d4;
        case 0x35a3d8u: goto label_35a3d8;
        case 0x35a3dcu: goto label_35a3dc;
        case 0x35a3e0u: goto label_35a3e0;
        case 0x35a3e4u: goto label_35a3e4;
        case 0x35a3e8u: goto label_35a3e8;
        case 0x35a3ecu: goto label_35a3ec;
        case 0x35a3f0u: goto label_35a3f0;
        case 0x35a3f4u: goto label_35a3f4;
        case 0x35a3f8u: goto label_35a3f8;
        case 0x35a3fcu: goto label_35a3fc;
        case 0x35a400u: goto label_35a400;
        case 0x35a404u: goto label_35a404;
        case 0x35a408u: goto label_35a408;
        case 0x35a40cu: goto label_35a40c;
        case 0x35a410u: goto label_35a410;
        case 0x35a414u: goto label_35a414;
        case 0x35a418u: goto label_35a418;
        case 0x35a41cu: goto label_35a41c;
        case 0x35a420u: goto label_35a420;
        case 0x35a424u: goto label_35a424;
        case 0x35a428u: goto label_35a428;
        case 0x35a42cu: goto label_35a42c;
        case 0x35a430u: goto label_35a430;
        case 0x35a434u: goto label_35a434;
        case 0x35a438u: goto label_35a438;
        case 0x35a43cu: goto label_35a43c;
        case 0x35a440u: goto label_35a440;
        case 0x35a444u: goto label_35a444;
        case 0x35a448u: goto label_35a448;
        case 0x35a44cu: goto label_35a44c;
        case 0x35a450u: goto label_35a450;
        case 0x35a454u: goto label_35a454;
        case 0x35a458u: goto label_35a458;
        case 0x35a45cu: goto label_35a45c;
        case 0x35a460u: goto label_35a460;
        case 0x35a464u: goto label_35a464;
        case 0x35a468u: goto label_35a468;
        case 0x35a46cu: goto label_35a46c;
        case 0x35a470u: goto label_35a470;
        case 0x35a474u: goto label_35a474;
        case 0x35a478u: goto label_35a478;
        case 0x35a47cu: goto label_35a47c;
        case 0x35a480u: goto label_35a480;
        case 0x35a484u: goto label_35a484;
        case 0x35a488u: goto label_35a488;
        case 0x35a48cu: goto label_35a48c;
        case 0x35a490u: goto label_35a490;
        case 0x35a494u: goto label_35a494;
        case 0x35a498u: goto label_35a498;
        case 0x35a49cu: goto label_35a49c;
        case 0x35a4a0u: goto label_35a4a0;
        case 0x35a4a4u: goto label_35a4a4;
        case 0x35a4a8u: goto label_35a4a8;
        case 0x35a4acu: goto label_35a4ac;
        case 0x35a4b0u: goto label_35a4b0;
        case 0x35a4b4u: goto label_35a4b4;
        case 0x35a4b8u: goto label_35a4b8;
        case 0x35a4bcu: goto label_35a4bc;
        case 0x35a4c0u: goto label_35a4c0;
        case 0x35a4c4u: goto label_35a4c4;
        case 0x35a4c8u: goto label_35a4c8;
        case 0x35a4ccu: goto label_35a4cc;
        case 0x35a4d0u: goto label_35a4d0;
        case 0x35a4d4u: goto label_35a4d4;
        case 0x35a4d8u: goto label_35a4d8;
        case 0x35a4dcu: goto label_35a4dc;
        case 0x35a4e0u: goto label_35a4e0;
        case 0x35a4e4u: goto label_35a4e4;
        case 0x35a4e8u: goto label_35a4e8;
        case 0x35a4ecu: goto label_35a4ec;
        case 0x35a4f0u: goto label_35a4f0;
        case 0x35a4f4u: goto label_35a4f4;
        case 0x35a4f8u: goto label_35a4f8;
        case 0x35a4fcu: goto label_35a4fc;
        case 0x35a500u: goto label_35a500;
        case 0x35a504u: goto label_35a504;
        case 0x35a508u: goto label_35a508;
        case 0x35a50cu: goto label_35a50c;
        case 0x35a510u: goto label_35a510;
        case 0x35a514u: goto label_35a514;
        case 0x35a518u: goto label_35a518;
        case 0x35a51cu: goto label_35a51c;
        case 0x35a520u: goto label_35a520;
        case 0x35a524u: goto label_35a524;
        case 0x35a528u: goto label_35a528;
        case 0x35a52cu: goto label_35a52c;
        case 0x35a530u: goto label_35a530;
        case 0x35a534u: goto label_35a534;
        case 0x35a538u: goto label_35a538;
        case 0x35a53cu: goto label_35a53c;
        case 0x35a540u: goto label_35a540;
        case 0x35a544u: goto label_35a544;
        case 0x35a548u: goto label_35a548;
        case 0x35a54cu: goto label_35a54c;
        case 0x35a550u: goto label_35a550;
        case 0x35a554u: goto label_35a554;
        case 0x35a558u: goto label_35a558;
        case 0x35a55cu: goto label_35a55c;
        case 0x35a560u: goto label_35a560;
        case 0x35a564u: goto label_35a564;
        case 0x35a568u: goto label_35a568;
        case 0x35a56cu: goto label_35a56c;
        case 0x35a570u: goto label_35a570;
        case 0x35a574u: goto label_35a574;
        case 0x35a578u: goto label_35a578;
        case 0x35a57cu: goto label_35a57c;
        case 0x35a580u: goto label_35a580;
        case 0x35a584u: goto label_35a584;
        case 0x35a588u: goto label_35a588;
        case 0x35a58cu: goto label_35a58c;
        case 0x35a590u: goto label_35a590;
        case 0x35a594u: goto label_35a594;
        case 0x35a598u: goto label_35a598;
        case 0x35a59cu: goto label_35a59c;
        case 0x35a5a0u: goto label_35a5a0;
        case 0x35a5a4u: goto label_35a5a4;
        case 0x35a5a8u: goto label_35a5a8;
        case 0x35a5acu: goto label_35a5ac;
        case 0x35a5b0u: goto label_35a5b0;
        case 0x35a5b4u: goto label_35a5b4;
        case 0x35a5b8u: goto label_35a5b8;
        case 0x35a5bcu: goto label_35a5bc;
        case 0x35a5c0u: goto label_35a5c0;
        case 0x35a5c4u: goto label_35a5c4;
        case 0x35a5c8u: goto label_35a5c8;
        case 0x35a5ccu: goto label_35a5cc;
        case 0x35a5d0u: goto label_35a5d0;
        case 0x35a5d4u: goto label_35a5d4;
        case 0x35a5d8u: goto label_35a5d8;
        case 0x35a5dcu: goto label_35a5dc;
        case 0x35a5e0u: goto label_35a5e0;
        case 0x35a5e4u: goto label_35a5e4;
        case 0x35a5e8u: goto label_35a5e8;
        case 0x35a5ecu: goto label_35a5ec;
        case 0x35a5f0u: goto label_35a5f0;
        case 0x35a5f4u: goto label_35a5f4;
        case 0x35a5f8u: goto label_35a5f8;
        case 0x35a5fcu: goto label_35a5fc;
        case 0x35a600u: goto label_35a600;
        case 0x35a604u: goto label_35a604;
        case 0x35a608u: goto label_35a608;
        case 0x35a60cu: goto label_35a60c;
        case 0x35a610u: goto label_35a610;
        case 0x35a614u: goto label_35a614;
        case 0x35a618u: goto label_35a618;
        case 0x35a61cu: goto label_35a61c;
        case 0x35a620u: goto label_35a620;
        case 0x35a624u: goto label_35a624;
        case 0x35a628u: goto label_35a628;
        case 0x35a62cu: goto label_35a62c;
        case 0x35a630u: goto label_35a630;
        case 0x35a634u: goto label_35a634;
        case 0x35a638u: goto label_35a638;
        case 0x35a63cu: goto label_35a63c;
        case 0x35a640u: goto label_35a640;
        case 0x35a644u: goto label_35a644;
        case 0x35a648u: goto label_35a648;
        case 0x35a64cu: goto label_35a64c;
        case 0x35a650u: goto label_35a650;
        case 0x35a654u: goto label_35a654;
        case 0x35a658u: goto label_35a658;
        case 0x35a65cu: goto label_35a65c;
        case 0x35a660u: goto label_35a660;
        case 0x35a664u: goto label_35a664;
        case 0x35a668u: goto label_35a668;
        case 0x35a66cu: goto label_35a66c;
        case 0x35a670u: goto label_35a670;
        case 0x35a674u: goto label_35a674;
        case 0x35a678u: goto label_35a678;
        case 0x35a67cu: goto label_35a67c;
        case 0x35a680u: goto label_35a680;
        case 0x35a684u: goto label_35a684;
        case 0x35a688u: goto label_35a688;
        case 0x35a68cu: goto label_35a68c;
        case 0x35a690u: goto label_35a690;
        case 0x35a694u: goto label_35a694;
        case 0x35a698u: goto label_35a698;
        case 0x35a69cu: goto label_35a69c;
        case 0x35a6a0u: goto label_35a6a0;
        case 0x35a6a4u: goto label_35a6a4;
        case 0x35a6a8u: goto label_35a6a8;
        case 0x35a6acu: goto label_35a6ac;
        case 0x35a6b0u: goto label_35a6b0;
        case 0x35a6b4u: goto label_35a6b4;
        case 0x35a6b8u: goto label_35a6b8;
        case 0x35a6bcu: goto label_35a6bc;
        case 0x35a6c0u: goto label_35a6c0;
        case 0x35a6c4u: goto label_35a6c4;
        case 0x35a6c8u: goto label_35a6c8;
        case 0x35a6ccu: goto label_35a6cc;
        case 0x35a6d0u: goto label_35a6d0;
        case 0x35a6d4u: goto label_35a6d4;
        case 0x35a6d8u: goto label_35a6d8;
        case 0x35a6dcu: goto label_35a6dc;
        case 0x35a6e0u: goto label_35a6e0;
        case 0x35a6e4u: goto label_35a6e4;
        case 0x35a6e8u: goto label_35a6e8;
        case 0x35a6ecu: goto label_35a6ec;
        case 0x35a6f0u: goto label_35a6f0;
        case 0x35a6f4u: goto label_35a6f4;
        case 0x35a6f8u: goto label_35a6f8;
        case 0x35a6fcu: goto label_35a6fc;
        case 0x35a700u: goto label_35a700;
        case 0x35a704u: goto label_35a704;
        case 0x35a708u: goto label_35a708;
        case 0x35a70cu: goto label_35a70c;
        case 0x35a710u: goto label_35a710;
        case 0x35a714u: goto label_35a714;
        case 0x35a718u: goto label_35a718;
        case 0x35a71cu: goto label_35a71c;
        case 0x35a720u: goto label_35a720;
        case 0x35a724u: goto label_35a724;
        case 0x35a728u: goto label_35a728;
        case 0x35a72cu: goto label_35a72c;
        case 0x35a730u: goto label_35a730;
        case 0x35a734u: goto label_35a734;
        case 0x35a738u: goto label_35a738;
        case 0x35a73cu: goto label_35a73c;
        case 0x35a740u: goto label_35a740;
        case 0x35a744u: goto label_35a744;
        case 0x35a748u: goto label_35a748;
        case 0x35a74cu: goto label_35a74c;
        case 0x35a750u: goto label_35a750;
        case 0x35a754u: goto label_35a754;
        case 0x35a758u: goto label_35a758;
        case 0x35a75cu: goto label_35a75c;
        case 0x35a760u: goto label_35a760;
        case 0x35a764u: goto label_35a764;
        case 0x35a768u: goto label_35a768;
        case 0x35a76cu: goto label_35a76c;
        case 0x35a770u: goto label_35a770;
        case 0x35a774u: goto label_35a774;
        case 0x35a778u: goto label_35a778;
        case 0x35a77cu: goto label_35a77c;
        case 0x35a780u: goto label_35a780;
        case 0x35a784u: goto label_35a784;
        case 0x35a788u: goto label_35a788;
        case 0x35a78cu: goto label_35a78c;
        case 0x35a790u: goto label_35a790;
        case 0x35a794u: goto label_35a794;
        case 0x35a798u: goto label_35a798;
        case 0x35a79cu: goto label_35a79c;
        case 0x35a7a0u: goto label_35a7a0;
        case 0x35a7a4u: goto label_35a7a4;
        case 0x35a7a8u: goto label_35a7a8;
        case 0x35a7acu: goto label_35a7ac;
        case 0x35a7b0u: goto label_35a7b0;
        case 0x35a7b4u: goto label_35a7b4;
        case 0x35a7b8u: goto label_35a7b8;
        case 0x35a7bcu: goto label_35a7bc;
        case 0x35a7c0u: goto label_35a7c0;
        case 0x35a7c4u: goto label_35a7c4;
        case 0x35a7c8u: goto label_35a7c8;
        case 0x35a7ccu: goto label_35a7cc;
        case 0x35a7d0u: goto label_35a7d0;
        case 0x35a7d4u: goto label_35a7d4;
        case 0x35a7d8u: goto label_35a7d8;
        case 0x35a7dcu: goto label_35a7dc;
        case 0x35a7e0u: goto label_35a7e0;
        case 0x35a7e4u: goto label_35a7e4;
        case 0x35a7e8u: goto label_35a7e8;
        case 0x35a7ecu: goto label_35a7ec;
        case 0x35a7f0u: goto label_35a7f0;
        case 0x35a7f4u: goto label_35a7f4;
        case 0x35a7f8u: goto label_35a7f8;
        case 0x35a7fcu: goto label_35a7fc;
        case 0x35a800u: goto label_35a800;
        case 0x35a804u: goto label_35a804;
        case 0x35a808u: goto label_35a808;
        case 0x35a80cu: goto label_35a80c;
        case 0x35a810u: goto label_35a810;
        case 0x35a814u: goto label_35a814;
        case 0x35a818u: goto label_35a818;
        case 0x35a81cu: goto label_35a81c;
        case 0x35a820u: goto label_35a820;
        case 0x35a824u: goto label_35a824;
        case 0x35a828u: goto label_35a828;
        case 0x35a82cu: goto label_35a82c;
        case 0x35a830u: goto label_35a830;
        case 0x35a834u: goto label_35a834;
        case 0x35a838u: goto label_35a838;
        case 0x35a83cu: goto label_35a83c;
        case 0x35a840u: goto label_35a840;
        case 0x35a844u: goto label_35a844;
        case 0x35a848u: goto label_35a848;
        case 0x35a84cu: goto label_35a84c;
        case 0x35a850u: goto label_35a850;
        case 0x35a854u: goto label_35a854;
        case 0x35a858u: goto label_35a858;
        case 0x35a85cu: goto label_35a85c;
        case 0x35a860u: goto label_35a860;
        case 0x35a864u: goto label_35a864;
        case 0x35a868u: goto label_35a868;
        case 0x35a86cu: goto label_35a86c;
        case 0x35a870u: goto label_35a870;
        case 0x35a874u: goto label_35a874;
        case 0x35a878u: goto label_35a878;
        case 0x35a87cu: goto label_35a87c;
        case 0x35a880u: goto label_35a880;
        case 0x35a884u: goto label_35a884;
        case 0x35a888u: goto label_35a888;
        case 0x35a88cu: goto label_35a88c;
        case 0x35a890u: goto label_35a890;
        case 0x35a894u: goto label_35a894;
        case 0x35a898u: goto label_35a898;
        case 0x35a89cu: goto label_35a89c;
        case 0x35a8a0u: goto label_35a8a0;
        case 0x35a8a4u: goto label_35a8a4;
        case 0x35a8a8u: goto label_35a8a8;
        case 0x35a8acu: goto label_35a8ac;
        case 0x35a8b0u: goto label_35a8b0;
        case 0x35a8b4u: goto label_35a8b4;
        case 0x35a8b8u: goto label_35a8b8;
        case 0x35a8bcu: goto label_35a8bc;
        case 0x35a8c0u: goto label_35a8c0;
        case 0x35a8c4u: goto label_35a8c4;
        case 0x35a8c8u: goto label_35a8c8;
        case 0x35a8ccu: goto label_35a8cc;
        case 0x35a8d0u: goto label_35a8d0;
        case 0x35a8d4u: goto label_35a8d4;
        case 0x35a8d8u: goto label_35a8d8;
        case 0x35a8dcu: goto label_35a8dc;
        case 0x35a8e0u: goto label_35a8e0;
        case 0x35a8e4u: goto label_35a8e4;
        case 0x35a8e8u: goto label_35a8e8;
        case 0x35a8ecu: goto label_35a8ec;
        case 0x35a8f0u: goto label_35a8f0;
        case 0x35a8f4u: goto label_35a8f4;
        case 0x35a8f8u: goto label_35a8f8;
        case 0x35a8fcu: goto label_35a8fc;
        case 0x35a900u: goto label_35a900;
        case 0x35a904u: goto label_35a904;
        case 0x35a908u: goto label_35a908;
        case 0x35a90cu: goto label_35a90c;
        case 0x35a910u: goto label_35a910;
        case 0x35a914u: goto label_35a914;
        case 0x35a918u: goto label_35a918;
        case 0x35a91cu: goto label_35a91c;
        case 0x35a920u: goto label_35a920;
        case 0x35a924u: goto label_35a924;
        case 0x35a928u: goto label_35a928;
        case 0x35a92cu: goto label_35a92c;
        case 0x35a930u: goto label_35a930;
        case 0x35a934u: goto label_35a934;
        case 0x35a938u: goto label_35a938;
        case 0x35a93cu: goto label_35a93c;
        case 0x35a940u: goto label_35a940;
        case 0x35a944u: goto label_35a944;
        case 0x35a948u: goto label_35a948;
        case 0x35a94cu: goto label_35a94c;
        case 0x35a950u: goto label_35a950;
        case 0x35a954u: goto label_35a954;
        case 0x35a958u: goto label_35a958;
        case 0x35a95cu: goto label_35a95c;
        case 0x35a960u: goto label_35a960;
        case 0x35a964u: goto label_35a964;
        case 0x35a968u: goto label_35a968;
        case 0x35a96cu: goto label_35a96c;
        case 0x35a970u: goto label_35a970;
        case 0x35a974u: goto label_35a974;
        case 0x35a978u: goto label_35a978;
        case 0x35a97cu: goto label_35a97c;
        case 0x35a980u: goto label_35a980;
        case 0x35a984u: goto label_35a984;
        case 0x35a988u: goto label_35a988;
        case 0x35a98cu: goto label_35a98c;
        case 0x35a990u: goto label_35a990;
        case 0x35a994u: goto label_35a994;
        case 0x35a998u: goto label_35a998;
        case 0x35a99cu: goto label_35a99c;
        case 0x35a9a0u: goto label_35a9a0;
        case 0x35a9a4u: goto label_35a9a4;
        case 0x35a9a8u: goto label_35a9a8;
        case 0x35a9acu: goto label_35a9ac;
        case 0x35a9b0u: goto label_35a9b0;
        case 0x35a9b4u: goto label_35a9b4;
        case 0x35a9b8u: goto label_35a9b8;
        case 0x35a9bcu: goto label_35a9bc;
        case 0x35a9c0u: goto label_35a9c0;
        case 0x35a9c4u: goto label_35a9c4;
        case 0x35a9c8u: goto label_35a9c8;
        case 0x35a9ccu: goto label_35a9cc;
        case 0x35a9d0u: goto label_35a9d0;
        case 0x35a9d4u: goto label_35a9d4;
        case 0x35a9d8u: goto label_35a9d8;
        case 0x35a9dcu: goto label_35a9dc;
        case 0x35a9e0u: goto label_35a9e0;
        case 0x35a9e4u: goto label_35a9e4;
        case 0x35a9e8u: goto label_35a9e8;
        case 0x35a9ecu: goto label_35a9ec;
        case 0x35a9f0u: goto label_35a9f0;
        case 0x35a9f4u: goto label_35a9f4;
        case 0x35a9f8u: goto label_35a9f8;
        case 0x35a9fcu: goto label_35a9fc;
        case 0x35aa00u: goto label_35aa00;
        case 0x35aa04u: goto label_35aa04;
        case 0x35aa08u: goto label_35aa08;
        case 0x35aa0cu: goto label_35aa0c;
        case 0x35aa10u: goto label_35aa10;
        case 0x35aa14u: goto label_35aa14;
        case 0x35aa18u: goto label_35aa18;
        case 0x35aa1cu: goto label_35aa1c;
        case 0x35aa20u: goto label_35aa20;
        case 0x35aa24u: goto label_35aa24;
        case 0x35aa28u: goto label_35aa28;
        case 0x35aa2cu: goto label_35aa2c;
        case 0x35aa30u: goto label_35aa30;
        case 0x35aa34u: goto label_35aa34;
        case 0x35aa38u: goto label_35aa38;
        case 0x35aa3cu: goto label_35aa3c;
        case 0x35aa40u: goto label_35aa40;
        case 0x35aa44u: goto label_35aa44;
        case 0x35aa48u: goto label_35aa48;
        case 0x35aa4cu: goto label_35aa4c;
        case 0x35aa50u: goto label_35aa50;
        case 0x35aa54u: goto label_35aa54;
        case 0x35aa58u: goto label_35aa58;
        case 0x35aa5cu: goto label_35aa5c;
        case 0x35aa60u: goto label_35aa60;
        case 0x35aa64u: goto label_35aa64;
        case 0x35aa68u: goto label_35aa68;
        case 0x35aa6cu: goto label_35aa6c;
        case 0x35aa70u: goto label_35aa70;
        case 0x35aa74u: goto label_35aa74;
        case 0x35aa78u: goto label_35aa78;
        case 0x35aa7cu: goto label_35aa7c;
        case 0x35aa80u: goto label_35aa80;
        case 0x35aa84u: goto label_35aa84;
        case 0x35aa88u: goto label_35aa88;
        case 0x35aa8cu: goto label_35aa8c;
        case 0x35aa90u: goto label_35aa90;
        case 0x35aa94u: goto label_35aa94;
        case 0x35aa98u: goto label_35aa98;
        case 0x35aa9cu: goto label_35aa9c;
        case 0x35aaa0u: goto label_35aaa0;
        case 0x35aaa4u: goto label_35aaa4;
        case 0x35aaa8u: goto label_35aaa8;
        case 0x35aaacu: goto label_35aaac;
        case 0x35aab0u: goto label_35aab0;
        case 0x35aab4u: goto label_35aab4;
        case 0x35aab8u: goto label_35aab8;
        case 0x35aabcu: goto label_35aabc;
        case 0x35aac0u: goto label_35aac0;
        case 0x35aac4u: goto label_35aac4;
        case 0x35aac8u: goto label_35aac8;
        case 0x35aaccu: goto label_35aacc;
        case 0x35aad0u: goto label_35aad0;
        case 0x35aad4u: goto label_35aad4;
        case 0x35aad8u: goto label_35aad8;
        case 0x35aadcu: goto label_35aadc;
        case 0x35aae0u: goto label_35aae0;
        case 0x35aae4u: goto label_35aae4;
        case 0x35aae8u: goto label_35aae8;
        case 0x35aaecu: goto label_35aaec;
        case 0x35aaf0u: goto label_35aaf0;
        case 0x35aaf4u: goto label_35aaf4;
        case 0x35aaf8u: goto label_35aaf8;
        case 0x35aafcu: goto label_35aafc;
        case 0x35ab00u: goto label_35ab00;
        case 0x35ab04u: goto label_35ab04;
        case 0x35ab08u: goto label_35ab08;
        case 0x35ab0cu: goto label_35ab0c;
        case 0x35ab10u: goto label_35ab10;
        case 0x35ab14u: goto label_35ab14;
        case 0x35ab18u: goto label_35ab18;
        case 0x35ab1cu: goto label_35ab1c;
        case 0x35ab20u: goto label_35ab20;
        case 0x35ab24u: goto label_35ab24;
        case 0x35ab28u: goto label_35ab28;
        case 0x35ab2cu: goto label_35ab2c;
        case 0x35ab30u: goto label_35ab30;
        case 0x35ab34u: goto label_35ab34;
        case 0x35ab38u: goto label_35ab38;
        case 0x35ab3cu: goto label_35ab3c;
        case 0x35ab40u: goto label_35ab40;
        case 0x35ab44u: goto label_35ab44;
        case 0x35ab48u: goto label_35ab48;
        case 0x35ab4cu: goto label_35ab4c;
        case 0x35ab50u: goto label_35ab50;
        case 0x35ab54u: goto label_35ab54;
        case 0x35ab58u: goto label_35ab58;
        case 0x35ab5cu: goto label_35ab5c;
        case 0x35ab60u: goto label_35ab60;
        case 0x35ab64u: goto label_35ab64;
        case 0x35ab68u: goto label_35ab68;
        case 0x35ab6cu: goto label_35ab6c;
        case 0x35ab70u: goto label_35ab70;
        case 0x35ab74u: goto label_35ab74;
        case 0x35ab78u: goto label_35ab78;
        case 0x35ab7cu: goto label_35ab7c;
        case 0x35ab80u: goto label_35ab80;
        case 0x35ab84u: goto label_35ab84;
        case 0x35ab88u: goto label_35ab88;
        case 0x35ab8cu: goto label_35ab8c;
        case 0x35ab90u: goto label_35ab90;
        case 0x35ab94u: goto label_35ab94;
        case 0x35ab98u: goto label_35ab98;
        case 0x35ab9cu: goto label_35ab9c;
        case 0x35aba0u: goto label_35aba0;
        case 0x35aba4u: goto label_35aba4;
        case 0x35aba8u: goto label_35aba8;
        case 0x35abacu: goto label_35abac;
        case 0x35abb0u: goto label_35abb0;
        case 0x35abb4u: goto label_35abb4;
        case 0x35abb8u: goto label_35abb8;
        case 0x35abbcu: goto label_35abbc;
        case 0x35abc0u: goto label_35abc0;
        case 0x35abc4u: goto label_35abc4;
        case 0x35abc8u: goto label_35abc8;
        case 0x35abccu: goto label_35abcc;
        case 0x35abd0u: goto label_35abd0;
        case 0x35abd4u: goto label_35abd4;
        case 0x35abd8u: goto label_35abd8;
        case 0x35abdcu: goto label_35abdc;
        case 0x35abe0u: goto label_35abe0;
        case 0x35abe4u: goto label_35abe4;
        case 0x35abe8u: goto label_35abe8;
        case 0x35abecu: goto label_35abec;
        case 0x35abf0u: goto label_35abf0;
        case 0x35abf4u: goto label_35abf4;
        case 0x35abf8u: goto label_35abf8;
        case 0x35abfcu: goto label_35abfc;
        case 0x35ac00u: goto label_35ac00;
        case 0x35ac04u: goto label_35ac04;
        case 0x35ac08u: goto label_35ac08;
        case 0x35ac0cu: goto label_35ac0c;
        case 0x35ac10u: goto label_35ac10;
        case 0x35ac14u: goto label_35ac14;
        case 0x35ac18u: goto label_35ac18;
        case 0x35ac1cu: goto label_35ac1c;
        case 0x35ac20u: goto label_35ac20;
        case 0x35ac24u: goto label_35ac24;
        case 0x35ac28u: goto label_35ac28;
        case 0x35ac2cu: goto label_35ac2c;
        case 0x35ac30u: goto label_35ac30;
        case 0x35ac34u: goto label_35ac34;
        case 0x35ac38u: goto label_35ac38;
        case 0x35ac3cu: goto label_35ac3c;
        case 0x35ac40u: goto label_35ac40;
        case 0x35ac44u: goto label_35ac44;
        case 0x35ac48u: goto label_35ac48;
        case 0x35ac4cu: goto label_35ac4c;
        case 0x35ac50u: goto label_35ac50;
        case 0x35ac54u: goto label_35ac54;
        case 0x35ac58u: goto label_35ac58;
        case 0x35ac5cu: goto label_35ac5c;
        case 0x35ac60u: goto label_35ac60;
        case 0x35ac64u: goto label_35ac64;
        case 0x35ac68u: goto label_35ac68;
        case 0x35ac6cu: goto label_35ac6c;
        case 0x35ac70u: goto label_35ac70;
        case 0x35ac74u: goto label_35ac74;
        case 0x35ac78u: goto label_35ac78;
        case 0x35ac7cu: goto label_35ac7c;
        case 0x35ac80u: goto label_35ac80;
        case 0x35ac84u: goto label_35ac84;
        case 0x35ac88u: goto label_35ac88;
        case 0x35ac8cu: goto label_35ac8c;
        case 0x35ac90u: goto label_35ac90;
        case 0x35ac94u: goto label_35ac94;
        case 0x35ac98u: goto label_35ac98;
        case 0x35ac9cu: goto label_35ac9c;
        case 0x35aca0u: goto label_35aca0;
        case 0x35aca4u: goto label_35aca4;
        case 0x35aca8u: goto label_35aca8;
        case 0x35acacu: goto label_35acac;
        case 0x35acb0u: goto label_35acb0;
        case 0x35acb4u: goto label_35acb4;
        case 0x35acb8u: goto label_35acb8;
        case 0x35acbcu: goto label_35acbc;
        case 0x35acc0u: goto label_35acc0;
        case 0x35acc4u: goto label_35acc4;
        case 0x35acc8u: goto label_35acc8;
        case 0x35acccu: goto label_35accc;
        case 0x35acd0u: goto label_35acd0;
        case 0x35acd4u: goto label_35acd4;
        case 0x35acd8u: goto label_35acd8;
        case 0x35acdcu: goto label_35acdc;
        case 0x35ace0u: goto label_35ace0;
        case 0x35ace4u: goto label_35ace4;
        case 0x35ace8u: goto label_35ace8;
        case 0x35acecu: goto label_35acec;
        case 0x35acf0u: goto label_35acf0;
        case 0x35acf4u: goto label_35acf4;
        case 0x35acf8u: goto label_35acf8;
        case 0x35acfcu: goto label_35acfc;
        case 0x35ad00u: goto label_35ad00;
        case 0x35ad04u: goto label_35ad04;
        case 0x35ad08u: goto label_35ad08;
        case 0x35ad0cu: goto label_35ad0c;
        case 0x35ad10u: goto label_35ad10;
        case 0x35ad14u: goto label_35ad14;
        case 0x35ad18u: goto label_35ad18;
        case 0x35ad1cu: goto label_35ad1c;
        case 0x35ad20u: goto label_35ad20;
        case 0x35ad24u: goto label_35ad24;
        case 0x35ad28u: goto label_35ad28;
        case 0x35ad2cu: goto label_35ad2c;
        case 0x35ad30u: goto label_35ad30;
        case 0x35ad34u: goto label_35ad34;
        case 0x35ad38u: goto label_35ad38;
        case 0x35ad3cu: goto label_35ad3c;
        case 0x35ad40u: goto label_35ad40;
        case 0x35ad44u: goto label_35ad44;
        case 0x35ad48u: goto label_35ad48;
        case 0x35ad4cu: goto label_35ad4c;
        case 0x35ad50u: goto label_35ad50;
        case 0x35ad54u: goto label_35ad54;
        case 0x35ad58u: goto label_35ad58;
        case 0x35ad5cu: goto label_35ad5c;
        case 0x35ad60u: goto label_35ad60;
        case 0x35ad64u: goto label_35ad64;
        case 0x35ad68u: goto label_35ad68;
        case 0x35ad6cu: goto label_35ad6c;
        case 0x35ad70u: goto label_35ad70;
        case 0x35ad74u: goto label_35ad74;
        case 0x35ad78u: goto label_35ad78;
        case 0x35ad7cu: goto label_35ad7c;
        case 0x35ad80u: goto label_35ad80;
        case 0x35ad84u: goto label_35ad84;
        case 0x35ad88u: goto label_35ad88;
        case 0x35ad8cu: goto label_35ad8c;
        case 0x35ad90u: goto label_35ad90;
        case 0x35ad94u: goto label_35ad94;
        case 0x35ad98u: goto label_35ad98;
        case 0x35ad9cu: goto label_35ad9c;
        case 0x35ada0u: goto label_35ada0;
        case 0x35ada4u: goto label_35ada4;
        case 0x35ada8u: goto label_35ada8;
        case 0x35adacu: goto label_35adac;
        case 0x35adb0u: goto label_35adb0;
        case 0x35adb4u: goto label_35adb4;
        case 0x35adb8u: goto label_35adb8;
        case 0x35adbcu: goto label_35adbc;
        case 0x35adc0u: goto label_35adc0;
        case 0x35adc4u: goto label_35adc4;
        case 0x35adc8u: goto label_35adc8;
        case 0x35adccu: goto label_35adcc;
        case 0x35add0u: goto label_35add0;
        case 0x35add4u: goto label_35add4;
        case 0x35add8u: goto label_35add8;
        case 0x35addcu: goto label_35addc;
        case 0x35ade0u: goto label_35ade0;
        case 0x35ade4u: goto label_35ade4;
        case 0x35ade8u: goto label_35ade8;
        case 0x35adecu: goto label_35adec;
        case 0x35adf0u: goto label_35adf0;
        case 0x35adf4u: goto label_35adf4;
        case 0x35adf8u: goto label_35adf8;
        case 0x35adfcu: goto label_35adfc;
        case 0x35ae00u: goto label_35ae00;
        case 0x35ae04u: goto label_35ae04;
        case 0x35ae08u: goto label_35ae08;
        case 0x35ae0cu: goto label_35ae0c;
        case 0x35ae10u: goto label_35ae10;
        case 0x35ae14u: goto label_35ae14;
        case 0x35ae18u: goto label_35ae18;
        case 0x35ae1cu: goto label_35ae1c;
        case 0x35ae20u: goto label_35ae20;
        case 0x35ae24u: goto label_35ae24;
        case 0x35ae28u: goto label_35ae28;
        case 0x35ae2cu: goto label_35ae2c;
        case 0x35ae30u: goto label_35ae30;
        case 0x35ae34u: goto label_35ae34;
        case 0x35ae38u: goto label_35ae38;
        case 0x35ae3cu: goto label_35ae3c;
        case 0x35ae40u: goto label_35ae40;
        case 0x35ae44u: goto label_35ae44;
        case 0x35ae48u: goto label_35ae48;
        case 0x35ae4cu: goto label_35ae4c;
        case 0x35ae50u: goto label_35ae50;
        case 0x35ae54u: goto label_35ae54;
        case 0x35ae58u: goto label_35ae58;
        case 0x35ae5cu: goto label_35ae5c;
        case 0x35ae60u: goto label_35ae60;
        case 0x35ae64u: goto label_35ae64;
        case 0x35ae68u: goto label_35ae68;
        case 0x35ae6cu: goto label_35ae6c;
        case 0x35ae70u: goto label_35ae70;
        case 0x35ae74u: goto label_35ae74;
        case 0x35ae78u: goto label_35ae78;
        case 0x35ae7cu: goto label_35ae7c;
        case 0x35ae80u: goto label_35ae80;
        case 0x35ae84u: goto label_35ae84;
        case 0x35ae88u: goto label_35ae88;
        case 0x35ae8cu: goto label_35ae8c;
        case 0x35ae90u: goto label_35ae90;
        case 0x35ae94u: goto label_35ae94;
        case 0x35ae98u: goto label_35ae98;
        case 0x35ae9cu: goto label_35ae9c;
        case 0x35aea0u: goto label_35aea0;
        case 0x35aea4u: goto label_35aea4;
        case 0x35aea8u: goto label_35aea8;
        case 0x35aeacu: goto label_35aeac;
        case 0x35aeb0u: goto label_35aeb0;
        case 0x35aeb4u: goto label_35aeb4;
        case 0x35aeb8u: goto label_35aeb8;
        case 0x35aebcu: goto label_35aebc;
        case 0x35aec0u: goto label_35aec0;
        case 0x35aec4u: goto label_35aec4;
        case 0x35aec8u: goto label_35aec8;
        case 0x35aeccu: goto label_35aecc;
        case 0x35aed0u: goto label_35aed0;
        case 0x35aed4u: goto label_35aed4;
        case 0x35aed8u: goto label_35aed8;
        case 0x35aedcu: goto label_35aedc;
        case 0x35aee0u: goto label_35aee0;
        case 0x35aee4u: goto label_35aee4;
        case 0x35aee8u: goto label_35aee8;
        case 0x35aeecu: goto label_35aeec;
        case 0x35aef0u: goto label_35aef0;
        case 0x35aef4u: goto label_35aef4;
        case 0x35aef8u: goto label_35aef8;
        case 0x35aefcu: goto label_35aefc;
        case 0x35af00u: goto label_35af00;
        case 0x35af04u: goto label_35af04;
        case 0x35af08u: goto label_35af08;
        case 0x35af0cu: goto label_35af0c;
        case 0x35af10u: goto label_35af10;
        case 0x35af14u: goto label_35af14;
        case 0x35af18u: goto label_35af18;
        case 0x35af1cu: goto label_35af1c;
        case 0x35af20u: goto label_35af20;
        case 0x35af24u: goto label_35af24;
        case 0x35af28u: goto label_35af28;
        case 0x35af2cu: goto label_35af2c;
        case 0x35af30u: goto label_35af30;
        case 0x35af34u: goto label_35af34;
        case 0x35af38u: goto label_35af38;
        case 0x35af3cu: goto label_35af3c;
        case 0x35af40u: goto label_35af40;
        case 0x35af44u: goto label_35af44;
        case 0x35af48u: goto label_35af48;
        case 0x35af4cu: goto label_35af4c;
        case 0x35af50u: goto label_35af50;
        case 0x35af54u: goto label_35af54;
        case 0x35af58u: goto label_35af58;
        case 0x35af5cu: goto label_35af5c;
        case 0x35af60u: goto label_35af60;
        case 0x35af64u: goto label_35af64;
        case 0x35af68u: goto label_35af68;
        case 0x35af6cu: goto label_35af6c;
        case 0x35af70u: goto label_35af70;
        case 0x35af74u: goto label_35af74;
        case 0x35af78u: goto label_35af78;
        case 0x35af7cu: goto label_35af7c;
        case 0x35af80u: goto label_35af80;
        case 0x35af84u: goto label_35af84;
        case 0x35af88u: goto label_35af88;
        case 0x35af8cu: goto label_35af8c;
        case 0x35af90u: goto label_35af90;
        case 0x35af94u: goto label_35af94;
        case 0x35af98u: goto label_35af98;
        case 0x35af9cu: goto label_35af9c;
        case 0x35afa0u: goto label_35afa0;
        case 0x35afa4u: goto label_35afa4;
        case 0x35afa8u: goto label_35afa8;
        case 0x35afacu: goto label_35afac;
        case 0x35afb0u: goto label_35afb0;
        case 0x35afb4u: goto label_35afb4;
        case 0x35afb8u: goto label_35afb8;
        case 0x35afbcu: goto label_35afbc;
        case 0x35afc0u: goto label_35afc0;
        case 0x35afc4u: goto label_35afc4;
        case 0x35afc8u: goto label_35afc8;
        case 0x35afccu: goto label_35afcc;
        case 0x35afd0u: goto label_35afd0;
        case 0x35afd4u: goto label_35afd4;
        case 0x35afd8u: goto label_35afd8;
        case 0x35afdcu: goto label_35afdc;
        case 0x35afe0u: goto label_35afe0;
        case 0x35afe4u: goto label_35afe4;
        case 0x35afe8u: goto label_35afe8;
        case 0x35afecu: goto label_35afec;
        case 0x35aff0u: goto label_35aff0;
        case 0x35aff4u: goto label_35aff4;
        case 0x35aff8u: goto label_35aff8;
        case 0x35affcu: goto label_35affc;
        case 0x35b000u: goto label_35b000;
        case 0x35b004u: goto label_35b004;
        case 0x35b008u: goto label_35b008;
        case 0x35b00cu: goto label_35b00c;
        case 0x35b010u: goto label_35b010;
        case 0x35b014u: goto label_35b014;
        case 0x35b018u: goto label_35b018;
        case 0x35b01cu: goto label_35b01c;
        case 0x35b020u: goto label_35b020;
        case 0x35b024u: goto label_35b024;
        case 0x35b028u: goto label_35b028;
        case 0x35b02cu: goto label_35b02c;
        case 0x35b030u: goto label_35b030;
        case 0x35b034u: goto label_35b034;
        case 0x35b038u: goto label_35b038;
        case 0x35b03cu: goto label_35b03c;
        case 0x35b040u: goto label_35b040;
        case 0x35b044u: goto label_35b044;
        case 0x35b048u: goto label_35b048;
        case 0x35b04cu: goto label_35b04c;
        case 0x35b050u: goto label_35b050;
        case 0x35b054u: goto label_35b054;
        case 0x35b058u: goto label_35b058;
        case 0x35b05cu: goto label_35b05c;
        case 0x35b060u: goto label_35b060;
        case 0x35b064u: goto label_35b064;
        case 0x35b068u: goto label_35b068;
        case 0x35b06cu: goto label_35b06c;
        case 0x35b070u: goto label_35b070;
        case 0x35b074u: goto label_35b074;
        case 0x35b078u: goto label_35b078;
        case 0x35b07cu: goto label_35b07c;
        case 0x35b080u: goto label_35b080;
        case 0x35b084u: goto label_35b084;
        case 0x35b088u: goto label_35b088;
        case 0x35b08cu: goto label_35b08c;
        case 0x35b090u: goto label_35b090;
        case 0x35b094u: goto label_35b094;
        case 0x35b098u: goto label_35b098;
        case 0x35b09cu: goto label_35b09c;
        case 0x35b0a0u: goto label_35b0a0;
        case 0x35b0a4u: goto label_35b0a4;
        case 0x35b0a8u: goto label_35b0a8;
        case 0x35b0acu: goto label_35b0ac;
        case 0x35b0b0u: goto label_35b0b0;
        case 0x35b0b4u: goto label_35b0b4;
        case 0x35b0b8u: goto label_35b0b8;
        case 0x35b0bcu: goto label_35b0bc;
        case 0x35b0c0u: goto label_35b0c0;
        case 0x35b0c4u: goto label_35b0c4;
        case 0x35b0c8u: goto label_35b0c8;
        case 0x35b0ccu: goto label_35b0cc;
        case 0x35b0d0u: goto label_35b0d0;
        case 0x35b0d4u: goto label_35b0d4;
        case 0x35b0d8u: goto label_35b0d8;
        case 0x35b0dcu: goto label_35b0dc;
        case 0x35b0e0u: goto label_35b0e0;
        case 0x35b0e4u: goto label_35b0e4;
        case 0x35b0e8u: goto label_35b0e8;
        case 0x35b0ecu: goto label_35b0ec;
        case 0x35b0f0u: goto label_35b0f0;
        case 0x35b0f4u: goto label_35b0f4;
        case 0x35b0f8u: goto label_35b0f8;
        case 0x35b0fcu: goto label_35b0fc;
        case 0x35b100u: goto label_35b100;
        case 0x35b104u: goto label_35b104;
        case 0x35b108u: goto label_35b108;
        case 0x35b10cu: goto label_35b10c;
        case 0x35b110u: goto label_35b110;
        case 0x35b114u: goto label_35b114;
        case 0x35b118u: goto label_35b118;
        case 0x35b11cu: goto label_35b11c;
        case 0x35b120u: goto label_35b120;
        case 0x35b124u: goto label_35b124;
        case 0x35b128u: goto label_35b128;
        case 0x35b12cu: goto label_35b12c;
        case 0x35b130u: goto label_35b130;
        case 0x35b134u: goto label_35b134;
        case 0x35b138u: goto label_35b138;
        case 0x35b13cu: goto label_35b13c;
        case 0x35b140u: goto label_35b140;
        case 0x35b144u: goto label_35b144;
        case 0x35b148u: goto label_35b148;
        case 0x35b14cu: goto label_35b14c;
        case 0x35b150u: goto label_35b150;
        case 0x35b154u: goto label_35b154;
        case 0x35b158u: goto label_35b158;
        case 0x35b15cu: goto label_35b15c;
        case 0x35b160u: goto label_35b160;
        case 0x35b164u: goto label_35b164;
        case 0x35b168u: goto label_35b168;
        case 0x35b16cu: goto label_35b16c;
        case 0x35b170u: goto label_35b170;
        case 0x35b174u: goto label_35b174;
        case 0x35b178u: goto label_35b178;
        case 0x35b17cu: goto label_35b17c;
        case 0x35b180u: goto label_35b180;
        case 0x35b184u: goto label_35b184;
        case 0x35b188u: goto label_35b188;
        case 0x35b18cu: goto label_35b18c;
        case 0x35b190u: goto label_35b190;
        case 0x35b194u: goto label_35b194;
        case 0x35b198u: goto label_35b198;
        case 0x35b19cu: goto label_35b19c;
        case 0x35b1a0u: goto label_35b1a0;
        case 0x35b1a4u: goto label_35b1a4;
        case 0x35b1a8u: goto label_35b1a8;
        case 0x35b1acu: goto label_35b1ac;
        case 0x35b1b0u: goto label_35b1b0;
        case 0x35b1b4u: goto label_35b1b4;
        case 0x35b1b8u: goto label_35b1b8;
        case 0x35b1bcu: goto label_35b1bc;
        case 0x35b1c0u: goto label_35b1c0;
        case 0x35b1c4u: goto label_35b1c4;
        case 0x35b1c8u: goto label_35b1c8;
        case 0x35b1ccu: goto label_35b1cc;
        case 0x35b1d0u: goto label_35b1d0;
        case 0x35b1d4u: goto label_35b1d4;
        case 0x35b1d8u: goto label_35b1d8;
        case 0x35b1dcu: goto label_35b1dc;
        case 0x35b1e0u: goto label_35b1e0;
        case 0x35b1e4u: goto label_35b1e4;
        case 0x35b1e8u: goto label_35b1e8;
        case 0x35b1ecu: goto label_35b1ec;
        case 0x35b1f0u: goto label_35b1f0;
        case 0x35b1f4u: goto label_35b1f4;
        case 0x35b1f8u: goto label_35b1f8;
        case 0x35b1fcu: goto label_35b1fc;
        case 0x35b200u: goto label_35b200;
        case 0x35b204u: goto label_35b204;
        case 0x35b208u: goto label_35b208;
        case 0x35b20cu: goto label_35b20c;
        case 0x35b210u: goto label_35b210;
        case 0x35b214u: goto label_35b214;
        case 0x35b218u: goto label_35b218;
        case 0x35b21cu: goto label_35b21c;
        case 0x35b220u: goto label_35b220;
        case 0x35b224u: goto label_35b224;
        case 0x35b228u: goto label_35b228;
        case 0x35b22cu: goto label_35b22c;
        case 0x35b230u: goto label_35b230;
        case 0x35b234u: goto label_35b234;
        case 0x35b238u: goto label_35b238;
        case 0x35b23cu: goto label_35b23c;
        case 0x35b240u: goto label_35b240;
        case 0x35b244u: goto label_35b244;
        case 0x35b248u: goto label_35b248;
        case 0x35b24cu: goto label_35b24c;
        case 0x35b250u: goto label_35b250;
        case 0x35b254u: goto label_35b254;
        case 0x35b258u: goto label_35b258;
        case 0x35b25cu: goto label_35b25c;
        case 0x35b260u: goto label_35b260;
        case 0x35b264u: goto label_35b264;
        case 0x35b268u: goto label_35b268;
        case 0x35b26cu: goto label_35b26c;
        case 0x35b270u: goto label_35b270;
        case 0x35b274u: goto label_35b274;
        case 0x35b278u: goto label_35b278;
        case 0x35b27cu: goto label_35b27c;
        case 0x35b280u: goto label_35b280;
        case 0x35b284u: goto label_35b284;
        case 0x35b288u: goto label_35b288;
        case 0x35b28cu: goto label_35b28c;
        case 0x35b290u: goto label_35b290;
        case 0x35b294u: goto label_35b294;
        case 0x35b298u: goto label_35b298;
        case 0x35b29cu: goto label_35b29c;
        case 0x35b2a0u: goto label_35b2a0;
        case 0x35b2a4u: goto label_35b2a4;
        case 0x35b2a8u: goto label_35b2a8;
        case 0x35b2acu: goto label_35b2ac;
        case 0x35b2b0u: goto label_35b2b0;
        case 0x35b2b4u: goto label_35b2b4;
        case 0x35b2b8u: goto label_35b2b8;
        case 0x35b2bcu: goto label_35b2bc;
        case 0x35b2c0u: goto label_35b2c0;
        case 0x35b2c4u: goto label_35b2c4;
        case 0x35b2c8u: goto label_35b2c8;
        case 0x35b2ccu: goto label_35b2cc;
        case 0x35b2d0u: goto label_35b2d0;
        case 0x35b2d4u: goto label_35b2d4;
        case 0x35b2d8u: goto label_35b2d8;
        case 0x35b2dcu: goto label_35b2dc;
        case 0x35b2e0u: goto label_35b2e0;
        case 0x35b2e4u: goto label_35b2e4;
        case 0x35b2e8u: goto label_35b2e8;
        case 0x35b2ecu: goto label_35b2ec;
        case 0x35b2f0u: goto label_35b2f0;
        case 0x35b2f4u: goto label_35b2f4;
        case 0x35b2f8u: goto label_35b2f8;
        case 0x35b2fcu: goto label_35b2fc;
        case 0x35b300u: goto label_35b300;
        case 0x35b304u: goto label_35b304;
        case 0x35b308u: goto label_35b308;
        case 0x35b30cu: goto label_35b30c;
        case 0x35b310u: goto label_35b310;
        case 0x35b314u: goto label_35b314;
        case 0x35b318u: goto label_35b318;
        case 0x35b31cu: goto label_35b31c;
        case 0x35b320u: goto label_35b320;
        case 0x35b324u: goto label_35b324;
        case 0x35b328u: goto label_35b328;
        case 0x35b32cu: goto label_35b32c;
        case 0x35b330u: goto label_35b330;
        case 0x35b334u: goto label_35b334;
        case 0x35b338u: goto label_35b338;
        case 0x35b33cu: goto label_35b33c;
        case 0x35b340u: goto label_35b340;
        case 0x35b344u: goto label_35b344;
        case 0x35b348u: goto label_35b348;
        case 0x35b34cu: goto label_35b34c;
        case 0x35b350u: goto label_35b350;
        case 0x35b354u: goto label_35b354;
        case 0x35b358u: goto label_35b358;
        case 0x35b35cu: goto label_35b35c;
        case 0x35b360u: goto label_35b360;
        case 0x35b364u: goto label_35b364;
        case 0x35b368u: goto label_35b368;
        case 0x35b36cu: goto label_35b36c;
        case 0x35b370u: goto label_35b370;
        case 0x35b374u: goto label_35b374;
        case 0x35b378u: goto label_35b378;
        case 0x35b37cu: goto label_35b37c;
        case 0x35b380u: goto label_35b380;
        case 0x35b384u: goto label_35b384;
        case 0x35b388u: goto label_35b388;
        case 0x35b38cu: goto label_35b38c;
        case 0x35b390u: goto label_35b390;
        case 0x35b394u: goto label_35b394;
        case 0x35b398u: goto label_35b398;
        case 0x35b39cu: goto label_35b39c;
        case 0x35b3a0u: goto label_35b3a0;
        case 0x35b3a4u: goto label_35b3a4;
        case 0x35b3a8u: goto label_35b3a8;
        case 0x35b3acu: goto label_35b3ac;
        case 0x35b3b0u: goto label_35b3b0;
        case 0x35b3b4u: goto label_35b3b4;
        case 0x35b3b8u: goto label_35b3b8;
        case 0x35b3bcu: goto label_35b3bc;
        case 0x35b3c0u: goto label_35b3c0;
        case 0x35b3c4u: goto label_35b3c4;
        case 0x35b3c8u: goto label_35b3c8;
        case 0x35b3ccu: goto label_35b3cc;
        case 0x35b3d0u: goto label_35b3d0;
        case 0x35b3d4u: goto label_35b3d4;
        case 0x35b3d8u: goto label_35b3d8;
        case 0x35b3dcu: goto label_35b3dc;
        case 0x35b3e0u: goto label_35b3e0;
        case 0x35b3e4u: goto label_35b3e4;
        case 0x35b3e8u: goto label_35b3e8;
        case 0x35b3ecu: goto label_35b3ec;
        case 0x35b3f0u: goto label_35b3f0;
        case 0x35b3f4u: goto label_35b3f4;
        case 0x35b3f8u: goto label_35b3f8;
        case 0x35b3fcu: goto label_35b3fc;
        case 0x35b400u: goto label_35b400;
        case 0x35b404u: goto label_35b404;
        case 0x35b408u: goto label_35b408;
        case 0x35b40cu: goto label_35b40c;
        case 0x35b410u: goto label_35b410;
        case 0x35b414u: goto label_35b414;
        case 0x35b418u: goto label_35b418;
        case 0x35b41cu: goto label_35b41c;
        case 0x35b420u: goto label_35b420;
        case 0x35b424u: goto label_35b424;
        case 0x35b428u: goto label_35b428;
        case 0x35b42cu: goto label_35b42c;
        case 0x35b430u: goto label_35b430;
        case 0x35b434u: goto label_35b434;
        case 0x35b438u: goto label_35b438;
        case 0x35b43cu: goto label_35b43c;
        case 0x35b440u: goto label_35b440;
        case 0x35b444u: goto label_35b444;
        case 0x35b448u: goto label_35b448;
        case 0x35b44cu: goto label_35b44c;
        case 0x35b450u: goto label_35b450;
        case 0x35b454u: goto label_35b454;
        case 0x35b458u: goto label_35b458;
        case 0x35b45cu: goto label_35b45c;
        case 0x35b460u: goto label_35b460;
        case 0x35b464u: goto label_35b464;
        case 0x35b468u: goto label_35b468;
        case 0x35b46cu: goto label_35b46c;
        case 0x35b470u: goto label_35b470;
        case 0x35b474u: goto label_35b474;
        case 0x35b478u: goto label_35b478;
        case 0x35b47cu: goto label_35b47c;
        case 0x35b480u: goto label_35b480;
        case 0x35b484u: goto label_35b484;
        case 0x35b488u: goto label_35b488;
        case 0x35b48cu: goto label_35b48c;
        case 0x35b490u: goto label_35b490;
        case 0x35b494u: goto label_35b494;
        case 0x35b498u: goto label_35b498;
        case 0x35b49cu: goto label_35b49c;
        case 0x35b4a0u: goto label_35b4a0;
        case 0x35b4a4u: goto label_35b4a4;
        case 0x35b4a8u: goto label_35b4a8;
        case 0x35b4acu: goto label_35b4ac;
        case 0x35b4b0u: goto label_35b4b0;
        case 0x35b4b4u: goto label_35b4b4;
        case 0x35b4b8u: goto label_35b4b8;
        case 0x35b4bcu: goto label_35b4bc;
        case 0x35b4c0u: goto label_35b4c0;
        case 0x35b4c4u: goto label_35b4c4;
        case 0x35b4c8u: goto label_35b4c8;
        case 0x35b4ccu: goto label_35b4cc;
        case 0x35b4d0u: goto label_35b4d0;
        case 0x35b4d4u: goto label_35b4d4;
        case 0x35b4d8u: goto label_35b4d8;
        case 0x35b4dcu: goto label_35b4dc;
        case 0x35b4e0u: goto label_35b4e0;
        case 0x35b4e4u: goto label_35b4e4;
        case 0x35b4e8u: goto label_35b4e8;
        case 0x35b4ecu: goto label_35b4ec;
        case 0x35b4f0u: goto label_35b4f0;
        case 0x35b4f4u: goto label_35b4f4;
        case 0x35b4f8u: goto label_35b4f8;
        case 0x35b4fcu: goto label_35b4fc;
        case 0x35b500u: goto label_35b500;
        case 0x35b504u: goto label_35b504;
        case 0x35b508u: goto label_35b508;
        case 0x35b50cu: goto label_35b50c;
        case 0x35b510u: goto label_35b510;
        case 0x35b514u: goto label_35b514;
        case 0x35b518u: goto label_35b518;
        case 0x35b51cu: goto label_35b51c;
        case 0x35b520u: goto label_35b520;
        case 0x35b524u: goto label_35b524;
        case 0x35b528u: goto label_35b528;
        case 0x35b52cu: goto label_35b52c;
        case 0x35b530u: goto label_35b530;
        case 0x35b534u: goto label_35b534;
        case 0x35b538u: goto label_35b538;
        case 0x35b53cu: goto label_35b53c;
        case 0x35b540u: goto label_35b540;
        case 0x35b544u: goto label_35b544;
        case 0x35b548u: goto label_35b548;
        case 0x35b54cu: goto label_35b54c;
        case 0x35b550u: goto label_35b550;
        case 0x35b554u: goto label_35b554;
        case 0x35b558u: goto label_35b558;
        case 0x35b55cu: goto label_35b55c;
        case 0x35b560u: goto label_35b560;
        case 0x35b564u: goto label_35b564;
        case 0x35b568u: goto label_35b568;
        case 0x35b56cu: goto label_35b56c;
        case 0x35b570u: goto label_35b570;
        case 0x35b574u: goto label_35b574;
        case 0x35b578u: goto label_35b578;
        case 0x35b57cu: goto label_35b57c;
        case 0x35b580u: goto label_35b580;
        case 0x35b584u: goto label_35b584;
        case 0x35b588u: goto label_35b588;
        case 0x35b58cu: goto label_35b58c;
        case 0x35b590u: goto label_35b590;
        case 0x35b594u: goto label_35b594;
        case 0x35b598u: goto label_35b598;
        case 0x35b59cu: goto label_35b59c;
        case 0x35b5a0u: goto label_35b5a0;
        case 0x35b5a4u: goto label_35b5a4;
        case 0x35b5a8u: goto label_35b5a8;
        case 0x35b5acu: goto label_35b5ac;
        case 0x35b5b0u: goto label_35b5b0;
        case 0x35b5b4u: goto label_35b5b4;
        case 0x35b5b8u: goto label_35b5b8;
        case 0x35b5bcu: goto label_35b5bc;
        case 0x35b5c0u: goto label_35b5c0;
        case 0x35b5c4u: goto label_35b5c4;
        case 0x35b5c8u: goto label_35b5c8;
        case 0x35b5ccu: goto label_35b5cc;
        case 0x35b5d0u: goto label_35b5d0;
        case 0x35b5d4u: goto label_35b5d4;
        case 0x35b5d8u: goto label_35b5d8;
        case 0x35b5dcu: goto label_35b5dc;
        case 0x35b5e0u: goto label_35b5e0;
        case 0x35b5e4u: goto label_35b5e4;
        case 0x35b5e8u: goto label_35b5e8;
        case 0x35b5ecu: goto label_35b5ec;
        case 0x35b5f0u: goto label_35b5f0;
        case 0x35b5f4u: goto label_35b5f4;
        case 0x35b5f8u: goto label_35b5f8;
        case 0x35b5fcu: goto label_35b5fc;
        case 0x35b600u: goto label_35b600;
        case 0x35b604u: goto label_35b604;
        case 0x35b608u: goto label_35b608;
        case 0x35b60cu: goto label_35b60c;
        case 0x35b610u: goto label_35b610;
        case 0x35b614u: goto label_35b614;
        case 0x35b618u: goto label_35b618;
        case 0x35b61cu: goto label_35b61c;
        case 0x35b620u: goto label_35b620;
        case 0x35b624u: goto label_35b624;
        case 0x35b628u: goto label_35b628;
        case 0x35b62cu: goto label_35b62c;
        case 0x35b630u: goto label_35b630;
        case 0x35b634u: goto label_35b634;
        case 0x35b638u: goto label_35b638;
        case 0x35b63cu: goto label_35b63c;
        case 0x35b640u: goto label_35b640;
        case 0x35b644u: goto label_35b644;
        case 0x35b648u: goto label_35b648;
        case 0x35b64cu: goto label_35b64c;
        case 0x35b650u: goto label_35b650;
        case 0x35b654u: goto label_35b654;
        case 0x35b658u: goto label_35b658;
        case 0x35b65cu: goto label_35b65c;
        case 0x35b660u: goto label_35b660;
        case 0x35b664u: goto label_35b664;
        case 0x35b668u: goto label_35b668;
        case 0x35b66cu: goto label_35b66c;
        case 0x35b670u: goto label_35b670;
        case 0x35b674u: goto label_35b674;
        case 0x35b678u: goto label_35b678;
        case 0x35b67cu: goto label_35b67c;
        case 0x35b680u: goto label_35b680;
        case 0x35b684u: goto label_35b684;
        case 0x35b688u: goto label_35b688;
        case 0x35b68cu: goto label_35b68c;
        case 0x35b690u: goto label_35b690;
        case 0x35b694u: goto label_35b694;
        case 0x35b698u: goto label_35b698;
        case 0x35b69cu: goto label_35b69c;
        case 0x35b6a0u: goto label_35b6a0;
        case 0x35b6a4u: goto label_35b6a4;
        case 0x35b6a8u: goto label_35b6a8;
        case 0x35b6acu: goto label_35b6ac;
        case 0x35b6b0u: goto label_35b6b0;
        case 0x35b6b4u: goto label_35b6b4;
        case 0x35b6b8u: goto label_35b6b8;
        case 0x35b6bcu: goto label_35b6bc;
        case 0x35b6c0u: goto label_35b6c0;
        case 0x35b6c4u: goto label_35b6c4;
        case 0x35b6c8u: goto label_35b6c8;
        case 0x35b6ccu: goto label_35b6cc;
        case 0x35b6d0u: goto label_35b6d0;
        case 0x35b6d4u: goto label_35b6d4;
        case 0x35b6d8u: goto label_35b6d8;
        case 0x35b6dcu: goto label_35b6dc;
        case 0x35b6e0u: goto label_35b6e0;
        case 0x35b6e4u: goto label_35b6e4;
        case 0x35b6e8u: goto label_35b6e8;
        case 0x35b6ecu: goto label_35b6ec;
        case 0x35b6f0u: goto label_35b6f0;
        case 0x35b6f4u: goto label_35b6f4;
        case 0x35b6f8u: goto label_35b6f8;
        case 0x35b6fcu: goto label_35b6fc;
        case 0x35b700u: goto label_35b700;
        case 0x35b704u: goto label_35b704;
        case 0x35b708u: goto label_35b708;
        case 0x35b70cu: goto label_35b70c;
        case 0x35b710u: goto label_35b710;
        case 0x35b714u: goto label_35b714;
        case 0x35b718u: goto label_35b718;
        case 0x35b71cu: goto label_35b71c;
        case 0x35b720u: goto label_35b720;
        case 0x35b724u: goto label_35b724;
        case 0x35b728u: goto label_35b728;
        case 0x35b72cu: goto label_35b72c;
        case 0x35b730u: goto label_35b730;
        case 0x35b734u: goto label_35b734;
        case 0x35b738u: goto label_35b738;
        case 0x35b73cu: goto label_35b73c;
        case 0x35b740u: goto label_35b740;
        case 0x35b744u: goto label_35b744;
        case 0x35b748u: goto label_35b748;
        case 0x35b74cu: goto label_35b74c;
        case 0x35b750u: goto label_35b750;
        case 0x35b754u: goto label_35b754;
        case 0x35b758u: goto label_35b758;
        case 0x35b75cu: goto label_35b75c;
        case 0x35b760u: goto label_35b760;
        case 0x35b764u: goto label_35b764;
        case 0x35b768u: goto label_35b768;
        case 0x35b76cu: goto label_35b76c;
        case 0x35b770u: goto label_35b770;
        case 0x35b774u: goto label_35b774;
        case 0x35b778u: goto label_35b778;
        case 0x35b77cu: goto label_35b77c;
        case 0x35b780u: goto label_35b780;
        case 0x35b784u: goto label_35b784;
        case 0x35b788u: goto label_35b788;
        case 0x35b78cu: goto label_35b78c;
        case 0x35b790u: goto label_35b790;
        case 0x35b794u: goto label_35b794;
        case 0x35b798u: goto label_35b798;
        case 0x35b79cu: goto label_35b79c;
        case 0x35b7a0u: goto label_35b7a0;
        case 0x35b7a4u: goto label_35b7a4;
        case 0x35b7a8u: goto label_35b7a8;
        case 0x35b7acu: goto label_35b7ac;
        case 0x35b7b0u: goto label_35b7b0;
        case 0x35b7b4u: goto label_35b7b4;
        case 0x35b7b8u: goto label_35b7b8;
        case 0x35b7bcu: goto label_35b7bc;
        case 0x35b7c0u: goto label_35b7c0;
        case 0x35b7c4u: goto label_35b7c4;
        case 0x35b7c8u: goto label_35b7c8;
        case 0x35b7ccu: goto label_35b7cc;
        case 0x35b7d0u: goto label_35b7d0;
        case 0x35b7d4u: goto label_35b7d4;
        case 0x35b7d8u: goto label_35b7d8;
        case 0x35b7dcu: goto label_35b7dc;
        case 0x35b7e0u: goto label_35b7e0;
        case 0x35b7e4u: goto label_35b7e4;
        case 0x35b7e8u: goto label_35b7e8;
        case 0x35b7ecu: goto label_35b7ec;
        case 0x35b7f0u: goto label_35b7f0;
        case 0x35b7f4u: goto label_35b7f4;
        case 0x35b7f8u: goto label_35b7f8;
        case 0x35b7fcu: goto label_35b7fc;
        case 0x35b800u: goto label_35b800;
        case 0x35b804u: goto label_35b804;
        case 0x35b808u: goto label_35b808;
        case 0x35b80cu: goto label_35b80c;
        case 0x35b810u: goto label_35b810;
        case 0x35b814u: goto label_35b814;
        case 0x35b818u: goto label_35b818;
        case 0x35b81cu: goto label_35b81c;
        case 0x35b820u: goto label_35b820;
        case 0x35b824u: goto label_35b824;
        case 0x35b828u: goto label_35b828;
        case 0x35b82cu: goto label_35b82c;
        case 0x35b830u: goto label_35b830;
        case 0x35b834u: goto label_35b834;
        case 0x35b838u: goto label_35b838;
        case 0x35b83cu: goto label_35b83c;
        case 0x35b840u: goto label_35b840;
        case 0x35b844u: goto label_35b844;
        case 0x35b848u: goto label_35b848;
        case 0x35b84cu: goto label_35b84c;
        case 0x35b850u: goto label_35b850;
        case 0x35b854u: goto label_35b854;
        case 0x35b858u: goto label_35b858;
        case 0x35b85cu: goto label_35b85c;
        case 0x35b860u: goto label_35b860;
        case 0x35b864u: goto label_35b864;
        case 0x35b868u: goto label_35b868;
        case 0x35b86cu: goto label_35b86c;
        case 0x35b870u: goto label_35b870;
        case 0x35b874u: goto label_35b874;
        case 0x35b878u: goto label_35b878;
        case 0x35b87cu: goto label_35b87c;
        case 0x35b880u: goto label_35b880;
        case 0x35b884u: goto label_35b884;
        case 0x35b888u: goto label_35b888;
        case 0x35b88cu: goto label_35b88c;
        case 0x35b890u: goto label_35b890;
        case 0x35b894u: goto label_35b894;
        case 0x35b898u: goto label_35b898;
        case 0x35b89cu: goto label_35b89c;
        case 0x35b8a0u: goto label_35b8a0;
        case 0x35b8a4u: goto label_35b8a4;
        case 0x35b8a8u: goto label_35b8a8;
        case 0x35b8acu: goto label_35b8ac;
        case 0x35b8b0u: goto label_35b8b0;
        case 0x35b8b4u: goto label_35b8b4;
        case 0x35b8b8u: goto label_35b8b8;
        case 0x35b8bcu: goto label_35b8bc;
        case 0x35b8c0u: goto label_35b8c0;
        case 0x35b8c4u: goto label_35b8c4;
        case 0x35b8c8u: goto label_35b8c8;
        case 0x35b8ccu: goto label_35b8cc;
        case 0x35b8d0u: goto label_35b8d0;
        case 0x35b8d4u: goto label_35b8d4;
        case 0x35b8d8u: goto label_35b8d8;
        case 0x35b8dcu: goto label_35b8dc;
        case 0x35b8e0u: goto label_35b8e0;
        case 0x35b8e4u: goto label_35b8e4;
        case 0x35b8e8u: goto label_35b8e8;
        case 0x35b8ecu: goto label_35b8ec;
        case 0x35b8f0u: goto label_35b8f0;
        case 0x35b8f4u: goto label_35b8f4;
        case 0x35b8f8u: goto label_35b8f8;
        case 0x35b8fcu: goto label_35b8fc;
        case 0x35b900u: goto label_35b900;
        case 0x35b904u: goto label_35b904;
        case 0x35b908u: goto label_35b908;
        case 0x35b90cu: goto label_35b90c;
        case 0x35b910u: goto label_35b910;
        case 0x35b914u: goto label_35b914;
        case 0x35b918u: goto label_35b918;
        case 0x35b91cu: goto label_35b91c;
        case 0x35b920u: goto label_35b920;
        case 0x35b924u: goto label_35b924;
        case 0x35b928u: goto label_35b928;
        case 0x35b92cu: goto label_35b92c;
        case 0x35b930u: goto label_35b930;
        case 0x35b934u: goto label_35b934;
        case 0x35b938u: goto label_35b938;
        case 0x35b93cu: goto label_35b93c;
        case 0x35b940u: goto label_35b940;
        case 0x35b944u: goto label_35b944;
        case 0x35b948u: goto label_35b948;
        case 0x35b94cu: goto label_35b94c;
        case 0x35b950u: goto label_35b950;
        case 0x35b954u: goto label_35b954;
        case 0x35b958u: goto label_35b958;
        case 0x35b95cu: goto label_35b95c;
        case 0x35b960u: goto label_35b960;
        case 0x35b964u: goto label_35b964;
        case 0x35b968u: goto label_35b968;
        case 0x35b96cu: goto label_35b96c;
        case 0x35b970u: goto label_35b970;
        case 0x35b974u: goto label_35b974;
        case 0x35b978u: goto label_35b978;
        case 0x35b97cu: goto label_35b97c;
        case 0x35b980u: goto label_35b980;
        case 0x35b984u: goto label_35b984;
        case 0x35b988u: goto label_35b988;
        case 0x35b98cu: goto label_35b98c;
        case 0x35b990u: goto label_35b990;
        case 0x35b994u: goto label_35b994;
        case 0x35b998u: goto label_35b998;
        case 0x35b99cu: goto label_35b99c;
        case 0x35b9a0u: goto label_35b9a0;
        case 0x35b9a4u: goto label_35b9a4;
        case 0x35b9a8u: goto label_35b9a8;
        case 0x35b9acu: goto label_35b9ac;
        case 0x35b9b0u: goto label_35b9b0;
        case 0x35b9b4u: goto label_35b9b4;
        case 0x35b9b8u: goto label_35b9b8;
        case 0x35b9bcu: goto label_35b9bc;
        case 0x35b9c0u: goto label_35b9c0;
        case 0x35b9c4u: goto label_35b9c4;
        case 0x35b9c8u: goto label_35b9c8;
        case 0x35b9ccu: goto label_35b9cc;
        case 0x35b9d0u: goto label_35b9d0;
        case 0x35b9d4u: goto label_35b9d4;
        case 0x35b9d8u: goto label_35b9d8;
        case 0x35b9dcu: goto label_35b9dc;
        case 0x35b9e0u: goto label_35b9e0;
        case 0x35b9e4u: goto label_35b9e4;
        case 0x35b9e8u: goto label_35b9e8;
        case 0x35b9ecu: goto label_35b9ec;
        case 0x35b9f0u: goto label_35b9f0;
        case 0x35b9f4u: goto label_35b9f4;
        case 0x35b9f8u: goto label_35b9f8;
        case 0x35b9fcu: goto label_35b9fc;
        case 0x35ba00u: goto label_35ba00;
        case 0x35ba04u: goto label_35ba04;
        case 0x35ba08u: goto label_35ba08;
        case 0x35ba0cu: goto label_35ba0c;
        case 0x35ba10u: goto label_35ba10;
        case 0x35ba14u: goto label_35ba14;
        case 0x35ba18u: goto label_35ba18;
        case 0x35ba1cu: goto label_35ba1c;
        case 0x35ba20u: goto label_35ba20;
        case 0x35ba24u: goto label_35ba24;
        case 0x35ba28u: goto label_35ba28;
        case 0x35ba2cu: goto label_35ba2c;
        case 0x35ba30u: goto label_35ba30;
        case 0x35ba34u: goto label_35ba34;
        case 0x35ba38u: goto label_35ba38;
        case 0x35ba3cu: goto label_35ba3c;
        case 0x35ba40u: goto label_35ba40;
        case 0x35ba44u: goto label_35ba44;
        case 0x35ba48u: goto label_35ba48;
        case 0x35ba4cu: goto label_35ba4c;
        case 0x35ba50u: goto label_35ba50;
        case 0x35ba54u: goto label_35ba54;
        case 0x35ba58u: goto label_35ba58;
        case 0x35ba5cu: goto label_35ba5c;
        case 0x35ba60u: goto label_35ba60;
        case 0x35ba64u: goto label_35ba64;
        case 0x35ba68u: goto label_35ba68;
        case 0x35ba6cu: goto label_35ba6c;
        case 0x35ba70u: goto label_35ba70;
        case 0x35ba74u: goto label_35ba74;
        case 0x35ba78u: goto label_35ba78;
        case 0x35ba7cu: goto label_35ba7c;
        case 0x35ba80u: goto label_35ba80;
        case 0x35ba84u: goto label_35ba84;
        case 0x35ba88u: goto label_35ba88;
        case 0x35ba8cu: goto label_35ba8c;
        case 0x35ba90u: goto label_35ba90;
        case 0x35ba94u: goto label_35ba94;
        case 0x35ba98u: goto label_35ba98;
        case 0x35ba9cu: goto label_35ba9c;
        case 0x35baa0u: goto label_35baa0;
        case 0x35baa4u: goto label_35baa4;
        case 0x35baa8u: goto label_35baa8;
        case 0x35baacu: goto label_35baac;
        case 0x35bab0u: goto label_35bab0;
        case 0x35bab4u: goto label_35bab4;
        case 0x35bab8u: goto label_35bab8;
        case 0x35babcu: goto label_35babc;
        case 0x35bac0u: goto label_35bac0;
        case 0x35bac4u: goto label_35bac4;
        case 0x35bac8u: goto label_35bac8;
        case 0x35baccu: goto label_35bacc;
        case 0x35bad0u: goto label_35bad0;
        case 0x35bad4u: goto label_35bad4;
        case 0x35bad8u: goto label_35bad8;
        case 0x35badcu: goto label_35badc;
        case 0x35bae0u: goto label_35bae0;
        case 0x35bae4u: goto label_35bae4;
        case 0x35bae8u: goto label_35bae8;
        case 0x35baecu: goto label_35baec;
        case 0x35baf0u: goto label_35baf0;
        case 0x35baf4u: goto label_35baf4;
        case 0x35baf8u: goto label_35baf8;
        case 0x35bafcu: goto label_35bafc;
        case 0x35bb00u: goto label_35bb00;
        case 0x35bb04u: goto label_35bb04;
        case 0x35bb08u: goto label_35bb08;
        case 0x35bb0cu: goto label_35bb0c;
        case 0x35bb10u: goto label_35bb10;
        case 0x35bb14u: goto label_35bb14;
        case 0x35bb18u: goto label_35bb18;
        case 0x35bb1cu: goto label_35bb1c;
        case 0x35bb20u: goto label_35bb20;
        case 0x35bb24u: goto label_35bb24;
        case 0x35bb28u: goto label_35bb28;
        case 0x35bb2cu: goto label_35bb2c;
        case 0x35bb30u: goto label_35bb30;
        case 0x35bb34u: goto label_35bb34;
        case 0x35bb38u: goto label_35bb38;
        case 0x35bb3cu: goto label_35bb3c;
        case 0x35bb40u: goto label_35bb40;
        case 0x35bb44u: goto label_35bb44;
        case 0x35bb48u: goto label_35bb48;
        case 0x35bb4cu: goto label_35bb4c;
        case 0x35bb50u: goto label_35bb50;
        case 0x35bb54u: goto label_35bb54;
        case 0x35bb58u: goto label_35bb58;
        case 0x35bb5cu: goto label_35bb5c;
        case 0x35bb60u: goto label_35bb60;
        case 0x35bb64u: goto label_35bb64;
        case 0x35bb68u: goto label_35bb68;
        case 0x35bb6cu: goto label_35bb6c;
        case 0x35bb70u: goto label_35bb70;
        case 0x35bb74u: goto label_35bb74;
        case 0x35bb78u: goto label_35bb78;
        case 0x35bb7cu: goto label_35bb7c;
        case 0x35bb80u: goto label_35bb80;
        case 0x35bb84u: goto label_35bb84;
        case 0x35bb88u: goto label_35bb88;
        case 0x35bb8cu: goto label_35bb8c;
        case 0x35bb90u: goto label_35bb90;
        case 0x35bb94u: goto label_35bb94;
        case 0x35bb98u: goto label_35bb98;
        case 0x35bb9cu: goto label_35bb9c;
        case 0x35bba0u: goto label_35bba0;
        case 0x35bba4u: goto label_35bba4;
        case 0x35bba8u: goto label_35bba8;
        case 0x35bbacu: goto label_35bbac;
        case 0x35bbb0u: goto label_35bbb0;
        case 0x35bbb4u: goto label_35bbb4;
        case 0x35bbb8u: goto label_35bbb8;
        case 0x35bbbcu: goto label_35bbbc;
        case 0x35bbc0u: goto label_35bbc0;
        case 0x35bbc4u: goto label_35bbc4;
        case 0x35bbc8u: goto label_35bbc8;
        case 0x35bbccu: goto label_35bbcc;
        case 0x35bbd0u: goto label_35bbd0;
        case 0x35bbd4u: goto label_35bbd4;
        case 0x35bbd8u: goto label_35bbd8;
        case 0x35bbdcu: goto label_35bbdc;
        case 0x35bbe0u: goto label_35bbe0;
        case 0x35bbe4u: goto label_35bbe4;
        case 0x35bbe8u: goto label_35bbe8;
        case 0x35bbecu: goto label_35bbec;
        case 0x35bbf0u: goto label_35bbf0;
        case 0x35bbf4u: goto label_35bbf4;
        case 0x35bbf8u: goto label_35bbf8;
        case 0x35bbfcu: goto label_35bbfc;
        case 0x35bc00u: goto label_35bc00;
        case 0x35bc04u: goto label_35bc04;
        case 0x35bc08u: goto label_35bc08;
        case 0x35bc0cu: goto label_35bc0c;
        case 0x35bc10u: goto label_35bc10;
        case 0x35bc14u: goto label_35bc14;
        case 0x35bc18u: goto label_35bc18;
        case 0x35bc1cu: goto label_35bc1c;
        case 0x35bc20u: goto label_35bc20;
        case 0x35bc24u: goto label_35bc24;
        case 0x35bc28u: goto label_35bc28;
        case 0x35bc2cu: goto label_35bc2c;
        case 0x35bc30u: goto label_35bc30;
        case 0x35bc34u: goto label_35bc34;
        case 0x35bc38u: goto label_35bc38;
        case 0x35bc3cu: goto label_35bc3c;
        case 0x35bc40u: goto label_35bc40;
        case 0x35bc44u: goto label_35bc44;
        case 0x35bc48u: goto label_35bc48;
        case 0x35bc4cu: goto label_35bc4c;
        case 0x35bc50u: goto label_35bc50;
        case 0x35bc54u: goto label_35bc54;
        case 0x35bc58u: goto label_35bc58;
        case 0x35bc5cu: goto label_35bc5c;
        case 0x35bc60u: goto label_35bc60;
        case 0x35bc64u: goto label_35bc64;
        case 0x35bc68u: goto label_35bc68;
        case 0x35bc6cu: goto label_35bc6c;
        case 0x35bc70u: goto label_35bc70;
        case 0x35bc74u: goto label_35bc74;
        case 0x35bc78u: goto label_35bc78;
        case 0x35bc7cu: goto label_35bc7c;
        case 0x35bc80u: goto label_35bc80;
        case 0x35bc84u: goto label_35bc84;
        case 0x35bc88u: goto label_35bc88;
        case 0x35bc8cu: goto label_35bc8c;
        case 0x35bc90u: goto label_35bc90;
        case 0x35bc94u: goto label_35bc94;
        case 0x35bc98u: goto label_35bc98;
        case 0x35bc9cu: goto label_35bc9c;
        case 0x35bca0u: goto label_35bca0;
        case 0x35bca4u: goto label_35bca4;
        case 0x35bca8u: goto label_35bca8;
        case 0x35bcacu: goto label_35bcac;
        case 0x35bcb0u: goto label_35bcb0;
        case 0x35bcb4u: goto label_35bcb4;
        case 0x35bcb8u: goto label_35bcb8;
        case 0x35bcbcu: goto label_35bcbc;
        case 0x35bcc0u: goto label_35bcc0;
        case 0x35bcc4u: goto label_35bcc4;
        case 0x35bcc8u: goto label_35bcc8;
        case 0x35bcccu: goto label_35bccc;
        case 0x35bcd0u: goto label_35bcd0;
        case 0x35bcd4u: goto label_35bcd4;
        case 0x35bcd8u: goto label_35bcd8;
        case 0x35bcdcu: goto label_35bcdc;
        case 0x35bce0u: goto label_35bce0;
        case 0x35bce4u: goto label_35bce4;
        case 0x35bce8u: goto label_35bce8;
        case 0x35bcecu: goto label_35bcec;
        case 0x35bcf0u: goto label_35bcf0;
        case 0x35bcf4u: goto label_35bcf4;
        case 0x35bcf8u: goto label_35bcf8;
        case 0x35bcfcu: goto label_35bcfc;
        case 0x35bd00u: goto label_35bd00;
        case 0x35bd04u: goto label_35bd04;
        case 0x35bd08u: goto label_35bd08;
        case 0x35bd0cu: goto label_35bd0c;
        case 0x35bd10u: goto label_35bd10;
        case 0x35bd14u: goto label_35bd14;
        case 0x35bd18u: goto label_35bd18;
        case 0x35bd1cu: goto label_35bd1c;
        case 0x35bd20u: goto label_35bd20;
        case 0x35bd24u: goto label_35bd24;
        case 0x35bd28u: goto label_35bd28;
        case 0x35bd2cu: goto label_35bd2c;
        case 0x35bd30u: goto label_35bd30;
        case 0x35bd34u: goto label_35bd34;
        case 0x35bd38u: goto label_35bd38;
        case 0x35bd3cu: goto label_35bd3c;
        case 0x35bd40u: goto label_35bd40;
        case 0x35bd44u: goto label_35bd44;
        case 0x35bd48u: goto label_35bd48;
        case 0x35bd4cu: goto label_35bd4c;
        case 0x35bd50u: goto label_35bd50;
        case 0x35bd54u: goto label_35bd54;
        case 0x35bd58u: goto label_35bd58;
        case 0x35bd5cu: goto label_35bd5c;
        case 0x35bd60u: goto label_35bd60;
        case 0x35bd64u: goto label_35bd64;
        case 0x35bd68u: goto label_35bd68;
        case 0x35bd6cu: goto label_35bd6c;
        case 0x35bd70u: goto label_35bd70;
        case 0x35bd74u: goto label_35bd74;
        case 0x35bd78u: goto label_35bd78;
        case 0x35bd7cu: goto label_35bd7c;
        case 0x35bd80u: goto label_35bd80;
        case 0x35bd84u: goto label_35bd84;
        case 0x35bd88u: goto label_35bd88;
        case 0x35bd8cu: goto label_35bd8c;
        case 0x35bd90u: goto label_35bd90;
        case 0x35bd94u: goto label_35bd94;
        case 0x35bd98u: goto label_35bd98;
        case 0x35bd9cu: goto label_35bd9c;
        case 0x35bda0u: goto label_35bda0;
        case 0x35bda4u: goto label_35bda4;
        case 0x35bda8u: goto label_35bda8;
        case 0x35bdacu: goto label_35bdac;
        case 0x35bdb0u: goto label_35bdb0;
        case 0x35bdb4u: goto label_35bdb4;
        case 0x35bdb8u: goto label_35bdb8;
        case 0x35bdbcu: goto label_35bdbc;
        case 0x35bdc0u: goto label_35bdc0;
        case 0x35bdc4u: goto label_35bdc4;
        case 0x35bdc8u: goto label_35bdc8;
        case 0x35bdccu: goto label_35bdcc;
        case 0x35bdd0u: goto label_35bdd0;
        case 0x35bdd4u: goto label_35bdd4;
        case 0x35bdd8u: goto label_35bdd8;
        case 0x35bddcu: goto label_35bddc;
        case 0x35bde0u: goto label_35bde0;
        case 0x35bde4u: goto label_35bde4;
        case 0x35bde8u: goto label_35bde8;
        case 0x35bdecu: goto label_35bdec;
        case 0x35bdf0u: goto label_35bdf0;
        case 0x35bdf4u: goto label_35bdf4;
        case 0x35bdf8u: goto label_35bdf8;
        case 0x35bdfcu: goto label_35bdfc;
        case 0x35be00u: goto label_35be00;
        case 0x35be04u: goto label_35be04;
        case 0x35be08u: goto label_35be08;
        case 0x35be0cu: goto label_35be0c;
        case 0x35be10u: goto label_35be10;
        case 0x35be14u: goto label_35be14;
        case 0x35be18u: goto label_35be18;
        case 0x35be1cu: goto label_35be1c;
        case 0x35be20u: goto label_35be20;
        case 0x35be24u: goto label_35be24;
        case 0x35be28u: goto label_35be28;
        case 0x35be2cu: goto label_35be2c;
        case 0x35be30u: goto label_35be30;
        case 0x35be34u: goto label_35be34;
        case 0x35be38u: goto label_35be38;
        case 0x35be3cu: goto label_35be3c;
        case 0x35be40u: goto label_35be40;
        case 0x35be44u: goto label_35be44;
        case 0x35be48u: goto label_35be48;
        case 0x35be4cu: goto label_35be4c;
        case 0x35be50u: goto label_35be50;
        case 0x35be54u: goto label_35be54;
        case 0x35be58u: goto label_35be58;
        case 0x35be5cu: goto label_35be5c;
        case 0x35be60u: goto label_35be60;
        case 0x35be64u: goto label_35be64;
        case 0x35be68u: goto label_35be68;
        case 0x35be6cu: goto label_35be6c;
        case 0x35be70u: goto label_35be70;
        case 0x35be74u: goto label_35be74;
        case 0x35be78u: goto label_35be78;
        case 0x35be7cu: goto label_35be7c;
        case 0x35be80u: goto label_35be80;
        case 0x35be84u: goto label_35be84;
        case 0x35be88u: goto label_35be88;
        case 0x35be8cu: goto label_35be8c;
        case 0x35be90u: goto label_35be90;
        case 0x35be94u: goto label_35be94;
        case 0x35be98u: goto label_35be98;
        case 0x35be9cu: goto label_35be9c;
        case 0x35bea0u: goto label_35bea0;
        case 0x35bea4u: goto label_35bea4;
        case 0x35bea8u: goto label_35bea8;
        case 0x35beacu: goto label_35beac;
        case 0x35beb0u: goto label_35beb0;
        case 0x35beb4u: goto label_35beb4;
        case 0x35beb8u: goto label_35beb8;
        case 0x35bebcu: goto label_35bebc;
        case 0x35bec0u: goto label_35bec0;
        case 0x35bec4u: goto label_35bec4;
        case 0x35bec8u: goto label_35bec8;
        case 0x35beccu: goto label_35becc;
        case 0x35bed0u: goto label_35bed0;
        case 0x35bed4u: goto label_35bed4;
        case 0x35bed8u: goto label_35bed8;
        case 0x35bedcu: goto label_35bedc;
        case 0x35bee0u: goto label_35bee0;
        case 0x35bee4u: goto label_35bee4;
        case 0x35bee8u: goto label_35bee8;
        case 0x35beecu: goto label_35beec;
        case 0x35bef0u: goto label_35bef0;
        case 0x35bef4u: goto label_35bef4;
        case 0x35bef8u: goto label_35bef8;
        case 0x35befcu: goto label_35befc;
        case 0x35bf00u: goto label_35bf00;
        case 0x35bf04u: goto label_35bf04;
        case 0x35bf08u: goto label_35bf08;
        case 0x35bf0cu: goto label_35bf0c;
        case 0x35bf10u: goto label_35bf10;
        case 0x35bf14u: goto label_35bf14;
        case 0x35bf18u: goto label_35bf18;
        case 0x35bf1cu: goto label_35bf1c;
        case 0x35bf20u: goto label_35bf20;
        case 0x35bf24u: goto label_35bf24;
        case 0x35bf28u: goto label_35bf28;
        case 0x35bf2cu: goto label_35bf2c;
        case 0x35bf30u: goto label_35bf30;
        case 0x35bf34u: goto label_35bf34;
        case 0x35bf38u: goto label_35bf38;
        case 0x35bf3cu: goto label_35bf3c;
        case 0x35bf40u: goto label_35bf40;
        case 0x35bf44u: goto label_35bf44;
        case 0x35bf48u: goto label_35bf48;
        case 0x35bf4cu: goto label_35bf4c;
        case 0x35bf50u: goto label_35bf50;
        case 0x35bf54u: goto label_35bf54;
        case 0x35bf58u: goto label_35bf58;
        case 0x35bf5cu: goto label_35bf5c;
        case 0x35bf60u: goto label_35bf60;
        case 0x35bf64u: goto label_35bf64;
        case 0x35bf68u: goto label_35bf68;
        case 0x35bf6cu: goto label_35bf6c;
        case 0x35bf70u: goto label_35bf70;
        case 0x35bf74u: goto label_35bf74;
        case 0x35bf78u: goto label_35bf78;
        case 0x35bf7cu: goto label_35bf7c;
        case 0x35bf80u: goto label_35bf80;
        case 0x35bf84u: goto label_35bf84;
        case 0x35bf88u: goto label_35bf88;
        case 0x35bf8cu: goto label_35bf8c;
        case 0x35bf90u: goto label_35bf90;
        case 0x35bf94u: goto label_35bf94;
        case 0x35bf98u: goto label_35bf98;
        case 0x35bf9cu: goto label_35bf9c;
        case 0x35bfa0u: goto label_35bfa0;
        case 0x35bfa4u: goto label_35bfa4;
        case 0x35bfa8u: goto label_35bfa8;
        case 0x35bfacu: goto label_35bfac;
        case 0x35bfb0u: goto label_35bfb0;
        case 0x35bfb4u: goto label_35bfb4;
        case 0x35bfb8u: goto label_35bfb8;
        case 0x35bfbcu: goto label_35bfbc;
        case 0x35bfc0u: goto label_35bfc0;
        case 0x35bfc4u: goto label_35bfc4;
        case 0x35bfc8u: goto label_35bfc8;
        case 0x35bfccu: goto label_35bfcc;
        case 0x35bfd0u: goto label_35bfd0;
        case 0x35bfd4u: goto label_35bfd4;
        case 0x35bfd8u: goto label_35bfd8;
        case 0x35bfdcu: goto label_35bfdc;
        case 0x35bfe0u: goto label_35bfe0;
        case 0x35bfe4u: goto label_35bfe4;
        case 0x35bfe8u: goto label_35bfe8;
        case 0x35bfecu: goto label_35bfec;
        case 0x35bff0u: goto label_35bff0;
        case 0x35bff4u: goto label_35bff4;
        case 0x35bff8u: goto label_35bff8;
        case 0x35bffcu: goto label_35bffc;
        case 0x35c000u: goto label_35c000;
        case 0x35c004u: goto label_35c004;
        case 0x35c008u: goto label_35c008;
        case 0x35c00cu: goto label_35c00c;
        case 0x35c010u: goto label_35c010;
        case 0x35c014u: goto label_35c014;
        case 0x35c018u: goto label_35c018;
        case 0x35c01cu: goto label_35c01c;
        case 0x35c020u: goto label_35c020;
        case 0x35c024u: goto label_35c024;
        case 0x35c028u: goto label_35c028;
        case 0x35c02cu: goto label_35c02c;
        case 0x35c030u: goto label_35c030;
        case 0x35c034u: goto label_35c034;
        case 0x35c038u: goto label_35c038;
        case 0x35c03cu: goto label_35c03c;
        case 0x35c040u: goto label_35c040;
        case 0x35c044u: goto label_35c044;
        case 0x35c048u: goto label_35c048;
        case 0x35c04cu: goto label_35c04c;
        case 0x35c050u: goto label_35c050;
        case 0x35c054u: goto label_35c054;
        case 0x35c058u: goto label_35c058;
        case 0x35c05cu: goto label_35c05c;
        case 0x35c060u: goto label_35c060;
        case 0x35c064u: goto label_35c064;
        case 0x35c068u: goto label_35c068;
        case 0x35c06cu: goto label_35c06c;
        case 0x35c070u: goto label_35c070;
        case 0x35c074u: goto label_35c074;
        case 0x35c078u: goto label_35c078;
        case 0x35c07cu: goto label_35c07c;
        case 0x35c080u: goto label_35c080;
        case 0x35c084u: goto label_35c084;
        case 0x35c088u: goto label_35c088;
        case 0x35c08cu: goto label_35c08c;
        case 0x35c090u: goto label_35c090;
        case 0x35c094u: goto label_35c094;
        case 0x35c098u: goto label_35c098;
        case 0x35c09cu: goto label_35c09c;
        case 0x35c0a0u: goto label_35c0a0;
        case 0x35c0a4u: goto label_35c0a4;
        case 0x35c0a8u: goto label_35c0a8;
        case 0x35c0acu: goto label_35c0ac;
        case 0x35c0b0u: goto label_35c0b0;
        case 0x35c0b4u: goto label_35c0b4;
        case 0x35c0b8u: goto label_35c0b8;
        case 0x35c0bcu: goto label_35c0bc;
        case 0x35c0c0u: goto label_35c0c0;
        case 0x35c0c4u: goto label_35c0c4;
        case 0x35c0c8u: goto label_35c0c8;
        case 0x35c0ccu: goto label_35c0cc;
        case 0x35c0d0u: goto label_35c0d0;
        case 0x35c0d4u: goto label_35c0d4;
        case 0x35c0d8u: goto label_35c0d8;
        case 0x35c0dcu: goto label_35c0dc;
        case 0x35c0e0u: goto label_35c0e0;
        case 0x35c0e4u: goto label_35c0e4;
        case 0x35c0e8u: goto label_35c0e8;
        default: break;
    }

    ctx->pc = 0x357f90u;

label_357f90:
    // 0x357f90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x357f90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_357f94:
    // 0x357f94: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357f94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_357f98:
    // 0x357f98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x357f98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_357f9c:
    // 0x357f9c: 0x9463ec44  lhu         $v1, -0x13BC($v1)
    ctx->pc = 0x357f9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962244)));
label_357fa0:
    // 0x357fa0: 0x28630005  slti        $v1, $v1, 0x5
    ctx->pc = 0x357fa0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
label_357fa4:
    // 0x357fa4: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_357fa8:
    if (ctx->pc == 0x357FA8u) {
        ctx->pc = 0x357FACu;
        goto label_357fac;
    }
    ctx->pc = 0x357FA4u;
    {
        const bool branch_taken_0x357fa4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x357fa4) {
            ctx->pc = 0x357FB4u;
            goto label_357fb4;
        }
    }
    ctx->pc = 0x357FACu;
label_357fac:
    // 0x357fac: 0xc0d5fb0  jal         func_357EC0
label_357fb0:
    if (ctx->pc == 0x357FB0u) {
        ctx->pc = 0x357FB0u;
            // 0x357fb0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x357FB4u;
        goto label_357fb4;
    }
    ctx->pc = 0x357FACu;
    SET_GPR_U32(ctx, 31, 0x357FB4u);
    ctx->pc = 0x357FB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357FACu;
            // 0x357fb0: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (runtime->hasFunction(0x357EC0u)) {
        auto targetFn = runtime->lookupFunction(0x357EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FB4u; }
        if (ctx->pc != 0x357FB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357EC0_0x357ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FB4u; }
        if (ctx->pc != 0x357FB4u) { return; }
    }
    ctx->pc = 0x357FB4u;
label_357fb4:
    // 0x357fb4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_357fb8:
    // 0x357fb8: 0x9463ec44  lhu         $v1, -0x13BC($v1)
    ctx->pc = 0x357fb8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962244)));
label_357fbc:
    // 0x357fbc: 0x2863000a  slti        $v1, $v1, 0xA
    ctx->pc = 0x357fbcu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)10) ? 1 : 0);
label_357fc0:
    // 0x357fc0: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_357fc4:
    if (ctx->pc == 0x357FC4u) {
        ctx->pc = 0x357FC8u;
        goto label_357fc8;
    }
    ctx->pc = 0x357FC0u;
    {
        const bool branch_taken_0x357fc0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x357fc0) {
            ctx->pc = 0x357FD0u;
            goto label_357fd0;
        }
    }
    ctx->pc = 0x357FC8u;
label_357fc8:
    // 0x357fc8: 0xc0d5fb0  jal         func_357EC0
label_357fcc:
    if (ctx->pc == 0x357FCCu) {
        ctx->pc = 0x357FCCu;
            // 0x357fcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x357FD0u;
        goto label_357fd0;
    }
    ctx->pc = 0x357FC8u;
    SET_GPR_U32(ctx, 31, 0x357FD0u);
    ctx->pc = 0x357FCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357FC8u;
            // 0x357fcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (runtime->hasFunction(0x357EC0u)) {
        auto targetFn = runtime->lookupFunction(0x357EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FD0u; }
        if (ctx->pc != 0x357FD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357EC0_0x357ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FD0u; }
        if (ctx->pc != 0x357FD0u) { return; }
    }
    ctx->pc = 0x357FD0u;
label_357fd0:
    // 0x357fd0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_357fd4:
    // 0x357fd4: 0x9463ec44  lhu         $v1, -0x13BC($v1)
    ctx->pc = 0x357fd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962244)));
label_357fd8:
    // 0x357fd8: 0x2863000f  slti        $v1, $v1, 0xF
    ctx->pc = 0x357fd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)15) ? 1 : 0);
label_357fdc:
    // 0x357fdc: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_357fe0:
    if (ctx->pc == 0x357FE0u) {
        ctx->pc = 0x357FE4u;
        goto label_357fe4;
    }
    ctx->pc = 0x357FDCu;
    {
        const bool branch_taken_0x357fdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x357fdc) {
            ctx->pc = 0x357FECu;
            goto label_357fec;
        }
    }
    ctx->pc = 0x357FE4u;
label_357fe4:
    // 0x357fe4: 0xc0d5fb0  jal         func_357EC0
label_357fe8:
    if (ctx->pc == 0x357FE8u) {
        ctx->pc = 0x357FE8u;
            // 0x357fe8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x357FECu;
        goto label_357fec;
    }
    ctx->pc = 0x357FE4u;
    SET_GPR_U32(ctx, 31, 0x357FECu);
    ctx->pc = 0x357FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x357FE4u;
            // 0x357fe8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (runtime->hasFunction(0x357EC0u)) {
        auto targetFn = runtime->lookupFunction(0x357EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FECu; }
        if (ctx->pc != 0x357FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357EC0_0x357ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x357FECu; }
        if (ctx->pc != 0x357FECu) { return; }
    }
    ctx->pc = 0x357FECu;
label_357fec:
    // 0x357fec: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x357fecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_357ff0:
    // 0x357ff0: 0x9463ec44  lhu         $v1, -0x13BC($v1)
    ctx->pc = 0x357ff0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962244)));
label_357ff4:
    // 0x357ff4: 0x28630014  slti        $v1, $v1, 0x14
    ctx->pc = 0x357ff4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)20) ? 1 : 0);
label_357ff8:
    // 0x357ff8: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_357ffc:
    if (ctx->pc == 0x357FFCu) {
        ctx->pc = 0x358000u;
        goto label_358000;
    }
    ctx->pc = 0x357FF8u;
    {
        const bool branch_taken_0x357ff8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x357ff8) {
            ctx->pc = 0x358008u;
            goto label_358008;
        }
    }
    ctx->pc = 0x358000u;
label_358000:
    // 0x358000: 0xc0d5fb0  jal         func_357EC0
label_358004:
    if (ctx->pc == 0x358004u) {
        ctx->pc = 0x358004u;
            // 0x358004: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->pc = 0x358008u;
        goto label_358008;
    }
    ctx->pc = 0x358000u;
    SET_GPR_U32(ctx, 31, 0x358008u);
    ctx->pc = 0x358004u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358000u;
            // 0x358004: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (runtime->hasFunction(0x357EC0u)) {
        auto targetFn = runtime->lookupFunction(0x357EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358008u; }
        if (ctx->pc != 0x358008u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357EC0_0x357ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358008u; }
        if (ctx->pc != 0x358008u) { return; }
    }
    ctx->pc = 0x358008u;
label_358008:
    // 0x358008: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x358008u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_35800c:
    // 0x35800c: 0x9463ec44  lhu         $v1, -0x13BC($v1)
    ctx->pc = 0x35800cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294962244)));
label_358010:
    // 0x358010: 0x28630019  slti        $v1, $v1, 0x19
    ctx->pc = 0x358010u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)25) ? 1 : 0);
label_358014:
    // 0x358014: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_358018:
    if (ctx->pc == 0x358018u) {
        ctx->pc = 0x358018u;
            // 0x358018: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x35801Cu;
        goto label_35801c;
    }
    ctx->pc = 0x358014u;
    {
        const bool branch_taken_0x358014 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358014) {
            ctx->pc = 0x358018u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358014u;
            // 0x358018: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358028u;
            goto label_358028;
        }
    }
    ctx->pc = 0x35801Cu;
label_35801c:
    // 0x35801c: 0xc0d5fb0  jal         func_357EC0
label_358020:
    if (ctx->pc == 0x358020u) {
        ctx->pc = 0x358020u;
            // 0x358020: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x358024u;
        goto label_358024;
    }
    ctx->pc = 0x35801Cu;
    SET_GPR_U32(ctx, 31, 0x358024u);
    ctx->pc = 0x358020u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35801Cu;
            // 0x358020: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x357EC0u;
    if (runtime->hasFunction(0x357EC0u)) {
        auto targetFn = runtime->lookupFunction(0x357EC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358024u; }
        if (ctx->pc != 0x358024u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00357EC0_0x357ec0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358024u; }
        if (ctx->pc != 0x358024u) { return; }
    }
    ctx->pc = 0x358024u;
label_358024:
    // 0x358024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x358024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_358028:
    // 0x358028: 0x3e00008  jr          $ra
label_35802c:
    if (ctx->pc == 0x35802Cu) {
        ctx->pc = 0x35802Cu;
            // 0x35802c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x358030u;
        goto label_358030;
    }
    ctx->pc = 0x358028u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35802Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358028u;
            // 0x35802c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358030u;
label_358030:
    // 0x358030: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x358030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_358034:
    // 0x358034: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x358034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_358038:
    // 0x358038: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x358038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35803c:
    // 0x35803c: 0xc055684  jal         func_155A10
label_358040:
    if (ctx->pc == 0x358040u) {
        ctx->pc = 0x358040u;
            // 0x358040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358044u;
        goto label_358044;
    }
    ctx->pc = 0x35803Cu;
    SET_GPR_U32(ctx, 31, 0x358044u);
    ctx->pc = 0x358040u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35803Cu;
            // 0x358040: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358044u; }
        if (ctx->pc != 0x358044u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358044u; }
        if (ctx->pc != 0x358044u) { return; }
    }
    ctx->pc = 0x358044u;
label_358044:
    // 0x358044: 0xc0692e0  jal         func_1A4B80
label_358048:
    if (ctx->pc == 0x358048u) {
        ctx->pc = 0x358048u;
            // 0x358048: 0x3c040014  lui         $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
        ctx->pc = 0x35804Cu;
        goto label_35804c;
    }
    ctx->pc = 0x358044u;
    SET_GPR_U32(ctx, 31, 0x35804Cu);
    ctx->pc = 0x358048u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358044u;
            // 0x358048: 0x3c040014  lui         $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (runtime->hasFunction(0x1A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35804Cu; }
        if (ctx->pc != 0x35804Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B80_0x1a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35804Cu; }
        if (ctx->pc != 0x35804Cu) { return; }
    }
    ctx->pc = 0x35804Cu;
label_35804c:
    // 0x35804c: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x35804cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
label_358050:
    // 0x358050: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x358050u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358054:
    // 0x358054: 0xac621db8  sw          $v0, 0x1DB8($v1)
    ctx->pc = 0x358054u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7608), GPR_U32(ctx, 2));
label_358058:
    // 0x358058: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x358058u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_35805c:
    // 0x35805c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x35805cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358060:
    // 0x358060: 0x94449718  lhu         $a0, -0x68E8($v0)
    ctx->pc = 0x358060u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294940440)));
label_358064:
    // 0x358064: 0x30e6ffff  andi        $a2, $a3, 0xFFFF
    ctx->pc = 0x358064u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_358068:
    // 0x358068: 0xc32804  sllv        $a1, $v1, $a2
    ctx->pc = 0x358068u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 6) & 0x1F));
label_35806c:
    // 0x35806c: 0x851024  and         $v0, $a0, $a1
    ctx->pc = 0x35806cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_358070:
    // 0x358070: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x358070u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_358074:
    // 0x358074: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x358074u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_358078:
    // 0x358078: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_35807c:
    if (ctx->pc == 0x35807Cu) {
        ctx->pc = 0x35807Cu;
            // 0x35807c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x358080u;
        goto label_358080;
    }
    ctx->pc = 0x358078u;
    {
        const bool branch_taken_0x358078 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x358078) {
            ctx->pc = 0x35807Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358078u;
            // 0x35807c: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3580C0u;
            goto label_3580c0;
        }
    }
    ctx->pc = 0x358080u;
label_358080:
    // 0x358080: 0x38a3ffff  xori        $v1, $a1, 0xFFFF
    ctx->pc = 0x358080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) ^ (uint64_t)(uint16_t)65535);
label_358084:
    // 0x358084: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x358084u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_358088:
    // 0x358088: 0x3064ffff  andi        $a0, $v1, 0xFFFF
    ctx->pc = 0x358088u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_35808c:
    // 0x35808c: 0x28c1000e  slti        $at, $a2, 0xE
    ctx->pc = 0x35808cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)14) ? 1 : 0);
label_358090:
    // 0x358090: 0x94439718  lhu         $v1, -0x68E8($v0)
    ctx->pc = 0x358090u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294940440)));
label_358094:
    // 0x358094: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x358094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_358098:
    // 0x358098: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x358098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_35809c:
    // 0x35809c: 0x1020000c  beqz        $at, . + 4 + (0xC << 2)
label_3580a0:
    if (ctx->pc == 0x3580A0u) {
        ctx->pc = 0x3580A0u;
            // 0x3580a0: 0xa4439718  sh          $v1, -0x68E8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294940440), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3580A4u;
        goto label_3580a4;
    }
    ctx->pc = 0x35809Cu;
    {
        const bool branch_taken_0x35809c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3580A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35809Cu;
            // 0x3580a0: 0xa4439718  sh          $v1, -0x68E8($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294940440), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35809c) {
            ctx->pc = 0x3580D0u;
            goto label_3580d0;
        }
    }
    ctx->pc = 0x3580A4u;
label_3580a4:
    // 0x3580a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3580a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_3580a8:
    // 0x3580a8: 0x30a4ffff  andi        $a0, $a1, 0xFFFF
    ctx->pc = 0x3580a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_3580ac:
    // 0x3580ac: 0x9443ec80  lhu         $v1, -0x1380($v0)
    ctx->pc = 0x3580acu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962304)));
label_3580b0:
    // 0x3580b0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3580b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_3580b4:
    // 0x3580b4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3580b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_3580b8:
    // 0x3580b8: 0x10000005  b           . + 4 + (0x5 << 2)
label_3580bc:
    if (ctx->pc == 0x3580BCu) {
        ctx->pc = 0x3580BCu;
            // 0x3580bc: 0xa443ec80  sh          $v1, -0x1380($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294962304), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3580C0u;
        goto label_3580c0;
    }
    ctx->pc = 0x3580B8u;
    {
        const bool branch_taken_0x3580b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3580BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3580B8u;
            // 0x3580bc: 0xa443ec80  sh          $v1, -0x1380($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294962304), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3580b8) {
            ctx->pc = 0x3580D0u;
            goto label_3580d0;
        }
    }
    ctx->pc = 0x3580C0u;
label_3580c0:
    // 0x3580c0: 0x3047ffff  andi        $a3, $v0, 0xFFFF
    ctx->pc = 0x3580c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_3580c4:
    // 0x3580c4: 0x28e20010  slti        $v0, $a3, 0x10
    ctx->pc = 0x3580c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)16) ? 1 : 0);
label_3580c8:
    // 0x3580c8: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_3580cc:
    if (ctx->pc == 0x3580CCu) {
        ctx->pc = 0x3580CCu;
            // 0x3580cc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3580D0u;
        goto label_3580d0;
    }
    ctx->pc = 0x3580C8u;
    {
        const bool branch_taken_0x3580c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3580CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3580C8u;
            // 0x3580cc: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3580c8) {
            ctx->pc = 0x358064u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_358064;
        }
    }
    ctx->pc = 0x3580D0u;
label_3580d0:
    // 0x3580d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3580d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_3580d4:
    // 0x3580d4: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3580d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3580d8:
    // 0x3580d8: 0xc04a5f2  jal         func_1297C8
label_3580dc:
    if (ctx->pc == 0x3580DCu) {
        ctx->pc = 0x3580DCu;
            // 0x3580dc: 0x24a55640  addiu       $a1, $a1, 0x5640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22080));
        ctx->pc = 0x3580E0u;
        goto label_3580e0;
    }
    ctx->pc = 0x3580D8u;
    SET_GPR_U32(ctx, 31, 0x3580E0u);
    ctx->pc = 0x3580DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3580D8u;
            // 0x3580dc: 0x24a55640  addiu       $a1, $a1, 0x5640 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3580E0u; }
        if (ctx->pc != 0x3580E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3580E0u; }
        if (ctx->pc != 0x3580E0u) { return; }
    }
    ctx->pc = 0x3580E0u;
label_3580e0:
    // 0x3580e0: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x3580e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
label_3580e4:
    // 0x3580e4: 0x8c451db8  lw          $a1, 0x1DB8($v0)
    ctx->pc = 0x3580e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7608)));
label_3580e8:
    // 0x3580e8: 0xc068f6c  jal         func_1A3DB0
label_3580ec:
    if (ctx->pc == 0x3580ECu) {
        ctx->pc = 0x3580ECu;
            // 0x3580ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3580F0u;
        goto label_3580f0;
    }
    ctx->pc = 0x3580E8u;
    SET_GPR_U32(ctx, 31, 0x3580F0u);
    ctx->pc = 0x3580ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3580E8u;
            // 0x3580ec: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (runtime->hasFunction(0x1A3DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3580F0u; }
        if (ctx->pc != 0x3580F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3DB0_0x1a3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3580F0u; }
        if (ctx->pc != 0x3580F0u) { return; }
    }
    ctx->pc = 0x3580F0u;
label_3580f0:
    // 0x3580f0: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x3580f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_3580f4:
    // 0x3580f4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x3580f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_3580f8:
    // 0x3580f8: 0x24848350  addiu       $a0, $a0, -0x7CB0
    ctx->pc = 0x3580f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935376));
label_3580fc:
    // 0x3580fc: 0x24a55658  addiu       $a1, $a1, 0x5658
    ctx->pc = 0x3580fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22104));
label_358100:
    // 0x358100: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x358100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_358104:
    // 0x358104: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x358104u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_358108:
    // 0x358108: 0xc0556d4  jal         func_155B50
label_35810c:
    if (ctx->pc == 0x35810Cu) {
        ctx->pc = 0x35810Cu;
            // 0x35810c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358110u;
        goto label_358110;
    }
    ctx->pc = 0x358108u;
    SET_GPR_U32(ctx, 31, 0x358110u);
    ctx->pc = 0x35810Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358108u;
            // 0x35810c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358110u; }
        if (ctx->pc != 0x358110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358110u; }
        if (ctx->pc != 0x358110u) { return; }
    }
    ctx->pc = 0x358110u;
label_358110:
    // 0x358110: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x358110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_358114:
    // 0x358114: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x358114u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_358118:
    // 0x358118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_35811c:
    // 0x35811c: 0x248481e0  addiu       $a0, $a0, -0x7E20
    ctx->pc = 0x35811cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935008));
label_358120:
    // 0x358120: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x358120u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_358124:
    // 0x358124: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x358124u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_358128:
    // 0x358128: 0xc055768  jal         func_155DA0
label_35812c:
    if (ctx->pc == 0x35812Cu) {
        ctx->pc = 0x35812Cu;
            // 0x35812c: 0xa040a220  sb          $zero, -0x5DE0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943264), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x358130u;
        goto label_358130;
    }
    ctx->pc = 0x358128u;
    SET_GPR_U32(ctx, 31, 0x358130u);
    ctx->pc = 0x35812Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358128u;
            // 0x35812c: 0xa040a220  sb          $zero, -0x5DE0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943264), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358130u; }
        if (ctx->pc != 0x358130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358130u; }
        if (ctx->pc != 0x358130u) { return; }
    }
    ctx->pc = 0x358130u;
label_358130:
    // 0x358130: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x358130u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_358134:
    // 0x358134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x358134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_358138:
    // 0x358138: 0x3e00008  jr          $ra
label_35813c:
    if (ctx->pc == 0x35813Cu) {
        ctx->pc = 0x35813Cu;
            // 0x35813c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x358140u;
        goto label_358140;
    }
    ctx->pc = 0x358138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35813Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358138u;
            // 0x35813c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358140u;
label_358140:
    // 0x358140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x358140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_358144:
    // 0x358144: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x358144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_358148:
    // 0x358148: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x358148u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_35814c:
    // 0x35814c: 0xc055684  jal         func_155A10
label_358150:
    if (ctx->pc == 0x358150u) {
        ctx->pc = 0x358150u;
            // 0x358150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358154u;
        goto label_358154;
    }
    ctx->pc = 0x35814Cu;
    SET_GPR_U32(ctx, 31, 0x358154u);
    ctx->pc = 0x358150u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35814Cu;
            // 0x358150: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155A10u;
    if (runtime->hasFunction(0x155A10u)) {
        auto targetFn = runtime->lookupFunction(0x155A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358154u; }
        if (ctx->pc != 0x358154u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155A10_0x155a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358154u; }
        if (ctx->pc != 0x358154u) { return; }
    }
    ctx->pc = 0x358154u;
label_358154:
    // 0x358154: 0xc0692e0  jal         func_1A4B80
label_358158:
    if (ctx->pc == 0x358158u) {
        ctx->pc = 0x358158u;
            // 0x358158: 0x3c040014  lui         $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
        ctx->pc = 0x35815Cu;
        goto label_35815c;
    }
    ctx->pc = 0x358154u;
    SET_GPR_U32(ctx, 31, 0x35815Cu);
    ctx->pc = 0x358158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358154u;
            // 0x358158: 0x3c040014  lui         $a0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B80u;
    if (runtime->hasFunction(0x1A4B80u)) {
        auto targetFn = runtime->lookupFunction(0x1A4B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35815Cu; }
        if (ctx->pc != 0x35815Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4B80_0x1a4b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35815Cu; }
        if (ctx->pc != 0x35815Cu) { return; }
    }
    ctx->pc = 0x35815Cu;
label_35815c:
    // 0x35815c: 0x3c0301d1  lui         $v1, 0x1D1
    ctx->pc = 0x35815cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)465 << 16));
label_358160:
    // 0x358160: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x358160u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_358164:
    // 0x358164: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x358164u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_358168:
    // 0x358168: 0xac621db8  sw          $v0, 0x1DB8($v1)
    ctx->pc = 0x358168u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7608), GPR_U32(ctx, 2));
label_35816c:
    // 0x35816c: 0x24a55640  addiu       $a1, $a1, 0x5640
    ctx->pc = 0x35816cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22080));
label_358170:
    // 0x358170: 0xc04a5f2  jal         func_1297C8
label_358174:
    if (ctx->pc == 0x358174u) {
        ctx->pc = 0x358174u;
            // 0x358174: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x358178u;
        goto label_358178;
    }
    ctx->pc = 0x358170u;
    SET_GPR_U32(ctx, 31, 0x358178u);
    ctx->pc = 0x358174u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358170u;
            // 0x358174: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358178u; }
        if (ctx->pc != 0x358178u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358178u; }
        if (ctx->pc != 0x358178u) { return; }
    }
    ctx->pc = 0x358178u;
label_358178:
    // 0x358178: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x358178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
label_35817c:
    // 0x35817c: 0x8c451db8  lw          $a1, 0x1DB8($v0)
    ctx->pc = 0x35817cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7608)));
label_358180:
    // 0x358180: 0xc068f6c  jal         func_1A3DB0
label_358184:
    if (ctx->pc == 0x358184u) {
        ctx->pc = 0x358184u;
            // 0x358184: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x358188u;
        goto label_358188;
    }
    ctx->pc = 0x358180u;
    SET_GPR_U32(ctx, 31, 0x358188u);
    ctx->pc = 0x358184u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358180u;
            // 0x358184: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3DB0u;
    if (runtime->hasFunction(0x1A3DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A3DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358188u; }
        if (ctx->pc != 0x358188u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3DB0_0x1a3db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358188u; }
        if (ctx->pc != 0x358188u) { return; }
    }
    ctx->pc = 0x358188u;
label_358188:
    // 0x358188: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x358188u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_35818c:
    // 0x35818c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x35818cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_358190:
    // 0x358190: 0x24848350  addiu       $a0, $a0, -0x7CB0
    ctx->pc = 0x358190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935376));
label_358194:
    // 0x358194: 0x24a55658  addiu       $a1, $a1, 0x5658
    ctx->pc = 0x358194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22104));
label_358198:
    // 0x358198: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x358198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_35819c:
    // 0x35819c: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x35819cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3581a0:
    // 0x3581a0: 0xc0556d4  jal         func_155B50
label_3581a4:
    if (ctx->pc == 0x3581A4u) {
        ctx->pc = 0x3581A4u;
            // 0x3581a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3581A8u;
        goto label_3581a8;
    }
    ctx->pc = 0x3581A0u;
    SET_GPR_U32(ctx, 31, 0x3581A8u);
    ctx->pc = 0x3581A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3581A0u;
            // 0x3581a4: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3581A8u; }
        if (ctx->pc != 0x3581A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3581A8u; }
        if (ctx->pc != 0x3581A8u) { return; }
    }
    ctx->pc = 0x3581A8u;
label_3581a8:
    // 0x3581a8: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3581a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_3581ac:
    // 0x3581ac: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x3581acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_3581b0:
    // 0x3581b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3581b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3581b4:
    // 0x3581b4: 0x248482d0  addiu       $a0, $a0, -0x7D30
    ctx->pc = 0x3581b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935248));
label_3581b8:
    // 0x3581b8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3581b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_3581bc:
    // 0x3581bc: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x3581bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_3581c0:
    // 0x3581c0: 0xc055768  jal         func_155DA0
label_3581c4:
    if (ctx->pc == 0x3581C4u) {
        ctx->pc = 0x3581C4u;
            // 0x3581c4: 0xa040a220  sb          $zero, -0x5DE0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943264), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x3581C8u;
        goto label_3581c8;
    }
    ctx->pc = 0x3581C0u;
    SET_GPR_U32(ctx, 31, 0x3581C8u);
    ctx->pc = 0x3581C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3581C0u;
            // 0x3581c4: 0xa040a220  sb          $zero, -0x5DE0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943264), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3581C8u; }
        if (ctx->pc != 0x3581C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3581C8u; }
        if (ctx->pc != 0x3581C8u) { return; }
    }
    ctx->pc = 0x3581C8u;
label_3581c8:
    // 0x3581c8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3581c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3581cc:
    // 0x3581cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3581ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3581d0:
    // 0x3581d0: 0x3e00008  jr          $ra
label_3581d4:
    if (ctx->pc == 0x3581D4u) {
        ctx->pc = 0x3581D4u;
            // 0x3581d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x3581D8u;
        goto label_3581d8;
    }
    ctx->pc = 0x3581D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3581D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3581D0u;
            // 0x3581d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3581D8u;
label_3581d8:
    // 0x3581d8: 0x0  nop
    ctx->pc = 0x3581d8u;
    // NOP
label_3581dc:
    // 0x3581dc: 0x0  nop
    ctx->pc = 0x3581dcu;
    // NOP
label_3581e0:
    // 0x3581e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3581e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3581e4:
    // 0x3581e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3581e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_3581e8:
    // 0x3581e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3581e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3581ec:
    // 0x3581ec: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3581ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3581f0:
    // 0x3581f0: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x3581f0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
label_3581f4:
    // 0x3581f4: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_3581f8:
    if (ctx->pc == 0x3581F8u) {
        ctx->pc = 0x3581F8u;
            // 0x3581f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3581FCu;
        goto label_3581fc;
    }
    ctx->pc = 0x3581F4u;
    {
        const bool branch_taken_0x3581f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3581F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3581F4u;
            // 0x3581f8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3581f4) {
            ctx->pc = 0x3582B4u;
            goto label_3582b4;
        }
    }
    ctx->pc = 0x3581FCu;
label_3581fc:
    // 0x3581fc: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x3581fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
label_358200:
    // 0x358200: 0xc06936c  jal         func_1A4DB0
label_358204:
    if (ctx->pc == 0x358204u) {
        ctx->pc = 0x358204u;
            // 0x358204: 0x8c441db8  lw          $a0, 0x1DB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7608)));
        ctx->pc = 0x358208u;
        goto label_358208;
    }
    ctx->pc = 0x358200u;
    SET_GPR_U32(ctx, 31, 0x358208u);
    ctx->pc = 0x358204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358200u;
            // 0x358204: 0x8c441db8  lw          $a0, 0x1DB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (runtime->hasFunction(0x1A4DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358208u; }
        if (ctx->pc != 0x358208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DB0_0x1a4db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358208u; }
        if (ctx->pc != 0x358208u) { return; }
    }
    ctx->pc = 0x358208u;
label_358208:
    // 0x358208: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x358208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_35820c:
    // 0x35820c: 0x94429718  lhu         $v0, -0x68E8($v0)
    ctx->pc = 0x35820cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294940440)));
label_358210:
    // 0x358210: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_358214:
    if (ctx->pc == 0x358214u) {
        ctx->pc = 0x358218u;
        goto label_358218;
    }
    ctx->pc = 0x358210u;
    {
        const bool branch_taken_0x358210 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358210) {
            ctx->pc = 0x358230u;
            goto label_358230;
        }
    }
    ctx->pc = 0x358218u;
label_358218:
    // 0x358218: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x358218u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_35821c:
    // 0x35821c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35821cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358220:
    // 0x358220: 0xc055768  jal         func_155DA0
label_358224:
    if (ctx->pc == 0x358224u) {
        ctx->pc = 0x358224u;
            // 0x358224: 0x24848030  addiu       $a0, $a0, -0x7FD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
        ctx->pc = 0x358228u;
        goto label_358228;
    }
    ctx->pc = 0x358220u;
    SET_GPR_U32(ctx, 31, 0x358228u);
    ctx->pc = 0x358224u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358220u;
            // 0x358224: 0x24848030  addiu       $a0, $a0, -0x7FD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358228u; }
        if (ctx->pc != 0x358228u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358228u; }
        if (ctx->pc != 0x358228u) { return; }
    }
    ctx->pc = 0x358228u;
label_358228:
    // 0x358228: 0x10000023  b           . + 4 + (0x23 << 2)
label_35822c:
    if (ctx->pc == 0x35822Cu) {
        ctx->pc = 0x35822Cu;
            // 0x35822c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x358230u;
        goto label_358230;
    }
    ctx->pc = 0x358228u;
    {
        const bool branch_taken_0x358228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35822Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358228u;
            // 0x35822c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358228) {
            ctx->pc = 0x3582B8u;
            goto label_3582b8;
        }
    }
    ctx->pc = 0x358230u;
label_358230:
    // 0x358230: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x358230u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_358234:
    // 0x358234: 0x24033fff  addiu       $v1, $zero, 0x3FFF
    ctx->pc = 0x358234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16383));
label_358238:
    // 0x358238: 0x9442ec80  lhu         $v0, -0x1380($v0)
    ctx->pc = 0x358238u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962304)));
label_35823c:
    // 0x35823c: 0x30423fff  andi        $v0, $v0, 0x3FFF
    ctx->pc = 0x35823cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16383);
label_358240:
    // 0x358240: 0x1443000b  bne         $v0, $v1, . + 4 + (0xB << 2)
label_358244:
    if (ctx->pc == 0x358244u) {
        ctx->pc = 0x358248u;
        goto label_358248;
    }
    ctx->pc = 0x358240u;
    {
        const bool branch_taken_0x358240 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x358240) {
            ctx->pc = 0x358270u;
            goto label_358270;
        }
    }
    ctx->pc = 0x358248u;
label_358248:
    // 0x358248: 0xc0d0a50  jal         func_342940
label_35824c:
    if (ctx->pc == 0x35824Cu) {
        ctx->pc = 0x358250u;
        goto label_358250;
    }
    ctx->pc = 0x358248u;
    SET_GPR_U32(ctx, 31, 0x358250u);
    ctx->pc = 0x342940u;
    if (runtime->hasFunction(0x342940u)) {
        auto targetFn = runtime->lookupFunction(0x342940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358250u; }
        if (ctx->pc != 0x358250u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342940_0x342940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358250u; }
        if (ctx->pc != 0x358250u) { return; }
    }
    ctx->pc = 0x358250u;
label_358250:
    // 0x358250: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_358254:
    if (ctx->pc == 0x358254u) {
        ctx->pc = 0x358258u;
        goto label_358258;
    }
    ctx->pc = 0x358250u;
    {
        const bool branch_taken_0x358250 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x358250) {
            ctx->pc = 0x358270u;
            goto label_358270;
        }
    }
    ctx->pc = 0x358258u;
label_358258:
    // 0x358258: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x358258u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_35825c:
    // 0x35825c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x35825cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358260:
    // 0x358260: 0xc055768  jal         func_155DA0
label_358264:
    if (ctx->pc == 0x358264u) {
        ctx->pc = 0x358264u;
            // 0x358264: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
        ctx->pc = 0x358268u;
        goto label_358268;
    }
    ctx->pc = 0x358260u;
    SET_GPR_U32(ctx, 31, 0x358268u);
    ctx->pc = 0x358264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358260u;
            // 0x358264: 0x24848140  addiu       $a0, $a0, -0x7EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358268u; }
        if (ctx->pc != 0x358268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358268u; }
        if (ctx->pc != 0x358268u) { return; }
    }
    ctx->pc = 0x358268u;
label_358268:
    // 0x358268: 0x10000012  b           . + 4 + (0x12 << 2)
label_35826c:
    if (ctx->pc == 0x35826Cu) {
        ctx->pc = 0x358270u;
        goto label_358270;
    }
    ctx->pc = 0x358268u;
    {
        const bool branch_taken_0x358268 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358268) {
            ctx->pc = 0x3582B4u;
            goto label_3582b4;
        }
    }
    ctx->pc = 0x358270u;
label_358270:
    // 0x358270: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x358270u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_358274:
    // 0x358274: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x358274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_358278:
    // 0x358278: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x358278u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
label_35827c:
    // 0x35827c: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_358280:
    if (ctx->pc == 0x358280u) {
        ctx->pc = 0x358284u;
        goto label_358284;
    }
    ctx->pc = 0x35827Cu;
    {
        const bool branch_taken_0x35827c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x35827c) {
            ctx->pc = 0x358298u;
            goto label_358298;
        }
    }
    ctx->pc = 0x358284u;
label_358284:
    // 0x358284: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x358284u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_358288:
    // 0x358288: 0xc0558d0  jal         func_156340
label_35828c:
    if (ctx->pc == 0x35828Cu) {
        ctx->pc = 0x35828Cu;
            // 0x35828c: 0x248440b0  addiu       $a0, $a0, 0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16560));
        ctx->pc = 0x358290u;
        goto label_358290;
    }
    ctx->pc = 0x358288u;
    SET_GPR_U32(ctx, 31, 0x358290u);
    ctx->pc = 0x35828Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358288u;
            // 0x35828c: 0x248440b0  addiu       $a0, $a0, 0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358290u; }
        if (ctx->pc != 0x358290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358290u; }
        if (ctx->pc != 0x358290u) { return; }
    }
    ctx->pc = 0x358290u;
label_358290:
    // 0x358290: 0x10000004  b           . + 4 + (0x4 << 2)
label_358294:
    if (ctx->pc == 0x358294u) {
        ctx->pc = 0x358298u;
        goto label_358298;
    }
    ctx->pc = 0x358290u;
    {
        const bool branch_taken_0x358290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358290) {
            ctx->pc = 0x3582A4u;
            goto label_3582a4;
        }
    }
    ctx->pc = 0x358298u;
label_358298:
    // 0x358298: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x358298u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
label_35829c:
    // 0x35829c: 0xc0558d0  jal         func_156340
label_3582a0:
    if (ctx->pc == 0x3582A0u) {
        ctx->pc = 0x3582A0u;
            // 0x3582a0: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
        ctx->pc = 0x3582A4u;
        goto label_3582a4;
    }
    ctx->pc = 0x35829Cu;
    SET_GPR_U32(ctx, 31, 0x3582A4u);
    ctx->pc = 0x3582A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35829Cu;
            // 0x3582a0: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582A4u; }
        if (ctx->pc != 0x3582A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582A4u; }
        if (ctx->pc != 0x3582A4u) { return; }
    }
    ctx->pc = 0x3582A4u;
label_3582a4:
    // 0x3582a4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3582a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_3582a8:
    // 0x3582a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3582a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3582ac:
    // 0x3582ac: 0xc055768  jal         func_155DA0
label_3582b0:
    if (ctx->pc == 0x3582B0u) {
        ctx->pc = 0x3582B0u;
            // 0x3582b0: 0x2484f690  addiu       $a0, $a0, -0x970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
        ctx->pc = 0x3582B4u;
        goto label_3582b4;
    }
    ctx->pc = 0x3582ACu;
    SET_GPR_U32(ctx, 31, 0x3582B4u);
    ctx->pc = 0x3582B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3582ACu;
            // 0x3582b0: 0x2484f690  addiu       $a0, $a0, -0x970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582B4u; }
        if (ctx->pc != 0x3582B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582B4u; }
        if (ctx->pc != 0x3582B4u) { return; }
    }
    ctx->pc = 0x3582B4u;
label_3582b4:
    // 0x3582b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3582b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3582b8:
    // 0x3582b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3582b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3582bc:
    // 0x3582bc: 0x3e00008  jr          $ra
label_3582c0:
    if (ctx->pc == 0x3582C0u) {
        ctx->pc = 0x3582C0u;
            // 0x3582c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x3582C4u;
        goto label_3582c4;
    }
    ctx->pc = 0x3582BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3582C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3582BCu;
            // 0x3582c0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3582C4u;
label_3582c4:
    // 0x3582c4: 0x0  nop
    ctx->pc = 0x3582c4u;
    // NOP
label_3582c8:
    // 0x3582c8: 0x0  nop
    ctx->pc = 0x3582c8u;
    // NOP
label_3582cc:
    // 0x3582cc: 0x0  nop
    ctx->pc = 0x3582ccu;
    // NOP
label_3582d0:
    // 0x3582d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3582d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3582d4:
    // 0x3582d4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x3582d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_3582d8:
    // 0x3582d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3582d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_3582dc:
    // 0x3582dc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3582dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3582e0:
    // 0x3582e0: 0x8063a220  lb          $v1, -0x5DE0($v1)
    ctx->pc = 0x3582e0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294943264)));
label_3582e4:
    // 0x3582e4: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_3582e8:
    if (ctx->pc == 0x3582E8u) {
        ctx->pc = 0x3582E8u;
            // 0x3582e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3582ECu;
        goto label_3582ec;
    }
    ctx->pc = 0x3582E4u;
    {
        const bool branch_taken_0x3582e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3582E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3582E4u;
            // 0x3582e8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3582e4) {
            ctx->pc = 0x35833Cu;
            goto label_35833c;
        }
    }
    ctx->pc = 0x3582ECu;
label_3582ec:
    // 0x3582ec: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x3582ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
label_3582f0:
    // 0x3582f0: 0xc06936c  jal         func_1A4DB0
label_3582f4:
    if (ctx->pc == 0x3582F4u) {
        ctx->pc = 0x3582F4u;
            // 0x3582f4: 0x8c441db8  lw          $a0, 0x1DB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7608)));
        ctx->pc = 0x3582F8u;
        goto label_3582f8;
    }
    ctx->pc = 0x3582F0u;
    SET_GPR_U32(ctx, 31, 0x3582F8u);
    ctx->pc = 0x3582F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3582F0u;
            // 0x3582f4: 0x8c441db8  lw          $a0, 0x1DB8($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7608)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (runtime->hasFunction(0x1A4DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582F8u; }
        if (ctx->pc != 0x3582F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DB0_0x1a4db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3582F8u; }
        if (ctx->pc != 0x3582F8u) { return; }
    }
    ctx->pc = 0x3582F8u;
label_3582f8:
    // 0x3582f8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3582f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_3582fc:
    // 0x3582fc: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x3582fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_358300:
    // 0x358300: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x358300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
label_358304:
    // 0x358304: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_358308:
    if (ctx->pc == 0x358308u) {
        ctx->pc = 0x35830Cu;
        goto label_35830c;
    }
    ctx->pc = 0x358304u;
    {
        const bool branch_taken_0x358304 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x358304) {
            ctx->pc = 0x358320u;
            goto label_358320;
        }
    }
    ctx->pc = 0x35830Cu;
label_35830c:
    // 0x35830c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x35830cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_358310:
    // 0x358310: 0xc0558d0  jal         func_156340
label_358314:
    if (ctx->pc == 0x358314u) {
        ctx->pc = 0x358314u;
            // 0x358314: 0x248440b0  addiu       $a0, $a0, 0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16560));
        ctx->pc = 0x358318u;
        goto label_358318;
    }
    ctx->pc = 0x358310u;
    SET_GPR_U32(ctx, 31, 0x358318u);
    ctx->pc = 0x358314u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358310u;
            // 0x358314: 0x248440b0  addiu       $a0, $a0, 0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358318u; }
        if (ctx->pc != 0x358318u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358318u; }
        if (ctx->pc != 0x358318u) { return; }
    }
    ctx->pc = 0x358318u;
label_358318:
    // 0x358318: 0x10000004  b           . + 4 + (0x4 << 2)
label_35831c:
    if (ctx->pc == 0x35831Cu) {
        ctx->pc = 0x358320u;
        goto label_358320;
    }
    ctx->pc = 0x358318u;
    {
        const bool branch_taken_0x358318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358318) {
            ctx->pc = 0x35832Cu;
            goto label_35832c;
        }
    }
    ctx->pc = 0x358320u;
label_358320:
    // 0x358320: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x358320u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
label_358324:
    // 0x358324: 0xc0558d0  jal         func_156340
label_358328:
    if (ctx->pc == 0x358328u) {
        ctx->pc = 0x358328u;
            // 0x358328: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
        ctx->pc = 0x35832Cu;
        goto label_35832c;
    }
    ctx->pc = 0x358324u;
    SET_GPR_U32(ctx, 31, 0x35832Cu);
    ctx->pc = 0x358328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358324u;
            // 0x358328: 0x2484b6b0  addiu       $a0, $a0, -0x4950 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948528));
        ctx->in_delay_slot = false;
    ctx->pc = 0x156340u;
    if (runtime->hasFunction(0x156340u)) {
        auto targetFn = runtime->lookupFunction(0x156340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35832Cu; }
        if (ctx->pc != 0x35832Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00156340_0x156340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35832Cu; }
        if (ctx->pc != 0x35832Cu) { return; }
    }
    ctx->pc = 0x35832Cu;
label_35832c:
    // 0x35832c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x35832cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_358330:
    // 0x358330: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x358330u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_358334:
    // 0x358334: 0xc055768  jal         func_155DA0
label_358338:
    if (ctx->pc == 0x358338u) {
        ctx->pc = 0x358338u;
            // 0x358338: 0x2484f690  addiu       $a0, $a0, -0x970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
        ctx->pc = 0x35833Cu;
        goto label_35833c;
    }
    ctx->pc = 0x358334u;
    SET_GPR_U32(ctx, 31, 0x35833Cu);
    ctx->pc = 0x358338u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358334u;
            // 0x358338: 0x2484f690  addiu       $a0, $a0, -0x970 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155DA0u;
    if (runtime->hasFunction(0x155DA0u)) {
        auto targetFn = runtime->lookupFunction(0x155DA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35833Cu; }
        if (ctx->pc != 0x35833Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155DA0_0x155da0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35833Cu; }
        if (ctx->pc != 0x35833Cu) { return; }
    }
    ctx->pc = 0x35833Cu;
label_35833c:
    // 0x35833c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x35833cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_358340:
    // 0x358340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x358340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_358344:
    // 0x358344: 0x3e00008  jr          $ra
label_358348:
    if (ctx->pc == 0x358348u) {
        ctx->pc = 0x358348u;
            // 0x358348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x35834Cu;
        goto label_35834c;
    }
    ctx->pc = 0x358344u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358348u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358344u;
            // 0x358348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35834Cu;
label_35834c:
    // 0x35834c: 0x0  nop
    ctx->pc = 0x35834cu;
    // NOP
label_358350:
    // 0x358350: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_358354:
    // 0x358354: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x358354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_358358:
    // 0x358358: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x358358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_35835c:
    // 0x35835c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x35835cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_358360:
    // 0x358360: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x358360u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_358364:
    // 0x358364: 0x8c900010  lw          $s0, 0x10($a0)
    ctx->pc = 0x358364u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_358368:
    // 0x358368: 0xc0c1e00  jal         func_307800
label_35836c:
    if (ctx->pc == 0x35836Cu) {
        ctx->pc = 0x35836Cu;
            // 0x35836c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x358370u;
        goto label_358370;
    }
    ctx->pc = 0x358368u;
    SET_GPR_U32(ctx, 31, 0x358370u);
    ctx->pc = 0x35836Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358368u;
            // 0x35836c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x307800u;
    if (runtime->hasFunction(0x307800u)) {
        auto targetFn = runtime->lookupFunction(0x307800u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358370u; }
        if (ctx->pc != 0x358370u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00307800_0x307800(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358370u; }
        if (ctx->pc != 0x358370u) { return; }
    }
    ctx->pc = 0x358370u;
label_358370:
    // 0x358370: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x358370u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_358374:
    // 0x358374: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x358374u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_358378:
    // 0x358378: 0xc0c7938  jal         func_31E4E0
label_35837c:
    if (ctx->pc == 0x35837Cu) {
        ctx->pc = 0x35837Cu;
            // 0x35837c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x358380u;
        goto label_358380;
    }
    ctx->pc = 0x358378u;
    SET_GPR_U32(ctx, 31, 0x358380u);
    ctx->pc = 0x35837Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358378u;
            // 0x35837c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x31E4E0u;
    if (runtime->hasFunction(0x31E4E0u)) {
        auto targetFn = runtime->lookupFunction(0x31E4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358380u; }
        if (ctx->pc != 0x358380u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0031E4E0_0x31e4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358380u; }
        if (ctx->pc != 0x358380u) { return; }
    }
    ctx->pc = 0x358380u;
label_358380:
    // 0x358380: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x358380u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_358384:
    // 0x358384: 0x2c6300c2  sltiu       $v1, $v1, 0xC2
    ctx->pc = 0x358384u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)194) ? 1 : 0);
label_358388:
    // 0x358388: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
label_35838c:
    if (ctx->pc == 0x35838Cu) {
        ctx->pc = 0x35838Cu;
            // 0x35838c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x358390u;
        goto label_358390;
    }
    ctx->pc = 0x358388u;
    {
        const bool branch_taken_0x358388 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x358388) {
            ctx->pc = 0x35838Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358388u;
            // 0x35838c: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3583A8u;
            goto label_3583a8;
        }
    }
    ctx->pc = 0x358390u;
label_358390:
    // 0x358390: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x358390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_358394:
    // 0x358394: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x358394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_358398:
    // 0x358398: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x358398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_35839c:
    // 0x35839c: 0xc055728  jal         func_155CA0
label_3583a0:
    if (ctx->pc == 0x3583A0u) {
        ctx->pc = 0x3583A0u;
            // 0x3583a0: 0xa043a220  sb          $v1, -0x5DE0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943264), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3583A4u;
        goto label_3583a4;
    }
    ctx->pc = 0x35839Cu;
    SET_GPR_U32(ctx, 31, 0x3583A4u);
    ctx->pc = 0x3583A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35839Cu;
            // 0x3583a0: 0xa043a220  sb          $v1, -0x5DE0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294943264), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3583A4u; }
        if (ctx->pc != 0x3583A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3583A4u; }
        if (ctx->pc != 0x3583A4u) { return; }
    }
    ctx->pc = 0x3583A4u;
label_3583a4:
    // 0x3583a4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3583a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3583a8:
    // 0x3583a8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3583a8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3583ac:
    // 0x3583ac: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3583acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3583b0:
    // 0x3583b0: 0x3e00008  jr          $ra
label_3583b4:
    if (ctx->pc == 0x3583B4u) {
        ctx->pc = 0x3583B4u;
            // 0x3583b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3583B8u;
        goto label_3583b8;
    }
    ctx->pc = 0x3583B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3583B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3583B0u;
            // 0x3583b4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3583B8u;
label_3583b8:
    // 0x3583b8: 0x0  nop
    ctx->pc = 0x3583b8u;
    // NOP
label_3583bc:
    // 0x3583bc: 0x0  nop
    ctx->pc = 0x3583bcu;
    // NOP
label_3583c0:
    // 0x3583c0: 0x0  nop
    ctx->pc = 0x3583c0u;
    // NOP
label_3583c4:
    // 0x3583c4: 0x0  nop
    ctx->pc = 0x3583c4u;
    // NOP
label_3583c8:
    // 0x3583c8: 0x0  nop
    ctx->pc = 0x3583c8u;
    // NOP
label_3583cc:
    // 0x3583cc: 0x0  nop
    ctx->pc = 0x3583ccu;
    // NOP
label_3583d0:
    // 0x3583d0: 0x0  nop
    ctx->pc = 0x3583d0u;
    // NOP
label_3583d4:
    // 0x3583d4: 0x0  nop
    ctx->pc = 0x3583d4u;
    // NOP
label_3583d8:
    // 0x3583d8: 0x0  nop
    ctx->pc = 0x3583d8u;
    // NOP
label_3583dc:
    // 0x3583dc: 0x0  nop
    ctx->pc = 0x3583dcu;
    // NOP
label_3583e0:
    // 0x3583e0: 0x0  nop
    ctx->pc = 0x3583e0u;
    // NOP
label_3583e4:
    // 0x3583e4: 0x0  nop
    ctx->pc = 0x3583e4u;
    // NOP
label_3583e8:
    // 0x3583e8: 0x0  nop
    ctx->pc = 0x3583e8u;
    // NOP
label_3583ec:
    // 0x3583ec: 0x0  nop
    ctx->pc = 0x3583ecu;
    // NOP
label_3583f0:
    // 0x3583f0: 0x0  nop
    ctx->pc = 0x3583f0u;
    // NOP
label_3583f4:
    // 0x3583f4: 0x0  nop
    ctx->pc = 0x3583f4u;
    // NOP
label_3583f8:
    // 0x3583f8: 0x0  nop
    ctx->pc = 0x3583f8u;
    // NOP
label_3583fc:
    // 0x3583fc: 0x0  nop
    ctx->pc = 0x3583fcu;
    // NOP
label_358400:
    // 0x358400: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x358400u;
    // Unhandled COP2 format: 0xA
label_358404:
    // 0x358404: 0x6762696c  daddiu      $v0, $k1, 0x696C
    ctx->pc = 0x358404u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 27) + (int64_t)(int32_t)26988);
label_358408:
    // 0x358408: 0x68706172  ldl         $s0, 0x6172($v1)
    ctx->pc = 0x358408u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24946); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 16, (GPR_U64(ctx, 16) & keepMask) | (mem << shift)); }
label_35840c:
    // 0x35840c: 0x30303133  andi        $s0, $at, 0x3133
    ctx->pc = 0x35840cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12595);
label_358410:
    // 0x358410: 0x20001  .word       0x00020001                   # INVALID     $zero, $v0, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358410u;
    // Unhandled SPECIAL instruction: 0x1
label_358414:
    // 0x358414: 0x30001  .word       0x00030001                   # INVALID     $zero, $v1, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358414u;
    // Unhandled SPECIAL instruction: 0x1
label_358418:
    // 0x358418: 0x0  nop
    ctx->pc = 0x358418u;
    // NOP
label_35841c:
    // 0x35841c: 0x0  nop
    ctx->pc = 0x35841cu;
    // NOP
label_358420:
    // 0x358420: 0x1000404  .word       0x01000404                   # sllv        $zero, $zero, $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358420u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_358424:
    // 0x358424: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x358424u;
    // NOP (addi to $zero)
label_358428:
    // 0x358428: 0x0  nop
    ctx->pc = 0x358428u;
    // NOP
label_35842c:
    // 0x35842c: 0x5000000  bltz        $t0, . + 4 + (0x0 << 2)
label_358430:
    if (ctx->pc == 0x358430u) {
        ctx->pc = 0x358430u;
            // 0x358430: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x358434 - Handled by branch logic
        ctx->pc = 0x358434u;
        goto label_358434;
    }
    ctx->pc = 0x35842Cu;
    {
        const bool branch_taken_0x35842c = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x358430u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35842Cu;
            // 0x358430: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x358434 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x35842c) {
            ctx->pc = 0x358430u;
            goto label_358430;
        }
    }
    ctx->pc = 0x358434u;
label_358434:
    // 0x358434: 0x3000000  .word       0x03000000                   # sll         $zero, $zero, 0 # 03000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358434u;
    // NOP
label_358438:
    // 0x358438: 0x2000000  .word       0x02000000                   # sll         $zero, $zero, 0 # 02000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358438u;
    // NOP
label_35843c:
    // 0x35843c: 0x4000000  bltz        $zero, . + 4 + (0x0 << 2)
label_358440:
    if (ctx->pc == 0x358440u) {
        ctx->pc = 0x358440u;
            // 0x358440: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x358444 - Handled by branch logic
        ctx->pc = 0x358444u;
        goto label_358444;
    }
    ctx->pc = 0x35843Cu;
    {
        const bool branch_taken_0x35843c = (GPR_S32(ctx, 0) < 0);
        ctx->pc = 0x358440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35843Cu;
            // 0x358440: 0x6000000  bltz        $s0, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x358444 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x35843c) {
            ctx->pc = 0x358440u;
            goto label_358440;
        }
    }
    ctx->pc = 0x358444u;
label_358444:
    // 0x358444: 0x0  nop
    ctx->pc = 0x358444u;
    // NOP
label_358448:
    // 0x358448: 0x0  nop
    ctx->pc = 0x358448u;
    // NOP
label_35844c:
    // 0x35844c: 0x0  nop
    ctx->pc = 0x35844cu;
    // NOP
label_358450:
    // 0x358450: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x358450u;
    // Unhandled COP2 format: 0xA
label_358454:
    // 0x358454: 0x6462696c  daddiu      $v0, $v1, 0x696C
    ctx->pc = 0x358454u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)26988);
label_358458:
    // 0x358458: 0x2020616d  addi        $zero, $at, 0x616D
    ctx->pc = 0x358458u;
    // NOP (addi to $zero)
label_35845c:
    // 0x35845c: 0x30303133  andi        $s0, $at, 0x3133
    ctx->pc = 0x35845cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12595);
label_358460:
    // 0x358460: 0x10008000  b           . + 4 + (-0x8000 << 2)
label_358464:
    if (ctx->pc == 0x358464u) {
        ctx->pc = 0x358464u;
            // 0x358464: 0x10009000  b           . + 4 + (-0x7000 << 2) (Delay Slot)
        // Likely branch instruction at 0x358464 - Handled by branch logic
        ctx->pc = 0x358468u;
        goto label_358468;
    }
    ctx->pc = 0x358460u;
    {
        const bool branch_taken_0x358460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358460u;
            // 0x358464: 0x10009000  b           . + 4 + (-0x7000 << 2) (Delay Slot)
        // Likely branch instruction at 0x358464 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358460) {
            ctx->pc = 0x338464u;
            return;
        }
    }
    ctx->pc = 0x358468u;
label_358468:
    // 0x358468: 0x1000a000  b           . + 4 + (-0x6000 << 2)
label_35846c:
    if (ctx->pc == 0x35846Cu) {
        ctx->pc = 0x35846Cu;
            // 0x35846c: 0x1000b000  b           . + 4 + (-0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x35846C - Handled by branch logic
        ctx->pc = 0x358470u;
        goto label_358470;
    }
    ctx->pc = 0x358468u;
    {
        const bool branch_taken_0x358468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35846Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358468u;
            // 0x35846c: 0x1000b000  b           . + 4 + (-0x5000 << 2) (Delay Slot)
        // Likely branch instruction at 0x35846C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358468) {
            ctx->pc = 0x34046Cu;
            return;
        }
    }
    ctx->pc = 0x358470u;
label_358470:
    // 0x358470: 0x1000b400  b           . + 4 + (-0x4C00 << 2)
label_358474:
    if (ctx->pc == 0x358474u) {
        ctx->pc = 0x358474u;
            // 0x358474: 0x1000c000  b           . + 4 + (-0x4000 << 2) (Delay Slot)
        // Likely branch instruction at 0x358474 - Handled by branch logic
        ctx->pc = 0x358478u;
        goto label_358478;
    }
    ctx->pc = 0x358470u;
    {
        const bool branch_taken_0x358470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358470u;
            // 0x358474: 0x1000c000  b           . + 4 + (-0x4000 << 2) (Delay Slot)
        // Likely branch instruction at 0x358474 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358470) {
            ctx->pc = 0x345474u;
            return;
        }
    }
    ctx->pc = 0x358478u;
label_358478:
    // 0x358478: 0x1000c400  b           . + 4 + (-0x3C00 << 2)
label_35847c:
    if (ctx->pc == 0x35847Cu) {
        ctx->pc = 0x35847Cu;
            // 0x35847c: 0x1000c800  b           . + 4 + (-0x3800 << 2) (Delay Slot)
        // Likely branch instruction at 0x35847C - Handled by branch logic
        ctx->pc = 0x358480u;
        goto label_358480;
    }
    ctx->pc = 0x358478u;
    {
        const bool branch_taken_0x358478 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35847Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358478u;
            // 0x35847c: 0x1000c800  b           . + 4 + (-0x3800 << 2) (Delay Slot)
        // Likely branch instruction at 0x35847C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358478) {
            ctx->pc = 0x34947Cu;
            return;
        }
    }
    ctx->pc = 0x358480u;
label_358480:
    // 0x358480: 0x1000d000  b           . + 4 + (-0x3000 << 2)
label_358484:
    if (ctx->pc == 0x358484u) {
        ctx->pc = 0x358484u;
            // 0x358484: 0x1000d400  b           . + 4 + (-0x2C00 << 2) (Delay Slot)
        // Likely branch instruction at 0x358484 - Handled by branch logic
        ctx->pc = 0x358488u;
        goto label_358488;
    }
    ctx->pc = 0x358480u;
    {
        const bool branch_taken_0x358480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358480u;
            // 0x358484: 0x1000d400  b           . + 4 + (-0x2C00 << 2) (Delay Slot)
        // Likely branch instruction at 0x358484 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358480) {
            ctx->pc = 0x34C484u;
            return;
        }
    }
    ctx->pc = 0x358488u;
label_358488:
    // 0x358488: 0x0  nop
    ctx->pc = 0x358488u;
    // NOP
label_35848c:
    // 0x35848c: 0x0  nop
    ctx->pc = 0x35848cu;
    // NOP
label_358490:
    // 0x358490: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x358490u;
    // Unhandled COP2 format: 0xA
label_358494:
    // 0x358494: 0x7662696c  .word       0x7662696C                   # INVALID     $s3, $v0, 0x696C # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x358494u;
    // Unhandled opcode: 0x1D
label_358498:
    // 0x358498: 0x20203075  addi        $zero, $at, 0x3075
    ctx->pc = 0x358498u;
    // NOP (addi to $zero)
label_35849c:
    // 0x35849c: 0x30303133  andi        $s0, $at, 0x3133
    ctx->pc = 0x35849cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12595);
label_3584a0:
    // 0x3584a0: 0x362e9c14  ori         $t6, $s1, 0x9C14
    ctx->pc = 0x3584a0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)39956);
label_3584a4:
    // 0x3584a4: 0xb94fb21f  swr         $t7, -0x4DE1($t2)
    ctx->pc = 0x3584a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 10), 4294947359); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 15); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_3584a8:
    // 0x3584a8: 0x3c08873e  lui         $t0, 0x873E
    ctx->pc = 0x3584a8u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)34622 << 16));
label_3584ac:
    // 0x3584ac: 0xbe2aaaa4  cache       0x0A, -0x555C($s1)
    ctx->pc = 0x3584acu;
    // CACHE instruction (ignored)
label_3584b0:
    // 0x3584b0: 0x1000404  .word       0x01000404                   # sllv        $zero, $zero, $t0 # 00000400 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3584b0u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 8) & 0x1F));
label_3584b4:
    // 0x3584b4: 0x20000000  addi        $zero, $zero, 0x0
    ctx->pc = 0x3584b4u;
    // NOP (addi to $zero)
label_3584b8:
    // 0x3584b8: 0x0  nop
    ctx->pc = 0x3584b8u;
    // NOP
label_3584bc:
    // 0x3584bc: 0x5000000  bltz        $t0, . + 4 + (0x0 << 2)
label_3584c0:
    if (ctx->pc == 0x3584C0u) {
        ctx->pc = 0x3584C0u;
            // 0x3584c0: 0x4000000  bltz        $zero, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x3584C4 - Handled by branch logic
        ctx->pc = 0x3584C4u;
        goto label_3584c4;
    }
    ctx->pc = 0x3584BCu;
    {
        const bool branch_taken_0x3584bc = (GPR_S32(ctx, 8) < 0);
        ctx->pc = 0x3584C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3584BCu;
            // 0x3584c0: 0x4000000  bltz        $zero, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x3584C4 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3584bc) {
            ctx->pc = 0x3584C0u;
            goto label_3584c0;
        }
    }
    ctx->pc = 0x3584C4u;
label_3584c4:
    // 0x3584c4: 0x0  nop
    ctx->pc = 0x3584c4u;
    // NOP
label_3584c8:
    // 0x3584c8: 0x0  nop
    ctx->pc = 0x3584c8u;
    // NOP
label_3584cc:
    // 0x3584cc: 0x0  nop
    ctx->pc = 0x3584ccu;
    // NOP
label_3584d0:
    // 0x3584d0: 0x107798  .word       0x00107798                   # mult        $t6, $zero, $s0 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3584d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 14, (int32_t)result); }
label_3584d4:
    // 0x3584d4: 0x1078a8  .word       0x001078A8                   # mfsa        $t7 # 00100080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3584d4u;
    SET_GPR_U32(ctx, 15, ctx->sa);
label_3584d8:
    // 0x3584d8: 0x107a30  tge         $zero, $s0, 488
    ctx->pc = 0x3584d8u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_3584dc:
    // 0x3584dc: 0x107b98  .word       0x00107B98                   # mult        $t7, $zero, $s0 # 00000380 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3584dcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 15, (int32_t)result); }
label_3584e0:
    // 0x3584e0: 0x107d90  .word       0x00107D90                   # mfhi        $t7 # 00100580 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3584e0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_3584e4:
    // 0x3584e4: 0x107ee0  .word       0x00107EE0                   # add         $t7, $zero, $s0 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3584e4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_3584e8:
    // 0x3584e8: 0x1080a8  .word       0x001080A8                   # mfsa        $s0 # 00100080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x3584e8u;
    SET_GPR_U32(ctx, 16, ctx->sa);
label_3584ec:
    // 0x3584ec: 0x108250  .word       0x00108250                   # mfhi        $s0 # 00100240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3584ecu;
    SET_GPR_U64(ctx, 16, ctx->hi);
label_3584f0:
    // 0x3584f0: 0x107810  .word       0x00107810                   # mfhi        $t7 # 00100000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3584f0u;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_3584f4:
    // 0x3584f4: 0x107960  .word       0x00107960                   # add         $t7, $zero, $s0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3584f4u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_3584f8:
    // 0x3584f8: 0x107ae0  .word       0x00107AE0                   # add         $t7, $zero, $s0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3584f8u;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 16);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
label_3584fc:
    // 0x3584fc: 0x107c90  .word       0x00107C90                   # mfhi        $t7 # 00100480 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x3584fcu;
    SET_GPR_U64(ctx, 15, ctx->hi);
label_358500:
    // 0x358500: 0x107e30  tge         $zero, $s0, 504
    ctx->pc = 0x358500u;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_358504:
    // 0x358504: 0x107fc0  sll         $t7, $s0, 31
    ctx->pc = 0x358504u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 16), 31));
label_358508:
    // 0x358508: 0x108180  sll         $s0, $s0, 6
    ctx->pc = 0x358508u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 6));
label_35850c:
    // 0x35850c: 0x108370  tge         $zero, $s0, 525
    ctx->pc = 0x35850cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 16)) { runtime->handleTrap(rdram, ctx); }
label_358510:
    // 0x358510: 0x0  nop
    ctx->pc = 0x358510u;
    // NOP
label_358514:
    // 0x358514: 0x0  nop
    ctx->pc = 0x358514u;
    // NOP
label_358518:
    // 0x358518: 0x0  nop
    ctx->pc = 0x358518u;
    // NOP
label_35851c:
    // 0x35851c: 0x0  nop
    ctx->pc = 0x35851cu;
    // NOP
label_358520:
    // 0x358520: 0x0  nop
    ctx->pc = 0x358520u;
    // NOP
label_358524:
    // 0x358524: 0x0  nop
    ctx->pc = 0x358524u;
    // NOP
label_358528:
    // 0x358528: 0x0  nop
    ctx->pc = 0x358528u;
    // NOP
label_35852c:
    // 0x35852c: 0x0  nop
    ctx->pc = 0x35852cu;
    // NOP
label_358530:
    // 0x358530: 0x0  nop
    ctx->pc = 0x358530u;
    // NOP
label_358534:
    // 0x358534: 0x0  nop
    ctx->pc = 0x358534u;
    // NOP
label_358538:
    // 0x358538: 0x0  nop
    ctx->pc = 0x358538u;
    // NOP
label_35853c:
    // 0x35853c: 0x0  nop
    ctx->pc = 0x35853cu;
    // NOP
label_358540:
    // 0x358540: 0x13101008  beq         $t8, $s0, . + 4 + (0x1008 << 2)
label_358544:
    if (ctx->pc == 0x358544u) {
        ctx->pc = 0x358544u;
            // 0x358544: 0x16161310  bne         $s0, $s6, . + 4 + (0x1310 << 2) (Delay Slot)
        // Likely branch instruction at 0x358544 - Handled by branch logic
        ctx->pc = 0x358548u;
        goto label_358548;
    }
    ctx->pc = 0x358540u;
    {
        const bool branch_taken_0x358540 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 16));
        ctx->pc = 0x358544u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358540u;
            // 0x358544: 0x16161310  bne         $s0, $s6, . + 4 + (0x1310 << 2) (Delay Slot)
        // Likely branch instruction at 0x358544 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358540) {
            ctx->pc = 0x35C564u;
            return;
        }
    }
    ctx->pc = 0x358548u;
label_358548:
    // 0x358548: 0x16161616  bne         $s0, $s6, . + 4 + (0x1616 << 2)
label_35854c:
    if (ctx->pc == 0x35854Cu) {
        ctx->pc = 0x35854Cu;
            // 0x35854c: 0x1b1a181a  .word       0x1B1A181A                   # blez        $t8, . + 4 + (0x181A << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x35854C - Handled by branch logic
        ctx->pc = 0x358550u;
        goto label_358550;
    }
    ctx->pc = 0x358548u;
    {
        const bool branch_taken_0x358548 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x35854Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358548u;
            // 0x35854c: 0x1b1a181a  .word       0x1B1A181A                   # blez        $t8, . + 4 + (0x181A << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x35854C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358548) {
            ctx->pc = 0x35DDA4u;
            return;
        }
    }
    ctx->pc = 0x358550u;
label_358550:
    // 0x358550: 0x1a1a1b1b  .word       0x1A1A1B1B                   # blez        $s0, . + 4 + (0x1B1B << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_358554:
    if (ctx->pc == 0x358554u) {
        ctx->pc = 0x358554u;
            // 0x358554: 0x1b1b1a1a  .word       0x1B1B1A1A                   # blez        $t8, . + 4 + (0x1A1A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x358554 - Handled by branch logic
        ctx->pc = 0x358558u;
        goto label_358558;
    }
    ctx->pc = 0x358550u;
    {
        const bool branch_taken_0x358550 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x358554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358550u;
            // 0x358554: 0x1b1b1a1a  .word       0x1B1B1A1A                   # blez        $t8, . + 4 + (0x1A1A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x358554 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358550) {
            ctx->pc = 0x35F1C0u;
            return;
        }
    }
    ctx->pc = 0x358558u;
label_358558:
    // 0x358558: 0x1d1d1d1b  .word       0x1D1D1D1B                   # bgtz        $t0, . + 4 + (0x1D1B << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
label_35855c:
    if (ctx->pc == 0x35855Cu) {
        ctx->pc = 0x35855Cu;
            // 0x35855c: 0x1d222222  .word       0x1D222222                   # bgtz        $t1, . + 4 + (0x2222 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x35855C - Handled by branch logic
        ctx->pc = 0x358560u;
        goto label_358560;
    }
    ctx->pc = 0x358558u;
    {
        const bool branch_taken_0x358558 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x35855Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358558u;
            // 0x35855c: 0x1d222222  .word       0x1D222222                   # bgtz        $t1, . + 4 + (0x2222 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x35855C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358558) {
            ctx->pc = 0x35F9C8u;
            return;
        }
    }
    ctx->pc = 0x358560u;
label_358560:
    // 0x358560: 0x1b1b1d1d  .word       0x1B1B1D1D                   # blez        $t8, . + 4 + (0x1D1D << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_358564:
    if (ctx->pc == 0x358564u) {
        ctx->pc = 0x358564u;
            // 0x358564: 0x20201d1d  addi        $zero, $at, 0x1D1D (Delay Slot)
        // NOP (addi to $zero)
        ctx->pc = 0x358568u;
        goto label_358568;
    }
    ctx->pc = 0x358560u;
    {
        const bool branch_taken_0x358560 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x358564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358560u;
            // 0x358564: 0x20201d1d  addi        $zero, $at, 0x1D1D (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        if (branch_taken_0x358560) {
            ctx->pc = 0x35F9D8u;
            return;
        }
    }
    ctx->pc = 0x358568u;
label_358568:
    // 0x358568: 0x26252222  addiu       $a1, $s1, 0x2222
    ctx->pc = 0x358568u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8738));
label_35856c:
    // 0x35856c: 0x22232325  addi        $v1, $s1, 0x2325
    ctx->pc = 0x35856cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)8997, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_358570:
    // 0x358570: 0x28262623  slti        $a2, $at, 0x2623
    ctx->pc = 0x358570u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)9763) ? 1 : 0);
label_358574:
    // 0x358574: 0x30302828  andi        $s0, $at, 0x2828
    ctx->pc = 0x358574u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)10280);
label_358578:
    // 0x358578: 0x38382e2e  xori        $t8, $at, 0x2E2E
    ctx->pc = 0x358578u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)11822);
label_35857c:
    // 0x35857c: 0x5345453a  beql        $k0, $a1, . + 4 + (0x453A << 2)
label_358580:
    if (ctx->pc == 0x358580u) {
        ctx->pc = 0x358580u;
            // 0x358580: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358580 - Handled by branch logic
        ctx->pc = 0x358584u;
        goto label_358584;
    }
    ctx->pc = 0x35857Cu;
    {
        const bool branch_taken_0x35857c = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x35857c) {
            ctx->pc = 0x358580u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35857Cu;
            // 0x358580: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358580 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x369A68u;
            return;
        }
    }
    ctx->pc = 0x358584u;
label_358584:
    // 0x358584: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_358588:
    if (ctx->pc == 0x358588u) {
        ctx->pc = 0x358588u;
            // 0x358588: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358588 - Handled by branch logic
        ctx->pc = 0x35858Cu;
        goto label_35858c;
    }
    ctx->pc = 0x358584u;
    {
        const bool branch_taken_0x358584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x358588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358584u;
            // 0x358588: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358588 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358584) {
            ctx->pc = 0x35C5C8u;
            return;
        }
    }
    ctx->pc = 0x35858Cu;
label_35858c:
    // 0x35858c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_358590:
    if (ctx->pc == 0x358590u) {
        ctx->pc = 0x358590u;
            // 0x358590: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358590 - Handled by branch logic
        ctx->pc = 0x358594u;
        goto label_358594;
    }
    ctx->pc = 0x35858Cu;
    {
        const bool branch_taken_0x35858c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x358590u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35858Cu;
            // 0x358590: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358590 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x35858c) {
            ctx->pc = 0x35C5D0u;
            return;
        }
    }
    ctx->pc = 0x358594u;
label_358594:
    // 0x358594: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_358598:
    if (ctx->pc == 0x358598u) {
        ctx->pc = 0x358598u;
            // 0x358598: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358598 - Handled by branch logic
        ctx->pc = 0x35859Cu;
        goto label_35859c;
    }
    ctx->pc = 0x358594u;
    {
        const bool branch_taken_0x358594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x358598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358594u;
            // 0x358598: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358598 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358594) {
            ctx->pc = 0x35C5D8u;
            return;
        }
    }
    ctx->pc = 0x35859Cu;
label_35859c:
    // 0x35859c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_3585a0:
    if (ctx->pc == 0x3585A0u) {
        ctx->pc = 0x3585A0u;
            // 0x3585a0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x3585A0 - Handled by branch logic
        ctx->pc = 0x3585A4u;
        goto label_3585a4;
    }
    ctx->pc = 0x35859Cu;
    {
        const bool branch_taken_0x35859c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x3585A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35859Cu;
            // 0x3585a0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x3585A0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x35859c) {
            ctx->pc = 0x35C5E0u;
            return;
        }
    }
    ctx->pc = 0x3585A4u;
label_3585a4:
    // 0x3585a4: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_3585a8:
    if (ctx->pc == 0x3585A8u) {
        ctx->pc = 0x3585A8u;
            // 0x3585a8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x3585A8 - Handled by branch logic
        ctx->pc = 0x3585ACu;
        goto label_3585ac;
    }
    ctx->pc = 0x3585A4u;
    {
        const bool branch_taken_0x3585a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x3585A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3585A4u;
            // 0x3585a8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x3585A8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585a4) {
            ctx->pc = 0x35C5E8u;
            return;
        }
    }
    ctx->pc = 0x3585ACu;
label_3585ac:
    // 0x3585ac: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_3585b0:
    if (ctx->pc == 0x3585B0u) {
        ctx->pc = 0x3585B0u;
            // 0x3585b0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x3585B0 - Handled by branch logic
        ctx->pc = 0x3585B4u;
        goto label_3585b4;
    }
    ctx->pc = 0x3585ACu;
    {
        const bool branch_taken_0x3585ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x3585B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3585ACu;
            // 0x3585b0: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x3585B0 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585ac) {
            ctx->pc = 0x35C5F0u;
            return;
        }
    }
    ctx->pc = 0x3585B4u;
label_3585b4:
    // 0x3585b4: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_3585b8:
    if (ctx->pc == 0x3585B8u) {
        ctx->pc = 0x3585B8u;
            // 0x3585b8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x3585B8 - Handled by branch logic
        ctx->pc = 0x3585BCu;
        goto label_3585bc;
    }
    ctx->pc = 0x3585B4u;
    {
        const bool branch_taken_0x3585b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x3585B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3585B4u;
            // 0x3585b8: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x3585B8 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585b4) {
            ctx->pc = 0x35C5F8u;
            return;
        }
    }
    ctx->pc = 0x3585BCu;
label_3585bc:
    // 0x3585bc: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_3585c0:
    if (ctx->pc == 0x3585C0u) {
        ctx->pc = 0x3585C0u;
            // 0x3585c0: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->pc = 0x3585C4u;
        goto label_3585c4;
    }
    ctx->pc = 0x3585BCu;
    {
        const bool branch_taken_0x3585bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x3585C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3585BCu;
            // 0x3585c0: 0x2  srl         $zero, $zero, 0 (Delay Slot)
        SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3585bc) {
            ctx->pc = 0x35C600u;
            return;
        }
    }
    ctx->pc = 0x3585C4u;
label_3585c4:
    // 0x3585c4: 0x0  nop
    ctx->pc = 0x3585c4u;
    // NOP
label_3585c8:
    // 0x3585c8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3585c8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3585cc:
    // 0x3585cc: 0x0  nop
    ctx->pc = 0x3585ccu;
    // NOP
label_3585d0:
    // 0x3585d0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3585d0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3585d4:
    // 0x3585d4: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3585d4u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3585d8:
    // 0x3585d8: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3585d8u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3585dc:
    // 0x3585dc: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x3585dcu;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_3585e0:
    // 0x3585e0: 0x0  nop
    ctx->pc = 0x3585e0u;
    // NOP
label_3585e4:
    // 0x3585e4: 0x0  nop
    ctx->pc = 0x3585e4u;
    // NOP
label_3585e8:
    // 0x3585e8: 0x0  nop
    ctx->pc = 0x3585e8u;
    // NOP
label_3585ec:
    // 0x3585ec: 0x0  nop
    ctx->pc = 0x3585ecu;
    // NOP
label_3585f0:
    // 0x3585f0: 0x2  srl         $zero, $zero, 0
    ctx->pc = 0x3585f0u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), 0));
label_3585f4:
    // 0x3585f4: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x3585f4u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_3585f8:
    // 0x3585f8: 0x0  nop
    ctx->pc = 0x3585f8u;
    // NOP
label_3585fc:
    // 0x3585fc: 0x6  srlv        $zero, $zero, $zero
    ctx->pc = 0x3585fcu;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_358600:
    // 0x358600: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x358600u;
    // Unhandled COP2 format: 0xA
label_358604:
    // 0x358604: 0x6962696c  ldl         $v0, 0x696C($t3)
    ctx->pc = 0x358604u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_358608:
    // 0x358608: 0x20207570  addi        $zero, $at, 0x7570
    ctx->pc = 0x358608u;
    // NOP (addi to $zero)
label_35860c:
    // 0x35860c: 0x30303133  andi        $s0, $at, 0x3133
    ctx->pc = 0x35860cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12595);
label_358610:
    // 0x358610: 0x13101008  beq         $t8, $s0, . + 4 + (0x1008 << 2)
label_358614:
    if (ctx->pc == 0x358614u) {
        ctx->pc = 0x358614u;
            // 0x358614: 0x16161310  bne         $s0, $s6, . + 4 + (0x1310 << 2) (Delay Slot)
        // Likely branch instruction at 0x358614 - Handled by branch logic
        ctx->pc = 0x358618u;
        goto label_358618;
    }
    ctx->pc = 0x358610u;
    {
        const bool branch_taken_0x358610 = (GPR_U64(ctx, 24) == GPR_U64(ctx, 16));
        ctx->pc = 0x358614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358610u;
            // 0x358614: 0x16161310  bne         $s0, $s6, . + 4 + (0x1310 << 2) (Delay Slot)
        // Likely branch instruction at 0x358614 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358610) {
            ctx->pc = 0x35C634u;
            return;
        }
    }
    ctx->pc = 0x358618u;
label_358618:
    // 0x358618: 0x16161616  bne         $s0, $s6, . + 4 + (0x1616 << 2)
label_35861c:
    if (ctx->pc == 0x35861Cu) {
        ctx->pc = 0x35861Cu;
            // 0x35861c: 0x1b1a181a  .word       0x1B1A181A                   # blez        $t8, . + 4 + (0x181A << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x35861C - Handled by branch logic
        ctx->pc = 0x358620u;
        goto label_358620;
    }
    ctx->pc = 0x358618u;
    {
        const bool branch_taken_0x358618 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 22));
        ctx->pc = 0x35861Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358618u;
            // 0x35861c: 0x1b1a181a  .word       0x1B1A181A                   # blez        $t8, . + 4 + (0x181A << 2) # 001A0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x35861C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358618) {
            ctx->pc = 0x35DE74u;
            return;
        }
    }
    ctx->pc = 0x358620u;
label_358620:
    // 0x358620: 0x1a1a1b1b  .word       0x1A1A1B1B                   # blez        $s0, . + 4 + (0x1B1B << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
label_358624:
    if (ctx->pc == 0x358624u) {
        ctx->pc = 0x358624u;
            // 0x358624: 0x1b1b1a1a  .word       0x1B1B1A1A                   # blez        $t8, . + 4 + (0x1A1A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x358624 - Handled by branch logic
        ctx->pc = 0x358628u;
        goto label_358628;
    }
    ctx->pc = 0x358620u;
    {
        const bool branch_taken_0x358620 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x358624u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358620u;
            // 0x358624: 0x1b1b1a1a  .word       0x1B1B1A1A                   # blez        $t8, . + 4 + (0x1A1A << 2) # 001B0000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x358624 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358620) {
            ctx->pc = 0x35F290u;
            return;
        }
    }
    ctx->pc = 0x358628u;
label_358628:
    // 0x358628: 0x1d1d1d1b  .word       0x1D1D1D1B                   # bgtz        $t0, . + 4 + (0x1D1B << 2) # 001D0000 <InstrIdType: CPU_NORMAL>
label_35862c:
    if (ctx->pc == 0x35862Cu) {
        ctx->pc = 0x35862Cu;
            // 0x35862c: 0x1d222222  .word       0x1D222222                   # bgtz        $t1, . + 4 + (0x2222 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x35862C - Handled by branch logic
        ctx->pc = 0x358630u;
        goto label_358630;
    }
    ctx->pc = 0x358628u;
    {
        const bool branch_taken_0x358628 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x35862Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358628u;
            // 0x35862c: 0x1d222222  .word       0x1D222222                   # bgtz        $t1, . + 4 + (0x2222 << 2) # 00020000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x35862C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358628) {
            ctx->pc = 0x35FA98u;
            return;
        }
    }
    ctx->pc = 0x358630u;
label_358630:
    // 0x358630: 0x1b1b1d1d  .word       0x1B1B1D1D                   # blez        $t8, . + 4 + (0x1D1D << 2) # 001B0000 <InstrIdType: CPU_NORMAL>
label_358634:
    if (ctx->pc == 0x358634u) {
        ctx->pc = 0x358634u;
            // 0x358634: 0x20201d1d  addi        $zero, $at, 0x1D1D (Delay Slot)
        // NOP (addi to $zero)
        ctx->pc = 0x358638u;
        goto label_358638;
    }
    ctx->pc = 0x358630u;
    {
        const bool branch_taken_0x358630 = (GPR_S32(ctx, 24) <= 0);
        ctx->pc = 0x358634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358630u;
            // 0x358634: 0x20201d1d  addi        $zero, $at, 0x1D1D (Delay Slot)
        // NOP (addi to $zero)
        ctx->in_delay_slot = false;
        if (branch_taken_0x358630) {
            ctx->pc = 0x35FAA8u;
            return;
        }
    }
    ctx->pc = 0x358638u;
label_358638:
    // 0x358638: 0x26252222  addiu       $a1, $s1, 0x2222
    ctx->pc = 0x358638u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8738));
label_35863c:
    // 0x35863c: 0x22232325  addi        $v1, $s1, 0x2325
    ctx->pc = 0x35863cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 17), (int32_t)8997, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 3, (int32_t)tmp); }
label_358640:
    // 0x358640: 0x28262623  slti        $a2, $at, 0x2623
    ctx->pc = 0x358640u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 1) < (int64_t)(int32_t)9763) ? 1 : 0);
label_358644:
    // 0x358644: 0x30302828  andi        $s0, $at, 0x2828
    ctx->pc = 0x358644u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)10280);
label_358648:
    // 0x358648: 0x38382e2e  xori        $t8, $at, 0x2E2E
    ctx->pc = 0x358648u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 1) ^ (uint64_t)(uint16_t)11822);
label_35864c:
    // 0x35864c: 0x5345453a  beql        $k0, $a1, . + 4 + (0x453A << 2)
label_358650:
    if (ctx->pc == 0x358650u) {
        ctx->pc = 0x358650u;
            // 0x358650: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358650 - Handled by branch logic
        ctx->pc = 0x358654u;
        goto label_358654;
    }
    ctx->pc = 0x35864Cu;
    {
        const bool branch_taken_0x35864c = (GPR_U64(ctx, 26) == GPR_U64(ctx, 5));
        if (branch_taken_0x35864c) {
            ctx->pc = 0x358650u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35864Cu;
            // 0x358650: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358650 - Handled by branch logic
        ctx->in_delay_slot = false;
            ctx->pc = 0x369B38u;
            return;
        }
    }
    ctx->pc = 0x358654u;
label_358654:
    // 0x358654: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_358658:
    if (ctx->pc == 0x358658u) {
        ctx->pc = 0x358658u;
            // 0x358658: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358658 - Handled by branch logic
        ctx->pc = 0x35865Cu;
        goto label_35865c;
    }
    ctx->pc = 0x358654u;
    {
        const bool branch_taken_0x358654 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x358658u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358654u;
            // 0x358658: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2) (Delay Slot)
        // Likely branch instruction at 0x358658 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358654) {
            ctx->pc = 0x35C698u;
            return;
        }
    }
    ctx->pc = 0x35865Cu;
label_35865c:
    // 0x35865c: 0x10101010  beq         $zero, $s0, . + 4 + (0x1010 << 2)
label_358660:
    if (ctx->pc == 0x358660u) {
        ctx->pc = 0x358660u;
            // 0x358660: 0x4210000  bgez        $at, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x358664 - Handled by branch logic
        ctx->pc = 0x358664u;
        goto label_358664;
    }
    ctx->pc = 0x35865Cu;
    {
        const bool branch_taken_0x35865c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 16));
        ctx->pc = 0x358660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35865Cu;
            // 0x358660: 0x4210000  bgez        $at, . + 4 + (0x0 << 2) (Delay Slot)
        // REGIMM branch instruction to 0x358664 - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x35865c) {
            ctx->pc = 0x35C6A0u;
            return;
        }
    }
    ctx->pc = 0x358664u;
label_358664:
    // 0x358664: 0x3e00842  .word       0x03E00842                   # srl         $at, $zero, 1 # 03E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358664u;
    SET_GPR_S32(ctx, 1, (int32_t)SRL32(GPR_U32(ctx, 0), 1));
label_358668:
    // 0x358668: 0x14a51084  bne         $a1, $a1, . + 4 + (0x1084 << 2)
label_35866c:
    if (ctx->pc == 0x35866Cu) {
        ctx->pc = 0x35866Cu;
            // 0x35866c: 0x1ce718c6  .word       0x1CE718C6                   # bgtz        $a3, . + 4 + (0x18C6 << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x35866C - Handled by branch logic
        ctx->pc = 0x358670u;
        goto label_358670;
    }
    ctx->pc = 0x358668u;
    {
        const bool branch_taken_0x358668 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 5));
        ctx->pc = 0x35866Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358668u;
            // 0x35866c: 0x1ce718c6  .word       0x1CE718C6                   # bgtz        $a3, . + 4 + (0x18C6 << 2) # 00070000 <InstrIdType: CPU_NORMAL> (Delay Slot)
        // Likely branch instruction at 0x35866C - Handled by branch logic
        ctx->in_delay_slot = false;
        if (branch_taken_0x358668) {
            ctx->pc = 0x35C87Cu;
            return;
        }
    }
    ctx->pc = 0x358670u;
label_358670:
    // 0x358670: 0x2529001f  addiu       $t1, $t1, 0x1F
    ctx->pc = 0x358670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 31));
label_358674:
    // 0x358674: 0x7c00294a  sq          $zero, 0x294A($zero)
    ctx->pc = 0x358674u;
    WRITE128(ADD32(GPR_U32(ctx, 0), 10570), GPR_VEC(ctx, 0));
label_358678:
    // 0x358678: 0x35ad318c  ori         $t5, $t5, 0x318C
    ctx->pc = 0x358678u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | (uint64_t)(uint16_t)12684);
label_35867c:
    // 0x35867c: 0x39ce7fff  xori        $t6, $t6, 0x7FFF
    ctx->pc = 0x35867cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) ^ (uint64_t)(uint16_t)32767);
label_358680:
    // 0x358680: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x358680u;
    // Unhandled COP2 format: 0xA
label_358684:
    // 0x358684: 0x6b62696c  ldl         $v0, 0x696C($k1)
    ctx->pc = 0x358684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 27), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_358688:
    // 0x358688: 0x6c6e7265  ldr         $t6, 0x7265($v1)
    ctx->pc = 0x358688u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 29285); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 14, (GPR_U64(ctx, 14) & keepMask) | (mem >> shift)); }
label_35868c:
    // 0x35868c: 0x30303133  andi        $s0, $at, 0x3133
    ctx->pc = 0x35868cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12595);
label_358690:
    // 0x358690: 0x0  nop
    ctx->pc = 0x358690u;
    // NOP
label_358694:
    // 0x358694: 0x1dfbf80  .word       0x01DFBF80                   # sll         $s7, $ra, 30 # 01C00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358694u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 31), 30));
label_358698:
    // 0x358698: 0x0  nop
    ctx->pc = 0x358698u;
    // NOP
label_35869c:
    // 0x35869c: 0x0  nop
    ctx->pc = 0x35869cu;
    // NOP
label_3586a0:
    // 0x3586a0: 0x0  nop
    ctx->pc = 0x3586a0u;
    // NOP
label_3586a4:
    // 0x3586a4: 0x0  nop
    ctx->pc = 0x3586a4u;
    // NOP
label_3586a8:
    // 0x3586a8: 0x0  nop
    ctx->pc = 0x3586a8u;
    // NOP
label_3586ac:
    // 0x3586ac: 0x0  nop
    ctx->pc = 0x3586acu;
    // NOP
label_3586b0:
    // 0x3586b0: 0x0  nop
    ctx->pc = 0x3586b0u;
    // NOP
label_3586b4:
    // 0x3586b4: 0x0  nop
    ctx->pc = 0x3586b4u;
    // NOP
label_3586b8:
    // 0x3586b8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586b8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586bc:
    // 0x3586bc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586bcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586c0:
    // 0x3586c0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586c0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586c4:
    // 0x3586c4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586c4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586c8:
    // 0x3586c8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586c8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586cc:
    // 0x3586cc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586ccu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586d0:
    // 0x3586d0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586d0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586d4:
    // 0x3586d4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586d4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586d8:
    // 0x3586d8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586d8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586dc:
    // 0x3586dc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586dcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586e0:
    // 0x3586e0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586e0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586e4:
    // 0x3586e4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586e4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586e8:
    // 0x3586e8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586e8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586ec:
    // 0x3586ec: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586ecu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586f0:
    // 0x3586f0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586f0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586f4:
    // 0x3586f4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586f4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586f8:
    // 0x3586f8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586f8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_3586fc:
    // 0x3586fc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x3586fcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358700:
    // 0x358700: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358700u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358704:
    // 0x358704: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358704u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358708:
    // 0x358708: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358708u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_35870c:
    // 0x35870c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x35870cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358710:
    // 0x358710: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358710u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358714:
    // 0x358714: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358714u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358718:
    // 0x358718: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358718u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_35871c:
    // 0x35871c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x35871cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358720:
    // 0x358720: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358720u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358724:
    // 0x358724: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358724u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358728:
    // 0x358728: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358728u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_35872c:
    // 0x35872c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x35872cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358730:
    // 0x358730: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358730u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358734:
    // 0x358734: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358734u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358738:
    // 0x358738: 0x0  nop
    ctx->pc = 0x358738u;
    // NOP
label_35873c:
    // 0x35873c: 0x0  nop
    ctx->pc = 0x35873cu;
    // NOP
label_358740:
    // 0x358740: 0x0  nop
    ctx->pc = 0x358740u;
    // NOP
label_358744:
    // 0x358744: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358744u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358748:
    // 0x358748: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358748u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_35874c:
    // 0x35874c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x35874cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358750:
    // 0x358750: 0x3da858  .word       0x003DA858                   # mult        $s5, $at, $sp # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x358750u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 21, (int32_t)result); }
label_358754:
    // 0x358754: 0x0  nop
    ctx->pc = 0x358754u;
    // NOP
label_358758:
    // 0x358758: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358758u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_35875c:
    // 0x35875c: 0x0  nop
    ctx->pc = 0x35875cu;
    // NOP
label_358760:
    // 0x358760: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x358760u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_358764:
    // 0x358764: 0x3daa70  tge         $at, $sp, 681
    ctx->pc = 0x358764u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_358768:
    // 0x358768: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x358768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_35876c:
    // 0x35876c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x35876cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358770:
    // 0x358770: 0x24435300  addiu       $v1, $v0, 0x5300
    ctx->pc = 0x358770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21248));
label_358774:
    // 0x358774: 0x0  nop
    ctx->pc = 0x358774u;
    // NOP
label_358778:
    // 0x358778: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_35877c:
    // 0x35877c: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_358780:
    if (ctx->pc == 0x358780u) {
        ctx->pc = 0x358780u;
            // 0x358780: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x358784u;
        goto label_358784;
    }
    ctx->pc = 0x35877Cu;
    {
        const bool branch_taken_0x35877c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x358780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35877Cu;
            // 0x358780: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35877c) {
            ctx->pc = 0x35878Cu;
            goto label_35878c;
        }
    }
    ctx->pc = 0x358784u;
label_358784:
    // 0x358784: 0x3e00008  jr          $ra
label_358788:
    if (ctx->pc == 0x358788u) {
        ctx->pc = 0x358788u;
            // 0x358788: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x35878Cu;
        goto label_35878c;
    }
    ctx->pc = 0x358784u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358784u;
            // 0x358788: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35878Cu;
label_35878c:
    // 0x35878c: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x35878cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_358790:
    // 0x358790: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_358794:
    if (ctx->pc == 0x358794u) {
        ctx->pc = 0x358794u;
            // 0x358794: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x358798u;
        goto label_358798;
    }
    ctx->pc = 0x358790u;
    {
        const bool branch_taken_0x358790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358794u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358790u;
            // 0x358794: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358790) {
            ctx->pc = 0x358778u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_358778;
        }
    }
    ctx->pc = 0x358798u;
label_358798:
    // 0x358798: 0x3e00008  jr          $ra
label_35879c:
    if (ctx->pc == 0x35879Cu) {
        ctx->pc = 0x35879Cu;
            // 0x35879c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3587A0u;
        goto label_3587a0;
    }
    ctx->pc = 0x358798u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35879Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358798u;
            // 0x35879c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3587A0u;
label_3587a0:
    // 0x3587a0: 0x51602  srl         $v0, $a1, 24
    ctx->pc = 0x3587a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 24));
label_3587a4:
    // 0x3587a4: 0x304300f0  andi        $v1, $v0, 0xF0
    ctx->pc = 0x3587a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_3587a8:
    // 0x3587a8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x3587a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_3587ac:
    // 0x3587ac: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_3587b0:
    if (ctx->pc == 0x3587B0u) {
        ctx->pc = 0x3587B0u;
            // 0x3587b0: 0x2c620031  sltiu       $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
        ctx->pc = 0x3587B4u;
        goto label_3587b4;
    }
    ctx->pc = 0x3587ACu;
    {
        const bool branch_taken_0x3587ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3587B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3587ACu;
            // 0x3587b0: 0x2c620031  sltiu       $v0, $v1, 0x31 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587ac) {
            ctx->pc = 0x358800u;
            goto label_358800;
        }
    }
    ctx->pc = 0x3587B4u;
label_3587b4:
    // 0x3587b4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3587b8:
    if (ctx->pc == 0x3587B8u) {
        ctx->pc = 0x3587B8u;
            // 0x3587b8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x3587BCu;
        goto label_3587bc;
    }
    ctx->pc = 0x3587B4u;
    {
        const bool branch_taken_0x3587b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3587B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3587B4u;
            // 0x3587b8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587b4) {
            ctx->pc = 0x3587DCu;
            goto label_3587dc;
        }
    }
    ctx->pc = 0x3587BCu;
label_3587bc:
    // 0x3587bc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_3587c0:
    if (ctx->pc == 0x3587C0u) {
        ctx->pc = 0x3587C0u;
            // 0x3587c0: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->pc = 0x3587C4u;
        goto label_3587c4;
    }
    ctx->pc = 0x3587BCu;
    {
        const bool branch_taken_0x3587bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3587C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3587BCu;
            // 0x3587c0: 0x2c620011  sltiu       $v0, $v1, 0x11 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587bc) {
            ctx->pc = 0x3587F8u;
            goto label_3587f8;
        }
    }
    ctx->pc = 0x3587C4u;
label_3587c4:
    // 0x3587c4: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_3587c8:
    if (ctx->pc == 0x3587C8u) {
        ctx->pc = 0x3587C8u;
            // 0x3587c8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->pc = 0x3587CCu;
        goto label_3587cc;
    }
    ctx->pc = 0x3587C4u;
    {
        const bool branch_taken_0x3587c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3587C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3587C4u;
            // 0x3587c8: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587c4) {
            ctx->pc = 0x3587F0u;
            goto label_3587f0;
        }
    }
    ctx->pc = 0x3587CCu;
label_3587cc:
    // 0x3587cc: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_3587d0:
    if (ctx->pc == 0x3587D0u) {
        ctx->pc = 0x3587D0u;
            // 0x3587d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3587D4u;
        goto label_3587d4;
    }
    ctx->pc = 0x3587CCu;
    {
        const bool branch_taken_0x3587cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3587D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3587CCu;
            // 0x3587d0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587cc) {
            ctx->pc = 0x358800u;
            goto label_358800;
        }
    }
    ctx->pc = 0x3587D4u;
label_3587d4:
    // 0x3587d4: 0x10000014  b           . + 4 + (0x14 << 2)
label_3587d8:
    if (ctx->pc == 0x3587D8u) {
        ctx->pc = 0x3587DCu;
        goto label_3587dc;
    }
    ctx->pc = 0x3587D4u;
    {
        const bool branch_taken_0x3587d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3587d4) {
            ctx->pc = 0x358828u;
            goto label_358828;
        }
    }
    ctx->pc = 0x3587DCu;
label_3587dc:
    // 0x3587dc: 0x24020050  addiu       $v0, $zero, 0x50
    ctx->pc = 0x3587dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_3587e0:
    // 0x3587e0: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_3587e4:
    if (ctx->pc == 0x3587E4u) {
        ctx->pc = 0x3587E4u;
            // 0x3587e4: 0x2c620051  sltiu       $v0, $v1, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
        ctx->pc = 0x3587E8u;
        goto label_3587e8;
    }
    ctx->pc = 0x3587E0u;
    {
        const bool branch_taken_0x3587e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x3587E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3587E0u;
            // 0x3587e4: 0x2c620051  sltiu       $v0, $v1, 0x51 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)81) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587e0) {
            ctx->pc = 0x3587F8u;
            goto label_3587f8;
        }
    }
    ctx->pc = 0x3587E8u;
label_3587e8:
    // 0x3587e8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_3587ec:
    if (ctx->pc == 0x3587ECu) {
        ctx->pc = 0x3587ECu;
            // 0x3587ec: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->pc = 0x3587F0u;
        goto label_3587f0;
    }
    ctx->pc = 0x3587E8u;
    {
        const bool branch_taken_0x3587e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3587ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3587E8u;
            // 0x3587ec: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3587e8) {
            ctx->pc = 0x3587F8u;
            goto label_3587f8;
        }
    }
    ctx->pc = 0x3587F0u;
label_3587f0:
    // 0x3587f0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_3587f4:
    if (ctx->pc == 0x3587F4u) {
        ctx->pc = 0x3587F8u;
        goto label_3587f8;
    }
    ctx->pc = 0x3587F0u;
    {
        const bool branch_taken_0x3587f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x3587f0) {
            ctx->pc = 0x358800u;
            goto label_358800;
        }
    }
    ctx->pc = 0x3587F8u;
label_3587f8:
    // 0x3587f8: 0x3e00008  jr          $ra
label_3587fc:
    if (ctx->pc == 0x3587FCu) {
        ctx->pc = 0x3587FCu;
            // 0x3587fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x358800u;
        goto label_358800;
    }
    ctx->pc = 0x3587F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3587FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3587F8u;
            // 0x3587fc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358800u;
label_358800:
    // 0x358800: 0x40842800  mtc0        $a0, PageMask
    ctx->pc = 0x358800u;
    ctx->cop0_pagemask = GPR_U32(ctx, 4) & 0x01FFE000;
label_358804:
    // 0x358804: 0x40855000  mtc0        $a1, EntryHi
    ctx->pc = 0x358804u;
    ctx->cop0_entryhi = GPR_U32(ctx, 5) & 0xC00000FF;
label_358808:
    // 0x358808: 0x40861000  mtc0        $a2, EntryLo0
    ctx->pc = 0x358808u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 6) & 0x3FFFFFFF;
label_35880c:
    // 0x35880c: 0x40871800  mtc0        $a3, EntryLo1
    ctx->pc = 0x35880cu;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 7) & 0x3FFFFFFF;
label_358810:
    // 0x358810: 0x40f  sync.p
    ctx->pc = 0x358810u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_358814:
    // 0x358814: 0x42000006  tlbwr
    ctx->pc = 0x358814u;
    runtime->handleTLBWR(rdram, ctx);
label_358818:
    // 0x358818: 0x40f  sync.p
    ctx->pc = 0x358818u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35881c:
    // 0x35881c: 0x42000008  tlbp
    ctx->pc = 0x35881cu;
    runtime->handleTLBP(rdram, ctx);
label_358820:
    // 0x358820: 0x40f  sync.p
    ctx->pc = 0x358820u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_358824:
    // 0x358824: 0x40020000  mfc0        $v0, Index
    ctx->pc = 0x358824u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_index);
label_358828:
    // 0x358828: 0x3e00008  jr          $ra
label_35882c:
    if (ctx->pc == 0x35882Cu) {
        ctx->pc = 0x358830u;
        goto label_358830;
    }
    ctx->pc = 0x358828u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358830u;
label_358830:
    // 0x358830: 0x2c820030  sltiu       $v0, $a0, 0x30
    ctx->pc = 0x358830u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_358834:
    // 0x358834: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_358838:
    if (ctx->pc == 0x358838u) {
        ctx->pc = 0x358838u;
            // 0x358838: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x35883Cu;
        goto label_35883c;
    }
    ctx->pc = 0x358834u;
    {
        const bool branch_taken_0x358834 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x358838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358834u;
            // 0x358838: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358834) {
            ctx->pc = 0x358864u;
            goto label_358864;
        }
    }
    ctx->pc = 0x35883Cu;
label_35883c:
    // 0x35883c: 0x40840000  mtc0        $a0, Index
    ctx->pc = 0x35883cu;
    ctx->cop0_index = GPR_U32(ctx, 4) & 0x3F;
label_358840:
    // 0x358840: 0x40852800  mtc0        $a1, PageMask
    ctx->pc = 0x358840u;
    ctx->cop0_pagemask = GPR_U32(ctx, 5) & 0x01FFE000;
label_358844:
    // 0x358844: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x358844u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
label_358848:
    // 0x358848: 0x40871000  mtc0        $a3, EntryLo0
    ctx->pc = 0x358848u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 7) & 0x3FFFFFFF;
label_35884c:
    // 0x35884c: 0x40881800  mtc0        $t0, EntryLo1
    ctx->pc = 0x35884cu;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 8) & 0x3FFFFFFF;
label_358850:
    // 0x358850: 0x40f  sync.p
    ctx->pc = 0x358850u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_358854:
    // 0x358854: 0x42000002  tlbwi
    ctx->pc = 0x358854u;
    runtime->handleTLBWI(rdram, ctx);
label_358858:
    // 0x358858: 0x40f  sync.p
    ctx->pc = 0x358858u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35885c:
    // 0x35885c: 0x3e00008  jr          $ra
label_358860:
    if (ctx->pc == 0x358860u) {
        ctx->pc = 0x358860u;
            // 0x358860: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358864u;
        goto label_358864;
    }
    ctx->pc = 0x35885Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358860u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35885Cu;
            // 0x358860: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358864u;
label_358864:
    // 0x358864: 0x3e00008  jr          $ra
label_358868:
    if (ctx->pc == 0x358868u) {
        ctx->pc = 0x35886Cu;
        goto label_35886c;
    }
    ctx->pc = 0x358864u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35886Cu;
label_35886c:
    // 0x35886c: 0x0  nop
    ctx->pc = 0x35886cu;
    // NOP
label_358870:
    // 0x358870: 0x2c820030  sltiu       $v0, $a0, 0x30
    ctx->pc = 0x358870u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)48) ? 1 : 0);
label_358874:
    // 0x358874: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_358878:
    if (ctx->pc == 0x358878u) {
        ctx->pc = 0x35887Cu;
        goto label_35887c;
    }
    ctx->pc = 0x358874u;
    {
        const bool branch_taken_0x358874 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x358874) {
            ctx->pc = 0x358884u;
            goto label_358884;
        }
    }
    ctx->pc = 0x35887Cu;
label_35887c:
    // 0x35887c: 0x3e00008  jr          $ra
label_358880:
    if (ctx->pc == 0x358880u) {
        ctx->pc = 0x358880u;
            // 0x358880: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x358884u;
        goto label_358884;
    }
    ctx->pc = 0x35887Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35887Cu;
            // 0x358880: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358884u;
label_358884:
    // 0x358884: 0x40840000  mtc0        $a0, Index
    ctx->pc = 0x358884u;
    ctx->cop0_index = GPR_U32(ctx, 4) & 0x3F;
label_358888:
    // 0x358888: 0x40f  sync.p
    ctx->pc = 0x358888u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_35888c:
    // 0x35888c: 0x42000001  tlbr
    ctx->pc = 0x35888cu;
    runtime->handleTLBR(rdram, ctx);
label_358890:
    // 0x358890: 0x40f  sync.p
    ctx->pc = 0x358890u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_358894:
    // 0x358894: 0x40022800  mfc0        $v0, PageMask
    ctx->pc = 0x358894u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_pagemask);
label_358898:
    // 0x358898: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x358898u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_35889c:
    // 0x35889c: 0x40035000  mfc0        $v1, EntryHi
    ctx->pc = 0x35889cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_entryhi);
label_3588a0:
    // 0x3588a0: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3588a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_3588a4:
    // 0x3588a4: 0x40021000  mfc0        $v0, EntryLo0
    ctx->pc = 0x3588a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_entrylo0);
label_3588a8:
    // 0x3588a8: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x3588a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_3588ac:
    // 0x3588ac: 0x40031800  mfc0        $v1, EntryLo1
    ctx->pc = 0x3588acu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_entrylo1);
label_3588b0:
    // 0x3588b0: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x3588b0u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
label_3588b4:
    // 0x3588b4: 0x3e00008  jr          $ra
label_3588b8:
    if (ctx->pc == 0x3588B8u) {
        ctx->pc = 0x3588B8u;
            // 0x3588b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3588BCu;
        goto label_3588bc;
    }
    ctx->pc = 0x3588B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3588B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3588B4u;
            // 0x3588b8: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3588BCu;
label_3588bc:
    // 0x3588bc: 0x0  nop
    ctx->pc = 0x3588bcu;
    // NOP
label_3588c0:
    // 0x3588c0: 0x40845000  mtc0        $a0, EntryHi
    ctx->pc = 0x3588c0u;
    ctx->cop0_entryhi = GPR_U32(ctx, 4) & 0xC00000FF;
label_3588c4:
    // 0x3588c4: 0x40f  sync.p
    ctx->pc = 0x3588c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3588c8:
    // 0x3588c8: 0x42000008  tlbp
    ctx->pc = 0x3588c8u;
    runtime->handleTLBP(rdram, ctx);
label_3588cc:
    // 0x3588cc: 0x40f  sync.p
    ctx->pc = 0x3588ccu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3588d0:
    // 0x3588d0: 0x40040000  mfc0        $a0, Index
    ctx->pc = 0x3588d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_index);
label_3588d4:
    // 0x3588d4: 0x4810003  bgez        $a0, . + 4 + (0x3 << 2)
label_3588d8:
    if (ctx->pc == 0x3588D8u) {
        ctx->pc = 0x3588DCu;
        goto label_3588dc;
    }
    ctx->pc = 0x3588D4u;
    {
        const bool branch_taken_0x3588d4 = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x3588d4) {
            ctx->pc = 0x3588E4u;
            goto label_3588e4;
        }
    }
    ctx->pc = 0x3588DCu;
label_3588dc:
    // 0x3588dc: 0x10000009  b           . + 4 + (0x9 << 2)
label_3588e0:
    if (ctx->pc == 0x3588E0u) {
        ctx->pc = 0x3588E0u;
            // 0x3588e0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3588E4u;
        goto label_3588e4;
    }
    ctx->pc = 0x3588DCu;
    {
        const bool branch_taken_0x3588dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3588E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3588DCu;
            // 0x3588e0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3588dc) {
            ctx->pc = 0x358904u;
            goto label_358904;
        }
    }
    ctx->pc = 0x3588E4u;
label_3588e4:
    // 0x3588e4: 0x42000001  tlbr
    ctx->pc = 0x3588e4u;
    runtime->handleTLBR(rdram, ctx);
label_3588e8:
    // 0x3588e8: 0x40f  sync.p
    ctx->pc = 0x3588e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3588ec:
    // 0x3588ec: 0x40022800  mfc0        $v0, PageMask
    ctx->pc = 0x3588ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_pagemask);
label_3588f0:
    // 0x3588f0: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x3588f0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_3588f4:
    // 0x3588f4: 0x40031000  mfc0        $v1, EntryLo0
    ctx->pc = 0x3588f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_entrylo0);
label_3588f8:
    // 0x3588f8: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x3588f8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_3588fc:
    // 0x3588fc: 0x40021800  mfc0        $v0, EntryLo1
    ctx->pc = 0x3588fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_entrylo1);
label_358900:
    // 0x358900: 0xace20000  sw          $v0, 0x0($a3)
    ctx->pc = 0x358900u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
label_358904:
    // 0x358904: 0x3e00008  jr          $ra
label_358908:
    if (ctx->pc == 0x358908u) {
        ctx->pc = 0x358908u;
            // 0x358908: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35890Cu;
        goto label_35890c;
    }
    ctx->pc = 0x358904u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358908u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358904u;
            // 0x358908: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35890Cu;
label_35890c:
    // 0x35890c: 0x0  nop
    ctx->pc = 0x35890cu;
    // NOP
label_358910:
    // 0x358910: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x358910u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_358914:
    // 0x358914: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x358914u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_358918:
    // 0x358918: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x358918u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_35891c:
    // 0x35891c: 0x32020fff  andi        $v0, $s0, 0xFFF
    ctx->pc = 0x35891cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)4095);
label_358920:
    // 0x358920: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_358924:
    if (ctx->pc == 0x358924u) {
        ctx->pc = 0x358924u;
            // 0x358924: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x358928u;
        goto label_358928;
    }
    ctx->pc = 0x358920u;
    {
        const bool branch_taken_0x358920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358924u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358920u;
            // 0x358924: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358920) {
            ctx->pc = 0x358940u;
            goto label_358940;
        }
    }
    ctx->pc = 0x358928u;
label_358928:
    // 0x358928: 0x3c02000f  lui         $v0, 0xF
    ctx->pc = 0x358928u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15 << 16));
label_35892c:
    // 0x35892c: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x35892cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_358930:
    // 0x358930: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x358930u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_358934:
    // 0x358934: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x358934u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_358938:
    // 0x358938: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_35893c:
    if (ctx->pc == 0x35893Cu) {
        ctx->pc = 0x35893Cu;
            // 0x35893c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->pc = 0x358940u;
        goto label_358940;
    }
    ctx->pc = 0x358938u;
    {
        const bool branch_taken_0x358938 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35893Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358938u;
            // 0x35893c: 0x3c047000  lui         $a0, 0x7000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)28672 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358938) {
            ctx->pc = 0x358948u;
            goto label_358948;
        }
    }
    ctx->pc = 0x358940u;
label_358940:
    // 0x358940: 0x1000003b  b           . + 4 + (0x3B << 2)
label_358944:
    if (ctx->pc == 0x358944u) {
        ctx->pc = 0x358944u;
            // 0x358944: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x358948u;
        goto label_358948;
    }
    ctx->pc = 0x358940u;
    {
        const bool branch_taken_0x358940 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358940u;
            // 0x358944: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358940) {
            ctx->pc = 0x358A30u;
            goto label_358a30;
        }
    }
    ctx->pc = 0x358948u;
label_358948:
    // 0x358948: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x358948u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_35894c:
    // 0x35894c: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x35894cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
label_358950:
    // 0x358950: 0x37a60004  ori         $a2, $sp, 0x4
    ctx->pc = 0x358950u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
label_358954:
    // 0x358954: 0xc01d456  jal         func_075158
label_358958:
    if (ctx->pc == 0x358958u) {
        ctx->pc = 0x358958u;
            // 0x358958: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->pc = 0x35895Cu;
        goto label_35895c;
    }
    ctx->pc = 0x358954u;
    SET_GPR_U32(ctx, 31, 0x35895Cu);
    ctx->pc = 0x358958u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358954u;
            // 0x358958: 0x37a70008  ori         $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
    ctx->pc = 0x75158u;
    {
        auto targetFn = runtime->lookupFunction(0x75158u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35895Cu; }
        if (ctx->pc != 0x35895Cu) { return; }
    }
    ctx->pc = 0x35895Cu;
label_35895c:
    // 0x35895c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x35895cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_358960:
    // 0x358960: 0x4a10009  bgez        $a1, . + 4 + (0x9 << 2)
label_358964:
    if (ctx->pc == 0x358964u) {
        ctx->pc = 0x358968u;
        goto label_358968;
    }
    ctx->pc = 0x358960u;
    {
        const bool branch_taken_0x358960 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x358960) {
            ctx->pc = 0x358988u;
            goto label_358988;
        }
    }
    ctx->pc = 0x358968u;
label_358968:
    // 0x358968: 0x12000031  beqz        $s0, . + 4 + (0x31 << 2)
label_35896c:
    if (ctx->pc == 0x35896Cu) {
        ctx->pc = 0x35896Cu;
            // 0x35896c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x358970u;
        goto label_358970;
    }
    ctx->pc = 0x358968u;
    {
        const bool branch_taken_0x358968 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x35896Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358968u;
            // 0x35896c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358968) {
            ctx->pc = 0x358A30u;
            goto label_358a30;
        }
    }
    ctx->pc = 0x358970u;
label_358970:
    // 0x358970: 0x40053000  mfc0        $a1, Wired
    ctx->pc = 0x358970u;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_wired);
label_358974:
    // 0x358974: 0x24a20001  addiu       $v0, $a1, 0x1
    ctx->pc = 0x358974u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_358978:
    // 0x358978: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x358978u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
label_35897c:
    // 0x35897c: 0x40f  sync.p
    ctx->pc = 0x35897cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_358980:
    // 0x358980: 0x10000013  b           . + 4 + (0x13 << 2)
label_358984:
    if (ctx->pc == 0x358984u) {
        ctx->pc = 0x358988u;
        goto label_358988;
    }
    ctx->pc = 0x358980u;
    {
        const bool branch_taken_0x358980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x358980) {
            ctx->pc = 0x3589D0u;
            goto label_3589d0;
        }
    }
    ctx->pc = 0x358988u;
label_358988:
    // 0x358988: 0x16000011  bnez        $s0, . + 4 + (0x11 << 2)
label_35898c:
    if (ctx->pc == 0x35898Cu) {
        ctx->pc = 0x35898Cu;
            // 0x35898c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->pc = 0x358990u;
        goto label_358990;
    }
    ctx->pc = 0x358988u;
    {
        const bool branch_taken_0x358988 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x35898Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358988u;
            // 0x35898c: 0x24a2ffff  addiu       $v0, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358988) {
            ctx->pc = 0x3589D0u;
            goto label_3589d0;
        }
    }
    ctx->pc = 0x358990u;
label_358990:
    // 0x358990: 0x3c03e001  lui         $v1, 0xE001
    ctx->pc = 0x358990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57345 << 16));
label_358994:
    // 0x358994: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x358994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_358998:
    // 0x358998: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x358998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_35899c:
    // 0x35899c: 0x40023000  mfc0        $v0, Wired
    ctx->pc = 0x35899cu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_wired);
label_3589a0:
    // 0x3589a0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x3589a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_3589a4:
    // 0x3589a4: 0x40823000  mtc0        $v0, Wired
    ctx->pc = 0x3589a4u;
    ctx->cop0_wired = GPR_U32(ctx, 2) & 0x3F; ctx->cop0_random = 47;
label_3589a8:
    // 0x3589a8: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x3589a8u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
label_3589ac:
    // 0x3589ac: 0x40802800  mtc0        $zero, PageMask
    ctx->pc = 0x3589acu;
    ctx->cop0_pagemask = GPR_U32(ctx, 0) & 0x01FFE000;
label_3589b0:
    // 0x3589b0: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x3589b0u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
label_3589b4:
    // 0x3589b4: 0x40801000  mtc0        $zero, EntryLo0
    ctx->pc = 0x3589b4u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
label_3589b8:
    // 0x3589b8: 0x40801800  mtc0        $zero, EntryLo1
    ctx->pc = 0x3589b8u;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 0) & 0x3FFFFFFF;
label_3589bc:
    // 0x3589bc: 0x40f  sync.p
    ctx->pc = 0x3589bcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3589c0:
    // 0x3589c0: 0x42000002  tlbwi
    ctx->pc = 0x3589c0u;
    runtime->handleTLBWI(rdram, ctx);
label_3589c4:
    // 0x3589c4: 0x40f  sync.p
    ctx->pc = 0x3589c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3589c8:
    // 0x3589c8: 0x10000019  b           . + 4 + (0x19 << 2)
label_3589cc:
    if (ctx->pc == 0x3589CCu) {
        ctx->pc = 0x3589CCu;
            // 0x3589cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3589D0u;
        goto label_3589d0;
    }
    ctx->pc = 0x3589C8u;
    {
        const bool branch_taken_0x3589c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3589CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3589C8u;
            // 0x3589cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3589c8) {
            ctx->pc = 0x358A30u;
            goto label_358a30;
        }
    }
    ctx->pc = 0x3589D0u;
label_3589d0:
    // 0x3589d0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3589d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3589d4:
    // 0x3589d4: 0x26041000  addiu       $a0, $s0, 0x1000
    ctx->pc = 0x3589d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4096));
label_3589d8:
    // 0x3589d8: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3589d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3589dc:
    // 0x3589dc: 0x3c067000  lui         $a2, 0x7000
    ctx->pc = 0x3589dcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)28672 << 16));
label_3589e0:
    // 0x3589e0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3589e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_3589e4:
    // 0x3589e4: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3589e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3589e8:
    // 0x3589e8: 0x2021024  and         $v0, $s0, $v0
    ctx->pc = 0x3589e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
label_3589ec:
    // 0x3589ec: 0x42182  srl         $a0, $a0, 6
    ctx->pc = 0x3589ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 6));
label_3589f0:
    // 0x3589f0: 0x21182  srl         $v0, $v0, 6
    ctx->pc = 0x3589f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 6));
label_3589f4:
    // 0x3589f4: 0x3484001f  ori         $a0, $a0, 0x1F
    ctx->pc = 0x3589f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)31);
label_3589f8:
    // 0x3589f8: 0x3442001f  ori         $v0, $v0, 0x1F
    ctx->pc = 0x3589f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)31);
label_3589fc:
    // 0x3589fc: 0x34c64000  ori         $a2, $a2, 0x4000
    ctx->pc = 0x3589fcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)16384);
label_358a00:
    // 0x358a00: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x358a00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_358a04:
    // 0x358a04: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x358a04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_358a08:
    // 0x358a08: 0x40850000  mtc0        $a1, Index
    ctx->pc = 0x358a08u;
    ctx->cop0_index = GPR_U32(ctx, 5) & 0x3F;
label_358a0c:
    // 0x358a0c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x358a0cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358a10:
    // 0x358a10: 0x40832800  mtc0        $v1, PageMask
    ctx->pc = 0x358a10u;
    ctx->cop0_pagemask = GPR_U32(ctx, 3) & 0x01FFE000;
label_358a14:
    // 0x358a14: 0x40865000  mtc0        $a2, EntryHi
    ctx->pc = 0x358a14u;
    ctx->cop0_entryhi = GPR_U32(ctx, 6) & 0xC00000FF;
label_358a18:
    // 0x358a18: 0x40821000  mtc0        $v0, EntryLo0
    ctx->pc = 0x358a18u;
    ctx->cop0_entrylo0 = GPR_U32(ctx, 2) & 0x3FFFFFFF;
label_358a1c:
    // 0x358a1c: 0x40841800  mtc0        $a0, EntryLo1
    ctx->pc = 0x358a1cu;
    ctx->cop0_entrylo1 = GPR_U32(ctx, 4) & 0x3FFFFFFF;
label_358a20:
    // 0x358a20: 0x40f  sync.p
    ctx->pc = 0x358a20u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_358a24:
    // 0x358a24: 0x42000002  tlbwi
    ctx->pc = 0x358a24u;
    runtime->handleTLBWI(rdram, ctx);
label_358a28:
    // 0x358a28: 0x40f  sync.p
    ctx->pc = 0x358a28u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_358a2c:
    // 0x358a2c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x358a2cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_358a30:
    // 0x358a30: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x358a30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_358a34:
    // 0x358a34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x358a34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_358a38:
    // 0x358a38: 0x3e00008  jr          $ra
label_358a3c:
    if (ctx->pc == 0x358A3Cu) {
        ctx->pc = 0x358A3Cu;
            // 0x358a3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x358A40u;
        goto label_358a40;
    }
    ctx->pc = 0x358A38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358A38u;
            // 0x358a3c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358A40u;
label_358a40:
    // 0x358a40: 0x0  nop
    ctx->pc = 0x358a40u;
    // NOP
label_358a44:
    // 0x358a44: 0x0  nop
    ctx->pc = 0x358a44u;
    // NOP
label_358a48:
    // 0x358a48: 0x0  nop
    ctx->pc = 0x358a48u;
    // NOP
label_358a4c:
    // 0x358a4c: 0x0  nop
    ctx->pc = 0x358a4cu;
    // NOP
label_358a50:
    // 0x358a50: 0x0  nop
    ctx->pc = 0x358a50u;
    // NOP
label_358a54:
    // 0x358a54: 0x0  nop
    ctx->pc = 0x358a54u;
    // NOP
label_358a58:
    // 0x358a58: 0x0  nop
    ctx->pc = 0x358a58u;
    // NOP
label_358a5c:
    // 0x358a5c: 0x0  nop
    ctx->pc = 0x358a5cu;
    // NOP
label_358a60:
    // 0x358a60: 0x0  nop
    ctx->pc = 0x358a60u;
    // NOP
label_358a64:
    // 0x358a64: 0x0  nop
    ctx->pc = 0x358a64u;
    // NOP
label_358a68:
    // 0x358a68: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358a68u;
    // Unhandled SPECIAL instruction: 0x15
label_358a6c:
    // 0x358a6c: 0x80075038  lb          $a3, 0x5038($zero)
    ctx->pc = 0x358a6cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 20536)));
label_358a70:
    // 0x358a70: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358a70u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358a74:
    // 0x358a74: 0x800750c8  lb          $a3, 0x50C8($zero)
    ctx->pc = 0x358a74u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 20680)));
label_358a78:
    // 0x358a78: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358a78u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358a7c:
    // 0x358a7c: 0x80075108  lb          $a3, 0x5108($zero)
    ctx->pc = 0x358a7cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 20744)));
label_358a80:
    // 0x358a80: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x358a80u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_358a84:
    // 0x358a84: 0x80075158  lb          $a3, 0x5158($zero)
    ctx->pc = 0x358a84u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 20824)));
label_358a88:
    // 0x358a88: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358a88u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_358a8c:
    // 0x358a8c: 0x800751a8  lb          $a3, 0x51A8($zero)
    ctx->pc = 0x358a8cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 20904)));
label_358a90:
    // 0x358a90: 0x3  sra         $zero, $zero, 0
    ctx->pc = 0x358a90u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 0));
label_358a94:
    // 0x358a94: 0x80075330  lb          $a3, 0x5330($zero)
    ctx->pc = 0x358a94u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 21296)));
label_358a98:
    // 0x358a98: 0x0  nop
    ctx->pc = 0x358a98u;
    // NOP
label_358a9c:
    // 0x358a9c: 0x0  nop
    ctx->pc = 0x358a9cu;
    // NOP
label_358aa0:
    // 0x358aa0: 0x0  nop
    ctx->pc = 0x358aa0u;
    // NOP
label_358aa4:
    // 0x358aa4: 0x0  nop
    ctx->pc = 0x358aa4u;
    // NOP
label_358aa8:
    // 0x358aa8: 0x0  nop
    ctx->pc = 0x358aa8u;
    // NOP
label_358aac:
    // 0x358aac: 0x0  nop
    ctx->pc = 0x358aacu;
    // NOP
label_358ab0:
    // 0x358ab0: 0x0  nop
    ctx->pc = 0x358ab0u;
    // NOP
label_358ab4:
    // 0x358ab4: 0x0  nop
    ctx->pc = 0x358ab4u;
    // NOP
label_358ab8:
    // 0x358ab8: 0x0  nop
    ctx->pc = 0x358ab8u;
    // NOP
label_358abc:
    // 0x358abc: 0x0  nop
    ctx->pc = 0x358abcu;
    // NOP
label_358ac0:
    // 0x358ac0: 0x0  nop
    ctx->pc = 0x358ac0u;
    // NOP
label_358ac4:
    // 0x358ac4: 0x0  nop
    ctx->pc = 0x358ac4u;
    // NOP
label_358ac8:
    // 0x358ac8: 0x0  nop
    ctx->pc = 0x358ac8u;
    // NOP
label_358acc:
    // 0x358acc: 0x0  nop
    ctx->pc = 0x358accu;
    // NOP
label_358ad0:
    // 0x358ad0: 0x0  nop
    ctx->pc = 0x358ad0u;
    // NOP
label_358ad4:
    // 0x358ad4: 0x0  nop
    ctx->pc = 0x358ad4u;
    // NOP
label_358ad8:
    // 0x358ad8: 0x0  nop
    ctx->pc = 0x358ad8u;
    // NOP
label_358adc:
    // 0x358adc: 0x0  nop
    ctx->pc = 0x358adcu;
    // NOP
label_358ae0:
    // 0x358ae0: 0x0  nop
    ctx->pc = 0x358ae0u;
    // NOP
label_358ae4:
    // 0x358ae4: 0x0  nop
    ctx->pc = 0x358ae4u;
    // NOP
label_358ae8:
    // 0x358ae8: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358ae8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_358aec:
    // 0x358aec: 0x116720  .word       0x00116720                   # add         $t4, $zero, $s1 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358aecu;
    {     int32_t rs_val = GPR_S32(ctx, 0);     int32_t rt_val = GPR_S32(ctx, 17);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
label_358af0:
    // 0x358af0: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358af0u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_358af4:
    // 0x358af4: 0x80075000  lb          $a3, 0x5000($zero)
    ctx->pc = 0x358af4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 20480)));
label_358af8:
    // 0x358af8: 0x54  .word       0x00000054                   # dsllv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358af8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (GPR_U32(ctx, 0) & 0x3F));
label_358afc:
    // 0x358afc: 0x116c80  sll         $t5, $s1, 18
    ctx->pc = 0x358afcu;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 17), 18));
label_358b00:
    // 0x358b00: 0x55  .word       0x00000055                   # INVALID     $zero, $zero, 0x55 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358b00u;
    // Unhandled SPECIAL instruction: 0x15
label_358b04:
    // 0x358b04: 0x0  nop
    ctx->pc = 0x358b04u;
    // NOP
label_358b08:
    // 0x358b08: 0x56  .word       0x00000056                   # dsrlv       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358b08u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358b0c:
    // 0x358b0c: 0x0  nop
    ctx->pc = 0x358b0cu;
    // NOP
label_358b10:
    // 0x358b10: 0x57  .word       0x00000057                   # dsrav       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358b10u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358b14:
    // 0x358b14: 0x0  nop
    ctx->pc = 0x358b14u;
    // NOP
label_358b18:
    // 0x358b18: 0x58  .word       0x00000058                   # mult        $zero, $zero, $zero # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x358b18u;
    { int64_t result = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_358b1c:
    // 0x358b1c: 0x0  nop
    ctx->pc = 0x358b1cu;
    // NOP
label_358b20:
    // 0x358b20: 0x59  .word       0x00000059                   # multu       $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358b20u;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 0) * (uint64_t)GPR_U32(ctx, 0); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_358b24:
    // 0x358b24: 0x0  nop
    ctx->pc = 0x358b24u;
    // NOP
label_358b28:
    // 0x358b28: 0x0  nop
    ctx->pc = 0x358b28u;
    // NOP
label_358b2c:
    // 0x358b2c: 0x70000000  madd        $zero, $zero, $zero
    ctx->pc = 0x358b2cu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 0) * (int64_t)GPR_S32(ctx, 0); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); }
label_358b30:
    // 0x358b30: 0x80000007  lb          $zero, 0x7($zero)
    ctx->pc = 0x358b30u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 7)));
label_358b34:
    // 0x358b34: 0x7  srav        $zero, $zero, $zero
    ctx->pc = 0x358b34u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_358b38:
    // 0x358b38: 0x6000  sll         $t4, $zero, 0
    ctx->pc = 0x358b38u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 0), 0));
label_358b3c:
    // 0x358b3c: 0xffff8000  sd          $ra, -0x8000($ra)
    ctx->pc = 0x358b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294934528), GPR_U64(ctx, 31));
label_358b40:
    // 0x358b40: 0x1e1f  .word       0x00001E1F                   # ddivu       $v1, $zero, $zero # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358b40u;
    // Unhandled SPECIAL instruction: 0x1F
label_358b44:
    // 0x358b44: 0x1f1f  .word       0x00001F1F                   # ddivu       $v1, $zero, $zero # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358b44u;
    // Unhandled SPECIAL instruction: 0x1F
label_358b48:
    // 0x358b48: 0x0  nop
    ctx->pc = 0x358b48u;
    // NOP
label_358b4c:
    // 0x358b4c: 0x10000000  b           . + 4 + (0x0 << 2)
label_358b50:
    if (ctx->pc == 0x358B50u) {
        ctx->pc = 0x358B50u;
            // 0x358b50: 0x400017  dsrav       $zero, $zero, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->pc = 0x358B54u;
        goto label_358b54;
    }
    ctx->pc = 0x358B4Cu;
    {
        const bool branch_taken_0x358b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358B4Cu;
            // 0x358b50: 0x400017  dsrav       $zero, $zero, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b4c) {
            ctx->pc = 0x358B50u;
            goto label_358b50;
        }
    }
    ctx->pc = 0x358B54u;
label_358b54:
    // 0x358b54: 0x400053  .word       0x00400053                   # mtlo        $v0 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358b54u;
    ctx->lo = GPR_U64(ctx, 2);
label_358b58:
    // 0x358b58: 0x0  nop
    ctx->pc = 0x358b58u;
    // NOP
label_358b5c:
    // 0x358b5c: 0x10002000  b           . + 4 + (0x2000 << 2)
label_358b60:
    if (ctx->pc == 0x358B60u) {
        ctx->pc = 0x358B60u;
            // 0x358b60: 0x400097  .word       0x00400097                   # dsrav       $zero, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->pc = 0x358B64u;
        goto label_358b64;
    }
    ctx->pc = 0x358B5Cu;
    {
        const bool branch_taken_0x358b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358B5Cu;
            // 0x358b60: 0x400097  .word       0x00400097                   # dsrav       $zero, $zero, $v0 # 00000080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b5c) {
            ctx->pc = 0x360B60u;
            return;
        }
    }
    ctx->pc = 0x358B64u;
label_358b64:
    // 0x358b64: 0x4000d7  .word       0x004000D7                   # dsrav       $zero, $zero, $v0 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358b64u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_358b68:
    // 0x358b68: 0x0  nop
    ctx->pc = 0x358b68u;
    // NOP
label_358b6c:
    // 0x358b6c: 0x10004000  b           . + 4 + (0x4000 << 2)
label_358b70:
    if (ctx->pc == 0x358B70u) {
        ctx->pc = 0x358B70u;
            // 0x358b70: 0x400117  .word       0x00400117                   # dsrav       $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->pc = 0x358B74u;
        goto label_358b74;
    }
    ctx->pc = 0x358B6Cu;
    {
        const bool branch_taken_0x358b6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358B6Cu;
            // 0x358b70: 0x400117  .word       0x00400117                   # dsrav       $zero, $zero, $v0 # 00000100 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b6c) {
            ctx->pc = 0x368B70u;
            return;
        }
    }
    ctx->pc = 0x358B74u;
label_358b74:
    // 0x358b74: 0x400157  .word       0x00400157                   # dsrav       $zero, $zero, $v0 # 00000140 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358b74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_358b78:
    // 0x358b78: 0x0  nop
    ctx->pc = 0x358b78u;
    // NOP
label_358b7c:
    // 0x358b7c: 0x10006000  b           . + 4 + (0x6000 << 2)
label_358b80:
    if (ctx->pc == 0x358B80u) {
        ctx->pc = 0x358B80u;
            // 0x358b80: 0x400197  .word       0x00400197                   # dsrav       $zero, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->pc = 0x358B84u;
        goto label_358b84;
    }
    ctx->pc = 0x358B7Cu;
    {
        const bool branch_taken_0x358b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358B7Cu;
            // 0x358b80: 0x400197  .word       0x00400197                   # dsrav       $zero, $zero, $v0 # 00000180 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b7c) {
            ctx->pc = 0x370B80u;
            return;
        }
    }
    ctx->pc = 0x358B84u;
label_358b84:
    // 0x358b84: 0x4001d7  .word       0x004001D7                   # dsrav       $zero, $zero, $v0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358b84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_358b88:
    // 0x358b88: 0x0  nop
    ctx->pc = 0x358b88u;
    // NOP
label_358b8c:
    // 0x358b8c: 0x10008000  b           . + 4 + (-0x8000 << 2)
label_358b90:
    if (ctx->pc == 0x358B90u) {
        ctx->pc = 0x358B90u;
            // 0x358b90: 0x400217  .word       0x00400217                   # dsrav       $zero, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->pc = 0x358B94u;
        goto label_358b94;
    }
    ctx->pc = 0x358B8Cu;
    {
        const bool branch_taken_0x358b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358B8Cu;
            // 0x358b90: 0x400217  .word       0x00400217                   # dsrav       $zero, $zero, $v0 # 00000200 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b8c) {
            ctx->pc = 0x338B90u;
            return;
        }
    }
    ctx->pc = 0x358B94u;
label_358b94:
    // 0x358b94: 0x400257  .word       0x00400257                   # dsrav       $zero, $zero, $v0 # 00000240 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358b94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_358b98:
    // 0x358b98: 0x0  nop
    ctx->pc = 0x358b98u;
    // NOP
label_358b9c:
    // 0x358b9c: 0x1000a000  b           . + 4 + (-0x6000 << 2)
label_358ba0:
    if (ctx->pc == 0x358BA0u) {
        ctx->pc = 0x358BA0u;
            // 0x358ba0: 0x400297  .word       0x00400297                   # dsrav       $zero, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->pc = 0x358BA4u;
        goto label_358ba4;
    }
    ctx->pc = 0x358B9Cu;
    {
        const bool branch_taken_0x358b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358B9Cu;
            // 0x358ba0: 0x400297  .word       0x00400297                   # dsrav       $zero, $zero, $v0 # 00000280 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358b9c) {
            ctx->pc = 0x340BA0u;
            return;
        }
    }
    ctx->pc = 0x358BA4u;
label_358ba4:
    // 0x358ba4: 0x4002d7  .word       0x004002D7                   # dsrav       $zero, $zero, $v0 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358ba4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_358ba8:
    // 0x358ba8: 0x0  nop
    ctx->pc = 0x358ba8u;
    // NOP
label_358bac:
    // 0x358bac: 0x1000c000  b           . + 4 + (-0x4000 << 2)
label_358bb0:
    if (ctx->pc == 0x358BB0u) {
        ctx->pc = 0x358BB0u;
            // 0x358bb0: 0x400313  .word       0x00400313                   # mtlo        $v0 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->lo = GPR_U64(ctx, 2);
        ctx->pc = 0x358BB4u;
        goto label_358bb4;
    }
    ctx->pc = 0x358BACu;
    {
        const bool branch_taken_0x358bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358BACu;
            // 0x358bb0: 0x400313  .word       0x00400313                   # mtlo        $v0 # 00000300 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        ctx->lo = GPR_U64(ctx, 2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x358bac) {
            ctx->pc = 0x348BB0u;
            return;
        }
    }
    ctx->pc = 0x358BB4u;
label_358bb4:
    // 0x358bb4: 0x400357  .word       0x00400357                   # dsrav       $zero, $zero, $v0 # 00000340 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358bb4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_358bb8:
    // 0x358bb8: 0x0  nop
    ctx->pc = 0x358bb8u;
    // NOP
label_358bbc:
    // 0x358bbc: 0x1000e000  b           . + 4 + (-0x2000 << 2)
label_358bc0:
    if (ctx->pc == 0x358BC0u) {
        ctx->pc = 0x358BC0u;
            // 0x358bc0: 0x400397  .word       0x00400397                   # dsrav       $zero, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->pc = 0x358BC4u;
        goto label_358bc4;
    }
    ctx->pc = 0x358BBCu;
    {
        const bool branch_taken_0x358bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358BBCu;
            // 0x358bc0: 0x400397  .word       0x00400397                   # dsrav       $zero, $zero, $v0 # 00000380 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358bbc) {
            ctx->pc = 0x350BC0u;
            return;
        }
    }
    ctx->pc = 0x358BC4u;
label_358bc4:
    // 0x358bc4: 0x4003d7  .word       0x004003D7                   # dsrav       $zero, $zero, $v0 # 000003C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358bc4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 2) & 0x3F));
label_358bc8:
    // 0x358bc8: 0x1e000  sll         $gp, $at, 0
    ctx->pc = 0x358bc8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_358bcc:
    // 0x358bcc: 0x11000000  beqz        $t0, . + 4 + (0x0 << 2)
label_358bd0:
    if (ctx->pc == 0x358BD0u) {
        ctx->pc = 0x358BD0u;
            // 0x358bd0: 0x440017  dsrav       $zero, $a0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->pc = 0x358BD4u;
        goto label_358bd4;
    }
    ctx->pc = 0x358BCCu;
    {
        const bool branch_taken_0x358bcc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x358BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358BCCu;
            // 0x358bd0: 0x440017  dsrav       $zero, $a0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358bcc) {
            ctx->pc = 0x358BD0u;
            goto label_358bd0;
        }
    }
    ctx->pc = 0x358BD4u;
label_358bd4:
    // 0x358bd4: 0x440415  .word       0x00440415                   # INVALID     $v0, $a0, 0x415 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358bd4u;
    // Unhandled SPECIAL instruction: 0x15
label_358bd8:
    // 0x358bd8: 0x1e000  sll         $gp, $at, 0
    ctx->pc = 0x358bd8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 1), 0));
label_358bdc:
    // 0x358bdc: 0x12000000  beqz        $s0, . + 4 + (0x0 << 2)
label_358be0:
    if (ctx->pc == 0x358BE0u) {
        ctx->pc = 0x358BE0u;
            // 0x358be0: 0x480017  dsrav       $zero, $t0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->pc = 0x358BE4u;
        goto label_358be4;
    }
    ctx->pc = 0x358BDCu;
    {
        const bool branch_taken_0x358bdc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x358BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358BDCu;
            // 0x358be0: 0x480017  dsrav       $zero, $t0, $v0 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 8) >> (GPR_U32(ctx, 2) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358bdc) {
            ctx->pc = 0x358BE0u;
            goto label_358be0;
        }
    }
    ctx->pc = 0x358BE4u;
label_358be4:
    // 0x358be4: 0x480415  .word       0x00480415                   # INVALID     $v0, $t0, 0x415 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358be4u;
    // Unhandled SPECIAL instruction: 0x15
label_358be8:
    // 0x358be8: 0x1ffe000  .word       0x01FFE000                   # sll         $gp, $ra, 0 # 01E00000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358be8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358bec:
    // 0x358bec: 0x1e000000  bgtz        $s0, . + 4 + (0x0 << 2)
label_358bf0:
    if (ctx->pc == 0x358BF0u) {
        ctx->pc = 0x358BF0u;
            // 0x358bf0: 0x780017  dsrav       $zero, $t8, $v1 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->pc = 0x358BF4u;
        goto label_358bf4;
    }
    ctx->pc = 0x358BECu;
    {
        const bool branch_taken_0x358bec = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x358BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358BECu;
            // 0x358bf0: 0x780017  dsrav       $zero, $t8, $v1 (Delay Slot)
        SET_GPR_S64(ctx, 0, GPR_S64(ctx, 24) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358bec) {
            ctx->pc = 0x358BF0u;
            goto label_358bf0;
        }
    }
    ctx->pc = 0x358BF4u;
label_358bf4:
    // 0x358bf4: 0x7c0017  dsrav       $zero, $gp, $v1
    ctx->pc = 0x358bf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 28) >> (GPR_U32(ctx, 3) & 0x3F));
label_358bf8:
    // 0x358bf8: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x358bf8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_358bfc:
    // 0x358bfc: 0x80000  sll         $zero, $t0, 0
    ctx->pc = 0x358bfcu;
    
label_358c00:
    // 0x358c00: 0x201f  ddivu       $a0, $zero, $zero
    ctx->pc = 0x358c00u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c04:
    // 0x358c04: 0x301f  ddivu       $a2, $zero, $zero
    ctx->pc = 0x358c04u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c08:
    // 0x358c08: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x358c08u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_358c0c:
    // 0x358c0c: 0x100000  sll         $zero, $s0, 0
    ctx->pc = 0x358c0cu;
    
label_358c10:
    // 0x358c10: 0x401f  ddivu       $t0, $zero, $zero
    ctx->pc = 0x358c10u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c14:
    // 0x358c14: 0x501f  ddivu       $t2, $zero, $zero
    ctx->pc = 0x358c14u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c18:
    // 0x358c18: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x358c18u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_358c1c:
    // 0x358c1c: 0x180000  sll         $zero, $t8, 0
    ctx->pc = 0x358c1cu;
    
label_358c20:
    // 0x358c20: 0x601f  ddivu       $t4, $zero, $zero
    ctx->pc = 0x358c20u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c24:
    // 0x358c24: 0x701f  ddivu       $t6, $zero, $zero
    ctx->pc = 0x358c24u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c28:
    // 0x358c28: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x358c28u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358c2c:
    // 0x358c2c: 0x200000  .word       0x00200000                   # sll         $zero, $zero, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358c2cu;
    // NOP
label_358c30:
    // 0x358c30: 0x801f  ddivu       $s0, $zero, $zero
    ctx->pc = 0x358c30u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c34:
    // 0x358c34: 0xc01f  ddivu       $t8, $zero, $zero
    ctx->pc = 0x358c34u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c38:
    // 0x358c38: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x358c38u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358c3c:
    // 0x358c3c: 0x400000  .word       0x00400000                   # sll         $zero, $zero, 0 # 00400000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358c3cu;
    // NOP
label_358c40:
    // 0x358c40: 0x1001f  ddivu       $zero, $zero, $at
    ctx->pc = 0x358c40u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c44:
    // 0x358c44: 0x1401f  ddivu       $t0, $zero, $at
    ctx->pc = 0x358c44u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c48:
    // 0x358c48: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x358c48u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358c4c:
    // 0x358c4c: 0x600000  .word       0x00600000                   # sll         $zero, $zero, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358c4cu;
    // NOP
label_358c50:
    // 0x358c50: 0x1801f  ddivu       $s0, $zero, $at
    ctx->pc = 0x358c50u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c54:
    // 0x358c54: 0x1c01f  ddivu       $t8, $zero, $at
    ctx->pc = 0x358c54u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c58:
    // 0x358c58: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358c58u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358c5c:
    // 0x358c5c: 0x800000  .word       0x00800000                   # sll         $zero, $zero, 0 # 00800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358c5cu;
    // NOP
label_358c60:
    // 0x358c60: 0x2001f  ddivu       $zero, $zero, $v0
    ctx->pc = 0x358c60u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c64:
    // 0x358c64: 0x3001f  ddivu       $zero, $zero, $v1
    ctx->pc = 0x358c64u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c68:
    // 0x358c68: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358c68u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358c6c:
    // 0x358c6c: 0x1000000  .word       0x01000000                   # sll         $zero, $zero, 0 # 01000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358c6cu;
    // NOP
label_358c70:
    // 0x358c70: 0x4001f  ddivu       $zero, $zero, $a0
    ctx->pc = 0x358c70u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c74:
    // 0x358c74: 0x5001f  ddivu       $zero, $zero, $a1
    ctx->pc = 0x358c74u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c78:
    // 0x358c78: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358c78u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358c7c:
    // 0x358c7c: 0x1800000  .word       0x01800000                   # sll         $zero, $zero, 0 # 01800000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358c7cu;
    // NOP
label_358c80:
    // 0x358c80: 0x6001f  ddivu       $zero, $zero, $a2
    ctx->pc = 0x358c80u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c84:
    // 0x358c84: 0x7001f  ddivu       $zero, $zero, $a3
    ctx->pc = 0x358c84u;
    // Unhandled SPECIAL instruction: 0x1F
label_358c88:
    // 0x358c88: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x358c88u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_358c8c:
    // 0x358c8c: 0x20080000  addi        $t0, $zero, 0x0
    ctx->pc = 0x358c8cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 8, (int32_t)tmp); }
label_358c90:
    // 0x358c90: 0x2017  dsrav       $a0, $zero, $zero
    ctx->pc = 0x358c90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358c94:
    // 0x358c94: 0x3017  dsrav       $a2, $zero, $zero
    ctx->pc = 0x358c94u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358c98:
    // 0x358c98: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x358c98u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_358c9c:
    // 0x358c9c: 0x20100000  addi        $s0, $zero, 0x0
    ctx->pc = 0x358c9cu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 16, (int32_t)tmp); }
label_358ca0:
    // 0x358ca0: 0x4017  dsrav       $t0, $zero, $zero
    ctx->pc = 0x358ca0u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358ca4:
    // 0x358ca4: 0x5017  dsrav       $t2, $zero, $zero
    ctx->pc = 0x358ca4u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358ca8:
    // 0x358ca8: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x358ca8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_358cac:
    // 0x358cac: 0x20180000  addi        $t8, $zero, 0x0
    ctx->pc = 0x358cacu;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)0, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 24, (int32_t)tmp); }
label_358cb0:
    // 0x358cb0: 0x6017  dsrav       $t4, $zero, $zero
    ctx->pc = 0x358cb0u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358cb4:
    // 0x358cb4: 0x7017  dsrav       $t6, $zero, $zero
    ctx->pc = 0x358cb4u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358cb8:
    // 0x358cb8: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x358cb8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358cbc:
    // 0x358cbc: 0x20200000  addi        $zero, $at, 0x0
    ctx->pc = 0x358cbcu;
    // NOP (addi to $zero)
label_358cc0:
    // 0x358cc0: 0x8017  dsrav       $s0, $zero, $zero
    ctx->pc = 0x358cc0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358cc4:
    // 0x358cc4: 0xc017  dsrav       $t8, $zero, $zero
    ctx->pc = 0x358cc4u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (GPR_U32(ctx, 0) & 0x3F));
label_358cc8:
    // 0x358cc8: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x358cc8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358ccc:
    // 0x358ccc: 0x20400000  addi        $zero, $v0, 0x0
    ctx->pc = 0x358cccu;
    // NOP (addi to $zero)
label_358cd0:
    // 0x358cd0: 0x10017  dsrav       $zero, $at, $zero
    ctx->pc = 0x358cd0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_358cd4:
    // 0x358cd4: 0x14017  dsrav       $t0, $at, $zero
    ctx->pc = 0x358cd4u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_358cd8:
    // 0x358cd8: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x358cd8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358cdc:
    // 0x358cdc: 0x20600000  addi        $zero, $v1, 0x0
    ctx->pc = 0x358cdcu;
    // NOP (addi to $zero)
label_358ce0:
    // 0x358ce0: 0x18017  dsrav       $s0, $at, $zero
    ctx->pc = 0x358ce0u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_358ce4:
    // 0x358ce4: 0x1c017  dsrav       $t8, $at, $zero
    ctx->pc = 0x358ce4u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 1) >> (GPR_U32(ctx, 0) & 0x3F));
label_358ce8:
    // 0x358ce8: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358ce8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358cec:
    // 0x358cec: 0x20800000  addi        $zero, $a0, 0x0
    ctx->pc = 0x358cecu;
    // NOP (addi to $zero)
label_358cf0:
    // 0x358cf0: 0x20017  dsrav       $zero, $v0, $zero
    ctx->pc = 0x358cf0u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (GPR_U32(ctx, 0) & 0x3F));
label_358cf4:
    // 0x358cf4: 0x30017  dsrav       $zero, $v1, $zero
    ctx->pc = 0x358cf4u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (GPR_U32(ctx, 0) & 0x3F));
label_358cf8:
    // 0x358cf8: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358cf8u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358cfc:
    // 0x358cfc: 0x21000000  addi        $zero, $t0, 0x0
    ctx->pc = 0x358cfcu;
    // NOP (addi to $zero)
label_358d00:
    // 0x358d00: 0x40017  dsrav       $zero, $a0, $zero
    ctx->pc = 0x358d00u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (GPR_U32(ctx, 0) & 0x3F));
label_358d04:
    // 0x358d04: 0x50017  dsrav       $zero, $a1, $zero
    ctx->pc = 0x358d04u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (GPR_U32(ctx, 0) & 0x3F));
label_358d08:
    // 0x358d08: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358d08u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358d0c:
    // 0x358d0c: 0x21800000  addi        $zero, $t4, 0x0
    ctx->pc = 0x358d0cu;
    // NOP (addi to $zero)
label_358d10:
    // 0x358d10: 0x60017  dsrav       $zero, $a2, $zero
    ctx->pc = 0x358d10u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 6) >> (GPR_U32(ctx, 0) & 0x3F));
label_358d14:
    // 0x358d14: 0x70017  dsrav       $zero, $a3, $zero
    ctx->pc = 0x358d14u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (GPR_U32(ctx, 0) & 0x3F));
label_358d18:
    // 0x358d18: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x358d18u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_358d1c:
    // 0x358d1c: 0x30100000  andi        $s0, $zero, 0x0
    ctx->pc = 0x358d1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)0);
label_358d20:
    // 0x358d20: 0x403f  dsra32      $t0, $zero, 0
    ctx->pc = 0x358d20u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 0) >> (32 + 0));
label_358d24:
    // 0x358d24: 0x503f  dsra32      $t2, $zero, 0
    ctx->pc = 0x358d24u;
    SET_GPR_S64(ctx, 10, GPR_S64(ctx, 0) >> (32 + 0));
label_358d28:
    // 0x358d28: 0x7e000  sll         $gp, $a3, 0
    ctx->pc = 0x358d28u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 7), 0));
label_358d2c:
    // 0x358d2c: 0x30180000  andi        $t8, $zero, 0x0
    ctx->pc = 0x358d2cu;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)0);
label_358d30:
    // 0x358d30: 0x603f  dsra32      $t4, $zero, 0
    ctx->pc = 0x358d30u;
    SET_GPR_S64(ctx, 12, GPR_S64(ctx, 0) >> (32 + 0));
label_358d34:
    // 0x358d34: 0x703f  dsra32      $t6, $zero, 0
    ctx->pc = 0x358d34u;
    SET_GPR_S64(ctx, 14, GPR_S64(ctx, 0) >> (32 + 0));
label_358d38:
    // 0x358d38: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x358d38u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358d3c:
    // 0x358d3c: 0x30200000  andi        $zero, $at, 0x0
    ctx->pc = 0x358d3cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)0);
label_358d40:
    // 0x358d40: 0x803f  dsra32      $s0, $zero, 0
    ctx->pc = 0x358d40u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 0) >> (32 + 0));
label_358d44:
    // 0x358d44: 0xc03f  dsra32      $t8, $zero, 0
    ctx->pc = 0x358d44u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 0) >> (32 + 0));
label_358d48:
    // 0x358d48: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x358d48u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358d4c:
    // 0x358d4c: 0x30400000  andi        $zero, $v0, 0x0
    ctx->pc = 0x358d4cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)0);
label_358d50:
    // 0x358d50: 0x1003f  dsra32      $zero, $at, 0
    ctx->pc = 0x358d50u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 1) >> (32 + 0));
label_358d54:
    // 0x358d54: 0x1403f  dsra32      $t0, $at, 0
    ctx->pc = 0x358d54u;
    SET_GPR_S64(ctx, 8, GPR_S64(ctx, 1) >> (32 + 0));
label_358d58:
    // 0x358d58: 0x1fe000  sll         $gp, $ra, 0
    ctx->pc = 0x358d58u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358d5c:
    // 0x358d5c: 0x30600000  andi        $zero, $v1, 0x0
    ctx->pc = 0x358d5cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)0);
label_358d60:
    // 0x358d60: 0x1803f  dsra32      $s0, $at, 0
    ctx->pc = 0x358d60u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 1) >> (32 + 0));
label_358d64:
    // 0x358d64: 0x1c03f  dsra32      $t8, $at, 0
    ctx->pc = 0x358d64u;
    SET_GPR_S64(ctx, 24, GPR_S64(ctx, 1) >> (32 + 0));
label_358d68:
    // 0x358d68: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358d68u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358d6c:
    // 0x358d6c: 0x30800000  andi        $zero, $a0, 0x0
    ctx->pc = 0x358d6cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)0);
label_358d70:
    // 0x358d70: 0x2003f  dsra32      $zero, $v0, 0
    ctx->pc = 0x358d70u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 2) >> (32 + 0));
label_358d74:
    // 0x358d74: 0x3003f  dsra32      $zero, $v1, 0
    ctx->pc = 0x358d74u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 3) >> (32 + 0));
label_358d78:
    // 0x358d78: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358d78u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358d7c:
    // 0x358d7c: 0x31000000  andi        $zero, $t0, 0x0
    ctx->pc = 0x358d7cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)0);
label_358d80:
    // 0x358d80: 0x4003f  dsra32      $zero, $a0, 0
    ctx->pc = 0x358d80u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 4) >> (32 + 0));
label_358d84:
    // 0x358d84: 0x5003f  dsra32      $zero, $a1, 0
    ctx->pc = 0x358d84u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 5) >> (32 + 0));
label_358d88:
    // 0x358d88: 0x7fe000  .word       0x007FE000                   # sll         $gp, $ra, 0 # 00600000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358d88u;
    SET_GPR_S32(ctx, 28, (int32_t)SLL32(GPR_U32(ctx, 31), 0));
label_358d8c:
    // 0x358d8c: 0x31800000  andi        $zero, $t4, 0x0
    ctx->pc = 0x358d8cu;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)0);
label_358d90:
    // 0x358d90: 0x6003f  dsra32      $zero, $a2, 0
    ctx->pc = 0x358d90u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 6) >> (32 + 0));
label_358d94:
    // 0x358d94: 0x7003f  dsra32      $zero, $a3, 0
    ctx->pc = 0x358d94u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 7) >> (32 + 0));
label_358d98:
    // 0x358d98: 0xd  break       0
    ctx->pc = 0x358d98u;
    runtime->handleBreak(rdram, ctx);
label_358d9c:
    // 0x358d9c: 0x12  mflo        $zero
    ctx->pc = 0x358d9cu;
    SET_GPR_U64(ctx, 0, ctx->lo);
label_358da0:
    // 0x358da0: 0x8  jr          $zero
label_358da4:
    if (ctx->pc == 0x358DA4u) {
        ctx->pc = 0x358DA8u;
        goto label_358da8;
    }
    ctx->pc = 0x358DA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358DA8u;
label_358da8:
    // 0x358da8: 0x358b28  .word       0x00358B28                   # mfsa        $s1 # 00350300 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x358da8u;
    SET_GPR_U32(ctx, 17, ctx->sa);
label_358dac:
    // 0x358dac: 0x358bf8  .word       0x00358BF8                   # dsll        $s1, $s5, 15 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358dacu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 21) << 15);
label_358db0:
    // 0x358db0: 0x358d18  .word       0x00358D18                   # mult        $s1, $at, $s5 # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x358db0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
label_358db4:
    // 0x358db4: 0x0  nop
    ctx->pc = 0x358db4u;
    // NOP
label_358db8:
    // 0x358db8: 0x0  nop
    ctx->pc = 0x358db8u;
    // NOP
label_358dbc:
    // 0x358dbc: 0x0  nop
    ctx->pc = 0x358dbcu;
    // NOP
label_358dc0:
    // 0x358dc0: 0x83  sra         $zero, $zero, 2
    ctx->pc = 0x358dc0u;
    SET_GPR_S32(ctx, 0, SRA32(GPR_S32(ctx, 0), 2));
label_358dc4:
    // 0x358dc4: 0x116fc0  sll         $t5, $s1, 31
    ctx->pc = 0x358dc4u;
    SET_GPR_S32(ctx, 13, (int32_t)SLL32(GPR_U32(ctx, 17), 31));
label_358dc8:
    // 0x358dc8: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x358dc8u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_358dcc:
    // 0x358dcc: 0x116f88  .word       0x00116F88                   # jr          $zero # 00116F80 <InstrIdType: CPU_SPECIAL>
label_358dd0:
    if (ctx->pc == 0x358DD0u) {
        ctx->pc = 0x358DD4u;
        goto label_358dd4;
    }
    ctx->pc = 0x358DCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358DD4u;
label_358dd4:
    // 0x358dd4: 0x0  nop
    ctx->pc = 0x358dd4u;
    // NOP
label_358dd8:
    // 0x358dd8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x358dd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_358ddc:
    // 0x358ddc: 0x24050026  addiu       $a1, $zero, 0x26
    ctx->pc = 0x358ddcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
label_358de0:
    // 0x358de0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x358de0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_358de4:
    // 0x358de4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x358de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_358de8:
    // 0x358de8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x358de8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_358dec:
    // 0x358dec: 0x3c048007  lui         $a0, 0x8007
    ctx->pc = 0x358decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32775 << 16));
label_358df0:
    // 0x358df0: 0xc01d07a  jal         func_0741E8
label_358df4:
    if (ctx->pc == 0x358DF4u) {
        ctx->pc = 0x358DF4u;
            // 0x358df4: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
        ctx->pc = 0x358DF8u;
        goto label_358df8;
    }
    ctx->pc = 0x358DF0u;
    SET_GPR_U32(ctx, 31, 0x358DF8u);
    ctx->pc = 0x358DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x358DF0u;
            // 0x358df4: 0x24844700  addiu       $a0, $a0, 0x4700 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x741E8u;
    {
        auto targetFn = runtime->lookupFunction(0x741E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x358DF8u; }
        if (ctx->pc != 0x358DF8u) { return; }
    }
    ctx->pc = 0x358DF8u;
label_358df8:
    // 0x358df8: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x358df8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_358dfc:
    // 0x358dfc: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x358dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
label_358e00:
    // 0x358e00: 0x3c0603ff  lui         $a2, 0x3FF
    ctx->pc = 0x358e00u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1023 << 16));
label_358e04:
    // 0x358e04: 0x3c070c00  lui         $a3, 0xC00
    ctx->pc = 0x358e04u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)3072 << 16));
label_358e08:
    // 0x358e08: 0x24434780  addiu       $v1, $v0, 0x4780
    ctx->pc = 0x358e08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 18304));
label_358e0c:
    // 0x358e0c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x358e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358e10:
    // 0x358e10: 0x34a5c402  ori         $a1, $a1, 0xC402
    ctx->pc = 0x358e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)50178);
label_358e14:
    // 0x358e14: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x358e14u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_358e18:
    // 0x358e18: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x358e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_358e1c:
    // 0x358e1c: 0x56020007  bnel        $s0, $v0, . + 4 + (0x7 << 2)
label_358e20:
    if (ctx->pc == 0x358E20u) {
        ctx->pc = 0x358E20u;
            // 0x358e20: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->pc = 0x358E24u;
        goto label_358e24;
    }
    ctx->pc = 0x358E1Cu;
    {
        const bool branch_taken_0x358e1c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x358e1c) {
            ctx->pc = 0x358E20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x358E1Cu;
            // 0x358e20: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x358E3Cu;
            goto label_358e3c;
        }
    }
    ctx->pc = 0x358E24u;
label_358e24:
    // 0x358e24: 0x16050009  bne         $s0, $a1, . + 4 + (0x9 << 2)
label_358e28:
    if (ctx->pc == 0x358E28u) {
        ctx->pc = 0x358E28u;
            // 0x358e28: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x358E2Cu;
        goto label_358e2c;
    }
    ctx->pc = 0x358E24u;
    {
        const bool branch_taken_0x358e24 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 5));
        ctx->pc = 0x358E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358E24u;
            // 0x358e28: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358e24) {
            ctx->pc = 0x358E4Cu;
            goto label_358e4c;
        }
    }
    ctx->pc = 0x358E2Cu;
label_358e2c:
    // 0x358e2c: 0x21082  srl         $v0, $v0, 2
    ctx->pc = 0x358e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
label_358e30:
    // 0x358e30: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x358e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_358e34:
    // 0x358e34: 0x10000005  b           . + 4 + (0x5 << 2)
label_358e38:
    if (ctx->pc == 0x358E38u) {
        ctx->pc = 0x358E38u;
            // 0x358e38: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->pc = 0x358E3Cu;
        goto label_358e3c;
    }
    ctx->pc = 0x358E34u;
    {
        const bool branch_taken_0x358e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x358E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358E34u;
            // 0x358e38: 0x471025  or          $v0, $v0, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358e34) {
            ctx->pc = 0x358E4Cu;
            goto label_358e4c;
        }
    }
    ctx->pc = 0x358E3Cu;
label_358e3c:
    // 0x358e3c: 0x2c820005  sltiu       $v0, $a0, 0x5
    ctx->pc = 0x358e3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_358e40:
    // 0x358e40: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_358e44:
    if (ctx->pc == 0x358E44u) {
        ctx->pc = 0x358E44u;
            // 0x358e44: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x358E48u;
        goto label_358e48;
    }
    ctx->pc = 0x358E40u;
    {
        const bool branch_taken_0x358e40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x358E44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358E40u;
            // 0x358e44: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358e40) {
            ctx->pc = 0x358E18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_358e18;
        }
    }
    ctx->pc = 0x358E48u;
label_358e48:
    // 0x358e48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x358e48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358e4c:
    // 0x358e4c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x358e4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_358e50:
    // 0x358e50: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x358e50u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_358e54:
    // 0x358e54: 0x3e00008  jr          $ra
label_358e58:
    if (ctx->pc == 0x358E58u) {
        ctx->pc = 0x358E58u;
            // 0x358e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x358E5Cu;
        goto label_358e5c;
    }
    ctx->pc = 0x358E54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358E54u;
            // 0x358e58: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358E5Cu;
label_358e5c:
    // 0x358e5c: 0x0  nop
    ctx->pc = 0x358e5cu;
    // NOP
label_358e60:
    // 0x358e60: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x358e60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_358e64:
    // 0x358e64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x358e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358e68:
    // 0x358e68: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x358e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_358e6c:
    // 0x358e6c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x358e6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_358e70:
    // 0x358e70: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x358e70u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_358e74:
    // 0x358e74: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x358e74u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_358e78:
    // 0x358e78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x358e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_358e7c:
    // 0x358e7c: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x358e7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_358e80:
    // 0x358e80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358e80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358e84:
    // 0x358e84: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x358e84u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_358e88:
    // 0x358e88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x358e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_358e8c:
    // 0x358e8c: 0x240ae01f  addiu       $t2, $zero, -0x1FE1
    ctx->pc = 0x358e8cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959135));
label_358e90:
    // 0x358e90: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x358e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_358e94:
    // 0x358e94: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x358e94u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_358e98:
    // 0x358e98: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x358e98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_358e9c:
    // 0x358e9c: 0x34c61fff  ori         $a2, $a2, 0x1FFF
    ctx->pc = 0x358e9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8191);
label_358ea0:
    // 0x358ea0: 0x24a747a8  addiu       $a3, $a1, 0x47A8
    ctx->pc = 0x358ea0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 18344));
label_358ea4:
    // 0x358ea4: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x358ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_358ea8:
    // 0x358ea8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358ea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358eac:
    // 0x358eac: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x358eacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_358eb0:
    // 0x358eb0: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x358eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_358eb4:
    // 0x358eb4: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x358eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_358eb8:
    // 0x358eb8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x358eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_358ebc:
    // 0x358ebc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358ebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358ec0:
    // 0x358ec0: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x358ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_358ec4:
    // 0x358ec4: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x358ec4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
label_358ec8:
    // 0x358ec8: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x358ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_358ecc:
    // 0x358ecc: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x358eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_358ed0:
    // 0x358ed0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358ed4:
    // 0x358ed4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x358ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_358ed8:
    // 0x358ed8: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x358ed8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_358edc:
    // 0x358edc: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x358edcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_358ee0:
    // 0x358ee0: 0x30421fe0  andi        $v0, $v0, 0x1FE0
    ctx->pc = 0x358ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8160);
label_358ee4:
    // 0x358ee4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358ee4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358ee8:
    // 0x358ee8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x358ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_358eec:
    // 0x358eec: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x358eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_358ef0:
    // 0x358ef0: 0x8ca247a8  lw          $v0, 0x47A8($a1)
    ctx->pc = 0x358ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_358ef4:
    // 0x358ef4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x358ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_358ef8:
    // 0x358ef8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358ef8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358efc:
    // 0x358efc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x358efcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_358f00:
    // 0x358f00: 0x94e20002  lhu         $v0, 0x2($a3)
    ctx->pc = 0x358f00u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 7), 2)));
label_358f04:
    // 0x358f04: 0x3e00008  jr          $ra
label_358f08:
    if (ctx->pc == 0x358F08u) {
        ctx->pc = 0x358F08u;
            // 0x358f08: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x358F0Cu;
        goto label_358f0c;
    }
    ctx->pc = 0x358F04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358F08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358F04u;
            // 0x358f08: 0xa4820002  sh          $v0, 0x2($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358F0Cu;
label_358f0c:
    // 0x358f0c: 0x0  nop
    ctx->pc = 0x358f0cu;
    // NOP
label_358f10:
    // 0x358f10: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x358f10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_358f14:
    // 0x358f14: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x358f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358f18:
    // 0x358f18: 0x8ca347a8  lw          $v1, 0x47A8($a1)
    ctx->pc = 0x358f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 18344)));
label_358f1c:
    // 0x358f1c: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x358f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_358f20:
    // 0x358f20: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x358f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_358f24:
    // 0x358f24: 0x2407fff9  addiu       $a3, $zero, -0x7
    ctx->pc = 0x358f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_358f28:
    // 0x358f28: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x358f28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_358f2c:
    // 0x358f2c: 0x2408fff7  addiu       $t0, $zero, -0x9
    ctx->pc = 0x358f2cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
label_358f30:
    // 0x358f30: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358f30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358f34:
    // 0x358f34: 0x2409ffef  addiu       $t1, $zero, -0x11
    ctx->pc = 0x358f34u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
label_358f38:
    // 0x358f38: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x358f38u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_358f3c:
    // 0x358f3c: 0x240ae01f  addiu       $t2, $zero, -0x1FE1
    ctx->pc = 0x358f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959135));
label_358f40:
    // 0x358f40: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x358f40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
label_358f44:
    // 0x358f44: 0x3c06ffff  lui         $a2, 0xFFFF
    ctx->pc = 0x358f44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)65535 << 16));
label_358f48:
    // 0x358f48: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x358f48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358f4c:
    // 0x358f4c: 0x34c61fff  ori         $a2, $a2, 0x1FFF
    ctx->pc = 0x358f4cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)8191);
label_358f50:
    // 0x358f50: 0x24a747a8  addiu       $a3, $a1, 0x47A8
    ctx->pc = 0x358f50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), 18344));
label_358f54:
    // 0x358f54: 0x30420006  andi        $v0, $v0, 0x6
    ctx->pc = 0x358f54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)6);
label_358f58:
    // 0x358f58: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358f58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358f5c:
    // 0x358f5c: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x358f5cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_358f60:
    // 0x358f60: 0x681824  and         $v1, $v1, $t0
    ctx->pc = 0x358f60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_358f64:
    // 0x358f64: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x358f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358f68:
    // 0x358f68: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x358f68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_358f6c:
    // 0x358f6c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358f6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358f70:
    // 0x358f70: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x358f70u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_358f74:
    // 0x358f74: 0x691824  and         $v1, $v1, $t1
    ctx->pc = 0x358f74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 9));
label_358f78:
    // 0x358f78: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x358f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358f7c:
    // 0x358f7c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x358f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_358f80:
    // 0x358f80: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358f80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358f84:
    // 0x358f84: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x358f84u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_358f88:
    // 0x358f88: 0x6a1824  and         $v1, $v1, $t2
    ctx->pc = 0x358f88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 10));
label_358f8c:
    // 0x358f8c: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x358f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358f90:
    // 0x358f90: 0x30421fe0  andi        $v0, $v0, 0x1FE0
    ctx->pc = 0x358f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8160);
label_358f94:
    // 0x358f94: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358f94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358f98:
    // 0x358f98: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x358f98u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_358f9c:
    // 0x358f9c: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x358f9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
label_358fa0:
    // 0x358fa0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x358fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_358fa4:
    // 0x358fa4: 0x3042e000  andi        $v0, $v0, 0xE000
    ctx->pc = 0x358fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57344);
label_358fa8:
    // 0x358fa8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x358fa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_358fac:
    // 0x358fac: 0xaca347a8  sw          $v1, 0x47A8($a1)
    ctx->pc = 0x358facu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 18344), GPR_U32(ctx, 3));
label_358fb0:
    // 0x358fb0: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x358fb0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
label_358fb4:
    // 0x358fb4: 0x3e00008  jr          $ra
label_358fb8:
    if (ctx->pc == 0x358FB8u) {
        ctx->pc = 0x358FB8u;
            // 0x358fb8: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x358FBCu;
        goto label_358fbc;
    }
    ctx->pc = 0x358FB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x358FB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358FB4u;
            // 0x358fb8: 0xa4e20002  sh          $v0, 0x2($a3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 7), 2), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x358FBCu;
label_358fbc:
    // 0x358fbc: 0x0  nop
    ctx->pc = 0x358fbcu;
    // NOP
label_358fc0:
    // 0x358fc0: 0x3c06bc00  lui         $a2, 0xBC00
    ctx->pc = 0x358fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)48128 << 16));
label_358fc4:
    // 0x358fc4: 0x8cc603c0  lw          $a2, 0x3C0($a2)
    ctx->pc = 0x358fc4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 960)));
label_358fc8:
    // 0x358fc8: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
label_358fcc:
    if (ctx->pc == 0x358FCCu) {
        ctx->pc = 0x358FCCu;
            // 0x358fcc: 0x3c088007  lui         $t0, 0x8007 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
        ctx->pc = 0x358FD0u;
        goto label_358fd0;
    }
    ctx->pc = 0x358FC8u;
    {
        const bool branch_taken_0x358fc8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x358FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x358FC8u;
            // 0x358fcc: 0x3c088007  lui         $t0, 0x8007 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x358fc8) {
            ctx->pc = 0x359010u;
            goto label_359010;
        }
    }
    ctx->pc = 0x358FD0u;
label_358fd0:
    // 0x358fd0: 0x3c02bc00  lui         $v0, 0xBC00
    ctx->pc = 0x358fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)48128 << 16));
label_358fd4:
    // 0x358fd4: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x358fd4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_358fd8:
    // 0x358fd8: 0x25074700  addiu       $a3, $t0, 0x4700
    ctx->pc = 0x358fd8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 18176));
label_358fdc:
    // 0x358fdc: 0x24c6000f  addiu       $a2, $a2, 0xF
    ctx->pc = 0x358fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 15));
label_358fe0:
    // 0x358fe0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x358fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_358fe4:
    // 0x358fe4: 0x0  nop
    ctx->pc = 0x358fe4u;
    // NOP
label_358fe8:
    // 0x358fe8: 0xc51021  addu        $v0, $a2, $a1
    ctx->pc = 0x358fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_358fec:
    // 0x358fec: 0xe52021  addu        $a0, $a3, $a1
    ctx->pc = 0x358fecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_358ff0:
    // 0x358ff0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x358ff0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_358ff4:
    // 0x358ff4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x358ff4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_358ff8:
    // 0x358ff8: 0x28a20026  slti        $v0, $a1, 0x26
    ctx->pc = 0x358ff8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)38) ? 1 : 0);
label_358ffc:
    // 0x358ffc: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x358ffcu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
label_359000:
    // 0x359000: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_359004:
    if (ctx->pc == 0x359004u) {
        ctx->pc = 0x359008u;
        goto label_359008;
    }
    ctx->pc = 0x359000u;
    {
        const bool branch_taken_0x359000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359000) {
            ctx->pc = 0x358FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_358fe8;
        }
    }
    ctx->pc = 0x359008u;
label_359008:
    // 0x359008: 0x10000002  b           . + 4 + (0x2 << 2)
label_35900c:
    if (ctx->pc == 0x35900Cu) {
        ctx->pc = 0x35900Cu;
            // 0x35900c: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->pc = 0x359010u;
        goto label_359010;
    }
    ctx->pc = 0x359008u;
    {
        const bool branch_taken_0x359008 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35900Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359008u;
            // 0x35900c: 0xdd034700  ld          $v1, 0x4700($t0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359008) {
            ctx->pc = 0x359014u;
            goto label_359014;
        }
    }
    ctx->pc = 0x359010u;
label_359010:
    // 0x359010: 0xdd034700  ld          $v1, 0x4700($t0)
    ctx->pc = 0x359010u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 8), 18176)));
label_359014:
    // 0x359014: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x359014u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
label_359018:
    // 0x359018: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x359018u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_35901c:
    // 0x35901c: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x35901cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_359020:
    // 0x359020: 0x14400015  bnez        $v0, . + 4 + (0x15 << 2)
label_359024:
    if (ctx->pc == 0x359024u) {
        ctx->pc = 0x359028u;
        goto label_359028;
    }
    ctx->pc = 0x359020u;
    {
        const bool branch_taken_0x359020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359020) {
            ctx->pc = 0x359078u;
            goto label_359078;
        }
    }
    ctx->pc = 0x359028u;
label_359028:
    // 0x359028: 0x2402feff  addiu       $v0, $zero, -0x101
    ctx->pc = 0x359028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
label_35902c:
    // 0x35902c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x35902cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_359030:
    // 0x359030: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x359030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_359034:
    // 0x359034: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x359034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_359038:
    // 0x359038: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x359038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_35903c:
    // 0x35903c: 0x2404f3ff  addiu       $a0, $zero, -0xC01
    ctx->pc = 0x35903cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294964223));
label_359040:
    // 0x359040: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x359040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_359044:
    // 0x359044: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x359044u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_359048:
    // 0x359048: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x359048u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
label_35904c:
    // 0x35904c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x35904cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
label_359050:
    // 0x359050: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x359050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_359054:
    // 0x359054: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x359054u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_359058:
    // 0x359058: 0x34630fff  ori         $v1, $v1, 0xFFF
    ctx->pc = 0x359058u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4095);
label_35905c:
    // 0x35905c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x35905cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_359060:
    // 0x359060: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x359060u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_359064:
    // 0x359064: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x359064u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_359068:
    // 0x359068: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x359068u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_35906c:
    // 0x35906c: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x35906cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_359070:
    // 0x359070: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x359070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_359074:
    // 0x359074: 0xfd024700  sd          $v0, 0x4700($t0)
    ctx->pc = 0x359074u;
    WRITE64(ADD32(GPR_U32(ctx, 8), 18176), GPR_U64(ctx, 2));
label_359078:
    // 0x359078: 0x3e00008  jr          $ra
label_35907c:
    if (ctx->pc == 0x35907Cu) {
        ctx->pc = 0x359080u;
        goto label_359080;
    }
    ctx->pc = 0x359078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359080u;
label_359080:
    // 0x359080: 0xa63821  addu        $a3, $a1, $a2
    ctx->pc = 0x359080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_359084:
    // 0x359084: 0x2ce20081  sltiu       $v0, $a3, 0x81
    ctx->pc = 0x359084u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_359088:
    // 0x359088: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_35908c:
    if (ctx->pc == 0x35908Cu) {
        ctx->pc = 0x35908Cu;
            // 0x35908c: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359090u;
        goto label_359090;
    }
    ctx->pc = 0x359088u;
    {
        const bool branch_taken_0x359088 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x35908Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359088u;
            // 0x35908c: 0x80502d  daddu       $t2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359088) {
            ctx->pc = 0x3590ACu;
            goto label_3590ac;
        }
    }
    ctx->pc = 0x359090u;
label_359090:
    // 0x359090: 0x2cc20080  sltiu       $v0, $a2, 0x80
    ctx->pc = 0x359090u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_359094:
    // 0x359094: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_359098:
    if (ctx->pc == 0x359098u) {
        ctx->pc = 0x359098u;
            // 0x359098: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x35909Cu;
        goto label_35909c;
    }
    ctx->pc = 0x359094u;
    {
        const bool branch_taken_0x359094 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359098u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359094u;
            // 0x359098: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359094) {
            ctx->pc = 0x3590A4u;
            goto label_3590a4;
        }
    }
    ctx->pc = 0x35909Cu;
label_35909c:
    // 0x35909c: 0x10000003  b           . + 4 + (0x3 << 2)
label_3590a0:
    if (ctx->pc == 0x3590A0u) {
        ctx->pc = 0x3590A0u;
            // 0x3590a0: 0x462823  subu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->pc = 0x3590A4u;
        goto label_3590a4;
    }
    ctx->pc = 0x35909Cu;
    {
        const bool branch_taken_0x35909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3590A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35909Cu;
            // 0x3590a0: 0x462823  subu        $a1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35909c) {
            ctx->pc = 0x3590ACu;
            goto label_3590ac;
        }
    }
    ctx->pc = 0x3590A4u;
label_3590a4:
    // 0x3590a4: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x3590a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_3590a8:
    // 0x3590a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3590a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3590ac:
    // 0x3590ac: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x3590acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
label_3590b0:
    // 0x3590b0: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x3590b0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_3590b4:
    // 0x3590b4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_3590b8:
    if (ctx->pc == 0x3590B8u) {
        ctx->pc = 0x3590B8u;
            // 0x3590b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3590BCu;
        goto label_3590bc;
    }
    ctx->pc = 0x3590B4u;
    {
        const bool branch_taken_0x3590b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3590B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3590B4u;
            // 0x3590b8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3590b4) {
            ctx->pc = 0x3590F4u;
            goto label_3590f4;
        }
    }
    ctx->pc = 0x3590BCu;
label_3590bc:
    // 0x3590bc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x3590bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3590c0:
    // 0x3590c0: 0x3c098007  lui         $t1, 0x8007
    ctx->pc = 0x3590c0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32775 << 16));
label_3590c4:
    // 0x3590c4: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x3590c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_3590c8:
    // 0x3590c8: 0x24a247b0  addiu       $v0, $a1, 0x47B0
    ctx->pc = 0x3590c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 18352));
label_3590cc:
    // 0x3590cc: 0x1482021  addu        $a0, $t2, $t0
    ctx->pc = 0x3590ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
label_3590d0:
    // 0x3590d0: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x3590d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_3590d4:
    // 0x3590d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3590d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3590d8:
    // 0x3590d8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x3590d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_3590dc:
    // 0x3590dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x3590dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_3590e0:
    // 0x3590e0: 0xc7102b  sltu        $v0, $a2, $a3
    ctx->pc = 0x3590e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3590e4:
    // 0x3590e4: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_3590e8:
    if (ctx->pc == 0x3590E8u) {
        ctx->pc = 0x3590E8u;
            // 0x3590e8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->pc = 0x3590ECu;
        goto label_3590ec;
    }
    ctx->pc = 0x3590E4u;
    {
        const bool branch_taken_0x3590e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3590E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3590E4u;
            // 0x3590e8: 0xa0830000  sb          $v1, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3590e4) {
            ctx->pc = 0x3590C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3590c8;
        }
    }
    ctx->pc = 0x3590ECu;
label_3590ec:
    // 0x3590ec: 0x10000003  b           . + 4 + (0x3 << 2)
label_3590f0:
    if (ctx->pc == 0x3590F0u) {
        ctx->pc = 0x3590F0u;
            // 0x3590f0: 0xdd234700  ld          $v1, 0x4700($t1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
        ctx->pc = 0x3590F4u;
        goto label_3590f4;
    }
    ctx->pc = 0x3590ECu;
    {
        const bool branch_taken_0x3590ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3590F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3590ECu;
            // 0x3590f0: 0xdd234700  ld          $v1, 0x4700($t1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3590ec) {
            ctx->pc = 0x3590FCu;
            goto label_3590fc;
        }
    }
    ctx->pc = 0x3590F4u;
label_3590f4:
    // 0x3590f4: 0x3c098007  lui         $t1, 0x8007
    ctx->pc = 0x3590f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)32775 << 16));
label_3590f8:
    // 0x3590f8: 0xdd234700  ld          $v1, 0x4700($t1)
    ctx->pc = 0x3590f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 9), 18176)));
label_3590fc:
    // 0x3590fc: 0x316b8  dsll        $v0, $v1, 26
    ctx->pc = 0x3590fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 26);
label_359100:
    // 0x359100: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x359100u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_359104:
    // 0x359104: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x359104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_359108:
    // 0x359108: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_35910c:
    if (ctx->pc == 0x35910Cu) {
        ctx->pc = 0x359110u;
        goto label_359110;
    }
    ctx->pc = 0x359108u;
    {
        const bool branch_taken_0x359108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x359108) {
            ctx->pc = 0x359118u;
            goto label_359118;
        }
    }
    ctx->pc = 0x359110u;
label_359110:
    // 0x359110: 0x3e00008  jr          $ra
label_359114:
    if (ctx->pc == 0x359114u) {
        ctx->pc = 0x359114u;
            // 0x359114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359118u;
        goto label_359118;
    }
    ctx->pc = 0x359110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359110u;
            // 0x359114: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359118u;
label_359118:
    // 0x359118: 0x3133e  dsrl32      $v0, $v1, 12
    ctx->pc = 0x359118u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> (32 + 12));
label_35911c:
    // 0x35911c: 0x3e00008  jr          $ra
label_359120:
    if (ctx->pc == 0x359120u) {
        ctx->pc = 0x359120u;
            // 0x359120: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->pc = 0x359124u;
        goto label_359124;
    }
    ctx->pc = 0x35911Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35911Cu;
            // 0x359120: 0x3042000f  andi        $v0, $v0, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359124u;
label_359124:
    // 0x359124: 0x0  nop
    ctx->pc = 0x359124u;
    // NOP
label_359128:
    // 0x359128: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x359128u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_35912c:
    // 0x35912c: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x35912cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_359130:
    // 0x359130: 0x2ca20081  sltiu       $v0, $a1, 0x81
    ctx->pc = 0x359130u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
label_359134:
    // 0x359134: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_359138:
    if (ctx->pc == 0x359138u) {
        ctx->pc = 0x359138u;
            // 0x359138: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x35913Cu;
        goto label_35913c;
    }
    ctx->pc = 0x359134u;
    {
        const bool branch_taken_0x359134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359134u;
            // 0x359138: 0x80482d  daddu       $t1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359134) {
            ctx->pc = 0x35915Cu;
            goto label_35915c;
        }
    }
    ctx->pc = 0x35913Cu;
label_35913c:
    // 0x35913c: 0x2cc20080  sltiu       $v0, $a2, 0x80
    ctx->pc = 0x35913cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
label_359140:
    // 0x359140: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_359144:
    if (ctx->pc == 0x359144u) {
        ctx->pc = 0x359144u;
            // 0x359144: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x359148u;
        goto label_359148;
    }
    ctx->pc = 0x359140u;
    {
        const bool branch_taken_0x359140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359144u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359140u;
            // 0x359144: 0x24020080  addiu       $v0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359140) {
            ctx->pc = 0x359150u;
            goto label_359150;
        }
    }
    ctx->pc = 0x359148u;
label_359148:
    // 0x359148: 0x10000003  b           . + 4 + (0x3 << 2)
label_35914c:
    if (ctx->pc == 0x35914Cu) {
        ctx->pc = 0x35914Cu;
            // 0x35914c: 0x461823  subu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->pc = 0x359150u;
        goto label_359150;
    }
    ctx->pc = 0x359148u;
    {
        const bool branch_taken_0x359148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35914Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359148u;
            // 0x35914c: 0x461823  subu        $v1, $v0, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359148) {
            ctx->pc = 0x359158u;
            goto label_359158;
        }
    }
    ctx->pc = 0x359150u;
label_359150:
    // 0x359150: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x359150u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_359154:
    // 0x359154: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x359154u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359158:
    // 0x359158: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x359158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_35915c:
    // 0x35915c: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x35915cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_359160:
    // 0x359160: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_359164:
    if (ctx->pc == 0x359164u) {
        ctx->pc = 0x359164u;
            // 0x359164: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359168u;
        goto label_359168;
    }
    ctx->pc = 0x359160u;
    {
        const bool branch_taken_0x359160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359164u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359160u;
            // 0x359164: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359160) {
            ctx->pc = 0x359194u;
            goto label_359194;
        }
    }
    ctx->pc = 0x359168u;
label_359168:
    // 0x359168: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x359168u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
label_35916c:
    // 0x35916c: 0x0  nop
    ctx->pc = 0x35916cu;
    // NOP
label_359170:
    // 0x359170: 0x1271021  addu        $v0, $t1, $a3
    ctx->pc = 0x359170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 7)));
label_359174:
    // 0x359174: 0x250347b0  addiu       $v1, $t0, 0x47B0
    ctx->pc = 0x359174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 18352));
label_359178:
    // 0x359178: 0xc31821  addu        $v1, $a2, $v1
    ctx->pc = 0x359178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_35917c:
    // 0x35917c: 0x90440000  lbu         $a0, 0x0($v0)
    ctx->pc = 0x35917cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_359180:
    // 0x359180: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x359180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_359184:
    // 0x359184: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x359184u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_359188:
    // 0x359188: 0xc5102b  sltu        $v0, $a2, $a1
    ctx->pc = 0x359188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_35918c:
    // 0x35918c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_359190:
    if (ctx->pc == 0x359190u) {
        ctx->pc = 0x359190u;
            // 0x359190: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->pc = 0x359194u;
        goto label_359194;
    }
    ctx->pc = 0x35918Cu;
    {
        const bool branch_taken_0x35918c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35918Cu;
            // 0x359190: 0xa0640000  sb          $a0, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35918c) {
            ctx->pc = 0x359170u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359170;
        }
    }
    ctx->pc = 0x359194u;
label_359194:
    // 0x359194: 0x3e00008  jr          $ra
label_359198:
    if (ctx->pc == 0x359198u) {
        ctx->pc = 0x35919Cu;
        goto label_35919c;
    }
    ctx->pc = 0x359194u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35919Cu;
label_35919c:
    // 0x35919c: 0x0  nop
    ctx->pc = 0x35919cu;
    // NOP
label_3591a0:
    // 0x3591a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3591a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3591a4:
    // 0x3591a4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3591a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3591a8:
    // 0x3591a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3591a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3591ac:
    // 0x3591ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3591acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3591b0:
    // 0x3591b0: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3591b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3591b4:
    // 0x3591b4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3591b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_3591b8:
    // 0x3591b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x3591b8u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
label_3591bc:
    // 0x3591bc: 0x3484f000  ori         $a0, $a0, 0xF000
    ctx->pc = 0x3591bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)61440);
label_3591c0:
    // 0x3591c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x3591c0u;
    SET_GPR_S32(ctx, 2, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0))); // MMIO: 0x10000000
label_3591c4:
    // 0x3591c4: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x3591c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_3591c8:
    // 0x3591c8: 0x0  nop
    ctx->pc = 0x3591c8u;
    // NOP
label_3591cc:
    // 0x3591cc: 0x0  nop
    ctx->pc = 0x3591ccu;
    // NOP
label_3591d0:
    // 0x3591d0: 0x0  nop
    ctx->pc = 0x3591d0u;
    // NOP
label_3591d4:
    // 0x3591d4: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
label_3591d8:
    if (ctx->pc == 0x3591D8u) {
        ctx->pc = 0x3591DCu;
        goto label_3591dc;
    }
    ctx->pc = 0x3591D4u;
    {
        const bool branch_taken_0x3591d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3591d4) {
            ctx->pc = 0x3591C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3591c0;
        }
    }
    ctx->pc = 0x3591DCu;
label_3591dc:
    // 0x3591dc: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3591dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3591e0:
    // 0x3591e0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x3591e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3591e4:
    // 0x3591e4: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3591e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3591e8:
    // 0x3591e8: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x3591e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_3591ec:
    // 0x3591ec: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x3591ecu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
label_3591f0:
    // 0x3591f0: 0x8c624760  lw          $v0, 0x4760($v1)
    ctx->pc = 0x3591f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18272)));
label_3591f4:
    // 0x3591f4: 0x40f809  jalr        $v0
label_3591f8:
    if (ctx->pc == 0x3591F8u) {
        ctx->pc = 0x3591FCu;
        goto label_3591fc;
    }
    ctx->pc = 0x3591F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3591FCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3591FCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3591FCu; }
            if (ctx->pc != 0x3591FCu) { return; }
        }
        }
    }
    ctx->pc = 0x3591FCu;
label_3591fc:
    // 0x3591fc: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x3591fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_359200:
    // 0x359200: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x359200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_359204:
    // 0x359204: 0x8c434764  lw          $v1, 0x4764($v0)
    ctx->pc = 0x359204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18276)));
label_359208:
    // 0x359208: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x359208u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_35920c:
    // 0x35920c: 0x60f809  jalr        $v1
label_359210:
    if (ctx->pc == 0x359210u) {
        ctx->pc = 0x359210u;
            // 0x359210: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x359214u;
        goto label_359214;
    }
    ctx->pc = 0x35920Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x359214u);
        ctx->pc = 0x359210u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35920Cu;
            // 0x359210: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x359214u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359214u; }
            if (ctx->pc != 0x359214u) { return; }
        }
        }
    }
    ctx->pc = 0x359214u;
label_359214:
    // 0x359214: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x359214u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_359218:
    // 0x359218: 0x8c43474c  lw          $v1, 0x474C($v0)
    ctx->pc = 0x359218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18252)));
label_35921c:
    // 0x35921c: 0x60f809  jalr        $v1
label_359220:
    if (ctx->pc == 0x359220u) {
        ctx->pc = 0x359220u;
            // 0x359220: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->pc = 0x359224u;
        goto label_359224;
    }
    ctx->pc = 0x35921Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x359224u);
        ctx->pc = 0x359220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35921Cu;
            // 0x359220: 0x3404dffd  ori         $a0, $zero, 0xDFFD (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)57341);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x359224u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359224u; }
            if (ctx->pc != 0x359224u) { return; }
        }
        }
    }
    ctx->pc = 0x359224u;
label_359224:
    // 0x359224: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x359224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_359228:
    // 0x359228: 0x8c434750  lw          $v1, 0x4750($v0)
    ctx->pc = 0x359228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18256)));
label_35922c:
    // 0x35922c: 0x60f809  jalr        $v1
label_359230:
    if (ctx->pc == 0x359230u) {
        ctx->pc = 0x359234u;
        goto label_359234;
    }
    ctx->pc = 0x35922Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x359234u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x359234u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359234u; }
            if (ctx->pc != 0x359234u) { return; }
        }
        }
    }
    ctx->pc = 0x359234u;
label_359234:
    // 0x359234: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x359234u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_359238:
    // 0x359238: 0x8c43475c  lw          $v1, 0x475C($v0)
    ctx->pc = 0x359238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18268)));
label_35923c:
    // 0x35923c: 0x60f809  jalr        $v1
label_359240:
    if (ctx->pc == 0x359240u) {
        ctx->pc = 0x359240u;
            // 0x359240: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->pc = 0x359244u;
        goto label_359244;
    }
    ctx->pc = 0x35923Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x359244u);
        ctx->pc = 0x359240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35923Cu;
            // 0x359240: 0x2404007f  addiu       $a0, $zero, 0x7F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x359244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359244u; }
            if (ctx->pc != 0x359244u) { return; }
        }
        }
    }
    ctx->pc = 0x359244u;
label_359244:
    // 0x359244: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x359244u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_359248:
    // 0x359248: 0x8c434754  lw          $v1, 0x4754($v0)
    ctx->pc = 0x359248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18260)));
label_35924c:
    // 0x35924c: 0x60f809  jalr        $v1
label_359250:
    if (ctx->pc == 0x359250u) {
        ctx->pc = 0x359254u;
        goto label_359254;
    }
    ctx->pc = 0x35924Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x359254u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x359254u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359254u; }
            if (ctx->pc != 0x359254u) { return; }
        }
        }
    }
    ctx->pc = 0x359254u;
label_359254:
    // 0x359254: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x359254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_359258:
    // 0x359258: 0x8c434758  lw          $v1, 0x4758($v0)
    ctx->pc = 0x359258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18264)));
label_35925c:
    // 0x35925c: 0x60f809  jalr        $v1
label_359260:
    if (ctx->pc == 0x359260u) {
        ctx->pc = 0x359264u;
        goto label_359264;
    }
    ctx->pc = 0x35925Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x359264u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x359264u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359264u; }
            if (ctx->pc != 0x359264u) { return; }
        }
        }
    }
    ctx->pc = 0x359264u;
label_359264:
    // 0x359264: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x359264u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_359268:
    // 0x359268: 0x3e00008  jr          $ra
label_35926c:
    if (ctx->pc == 0x35926Cu) {
        ctx->pc = 0x35926Cu;
            // 0x35926c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x359270u;
        goto label_359270;
    }
    ctx->pc = 0x359268u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x35926Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359268u;
            // 0x35926c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359270u;
label_359270:
    // 0x359270: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x359270u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_359274:
    // 0x359274: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x359274u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_359278:
    // 0x359278: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x359278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_35927c:
    // 0x35927c: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x35927cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_359280:
    // 0x359280: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x359280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_359284:
    // 0x359284: 0x241e0010  addiu       $fp, $zero, 0x10
    ctx->pc = 0x359284u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_359288:
    // 0x359288: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x359288u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_35928c:
    // 0x35928c: 0x3c178007  lui         $s7, 0x8007
    ctx->pc = 0x35928cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)32775 << 16));
label_359290:
    // 0x359290: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x359290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_359294:
    // 0x359294: 0x3c168007  lui         $s6, 0x8007
    ctx->pc = 0x359294u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)32775 << 16));
label_359298:
    // 0x359298: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x359298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_35929c:
    // 0x35929c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x35929cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3592a0:
    // 0x3592a0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x3592a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_3592a4:
    // 0x3592a4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x3592a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3592a8:
    // 0x3592a8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x3592a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_3592ac:
    // 0x3592ac: 0x3c128007  lui         $s2, 0x8007
    ctx->pc = 0x3592acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32775 << 16));
label_3592b0:
    // 0x3592b0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x3592b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_3592b4:
    // 0x3592b4: 0x2411004c  addiu       $s1, $zero, 0x4C
    ctx->pc = 0x3592b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_3592b8:
    // 0x3592b8: 0x8c484728  lw          $t0, 0x4728($v0)
    ctx->pc = 0x3592b8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18216)));
label_3592bc:
    // 0x3592bc: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3592bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3592c0:
    // 0x3592c0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3592c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3592c4:
    // 0x3592c4: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x3592c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_3592c8:
    // 0x3592c8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x3592c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_3592cc:
    // 0x3592cc: 0x8d130000  lw          $s3, 0x0($t0)
    ctx->pc = 0x3592ccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_3592d0:
    // 0x3592d0: 0x8c624730  lw          $v0, 0x4730($v1)
    ctx->pc = 0x3592d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18224)));
label_3592d4:
    // 0x3592d4: 0xafa70004  sw          $a3, 0x4($sp)
    ctx->pc = 0x3592d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 7));
label_3592d8:
    // 0x3592d8: 0x40f809  jalr        $v0
label_3592dc:
    if (ctx->pc == 0x3592DCu) {
        ctx->pc = 0x3592DCu;
            // 0x3592dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3592E0u;
        goto label_3592e0;
    }
    ctx->pc = 0x3592D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3592E0u);
        ctx->pc = 0x3592DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3592D8u;
            // 0x3592dc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3592E0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3592E0u; }
            if (ctx->pc != 0x3592E0u) { return; }
        }
        }
    }
    ctx->pc = 0x3592E0u;
label_3592e0:
    // 0x3592e0: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x3592e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_3592e4:
    // 0x3592e4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x3592e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3592e8:
    // 0x3592e8: 0x8c624734  lw          $v0, 0x4734($v1)
    ctx->pc = 0x3592e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18228)));
label_3592ec:
    // 0x3592ec: 0x40f809  jalr        $v0
label_3592f0:
    if (ctx->pc == 0x3592F0u) {
        ctx->pc = 0x3592F0u;
            // 0x3592f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3592F4u;
        goto label_3592f4;
    }
    ctx->pc = 0x3592ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3592F4u);
        ctx->pc = 0x3592F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3592ECu;
            // 0x3592f0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3592F4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3592F4u; }
            if (ctx->pc != 0x3592F4u) { return; }
        }
        }
    }
    ctx->pc = 0x3592F4u;
label_3592f4:
    // 0x3592f4: 0x0  nop
    ctx->pc = 0x3592f4u;
    // NOP
label_3592f8:
    // 0x3592f8: 0x8ec24748  lw          $v0, 0x4748($s6)
    ctx->pc = 0x3592f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_3592fc:
    // 0x3592fc: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3592fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_359300:
    // 0x359300: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x359300u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_359304:
    // 0x359304: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_359308:
    if (ctx->pc == 0x359308u) {
        ctx->pc = 0x359308u;
            // 0x359308: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x35930Cu;
        goto label_35930c;
    }
    ctx->pc = 0x359304u;
    {
        const bool branch_taken_0x359304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x359304) {
            ctx->pc = 0x359308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x359304u;
            // 0x359308: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x359348u;
            goto label_359348;
        }
    }
    ctx->pc = 0x35930Cu;
label_35930c:
    // 0x35930c: 0x5213000e  beql        $s0, $s3, . + 4 + (0xE << 2)
label_359310:
    if (ctx->pc == 0x359310u) {
        ctx->pc = 0x359310u;
            // 0x359310: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x359314u;
        goto label_359314;
    }
    ctx->pc = 0x35930Cu;
    {
        const bool branch_taken_0x35930c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        if (branch_taken_0x35930c) {
            ctx->pc = 0x359310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35930Cu;
            // 0x359310: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x359348u;
            goto label_359348;
        }
    }
    ctx->pc = 0x359314u;
label_359314:
    // 0x359314: 0x145e0006  bne         $v0, $fp, . + 4 + (0x6 << 2)
label_359318:
    if (ctx->pc == 0x359318u) {
        ctx->pc = 0x359318u;
            // 0x359318: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->pc = 0x35931Cu;
        goto label_35931c;
    }
    ctx->pc = 0x359314u;
    {
        const bool branch_taken_0x359314 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 30));
        ctx->pc = 0x359318u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359314u;
            // 0x359318: 0x8ee24744  lw          $v0, 0x4744($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 18244)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359314) {
            ctx->pc = 0x359330u;
            goto label_359330;
        }
    }
    ctx->pc = 0x35931Cu;
label_35931c:
    // 0x35931c: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x35931cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_359320:
    // 0x359320: 0x40f809  jalr        $v0
label_359324:
    if (ctx->pc == 0x359324u) {
        ctx->pc = 0x359324u;
            // 0x359324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359328u;
        goto label_359328;
    }
    ctx->pc = 0x359320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359328u);
        ctx->pc = 0x359324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359320u;
            // 0x359324: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x359328u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359328u; }
            if (ctx->pc != 0x359328u) { return; }
        }
        }
    }
    ctx->pc = 0x359328u;
label_359328:
    // 0x359328: 0x10000007  b           . + 4 + (0x7 << 2)
label_35932c:
    if (ctx->pc == 0x35932Cu) {
        ctx->pc = 0x35932Cu;
            // 0x35932c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x359330u;
        goto label_359330;
    }
    ctx->pc = 0x359328u;
    {
        const bool branch_taken_0x359328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35932Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359328u;
            // 0x35932c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359328) {
            ctx->pc = 0x359348u;
            goto label_359348;
        }
    }
    ctx->pc = 0x359330u;
label_359330:
    // 0x359330: 0x40f809  jalr        $v0
label_359334:
    if (ctx->pc == 0x359334u) {
        ctx->pc = 0x359334u;
            // 0x359334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359338u;
        goto label_359338;
    }
    ctx->pc = 0x359330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359338u);
        ctx->pc = 0x359334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359330u;
            // 0x359334: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x359338u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359338u; }
            if (ctx->pc != 0x359338u) { return; }
        }
        }
    }
    ctx->pc = 0x359338u;
label_359338:
    // 0x359338: 0x8e424740  lw          $v0, 0x4740($s2)
    ctx->pc = 0x359338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 18240)));
label_35933c:
    // 0x35933c: 0x40f809  jalr        $v0
label_359340:
    if (ctx->pc == 0x359340u) {
        ctx->pc = 0x359340u;
            // 0x359340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359344u;
        goto label_359344;
    }
    ctx->pc = 0x35933Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359344u);
        ctx->pc = 0x359340u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35933Cu;
            // 0x359340: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x359344u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359344u; }
            if (ctx->pc != 0x359344u) { return; }
        }
        }
    }
    ctx->pc = 0x359344u;
label_359344:
    // 0x359344: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x359344u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_359348:
    // 0x359348: 0x2a020100  slti        $v0, $s0, 0x100
    ctx->pc = 0x359348u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)256) ? 1 : 0);
label_35934c:
    // 0x35934c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_359350:
    if (ctx->pc == 0x359350u) {
        ctx->pc = 0x359350u;
            // 0x359350: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->pc = 0x359354u;
        goto label_359354;
    }
    ctx->pc = 0x35934Cu;
    {
        const bool branch_taken_0x35934c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35934Cu;
            // 0x359350: 0x2631004c  addiu       $s1, $s1, 0x4C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 76));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35934c) {
            ctx->pc = 0x3592F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3592f8;
        }
    }
    ctx->pc = 0x359354u;
label_359354:
    // 0x359354: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x359354u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_359358:
    // 0x359358: 0x8c62473c  lw          $v0, 0x473C($v1)
    ctx->pc = 0x359358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18236)));
label_35935c:
    // 0x35935c: 0x40f809  jalr        $v0
label_359360:
    if (ctx->pc == 0x359360u) {
        ctx->pc = 0x359360u;
            // 0x359360: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359364u;
        goto label_359364;
    }
    ctx->pc = 0x35935Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359364u);
        ctx->pc = 0x359360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35935Cu;
            // 0x359360: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x359364u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359364u; }
            if (ctx->pc != 0x359364u) { return; }
        }
        }
    }
    ctx->pc = 0x359364u;
label_359364:
    // 0x359364: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x359364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_359368:
    // 0x359368: 0x8c624738  lw          $v0, 0x4738($v1)
    ctx->pc = 0x359368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18232)));
label_35936c:
    // 0x35936c: 0x40f809  jalr        $v0
label_359370:
    if (ctx->pc == 0x359370u) {
        ctx->pc = 0x359374u;
        goto label_359374;
    }
    ctx->pc = 0x35936Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x359374u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x359374u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359374u; }
            if (ctx->pc != 0x359374u) { return; }
        }
        }
    }
    ctx->pc = 0x359374u;
label_359374:
    // 0x359374: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x359374u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_359378:
    // 0x359378: 0x8c62472c  lw          $v0, 0x472C($v1)
    ctx->pc = 0x359378u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18220)));
label_35937c:
    // 0x35937c: 0xc01d0f2  jal         func_0743C8
label_359380:
    if (ctx->pc == 0x359380u) {
        ctx->pc = 0x359380u;
            // 0x359380: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x359384u;
        goto label_359384;
    }
    ctx->pc = 0x35937Cu;
    SET_GPR_U32(ctx, 31, 0x359384u);
    ctx->pc = 0x359380u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x35937Cu;
            // 0x359380: 0xac400000  sw          $zero, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x743C8u;
    {
        auto targetFn = runtime->lookupFunction(0x743C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359384u; }
        if (ctx->pc != 0x359384u) { return; }
    }
    ctx->pc = 0x359384u;
label_359384:
    // 0x359384: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x359384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_359388:
    // 0x359388: 0x1a80000d  blez        $s4, . + 4 + (0xD << 2)
label_35938c:
    if (ctx->pc == 0x35938Cu) {
        ctx->pc = 0x35938Cu;
            // 0x35938c: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->pc = 0x359390u;
        goto label_359390;
    }
    ctx->pc = 0x359388u;
    {
        const bool branch_taken_0x359388 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x35938Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359388u;
            // 0x35938c: 0x8c444778  lw          $a0, 0x4778($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18296)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359388) {
            ctx->pc = 0x3593C0u;
            goto label_3593c0;
        }
    }
    ctx->pc = 0x359390u;
label_359390:
    // 0x359390: 0x3c118007  lui         $s1, 0x8007
    ctx->pc = 0x359390u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32775 << 16));
label_359394:
    // 0x359394: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x359394u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_359398:
    // 0x359398: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x359398u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_35939c:
    // 0x35939c: 0x8e224770  lw          $v0, 0x4770($s1)
    ctx->pc = 0x35939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 18288)));
label_3593a0:
    // 0x3593a0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3593a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3593a4:
    // 0x3593a4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x3593a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_3593a8:
    // 0x3593a8: 0x40f809  jalr        $v0
label_3593ac:
    if (ctx->pc == 0x3593ACu) {
        ctx->pc = 0x3593ACu;
            // 0x3593ac: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->pc = 0x3593B0u;
        goto label_3593b0;
    }
    ctx->pc = 0x3593A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3593B0u);
        ctx->pc = 0x3593ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3593A8u;
            // 0x3593ac: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3593B0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3593B0u; }
            if (ctx->pc != 0x3593B0u) { return; }
        }
        }
    }
    ctx->pc = 0x3593B0u;
label_3593b0:
    // 0x3593b0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3593b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3593b4:
    // 0x3593b4: 0x214102a  slt         $v0, $s0, $s4
    ctx->pc = 0x3593b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_3593b8:
    // 0x3593b8: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_3593bc:
    if (ctx->pc == 0x3593BCu) {
        ctx->pc = 0x3593BCu;
            // 0x3593bc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x3593C0u;
        goto label_3593c0;
    }
    ctx->pc = 0x3593B8u;
    {
        const bool branch_taken_0x3593b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3593BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3593B8u;
            // 0x3593bc: 0x8fa50004  lw          $a1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3593b8) {
            ctx->pc = 0x359398u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359398;
        }
    }
    ctx->pc = 0x3593C0u;
label_3593c0:
    // 0x3593c0: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x3593c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
label_3593c4:
    // 0x3593c4: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x3593c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_3593c8:
    // 0x3593c8: 0x2621018  mult        $v0, $s3, $v0
    ctx->pc = 0x3593c8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3593cc:
    // 0x3593cc: 0x8ec54748  lw          $a1, 0x4748($s6)
    ctx->pc = 0x3593ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 18248)));
label_3593d0:
    // 0x3593d0: 0x8c644778  lw          $a0, 0x4778($v1)
    ctx->pc = 0x3593d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18296)));
label_3593d4:
    // 0x3593d4: 0x3c038007  lui         $v1, 0x8007
    ctx->pc = 0x3593d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32775 << 16));
label_3593d8:
    // 0x3593d8: 0x8c66476c  lw          $a2, 0x476C($v1)
    ctx->pc = 0x3593d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18284)));
label_3593dc:
    // 0x3593dc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x3593dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_3593e0:
    // 0x3593e0: 0xac440038  sw          $a0, 0x38($v0)
    ctx->pc = 0x3593e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 56), GPR_U32(ctx, 4));
label_3593e4:
    // 0x3593e4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x3593e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3593e8:
    // 0x3593e8: 0xac540034  sw          $s4, 0x34($v0)
    ctx->pc = 0x3593e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 52), GPR_U32(ctx, 20));
label_3593ec:
    // 0x3593ec: 0xac55000c  sw          $s5, 0xC($v0)
    ctx->pc = 0x3593ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 21));
label_3593f0:
    // 0x3593f0: 0xac550030  sw          $s5, 0x30($v0)
    ctx->pc = 0x3593f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 48), GPR_U32(ctx, 21));
label_3593f4:
    // 0x3593f4: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x3593f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_3593f8:
    // 0x3593f8: 0xa440001a  sh          $zero, 0x1A($v0)
    ctx->pc = 0x3593f8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 26), (uint16_t)GPR_U32(ctx, 0));
label_3593fc:
    // 0x3593fc: 0xa4400018  sh          $zero, 0x18($v0)
    ctx->pc = 0x3593fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 24), (uint16_t)GPR_U32(ctx, 0));
label_359400:
    // 0x359400: 0xac400024  sw          $zero, 0x24($v0)
    ctx->pc = 0x359400u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 0));
label_359404:
    // 0x359404: 0xac40001c  sw          $zero, 0x1C($v0)
    ctx->pc = 0x359404u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 28), GPR_U32(ctx, 0));
label_359408:
    // 0x359408: 0xc0f809  jalr        $a2
label_35940c:
    if (ctx->pc == 0x35940Cu) {
        ctx->pc = 0x35940Cu;
            // 0x35940c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->pc = 0x359410u;
        goto label_359410;
    }
    ctx->pc = 0x359408u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x359410u);
        ctx->pc = 0x35940Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359408u;
            // 0x35940c: 0xac400020  sw          $zero, 0x20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x359410u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359410u; }
            if (ctx->pc != 0x359410u) { return; }
        }
        }
    }
    ctx->pc = 0x359410u;
label_359410:
    // 0x359410: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x359410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_359414:
    // 0x359414: 0x8c434768  lw          $v1, 0x4768($v0)
    ctx->pc = 0x359414u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 18280)));
label_359418:
    // 0x359418: 0x60f809  jalr        $v1
label_35941c:
    if (ctx->pc == 0x35941Cu) {
        ctx->pc = 0x359420u;
        goto label_359420;
    }
    ctx->pc = 0x359418u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x359420u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x359420u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359420u; }
            if (ctx->pc != 0x359420u) { return; }
        }
        }
    }
    ctx->pc = 0x359420u;
label_359420:
    // 0x359420: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x359420u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_359424:
    // 0x359424: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x359424u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_359428:
    // 0x359428: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x359428u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_35942c:
    // 0x35942c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x35942cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_359430:
    // 0x359430: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x359430u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_359434:
    // 0x359434: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x359434u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_359438:
    // 0x359438: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x359438u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_35943c:
    // 0x35943c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x35943cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_359440:
    // 0x359440: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x359440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_359444:
    // 0x359444: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x359444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_359448:
    // 0x359448: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x359448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_35944c:
    // 0x35944c: 0x3e00008  jr          $ra
label_359450:
    if (ctx->pc == 0x359450u) {
        ctx->pc = 0x359450u;
            // 0x359450: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x359454u;
        goto label_359454;
    }
    ctx->pc = 0x35944Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359450u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35944Cu;
            // 0x359450: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359454u;
label_359454:
    // 0x359454: 0x0  nop
    ctx->pc = 0x359454u;
    // NOP
label_359458:
    // 0x359458: 0x0  nop
    ctx->pc = 0x359458u;
    // NOP
label_35945c:
    // 0x35945c: 0x0  nop
    ctx->pc = 0x35945cu;
    // NOP
label_359460:
    // 0x359460: 0x0  nop
    ctx->pc = 0x359460u;
    // NOP
label_359464:
    // 0x359464: 0x0  nop
    ctx->pc = 0x359464u;
    // NOP
label_359468:
    // 0x359468: 0x0  nop
    ctx->pc = 0x359468u;
    // NOP
label_35946c:
    // 0x35946c: 0x0  nop
    ctx->pc = 0x35946cu;
    // NOP
label_359470:
    // 0x359470: 0x0  nop
    ctx->pc = 0x359470u;
    // NOP
label_359474:
    // 0x359474: 0x0  nop
    ctx->pc = 0x359474u;
    // NOP
label_359478:
    // 0x359478: 0x0  nop
    ctx->pc = 0x359478u;
    // NOP
label_35947c:
    // 0x35947c: 0x0  nop
    ctx->pc = 0x35947cu;
    // NOP
label_359480:
    // 0x359480: 0x0  nop
    ctx->pc = 0x359480u;
    // NOP
label_359484:
    // 0x359484: 0x0  nop
    ctx->pc = 0x359484u;
    // NOP
label_359488:
    // 0x359488: 0x0  nop
    ctx->pc = 0x359488u;
    // NOP
label_35948c:
    // 0x35948c: 0x0  nop
    ctx->pc = 0x35948cu;
    // NOP
label_359490:
    // 0x359490: 0x0  nop
    ctx->pc = 0x359490u;
    // NOP
label_359494:
    // 0x359494: 0x0  nop
    ctx->pc = 0x359494u;
    // NOP
label_359498:
    // 0x359498: 0x0  nop
    ctx->pc = 0x359498u;
    // NOP
label_35949c:
    // 0x35949c: 0x0  nop
    ctx->pc = 0x35949cu;
    // NOP
label_3594a0:
    // 0x3594a0: 0x0  nop
    ctx->pc = 0x3594a0u;
    // NOP
label_3594a4:
    // 0x3594a4: 0x0  nop
    ctx->pc = 0x3594a4u;
    // NOP
label_3594a8:
    // 0x3594a8: 0x0  nop
    ctx->pc = 0x3594a8u;
    // NOP
label_3594ac:
    // 0x3594ac: 0x0  nop
    ctx->pc = 0x3594acu;
    // NOP
label_3594b0:
    // 0x3594b0: 0x0  nop
    ctx->pc = 0x3594b0u;
    // NOP
label_3594b4:
    // 0x3594b4: 0x0  nop
    ctx->pc = 0x3594b4u;
    // NOP
label_3594b8:
    // 0x3594b8: 0x0  nop
    ctx->pc = 0x3594b8u;
    // NOP
label_3594bc:
    // 0x3594bc: 0x0  nop
    ctx->pc = 0x3594bcu;
    // NOP
label_3594c0:
    // 0x3594c0: 0x0  nop
    ctx->pc = 0x3594c0u;
    // NOP
label_3594c4:
    // 0x3594c4: 0x0  nop
    ctx->pc = 0x3594c4u;
    // NOP
label_3594c8:
    // 0x3594c8: 0x0  nop
    ctx->pc = 0x3594c8u;
    // NOP
label_3594cc:
    // 0x3594cc: 0x0  nop
    ctx->pc = 0x3594ccu;
    // NOP
label_3594d0:
    // 0x3594d0: 0x0  nop
    ctx->pc = 0x3594d0u;
    // NOP
label_3594d4:
    // 0x3594d4: 0x0  nop
    ctx->pc = 0x3594d4u;
    // NOP
label_3594d8:
    // 0x3594d8: 0x40  sll         $zero, $zero, 1
    ctx->pc = 0x3594d8u;
    
label_3594dc:
    // 0x3594dc: 0x0  nop
    ctx->pc = 0x3594dcu;
    // NOP
label_3594e0:
    // 0x3594e0: 0x0  nop
    ctx->pc = 0x3594e0u;
    // NOP
label_3594e4:
    // 0x3594e4: 0x0  nop
    ctx->pc = 0x3594e4u;
    // NOP
label_3594e8:
    // 0x3594e8: 0x0  nop
    ctx->pc = 0x3594e8u;
    // NOP
label_3594ec:
    // 0x3594ec: 0x0  nop
    ctx->pc = 0x3594ecu;
    // NOP
label_3594f0:
    // 0x3594f0: 0x0  nop
    ctx->pc = 0x3594f0u;
    // NOP
label_3594f4:
    // 0x3594f4: 0x0  nop
    ctx->pc = 0x3594f4u;
    // NOP
label_3594f8:
    // 0x3594f8: 0x0  nop
    ctx->pc = 0x3594f8u;
    // NOP
label_3594fc:
    // 0x3594fc: 0x0  nop
    ctx->pc = 0x3594fcu;
    // NOP
label_359500:
    // 0x359500: 0x800125ec  lb          $at, 0x25EC($zero)
    ctx->pc = 0x359500u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 9708)));
label_359504:
    // 0x359504: 0x800125f4  lb          $at, 0x25F4($zero)
    ctx->pc = 0x359504u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 9716)));
label_359508:
    // 0x359508: 0x80004970  lb          $zero, 0x4970($zero)
    ctx->pc = 0x359508u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 18800)));
label_35950c:
    // 0x35950c: 0x80004288  lb          $zero, 0x4288($zero)
    ctx->pc = 0x35950cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 17032)));
label_359510:
    // 0x359510: 0x800021b0  lb          $zero, 0x21B0($zero)
    ctx->pc = 0x359510u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 8624)));
label_359514:
    // 0x359514: 0x80004e68  lb          $zero, 0x4E68($zero)
    ctx->pc = 0x359514u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 20072)));
label_359518:
    // 0x359518: 0x80003f00  lb          $zero, 0x3F00($zero)
    ctx->pc = 0x359518u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 16128)));
label_35951c:
    // 0x35951c: 0x80003e00  lb          $zero, 0x3E00($zero)
    ctx->pc = 0x35951cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 15872)));
label_359520:
    // 0x359520: 0x80017400  lb          $at, 0x7400($zero)
    ctx->pc = 0x359520u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 29696)));
label_359524:
    // 0x359524: 0x8000b8d0  lb          $zero, -0x4730($zero)
    ctx->pc = 0x359524u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 4294949072)));
label_359528:
    // 0x359528: 0x8000b900  lb          $zero, -0x4700($zero)
    ctx->pc = 0x359528u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 4294949120)));
label_35952c:
    // 0x35952c: 0x8000b7a8  lb          $zero, -0x4858($zero)
    ctx->pc = 0x35952cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 4294948776)));
label_359530:
    // 0x359530: 0x8000b840  lb          $zero, -0x47C0($zero)
    ctx->pc = 0x359530u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 4294948928)));
label_359534:
    // 0x359534: 0x8000ad68  lb          $zero, -0x5298($zero)
    ctx->pc = 0x359534u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 4294946152)));
label_359538:
    // 0x359538: 0x8000aa60  lb          $zero, -0x55A0($zero)
    ctx->pc = 0x359538u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 4294945376)));
label_35953c:
    // 0x35953c: 0x8000a060  lb          $zero, -0x5FA0($zero)
    ctx->pc = 0x35953cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 4294942816)));
label_359540:
    // 0x359540: 0x80002a80  lb          $zero, 0x2A80($zero)
    ctx->pc = 0x359540u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 10880)));
label_359544:
    // 0x359544: 0x80002ac0  lb          $zero, 0x2AC0($zero)
    ctx->pc = 0x359544u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 10944)));
label_359548:
    // 0x359548: 0x80005560  lb          $zero, 0x5560($zero)
    ctx->pc = 0x359548u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 21856)));
label_35954c:
    // 0x35954c: 0x80012600  lb          $at, 0x2600($zero)
    ctx->pc = 0x35954cu;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 9728)));
label_359550:
    // 0x359550: 0x80012608  lb          $at, 0x2608($zero)
    ctx->pc = 0x359550u;
    SET_GPR_S32(ctx, 1, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 9736)));
label_359554:
    // 0x359554: 0x0  nop
    ctx->pc = 0x359554u;
    // NOP
label_359558:
    // 0x359558: 0x4a  .word       0x0000004A                   # movz        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359558u;
    if (GPR_U64(ctx, 0) == 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_35955c:
    // 0x35955c: 0x80074138  lb          $a3, 0x4138($zero)
    ctx->pc = 0x35955cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 16696)));
label_359560:
    // 0x359560: 0x4b  .word       0x0000004B                   # movn        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359560u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_359564:
    // 0x359564: 0x80074088  lb          $a3, 0x4088($zero)
    ctx->pc = 0x359564u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 16520)));
label_359568:
    // 0x359568: 0x6e  .word       0x0000006E                   # dsub        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359568u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a - b; if (((a ^ b) < 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_35956c:
    // 0x35956c: 0x80074350  lb          $a3, 0x4350($zero)
    ctx->pc = 0x35956cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 17232)));
label_359570:
    // 0x359570: 0x6f  .word       0x0000006F                   # dsubu       $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359570u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) - GPR_U64(ctx, 0));
label_359574:
    // 0x359574: 0x800742a8  lb          $a3, 0x42A8($zero)
    ctx->pc = 0x359574u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 17064)));
label_359578:
    // 0x359578: 0xffffc402  sd          $ra, -0x3BFE($ra)
    ctx->pc = 0x359578u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294951938), GPR_U64(ctx, 31));
label_35957c:
    // 0x35957c: 0x80074498  lb          $a3, 0x4498($zero)
    ctx->pc = 0x35957cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 17560)));
label_359580:
    // 0x359580: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359580u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_359584:
    // 0x359584: 0x1171d0  .word       0x001171D0                   # mfhi        $t6 # 001101C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359584u;
    SET_GPR_U64(ctx, 14, ctx->hi);
label_359588:
    // 0x359588: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359588u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_35958c:
    // 0x35958c: 0x80074000  lb          $a3, 0x4000($zero)
    ctx->pc = 0x35958cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 16384)));
label_359590:
    // 0x359590: 0xffffc402  sd          $ra, -0x3BFE($ra)
    ctx->pc = 0x359590u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294951938), GPR_U64(ctx, 31));
label_359594:
    // 0x359594: 0x0  nop
    ctx->pc = 0x359594u;
    // NOP
label_359598:
    // 0x359598: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359598u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_35959c:
    // 0x35959c: 0x117340  sll         $t6, $s1, 13
    ctx->pc = 0x35959cu;
    SET_GPR_S32(ctx, 14, (int32_t)SLL32(GPR_U32(ctx, 17), 13));
label_3595a0:
    // 0x3595a0: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x3595a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_3595a4:
    // 0x3595a4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3595a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3595a8:
    // 0x3595a8: 0x24436710  addiu       $v1, $v0, 0x6710
    ctx->pc = 0x3595a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 26384));
label_3595ac:
    // 0x3595ac: 0x0  nop
    ctx->pc = 0x3595acu;
    // NOP
label_3595b0:
    // 0x3595b0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3595b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3595b4:
    // 0x3595b4: 0x14820003  bne         $a0, $v0, . + 4 + (0x3 << 2)
label_3595b8:
    if (ctx->pc == 0x3595B8u) {
        ctx->pc = 0x3595B8u;
            // 0x3595b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->pc = 0x3595BCu;
        goto label_3595bc;
    }
    ctx->pc = 0x3595B4u;
    {
        const bool branch_taken_0x3595b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x3595B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3595B4u;
            // 0x3595b8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595b4) {
            ctx->pc = 0x3595C4u;
            goto label_3595c4;
        }
    }
    ctx->pc = 0x3595BCu;
label_3595bc:
    // 0x3595bc: 0x3e00008  jr          $ra
label_3595c0:
    if (ctx->pc == 0x3595C0u) {
        ctx->pc = 0x3595C0u;
            // 0x3595c0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->pc = 0x3595C4u;
        goto label_3595c4;
    }
    ctx->pc = 0x3595BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3595C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3595BCu;
            // 0x3595c0: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3595C4u;
label_3595c4:
    // 0x3595c4: 0x2ca20006  sltiu       $v0, $a1, 0x6
    ctx->pc = 0x3595c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_3595c8:
    // 0x3595c8: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
label_3595cc:
    if (ctx->pc == 0x3595CCu) {
        ctx->pc = 0x3595CCu;
            // 0x3595cc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->pc = 0x3595D0u;
        goto label_3595d0;
    }
    ctx->pc = 0x3595C8u;
    {
        const bool branch_taken_0x3595c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3595CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3595C8u;
            // 0x3595cc: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595c8) {
            ctx->pc = 0x3595B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3595b0;
        }
    }
    ctx->pc = 0x3595D0u;
label_3595d0:
    // 0x3595d0: 0x3e00008  jr          $ra
label_3595d4:
    if (ctx->pc == 0x3595D4u) {
        ctx->pc = 0x3595D4u;
            // 0x3595d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3595D8u;
        goto label_3595d8;
    }
    ctx->pc = 0x3595D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3595D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3595D0u;
            // 0x3595d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3595D8u;
label_3595d8:
    // 0x3595d8: 0xa4202a  slt         $a0, $a1, $a0
    ctx->pc = 0x3595d8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_3595dc:
    // 0x3595dc: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_3595e0:
    if (ctx->pc == 0x3595E0u) {
        ctx->pc = 0x3595E0u;
            // 0x3595e0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->pc = 0x3595E4u;
        goto label_3595e4;
    }
    ctx->pc = 0x3595DCu;
    {
        const bool branch_taken_0x3595dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3595E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3595DCu;
            // 0x3595e0: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3595dc) {
            ctx->pc = 0x3595ECu;
            goto label_3595ec;
        }
    }
    ctx->pc = 0x3595E4u;
label_3595e4:
    // 0x3595e4: 0x3e00008  jr          $ra
label_3595e8:
    if (ctx->pc == 0x3595E8u) {
        ctx->pc = 0x3595E8u;
            // 0x3595e8: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x3595ECu;
        goto label_3595ec;
    }
    ctx->pc = 0x3595E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3595E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3595E4u;
            // 0x3595e8: 0xa21025  or          $v0, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3595ECu;
label_3595ec:
    // 0x3595ec: 0x3e00008  jr          $ra
label_3595f0:
    if (ctx->pc == 0x3595F0u) {
        ctx->pc = 0x3595F0u;
            // 0x3595f0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3595F4u;
        goto label_3595f4;
    }
    ctx->pc = 0x3595ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3595F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3595ECu;
            // 0x3595f0: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3595F4u;
label_3595f4:
    // 0x3595f4: 0x0  nop
    ctx->pc = 0x3595f4u;
    // NOP
label_3595f8:
    // 0x3595f8: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3595f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_3595fc:
    // 0x3595fc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x3595fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_359600:
    // 0x359600: 0x3c138007  lui         $s3, 0x8007
    ctx->pc = 0x359600u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)32775 << 16));
label_359604:
    // 0x359604: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x359604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_359608:
    // 0x359608: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x359608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_35960c:
    // 0x35960c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x35960cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_359610:
    // 0x359610: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359610u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_359614:
    // 0x359614: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x359614u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_359618:
    // 0x359618: 0x8e626700  lw          $v0, 0x6700($s3)
    ctx->pc = 0x359618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26368)));
label_35961c:
    // 0x35961c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x35961cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359620:
    // 0x359620: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x359620u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_359624:
    // 0x359624: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x359624u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_359628:
    // 0x359628: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x359628u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_35962c:
    // 0x35962c: 0x18400028  blez        $v0, . + 4 + (0x28 << 2)
label_359630:
    if (ctx->pc == 0x359630u) {
        ctx->pc = 0x359630u;
            // 0x359630: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->pc = 0x359634u;
        goto label_359634;
    }
    ctx->pc = 0x35962Cu;
    {
        const bool branch_taken_0x35962c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x359630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35962Cu;
            // 0x359630: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35962c) {
            ctx->pc = 0x3596D0u;
            goto label_3596d0;
        }
    }
    ctx->pc = 0x359634u;
label_359634:
    // 0x359634: 0x3c148007  lui         $s4, 0x8007
    ctx->pc = 0x359634u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)32775 << 16));
label_359638:
    // 0x359638: 0x24120014  addiu       $s2, $zero, 0x14
    ctx->pc = 0x359638u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_35963c:
    // 0x35963c: 0x0  nop
    ctx->pc = 0x35963cu;
    // NOP
label_359640:
    // 0x359640: 0x26916740  addiu       $s1, $s4, 0x6740
    ctx->pc = 0x359640u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 26432));
label_359644:
    // 0x359644: 0x2121018  mult        $v0, $s0, $s2
    ctx->pc = 0x359644u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_359648:
    // 0x359648: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x359648u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_35964c:
    // 0x35964c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x35964cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_359650:
    // 0x359650: 0xc01d80e  jal         func_076038
label_359654:
    if (ctx->pc == 0x359654u) {
        ctx->pc = 0x359654u;
            // 0x359654: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x359658u;
        goto label_359658;
    }
    ctx->pc = 0x359650u;
    SET_GPR_U32(ctx, 31, 0x359658u);
    ctx->pc = 0x359654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359650u;
            // 0x359654: 0x94450000  lhu         $a1, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    {
        auto targetFn = runtime->lookupFunction(0x76038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359658u; }
        if (ctx->pc != 0x359658u) { return; }
    }
    ctx->pc = 0x359658u;
label_359658:
    // 0x359658: 0x2a2102a  slt         $v0, $s5, $v0
    ctx->pc = 0x359658u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_35965c:
    // 0x35965c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
label_359660:
    if (ctx->pc == 0x359660u) {
        ctx->pc = 0x359660u;
            // 0x359660: 0x8e626700  lw          $v0, 0x6700($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26368)));
        ctx->pc = 0x359664u;
        goto label_359664;
    }
    ctx->pc = 0x35965Cu;
    {
        const bool branch_taken_0x35965c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359660u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35965Cu;
            // 0x359660: 0x8e626700  lw          $v0, 0x6700($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35965c) {
            ctx->pc = 0x3596C0u;
            goto label_3596c0;
        }
    }
    ctx->pc = 0x359664u;
label_359664:
    // 0x359664: 0x2444ffff  addiu       $a0, $v0, -0x1
    ctx->pc = 0x359664u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_359668:
    // 0x359668: 0x90182a  slt         $v1, $a0, $s0
    ctx->pc = 0x359668u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_35966c:
    // 0x35966c: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
label_359670:
    if (ctx->pc == 0x359670u) {
        ctx->pc = 0x359670u;
            // 0x359670: 0x921018  mult        $v0, $a0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->pc = 0x359674u;
        goto label_359674;
    }
    ctx->pc = 0x35966Cu;
    {
        const bool branch_taken_0x35966c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x359670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35966Cu;
            // 0x359670: 0x921018  mult        $v0, $a0, $s2 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35966c) {
            ctx->pc = 0x3596D0u;
            goto label_3596d0;
        }
    }
    ctx->pc = 0x359674u;
label_359674:
    // 0x359674: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x359674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_359678:
    // 0x359678: 0x68650007  ldl         $a1, 0x7($v1)
    ctx->pc = 0x359678u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_35967c:
    // 0x35967c: 0x6c650000  ldr         $a1, 0x0($v1)
    ctx->pc = 0x35967cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_359680:
    // 0x359680: 0x6866000f  ldl         $a2, 0xF($v1)
    ctx->pc = 0x359680u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_359684:
    // 0x359684: 0x6c660008  ldr         $a2, 0x8($v1)
    ctx->pc = 0x359684u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_359688:
    // 0x359688: 0x8c670010  lw          $a3, 0x10($v1)
    ctx->pc = 0x359688u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_35968c:
    // 0x35968c: 0xb065001b  sdl         $a1, 0x1B($v1)
    ctx->pc = 0x35968cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_359690:
    // 0x359690: 0xb4650014  sdr         $a1, 0x14($v1)
    ctx->pc = 0x359690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_359694:
    // 0x359694: 0xb0660023  sdl         $a2, 0x23($v1)
    ctx->pc = 0x359694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 35); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_359698:
    // 0x359698: 0xb466001c  sdr         $a2, 0x1C($v1)
    ctx->pc = 0x359698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 28); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_35969c:
    // 0x35969c: 0xac670024  sw          $a3, 0x24($v1)
    ctx->pc = 0x35969cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 7));
label_3596a0:
    // 0x3596a0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x3596a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_3596a4:
    // 0x3596a4: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x3596a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
label_3596a8:
    // 0x3596a8: 0x90102a  slt         $v0, $a0, $s0
    ctx->pc = 0x3596a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
label_3596ac:
    // 0x3596ac: 0x0  nop
    ctx->pc = 0x3596acu;
    // NOP
label_3596b0:
    // 0x3596b0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
label_3596b4:
    if (ctx->pc == 0x3596B4u) {
        ctx->pc = 0x3596B8u;
        goto label_3596b8;
    }
    ctx->pc = 0x3596B0u;
    {
        const bool branch_taken_0x3596b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3596b0) {
            ctx->pc = 0x359678u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359678;
        }
    }
    ctx->pc = 0x3596B8u;
label_3596b8:
    // 0x3596b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_3596bc:
    if (ctx->pc == 0x3596BCu) {
        ctx->pc = 0x3596BCu;
            // 0x3596bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3596C0u;
        goto label_3596c0;
    }
    ctx->pc = 0x3596B8u;
    {
        const bool branch_taken_0x3596b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3596BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3596B8u;
            // 0x3596bc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596b8) {
            ctx->pc = 0x3596D4u;
            goto label_3596d4;
        }
    }
    ctx->pc = 0x3596C0u;
label_3596c0:
    // 0x3596c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3596c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3596c4:
    // 0x3596c4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x3596c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3596c8:
    // 0x3596c8: 0x1440ffdd  bnez        $v0, . + 4 + (-0x23 << 2)
label_3596cc:
    if (ctx->pc == 0x3596CCu) {
        ctx->pc = 0x3596CCu;
            // 0x3596cc: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3596D0u;
        goto label_3596d0;
    }
    ctx->pc = 0x3596C8u;
    {
        const bool branch_taken_0x3596c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3596CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3596C8u;
            // 0x3596cc: 0x24120014  addiu       $s2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3596c8) {
            ctx->pc = 0x359640u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359640;
        }
    }
    ctx->pc = 0x3596D0u;
label_3596d0:
    // 0x3596d0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3596d0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3596d4:
    // 0x3596d4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3596d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3596d8:
    // 0x3596d8: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x3596d8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_3596dc:
    // 0x3596dc: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x3596dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3596e0:
    // 0x3596e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x3596e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3596e4:
    // 0x3596e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x3596e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3596e8:
    // 0x3596e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x3596e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3596ec:
    // 0x3596ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3596ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3596f0:
    // 0x3596f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3596f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3596f4:
    // 0x3596f4: 0x3e00008  jr          $ra
label_3596f8:
    if (ctx->pc == 0x3596F8u) {
        ctx->pc = 0x3596F8u;
            // 0x3596f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x3596FCu;
        goto label_3596fc;
    }
    ctx->pc = 0x3596F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3596F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3596F4u;
            // 0x3596f8: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3596FCu;
label_3596fc:
    // 0x3596fc: 0x0  nop
    ctx->pc = 0x3596fcu;
    // NOP
label_359700:
    // 0x359700: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x359700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_359704:
    // 0x359704: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x359704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_359708:
    // 0x359708: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x359708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_35970c:
    // 0x35970c: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x35970cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
label_359710:
    // 0x359710: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x359710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_359714:
    // 0x359714: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x359714u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_359718:
    // 0x359718: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x359718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_35971c:
    // 0x35971c: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x35971cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_359720:
    // 0x359720: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x359720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_359724:
    // 0x359724: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x359724u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
label_359728:
    // 0x359728: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x359728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
label_35972c:
    // 0x35972c: 0x3093ffff  andi        $s3, $a0, 0xFFFF
    ctx->pc = 0x35972cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_359730:
    // 0x359730: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x359730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_359734:
    // 0x359734: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x359734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_359738:
    // 0x359738: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x359738u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_35973c:
    // 0x35973c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x35973cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_359740:
    // 0x359740: 0x8ea36700  lw          $v1, 0x6700($s5)
    ctx->pc = 0x359740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
label_359744:
    // 0x359744: 0x8c540000  lw          $s4, 0x0($v0)
    ctx->pc = 0x359744u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_359748:
    // 0x359748: 0x28630040  slti        $v1, $v1, 0x40
    ctx->pc = 0x359748u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_35974c:
    // 0x35974c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_359750:
    if (ctx->pc == 0x359750u) {
        ctx->pc = 0x359750u;
            // 0x359750: 0x2749821  addu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->pc = 0x359754u;
        goto label_359754;
    }
    ctx->pc = 0x35974Cu;
    {
        const bool branch_taken_0x35974c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x359750u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35974Cu;
            // 0x359750: 0x2749821  addu        $s3, $s3, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35974c) {
            ctx->pc = 0x359770u;
            goto label_359770;
        }
    }
    ctx->pc = 0x359754u;
label_359754:
    // 0x359754: 0x1000002e  b           . + 4 + (0x2E << 2)
label_359758:
    if (ctx->pc == 0x359758u) {
        ctx->pc = 0x359758u;
            // 0x359758: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x35975Cu;
        goto label_35975c;
    }
    ctx->pc = 0x359754u;
    {
        const bool branch_taken_0x359754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359754u;
            // 0x359758: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359754) {
            ctx->pc = 0x359810u;
            goto label_359810;
        }
    }
    ctx->pc = 0x35975Cu;
label_35975c:
    // 0x35975c: 0x60902d  daddu       $s2, $v1, $zero
    ctx->pc = 0x35975cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_359760:
    // 0x359760: 0x621014  dsllv       $v0, $v0, $v1
    ctx->pc = 0x359760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 3) & 0x3F));
label_359764:
    // 0x359764: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x359764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_359768:
    // 0x359768: 0x1000000d  b           . + 4 + (0xD << 2)
label_35976c:
    if (ctx->pc == 0x35976Cu) {
        ctx->pc = 0x35976Cu;
            // 0x35976c: 0xfca26708  sd          $v0, 0x6708($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 26376), GPR_U64(ctx, 2));
        ctx->pc = 0x359770u;
        goto label_359770;
    }
    ctx->pc = 0x359768u;
    {
        const bool branch_taken_0x359768 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x35976Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359768u;
            // 0x35976c: 0xfca26708  sd          $v0, 0x6708($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 26376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359768) {
            ctx->pc = 0x3597A0u;
            goto label_3597a0;
        }
    }
    ctx->pc = 0x359770u;
label_359770:
    // 0x359770: 0x3c058007  lui         $a1, 0x8007
    ctx->pc = 0x359770u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32775 << 16));
label_359774:
    // 0x359774: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x359774u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359778:
    // 0x359778: 0xdca46708  ld          $a0, 0x6708($a1)
    ctx->pc = 0x359778u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 26376)));
label_35977c:
    // 0x35977c: 0x641016  dsrlv       $v0, $a0, $v1
    ctx->pc = 0x35977cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
label_359780:
    // 0x359780: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x359780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_359784:
    // 0x359784: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
label_359788:
    if (ctx->pc == 0x359788u) {
        ctx->pc = 0x359788u;
            // 0x359788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35978Cu;
        goto label_35978c;
    }
    ctx->pc = 0x359784u;
    {
        const bool branch_taken_0x359784 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359788u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359784u;
            // 0x359788: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359784) {
            ctx->pc = 0x35975Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_35975c;
        }
    }
    ctx->pc = 0x35978Cu;
label_35978c:
    // 0x35978c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x35978cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_359790:
    // 0x359790: 0x28620040  slti        $v0, $v1, 0x40
    ctx->pc = 0x359790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)64) ? 1 : 0);
label_359794:
    // 0x359794: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_359798:
    if (ctx->pc == 0x359798u) {
        ctx->pc = 0x359798u;
            // 0x359798: 0x641016  dsrlv       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->pc = 0x35979Cu;
        goto label_35979c;
    }
    ctx->pc = 0x359794u;
    {
        const bool branch_taken_0x359794 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359794u;
            // 0x359798: 0x641016  dsrlv       $v0, $a0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) >> (GPR_U32(ctx, 3) & 0x3F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359794) {
            ctx->pc = 0x359780u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359780;
        }
    }
    ctx->pc = 0x35979Cu;
label_35979c:
    // 0x35979c: 0x2412ffff  addiu       $s2, $zero, -0x1
    ctx->pc = 0x35979cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_3597a0:
    // 0x3597a0: 0x640001b  bltz        $s2, . + 4 + (0x1B << 2)
label_3597a4:
    if (ctx->pc == 0x3597A4u) {
        ctx->pc = 0x3597A4u;
            // 0x3597a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3597A8u;
        goto label_3597a8;
    }
    ctx->pc = 0x3597A0u;
    {
        const bool branch_taken_0x3597a0 = (GPR_S32(ctx, 18) < 0);
        ctx->pc = 0x3597A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3597A0u;
            // 0x3597a4: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3597a0) {
            ctx->pc = 0x359810u;
            goto label_359810;
        }
    }
    ctx->pc = 0x3597A8u;
label_3597a8:
    // 0x3597a8: 0x380882d  daddu       $s1, $gp, $zero
    ctx->pc = 0x3597a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_3597ac:
    // 0x3597ac: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3597acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3597b0:
    // 0x3597b0: 0xc01d816  jal         func_076058
label_3597b4:
    if (ctx->pc == 0x3597B4u) {
        ctx->pc = 0x3597B4u;
            // 0x3597b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3597B8u;
        goto label_3597b8;
    }
    ctx->pc = 0x3597B0u;
    SET_GPR_U32(ctx, 31, 0x3597B8u);
    ctx->pc = 0x3597B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3597B0u;
            // 0x3597b4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x76058u;
    {
        auto targetFn = runtime->lookupFunction(0x76058u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3597B8u; }
        if (ctx->pc != 0x3597B8u) { return; }
    }
    ctx->pc = 0x3597B8u;
label_3597b8:
    // 0x3597b8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x3597b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3597bc:
    // 0x3597bc: 0x3c088007  lui         $t0, 0x8007
    ctx->pc = 0x3597bcu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)32775 << 16));
label_3597c0:
    // 0x3597c0: 0x441018  mult        $v0, $v0, $a0
    ctx->pc = 0x3597c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3597c4:
    // 0x3597c4: 0x25036740  addiu       $v1, $t0, 0x6740
    ctx->pc = 0x3597c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 26432));
label_3597c8:
    // 0x3597c8: 0x8ea56700  lw          $a1, 0x6700($s5)
    ctx->pc = 0x3597c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 26368)));
label_3597cc:
    // 0x3597cc: 0x24700004  addiu       $s0, $v1, 0x4
    ctx->pc = 0x3597ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_3597d0:
    // 0x3597d0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x3597d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_3597d4:
    // 0x3597d4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3597d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3597d8:
    // 0x3597d8: 0x623821  addu        $a3, $v1, $v0
    ctx->pc = 0x3597d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_3597dc:
    // 0x3597dc: 0x508021  addu        $s0, $v0, $s0
    ctx->pc = 0x3597dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_3597e0:
    // 0x3597e0: 0xa4940002  sh          $s4, 0x2($a0)
    ctx->pc = 0x3597e0u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 2), (uint16_t)GPR_U32(ctx, 20));
label_3597e4:
    // 0x3597e4: 0xa4930000  sh          $s3, 0x0($a0)
    ctx->pc = 0x3597e4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 19));
label_3597e8:
    // 0x3597e8: 0xe0302d  daddu       $a2, $a3, $zero
    ctx->pc = 0x3597e8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_3597ec:
    // 0x3597ec: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x3597ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_3597f0:
    // 0x3597f0: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x3597f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3597f4:
    // 0x3597f4: 0xacf10010  sw          $s1, 0x10($a3)
    ctx->pc = 0x3597f4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 17));
label_3597f8:
    // 0x3597f8: 0x95046740  lhu         $a0, 0x6740($t0)
    ctx->pc = 0x3597f8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 26432)));
label_3597fc:
    // 0x3597fc: 0xacd60008  sw          $s6, 0x8($a2)
    ctx->pc = 0x3597fcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 22));
label_359800:
    // 0x359800: 0xac77000c  sw          $s7, 0xC($v1)
    ctx->pc = 0x359800u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 23));
label_359804:
    // 0x359804: 0xc01d918  jal         func_076460
label_359808:
    if (ctx->pc == 0x359808u) {
        ctx->pc = 0x359808u;
            // 0x359808: 0xaea56700  sw          $a1, 0x6700($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 26368), GPR_U32(ctx, 5));
        ctx->pc = 0x35980Cu;
        goto label_35980c;
    }
    ctx->pc = 0x359804u;
    SET_GPR_U32(ctx, 31, 0x35980Cu);
    ctx->pc = 0x359808u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359804u;
            // 0x359808: 0xaea56700  sw          $a1, 0x6700($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 26368), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    {
        auto targetFn = runtime->lookupFunction(0x76460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x35980Cu; }
        if (ctx->pc != 0x35980Cu) { return; }
    }
    ctx->pc = 0x35980Cu;
label_35980c:
    // 0x35980c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x35980cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_359810:
    // 0x359810: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x359810u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_359814:
    // 0x359814: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x359814u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_359818:
    // 0x359818: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x359818u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_35981c:
    // 0x35981c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x35981cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_359820:
    // 0x359820: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x359820u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_359824:
    // 0x359824: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x359824u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_359828:
    // 0x359828: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x359828u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_35982c:
    // 0x35982c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x35982cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_359830:
    // 0x359830: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x359830u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_359834:
    // 0x359834: 0x3e00008  jr          $ra
label_359838:
    if (ctx->pc == 0x359838u) {
        ctx->pc = 0x359838u;
            // 0x359838: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->pc = 0x35983Cu;
        goto label_35983c;
    }
    ctx->pc = 0x359834u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359834u;
            // 0x359838: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35983Cu;
label_35983c:
    // 0x35983c: 0x0  nop
    ctx->pc = 0x35983cu;
    // NOP
label_359840:
    // 0x359840: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x359840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_359844:
    // 0x359844: 0x3c0c8007  lui         $t4, 0x8007
    ctx->pc = 0x359844u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)32775 << 16));
label_359848:
    // 0x359848: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x359848u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_35984c:
    // 0x35984c: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x35984cu;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_359850:
    // 0x359850: 0x8d826700  lw          $v0, 0x6700($t4)
    ctx->pc = 0x359850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
label_359854:
    // 0x359854: 0x180882d  daddu       $s1, $t4, $zero
    ctx->pc = 0x359854u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 12) + (uint64_t)GPR_U64(ctx, 0));
label_359858:
    // 0x359858: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x359858u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_35985c:
    // 0x35985c: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x35985cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_359860:
    // 0x359860: 0x18400058  blez        $v0, . + 4 + (0x58 << 2)
label_359864:
    if (ctx->pc == 0x359864u) {
        ctx->pc = 0x359864u;
            // 0x359864: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x359868u;
        goto label_359868;
    }
    ctx->pc = 0x359860u;
    {
        const bool branch_taken_0x359860 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x359864u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359860u;
            // 0x359864: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359860) {
            ctx->pc = 0x3599C4u;
            goto label_3599c4;
        }
    }
    ctx->pc = 0x359868u;
label_359868:
    // 0x359868: 0x18400056  blez        $v0, . + 4 + (0x56 << 2)
label_35986c:
    if (ctx->pc == 0x35986Cu) {
        ctx->pc = 0x35986Cu;
            // 0x35986c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359870u;
        goto label_359870;
    }
    ctx->pc = 0x359868u;
    {
        const bool branch_taken_0x359868 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x35986Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359868u;
            // 0x35986c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359868) {
            ctx->pc = 0x3599C4u;
            goto label_3599c4;
        }
    }
    ctx->pc = 0x359870u;
label_359870:
    // 0x359870: 0x3c0b8007  lui         $t3, 0x8007
    ctx->pc = 0x359870u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)32775 << 16));
label_359874:
    // 0x359874: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x359874u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_359878:
    // 0x359878: 0x25656740  addiu       $a1, $t3, 0x6740
    ctx->pc = 0x359878u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
label_35987c:
    // 0x35987c: 0x1032018  mult        $a0, $t0, $v1
    ctx->pc = 0x35987cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_359880:
    // 0x359880: 0xa41021  addu        $v0, $a1, $a0
    ctx->pc = 0x359880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_359884:
    // 0x359884: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x359884u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_359888:
    // 0x359888: 0x15a3004a  bne         $t5, $v1, . + 4 + (0x4A << 2)
label_35988c:
    if (ctx->pc == 0x35988Cu) {
        ctx->pc = 0x35988Cu;
            // 0x35988c: 0x8d826700  lw          $v0, 0x6700($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
        ctx->pc = 0x359890u;
        goto label_359890;
    }
    ctx->pc = 0x359888u;
    {
        const bool branch_taken_0x359888 = (GPR_U64(ctx, 13) != GPR_U64(ctx, 3));
        ctx->pc = 0x35988Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359888u;
            // 0x35988c: 0x8d826700  lw          $v0, 0x6700($t4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359888) {
            ctx->pc = 0x3599B4u;
            goto label_3599b4;
        }
    }
    ctx->pc = 0x359890u;
label_359890:
    // 0x359890: 0x3c03b000  lui         $v1, 0xB000
    ctx->pc = 0x359890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45056 << 16));
label_359894:
    // 0x359894: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x359894u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_359898:
    // 0x359898: 0x34631820  ori         $v1, $v1, 0x1820
    ctx->pc = 0x359898u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6176);
label_35989c:
    // 0x35989c: 0x94850000  lhu         $a1, 0x0($a0)
    ctx->pc = 0x35989cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_3598a0:
    // 0x3598a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3598a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_3598a4:
    // 0x3598a4: 0x14a20008  bne         $a1, $v0, . + 4 + (0x8 << 2)
label_3598a8:
    if (ctx->pc == 0x3598A8u) {
        ctx->pc = 0x3598A8u;
            // 0x3598a8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3598ACu;
        goto label_3598ac;
    }
    ctx->pc = 0x3598A4u;
    {
        const bool branch_taken_0x3598a4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x3598A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3598A4u;
            // 0x3598a8: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3598a4) {
            ctx->pc = 0x3598C8u;
            goto label_3598c8;
        }
    }
    ctx->pc = 0x3598ACu;
label_3598ac:
    // 0x3598ac: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3598acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_3598b0:
    // 0x3598b0: 0x3442f000  ori         $v0, $v0, 0xF000
    ctx->pc = 0x3598b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61440);
label_3598b4:
    // 0x3598b4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x3598b4u;
    SET_GPR_S32(ctx, 3, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
label_3598b8:
    // 0x3598b8: 0x30631000  andi        $v1, $v1, 0x1000
    ctx->pc = 0x3598b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4096);
label_3598bc:
    // 0x3598bc: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
label_3598c0:
    if (ctx->pc == 0x3598C0u) {
        ctx->pc = 0x3598C0u;
            // 0x3598c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x3598C4u;
        goto label_3598c4;
    }
    ctx->pc = 0x3598BCu;
    {
        const bool branch_taken_0x3598bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3598C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3598BCu;
            // 0x3598c0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3598bc) {
            ctx->pc = 0x3599CCu;
            goto label_3599cc;
        }
    }
    ctx->pc = 0x3598C4u;
label_3598c4:
    // 0x3598c4: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x3598c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3598c8:
    // 0x3598c8: 0x8d896700  lw          $t1, 0x6700($t4)
    ctx->pc = 0x3598c8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
label_3598cc:
    // 0x3598cc: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x3598ccu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_3598d0:
    // 0x3598d0: 0x25646740  addiu       $a0, $t3, 0x6740
    ctx->pc = 0x3598d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
label_3598d4:
    // 0x3598d4: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x3598d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_3598d8:
    // 0x3598d8: 0x100382d  daddu       $a3, $t0, $zero
    ctx->pc = 0x3598d8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_3598dc:
    // 0x3598dc: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x3598dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3598e0:
    // 0x3598e0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3598e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_3598e4:
    // 0x3598e4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_3598e8:
    if (ctx->pc == 0x3598E8u) {
        ctx->pc = 0x3598E8u;
            // 0x3598e8: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->pc = 0x3598ECu;
        goto label_3598ec;
    }
    ctx->pc = 0x3598E4u;
    {
        const bool branch_taken_0x3598e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3598E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3598E4u;
            // 0x3598e8: 0x94700002  lhu         $s0, 0x2($v1) (Delay Slot)
        SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3598e4) {
            ctx->pc = 0x35994Cu;
            goto label_35994c;
        }
    }
    ctx->pc = 0x3598ECu;
label_3598ec:
    // 0x3598ec: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x3598ecu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
label_3598f0:
    // 0x3598f0: 0x24e30001  addiu       $v1, $a3, 0x1
    ctx->pc = 0x3598f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_3598f4:
    // 0x3598f4: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x3598f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_3598f8:
    // 0x3598f8: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x3598f8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_3598fc:
    // 0x3598fc: 0xe52018  mult        $a0, $a3, $a1
    ctx->pc = 0x3598fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 7) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_359900:
    // 0x359900: 0x25666740  addiu       $a2, $t3, 0x6740
    ctx->pc = 0x359900u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 11), 26432));
label_359904:
    // 0x359904: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x359904u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_359908:
    // 0x359908: 0x462821  addu        $a1, $v0, $a2
    ctx->pc = 0x359908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_35990c:
    // 0x35990c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x35990cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_359910:
    // 0x359910: 0x2522ffff  addiu       $v0, $t1, -0x1
    ctx->pc = 0x359910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_359914:
    // 0x359914: 0x68a30007  ldl         $v1, 0x7($a1)
    ctx->pc = 0x359914u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_359918:
    // 0x359918: 0x6ca30000  ldr         $v1, 0x0($a1)
    ctx->pc = 0x359918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_35991c:
    // 0x35991c: 0x68a6000f  ldl         $a2, 0xF($a1)
    ctx->pc = 0x35991cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_359920:
    // 0x359920: 0x6ca60008  ldr         $a2, 0x8($a1)
    ctx->pc = 0x359920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_359924:
    // 0x359924: 0x8cae0010  lw          $t6, 0x10($a1)
    ctx->pc = 0x359924u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_359928:
    // 0x359928: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x359928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_35992c:
    // 0x35992c: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x35992cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_359930:
    // 0x359930: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x359930u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_359934:
    // 0x359934: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x359934u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_359938:
    // 0x359938: 0xe2102a  slt         $v0, $a3, $v0
    ctx->pc = 0x359938u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_35993c:
    // 0x35993c: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_359940:
    if (ctx->pc == 0x359940u) {
        ctx->pc = 0x359940u;
            // 0x359940: 0xac8e0010  sw          $t6, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
        ctx->pc = 0x359944u;
        goto label_359944;
    }
    ctx->pc = 0x35993Cu;
    {
        const bool branch_taken_0x35993c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35993Cu;
            // 0x359940: 0xac8e0010  sw          $t6, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x35993c) {
            ctx->pc = 0x3598F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3598f0;
        }
    }
    ctx->pc = 0x359944u;
label_359944:
    // 0x359944: 0x10000003  b           . + 4 + (0x3 << 2)
label_359948:
    if (ctx->pc == 0x359948u) {
        ctx->pc = 0x359948u;
            // 0x359948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x35994Cu;
        goto label_35994c;
    }
    ctx->pc = 0x359944u;
    {
        const bool branch_taken_0x359944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359944u;
            // 0x359948: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359944) {
            ctx->pc = 0x359954u;
            goto label_359954;
        }
    }
    ctx->pc = 0x35994Cu;
label_35994c:
    // 0x35994c: 0x3c0a8007  lui         $t2, 0x8007
    ctx->pc = 0x35994cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)32775 << 16));
label_359950:
    // 0x359950: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x359950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_359954:
    // 0x359954: 0x8d846700  lw          $a0, 0x6700($t4)
    ctx->pc = 0x359954u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 26368)));
label_359958:
    // 0x359958: 0xdd436708  ld          $v1, 0x6708($t2)
    ctx->pc = 0x359958u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 10), 26376)));
label_35995c:
    // 0x35995c: 0x1a21014  dsllv       $v0, $v0, $t5
    ctx->pc = 0x35995cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (GPR_U32(ctx, 13) & 0x3F));
label_359960:
    // 0x359960: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x359960u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_359964:
    // 0x359964: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x359964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_359968:
    // 0x359968: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x359968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_35996c:
    // 0x35996c: 0xad846700  sw          $a0, 0x6700($t4)
    ctx->pc = 0x35996cu;
    WRITE32(ADD32(GPR_U32(ctx, 12), 26368), GPR_U32(ctx, 4));
label_359970:
    // 0x359970: 0x15000003  bnez        $t0, . + 4 + (0x3 << 2)
label_359974:
    if (ctx->pc == 0x359974u) {
        ctx->pc = 0x359974u;
            // 0x359974: 0xfd436708  sd          $v1, 0x6708($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 26376), GPR_U64(ctx, 3));
        ctx->pc = 0x359978u;
        goto label_359978;
    }
    ctx->pc = 0x359970u;
    {
        const bool branch_taken_0x359970 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x359974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359970u;
            // 0x359974: 0xfd436708  sd          $v1, 0x6708($t2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 10), 26376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359970) {
            ctx->pc = 0x359980u;
            goto label_359980;
        }
    }
    ctx->pc = 0x359978u;
label_359978:
    // 0x359978: 0xc01d918  jal         func_076460
label_35997c:
    if (ctx->pc == 0x35997Cu) {
        ctx->pc = 0x35997Cu;
            // 0x35997c: 0x95646740  lhu         $a0, 0x6740($t3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26432)));
        ctx->pc = 0x359980u;
        goto label_359980;
    }
    ctx->pc = 0x359978u;
    SET_GPR_U32(ctx, 31, 0x359980u);
    ctx->pc = 0x35997Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359978u;
            // 0x35997c: 0x95646740  lhu         $a0, 0x6740($t3) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 26432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    {
        auto targetFn = runtime->lookupFunction(0x76460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359980u; }
        if (ctx->pc != 0x359980u) { return; }
    }
    ctx->pc = 0x359980u;
label_359980:
    // 0x359980: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x359980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_359984:
    // 0x359984: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_359988:
    if (ctx->pc == 0x359988u) {
        ctx->pc = 0x359988u;
            // 0x359988: 0x24030083  addiu       $v1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->pc = 0x35998Cu;
        goto label_35998c;
    }
    ctx->pc = 0x359984u;
    {
        const bool branch_taken_0x359984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x359988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359984u;
            // 0x359988: 0x24030083  addiu       $v1, $zero, 0x83 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 131));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359984) {
            ctx->pc = 0x359998u;
            goto label_359998;
        }
    }
    ctx->pc = 0x35998Cu;
label_35998c:
    // 0x35998c: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x35998cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_359990:
    // 0x359990: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x359990u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
label_359994:
    // 0x359994: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x359994u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_359998:
    // 0x359998: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x359998u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_35999c:
    // 0x35999c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x35999cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3599a0:
    // 0x3599a0: 0x34421800  ori         $v0, $v0, 0x1800
    ctx->pc = 0x3599a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6144);
label_3599a4:
    // 0x3599a4: 0xc01d80e  jal         func_076038
label_3599a8:
    if (ctx->pc == 0x3599A8u) {
        ctx->pc = 0x3599A8u;
            // 0x3599a8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x3599ACu;
        goto label_3599ac;
    }
    ctx->pc = 0x3599A4u;
    SET_GPR_U32(ctx, 31, 0x3599ACu);
    ctx->pc = 0x3599A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3599A4u;
            // 0x3599a8: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x76038u;
    {
        auto targetFn = runtime->lookupFunction(0x76038u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3599ACu; }
        if (ctx->pc != 0x3599ACu) { return; }
    }
    ctx->pc = 0x3599ACu;
label_3599ac:
    // 0x3599ac: 0x10000005  b           . + 4 + (0x5 << 2)
label_3599b0:
    if (ctx->pc == 0x3599B0u) {
        ctx->pc = 0x3599B0u;
            // 0x3599b0: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->pc = 0x3599B4u;
        goto label_3599b4;
    }
    ctx->pc = 0x3599ACu;
    {
        const bool branch_taken_0x3599ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3599B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3599ACu;
            // 0x3599b0: 0x503023  subu        $a2, $v0, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3599ac) {
            ctx->pc = 0x3599C4u;
            goto label_3599c4;
        }
    }
    ctx->pc = 0x3599B4u;
label_3599b4:
    // 0x3599b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3599b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_3599b8:
    // 0x3599b8: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x3599b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3599bc:
    // 0x3599bc: 0x1440ffae  bnez        $v0, . + 4 + (-0x52 << 2)
label_3599c0:
    if (ctx->pc == 0x3599C0u) {
        ctx->pc = 0x3599C0u;
            // 0x3599c0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x3599C4u;
        goto label_3599c4;
    }
    ctx->pc = 0x3599BCu;
    {
        const bool branch_taken_0x3599bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3599C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3599BCu;
            // 0x3599c0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3599bc) {
            ctx->pc = 0x359878u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359878;
        }
    }
    ctx->pc = 0x3599C4u;
label_3599c4:
    // 0x3599c4: 0xf  sync
    ctx->pc = 0x3599c4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3599c8:
    // 0x3599c8: 0xc0102d  daddu       $v0, $a2, $zero
    ctx->pc = 0x3599c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_3599cc:
    // 0x3599cc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3599ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3599d0:
    // 0x3599d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x3599d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_3599d4:
    // 0x3599d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x3599d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3599d8:
    // 0x3599d8: 0x3e00008  jr          $ra
label_3599dc:
    if (ctx->pc == 0x3599DCu) {
        ctx->pc = 0x3599DCu;
            // 0x3599dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3599E0u;
        goto label_3599e0;
    }
    ctx->pc = 0x3599D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3599DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3599D8u;
            // 0x3599dc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3599E0u;
label_3599e0:
    // 0x3599e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x3599e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_3599e4:
    // 0x3599e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3599e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3599e8:
    // 0x3599e8: 0xc01d858  jal         func_076160
label_3599ec:
    if (ctx->pc == 0x3599ECu) {
        ctx->pc = 0x3599ECu;
            // 0x3599ec: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x3599F0u;
        goto label_3599f0;
    }
    ctx->pc = 0x3599E8u;
    SET_GPR_U32(ctx, 31, 0x3599F0u);
    ctx->pc = 0x3599ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3599E8u;
            // 0x3599ec: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
    ctx->pc = 0x76160u;
    {
        auto targetFn = runtime->lookupFunction(0x76160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3599F0u; }
        if (ctx->pc != 0x3599F0u) { return; }
    }
    ctx->pc = 0x3599F0u;
label_3599f0:
    // 0x3599f0: 0xf  sync
    ctx->pc = 0x3599f0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_3599f4:
    // 0x3599f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3599f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3599f8:
    // 0x3599f8: 0x3e00008  jr          $ra
label_3599fc:
    if (ctx->pc == 0x3599FCu) {
        ctx->pc = 0x3599FCu;
            // 0x3599fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x359A00u;
        goto label_359a00;
    }
    ctx->pc = 0x3599F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3599FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3599F8u;
            // 0x3599fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359A00u;
label_359a00:
    // 0x359a00: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x359a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_359a04:
    // 0x359a04: 0x34421820  ori         $v0, $v0, 0x1820
    ctx->pc = 0x359a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6176);
label_359a08:
    // 0x359a08: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x359a08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
label_359a0c:
    // 0x359a0c: 0xf  sync
    ctx->pc = 0x359a0cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359a10:
    // 0x359a10: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x359a10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_359a14:
    // 0x359a14: 0x24030583  addiu       $v1, $zero, 0x583
    ctx->pc = 0x359a14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1411));
label_359a18:
    // 0x359a18: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x359a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
label_359a1c:
    // 0x359a1c: 0x3e00008  jr          $ra
label_359a20:
    if (ctx->pc == 0x359A20u) {
        ctx->pc = 0x359A20u;
            // 0x359a20: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x359A24u;
        goto label_359a24;
    }
    ctx->pc = 0x359A1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359A1Cu;
            // 0x359a20: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359A24u;
label_359a24:
    // 0x359a24: 0x0  nop
    ctx->pc = 0x359a24u;
    // NOP
label_359a28:
    // 0x359a28: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x359a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_359a2c:
    // 0x359a2c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x359a2cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359a30:
    // 0x359a30: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x359a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_359a34:
    // 0x359a34: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x359a34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_359a38:
    // 0x359a38: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x359a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_359a3c:
    // 0x359a3c: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x359a3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_359a40:
    // 0x359a40: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x359a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_359a44:
    // 0x359a44: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x359a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_359a48:
    // 0x359a48: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x359a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_359a4c:
    // 0x359a4c: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x359a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_359a50:
    // 0x359a50: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x359a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_359a54:
    // 0x359a54: 0x3c118007  lui         $s1, 0x8007
    ctx->pc = 0x359a54u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)32775 << 16));
label_359a58:
    // 0x359a58: 0x3c128007  lui         $s2, 0x8007
    ctx->pc = 0x359a58u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)32775 << 16));
label_359a5c:
    // 0x359a5c: 0x0  nop
    ctx->pc = 0x359a5cu;
    // NOP
label_359a60:
    // 0x359a60: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x359a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_359a64:
    // 0x359a64: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x359a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_359a68:
    // 0x359a68: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_359a6c:
    if (ctx->pc == 0x359A6Cu) {
        ctx->pc = 0x359A6Cu;
            // 0x359a6c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x359A70u;
        goto label_359a70;
    }
    ctx->pc = 0x359A68u;
    {
        const bool branch_taken_0x359a68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x359A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359A68u;
            // 0x359a6c: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a68) {
            ctx->pc = 0x359A94u;
            goto label_359a94;
        }
    }
    ctx->pc = 0x359A70u;
label_359a70:
    // 0x359a70: 0x26446740  addiu       $a0, $s2, 0x6740
    ctx->pc = 0x359a70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
label_359a74:
    // 0x359a74: 0x1031818  mult        $v1, $t0, $v1
    ctx->pc = 0x359a74u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_359a78:
    // 0x359a78: 0x96456740  lhu         $a1, 0x6740($s2)
    ctx->pc = 0x359a78u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
label_359a7c:
    // 0x359a7c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x359a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_359a80:
    // 0x359a80: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x359a80u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_359a84:
    // 0x359a84: 0x10a2fff6  beq         $a1, $v0, . + 4 + (-0xA << 2)
label_359a88:
    if (ctx->pc == 0x359A88u) {
        ctx->pc = 0x359A88u;
            // 0x359a88: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->pc = 0x359A8Cu;
        goto label_359a8c;
    }
    ctx->pc = 0x359A84u;
    {
        const bool branch_taken_0x359a84 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x359A88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359A84u;
            // 0x359a88: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359a84) {
            ctx->pc = 0x359A60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359a60;
        }
    }
    ctx->pc = 0x359A8Cu;
label_359a8c:
    // 0x359a8c: 0xc01d918  jal         func_076460
label_359a90:
    if (ctx->pc == 0x359A90u) {
        ctx->pc = 0x359A90u;
            // 0x359a90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x359A94u;
        goto label_359a94;
    }
    ctx->pc = 0x359A8Cu;
    SET_GPR_U32(ctx, 31, 0x359A94u);
    ctx->pc = 0x359A90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359A8Cu;
            // 0x359a90: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    {
        auto targetFn = runtime->lookupFunction(0x76460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359A94u; }
        if (ctx->pc != 0x359A94u) { return; }
    }
    ctx->pc = 0x359A94u;
label_359a94:
    // 0x359a94: 0x3c028007  lui         $v0, 0x8007
    ctx->pc = 0x359a94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32775 << 16));
label_359a98:
    // 0x359a98: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x359a98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_359a9c:
    // 0x359a9c: 0x24546740  addiu       $s4, $v0, 0x6740
    ctx->pc = 0x359a9cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 26432));
label_359aa0:
    // 0x359aa0: 0x24130014  addiu       $s3, $zero, 0x14
    ctx->pc = 0x359aa0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_359aa4:
    // 0x359aa4: 0x3c158007  lui         $s5, 0x8007
    ctx->pc = 0x359aa4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)32775 << 16));
label_359aa8:
    // 0x359aa8: 0x10000004  b           . + 4 + (0x4 << 2)
label_359aac:
    if (ctx->pc == 0x359AACu) {
        ctx->pc = 0x359AACu;
            // 0x359aac: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x359AB0u;
        goto label_359ab0;
    }
    ctx->pc = 0x359AA8u;
    {
        const bool branch_taken_0x359aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x359AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359AA8u;
            // 0x359aac: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359aa8) {
            ctx->pc = 0x359ABCu;
            goto label_359abc;
        }
    }
    ctx->pc = 0x359AB0u;
label_359ab0:
    // 0x359ab0: 0x96426740  lhu         $v0, 0x6740($s2)
    ctx->pc = 0x359ab0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
label_359ab4:
    // 0x359ab4: 0x1462003e  bne         $v1, $v0, . + 4 + (0x3E << 2)
label_359ab8:
    if (ctx->pc == 0x359AB8u) {
        ctx->pc = 0x359AB8u;
            // 0x359ab8: 0x8e226700  lw          $v0, 0x6700($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
        ctx->pc = 0x359ABCu;
        goto label_359abc;
    }
    ctx->pc = 0x359AB4u;
    {
        const bool branch_taken_0x359ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x359AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359AB4u;
            // 0x359ab8: 0x8e226700  lw          $v0, 0x6700($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359ab4) {
            ctx->pc = 0x359BB0u;
            goto label_359bb0;
        }
    }
    ctx->pc = 0x359ABCu;
label_359abc:
    // 0x359abc: 0x8ec26700  lw          $v0, 0x6700($s6)
    ctx->pc = 0x359abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 26368)));
label_359ac0:
    // 0x359ac0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x359ac0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_359ac4:
    // 0x359ac4: 0x26466740  addiu       $a2, $s2, 0x6740
    ctx->pc = 0x359ac4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 26432));
label_359ac8:
    // 0x359ac8: 0x68c30007  ldl         $v1, 0x7($a2)
    ctx->pc = 0x359ac8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_359acc:
    // 0x359acc: 0x6cc30000  ldr         $v1, 0x0($a2)
    ctx->pc = 0x359accu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_359ad0:
    // 0x359ad0: 0x68c4000f  ldl         $a0, 0xF($a2)
    ctx->pc = 0x359ad0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_359ad4:
    // 0x359ad4: 0x6cc40008  ldr         $a0, 0x8($a2)
    ctx->pc = 0x359ad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_359ad8:
    // 0x359ad8: 0x8cc50010  lw          $a1, 0x10($a2)
    ctx->pc = 0x359ad8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 16)));
label_359adc:
    // 0x359adc: 0xb3a30007  sdl         $v1, 0x7($sp)
    ctx->pc = 0x359adcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_359ae0:
    // 0x359ae0: 0xb7a30000  sdr         $v1, 0x0($sp)
    ctx->pc = 0x359ae0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_359ae4:
    // 0x359ae4: 0xb3a4000f  sdl         $a0, 0xF($sp)
    ctx->pc = 0x359ae4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_359ae8:
    // 0x359ae8: 0xb7a40008  sdr         $a0, 0x8($sp)
    ctx->pc = 0x359ae8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_359aec:
    // 0x359aec: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x359aecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_359af0:
    // 0x359af0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x359af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_359af4:
    // 0x359af4: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_359af8:
    if (ctx->pc == 0x359AF8u) {
        ctx->pc = 0x359AF8u;
            // 0x359af8: 0xaec26700  sw          $v0, 0x6700($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 26368), GPR_U32(ctx, 2));
        ctx->pc = 0x359AFCu;
        goto label_359afc;
    }
    ctx->pc = 0x359AF4u;
    {
        const bool branch_taken_0x359af4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x359AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359AF4u;
            // 0x359af8: 0xaec26700  sw          $v0, 0x6700($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 26368), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359af4) {
            ctx->pc = 0x359B60u;
            goto label_359b60;
        }
    }
    ctx->pc = 0x359AFCu;
label_359afc:
    // 0x359afc: 0x8e296700  lw          $t1, 0x6700($s1)
    ctx->pc = 0x359afcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_359b00:
    // 0x359b00: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x359b00u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_359b04:
    // 0x359b04: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x359b04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_359b08:
    // 0x359b08: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x359b08u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_359b0c:
    // 0x359b0c: 0x0  nop
    ctx->pc = 0x359b0cu;
    // NOP
label_359b10:
    // 0x359b10: 0x1131818  mult        $v1, $t0, $s3
    ctx->pc = 0x359b10u;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_359b14:
    // 0x359b14: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x359b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_359b18:
    // 0x359b18: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x359b18u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_359b1c:
    // 0x359b1c: 0x742821  addu        $a1, $v1, $s4
    ctx->pc = 0x359b1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_359b20:
    // 0x359b20: 0x531818  mult        $v1, $v0, $s3
    ctx->pc = 0x359b20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 19); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_359b24:
    // 0x359b24: 0x742021  addu        $a0, $v1, $s4
    ctx->pc = 0x359b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_359b28:
    // 0x359b28: 0x688b0007  ldl         $t3, 0x7($a0)
    ctx->pc = 0x359b28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem << shift)); }
label_359b2c:
    // 0x359b2c: 0x6c8b0000  ldr         $t3, 0x0($a0)
    ctx->pc = 0x359b2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 11, (GPR_U64(ctx, 11) & keepMask) | (mem >> shift)); }
label_359b30:
    // 0x359b30: 0x688c000f  ldl         $t4, 0xF($a0)
    ctx->pc = 0x359b30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem << shift)); }
label_359b34:
    // 0x359b34: 0x6c8c0008  ldr         $t4, 0x8($a0)
    ctx->pc = 0x359b34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 12, (GPR_U64(ctx, 12) & keepMask) | (mem >> shift)); }
label_359b38:
    // 0x359b38: 0x8c8d0010  lw          $t5, 0x10($a0)
    ctx->pc = 0x359b38u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_359b3c:
    // 0x359b3c: 0xb0ab0007  sdl         $t3, 0x7($a1)
    ctx->pc = 0x359b3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_359b40:
    // 0x359b40: 0xb4ab0000  sdr         $t3, 0x0($a1)
    ctx->pc = 0x359b40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 11); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_359b44:
    // 0x359b44: 0xb0ac000f  sdl         $t4, 0xF($a1)
    ctx->pc = 0x359b44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_359b48:
    // 0x359b48: 0xb4ac0008  sdr         $t4, 0x8($a1)
    ctx->pc = 0x359b48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 12); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_359b4c:
    // 0x359b4c: 0x109182a  slt         $v1, $t0, $t1
    ctx->pc = 0x359b4cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_359b50:
    // 0x359b50: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
label_359b54:
    if (ctx->pc == 0x359B54u) {
        ctx->pc = 0x359B54u;
            // 0x359b54: 0xacad0010  sw          $t5, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 13));
        ctx->pc = 0x359B58u;
        goto label_359b58;
    }
    ctx->pc = 0x359B50u;
    {
        const bool branch_taken_0x359b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x359B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359B50u;
            // 0x359b54: 0xacad0010  sw          $t5, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359b50) {
            ctx->pc = 0x359B10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359b10;
        }
    }
    ctx->pc = 0x359B58u;
label_359b58:
    // 0x359b58: 0x10000004  b           . + 4 + (0x4 << 2)
label_359b5c:
    if (ctx->pc == 0x359B5Cu) {
        ctx->pc = 0x359B60u;
        goto label_359b60;
    }
    ctx->pc = 0x359B58u;
    {
        const bool branch_taken_0x359b58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359b58) {
            ctx->pc = 0x359B6Cu;
            goto label_359b6c;
        }
    }
    ctx->pc = 0x359B60u;
label_359b60:
    // 0x359b60: 0x8faa0010  lw          $t2, 0x10($sp)
    ctx->pc = 0x359b60u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_359b64:
    // 0x359b64: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x359b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_359b68:
    // 0x359b68: 0x97a70000  lhu         $a3, 0x0($sp)
    ctx->pc = 0x359b68u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
label_359b6c:
    // 0x359b6c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x359b6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_359b70:
    // 0x359b70: 0x140e02d  daddu       $gp, $t2, $zero
    ctx->pc = 0x359b70u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_359b74:
    // 0x359b74: 0xdea36708  ld          $v1, 0x6708($s5)
    ctx->pc = 0x359b74u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 26376)));
label_359b78:
    // 0x359b78: 0xd71014  dsllv       $v0, $s7, $a2
    ctx->pc = 0x359b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) << (GPR_U32(ctx, 6) & 0x3F));
label_359b7c:
    // 0x359b7c: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x359b7cu;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_359b80:
    // 0x359b80: 0x3c040008  lui         $a0, 0x8
    ctx->pc = 0x359b80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8 << 16));
label_359b84:
    // 0x359b84: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x359b84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_359b88:
    // 0x359b88: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x359b88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_359b8c:
    // 0x359b8c: 0x8fa8000c  lw          $t0, 0xC($sp)
    ctx->pc = 0x359b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_359b90:
    // 0x359b90: 0x34842000  ori         $a0, $a0, 0x2000
    ctx->pc = 0x359b90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)8192);
label_359b94:
    // 0x359b94: 0xc01d9a0  jal         func_076680
label_359b98:
    if (ctx->pc == 0x359B98u) {
        ctx->pc = 0x359B98u;
            // 0x359b98: 0xfea36708  sd          $v1, 0x6708($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 26376), GPR_U64(ctx, 3));
        ctx->pc = 0x359B9Cu;
        goto label_359b9c;
    }
    ctx->pc = 0x359B94u;
    SET_GPR_U32(ctx, 31, 0x359B9Cu);
    ctx->pc = 0x359B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359B94u;
            // 0x359b98: 0xfea36708  sd          $v1, 0x6708($s5) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 21), 26376), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x76680u;
    {
        auto targetFn = runtime->lookupFunction(0x76680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359B9Cu; }
        if (ctx->pc != 0x359B9Cu) { return; }
    }
    ctx->pc = 0x359B9Cu;
label_359b9c:
    // 0x359b9c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x359b9cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_359ba0:
    // 0x359ba0: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x359ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_359ba4:
    // 0x359ba4: 0x1c40ffc2  bgtz        $v0, . + 4 + (-0x3E << 2)
label_359ba8:
    if (ctx->pc == 0x359BA8u) {
        ctx->pc = 0x359BA8u;
            // 0x359ba8: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x359BACu;
        goto label_359bac;
    }
    ctx->pc = 0x359BA4u;
    {
        const bool branch_taken_0x359ba4 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x359BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359BA4u;
            // 0x359ba8: 0x97a30000  lhu         $v1, 0x0($sp) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359ba4) {
            ctx->pc = 0x359AB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_359ab0;
        }
    }
    ctx->pc = 0x359BACu;
label_359bac:
    // 0x359bac: 0x8e226700  lw          $v0, 0x6700($s1)
    ctx->pc = 0x359bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 26368)));
label_359bb0:
    // 0x359bb0: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
label_359bb4:
    if (ctx->pc == 0x359BB4u) {
        ctx->pc = 0x359BB4u;
            // 0x359bb4: 0x24030483  addiu       $v1, $zero, 0x483 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
        ctx->pc = 0x359BB8u;
        goto label_359bb8;
    }
    ctx->pc = 0x359BB0u;
    {
        const bool branch_taken_0x359bb0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x359BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359BB0u;
            // 0x359bb4: 0x24030483  addiu       $v1, $zero, 0x483 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1155));
        ctx->in_delay_slot = false;
        if (branch_taken_0x359bb0) {
            ctx->pc = 0x359BC8u;
            goto label_359bc8;
        }
    }
    ctx->pc = 0x359BB8u;
label_359bb8:
    // 0x359bb8: 0xc01d918  jal         func_076460
label_359bbc:
    if (ctx->pc == 0x359BBCu) {
        ctx->pc = 0x359BBCu;
            // 0x359bbc: 0x96446740  lhu         $a0, 0x6740($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
        ctx->pc = 0x359BC0u;
        goto label_359bc0;
    }
    ctx->pc = 0x359BB8u;
    SET_GPR_U32(ctx, 31, 0x359BC0u);
    ctx->pc = 0x359BBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x359BB8u;
            // 0x359bbc: 0x96446740  lhu         $a0, 0x6740($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 26432)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x76460u;
    {
        auto targetFn = runtime->lookupFunction(0x76460u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x359BC0u; }
        if (ctx->pc != 0x359BC0u) { return; }
    }
    ctx->pc = 0x359BC0u;
label_359bc0:
    // 0x359bc0: 0x10000004  b           . + 4 + (0x4 << 2)
label_359bc4:
    if (ctx->pc == 0x359BC4u) {
        ctx->pc = 0x359BC8u;
        goto label_359bc8;
    }
    ctx->pc = 0x359BC0u;
    {
        const bool branch_taken_0x359bc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x359bc0) {
            ctx->pc = 0x359BD4u;
            goto label_359bd4;
        }
    }
    ctx->pc = 0x359BC8u;
label_359bc8:
    // 0x359bc8: 0x3c02b000  lui         $v0, 0xB000
    ctx->pc = 0x359bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)45056 << 16));
label_359bcc:
    // 0x359bcc: 0x34421810  ori         $v0, $v0, 0x1810
    ctx->pc = 0x359bccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6160);
label_359bd0:
    // 0x359bd0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x359bd0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_359bd4:
    // 0x359bd4: 0xf  sync
    ctx->pc = 0x359bd4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359bd8:
    // 0x359bd8: 0x42000038  ei
    ctx->pc = 0x359bd8u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
label_359bdc:
    // 0x359bdc: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x359bdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_359be0:
    // 0x359be0: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x359be0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_359be4:
    // 0x359be4: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x359be4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_359be8:
    // 0x359be8: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x359be8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_359bec:
    // 0x359bec: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x359becu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_359bf0:
    // 0x359bf0: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x359bf0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_359bf4:
    // 0x359bf4: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x359bf4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_359bf8:
    // 0x359bf8: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x359bf8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_359bfc:
    // 0x359bfc: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x359bfcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_359c00:
    // 0x359c00: 0x3e00008  jr          $ra
label_359c04:
    if (ctx->pc == 0x359C04u) {
        ctx->pc = 0x359C04u;
            // 0x359c04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x359C08u;
        goto label_359c08;
    }
    ctx->pc = 0x359C00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359C04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359C00u;
            // 0x359c04: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359C08u;
label_359c08:
    // 0x359c08: 0x0  nop
    ctx->pc = 0x359c08u;
    // NOP
label_359c0c:
    // 0x359c0c: 0x0  nop
    ctx->pc = 0x359c0cu;
    // NOP
label_359c10:
    // 0x359c10: 0x0  nop
    ctx->pc = 0x359c10u;
    // NOP
label_359c14:
    // 0x359c14: 0x0  nop
    ctx->pc = 0x359c14u;
    // NOP
label_359c18:
    // 0x359c18: 0x0  nop
    ctx->pc = 0x359c18u;
    // NOP
label_359c1c:
    // 0x359c1c: 0x0  nop
    ctx->pc = 0x359c1cu;
    // NOP
label_359c20:
    // 0x359c20: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x359c20u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_359c24:
    // 0x359c24: 0xaf5f6c40  sw          $ra, 0x6C40($k0)
    ctx->pc = 0x359c24u;
    WRITE32(ADD32(GPR_U32(ctx, 26), 27712), GPR_U32(ctx, 31));
label_359c28:
    // 0x359c28: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x359c28u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_359c2c:
    // 0x359c2c: 0xaf5d6c50  sw          $sp, 0x6C50($k0)
    ctx->pc = 0x359c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 26), 27728), GPR_U32(ctx, 29));
label_359c30:
    // 0x359c30: 0x40847000  mtc0        $a0, EPC
    ctx->pc = 0x359c30u;
    ctx->cop0_epc = GPR_U32(ctx, 4);
label_359c34:
    // 0x359c34: 0x40f  sync.p
    ctx->pc = 0x359c34u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359c38:
    // 0x359c38: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x359c38u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_359c3c:
    // 0x359c3c: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x359c3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_359c40:
    // 0x359c40: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x359c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_359c44:
    // 0x359c44: 0x100302d  daddu       $a2, $t0, $zero
    ctx->pc = 0x359c44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_359c48:
    // 0x359c48: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x359c48u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_359c4c:
    // 0x359c4c: 0x375a0012  ori         $k0, $k0, 0x12
    ctx->pc = 0x359c4cu;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)18);
label_359c50:
    // 0x359c50: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x359c50u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_359c54:
    // 0x359c54: 0x40f  sync.p
    ctx->pc = 0x359c54u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359c58:
    // 0x359c58: 0x42000018  eret
    ctx->pc = 0x359c58u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_359c5c:
    // 0x359c5c: 0x0  nop
    ctx->pc = 0x359c5cu;
    // NOP
label_359c60:
    // 0x359c60: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x359c60u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_359c64:
    // 0x359c64: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x359c64u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_359c68:
    // 0x359c68: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x359c68u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_359c6c:
    // 0x359c6c: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x359c6cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_359c70:
    // 0x359c70: 0x40f  sync.p
    ctx->pc = 0x359c70u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_359c74:
    // 0x359c74: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x359c74u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_359c78:
    // 0x359c78: 0x8f5f6c40  lw          $ra, 0x6C40($k0)
    ctx->pc = 0x359c78u;
    SET_GPR_S32(ctx, 31, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 27712)));
label_359c7c:
    // 0x359c7c: 0x3c1a8007  lui         $k0, 0x8007
    ctx->pc = 0x359c7cu;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)32775 << 16));
label_359c80:
    // 0x359c80: 0x3e00008  jr          $ra
label_359c84:
    if (ctx->pc == 0x359C84u) {
        ctx->pc = 0x359C84u;
            // 0x359c84: 0x8f5d6c50  lw          $sp, 0x6C50($k0) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 27728)));
        ctx->pc = 0x359C88u;
        goto label_359c88;
    }
    ctx->pc = 0x359C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x359C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359C80u;
            // 0x359c84: 0x8f5d6c50  lw          $sp, 0x6C50($k0) (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 26), 27728)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359C88u;
label_359c88:
    // 0x359c88: 0x0  nop
    ctx->pc = 0x359c88u;
    // NOP
label_359c8c:
    // 0x359c8c: 0x0  nop
    ctx->pc = 0x359c8cu;
    // NOP
label_359c90:
    // 0x359c90: 0x0  nop
    ctx->pc = 0x359c90u;
    // NOP
label_359c94:
    // 0x359c94: 0x0  nop
    ctx->pc = 0x359c94u;
    // NOP
label_359c98:
    // 0x359c98: 0x0  nop
    ctx->pc = 0x359c98u;
    // NOP
label_359c9c:
    // 0x359c9c: 0x0  nop
    ctx->pc = 0x359c9cu;
    // NOP
label_359ca0:
    // 0x359ca0: 0x0  nop
    ctx->pc = 0x359ca0u;
    // NOP
label_359ca4:
    // 0x359ca4: 0x0  nop
    ctx->pc = 0x359ca4u;
    // NOP
label_359ca8:
    // 0x359ca8: 0x0  nop
    ctx->pc = 0x359ca8u;
    // NOP
label_359cac:
    // 0x359cac: 0x0  nop
    ctx->pc = 0x359cacu;
    // NOP
label_359cb0:
    // 0x359cb0: 0xfc  dsll32      $zero, $zero, 3
    ctx->pc = 0x359cb0u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 3));
label_359cb4:
    // 0x359cb4: 0x80076440  lb          $a3, 0x6440($zero)
    ctx->pc = 0x359cb4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 25664)));
label_359cb8:
    // 0x359cb8: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x359cb8u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_359cbc:
    // 0x359cbc: 0x80076440  lb          $a3, 0x6440($zero)
    ctx->pc = 0x359cbcu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 25664)));
label_359cc0:
    // 0x359cc0: 0xfd  .word       0x000000FD                   # INVALID     $zero, $zero, 0xFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359cc0u;
    // Unhandled SPECIAL instruction: 0x3D
label_359cc4:
    // 0x359cc4: 0x800762a0  lb          $a3, 0x62A0($zero)
    ctx->pc = 0x359cc4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 25248)));
label_359cc8:
    // 0x359cc8: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x359cc8u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_359ccc:
    // 0x359ccc: 0x800762a0  lb          $a3, 0x62A0($zero)
    ctx->pc = 0x359cccu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 25248)));
label_359cd0:
    // 0x359cd0: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359cd0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_359cd4:
    // 0x359cd4: 0x80076488  lb          $a3, 0x6488($zero)
    ctx->pc = 0x359cd4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 25736)));
label_359cd8:
    // 0x359cd8: 0x8  jr          $zero
label_359cdc:
    if (ctx->pc == 0x359CDCu) {
        ctx->pc = 0x359CDCu;
            // 0x359cdc: 0x800766c0  lb          $a3, 0x66C0($zero) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 26304)));
        ctx->pc = 0x359CE0u;
        goto label_359ce0;
    }
    ctx->pc = 0x359CD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = 0x359CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359CD8u;
            // 0x359cdc: 0x800766c0  lb          $a3, 0x66C0($zero) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 26304)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359CE0u;
label_359ce0:
    // 0x359ce0: 0x3c1d0008  lui         $sp, 0x8
    ctx->pc = 0x359ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)8 << 16));
label_359ce4:
    // 0x359ce4: 0x60f809  jalr        $v1
label_359ce8:
    if (ctx->pc == 0x359CE8u) {
        ctx->pc = 0x359CE8u;
            // 0x359ce8: 0x27bd1fc0  addiu       $sp, $sp, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8128));
        ctx->pc = 0x359CECu;
        goto label_359cec;
    }
    ctx->pc = 0x359CE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x359CECu);
        ctx->pc = 0x359CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x359CE4u;
            // 0x359ce8: 0x27bd1fc0  addiu       $sp, $sp, 0x1FC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 8128));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x359CECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x359CECu; }
            if (ctx->pc != 0x359CECu) { return; }
        }
        }
    }
    ctx->pc = 0x359CECu;
label_359cec:
    // 0x359cec: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x359cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_359cf0:
    // 0x359cf0: 0xc  syscall     0
    ctx->pc = 0x359cf0u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
label_359cf4:
    // 0x359cf4: 0x0  nop
    ctx->pc = 0x359cf4u;
    // NOP
label_359cf8:
    // 0x359cf8: 0x0  nop
    ctx->pc = 0x359cf8u;
    // NOP
label_359cfc:
    // 0x359cfc: 0x0  nop
    ctx->pc = 0x359cfcu;
    // NOP
label_359d00:
    // 0x359d00: 0x0  nop
    ctx->pc = 0x359d00u;
    // NOP
label_359d04:
    // 0x359d04: 0x0  nop
    ctx->pc = 0x359d04u;
    // NOP
label_359d08:
    // 0x359d08: 0x5a  .word       0x0000005A                   # div         $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359d08u;
    { int32_t divisor = GPR_S32(ctx, 0);    int32_t dividend = GPR_S32(ctx, 0);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_359d0c:
    // 0x359d0c: 0x1175f0  tge         $zero, $s1, 471
    ctx->pc = 0x359d0cu;
    if (GPR_S64(ctx, 0) >= GPR_S64(ctx, 17)) { runtime->handleTrap(rdram, ctx); }
label_359d10:
    // 0x359d10: 0x5b  .word       0x0000005B                   # divu        $zero, $zero, $zero # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359d10u;
    { uint32_t divisor = GPR_U32(ctx, 0); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 0) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,0); } }
label_359d14:
    // 0x359d14: 0x80076000  lb          $a3, 0x6000($zero)
    ctx->pc = 0x359d14u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 24576)));
label_359d18:
    // 0x359d18: 0xfc  dsll32      $zero, $zero, 3
    ctx->pc = 0x359d18u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) << (32 + 3));
label_359d1c:
    // 0x359d1c: 0x0  nop
    ctx->pc = 0x359d1cu;
    // NOP
label_359d20:
    // 0x359d20: 0xfe  dsrl32      $zero, $zero, 3
    ctx->pc = 0x359d20u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 0) >> (32 + 3));
label_359d24:
    // 0x359d24: 0x0  nop
    ctx->pc = 0x359d24u;
    // NOP
label_359d28:
    // 0x359d28: 0xfd  .word       0x000000FD                   # INVALID     $zero, $zero, 0xFD # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359d28u;
    // Unhandled SPECIAL instruction: 0x3D
label_359d2c:
    // 0x359d2c: 0x0  nop
    ctx->pc = 0x359d2cu;
    // NOP
label_359d30:
    // 0x359d30: 0xff  dsra32      $zero, $zero, 3
    ctx->pc = 0x359d30u;
    SET_GPR_S64(ctx, 0, GPR_S64(ctx, 0) >> (32 + 3));
label_359d34:
    // 0x359d34: 0x0  nop
    ctx->pc = 0x359d34u;
    // NOP
label_359d38:
    // 0x359d38: 0x12c  .word       0x0000012C                   # dadd        $zero, $zero, $zero # 00000100 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359d38u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 0); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 0, r); }
label_359d3c:
    // 0x359d3c: 0x0  nop
    ctx->pc = 0x359d3cu;
    // NOP
label_359d40:
    // 0x359d40: 0x8  jr          $zero
label_359d44:
    if (ctx->pc == 0x359D44u) {
        ctx->pc = 0x359D48u;
        goto label_359d48;
    }
    ctx->pc = 0x359D40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 0);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x359D48u;
label_359d48:
    // 0x359d48: 0x0  nop
    ctx->pc = 0x359d48u;
    // NOP
label_359d4c:
    // 0x359d4c: 0x0  nop
    ctx->pc = 0x359d4cu;
    // NOP
label_359d50:
    // 0x359d50: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359d50u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359d54:
    // 0x359d54: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359d54u;
    // Unhandled SPECIAL instruction: 0x1
label_359d58:
    // 0x359d58: 0x0  nop
    ctx->pc = 0x359d58u;
    // NOP
label_359d5c:
    // 0x359d5c: 0x0  nop
    ctx->pc = 0x359d5cu;
    // NOP
label_359d60:
    // 0x359d60: 0x0  nop
    ctx->pc = 0x359d60u;
    // NOP
label_359d64:
    // 0x359d64: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359d64u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359d68:
    // 0x359d68: 0x0  nop
    ctx->pc = 0x359d68u;
    // NOP
label_359d6c:
    // 0x359d6c: 0x0  nop
    ctx->pc = 0x359d6cu;
    // NOP
label_359d70:
    // 0x359d70: 0x0  nop
    ctx->pc = 0x359d70u;
    // NOP
label_359d74:
    // 0x359d74: 0x0  nop
    ctx->pc = 0x359d74u;
    // NOP
label_359d78:
    // 0x359d78: 0x0  nop
    ctx->pc = 0x359d78u;
    // NOP
label_359d7c:
    // 0x359d7c: 0x0  nop
    ctx->pc = 0x359d7cu;
    // NOP
label_359d80:
    // 0x359d80: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x359d80u;
    // Unhandled COP2 format: 0xA
label_359d84:
    // 0x359d84: 0x7362696c  .word       0x7362696C                   # INVALID     $k1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x359d84u;
    // Unhandled MMI instruction: function 0x2C
label_359d88:
    // 0x359d88: 0x20207264  addi        $zero, $at, 0x7264
    ctx->pc = 0x359d88u;
    // NOP (addi to $zero)
label_359d8c:
    // 0x359d8c: 0x30303133  andi        $s0, $at, 0x3133
    ctx->pc = 0x359d8cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12595);
label_359d90:
    // 0x359d90: 0x0  nop
    ctx->pc = 0x359d90u;
    // NOP
label_359d94:
    // 0x359d94: 0x0  nop
    ctx->pc = 0x359d94u;
    // NOP
label_359d98:
    // 0x359d98: 0x0  nop
    ctx->pc = 0x359d98u;
    // NOP
label_359d9c:
    // 0x359d9c: 0x0  nop
    ctx->pc = 0x359d9cu;
    // NOP
label_359da0:
    // 0x359da0: 0x0  nop
    ctx->pc = 0x359da0u;
    // NOP
label_359da4:
    // 0x359da4: 0x0  nop
    ctx->pc = 0x359da4u;
    // NOP
label_359da8:
    // 0x359da8: 0x0  nop
    ctx->pc = 0x359da8u;
    // NOP
label_359dac:
    // 0x359dac: 0x0  nop
    ctx->pc = 0x359dacu;
    // NOP
label_359db0:
    // 0x359db0: 0x0  nop
    ctx->pc = 0x359db0u;
    // NOP
label_359db4:
    // 0x359db4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359db4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359db8:
    // 0x359db8: 0x0  nop
    ctx->pc = 0x359db8u;
    // NOP
label_359dbc:
    // 0x359dbc: 0x0  nop
    ctx->pc = 0x359dbcu;
    // NOP
label_359dc0:
    // 0x359dc0: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x359dc0u;
    // Unhandled COP2 format: 0xA
label_359dc4:
    // 0x359dc4: 0x6362696c  daddi       $v0, $k1, 0x696C
    ctx->pc = 0x359dc4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 27); int64_t imm = (int64_t)(int32_t)26988; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 2, res); }
label_359dc8:
    // 0x359dc8: 0x20647664  addi        $a0, $v1, 0x7664
    ctx->pc = 0x359dc8u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 3), (int32_t)30308, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 4, (int32_t)tmp); }
label_359dcc:
    // 0x359dcc: 0x30303133  andi        $s0, $at, 0x3133
    ctx->pc = 0x359dccu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12595);
label_359dd0:
    // 0x359dd0: 0x0  nop
    ctx->pc = 0x359dd0u;
    // NOP
label_359dd4:
    // 0x359dd4: 0x0  nop
    ctx->pc = 0x359dd4u;
    // NOP
label_359dd8:
    // 0x359dd8: 0x0  nop
    ctx->pc = 0x359dd8u;
    // NOP
label_359ddc:
    // 0x359ddc: 0x0  nop
    ctx->pc = 0x359ddcu;
    // NOP
label_359de0:
    // 0x359de0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359de0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359de4:
    // 0x359de4: 0x0  nop
    ctx->pc = 0x359de4u;
    // NOP
label_359de8:
    // 0x359de8: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359de8u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359dec:
    // 0x359dec: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359decu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359df0:
    // 0x359df0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359df0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359df4:
    // 0x359df4: 0x0  nop
    ctx->pc = 0x359df4u;
    // NOP
label_359df8:
    // 0x359df8: 0x0  nop
    ctx->pc = 0x359df8u;
    // NOP
label_359dfc:
    // 0x359dfc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359e00:
    // 0x359e00: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x359e00u;
    // Unhandled SPECIAL instruction: 0x1
label_359e04:
    // 0x359e04: 0x0  nop
    ctx->pc = 0x359e04u;
    // NOP
label_359e08:
    // 0x359e08: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359e08u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359e0c:
    // 0x359e0c: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359e0cu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359e10:
    // 0x359e10: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359e10u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359e14:
    // 0x359e14: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359e14u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359e18:
    // 0x359e18: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x359e18u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_359e1c:
    // 0x359e1c: 0x0  nop
    ctx->pc = 0x359e1cu;
    // NOP
label_359e20:
    // 0x359e20: 0x0  nop
    ctx->pc = 0x359e20u;
    // NOP
label_359e24:
    // 0x359e24: 0x0  nop
    ctx->pc = 0x359e24u;
    // NOP
label_359e28:
    // 0x359e28: 0x0  nop
    ctx->pc = 0x359e28u;
    // NOP
label_359e2c:
    // 0x359e2c: 0x0  nop
    ctx->pc = 0x359e2cu;
    // NOP
label_359e30:
    // 0x359e30: 0x0  nop
    ctx->pc = 0x359e30u;
    // NOP
label_359e34:
    // 0x359e34: 0x0  nop
    ctx->pc = 0x359e34u;
    // NOP
label_359e38:
    // 0x359e38: 0x0  nop
    ctx->pc = 0x359e38u;
    // NOP
label_359e3c:
    // 0x359e3c: 0x0  nop
    ctx->pc = 0x359e3cu;
    // NOP
label_359e40:
    // 0x359e40: 0x0  nop
    ctx->pc = 0x359e40u;
    // NOP
label_359e44:
    // 0x359e44: 0x0  nop
    ctx->pc = 0x359e44u;
    // NOP
label_359e48:
    // 0x359e48: 0x0  nop
    ctx->pc = 0x359e48u;
    // NOP
label_359e4c:
    // 0x359e4c: 0x0  nop
    ctx->pc = 0x359e4cu;
    // NOP
label_359e50:
    // 0x359e50: 0x0  nop
    ctx->pc = 0x359e50u;
    // NOP
label_359e54:
    // 0x359e54: 0x0  nop
    ctx->pc = 0x359e54u;
    // NOP
label_359e58:
    // 0x359e58: 0x0  nop
    ctx->pc = 0x359e58u;
    // NOP
label_359e5c:
    // 0x359e5c: 0x0  nop
    ctx->pc = 0x359e5cu;
    // NOP
label_359e60:
    // 0x359e60: 0x0  nop
    ctx->pc = 0x359e60u;
    // NOP
label_359e64:
    // 0x359e64: 0x0  nop
    ctx->pc = 0x359e64u;
    // NOP
label_359e68:
    // 0x359e68: 0x0  nop
    ctx->pc = 0x359e68u;
    // NOP
label_359e6c:
    // 0x359e6c: 0x0  nop
    ctx->pc = 0x359e6cu;
    // NOP
label_359e70:
    // 0x359e70: 0x0  nop
    ctx->pc = 0x359e70u;
    // NOP
label_359e74:
    // 0x359e74: 0x0  nop
    ctx->pc = 0x359e74u;
    // NOP
label_359e78:
    // 0x359e78: 0x0  nop
    ctx->pc = 0x359e78u;
    // NOP
label_359e7c:
    // 0x359e7c: 0x0  nop
    ctx->pc = 0x359e7cu;
    // NOP
label_359e80:
    // 0x359e80: 0x0  nop
    ctx->pc = 0x359e80u;
    // NOP
label_359e84:
    // 0x359e84: 0x0  nop
    ctx->pc = 0x359e84u;
    // NOP
label_359e88:
    // 0x359e88: 0x0  nop
    ctx->pc = 0x359e88u;
    // NOP
label_359e8c:
    // 0x359e8c: 0x0  nop
    ctx->pc = 0x359e8cu;
    // NOP
label_359e90:
    // 0x359e90: 0x0  nop
    ctx->pc = 0x359e90u;
    // NOP
label_359e94:
    // 0x359e94: 0x0  nop
    ctx->pc = 0x359e94u;
    // NOP
label_359e98:
    // 0x359e98: 0x0  nop
    ctx->pc = 0x359e98u;
    // NOP
label_359e9c:
    // 0x359e9c: 0x0  nop
    ctx->pc = 0x359e9cu;
    // NOP
label_359ea0:
    // 0x359ea0: 0x0  nop
    ctx->pc = 0x359ea0u;
    // NOP
label_359ea4:
    // 0x359ea4: 0x0  nop
    ctx->pc = 0x359ea4u;
    // NOP
label_359ea8:
    // 0x359ea8: 0x0  nop
    ctx->pc = 0x359ea8u;
    // NOP
label_359eac:
    // 0x359eac: 0x0  nop
    ctx->pc = 0x359eacu;
    // NOP
label_359eb0:
    // 0x359eb0: 0x0  nop
    ctx->pc = 0x359eb0u;
    // NOP
label_359eb4:
    // 0x359eb4: 0x0  nop
    ctx->pc = 0x359eb4u;
    // NOP
label_359eb8:
    // 0x359eb8: 0x0  nop
    ctx->pc = 0x359eb8u;
    // NOP
label_359ebc:
    // 0x359ebc: 0x0  nop
    ctx->pc = 0x359ebcu;
    // NOP
label_359ec0:
    // 0x359ec0: 0x0  nop
    ctx->pc = 0x359ec0u;
    // NOP
label_359ec4:
    // 0x359ec4: 0x0  nop
    ctx->pc = 0x359ec4u;
    // NOP
label_359ec8:
    // 0x359ec8: 0x0  nop
    ctx->pc = 0x359ec8u;
    // NOP
label_359ecc:
    // 0x359ecc: 0x0  nop
    ctx->pc = 0x359eccu;
    // NOP
label_359ed0:
    // 0x359ed0: 0x0  nop
    ctx->pc = 0x359ed0u;
    // NOP
label_359ed4:
    // 0x359ed4: 0x0  nop
    ctx->pc = 0x359ed4u;
    // NOP
label_359ed8:
    // 0x359ed8: 0x0  nop
    ctx->pc = 0x359ed8u;
    // NOP
label_359edc:
    // 0x359edc: 0x0  nop
    ctx->pc = 0x359edcu;
    // NOP
label_359ee0:
    // 0x359ee0: 0x0  nop
    ctx->pc = 0x359ee0u;
    // NOP
label_359ee4:
    // 0x359ee4: 0x0  nop
    ctx->pc = 0x359ee4u;
    // NOP
label_359ee8:
    // 0x359ee8: 0x0  nop
    ctx->pc = 0x359ee8u;
    // NOP
label_359eec:
    // 0x359eec: 0x0  nop
    ctx->pc = 0x359eecu;
    // NOP
label_359ef0:
    // 0x359ef0: 0x0  nop
    ctx->pc = 0x359ef0u;
    // NOP
label_359ef4:
    // 0x359ef4: 0x0  nop
    ctx->pc = 0x359ef4u;
    // NOP
label_359ef8:
    // 0x359ef8: 0x0  nop
    ctx->pc = 0x359ef8u;
    // NOP
label_359efc:
    // 0x359efc: 0x0  nop
    ctx->pc = 0x359efcu;
    // NOP
label_359f00:
    // 0x359f00: 0x0  nop
    ctx->pc = 0x359f00u;
    // NOP
label_359f04:
    // 0x359f04: 0x0  nop
    ctx->pc = 0x359f04u;
    // NOP
label_359f08:
    // 0x359f08: 0x0  nop
    ctx->pc = 0x359f08u;
    // NOP
label_359f0c:
    // 0x359f0c: 0x0  nop
    ctx->pc = 0x359f0cu;
    // NOP
label_359f10:
    // 0x359f10: 0x0  nop
    ctx->pc = 0x359f10u;
    // NOP
label_359f14:
    // 0x359f14: 0x0  nop
    ctx->pc = 0x359f14u;
    // NOP
label_359f18:
    // 0x359f18: 0x0  nop
    ctx->pc = 0x359f18u;
    // NOP
label_359f1c:
    // 0x359f1c: 0x0  nop
    ctx->pc = 0x359f1cu;
    // NOP
label_359f20:
    // 0x359f20: 0x0  nop
    ctx->pc = 0x359f20u;
    // NOP
label_359f24:
    // 0x359f24: 0x0  nop
    ctx->pc = 0x359f24u;
    // NOP
label_359f28:
    // 0x359f28: 0x0  nop
    ctx->pc = 0x359f28u;
    // NOP
label_359f2c:
    // 0x359f2c: 0x0  nop
    ctx->pc = 0x359f2cu;
    // NOP
label_359f30:
    // 0x359f30: 0x0  nop
    ctx->pc = 0x359f30u;
    // NOP
label_359f34:
    // 0x359f34: 0x0  nop
    ctx->pc = 0x359f34u;
    // NOP
label_359f38:
    // 0x359f38: 0x0  nop
    ctx->pc = 0x359f38u;
    // NOP
label_359f3c:
    // 0x359f3c: 0x0  nop
    ctx->pc = 0x359f3cu;
    // NOP
label_359f40:
    // 0x359f40: 0x0  nop
    ctx->pc = 0x359f40u;
    // NOP
label_359f44:
    // 0x359f44: 0x0  nop
    ctx->pc = 0x359f44u;
    // NOP
label_359f48:
    // 0x359f48: 0x0  nop
    ctx->pc = 0x359f48u;
    // NOP
label_359f4c:
    // 0x359f4c: 0x0  nop
    ctx->pc = 0x359f4cu;
    // NOP
label_359f50:
    // 0x359f50: 0x0  nop
    ctx->pc = 0x359f50u;
    // NOP
label_359f54:
    // 0x359f54: 0x0  nop
    ctx->pc = 0x359f54u;
    // NOP
label_359f58:
    // 0x359f58: 0x0  nop
    ctx->pc = 0x359f58u;
    // NOP
label_359f5c:
    // 0x359f5c: 0x0  nop
    ctx->pc = 0x359f5cu;
    // NOP
label_359f60:
    // 0x359f60: 0x0  nop
    ctx->pc = 0x359f60u;
    // NOP
label_359f64:
    // 0x359f64: 0x0  nop
    ctx->pc = 0x359f64u;
    // NOP
label_359f68:
    // 0x359f68: 0x0  nop
    ctx->pc = 0x359f68u;
    // NOP
label_359f6c:
    // 0x359f6c: 0x0  nop
    ctx->pc = 0x359f6cu;
    // NOP
label_359f70:
    // 0x359f70: 0x0  nop
    ctx->pc = 0x359f70u;
    // NOP
label_359f74:
    // 0x359f74: 0x0  nop
    ctx->pc = 0x359f74u;
    // NOP
label_359f78:
    // 0x359f78: 0x0  nop
    ctx->pc = 0x359f78u;
    // NOP
label_359f7c:
    // 0x359f7c: 0x0  nop
    ctx->pc = 0x359f7cu;
    // NOP
label_359f80:
    // 0x359f80: 0x0  nop
    ctx->pc = 0x359f80u;
    // NOP
label_359f84:
    // 0x359f84: 0x0  nop
    ctx->pc = 0x359f84u;
    // NOP
label_359f88:
    // 0x359f88: 0x0  nop
    ctx->pc = 0x359f88u;
    // NOP
label_359f8c:
    // 0x359f8c: 0x0  nop
    ctx->pc = 0x359f8cu;
    // NOP
label_359f90:
    // 0x359f90: 0x0  nop
    ctx->pc = 0x359f90u;
    // NOP
label_359f94:
    // 0x359f94: 0x0  nop
    ctx->pc = 0x359f94u;
    // NOP
label_359f98:
    // 0x359f98: 0x0  nop
    ctx->pc = 0x359f98u;
    // NOP
label_359f9c:
    // 0x359f9c: 0x0  nop
    ctx->pc = 0x359f9cu;
    // NOP
label_359fa0:
    // 0x359fa0: 0x0  nop
    ctx->pc = 0x359fa0u;
    // NOP
label_359fa4:
    // 0x359fa4: 0x0  nop
    ctx->pc = 0x359fa4u;
    // NOP
label_359fa8:
    // 0x359fa8: 0x0  nop
    ctx->pc = 0x359fa8u;
    // NOP
label_359fac:
    // 0x359fac: 0x0  nop
    ctx->pc = 0x359facu;
    // NOP
label_359fb0:
    // 0x359fb0: 0x0  nop
    ctx->pc = 0x359fb0u;
    // NOP
label_359fb4:
    // 0x359fb4: 0x0  nop
    ctx->pc = 0x359fb4u;
    // NOP
label_359fb8:
    // 0x359fb8: 0x0  nop
    ctx->pc = 0x359fb8u;
    // NOP
label_359fbc:
    // 0x359fbc: 0x0  nop
    ctx->pc = 0x359fbcu;
    // NOP
label_359fc0:
    // 0x359fc0: 0x0  nop
    ctx->pc = 0x359fc0u;
    // NOP
label_359fc4:
    // 0x359fc4: 0x0  nop
    ctx->pc = 0x359fc4u;
    // NOP
label_359fc8:
    // 0x359fc8: 0x0  nop
    ctx->pc = 0x359fc8u;
    // NOP
label_359fcc:
    // 0x359fcc: 0x0  nop
    ctx->pc = 0x359fccu;
    // NOP
label_359fd0:
    // 0x359fd0: 0x0  nop
    ctx->pc = 0x359fd0u;
    // NOP
label_359fd4:
    // 0x359fd4: 0x0  nop
    ctx->pc = 0x359fd4u;
    // NOP
label_359fd8:
    // 0x359fd8: 0x0  nop
    ctx->pc = 0x359fd8u;
    // NOP
label_359fdc:
    // 0x359fdc: 0x0  nop
    ctx->pc = 0x359fdcu;
    // NOP
label_359fe0:
    // 0x359fe0: 0x0  nop
    ctx->pc = 0x359fe0u;
    // NOP
label_359fe4:
    // 0x359fe4: 0x0  nop
    ctx->pc = 0x359fe4u;
    // NOP
label_359fe8:
    // 0x359fe8: 0x0  nop
    ctx->pc = 0x359fe8u;
    // NOP
label_359fec:
    // 0x359fec: 0x0  nop
    ctx->pc = 0x359fecu;
    // NOP
label_359ff0:
    // 0x359ff0: 0x0  nop
    ctx->pc = 0x359ff0u;
    // NOP
label_359ff4:
    // 0x359ff4: 0x0  nop
    ctx->pc = 0x359ff4u;
    // NOP
label_359ff8:
    // 0x359ff8: 0x0  nop
    ctx->pc = 0x359ff8u;
    // NOP
label_359ffc:
    // 0x359ffc: 0x0  nop
    ctx->pc = 0x359ffcu;
    // NOP
label_35a000:
    // 0x35a000: 0x0  nop
    ctx->pc = 0x35a000u;
    // NOP
label_35a004:
    // 0x35a004: 0x0  nop
    ctx->pc = 0x35a004u;
    // NOP
label_35a008:
    // 0x35a008: 0x0  nop
    ctx->pc = 0x35a008u;
    // NOP
label_35a00c:
    // 0x35a00c: 0x0  nop
    ctx->pc = 0x35a00cu;
    // NOP
label_35a010:
    // 0x35a010: 0x0  nop
    ctx->pc = 0x35a010u;
    // NOP
label_35a014:
    // 0x35a014: 0x0  nop
    ctx->pc = 0x35a014u;
    // NOP
label_35a018:
    // 0x35a018: 0x0  nop
    ctx->pc = 0x35a018u;
    // NOP
label_35a01c:
    // 0x35a01c: 0x0  nop
    ctx->pc = 0x35a01cu;
    // NOP
label_35a020:
    // 0x35a020: 0x0  nop
    ctx->pc = 0x35a020u;
    // NOP
label_35a024:
    // 0x35a024: 0x0  nop
    ctx->pc = 0x35a024u;
    // NOP
label_35a028:
    // 0x35a028: 0x0  nop
    ctx->pc = 0x35a028u;
    // NOP
label_35a02c:
    // 0x35a02c: 0x0  nop
    ctx->pc = 0x35a02cu;
    // NOP
label_35a030:
    // 0x35a030: 0x0  nop
    ctx->pc = 0x35a030u;
    // NOP
label_35a034:
    // 0x35a034: 0x0  nop
    ctx->pc = 0x35a034u;
    // NOP
label_35a038:
    // 0x35a038: 0x0  nop
    ctx->pc = 0x35a038u;
    // NOP
label_35a03c:
    // 0x35a03c: 0x0  nop
    ctx->pc = 0x35a03cu;
    // NOP
label_35a040:
    // 0x35a040: 0x0  nop
    ctx->pc = 0x35a040u;
    // NOP
label_35a044:
    // 0x35a044: 0x0  nop
    ctx->pc = 0x35a044u;
    // NOP
label_35a048:
    // 0x35a048: 0x0  nop
    ctx->pc = 0x35a048u;
    // NOP
label_35a04c:
    // 0x35a04c: 0x0  nop
    ctx->pc = 0x35a04cu;
    // NOP
label_35a050:
    // 0x35a050: 0x0  nop
    ctx->pc = 0x35a050u;
    // NOP
label_35a054:
    // 0x35a054: 0x0  nop
    ctx->pc = 0x35a054u;
    // NOP
label_35a058:
    // 0x35a058: 0x0  nop
    ctx->pc = 0x35a058u;
    // NOP
label_35a05c:
    // 0x35a05c: 0x0  nop
    ctx->pc = 0x35a05cu;
    // NOP
label_35a060:
    // 0x35a060: 0x0  nop
    ctx->pc = 0x35a060u;
    // NOP
label_35a064:
    // 0x35a064: 0x0  nop
    ctx->pc = 0x35a064u;
    // NOP
label_35a068:
    // 0x35a068: 0x0  nop
    ctx->pc = 0x35a068u;
    // NOP
label_35a06c:
    // 0x35a06c: 0x0  nop
    ctx->pc = 0x35a06cu;
    // NOP
label_35a070:
    // 0x35a070: 0x0  nop
    ctx->pc = 0x35a070u;
    // NOP
label_35a074:
    // 0x35a074: 0x0  nop
    ctx->pc = 0x35a074u;
    // NOP
label_35a078:
    // 0x35a078: 0x0  nop
    ctx->pc = 0x35a078u;
    // NOP
label_35a07c:
    // 0x35a07c: 0x0  nop
    ctx->pc = 0x35a07cu;
    // NOP
label_35a080:
    // 0x35a080: 0x0  nop
    ctx->pc = 0x35a080u;
    // NOP
label_35a084:
    // 0x35a084: 0x0  nop
    ctx->pc = 0x35a084u;
    // NOP
label_35a088:
    // 0x35a088: 0x0  nop
    ctx->pc = 0x35a088u;
    // NOP
label_35a08c:
    // 0x35a08c: 0x0  nop
    ctx->pc = 0x35a08cu;
    // NOP
label_35a090:
    // 0x35a090: 0x0  nop
    ctx->pc = 0x35a090u;
    // NOP
label_35a094:
    // 0x35a094: 0x0  nop
    ctx->pc = 0x35a094u;
    // NOP
label_35a098:
    // 0x35a098: 0x0  nop
    ctx->pc = 0x35a098u;
    // NOP
label_35a09c:
    // 0x35a09c: 0x0  nop
    ctx->pc = 0x35a09cu;
    // NOP
label_35a0a0:
    // 0x35a0a0: 0x0  nop
    ctx->pc = 0x35a0a0u;
    // NOP
label_35a0a4:
    // 0x35a0a4: 0x0  nop
    ctx->pc = 0x35a0a4u;
    // NOP
label_35a0a8:
    // 0x35a0a8: 0x0  nop
    ctx->pc = 0x35a0a8u;
    // NOP
label_35a0ac:
    // 0x35a0ac: 0x0  nop
    ctx->pc = 0x35a0acu;
    // NOP
label_35a0b0:
    // 0x35a0b0: 0x0  nop
    ctx->pc = 0x35a0b0u;
    // NOP
label_35a0b4:
    // 0x35a0b4: 0x0  nop
    ctx->pc = 0x35a0b4u;
    // NOP
label_35a0b8:
    // 0x35a0b8: 0x0  nop
    ctx->pc = 0x35a0b8u;
    // NOP
label_35a0bc:
    // 0x35a0bc: 0x0  nop
    ctx->pc = 0x35a0bcu;
    // NOP
label_35a0c0:
    // 0x35a0c0: 0x0  nop
    ctx->pc = 0x35a0c0u;
    // NOP
label_35a0c4:
    // 0x35a0c4: 0x0  nop
    ctx->pc = 0x35a0c4u;
    // NOP
label_35a0c8:
    // 0x35a0c8: 0x0  nop
    ctx->pc = 0x35a0c8u;
    // NOP
label_35a0cc:
    // 0x35a0cc: 0x0  nop
    ctx->pc = 0x35a0ccu;
    // NOP
label_35a0d0:
    // 0x35a0d0: 0x0  nop
    ctx->pc = 0x35a0d0u;
    // NOP
label_35a0d4:
    // 0x35a0d4: 0x0  nop
    ctx->pc = 0x35a0d4u;
    // NOP
label_35a0d8:
    // 0x35a0d8: 0x0  nop
    ctx->pc = 0x35a0d8u;
    // NOP
label_35a0dc:
    // 0x35a0dc: 0x0  nop
    ctx->pc = 0x35a0dcu;
    // NOP
label_35a0e0:
    // 0x35a0e0: 0x0  nop
    ctx->pc = 0x35a0e0u;
    // NOP
label_35a0e4:
    // 0x35a0e4: 0x0  nop
    ctx->pc = 0x35a0e4u;
    // NOP
label_35a0e8:
    // 0x35a0e8: 0x0  nop
    ctx->pc = 0x35a0e8u;
    // NOP
label_35a0ec:
    // 0x35a0ec: 0x0  nop
    ctx->pc = 0x35a0ecu;
    // NOP
label_35a0f0:
    // 0x35a0f0: 0x0  nop
    ctx->pc = 0x35a0f0u;
    // NOP
label_35a0f4:
    // 0x35a0f4: 0x0  nop
    ctx->pc = 0x35a0f4u;
    // NOP
label_35a0f8:
    // 0x35a0f8: 0x0  nop
    ctx->pc = 0x35a0f8u;
    // NOP
label_35a0fc:
    // 0x35a0fc: 0x0  nop
    ctx->pc = 0x35a0fcu;
    // NOP
label_35a100:
    // 0x35a100: 0x0  nop
    ctx->pc = 0x35a100u;
    // NOP
label_35a104:
    // 0x35a104: 0x0  nop
    ctx->pc = 0x35a104u;
    // NOP
label_35a108:
    // 0x35a108: 0x0  nop
    ctx->pc = 0x35a108u;
    // NOP
label_35a10c:
    // 0x35a10c: 0x0  nop
    ctx->pc = 0x35a10cu;
    // NOP
label_35a110:
    // 0x35a110: 0x0  nop
    ctx->pc = 0x35a110u;
    // NOP
label_35a114:
    // 0x35a114: 0x0  nop
    ctx->pc = 0x35a114u;
    // NOP
label_35a118:
    // 0x35a118: 0x0  nop
    ctx->pc = 0x35a118u;
    // NOP
label_35a11c:
    // 0x35a11c: 0x0  nop
    ctx->pc = 0x35a11cu;
    // NOP
label_35a120:
    // 0x35a120: 0x0  nop
    ctx->pc = 0x35a120u;
    // NOP
label_35a124:
    // 0x35a124: 0x0  nop
    ctx->pc = 0x35a124u;
    // NOP
label_35a128:
    // 0x35a128: 0x0  nop
    ctx->pc = 0x35a128u;
    // NOP
label_35a12c:
    // 0x35a12c: 0x0  nop
    ctx->pc = 0x35a12cu;
    // NOP
label_35a130:
    // 0x35a130: 0x0  nop
    ctx->pc = 0x35a130u;
    // NOP
label_35a134:
    // 0x35a134: 0x0  nop
    ctx->pc = 0x35a134u;
    // NOP
label_35a138:
    // 0x35a138: 0x0  nop
    ctx->pc = 0x35a138u;
    // NOP
label_35a13c:
    // 0x35a13c: 0x0  nop
    ctx->pc = 0x35a13cu;
    // NOP
label_35a140:
    // 0x35a140: 0x0  nop
    ctx->pc = 0x35a140u;
    // NOP
label_35a144:
    // 0x35a144: 0x0  nop
    ctx->pc = 0x35a144u;
    // NOP
label_35a148:
    // 0x35a148: 0x0  nop
    ctx->pc = 0x35a148u;
    // NOP
label_35a14c:
    // 0x35a14c: 0x0  nop
    ctx->pc = 0x35a14cu;
    // NOP
label_35a150:
    // 0x35a150: 0x0  nop
    ctx->pc = 0x35a150u;
    // NOP
label_35a154:
    // 0x35a154: 0x0  nop
    ctx->pc = 0x35a154u;
    // NOP
label_35a158:
    // 0x35a158: 0x0  nop
    ctx->pc = 0x35a158u;
    // NOP
label_35a15c:
    // 0x35a15c: 0x0  nop
    ctx->pc = 0x35a15cu;
    // NOP
label_35a160:
    // 0x35a160: 0x0  nop
    ctx->pc = 0x35a160u;
    // NOP
label_35a164:
    // 0x35a164: 0x0  nop
    ctx->pc = 0x35a164u;
    // NOP
label_35a168:
    // 0x35a168: 0x0  nop
    ctx->pc = 0x35a168u;
    // NOP
label_35a16c:
    // 0x35a16c: 0x0  nop
    ctx->pc = 0x35a16cu;
    // NOP
label_35a170:
    // 0x35a170: 0x0  nop
    ctx->pc = 0x35a170u;
    // NOP
label_35a174:
    // 0x35a174: 0x0  nop
    ctx->pc = 0x35a174u;
    // NOP
label_35a178:
    // 0x35a178: 0x0  nop
    ctx->pc = 0x35a178u;
    // NOP
label_35a17c:
    // 0x35a17c: 0x0  nop
    ctx->pc = 0x35a17cu;
    // NOP
label_35a180:
    // 0x35a180: 0x0  nop
    ctx->pc = 0x35a180u;
    // NOP
label_35a184:
    // 0x35a184: 0x0  nop
    ctx->pc = 0x35a184u;
    // NOP
label_35a188:
    // 0x35a188: 0x0  nop
    ctx->pc = 0x35a188u;
    // NOP
label_35a18c:
    // 0x35a18c: 0x0  nop
    ctx->pc = 0x35a18cu;
    // NOP
label_35a190:
    // 0x35a190: 0x0  nop
    ctx->pc = 0x35a190u;
    // NOP
label_35a194:
    // 0x35a194: 0x0  nop
    ctx->pc = 0x35a194u;
    // NOP
label_35a198:
    // 0x35a198: 0x0  nop
    ctx->pc = 0x35a198u;
    // NOP
label_35a19c:
    // 0x35a19c: 0x0  nop
    ctx->pc = 0x35a19cu;
    // NOP
label_35a1a0:
    // 0x35a1a0: 0x0  nop
    ctx->pc = 0x35a1a0u;
    // NOP
label_35a1a4:
    // 0x35a1a4: 0x0  nop
    ctx->pc = 0x35a1a4u;
    // NOP
label_35a1a8:
    // 0x35a1a8: 0x0  nop
    ctx->pc = 0x35a1a8u;
    // NOP
label_35a1ac:
    // 0x35a1ac: 0x0  nop
    ctx->pc = 0x35a1acu;
    // NOP
label_35a1b0:
    // 0x35a1b0: 0x0  nop
    ctx->pc = 0x35a1b0u;
    // NOP
label_35a1b4:
    // 0x35a1b4: 0x0  nop
    ctx->pc = 0x35a1b4u;
    // NOP
label_35a1b8:
    // 0x35a1b8: 0x0  nop
    ctx->pc = 0x35a1b8u;
    // NOP
label_35a1bc:
    // 0x35a1bc: 0x0  nop
    ctx->pc = 0x35a1bcu;
    // NOP
label_35a1c0:
    // 0x35a1c0: 0x0  nop
    ctx->pc = 0x35a1c0u;
    // NOP
label_35a1c4:
    // 0x35a1c4: 0x0  nop
    ctx->pc = 0x35a1c4u;
    // NOP
label_35a1c8:
    // 0x35a1c8: 0x0  nop
    ctx->pc = 0x35a1c8u;
    // NOP
label_35a1cc:
    // 0x35a1cc: 0x0  nop
    ctx->pc = 0x35a1ccu;
    // NOP
label_35a1d0:
    // 0x35a1d0: 0x0  nop
    ctx->pc = 0x35a1d0u;
    // NOP
label_35a1d4:
    // 0x35a1d4: 0x0  nop
    ctx->pc = 0x35a1d4u;
    // NOP
label_35a1d8:
    // 0x35a1d8: 0x0  nop
    ctx->pc = 0x35a1d8u;
    // NOP
label_35a1dc:
    // 0x35a1dc: 0x0  nop
    ctx->pc = 0x35a1dcu;
    // NOP
label_35a1e0:
    // 0x35a1e0: 0x0  nop
    ctx->pc = 0x35a1e0u;
    // NOP
label_35a1e4:
    // 0x35a1e4: 0x0  nop
    ctx->pc = 0x35a1e4u;
    // NOP
label_35a1e8:
    // 0x35a1e8: 0x0  nop
    ctx->pc = 0x35a1e8u;
    // NOP
label_35a1ec:
    // 0x35a1ec: 0x0  nop
    ctx->pc = 0x35a1ecu;
    // NOP
label_35a1f0:
    // 0x35a1f0: 0x0  nop
    ctx->pc = 0x35a1f0u;
    // NOP
label_35a1f4:
    // 0x35a1f4: 0x0  nop
    ctx->pc = 0x35a1f4u;
    // NOP
label_35a1f8:
    // 0x35a1f8: 0x0  nop
    ctx->pc = 0x35a1f8u;
    // NOP
label_35a1fc:
    // 0x35a1fc: 0x0  nop
    ctx->pc = 0x35a1fcu;
    // NOP
label_35a200:
    // 0x35a200: 0x0  nop
    ctx->pc = 0x35a200u;
    // NOP
label_35a204:
    // 0x35a204: 0x0  nop
    ctx->pc = 0x35a204u;
    // NOP
label_35a208:
    // 0x35a208: 0x0  nop
    ctx->pc = 0x35a208u;
    // NOP
label_35a20c:
    // 0x35a20c: 0x0  nop
    ctx->pc = 0x35a20cu;
    // NOP
label_35a210:
    // 0x35a210: 0x0  nop
    ctx->pc = 0x35a210u;
    // NOP
label_35a214:
    // 0x35a214: 0x0  nop
    ctx->pc = 0x35a214u;
    // NOP
label_35a218:
    // 0x35a218: 0x0  nop
    ctx->pc = 0x35a218u;
    // NOP
label_35a21c:
    // 0x35a21c: 0x0  nop
    ctx->pc = 0x35a21cu;
    // NOP
label_35a220:
    // 0x35a220: 0x0  nop
    ctx->pc = 0x35a220u;
    // NOP
label_35a224:
    // 0x35a224: 0x0  nop
    ctx->pc = 0x35a224u;
    // NOP
label_35a228:
    // 0x35a228: 0x0  nop
    ctx->pc = 0x35a228u;
    // NOP
label_35a22c:
    // 0x35a22c: 0x0  nop
    ctx->pc = 0x35a22cu;
    // NOP
label_35a230:
    // 0x35a230: 0x0  nop
    ctx->pc = 0x35a230u;
    // NOP
label_35a234:
    // 0x35a234: 0x0  nop
    ctx->pc = 0x35a234u;
    // NOP
label_35a238:
    // 0x35a238: 0x0  nop
    ctx->pc = 0x35a238u;
    // NOP
label_35a23c:
    // 0x35a23c: 0x0  nop
    ctx->pc = 0x35a23cu;
    // NOP
label_35a240:
    // 0x35a240: 0x0  nop
    ctx->pc = 0x35a240u;
    // NOP
label_35a244:
    // 0x35a244: 0x0  nop
    ctx->pc = 0x35a244u;
    // NOP
label_35a248:
    // 0x35a248: 0x0  nop
    ctx->pc = 0x35a248u;
    // NOP
label_35a24c:
    // 0x35a24c: 0x0  nop
    ctx->pc = 0x35a24cu;
    // NOP
label_35a250:
    // 0x35a250: 0x0  nop
    ctx->pc = 0x35a250u;
    // NOP
label_35a254:
    // 0x35a254: 0x0  nop
    ctx->pc = 0x35a254u;
    // NOP
label_35a258:
    // 0x35a258: 0x0  nop
    ctx->pc = 0x35a258u;
    // NOP
label_35a25c:
    // 0x35a25c: 0x0  nop
    ctx->pc = 0x35a25cu;
    // NOP
label_35a260:
    // 0x35a260: 0x0  nop
    ctx->pc = 0x35a260u;
    // NOP
label_35a264:
    // 0x35a264: 0x0  nop
    ctx->pc = 0x35a264u;
    // NOP
label_35a268:
    // 0x35a268: 0x0  nop
    ctx->pc = 0x35a268u;
    // NOP
label_35a26c:
    // 0x35a26c: 0x0  nop
    ctx->pc = 0x35a26cu;
    // NOP
label_35a270:
    // 0x35a270: 0x0  nop
    ctx->pc = 0x35a270u;
    // NOP
label_35a274:
    // 0x35a274: 0x0  nop
    ctx->pc = 0x35a274u;
    // NOP
label_35a278:
    // 0x35a278: 0x0  nop
    ctx->pc = 0x35a278u;
    // NOP
label_35a27c:
    // 0x35a27c: 0x0  nop
    ctx->pc = 0x35a27cu;
    // NOP
label_35a280:
    // 0x35a280: 0x0  nop
    ctx->pc = 0x35a280u;
    // NOP
label_35a284:
    // 0x35a284: 0x0  nop
    ctx->pc = 0x35a284u;
    // NOP
label_35a288:
    // 0x35a288: 0x0  nop
    ctx->pc = 0x35a288u;
    // NOP
label_35a28c:
    // 0x35a28c: 0x0  nop
    ctx->pc = 0x35a28cu;
    // NOP
label_35a290:
    // 0x35a290: 0x0  nop
    ctx->pc = 0x35a290u;
    // NOP
label_35a294:
    // 0x35a294: 0x0  nop
    ctx->pc = 0x35a294u;
    // NOP
label_35a298:
    // 0x35a298: 0x0  nop
    ctx->pc = 0x35a298u;
    // NOP
label_35a29c:
    // 0x35a29c: 0x0  nop
    ctx->pc = 0x35a29cu;
    // NOP
label_35a2a0:
    // 0x35a2a0: 0x0  nop
    ctx->pc = 0x35a2a0u;
    // NOP
label_35a2a4:
    // 0x35a2a4: 0x0  nop
    ctx->pc = 0x35a2a4u;
    // NOP
label_35a2a8:
    // 0x35a2a8: 0x0  nop
    ctx->pc = 0x35a2a8u;
    // NOP
label_35a2ac:
    // 0x35a2ac: 0x0  nop
    ctx->pc = 0x35a2acu;
    // NOP
label_35a2b0:
    // 0x35a2b0: 0x0  nop
    ctx->pc = 0x35a2b0u;
    // NOP
label_35a2b4:
    // 0x35a2b4: 0x0  nop
    ctx->pc = 0x35a2b4u;
    // NOP
label_35a2b8:
    // 0x35a2b8: 0x0  nop
    ctx->pc = 0x35a2b8u;
    // NOP
label_35a2bc:
    // 0x35a2bc: 0x0  nop
    ctx->pc = 0x35a2bcu;
    // NOP
label_35a2c0:
    // 0x35a2c0: 0x0  nop
    ctx->pc = 0x35a2c0u;
    // NOP
label_35a2c4:
    // 0x35a2c4: 0x0  nop
    ctx->pc = 0x35a2c4u;
    // NOP
label_35a2c8:
    // 0x35a2c8: 0x0  nop
    ctx->pc = 0x35a2c8u;
    // NOP
label_35a2cc:
    // 0x35a2cc: 0x0  nop
    ctx->pc = 0x35a2ccu;
    // NOP
label_35a2d0:
    // 0x35a2d0: 0x0  nop
    ctx->pc = 0x35a2d0u;
    // NOP
label_35a2d4:
    // 0x35a2d4: 0x0  nop
    ctx->pc = 0x35a2d4u;
    // NOP
label_35a2d8:
    // 0x35a2d8: 0x0  nop
    ctx->pc = 0x35a2d8u;
    // NOP
label_35a2dc:
    // 0x35a2dc: 0x0  nop
    ctx->pc = 0x35a2dcu;
    // NOP
label_35a2e0:
    // 0x35a2e0: 0x0  nop
    ctx->pc = 0x35a2e0u;
    // NOP
label_35a2e4:
    // 0x35a2e4: 0x0  nop
    ctx->pc = 0x35a2e4u;
    // NOP
label_35a2e8:
    // 0x35a2e8: 0x0  nop
    ctx->pc = 0x35a2e8u;
    // NOP
label_35a2ec:
    // 0x35a2ec: 0x0  nop
    ctx->pc = 0x35a2ecu;
    // NOP
label_35a2f0:
    // 0x35a2f0: 0x0  nop
    ctx->pc = 0x35a2f0u;
    // NOP
label_35a2f4:
    // 0x35a2f4: 0x0  nop
    ctx->pc = 0x35a2f4u;
    // NOP
label_35a2f8:
    // 0x35a2f8: 0x0  nop
    ctx->pc = 0x35a2f8u;
    // NOP
label_35a2fc:
    // 0x35a2fc: 0x0  nop
    ctx->pc = 0x35a2fcu;
    // NOP
label_35a300:
    // 0x35a300: 0x0  nop
    ctx->pc = 0x35a300u;
    // NOP
label_35a304:
    // 0x35a304: 0x0  nop
    ctx->pc = 0x35a304u;
    // NOP
label_35a308:
    // 0x35a308: 0x0  nop
    ctx->pc = 0x35a308u;
    // NOP
label_35a30c:
    // 0x35a30c: 0x0  nop
    ctx->pc = 0x35a30cu;
    // NOP
label_35a310:
    // 0x35a310: 0x0  nop
    ctx->pc = 0x35a310u;
    // NOP
label_35a314:
    // 0x35a314: 0x0  nop
    ctx->pc = 0x35a314u;
    // NOP
label_35a318:
    // 0x35a318: 0x0  nop
    ctx->pc = 0x35a318u;
    // NOP
label_35a31c:
    // 0x35a31c: 0x0  nop
    ctx->pc = 0x35a31cu;
    // NOP
label_35a320:
    // 0x35a320: 0x0  nop
    ctx->pc = 0x35a320u;
    // NOP
label_35a324:
    // 0x35a324: 0x0  nop
    ctx->pc = 0x35a324u;
    // NOP
label_35a328:
    // 0x35a328: 0x0  nop
    ctx->pc = 0x35a328u;
    // NOP
label_35a32c:
    // 0x35a32c: 0x0  nop
    ctx->pc = 0x35a32cu;
    // NOP
label_35a330:
    // 0x35a330: 0x0  nop
    ctx->pc = 0x35a330u;
    // NOP
label_35a334:
    // 0x35a334: 0x0  nop
    ctx->pc = 0x35a334u;
    // NOP
label_35a338:
    // 0x35a338: 0x0  nop
    ctx->pc = 0x35a338u;
    // NOP
label_35a33c:
    // 0x35a33c: 0x0  nop
    ctx->pc = 0x35a33cu;
    // NOP
label_35a340:
    // 0x35a340: 0x0  nop
    ctx->pc = 0x35a340u;
    // NOP
label_35a344:
    // 0x35a344: 0x0  nop
    ctx->pc = 0x35a344u;
    // NOP
label_35a348:
    // 0x35a348: 0x0  nop
    ctx->pc = 0x35a348u;
    // NOP
label_35a34c:
    // 0x35a34c: 0x0  nop
    ctx->pc = 0x35a34cu;
    // NOP
label_35a350:
    // 0x35a350: 0x0  nop
    ctx->pc = 0x35a350u;
    // NOP
label_35a354:
    // 0x35a354: 0x0  nop
    ctx->pc = 0x35a354u;
    // NOP
label_35a358:
    // 0x35a358: 0x0  nop
    ctx->pc = 0x35a358u;
    // NOP
label_35a35c:
    // 0x35a35c: 0x0  nop
    ctx->pc = 0x35a35cu;
    // NOP
label_35a360:
    // 0x35a360: 0x0  nop
    ctx->pc = 0x35a360u;
    // NOP
label_35a364:
    // 0x35a364: 0x0  nop
    ctx->pc = 0x35a364u;
    // NOP
label_35a368:
    // 0x35a368: 0x0  nop
    ctx->pc = 0x35a368u;
    // NOP
label_35a36c:
    // 0x35a36c: 0x0  nop
    ctx->pc = 0x35a36cu;
    // NOP
label_35a370:
    // 0x35a370: 0x0  nop
    ctx->pc = 0x35a370u;
    // NOP
label_35a374:
    // 0x35a374: 0x0  nop
    ctx->pc = 0x35a374u;
    // NOP
label_35a378:
    // 0x35a378: 0x0  nop
    ctx->pc = 0x35a378u;
    // NOP
label_35a37c:
    // 0x35a37c: 0x0  nop
    ctx->pc = 0x35a37cu;
    // NOP
label_35a380:
    // 0x35a380: 0x0  nop
    ctx->pc = 0x35a380u;
    // NOP
label_35a384:
    // 0x35a384: 0x0  nop
    ctx->pc = 0x35a384u;
    // NOP
label_35a388:
    // 0x35a388: 0x0  nop
    ctx->pc = 0x35a388u;
    // NOP
label_35a38c:
    // 0x35a38c: 0x0  nop
    ctx->pc = 0x35a38cu;
    // NOP
label_35a390:
    // 0x35a390: 0x0  nop
    ctx->pc = 0x35a390u;
    // NOP
label_35a394:
    // 0x35a394: 0x0  nop
    ctx->pc = 0x35a394u;
    // NOP
label_35a398:
    // 0x35a398: 0x0  nop
    ctx->pc = 0x35a398u;
    // NOP
label_35a39c:
    // 0x35a39c: 0x0  nop
    ctx->pc = 0x35a39cu;
    // NOP
label_35a3a0:
    // 0x35a3a0: 0x0  nop
    ctx->pc = 0x35a3a0u;
    // NOP
label_35a3a4:
    // 0x35a3a4: 0x0  nop
    ctx->pc = 0x35a3a4u;
    // NOP
label_35a3a8:
    // 0x35a3a8: 0x0  nop
    ctx->pc = 0x35a3a8u;
    // NOP
label_35a3ac:
    // 0x35a3ac: 0x0  nop
    ctx->pc = 0x35a3acu;
    // NOP
label_35a3b0:
    // 0x35a3b0: 0x0  nop
    ctx->pc = 0x35a3b0u;
    // NOP
label_35a3b4:
    // 0x35a3b4: 0x0  nop
    ctx->pc = 0x35a3b4u;
    // NOP
label_35a3b8:
    // 0x35a3b8: 0x0  nop
    ctx->pc = 0x35a3b8u;
    // NOP
label_35a3bc:
    // 0x35a3bc: 0x0  nop
    ctx->pc = 0x35a3bcu;
    // NOP
label_35a3c0:
    // 0x35a3c0: 0x0  nop
    ctx->pc = 0x35a3c0u;
    // NOP
label_35a3c4:
    // 0x35a3c4: 0x0  nop
    ctx->pc = 0x35a3c4u;
    // NOP
label_35a3c8:
    // 0x35a3c8: 0x0  nop
    ctx->pc = 0x35a3c8u;
    // NOP
label_35a3cc:
    // 0x35a3cc: 0x0  nop
    ctx->pc = 0x35a3ccu;
    // NOP
label_35a3d0:
    // 0x35a3d0: 0x0  nop
    ctx->pc = 0x35a3d0u;
    // NOP
label_35a3d4:
    // 0x35a3d4: 0x0  nop
    ctx->pc = 0x35a3d4u;
    // NOP
label_35a3d8:
    // 0x35a3d8: 0x0  nop
    ctx->pc = 0x35a3d8u;
    // NOP
label_35a3dc:
    // 0x35a3dc: 0x0  nop
    ctx->pc = 0x35a3dcu;
    // NOP
label_35a3e0:
    // 0x35a3e0: 0x0  nop
    ctx->pc = 0x35a3e0u;
    // NOP
label_35a3e4:
    // 0x35a3e4: 0x0  nop
    ctx->pc = 0x35a3e4u;
    // NOP
label_35a3e8:
    // 0x35a3e8: 0x0  nop
    ctx->pc = 0x35a3e8u;
    // NOP
label_35a3ec:
    // 0x35a3ec: 0x0  nop
    ctx->pc = 0x35a3ecu;
    // NOP
label_35a3f0:
    // 0x35a3f0: 0x0  nop
    ctx->pc = 0x35a3f0u;
    // NOP
label_35a3f4:
    // 0x35a3f4: 0x0  nop
    ctx->pc = 0x35a3f4u;
    // NOP
label_35a3f8:
    // 0x35a3f8: 0x0  nop
    ctx->pc = 0x35a3f8u;
    // NOP
label_35a3fc:
    // 0x35a3fc: 0x0  nop
    ctx->pc = 0x35a3fcu;
    // NOP
label_35a400:
    // 0x35a400: 0x0  nop
    ctx->pc = 0x35a400u;
    // NOP
label_35a404:
    // 0x35a404: 0x0  nop
    ctx->pc = 0x35a404u;
    // NOP
label_35a408:
    // 0x35a408: 0x0  nop
    ctx->pc = 0x35a408u;
    // NOP
label_35a40c:
    // 0x35a40c: 0x0  nop
    ctx->pc = 0x35a40cu;
    // NOP
label_35a410:
    // 0x35a410: 0x0  nop
    ctx->pc = 0x35a410u;
    // NOP
label_35a414:
    // 0x35a414: 0x0  nop
    ctx->pc = 0x35a414u;
    // NOP
label_35a418:
    // 0x35a418: 0x0  nop
    ctx->pc = 0x35a418u;
    // NOP
label_35a41c:
    // 0x35a41c: 0x0  nop
    ctx->pc = 0x35a41cu;
    // NOP
label_35a420:
    // 0x35a420: 0x0  nop
    ctx->pc = 0x35a420u;
    // NOP
label_35a424:
    // 0x35a424: 0x0  nop
    ctx->pc = 0x35a424u;
    // NOP
label_35a428:
    // 0x35a428: 0x0  nop
    ctx->pc = 0x35a428u;
    // NOP
label_35a42c:
    // 0x35a42c: 0x0  nop
    ctx->pc = 0x35a42cu;
    // NOP
label_35a430:
    // 0x35a430: 0x0  nop
    ctx->pc = 0x35a430u;
    // NOP
label_35a434:
    // 0x35a434: 0x0  nop
    ctx->pc = 0x35a434u;
    // NOP
label_35a438:
    // 0x35a438: 0x0  nop
    ctx->pc = 0x35a438u;
    // NOP
label_35a43c:
    // 0x35a43c: 0x0  nop
    ctx->pc = 0x35a43cu;
    // NOP
label_35a440:
    // 0x35a440: 0x0  nop
    ctx->pc = 0x35a440u;
    // NOP
label_35a444:
    // 0x35a444: 0x0  nop
    ctx->pc = 0x35a444u;
    // NOP
label_35a448:
    // 0x35a448: 0x0  nop
    ctx->pc = 0x35a448u;
    // NOP
label_35a44c:
    // 0x35a44c: 0x0  nop
    ctx->pc = 0x35a44cu;
    // NOP
label_35a450:
    // 0x35a450: 0x0  nop
    ctx->pc = 0x35a450u;
    // NOP
label_35a454:
    // 0x35a454: 0x0  nop
    ctx->pc = 0x35a454u;
    // NOP
label_35a458:
    // 0x35a458: 0x0  nop
    ctx->pc = 0x35a458u;
    // NOP
label_35a45c:
    // 0x35a45c: 0x0  nop
    ctx->pc = 0x35a45cu;
    // NOP
label_35a460:
    // 0x35a460: 0x0  nop
    ctx->pc = 0x35a460u;
    // NOP
label_35a464:
    // 0x35a464: 0x0  nop
    ctx->pc = 0x35a464u;
    // NOP
label_35a468:
    // 0x35a468: 0x0  nop
    ctx->pc = 0x35a468u;
    // NOP
label_35a46c:
    // 0x35a46c: 0x0  nop
    ctx->pc = 0x35a46cu;
    // NOP
label_35a470:
    // 0x35a470: 0x0  nop
    ctx->pc = 0x35a470u;
    // NOP
label_35a474:
    // 0x35a474: 0x0  nop
    ctx->pc = 0x35a474u;
    // NOP
label_35a478:
    // 0x35a478: 0x0  nop
    ctx->pc = 0x35a478u;
    // NOP
label_35a47c:
    // 0x35a47c: 0x0  nop
    ctx->pc = 0x35a47cu;
    // NOP
label_35a480:
    // 0x35a480: 0x0  nop
    ctx->pc = 0x35a480u;
    // NOP
label_35a484:
    // 0x35a484: 0x0  nop
    ctx->pc = 0x35a484u;
    // NOP
label_35a488:
    // 0x35a488: 0x0  nop
    ctx->pc = 0x35a488u;
    // NOP
label_35a48c:
    // 0x35a48c: 0x0  nop
    ctx->pc = 0x35a48cu;
    // NOP
label_35a490:
    // 0x35a490: 0x0  nop
    ctx->pc = 0x35a490u;
    // NOP
label_35a494:
    // 0x35a494: 0x0  nop
    ctx->pc = 0x35a494u;
    // NOP
label_35a498:
    // 0x35a498: 0x0  nop
    ctx->pc = 0x35a498u;
    // NOP
label_35a49c:
    // 0x35a49c: 0x0  nop
    ctx->pc = 0x35a49cu;
    // NOP
label_35a4a0:
    // 0x35a4a0: 0x0  nop
    ctx->pc = 0x35a4a0u;
    // NOP
label_35a4a4:
    // 0x35a4a4: 0x0  nop
    ctx->pc = 0x35a4a4u;
    // NOP
label_35a4a8:
    // 0x35a4a8: 0x0  nop
    ctx->pc = 0x35a4a8u;
    // NOP
label_35a4ac:
    // 0x35a4ac: 0x0  nop
    ctx->pc = 0x35a4acu;
    // NOP
label_35a4b0:
    // 0x35a4b0: 0x0  nop
    ctx->pc = 0x35a4b0u;
    // NOP
label_35a4b4:
    // 0x35a4b4: 0x0  nop
    ctx->pc = 0x35a4b4u;
    // NOP
label_35a4b8:
    // 0x35a4b8: 0x0  nop
    ctx->pc = 0x35a4b8u;
    // NOP
label_35a4bc:
    // 0x35a4bc: 0x0  nop
    ctx->pc = 0x35a4bcu;
    // NOP
label_35a4c0:
    // 0x35a4c0: 0x0  nop
    ctx->pc = 0x35a4c0u;
    // NOP
label_35a4c4:
    // 0x35a4c4: 0x0  nop
    ctx->pc = 0x35a4c4u;
    // NOP
label_35a4c8:
    // 0x35a4c8: 0x0  nop
    ctx->pc = 0x35a4c8u;
    // NOP
label_35a4cc:
    // 0x35a4cc: 0x0  nop
    ctx->pc = 0x35a4ccu;
    // NOP
label_35a4d0:
    // 0x35a4d0: 0x0  nop
    ctx->pc = 0x35a4d0u;
    // NOP
label_35a4d4:
    // 0x35a4d4: 0x0  nop
    ctx->pc = 0x35a4d4u;
    // NOP
label_35a4d8:
    // 0x35a4d8: 0x0  nop
    ctx->pc = 0x35a4d8u;
    // NOP
label_35a4dc:
    // 0x35a4dc: 0x0  nop
    ctx->pc = 0x35a4dcu;
    // NOP
label_35a4e0:
    // 0x35a4e0: 0x0  nop
    ctx->pc = 0x35a4e0u;
    // NOP
label_35a4e4:
    // 0x35a4e4: 0x0  nop
    ctx->pc = 0x35a4e4u;
    // NOP
label_35a4e8:
    // 0x35a4e8: 0x0  nop
    ctx->pc = 0x35a4e8u;
    // NOP
label_35a4ec:
    // 0x35a4ec: 0x0  nop
    ctx->pc = 0x35a4ecu;
    // NOP
label_35a4f0:
    // 0x35a4f0: 0x0  nop
    ctx->pc = 0x35a4f0u;
    // NOP
label_35a4f4:
    // 0x35a4f4: 0x0  nop
    ctx->pc = 0x35a4f4u;
    // NOP
label_35a4f8:
    // 0x35a4f8: 0x0  nop
    ctx->pc = 0x35a4f8u;
    // NOP
label_35a4fc:
    // 0x35a4fc: 0x0  nop
    ctx->pc = 0x35a4fcu;
    // NOP
label_35a500:
    // 0x35a500: 0x0  nop
    ctx->pc = 0x35a500u;
    // NOP
label_35a504:
    // 0x35a504: 0x0  nop
    ctx->pc = 0x35a504u;
    // NOP
label_35a508:
    // 0x35a508: 0x0  nop
    ctx->pc = 0x35a508u;
    // NOP
label_35a50c:
    // 0x35a50c: 0x0  nop
    ctx->pc = 0x35a50cu;
    // NOP
label_35a510:
    // 0x35a510: 0x0  nop
    ctx->pc = 0x35a510u;
    // NOP
label_35a514:
    // 0x35a514: 0x0  nop
    ctx->pc = 0x35a514u;
    // NOP
label_35a518:
    // 0x35a518: 0x0  nop
    ctx->pc = 0x35a518u;
    // NOP
label_35a51c:
    // 0x35a51c: 0x0  nop
    ctx->pc = 0x35a51cu;
    // NOP
label_35a520:
    // 0x35a520: 0x0  nop
    ctx->pc = 0x35a520u;
    // NOP
label_35a524:
    // 0x35a524: 0x0  nop
    ctx->pc = 0x35a524u;
    // NOP
label_35a528:
    // 0x35a528: 0x0  nop
    ctx->pc = 0x35a528u;
    // NOP
label_35a52c:
    // 0x35a52c: 0x0  nop
    ctx->pc = 0x35a52cu;
    // NOP
label_35a530:
    // 0x35a530: 0x0  nop
    ctx->pc = 0x35a530u;
    // NOP
label_35a534:
    // 0x35a534: 0x0  nop
    ctx->pc = 0x35a534u;
    // NOP
label_35a538:
    // 0x35a538: 0x0  nop
    ctx->pc = 0x35a538u;
    // NOP
label_35a53c:
    // 0x35a53c: 0x0  nop
    ctx->pc = 0x35a53cu;
    // NOP
label_35a540:
    // 0x35a540: 0x0  nop
    ctx->pc = 0x35a540u;
    // NOP
label_35a544:
    // 0x35a544: 0x0  nop
    ctx->pc = 0x35a544u;
    // NOP
label_35a548:
    // 0x35a548: 0x0  nop
    ctx->pc = 0x35a548u;
    // NOP
label_35a54c:
    // 0x35a54c: 0x0  nop
    ctx->pc = 0x35a54cu;
    // NOP
label_35a550:
    // 0x35a550: 0x0  nop
    ctx->pc = 0x35a550u;
    // NOP
label_35a554:
    // 0x35a554: 0x0  nop
    ctx->pc = 0x35a554u;
    // NOP
label_35a558:
    // 0x35a558: 0x0  nop
    ctx->pc = 0x35a558u;
    // NOP
label_35a55c:
    // 0x35a55c: 0x0  nop
    ctx->pc = 0x35a55cu;
    // NOP
label_35a560:
    // 0x35a560: 0x0  nop
    ctx->pc = 0x35a560u;
    // NOP
label_35a564:
    // 0x35a564: 0x0  nop
    ctx->pc = 0x35a564u;
    // NOP
label_35a568:
    // 0x35a568: 0x0  nop
    ctx->pc = 0x35a568u;
    // NOP
label_35a56c:
    // 0x35a56c: 0x0  nop
    ctx->pc = 0x35a56cu;
    // NOP
label_35a570:
    // 0x35a570: 0x0  nop
    ctx->pc = 0x35a570u;
    // NOP
label_35a574:
    // 0x35a574: 0x0  nop
    ctx->pc = 0x35a574u;
    // NOP
label_35a578:
    // 0x35a578: 0x0  nop
    ctx->pc = 0x35a578u;
    // NOP
label_35a57c:
    // 0x35a57c: 0x0  nop
    ctx->pc = 0x35a57cu;
    // NOP
label_35a580:
    // 0x35a580: 0x0  nop
    ctx->pc = 0x35a580u;
    // NOP
label_35a584:
    // 0x35a584: 0x0  nop
    ctx->pc = 0x35a584u;
    // NOP
label_35a588:
    // 0x35a588: 0x0  nop
    ctx->pc = 0x35a588u;
    // NOP
label_35a58c:
    // 0x35a58c: 0x0  nop
    ctx->pc = 0x35a58cu;
    // NOP
label_35a590:
    // 0x35a590: 0x0  nop
    ctx->pc = 0x35a590u;
    // NOP
label_35a594:
    // 0x35a594: 0x0  nop
    ctx->pc = 0x35a594u;
    // NOP
label_35a598:
    // 0x35a598: 0x0  nop
    ctx->pc = 0x35a598u;
    // NOP
label_35a59c:
    // 0x35a59c: 0x0  nop
    ctx->pc = 0x35a59cu;
    // NOP
label_35a5a0:
    // 0x35a5a0: 0x0  nop
    ctx->pc = 0x35a5a0u;
    // NOP
label_35a5a4:
    // 0x35a5a4: 0x0  nop
    ctx->pc = 0x35a5a4u;
    // NOP
label_35a5a8:
    // 0x35a5a8: 0x0  nop
    ctx->pc = 0x35a5a8u;
    // NOP
label_35a5ac:
    // 0x35a5ac: 0x0  nop
    ctx->pc = 0x35a5acu;
    // NOP
label_35a5b0:
    // 0x35a5b0: 0x0  nop
    ctx->pc = 0x35a5b0u;
    // NOP
label_35a5b4:
    // 0x35a5b4: 0x0  nop
    ctx->pc = 0x35a5b4u;
    // NOP
label_35a5b8:
    // 0x35a5b8: 0x0  nop
    ctx->pc = 0x35a5b8u;
    // NOP
label_35a5bc:
    // 0x35a5bc: 0x0  nop
    ctx->pc = 0x35a5bcu;
    // NOP
label_35a5c0:
    // 0x35a5c0: 0x0  nop
    ctx->pc = 0x35a5c0u;
    // NOP
label_35a5c4:
    // 0x35a5c4: 0x0  nop
    ctx->pc = 0x35a5c4u;
    // NOP
label_35a5c8:
    // 0x35a5c8: 0x0  nop
    ctx->pc = 0x35a5c8u;
    // NOP
label_35a5cc:
    // 0x35a5cc: 0x0  nop
    ctx->pc = 0x35a5ccu;
    // NOP
label_35a5d0:
    // 0x35a5d0: 0x0  nop
    ctx->pc = 0x35a5d0u;
    // NOP
label_35a5d4:
    // 0x35a5d4: 0x0  nop
    ctx->pc = 0x35a5d4u;
    // NOP
label_35a5d8:
    // 0x35a5d8: 0x0  nop
    ctx->pc = 0x35a5d8u;
    // NOP
label_35a5dc:
    // 0x35a5dc: 0x0  nop
    ctx->pc = 0x35a5dcu;
    // NOP
label_35a5e0:
    // 0x35a5e0: 0x0  nop
    ctx->pc = 0x35a5e0u;
    // NOP
label_35a5e4:
    // 0x35a5e4: 0x0  nop
    ctx->pc = 0x35a5e4u;
    // NOP
label_35a5e8:
    // 0x35a5e8: 0x0  nop
    ctx->pc = 0x35a5e8u;
    // NOP
label_35a5ec:
    // 0x35a5ec: 0x0  nop
    ctx->pc = 0x35a5ecu;
    // NOP
label_35a5f0:
    // 0x35a5f0: 0x0  nop
    ctx->pc = 0x35a5f0u;
    // NOP
label_35a5f4:
    // 0x35a5f4: 0x0  nop
    ctx->pc = 0x35a5f4u;
    // NOP
label_35a5f8:
    // 0x35a5f8: 0x0  nop
    ctx->pc = 0x35a5f8u;
    // NOP
label_35a5fc:
    // 0x35a5fc: 0x0  nop
    ctx->pc = 0x35a5fcu;
    // NOP
label_35a600:
    // 0x35a600: 0x0  nop
    ctx->pc = 0x35a600u;
    // NOP
label_35a604:
    // 0x35a604: 0x0  nop
    ctx->pc = 0x35a604u;
    // NOP
label_35a608:
    // 0x35a608: 0x0  nop
    ctx->pc = 0x35a608u;
    // NOP
label_35a60c:
    // 0x35a60c: 0x0  nop
    ctx->pc = 0x35a60cu;
    // NOP
label_35a610:
    // 0x35a610: 0x0  nop
    ctx->pc = 0x35a610u;
    // NOP
label_35a614:
    // 0x35a614: 0x0  nop
    ctx->pc = 0x35a614u;
    // NOP
label_35a618:
    // 0x35a618: 0x0  nop
    ctx->pc = 0x35a618u;
    // NOP
label_35a61c:
    // 0x35a61c: 0x0  nop
    ctx->pc = 0x35a61cu;
    // NOP
label_35a620:
    // 0x35a620: 0x0  nop
    ctx->pc = 0x35a620u;
    // NOP
label_35a624:
    // 0x35a624: 0x0  nop
    ctx->pc = 0x35a624u;
    // NOP
label_35a628:
    // 0x35a628: 0x0  nop
    ctx->pc = 0x35a628u;
    // NOP
label_35a62c:
    // 0x35a62c: 0x0  nop
    ctx->pc = 0x35a62cu;
    // NOP
label_35a630:
    // 0x35a630: 0x0  nop
    ctx->pc = 0x35a630u;
    // NOP
label_35a634:
    // 0x35a634: 0x0  nop
    ctx->pc = 0x35a634u;
    // NOP
label_35a638:
    // 0x35a638: 0x0  nop
    ctx->pc = 0x35a638u;
    // NOP
label_35a63c:
    // 0x35a63c: 0x0  nop
    ctx->pc = 0x35a63cu;
    // NOP
label_35a640:
    // 0x35a640: 0x0  nop
    ctx->pc = 0x35a640u;
    // NOP
label_35a644:
    // 0x35a644: 0x0  nop
    ctx->pc = 0x35a644u;
    // NOP
label_35a648:
    // 0x35a648: 0x0  nop
    ctx->pc = 0x35a648u;
    // NOP
label_35a64c:
    // 0x35a64c: 0x0  nop
    ctx->pc = 0x35a64cu;
    // NOP
label_35a650:
    // 0x35a650: 0x0  nop
    ctx->pc = 0x35a650u;
    // NOP
label_35a654:
    // 0x35a654: 0x0  nop
    ctx->pc = 0x35a654u;
    // NOP
label_35a658:
    // 0x35a658: 0x0  nop
    ctx->pc = 0x35a658u;
    // NOP
label_35a65c:
    // 0x35a65c: 0x0  nop
    ctx->pc = 0x35a65cu;
    // NOP
label_35a660:
    // 0x35a660: 0x0  nop
    ctx->pc = 0x35a660u;
    // NOP
label_35a664:
    // 0x35a664: 0x0  nop
    ctx->pc = 0x35a664u;
    // NOP
label_35a668:
    // 0x35a668: 0x0  nop
    ctx->pc = 0x35a668u;
    // NOP
label_35a66c:
    // 0x35a66c: 0x0  nop
    ctx->pc = 0x35a66cu;
    // NOP
label_35a670:
    // 0x35a670: 0x0  nop
    ctx->pc = 0x35a670u;
    // NOP
label_35a674:
    // 0x35a674: 0x0  nop
    ctx->pc = 0x35a674u;
    // NOP
label_35a678:
    // 0x35a678: 0x0  nop
    ctx->pc = 0x35a678u;
    // NOP
label_35a67c:
    // 0x35a67c: 0x0  nop
    ctx->pc = 0x35a67cu;
    // NOP
label_35a680:
    // 0x35a680: 0x0  nop
    ctx->pc = 0x35a680u;
    // NOP
label_35a684:
    // 0x35a684: 0x0  nop
    ctx->pc = 0x35a684u;
    // NOP
label_35a688:
    // 0x35a688: 0x0  nop
    ctx->pc = 0x35a688u;
    // NOP
label_35a68c:
    // 0x35a68c: 0x0  nop
    ctx->pc = 0x35a68cu;
    // NOP
label_35a690:
    // 0x35a690: 0x0  nop
    ctx->pc = 0x35a690u;
    // NOP
label_35a694:
    // 0x35a694: 0x0  nop
    ctx->pc = 0x35a694u;
    // NOP
label_35a698:
    // 0x35a698: 0x0  nop
    ctx->pc = 0x35a698u;
    // NOP
label_35a69c:
    // 0x35a69c: 0x0  nop
    ctx->pc = 0x35a69cu;
    // NOP
label_35a6a0:
    // 0x35a6a0: 0x0  nop
    ctx->pc = 0x35a6a0u;
    // NOP
label_35a6a4:
    // 0x35a6a4: 0x0  nop
    ctx->pc = 0x35a6a4u;
    // NOP
label_35a6a8:
    // 0x35a6a8: 0x0  nop
    ctx->pc = 0x35a6a8u;
    // NOP
label_35a6ac:
    // 0x35a6ac: 0x0  nop
    ctx->pc = 0x35a6acu;
    // NOP
label_35a6b0:
    // 0x35a6b0: 0x0  nop
    ctx->pc = 0x35a6b0u;
    // NOP
label_35a6b4:
    // 0x35a6b4: 0x0  nop
    ctx->pc = 0x35a6b4u;
    // NOP
label_35a6b8:
    // 0x35a6b8: 0x0  nop
    ctx->pc = 0x35a6b8u;
    // NOP
label_35a6bc:
    // 0x35a6bc: 0x0  nop
    ctx->pc = 0x35a6bcu;
    // NOP
label_35a6c0:
    // 0x35a6c0: 0x0  nop
    ctx->pc = 0x35a6c0u;
    // NOP
label_35a6c4:
    // 0x35a6c4: 0x0  nop
    ctx->pc = 0x35a6c4u;
    // NOP
label_35a6c8:
    // 0x35a6c8: 0x0  nop
    ctx->pc = 0x35a6c8u;
    // NOP
label_35a6cc:
    // 0x35a6cc: 0x0  nop
    ctx->pc = 0x35a6ccu;
    // NOP
label_35a6d0:
    // 0x35a6d0: 0x0  nop
    ctx->pc = 0x35a6d0u;
    // NOP
label_35a6d4:
    // 0x35a6d4: 0x0  nop
    ctx->pc = 0x35a6d4u;
    // NOP
label_35a6d8:
    // 0x35a6d8: 0x0  nop
    ctx->pc = 0x35a6d8u;
    // NOP
label_35a6dc:
    // 0x35a6dc: 0x0  nop
    ctx->pc = 0x35a6dcu;
    // NOP
label_35a6e0:
    // 0x35a6e0: 0x0  nop
    ctx->pc = 0x35a6e0u;
    // NOP
label_35a6e4:
    // 0x35a6e4: 0x0  nop
    ctx->pc = 0x35a6e4u;
    // NOP
label_35a6e8:
    // 0x35a6e8: 0x0  nop
    ctx->pc = 0x35a6e8u;
    // NOP
label_35a6ec:
    // 0x35a6ec: 0x0  nop
    ctx->pc = 0x35a6ecu;
    // NOP
label_35a6f0:
    // 0x35a6f0: 0x0  nop
    ctx->pc = 0x35a6f0u;
    // NOP
label_35a6f4:
    // 0x35a6f4: 0x0  nop
    ctx->pc = 0x35a6f4u;
    // NOP
label_35a6f8:
    // 0x35a6f8: 0x0  nop
    ctx->pc = 0x35a6f8u;
    // NOP
label_35a6fc:
    // 0x35a6fc: 0x0  nop
    ctx->pc = 0x35a6fcu;
    // NOP
label_35a700:
    // 0x35a700: 0x0  nop
    ctx->pc = 0x35a700u;
    // NOP
label_35a704:
    // 0x35a704: 0x0  nop
    ctx->pc = 0x35a704u;
    // NOP
label_35a708:
    // 0x35a708: 0x0  nop
    ctx->pc = 0x35a708u;
    // NOP
label_35a70c:
    // 0x35a70c: 0x0  nop
    ctx->pc = 0x35a70cu;
    // NOP
label_35a710:
    // 0x35a710: 0x0  nop
    ctx->pc = 0x35a710u;
    // NOP
label_35a714:
    // 0x35a714: 0x0  nop
    ctx->pc = 0x35a714u;
    // NOP
label_35a718:
    // 0x35a718: 0x0  nop
    ctx->pc = 0x35a718u;
    // NOP
label_35a71c:
    // 0x35a71c: 0x0  nop
    ctx->pc = 0x35a71cu;
    // NOP
label_35a720:
    // 0x35a720: 0x0  nop
    ctx->pc = 0x35a720u;
    // NOP
label_35a724:
    // 0x35a724: 0x0  nop
    ctx->pc = 0x35a724u;
    // NOP
label_35a728:
    // 0x35a728: 0x0  nop
    ctx->pc = 0x35a728u;
    // NOP
label_35a72c:
    // 0x35a72c: 0x0  nop
    ctx->pc = 0x35a72cu;
    // NOP
label_35a730:
    // 0x35a730: 0x0  nop
    ctx->pc = 0x35a730u;
    // NOP
label_35a734:
    // 0x35a734: 0x0  nop
    ctx->pc = 0x35a734u;
    // NOP
label_35a738:
    // 0x35a738: 0x0  nop
    ctx->pc = 0x35a738u;
    // NOP
label_35a73c:
    // 0x35a73c: 0x0  nop
    ctx->pc = 0x35a73cu;
    // NOP
label_35a740:
    // 0x35a740: 0x0  nop
    ctx->pc = 0x35a740u;
    // NOP
label_35a744:
    // 0x35a744: 0x0  nop
    ctx->pc = 0x35a744u;
    // NOP
label_35a748:
    // 0x35a748: 0x0  nop
    ctx->pc = 0x35a748u;
    // NOP
label_35a74c:
    // 0x35a74c: 0x0  nop
    ctx->pc = 0x35a74cu;
    // NOP
label_35a750:
    // 0x35a750: 0x0  nop
    ctx->pc = 0x35a750u;
    // NOP
label_35a754:
    // 0x35a754: 0x0  nop
    ctx->pc = 0x35a754u;
    // NOP
label_35a758:
    // 0x35a758: 0x0  nop
    ctx->pc = 0x35a758u;
    // NOP
label_35a75c:
    // 0x35a75c: 0x0  nop
    ctx->pc = 0x35a75cu;
    // NOP
label_35a760:
    // 0x35a760: 0x0  nop
    ctx->pc = 0x35a760u;
    // NOP
label_35a764:
    // 0x35a764: 0x0  nop
    ctx->pc = 0x35a764u;
    // NOP
label_35a768:
    // 0x35a768: 0x0  nop
    ctx->pc = 0x35a768u;
    // NOP
label_35a76c:
    // 0x35a76c: 0x0  nop
    ctx->pc = 0x35a76cu;
    // NOP
label_35a770:
    // 0x35a770: 0x0  nop
    ctx->pc = 0x35a770u;
    // NOP
label_35a774:
    // 0x35a774: 0x0  nop
    ctx->pc = 0x35a774u;
    // NOP
label_35a778:
    // 0x35a778: 0x0  nop
    ctx->pc = 0x35a778u;
    // NOP
label_35a77c:
    // 0x35a77c: 0x0  nop
    ctx->pc = 0x35a77cu;
    // NOP
label_35a780:
    // 0x35a780: 0x0  nop
    ctx->pc = 0x35a780u;
    // NOP
label_35a784:
    // 0x35a784: 0x0  nop
    ctx->pc = 0x35a784u;
    // NOP
label_35a788:
    // 0x35a788: 0x0  nop
    ctx->pc = 0x35a788u;
    // NOP
label_35a78c:
    // 0x35a78c: 0x0  nop
    ctx->pc = 0x35a78cu;
    // NOP
label_35a790:
    // 0x35a790: 0x0  nop
    ctx->pc = 0x35a790u;
    // NOP
label_35a794:
    // 0x35a794: 0x0  nop
    ctx->pc = 0x35a794u;
    // NOP
label_35a798:
    // 0x35a798: 0x0  nop
    ctx->pc = 0x35a798u;
    // NOP
label_35a79c:
    // 0x35a79c: 0x0  nop
    ctx->pc = 0x35a79cu;
    // NOP
label_35a7a0:
    // 0x35a7a0: 0x0  nop
    ctx->pc = 0x35a7a0u;
    // NOP
label_35a7a4:
    // 0x35a7a4: 0x0  nop
    ctx->pc = 0x35a7a4u;
    // NOP
label_35a7a8:
    // 0x35a7a8: 0x0  nop
    ctx->pc = 0x35a7a8u;
    // NOP
label_35a7ac:
    // 0x35a7ac: 0x0  nop
    ctx->pc = 0x35a7acu;
    // NOP
label_35a7b0:
    // 0x35a7b0: 0x0  nop
    ctx->pc = 0x35a7b0u;
    // NOP
label_35a7b4:
    // 0x35a7b4: 0x0  nop
    ctx->pc = 0x35a7b4u;
    // NOP
label_35a7b8:
    // 0x35a7b8: 0x0  nop
    ctx->pc = 0x35a7b8u;
    // NOP
label_35a7bc:
    // 0x35a7bc: 0x0  nop
    ctx->pc = 0x35a7bcu;
    // NOP
label_35a7c0:
    // 0x35a7c0: 0x0  nop
    ctx->pc = 0x35a7c0u;
    // NOP
label_35a7c4:
    // 0x35a7c4: 0x0  nop
    ctx->pc = 0x35a7c4u;
    // NOP
label_35a7c8:
    // 0x35a7c8: 0x0  nop
    ctx->pc = 0x35a7c8u;
    // NOP
label_35a7cc:
    // 0x35a7cc: 0x0  nop
    ctx->pc = 0x35a7ccu;
    // NOP
label_35a7d0:
    // 0x35a7d0: 0x0  nop
    ctx->pc = 0x35a7d0u;
    // NOP
label_35a7d4:
    // 0x35a7d4: 0x0  nop
    ctx->pc = 0x35a7d4u;
    // NOP
label_35a7d8:
    // 0x35a7d8: 0x0  nop
    ctx->pc = 0x35a7d8u;
    // NOP
label_35a7dc:
    // 0x35a7dc: 0x0  nop
    ctx->pc = 0x35a7dcu;
    // NOP
label_35a7e0:
    // 0x35a7e0: 0x0  nop
    ctx->pc = 0x35a7e0u;
    // NOP
label_35a7e4:
    // 0x35a7e4: 0x0  nop
    ctx->pc = 0x35a7e4u;
    // NOP
label_35a7e8:
    // 0x35a7e8: 0x0  nop
    ctx->pc = 0x35a7e8u;
    // NOP
label_35a7ec:
    // 0x35a7ec: 0x0  nop
    ctx->pc = 0x35a7ecu;
    // NOP
label_35a7f0:
    // 0x35a7f0: 0x0  nop
    ctx->pc = 0x35a7f0u;
    // NOP
label_35a7f4:
    // 0x35a7f4: 0x0  nop
    ctx->pc = 0x35a7f4u;
    // NOP
label_35a7f8:
    // 0x35a7f8: 0x0  nop
    ctx->pc = 0x35a7f8u;
    // NOP
label_35a7fc:
    // 0x35a7fc: 0x0  nop
    ctx->pc = 0x35a7fcu;
    // NOP
label_35a800:
    // 0x35a800: 0x0  nop
    ctx->pc = 0x35a800u;
    // NOP
label_35a804:
    // 0x35a804: 0x0  nop
    ctx->pc = 0x35a804u;
    // NOP
label_35a808:
    // 0x35a808: 0x0  nop
    ctx->pc = 0x35a808u;
    // NOP
label_35a80c:
    // 0x35a80c: 0x0  nop
    ctx->pc = 0x35a80cu;
    // NOP
label_35a810:
    // 0x35a810: 0x0  nop
    ctx->pc = 0x35a810u;
    // NOP
label_35a814:
    // 0x35a814: 0x0  nop
    ctx->pc = 0x35a814u;
    // NOP
label_35a818:
    // 0x35a818: 0x0  nop
    ctx->pc = 0x35a818u;
    // NOP
label_35a81c:
    // 0x35a81c: 0x0  nop
    ctx->pc = 0x35a81cu;
    // NOP
label_35a820:
    // 0x35a820: 0x0  nop
    ctx->pc = 0x35a820u;
    // NOP
label_35a824:
    // 0x35a824: 0x0  nop
    ctx->pc = 0x35a824u;
    // NOP
label_35a828:
    // 0x35a828: 0x0  nop
    ctx->pc = 0x35a828u;
    // NOP
label_35a82c:
    // 0x35a82c: 0x0  nop
    ctx->pc = 0x35a82cu;
    // NOP
label_35a830:
    // 0x35a830: 0x0  nop
    ctx->pc = 0x35a830u;
    // NOP
label_35a834:
    // 0x35a834: 0x0  nop
    ctx->pc = 0x35a834u;
    // NOP
label_35a838:
    // 0x35a838: 0x0  nop
    ctx->pc = 0x35a838u;
    // NOP
label_35a83c:
    // 0x35a83c: 0x0  nop
    ctx->pc = 0x35a83cu;
    // NOP
label_35a840:
    // 0x35a840: 0x0  nop
    ctx->pc = 0x35a840u;
    // NOP
label_35a844:
    // 0x35a844: 0x0  nop
    ctx->pc = 0x35a844u;
    // NOP
label_35a848:
    // 0x35a848: 0x0  nop
    ctx->pc = 0x35a848u;
    // NOP
label_35a84c:
    // 0x35a84c: 0x0  nop
    ctx->pc = 0x35a84cu;
    // NOP
label_35a850:
    // 0x35a850: 0x0  nop
    ctx->pc = 0x35a850u;
    // NOP
label_35a854:
    // 0x35a854: 0x0  nop
    ctx->pc = 0x35a854u;
    // NOP
label_35a858:
    // 0x35a858: 0x0  nop
    ctx->pc = 0x35a858u;
    // NOP
label_35a85c:
    // 0x35a85c: 0x0  nop
    ctx->pc = 0x35a85cu;
    // NOP
label_35a860:
    // 0x35a860: 0x0  nop
    ctx->pc = 0x35a860u;
    // NOP
label_35a864:
    // 0x35a864: 0x0  nop
    ctx->pc = 0x35a864u;
    // NOP
label_35a868:
    // 0x35a868: 0x0  nop
    ctx->pc = 0x35a868u;
    // NOP
label_35a86c:
    // 0x35a86c: 0x0  nop
    ctx->pc = 0x35a86cu;
    // NOP
label_35a870:
    // 0x35a870: 0x0  nop
    ctx->pc = 0x35a870u;
    // NOP
label_35a874:
    // 0x35a874: 0x0  nop
    ctx->pc = 0x35a874u;
    // NOP
label_35a878:
    // 0x35a878: 0x0  nop
    ctx->pc = 0x35a878u;
    // NOP
label_35a87c:
    // 0x35a87c: 0x0  nop
    ctx->pc = 0x35a87cu;
    // NOP
label_35a880:
    // 0x35a880: 0x0  nop
    ctx->pc = 0x35a880u;
    // NOP
label_35a884:
    // 0x35a884: 0x0  nop
    ctx->pc = 0x35a884u;
    // NOP
label_35a888:
    // 0x35a888: 0x0  nop
    ctx->pc = 0x35a888u;
    // NOP
label_35a88c:
    // 0x35a88c: 0x0  nop
    ctx->pc = 0x35a88cu;
    // NOP
label_35a890:
    // 0x35a890: 0x0  nop
    ctx->pc = 0x35a890u;
    // NOP
label_35a894:
    // 0x35a894: 0x0  nop
    ctx->pc = 0x35a894u;
    // NOP
label_35a898:
    // 0x35a898: 0x0  nop
    ctx->pc = 0x35a898u;
    // NOP
label_35a89c:
    // 0x35a89c: 0x0  nop
    ctx->pc = 0x35a89cu;
    // NOP
label_35a8a0:
    // 0x35a8a0: 0x0  nop
    ctx->pc = 0x35a8a0u;
    // NOP
label_35a8a4:
    // 0x35a8a4: 0x0  nop
    ctx->pc = 0x35a8a4u;
    // NOP
label_35a8a8:
    // 0x35a8a8: 0x0  nop
    ctx->pc = 0x35a8a8u;
    // NOP
label_35a8ac:
    // 0x35a8ac: 0x0  nop
    ctx->pc = 0x35a8acu;
    // NOP
label_35a8b0:
    // 0x35a8b0: 0x0  nop
    ctx->pc = 0x35a8b0u;
    // NOP
label_35a8b4:
    // 0x35a8b4: 0x0  nop
    ctx->pc = 0x35a8b4u;
    // NOP
label_35a8b8:
    // 0x35a8b8: 0x0  nop
    ctx->pc = 0x35a8b8u;
    // NOP
label_35a8bc:
    // 0x35a8bc: 0x0  nop
    ctx->pc = 0x35a8bcu;
    // NOP
label_35a8c0:
    // 0x35a8c0: 0x0  nop
    ctx->pc = 0x35a8c0u;
    // NOP
label_35a8c4:
    // 0x35a8c4: 0x0  nop
    ctx->pc = 0x35a8c4u;
    // NOP
label_35a8c8:
    // 0x35a8c8: 0x0  nop
    ctx->pc = 0x35a8c8u;
    // NOP
label_35a8cc:
    // 0x35a8cc: 0x0  nop
    ctx->pc = 0x35a8ccu;
    // NOP
label_35a8d0:
    // 0x35a8d0: 0x0  nop
    ctx->pc = 0x35a8d0u;
    // NOP
label_35a8d4:
    // 0x35a8d4: 0x0  nop
    ctx->pc = 0x35a8d4u;
    // NOP
label_35a8d8:
    // 0x35a8d8: 0x0  nop
    ctx->pc = 0x35a8d8u;
    // NOP
label_35a8dc:
    // 0x35a8dc: 0x0  nop
    ctx->pc = 0x35a8dcu;
    // NOP
label_35a8e0:
    // 0x35a8e0: 0x0  nop
    ctx->pc = 0x35a8e0u;
    // NOP
label_35a8e4:
    // 0x35a8e4: 0x0  nop
    ctx->pc = 0x35a8e4u;
    // NOP
label_35a8e8:
    // 0x35a8e8: 0x0  nop
    ctx->pc = 0x35a8e8u;
    // NOP
label_35a8ec:
    // 0x35a8ec: 0x0  nop
    ctx->pc = 0x35a8ecu;
    // NOP
label_35a8f0:
    // 0x35a8f0: 0x0  nop
    ctx->pc = 0x35a8f0u;
    // NOP
label_35a8f4:
    // 0x35a8f4: 0x0  nop
    ctx->pc = 0x35a8f4u;
    // NOP
label_35a8f8:
    // 0x35a8f8: 0x0  nop
    ctx->pc = 0x35a8f8u;
    // NOP
label_35a8fc:
    // 0x35a8fc: 0x0  nop
    ctx->pc = 0x35a8fcu;
    // NOP
label_35a900:
    // 0x35a900: 0x0  nop
    ctx->pc = 0x35a900u;
    // NOP
label_35a904:
    // 0x35a904: 0x0  nop
    ctx->pc = 0x35a904u;
    // NOP
label_35a908:
    // 0x35a908: 0x0  nop
    ctx->pc = 0x35a908u;
    // NOP
label_35a90c:
    // 0x35a90c: 0x0  nop
    ctx->pc = 0x35a90cu;
    // NOP
label_35a910:
    // 0x35a910: 0x0  nop
    ctx->pc = 0x35a910u;
    // NOP
label_35a914:
    // 0x35a914: 0x0  nop
    ctx->pc = 0x35a914u;
    // NOP
label_35a918:
    // 0x35a918: 0x0  nop
    ctx->pc = 0x35a918u;
    // NOP
label_35a91c:
    // 0x35a91c: 0x0  nop
    ctx->pc = 0x35a91cu;
    // NOP
label_35a920:
    // 0x35a920: 0x0  nop
    ctx->pc = 0x35a920u;
    // NOP
label_35a924:
    // 0x35a924: 0x0  nop
    ctx->pc = 0x35a924u;
    // NOP
label_35a928:
    // 0x35a928: 0x0  nop
    ctx->pc = 0x35a928u;
    // NOP
label_35a92c:
    // 0x35a92c: 0x0  nop
    ctx->pc = 0x35a92cu;
    // NOP
label_35a930:
    // 0x35a930: 0x0  nop
    ctx->pc = 0x35a930u;
    // NOP
label_35a934:
    // 0x35a934: 0x0  nop
    ctx->pc = 0x35a934u;
    // NOP
label_35a938:
    // 0x35a938: 0x0  nop
    ctx->pc = 0x35a938u;
    // NOP
label_35a93c:
    // 0x35a93c: 0x0  nop
    ctx->pc = 0x35a93cu;
    // NOP
label_35a940:
    // 0x35a940: 0x0  nop
    ctx->pc = 0x35a940u;
    // NOP
label_35a944:
    // 0x35a944: 0x0  nop
    ctx->pc = 0x35a944u;
    // NOP
label_35a948:
    // 0x35a948: 0x0  nop
    ctx->pc = 0x35a948u;
    // NOP
label_35a94c:
    // 0x35a94c: 0x0  nop
    ctx->pc = 0x35a94cu;
    // NOP
label_35a950:
    // 0x35a950: 0x0  nop
    ctx->pc = 0x35a950u;
    // NOP
label_35a954:
    // 0x35a954: 0x0  nop
    ctx->pc = 0x35a954u;
    // NOP
label_35a958:
    // 0x35a958: 0x0  nop
    ctx->pc = 0x35a958u;
    // NOP
label_35a95c:
    // 0x35a95c: 0x0  nop
    ctx->pc = 0x35a95cu;
    // NOP
label_35a960:
    // 0x35a960: 0x0  nop
    ctx->pc = 0x35a960u;
    // NOP
label_35a964:
    // 0x35a964: 0x0  nop
    ctx->pc = 0x35a964u;
    // NOP
label_35a968:
    // 0x35a968: 0x0  nop
    ctx->pc = 0x35a968u;
    // NOP
label_35a96c:
    // 0x35a96c: 0x0  nop
    ctx->pc = 0x35a96cu;
    // NOP
label_35a970:
    // 0x35a970: 0x0  nop
    ctx->pc = 0x35a970u;
    // NOP
label_35a974:
    // 0x35a974: 0x0  nop
    ctx->pc = 0x35a974u;
    // NOP
label_35a978:
    // 0x35a978: 0x0  nop
    ctx->pc = 0x35a978u;
    // NOP
label_35a97c:
    // 0x35a97c: 0x0  nop
    ctx->pc = 0x35a97cu;
    // NOP
label_35a980:
    // 0x35a980: 0x0  nop
    ctx->pc = 0x35a980u;
    // NOP
label_35a984:
    // 0x35a984: 0x0  nop
    ctx->pc = 0x35a984u;
    // NOP
label_35a988:
    // 0x35a988: 0x0  nop
    ctx->pc = 0x35a988u;
    // NOP
label_35a98c:
    // 0x35a98c: 0x0  nop
    ctx->pc = 0x35a98cu;
    // NOP
label_35a990:
    // 0x35a990: 0x0  nop
    ctx->pc = 0x35a990u;
    // NOP
label_35a994:
    // 0x35a994: 0x0  nop
    ctx->pc = 0x35a994u;
    // NOP
label_35a998:
    // 0x35a998: 0x0  nop
    ctx->pc = 0x35a998u;
    // NOP
label_35a99c:
    // 0x35a99c: 0x0  nop
    ctx->pc = 0x35a99cu;
    // NOP
label_35a9a0:
    // 0x35a9a0: 0x0  nop
    ctx->pc = 0x35a9a0u;
    // NOP
label_35a9a4:
    // 0x35a9a4: 0x0  nop
    ctx->pc = 0x35a9a4u;
    // NOP
label_35a9a8:
    // 0x35a9a8: 0x0  nop
    ctx->pc = 0x35a9a8u;
    // NOP
label_35a9ac:
    // 0x35a9ac: 0x0  nop
    ctx->pc = 0x35a9acu;
    // NOP
label_35a9b0:
    // 0x35a9b0: 0x0  nop
    ctx->pc = 0x35a9b0u;
    // NOP
label_35a9b4:
    // 0x35a9b4: 0x0  nop
    ctx->pc = 0x35a9b4u;
    // NOP
label_35a9b8:
    // 0x35a9b8: 0x0  nop
    ctx->pc = 0x35a9b8u;
    // NOP
label_35a9bc:
    // 0x35a9bc: 0x0  nop
    ctx->pc = 0x35a9bcu;
    // NOP
label_35a9c0:
    // 0x35a9c0: 0x0  nop
    ctx->pc = 0x35a9c0u;
    // NOP
label_35a9c4:
    // 0x35a9c4: 0x0  nop
    ctx->pc = 0x35a9c4u;
    // NOP
label_35a9c8:
    // 0x35a9c8: 0x0  nop
    ctx->pc = 0x35a9c8u;
    // NOP
label_35a9cc:
    // 0x35a9cc: 0x0  nop
    ctx->pc = 0x35a9ccu;
    // NOP
label_35a9d0:
    // 0x35a9d0: 0x0  nop
    ctx->pc = 0x35a9d0u;
    // NOP
label_35a9d4:
    // 0x35a9d4: 0x0  nop
    ctx->pc = 0x35a9d4u;
    // NOP
label_35a9d8:
    // 0x35a9d8: 0x0  nop
    ctx->pc = 0x35a9d8u;
    // NOP
label_35a9dc:
    // 0x35a9dc: 0x0  nop
    ctx->pc = 0x35a9dcu;
    // NOP
label_35a9e0:
    // 0x35a9e0: 0x0  nop
    ctx->pc = 0x35a9e0u;
    // NOP
label_35a9e4:
    // 0x35a9e4: 0x0  nop
    ctx->pc = 0x35a9e4u;
    // NOP
label_35a9e8:
    // 0x35a9e8: 0x0  nop
    ctx->pc = 0x35a9e8u;
    // NOP
label_35a9ec:
    // 0x35a9ec: 0x0  nop
    ctx->pc = 0x35a9ecu;
    // NOP
label_35a9f0:
    // 0x35a9f0: 0x0  nop
    ctx->pc = 0x35a9f0u;
    // NOP
label_35a9f4:
    // 0x35a9f4: 0x0  nop
    ctx->pc = 0x35a9f4u;
    // NOP
label_35a9f8:
    // 0x35a9f8: 0x0  nop
    ctx->pc = 0x35a9f8u;
    // NOP
label_35a9fc:
    // 0x35a9fc: 0x0  nop
    ctx->pc = 0x35a9fcu;
    // NOP
label_35aa00:
    // 0x35aa00: 0x0  nop
    ctx->pc = 0x35aa00u;
    // NOP
label_35aa04:
    // 0x35aa04: 0x0  nop
    ctx->pc = 0x35aa04u;
    // NOP
label_35aa08:
    // 0x35aa08: 0x0  nop
    ctx->pc = 0x35aa08u;
    // NOP
label_35aa0c:
    // 0x35aa0c: 0x0  nop
    ctx->pc = 0x35aa0cu;
    // NOP
label_35aa10:
    // 0x35aa10: 0x0  nop
    ctx->pc = 0x35aa10u;
    // NOP
label_35aa14:
    // 0x35aa14: 0x0  nop
    ctx->pc = 0x35aa14u;
    // NOP
label_35aa18:
    // 0x35aa18: 0x0  nop
    ctx->pc = 0x35aa18u;
    // NOP
label_35aa1c:
    // 0x35aa1c: 0x0  nop
    ctx->pc = 0x35aa1cu;
    // NOP
label_35aa20:
    // 0x35aa20: 0x0  nop
    ctx->pc = 0x35aa20u;
    // NOP
label_35aa24:
    // 0x35aa24: 0x0  nop
    ctx->pc = 0x35aa24u;
    // NOP
label_35aa28:
    // 0x35aa28: 0x0  nop
    ctx->pc = 0x35aa28u;
    // NOP
label_35aa2c:
    // 0x35aa2c: 0x0  nop
    ctx->pc = 0x35aa2cu;
    // NOP
label_35aa30:
    // 0x35aa30: 0x0  nop
    ctx->pc = 0x35aa30u;
    // NOP
label_35aa34:
    // 0x35aa34: 0x0  nop
    ctx->pc = 0x35aa34u;
    // NOP
label_35aa38:
    // 0x35aa38: 0x0  nop
    ctx->pc = 0x35aa38u;
    // NOP
label_35aa3c:
    // 0x35aa3c: 0x0  nop
    ctx->pc = 0x35aa3cu;
    // NOP
label_35aa40:
    // 0x35aa40: 0x0  nop
    ctx->pc = 0x35aa40u;
    // NOP
label_35aa44:
    // 0x35aa44: 0x0  nop
    ctx->pc = 0x35aa44u;
    // NOP
label_35aa48:
    // 0x35aa48: 0x0  nop
    ctx->pc = 0x35aa48u;
    // NOP
label_35aa4c:
    // 0x35aa4c: 0x0  nop
    ctx->pc = 0x35aa4cu;
    // NOP
label_35aa50:
    // 0x35aa50: 0x0  nop
    ctx->pc = 0x35aa50u;
    // NOP
label_35aa54:
    // 0x35aa54: 0x0  nop
    ctx->pc = 0x35aa54u;
    // NOP
label_35aa58:
    // 0x35aa58: 0x0  nop
    ctx->pc = 0x35aa58u;
    // NOP
label_35aa5c:
    // 0x35aa5c: 0x0  nop
    ctx->pc = 0x35aa5cu;
    // NOP
label_35aa60:
    // 0x35aa60: 0x0  nop
    ctx->pc = 0x35aa60u;
    // NOP
label_35aa64:
    // 0x35aa64: 0x0  nop
    ctx->pc = 0x35aa64u;
    // NOP
label_35aa68:
    // 0x35aa68: 0x0  nop
    ctx->pc = 0x35aa68u;
    // NOP
label_35aa6c:
    // 0x35aa6c: 0x0  nop
    ctx->pc = 0x35aa6cu;
    // NOP
label_35aa70:
    // 0x35aa70: 0x0  nop
    ctx->pc = 0x35aa70u;
    // NOP
label_35aa74:
    // 0x35aa74: 0x0  nop
    ctx->pc = 0x35aa74u;
    // NOP
label_35aa78:
    // 0x35aa78: 0x0  nop
    ctx->pc = 0x35aa78u;
    // NOP
label_35aa7c:
    // 0x35aa7c: 0x0  nop
    ctx->pc = 0x35aa7cu;
    // NOP
label_35aa80:
    // 0x35aa80: 0x0  nop
    ctx->pc = 0x35aa80u;
    // NOP
label_35aa84:
    // 0x35aa84: 0x0  nop
    ctx->pc = 0x35aa84u;
    // NOP
label_35aa88:
    // 0x35aa88: 0x0  nop
    ctx->pc = 0x35aa88u;
    // NOP
label_35aa8c:
    // 0x35aa8c: 0x0  nop
    ctx->pc = 0x35aa8cu;
    // NOP
label_35aa90:
    // 0x35aa90: 0x0  nop
    ctx->pc = 0x35aa90u;
    // NOP
label_35aa94:
    // 0x35aa94: 0x0  nop
    ctx->pc = 0x35aa94u;
    // NOP
label_35aa98:
    // 0x35aa98: 0x0  nop
    ctx->pc = 0x35aa98u;
    // NOP
label_35aa9c:
    // 0x35aa9c: 0x0  nop
    ctx->pc = 0x35aa9cu;
    // NOP
label_35aaa0:
    // 0x35aaa0: 0x0  nop
    ctx->pc = 0x35aaa0u;
    // NOP
label_35aaa4:
    // 0x35aaa4: 0x0  nop
    ctx->pc = 0x35aaa4u;
    // NOP
label_35aaa8:
    // 0x35aaa8: 0x0  nop
    ctx->pc = 0x35aaa8u;
    // NOP
label_35aaac:
    // 0x35aaac: 0x0  nop
    ctx->pc = 0x35aaacu;
    // NOP
label_35aab0:
    // 0x35aab0: 0x0  nop
    ctx->pc = 0x35aab0u;
    // NOP
label_35aab4:
    // 0x35aab4: 0x0  nop
    ctx->pc = 0x35aab4u;
    // NOP
label_35aab8:
    // 0x35aab8: 0x0  nop
    ctx->pc = 0x35aab8u;
    // NOP
label_35aabc:
    // 0x35aabc: 0x0  nop
    ctx->pc = 0x35aabcu;
    // NOP
label_35aac0:
    // 0x35aac0: 0x0  nop
    ctx->pc = 0x35aac0u;
    // NOP
label_35aac4:
    // 0x35aac4: 0x0  nop
    ctx->pc = 0x35aac4u;
    // NOP
label_35aac8:
    // 0x35aac8: 0x0  nop
    ctx->pc = 0x35aac8u;
    // NOP
label_35aacc:
    // 0x35aacc: 0x0  nop
    ctx->pc = 0x35aaccu;
    // NOP
label_35aad0:
    // 0x35aad0: 0x0  nop
    ctx->pc = 0x35aad0u;
    // NOP
label_35aad4:
    // 0x35aad4: 0x0  nop
    ctx->pc = 0x35aad4u;
    // NOP
label_35aad8:
    // 0x35aad8: 0x0  nop
    ctx->pc = 0x35aad8u;
    // NOP
label_35aadc:
    // 0x35aadc: 0x0  nop
    ctx->pc = 0x35aadcu;
    // NOP
label_35aae0:
    // 0x35aae0: 0x0  nop
    ctx->pc = 0x35aae0u;
    // NOP
label_35aae4:
    // 0x35aae4: 0x0  nop
    ctx->pc = 0x35aae4u;
    // NOP
label_35aae8:
    // 0x35aae8: 0x0  nop
    ctx->pc = 0x35aae8u;
    // NOP
label_35aaec:
    // 0x35aaec: 0x0  nop
    ctx->pc = 0x35aaecu;
    // NOP
label_35aaf0:
    // 0x35aaf0: 0x0  nop
    ctx->pc = 0x35aaf0u;
    // NOP
label_35aaf4:
    // 0x35aaf4: 0x0  nop
    ctx->pc = 0x35aaf4u;
    // NOP
label_35aaf8:
    // 0x35aaf8: 0x0  nop
    ctx->pc = 0x35aaf8u;
    // NOP
label_35aafc:
    // 0x35aafc: 0x0  nop
    ctx->pc = 0x35aafcu;
    // NOP
label_35ab00:
    // 0x35ab00: 0x0  nop
    ctx->pc = 0x35ab00u;
    // NOP
label_35ab04:
    // 0x35ab04: 0x0  nop
    ctx->pc = 0x35ab04u;
    // NOP
label_35ab08:
    // 0x35ab08: 0x0  nop
    ctx->pc = 0x35ab08u;
    // NOP
label_35ab0c:
    // 0x35ab0c: 0x0  nop
    ctx->pc = 0x35ab0cu;
    // NOP
label_35ab10:
    // 0x35ab10: 0x0  nop
    ctx->pc = 0x35ab10u;
    // NOP
label_35ab14:
    // 0x35ab14: 0x0  nop
    ctx->pc = 0x35ab14u;
    // NOP
label_35ab18:
    // 0x35ab18: 0x0  nop
    ctx->pc = 0x35ab18u;
    // NOP
label_35ab1c:
    // 0x35ab1c: 0x0  nop
    ctx->pc = 0x35ab1cu;
    // NOP
label_35ab20:
    // 0x35ab20: 0x0  nop
    ctx->pc = 0x35ab20u;
    // NOP
label_35ab24:
    // 0x35ab24: 0x0  nop
    ctx->pc = 0x35ab24u;
    // NOP
label_35ab28:
    // 0x35ab28: 0x0  nop
    ctx->pc = 0x35ab28u;
    // NOP
label_35ab2c:
    // 0x35ab2c: 0x0  nop
    ctx->pc = 0x35ab2cu;
    // NOP
label_35ab30:
    // 0x35ab30: 0x0  nop
    ctx->pc = 0x35ab30u;
    // NOP
label_35ab34:
    // 0x35ab34: 0x0  nop
    ctx->pc = 0x35ab34u;
    // NOP
label_35ab38:
    // 0x35ab38: 0x0  nop
    ctx->pc = 0x35ab38u;
    // NOP
label_35ab3c:
    // 0x35ab3c: 0x0  nop
    ctx->pc = 0x35ab3cu;
    // NOP
label_35ab40:
    // 0x35ab40: 0x0  nop
    ctx->pc = 0x35ab40u;
    // NOP
label_35ab44:
    // 0x35ab44: 0x0  nop
    ctx->pc = 0x35ab44u;
    // NOP
label_35ab48:
    // 0x35ab48: 0x0  nop
    ctx->pc = 0x35ab48u;
    // NOP
label_35ab4c:
    // 0x35ab4c: 0x0  nop
    ctx->pc = 0x35ab4cu;
    // NOP
label_35ab50:
    // 0x35ab50: 0x0  nop
    ctx->pc = 0x35ab50u;
    // NOP
label_35ab54:
    // 0x35ab54: 0x0  nop
    ctx->pc = 0x35ab54u;
    // NOP
label_35ab58:
    // 0x35ab58: 0x0  nop
    ctx->pc = 0x35ab58u;
    // NOP
label_35ab5c:
    // 0x35ab5c: 0x0  nop
    ctx->pc = 0x35ab5cu;
    // NOP
label_35ab60:
    // 0x35ab60: 0x0  nop
    ctx->pc = 0x35ab60u;
    // NOP
label_35ab64:
    // 0x35ab64: 0x0  nop
    ctx->pc = 0x35ab64u;
    // NOP
label_35ab68:
    // 0x35ab68: 0x0  nop
    ctx->pc = 0x35ab68u;
    // NOP
label_35ab6c:
    // 0x35ab6c: 0x0  nop
    ctx->pc = 0x35ab6cu;
    // NOP
label_35ab70:
    // 0x35ab70: 0x0  nop
    ctx->pc = 0x35ab70u;
    // NOP
label_35ab74:
    // 0x35ab74: 0x0  nop
    ctx->pc = 0x35ab74u;
    // NOP
label_35ab78:
    // 0x35ab78: 0x0  nop
    ctx->pc = 0x35ab78u;
    // NOP
label_35ab7c:
    // 0x35ab7c: 0x0  nop
    ctx->pc = 0x35ab7cu;
    // NOP
label_35ab80:
    // 0x35ab80: 0x0  nop
    ctx->pc = 0x35ab80u;
    // NOP
label_35ab84:
    // 0x35ab84: 0x0  nop
    ctx->pc = 0x35ab84u;
    // NOP
label_35ab88:
    // 0x35ab88: 0x0  nop
    ctx->pc = 0x35ab88u;
    // NOP
label_35ab8c:
    // 0x35ab8c: 0x0  nop
    ctx->pc = 0x35ab8cu;
    // NOP
label_35ab90:
    // 0x35ab90: 0x0  nop
    ctx->pc = 0x35ab90u;
    // NOP
label_35ab94:
    // 0x35ab94: 0x0  nop
    ctx->pc = 0x35ab94u;
    // NOP
label_35ab98:
    // 0x35ab98: 0x0  nop
    ctx->pc = 0x35ab98u;
    // NOP
label_35ab9c:
    // 0x35ab9c: 0x0  nop
    ctx->pc = 0x35ab9cu;
    // NOP
label_35aba0:
    // 0x35aba0: 0x0  nop
    ctx->pc = 0x35aba0u;
    // NOP
label_35aba4:
    // 0x35aba4: 0x0  nop
    ctx->pc = 0x35aba4u;
    // NOP
label_35aba8:
    // 0x35aba8: 0x0  nop
    ctx->pc = 0x35aba8u;
    // NOP
label_35abac:
    // 0x35abac: 0x0  nop
    ctx->pc = 0x35abacu;
    // NOP
label_35abb0:
    // 0x35abb0: 0x0  nop
    ctx->pc = 0x35abb0u;
    // NOP
label_35abb4:
    // 0x35abb4: 0x0  nop
    ctx->pc = 0x35abb4u;
    // NOP
label_35abb8:
    // 0x35abb8: 0x0  nop
    ctx->pc = 0x35abb8u;
    // NOP
label_35abbc:
    // 0x35abbc: 0x0  nop
    ctx->pc = 0x35abbcu;
    // NOP
label_35abc0:
    // 0x35abc0: 0x0  nop
    ctx->pc = 0x35abc0u;
    // NOP
label_35abc4:
    // 0x35abc4: 0x0  nop
    ctx->pc = 0x35abc4u;
    // NOP
label_35abc8:
    // 0x35abc8: 0x0  nop
    ctx->pc = 0x35abc8u;
    // NOP
label_35abcc:
    // 0x35abcc: 0x0  nop
    ctx->pc = 0x35abccu;
    // NOP
label_35abd0:
    // 0x35abd0: 0x0  nop
    ctx->pc = 0x35abd0u;
    // NOP
label_35abd4:
    // 0x35abd4: 0x0  nop
    ctx->pc = 0x35abd4u;
    // NOP
label_35abd8:
    // 0x35abd8: 0x0  nop
    ctx->pc = 0x35abd8u;
    // NOP
label_35abdc:
    // 0x35abdc: 0x0  nop
    ctx->pc = 0x35abdcu;
    // NOP
label_35abe0:
    // 0x35abe0: 0x0  nop
    ctx->pc = 0x35abe0u;
    // NOP
label_35abe4:
    // 0x35abe4: 0x0  nop
    ctx->pc = 0x35abe4u;
    // NOP
label_35abe8:
    // 0x35abe8: 0x0  nop
    ctx->pc = 0x35abe8u;
    // NOP
label_35abec:
    // 0x35abec: 0x0  nop
    ctx->pc = 0x35abecu;
    // NOP
label_35abf0:
    // 0x35abf0: 0x0  nop
    ctx->pc = 0x35abf0u;
    // NOP
label_35abf4:
    // 0x35abf4: 0x0  nop
    ctx->pc = 0x35abf4u;
    // NOP
label_35abf8:
    // 0x35abf8: 0x0  nop
    ctx->pc = 0x35abf8u;
    // NOP
label_35abfc:
    // 0x35abfc: 0x0  nop
    ctx->pc = 0x35abfcu;
    // NOP
label_35ac00:
    // 0x35ac00: 0x0  nop
    ctx->pc = 0x35ac00u;
    // NOP
label_35ac04:
    // 0x35ac04: 0x0  nop
    ctx->pc = 0x35ac04u;
    // NOP
label_35ac08:
    // 0x35ac08: 0x0  nop
    ctx->pc = 0x35ac08u;
    // NOP
label_35ac0c:
    // 0x35ac0c: 0x0  nop
    ctx->pc = 0x35ac0cu;
    // NOP
label_35ac10:
    // 0x35ac10: 0x0  nop
    ctx->pc = 0x35ac10u;
    // NOP
label_35ac14:
    // 0x35ac14: 0x0  nop
    ctx->pc = 0x35ac14u;
    // NOP
label_35ac18:
    // 0x35ac18: 0x0  nop
    ctx->pc = 0x35ac18u;
    // NOP
label_35ac1c:
    // 0x35ac1c: 0x0  nop
    ctx->pc = 0x35ac1cu;
    // NOP
label_35ac20:
    // 0x35ac20: 0x0  nop
    ctx->pc = 0x35ac20u;
    // NOP
label_35ac24:
    // 0x35ac24: 0x0  nop
    ctx->pc = 0x35ac24u;
    // NOP
label_35ac28:
    // 0x35ac28: 0x0  nop
    ctx->pc = 0x35ac28u;
    // NOP
label_35ac2c:
    // 0x35ac2c: 0x0  nop
    ctx->pc = 0x35ac2cu;
    // NOP
label_35ac30:
    // 0x35ac30: 0x0  nop
    ctx->pc = 0x35ac30u;
    // NOP
label_35ac34:
    // 0x35ac34: 0x0  nop
    ctx->pc = 0x35ac34u;
    // NOP
label_35ac38:
    // 0x35ac38: 0x0  nop
    ctx->pc = 0x35ac38u;
    // NOP
label_35ac3c:
    // 0x35ac3c: 0x0  nop
    ctx->pc = 0x35ac3cu;
    // NOP
label_35ac40:
    // 0x35ac40: 0x0  nop
    ctx->pc = 0x35ac40u;
    // NOP
label_35ac44:
    // 0x35ac44: 0x0  nop
    ctx->pc = 0x35ac44u;
    // NOP
label_35ac48:
    // 0x35ac48: 0x0  nop
    ctx->pc = 0x35ac48u;
    // NOP
label_35ac4c:
    // 0x35ac4c: 0x0  nop
    ctx->pc = 0x35ac4cu;
    // NOP
label_35ac50:
    // 0x35ac50: 0x0  nop
    ctx->pc = 0x35ac50u;
    // NOP
label_35ac54:
    // 0x35ac54: 0x0  nop
    ctx->pc = 0x35ac54u;
    // NOP
label_35ac58:
    // 0x35ac58: 0x0  nop
    ctx->pc = 0x35ac58u;
    // NOP
label_35ac5c:
    // 0x35ac5c: 0x0  nop
    ctx->pc = 0x35ac5cu;
    // NOP
label_35ac60:
    // 0x35ac60: 0x0  nop
    ctx->pc = 0x35ac60u;
    // NOP
label_35ac64:
    // 0x35ac64: 0x0  nop
    ctx->pc = 0x35ac64u;
    // NOP
label_35ac68:
    // 0x35ac68: 0x0  nop
    ctx->pc = 0x35ac68u;
    // NOP
label_35ac6c:
    // 0x35ac6c: 0x0  nop
    ctx->pc = 0x35ac6cu;
    // NOP
label_35ac70:
    // 0x35ac70: 0x0  nop
    ctx->pc = 0x35ac70u;
    // NOP
label_35ac74:
    // 0x35ac74: 0x0  nop
    ctx->pc = 0x35ac74u;
    // NOP
label_35ac78:
    // 0x35ac78: 0x0  nop
    ctx->pc = 0x35ac78u;
    // NOP
label_35ac7c:
    // 0x35ac7c: 0x0  nop
    ctx->pc = 0x35ac7cu;
    // NOP
label_35ac80:
    // 0x35ac80: 0x0  nop
    ctx->pc = 0x35ac80u;
    // NOP
label_35ac84:
    // 0x35ac84: 0x0  nop
    ctx->pc = 0x35ac84u;
    // NOP
label_35ac88:
    // 0x35ac88: 0x0  nop
    ctx->pc = 0x35ac88u;
    // NOP
label_35ac8c:
    // 0x35ac8c: 0x0  nop
    ctx->pc = 0x35ac8cu;
    // NOP
label_35ac90:
    // 0x35ac90: 0x0  nop
    ctx->pc = 0x35ac90u;
    // NOP
label_35ac94:
    // 0x35ac94: 0x0  nop
    ctx->pc = 0x35ac94u;
    // NOP
label_35ac98:
    // 0x35ac98: 0x0  nop
    ctx->pc = 0x35ac98u;
    // NOP
label_35ac9c:
    // 0x35ac9c: 0x0  nop
    ctx->pc = 0x35ac9cu;
    // NOP
label_35aca0:
    // 0x35aca0: 0x0  nop
    ctx->pc = 0x35aca0u;
    // NOP
label_35aca4:
    // 0x35aca4: 0x0  nop
    ctx->pc = 0x35aca4u;
    // NOP
label_35aca8:
    // 0x35aca8: 0x0  nop
    ctx->pc = 0x35aca8u;
    // NOP
label_35acac:
    // 0x35acac: 0x0  nop
    ctx->pc = 0x35acacu;
    // NOP
label_35acb0:
    // 0x35acb0: 0x0  nop
    ctx->pc = 0x35acb0u;
    // NOP
label_35acb4:
    // 0x35acb4: 0x0  nop
    ctx->pc = 0x35acb4u;
    // NOP
label_35acb8:
    // 0x35acb8: 0x0  nop
    ctx->pc = 0x35acb8u;
    // NOP
label_35acbc:
    // 0x35acbc: 0x0  nop
    ctx->pc = 0x35acbcu;
    // NOP
label_35acc0:
    // 0x35acc0: 0x0  nop
    ctx->pc = 0x35acc0u;
    // NOP
label_35acc4:
    // 0x35acc4: 0x0  nop
    ctx->pc = 0x35acc4u;
    // NOP
label_35acc8:
    // 0x35acc8: 0x0  nop
    ctx->pc = 0x35acc8u;
    // NOP
label_35accc:
    // 0x35accc: 0x0  nop
    ctx->pc = 0x35acccu;
    // NOP
label_35acd0:
    // 0x35acd0: 0x0  nop
    ctx->pc = 0x35acd0u;
    // NOP
label_35acd4:
    // 0x35acd4: 0x0  nop
    ctx->pc = 0x35acd4u;
    // NOP
label_35acd8:
    // 0x35acd8: 0x0  nop
    ctx->pc = 0x35acd8u;
    // NOP
label_35acdc:
    // 0x35acdc: 0x0  nop
    ctx->pc = 0x35acdcu;
    // NOP
label_35ace0:
    // 0x35ace0: 0x0  nop
    ctx->pc = 0x35ace0u;
    // NOP
label_35ace4:
    // 0x35ace4: 0x0  nop
    ctx->pc = 0x35ace4u;
    // NOP
label_35ace8:
    // 0x35ace8: 0x0  nop
    ctx->pc = 0x35ace8u;
    // NOP
label_35acec:
    // 0x35acec: 0x0  nop
    ctx->pc = 0x35acecu;
    // NOP
label_35acf0:
    // 0x35acf0: 0x0  nop
    ctx->pc = 0x35acf0u;
    // NOP
label_35acf4:
    // 0x35acf4: 0x0  nop
    ctx->pc = 0x35acf4u;
    // NOP
label_35acf8:
    // 0x35acf8: 0x0  nop
    ctx->pc = 0x35acf8u;
    // NOP
label_35acfc:
    // 0x35acfc: 0x0  nop
    ctx->pc = 0x35acfcu;
    // NOP
label_35ad00:
    // 0x35ad00: 0x0  nop
    ctx->pc = 0x35ad00u;
    // NOP
label_35ad04:
    // 0x35ad04: 0x0  nop
    ctx->pc = 0x35ad04u;
    // NOP
label_35ad08:
    // 0x35ad08: 0x0  nop
    ctx->pc = 0x35ad08u;
    // NOP
label_35ad0c:
    // 0x35ad0c: 0x0  nop
    ctx->pc = 0x35ad0cu;
    // NOP
label_35ad10:
    // 0x35ad10: 0x0  nop
    ctx->pc = 0x35ad10u;
    // NOP
label_35ad14:
    // 0x35ad14: 0x0  nop
    ctx->pc = 0x35ad14u;
    // NOP
label_35ad18:
    // 0x35ad18: 0x0  nop
    ctx->pc = 0x35ad18u;
    // NOP
label_35ad1c:
    // 0x35ad1c: 0x0  nop
    ctx->pc = 0x35ad1cu;
    // NOP
label_35ad20:
    // 0x35ad20: 0x0  nop
    ctx->pc = 0x35ad20u;
    // NOP
label_35ad24:
    // 0x35ad24: 0x0  nop
    ctx->pc = 0x35ad24u;
    // NOP
label_35ad28:
    // 0x35ad28: 0x0  nop
    ctx->pc = 0x35ad28u;
    // NOP
label_35ad2c:
    // 0x35ad2c: 0x0  nop
    ctx->pc = 0x35ad2cu;
    // NOP
label_35ad30:
    // 0x35ad30: 0x0  nop
    ctx->pc = 0x35ad30u;
    // NOP
label_35ad34:
    // 0x35ad34: 0x0  nop
    ctx->pc = 0x35ad34u;
    // NOP
label_35ad38:
    // 0x35ad38: 0x0  nop
    ctx->pc = 0x35ad38u;
    // NOP
label_35ad3c:
    // 0x35ad3c: 0x0  nop
    ctx->pc = 0x35ad3cu;
    // NOP
label_35ad40:
    // 0x35ad40: 0x0  nop
    ctx->pc = 0x35ad40u;
    // NOP
label_35ad44:
    // 0x35ad44: 0x0  nop
    ctx->pc = 0x35ad44u;
    // NOP
label_35ad48:
    // 0x35ad48: 0x0  nop
    ctx->pc = 0x35ad48u;
    // NOP
label_35ad4c:
    // 0x35ad4c: 0x0  nop
    ctx->pc = 0x35ad4cu;
    // NOP
label_35ad50:
    // 0x35ad50: 0x0  nop
    ctx->pc = 0x35ad50u;
    // NOP
label_35ad54:
    // 0x35ad54: 0x0  nop
    ctx->pc = 0x35ad54u;
    // NOP
label_35ad58:
    // 0x35ad58: 0x0  nop
    ctx->pc = 0x35ad58u;
    // NOP
label_35ad5c:
    // 0x35ad5c: 0x0  nop
    ctx->pc = 0x35ad5cu;
    // NOP
label_35ad60:
    // 0x35ad60: 0x0  nop
    ctx->pc = 0x35ad60u;
    // NOP
label_35ad64:
    // 0x35ad64: 0x0  nop
    ctx->pc = 0x35ad64u;
    // NOP
label_35ad68:
    // 0x35ad68: 0x0  nop
    ctx->pc = 0x35ad68u;
    // NOP
label_35ad6c:
    // 0x35ad6c: 0x0  nop
    ctx->pc = 0x35ad6cu;
    // NOP
label_35ad70:
    // 0x35ad70: 0x0  nop
    ctx->pc = 0x35ad70u;
    // NOP
label_35ad74:
    // 0x35ad74: 0x0  nop
    ctx->pc = 0x35ad74u;
    // NOP
label_35ad78:
    // 0x35ad78: 0x0  nop
    ctx->pc = 0x35ad78u;
    // NOP
label_35ad7c:
    // 0x35ad7c: 0x0  nop
    ctx->pc = 0x35ad7cu;
    // NOP
label_35ad80:
    // 0x35ad80: 0x0  nop
    ctx->pc = 0x35ad80u;
    // NOP
label_35ad84:
    // 0x35ad84: 0x0  nop
    ctx->pc = 0x35ad84u;
    // NOP
label_35ad88:
    // 0x35ad88: 0x0  nop
    ctx->pc = 0x35ad88u;
    // NOP
label_35ad8c:
    // 0x35ad8c: 0x0  nop
    ctx->pc = 0x35ad8cu;
    // NOP
label_35ad90:
    // 0x35ad90: 0x0  nop
    ctx->pc = 0x35ad90u;
    // NOP
label_35ad94:
    // 0x35ad94: 0x0  nop
    ctx->pc = 0x35ad94u;
    // NOP
label_35ad98:
    // 0x35ad98: 0x0  nop
    ctx->pc = 0x35ad98u;
    // NOP
label_35ad9c:
    // 0x35ad9c: 0x0  nop
    ctx->pc = 0x35ad9cu;
    // NOP
label_35ada0:
    // 0x35ada0: 0x0  nop
    ctx->pc = 0x35ada0u;
    // NOP
label_35ada4:
    // 0x35ada4: 0x0  nop
    ctx->pc = 0x35ada4u;
    // NOP
label_35ada8:
    // 0x35ada8: 0x0  nop
    ctx->pc = 0x35ada8u;
    // NOP
label_35adac:
    // 0x35adac: 0x0  nop
    ctx->pc = 0x35adacu;
    // NOP
label_35adb0:
    // 0x35adb0: 0x0  nop
    ctx->pc = 0x35adb0u;
    // NOP
label_35adb4:
    // 0x35adb4: 0x0  nop
    ctx->pc = 0x35adb4u;
    // NOP
label_35adb8:
    // 0x35adb8: 0x0  nop
    ctx->pc = 0x35adb8u;
    // NOP
label_35adbc:
    // 0x35adbc: 0x0  nop
    ctx->pc = 0x35adbcu;
    // NOP
label_35adc0:
    // 0x35adc0: 0x0  nop
    ctx->pc = 0x35adc0u;
    // NOP
label_35adc4:
    // 0x35adc4: 0x0  nop
    ctx->pc = 0x35adc4u;
    // NOP
label_35adc8:
    // 0x35adc8: 0x0  nop
    ctx->pc = 0x35adc8u;
    // NOP
label_35adcc:
    // 0x35adcc: 0x0  nop
    ctx->pc = 0x35adccu;
    // NOP
label_35add0:
    // 0x35add0: 0x0  nop
    ctx->pc = 0x35add0u;
    // NOP
label_35add4:
    // 0x35add4: 0x0  nop
    ctx->pc = 0x35add4u;
    // NOP
label_35add8:
    // 0x35add8: 0x0  nop
    ctx->pc = 0x35add8u;
    // NOP
label_35addc:
    // 0x35addc: 0x0  nop
    ctx->pc = 0x35addcu;
    // NOP
label_35ade0:
    // 0x35ade0: 0x0  nop
    ctx->pc = 0x35ade0u;
    // NOP
label_35ade4:
    // 0x35ade4: 0x0  nop
    ctx->pc = 0x35ade4u;
    // NOP
label_35ade8:
    // 0x35ade8: 0x0  nop
    ctx->pc = 0x35ade8u;
    // NOP
label_35adec:
    // 0x35adec: 0x0  nop
    ctx->pc = 0x35adecu;
    // NOP
label_35adf0:
    // 0x35adf0: 0x0  nop
    ctx->pc = 0x35adf0u;
    // NOP
label_35adf4:
    // 0x35adf4: 0x0  nop
    ctx->pc = 0x35adf4u;
    // NOP
label_35adf8:
    // 0x35adf8: 0x0  nop
    ctx->pc = 0x35adf8u;
    // NOP
label_35adfc:
    // 0x35adfc: 0x0  nop
    ctx->pc = 0x35adfcu;
    // NOP
label_35ae00:
    // 0x35ae00: 0x0  nop
    ctx->pc = 0x35ae00u;
    // NOP
label_35ae04:
    // 0x35ae04: 0x0  nop
    ctx->pc = 0x35ae04u;
    // NOP
label_35ae08:
    // 0x35ae08: 0x0  nop
    ctx->pc = 0x35ae08u;
    // NOP
label_35ae0c:
    // 0x35ae0c: 0x0  nop
    ctx->pc = 0x35ae0cu;
    // NOP
label_35ae10:
    // 0x35ae10: 0x0  nop
    ctx->pc = 0x35ae10u;
    // NOP
label_35ae14:
    // 0x35ae14: 0x0  nop
    ctx->pc = 0x35ae14u;
    // NOP
label_35ae18:
    // 0x35ae18: 0x0  nop
    ctx->pc = 0x35ae18u;
    // NOP
label_35ae1c:
    // 0x35ae1c: 0x0  nop
    ctx->pc = 0x35ae1cu;
    // NOP
label_35ae20:
    // 0x35ae20: 0x0  nop
    ctx->pc = 0x35ae20u;
    // NOP
label_35ae24:
    // 0x35ae24: 0x0  nop
    ctx->pc = 0x35ae24u;
    // NOP
label_35ae28:
    // 0x35ae28: 0x0  nop
    ctx->pc = 0x35ae28u;
    // NOP
label_35ae2c:
    // 0x35ae2c: 0x0  nop
    ctx->pc = 0x35ae2cu;
    // NOP
label_35ae30:
    // 0x35ae30: 0x0  nop
    ctx->pc = 0x35ae30u;
    // NOP
label_35ae34:
    // 0x35ae34: 0x0  nop
    ctx->pc = 0x35ae34u;
    // NOP
label_35ae38:
    // 0x35ae38: 0x0  nop
    ctx->pc = 0x35ae38u;
    // NOP
label_35ae3c:
    // 0x35ae3c: 0x0  nop
    ctx->pc = 0x35ae3cu;
    // NOP
label_35ae40:
    // 0x35ae40: 0x0  nop
    ctx->pc = 0x35ae40u;
    // NOP
label_35ae44:
    // 0x35ae44: 0x0  nop
    ctx->pc = 0x35ae44u;
    // NOP
label_35ae48:
    // 0x35ae48: 0x0  nop
    ctx->pc = 0x35ae48u;
    // NOP
label_35ae4c:
    // 0x35ae4c: 0x0  nop
    ctx->pc = 0x35ae4cu;
    // NOP
label_35ae50:
    // 0x35ae50: 0x0  nop
    ctx->pc = 0x35ae50u;
    // NOP
label_35ae54:
    // 0x35ae54: 0x0  nop
    ctx->pc = 0x35ae54u;
    // NOP
label_35ae58:
    // 0x35ae58: 0x0  nop
    ctx->pc = 0x35ae58u;
    // NOP
label_35ae5c:
    // 0x35ae5c: 0x0  nop
    ctx->pc = 0x35ae5cu;
    // NOP
label_35ae60:
    // 0x35ae60: 0x0  nop
    ctx->pc = 0x35ae60u;
    // NOP
label_35ae64:
    // 0x35ae64: 0x0  nop
    ctx->pc = 0x35ae64u;
    // NOP
label_35ae68:
    // 0x35ae68: 0x0  nop
    ctx->pc = 0x35ae68u;
    // NOP
label_35ae6c:
    // 0x35ae6c: 0x0  nop
    ctx->pc = 0x35ae6cu;
    // NOP
label_35ae70:
    // 0x35ae70: 0x0  nop
    ctx->pc = 0x35ae70u;
    // NOP
label_35ae74:
    // 0x35ae74: 0x0  nop
    ctx->pc = 0x35ae74u;
    // NOP
label_35ae78:
    // 0x35ae78: 0x0  nop
    ctx->pc = 0x35ae78u;
    // NOP
label_35ae7c:
    // 0x35ae7c: 0x0  nop
    ctx->pc = 0x35ae7cu;
    // NOP
label_35ae80:
    // 0x35ae80: 0x0  nop
    ctx->pc = 0x35ae80u;
    // NOP
label_35ae84:
    // 0x35ae84: 0x0  nop
    ctx->pc = 0x35ae84u;
    // NOP
label_35ae88:
    // 0x35ae88: 0x0  nop
    ctx->pc = 0x35ae88u;
    // NOP
label_35ae8c:
    // 0x35ae8c: 0x0  nop
    ctx->pc = 0x35ae8cu;
    // NOP
label_35ae90:
    // 0x35ae90: 0x0  nop
    ctx->pc = 0x35ae90u;
    // NOP
label_35ae94:
    // 0x35ae94: 0x0  nop
    ctx->pc = 0x35ae94u;
    // NOP
label_35ae98:
    // 0x35ae98: 0x0  nop
    ctx->pc = 0x35ae98u;
    // NOP
label_35ae9c:
    // 0x35ae9c: 0x0  nop
    ctx->pc = 0x35ae9cu;
    // NOP
label_35aea0:
    // 0x35aea0: 0x0  nop
    ctx->pc = 0x35aea0u;
    // NOP
label_35aea4:
    // 0x35aea4: 0x0  nop
    ctx->pc = 0x35aea4u;
    // NOP
label_35aea8:
    // 0x35aea8: 0x0  nop
    ctx->pc = 0x35aea8u;
    // NOP
label_35aeac:
    // 0x35aeac: 0x0  nop
    ctx->pc = 0x35aeacu;
    // NOP
label_35aeb0:
    // 0x35aeb0: 0x0  nop
    ctx->pc = 0x35aeb0u;
    // NOP
label_35aeb4:
    // 0x35aeb4: 0x0  nop
    ctx->pc = 0x35aeb4u;
    // NOP
label_35aeb8:
    // 0x35aeb8: 0x0  nop
    ctx->pc = 0x35aeb8u;
    // NOP
label_35aebc:
    // 0x35aebc: 0x0  nop
    ctx->pc = 0x35aebcu;
    // NOP
label_35aec0:
    // 0x35aec0: 0x0  nop
    ctx->pc = 0x35aec0u;
    // NOP
label_35aec4:
    // 0x35aec4: 0x0  nop
    ctx->pc = 0x35aec4u;
    // NOP
label_35aec8:
    // 0x35aec8: 0x0  nop
    ctx->pc = 0x35aec8u;
    // NOP
label_35aecc:
    // 0x35aecc: 0x0  nop
    ctx->pc = 0x35aeccu;
    // NOP
label_35aed0:
    // 0x35aed0: 0x0  nop
    ctx->pc = 0x35aed0u;
    // NOP
label_35aed4:
    // 0x35aed4: 0x0  nop
    ctx->pc = 0x35aed4u;
    // NOP
label_35aed8:
    // 0x35aed8: 0x0  nop
    ctx->pc = 0x35aed8u;
    // NOP
label_35aedc:
    // 0x35aedc: 0x0  nop
    ctx->pc = 0x35aedcu;
    // NOP
label_35aee0:
    // 0x35aee0: 0x0  nop
    ctx->pc = 0x35aee0u;
    // NOP
label_35aee4:
    // 0x35aee4: 0x0  nop
    ctx->pc = 0x35aee4u;
    // NOP
label_35aee8:
    // 0x35aee8: 0x0  nop
    ctx->pc = 0x35aee8u;
    // NOP
label_35aeec:
    // 0x35aeec: 0x0  nop
    ctx->pc = 0x35aeecu;
    // NOP
label_35aef0:
    // 0x35aef0: 0x0  nop
    ctx->pc = 0x35aef0u;
    // NOP
label_35aef4:
    // 0x35aef4: 0x0  nop
    ctx->pc = 0x35aef4u;
    // NOP
label_35aef8:
    // 0x35aef8: 0x0  nop
    ctx->pc = 0x35aef8u;
    // NOP
label_35aefc:
    // 0x35aefc: 0x0  nop
    ctx->pc = 0x35aefcu;
    // NOP
label_35af00:
    // 0x35af00: 0x0  nop
    ctx->pc = 0x35af00u;
    // NOP
label_35af04:
    // 0x35af04: 0x0  nop
    ctx->pc = 0x35af04u;
    // NOP
label_35af08:
    // 0x35af08: 0x0  nop
    ctx->pc = 0x35af08u;
    // NOP
label_35af0c:
    // 0x35af0c: 0x0  nop
    ctx->pc = 0x35af0cu;
    // NOP
label_35af10:
    // 0x35af10: 0x0  nop
    ctx->pc = 0x35af10u;
    // NOP
label_35af14:
    // 0x35af14: 0x0  nop
    ctx->pc = 0x35af14u;
    // NOP
label_35af18:
    // 0x35af18: 0x0  nop
    ctx->pc = 0x35af18u;
    // NOP
label_35af1c:
    // 0x35af1c: 0x0  nop
    ctx->pc = 0x35af1cu;
    // NOP
label_35af20:
    // 0x35af20: 0x0  nop
    ctx->pc = 0x35af20u;
    // NOP
label_35af24:
    // 0x35af24: 0x0  nop
    ctx->pc = 0x35af24u;
    // NOP
label_35af28:
    // 0x35af28: 0x0  nop
    ctx->pc = 0x35af28u;
    // NOP
label_35af2c:
    // 0x35af2c: 0x0  nop
    ctx->pc = 0x35af2cu;
    // NOP
label_35af30:
    // 0x35af30: 0x0  nop
    ctx->pc = 0x35af30u;
    // NOP
label_35af34:
    // 0x35af34: 0x0  nop
    ctx->pc = 0x35af34u;
    // NOP
label_35af38:
    // 0x35af38: 0x0  nop
    ctx->pc = 0x35af38u;
    // NOP
label_35af3c:
    // 0x35af3c: 0x0  nop
    ctx->pc = 0x35af3cu;
    // NOP
label_35af40:
    // 0x35af40: 0x0  nop
    ctx->pc = 0x35af40u;
    // NOP
label_35af44:
    // 0x35af44: 0x0  nop
    ctx->pc = 0x35af44u;
    // NOP
label_35af48:
    // 0x35af48: 0x0  nop
    ctx->pc = 0x35af48u;
    // NOP
label_35af4c:
    // 0x35af4c: 0x0  nop
    ctx->pc = 0x35af4cu;
    // NOP
label_35af50:
    // 0x35af50: 0x0  nop
    ctx->pc = 0x35af50u;
    // NOP
label_35af54:
    // 0x35af54: 0x0  nop
    ctx->pc = 0x35af54u;
    // NOP
label_35af58:
    // 0x35af58: 0x0  nop
    ctx->pc = 0x35af58u;
    // NOP
label_35af5c:
    // 0x35af5c: 0x0  nop
    ctx->pc = 0x35af5cu;
    // NOP
label_35af60:
    // 0x35af60: 0x0  nop
    ctx->pc = 0x35af60u;
    // NOP
label_35af64:
    // 0x35af64: 0x0  nop
    ctx->pc = 0x35af64u;
    // NOP
label_35af68:
    // 0x35af68: 0x0  nop
    ctx->pc = 0x35af68u;
    // NOP
label_35af6c:
    // 0x35af6c: 0x0  nop
    ctx->pc = 0x35af6cu;
    // NOP
label_35af70:
    // 0x35af70: 0x0  nop
    ctx->pc = 0x35af70u;
    // NOP
label_35af74:
    // 0x35af74: 0x0  nop
    ctx->pc = 0x35af74u;
    // NOP
label_35af78:
    // 0x35af78: 0x0  nop
    ctx->pc = 0x35af78u;
    // NOP
label_35af7c:
    // 0x35af7c: 0x0  nop
    ctx->pc = 0x35af7cu;
    // NOP
label_35af80:
    // 0x35af80: 0x0  nop
    ctx->pc = 0x35af80u;
    // NOP
label_35af84:
    // 0x35af84: 0x0  nop
    ctx->pc = 0x35af84u;
    // NOP
label_35af88:
    // 0x35af88: 0x0  nop
    ctx->pc = 0x35af88u;
    // NOP
label_35af8c:
    // 0x35af8c: 0x0  nop
    ctx->pc = 0x35af8cu;
    // NOP
label_35af90:
    // 0x35af90: 0x0  nop
    ctx->pc = 0x35af90u;
    // NOP
label_35af94:
    // 0x35af94: 0x0  nop
    ctx->pc = 0x35af94u;
    // NOP
label_35af98:
    // 0x35af98: 0x0  nop
    ctx->pc = 0x35af98u;
    // NOP
label_35af9c:
    // 0x35af9c: 0x0  nop
    ctx->pc = 0x35af9cu;
    // NOP
label_35afa0:
    // 0x35afa0: 0x0  nop
    ctx->pc = 0x35afa0u;
    // NOP
label_35afa4:
    // 0x35afa4: 0x0  nop
    ctx->pc = 0x35afa4u;
    // NOP
label_35afa8:
    // 0x35afa8: 0x0  nop
    ctx->pc = 0x35afa8u;
    // NOP
label_35afac:
    // 0x35afac: 0x0  nop
    ctx->pc = 0x35afacu;
    // NOP
label_35afb0:
    // 0x35afb0: 0x0  nop
    ctx->pc = 0x35afb0u;
    // NOP
label_35afb4:
    // 0x35afb4: 0x0  nop
    ctx->pc = 0x35afb4u;
    // NOP
label_35afb8:
    // 0x35afb8: 0x0  nop
    ctx->pc = 0x35afb8u;
    // NOP
label_35afbc:
    // 0x35afbc: 0x0  nop
    ctx->pc = 0x35afbcu;
    // NOP
label_35afc0:
    // 0x35afc0: 0x0  nop
    ctx->pc = 0x35afc0u;
    // NOP
label_35afc4:
    // 0x35afc4: 0x0  nop
    ctx->pc = 0x35afc4u;
    // NOP
label_35afc8:
    // 0x35afc8: 0x0  nop
    ctx->pc = 0x35afc8u;
    // NOP
label_35afcc:
    // 0x35afcc: 0x0  nop
    ctx->pc = 0x35afccu;
    // NOP
label_35afd0:
    // 0x35afd0: 0x0  nop
    ctx->pc = 0x35afd0u;
    // NOP
label_35afd4:
    // 0x35afd4: 0x0  nop
    ctx->pc = 0x35afd4u;
    // NOP
label_35afd8:
    // 0x35afd8: 0x0  nop
    ctx->pc = 0x35afd8u;
    // NOP
label_35afdc:
    // 0x35afdc: 0x0  nop
    ctx->pc = 0x35afdcu;
    // NOP
label_35afe0:
    // 0x35afe0: 0x0  nop
    ctx->pc = 0x35afe0u;
    // NOP
label_35afe4:
    // 0x35afe4: 0x0  nop
    ctx->pc = 0x35afe4u;
    // NOP
label_35afe8:
    // 0x35afe8: 0x0  nop
    ctx->pc = 0x35afe8u;
    // NOP
label_35afec:
    // 0x35afec: 0x0  nop
    ctx->pc = 0x35afecu;
    // NOP
label_35aff0:
    // 0x35aff0: 0x0  nop
    ctx->pc = 0x35aff0u;
    // NOP
label_35aff4:
    // 0x35aff4: 0x0  nop
    ctx->pc = 0x35aff4u;
    // NOP
label_35aff8:
    // 0x35aff8: 0x0  nop
    ctx->pc = 0x35aff8u;
    // NOP
label_35affc:
    // 0x35affc: 0x0  nop
    ctx->pc = 0x35affcu;
    // NOP
label_35b000:
    // 0x35b000: 0x0  nop
    ctx->pc = 0x35b000u;
    // NOP
label_35b004:
    // 0x35b004: 0x0  nop
    ctx->pc = 0x35b004u;
    // NOP
label_35b008:
    // 0x35b008: 0x0  nop
    ctx->pc = 0x35b008u;
    // NOP
label_35b00c:
    // 0x35b00c: 0x0  nop
    ctx->pc = 0x35b00cu;
    // NOP
label_35b010:
    // 0x35b010: 0x0  nop
    ctx->pc = 0x35b010u;
    // NOP
label_35b014:
    // 0x35b014: 0x0  nop
    ctx->pc = 0x35b014u;
    // NOP
label_35b018:
    // 0x35b018: 0x0  nop
    ctx->pc = 0x35b018u;
    // NOP
label_35b01c:
    // 0x35b01c: 0x0  nop
    ctx->pc = 0x35b01cu;
    // NOP
label_35b020:
    // 0x35b020: 0x0  nop
    ctx->pc = 0x35b020u;
    // NOP
label_35b024:
    // 0x35b024: 0x0  nop
    ctx->pc = 0x35b024u;
    // NOP
label_35b028:
    // 0x35b028: 0x0  nop
    ctx->pc = 0x35b028u;
    // NOP
label_35b02c:
    // 0x35b02c: 0x0  nop
    ctx->pc = 0x35b02cu;
    // NOP
label_35b030:
    // 0x35b030: 0x0  nop
    ctx->pc = 0x35b030u;
    // NOP
label_35b034:
    // 0x35b034: 0x0  nop
    ctx->pc = 0x35b034u;
    // NOP
label_35b038:
    // 0x35b038: 0x0  nop
    ctx->pc = 0x35b038u;
    // NOP
label_35b03c:
    // 0x35b03c: 0x0  nop
    ctx->pc = 0x35b03cu;
    // NOP
label_35b040:
    // 0x35b040: 0x0  nop
    ctx->pc = 0x35b040u;
    // NOP
label_35b044:
    // 0x35b044: 0x0  nop
    ctx->pc = 0x35b044u;
    // NOP
label_35b048:
    // 0x35b048: 0x0  nop
    ctx->pc = 0x35b048u;
    // NOP
label_35b04c:
    // 0x35b04c: 0x0  nop
    ctx->pc = 0x35b04cu;
    // NOP
label_35b050:
    // 0x35b050: 0x0  nop
    ctx->pc = 0x35b050u;
    // NOP
label_35b054:
    // 0x35b054: 0x0  nop
    ctx->pc = 0x35b054u;
    // NOP
label_35b058:
    // 0x35b058: 0x0  nop
    ctx->pc = 0x35b058u;
    // NOP
label_35b05c:
    // 0x35b05c: 0x0  nop
    ctx->pc = 0x35b05cu;
    // NOP
label_35b060:
    // 0x35b060: 0x0  nop
    ctx->pc = 0x35b060u;
    // NOP
label_35b064:
    // 0x35b064: 0x0  nop
    ctx->pc = 0x35b064u;
    // NOP
label_35b068:
    // 0x35b068: 0x0  nop
    ctx->pc = 0x35b068u;
    // NOP
label_35b06c:
    // 0x35b06c: 0x0  nop
    ctx->pc = 0x35b06cu;
    // NOP
label_35b070:
    // 0x35b070: 0x0  nop
    ctx->pc = 0x35b070u;
    // NOP
label_35b074:
    // 0x35b074: 0x0  nop
    ctx->pc = 0x35b074u;
    // NOP
label_35b078:
    // 0x35b078: 0x0  nop
    ctx->pc = 0x35b078u;
    // NOP
label_35b07c:
    // 0x35b07c: 0x0  nop
    ctx->pc = 0x35b07cu;
    // NOP
label_35b080:
    // 0x35b080: 0x0  nop
    ctx->pc = 0x35b080u;
    // NOP
label_35b084:
    // 0x35b084: 0x0  nop
    ctx->pc = 0x35b084u;
    // NOP
label_35b088:
    // 0x35b088: 0x0  nop
    ctx->pc = 0x35b088u;
    // NOP
label_35b08c:
    // 0x35b08c: 0x0  nop
    ctx->pc = 0x35b08cu;
    // NOP
label_35b090:
    // 0x35b090: 0x0  nop
    ctx->pc = 0x35b090u;
    // NOP
label_35b094:
    // 0x35b094: 0x0  nop
    ctx->pc = 0x35b094u;
    // NOP
label_35b098:
    // 0x35b098: 0x0  nop
    ctx->pc = 0x35b098u;
    // NOP
label_35b09c:
    // 0x35b09c: 0x0  nop
    ctx->pc = 0x35b09cu;
    // NOP
label_35b0a0:
    // 0x35b0a0: 0x0  nop
    ctx->pc = 0x35b0a0u;
    // NOP
label_35b0a4:
    // 0x35b0a4: 0x0  nop
    ctx->pc = 0x35b0a4u;
    // NOP
label_35b0a8:
    // 0x35b0a8: 0x0  nop
    ctx->pc = 0x35b0a8u;
    // NOP
label_35b0ac:
    // 0x35b0ac: 0x0  nop
    ctx->pc = 0x35b0acu;
    // NOP
label_35b0b0:
    // 0x35b0b0: 0x0  nop
    ctx->pc = 0x35b0b0u;
    // NOP
label_35b0b4:
    // 0x35b0b4: 0x0  nop
    ctx->pc = 0x35b0b4u;
    // NOP
label_35b0b8:
    // 0x35b0b8: 0x0  nop
    ctx->pc = 0x35b0b8u;
    // NOP
label_35b0bc:
    // 0x35b0bc: 0x0  nop
    ctx->pc = 0x35b0bcu;
    // NOP
label_35b0c0:
    // 0x35b0c0: 0x0  nop
    ctx->pc = 0x35b0c0u;
    // NOP
label_35b0c4:
    // 0x35b0c4: 0x0  nop
    ctx->pc = 0x35b0c4u;
    // NOP
label_35b0c8:
    // 0x35b0c8: 0x0  nop
    ctx->pc = 0x35b0c8u;
    // NOP
label_35b0cc:
    // 0x35b0cc: 0x0  nop
    ctx->pc = 0x35b0ccu;
    // NOP
label_35b0d0:
    // 0x35b0d0: 0x0  nop
    ctx->pc = 0x35b0d0u;
    // NOP
label_35b0d4:
    // 0x35b0d4: 0x0  nop
    ctx->pc = 0x35b0d4u;
    // NOP
label_35b0d8:
    // 0x35b0d8: 0x0  nop
    ctx->pc = 0x35b0d8u;
    // NOP
label_35b0dc:
    // 0x35b0dc: 0x0  nop
    ctx->pc = 0x35b0dcu;
    // NOP
label_35b0e0:
    // 0x35b0e0: 0x0  nop
    ctx->pc = 0x35b0e0u;
    // NOP
label_35b0e4:
    // 0x35b0e4: 0x0  nop
    ctx->pc = 0x35b0e4u;
    // NOP
label_35b0e8:
    // 0x35b0e8: 0x0  nop
    ctx->pc = 0x35b0e8u;
    // NOP
label_35b0ec:
    // 0x35b0ec: 0x0  nop
    ctx->pc = 0x35b0ecu;
    // NOP
label_35b0f0:
    // 0x35b0f0: 0x0  nop
    ctx->pc = 0x35b0f0u;
    // NOP
label_35b0f4:
    // 0x35b0f4: 0x0  nop
    ctx->pc = 0x35b0f4u;
    // NOP
label_35b0f8:
    // 0x35b0f8: 0x0  nop
    ctx->pc = 0x35b0f8u;
    // NOP
label_35b0fc:
    // 0x35b0fc: 0x0  nop
    ctx->pc = 0x35b0fcu;
    // NOP
label_35b100:
    // 0x35b100: 0x0  nop
    ctx->pc = 0x35b100u;
    // NOP
label_35b104:
    // 0x35b104: 0x0  nop
    ctx->pc = 0x35b104u;
    // NOP
label_35b108:
    // 0x35b108: 0x0  nop
    ctx->pc = 0x35b108u;
    // NOP
label_35b10c:
    // 0x35b10c: 0x0  nop
    ctx->pc = 0x35b10cu;
    // NOP
label_35b110:
    // 0x35b110: 0x0  nop
    ctx->pc = 0x35b110u;
    // NOP
label_35b114:
    // 0x35b114: 0x0  nop
    ctx->pc = 0x35b114u;
    // NOP
label_35b118:
    // 0x35b118: 0x0  nop
    ctx->pc = 0x35b118u;
    // NOP
label_35b11c:
    // 0x35b11c: 0x0  nop
    ctx->pc = 0x35b11cu;
    // NOP
label_35b120:
    // 0x35b120: 0x0  nop
    ctx->pc = 0x35b120u;
    // NOP
label_35b124:
    // 0x35b124: 0x0  nop
    ctx->pc = 0x35b124u;
    // NOP
label_35b128:
    // 0x35b128: 0x0  nop
    ctx->pc = 0x35b128u;
    // NOP
label_35b12c:
    // 0x35b12c: 0x0  nop
    ctx->pc = 0x35b12cu;
    // NOP
label_35b130:
    // 0x35b130: 0x0  nop
    ctx->pc = 0x35b130u;
    // NOP
label_35b134:
    // 0x35b134: 0x0  nop
    ctx->pc = 0x35b134u;
    // NOP
label_35b138:
    // 0x35b138: 0x0  nop
    ctx->pc = 0x35b138u;
    // NOP
label_35b13c:
    // 0x35b13c: 0x0  nop
    ctx->pc = 0x35b13cu;
    // NOP
label_35b140:
    // 0x35b140: 0x0  nop
    ctx->pc = 0x35b140u;
    // NOP
label_35b144:
    // 0x35b144: 0x0  nop
    ctx->pc = 0x35b144u;
    // NOP
label_35b148:
    // 0x35b148: 0x0  nop
    ctx->pc = 0x35b148u;
    // NOP
label_35b14c:
    // 0x35b14c: 0x0  nop
    ctx->pc = 0x35b14cu;
    // NOP
label_35b150:
    // 0x35b150: 0x0  nop
    ctx->pc = 0x35b150u;
    // NOP
label_35b154:
    // 0x35b154: 0x0  nop
    ctx->pc = 0x35b154u;
    // NOP
label_35b158:
    // 0x35b158: 0x0  nop
    ctx->pc = 0x35b158u;
    // NOP
label_35b15c:
    // 0x35b15c: 0x0  nop
    ctx->pc = 0x35b15cu;
    // NOP
label_35b160:
    // 0x35b160: 0x0  nop
    ctx->pc = 0x35b160u;
    // NOP
label_35b164:
    // 0x35b164: 0x0  nop
    ctx->pc = 0x35b164u;
    // NOP
label_35b168:
    // 0x35b168: 0x0  nop
    ctx->pc = 0x35b168u;
    // NOP
label_35b16c:
    // 0x35b16c: 0x0  nop
    ctx->pc = 0x35b16cu;
    // NOP
label_35b170:
    // 0x35b170: 0x0  nop
    ctx->pc = 0x35b170u;
    // NOP
label_35b174:
    // 0x35b174: 0x0  nop
    ctx->pc = 0x35b174u;
    // NOP
label_35b178:
    // 0x35b178: 0x0  nop
    ctx->pc = 0x35b178u;
    // NOP
label_35b17c:
    // 0x35b17c: 0x0  nop
    ctx->pc = 0x35b17cu;
    // NOP
label_35b180:
    // 0x35b180: 0x0  nop
    ctx->pc = 0x35b180u;
    // NOP
label_35b184:
    // 0x35b184: 0x0  nop
    ctx->pc = 0x35b184u;
    // NOP
label_35b188:
    // 0x35b188: 0x0  nop
    ctx->pc = 0x35b188u;
    // NOP
label_35b18c:
    // 0x35b18c: 0x0  nop
    ctx->pc = 0x35b18cu;
    // NOP
label_35b190:
    // 0x35b190: 0x0  nop
    ctx->pc = 0x35b190u;
    // NOP
label_35b194:
    // 0x35b194: 0x0  nop
    ctx->pc = 0x35b194u;
    // NOP
label_35b198:
    // 0x35b198: 0x0  nop
    ctx->pc = 0x35b198u;
    // NOP
label_35b19c:
    // 0x35b19c: 0x0  nop
    ctx->pc = 0x35b19cu;
    // NOP
label_35b1a0:
    // 0x35b1a0: 0x0  nop
    ctx->pc = 0x35b1a0u;
    // NOP
label_35b1a4:
    // 0x35b1a4: 0x0  nop
    ctx->pc = 0x35b1a4u;
    // NOP
label_35b1a8:
    // 0x35b1a8: 0x0  nop
    ctx->pc = 0x35b1a8u;
    // NOP
label_35b1ac:
    // 0x35b1ac: 0x0  nop
    ctx->pc = 0x35b1acu;
    // NOP
label_35b1b0:
    // 0x35b1b0: 0x0  nop
    ctx->pc = 0x35b1b0u;
    // NOP
label_35b1b4:
    // 0x35b1b4: 0x0  nop
    ctx->pc = 0x35b1b4u;
    // NOP
label_35b1b8:
    // 0x35b1b8: 0x0  nop
    ctx->pc = 0x35b1b8u;
    // NOP
label_35b1bc:
    // 0x35b1bc: 0x0  nop
    ctx->pc = 0x35b1bcu;
    // NOP
label_35b1c0:
    // 0x35b1c0: 0x0  nop
    ctx->pc = 0x35b1c0u;
    // NOP
label_35b1c4:
    // 0x35b1c4: 0x0  nop
    ctx->pc = 0x35b1c4u;
    // NOP
label_35b1c8:
    // 0x35b1c8: 0x0  nop
    ctx->pc = 0x35b1c8u;
    // NOP
label_35b1cc:
    // 0x35b1cc: 0x0  nop
    ctx->pc = 0x35b1ccu;
    // NOP
label_35b1d0:
    // 0x35b1d0: 0x0  nop
    ctx->pc = 0x35b1d0u;
    // NOP
label_35b1d4:
    // 0x35b1d4: 0x0  nop
    ctx->pc = 0x35b1d4u;
    // NOP
label_35b1d8:
    // 0x35b1d8: 0x0  nop
    ctx->pc = 0x35b1d8u;
    // NOP
label_35b1dc:
    // 0x35b1dc: 0x0  nop
    ctx->pc = 0x35b1dcu;
    // NOP
label_35b1e0:
    // 0x35b1e0: 0x0  nop
    ctx->pc = 0x35b1e0u;
    // NOP
label_35b1e4:
    // 0x35b1e4: 0x0  nop
    ctx->pc = 0x35b1e4u;
    // NOP
label_35b1e8:
    // 0x35b1e8: 0x0  nop
    ctx->pc = 0x35b1e8u;
    // NOP
label_35b1ec:
    // 0x35b1ec: 0x0  nop
    ctx->pc = 0x35b1ecu;
    // NOP
label_35b1f0:
    // 0x35b1f0: 0x0  nop
    ctx->pc = 0x35b1f0u;
    // NOP
label_35b1f4:
    // 0x35b1f4: 0x0  nop
    ctx->pc = 0x35b1f4u;
    // NOP
label_35b1f8:
    // 0x35b1f8: 0x0  nop
    ctx->pc = 0x35b1f8u;
    // NOP
label_35b1fc:
    // 0x35b1fc: 0x0  nop
    ctx->pc = 0x35b1fcu;
    // NOP
label_35b200:
    // 0x35b200: 0x0  nop
    ctx->pc = 0x35b200u;
    // NOP
label_35b204:
    // 0x35b204: 0x0  nop
    ctx->pc = 0x35b204u;
    // NOP
label_35b208:
    // 0x35b208: 0x0  nop
    ctx->pc = 0x35b208u;
    // NOP
label_35b20c:
    // 0x35b20c: 0x0  nop
    ctx->pc = 0x35b20cu;
    // NOP
label_35b210:
    // 0x35b210: 0x0  nop
    ctx->pc = 0x35b210u;
    // NOP
label_35b214:
    // 0x35b214: 0x0  nop
    ctx->pc = 0x35b214u;
    // NOP
label_35b218:
    // 0x35b218: 0x0  nop
    ctx->pc = 0x35b218u;
    // NOP
label_35b21c:
    // 0x35b21c: 0x0  nop
    ctx->pc = 0x35b21cu;
    // NOP
label_35b220:
    // 0x35b220: 0x0  nop
    ctx->pc = 0x35b220u;
    // NOP
label_35b224:
    // 0x35b224: 0x0  nop
    ctx->pc = 0x35b224u;
    // NOP
label_35b228:
    // 0x35b228: 0x0  nop
    ctx->pc = 0x35b228u;
    // NOP
label_35b22c:
    // 0x35b22c: 0x0  nop
    ctx->pc = 0x35b22cu;
    // NOP
label_35b230:
    // 0x35b230: 0x0  nop
    ctx->pc = 0x35b230u;
    // NOP
label_35b234:
    // 0x35b234: 0x0  nop
    ctx->pc = 0x35b234u;
    // NOP
label_35b238:
    // 0x35b238: 0x0  nop
    ctx->pc = 0x35b238u;
    // NOP
label_35b23c:
    // 0x35b23c: 0x0  nop
    ctx->pc = 0x35b23cu;
    // NOP
label_35b240:
    // 0x35b240: 0x0  nop
    ctx->pc = 0x35b240u;
    // NOP
label_35b244:
    // 0x35b244: 0x0  nop
    ctx->pc = 0x35b244u;
    // NOP
label_35b248:
    // 0x35b248: 0x0  nop
    ctx->pc = 0x35b248u;
    // NOP
label_35b24c:
    // 0x35b24c: 0x0  nop
    ctx->pc = 0x35b24cu;
    // NOP
label_35b250:
    // 0x35b250: 0x0  nop
    ctx->pc = 0x35b250u;
    // NOP
label_35b254:
    // 0x35b254: 0x0  nop
    ctx->pc = 0x35b254u;
    // NOP
label_35b258:
    // 0x35b258: 0x0  nop
    ctx->pc = 0x35b258u;
    // NOP
label_35b25c:
    // 0x35b25c: 0x0  nop
    ctx->pc = 0x35b25cu;
    // NOP
label_35b260:
    // 0x35b260: 0x0  nop
    ctx->pc = 0x35b260u;
    // NOP
label_35b264:
    // 0x35b264: 0x0  nop
    ctx->pc = 0x35b264u;
    // NOP
label_35b268:
    // 0x35b268: 0x0  nop
    ctx->pc = 0x35b268u;
    // NOP
label_35b26c:
    // 0x35b26c: 0x0  nop
    ctx->pc = 0x35b26cu;
    // NOP
label_35b270:
    // 0x35b270: 0x0  nop
    ctx->pc = 0x35b270u;
    // NOP
label_35b274:
    // 0x35b274: 0x0  nop
    ctx->pc = 0x35b274u;
    // NOP
label_35b278:
    // 0x35b278: 0x0  nop
    ctx->pc = 0x35b278u;
    // NOP
label_35b27c:
    // 0x35b27c: 0x0  nop
    ctx->pc = 0x35b27cu;
    // NOP
label_35b280:
    // 0x35b280: 0x0  nop
    ctx->pc = 0x35b280u;
    // NOP
label_35b284:
    // 0x35b284: 0x0  nop
    ctx->pc = 0x35b284u;
    // NOP
label_35b288:
    // 0x35b288: 0x0  nop
    ctx->pc = 0x35b288u;
    // NOP
label_35b28c:
    // 0x35b28c: 0x0  nop
    ctx->pc = 0x35b28cu;
    // NOP
label_35b290:
    // 0x35b290: 0x0  nop
    ctx->pc = 0x35b290u;
    // NOP
label_35b294:
    // 0x35b294: 0x0  nop
    ctx->pc = 0x35b294u;
    // NOP
label_35b298:
    // 0x35b298: 0x0  nop
    ctx->pc = 0x35b298u;
    // NOP
label_35b29c:
    // 0x35b29c: 0x0  nop
    ctx->pc = 0x35b29cu;
    // NOP
label_35b2a0:
    // 0x35b2a0: 0x0  nop
    ctx->pc = 0x35b2a0u;
    // NOP
label_35b2a4:
    // 0x35b2a4: 0x0  nop
    ctx->pc = 0x35b2a4u;
    // NOP
label_35b2a8:
    // 0x35b2a8: 0x0  nop
    ctx->pc = 0x35b2a8u;
    // NOP
label_35b2ac:
    // 0x35b2ac: 0x0  nop
    ctx->pc = 0x35b2acu;
    // NOP
label_35b2b0:
    // 0x35b2b0: 0x0  nop
    ctx->pc = 0x35b2b0u;
    // NOP
label_35b2b4:
    // 0x35b2b4: 0x0  nop
    ctx->pc = 0x35b2b4u;
    // NOP
label_35b2b8:
    // 0x35b2b8: 0x0  nop
    ctx->pc = 0x35b2b8u;
    // NOP
label_35b2bc:
    // 0x35b2bc: 0x0  nop
    ctx->pc = 0x35b2bcu;
    // NOP
label_35b2c0:
    // 0x35b2c0: 0x0  nop
    ctx->pc = 0x35b2c0u;
    // NOP
label_35b2c4:
    // 0x35b2c4: 0x0  nop
    ctx->pc = 0x35b2c4u;
    // NOP
label_35b2c8:
    // 0x35b2c8: 0x0  nop
    ctx->pc = 0x35b2c8u;
    // NOP
label_35b2cc:
    // 0x35b2cc: 0x0  nop
    ctx->pc = 0x35b2ccu;
    // NOP
label_35b2d0:
    // 0x35b2d0: 0x0  nop
    ctx->pc = 0x35b2d0u;
    // NOP
label_35b2d4:
    // 0x35b2d4: 0x0  nop
    ctx->pc = 0x35b2d4u;
    // NOP
label_35b2d8:
    // 0x35b2d8: 0x0  nop
    ctx->pc = 0x35b2d8u;
    // NOP
label_35b2dc:
    // 0x35b2dc: 0x0  nop
    ctx->pc = 0x35b2dcu;
    // NOP
label_35b2e0:
    // 0x35b2e0: 0x0  nop
    ctx->pc = 0x35b2e0u;
    // NOP
label_35b2e4:
    // 0x35b2e4: 0x0  nop
    ctx->pc = 0x35b2e4u;
    // NOP
label_35b2e8:
    // 0x35b2e8: 0x0  nop
    ctx->pc = 0x35b2e8u;
    // NOP
label_35b2ec:
    // 0x35b2ec: 0x0  nop
    ctx->pc = 0x35b2ecu;
    // NOP
label_35b2f0:
    // 0x35b2f0: 0x0  nop
    ctx->pc = 0x35b2f0u;
    // NOP
label_35b2f4:
    // 0x35b2f4: 0x0  nop
    ctx->pc = 0x35b2f4u;
    // NOP
label_35b2f8:
    // 0x35b2f8: 0x0  nop
    ctx->pc = 0x35b2f8u;
    // NOP
label_35b2fc:
    // 0x35b2fc: 0x0  nop
    ctx->pc = 0x35b2fcu;
    // NOP
label_35b300:
    // 0x35b300: 0x0  nop
    ctx->pc = 0x35b300u;
    // NOP
label_35b304:
    // 0x35b304: 0x0  nop
    ctx->pc = 0x35b304u;
    // NOP
label_35b308:
    // 0x35b308: 0x0  nop
    ctx->pc = 0x35b308u;
    // NOP
label_35b30c:
    // 0x35b30c: 0x0  nop
    ctx->pc = 0x35b30cu;
    // NOP
label_35b310:
    // 0x35b310: 0x0  nop
    ctx->pc = 0x35b310u;
    // NOP
label_35b314:
    // 0x35b314: 0x0  nop
    ctx->pc = 0x35b314u;
    // NOP
label_35b318:
    // 0x35b318: 0x0  nop
    ctx->pc = 0x35b318u;
    // NOP
label_35b31c:
    // 0x35b31c: 0x0  nop
    ctx->pc = 0x35b31cu;
    // NOP
label_35b320:
    // 0x35b320: 0x0  nop
    ctx->pc = 0x35b320u;
    // NOP
label_35b324:
    // 0x35b324: 0x0  nop
    ctx->pc = 0x35b324u;
    // NOP
label_35b328:
    // 0x35b328: 0x0  nop
    ctx->pc = 0x35b328u;
    // NOP
label_35b32c:
    // 0x35b32c: 0x0  nop
    ctx->pc = 0x35b32cu;
    // NOP
label_35b330:
    // 0x35b330: 0x0  nop
    ctx->pc = 0x35b330u;
    // NOP
label_35b334:
    // 0x35b334: 0x0  nop
    ctx->pc = 0x35b334u;
    // NOP
label_35b338:
    // 0x35b338: 0x0  nop
    ctx->pc = 0x35b338u;
    // NOP
label_35b33c:
    // 0x35b33c: 0x0  nop
    ctx->pc = 0x35b33cu;
    // NOP
label_35b340:
    // 0x35b340: 0x0  nop
    ctx->pc = 0x35b340u;
    // NOP
label_35b344:
    // 0x35b344: 0x0  nop
    ctx->pc = 0x35b344u;
    // NOP
label_35b348:
    // 0x35b348: 0x0  nop
    ctx->pc = 0x35b348u;
    // NOP
label_35b34c:
    // 0x35b34c: 0x0  nop
    ctx->pc = 0x35b34cu;
    // NOP
label_35b350:
    // 0x35b350: 0x0  nop
    ctx->pc = 0x35b350u;
    // NOP
label_35b354:
    // 0x35b354: 0x0  nop
    ctx->pc = 0x35b354u;
    // NOP
label_35b358:
    // 0x35b358: 0x0  nop
    ctx->pc = 0x35b358u;
    // NOP
label_35b35c:
    // 0x35b35c: 0x0  nop
    ctx->pc = 0x35b35cu;
    // NOP
label_35b360:
    // 0x35b360: 0x0  nop
    ctx->pc = 0x35b360u;
    // NOP
label_35b364:
    // 0x35b364: 0x0  nop
    ctx->pc = 0x35b364u;
    // NOP
label_35b368:
    // 0x35b368: 0x0  nop
    ctx->pc = 0x35b368u;
    // NOP
label_35b36c:
    // 0x35b36c: 0x0  nop
    ctx->pc = 0x35b36cu;
    // NOP
label_35b370:
    // 0x35b370: 0x0  nop
    ctx->pc = 0x35b370u;
    // NOP
label_35b374:
    // 0x35b374: 0x0  nop
    ctx->pc = 0x35b374u;
    // NOP
label_35b378:
    // 0x35b378: 0x0  nop
    ctx->pc = 0x35b378u;
    // NOP
label_35b37c:
    // 0x35b37c: 0x0  nop
    ctx->pc = 0x35b37cu;
    // NOP
label_35b380:
    // 0x35b380: 0x0  nop
    ctx->pc = 0x35b380u;
    // NOP
label_35b384:
    // 0x35b384: 0x0  nop
    ctx->pc = 0x35b384u;
    // NOP
label_35b388:
    // 0x35b388: 0x0  nop
    ctx->pc = 0x35b388u;
    // NOP
label_35b38c:
    // 0x35b38c: 0x0  nop
    ctx->pc = 0x35b38cu;
    // NOP
label_35b390:
    // 0x35b390: 0x0  nop
    ctx->pc = 0x35b390u;
    // NOP
label_35b394:
    // 0x35b394: 0x0  nop
    ctx->pc = 0x35b394u;
    // NOP
label_35b398:
    // 0x35b398: 0x0  nop
    ctx->pc = 0x35b398u;
    // NOP
label_35b39c:
    // 0x35b39c: 0x0  nop
    ctx->pc = 0x35b39cu;
    // NOP
label_35b3a0:
    // 0x35b3a0: 0x0  nop
    ctx->pc = 0x35b3a0u;
    // NOP
label_35b3a4:
    // 0x35b3a4: 0x0  nop
    ctx->pc = 0x35b3a4u;
    // NOP
label_35b3a8:
    // 0x35b3a8: 0x0  nop
    ctx->pc = 0x35b3a8u;
    // NOP
label_35b3ac:
    // 0x35b3ac: 0x0  nop
    ctx->pc = 0x35b3acu;
    // NOP
label_35b3b0:
    // 0x35b3b0: 0x0  nop
    ctx->pc = 0x35b3b0u;
    // NOP
label_35b3b4:
    // 0x35b3b4: 0x0  nop
    ctx->pc = 0x35b3b4u;
    // NOP
label_35b3b8:
    // 0x35b3b8: 0x0  nop
    ctx->pc = 0x35b3b8u;
    // NOP
label_35b3bc:
    // 0x35b3bc: 0x0  nop
    ctx->pc = 0x35b3bcu;
    // NOP
label_35b3c0:
    // 0x35b3c0: 0x0  nop
    ctx->pc = 0x35b3c0u;
    // NOP
label_35b3c4:
    // 0x35b3c4: 0x0  nop
    ctx->pc = 0x35b3c4u;
    // NOP
label_35b3c8:
    // 0x35b3c8: 0x0  nop
    ctx->pc = 0x35b3c8u;
    // NOP
label_35b3cc:
    // 0x35b3cc: 0x0  nop
    ctx->pc = 0x35b3ccu;
    // NOP
label_35b3d0:
    // 0x35b3d0: 0x0  nop
    ctx->pc = 0x35b3d0u;
    // NOP
label_35b3d4:
    // 0x35b3d4: 0x0  nop
    ctx->pc = 0x35b3d4u;
    // NOP
label_35b3d8:
    // 0x35b3d8: 0x0  nop
    ctx->pc = 0x35b3d8u;
    // NOP
label_35b3dc:
    // 0x35b3dc: 0x0  nop
    ctx->pc = 0x35b3dcu;
    // NOP
label_35b3e0:
    // 0x35b3e0: 0x0  nop
    ctx->pc = 0x35b3e0u;
    // NOP
label_35b3e4:
    // 0x35b3e4: 0x0  nop
    ctx->pc = 0x35b3e4u;
    // NOP
label_35b3e8:
    // 0x35b3e8: 0x0  nop
    ctx->pc = 0x35b3e8u;
    // NOP
label_35b3ec:
    // 0x35b3ec: 0x0  nop
    ctx->pc = 0x35b3ecu;
    // NOP
label_35b3f0:
    // 0x35b3f0: 0x0  nop
    ctx->pc = 0x35b3f0u;
    // NOP
label_35b3f4:
    // 0x35b3f4: 0x0  nop
    ctx->pc = 0x35b3f4u;
    // NOP
label_35b3f8:
    // 0x35b3f8: 0x0  nop
    ctx->pc = 0x35b3f8u;
    // NOP
label_35b3fc:
    // 0x35b3fc: 0x0  nop
    ctx->pc = 0x35b3fcu;
    // NOP
label_35b400:
    // 0x35b400: 0x0  nop
    ctx->pc = 0x35b400u;
    // NOP
label_35b404:
    // 0x35b404: 0x0  nop
    ctx->pc = 0x35b404u;
    // NOP
label_35b408:
    // 0x35b408: 0x0  nop
    ctx->pc = 0x35b408u;
    // NOP
label_35b40c:
    // 0x35b40c: 0x0  nop
    ctx->pc = 0x35b40cu;
    // NOP
label_35b410:
    // 0x35b410: 0x0  nop
    ctx->pc = 0x35b410u;
    // NOP
label_35b414:
    // 0x35b414: 0x0  nop
    ctx->pc = 0x35b414u;
    // NOP
label_35b418:
    // 0x35b418: 0x0  nop
    ctx->pc = 0x35b418u;
    // NOP
label_35b41c:
    // 0x35b41c: 0x0  nop
    ctx->pc = 0x35b41cu;
    // NOP
label_35b420:
    // 0x35b420: 0x0  nop
    ctx->pc = 0x35b420u;
    // NOP
label_35b424:
    // 0x35b424: 0x0  nop
    ctx->pc = 0x35b424u;
    // NOP
label_35b428:
    // 0x35b428: 0x0  nop
    ctx->pc = 0x35b428u;
    // NOP
label_35b42c:
    // 0x35b42c: 0x0  nop
    ctx->pc = 0x35b42cu;
    // NOP
label_35b430:
    // 0x35b430: 0x0  nop
    ctx->pc = 0x35b430u;
    // NOP
label_35b434:
    // 0x35b434: 0x0  nop
    ctx->pc = 0x35b434u;
    // NOP
label_35b438:
    // 0x35b438: 0x0  nop
    ctx->pc = 0x35b438u;
    // NOP
label_35b43c:
    // 0x35b43c: 0x0  nop
    ctx->pc = 0x35b43cu;
    // NOP
label_35b440:
    // 0x35b440: 0x0  nop
    ctx->pc = 0x35b440u;
    // NOP
label_35b444:
    // 0x35b444: 0x0  nop
    ctx->pc = 0x35b444u;
    // NOP
label_35b448:
    // 0x35b448: 0x0  nop
    ctx->pc = 0x35b448u;
    // NOP
label_35b44c:
    // 0x35b44c: 0x0  nop
    ctx->pc = 0x35b44cu;
    // NOP
label_35b450:
    // 0x35b450: 0x0  nop
    ctx->pc = 0x35b450u;
    // NOP
label_35b454:
    // 0x35b454: 0x0  nop
    ctx->pc = 0x35b454u;
    // NOP
label_35b458:
    // 0x35b458: 0x0  nop
    ctx->pc = 0x35b458u;
    // NOP
label_35b45c:
    // 0x35b45c: 0x0  nop
    ctx->pc = 0x35b45cu;
    // NOP
label_35b460:
    // 0x35b460: 0x0  nop
    ctx->pc = 0x35b460u;
    // NOP
label_35b464:
    // 0x35b464: 0x0  nop
    ctx->pc = 0x35b464u;
    // NOP
label_35b468:
    // 0x35b468: 0x0  nop
    ctx->pc = 0x35b468u;
    // NOP
label_35b46c:
    // 0x35b46c: 0x0  nop
    ctx->pc = 0x35b46cu;
    // NOP
label_35b470:
    // 0x35b470: 0x0  nop
    ctx->pc = 0x35b470u;
    // NOP
label_35b474:
    // 0x35b474: 0x0  nop
    ctx->pc = 0x35b474u;
    // NOP
label_35b478:
    // 0x35b478: 0x0  nop
    ctx->pc = 0x35b478u;
    // NOP
label_35b47c:
    // 0x35b47c: 0x0  nop
    ctx->pc = 0x35b47cu;
    // NOP
label_35b480:
    // 0x35b480: 0x0  nop
    ctx->pc = 0x35b480u;
    // NOP
label_35b484:
    // 0x35b484: 0x0  nop
    ctx->pc = 0x35b484u;
    // NOP
label_35b488:
    // 0x35b488: 0x0  nop
    ctx->pc = 0x35b488u;
    // NOP
label_35b48c:
    // 0x35b48c: 0x0  nop
    ctx->pc = 0x35b48cu;
    // NOP
label_35b490:
    // 0x35b490: 0x0  nop
    ctx->pc = 0x35b490u;
    // NOP
label_35b494:
    // 0x35b494: 0x0  nop
    ctx->pc = 0x35b494u;
    // NOP
label_35b498:
    // 0x35b498: 0x0  nop
    ctx->pc = 0x35b498u;
    // NOP
label_35b49c:
    // 0x35b49c: 0x0  nop
    ctx->pc = 0x35b49cu;
    // NOP
label_35b4a0:
    // 0x35b4a0: 0x0  nop
    ctx->pc = 0x35b4a0u;
    // NOP
label_35b4a4:
    // 0x35b4a4: 0x0  nop
    ctx->pc = 0x35b4a4u;
    // NOP
label_35b4a8:
    // 0x35b4a8: 0x0  nop
    ctx->pc = 0x35b4a8u;
    // NOP
label_35b4ac:
    // 0x35b4ac: 0x0  nop
    ctx->pc = 0x35b4acu;
    // NOP
label_35b4b0:
    // 0x35b4b0: 0x0  nop
    ctx->pc = 0x35b4b0u;
    // NOP
label_35b4b4:
    // 0x35b4b4: 0x0  nop
    ctx->pc = 0x35b4b4u;
    // NOP
label_35b4b8:
    // 0x35b4b8: 0x0  nop
    ctx->pc = 0x35b4b8u;
    // NOP
label_35b4bc:
    // 0x35b4bc: 0x0  nop
    ctx->pc = 0x35b4bcu;
    // NOP
label_35b4c0:
    // 0x35b4c0: 0x0  nop
    ctx->pc = 0x35b4c0u;
    // NOP
label_35b4c4:
    // 0x35b4c4: 0x0  nop
    ctx->pc = 0x35b4c4u;
    // NOP
label_35b4c8:
    // 0x35b4c8: 0x0  nop
    ctx->pc = 0x35b4c8u;
    // NOP
label_35b4cc:
    // 0x35b4cc: 0x0  nop
    ctx->pc = 0x35b4ccu;
    // NOP
label_35b4d0:
    // 0x35b4d0: 0x0  nop
    ctx->pc = 0x35b4d0u;
    // NOP
label_35b4d4:
    // 0x35b4d4: 0x0  nop
    ctx->pc = 0x35b4d4u;
    // NOP
label_35b4d8:
    // 0x35b4d8: 0x0  nop
    ctx->pc = 0x35b4d8u;
    // NOP
label_35b4dc:
    // 0x35b4dc: 0x0  nop
    ctx->pc = 0x35b4dcu;
    // NOP
label_35b4e0:
    // 0x35b4e0: 0x0  nop
    ctx->pc = 0x35b4e0u;
    // NOP
label_35b4e4:
    // 0x35b4e4: 0x0  nop
    ctx->pc = 0x35b4e4u;
    // NOP
label_35b4e8:
    // 0x35b4e8: 0x0  nop
    ctx->pc = 0x35b4e8u;
    // NOP
label_35b4ec:
    // 0x35b4ec: 0x0  nop
    ctx->pc = 0x35b4ecu;
    // NOP
label_35b4f0:
    // 0x35b4f0: 0x0  nop
    ctx->pc = 0x35b4f0u;
    // NOP
label_35b4f4:
    // 0x35b4f4: 0x0  nop
    ctx->pc = 0x35b4f4u;
    // NOP
label_35b4f8:
    // 0x35b4f8: 0x0  nop
    ctx->pc = 0x35b4f8u;
    // NOP
label_35b4fc:
    // 0x35b4fc: 0x0  nop
    ctx->pc = 0x35b4fcu;
    // NOP
label_35b500:
    // 0x35b500: 0x0  nop
    ctx->pc = 0x35b500u;
    // NOP
label_35b504:
    // 0x35b504: 0x0  nop
    ctx->pc = 0x35b504u;
    // NOP
label_35b508:
    // 0x35b508: 0x0  nop
    ctx->pc = 0x35b508u;
    // NOP
label_35b50c:
    // 0x35b50c: 0x0  nop
    ctx->pc = 0x35b50cu;
    // NOP
label_35b510:
    // 0x35b510: 0x0  nop
    ctx->pc = 0x35b510u;
    // NOP
label_35b514:
    // 0x35b514: 0x0  nop
    ctx->pc = 0x35b514u;
    // NOP
label_35b518:
    // 0x35b518: 0x0  nop
    ctx->pc = 0x35b518u;
    // NOP
label_35b51c:
    // 0x35b51c: 0x0  nop
    ctx->pc = 0x35b51cu;
    // NOP
label_35b520:
    // 0x35b520: 0x0  nop
    ctx->pc = 0x35b520u;
    // NOP
label_35b524:
    // 0x35b524: 0x0  nop
    ctx->pc = 0x35b524u;
    // NOP
label_35b528:
    // 0x35b528: 0x0  nop
    ctx->pc = 0x35b528u;
    // NOP
label_35b52c:
    // 0x35b52c: 0x0  nop
    ctx->pc = 0x35b52cu;
    // NOP
label_35b530:
    // 0x35b530: 0x0  nop
    ctx->pc = 0x35b530u;
    // NOP
label_35b534:
    // 0x35b534: 0x0  nop
    ctx->pc = 0x35b534u;
    // NOP
label_35b538:
    // 0x35b538: 0x0  nop
    ctx->pc = 0x35b538u;
    // NOP
label_35b53c:
    // 0x35b53c: 0x0  nop
    ctx->pc = 0x35b53cu;
    // NOP
label_35b540:
    // 0x35b540: 0x0  nop
    ctx->pc = 0x35b540u;
    // NOP
label_35b544:
    // 0x35b544: 0x0  nop
    ctx->pc = 0x35b544u;
    // NOP
label_35b548:
    // 0x35b548: 0x0  nop
    ctx->pc = 0x35b548u;
    // NOP
label_35b54c:
    // 0x35b54c: 0x0  nop
    ctx->pc = 0x35b54cu;
    // NOP
label_35b550:
    // 0x35b550: 0x0  nop
    ctx->pc = 0x35b550u;
    // NOP
label_35b554:
    // 0x35b554: 0x0  nop
    ctx->pc = 0x35b554u;
    // NOP
label_35b558:
    // 0x35b558: 0x0  nop
    ctx->pc = 0x35b558u;
    // NOP
label_35b55c:
    // 0x35b55c: 0x0  nop
    ctx->pc = 0x35b55cu;
    // NOP
label_35b560:
    // 0x35b560: 0x0  nop
    ctx->pc = 0x35b560u;
    // NOP
label_35b564:
    // 0x35b564: 0x0  nop
    ctx->pc = 0x35b564u;
    // NOP
label_35b568:
    // 0x35b568: 0x0  nop
    ctx->pc = 0x35b568u;
    // NOP
label_35b56c:
    // 0x35b56c: 0x0  nop
    ctx->pc = 0x35b56cu;
    // NOP
label_35b570:
    // 0x35b570: 0x0  nop
    ctx->pc = 0x35b570u;
    // NOP
label_35b574:
    // 0x35b574: 0x0  nop
    ctx->pc = 0x35b574u;
    // NOP
label_35b578:
    // 0x35b578: 0x0  nop
    ctx->pc = 0x35b578u;
    // NOP
label_35b57c:
    // 0x35b57c: 0x0  nop
    ctx->pc = 0x35b57cu;
    // NOP
label_35b580:
    // 0x35b580: 0x0  nop
    ctx->pc = 0x35b580u;
    // NOP
label_35b584:
    // 0x35b584: 0x0  nop
    ctx->pc = 0x35b584u;
    // NOP
label_35b588:
    // 0x35b588: 0x0  nop
    ctx->pc = 0x35b588u;
    // NOP
label_35b58c:
    // 0x35b58c: 0x0  nop
    ctx->pc = 0x35b58cu;
    // NOP
label_35b590:
    // 0x35b590: 0x0  nop
    ctx->pc = 0x35b590u;
    // NOP
label_35b594:
    // 0x35b594: 0x0  nop
    ctx->pc = 0x35b594u;
    // NOP
label_35b598:
    // 0x35b598: 0x0  nop
    ctx->pc = 0x35b598u;
    // NOP
label_35b59c:
    // 0x35b59c: 0x0  nop
    ctx->pc = 0x35b59cu;
    // NOP
label_35b5a0:
    // 0x35b5a0: 0x0  nop
    ctx->pc = 0x35b5a0u;
    // NOP
label_35b5a4:
    // 0x35b5a4: 0x0  nop
    ctx->pc = 0x35b5a4u;
    // NOP
label_35b5a8:
    // 0x35b5a8: 0x0  nop
    ctx->pc = 0x35b5a8u;
    // NOP
label_35b5ac:
    // 0x35b5ac: 0x0  nop
    ctx->pc = 0x35b5acu;
    // NOP
label_35b5b0:
    // 0x35b5b0: 0x0  nop
    ctx->pc = 0x35b5b0u;
    // NOP
label_35b5b4:
    // 0x35b5b4: 0x0  nop
    ctx->pc = 0x35b5b4u;
    // NOP
label_35b5b8:
    // 0x35b5b8: 0x0  nop
    ctx->pc = 0x35b5b8u;
    // NOP
label_35b5bc:
    // 0x35b5bc: 0x0  nop
    ctx->pc = 0x35b5bcu;
    // NOP
label_35b5c0:
    // 0x35b5c0: 0x0  nop
    ctx->pc = 0x35b5c0u;
    // NOP
label_35b5c4:
    // 0x35b5c4: 0x0  nop
    ctx->pc = 0x35b5c4u;
    // NOP
label_35b5c8:
    // 0x35b5c8: 0x0  nop
    ctx->pc = 0x35b5c8u;
    // NOP
label_35b5cc:
    // 0x35b5cc: 0x0  nop
    ctx->pc = 0x35b5ccu;
    // NOP
label_35b5d0:
    // 0x35b5d0: 0x0  nop
    ctx->pc = 0x35b5d0u;
    // NOP
label_35b5d4:
    // 0x35b5d4: 0x0  nop
    ctx->pc = 0x35b5d4u;
    // NOP
label_35b5d8:
    // 0x35b5d8: 0x0  nop
    ctx->pc = 0x35b5d8u;
    // NOP
label_35b5dc:
    // 0x35b5dc: 0x0  nop
    ctx->pc = 0x35b5dcu;
    // NOP
label_35b5e0:
    // 0x35b5e0: 0x0  nop
    ctx->pc = 0x35b5e0u;
    // NOP
label_35b5e4:
    // 0x35b5e4: 0x0  nop
    ctx->pc = 0x35b5e4u;
    // NOP
label_35b5e8:
    // 0x35b5e8: 0x0  nop
    ctx->pc = 0x35b5e8u;
    // NOP
label_35b5ec:
    // 0x35b5ec: 0x0  nop
    ctx->pc = 0x35b5ecu;
    // NOP
label_35b5f0:
    // 0x35b5f0: 0x0  nop
    ctx->pc = 0x35b5f0u;
    // NOP
label_35b5f4:
    // 0x35b5f4: 0x0  nop
    ctx->pc = 0x35b5f4u;
    // NOP
label_35b5f8:
    // 0x35b5f8: 0x0  nop
    ctx->pc = 0x35b5f8u;
    // NOP
label_35b5fc:
    // 0x35b5fc: 0x0  nop
    ctx->pc = 0x35b5fcu;
    // NOP
label_35b600:
    // 0x35b600: 0x0  nop
    ctx->pc = 0x35b600u;
    // NOP
label_35b604:
    // 0x35b604: 0x0  nop
    ctx->pc = 0x35b604u;
    // NOP
label_35b608:
    // 0x35b608: 0x0  nop
    ctx->pc = 0x35b608u;
    // NOP
label_35b60c:
    // 0x35b60c: 0x0  nop
    ctx->pc = 0x35b60cu;
    // NOP
label_35b610:
    // 0x35b610: 0x0  nop
    ctx->pc = 0x35b610u;
    // NOP
label_35b614:
    // 0x35b614: 0x0  nop
    ctx->pc = 0x35b614u;
    // NOP
label_35b618:
    // 0x35b618: 0x0  nop
    ctx->pc = 0x35b618u;
    // NOP
label_35b61c:
    // 0x35b61c: 0x0  nop
    ctx->pc = 0x35b61cu;
    // NOP
label_35b620:
    // 0x35b620: 0x0  nop
    ctx->pc = 0x35b620u;
    // NOP
label_35b624:
    // 0x35b624: 0x0  nop
    ctx->pc = 0x35b624u;
    // NOP
label_35b628:
    // 0x35b628: 0x0  nop
    ctx->pc = 0x35b628u;
    // NOP
label_35b62c:
    // 0x35b62c: 0x0  nop
    ctx->pc = 0x35b62cu;
    // NOP
label_35b630:
    // 0x35b630: 0x0  nop
    ctx->pc = 0x35b630u;
    // NOP
label_35b634:
    // 0x35b634: 0x0  nop
    ctx->pc = 0x35b634u;
    // NOP
label_35b638:
    // 0x35b638: 0x0  nop
    ctx->pc = 0x35b638u;
    // NOP
label_35b63c:
    // 0x35b63c: 0x0  nop
    ctx->pc = 0x35b63cu;
    // NOP
label_35b640:
    // 0x35b640: 0x0  nop
    ctx->pc = 0x35b640u;
    // NOP
label_35b644:
    // 0x35b644: 0x0  nop
    ctx->pc = 0x35b644u;
    // NOP
label_35b648:
    // 0x35b648: 0x0  nop
    ctx->pc = 0x35b648u;
    // NOP
label_35b64c:
    // 0x35b64c: 0x0  nop
    ctx->pc = 0x35b64cu;
    // NOP
label_35b650:
    // 0x35b650: 0x0  nop
    ctx->pc = 0x35b650u;
    // NOP
label_35b654:
    // 0x35b654: 0x0  nop
    ctx->pc = 0x35b654u;
    // NOP
label_35b658:
    // 0x35b658: 0x0  nop
    ctx->pc = 0x35b658u;
    // NOP
label_35b65c:
    // 0x35b65c: 0x0  nop
    ctx->pc = 0x35b65cu;
    // NOP
label_35b660:
    // 0x35b660: 0x0  nop
    ctx->pc = 0x35b660u;
    // NOP
label_35b664:
    // 0x35b664: 0x0  nop
    ctx->pc = 0x35b664u;
    // NOP
label_35b668:
    // 0x35b668: 0x0  nop
    ctx->pc = 0x35b668u;
    // NOP
label_35b66c:
    // 0x35b66c: 0x0  nop
    ctx->pc = 0x35b66cu;
    // NOP
label_35b670:
    // 0x35b670: 0x0  nop
    ctx->pc = 0x35b670u;
    // NOP
label_35b674:
    // 0x35b674: 0x0  nop
    ctx->pc = 0x35b674u;
    // NOP
label_35b678:
    // 0x35b678: 0x0  nop
    ctx->pc = 0x35b678u;
    // NOP
label_35b67c:
    // 0x35b67c: 0x0  nop
    ctx->pc = 0x35b67cu;
    // NOP
label_35b680:
    // 0x35b680: 0x0  nop
    ctx->pc = 0x35b680u;
    // NOP
label_35b684:
    // 0x35b684: 0x0  nop
    ctx->pc = 0x35b684u;
    // NOP
label_35b688:
    // 0x35b688: 0x0  nop
    ctx->pc = 0x35b688u;
    // NOP
label_35b68c:
    // 0x35b68c: 0x0  nop
    ctx->pc = 0x35b68cu;
    // NOP
label_35b690:
    // 0x35b690: 0x0  nop
    ctx->pc = 0x35b690u;
    // NOP
label_35b694:
    // 0x35b694: 0x0  nop
    ctx->pc = 0x35b694u;
    // NOP
label_35b698:
    // 0x35b698: 0x0  nop
    ctx->pc = 0x35b698u;
    // NOP
label_35b69c:
    // 0x35b69c: 0x0  nop
    ctx->pc = 0x35b69cu;
    // NOP
label_35b6a0:
    // 0x35b6a0: 0x0  nop
    ctx->pc = 0x35b6a0u;
    // NOP
label_35b6a4:
    // 0x35b6a4: 0x0  nop
    ctx->pc = 0x35b6a4u;
    // NOP
label_35b6a8:
    // 0x35b6a8: 0x0  nop
    ctx->pc = 0x35b6a8u;
    // NOP
label_35b6ac:
    // 0x35b6ac: 0x0  nop
    ctx->pc = 0x35b6acu;
    // NOP
label_35b6b0:
    // 0x35b6b0: 0x0  nop
    ctx->pc = 0x35b6b0u;
    // NOP
label_35b6b4:
    // 0x35b6b4: 0x0  nop
    ctx->pc = 0x35b6b4u;
    // NOP
label_35b6b8:
    // 0x35b6b8: 0x0  nop
    ctx->pc = 0x35b6b8u;
    // NOP
label_35b6bc:
    // 0x35b6bc: 0x0  nop
    ctx->pc = 0x35b6bcu;
    // NOP
label_35b6c0:
    // 0x35b6c0: 0x0  nop
    ctx->pc = 0x35b6c0u;
    // NOP
label_35b6c4:
    // 0x35b6c4: 0x0  nop
    ctx->pc = 0x35b6c4u;
    // NOP
label_35b6c8:
    // 0x35b6c8: 0x0  nop
    ctx->pc = 0x35b6c8u;
    // NOP
label_35b6cc:
    // 0x35b6cc: 0x0  nop
    ctx->pc = 0x35b6ccu;
    // NOP
label_35b6d0:
    // 0x35b6d0: 0x0  nop
    ctx->pc = 0x35b6d0u;
    // NOP
label_35b6d4:
    // 0x35b6d4: 0x0  nop
    ctx->pc = 0x35b6d4u;
    // NOP
label_35b6d8:
    // 0x35b6d8: 0x0  nop
    ctx->pc = 0x35b6d8u;
    // NOP
label_35b6dc:
    // 0x35b6dc: 0x0  nop
    ctx->pc = 0x35b6dcu;
    // NOP
label_35b6e0:
    // 0x35b6e0: 0x0  nop
    ctx->pc = 0x35b6e0u;
    // NOP
label_35b6e4:
    // 0x35b6e4: 0x0  nop
    ctx->pc = 0x35b6e4u;
    // NOP
label_35b6e8:
    // 0x35b6e8: 0x0  nop
    ctx->pc = 0x35b6e8u;
    // NOP
label_35b6ec:
    // 0x35b6ec: 0x0  nop
    ctx->pc = 0x35b6ecu;
    // NOP
label_35b6f0:
    // 0x35b6f0: 0x0  nop
    ctx->pc = 0x35b6f0u;
    // NOP
label_35b6f4:
    // 0x35b6f4: 0x0  nop
    ctx->pc = 0x35b6f4u;
    // NOP
label_35b6f8:
    // 0x35b6f8: 0x0  nop
    ctx->pc = 0x35b6f8u;
    // NOP
label_35b6fc:
    // 0x35b6fc: 0x0  nop
    ctx->pc = 0x35b6fcu;
    // NOP
label_35b700:
    // 0x35b700: 0x0  nop
    ctx->pc = 0x35b700u;
    // NOP
label_35b704:
    // 0x35b704: 0x0  nop
    ctx->pc = 0x35b704u;
    // NOP
label_35b708:
    // 0x35b708: 0x0  nop
    ctx->pc = 0x35b708u;
    // NOP
label_35b70c:
    // 0x35b70c: 0x0  nop
    ctx->pc = 0x35b70cu;
    // NOP
label_35b710:
    // 0x35b710: 0x0  nop
    ctx->pc = 0x35b710u;
    // NOP
label_35b714:
    // 0x35b714: 0x0  nop
    ctx->pc = 0x35b714u;
    // NOP
label_35b718:
    // 0x35b718: 0x0  nop
    ctx->pc = 0x35b718u;
    // NOP
label_35b71c:
    // 0x35b71c: 0x0  nop
    ctx->pc = 0x35b71cu;
    // NOP
label_35b720:
    // 0x35b720: 0x0  nop
    ctx->pc = 0x35b720u;
    // NOP
label_35b724:
    // 0x35b724: 0x0  nop
    ctx->pc = 0x35b724u;
    // NOP
label_35b728:
    // 0x35b728: 0x0  nop
    ctx->pc = 0x35b728u;
    // NOP
label_35b72c:
    // 0x35b72c: 0x0  nop
    ctx->pc = 0x35b72cu;
    // NOP
label_35b730:
    // 0x35b730: 0x0  nop
    ctx->pc = 0x35b730u;
    // NOP
label_35b734:
    // 0x35b734: 0x0  nop
    ctx->pc = 0x35b734u;
    // NOP
label_35b738:
    // 0x35b738: 0x0  nop
    ctx->pc = 0x35b738u;
    // NOP
label_35b73c:
    // 0x35b73c: 0x0  nop
    ctx->pc = 0x35b73cu;
    // NOP
label_35b740:
    // 0x35b740: 0x0  nop
    ctx->pc = 0x35b740u;
    // NOP
label_35b744:
    // 0x35b744: 0x0  nop
    ctx->pc = 0x35b744u;
    // NOP
label_35b748:
    // 0x35b748: 0x0  nop
    ctx->pc = 0x35b748u;
    // NOP
label_35b74c:
    // 0x35b74c: 0x0  nop
    ctx->pc = 0x35b74cu;
    // NOP
label_35b750:
    // 0x35b750: 0x0  nop
    ctx->pc = 0x35b750u;
    // NOP
label_35b754:
    // 0x35b754: 0x0  nop
    ctx->pc = 0x35b754u;
    // NOP
label_35b758:
    // 0x35b758: 0x0  nop
    ctx->pc = 0x35b758u;
    // NOP
label_35b75c:
    // 0x35b75c: 0x0  nop
    ctx->pc = 0x35b75cu;
    // NOP
label_35b760:
    // 0x35b760: 0x0  nop
    ctx->pc = 0x35b760u;
    // NOP
label_35b764:
    // 0x35b764: 0x0  nop
    ctx->pc = 0x35b764u;
    // NOP
label_35b768:
    // 0x35b768: 0x0  nop
    ctx->pc = 0x35b768u;
    // NOP
label_35b76c:
    // 0x35b76c: 0x0  nop
    ctx->pc = 0x35b76cu;
    // NOP
label_35b770:
    // 0x35b770: 0x0  nop
    ctx->pc = 0x35b770u;
    // NOP
label_35b774:
    // 0x35b774: 0x0  nop
    ctx->pc = 0x35b774u;
    // NOP
label_35b778:
    // 0x35b778: 0x0  nop
    ctx->pc = 0x35b778u;
    // NOP
label_35b77c:
    // 0x35b77c: 0x0  nop
    ctx->pc = 0x35b77cu;
    // NOP
label_35b780:
    // 0x35b780: 0x0  nop
    ctx->pc = 0x35b780u;
    // NOP
label_35b784:
    // 0x35b784: 0x0  nop
    ctx->pc = 0x35b784u;
    // NOP
label_35b788:
    // 0x35b788: 0x0  nop
    ctx->pc = 0x35b788u;
    // NOP
label_35b78c:
    // 0x35b78c: 0x0  nop
    ctx->pc = 0x35b78cu;
    // NOP
label_35b790:
    // 0x35b790: 0x0  nop
    ctx->pc = 0x35b790u;
    // NOP
label_35b794:
    // 0x35b794: 0x0  nop
    ctx->pc = 0x35b794u;
    // NOP
label_35b798:
    // 0x35b798: 0x0  nop
    ctx->pc = 0x35b798u;
    // NOP
label_35b79c:
    // 0x35b79c: 0x0  nop
    ctx->pc = 0x35b79cu;
    // NOP
label_35b7a0:
    // 0x35b7a0: 0x0  nop
    ctx->pc = 0x35b7a0u;
    // NOP
label_35b7a4:
    // 0x35b7a4: 0x0  nop
    ctx->pc = 0x35b7a4u;
    // NOP
label_35b7a8:
    // 0x35b7a8: 0x0  nop
    ctx->pc = 0x35b7a8u;
    // NOP
label_35b7ac:
    // 0x35b7ac: 0x0  nop
    ctx->pc = 0x35b7acu;
    // NOP
label_35b7b0:
    // 0x35b7b0: 0x0  nop
    ctx->pc = 0x35b7b0u;
    // NOP
label_35b7b4:
    // 0x35b7b4: 0x0  nop
    ctx->pc = 0x35b7b4u;
    // NOP
label_35b7b8:
    // 0x35b7b8: 0x0  nop
    ctx->pc = 0x35b7b8u;
    // NOP
label_35b7bc:
    // 0x35b7bc: 0x0  nop
    ctx->pc = 0x35b7bcu;
    // NOP
label_35b7c0:
    // 0x35b7c0: 0x0  nop
    ctx->pc = 0x35b7c0u;
    // NOP
label_35b7c4:
    // 0x35b7c4: 0x0  nop
    ctx->pc = 0x35b7c4u;
    // NOP
label_35b7c8:
    // 0x35b7c8: 0x0  nop
    ctx->pc = 0x35b7c8u;
    // NOP
label_35b7cc:
    // 0x35b7cc: 0x0  nop
    ctx->pc = 0x35b7ccu;
    // NOP
label_35b7d0:
    // 0x35b7d0: 0x0  nop
    ctx->pc = 0x35b7d0u;
    // NOP
label_35b7d4:
    // 0x35b7d4: 0x0  nop
    ctx->pc = 0x35b7d4u;
    // NOP
label_35b7d8:
    // 0x35b7d8: 0x0  nop
    ctx->pc = 0x35b7d8u;
    // NOP
label_35b7dc:
    // 0x35b7dc: 0x0  nop
    ctx->pc = 0x35b7dcu;
    // NOP
label_35b7e0:
    // 0x35b7e0: 0x0  nop
    ctx->pc = 0x35b7e0u;
    // NOP
label_35b7e4:
    // 0x35b7e4: 0x0  nop
    ctx->pc = 0x35b7e4u;
    // NOP
label_35b7e8:
    // 0x35b7e8: 0x0  nop
    ctx->pc = 0x35b7e8u;
    // NOP
label_35b7ec:
    // 0x35b7ec: 0x0  nop
    ctx->pc = 0x35b7ecu;
    // NOP
label_35b7f0:
    // 0x35b7f0: 0x0  nop
    ctx->pc = 0x35b7f0u;
    // NOP
label_35b7f4:
    // 0x35b7f4: 0x0  nop
    ctx->pc = 0x35b7f4u;
    // NOP
label_35b7f8:
    // 0x35b7f8: 0x0  nop
    ctx->pc = 0x35b7f8u;
    // NOP
label_35b7fc:
    // 0x35b7fc: 0x0  nop
    ctx->pc = 0x35b7fcu;
    // NOP
label_35b800:
    // 0x35b800: 0x0  nop
    ctx->pc = 0x35b800u;
    // NOP
label_35b804:
    // 0x35b804: 0x0  nop
    ctx->pc = 0x35b804u;
    // NOP
label_35b808:
    // 0x35b808: 0x0  nop
    ctx->pc = 0x35b808u;
    // NOP
label_35b80c:
    // 0x35b80c: 0x0  nop
    ctx->pc = 0x35b80cu;
    // NOP
label_35b810:
    // 0x35b810: 0x0  nop
    ctx->pc = 0x35b810u;
    // NOP
label_35b814:
    // 0x35b814: 0x0  nop
    ctx->pc = 0x35b814u;
    // NOP
label_35b818:
    // 0x35b818: 0x0  nop
    ctx->pc = 0x35b818u;
    // NOP
label_35b81c:
    // 0x35b81c: 0x0  nop
    ctx->pc = 0x35b81cu;
    // NOP
label_35b820:
    // 0x35b820: 0x0  nop
    ctx->pc = 0x35b820u;
    // NOP
label_35b824:
    // 0x35b824: 0x0  nop
    ctx->pc = 0x35b824u;
    // NOP
label_35b828:
    // 0x35b828: 0x0  nop
    ctx->pc = 0x35b828u;
    // NOP
label_35b82c:
    // 0x35b82c: 0x0  nop
    ctx->pc = 0x35b82cu;
    // NOP
label_35b830:
    // 0x35b830: 0x0  nop
    ctx->pc = 0x35b830u;
    // NOP
label_35b834:
    // 0x35b834: 0x0  nop
    ctx->pc = 0x35b834u;
    // NOP
label_35b838:
    // 0x35b838: 0x0  nop
    ctx->pc = 0x35b838u;
    // NOP
label_35b83c:
    // 0x35b83c: 0x0  nop
    ctx->pc = 0x35b83cu;
    // NOP
label_35b840:
    // 0x35b840: 0x0  nop
    ctx->pc = 0x35b840u;
    // NOP
label_35b844:
    // 0x35b844: 0x0  nop
    ctx->pc = 0x35b844u;
    // NOP
label_35b848:
    // 0x35b848: 0x0  nop
    ctx->pc = 0x35b848u;
    // NOP
label_35b84c:
    // 0x35b84c: 0x0  nop
    ctx->pc = 0x35b84cu;
    // NOP
label_35b850:
    // 0x35b850: 0x0  nop
    ctx->pc = 0x35b850u;
    // NOP
label_35b854:
    // 0x35b854: 0x0  nop
    ctx->pc = 0x35b854u;
    // NOP
label_35b858:
    // 0x35b858: 0x0  nop
    ctx->pc = 0x35b858u;
    // NOP
label_35b85c:
    // 0x35b85c: 0x0  nop
    ctx->pc = 0x35b85cu;
    // NOP
label_35b860:
    // 0x35b860: 0x0  nop
    ctx->pc = 0x35b860u;
    // NOP
label_35b864:
    // 0x35b864: 0x0  nop
    ctx->pc = 0x35b864u;
    // NOP
label_35b868:
    // 0x35b868: 0x0  nop
    ctx->pc = 0x35b868u;
    // NOP
label_35b86c:
    // 0x35b86c: 0x0  nop
    ctx->pc = 0x35b86cu;
    // NOP
label_35b870:
    // 0x35b870: 0x0  nop
    ctx->pc = 0x35b870u;
    // NOP
label_35b874:
    // 0x35b874: 0x0  nop
    ctx->pc = 0x35b874u;
    // NOP
label_35b878:
    // 0x35b878: 0x0  nop
    ctx->pc = 0x35b878u;
    // NOP
label_35b87c:
    // 0x35b87c: 0x0  nop
    ctx->pc = 0x35b87cu;
    // NOP
label_35b880:
    // 0x35b880: 0x0  nop
    ctx->pc = 0x35b880u;
    // NOP
label_35b884:
    // 0x35b884: 0x0  nop
    ctx->pc = 0x35b884u;
    // NOP
label_35b888:
    // 0x35b888: 0x0  nop
    ctx->pc = 0x35b888u;
    // NOP
label_35b88c:
    // 0x35b88c: 0x0  nop
    ctx->pc = 0x35b88cu;
    // NOP
label_35b890:
    // 0x35b890: 0x0  nop
    ctx->pc = 0x35b890u;
    // NOP
label_35b894:
    // 0x35b894: 0x0  nop
    ctx->pc = 0x35b894u;
    // NOP
label_35b898:
    // 0x35b898: 0x0  nop
    ctx->pc = 0x35b898u;
    // NOP
label_35b89c:
    // 0x35b89c: 0x0  nop
    ctx->pc = 0x35b89cu;
    // NOP
label_35b8a0:
    // 0x35b8a0: 0x0  nop
    ctx->pc = 0x35b8a0u;
    // NOP
label_35b8a4:
    // 0x35b8a4: 0x0  nop
    ctx->pc = 0x35b8a4u;
    // NOP
label_35b8a8:
    // 0x35b8a8: 0x0  nop
    ctx->pc = 0x35b8a8u;
    // NOP
label_35b8ac:
    // 0x35b8ac: 0x0  nop
    ctx->pc = 0x35b8acu;
    // NOP
label_35b8b0:
    // 0x35b8b0: 0x0  nop
    ctx->pc = 0x35b8b0u;
    // NOP
label_35b8b4:
    // 0x35b8b4: 0x0  nop
    ctx->pc = 0x35b8b4u;
    // NOP
label_35b8b8:
    // 0x35b8b8: 0x0  nop
    ctx->pc = 0x35b8b8u;
    // NOP
label_35b8bc:
    // 0x35b8bc: 0x0  nop
    ctx->pc = 0x35b8bcu;
    // NOP
label_35b8c0:
    // 0x35b8c0: 0x0  nop
    ctx->pc = 0x35b8c0u;
    // NOP
label_35b8c4:
    // 0x35b8c4: 0x0  nop
    ctx->pc = 0x35b8c4u;
    // NOP
label_35b8c8:
    // 0x35b8c8: 0x0  nop
    ctx->pc = 0x35b8c8u;
    // NOP
label_35b8cc:
    // 0x35b8cc: 0x0  nop
    ctx->pc = 0x35b8ccu;
    // NOP
label_35b8d0:
    // 0x35b8d0: 0x0  nop
    ctx->pc = 0x35b8d0u;
    // NOP
label_35b8d4:
    // 0x35b8d4: 0x0  nop
    ctx->pc = 0x35b8d4u;
    // NOP
label_35b8d8:
    // 0x35b8d8: 0x0  nop
    ctx->pc = 0x35b8d8u;
    // NOP
label_35b8dc:
    // 0x35b8dc: 0x0  nop
    ctx->pc = 0x35b8dcu;
    // NOP
label_35b8e0:
    // 0x35b8e0: 0x0  nop
    ctx->pc = 0x35b8e0u;
    // NOP
label_35b8e4:
    // 0x35b8e4: 0x0  nop
    ctx->pc = 0x35b8e4u;
    // NOP
label_35b8e8:
    // 0x35b8e8: 0x0  nop
    ctx->pc = 0x35b8e8u;
    // NOP
label_35b8ec:
    // 0x35b8ec: 0x0  nop
    ctx->pc = 0x35b8ecu;
    // NOP
label_35b8f0:
    // 0x35b8f0: 0x0  nop
    ctx->pc = 0x35b8f0u;
    // NOP
label_35b8f4:
    // 0x35b8f4: 0x0  nop
    ctx->pc = 0x35b8f4u;
    // NOP
label_35b8f8:
    // 0x35b8f8: 0x0  nop
    ctx->pc = 0x35b8f8u;
    // NOP
label_35b8fc:
    // 0x35b8fc: 0x0  nop
    ctx->pc = 0x35b8fcu;
    // NOP
label_35b900:
    // 0x35b900: 0x0  nop
    ctx->pc = 0x35b900u;
    // NOP
label_35b904:
    // 0x35b904: 0x0  nop
    ctx->pc = 0x35b904u;
    // NOP
label_35b908:
    // 0x35b908: 0x0  nop
    ctx->pc = 0x35b908u;
    // NOP
label_35b90c:
    // 0x35b90c: 0x0  nop
    ctx->pc = 0x35b90cu;
    // NOP
label_35b910:
    // 0x35b910: 0x0  nop
    ctx->pc = 0x35b910u;
    // NOP
label_35b914:
    // 0x35b914: 0x0  nop
    ctx->pc = 0x35b914u;
    // NOP
label_35b918:
    // 0x35b918: 0x0  nop
    ctx->pc = 0x35b918u;
    // NOP
label_35b91c:
    // 0x35b91c: 0x0  nop
    ctx->pc = 0x35b91cu;
    // NOP
label_35b920:
    // 0x35b920: 0x0  nop
    ctx->pc = 0x35b920u;
    // NOP
label_35b924:
    // 0x35b924: 0x0  nop
    ctx->pc = 0x35b924u;
    // NOP
label_35b928:
    // 0x35b928: 0x0  nop
    ctx->pc = 0x35b928u;
    // NOP
label_35b92c:
    // 0x35b92c: 0x0  nop
    ctx->pc = 0x35b92cu;
    // NOP
label_35b930:
    // 0x35b930: 0x0  nop
    ctx->pc = 0x35b930u;
    // NOP
label_35b934:
    // 0x35b934: 0x0  nop
    ctx->pc = 0x35b934u;
    // NOP
label_35b938:
    // 0x35b938: 0x0  nop
    ctx->pc = 0x35b938u;
    // NOP
label_35b93c:
    // 0x35b93c: 0x0  nop
    ctx->pc = 0x35b93cu;
    // NOP
label_35b940:
    // 0x35b940: 0x0  nop
    ctx->pc = 0x35b940u;
    // NOP
label_35b944:
    // 0x35b944: 0x0  nop
    ctx->pc = 0x35b944u;
    // NOP
label_35b948:
    // 0x35b948: 0x0  nop
    ctx->pc = 0x35b948u;
    // NOP
label_35b94c:
    // 0x35b94c: 0x0  nop
    ctx->pc = 0x35b94cu;
    // NOP
label_35b950:
    // 0x35b950: 0x0  nop
    ctx->pc = 0x35b950u;
    // NOP
label_35b954:
    // 0x35b954: 0x0  nop
    ctx->pc = 0x35b954u;
    // NOP
label_35b958:
    // 0x35b958: 0x0  nop
    ctx->pc = 0x35b958u;
    // NOP
label_35b95c:
    // 0x35b95c: 0x0  nop
    ctx->pc = 0x35b95cu;
    // NOP
label_35b960:
    // 0x35b960: 0x0  nop
    ctx->pc = 0x35b960u;
    // NOP
label_35b964:
    // 0x35b964: 0x0  nop
    ctx->pc = 0x35b964u;
    // NOP
label_35b968:
    // 0x35b968: 0x22  neg         $zero, $zero
    ctx->pc = 0x35b968u;
    { uint32_t tmp; bool ov; SUB32_OV(GPR_U32(ctx, 0), GPR_U32(ctx, 0), tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 0, (int32_t)tmp); }
label_35b96c:
    // 0x35b96c: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x35b96cu;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_35b970:
    // 0x35b970: 0x4  sllv        $zero, $zero, $zero
    ctx->pc = 0x35b970u;
    SET_GPR_S32(ctx, 0, (int32_t)SLL32(GPR_U32(ctx, 0), GPR_U32(ctx, 0) & 0x1F));
label_35b974:
    // 0x35b974: 0x0  nop
    ctx->pc = 0x35b974u;
    // NOP
label_35b978:
    // 0x35b978: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x35b978u;
    // Unhandled COP2 format: 0xA
label_35b97c:
    // 0x35b97c: 0x7062696c  .word       0x7062696C                   # INVALID     $v1, $v0, 0x696C # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x35b97cu;
    // Unhandled MMI instruction: function 0x2C
label_35b980:
    // 0x35b980: 0x20206461  addi        $zero, $at, 0x6461
    ctx->pc = 0x35b980u;
    // NOP (addi to $zero)
label_35b984:
    // 0x35b984: 0x30303133  andi        $s0, $at, 0x3133
    ctx->pc = 0x35b984u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12595);
label_35b988:
    // 0x35b988: 0x0  nop
    ctx->pc = 0x35b988u;
    // NOP
label_35b98c:
    // 0x35b98c: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35b98cu;
    // Unhandled SPECIAL instruction: 0x1
label_35b990:
    // 0x35b990: 0x0  nop
    ctx->pc = 0x35b990u;
    // NOP
label_35b994:
    // 0x35b994: 0x0  nop
    ctx->pc = 0x35b994u;
    // NOP
label_35b998:
    // 0x35b998: 0x3db518  .word       0x003DB518                   # mult        $s6, $at, $sp # 00000500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35b998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_35b99c:
    // 0x35b99c: 0x3db510  .word       0x003DB510                   # mfhi        $s6 # 003D0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35b99cu;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_35b9a0:
    // 0x35b9a0: 0x3db500  .word       0x003DB500                   # sll         $s6, $sp, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35b9a0u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 29), 20));
label_35b9a4:
    // 0x35b9a4: 0x3db510  .word       0x003DB510                   # mfhi        $s6 # 003D0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35b9a4u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_35b9a8:
    // 0x35b9a8: 0x3db510  .word       0x003DB510                   # mfhi        $s6 # 003D0500 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35b9a8u;
    SET_GPR_U64(ctx, 22, ctx->hi);
label_35b9ac:
    // 0x35b9ac: 0x3db4f8  .word       0x003DB4F8                   # dsll        $s6, $sp, 19 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35b9acu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 29) << 19);
label_35b9b0:
    // 0x35b9b0: 0x3db4f0  tge         $at, $sp, 723
    ctx->pc = 0x35b9b0u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_35b9b4:
    // 0x35b9b4: 0x3db4e8  .word       0x003DB4E8                   # mfsa        $s6 # 003D04C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35b9b4u;
    SET_GPR_U32(ctx, 22, ctx->sa);
label_35b9b8:
    // 0x35b9b8: 0x3db538  .word       0x003DB538                   # dsll        $s6, $sp, 20 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35b9b8u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 29) << 20);
label_35b9bc:
    // 0x35b9bc: 0x3db530  tge         $at, $sp, 724
    ctx->pc = 0x35b9bcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 29)) { runtime->handleTrap(rdram, ctx); }
label_35b9c0:
    // 0x35b9c0: 0x3db528  .word       0x003DB528                   # mfsa        $s6 # 003D0500 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35b9c0u;
    SET_GPR_U32(ctx, 22, ctx->sa);
label_35b9c4:
    // 0x35b9c4: 0x0  nop
    ctx->pc = 0x35b9c4u;
    // NOP
label_35b9c8:
    // 0x35b9c8: 0x49497350  .word       0x49497350                   # INVALID     $t2, $t1, 0x7350 # 00000000 <InstrIdType: R5900_COP2_NOHIGHBIT>
    ctx->pc = 0x35b9c8u;
    // Unhandled COP2 format: 0xA
label_35b9cc:
    // 0x35b9cc: 0x6d62696c  ldr         $v0, 0x696C($t3)
    ctx->pc = 0x35b9ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 26988); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_35b9d0:
    // 0x35b9d0: 0x20202063  addi        $zero, $at, 0x2063
    ctx->pc = 0x35b9d0u;
    // NOP (addi to $zero)
label_35b9d4:
    // 0x35b9d4: 0x30303133  andi        $s0, $at, 0x3133
    ctx->pc = 0x35b9d4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 1) & (uint64_t)(uint16_t)12595);
label_35b9d8:
    // 0x35b9d8: 0x0  nop
    ctx->pc = 0x35b9d8u;
    // NOP
label_35b9dc:
    // 0x35b9dc: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x35b9dcu;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_35b9e0:
    // 0x35b9e0: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x35b9e0u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_35b9e4:
    // 0x35b9e4: 0xffffffff  sd          $ra, -0x1($ra)
    ctx->pc = 0x35b9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 31), 4294967295), GPR_U64(ctx, 31));
label_35b9e8:
    // 0x35b9e8: 0x11968700  beq         $t4, $s6, . + 4 + (-0x7900 << 2)
label_35b9ec:
    if (ctx->pc == 0x35B9ECu) {
        ctx->pc = 0x35B9ECu;
            // 0x35b9ec: 0xb43322a5  sdr         $s3, 0x22A5($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8869); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->pc = 0x35B9F0u;
        goto label_35b9f0;
    }
    ctx->pc = 0x35B9E8u;
    {
        const bool branch_taken_0x35b9e8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 22));
        ctx->pc = 0x35B9ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35B9E8u;
            // 0x35b9ec: 0xb43322a5  sdr         $s3, 0x22A5($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8869); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35b9e8) {
            ctx->pc = 0x33D5ECu;
            return;
        }
    }
    ctx->pc = 0x35B9F0u;
label_35b9f0:
    // 0x35b9f0: 0xa52233b4  sh          $v0, 0x33B4($t1)
    ctx->pc = 0x35b9f0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 13236), (uint16_t)GPR_U32(ctx, 2));
label_35b9f4:
    // 0x35b9f4: 0x879611  .word       0x00879611                   # mthi        $a0 # 00079600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35b9f4u;
    ctx->hi = GPR_U64(ctx, 4);
label_35b9f8:
    // 0x35b9f8: 0xd25544c3  lld         $s5, 0x44C3($s2)
    ctx->pc = 0x35b9f8u;
    // Unhandled opcode: 0x34
label_35b9fc:
    // 0x35b9fc: 0x77f0e166  .word       0x77F0E166                   # INVALID     $ra, $s0, -0x1E9A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x35b9fcu;
    // Unhandled opcode: 0x1D
label_35ba00:
    // 0x35ba00: 0x66e1f077  daddiu      $at, $s7, -0xF89
    ctx->pc = 0x35ba00u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294963319);
label_35ba04:
    // 0x35ba04: 0xc34455d2  ll          $a0, 0x55D2($k0)
    ctx->pc = 0x35ba04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 21970); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_35ba08:
    // 0x35ba08: 0xc34455d2  ll          $a0, 0x55D2($k0)
    ctx->pc = 0x35ba08u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 21970); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_35ba0c:
    // 0x35ba0c: 0x66e1f077  daddiu      $at, $s7, -0xF89
    ctx->pc = 0x35ba0cu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294963319);
label_35ba10:
    // 0x35ba10: 0x77f0e166  .word       0x77F0E166                   # INVALID     $ra, $s0, -0x1E9A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x35ba10u;
    // Unhandled opcode: 0x1D
label_35ba14:
    // 0x35ba14: 0xd25544c3  lld         $s5, 0x44C3($s2)
    ctx->pc = 0x35ba14u;
    // Unhandled opcode: 0x34
label_35ba18:
    // 0x35ba18: 0x879611  .word       0x00879611                   # mthi        $a0 # 00079600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35ba18u;
    ctx->hi = GPR_U64(ctx, 4);
label_35ba1c:
    // 0x35ba1c: 0xa52233b4  sh          $v0, 0x33B4($t1)
    ctx->pc = 0x35ba1cu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 13236), (uint16_t)GPR_U32(ctx, 2));
label_35ba20:
    // 0x35ba20: 0xb43322a5  sdr         $s3, 0x22A5($at)
    ctx->pc = 0x35ba20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8869); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_35ba24:
    // 0x35ba24: 0x11968700  beq         $t4, $s6, . + 4 + (-0x7900 << 2)
label_35ba28:
    if (ctx->pc == 0x35BA28u) {
        ctx->pc = 0x35BA28u;
            // 0x35ba28: 0xf07766e1  scd         $s7, 0x66E1($v1) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->pc = 0x35BA2Cu;
        goto label_35ba2c;
    }
    ctx->pc = 0x35BA24u;
    {
        const bool branch_taken_0x35ba24 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 22));
        ctx->pc = 0x35BA28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BA24u;
            // 0x35ba28: 0xf07766e1  scd         $s7, 0x66E1($v1) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
        if (branch_taken_0x35ba24) {
            ctx->pc = 0x33D628u;
            return;
        }
    }
    ctx->pc = 0x35BA2Cu;
label_35ba2c:
    // 0x35ba2c: 0x55d2c344  bnel        $t6, $s2, . + 4 + (-0x3CBC << 2)
label_35ba30:
    if (ctx->pc == 0x35BA30u) {
        ctx->pc = 0x35BA30u;
            // 0x35ba30: 0x44c3d255  .word       0x44C3D255                   # ctc1        $v1, $26 # 00000255 <InstrIdType: R5900_COP1> (Delay Slot)
        // CTC1 to FCR26 ignored
        ctx->pc = 0x35BA34u;
        goto label_35ba34;
    }
    ctx->pc = 0x35BA2Cu;
    {
        const bool branch_taken_0x35ba2c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 18));
        if (branch_taken_0x35ba2c) {
            ctx->pc = 0x35BA30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35BA2Cu;
            // 0x35ba30: 0x44c3d255  .word       0x44C3D255                   # ctc1        $v1, $26 # 00000255 <InstrIdType: R5900_COP1> (Delay Slot)
        // CTC1 to FCR26 ignored
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C740u;
            return;
        }
    }
    ctx->pc = 0x35BA34u;
label_35ba34:
    // 0x35ba34: 0xe16677f0  sc          $a2, 0x77F0($t3)
    ctx->pc = 0x35ba34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30704); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 6)); SET_GPR_S32(ctx, 6, 1); } else { SET_GPR_S32(ctx, 6, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
label_35ba38:
    // 0x35ba38: 0x33b4a522  andi        $s4, $sp, 0xA522
    ctx->pc = 0x35ba38u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 29) & (uint64_t)(uint16_t)42274);
label_35ba3c:
    // 0x35ba3c: 0x96110087  lhu         $s1, 0x87($s0)
    ctx->pc = 0x35ba3cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 135)));
label_35ba40:
    // 0x35ba40: 0x87001196  lh          $zero, 0x1196($t8)
    ctx->pc = 0x35ba40u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4502)));
label_35ba44:
    // 0x35ba44: 0x22a5b433  addi        $a1, $s5, -0x4BCD
    ctx->pc = 0x35ba44u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)4294947891, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_35ba48:
    // 0x35ba48: 0x22a5b433  addi        $a1, $s5, -0x4BCD
    ctx->pc = 0x35ba48u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)4294947891, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_35ba4c:
    // 0x35ba4c: 0x87001196  lh          $zero, 0x1196($t8)
    ctx->pc = 0x35ba4cu;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4502)));
label_35ba50:
    // 0x35ba50: 0x96110087  lhu         $s1, 0x87($s0)
    ctx->pc = 0x35ba50u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 135)));
label_35ba54:
    // 0x35ba54: 0x33b4a522  andi        $s4, $sp, 0xA522
    ctx->pc = 0x35ba54u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 29) & (uint64_t)(uint16_t)42274);
label_35ba58:
    // 0x35ba58: 0xe16677f0  sc          $a2, 0x77F0($t3)
    ctx->pc = 0x35ba58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30704); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 6)); SET_GPR_S32(ctx, 6, 1); } else { SET_GPR_S32(ctx, 6, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
label_35ba5c:
    // 0x35ba5c: 0x44c3d255  .word       0x44C3D255                   # ctc1        $v1, $26 # 00000255 <InstrIdType: R5900_COP1>
    ctx->pc = 0x35ba5cu;
    // CTC1 to FCR26 ignored
label_35ba60:
    // 0x35ba60: 0x55d2c344  bnel        $t6, $s2, . + 4 + (-0x3CBC << 2)
label_35ba64:
    if (ctx->pc == 0x35BA64u) {
        ctx->pc = 0x35BA64u;
            // 0x35ba64: 0xf07766e1  scd         $s7, 0x66E1($v1) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->pc = 0x35BA68u;
        goto label_35ba68;
    }
    ctx->pc = 0x35BA60u;
    {
        const bool branch_taken_0x35ba60 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 18));
        if (branch_taken_0x35ba60) {
            ctx->pc = 0x35BA64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35BA60u;
            // 0x35ba64: 0xf07766e1  scd         $s7, 0x66E1($v1) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C774u;
            return;
        }
    }
    ctx->pc = 0x35BA68u;
label_35ba68:
    // 0x35ba68: 0xe16677f0  sc          $a2, 0x77F0($t3)
    ctx->pc = 0x35ba68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30704); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 6)); SET_GPR_S32(ctx, 6, 1); } else { SET_GPR_S32(ctx, 6, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
label_35ba6c:
    // 0x35ba6c: 0x44c3d255  .word       0x44C3D255                   # ctc1        $v1, $26 # 00000255 <InstrIdType: R5900_COP1>
    ctx->pc = 0x35ba6cu;
    // CTC1 to FCR26 ignored
label_35ba70:
    // 0x35ba70: 0x55d2c344  bnel        $t6, $s2, . + 4 + (-0x3CBC << 2)
label_35ba74:
    if (ctx->pc == 0x35BA74u) {
        ctx->pc = 0x35BA74u;
            // 0x35ba74: 0xf07766e1  scd         $s7, 0x66E1($v1) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->pc = 0x35BA78u;
        goto label_35ba78;
    }
    ctx->pc = 0x35BA70u;
    {
        const bool branch_taken_0x35ba70 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 18));
        if (branch_taken_0x35ba70) {
            ctx->pc = 0x35BA74u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35BA70u;
            // 0x35ba74: 0xf07766e1  scd         $s7, 0x66E1($v1) (Delay Slot)
        // Unhandled opcode: 0x3C
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C784u;
            return;
        }
    }
    ctx->pc = 0x35BA78u;
label_35ba78:
    // 0x35ba78: 0x22a5b433  addi        $a1, $s5, -0x4BCD
    ctx->pc = 0x35ba78u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)4294947891, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_35ba7c:
    // 0x35ba7c: 0x87001196  lh          $zero, 0x1196($t8)
    ctx->pc = 0x35ba7cu;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4502)));
label_35ba80:
    // 0x35ba80: 0x96110087  lhu         $s1, 0x87($s0)
    ctx->pc = 0x35ba80u;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 135)));
label_35ba84:
    // 0x35ba84: 0x33b4a522  andi        $s4, $sp, 0xA522
    ctx->pc = 0x35ba84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 29) & (uint64_t)(uint16_t)42274);
label_35ba88:
    // 0x35ba88: 0x33b4a522  andi        $s4, $sp, 0xA522
    ctx->pc = 0x35ba88u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 29) & (uint64_t)(uint16_t)42274);
label_35ba8c:
    // 0x35ba8c: 0x96110087  lhu         $s1, 0x87($s0)
    ctx->pc = 0x35ba8cu;
    SET_GPR_U32(ctx, 17, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 135)));
label_35ba90:
    // 0x35ba90: 0x87001196  lh          $zero, 0x1196($t8)
    ctx->pc = 0x35ba90u;
    SET_GPR_S32(ctx, 0, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4502)));
label_35ba94:
    // 0x35ba94: 0x22a5b433  addi        $a1, $s5, -0x4BCD
    ctx->pc = 0x35ba94u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 21), (int32_t)4294947891, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 5, (int32_t)tmp); }
label_35ba98:
    // 0x35ba98: 0xf07766e1  scd         $s7, 0x66E1($v1)
    ctx->pc = 0x35ba98u;
    // Unhandled opcode: 0x3C
label_35ba9c:
    // 0x35ba9c: 0x55d2c344  bnel        $t6, $s2, . + 4 + (-0x3CBC << 2)
label_35baa0:
    if (ctx->pc == 0x35BAA0u) {
        ctx->pc = 0x35BAA0u;
            // 0x35baa0: 0x44c3d255  .word       0x44C3D255                   # ctc1        $v1, $26 # 00000255 <InstrIdType: R5900_COP1> (Delay Slot)
        // CTC1 to FCR26 ignored
        ctx->pc = 0x35BAA4u;
        goto label_35baa4;
    }
    ctx->pc = 0x35BA9Cu;
    {
        const bool branch_taken_0x35ba9c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 18));
        if (branch_taken_0x35ba9c) {
            ctx->pc = 0x35BAA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x35BA9Cu;
            // 0x35baa0: 0x44c3d255  .word       0x44C3D255                   # ctc1        $v1, $26 # 00000255 <InstrIdType: R5900_COP1> (Delay Slot)
        // CTC1 to FCR26 ignored
        ctx->in_delay_slot = false;
            ctx->pc = 0x34C7B0u;
            return;
        }
    }
    ctx->pc = 0x35BAA4u;
label_35baa4:
    // 0x35baa4: 0xe16677f0  sc          $a2, 0x77F0($t3)
    ctx->pc = 0x35baa4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 30704); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 6)); SET_GPR_S32(ctx, 6, 1); } else { SET_GPR_S32(ctx, 6, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
label_35baa8:
    // 0x35baa8: 0x879611  .word       0x00879611                   # mthi        $a0 # 00079600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35baa8u;
    ctx->hi = GPR_U64(ctx, 4);
label_35baac:
    // 0x35baac: 0xa52233b4  sh          $v0, 0x33B4($t1)
    ctx->pc = 0x35baacu;
    WRITE16(ADD32(GPR_U32(ctx, 9), 13236), (uint16_t)GPR_U32(ctx, 2));
label_35bab0:
    // 0x35bab0: 0xb43322a5  sdr         $s3, 0x22A5($at)
    ctx->pc = 0x35bab0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8869); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_35bab4:
    // 0x35bab4: 0x11968700  beq         $t4, $s6, . + 4 + (-0x7900 << 2)
label_35bab8:
    if (ctx->pc == 0x35BAB8u) {
        ctx->pc = 0x35BAB8u;
            // 0x35bab8: 0xc34455d2  ll          $a0, 0x55D2($k0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 26), 21970); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->pc = 0x35BABCu;
        goto label_35babc;
    }
    ctx->pc = 0x35BAB4u;
    {
        const bool branch_taken_0x35bab4 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 22));
        ctx->pc = 0x35BAB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BAB4u;
            // 0x35bab8: 0xc34455d2  ll          $a0, 0x55D2($k0) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 26), 21970); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bab4) {
            ctx->pc = 0x33D6B8u;
            return;
        }
    }
    ctx->pc = 0x35BABCu;
label_35babc:
    // 0x35babc: 0x66e1f077  daddiu      $at, $s7, -0xF89
    ctx->pc = 0x35babcu;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294963319);
label_35bac0:
    // 0x35bac0: 0x77f0e166  .word       0x77F0E166                   # INVALID     $ra, $s0, -0x1E9A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x35bac0u;
    // Unhandled opcode: 0x1D
label_35bac4:
    // 0x35bac4: 0xd25544c3  lld         $s5, 0x44C3($s2)
    ctx->pc = 0x35bac4u;
    // Unhandled opcode: 0x34
label_35bac8:
    // 0x35bac8: 0xd25544c3  lld         $s5, 0x44C3($s2)
    ctx->pc = 0x35bac8u;
    // Unhandled opcode: 0x34
label_35bacc:
    // 0x35bacc: 0x77f0e166  .word       0x77F0E166                   # INVALID     $ra, $s0, -0x1E9A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x35baccu;
    // Unhandled opcode: 0x1D
label_35bad0:
    // 0x35bad0: 0x66e1f077  daddiu      $at, $s7, -0xF89
    ctx->pc = 0x35bad0u;
    SET_GPR_S64(ctx, 1, (int64_t)GPR_S64(ctx, 23) + (int64_t)(int32_t)4294963319);
label_35bad4:
    // 0x35bad4: 0xc34455d2  ll          $a0, 0x55D2($k0)
    ctx->pc = 0x35bad4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 26), 21970); SET_GPR_S32(ctx, 4, (int32_t)READ32(addr)); ctx->llbit = 1; ctx->lladdr = addr; }
label_35bad8:
    // 0x35bad8: 0x11968700  beq         $t4, $s6, . + 4 + (-0x7900 << 2)
label_35badc:
    if (ctx->pc == 0x35BADCu) {
        ctx->pc = 0x35BADCu;
            // 0x35badc: 0xb43322a5  sdr         $s3, 0x22A5($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8869); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->pc = 0x35BAE0u;
        goto label_35bae0;
    }
    ctx->pc = 0x35BAD8u;
    {
        const bool branch_taken_0x35bad8 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 22));
        ctx->pc = 0x35BADCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BAD8u;
            // 0x35badc: 0xb43322a5  sdr         $s3, 0x22A5($at) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 1), 8869); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x35bad8) {
            ctx->pc = 0x33D6DCu;
            return;
        }
    }
    ctx->pc = 0x35BAE0u;
label_35bae0:
    // 0x35bae0: 0xa52233b4  sh          $v0, 0x33B4($t1)
    ctx->pc = 0x35bae0u;
    WRITE16(ADD32(GPR_U32(ctx, 9), 13236), (uint16_t)GPR_U32(ctx, 2));
label_35bae4:
    // 0x35bae4: 0x879611  .word       0x00879611                   # mthi        $a0 # 00079600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bae4u;
    ctx->hi = GPR_U64(ctx, 4);
label_35bae8:
    // 0x35bae8: 0x0  nop
    ctx->pc = 0x35bae8u;
    // NOP
label_35baec:
    // 0x35baec: 0x35bae8  .word       0x0035BAE8                   # mfsa        $s7 # 003502C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35baecu;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35baf0:
    // 0x35baf0: 0x35baec  .word       0x0035BAEC                   # dadd        $s7, $at, $s5 # 000002C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35baf0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 1); int64_t b = (int64_t)GPR_S64(ctx, 21); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 23, r); }
label_35baf4:
    // 0x35baf4: 0x0  nop
    ctx->pc = 0x35baf4u;
    // NOP
label_35baf8:
    // 0x35baf8: 0x0  nop
    ctx->pc = 0x35baf8u;
    // NOP
label_35bafc:
    // 0x35bafc: 0x35bcdc  .word       0x0035BCDC                   # dmult       $at, $s5 # 0000BCC0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bafcu;
    // Unhandled SPECIAL instruction: 0x1C
label_35bb00:
    // 0x35bb00: 0x35bd34  teq         $at, $s5, 756
    ctx->pc = 0x35bb00u;
    if (GPR_U64(ctx, 1) == GPR_U64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35bb04:
    // 0x35bb04: 0x35bd8c  .word       0x0035BD8C                   # syscall     758 # 00350000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bb04u;
    runtime->handleSyscall(rdram, ctx, 0xD6F6u);
label_35bb08:
    // 0x35bb08: 0x0  nop
    ctx->pc = 0x35bb08u;
    // NOP
label_35bb0c:
    // 0x35bb0c: 0x0  nop
    ctx->pc = 0x35bb0cu;
    // NOP
label_35bb10:
    // 0x35bb10: 0x0  nop
    ctx->pc = 0x35bb10u;
    // NOP
label_35bb14:
    // 0x35bb14: 0x0  nop
    ctx->pc = 0x35bb14u;
    // NOP
label_35bb18:
    // 0x35bb18: 0x0  nop
    ctx->pc = 0x35bb18u;
    // NOP
label_35bb1c:
    // 0x35bb1c: 0x0  nop
    ctx->pc = 0x35bb1cu;
    // NOP
label_35bb20:
    // 0x35bb20: 0x0  nop
    ctx->pc = 0x35bb20u;
    // NOP
label_35bb24:
    // 0x35bb24: 0x0  nop
    ctx->pc = 0x35bb24u;
    // NOP
label_35bb28:
    // 0x35bb28: 0x0  nop
    ctx->pc = 0x35bb28u;
    // NOP
label_35bb2c:
    // 0x35bb2c: 0x3db918  .word       0x003DB918                   # mult        $s7, $at, $sp # 00000100 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bb2cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 29); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bb30:
    // 0x35bb30: 0x0  nop
    ctx->pc = 0x35bb30u;
    // NOP
label_35bb34:
    // 0x35bb34: 0x0  nop
    ctx->pc = 0x35bb34u;
    // NOP
label_35bb38:
    // 0x35bb38: 0x0  nop
    ctx->pc = 0x35bb38u;
    // NOP
label_35bb3c:
    // 0x35bb3c: 0x0  nop
    ctx->pc = 0x35bb3cu;
    // NOP
label_35bb40:
    // 0x35bb40: 0x0  nop
    ctx->pc = 0x35bb40u;
    // NOP
label_35bb44:
    // 0x35bb44: 0x0  nop
    ctx->pc = 0x35bb44u;
    // NOP
label_35bb48:
    // 0x35bb48: 0x0  nop
    ctx->pc = 0x35bb48u;
    // NOP
label_35bb4c:
    // 0x35bb4c: 0x0  nop
    ctx->pc = 0x35bb4cu;
    // NOP
label_35bb50:
    // 0x35bb50: 0x0  nop
    ctx->pc = 0x35bb50u;
    // NOP
label_35bb54:
    // 0x35bb54: 0x0  nop
    ctx->pc = 0x35bb54u;
    // NOP
label_35bb58:
    // 0x35bb58: 0x0  nop
    ctx->pc = 0x35bb58u;
    // NOP
label_35bb5c:
    // 0x35bb5c: 0x0  nop
    ctx->pc = 0x35bb5cu;
    // NOP
label_35bb60:
    // 0x35bb60: 0x0  nop
    ctx->pc = 0x35bb60u;
    // NOP
label_35bb64:
    // 0x35bb64: 0x0  nop
    ctx->pc = 0x35bb64u;
    // NOP
label_35bb68:
    // 0x35bb68: 0x0  nop
    ctx->pc = 0x35bb68u;
    // NOP
label_35bb6c:
    // 0x35bb6c: 0x0  nop
    ctx->pc = 0x35bb6cu;
    // NOP
label_35bb70:
    // 0x35bb70: 0x0  nop
    ctx->pc = 0x35bb70u;
    // NOP
label_35bb74:
    // 0x35bb74: 0x0  nop
    ctx->pc = 0x35bb74u;
    // NOP
label_35bb78:
    // 0x35bb78: 0x0  nop
    ctx->pc = 0x35bb78u;
    // NOP
label_35bb7c:
    // 0x35bb7c: 0x0  nop
    ctx->pc = 0x35bb7cu;
    // NOP
label_35bb80:
    // 0x35bb80: 0x0  nop
    ctx->pc = 0x35bb80u;
    // NOP
label_35bb84:
    // 0x35bb84: 0x0  nop
    ctx->pc = 0x35bb84u;
    // NOP
label_35bb88:
    // 0x35bb88: 0x0  nop
    ctx->pc = 0x35bb88u;
    // NOP
label_35bb8c:
    // 0x35bb8c: 0x0  nop
    ctx->pc = 0x35bb8cu;
    // NOP
label_35bb90:
    // 0x35bb90: 0x0  nop
    ctx->pc = 0x35bb90u;
    // NOP
label_35bb94:
    // 0x35bb94: 0x0  nop
    ctx->pc = 0x35bb94u;
    // NOP
label_35bb98:
    // 0x35bb98: 0x0  nop
    ctx->pc = 0x35bb98u;
    // NOP
label_35bb9c:
    // 0x35bb9c: 0x0  nop
    ctx->pc = 0x35bb9cu;
    // NOP
label_35bba0:
    // 0x35bba0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bba0u;
    // Unhandled SPECIAL instruction: 0x1
label_35bba4:
    // 0x35bba4: 0x0  nop
    ctx->pc = 0x35bba4u;
    // NOP
label_35bba8:
    // 0x35bba8: 0xabcd330e  swl         $t5, 0x330E($fp)
    ctx->pc = 0x35bba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 30), 13070); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 13); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_35bbac:
    // 0x35bbac: 0xe66d1234  swc1        $f13, 0x1234($s3)
    ctx->pc = 0x35bbacu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 4660), bits); }
label_35bbb0:
    // 0x35bbb0: 0x5deec  .word       0x0005DEEC                   # dadd        $k1, $zero, $a1 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bbb0u;
    { int64_t a = (int64_t)GPR_S64(ctx, 0); int64_t b = (int64_t)GPR_S64(ctx, 5); int64_t r = a + b; if (((a ^ b) >= 0) && ((a ^ r) < 0)) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 27, r); }
label_35bbb4:
    // 0x35bbb4: 0xb  movn        $zero, $zero, $zero
    ctx->pc = 0x35bbb4u;
    if (GPR_U64(ctx, 0) != 0) SET_GPR_VEC(ctx, 0, GPR_VEC(ctx, 0));
label_35bbb8:
    // 0x35bbb8: 0x0  nop
    ctx->pc = 0x35bbb8u;
    // NOP
label_35bbbc:
    // 0x35bbbc: 0x0  nop
    ctx->pc = 0x35bbbcu;
    // NOP
label_35bbc0:
    // 0x35bbc0: 0x0  nop
    ctx->pc = 0x35bbc0u;
    // NOP
label_35bbc4:
    // 0x35bbc4: 0x0  nop
    ctx->pc = 0x35bbc4u;
    // NOP
label_35bbc8:
    // 0x35bbc8: 0x0  nop
    ctx->pc = 0x35bbc8u;
    // NOP
label_35bbcc:
    // 0x35bbcc: 0x0  nop
    ctx->pc = 0x35bbccu;
    // NOP
label_35bbd0:
    // 0x35bbd0: 0x0  nop
    ctx->pc = 0x35bbd0u;
    // NOP
label_35bbd4:
    // 0x35bbd4: 0x0  nop
    ctx->pc = 0x35bbd4u;
    // NOP
label_35bbd8:
    // 0x35bbd8: 0x0  nop
    ctx->pc = 0x35bbd8u;
    // NOP
label_35bbdc:
    // 0x35bbdc: 0x0  nop
    ctx->pc = 0x35bbdcu;
    // NOP
label_35bbe0:
    // 0x35bbe0: 0x0  nop
    ctx->pc = 0x35bbe0u;
    // NOP
label_35bbe4:
    // 0x35bbe4: 0x0  nop
    ctx->pc = 0x35bbe4u;
    // NOP
label_35bbe8:
    // 0x35bbe8: 0x0  nop
    ctx->pc = 0x35bbe8u;
    // NOP
label_35bbec:
    // 0x35bbec: 0x0  nop
    ctx->pc = 0x35bbecu;
    // NOP
label_35bbf0:
    // 0x35bbf0: 0x0  nop
    ctx->pc = 0x35bbf0u;
    // NOP
label_35bbf4:
    // 0x35bbf4: 0x0  nop
    ctx->pc = 0x35bbf4u;
    // NOP
label_35bbf8:
    // 0x35bbf8: 0x0  nop
    ctx->pc = 0x35bbf8u;
    // NOP
label_35bbfc:
    // 0x35bbfc: 0x0  nop
    ctx->pc = 0x35bbfcu;
    // NOP
label_35bc00:
    // 0x35bc00: 0x0  nop
    ctx->pc = 0x35bc00u;
    // NOP
label_35bc04:
    // 0x35bc04: 0x0  nop
    ctx->pc = 0x35bc04u;
    // NOP
label_35bc08:
    // 0x35bc08: 0x0  nop
    ctx->pc = 0x35bc08u;
    // NOP
label_35bc0c:
    // 0x35bc0c: 0x0  nop
    ctx->pc = 0x35bc0cu;
    // NOP
label_35bc10:
    // 0x35bc10: 0x0  nop
    ctx->pc = 0x35bc10u;
    // NOP
label_35bc14:
    // 0x35bc14: 0x0  nop
    ctx->pc = 0x35bc14u;
    // NOP
label_35bc18:
    // 0x35bc18: 0x0  nop
    ctx->pc = 0x35bc18u;
    // NOP
label_35bc1c:
    // 0x35bc1c: 0x0  nop
    ctx->pc = 0x35bc1cu;
    // NOP
label_35bc20:
    // 0x35bc20: 0x0  nop
    ctx->pc = 0x35bc20u;
    // NOP
label_35bc24:
    // 0x35bc24: 0x0  nop
    ctx->pc = 0x35bc24u;
    // NOP
label_35bc28:
    // 0x35bc28: 0x0  nop
    ctx->pc = 0x35bc28u;
    // NOP
label_35bc2c:
    // 0x35bc2c: 0x0  nop
    ctx->pc = 0x35bc2cu;
    // NOP
label_35bc30:
    // 0x35bc30: 0x0  nop
    ctx->pc = 0x35bc30u;
    // NOP
label_35bc34:
    // 0x35bc34: 0x0  nop
    ctx->pc = 0x35bc34u;
    // NOP
label_35bc38:
    // 0x35bc38: 0x0  nop
    ctx->pc = 0x35bc38u;
    // NOP
label_35bc3c:
    // 0x35bc3c: 0x0  nop
    ctx->pc = 0x35bc3cu;
    // NOP
label_35bc40:
    // 0x35bc40: 0x0  nop
    ctx->pc = 0x35bc40u;
    // NOP
label_35bc44:
    // 0x35bc44: 0x0  nop
    ctx->pc = 0x35bc44u;
    // NOP
label_35bc48:
    // 0x35bc48: 0x0  nop
    ctx->pc = 0x35bc48u;
    // NOP
label_35bc4c:
    // 0x35bc4c: 0x0  nop
    ctx->pc = 0x35bc4cu;
    // NOP
label_35bc50:
    // 0x35bc50: 0x0  nop
    ctx->pc = 0x35bc50u;
    // NOP
label_35bc54:
    // 0x35bc54: 0x0  nop
    ctx->pc = 0x35bc54u;
    // NOP
label_35bc58:
    // 0x35bc58: 0x0  nop
    ctx->pc = 0x35bc58u;
    // NOP
label_35bc5c:
    // 0x35bc5c: 0x0  nop
    ctx->pc = 0x35bc5cu;
    // NOP
label_35bc60:
    // 0x35bc60: 0x0  nop
    ctx->pc = 0x35bc60u;
    // NOP
label_35bc64:
    // 0x35bc64: 0x0  nop
    ctx->pc = 0x35bc64u;
    // NOP
label_35bc68:
    // 0x35bc68: 0x0  nop
    ctx->pc = 0x35bc68u;
    // NOP
label_35bc6c:
    // 0x35bc6c: 0x0  nop
    ctx->pc = 0x35bc6cu;
    // NOP
label_35bc70:
    // 0x35bc70: 0x0  nop
    ctx->pc = 0x35bc70u;
    // NOP
label_35bc74:
    // 0x35bc74: 0x0  nop
    ctx->pc = 0x35bc74u;
    // NOP
label_35bc78:
    // 0x35bc78: 0x0  nop
    ctx->pc = 0x35bc78u;
    // NOP
label_35bc7c:
    // 0x35bc7c: 0x0  nop
    ctx->pc = 0x35bc7cu;
    // NOP
label_35bc80:
    // 0x35bc80: 0x0  nop
    ctx->pc = 0x35bc80u;
    // NOP
label_35bc84:
    // 0x35bc84: 0x0  nop
    ctx->pc = 0x35bc84u;
    // NOP
label_35bc88:
    // 0x35bc88: 0x0  nop
    ctx->pc = 0x35bc88u;
    // NOP
label_35bc8c:
    // 0x35bc8c: 0x0  nop
    ctx->pc = 0x35bc8cu;
    // NOP
label_35bc90:
    // 0x35bc90: 0x0  nop
    ctx->pc = 0x35bc90u;
    // NOP
label_35bc94:
    // 0x35bc94: 0x0  nop
    ctx->pc = 0x35bc94u;
    // NOP
label_35bc98:
    // 0x35bc98: 0x0  nop
    ctx->pc = 0x35bc98u;
    // NOP
label_35bc9c:
    // 0x35bc9c: 0x0  nop
    ctx->pc = 0x35bc9cu;
    // NOP
label_35bca0:
    // 0x35bca0: 0x0  nop
    ctx->pc = 0x35bca0u;
    // NOP
label_35bca4:
    // 0x35bca4: 0x0  nop
    ctx->pc = 0x35bca4u;
    // NOP
label_35bca8:
    // 0x35bca8: 0x0  nop
    ctx->pc = 0x35bca8u;
    // NOP
label_35bcac:
    // 0x35bcac: 0x0  nop
    ctx->pc = 0x35bcacu;
    // NOP
label_35bcb0:
    // 0x35bcb0: 0x0  nop
    ctx->pc = 0x35bcb0u;
    // NOP
label_35bcb4:
    // 0x35bcb4: 0x0  nop
    ctx->pc = 0x35bcb4u;
    // NOP
label_35bcb8:
    // 0x35bcb8: 0x0  nop
    ctx->pc = 0x35bcb8u;
    // NOP
label_35bcbc:
    // 0x35bcbc: 0x0  nop
    ctx->pc = 0x35bcbcu;
    // NOP
label_35bcc0:
    // 0x35bcc0: 0x0  nop
    ctx->pc = 0x35bcc0u;
    // NOP
label_35bcc4:
    // 0x35bcc4: 0x0  nop
    ctx->pc = 0x35bcc4u;
    // NOP
label_35bcc8:
    // 0x35bcc8: 0x0  nop
    ctx->pc = 0x35bcc8u;
    // NOP
label_35bccc:
    // 0x35bccc: 0x0  nop
    ctx->pc = 0x35bcccu;
    // NOP
label_35bcd0:
    // 0x35bcd0: 0x0  nop
    ctx->pc = 0x35bcd0u;
    // NOP
label_35bcd4:
    // 0x35bcd4: 0x0  nop
    ctx->pc = 0x35bcd4u;
    // NOP
label_35bcd8:
    // 0x35bcd8: 0x0  nop
    ctx->pc = 0x35bcd8u;
    // NOP
label_35bcdc:
    // 0x35bcdc: 0x0  nop
    ctx->pc = 0x35bcdcu;
    // NOP
label_35bce0:
    // 0x35bce0: 0x0  nop
    ctx->pc = 0x35bce0u;
    // NOP
label_35bce4:
    // 0x35bce4: 0x0  nop
    ctx->pc = 0x35bce4u;
    // NOP
label_35bce8:
    // 0x35bce8: 0x0  nop
    ctx->pc = 0x35bce8u;
    // NOP
label_35bcec:
    // 0x35bcec: 0x0  nop
    ctx->pc = 0x35bcecu;
    // NOP
label_35bcf0:
    // 0x35bcf0: 0x0  nop
    ctx->pc = 0x35bcf0u;
    // NOP
label_35bcf4:
    // 0x35bcf4: 0x0  nop
    ctx->pc = 0x35bcf4u;
    // NOP
label_35bcf8:
    // 0x35bcf8: 0x0  nop
    ctx->pc = 0x35bcf8u;
    // NOP
label_35bcfc:
    // 0x35bcfc: 0x0  nop
    ctx->pc = 0x35bcfcu;
    // NOP
label_35bd00:
    // 0x35bd00: 0x0  nop
    ctx->pc = 0x35bd00u;
    // NOP
label_35bd04:
    // 0x35bd04: 0x0  nop
    ctx->pc = 0x35bd04u;
    // NOP
label_35bd08:
    // 0x35bd08: 0x0  nop
    ctx->pc = 0x35bd08u;
    // NOP
label_35bd0c:
    // 0x35bd0c: 0x0  nop
    ctx->pc = 0x35bd0cu;
    // NOP
label_35bd10:
    // 0x35bd10: 0x0  nop
    ctx->pc = 0x35bd10u;
    // NOP
label_35bd14:
    // 0x35bd14: 0x0  nop
    ctx->pc = 0x35bd14u;
    // NOP
label_35bd18:
    // 0x35bd18: 0x0  nop
    ctx->pc = 0x35bd18u;
    // NOP
label_35bd1c:
    // 0x35bd1c: 0x0  nop
    ctx->pc = 0x35bd1cu;
    // NOP
label_35bd20:
    // 0x35bd20: 0x0  nop
    ctx->pc = 0x35bd20u;
    // NOP
label_35bd24:
    // 0x35bd24: 0x0  nop
    ctx->pc = 0x35bd24u;
    // NOP
label_35bd28:
    // 0x35bd28: 0x0  nop
    ctx->pc = 0x35bd28u;
    // NOP
label_35bd2c:
    // 0x35bd2c: 0x0  nop
    ctx->pc = 0x35bd2cu;
    // NOP
label_35bd30:
    // 0x35bd30: 0x0  nop
    ctx->pc = 0x35bd30u;
    // NOP
label_35bd34:
    // 0x35bd34: 0x0  nop
    ctx->pc = 0x35bd34u;
    // NOP
label_35bd38:
    // 0x35bd38: 0x0  nop
    ctx->pc = 0x35bd38u;
    // NOP
label_35bd3c:
    // 0x35bd3c: 0x0  nop
    ctx->pc = 0x35bd3cu;
    // NOP
label_35bd40:
    // 0x35bd40: 0x0  nop
    ctx->pc = 0x35bd40u;
    // NOP
label_35bd44:
    // 0x35bd44: 0x0  nop
    ctx->pc = 0x35bd44u;
    // NOP
label_35bd48:
    // 0x35bd48: 0x0  nop
    ctx->pc = 0x35bd48u;
    // NOP
label_35bd4c:
    // 0x35bd4c: 0x0  nop
    ctx->pc = 0x35bd4cu;
    // NOP
label_35bd50:
    // 0x35bd50: 0x0  nop
    ctx->pc = 0x35bd50u;
    // NOP
label_35bd54:
    // 0x35bd54: 0x0  nop
    ctx->pc = 0x35bd54u;
    // NOP
label_35bd58:
    // 0x35bd58: 0x0  nop
    ctx->pc = 0x35bd58u;
    // NOP
label_35bd5c:
    // 0x35bd5c: 0x0  nop
    ctx->pc = 0x35bd5cu;
    // NOP
label_35bd60:
    // 0x35bd60: 0x0  nop
    ctx->pc = 0x35bd60u;
    // NOP
label_35bd64:
    // 0x35bd64: 0x0  nop
    ctx->pc = 0x35bd64u;
    // NOP
label_35bd68:
    // 0x35bd68: 0x0  nop
    ctx->pc = 0x35bd68u;
    // NOP
label_35bd6c:
    // 0x35bd6c: 0x0  nop
    ctx->pc = 0x35bd6cu;
    // NOP
label_35bd70:
    // 0x35bd70: 0x0  nop
    ctx->pc = 0x35bd70u;
    // NOP
label_35bd74:
    // 0x35bd74: 0x0  nop
    ctx->pc = 0x35bd74u;
    // NOP
label_35bd78:
    // 0x35bd78: 0x0  nop
    ctx->pc = 0x35bd78u;
    // NOP
label_35bd7c:
    // 0x35bd7c: 0x0  nop
    ctx->pc = 0x35bd7cu;
    // NOP
label_35bd80:
    // 0x35bd80: 0x0  nop
    ctx->pc = 0x35bd80u;
    // NOP
label_35bd84:
    // 0x35bd84: 0x0  nop
    ctx->pc = 0x35bd84u;
    // NOP
label_35bd88:
    // 0x35bd88: 0x0  nop
    ctx->pc = 0x35bd88u;
    // NOP
label_35bd8c:
    // 0x35bd8c: 0x0  nop
    ctx->pc = 0x35bd8cu;
    // NOP
label_35bd90:
    // 0x35bd90: 0x0  nop
    ctx->pc = 0x35bd90u;
    // NOP
label_35bd94:
    // 0x35bd94: 0x0  nop
    ctx->pc = 0x35bd94u;
    // NOP
label_35bd98:
    // 0x35bd98: 0x0  nop
    ctx->pc = 0x35bd98u;
    // NOP
label_35bd9c:
    // 0x35bd9c: 0x0  nop
    ctx->pc = 0x35bd9cu;
    // NOP
label_35bda0:
    // 0x35bda0: 0x0  nop
    ctx->pc = 0x35bda0u;
    // NOP
label_35bda4:
    // 0x35bda4: 0x0  nop
    ctx->pc = 0x35bda4u;
    // NOP
label_35bda8:
    // 0x35bda8: 0x0  nop
    ctx->pc = 0x35bda8u;
    // NOP
label_35bdac:
    // 0x35bdac: 0x0  nop
    ctx->pc = 0x35bdacu;
    // NOP
label_35bdb0:
    // 0x35bdb0: 0x0  nop
    ctx->pc = 0x35bdb0u;
    // NOP
label_35bdb4:
    // 0x35bdb4: 0x0  nop
    ctx->pc = 0x35bdb4u;
    // NOP
label_35bdb8:
    // 0x35bdb8: 0x0  nop
    ctx->pc = 0x35bdb8u;
    // NOP
label_35bdbc:
    // 0x35bdbc: 0x0  nop
    ctx->pc = 0x35bdbcu;
    // NOP
label_35bdc0:
    // 0x35bdc0: 0x0  nop
    ctx->pc = 0x35bdc0u;
    // NOP
label_35bdc4:
    // 0x35bdc4: 0x0  nop
    ctx->pc = 0x35bdc4u;
    // NOP
label_35bdc8:
    // 0x35bdc8: 0x0  nop
    ctx->pc = 0x35bdc8u;
    // NOP
label_35bdcc:
    // 0x35bdcc: 0x0  nop
    ctx->pc = 0x35bdccu;
    // NOP
label_35bdd0:
    // 0x35bdd0: 0x0  nop
    ctx->pc = 0x35bdd0u;
    // NOP
label_35bdd4:
    // 0x35bdd4: 0x0  nop
    ctx->pc = 0x35bdd4u;
    // NOP
label_35bdd8:
    // 0x35bdd8: 0x0  nop
    ctx->pc = 0x35bdd8u;
    // NOP
label_35bddc:
    // 0x35bddc: 0x0  nop
    ctx->pc = 0x35bddcu;
    // NOP
label_35bde0:
    // 0x35bde0: 0x0  nop
    ctx->pc = 0x35bde0u;
    // NOP
label_35bde4:
    // 0x35bde4: 0x0  nop
    ctx->pc = 0x35bde4u;
    // NOP
label_35bde8:
    // 0x35bde8: 0x35baf8  .word       0x0035BAF8                   # dsll        $s7, $s5, 11 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bde8u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 11);
label_35bdec:
    // 0x35bdec: 0x0  nop
    ctx->pc = 0x35bdecu;
    // NOP
label_35bdf0:
    // 0x35bdf0: 0x1  .word       0x00000001                   # INVALID     $zero, $zero, 0x1 # 00000000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bdf0u;
    // Unhandled SPECIAL instruction: 0x1
label_35bdf4:
    // 0x35bdf4: 0x0  nop
    ctx->pc = 0x35bdf4u;
    // NOP
label_35bdf8:
    // 0x35bdf8: 0x0  nop
    ctx->pc = 0x35bdf8u;
    // NOP
label_35bdfc:
    // 0x35bdfc: 0x0  nop
    ctx->pc = 0x35bdfcu;
    // NOP
label_35be00:
    // 0x35be00: 0x35bdf8  .word       0x0035BDF8                   # dsll        $s7, $s5, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be00u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 23);
label_35be04:
    // 0x35be04: 0x35bdf8  .word       0x0035BDF8                   # dsll        $s7, $s5, 23 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be04u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 23);
label_35be08:
    // 0x35be08: 0x35be00  .word       0x0035BE00                   # sll         $s7, $s5, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be08u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
label_35be0c:
    // 0x35be0c: 0x35be00  .word       0x0035BE00                   # sll         $s7, $s5, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be0cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 24));
label_35be10:
    // 0x35be10: 0x35be08  .word       0x0035BE08                   # jr          $at # 0015BE00 <InstrIdType: CPU_SPECIAL>
label_35be14:
    if (ctx->pc == 0x35BE14u) {
        ctx->pc = 0x35BE14u;
            // 0x35be14: 0x35be08  .word       0x0035BE08                   # jr          $at # 0015BE00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35BE18u;
        goto label_35be18;
    }
    ctx->pc = 0x35BE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35BE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BE10u;
            // 0x35be14: 0x35be08  .word       0x0035BE08                   # jr          $at # 0015BE00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BE18u;
label_35be18:
    // 0x35be18: 0x35be10  .word       0x0035BE10                   # mfhi        $s7 # 00350600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be18u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35be1c:
    // 0x35be1c: 0x35be10  .word       0x0035BE10                   # mfhi        $s7 # 00350600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be1cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35be20:
    // 0x35be20: 0x35be18  .word       0x0035BE18                   # mult        $s7, $at, $s5 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35be20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35be24:
    // 0x35be24: 0x35be18  .word       0x0035BE18                   # mult        $s7, $at, $s5 # 00000600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35be24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35be28:
    // 0x35be28: 0x35be20  .word       0x0035BE20                   # add         $s7, $at, $s5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be28u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35be2c:
    // 0x35be2c: 0x35be20  .word       0x0035BE20                   # add         $s7, $at, $s5 # 00000600 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35be30:
    // 0x35be30: 0x35be28  .word       0x0035BE28                   # mfsa        $s7 # 00350600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35be30u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35be34:
    // 0x35be34: 0x35be28  .word       0x0035BE28                   # mfsa        $s7 # 00350600 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35be34u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35be38:
    // 0x35be38: 0x35be30  tge         $at, $s5, 760
    ctx->pc = 0x35be38u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35be3c:
    // 0x35be3c: 0x35be30  tge         $at, $s5, 760
    ctx->pc = 0x35be3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35be40:
    // 0x35be40: 0x35be38  .word       0x0035BE38                   # dsll        $s7, $s5, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be40u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 24);
label_35be44:
    // 0x35be44: 0x35be38  .word       0x0035BE38                   # dsll        $s7, $s5, 24 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be44u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 24);
label_35be48:
    // 0x35be48: 0x35be40  .word       0x0035BE40                   # sll         $s7, $s5, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be48u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 25));
label_35be4c:
    // 0x35be4c: 0x35be40  .word       0x0035BE40                   # sll         $s7, $s5, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be4cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 25));
label_35be50:
    // 0x35be50: 0x35be48  .word       0x0035BE48                   # jr          $at # 0015BE40 <InstrIdType: CPU_SPECIAL>
label_35be54:
    if (ctx->pc == 0x35BE54u) {
        ctx->pc = 0x35BE54u;
            // 0x35be54: 0x35be48  .word       0x0035BE48                   # jr          $at # 0015BE40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35BE58u;
        goto label_35be58;
    }
    ctx->pc = 0x35BE50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35BE54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BE50u;
            // 0x35be54: 0x35be48  .word       0x0035BE48                   # jr          $at # 0015BE40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BE58u;
label_35be58:
    // 0x35be58: 0x35be50  .word       0x0035BE50                   # mfhi        $s7 # 00350640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be58u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35be5c:
    // 0x35be5c: 0x35be50  .word       0x0035BE50                   # mfhi        $s7 # 00350640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be5cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35be60:
    // 0x35be60: 0x35be58  .word       0x0035BE58                   # mult        $s7, $at, $s5 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35be60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35be64:
    // 0x35be64: 0x35be58  .word       0x0035BE58                   # mult        $s7, $at, $s5 # 00000640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35be64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35be68:
    // 0x35be68: 0x35be60  .word       0x0035BE60                   # add         $s7, $at, $s5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35be6c:
    // 0x35be6c: 0x35be60  .word       0x0035BE60                   # add         $s7, $at, $s5 # 00000640 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35be70:
    // 0x35be70: 0x35be68  .word       0x0035BE68                   # mfsa        $s7 # 00350640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35be70u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35be74:
    // 0x35be74: 0x35be68  .word       0x0035BE68                   # mfsa        $s7 # 00350640 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35be74u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35be78:
    // 0x35be78: 0x35be70  tge         $at, $s5, 761
    ctx->pc = 0x35be78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35be7c:
    // 0x35be7c: 0x35be70  tge         $at, $s5, 761
    ctx->pc = 0x35be7cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35be80:
    // 0x35be80: 0x35be78  .word       0x0035BE78                   # dsll        $s7, $s5, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be80u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 25);
label_35be84:
    // 0x35be84: 0x35be78  .word       0x0035BE78                   # dsll        $s7, $s5, 25 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be84u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 25);
label_35be88:
    // 0x35be88: 0x35be80  .word       0x0035BE80                   # sll         $s7, $s5, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be88u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 26));
label_35be8c:
    // 0x35be8c: 0x35be80  .word       0x0035BE80                   # sll         $s7, $s5, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be8cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 26));
label_35be90:
    // 0x35be90: 0x35be88  .word       0x0035BE88                   # jr          $at # 0015BE80 <InstrIdType: CPU_SPECIAL>
label_35be94:
    if (ctx->pc == 0x35BE94u) {
        ctx->pc = 0x35BE94u;
            // 0x35be94: 0x35be88  .word       0x0035BE88                   # jr          $at # 0015BE80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35BE98u;
        goto label_35be98;
    }
    ctx->pc = 0x35BE90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35BE94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BE90u;
            // 0x35be94: 0x35be88  .word       0x0035BE88                   # jr          $at # 0015BE80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BE98u;
label_35be98:
    // 0x35be98: 0x35be90  .word       0x0035BE90                   # mfhi        $s7 # 00350680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be98u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35be9c:
    // 0x35be9c: 0x35be90  .word       0x0035BE90                   # mfhi        $s7 # 00350680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35be9cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35bea0:
    // 0x35bea0: 0x35be98  .word       0x0035BE98                   # mult        $s7, $at, $s5 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bea0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bea4:
    // 0x35bea4: 0x35be98  .word       0x0035BE98                   # mult        $s7, $at, $s5 # 00000680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bea4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bea8:
    // 0x35bea8: 0x35bea0  .word       0x0035BEA0                   # add         $s7, $at, $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bea8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35beac:
    // 0x35beac: 0x35bea0  .word       0x0035BEA0                   # add         $s7, $at, $s5 # 00000680 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35beacu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35beb0:
    // 0x35beb0: 0x35bea8  .word       0x0035BEA8                   # mfsa        $s7 # 00350680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35beb0u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35beb4:
    // 0x35beb4: 0x35bea8  .word       0x0035BEA8                   # mfsa        $s7 # 00350680 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35beb4u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35beb8:
    // 0x35beb8: 0x35beb0  tge         $at, $s5, 762
    ctx->pc = 0x35beb8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35bebc:
    // 0x35bebc: 0x35beb0  tge         $at, $s5, 762
    ctx->pc = 0x35bebcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35bec0:
    // 0x35bec0: 0x35beb8  .word       0x0035BEB8                   # dsll        $s7, $s5, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bec0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 26);
label_35bec4:
    // 0x35bec4: 0x35beb8  .word       0x0035BEB8                   # dsll        $s7, $s5, 26 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bec4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 26);
label_35bec8:
    // 0x35bec8: 0x35bec0  .word       0x0035BEC0                   # sll         $s7, $s5, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bec8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 27));
label_35becc:
    // 0x35becc: 0x35bec0  .word       0x0035BEC0                   # sll         $s7, $s5, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35beccu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 27));
label_35bed0:
    // 0x35bed0: 0x35bec8  .word       0x0035BEC8                   # jr          $at # 0015BEC0 <InstrIdType: CPU_SPECIAL>
label_35bed4:
    if (ctx->pc == 0x35BED4u) {
        ctx->pc = 0x35BED4u;
            // 0x35bed4: 0x35bec8  .word       0x0035BEC8                   # jr          $at # 0015BEC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35BED8u;
        goto label_35bed8;
    }
    ctx->pc = 0x35BED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35BED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BED0u;
            // 0x35bed4: 0x35bec8  .word       0x0035BEC8                   # jr          $at # 0015BEC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BED8u;
label_35bed8:
    // 0x35bed8: 0x35bed0  .word       0x0035BED0                   # mfhi        $s7 # 003506C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bed8u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35bedc:
    // 0x35bedc: 0x35bed0  .word       0x0035BED0                   # mfhi        $s7 # 003506C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bedcu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35bee0:
    // 0x35bee0: 0x35bed8  .word       0x0035BED8                   # mult        $s7, $at, $s5 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bee0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bee4:
    // 0x35bee4: 0x35bed8  .word       0x0035BED8                   # mult        $s7, $at, $s5 # 000006C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bee4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bee8:
    // 0x35bee8: 0x35bee0  .word       0x0035BEE0                   # add         $s7, $at, $s5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bee8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35beec:
    // 0x35beec: 0x35bee0  .word       0x0035BEE0                   # add         $s7, $at, $s5 # 000006C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35beecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35bef0:
    // 0x35bef0: 0x35bee8  .word       0x0035BEE8                   # mfsa        $s7 # 003506C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bef0u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35bef4:
    // 0x35bef4: 0x35bee8  .word       0x0035BEE8                   # mfsa        $s7 # 003506C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bef4u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35bef8:
    // 0x35bef8: 0x35bef0  tge         $at, $s5, 763
    ctx->pc = 0x35bef8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35befc:
    // 0x35befc: 0x35bef0  tge         $at, $s5, 763
    ctx->pc = 0x35befcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35bf00:
    // 0x35bf00: 0x35bef8  .word       0x0035BEF8                   # dsll        $s7, $s5, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf00u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 27);
label_35bf04:
    // 0x35bf04: 0x35bef8  .word       0x0035BEF8                   # dsll        $s7, $s5, 27 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf04u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 27);
label_35bf08:
    // 0x35bf08: 0x35bf00  .word       0x0035BF00                   # sll         $s7, $s5, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf08u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 28));
label_35bf0c:
    // 0x35bf0c: 0x35bf00  .word       0x0035BF00                   # sll         $s7, $s5, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf0cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 28));
label_35bf10:
    // 0x35bf10: 0x35bf08  .word       0x0035BF08                   # jr          $at # 0015BF00 <InstrIdType: CPU_SPECIAL>
label_35bf14:
    if (ctx->pc == 0x35BF14u) {
        ctx->pc = 0x35BF14u;
            // 0x35bf14: 0x35bf08  .word       0x0035BF08                   # jr          $at # 0015BF00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35BF18u;
        goto label_35bf18;
    }
    ctx->pc = 0x35BF10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35BF14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BF10u;
            // 0x35bf14: 0x35bf08  .word       0x0035BF08                   # jr          $at # 0015BF00 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BF18u;
label_35bf18:
    // 0x35bf18: 0x35bf10  .word       0x0035BF10                   # mfhi        $s7 # 00350700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf18u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35bf1c:
    // 0x35bf1c: 0x35bf10  .word       0x0035BF10                   # mfhi        $s7 # 00350700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf1cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35bf20:
    // 0x35bf20: 0x35bf18  .word       0x0035BF18                   # mult        $s7, $at, $s5 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bf20u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bf24:
    // 0x35bf24: 0x35bf18  .word       0x0035BF18                   # mult        $s7, $at, $s5 # 00000700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bf24u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bf28:
    // 0x35bf28: 0x35bf20  .word       0x0035BF20                   # add         $s7, $at, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf28u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35bf2c:
    // 0x35bf2c: 0x35bf20  .word       0x0035BF20                   # add         $s7, $at, $s5 # 00000700 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf2cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35bf30:
    // 0x35bf30: 0x35bf28  .word       0x0035BF28                   # mfsa        $s7 # 00350700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bf30u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35bf34:
    // 0x35bf34: 0x35bf28  .word       0x0035BF28                   # mfsa        $s7 # 00350700 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bf34u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35bf38:
    // 0x35bf38: 0x35bf30  tge         $at, $s5, 764
    ctx->pc = 0x35bf38u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35bf3c:
    // 0x35bf3c: 0x35bf30  tge         $at, $s5, 764
    ctx->pc = 0x35bf3cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35bf40:
    // 0x35bf40: 0x35bf38  .word       0x0035BF38                   # dsll        $s7, $s5, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf40u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 28);
label_35bf44:
    // 0x35bf44: 0x35bf38  .word       0x0035BF38                   # dsll        $s7, $s5, 28 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf44u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 28);
label_35bf48:
    // 0x35bf48: 0x35bf40  .word       0x0035BF40                   # sll         $s7, $s5, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf48u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 29));
label_35bf4c:
    // 0x35bf4c: 0x35bf40  .word       0x0035BF40                   # sll         $s7, $s5, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf4cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 29));
label_35bf50:
    // 0x35bf50: 0x35bf48  .word       0x0035BF48                   # jr          $at # 0015BF40 <InstrIdType: CPU_SPECIAL>
label_35bf54:
    if (ctx->pc == 0x35BF54u) {
        ctx->pc = 0x35BF54u;
            // 0x35bf54: 0x35bf48  .word       0x0035BF48                   # jr          $at # 0015BF40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35BF58u;
        goto label_35bf58;
    }
    ctx->pc = 0x35BF50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35BF54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BF50u;
            // 0x35bf54: 0x35bf48  .word       0x0035BF48                   # jr          $at # 0015BF40 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BF58u;
label_35bf58:
    // 0x35bf58: 0x35bf50  .word       0x0035BF50                   # mfhi        $s7 # 00350740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf58u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35bf5c:
    // 0x35bf5c: 0x35bf50  .word       0x0035BF50                   # mfhi        $s7 # 00350740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf5cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35bf60:
    // 0x35bf60: 0x35bf58  .word       0x0035BF58                   # mult        $s7, $at, $s5 # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bf60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bf64:
    // 0x35bf64: 0x35bf58  .word       0x0035BF58                   # mult        $s7, $at, $s5 # 00000740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bf64u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bf68:
    // 0x35bf68: 0x35bf60  .word       0x0035BF60                   # add         $s7, $at, $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf68u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35bf6c:
    // 0x35bf6c: 0x35bf60  .word       0x0035BF60                   # add         $s7, $at, $s5 # 00000740 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf6cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35bf70:
    // 0x35bf70: 0x35bf68  .word       0x0035BF68                   # mfsa        $s7 # 00350740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bf70u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35bf74:
    // 0x35bf74: 0x35bf68  .word       0x0035BF68                   # mfsa        $s7 # 00350740 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bf74u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35bf78:
    // 0x35bf78: 0x35bf70  tge         $at, $s5, 765
    ctx->pc = 0x35bf78u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35bf7c:
    // 0x35bf7c: 0x35bf70  tge         $at, $s5, 765
    ctx->pc = 0x35bf7cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35bf80:
    // 0x35bf80: 0x35bf78  .word       0x0035BF78                   # dsll        $s7, $s5, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf80u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 29);
label_35bf84:
    // 0x35bf84: 0x35bf78  .word       0x0035BF78                   # dsll        $s7, $s5, 29 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf84u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 29);
label_35bf88:
    // 0x35bf88: 0x35bf80  .word       0x0035BF80                   # sll         $s7, $s5, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf88u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 30));
label_35bf8c:
    // 0x35bf8c: 0x35bf80  .word       0x0035BF80                   # sll         $s7, $s5, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf8cu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 30));
label_35bf90:
    // 0x35bf90: 0x35bf88  .word       0x0035BF88                   # jr          $at # 0015BF80 <InstrIdType: CPU_SPECIAL>
label_35bf94:
    if (ctx->pc == 0x35BF94u) {
        ctx->pc = 0x35BF94u;
            // 0x35bf94: 0x35bf88  .word       0x0035BF88                   # jr          $at # 0015BF80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35BF98u;
        goto label_35bf98;
    }
    ctx->pc = 0x35BF90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35BF94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BF90u;
            // 0x35bf94: 0x35bf88  .word       0x0035BF88                   # jr          $at # 0015BF80 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BF98u;
label_35bf98:
    // 0x35bf98: 0x35bf90  .word       0x0035BF90                   # mfhi        $s7 # 00350780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf98u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35bf9c:
    // 0x35bf9c: 0x35bf90  .word       0x0035BF90                   # mfhi        $s7 # 00350780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bf9cu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35bfa0:
    // 0x35bfa0: 0x35bf98  .word       0x0035BF98                   # mult        $s7, $at, $s5 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bfa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bfa4:
    // 0x35bfa4: 0x35bf98  .word       0x0035BF98                   # mult        $s7, $at, $s5 # 00000780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bfa4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bfa8:
    // 0x35bfa8: 0x35bfa0  .word       0x0035BFA0                   # add         $s7, $at, $s5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bfa8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35bfac:
    // 0x35bfac: 0x35bfa0  .word       0x0035BFA0                   # add         $s7, $at, $s5 # 00000780 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bfacu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35bfb0:
    // 0x35bfb0: 0x35bfa8  .word       0x0035BFA8                   # mfsa        $s7 # 00350780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bfb0u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35bfb4:
    // 0x35bfb4: 0x35bfa8  .word       0x0035BFA8                   # mfsa        $s7 # 00350780 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bfb4u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35bfb8:
    // 0x35bfb8: 0x35bfb0  tge         $at, $s5, 766
    ctx->pc = 0x35bfb8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35bfbc:
    // 0x35bfbc: 0x35bfb0  tge         $at, $s5, 766
    ctx->pc = 0x35bfbcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35bfc0:
    // 0x35bfc0: 0x35bfb8  .word       0x0035BFB8                   # dsll        $s7, $s5, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bfc0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 30);
label_35bfc4:
    // 0x35bfc4: 0x35bfb8  .word       0x0035BFB8                   # dsll        $s7, $s5, 30 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bfc4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 30);
label_35bfc8:
    // 0x35bfc8: 0x35bfc0  .word       0x0035BFC0                   # sll         $s7, $s5, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bfc8u;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 31));
label_35bfcc:
    // 0x35bfcc: 0x35bfc0  .word       0x0035BFC0                   # sll         $s7, $s5, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bfccu;
    SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 21), 31));
label_35bfd0:
    // 0x35bfd0: 0x35bfc8  .word       0x0035BFC8                   # jr          $at # 0015BFC0 <InstrIdType: CPU_SPECIAL>
label_35bfd4:
    if (ctx->pc == 0x35BFD4u) {
        ctx->pc = 0x35BFD4u;
            // 0x35bfd4: 0x35bfc8  .word       0x0035BFC8                   # jr          $at # 0015BFC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35BFD8u;
        goto label_35bfd8;
    }
    ctx->pc = 0x35BFD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35BFD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35BFD0u;
            // 0x35bfd4: 0x35bfc8  .word       0x0035BFC8                   # jr          $at # 0015BFC0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35BFD8u;
label_35bfd8:
    // 0x35bfd8: 0x35bfd0  .word       0x0035BFD0                   # mfhi        $s7 # 003507C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bfd8u;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35bfdc:
    // 0x35bfdc: 0x35bfd0  .word       0x0035BFD0                   # mfhi        $s7 # 003507C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bfdcu;
    SET_GPR_U64(ctx, 23, ctx->hi);
label_35bfe0:
    // 0x35bfe0: 0x35bfd8  .word       0x0035BFD8                   # mult        $s7, $at, $s5 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bfe0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bfe4:
    // 0x35bfe4: 0x35bfd8  .word       0x0035BFD8                   # mult        $s7, $at, $s5 # 000007C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bfe4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 23, (int32_t)result); }
label_35bfe8:
    // 0x35bfe8: 0x35bfe0  .word       0x0035BFE0                   # add         $s7, $at, $s5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bfe8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35bfec:
    // 0x35bfec: 0x35bfe0  .word       0x0035BFE0                   # add         $s7, $at, $s5 # 000007C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35bfecu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
label_35bff0:
    // 0x35bff0: 0x35bfe8  .word       0x0035BFE8                   # mfsa        $s7 # 003507C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bff0u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35bff4:
    // 0x35bff4: 0x35bfe8  .word       0x0035BFE8                   # mfsa        $s7 # 003507C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35bff4u;
    SET_GPR_U32(ctx, 23, ctx->sa);
label_35bff8:
    // 0x35bff8: 0x35bff0  tge         $at, $s5, 767
    ctx->pc = 0x35bff8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35bffc:
    // 0x35bffc: 0x35bff0  tge         $at, $s5, 767
    ctx->pc = 0x35bffcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35c000:
    // 0x35c000: 0x35bff8  .word       0x0035BFF8                   # dsll        $s7, $s5, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c000u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 31);
label_35c004:
    // 0x35c004: 0x35bff8  .word       0x0035BFF8                   # dsll        $s7, $s5, 31 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c004u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 21) << 31);
label_35c008:
    // 0x35c008: 0x35c000  .word       0x0035C000                   # sll         $t8, $s5, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c008u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_35c00c:
    // 0x35c00c: 0x35c000  .word       0x0035C000                   # sll         $t8, $s5, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c00cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 21), 0));
label_35c010:
    // 0x35c010: 0x35c008  .word       0x0035C008                   # jr          $at # 0015C000 <InstrIdType: CPU_SPECIAL>
label_35c014:
    if (ctx->pc == 0x35C014u) {
        ctx->pc = 0x35C014u;
            // 0x35c014: 0x35c008  .word       0x0035C008                   # jr          $at # 0015C000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35C018u;
        goto label_35c018;
    }
    ctx->pc = 0x35C010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35C014u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C010u;
            // 0x35c014: 0x35c008  .word       0x0035C008                   # jr          $at # 0015C000 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C018u;
label_35c018:
    // 0x35c018: 0x35c010  .word       0x0035C010                   # mfhi        $t8 # 00350000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c018u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_35c01c:
    // 0x35c01c: 0x35c010  .word       0x0035C010                   # mfhi        $t8 # 00350000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c01cu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_35c020:
    // 0x35c020: 0x35c018  mult        $t8, $at, $s5
    ctx->pc = 0x35c020u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_35c024:
    // 0x35c024: 0x35c018  mult        $t8, $at, $s5
    ctx->pc = 0x35c024u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_35c028:
    // 0x35c028: 0x35c020  add         $t8, $at, $s5
    ctx->pc = 0x35c028u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_35c02c:
    // 0x35c02c: 0x35c020  add         $t8, $at, $s5
    ctx->pc = 0x35c02cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_35c030:
    // 0x35c030: 0x35c028  .word       0x0035C028                   # mfsa        $t8 # 00350000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c030u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_35c034:
    // 0x35c034: 0x35c028  .word       0x0035C028                   # mfsa        $t8 # 00350000 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c034u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_35c038:
    // 0x35c038: 0x35c030  tge         $at, $s5, 768
    ctx->pc = 0x35c038u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35c03c:
    // 0x35c03c: 0x35c030  tge         $at, $s5, 768
    ctx->pc = 0x35c03cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35c040:
    // 0x35c040: 0x35c038  .word       0x0035C038                   # dsll        $t8, $s5, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c040u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 21) << 0);
label_35c044:
    // 0x35c044: 0x35c038  .word       0x0035C038                   # dsll        $t8, $s5, 0 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c044u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 21) << 0);
label_35c048:
    // 0x35c048: 0x35c040  .word       0x0035C040                   # sll         $t8, $s5, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c048u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_35c04c:
    // 0x35c04c: 0x35c040  .word       0x0035C040                   # sll         $t8, $s5, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c04cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 21), 1));
label_35c050:
    // 0x35c050: 0x35c048  .word       0x0035C048                   # jr          $at # 0015C040 <InstrIdType: CPU_SPECIAL>
label_35c054:
    if (ctx->pc == 0x35C054u) {
        ctx->pc = 0x35C054u;
            // 0x35c054: 0x35c048  .word       0x0035C048                   # jr          $at # 0015C040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35C058u;
        goto label_35c058;
    }
    ctx->pc = 0x35C050u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35C054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C050u;
            // 0x35c054: 0x35c048  .word       0x0035C048                   # jr          $at # 0015C040 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C058u;
label_35c058:
    // 0x35c058: 0x35c050  .word       0x0035C050                   # mfhi        $t8 # 00350040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c058u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_35c05c:
    // 0x35c05c: 0x35c050  .word       0x0035C050                   # mfhi        $t8 # 00350040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c05cu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_35c060:
    // 0x35c060: 0x35c058  .word       0x0035C058                   # mult        $t8, $at, $s5 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c060u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_35c064:
    // 0x35c064: 0x35c058  .word       0x0035C058                   # mult        $t8, $at, $s5 # 00000040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c064u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_35c068:
    // 0x35c068: 0x35c060  .word       0x0035C060                   # add         $t8, $at, $s5 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c068u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_35c06c:
    // 0x35c06c: 0x35c060  .word       0x0035C060                   # add         $t8, $at, $s5 # 00000040 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c06cu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_35c070:
    // 0x35c070: 0x35c068  .word       0x0035C068                   # mfsa        $t8 # 00350040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c070u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_35c074:
    // 0x35c074: 0x35c068  .word       0x0035C068                   # mfsa        $t8 # 00350040 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c074u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_35c078:
    // 0x35c078: 0x35c070  tge         $at, $s5, 769
    ctx->pc = 0x35c078u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35c07c:
    // 0x35c07c: 0x35c070  tge         $at, $s5, 769
    ctx->pc = 0x35c07cu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35c080:
    // 0x35c080: 0x35c078  .word       0x0035C078                   # dsll        $t8, $s5, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c080u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 21) << 1);
label_35c084:
    // 0x35c084: 0x35c078  .word       0x0035C078                   # dsll        $t8, $s5, 1 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c084u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 21) << 1);
label_35c088:
    // 0x35c088: 0x35c080  .word       0x0035C080                   # sll         $t8, $s5, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c088u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_35c08c:
    // 0x35c08c: 0x35c080  .word       0x0035C080                   # sll         $t8, $s5, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c08cu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 21), 2));
label_35c090:
    // 0x35c090: 0x35c088  .word       0x0035C088                   # jr          $at # 0015C080 <InstrIdType: CPU_SPECIAL>
label_35c094:
    if (ctx->pc == 0x35C094u) {
        ctx->pc = 0x35C094u;
            // 0x35c094: 0x35c088  .word       0x0035C088                   # jr          $at # 0015C080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35C098u;
        goto label_35c098;
    }
    ctx->pc = 0x35C090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35C094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C090u;
            // 0x35c094: 0x35c088  .word       0x0035C088                   # jr          $at # 0015C080 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C098u;
label_35c098:
    // 0x35c098: 0x35c090  .word       0x0035C090                   # mfhi        $t8 # 00350080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c098u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_35c09c:
    // 0x35c09c: 0x35c090  .word       0x0035C090                   # mfhi        $t8 # 00350080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c09cu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_35c0a0:
    // 0x35c0a0: 0x35c098  .word       0x0035C098                   # mult        $t8, $at, $s5 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c0a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_35c0a4:
    // 0x35c0a4: 0x35c098  .word       0x0035C098                   # mult        $t8, $at, $s5 # 00000080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c0a4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_35c0a8:
    // 0x35c0a8: 0x35c0a0  .word       0x0035C0A0                   # add         $t8, $at, $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c0a8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_35c0ac:
    // 0x35c0ac: 0x35c0a0  .word       0x0035C0A0                   # add         $t8, $at, $s5 # 00000080 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c0acu;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
label_35c0b0:
    // 0x35c0b0: 0x35c0a8  .word       0x0035C0A8                   # mfsa        $t8 # 00350080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c0b0u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_35c0b4:
    // 0x35c0b4: 0x35c0a8  .word       0x0035C0A8                   # mfsa        $t8 # 00350080 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c0b4u;
    SET_GPR_U32(ctx, 24, ctx->sa);
label_35c0b8:
    // 0x35c0b8: 0x35c0b0  tge         $at, $s5, 770
    ctx->pc = 0x35c0b8u;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35c0bc:
    // 0x35c0bc: 0x35c0b0  tge         $at, $s5, 770
    ctx->pc = 0x35c0bcu;
    if (GPR_S64(ctx, 1) >= GPR_S64(ctx, 21)) { runtime->handleTrap(rdram, ctx); }
label_35c0c0:
    // 0x35c0c0: 0x35c0b8  .word       0x0035C0B8                   # dsll        $t8, $s5, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c0c0u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 21) << 2);
label_35c0c4:
    // 0x35c0c4: 0x35c0b8  .word       0x0035C0B8                   # dsll        $t8, $s5, 2 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c0c4u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 21) << 2);
label_35c0c8:
    // 0x35c0c8: 0x35c0c0  .word       0x0035C0C0                   # sll         $t8, $s5, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c0c8u;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_35c0cc:
    // 0x35c0cc: 0x35c0c0  .word       0x0035C0C0                   # sll         $t8, $s5, 3 # 00200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c0ccu;
    SET_GPR_S32(ctx, 24, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_35c0d0:
    // 0x35c0d0: 0x35c0c8  .word       0x0035C0C8                   # jr          $at # 0015C0C0 <InstrIdType: CPU_SPECIAL>
label_35c0d4:
    if (ctx->pc == 0x35C0D4u) {
        ctx->pc = 0x35C0D4u;
            // 0x35c0d4: 0x35c0c8  .word       0x0035C0C8                   # jr          $at # 0015C0C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->pc = 0x35C0D8u;
        goto label_35c0d8;
    }
    ctx->pc = 0x35C0D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 1);
        ctx->pc = 0x35C0D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35C0D0u;
            // 0x35c0d4: 0x35c0c8  .word       0x0035C0C8                   # jr          $at # 0015C0C0 <InstrIdType: CPU_SPECIAL> (Delay Slot)
        // JR $1 - Handled by branch logic
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x35C0D8u;
label_35c0d8:
    // 0x35c0d8: 0x35c0d0  .word       0x0035C0D0                   # mfhi        $t8 # 003500C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c0d8u;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_35c0dc:
    // 0x35c0dc: 0x35c0d0  .word       0x0035C0D0                   # mfhi        $t8 # 003500C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c0dcu;
    SET_GPR_U64(ctx, 24, ctx->hi);
label_35c0e0:
    // 0x35c0e0: 0x35c0d8  .word       0x0035C0D8                   # mult        $t8, $at, $s5 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c0e0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_35c0e4:
    // 0x35c0e4: 0x35c0d8  .word       0x0035C0D8                   # mult        $t8, $at, $s5 # 000000C0 <InstrIdType: R5900_SPECIAL>
    ctx->pc = 0x35c0e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 1) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 24, (int32_t)result); }
label_35c0e8:
    // 0x35c0e8: 0x35c0e0  .word       0x0035C0E0                   # add         $t8, $at, $s5 # 000000C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x35c0e8u;
    {     int32_t rs_val = GPR_S32(ctx, 1);     int32_t rt_val = GPR_S32(ctx, 21);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 24, (int32_t)result);     } }
    ctx->pc = 0x35c0ecu;
}
