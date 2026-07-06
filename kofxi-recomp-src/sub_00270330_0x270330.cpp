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

// Function: sub_00270330
// Address: 0x270330 - 0x270ae0
void sub_00270330_0x270330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00270330_0x270330");
#endif

    switch (ctx->pc) {
        case 0x270330u: goto label_270330;
        case 0x270334u: goto label_270334;
        case 0x270338u: goto label_270338;
        case 0x27033cu: goto label_27033c;
        case 0x270340u: goto label_270340;
        case 0x270344u: goto label_270344;
        case 0x270348u: goto label_270348;
        case 0x27034cu: goto label_27034c;
        case 0x270350u: goto label_270350;
        case 0x270354u: goto label_270354;
        case 0x270358u: goto label_270358;
        case 0x27035cu: goto label_27035c;
        case 0x270360u: goto label_270360;
        case 0x270364u: goto label_270364;
        case 0x270368u: goto label_270368;
        case 0x27036cu: goto label_27036c;
        case 0x270370u: goto label_270370;
        case 0x270374u: goto label_270374;
        case 0x270378u: goto label_270378;
        case 0x27037cu: goto label_27037c;
        case 0x270380u: goto label_270380;
        case 0x270384u: goto label_270384;
        case 0x270388u: goto label_270388;
        case 0x27038cu: goto label_27038c;
        case 0x270390u: goto label_270390;
        case 0x270394u: goto label_270394;
        case 0x270398u: goto label_270398;
        case 0x27039cu: goto label_27039c;
        case 0x2703a0u: goto label_2703a0;
        case 0x2703a4u: goto label_2703a4;
        case 0x2703a8u: goto label_2703a8;
        case 0x2703acu: goto label_2703ac;
        case 0x2703b0u: goto label_2703b0;
        case 0x2703b4u: goto label_2703b4;
        case 0x2703b8u: goto label_2703b8;
        case 0x2703bcu: goto label_2703bc;
        case 0x2703c0u: goto label_2703c0;
        case 0x2703c4u: goto label_2703c4;
        case 0x2703c8u: goto label_2703c8;
        case 0x2703ccu: goto label_2703cc;
        case 0x2703d0u: goto label_2703d0;
        case 0x2703d4u: goto label_2703d4;
        case 0x2703d8u: goto label_2703d8;
        case 0x2703dcu: goto label_2703dc;
        case 0x2703e0u: goto label_2703e0;
        case 0x2703e4u: goto label_2703e4;
        case 0x2703e8u: goto label_2703e8;
        case 0x2703ecu: goto label_2703ec;
        case 0x2703f0u: goto label_2703f0;
        case 0x2703f4u: goto label_2703f4;
        case 0x2703f8u: goto label_2703f8;
        case 0x2703fcu: goto label_2703fc;
        case 0x270400u: goto label_270400;
        case 0x270404u: goto label_270404;
        case 0x270408u: goto label_270408;
        case 0x27040cu: goto label_27040c;
        case 0x270410u: goto label_270410;
        case 0x270414u: goto label_270414;
        case 0x270418u: goto label_270418;
        case 0x27041cu: goto label_27041c;
        case 0x270420u: goto label_270420;
        case 0x270424u: goto label_270424;
        case 0x270428u: goto label_270428;
        case 0x27042cu: goto label_27042c;
        case 0x270430u: goto label_270430;
        case 0x270434u: goto label_270434;
        case 0x270438u: goto label_270438;
        case 0x27043cu: goto label_27043c;
        case 0x270440u: goto label_270440;
        case 0x270444u: goto label_270444;
        case 0x270448u: goto label_270448;
        case 0x27044cu: goto label_27044c;
        case 0x270450u: goto label_270450;
        case 0x270454u: goto label_270454;
        case 0x270458u: goto label_270458;
        case 0x27045cu: goto label_27045c;
        case 0x270460u: goto label_270460;
        case 0x270464u: goto label_270464;
        case 0x270468u: goto label_270468;
        case 0x27046cu: goto label_27046c;
        case 0x270470u: goto label_270470;
        case 0x270474u: goto label_270474;
        case 0x270478u: goto label_270478;
        case 0x27047cu: goto label_27047c;
        case 0x270480u: goto label_270480;
        case 0x270484u: goto label_270484;
        case 0x270488u: goto label_270488;
        case 0x27048cu: goto label_27048c;
        case 0x270490u: goto label_270490;
        case 0x270494u: goto label_270494;
        case 0x270498u: goto label_270498;
        case 0x27049cu: goto label_27049c;
        case 0x2704a0u: goto label_2704a0;
        case 0x2704a4u: goto label_2704a4;
        case 0x2704a8u: goto label_2704a8;
        case 0x2704acu: goto label_2704ac;
        case 0x2704b0u: goto label_2704b0;
        case 0x2704b4u: goto label_2704b4;
        case 0x2704b8u: goto label_2704b8;
        case 0x2704bcu: goto label_2704bc;
        case 0x2704c0u: goto label_2704c0;
        case 0x2704c4u: goto label_2704c4;
        case 0x2704c8u: goto label_2704c8;
        case 0x2704ccu: goto label_2704cc;
        case 0x2704d0u: goto label_2704d0;
        case 0x2704d4u: goto label_2704d4;
        case 0x2704d8u: goto label_2704d8;
        case 0x2704dcu: goto label_2704dc;
        case 0x2704e0u: goto label_2704e0;
        case 0x2704e4u: goto label_2704e4;
        case 0x2704e8u: goto label_2704e8;
        case 0x2704ecu: goto label_2704ec;
        case 0x2704f0u: goto label_2704f0;
        case 0x2704f4u: goto label_2704f4;
        case 0x2704f8u: goto label_2704f8;
        case 0x2704fcu: goto label_2704fc;
        case 0x270500u: goto label_270500;
        case 0x270504u: goto label_270504;
        case 0x270508u: goto label_270508;
        case 0x27050cu: goto label_27050c;
        case 0x270510u: goto label_270510;
        case 0x270514u: goto label_270514;
        case 0x270518u: goto label_270518;
        case 0x27051cu: goto label_27051c;
        case 0x270520u: goto label_270520;
        case 0x270524u: goto label_270524;
        case 0x270528u: goto label_270528;
        case 0x27052cu: goto label_27052c;
        case 0x270530u: goto label_270530;
        case 0x270534u: goto label_270534;
        case 0x270538u: goto label_270538;
        case 0x27053cu: goto label_27053c;
        case 0x270540u: goto label_270540;
        case 0x270544u: goto label_270544;
        case 0x270548u: goto label_270548;
        case 0x27054cu: goto label_27054c;
        case 0x270550u: goto label_270550;
        case 0x270554u: goto label_270554;
        case 0x270558u: goto label_270558;
        case 0x27055cu: goto label_27055c;
        case 0x270560u: goto label_270560;
        case 0x270564u: goto label_270564;
        case 0x270568u: goto label_270568;
        case 0x27056cu: goto label_27056c;
        case 0x270570u: goto label_270570;
        case 0x270574u: goto label_270574;
        case 0x270578u: goto label_270578;
        case 0x27057cu: goto label_27057c;
        case 0x270580u: goto label_270580;
        case 0x270584u: goto label_270584;
        case 0x270588u: goto label_270588;
        case 0x27058cu: goto label_27058c;
        case 0x270590u: goto label_270590;
        case 0x270594u: goto label_270594;
        case 0x270598u: goto label_270598;
        case 0x27059cu: goto label_27059c;
        case 0x2705a0u: goto label_2705a0;
        case 0x2705a4u: goto label_2705a4;
        case 0x2705a8u: goto label_2705a8;
        case 0x2705acu: goto label_2705ac;
        case 0x2705b0u: goto label_2705b0;
        case 0x2705b4u: goto label_2705b4;
        case 0x2705b8u: goto label_2705b8;
        case 0x2705bcu: goto label_2705bc;
        case 0x2705c0u: goto label_2705c0;
        case 0x2705c4u: goto label_2705c4;
        case 0x2705c8u: goto label_2705c8;
        case 0x2705ccu: goto label_2705cc;
        case 0x2705d0u: goto label_2705d0;
        case 0x2705d4u: goto label_2705d4;
        case 0x2705d8u: goto label_2705d8;
        case 0x2705dcu: goto label_2705dc;
        case 0x2705e0u: goto label_2705e0;
        case 0x2705e4u: goto label_2705e4;
        case 0x2705e8u: goto label_2705e8;
        case 0x2705ecu: goto label_2705ec;
        case 0x2705f0u: goto label_2705f0;
        case 0x2705f4u: goto label_2705f4;
        case 0x2705f8u: goto label_2705f8;
        case 0x2705fcu: goto label_2705fc;
        case 0x270600u: goto label_270600;
        case 0x270604u: goto label_270604;
        case 0x270608u: goto label_270608;
        case 0x27060cu: goto label_27060c;
        case 0x270610u: goto label_270610;
        case 0x270614u: goto label_270614;
        case 0x270618u: goto label_270618;
        case 0x27061cu: goto label_27061c;
        case 0x270620u: goto label_270620;
        case 0x270624u: goto label_270624;
        case 0x270628u: goto label_270628;
        case 0x27062cu: goto label_27062c;
        case 0x270630u: goto label_270630;
        case 0x270634u: goto label_270634;
        case 0x270638u: goto label_270638;
        case 0x27063cu: goto label_27063c;
        case 0x270640u: goto label_270640;
        case 0x270644u: goto label_270644;
        case 0x270648u: goto label_270648;
        case 0x27064cu: goto label_27064c;
        case 0x270650u: goto label_270650;
        case 0x270654u: goto label_270654;
        case 0x270658u: goto label_270658;
        case 0x27065cu: goto label_27065c;
        case 0x270660u: goto label_270660;
        case 0x270664u: goto label_270664;
        case 0x270668u: goto label_270668;
        case 0x27066cu: goto label_27066c;
        case 0x270670u: goto label_270670;
        case 0x270674u: goto label_270674;
        case 0x270678u: goto label_270678;
        case 0x27067cu: goto label_27067c;
        case 0x270680u: goto label_270680;
        case 0x270684u: goto label_270684;
        case 0x270688u: goto label_270688;
        case 0x27068cu: goto label_27068c;
        case 0x270690u: goto label_270690;
        case 0x270694u: goto label_270694;
        case 0x270698u: goto label_270698;
        case 0x27069cu: goto label_27069c;
        case 0x2706a0u: goto label_2706a0;
        case 0x2706a4u: goto label_2706a4;
        case 0x2706a8u: goto label_2706a8;
        case 0x2706acu: goto label_2706ac;
        case 0x2706b0u: goto label_2706b0;
        case 0x2706b4u: goto label_2706b4;
        case 0x2706b8u: goto label_2706b8;
        case 0x2706bcu: goto label_2706bc;
        case 0x2706c0u: goto label_2706c0;
        case 0x2706c4u: goto label_2706c4;
        case 0x2706c8u: goto label_2706c8;
        case 0x2706ccu: goto label_2706cc;
        case 0x2706d0u: goto label_2706d0;
        case 0x2706d4u: goto label_2706d4;
        case 0x2706d8u: goto label_2706d8;
        case 0x2706dcu: goto label_2706dc;
        case 0x2706e0u: goto label_2706e0;
        case 0x2706e4u: goto label_2706e4;
        case 0x2706e8u: goto label_2706e8;
        case 0x2706ecu: goto label_2706ec;
        case 0x2706f0u: goto label_2706f0;
        case 0x2706f4u: goto label_2706f4;
        case 0x2706f8u: goto label_2706f8;
        case 0x2706fcu: goto label_2706fc;
        case 0x270700u: goto label_270700;
        case 0x270704u: goto label_270704;
        case 0x270708u: goto label_270708;
        case 0x27070cu: goto label_27070c;
        case 0x270710u: goto label_270710;
        case 0x270714u: goto label_270714;
        case 0x270718u: goto label_270718;
        case 0x27071cu: goto label_27071c;
        case 0x270720u: goto label_270720;
        case 0x270724u: goto label_270724;
        case 0x270728u: goto label_270728;
        case 0x27072cu: goto label_27072c;
        case 0x270730u: goto label_270730;
        case 0x270734u: goto label_270734;
        case 0x270738u: goto label_270738;
        case 0x27073cu: goto label_27073c;
        case 0x270740u: goto label_270740;
        case 0x270744u: goto label_270744;
        case 0x270748u: goto label_270748;
        case 0x27074cu: goto label_27074c;
        case 0x270750u: goto label_270750;
        case 0x270754u: goto label_270754;
        case 0x270758u: goto label_270758;
        case 0x27075cu: goto label_27075c;
        case 0x270760u: goto label_270760;
        case 0x270764u: goto label_270764;
        case 0x270768u: goto label_270768;
        case 0x27076cu: goto label_27076c;
        case 0x270770u: goto label_270770;
        case 0x270774u: goto label_270774;
        case 0x270778u: goto label_270778;
        case 0x27077cu: goto label_27077c;
        case 0x270780u: goto label_270780;
        case 0x270784u: goto label_270784;
        case 0x270788u: goto label_270788;
        case 0x27078cu: goto label_27078c;
        case 0x270790u: goto label_270790;
        case 0x270794u: goto label_270794;
        case 0x270798u: goto label_270798;
        case 0x27079cu: goto label_27079c;
        case 0x2707a0u: goto label_2707a0;
        case 0x2707a4u: goto label_2707a4;
        case 0x2707a8u: goto label_2707a8;
        case 0x2707acu: goto label_2707ac;
        case 0x2707b0u: goto label_2707b0;
        case 0x2707b4u: goto label_2707b4;
        case 0x2707b8u: goto label_2707b8;
        case 0x2707bcu: goto label_2707bc;
        case 0x2707c0u: goto label_2707c0;
        case 0x2707c4u: goto label_2707c4;
        case 0x2707c8u: goto label_2707c8;
        case 0x2707ccu: goto label_2707cc;
        case 0x2707d0u: goto label_2707d0;
        case 0x2707d4u: goto label_2707d4;
        case 0x2707d8u: goto label_2707d8;
        case 0x2707dcu: goto label_2707dc;
        case 0x2707e0u: goto label_2707e0;
        case 0x2707e4u: goto label_2707e4;
        case 0x2707e8u: goto label_2707e8;
        case 0x2707ecu: goto label_2707ec;
        case 0x2707f0u: goto label_2707f0;
        case 0x2707f4u: goto label_2707f4;
        case 0x2707f8u: goto label_2707f8;
        case 0x2707fcu: goto label_2707fc;
        case 0x270800u: goto label_270800;
        case 0x270804u: goto label_270804;
        case 0x270808u: goto label_270808;
        case 0x27080cu: goto label_27080c;
        case 0x270810u: goto label_270810;
        case 0x270814u: goto label_270814;
        case 0x270818u: goto label_270818;
        case 0x27081cu: goto label_27081c;
        case 0x270820u: goto label_270820;
        case 0x270824u: goto label_270824;
        case 0x270828u: goto label_270828;
        case 0x27082cu: goto label_27082c;
        case 0x270830u: goto label_270830;
        case 0x270834u: goto label_270834;
        case 0x270838u: goto label_270838;
        case 0x27083cu: goto label_27083c;
        case 0x270840u: goto label_270840;
        case 0x270844u: goto label_270844;
        case 0x270848u: goto label_270848;
        case 0x27084cu: goto label_27084c;
        case 0x270850u: goto label_270850;
        case 0x270854u: goto label_270854;
        case 0x270858u: goto label_270858;
        case 0x27085cu: goto label_27085c;
        case 0x270860u: goto label_270860;
        case 0x270864u: goto label_270864;
        case 0x270868u: goto label_270868;
        case 0x27086cu: goto label_27086c;
        case 0x270870u: goto label_270870;
        case 0x270874u: goto label_270874;
        case 0x270878u: goto label_270878;
        case 0x27087cu: goto label_27087c;
        case 0x270880u: goto label_270880;
        case 0x270884u: goto label_270884;
        case 0x270888u: goto label_270888;
        case 0x27088cu: goto label_27088c;
        case 0x270890u: goto label_270890;
        case 0x270894u: goto label_270894;
        case 0x270898u: goto label_270898;
        case 0x27089cu: goto label_27089c;
        case 0x2708a0u: goto label_2708a0;
        case 0x2708a4u: goto label_2708a4;
        case 0x2708a8u: goto label_2708a8;
        case 0x2708acu: goto label_2708ac;
        case 0x2708b0u: goto label_2708b0;
        case 0x2708b4u: goto label_2708b4;
        case 0x2708b8u: goto label_2708b8;
        case 0x2708bcu: goto label_2708bc;
        case 0x2708c0u: goto label_2708c0;
        case 0x2708c4u: goto label_2708c4;
        case 0x2708c8u: goto label_2708c8;
        case 0x2708ccu: goto label_2708cc;
        case 0x2708d0u: goto label_2708d0;
        case 0x2708d4u: goto label_2708d4;
        case 0x2708d8u: goto label_2708d8;
        case 0x2708dcu: goto label_2708dc;
        case 0x2708e0u: goto label_2708e0;
        case 0x2708e4u: goto label_2708e4;
        case 0x2708e8u: goto label_2708e8;
        case 0x2708ecu: goto label_2708ec;
        case 0x2708f0u: goto label_2708f0;
        case 0x2708f4u: goto label_2708f4;
        case 0x2708f8u: goto label_2708f8;
        case 0x2708fcu: goto label_2708fc;
        case 0x270900u: goto label_270900;
        case 0x270904u: goto label_270904;
        case 0x270908u: goto label_270908;
        case 0x27090cu: goto label_27090c;
        case 0x270910u: goto label_270910;
        case 0x270914u: goto label_270914;
        case 0x270918u: goto label_270918;
        case 0x27091cu: goto label_27091c;
        case 0x270920u: goto label_270920;
        case 0x270924u: goto label_270924;
        case 0x270928u: goto label_270928;
        case 0x27092cu: goto label_27092c;
        case 0x270930u: goto label_270930;
        case 0x270934u: goto label_270934;
        case 0x270938u: goto label_270938;
        case 0x27093cu: goto label_27093c;
        case 0x270940u: goto label_270940;
        case 0x270944u: goto label_270944;
        case 0x270948u: goto label_270948;
        case 0x27094cu: goto label_27094c;
        case 0x270950u: goto label_270950;
        case 0x270954u: goto label_270954;
        case 0x270958u: goto label_270958;
        case 0x27095cu: goto label_27095c;
        case 0x270960u: goto label_270960;
        case 0x270964u: goto label_270964;
        case 0x270968u: goto label_270968;
        case 0x27096cu: goto label_27096c;
        case 0x270970u: goto label_270970;
        case 0x270974u: goto label_270974;
        case 0x270978u: goto label_270978;
        case 0x27097cu: goto label_27097c;
        case 0x270980u: goto label_270980;
        case 0x270984u: goto label_270984;
        case 0x270988u: goto label_270988;
        case 0x27098cu: goto label_27098c;
        case 0x270990u: goto label_270990;
        case 0x270994u: goto label_270994;
        case 0x270998u: goto label_270998;
        case 0x27099cu: goto label_27099c;
        case 0x2709a0u: goto label_2709a0;
        case 0x2709a4u: goto label_2709a4;
        case 0x2709a8u: goto label_2709a8;
        case 0x2709acu: goto label_2709ac;
        case 0x2709b0u: goto label_2709b0;
        case 0x2709b4u: goto label_2709b4;
        case 0x2709b8u: goto label_2709b8;
        case 0x2709bcu: goto label_2709bc;
        case 0x2709c0u: goto label_2709c0;
        case 0x2709c4u: goto label_2709c4;
        case 0x2709c8u: goto label_2709c8;
        case 0x2709ccu: goto label_2709cc;
        case 0x2709d0u: goto label_2709d0;
        case 0x2709d4u: goto label_2709d4;
        case 0x2709d8u: goto label_2709d8;
        case 0x2709dcu: goto label_2709dc;
        case 0x2709e0u: goto label_2709e0;
        case 0x2709e4u: goto label_2709e4;
        case 0x2709e8u: goto label_2709e8;
        case 0x2709ecu: goto label_2709ec;
        case 0x2709f0u: goto label_2709f0;
        case 0x2709f4u: goto label_2709f4;
        case 0x2709f8u: goto label_2709f8;
        case 0x2709fcu: goto label_2709fc;
        case 0x270a00u: goto label_270a00;
        case 0x270a04u: goto label_270a04;
        case 0x270a08u: goto label_270a08;
        case 0x270a0cu: goto label_270a0c;
        case 0x270a10u: goto label_270a10;
        case 0x270a14u: goto label_270a14;
        case 0x270a18u: goto label_270a18;
        case 0x270a1cu: goto label_270a1c;
        case 0x270a20u: goto label_270a20;
        case 0x270a24u: goto label_270a24;
        case 0x270a28u: goto label_270a28;
        case 0x270a2cu: goto label_270a2c;
        case 0x270a30u: goto label_270a30;
        case 0x270a34u: goto label_270a34;
        case 0x270a38u: goto label_270a38;
        case 0x270a3cu: goto label_270a3c;
        case 0x270a40u: goto label_270a40;
        case 0x270a44u: goto label_270a44;
        case 0x270a48u: goto label_270a48;
        case 0x270a4cu: goto label_270a4c;
        case 0x270a50u: goto label_270a50;
        case 0x270a54u: goto label_270a54;
        case 0x270a58u: goto label_270a58;
        case 0x270a5cu: goto label_270a5c;
        case 0x270a60u: goto label_270a60;
        case 0x270a64u: goto label_270a64;
        case 0x270a68u: goto label_270a68;
        case 0x270a6cu: goto label_270a6c;
        case 0x270a70u: goto label_270a70;
        case 0x270a74u: goto label_270a74;
        case 0x270a78u: goto label_270a78;
        case 0x270a7cu: goto label_270a7c;
        case 0x270a80u: goto label_270a80;
        case 0x270a84u: goto label_270a84;
        case 0x270a88u: goto label_270a88;
        case 0x270a8cu: goto label_270a8c;
        case 0x270a90u: goto label_270a90;
        case 0x270a94u: goto label_270a94;
        case 0x270a98u: goto label_270a98;
        case 0x270a9cu: goto label_270a9c;
        case 0x270aa0u: goto label_270aa0;
        case 0x270aa4u: goto label_270aa4;
        case 0x270aa8u: goto label_270aa8;
        case 0x270aacu: goto label_270aac;
        case 0x270ab0u: goto label_270ab0;
        case 0x270ab4u: goto label_270ab4;
        case 0x270ab8u: goto label_270ab8;
        case 0x270abcu: goto label_270abc;
        case 0x270ac0u: goto label_270ac0;
        case 0x270ac4u: goto label_270ac4;
        case 0x270ac8u: goto label_270ac8;
        case 0x270accu: goto label_270acc;
        case 0x270ad0u: goto label_270ad0;
        case 0x270ad4u: goto label_270ad4;
        case 0x270ad8u: goto label_270ad8;
        case 0x270adcu: goto label_270adc;
        default: break;
    }

    ctx->pc = 0x270330u;

label_270330:
    // 0x270330: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x270330u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_270334:
    // 0x270334: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x270334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_270338:
    // 0x270338: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x270338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_27033c:
    // 0x27033c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x27033cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_270340:
    // 0x270340: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x270340u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_270344:
    // 0x270344: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x270344u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_270348:
    // 0x270348: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x270348u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_27034c:
    // 0x27034c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27034cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270350:
    // 0x270350: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x270350u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_270354:
    // 0x270354: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x270354u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_270358:
    // 0x270358: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x270358u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_27035c:
    // 0x27035c: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x27035cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_270360:
    // 0x270360: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x270360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_270364:
    // 0x270364: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x270364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_270368:
    // 0x270368: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x270368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_27036c:
    // 0x27036c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x27036cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_270370:
    // 0x270370: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x270370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_270374:
    // 0x270374: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x270374u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270378:
    // 0x270378: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x270378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_27037c:
    // 0x27037c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x27037cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270380:
    // 0x270380: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x270380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_270384:
    // 0x270384: 0xc0973ba  jal         func_25CEE8
label_270388:
    if (ctx->pc == 0x270388u) {
        ctx->pc = 0x270388u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270384u;
        // 0x270388: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27038Cu;
        goto label_27038c;
    }
    ctx->pc = 0x270384u;
    SET_GPR_U32(ctx, 31, 0x27038Cu);
    ctx->pc = 0x270388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270384u;
    // 0x270388: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x270384u, 0x27038Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27038Cu;
label_27038c:
    // 0x27038c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x27038cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270390:
    // 0x270390: 0x6430005  bgezl       $s2, . + 4 + (0x5 << 2)
label_270394:
    if (ctx->pc == 0x270394u) {
        ctx->pc = 0x270394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270390u;
        // 0x270394: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270398u;
        goto label_270398;
    }
    ctx->pc = 0x270390u;
    {
        const bool branch_taken_0x270390 = (GPR_S32(ctx, 18) >= 0);
        if (branch_taken_0x270390) {
            ctx->pc = 0x270394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270390u;
            // 0x270394: 0x8e250014  lw          $a1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2703A8u;
            goto label_2703a8;
        }
    }
    ctx->pc = 0x270398u;
label_270398:
    // 0x270398: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x270398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_27039c:
    // 0x27039c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x27039cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2703a0:
    // 0x2703a0: 0x10000019  b           . + 4 + (0x19 << 2)
label_2703a4:
    if (ctx->pc == 0x2703A4u) {
        ctx->pc = 0x2703A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703A0u;
        // 0x2703a4: 0x24a59b00  addiu       $a1, $a1, -0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703A8u;
        goto label_2703a8;
    }
    ctx->pc = 0x2703A0u;
    {
        const bool branch_taken_0x2703a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703A0u;
        // 0x2703a4: 0x24a59b00  addiu       $a1, $a1, -0x6500 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941440));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703a0) {
            ctx->pc = 0x270408u;
            goto label_270408;
        }
    }
    ctx->pc = 0x2703A8u;
label_2703a8:
    // 0x2703a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2703a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2703ac:
    // 0x2703ac: 0xc09bf32  jal         func_26FCC8
label_2703b0:
    if (ctx->pc == 0x2703B0u) {
        ctx->pc = 0x2703B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703ACu;
        // 0x2703b0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703B4u;
        goto label_2703b4;
    }
    ctx->pc = 0x2703ACu;
    SET_GPR_U32(ctx, 31, 0x2703B4u);
    ctx->pc = 0x2703B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2703ACu;
    // 0x2703b0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FCC8u, 0x2703ACu, 0x2703B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703B4u;
label_2703b4:
    // 0x2703b4: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_2703b8:
    if (ctx->pc == 0x2703B8u) {
        ctx->pc = 0x2703B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703B4u;
        // 0x2703b8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703BCu;
        goto label_2703bc;
    }
    ctx->pc = 0x2703B4u;
    {
        const bool branch_taken_0x2703b4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2703b4) {
            ctx->pc = 0x2703B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2703B4u;
            // 0x2703b8: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2703CCu;
            goto label_2703cc;
        }
    }
    ctx->pc = 0x2703BCu;
label_2703bc:
    // 0x2703bc: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2703bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2703c0:
    // 0x2703c0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2703c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2703c4:
    // 0x2703c4: 0x10000010  b           . + 4 + (0x10 << 2)
label_2703c8:
    if (ctx->pc == 0x2703C8u) {
        ctx->pc = 0x2703C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703C4u;
        // 0x2703c8: 0x24a59b38  addiu       $a1, $a1, -0x64C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941496));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703CCu;
        goto label_2703cc;
    }
    ctx->pc = 0x2703C4u;
    {
        const bool branch_taken_0x2703c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703C4u;
        // 0x2703c8: 0x24a59b38  addiu       $a1, $a1, -0x64C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941496));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703c4) {
            ctx->pc = 0x270408u;
            goto label_270408;
        }
    }
    ctx->pc = 0x2703CCu;
label_2703cc:
    // 0x2703cc: 0x8e260014  lw          $a2, 0x14($s1)
    ctx->pc = 0x2703ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2703d0:
    // 0x2703d0: 0x24a598f0  addiu       $a1, $a1, -0x6710
    ctx->pc = 0x2703d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294940912));
label_2703d4:
    // 0x2703d4: 0xc099d5a  jal         func_267568
label_2703d8:
    if (ctx->pc == 0x2703D8u) {
        ctx->pc = 0x2703D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703D4u;
        // 0x2703d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703DCu;
        goto label_2703dc;
    }
    ctx->pc = 0x2703D4u;
    SET_GPR_U32(ctx, 31, 0x2703DCu);
    ctx->pc = 0x2703D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2703D4u;
    // 0x2703d8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267568u, 0x2703D4u, 0x2703DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703DCu;
label_2703dc:
    // 0x2703dc: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_2703e0:
    if (ctx->pc == 0x2703E0u) {
        ctx->pc = 0x2703E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703DCu;
        // 0x2703e0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703E4u;
        goto label_2703e4;
    }
    ctx->pc = 0x2703DCu;
    {
        const bool branch_taken_0x2703dc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2703E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703DCu;
        // 0x2703e0: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703dc) {
            ctx->pc = 0x2703F0u;
            goto label_2703f0;
        }
    }
    ctx->pc = 0x2703E4u;
label_2703e4:
    // 0x2703e4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2703e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2703e8:
    // 0x2703e8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2703ec:
    if (ctx->pc == 0x2703ECu) {
        ctx->pc = 0x2703ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703E8u;
        // 0x2703ec: 0x24a59b68  addiu       $a1, $a1, -0x6498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703F0u;
        goto label_2703f0;
    }
    ctx->pc = 0x2703E8u;
    {
        const bool branch_taken_0x2703e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2703ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703E8u;
        // 0x2703ec: 0x24a59b68  addiu       $a1, $a1, -0x6498 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941544));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703e8) {
            ctx->pc = 0x270408u;
            goto label_270408;
        }
    }
    ctx->pc = 0x2703F0u;
label_2703f0:
    // 0x2703f0: 0xc09c014  jal         func_270050
label_2703f4:
    if (ctx->pc == 0x2703F4u) {
        ctx->pc = 0x2703F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703F0u;
        // 0x2703f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2703F8u;
        goto label_2703f8;
    }
    ctx->pc = 0x2703F0u;
    SET_GPR_U32(ctx, 31, 0x2703F8u);
    ctx->pc = 0x2703F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2703F0u;
    // 0x2703f4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270050u, 0x2703F0u, 0x2703F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2703F8u;
label_2703f8:
    // 0x2703f8: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
label_2703fc:
    if (ctx->pc == 0x2703FCu) {
        ctx->pc = 0x2703FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703F8u;
        // 0x2703fc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270400u;
        goto label_270400;
    }
    ctx->pc = 0x2703F8u;
    {
        const bool branch_taken_0x2703f8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2703FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2703F8u;
        // 0x2703fc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2703f8) {
            ctx->pc = 0x270420u;
            goto label_270420;
        }
    }
    ctx->pc = 0x270400u;
label_270400:
    // 0x270400: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x270400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_270404:
    // 0x270404: 0x24a59ba8  addiu       $a1, $a1, -0x6458
    ctx->pc = 0x270404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941608));
label_270408:
    // 0x270408: 0xc08b5ac  jal         func_22D6B0
label_27040c:
    if (ctx->pc == 0x27040Cu) {
        ctx->pc = 0x270410u;
        goto label_270410;
    }
    ctx->pc = 0x270408u;
    SET_GPR_U32(ctx, 31, 0x270410u);
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x270408u, 0x270410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270410u;
label_270410:
    // 0x270410: 0x2403fffa  addiu       $v1, $zero, -0x6
    ctx->pc = 0x270410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_270414:
    // 0x270414: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270418:
    // 0x270418: 0x10000047  b           . + 4 + (0x47 << 2)
label_27041c:
    if (ctx->pc == 0x27041Cu) {
        ctx->pc = 0x27041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270418u;
        // 0x27041c: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270420u;
        goto label_270420;
    }
    ctx->pc = 0x270418u;
    {
        const bool branch_taken_0x270418 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270418u;
        // 0x27041c: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270418) {
            ctx->pc = 0x270538u;
            goto label_270538;
        }
    }
    ctx->pc = 0x270420u;
label_270420:
    // 0x270420: 0xc098552  jal         func_261548
label_270424:
    if (ctx->pc == 0x270424u) {
        ctx->pc = 0x270424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270420u;
        // 0x270424: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270428u;
        goto label_270428;
    }
    ctx->pc = 0x270420u;
    SET_GPR_U32(ctx, 31, 0x270428u);
    ctx->pc = 0x270424u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270420u;
    // 0x270424: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x270420u, 0x270428u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270428u;
label_270428:
    // 0x270428: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x270428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27042c:
    // 0x27042c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_270430:
    if (ctx->pc == 0x270430u) {
        ctx->pc = 0x270430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27042Cu;
        // 0x270430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270434u;
        goto label_270434;
    }
    ctx->pc = 0x27042Cu;
    {
        const bool branch_taken_0x27042c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x270430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27042Cu;
        // 0x270430: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27042c) {
            ctx->pc = 0x27044Cu;
            goto label_27044c;
        }
    }
    ctx->pc = 0x270434u;
label_270434:
    // 0x270434: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x270434u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_270438:
    // 0x270438: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x270438u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_27043c:
    // 0x27043c: 0xc08b5ac  jal         func_22D6B0
label_270440:
    if (ctx->pc == 0x270440u) {
        ctx->pc = 0x270440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27043Cu;
        // 0x270440: 0x24a59bd8  addiu       $a1, $a1, -0x6428 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270444u;
        goto label_270444;
    }
    ctx->pc = 0x27043Cu;
    SET_GPR_U32(ctx, 31, 0x270444u);
    ctx->pc = 0x270440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27043Cu;
    // 0x270440: 0x24a59bd8  addiu       $a1, $a1, -0x6428 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x27043Cu, 0x270444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270444u;
label_270444:
    // 0x270444: 0x1000002d  b           . + 4 + (0x2D << 2)
label_270448:
    if (ctx->pc == 0x270448u) {
        ctx->pc = 0x270448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270444u;
        // 0x270448: 0xae340050  sw          $s4, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27044Cu;
        goto label_27044c;
    }
    ctx->pc = 0x270444u;
    {
        const bool branch_taken_0x270444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270444u;
        // 0x270448: 0xae340050  sw          $s4, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270444) {
            ctx->pc = 0x2704FCu;
            goto label_2704fc;
        }
    }
    ctx->pc = 0x27044Cu;
label_27044c:
    // 0x27044c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x27044cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270450:
    // 0x270450: 0xc049cb6  jal         func_1272D8
label_270454:
    if (ctx->pc == 0x270454u) {
        ctx->pc = 0x270454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270450u;
        // 0x270454: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270458u;
        goto label_270458;
    }
    ctx->pc = 0x270450u;
    SET_GPR_U32(ctx, 31, 0x270458u);
    ctx->pc = 0x270454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270450u;
    // 0x270454: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x270450u, 0x270458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270458u;
label_270458:
    // 0x270458: 0xae160004  sw          $s6, 0x4($s0)
    ctx->pc = 0x270458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 22));
label_27045c:
    // 0x27045c: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x27045cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_270460:
    // 0x270460: 0xae150008  sw          $s5, 0x8($s0)
    ctx->pc = 0x270460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 21));
label_270464:
    // 0x270464: 0x24c69c08  addiu       $a2, $a2, -0x63F8
    ctx->pc = 0x270464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294941704));
label_270468:
    // 0x270468: 0xae120000  sw          $s2, 0x0($s0)
    ctx->pc = 0x270468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
label_27046c:
    // 0x27046c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27046cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270470:
    // 0x270470: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x270470u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_270474:
    // 0x270474: 0xc0985b8  jal         func_2616E0
label_270478:
    if (ctx->pc == 0x270478u) {
        ctx->pc = 0x270478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270474u;
        // 0x270478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27047Cu;
        goto label_27047c;
    }
    ctx->pc = 0x270474u;
    SET_GPR_U32(ctx, 31, 0x27047Cu);
    ctx->pc = 0x270478u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270474u;
    // 0x270478: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2616E0u, 0x270474u, 0x27047Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27047Cu;
label_27047c:
    // 0x27047c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x27047cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270480:
    // 0x270480: 0x6630007  bgezl       $s3, . + 4 + (0x7 << 2)
label_270484:
    if (ctx->pc == 0x270484u) {
        ctx->pc = 0x270484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270480u;
        // 0x270484: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270488u;
        goto label_270488;
    }
    ctx->pc = 0x270480u;
    {
        const bool branch_taken_0x270480 = (GPR_S32(ctx, 19) >= 0);
        if (branch_taken_0x270480) {
            ctx->pc = 0x270484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270480u;
            // 0x270484: 0xae130010  sw          $s3, 0x10($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2704A0u;
            goto label_2704a0;
        }
    }
    ctx->pc = 0x270488u;
label_270488:
    // 0x270488: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x270488u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_27048c:
    // 0x27048c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x27048cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_270490:
    // 0x270490: 0xc08b5ac  jal         func_22D6B0
label_270494:
    if (ctx->pc == 0x270494u) {
        ctx->pc = 0x270494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270490u;
        // 0x270494: 0x24a59c20  addiu       $a1, $a1, -0x63E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270498u;
        goto label_270498;
    }
    ctx->pc = 0x270490u;
    SET_GPR_U32(ctx, 31, 0x270498u);
    ctx->pc = 0x270494u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270490u;
    // 0x270494: 0x24a59c20  addiu       $a1, $a1, -0x63E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x270490u, 0x270498u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270498u;
label_270498:
    // 0x270498: 0x10000017  b           . + 4 + (0x17 << 2)
label_27049c:
    if (ctx->pc == 0x27049Cu) {
        ctx->pc = 0x27049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270498u;
        // 0x27049c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2704A0u;
        goto label_2704a0;
    }
    ctx->pc = 0x270498u;
    {
        const bool branch_taken_0x270498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27049Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270498u;
        // 0x27049c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270498) {
            ctx->pc = 0x2704F8u;
            goto label_2704f8;
        }
    }
    ctx->pc = 0x2704A0u;
label_2704a0:
    // 0x2704a0: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x2704a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
label_2704a4:
    // 0x2704a4: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x2704a4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
label_2704a8:
    // 0x2704a8: 0x24840568  addiu       $a0, $a0, 0x568
    ctx->pc = 0x2704a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1384));
label_2704ac:
    // 0x2704ac: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x2704acu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2704b0:
    // 0x2704b0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2704b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2704b4:
    // 0x2704b4: 0x3c0302d  daddu       $a2, $fp, $zero
    ctx->pc = 0x2704b4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2704b8:
    // 0x2704b8: 0x25299c48  addiu       $t1, $t1, -0x63B8
    ctx->pc = 0x2704b8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294941768));
label_2704bc:
    // 0x2704bc: 0xc0985d0  jal         func_261740
label_2704c0:
    if (ctx->pc == 0x2704C0u) {
        ctx->pc = 0x2704C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704BCu;
        // 0x2704c0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2704C4u;
        goto label_2704c4;
    }
    ctx->pc = 0x2704BCu;
    SET_GPR_U32(ctx, 31, 0x2704C4u);
    ctx->pc = 0x2704C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2704BCu;
    // 0x2704c0: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261740u, 0x2704BCu, 0x2704C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704C4u;
label_2704c4:
    // 0x2704c4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2704c4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2704c8:
    // 0x2704c8: 0x6800006  bltz        $s4, . + 4 + (0x6 << 2)
label_2704cc:
    if (ctx->pc == 0x2704CCu) {
        ctx->pc = 0x2704CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704C8u;
        // 0x2704cc: 0x3c030027  lui         $v1, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2704D0u;
        goto label_2704d0;
    }
    ctx->pc = 0x2704C8u;
    {
        const bool branch_taken_0x2704c8 = (GPR_S32(ctx, 20) < 0);
        ctx->pc = 0x2704CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704C8u;
        // 0x2704cc: 0x3c030027  lui         $v1, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704c8) {
            ctx->pc = 0x2704E4u;
            goto label_2704e4;
        }
    }
    ctx->pc = 0x2704D0u;
label_2704d0:
    // 0x2704d0: 0xae300048  sw          $s0, 0x48($s1)
    ctx->pc = 0x2704d0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
label_2704d4:
    // 0x2704d4: 0x246309b8  addiu       $v1, $v1, 0x9B8
    ctx->pc = 0x2704d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2488));
label_2704d8:
    // 0x2704d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2704d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2704dc:
    // 0x2704dc: 0x10000016  b           . + 4 + (0x16 << 2)
label_2704e0:
    if (ctx->pc == 0x2704E0u) {
        ctx->pc = 0x2704E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704DCu;
        // 0x2704e0: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2704E4u;
        goto label_2704e4;
    }
    ctx->pc = 0x2704DCu;
    {
        const bool branch_taken_0x2704dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2704E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704DCu;
        // 0x2704e0: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2704dc) {
            ctx->pc = 0x270538u;
            goto label_270538;
        }
    }
    ctx->pc = 0x2704E4u;
label_2704e4:
    // 0x2704e4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2704e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2704e8:
    // 0x2704e8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2704e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2704ec:
    // 0x2704ec: 0xc08b5ac  jal         func_22D6B0
label_2704f0:
    if (ctx->pc == 0x2704F0u) {
        ctx->pc = 0x2704F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2704ECu;
        // 0x2704f0: 0x24a59c60  addiu       $a1, $a1, -0x63A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2704F4u;
        goto label_2704f4;
    }
    ctx->pc = 0x2704ECu;
    SET_GPR_U32(ctx, 31, 0x2704F4u);
    ctx->pc = 0x2704F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2704ECu;
    // 0x2704f0: 0x24a59c60  addiu       $a1, $a1, -0x63A0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294941792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2704ECu, 0x2704F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2704F4u;
label_2704f4:
    // 0x2704f4: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x2704f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_2704f8:
    // 0x2704f8: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x2704f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_2704fc:
    // 0x2704fc: 0x6800003  bltz        $s4, . + 4 + (0x3 << 2)
label_270500:
    if (ctx->pc == 0x270500u) {
        ctx->pc = 0x270504u;
        goto label_270504;
    }
    ctx->pc = 0x2704FCu;
    {
        const bool branch_taken_0x2704fc = (GPR_S32(ctx, 20) < 0);
        if (branch_taken_0x2704fc) {
            ctx->pc = 0x27050Cu;
            goto label_27050c;
        }
    }
    ctx->pc = 0x270504u;
label_270504:
    // 0x270504: 0xc04329c  jal         func_10CA70
label_270508:
    if (ctx->pc == 0x270508u) {
        ctx->pc = 0x270508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270504u;
        // 0x270508: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27050Cu;
        goto label_27050c;
    }
    ctx->pc = 0x270504u;
    SET_GPR_U32(ctx, 31, 0x27050Cu);
    ctx->pc = 0x270508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270504u;
    // 0x270508: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CA70u, 0x270504u, 0x27050Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27050Cu;
label_27050c:
    // 0x27050c: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
label_270510:
    if (ctx->pc == 0x270510u) {
        ctx->pc = 0x270514u;
        goto label_270514;
    }
    ctx->pc = 0x27050Cu;
    {
        const bool branch_taken_0x27050c = (GPR_S32(ctx, 19) < 0);
        if (branch_taken_0x27050c) {
            ctx->pc = 0x27051Cu;
            goto label_27051c;
        }
    }
    ctx->pc = 0x270514u;
label_270514:
    // 0x270514: 0xc04331c  jal         func_10CC70
label_270518:
    if (ctx->pc == 0x270518u) {
        ctx->pc = 0x270518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270514u;
        // 0x270518: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27051Cu;
        goto label_27051c;
    }
    ctx->pc = 0x270514u;
    SET_GPR_U32(ctx, 31, 0x27051Cu);
    ctx->pc = 0x270518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270514u;
    // 0x270518: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC70u, 0x270514u, 0x27051Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27051Cu;
label_27051c:
    // 0x27051c: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_270520:
    if (ctx->pc == 0x270520u) {
        ctx->pc = 0x270524u;
        goto label_270524;
    }
    ctx->pc = 0x27051Cu;
    {
        const bool branch_taken_0x27051c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x27051c) {
            ctx->pc = 0x27052Cu;
            goto label_27052c;
        }
    }
    ctx->pc = 0x270524u;
label_270524:
    // 0x270524: 0xc098560  jal         func_261580
label_270528:
    if (ctx->pc == 0x270528u) {
        ctx->pc = 0x270528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270524u;
        // 0x270528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27052Cu;
        goto label_27052c;
    }
    ctx->pc = 0x270524u;
    SET_GPR_U32(ctx, 31, 0x27052Cu);
    ctx->pc = 0x270528u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270524u;
    // 0x270528: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x270524u, 0x27052Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27052Cu;
label_27052c:
    // 0x27052c: 0xc097c9e  jal         func_25F278
label_270530:
    if (ctx->pc == 0x270530u) {
        ctx->pc = 0x270530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27052Cu;
        // 0x270530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270534u;
        goto label_270534;
    }
    ctx->pc = 0x27052Cu;
    SET_GPR_U32(ctx, 31, 0x270534u);
    ctx->pc = 0x270530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27052Cu;
    // 0x270530: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x27052Cu, 0x270534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270534u;
label_270534:
    // 0x270534: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x270534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270538:
    // 0x270538: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x270538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_27053c:
    // 0x27053c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x27053cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_270540:
    // 0x270540: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x270540u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_270544:
    // 0x270544: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x270544u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_270548:
    // 0x270548: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x270548u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_27054c:
    // 0x27054c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x27054cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_270550:
    // 0x270550: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x270550u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_270554:
    // 0x270554: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x270554u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_270558:
    // 0x270558: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x270558u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_27055c:
    // 0x27055c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x27055cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_270560:
    // 0x270560: 0x3e00008  jr          $ra
label_270564:
    if (ctx->pc == 0x270564u) {
        ctx->pc = 0x270564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270560u;
        // 0x270564: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270568u;
        goto label_270568;
    }
    ctx->pc = 0x270560u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270560u;
        // 0x270564: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270560u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270568u;
label_270568:
    // 0x270568: 0x27bdfee0  addiu       $sp, $sp, -0x120
    ctx->pc = 0x270568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967008));
label_27056c:
    // 0x27056c: 0xffb100a0  sd          $s1, 0xA0($sp)
    ctx->pc = 0x27056cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
label_270570:
    // 0x270570: 0xffbf0110  sd          $ra, 0x110($sp)
    ctx->pc = 0x270570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 31));
label_270574:
    // 0x270574: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x270574u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_270578:
    // 0x270578: 0xffb70100  sd          $s7, 0x100($sp)
    ctx->pc = 0x270578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 23));
label_27057c:
    // 0x27057c: 0xffb600f0  sd          $s6, 0xF0($sp)
    ctx->pc = 0x27057cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 22));
label_270580:
    // 0x270580: 0xffb500e0  sd          $s5, 0xE0($sp)
    ctx->pc = 0x270580u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 21));
label_270584:
    // 0x270584: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x270584u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
label_270588:
    // 0x270588: 0xffb300c0  sd          $s3, 0xC0($sp)
    ctx->pc = 0x270588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
label_27058c:
    // 0x27058c: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x27058cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
label_270590:
    // 0x270590: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x270590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_270594:
    // 0x270594: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270598:
    // 0x270598: 0xc09c04c  jal         func_270130
label_27059c:
    if (ctx->pc == 0x27059Cu) {
        ctx->pc = 0x27059Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270598u;
        // 0x27059c: 0x8e32000c  lw          $s2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705A0u;
        goto label_2705a0;
    }
    ctx->pc = 0x270598u;
    SET_GPR_U32(ctx, 31, 0x2705A0u);
    ctx->pc = 0x27059Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270598u;
    // 0x27059c: 0x8e32000c  lw          $s2, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x270130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270130u, 0x270598u, 0x2705A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705A0u;
label_2705a0:
    // 0x2705a0: 0x4430005  bgezl       $v0, . + 4 + (0x5 << 2)
label_2705a4:
    if (ctx->pc == 0x2705A4u) {
        ctx->pc = 0x2705A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705A0u;
        // 0x2705a4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705A8u;
        goto label_2705a8;
    }
    ctx->pc = 0x2705A0u;
    {
        const bool branch_taken_0x2705a0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2705a0) {
            ctx->pc = 0x2705A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2705A0u;
            // 0x2705a4: 0x8e220008  lw          $v0, 0x8($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2705B8u;
            goto label_2705b8;
        }
    }
    ctx->pc = 0x2705A8u;
label_2705a8:
    // 0x2705a8: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x2705a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_2705ac:
    // 0x2705ac: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2705acu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_2705b0:
    // 0x2705b0: 0x100000cb  b           . + 4 + (0xCB << 2)
label_2705b4:
    if (ctx->pc == 0x2705B4u) {
        ctx->pc = 0x2705B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705B0u;
        // 0x2705b4: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705B8u;
        goto label_2705b8;
    }
    ctx->pc = 0x2705B0u;
    {
        const bool branch_taken_0x2705b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2705B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705B0u;
        // 0x2705b4: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705b0) {
            ctx->pc = 0x2708E0u;
            goto label_2708e0;
        }
    }
    ctx->pc = 0x2705B8u;
label_2705b8:
    // 0x2705b8: 0x18400011  blez        $v0, . + 4 + (0x11 << 2)
label_2705bc:
    if (ctx->pc == 0x2705BCu) {
        ctx->pc = 0x2705BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705B8u;
        // 0x2705bc: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705C0u;
        goto label_2705c0;
    }
    ctx->pc = 0x2705B8u;
    {
        const bool branch_taken_0x2705b8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2705BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705B8u;
        // 0x2705bc: 0x3c170040  lui         $s7, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705b8) {
            ctx->pc = 0x270600u;
            goto label_270600;
        }
    }
    ctx->pc = 0x2705C0u;
label_2705c0:
    // 0x2705c0: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2705c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2705c4:
    // 0x2705c4: 0x1000000a  b           . + 4 + (0xA << 2)
label_2705c8:
    if (ctx->pc == 0x2705C8u) {
        ctx->pc = 0x2705C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705C4u;
        // 0x2705c8: 0x8c507b3c  lw          $s0, 0x7B3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31548)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705CCu;
        goto label_2705cc;
    }
    ctx->pc = 0x2705C4u;
    {
        const bool branch_taken_0x2705c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2705C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705C4u;
        // 0x2705c8: 0x8c507b3c  lw          $s0, 0x7B3C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31548)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705c4) {
            ctx->pc = 0x2705F0u;
            goto label_2705f0;
        }
    }
    ctx->pc = 0x2705CCu;
label_2705cc:
    // 0x2705cc: 0x0  nop
    ctx->pc = 0x2705ccu;
    // NOP
label_2705d0:
    // 0x2705d0: 0xc04332c  jal         func_10CCB0
label_2705d4:
    if (ctx->pc == 0x2705D4u) {
        ctx->pc = 0x2705D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705D0u;
        // 0x2705d4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705D8u;
        goto label_2705d8;
    }
    ctx->pc = 0x2705D0u;
    SET_GPR_U32(ctx, 31, 0x2705D8u);
    ctx->pc = 0x2705D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2705D0u;
    // 0x2705d4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x2705D0u, 0x2705D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705D8u;
label_2705d8:
    // 0x2705d8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2705d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2705dc:
    // 0x2705dc: 0x104300dd  beq         $v0, $v1, . + 4 + (0xDD << 2)
label_2705e0:
    if (ctx->pc == 0x2705E0u) {
        ctx->pc = 0x2705E4u;
        goto label_2705e4;
    }
    ctx->pc = 0x2705DCu;
    {
        const bool branch_taken_0x2705dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2705dc) {
            ctx->pc = 0x270954u;
            goto label_270954;
        }
    }
    ctx->pc = 0x2705E4u;
label_2705e4:
    // 0x2705e4: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x2705e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_2705e8:
    // 0x2705e8: 0xc043736  jal         func_10DCD8
label_2705ec:
    if (ctx->pc == 0x2705ECu) {
        ctx->pc = 0x2705ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705E8u;
        // 0x2705ec: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705F0u;
        goto label_2705f0;
    }
    ctx->pc = 0x2705E8u;
    SET_GPR_U32(ctx, 31, 0x2705F0u);
    ctx->pc = 0x2705ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2705E8u;
    // 0x2705ec: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x2705E8u, 0x2705F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2705F0u;
label_2705f0:
    // 0x2705f0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x2705f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2705f4:
    // 0x2705f4: 0x1c60fff6  bgtz        $v1, . + 4 + (-0xA << 2)
label_2705f8:
    if (ctx->pc == 0x2705F8u) {
        ctx->pc = 0x2705F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705F4u;
        // 0x2705f8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2705FCu;
        goto label_2705fc;
    }
    ctx->pc = 0x2705F4u;
    {
        const bool branch_taken_0x2705f4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x2705F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2705F4u;
        // 0x2705f8: 0x2610ffff  addiu       $s0, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2705f4) {
            ctx->pc = 0x2705D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2705d0;
        }
    }
    ctx->pc = 0x2705FCu;
label_2705fc:
    // 0x2705fc: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2705fcu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_270600:
    // 0x270600: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270600u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270604:
    // 0x270604: 0x2e0a02d  daddu       $s4, $s7, $zero
    ctx->pc = 0x270604u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_270608:
    // 0x270608: 0xc099cba  jal         func_2672E8
label_27060c:
    if (ctx->pc == 0x27060Cu) {
        ctx->pc = 0x27060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270608u;
        // 0x27060c: 0x26e598f0  addiu       $a1, $s7, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270610u;
        goto label_270610;
    }
    ctx->pc = 0x270608u;
    SET_GPR_U32(ctx, 31, 0x270610u);
    ctx->pc = 0x27060Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270608u;
    // 0x27060c: 0x26e598f0  addiu       $a1, $s7, -0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2672E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2672E8u, 0x270608u, 0x270610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270610u;
label_270610:
    // 0x270610: 0x4400080  bltz        $v0, . + 4 + (0x80 << 2)
label_270614:
    if (ctx->pc == 0x270614u) {
        ctx->pc = 0x270614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270610u;
        // 0x270614: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270618u;
        goto label_270618;
    }
    ctx->pc = 0x270610u;
    {
        const bool branch_taken_0x270610 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x270614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270610u;
        // 0x270614: 0x24150002  addiu       $s5, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270610) {
            ctx->pc = 0x270814u;
            goto label_270814;
        }
    }
    ctx->pc = 0x270618u;
label_270618:
    // 0x270618: 0x8e300004  lw          $s0, 0x4($s1)
    ctx->pc = 0x270618u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_27061c:
    // 0x27061c: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x27061cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_270620:
    // 0x270620: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x270620u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
label_270624:
    // 0x270624: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270624u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270628:
    // 0x270628: 0xc09beb8  jal         func_26FAE0
label_27062c:
    if (ctx->pc == 0x27062Cu) {
        ctx->pc = 0x27062Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270628u;
        // 0x27062c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270630u;
        goto label_270630;
    }
    ctx->pc = 0x270628u;
    SET_GPR_U32(ctx, 31, 0x270630u);
    ctx->pc = 0x27062Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270628u;
    // 0x27062c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FAE0u, 0x270628u, 0x270630u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270630u;
label_270630:
    // 0x270630: 0x4400088  bltz        $v0, . + 4 + (0x88 << 2)
label_270634:
    if (ctx->pc == 0x270634u) {
        ctx->pc = 0x270634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270630u;
        // 0x270634: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270638u;
        goto label_270638;
    }
    ctx->pc = 0x270630u;
    {
        const bool branch_taken_0x270630 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x270634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270630u;
        // 0x270634: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270630) {
            ctx->pc = 0x270854u;
            goto label_270854;
        }
    }
    ctx->pc = 0x270638u;
label_270638:
    // 0x270638: 0x5055001a  beql        $v0, $s5, . + 4 + (0x1A << 2)
label_27063c:
    if (ctx->pc == 0x27063Cu) {
        ctx->pc = 0x27063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270638u;
        // 0x27063c: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270640u;
        goto label_270640;
    }
    ctx->pc = 0x270638u;
    {
        const bool branch_taken_0x270638 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x270638) {
            ctx->pc = 0x27063Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270638u;
            // 0x27063c: 0x24150004  addiu       $s5, $zero, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2706A4u;
            goto label_2706a4;
        }
    }
    ctx->pc = 0x270640u;
label_270640:
    // 0x270640: 0x50400080  beql        $v0, $zero, . + 4 + (0x80 << 2)
label_270644:
    if (ctx->pc == 0x270644u) {
        ctx->pc = 0x270644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270640u;
        // 0x270644: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270648u;
        goto label_270648;
    }
    ctx->pc = 0x270640u;
    {
        const bool branch_taken_0x270640 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x270640) {
            ctx->pc = 0x270644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270640u;
            // 0x270644: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270844u;
            goto label_270844;
        }
    }
    ctx->pc = 0x270648u;
label_270648:
    // 0x270648: 0xc04332c  jal         func_10CCB0
label_27064c:
    if (ctx->pc == 0x27064Cu) {
        ctx->pc = 0x27064Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270648u;
        // 0x27064c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270650u;
        goto label_270650;
    }
    ctx->pc = 0x270648u;
    SET_GPR_U32(ctx, 31, 0x270650u);
    ctx->pc = 0x27064Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270648u;
    // 0x27064c: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x270648u, 0x270650u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270650u;
label_270650:
    // 0x270650: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x270650u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_270654:
    // 0x270654: 0x504300b2  beql        $v0, $v1, . + 4 + (0xB2 << 2)
label_270658:
    if (ctx->pc == 0x270658u) {
        ctx->pc = 0x270658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270654u;
        // 0x270658: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27065Cu;
        goto label_27065c;
    }
    ctx->pc = 0x270654u;
    {
        const bool branch_taken_0x270654 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x270654) {
            ctx->pc = 0x270658u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270654u;
            // 0x270658: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270920u;
            goto label_270920;
        }
    }
    ctx->pc = 0x27065Cu;
label_27065c:
    // 0x27065c: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_270660:
    if (ctx->pc == 0x270660u) {
        ctx->pc = 0x270660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27065Cu;
        // 0x270660: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270664u;
        goto label_270664;
    }
    ctx->pc = 0x27065Cu;
    {
        const bool branch_taken_0x27065c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x270660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27065Cu;
        // 0x270660: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27065c) {
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x270664u;
label_270664:
    // 0x270664: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x270664u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_270668:
    // 0x270668: 0x1613000a  bne         $s0, $s3, . + 4 + (0xA << 2)
label_27066c:
    if (ctx->pc == 0x27066Cu) {
        ctx->pc = 0x270670u;
        goto label_270670;
    }
    ctx->pc = 0x270668u;
    {
        const bool branch_taken_0x270668 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x270668) {
            ctx->pc = 0x270694u;
            goto label_270694;
        }
    }
    ctx->pc = 0x270670u;
label_270670:
    // 0x270670: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270674:
    // 0x270674: 0xc09c06a  jal         func_2701A8
label_270678:
    if (ctx->pc == 0x270678u) {
        ctx->pc = 0x270678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270674u;
        // 0x270678: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27067Cu;
        goto label_27067c;
    }
    ctx->pc = 0x270674u;
    SET_GPR_U32(ctx, 31, 0x27067Cu);
    ctx->pc = 0x270678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270674u;
    // 0x270678: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701A8u, 0x270674u, 0x27067Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27067Cu;
label_27067c:
    // 0x27067c: 0x4420099  bltzl       $v0, . + 4 + (0x99 << 2)
label_270680:
    if (ctx->pc == 0x270680u) {
        ctx->pc = 0x270680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27067Cu;
        // 0x270680: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270684u;
        goto label_270684;
    }
    ctx->pc = 0x27067Cu;
    {
        const bool branch_taken_0x27067c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x27067c) {
            ctx->pc = 0x270680u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27067Cu;
            // 0x270680: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2708E4u;
            goto label_2708e4;
        }
    }
    ctx->pc = 0x270684u;
label_270684:
    // 0x270684: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x270684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_270688:
    // 0x270688: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x270688u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_27068c:
    // 0x27068c: 0x1000004e  b           . + 4 + (0x4E << 2)
label_270690:
    if (ctx->pc == 0x270690u) {
        ctx->pc = 0x270690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27068Cu;
        // 0x270690: 0x761825  or          $v1, $v1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270694u;
        goto label_270694;
    }
    ctx->pc = 0x27068Cu;
    {
        const bool branch_taken_0x27068c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27068Cu;
        // 0x270690: 0x761825  or          $v1, $v1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27068c) {
            ctx->pc = 0x2707C8u;
            goto label_2707c8;
        }
    }
    ctx->pc = 0x270694u;
label_270694:
    // 0x270694: 0xc043736  jal         func_10DCD8
label_270698:
    if (ctx->pc == 0x270698u) {
        ctx->pc = 0x270698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270694u;
        // 0x270698: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27069Cu;
        goto label_27069c;
    }
    ctx->pc = 0x270694u;
    SET_GPR_U32(ctx, 31, 0x27069Cu);
    ctx->pc = 0x270698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270694u;
    // 0x270698: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x270694u, 0x27069Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27069Cu;
label_27069c:
    // 0x27069c: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_2706a0:
    if (ctx->pc == 0x2706A0u) {
        ctx->pc = 0x2706A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27069Cu;
        // 0x2706a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706A4u;
        goto label_2706a4;
    }
    ctx->pc = 0x27069Cu;
    {
        const bool branch_taken_0x27069c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27069Cu;
        // 0x2706a0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27069c) {
            ctx->pc = 0x270628u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270628;
        }
    }
    ctx->pc = 0x2706A4u;
label_2706a4:
    // 0x2706a4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2706a4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2706a8:
    // 0x2706a8: 0x3c161000  lui         $s6, 0x1000
    ctx->pc = 0x2706a8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)4096 << 16));
label_2706ac:
    // 0x2706ac: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2706acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2706b0:
    // 0x2706b0: 0xc099cf0  jal         func_2673C0
label_2706b4:
    if (ctx->pc == 0x2706B4u) {
        ctx->pc = 0x2706B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706B0u;
        // 0x2706b4: 0x268598f0  addiu       $a1, $s4, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706B8u;
        goto label_2706b8;
    }
    ctx->pc = 0x2706B0u;
    SET_GPR_U32(ctx, 31, 0x2706B8u);
    ctx->pc = 0x2706B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706B0u;
    // 0x2706b4: 0x268598f0  addiu       $a1, $s4, -0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2673C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2673C0u, 0x2706B0u, 0x2706B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706B8u;
label_2706b8:
    // 0x2706b8: 0x4420067  bltzl       $v0, . + 4 + (0x67 << 2)
label_2706bc:
    if (ctx->pc == 0x2706BCu) {
        ctx->pc = 0x2706BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706B8u;
        // 0x2706bc: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706C0u;
        goto label_2706c0;
    }
    ctx->pc = 0x2706B8u;
    {
        const bool branch_taken_0x2706b8 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2706b8) {
            ctx->pc = 0x2706BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2706B8u;
            // 0x2706bc: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270858u;
            goto label_270858;
        }
    }
    ctx->pc = 0x2706C0u;
label_2706c0:
    // 0x2706c0: 0x50400060  beql        $v0, $zero, . + 4 + (0x60 << 2)
label_2706c4:
    if (ctx->pc == 0x2706C4u) {
        ctx->pc = 0x2706C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706C0u;
        // 0x2706c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706C8u;
        goto label_2706c8;
    }
    ctx->pc = 0x2706C0u;
    {
        const bool branch_taken_0x2706c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2706c0) {
            ctx->pc = 0x2706C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2706C0u;
            // 0x2706c4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270844u;
            goto label_270844;
        }
    }
    ctx->pc = 0x2706C8u;
label_2706c8:
    // 0x2706c8: 0x50550019  beql        $v0, $s5, . + 4 + (0x19 << 2)
label_2706cc:
    if (ctx->pc == 0x2706CCu) {
        ctx->pc = 0x2706CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706C8u;
        // 0x2706cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706D0u;
        goto label_2706d0;
    }
    ctx->pc = 0x2706C8u;
    {
        const bool branch_taken_0x2706c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 21));
        if (branch_taken_0x2706c8) {
            ctx->pc = 0x2706CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2706C8u;
            // 0x2706cc: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270730u;
            goto label_270730;
        }
    }
    ctx->pc = 0x2706D0u;
label_2706d0:
    // 0x2706d0: 0xc04332c  jal         func_10CCB0
label_2706d4:
    if (ctx->pc == 0x2706D4u) {
        ctx->pc = 0x2706D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706D0u;
        // 0x2706d4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706D8u;
        goto label_2706d8;
    }
    ctx->pc = 0x2706D0u;
    SET_GPR_U32(ctx, 31, 0x2706D8u);
    ctx->pc = 0x2706D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706D0u;
    // 0x2706d4: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x2706D0u, 0x2706D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2706D8u;
label_2706d8:
    // 0x2706d8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x2706d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2706dc:
    // 0x2706dc: 0x50430090  beql        $v0, $v1, . + 4 + (0x90 << 2)
label_2706e0:
    if (ctx->pc == 0x2706E0u) {
        ctx->pc = 0x2706E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706DCu;
        // 0x2706e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706E4u;
        goto label_2706e4;
    }
    ctx->pc = 0x2706DCu;
    {
        const bool branch_taken_0x2706dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x2706dc) {
            ctx->pc = 0x2706E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2706DCu;
            // 0x2706e0: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270920u;
            goto label_270920;
        }
    }
    ctx->pc = 0x2706E4u;
label_2706e4:
    // 0x2706e4: 0x1200000d  beqz        $s0, . + 4 + (0xD << 2)
label_2706e8:
    if (ctx->pc == 0x2706E8u) {
        ctx->pc = 0x2706E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706E4u;
        // 0x2706e8: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2706ECu;
        goto label_2706ec;
    }
    ctx->pc = 0x2706E4u;
    {
        const bool branch_taken_0x2706e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2706E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706E4u;
        // 0x2706e8: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2706e4) {
            ctx->pc = 0x27071Cu;
            goto label_27071c;
        }
    }
    ctx->pc = 0x2706ECu;
label_2706ec:
    // 0x2706ec: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x2706ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2706f0:
    // 0x2706f0: 0x1613000a  bne         $s0, $s3, . + 4 + (0xA << 2)
label_2706f4:
    if (ctx->pc == 0x2706F4u) {
        ctx->pc = 0x2706F8u;
        goto label_2706f8;
    }
    ctx->pc = 0x2706F0u;
    {
        const bool branch_taken_0x2706f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 19));
        if (branch_taken_0x2706f0) {
            ctx->pc = 0x27071Cu;
            goto label_27071c;
        }
    }
    ctx->pc = 0x2706F8u;
label_2706f8:
    // 0x2706f8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2706f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2706fc:
    // 0x2706fc: 0xc09c06a  jal         func_2701A8
label_270700:
    if (ctx->pc == 0x270700u) {
        ctx->pc = 0x270700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2706FCu;
        // 0x270700: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270704u;
        goto label_270704;
    }
    ctx->pc = 0x2706FCu;
    SET_GPR_U32(ctx, 31, 0x270704u);
    ctx->pc = 0x270700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2706FCu;
    // 0x270700: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701A8u, 0x2706FCu, 0x270704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270704u;
label_270704:
    // 0x270704: 0x4420077  bltzl       $v0, . + 4 + (0x77 << 2)
label_270708:
    if (ctx->pc == 0x270708u) {
        ctx->pc = 0x270708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270704u;
        // 0x270708: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27070Cu;
        goto label_27070c;
    }
    ctx->pc = 0x270704u;
    {
        const bool branch_taken_0x270704 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x270704) {
            ctx->pc = 0x270708u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270704u;
            // 0x270708: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2708E4u;
            goto label_2708e4;
        }
    }
    ctx->pc = 0x27070Cu;
label_27070c:
    // 0x27070c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x27070cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_270710:
    // 0x270710: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x270710u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_270714:
    // 0x270714: 0x1000002c  b           . + 4 + (0x2C << 2)
label_270718:
    if (ctx->pc == 0x270718u) {
        ctx->pc = 0x270718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270714u;
        // 0x270718: 0x761825  or          $v1, $v1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27071Cu;
        goto label_27071c;
    }
    ctx->pc = 0x270714u;
    {
        const bool branch_taken_0x270714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270714u;
        // 0x270718: 0x761825  or          $v1, $v1, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270714) {
            ctx->pc = 0x2707C8u;
            goto label_2707c8;
        }
    }
    ctx->pc = 0x27071Cu;
label_27071c:
    // 0x27071c: 0xc043736  jal         func_10DCD8
label_270720:
    if (ctx->pc == 0x270720u) {
        ctx->pc = 0x270720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27071Cu;
        // 0x270720: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x270724u;
        goto label_270724;
    }
    ctx->pc = 0x27071Cu;
    SET_GPR_U32(ctx, 31, 0x270724u);
    ctx->pc = 0x270720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27071Cu;
    // 0x270720: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x27071Cu, 0x270724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270724u;
label_270724:
    // 0x270724: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_270728:
    if (ctx->pc == 0x270728u) {
        ctx->pc = 0x270728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270724u;
        // 0x270728: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27072Cu;
        goto label_27072c;
    }
    ctx->pc = 0x270724u;
    {
        const bool branch_taken_0x270724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270724u;
        // 0x270728: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270724) {
            ctx->pc = 0x2706B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2706b0;
        }
    }
    ctx->pc = 0x27072Cu;
label_27072c:
    // 0x27072c: 0x0  nop
    ctx->pc = 0x27072cu;
    // NOP
label_270730:
    // 0x270730: 0xc09beb8  jal         func_26FAE0
label_270734:
    if (ctx->pc == 0x270734u) {
        ctx->pc = 0x270734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270730u;
        // 0x270734: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270738u;
        goto label_270738;
    }
    ctx->pc = 0x270730u;
    SET_GPR_U32(ctx, 31, 0x270738u);
    ctx->pc = 0x270734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270730u;
    // 0x270734: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FAE0u, 0x270730u, 0x270738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270738u;
label_270738:
    // 0x270738: 0x4400047  bltz        $v0, . + 4 + (0x47 << 2)
label_27073c:
    if (ctx->pc == 0x27073Cu) {
        ctx->pc = 0x27073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270738u;
        // 0x27073c: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270740u;
        goto label_270740;
    }
    ctx->pc = 0x270738u;
    {
        const bool branch_taken_0x270738 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x27073Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270738u;
        // 0x27073c: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270738) {
            ctx->pc = 0x270858u;
            goto label_270858;
        }
    }
    ctx->pc = 0x270740u;
label_270740:
    // 0x270740: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x270740u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_270744:
    // 0x270744: 0x1040003e  beqz        $v0, . + 4 + (0x3E << 2)
label_270748:
    if (ctx->pc == 0x270748u) {
        ctx->pc = 0x270748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270744u;
        // 0x270748: 0x269398f0  addiu       $s3, $s4, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27074Cu;
        goto label_27074c;
    }
    ctx->pc = 0x270744u;
    {
        const bool branch_taken_0x270744 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270744u;
        // 0x270748: 0x269398f0  addiu       $s3, $s4, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940912));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270744) {
            ctx->pc = 0x270840u;
            goto label_270840;
        }
    }
    ctx->pc = 0x27074Cu;
label_27074c:
    // 0x27074c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27074cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270750:
    // 0x270750: 0xc099cf0  jal         func_2673C0
label_270754:
    if (ctx->pc == 0x270754u) {
        ctx->pc = 0x270754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270750u;
        // 0x270754: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270758u;
        goto label_270758;
    }
    ctx->pc = 0x270750u;
    SET_GPR_U32(ctx, 31, 0x270758u);
    ctx->pc = 0x270754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270750u;
    // 0x270754: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2673C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2673C0u, 0x270750u, 0x270758u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270758u;
label_270758:
    // 0x270758: 0x442003f  bltzl       $v0, . + 4 + (0x3F << 2)
label_27075c:
    if (ctx->pc == 0x27075Cu) {
        ctx->pc = 0x27075Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270758u;
        // 0x27075c: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270760u;
        goto label_270760;
    }
    ctx->pc = 0x270758u;
    {
        const bool branch_taken_0x270758 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x270758) {
            ctx->pc = 0x27075Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270758u;
            // 0x27075c: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270858u;
            goto label_270858;
        }
    }
    ctx->pc = 0x270760u;
label_270760:
    // 0x270760: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_270764:
    if (ctx->pc == 0x270764u) {
        ctx->pc = 0x270764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270760u;
        // 0x270764: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270768u;
        goto label_270768;
    }
    ctx->pc = 0x270760u;
    {
        const bool branch_taken_0x270760 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x270764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270760u;
        // 0x270764: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270760) {
            ctx->pc = 0x270844u;
            goto label_270844;
        }
    }
    ctx->pc = 0x270768u;
label_270768:
    // 0x270768: 0xc099ebe  jal         func_267AF8
label_27076c:
    if (ctx->pc == 0x27076Cu) {
        ctx->pc = 0x27076Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270768u;
        // 0x27076c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270770u;
        goto label_270770;
    }
    ctx->pc = 0x270768u;
    SET_GPR_U32(ctx, 31, 0x270770u);
    ctx->pc = 0x27076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270768u;
    // 0x27076c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267AF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267AF8u, 0x270768u, 0x270770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270770u;
label_270770:
    // 0x270770: 0x4420039  bltzl       $v0, . + 4 + (0x39 << 2)
label_270774:
    if (ctx->pc == 0x270774u) {
        ctx->pc = 0x270774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270770u;
        // 0x270774: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270778u;
        goto label_270778;
    }
    ctx->pc = 0x270770u;
    {
        const bool branch_taken_0x270770 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x270770) {
            ctx->pc = 0x270774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270770u;
            // 0x270774: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270858u;
            goto label_270858;
        }
    }
    ctx->pc = 0x270778u;
label_270778:
    // 0x270778: 0x5440001c  bnel        $v0, $zero, . + 4 + (0x1C << 2)
label_27077c:
    if (ctx->pc == 0x27077Cu) {
        ctx->pc = 0x27077Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270778u;
        // 0x27077c: 0x269098f0  addiu       $s0, $s4, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270780u;
        goto label_270780;
    }
    ctx->pc = 0x270778u;
    {
        const bool branch_taken_0x270778 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x270778) {
            ctx->pc = 0x27077Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x270778u;
            // 0x27077c: 0x269098f0  addiu       $s0, $s4, -0x6710 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940912));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2707ECu;
            goto label_2707ec;
        }
    }
    ctx->pc = 0x270780u;
label_270780:
    // 0x270780: 0xc04332c  jal         func_10CCB0
label_270784:
    if (ctx->pc == 0x270784u) {
        ctx->pc = 0x270784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270780u;
        // 0x270784: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270788u;
        goto label_270788;
    }
    ctx->pc = 0x270780u;
    SET_GPR_U32(ctx, 31, 0x270788u);
    ctx->pc = 0x270784u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270780u;
    // 0x270784: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x270780u, 0x270788u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270788u;
label_270788:
    // 0x270788: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x270788u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_27078c:
    // 0x27078c: 0x50430064  beql        $v0, $v1, . + 4 + (0x64 << 2)
label_270790:
    if (ctx->pc == 0x270790u) {
        ctx->pc = 0x270790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27078Cu;
        // 0x270790: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270794u;
        goto label_270794;
    }
    ctx->pc = 0x27078Cu;
    {
        const bool branch_taken_0x27078c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x27078c) {
            ctx->pc = 0x270790u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27078Cu;
            // 0x270790: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270920u;
            goto label_270920;
        }
    }
    ctx->pc = 0x270794u;
label_270794:
    // 0x270794: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_270798:
    if (ctx->pc == 0x270798u) {
        ctx->pc = 0x270798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270794u;
        // 0x270798: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27079Cu;
        goto label_27079c;
    }
    ctx->pc = 0x270794u;
    {
        const bool branch_taken_0x270794 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x270798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270794u;
        // 0x270798: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270794) {
            ctx->pc = 0x2707D8u;
            goto label_2707d8;
        }
    }
    ctx->pc = 0x27079Cu;
label_27079c:
    // 0x27079c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x27079cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_2707a0:
    // 0x2707a0: 0x1602000e  bne         $s0, $v0, . + 4 + (0xE << 2)
label_2707a4:
    if (ctx->pc == 0x2707A4u) {
        ctx->pc = 0x2707A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707A0u;
        // 0x2707a4: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707A8u;
        goto label_2707a8;
    }
    ctx->pc = 0x2707A0u;
    {
        const bool branch_taken_0x2707a0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2707A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707A0u;
        // 0x2707a4: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707a0) {
            ctx->pc = 0x2707DCu;
            goto label_2707dc;
        }
    }
    ctx->pc = 0x2707A8u;
label_2707a8:
    // 0x2707a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2707a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2707ac:
    // 0x2707ac: 0xc09c06a  jal         func_2701A8
label_2707b0:
    if (ctx->pc == 0x2707B0u) {
        ctx->pc = 0x2707B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707ACu;
        // 0x2707b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707B4u;
        goto label_2707b4;
    }
    ctx->pc = 0x2707ACu;
    SET_GPR_U32(ctx, 31, 0x2707B4u);
    ctx->pc = 0x2707B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707ACu;
    // 0x2707b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701A8u, 0x2707ACu, 0x2707B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707B4u;
label_2707b4:
    // 0x2707b4: 0x440004a  bltz        $v0, . + 4 + (0x4A << 2)
label_2707b8:
    if (ctx->pc == 0x2707B8u) {
        ctx->pc = 0x2707B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707B4u;
        // 0x2707b8: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707BCu;
        goto label_2707bc;
    }
    ctx->pc = 0x2707B4u;
    {
        const bool branch_taken_0x2707b4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2707B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707B4u;
        // 0x2707b8: 0x3c041000  lui         $a0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707b4) {
            ctx->pc = 0x2708E0u;
            goto label_2708e0;
        }
    }
    ctx->pc = 0x2707BCu;
label_2707bc:
    // 0x2707bc: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x2707bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2707c0:
    // 0x2707c0: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x2707c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2707c4:
    // 0x2707c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2707c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2707c8:
    // 0x2707c8: 0x40f809  jalr        $v0
label_2707cc:
    if (ctx->pc == 0x2707CCu) {
        ctx->pc = 0x2707CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707C8u;
        // 0x2707cc: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707D0u;
        goto label_2707d0;
    }
    ctx->pc = 0x2707C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2707D0u);
        ctx->pc = 0x2707CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707C8u;
        // 0x2707cc: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2707C8u, 0x2707D0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2707D0u;
label_2707d0:
    // 0x2707d0: 0x10000053  b           . + 4 + (0x53 << 2)
label_2707d4:
    if (ctx->pc == 0x2707D4u) {
        ctx->pc = 0x2707D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707D0u;
        // 0x2707d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707D8u;
        goto label_2707d8;
    }
    ctx->pc = 0x2707D0u;
    {
        const bool branch_taken_0x2707d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707D0u;
        // 0x2707d4: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707d0) {
            ctx->pc = 0x270920u;
            goto label_270920;
        }
    }
    ctx->pc = 0x2707D8u;
label_2707d8:
    // 0x2707d8: 0x3c04000f  lui         $a0, 0xF
    ctx->pc = 0x2707d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
label_2707dc:
    // 0x2707dc: 0xc043736  jal         func_10DCD8
label_2707e0:
    if (ctx->pc == 0x2707E0u) {
        ctx->pc = 0x2707E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707DCu;
        // 0x2707e0: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707E4u;
        goto label_2707e4;
    }
    ctx->pc = 0x2707DCu;
    SET_GPR_U32(ctx, 31, 0x2707E4u);
    ctx->pc = 0x2707E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707DCu;
    // 0x2707e0: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x2707DCu, 0x2707E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707E4u;
label_2707e4:
    // 0x2707e4: 0x1000ffd2  b           . + 4 + (-0x2E << 2)
label_2707e8:
    if (ctx->pc == 0x2707E8u) {
        ctx->pc = 0x2707E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707E4u;
        // 0x2707e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707ECu;
        goto label_2707ec;
    }
    ctx->pc = 0x2707E4u;
    {
        const bool branch_taken_0x2707e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2707E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707E4u;
        // 0x2707e8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707e4) {
            ctx->pc = 0x270730u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270730;
        }
    }
    ctx->pc = 0x2707ECu;
label_2707ec:
    // 0x2707ec: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2707ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2707f0:
    // 0x2707f0: 0xc099de4  jal         func_267790
label_2707f4:
    if (ctx->pc == 0x2707F4u) {
        ctx->pc = 0x2707F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707F0u;
        // 0x2707f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2707F8u;
        goto label_2707f8;
    }
    ctx->pc = 0x2707F0u;
    SET_GPR_U32(ctx, 31, 0x2707F8u);
    ctx->pc = 0x2707F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2707F0u;
    // 0x2707f4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267790u, 0x2707F0u, 0x2707F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2707F8u;
label_2707f8:
    // 0x2707f8: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_2707fc:
    if (ctx->pc == 0x2707FCu) {
        ctx->pc = 0x2707FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707F8u;
        // 0x2707fc: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270800u;
        goto label_270800;
    }
    ctx->pc = 0x2707F8u;
    {
        const bool branch_taken_0x2707f8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2707FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2707F8u;
        // 0x2707fc: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2707f8) {
            ctx->pc = 0x270818u;
            goto label_270818;
        }
    }
    ctx->pc = 0x270800u;
label_270800:
    // 0x270800: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270800u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270804:
    // 0x270804: 0xc099e0e  jal         func_267838
label_270808:
    if (ctx->pc == 0x270808u) {
        ctx->pc = 0x270808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270804u;
        // 0x270808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27080Cu;
        goto label_27080c;
    }
    ctx->pc = 0x270804u;
    SET_GPR_U32(ctx, 31, 0x27080Cu);
    ctx->pc = 0x270808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270804u;
    // 0x270808: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267838u, 0x270804u, 0x27080Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27080Cu;
label_27080c:
    // 0x27080c: 0x4430004  bgezl       $v0, . + 4 + (0x4 << 2)
label_270810:
    if (ctx->pc == 0x270810u) {
        ctx->pc = 0x270810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27080Cu;
        // 0x270810: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270814u;
        goto label_270814;
    }
    ctx->pc = 0x27080Cu;
    {
        const bool branch_taken_0x27080c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27080c) {
            ctx->pc = 0x270810u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27080Cu;
            // 0x270810: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270820u;
            goto label_270820;
        }
    }
    ctx->pc = 0x270814u;
label_270814:
    // 0x270814: 0x2402fffa  addiu       $v0, $zero, -0x6
    ctx->pc = 0x270814u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
label_270818:
    // 0x270818: 0x10000031  b           . + 4 + (0x31 << 2)
label_27081c:
    if (ctx->pc == 0x27081Cu) {
        ctx->pc = 0x27081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270818u;
        // 0x27081c: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270820u;
        goto label_270820;
    }
    ctx->pc = 0x270818u;
    {
        const bool branch_taken_0x270818 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27081Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270818u;
        // 0x27081c: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270818) {
            ctx->pc = 0x2708E0u;
            goto label_2708e0;
        }
    }
    ctx->pc = 0x270820u;
label_270820:
    // 0x270820: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x270820u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_270824:
    // 0x270824: 0xc099e6a  jal         func_2679A8
label_270828:
    if (ctx->pc == 0x270828u) {
        ctx->pc = 0x270828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270824u;
        // 0x270828: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27082Cu;
        goto label_27082c;
    }
    ctx->pc = 0x270824u;
    SET_GPR_U32(ctx, 31, 0x27082Cu);
    ctx->pc = 0x270828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270824u;
    // 0x270828: 0x8e26000c  lw          $a2, 0xC($s1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2679A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2679A8u, 0x270824u, 0x27082Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27082Cu;
label_27082c:
    // 0x27082c: 0x443000c  bgezl       $v0, . + 4 + (0xC << 2)
label_270830:
    if (ctx->pc == 0x270830u) {
        ctx->pc = 0x270830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27082Cu;
        // 0x270830: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270834u;
        goto label_270834;
    }
    ctx->pc = 0x27082Cu;
    {
        const bool branch_taken_0x27082c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x27082c) {
            ctx->pc = 0x270830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27082Cu;
            // 0x270830: 0x8e430030  lw          $v1, 0x30($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270860u;
            goto label_270860;
        }
    }
    ctx->pc = 0x270834u;
label_270834:
    // 0x270834: 0x2402fff9  addiu       $v0, $zero, -0x7
    ctx->pc = 0x270834u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967289));
label_270838:
    // 0x270838: 0x10000029  b           . + 4 + (0x29 << 2)
label_27083c:
    if (ctx->pc == 0x27083Cu) {
        ctx->pc = 0x27083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270838u;
        // 0x27083c: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270840u;
        goto label_270840;
    }
    ctx->pc = 0x270838u;
    {
        const bool branch_taken_0x270838 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27083Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270838u;
        // 0x27083c: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270838) {
            ctx->pc = 0x2708E0u;
            goto label_2708e0;
        }
    }
    ctx->pc = 0x270840u;
label_270840:
    // 0x270840: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270840u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270844:
    // 0x270844: 0xc09c06a  jal         func_2701A8
label_270848:
    if (ctx->pc == 0x270848u) {
        ctx->pc = 0x270848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270844u;
        // 0x270848: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27084Cu;
        goto label_27084c;
    }
    ctx->pc = 0x270844u;
    SET_GPR_U32(ctx, 31, 0x27084Cu);
    ctx->pc = 0x270848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270844u;
    // 0x270848: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701A8u, 0x270844u, 0x27084Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27084Cu;
label_27084c:
    // 0x27084c: 0x10000025  b           . + 4 + (0x25 << 2)
label_270850:
    if (ctx->pc == 0x270850u) {
        ctx->pc = 0x270850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27084Cu;
        // 0x270850: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270854u;
        goto label_270854;
    }
    ctx->pc = 0x27084Cu;
    {
        const bool branch_taken_0x27084c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270850u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27084Cu;
        // 0x270850: 0x8e440030  lw          $a0, 0x30($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27084c) {
            ctx->pc = 0x2708E4u;
            goto label_2708e4;
        }
    }
    ctx->pc = 0x270854u;
label_270854:
    // 0x270854: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x270854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_270858:
    // 0x270858: 0x10000021  b           . + 4 + (0x21 << 2)
label_27085c:
    if (ctx->pc == 0x27085Cu) {
        ctx->pc = 0x27085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270858u;
        // 0x27085c: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270860u;
        goto label_270860;
    }
    ctx->pc = 0x270858u;
    {
        const bool branch_taken_0x270858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27085Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270858u;
        // 0x27085c: 0xae420050  sw          $v0, 0x50($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270858) {
            ctx->pc = 0x2708E0u;
            goto label_2708e0;
        }
    }
    ctx->pc = 0x270860u;
label_270860:
    // 0x270860: 0x3c040800  lui         $a0, 0x800
    ctx->pc = 0x270860u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)2048 << 16));
label_270864:
    // 0x270864: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x270864u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_270868:
    // 0x270868: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x270868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_27086c:
    // 0x27086c: 0x40f809  jalr        $v0
label_270870:
    if (ctx->pc == 0x270870u) {
        ctx->pc = 0x270870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27086Cu;
        // 0x270870: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270874u;
        goto label_270874;
    }
    ctx->pc = 0x27086Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270874u);
        ctx->pc = 0x270870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27086Cu;
        // 0x270870: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27086Cu, 0x270874u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270874u;
label_270874:
    // 0x270874: 0x1000000a  b           . + 4 + (0xA << 2)
label_270878:
    if (ctx->pc == 0x270878u) {
        ctx->pc = 0x270878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270874u;
        // 0x270878: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27087Cu;
        goto label_27087c;
    }
    ctx->pc = 0x270874u;
    {
        const bool branch_taken_0x270874 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270874u;
        // 0x270878: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270874) {
            ctx->pc = 0x2708A0u;
            goto label_2708a0;
        }
    }
    ctx->pc = 0x27087Cu;
label_27087c:
    // 0x27087c: 0x0  nop
    ctx->pc = 0x27087cu;
    // NOP
label_270880:
    // 0x270880: 0xc04332c  jal         func_10CCB0
label_270884:
    if (ctx->pc == 0x270884u) {
        ctx->pc = 0x270884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270880u;
        // 0x270884: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270888u;
        goto label_270888;
    }
    ctx->pc = 0x270880u;
    SET_GPR_U32(ctx, 31, 0x270888u);
    ctx->pc = 0x270884u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270880u;
    // 0x270884: 0x8e240010  lw          $a0, 0x10($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCB0u, 0x270880u, 0x270888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270888u;
label_270888:
    // 0x270888: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x270888u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_27088c:
    // 0x27088c: 0x10430023  beq         $v0, $v1, . + 4 + (0x23 << 2)
label_270890:
    if (ctx->pc == 0x270890u) {
        ctx->pc = 0x270890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27088Cu;
        // 0x270890: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270894u;
        goto label_270894;
    }
    ctx->pc = 0x27088Cu;
    {
        const bool branch_taken_0x27088c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x270890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27088Cu;
        // 0x270890: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27088c) {
            ctx->pc = 0x27091Cu;
            goto label_27091c;
        }
    }
    ctx->pc = 0x270894u;
label_270894:
    // 0x270894: 0xc043736  jal         func_10DCD8
label_270898:
    if (ctx->pc == 0x270898u) {
        ctx->pc = 0x270898u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270894u;
        // 0x270898: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x27089Cu;
        goto label_27089c;
    }
    ctx->pc = 0x270894u;
    SET_GPR_U32(ctx, 31, 0x27089Cu);
    ctx->pc = 0x270898u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270894u;
    // 0x270898: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x270894u, 0x27089Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27089Cu;
label_27089c:
    // 0x27089c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27089cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2708a0:
    // 0x2708a0: 0xc09beb8  jal         func_26FAE0
label_2708a4:
    if (ctx->pc == 0x2708A4u) {
        ctx->pc = 0x2708A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708A0u;
        // 0x2708a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708A8u;
        goto label_2708a8;
    }
    ctx->pc = 0x2708A0u;
    SET_GPR_U32(ctx, 31, 0x2708A8u);
    ctx->pc = 0x2708A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2708A0u;
    // 0x2708a4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FAE0u, 0x2708A0u, 0x2708A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708A8u;
label_2708a8:
    // 0x2708a8: 0x440ffeb  bltz        $v0, . + 4 + (-0x15 << 2)
label_2708ac:
    if (ctx->pc == 0x2708ACu) {
        ctx->pc = 0x2708ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708A8u;
        // 0x2708ac: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708B0u;
        goto label_2708b0;
    }
    ctx->pc = 0x2708A8u;
    {
        const bool branch_taken_0x2708a8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2708ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708A8u;
        // 0x2708ac: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708a8) {
            ctx->pc = 0x270858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270858;
        }
    }
    ctx->pc = 0x2708B0u;
label_2708b0:
    // 0x2708b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2708b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2708b4:
    // 0x2708b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2708b8:
    if (ctx->pc == 0x2708B8u) {
        ctx->pc = 0x2708B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708B4u;
        // 0x2708b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708BCu;
        goto label_2708bc;
    }
    ctx->pc = 0x2708B4u;
    {
        const bool branch_taken_0x2708b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2708B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708B4u;
        // 0x2708b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708b4) {
            ctx->pc = 0x2708D8u;
            goto label_2708d8;
        }
    }
    ctx->pc = 0x2708BCu;
label_2708bc:
    // 0x2708bc: 0xc099cf0  jal         func_2673C0
label_2708c0:
    if (ctx->pc == 0x2708C0u) {
        ctx->pc = 0x2708C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708BCu;
        // 0x2708c0: 0x268598f0  addiu       $a1, $s4, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708C4u;
        goto label_2708c4;
    }
    ctx->pc = 0x2708BCu;
    SET_GPR_U32(ctx, 31, 0x2708C4u);
    ctx->pc = 0x2708C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2708BCu;
    // 0x2708c0: 0x268598f0  addiu       $a1, $s4, -0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294940912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2673C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2673C0u, 0x2708BCu, 0x2708C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708C4u;
label_2708c4:
    // 0x2708c4: 0x442ffe4  bltzl       $v0, . + 4 + (-0x1C << 2)
label_2708c8:
    if (ctx->pc == 0x2708C8u) {
        ctx->pc = 0x2708C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708C4u;
        // 0x2708c8: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708CCu;
        goto label_2708cc;
    }
    ctx->pc = 0x2708C4u;
    {
        const bool branch_taken_0x2708c4 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x2708c4) {
            ctx->pc = 0x2708C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2708C4u;
            // 0x2708c8: 0x2402fff8  addiu       $v0, $zero, -0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270858;
        }
    }
    ctx->pc = 0x2708CCu;
label_2708cc:
    // 0x2708cc: 0x1440ffec  bnez        $v0, . + 4 + (-0x14 << 2)
label_2708d0:
    if (ctx->pc == 0x2708D0u) {
        ctx->pc = 0x2708D4u;
        goto label_2708d4;
    }
    ctx->pc = 0x2708CCu;
    {
        const bool branch_taken_0x2708cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2708cc) {
            ctx->pc = 0x270880u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270880;
        }
    }
    ctx->pc = 0x2708D4u;
label_2708d4:
    // 0x2708d4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x2708d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2708d8:
    // 0x2708d8: 0xc09c06a  jal         func_2701A8
label_2708dc:
    if (ctx->pc == 0x2708DCu) {
        ctx->pc = 0x2708DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708D8u;
        // 0x2708dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2708E0u;
        goto label_2708e0;
    }
    ctx->pc = 0x2708D8u;
    SET_GPR_U32(ctx, 31, 0x2708E0u);
    ctx->pc = 0x2708DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2708D8u;
    // 0x2708dc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2701A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2701A8u, 0x2708D8u, 0x2708E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2708E0u;
label_2708e0:
    // 0x2708e0: 0x8e440030  lw          $a0, 0x30($s2)
    ctx->pc = 0x2708e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2708e4:
    // 0x2708e4: 0x3c02f7ff  lui         $v0, 0xF7FF
    ctx->pc = 0x2708e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63487 << 16));
label_2708e8:
    // 0x2708e8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2708e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2708ec:
    // 0x2708ec: 0x8e450054  lw          $a1, 0x54($s2)
    ctx->pc = 0x2708ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
label_2708f0:
    // 0x2708f0: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x2708f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_2708f4:
    // 0x2708f4: 0x2403fe6c  addiu       $v1, $zero, -0x194
    ctx->pc = 0x2708f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966892));
label_2708f8:
    // 0x2708f8: 0xae440030  sw          $a0, 0x30($s2)
    ctx->pc = 0x2708f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 4));
label_2708fc:
    // 0x2708fc: 0x14a30002  bne         $a1, $v1, . + 4 + (0x2 << 2)
label_270900:
    if (ctx->pc == 0x270900u) {
        ctx->pc = 0x270900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708FCu;
        // 0x270900: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270904u;
        goto label_270904;
    }
    ctx->pc = 0x2708FCu;
    {
        const bool branch_taken_0x2708fc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x270900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2708FCu;
        // 0x270900: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2708fc) {
            ctx->pc = 0x270908u;
            goto label_270908;
        }
    }
    ctx->pc = 0x270904u;
label_270904:
    // 0x270904: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x270904u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_270908:
    // 0x270908: 0x821025  or          $v0, $a0, $v0
    ctx->pc = 0x270908u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_27090c:
    // 0x27090c: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x27090cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_270910:
    // 0x270910: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x270910u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_270914:
    // 0x270914: 0x40f809  jalr        $v0
label_270918:
    if (ctx->pc == 0x270918u) {
        ctx->pc = 0x27091Cu;
        goto label_27091c;
    }
    ctx->pc = 0x270914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x27091Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270914u, 0x27091Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x27091Cu;
label_27091c:
    // 0x27091c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x27091cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_270920:
    // 0x270920: 0xc099d46  jal         func_267518
label_270924:
    if (ctx->pc == 0x270924u) {
        ctx->pc = 0x270924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270920u;
        // 0x270924: 0x26e598f0  addiu       $a1, $s7, -0x6710 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940912));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270928u;
        goto label_270928;
    }
    ctx->pc = 0x270920u;
    SET_GPR_U32(ctx, 31, 0x270928u);
    ctx->pc = 0x270924u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270920u;
    // 0x270924: 0x26e598f0  addiu       $a1, $s7, -0x6710 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 4294940912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267518u, 0x270920u, 0x270928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270928u;
label_270928:
    // 0x270928: 0x10000004  b           . + 4 + (0x4 << 2)
label_27092c:
    if (ctx->pc == 0x27092Cu) {
        ctx->pc = 0x27092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270928u;
        // 0x27092c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270930u;
        goto label_270930;
    }
    ctx->pc = 0x270928u;
    {
        const bool branch_taken_0x270928 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27092Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270928u;
        // 0x27092c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270928) {
            ctx->pc = 0x27093Cu;
            goto label_27093c;
        }
    }
    ctx->pc = 0x270930u;
label_270930:
    // 0x270930: 0xc043736  jal         func_10DCD8
label_270934:
    if (ctx->pc == 0x270934u) {
        ctx->pc = 0x270934u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270930u;
        // 0x270934: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
        ctx->in_delay_slot = false;
        ctx->pc = 0x270938u;
        goto label_270938;
    }
    ctx->pc = 0x270930u;
    SET_GPR_U32(ctx, 31, 0x270938u);
    ctx->pc = 0x270934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270930u;
    // 0x270934: 0x34844240  ori         $a0, $a0, 0x4240 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16960);
    ctx->in_delay_slot = false;
    ctx->pc = 0x10DCD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10DCD8u, 0x270930u, 0x270938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270938u;
label_270938:
    // 0x270938: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x270938u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_27093c:
    // 0x27093c: 0xc09beb8  jal         func_26FAE0
label_270940:
    if (ctx->pc == 0x270940u) {
        ctx->pc = 0x270940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27093Cu;
        // 0x270940: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270944u;
        goto label_270944;
    }
    ctx->pc = 0x27093Cu;
    SET_GPR_U32(ctx, 31, 0x270944u);
    ctx->pc = 0x270940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27093Cu;
    // 0x270940: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FAE0u, 0x27093Cu, 0x270944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270944u;
label_270944:
    // 0x270944: 0x4400003  bltz        $v0, . + 4 + (0x3 << 2)
label_270948:
    if (ctx->pc == 0x270948u) {
        ctx->pc = 0x270948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270944u;
        // 0x270948: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27094Cu;
        goto label_27094c;
    }
    ctx->pc = 0x270944u;
    {
        const bool branch_taken_0x270944 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x270948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270944u;
        // 0x270948: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270944) {
            ctx->pc = 0x270954u;
            goto label_270954;
        }
    }
    ctx->pc = 0x27094Cu;
label_27094c:
    // 0x27094c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_270950:
    if (ctx->pc == 0x270950u) {
        ctx->pc = 0x270950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27094Cu;
        // 0x270950: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270954u;
        goto label_270954;
    }
    ctx->pc = 0x27094Cu;
    {
        const bool branch_taken_0x27094c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27094c) {
            ctx->pc = 0x270950u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27094Cu;
            // 0x270950: 0x3c04000f  lui         $a0, 0xF (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)15 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x270930u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_270930;
        }
    }
    ctx->pc = 0x270954u;
label_270954:
    // 0x270954: 0xc09c0b4  jal         func_2702D0
label_270958:
    if (ctx->pc == 0x270958u) {
        ctx->pc = 0x270958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270954u;
        // 0x270958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x27095Cu;
        goto label_27095c;
    }
    ctx->pc = 0x270954u;
    SET_GPR_U32(ctx, 31, 0x27095Cu);
    ctx->pc = 0x270958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270954u;
    // 0x270958: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2702D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2702D0u, 0x270954u, 0x27095Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27095Cu;
label_27095c:
    // 0x27095c: 0x8e430030  lw          $v1, 0x30($s2)
    ctx->pc = 0x27095cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_270960:
    // 0x270960: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x270960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_270964:
    // 0x270964: 0x8e42001c  lw          $v0, 0x1C($s2)
    ctx->pc = 0x270964u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_270968:
    // 0x270968: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x270968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_27096c:
    // 0x27096c: 0x40f809  jalr        $v0
label_270970:
    if (ctx->pc == 0x270970u) {
        ctx->pc = 0x270970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27096Cu;
        // 0x270970: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270974u;
        goto label_270974;
    }
    ctx->pc = 0x27096Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x270974u);
        ctx->pc = 0x270970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27096Cu;
        // 0x270970: 0xae430030  sw          $v1, 0x30($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27096Cu, 0x270974u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x270974u;
label_270974:
    // 0x270974: 0xc0432d4  jal         func_10CB50
label_270978:
    if (ctx->pc == 0x270978u) {
        ctx->pc = 0x27097Cu;
        goto label_27097c;
    }
    ctx->pc = 0x270974u;
    SET_GPR_U32(ctx, 31, 0x27097Cu);
    ctx->pc = 0x10CB50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CB50u, 0x270974u, 0x27097Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27097Cu;
label_27097c:
    // 0x27097c: 0xc097360  jal         func_25CD80
label_270980:
    if (ctx->pc == 0x270980u) {
        ctx->pc = 0x270980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27097Cu;
        // 0x270980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270984u;
        goto label_270984;
    }
    ctx->pc = 0x27097Cu;
    SET_GPR_U32(ctx, 31, 0x270984u);
    ctx->pc = 0x270980u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27097Cu;
    // 0x270980: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CD80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CD80u, 0x27097Cu, 0x270984u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270984u;
label_270984:
    // 0x270984: 0xc0432a8  jal         func_10CAA0
label_270988:
    if (ctx->pc == 0x270988u) {
        ctx->pc = 0x27098Cu;
        goto label_27098c;
    }
    ctx->pc = 0x270984u;
    SET_GPR_U32(ctx, 31, 0x27098Cu);
    ctx->pc = 0x10CAA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CAA0u, 0x270984u, 0x27098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27098Cu;
label_27098c:
    // 0x27098c: 0xdfbf0110  ld          $ra, 0x110($sp)
    ctx->pc = 0x27098cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_270990:
    // 0x270990: 0xdfb70100  ld          $s7, 0x100($sp)
    ctx->pc = 0x270990u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_270994:
    // 0x270994: 0xdfb600f0  ld          $s6, 0xF0($sp)
    ctx->pc = 0x270994u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_270998:
    // 0x270998: 0xdfb500e0  ld          $s5, 0xE0($sp)
    ctx->pc = 0x270998u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_27099c:
    // 0x27099c: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x27099cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2709a0:
    // 0x2709a0: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x2709a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2709a4:
    // 0x2709a4: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x2709a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2709a8:
    // 0x2709a8: 0xdfb100a0  ld          $s1, 0xA0($sp)
    ctx->pc = 0x2709a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2709ac:
    // 0x2709ac: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x2709acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2709b0:
    // 0x2709b0: 0x3e00008  jr          $ra
label_2709b4:
    if (ctx->pc == 0x2709B4u) {
        ctx->pc = 0x2709B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709B0u;
        // 0x2709b4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2709B8u;
        goto label_2709b8;
    }
    ctx->pc = 0x2709B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2709B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709B0u;
        // 0x2709b4: 0x27bd0120  addiu       $sp, $sp, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2709B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2709B8u;
label_2709b8:
    // 0x2709b8: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2709b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2709bc:
    // 0x2709bc: 0x240201fc  addiu       $v0, $zero, 0x1FC
    ctx->pc = 0x2709bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 508));
label_2709c0:
    // 0x2709c0: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x2709c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
label_2709c4:
    // 0x2709c4: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2709c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_2709c8:
    // 0x2709c8: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2709c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2709cc:
    // 0x2709cc: 0xffb400d0  sd          $s4, 0xD0($sp)
    ctx->pc = 0x2709ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 20));
label_2709d0:
    // 0x2709d0: 0xffb300c0  sd          $s3, 0xC0($sp)
    ctx->pc = 0x2709d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 19));
label_2709d4:
    // 0x2709d4: 0xffb200b0  sd          $s2, 0xB0($sp)
    ctx->pc = 0x2709d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 18));
label_2709d8:
    // 0x2709d8: 0x14c2000a  bne         $a2, $v0, . + 4 + (0xA << 2)
label_2709dc:
    if (ctx->pc == 0x2709DCu) {
        ctx->pc = 0x2709DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709D8u;
        // 0x2709dc: 0xffb100a0  sd          $s1, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2709E0u;
        goto label_2709e0;
    }
    ctx->pc = 0x2709D8u;
    {
        const bool branch_taken_0x2709d8 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x2709DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709D8u;
        // 0x2709dc: 0xffb100a0  sd          $s1, 0xA0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709d8) {
            ctx->pc = 0x270A04u;
            goto label_270a04;
        }
    }
    ctx->pc = 0x2709E0u;
label_2709e0:
    // 0x2709e0: 0x8c940048  lw          $s4, 0x48($a0)
    ctx->pc = 0x2709e0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_2709e4:
    // 0x2709e4: 0x12800007  beqz        $s4, . + 4 + (0x7 << 2)
label_2709e8:
    if (ctx->pc == 0x2709E8u) {
        ctx->pc = 0x2709E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709E4u;
        // 0x2709e8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2709ECu;
        goto label_2709ec;
    }
    ctx->pc = 0x2709E4u;
    {
        const bool branch_taken_0x2709e4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2709E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709E4u;
        // 0x2709e8: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709e4) {
            ctx->pc = 0x270A04u;
            goto label_270a04;
        }
    }
    ctx->pc = 0x2709ECu;
label_2709ec:
    // 0x2709ec: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2709ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2709f0:
    // 0x2709f0: 0xc0973ba  jal         func_25CEE8
label_2709f4:
    if (ctx->pc == 0x2709F4u) {
        ctx->pc = 0x2709F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709F0u;
        // 0x2709f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2709F8u;
        goto label_2709f8;
    }
    ctx->pc = 0x2709F0u;
    SET_GPR_U32(ctx, 31, 0x2709F8u);
    ctx->pc = 0x2709F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2709F0u;
    // 0x2709f4: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25CEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CEE8u, 0x2709F0u, 0x2709F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2709F8u;
label_2709f8:
    // 0x2709f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2709f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2709fc:
    // 0x2709fc: 0x6410003  bgez        $s2, . + 4 + (0x3 << 2)
label_270a00:
    if (ctx->pc == 0x270A00u) {
        ctx->pc = 0x270A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709FCu;
        // 0x270a00: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A04u;
        goto label_270a04;
    }
    ctx->pc = 0x2709FCu;
    {
        const bool branch_taken_0x2709fc = (GPR_S32(ctx, 18) >= 0);
        ctx->pc = 0x270A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2709FCu;
        // 0x270a00: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2709fc) {
            ctx->pc = 0x270A0Cu;
            goto label_270a0c;
        }
    }
    ctx->pc = 0x270A04u;
label_270a04:
    // 0x270a04: 0x1000002d  b           . + 4 + (0x2D << 2)
label_270a08:
    if (ctx->pc == 0x270A08u) {
        ctx->pc = 0x270A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A04u;
        // 0x270a08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A0Cu;
        goto label_270a0c;
    }
    ctx->pc = 0x270A04u;
    {
        const bool branch_taken_0x270a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x270A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A04u;
        // 0x270a08: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a04) {
            ctx->pc = 0x270ABCu;
            goto label_270abc;
        }
    }
    ctx->pc = 0x270A0Cu;
label_270a0c:
    // 0x270a0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270a0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270a10:
    // 0x270a10: 0x245398f0  addiu       $s3, $v0, -0x6710
    ctx->pc = 0x270a10u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940912));
label_270a14:
    // 0x270a14: 0xc099cf0  jal         func_2673C0
label_270a18:
    if (ctx->pc == 0x270A18u) {
        ctx->pc = 0x270A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A14u;
        // 0x270a18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A1Cu;
        goto label_270a1c;
    }
    ctx->pc = 0x270A14u;
    SET_GPR_U32(ctx, 31, 0x270A1Cu);
    ctx->pc = 0x270A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A14u;
    // 0x270a18: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2673C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2673C0u, 0x270A14u, 0x270A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A1Cu;
label_270a1c:
    // 0x270a1c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x270a1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_270a20:
    // 0x270a20: 0x6200023  bltz        $s1, . + 4 + (0x23 << 2)
label_270a24:
    if (ctx->pc == 0x270A24u) {
        ctx->pc = 0x270A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A20u;
        // 0x270a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A28u;
        goto label_270a28;
    }
    ctx->pc = 0x270A20u;
    {
        const bool branch_taken_0x270a20 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x270A24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A20u;
        // 0x270a24: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a20) {
            ctx->pc = 0x270AB0u;
            goto label_270ab0;
        }
    }
    ctx->pc = 0x270A28u;
label_270a28:
    // 0x270a28: 0xc09beb8  jal         func_26FAE0
label_270a2c:
    if (ctx->pc == 0x270A2Cu) {
        ctx->pc = 0x270A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A28u;
        // 0x270a2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A30u;
        goto label_270a30;
    }
    ctx->pc = 0x270A28u;
    SET_GPR_U32(ctx, 31, 0x270A30u);
    ctx->pc = 0x270A2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A28u;
    // 0x270a2c: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x26FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26FAE0u, 0x270A28u, 0x270A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A30u;
label_270a30:
    // 0x270a30: 0x440001f  bltz        $v0, . + 4 + (0x1F << 2)
label_270a34:
    if (ctx->pc == 0x270A34u) {
        ctx->pc = 0x270A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A30u;
        // 0x270a34: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A38u;
        goto label_270a38;
    }
    ctx->pc = 0x270A30u;
    {
        const bool branch_taken_0x270a30 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x270A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A30u;
        // 0x270a34: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x270a30) {
            ctx->pc = 0x270AB0u;
            goto label_270ab0;
        }
    }
    ctx->pc = 0x270A38u;
label_270a38:
    // 0x270a38: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x270a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_270a3c:
    // 0x270a3c: 0x24421a40  addiu       $v0, $v0, 0x1A40
    ctx->pc = 0x270a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6720));
label_270a40:
    // 0x270a40: 0x8fa70010  lw          $a3, 0x10($sp)
    ctx->pc = 0x270a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_270a44:
    // 0x270a44: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x270a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_270a48:
    // 0x270a48: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x270a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_270a4c:
    // 0x270a4c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x270a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_270a50:
    // 0x270a50: 0x24a51ba8  addiu       $a1, $a1, 0x1BA8
    ctx->pc = 0x270a50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7080));
label_270a54:
    // 0x270a54: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x270a54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_270a58:
    // 0x270a58: 0x2604010c  addiu       $a0, $s0, 0x10C
    ctx->pc = 0x270a58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 268));
label_270a5c:
    // 0x270a5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x270a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_270a60:
    // 0x270a60: 0xe53821  addu        $a3, $a3, $a1
    ctx->pc = 0x270a60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
label_270a64:
    // 0x270a64: 0x27a50014  addiu       $a1, $sp, 0x14
    ctx->pc = 0x270a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 20));
label_270a68:
    // 0x270a68: 0x24060050  addiu       $a2, $zero, 0x50
    ctx->pc = 0x270a68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_270a6c:
    // 0x270a6c: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x270a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_270a70:
    // 0x270a70: 0xc04a966  jal         func_12A598
label_270a74:
    if (ctx->pc == 0x270A74u) {
        ctx->pc = 0x270A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A70u;
        // 0x270a74: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A78u;
        goto label_270a78;
    }
    ctx->pc = 0x270A70u;
    SET_GPR_U32(ctx, 31, 0x270A78u);
    ctx->pc = 0x270A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A70u;
    // 0x270a74: 0xae020004  sw          $v0, 0x4($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x270A70u, 0x270A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A78u;
label_270a78:
    // 0x270a78: 0x2604015c  addiu       $a0, $s0, 0x15C
    ctx->pc = 0x270a78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 348));
label_270a7c:
    // 0x270a7c: 0x27a50064  addiu       $a1, $sp, 0x64
    ctx->pc = 0x270a7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
label_270a80:
    // 0x270a80: 0xc04a966  jal         func_12A598
label_270a84:
    if (ctx->pc == 0x270A84u) {
        ctx->pc = 0x270A84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A80u;
        // 0x270a84: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A88u;
        goto label_270a88;
    }
    ctx->pc = 0x270A80u;
    SET_GPR_U32(ctx, 31, 0x270A88u);
    ctx->pc = 0x270A84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A80u;
    // 0x270a84: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x270A80u, 0x270A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A88u;
label_270a88:
    // 0x270a88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270a8c:
    // 0x270a8c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x270a8cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270a90:
    // 0x270a90: 0xc099ee0  jal         func_267B80
label_270a94:
    if (ctx->pc == 0x270A94u) {
        ctx->pc = 0x270A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270A90u;
        // 0x270a94: 0x2606017c  addiu       $a2, $s0, 0x17C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 380));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270A98u;
        goto label_270a98;
    }
    ctx->pc = 0x270A90u;
    SET_GPR_U32(ctx, 31, 0x270A98u);
    ctx->pc = 0x270A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270A90u;
    // 0x270a94: 0x2606017c  addiu       $a2, $s0, 0x17C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 380));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267B80u, 0x270A90u, 0x270A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270A98u;
label_270a98:
    // 0x270a98: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x270a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_270a9c:
    // 0x270a9c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x270a9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_270aa0:
    // 0x270aa0: 0x2606000c  addiu       $a2, $s0, 0xC
    ctx->pc = 0x270aa0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_270aa4:
    // 0x270aa4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x270aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_270aa8:
    // 0x270aa8: 0xc099f08  jal         func_267C20
label_270aac:
    if (ctx->pc == 0x270AACu) {
        ctx->pc = 0x270AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AA8u;
        // 0x270aac: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270AB0u;
        goto label_270ab0;
    }
    ctx->pc = 0x270AA8u;
    SET_GPR_U32(ctx, 31, 0x270AB0u);
    ctx->pc = 0x270AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270AA8u;
    // 0x270aac: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267C20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267C20u, 0x270AA8u, 0x270AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270AB0u;
label_270ab0:
    // 0x270ab0: 0xc097c9e  jal         func_25F278
label_270ab4:
    if (ctx->pc == 0x270AB4u) {
        ctx->pc = 0x270AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AB0u;
        // 0x270ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270AB8u;
        goto label_270ab8;
    }
    ctx->pc = 0x270AB0u;
    SET_GPR_U32(ctx, 31, 0x270AB8u);
    ctx->pc = 0x270AB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x270AB0u;
    // 0x270ab4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F278u, 0x270AB0u, 0x270AB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x270AB8u;
label_270ab8:
    // 0x270ab8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x270ab8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_270abc:
    // 0x270abc: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x270abcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_270ac0:
    // 0x270ac0: 0xdfb400d0  ld          $s4, 0xD0($sp)
    ctx->pc = 0x270ac0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_270ac4:
    // 0x270ac4: 0xdfb300c0  ld          $s3, 0xC0($sp)
    ctx->pc = 0x270ac4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_270ac8:
    // 0x270ac8: 0xdfb200b0  ld          $s2, 0xB0($sp)
    ctx->pc = 0x270ac8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_270acc:
    // 0x270acc: 0xdfb100a0  ld          $s1, 0xA0($sp)
    ctx->pc = 0x270accu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_270ad0:
    // 0x270ad0: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x270ad0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_270ad4:
    // 0x270ad4: 0x3e00008  jr          $ra
label_270ad8:
    if (ctx->pc == 0x270AD8u) {
        ctx->pc = 0x270AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AD4u;
        // 0x270ad8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x270ADCu;
        goto label_270adc;
    }
    ctx->pc = 0x270AD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x270AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x270AD4u;
        // 0x270ad8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x270AD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x270ADCu;
label_270adc:
    // 0x270adc: 0x0  nop
    ctx->pc = 0x270adcu;
    // NOP
}
