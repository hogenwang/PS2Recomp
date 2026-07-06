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

// Function: sub_002D91F8
// Address: 0x2d91f8 - 0x2d9920
void sub_002D91F8_0x2d91f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D91F8_0x2d91f8");
#endif

    switch (ctx->pc) {
        case 0x2d91f8u: goto label_2d91f8;
        case 0x2d91fcu: goto label_2d91fc;
        case 0x2d9200u: goto label_2d9200;
        case 0x2d9204u: goto label_2d9204;
        case 0x2d9208u: goto label_2d9208;
        case 0x2d920cu: goto label_2d920c;
        case 0x2d9210u: goto label_2d9210;
        case 0x2d9214u: goto label_2d9214;
        case 0x2d9218u: goto label_2d9218;
        case 0x2d921cu: goto label_2d921c;
        case 0x2d9220u: goto label_2d9220;
        case 0x2d9224u: goto label_2d9224;
        case 0x2d9228u: goto label_2d9228;
        case 0x2d922cu: goto label_2d922c;
        case 0x2d9230u: goto label_2d9230;
        case 0x2d9234u: goto label_2d9234;
        case 0x2d9238u: goto label_2d9238;
        case 0x2d923cu: goto label_2d923c;
        case 0x2d9240u: goto label_2d9240;
        case 0x2d9244u: goto label_2d9244;
        case 0x2d9248u: goto label_2d9248;
        case 0x2d924cu: goto label_2d924c;
        case 0x2d9250u: goto label_2d9250;
        case 0x2d9254u: goto label_2d9254;
        case 0x2d9258u: goto label_2d9258;
        case 0x2d925cu: goto label_2d925c;
        case 0x2d9260u: goto label_2d9260;
        case 0x2d9264u: goto label_2d9264;
        case 0x2d9268u: goto label_2d9268;
        case 0x2d926cu: goto label_2d926c;
        case 0x2d9270u: goto label_2d9270;
        case 0x2d9274u: goto label_2d9274;
        case 0x2d9278u: goto label_2d9278;
        case 0x2d927cu: goto label_2d927c;
        case 0x2d9280u: goto label_2d9280;
        case 0x2d9284u: goto label_2d9284;
        case 0x2d9288u: goto label_2d9288;
        case 0x2d928cu: goto label_2d928c;
        case 0x2d9290u: goto label_2d9290;
        case 0x2d9294u: goto label_2d9294;
        case 0x2d9298u: goto label_2d9298;
        case 0x2d929cu: goto label_2d929c;
        case 0x2d92a0u: goto label_2d92a0;
        case 0x2d92a4u: goto label_2d92a4;
        case 0x2d92a8u: goto label_2d92a8;
        case 0x2d92acu: goto label_2d92ac;
        case 0x2d92b0u: goto label_2d92b0;
        case 0x2d92b4u: goto label_2d92b4;
        case 0x2d92b8u: goto label_2d92b8;
        case 0x2d92bcu: goto label_2d92bc;
        case 0x2d92c0u: goto label_2d92c0;
        case 0x2d92c4u: goto label_2d92c4;
        case 0x2d92c8u: goto label_2d92c8;
        case 0x2d92ccu: goto label_2d92cc;
        case 0x2d92d0u: goto label_2d92d0;
        case 0x2d92d4u: goto label_2d92d4;
        case 0x2d92d8u: goto label_2d92d8;
        case 0x2d92dcu: goto label_2d92dc;
        case 0x2d92e0u: goto label_2d92e0;
        case 0x2d92e4u: goto label_2d92e4;
        case 0x2d92e8u: goto label_2d92e8;
        case 0x2d92ecu: goto label_2d92ec;
        case 0x2d92f0u: goto label_2d92f0;
        case 0x2d92f4u: goto label_2d92f4;
        case 0x2d92f8u: goto label_2d92f8;
        case 0x2d92fcu: goto label_2d92fc;
        case 0x2d9300u: goto label_2d9300;
        case 0x2d9304u: goto label_2d9304;
        case 0x2d9308u: goto label_2d9308;
        case 0x2d930cu: goto label_2d930c;
        case 0x2d9310u: goto label_2d9310;
        case 0x2d9314u: goto label_2d9314;
        case 0x2d9318u: goto label_2d9318;
        case 0x2d931cu: goto label_2d931c;
        case 0x2d9320u: goto label_2d9320;
        case 0x2d9324u: goto label_2d9324;
        case 0x2d9328u: goto label_2d9328;
        case 0x2d932cu: goto label_2d932c;
        case 0x2d9330u: goto label_2d9330;
        case 0x2d9334u: goto label_2d9334;
        case 0x2d9338u: goto label_2d9338;
        case 0x2d933cu: goto label_2d933c;
        case 0x2d9340u: goto label_2d9340;
        case 0x2d9344u: goto label_2d9344;
        case 0x2d9348u: goto label_2d9348;
        case 0x2d934cu: goto label_2d934c;
        case 0x2d9350u: goto label_2d9350;
        case 0x2d9354u: goto label_2d9354;
        case 0x2d9358u: goto label_2d9358;
        case 0x2d935cu: goto label_2d935c;
        case 0x2d9360u: goto label_2d9360;
        case 0x2d9364u: goto label_2d9364;
        case 0x2d9368u: goto label_2d9368;
        case 0x2d936cu: goto label_2d936c;
        case 0x2d9370u: goto label_2d9370;
        case 0x2d9374u: goto label_2d9374;
        case 0x2d9378u: goto label_2d9378;
        case 0x2d937cu: goto label_2d937c;
        case 0x2d9380u: goto label_2d9380;
        case 0x2d9384u: goto label_2d9384;
        case 0x2d9388u: goto label_2d9388;
        case 0x2d938cu: goto label_2d938c;
        case 0x2d9390u: goto label_2d9390;
        case 0x2d9394u: goto label_2d9394;
        case 0x2d9398u: goto label_2d9398;
        case 0x2d939cu: goto label_2d939c;
        case 0x2d93a0u: goto label_2d93a0;
        case 0x2d93a4u: goto label_2d93a4;
        case 0x2d93a8u: goto label_2d93a8;
        case 0x2d93acu: goto label_2d93ac;
        case 0x2d93b0u: goto label_2d93b0;
        case 0x2d93b4u: goto label_2d93b4;
        case 0x2d93b8u: goto label_2d93b8;
        case 0x2d93bcu: goto label_2d93bc;
        case 0x2d93c0u: goto label_2d93c0;
        case 0x2d93c4u: goto label_2d93c4;
        case 0x2d93c8u: goto label_2d93c8;
        case 0x2d93ccu: goto label_2d93cc;
        case 0x2d93d0u: goto label_2d93d0;
        case 0x2d93d4u: goto label_2d93d4;
        case 0x2d93d8u: goto label_2d93d8;
        case 0x2d93dcu: goto label_2d93dc;
        case 0x2d93e0u: goto label_2d93e0;
        case 0x2d93e4u: goto label_2d93e4;
        case 0x2d93e8u: goto label_2d93e8;
        case 0x2d93ecu: goto label_2d93ec;
        case 0x2d93f0u: goto label_2d93f0;
        case 0x2d93f4u: goto label_2d93f4;
        case 0x2d93f8u: goto label_2d93f8;
        case 0x2d93fcu: goto label_2d93fc;
        case 0x2d9400u: goto label_2d9400;
        case 0x2d9404u: goto label_2d9404;
        case 0x2d9408u: goto label_2d9408;
        case 0x2d940cu: goto label_2d940c;
        case 0x2d9410u: goto label_2d9410;
        case 0x2d9414u: goto label_2d9414;
        case 0x2d9418u: goto label_2d9418;
        case 0x2d941cu: goto label_2d941c;
        case 0x2d9420u: goto label_2d9420;
        case 0x2d9424u: goto label_2d9424;
        case 0x2d9428u: goto label_2d9428;
        case 0x2d942cu: goto label_2d942c;
        case 0x2d9430u: goto label_2d9430;
        case 0x2d9434u: goto label_2d9434;
        case 0x2d9438u: goto label_2d9438;
        case 0x2d943cu: goto label_2d943c;
        case 0x2d9440u: goto label_2d9440;
        case 0x2d9444u: goto label_2d9444;
        case 0x2d9448u: goto label_2d9448;
        case 0x2d944cu: goto label_2d944c;
        case 0x2d9450u: goto label_2d9450;
        case 0x2d9454u: goto label_2d9454;
        case 0x2d9458u: goto label_2d9458;
        case 0x2d945cu: goto label_2d945c;
        case 0x2d9460u: goto label_2d9460;
        case 0x2d9464u: goto label_2d9464;
        case 0x2d9468u: goto label_2d9468;
        case 0x2d946cu: goto label_2d946c;
        case 0x2d9470u: goto label_2d9470;
        case 0x2d9474u: goto label_2d9474;
        case 0x2d9478u: goto label_2d9478;
        case 0x2d947cu: goto label_2d947c;
        case 0x2d9480u: goto label_2d9480;
        case 0x2d9484u: goto label_2d9484;
        case 0x2d9488u: goto label_2d9488;
        case 0x2d948cu: goto label_2d948c;
        case 0x2d9490u: goto label_2d9490;
        case 0x2d9494u: goto label_2d9494;
        case 0x2d9498u: goto label_2d9498;
        case 0x2d949cu: goto label_2d949c;
        case 0x2d94a0u: goto label_2d94a0;
        case 0x2d94a4u: goto label_2d94a4;
        case 0x2d94a8u: goto label_2d94a8;
        case 0x2d94acu: goto label_2d94ac;
        case 0x2d94b0u: goto label_2d94b0;
        case 0x2d94b4u: goto label_2d94b4;
        case 0x2d94b8u: goto label_2d94b8;
        case 0x2d94bcu: goto label_2d94bc;
        case 0x2d94c0u: goto label_2d94c0;
        case 0x2d94c4u: goto label_2d94c4;
        case 0x2d94c8u: goto label_2d94c8;
        case 0x2d94ccu: goto label_2d94cc;
        case 0x2d94d0u: goto label_2d94d0;
        case 0x2d94d4u: goto label_2d94d4;
        case 0x2d94d8u: goto label_2d94d8;
        case 0x2d94dcu: goto label_2d94dc;
        case 0x2d94e0u: goto label_2d94e0;
        case 0x2d94e4u: goto label_2d94e4;
        case 0x2d94e8u: goto label_2d94e8;
        case 0x2d94ecu: goto label_2d94ec;
        case 0x2d94f0u: goto label_2d94f0;
        case 0x2d94f4u: goto label_2d94f4;
        case 0x2d94f8u: goto label_2d94f8;
        case 0x2d94fcu: goto label_2d94fc;
        case 0x2d9500u: goto label_2d9500;
        case 0x2d9504u: goto label_2d9504;
        case 0x2d9508u: goto label_2d9508;
        case 0x2d950cu: goto label_2d950c;
        case 0x2d9510u: goto label_2d9510;
        case 0x2d9514u: goto label_2d9514;
        case 0x2d9518u: goto label_2d9518;
        case 0x2d951cu: goto label_2d951c;
        case 0x2d9520u: goto label_2d9520;
        case 0x2d9524u: goto label_2d9524;
        case 0x2d9528u: goto label_2d9528;
        case 0x2d952cu: goto label_2d952c;
        case 0x2d9530u: goto label_2d9530;
        case 0x2d9534u: goto label_2d9534;
        case 0x2d9538u: goto label_2d9538;
        case 0x2d953cu: goto label_2d953c;
        case 0x2d9540u: goto label_2d9540;
        case 0x2d9544u: goto label_2d9544;
        case 0x2d9548u: goto label_2d9548;
        case 0x2d954cu: goto label_2d954c;
        case 0x2d9550u: goto label_2d9550;
        case 0x2d9554u: goto label_2d9554;
        case 0x2d9558u: goto label_2d9558;
        case 0x2d955cu: goto label_2d955c;
        case 0x2d9560u: goto label_2d9560;
        case 0x2d9564u: goto label_2d9564;
        case 0x2d9568u: goto label_2d9568;
        case 0x2d956cu: goto label_2d956c;
        case 0x2d9570u: goto label_2d9570;
        case 0x2d9574u: goto label_2d9574;
        case 0x2d9578u: goto label_2d9578;
        case 0x2d957cu: goto label_2d957c;
        case 0x2d9580u: goto label_2d9580;
        case 0x2d9584u: goto label_2d9584;
        case 0x2d9588u: goto label_2d9588;
        case 0x2d958cu: goto label_2d958c;
        case 0x2d9590u: goto label_2d9590;
        case 0x2d9594u: goto label_2d9594;
        case 0x2d9598u: goto label_2d9598;
        case 0x2d959cu: goto label_2d959c;
        case 0x2d95a0u: goto label_2d95a0;
        case 0x2d95a4u: goto label_2d95a4;
        case 0x2d95a8u: goto label_2d95a8;
        case 0x2d95acu: goto label_2d95ac;
        case 0x2d95b0u: goto label_2d95b0;
        case 0x2d95b4u: goto label_2d95b4;
        case 0x2d95b8u: goto label_2d95b8;
        case 0x2d95bcu: goto label_2d95bc;
        case 0x2d95c0u: goto label_2d95c0;
        case 0x2d95c4u: goto label_2d95c4;
        case 0x2d95c8u: goto label_2d95c8;
        case 0x2d95ccu: goto label_2d95cc;
        case 0x2d95d0u: goto label_2d95d0;
        case 0x2d95d4u: goto label_2d95d4;
        case 0x2d95d8u: goto label_2d95d8;
        case 0x2d95dcu: goto label_2d95dc;
        case 0x2d95e0u: goto label_2d95e0;
        case 0x2d95e4u: goto label_2d95e4;
        case 0x2d95e8u: goto label_2d95e8;
        case 0x2d95ecu: goto label_2d95ec;
        case 0x2d95f0u: goto label_2d95f0;
        case 0x2d95f4u: goto label_2d95f4;
        case 0x2d95f8u: goto label_2d95f8;
        case 0x2d95fcu: goto label_2d95fc;
        case 0x2d9600u: goto label_2d9600;
        case 0x2d9604u: goto label_2d9604;
        case 0x2d9608u: goto label_2d9608;
        case 0x2d960cu: goto label_2d960c;
        case 0x2d9610u: goto label_2d9610;
        case 0x2d9614u: goto label_2d9614;
        case 0x2d9618u: goto label_2d9618;
        case 0x2d961cu: goto label_2d961c;
        case 0x2d9620u: goto label_2d9620;
        case 0x2d9624u: goto label_2d9624;
        case 0x2d9628u: goto label_2d9628;
        case 0x2d962cu: goto label_2d962c;
        case 0x2d9630u: goto label_2d9630;
        case 0x2d9634u: goto label_2d9634;
        case 0x2d9638u: goto label_2d9638;
        case 0x2d963cu: goto label_2d963c;
        case 0x2d9640u: goto label_2d9640;
        case 0x2d9644u: goto label_2d9644;
        case 0x2d9648u: goto label_2d9648;
        case 0x2d964cu: goto label_2d964c;
        case 0x2d9650u: goto label_2d9650;
        case 0x2d9654u: goto label_2d9654;
        case 0x2d9658u: goto label_2d9658;
        case 0x2d965cu: goto label_2d965c;
        case 0x2d9660u: goto label_2d9660;
        case 0x2d9664u: goto label_2d9664;
        case 0x2d9668u: goto label_2d9668;
        case 0x2d966cu: goto label_2d966c;
        case 0x2d9670u: goto label_2d9670;
        case 0x2d9674u: goto label_2d9674;
        case 0x2d9678u: goto label_2d9678;
        case 0x2d967cu: goto label_2d967c;
        case 0x2d9680u: goto label_2d9680;
        case 0x2d9684u: goto label_2d9684;
        case 0x2d9688u: goto label_2d9688;
        case 0x2d968cu: goto label_2d968c;
        case 0x2d9690u: goto label_2d9690;
        case 0x2d9694u: goto label_2d9694;
        case 0x2d9698u: goto label_2d9698;
        case 0x2d969cu: goto label_2d969c;
        case 0x2d96a0u: goto label_2d96a0;
        case 0x2d96a4u: goto label_2d96a4;
        case 0x2d96a8u: goto label_2d96a8;
        case 0x2d96acu: goto label_2d96ac;
        case 0x2d96b0u: goto label_2d96b0;
        case 0x2d96b4u: goto label_2d96b4;
        case 0x2d96b8u: goto label_2d96b8;
        case 0x2d96bcu: goto label_2d96bc;
        case 0x2d96c0u: goto label_2d96c0;
        case 0x2d96c4u: goto label_2d96c4;
        case 0x2d96c8u: goto label_2d96c8;
        case 0x2d96ccu: goto label_2d96cc;
        case 0x2d96d0u: goto label_2d96d0;
        case 0x2d96d4u: goto label_2d96d4;
        case 0x2d96d8u: goto label_2d96d8;
        case 0x2d96dcu: goto label_2d96dc;
        case 0x2d96e0u: goto label_2d96e0;
        case 0x2d96e4u: goto label_2d96e4;
        case 0x2d96e8u: goto label_2d96e8;
        case 0x2d96ecu: goto label_2d96ec;
        case 0x2d96f0u: goto label_2d96f0;
        case 0x2d96f4u: goto label_2d96f4;
        case 0x2d96f8u: goto label_2d96f8;
        case 0x2d96fcu: goto label_2d96fc;
        case 0x2d9700u: goto label_2d9700;
        case 0x2d9704u: goto label_2d9704;
        case 0x2d9708u: goto label_2d9708;
        case 0x2d970cu: goto label_2d970c;
        case 0x2d9710u: goto label_2d9710;
        case 0x2d9714u: goto label_2d9714;
        case 0x2d9718u: goto label_2d9718;
        case 0x2d971cu: goto label_2d971c;
        case 0x2d9720u: goto label_2d9720;
        case 0x2d9724u: goto label_2d9724;
        case 0x2d9728u: goto label_2d9728;
        case 0x2d972cu: goto label_2d972c;
        case 0x2d9730u: goto label_2d9730;
        case 0x2d9734u: goto label_2d9734;
        case 0x2d9738u: goto label_2d9738;
        case 0x2d973cu: goto label_2d973c;
        case 0x2d9740u: goto label_2d9740;
        case 0x2d9744u: goto label_2d9744;
        case 0x2d9748u: goto label_2d9748;
        case 0x2d974cu: goto label_2d974c;
        case 0x2d9750u: goto label_2d9750;
        case 0x2d9754u: goto label_2d9754;
        case 0x2d9758u: goto label_2d9758;
        case 0x2d975cu: goto label_2d975c;
        case 0x2d9760u: goto label_2d9760;
        case 0x2d9764u: goto label_2d9764;
        case 0x2d9768u: goto label_2d9768;
        case 0x2d976cu: goto label_2d976c;
        case 0x2d9770u: goto label_2d9770;
        case 0x2d9774u: goto label_2d9774;
        case 0x2d9778u: goto label_2d9778;
        case 0x2d977cu: goto label_2d977c;
        case 0x2d9780u: goto label_2d9780;
        case 0x2d9784u: goto label_2d9784;
        case 0x2d9788u: goto label_2d9788;
        case 0x2d978cu: goto label_2d978c;
        case 0x2d9790u: goto label_2d9790;
        case 0x2d9794u: goto label_2d9794;
        case 0x2d9798u: goto label_2d9798;
        case 0x2d979cu: goto label_2d979c;
        case 0x2d97a0u: goto label_2d97a0;
        case 0x2d97a4u: goto label_2d97a4;
        case 0x2d97a8u: goto label_2d97a8;
        case 0x2d97acu: goto label_2d97ac;
        case 0x2d97b0u: goto label_2d97b0;
        case 0x2d97b4u: goto label_2d97b4;
        case 0x2d97b8u: goto label_2d97b8;
        case 0x2d97bcu: goto label_2d97bc;
        case 0x2d97c0u: goto label_2d97c0;
        case 0x2d97c4u: goto label_2d97c4;
        case 0x2d97c8u: goto label_2d97c8;
        case 0x2d97ccu: goto label_2d97cc;
        case 0x2d97d0u: goto label_2d97d0;
        case 0x2d97d4u: goto label_2d97d4;
        case 0x2d97d8u: goto label_2d97d8;
        case 0x2d97dcu: goto label_2d97dc;
        case 0x2d97e0u: goto label_2d97e0;
        case 0x2d97e4u: goto label_2d97e4;
        case 0x2d97e8u: goto label_2d97e8;
        case 0x2d97ecu: goto label_2d97ec;
        case 0x2d97f0u: goto label_2d97f0;
        case 0x2d97f4u: goto label_2d97f4;
        case 0x2d97f8u: goto label_2d97f8;
        case 0x2d97fcu: goto label_2d97fc;
        case 0x2d9800u: goto label_2d9800;
        case 0x2d9804u: goto label_2d9804;
        case 0x2d9808u: goto label_2d9808;
        case 0x2d980cu: goto label_2d980c;
        case 0x2d9810u: goto label_2d9810;
        case 0x2d9814u: goto label_2d9814;
        case 0x2d9818u: goto label_2d9818;
        case 0x2d981cu: goto label_2d981c;
        case 0x2d9820u: goto label_2d9820;
        case 0x2d9824u: goto label_2d9824;
        case 0x2d9828u: goto label_2d9828;
        case 0x2d982cu: goto label_2d982c;
        case 0x2d9830u: goto label_2d9830;
        case 0x2d9834u: goto label_2d9834;
        case 0x2d9838u: goto label_2d9838;
        case 0x2d983cu: goto label_2d983c;
        case 0x2d9840u: goto label_2d9840;
        case 0x2d9844u: goto label_2d9844;
        case 0x2d9848u: goto label_2d9848;
        case 0x2d984cu: goto label_2d984c;
        case 0x2d9850u: goto label_2d9850;
        case 0x2d9854u: goto label_2d9854;
        case 0x2d9858u: goto label_2d9858;
        case 0x2d985cu: goto label_2d985c;
        case 0x2d9860u: goto label_2d9860;
        case 0x2d9864u: goto label_2d9864;
        case 0x2d9868u: goto label_2d9868;
        case 0x2d986cu: goto label_2d986c;
        case 0x2d9870u: goto label_2d9870;
        case 0x2d9874u: goto label_2d9874;
        case 0x2d9878u: goto label_2d9878;
        case 0x2d987cu: goto label_2d987c;
        case 0x2d9880u: goto label_2d9880;
        case 0x2d9884u: goto label_2d9884;
        case 0x2d9888u: goto label_2d9888;
        case 0x2d988cu: goto label_2d988c;
        case 0x2d9890u: goto label_2d9890;
        case 0x2d9894u: goto label_2d9894;
        case 0x2d9898u: goto label_2d9898;
        case 0x2d989cu: goto label_2d989c;
        case 0x2d98a0u: goto label_2d98a0;
        case 0x2d98a4u: goto label_2d98a4;
        case 0x2d98a8u: goto label_2d98a8;
        case 0x2d98acu: goto label_2d98ac;
        case 0x2d98b0u: goto label_2d98b0;
        case 0x2d98b4u: goto label_2d98b4;
        case 0x2d98b8u: goto label_2d98b8;
        case 0x2d98bcu: goto label_2d98bc;
        case 0x2d98c0u: goto label_2d98c0;
        case 0x2d98c4u: goto label_2d98c4;
        case 0x2d98c8u: goto label_2d98c8;
        case 0x2d98ccu: goto label_2d98cc;
        case 0x2d98d0u: goto label_2d98d0;
        case 0x2d98d4u: goto label_2d98d4;
        case 0x2d98d8u: goto label_2d98d8;
        case 0x2d98dcu: goto label_2d98dc;
        case 0x2d98e0u: goto label_2d98e0;
        case 0x2d98e4u: goto label_2d98e4;
        case 0x2d98e8u: goto label_2d98e8;
        case 0x2d98ecu: goto label_2d98ec;
        case 0x2d98f0u: goto label_2d98f0;
        case 0x2d98f4u: goto label_2d98f4;
        case 0x2d98f8u: goto label_2d98f8;
        case 0x2d98fcu: goto label_2d98fc;
        case 0x2d9900u: goto label_2d9900;
        case 0x2d9904u: goto label_2d9904;
        case 0x2d9908u: goto label_2d9908;
        case 0x2d990cu: goto label_2d990c;
        case 0x2d9910u: goto label_2d9910;
        case 0x2d9914u: goto label_2d9914;
        case 0x2d9918u: goto label_2d9918;
        case 0x2d991cu: goto label_2d991c;
        default: break;
    }

    ctx->pc = 0x2d91f8u;

label_2d91f8:
    // 0x2d91f8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d91f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d91fc:
    // 0x2d91fc: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d91fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2d9200:
    // 0x2d9200: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2d9200u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9204:
    // 0x2d9204: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2d9204u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9208:
    // 0x2d9208: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9208u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d920c:
    // 0x2d920c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d920cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9210:
    // 0x2d9210: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d9210u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9214:
    // 0x2d9214: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9218:
    // 0x2d9218: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9218u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d921c:
    // 0x2d921c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2d921cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2d9220:
    // 0x2d9220: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9220u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9224:
    // 0x2d9224: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2d9224u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9228:
    // 0x2d9228: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d9228u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d922c:
    // 0x2d922c: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d922cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9230:
    // 0x2d9230: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d9230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d9234:
    // 0x2d9234: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d9234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2d9238:
    // 0x2d9238: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d9238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2d923c:
    // 0x2d923c: 0xc0b6464  jal         func_2D9190
label_2d9240:
    if (ctx->pc == 0x2D9240u) {
        ctx->pc = 0x2D9240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D923Cu;
        // 0x2d9240: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9244u;
        goto label_2d9244;
    }
    ctx->pc = 0x2D923Cu;
    SET_GPR_U32(ctx, 31, 0x2D9244u);
    ctx->pc = 0x2D9240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D923Cu;
    // 0x2d9240: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9190u, 0x2D923Cu, 0x2D9244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9244u;
label_2d9244:
    // 0x2d9244: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d9244u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9248:
    // 0x2d9248: 0x128f02  srl         $s1, $s2, 28
    ctx->pc = 0x2d9248u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
label_2d924c:
    // 0x2d924c: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_2d9250:
    if (ctx->pc == 0x2D9250u) {
        ctx->pc = 0x2D9250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D924Cu;
        // 0x2d9250: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9254u;
        goto label_2d9254;
    }
    ctx->pc = 0x2D924Cu;
    {
        const bool branch_taken_0x2d924c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d924c) {
            ctx->pc = 0x2D9250u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D924Cu;
            // 0x2d9250: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D92A0u;
            goto label_2d92a0;
        }
    }
    ctx->pc = 0x2D9254u;
label_2d9254:
    // 0x2d9254: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d9254u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2d9258:
    // 0x2d9258: 0x245e9870  addiu       $fp, $v0, -0x6790
    ctx->pc = 0x2d9258u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940784));
label_2d925c:
    // 0x2d925c: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2d925cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2d9260:
    // 0x2d9260: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d9260u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d9264:
    // 0x2d9264: 0x721807  srav        $v1, $s2, $v1
    ctx->pc = 0x2d9264u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
label_2d9268:
    // 0x2d9268: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d9268u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d926c:
    // 0x2d926c: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2d926cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2d9270:
    // 0x2d9270: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d9270u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d9274:
    // 0x2d9274: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d9274u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d9278:
    // 0x2d9278: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d9278u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d927c:
    // 0x2d927c: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x2d927cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_2d9280:
    // 0x2d9280: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d9280u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d9284:
    // 0x2d9284: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d9288:
    // 0x2d9288: 0x40f809  jalr        $v0
label_2d928c:
    if (ctx->pc == 0x2D928Cu) {
        ctx->pc = 0x2D928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9288u;
        // 0x2d928c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9290u;
        goto label_2d9290;
    }
    ctx->pc = 0x2D9288u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9290u);
        ctx->pc = 0x2D928Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9288u;
        // 0x2d928c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9288u, 0x2D9290u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9290u;
label_2d9290:
    // 0x2d9290: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x2d9290u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9294:
    // 0x2d9294: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_2d9298:
    if (ctx->pc == 0x2D9298u) {
        ctx->pc = 0x2D9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9294u;
        // 0x2d9298: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D929Cu;
        goto label_2d929c;
    }
    ctx->pc = 0x2D9294u;
    {
        const bool branch_taken_0x2d9294 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9294u;
        // 0x2d9298: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9294) {
            ctx->pc = 0x2D9260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9260;
        }
    }
    ctx->pc = 0x2D929Cu;
label_2d929c:
    // 0x2d929c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d929cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d92a0:
    // 0x2d92a0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d92a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d92a4:
    // 0x2d92a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d92a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d92a8:
    // 0x2d92a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d92a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d92ac:
    // 0x2d92ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d92acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d92b0:
    // 0x2d92b0: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d92b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d92b4:
    // 0x2d92b4: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d92b4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d92b8:
    // 0x2d92b8: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d92b8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d92bc:
    // 0x2d92bc: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d92bcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d92c0:
    // 0x2d92c0: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d92c0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d92c4:
    // 0x2d92c4: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d92c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d92c8:
    // 0x2d92c8: 0x3e00008  jr          $ra
label_2d92cc:
    if (ctx->pc == 0x2D92CCu) {
        ctx->pc = 0x2D92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92C8u;
        // 0x2d92cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D92D0u;
        goto label_2d92d0;
    }
    ctx->pc = 0x2D92C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D92CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D92C8u;
        // 0x2d92cc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D92C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D92D0u;
label_2d92d0:
    // 0x2d92d0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d92d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d92d4:
    // 0x2d92d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d92d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d92d8:
    // 0x2d92d8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d92d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d92dc:
    // 0x2d92dc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d92dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d92e0:
    // 0x2d92e0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d92e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d92e4:
    // 0x2d92e4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d92e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d92e8:
    // 0x2d92e8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d92e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d92ec:
    // 0x2d92ec: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d92ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d92f0:
    // 0x2d92f0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d92f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d92f4:
    // 0x2d92f4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d92f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d92f8:
    // 0x2d92f8: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d92f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d92fc:
    // 0x2d92fc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d92fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9300:
    // 0x2d9300: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d9300u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9304:
    // 0x2d9304: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2d9308:
    if (ctx->pc == 0x2D9308u) {
        ctx->pc = 0x2D9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9304u;
        // 0x2d9308: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D930Cu;
        goto label_2d930c;
    }
    ctx->pc = 0x2D9304u;
    {
        const bool branch_taken_0x2d9304 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9304u;
        // 0x2d9308: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9304) {
            ctx->pc = 0x2D9348u;
            goto label_2d9348;
        }
    }
    ctx->pc = 0x2D930Cu;
label_2d930c:
    // 0x2d930c: 0x3c1209f8  lui         $s2, 0x9F8
    ctx->pc = 0x2d930cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2552 << 16));
label_2d9310:
    // 0x2d9310: 0x3652ed17  ori         $s2, $s2, 0xED17
    ctx->pc = 0x2d9310u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)60695);
label_2d9314:
    // 0x2d9314: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x2d9314u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2d9318:
    // 0x2d9318: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d9318u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d931c:
    // 0x2d931c: 0xc0b6454  jal         func_2D9150
label_2d9320:
    if (ctx->pc == 0x2D9320u) {
        ctx->pc = 0x2D9320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D931Cu;
        // 0x2d9320: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9324u;
        goto label_2d9324;
    }
    ctx->pc = 0x2D931Cu;
    SET_GPR_U32(ctx, 31, 0x2D9324u);
    ctx->pc = 0x2D9320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D931Cu;
    // 0x2d9320: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9150u, 0x2D931Cu, 0x2D9324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9324u;
label_2d9324:
    // 0x2d9324: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_2d9328:
    if (ctx->pc == 0x2D9328u) {
        ctx->pc = 0x2D9328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9324u;
        // 0x2d9328: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D932Cu;
        goto label_2d932c;
    }
    ctx->pc = 0x2D9324u;
    {
        const bool branch_taken_0x2d9324 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9324) {
            ctx->pc = 0x2D9328u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9324u;
            // 0x2d9328: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D933Cu;
            goto label_2d933c;
        }
    }
    ctx->pc = 0x2D932Cu;
label_2d932c:
    // 0x2d932c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d932cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9330:
    // 0x2d9330: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x2d9330u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_2d9334:
    // 0x2d9334: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9334u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d9338:
    // 0x2d9338: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9338u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d933c:
    // 0x2d933c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d933cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9340:
    // 0x2d9340: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2d9344:
    if (ctx->pc == 0x2D9344u) {
        ctx->pc = 0x2D9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9340u;
        // 0x2d9344: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9348u;
        goto label_2d9348;
    }
    ctx->pc = 0x2D9340u;
    {
        const bool branch_taken_0x2d9340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9340u;
        // 0x2d9344: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9340) {
            ctx->pc = 0x2D9318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9318;
        }
    }
    ctx->pc = 0x2D9348u;
label_2d9348:
    // 0x2d9348: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9348u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d934c:
    // 0x2d934c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d934cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9350:
    // 0x2d9350: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9350u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9354:
    // 0x2d9354: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9354u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9358:
    // 0x2d9358: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d9358u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d935c:
    // 0x2d935c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d935cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9360:
    // 0x2d9360: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d9360u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9364:
    // 0x2d9364: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d9364u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9368:
    // 0x2d9368: 0x3e00008  jr          $ra
label_2d936c:
    if (ctx->pc == 0x2D936Cu) {
        ctx->pc = 0x2D936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9368u;
        // 0x2d936c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9370u;
        goto label_2d9370;
    }
    ctx->pc = 0x2D9368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9368u;
        // 0x2d936c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9370u;
label_2d9370:
    // 0x2d9370: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9370u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d9374:
    // 0x2d9374: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9378:
    // 0x2d9378: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9378u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d937c:
    // 0x2d937c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9380:
    // 0x2d9380: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9380u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9384:
    // 0x2d9384: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9384u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9388:
    // 0x2d9388: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9388u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d938c:
    // 0x2d938c: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d938cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9390:
    // 0x2d9390: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d9390u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9394:
    // 0x2d9394: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d9394u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9398:
    // 0x2d9398: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d9398u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d939c:
    // 0x2d939c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d939cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d93a0:
    // 0x2d93a0: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d93a0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d93a4:
    // 0x2d93a4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2d93a8:
    if (ctx->pc == 0x2D93A8u) {
        ctx->pc = 0x2D93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93A4u;
        // 0x2d93a8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93ACu;
        goto label_2d93ac;
    }
    ctx->pc = 0x2D93A4u;
    {
        const bool branch_taken_0x2d93a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D93A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93A4u;
        // 0x2d93a8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93a4) {
            ctx->pc = 0x2D93E8u;
            goto label_2d93e8;
        }
    }
    ctx->pc = 0x2D93ACu;
label_2d93ac:
    // 0x2d93ac: 0x3c12a951  lui         $s2, 0xA951
    ctx->pc = 0x2d93acu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43345 << 16));
label_2d93b0:
    // 0x2d93b0: 0x365228c3  ori         $s2, $s2, 0x28C3
    ctx->pc = 0x2d93b0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)10435);
label_2d93b4:
    // 0x2d93b4: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x2d93b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2d93b8:
    // 0x2d93b8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d93b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d93bc:
    // 0x2d93bc: 0xc0b6454  jal         func_2D9150
label_2d93c0:
    if (ctx->pc == 0x2D93C0u) {
        ctx->pc = 0x2D93C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93BCu;
        // 0x2d93c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93C4u;
        goto label_2d93c4;
    }
    ctx->pc = 0x2D93BCu;
    SET_GPR_U32(ctx, 31, 0x2D93C4u);
    ctx->pc = 0x2D93C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D93BCu;
    // 0x2d93c0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9150u, 0x2D93BCu, 0x2D93C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D93C4u;
label_2d93c4:
    // 0x2d93c4: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_2d93c8:
    if (ctx->pc == 0x2D93C8u) {
        ctx->pc = 0x2D93C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93C4u;
        // 0x2d93c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93CCu;
        goto label_2d93cc;
    }
    ctx->pc = 0x2D93C4u;
    {
        const bool branch_taken_0x2d93c4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d93c4) {
            ctx->pc = 0x2D93C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D93C4u;
            // 0x2d93c8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D93DCu;
            goto label_2d93dc;
        }
    }
    ctx->pc = 0x2D93CCu;
label_2d93cc:
    // 0x2d93cc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d93ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d93d0:
    // 0x2d93d0: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x2d93d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_2d93d4:
    // 0x2d93d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d93d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d93d8:
    // 0x2d93d8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d93d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d93dc:
    // 0x2d93dc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d93dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d93e0:
    // 0x2d93e0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2d93e4:
    if (ctx->pc == 0x2D93E4u) {
        ctx->pc = 0x2D93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93E0u;
        // 0x2d93e4: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D93E8u;
        goto label_2d93e8;
    }
    ctx->pc = 0x2D93E0u;
    {
        const bool branch_taken_0x2d93e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D93E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D93E0u;
        // 0x2d93e4: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d93e0) {
            ctx->pc = 0x2D93B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d93b8;
        }
    }
    ctx->pc = 0x2D93E8u;
label_2d93e8:
    // 0x2d93e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d93e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d93ec:
    // 0x2d93ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d93ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d93f0:
    // 0x2d93f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d93f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d93f4:
    // 0x2d93f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d93f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d93f8:
    // 0x2d93f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d93f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d93fc:
    // 0x2d93fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d93fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9400:
    // 0x2d9400: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d9400u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9404:
    // 0x2d9404: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d9404u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9408:
    // 0x2d9408: 0x3e00008  jr          $ra
label_2d940c:
    if (ctx->pc == 0x2D940Cu) {
        ctx->pc = 0x2D940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9408u;
        // 0x2d940c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9410u;
        goto label_2d9410;
    }
    ctx->pc = 0x2D9408u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D940Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9408u;
        // 0x2d940c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9408u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9410u;
label_2d9410:
    // 0x2d9410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d9414:
    // 0x2d9414: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9418:
    // 0x2d9418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d941c:
    // 0x2d941c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d941cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9420:
    // 0x2d9420: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9420u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9424:
    // 0x2d9424: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9424u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9428:
    // 0x2d9428: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d942c:
    // 0x2d942c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d942cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9430:
    // 0x2d9430: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d9430u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9434:
    // 0x2d9434: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9438:
    // 0x2d9438: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d9438u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d943c:
    // 0x2d943c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d943cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9440:
    // 0x2d9440: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d9440u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9444:
    // 0x2d9444: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2d9448:
    if (ctx->pc == 0x2D9448u) {
        ctx->pc = 0x2D9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9444u;
        // 0x2d9448: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D944Cu;
        goto label_2d944c;
    }
    ctx->pc = 0x2D9444u;
    {
        const bool branch_taken_0x2d9444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9444u;
        // 0x2d9448: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9444) {
            ctx->pc = 0x2D9494u;
            goto label_2d9494;
        }
    }
    ctx->pc = 0x2D944Cu;
label_2d944c:
    // 0x2d944c: 0x2415e000  addiu       $s5, $zero, -0x2000
    ctx->pc = 0x2d944cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
label_2d9450:
    // 0x2d9450: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x2d9450u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2d9454:
    // 0x2d9454: 0x0  nop
    ctx->pc = 0x2d9454u;
    // NOP
label_2d9458:
    // 0x2d9458: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d9458u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d945c:
    // 0x2d945c: 0xc0b6454  jal         func_2D9150
label_2d9460:
    if (ctx->pc == 0x2D9460u) {
        ctx->pc = 0x2D9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D945Cu;
        // 0x2d9460: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9464u;
        goto label_2d9464;
    }
    ctx->pc = 0x2D945Cu;
    SET_GPR_U32(ctx, 31, 0x2D9464u);
    ctx->pc = 0x2D9460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D945Cu;
    // 0x2d9460: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9150u, 0x2D945Cu, 0x2D9464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9464u;
label_2d9464:
    // 0x2d9464: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_2d9468:
    if (ctx->pc == 0x2D9468u) {
        ctx->pc = 0x2D9468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9464u;
        // 0x2d9468: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D946Cu;
        goto label_2d946c;
    }
    ctx->pc = 0x2D9464u;
    {
        const bool branch_taken_0x2d9464 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9464) {
            ctx->pc = 0x2D9468u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9464u;
            // 0x2d9468: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9488u;
            goto label_2d9488;
        }
    }
    ctx->pc = 0x2D946Cu;
label_2d946c:
    // 0x2d946c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d946cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9470:
    // 0x2d9470: 0x31340  sll         $v0, $v1, 13
    ctx->pc = 0x2d9470u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
label_2d9474:
    // 0x2d9474: 0x31cc2  srl         $v1, $v1, 19
    ctx->pc = 0x2d9474u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 19));
label_2d9478:
    // 0x2d9478: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2d9478u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_2d947c:
    // 0x2d947c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d947cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2d9480:
    // 0x2d9480: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9480u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d9484:
    // 0x2d9484: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9484u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d9488:
    // 0x2d9488: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9488u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d948c:
    // 0x2d948c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_2d9490:
    if (ctx->pc == 0x2D9490u) {
        ctx->pc = 0x2D9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D948Cu;
        // 0x2d9490: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9494u;
        goto label_2d9494;
    }
    ctx->pc = 0x2D948Cu;
    {
        const bool branch_taken_0x2d948c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D948Cu;
        // 0x2d9490: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d948c) {
            ctx->pc = 0x2D9458u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9458;
        }
    }
    ctx->pc = 0x2D9494u;
label_2d9494:
    // 0x2d9494: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9494u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9498:
    // 0x2d9498: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9498u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d949c:
    // 0x2d949c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d949cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d94a0:
    // 0x2d94a0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d94a0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d94a4:
    // 0x2d94a4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d94a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d94a8:
    // 0x2d94a8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d94a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d94ac:
    // 0x2d94ac: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d94acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d94b0:
    // 0x2d94b0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d94b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d94b4:
    // 0x2d94b4: 0x3e00008  jr          $ra
label_2d94b8:
    if (ctx->pc == 0x2D94B8u) {
        ctx->pc = 0x2D94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94B4u;
        // 0x2d94b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D94BCu;
        goto label_2d94bc;
    }
    ctx->pc = 0x2D94B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D94B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94B4u;
        // 0x2d94b8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D94B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D94BCu;
label_2d94bc:
    // 0x2d94bc: 0x0  nop
    ctx->pc = 0x2d94bcu;
    // NOP
label_2d94c0:
    // 0x2d94c0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d94c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d94c4:
    // 0x2d94c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d94c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d94c8:
    // 0x2d94c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d94c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d94cc:
    // 0x2d94cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d94ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d94d0:
    // 0x2d94d0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d94d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d94d4:
    // 0x2d94d4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d94d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d94d8:
    // 0x2d94d8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d94d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d94dc:
    // 0x2d94dc: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d94dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d94e0:
    // 0x2d94e0: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d94e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d94e4:
    // 0x2d94e4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d94e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d94e8:
    // 0x2d94e8: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d94e8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d94ec:
    // 0x2d94ec: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d94ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d94f0:
    // 0x2d94f0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d94f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d94f4:
    // 0x2d94f4: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2d94f8:
    if (ctx->pc == 0x2D94F8u) {
        ctx->pc = 0x2D94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94F4u;
        // 0x2d94f8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D94FCu;
        goto label_2d94fc;
    }
    ctx->pc = 0x2D94F4u;
    {
        const bool branch_taken_0x2d94f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D94F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D94F4u;
        // 0x2d94f8: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d94f4) {
            ctx->pc = 0x2D9544u;
            goto label_2d9544;
        }
    }
    ctx->pc = 0x2D94FCu;
label_2d94fc:
    // 0x2d94fc: 0x2415ff00  addiu       $s5, $zero, -0x100
    ctx->pc = 0x2d94fcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_2d9500:
    // 0x2d9500: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x2d9500u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2d9504:
    // 0x2d9504: 0x0  nop
    ctx->pc = 0x2d9504u;
    // NOP
label_2d9508:
    // 0x2d9508: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d9508u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d950c:
    // 0x2d950c: 0xc0b6454  jal         func_2D9150
label_2d9510:
    if (ctx->pc == 0x2D9510u) {
        ctx->pc = 0x2D9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D950Cu;
        // 0x2d9510: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9514u;
        goto label_2d9514;
    }
    ctx->pc = 0x2D950Cu;
    SET_GPR_U32(ctx, 31, 0x2D9514u);
    ctx->pc = 0x2D9510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D950Cu;
    // 0x2d9510: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9150u, 0x2D950Cu, 0x2D9514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9514u;
label_2d9514:
    // 0x2d9514: 0x58400008  blezl       $v0, . + 4 + (0x8 << 2)
label_2d9518:
    if (ctx->pc == 0x2D9518u) {
        ctx->pc = 0x2D9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9514u;
        // 0x2d9518: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D951Cu;
        goto label_2d951c;
    }
    ctx->pc = 0x2D9514u;
    {
        const bool branch_taken_0x2d9514 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9514) {
            ctx->pc = 0x2D9518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9514u;
            // 0x2d9518: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D9538u;
            goto label_2d9538;
        }
    }
    ctx->pc = 0x2D951Cu;
label_2d951c:
    // 0x2d951c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d951cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9520:
    // 0x2d9520: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x2d9520u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2d9524:
    // 0x2d9524: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x2d9524u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
label_2d9528:
    // 0x2d9528: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x2d9528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_2d952c:
    // 0x2d952c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d952cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2d9530:
    // 0x2d9530: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9530u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d9534:
    // 0x2d9534: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9534u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d9538:
    // 0x2d9538: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9538u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d953c:
    // 0x2d953c: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_2d9540:
    if (ctx->pc == 0x2D9540u) {
        ctx->pc = 0x2D9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D953Cu;
        // 0x2d9540: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9544u;
        goto label_2d9544;
    }
    ctx->pc = 0x2D953Cu;
    {
        const bool branch_taken_0x2d953c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D953Cu;
        // 0x2d9540: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d953c) {
            ctx->pc = 0x2D9508u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9508;
        }
    }
    ctx->pc = 0x2D9544u;
label_2d9544:
    // 0x2d9544: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9544u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9548:
    // 0x2d9548: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9548u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d954c:
    // 0x2d954c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d954cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9550:
    // 0x2d9550: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9550u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9554:
    // 0x2d9554: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d9554u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9558:
    // 0x2d9558: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d9558u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d955c:
    // 0x2d955c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d955cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9560:
    // 0x2d9560: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d9560u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9564:
    // 0x2d9564: 0x3e00008  jr          $ra
label_2d9568:
    if (ctx->pc == 0x2D9568u) {
        ctx->pc = 0x2D9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9564u;
        // 0x2d9568: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D956Cu;
        goto label_2d956c;
    }
    ctx->pc = 0x2D9564u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9564u;
        // 0x2d9568: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9564u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D956Cu;
label_2d956c:
    // 0x2d956c: 0x0  nop
    ctx->pc = 0x2d956cu;
    // NOP
label_2d9570:
    // 0x2d9570: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9570u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d9574:
    // 0x2d9574: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9578:
    // 0x2d9578: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9578u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d957c:
    // 0x2d957c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d957cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9580:
    // 0x2d9580: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9580u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9584:
    // 0x2d9584: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9588:
    // 0x2d9588: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9588u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d958c:
    // 0x2d958c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9590:
    // 0x2d9590: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d9590u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9594:
    // 0x2d9594: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9594u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9598:
    // 0x2d9598: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d9598u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d959c:
    // 0x2d959c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d959cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d95a0:
    // 0x2d95a0: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d95a0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d95a4:
    // 0x2d95a4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d95a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d95a8:
    // 0x2d95a8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2d95ac:
    if (ctx->pc == 0x2D95ACu) {
        ctx->pc = 0x2D95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95A8u;
        // 0x2d95ac: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D95B0u;
        goto label_2d95b0;
    }
    ctx->pc = 0x2D95A8u;
    {
        const bool branch_taken_0x2d95a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95A8u;
        // 0x2d95ac: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d95a8) {
            ctx->pc = 0x2D9618u;
            goto label_2d9618;
        }
    }
    ctx->pc = 0x2D95B0u;
label_2d95b0:
    // 0x2d95b0: 0x3c1600ff  lui         $s6, 0xFF
    ctx->pc = 0x2d95b0u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)255 << 16));
label_2d95b4:
    // 0x2d95b4: 0x3c15ff00  lui         $s5, 0xFF00
    ctx->pc = 0x2d95b4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65280 << 16));
label_2d95b8:
    // 0x2d95b8: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x2d95b8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2d95bc:
    // 0x2d95bc: 0x0  nop
    ctx->pc = 0x2d95bcu;
    // NOP
label_2d95c0:
    // 0x2d95c0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d95c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d95c4:
    // 0x2d95c4: 0xc0b6454  jal         func_2D9150
label_2d95c8:
    if (ctx->pc == 0x2D95C8u) {
        ctx->pc = 0x2D95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95C4u;
        // 0x2d95c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D95CCu;
        goto label_2d95cc;
    }
    ctx->pc = 0x2D95C4u;
    SET_GPR_U32(ctx, 31, 0x2D95CCu);
    ctx->pc = 0x2D95C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D95C4u;
    // 0x2d95c8: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9150u, 0x2D95C4u, 0x2D95CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D95CCu;
label_2d95cc:
    // 0x2d95cc: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
label_2d95d0:
    if (ctx->pc == 0x2D95D0u) {
        ctx->pc = 0x2D95D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D95CCu;
        // 0x2d95d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D95D4u;
        goto label_2d95d4;
    }
    ctx->pc = 0x2D95CCu;
    {
        const bool branch_taken_0x2d95cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d95cc) {
            ctx->pc = 0x2D95D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D95CCu;
            // 0x2d95d0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D960Cu;
            goto label_2d960c;
        }
    }
    ctx->pc = 0x2D95D4u;
label_2d95d4:
    // 0x2d95d4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d95d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d95d8:
    // 0x2d95d8: 0x31400  sll         $v0, $v1, 16
    ctx->pc = 0x2d95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2d95dc:
    // 0x2d95dc: 0x32203  sra         $a0, $v1, 8
    ctx->pc = 0x2d95dcu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 8));
label_2d95e0:
    // 0x2d95e0: 0x32a00  sll         $a1, $v1, 8
    ctx->pc = 0x2d95e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2d95e4:
    // 0x2d95e4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2d95e4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2d95e8:
    // 0x2d95e8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2d95e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_2d95ec:
    // 0x2d95ec: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2d95ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2d95f0:
    // 0x2d95f0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d95f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2d95f4:
    // 0x2d95f4: 0xb52824  and         $a1, $a1, $s5
    ctx->pc = 0x2d95f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
label_2d95f8:
    // 0x2d95f8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2d95f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2d95fc:
    // 0x2d95fc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d95fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_2d9600:
    // 0x2d9600: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d9600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2d9604:
    // 0x2d9604: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9604u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d9608:
    // 0x2d9608: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9608u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d960c:
    // 0x2d960c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d960cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9610:
    // 0x2d9610: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_2d9614:
    if (ctx->pc == 0x2D9614u) {
        ctx->pc = 0x2D9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9610u;
        // 0x2d9614: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9618u;
        goto label_2d9618;
    }
    ctx->pc = 0x2D9610u;
    {
        const bool branch_taken_0x2d9610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9610u;
        // 0x2d9614: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9610) {
            ctx->pc = 0x2D95C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d95c0;
        }
    }
    ctx->pc = 0x2D9618u;
label_2d9618:
    // 0x2d9618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d961c:
    // 0x2d961c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d961cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9620:
    // 0x2d9620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9624:
    // 0x2d9624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9628:
    // 0x2d9628: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d9628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d962c:
    // 0x2d962c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d962cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9630:
    // 0x2d9630: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d9630u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9634:
    // 0x2d9634: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d9634u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9638:
    // 0x2d9638: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d9638u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d963c:
    // 0x2d963c: 0x3e00008  jr          $ra
label_2d9640:
    if (ctx->pc == 0x2D9640u) {
        ctx->pc = 0x2D9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D963Cu;
        // 0x2d9640: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9644u;
        goto label_2d9644;
    }
    ctx->pc = 0x2D963Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D963Cu;
        // 0x2d9640: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D963Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9644u;
label_2d9644:
    // 0x2d9644: 0x0  nop
    ctx->pc = 0x2d9644u;
    // NOP
label_2d9648:
    // 0x2d9648: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9648u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d964c:
    // 0x2d964c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d964cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9650:
    // 0x2d9650: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9650u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9654:
    // 0x2d9654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9658:
    // 0x2d9658: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9658u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d965c:
    // 0x2d965c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d965cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9660:
    // 0x2d9660: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9660u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9664:
    // 0x2d9664: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9668:
    // 0x2d9668: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d9668u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d966c:
    // 0x2d966c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9670:
    // 0x2d9670: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d9670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9674:
    // 0x2d9674: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9678:
    // 0x2d9678: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d9678u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d967c:
    // 0x2d967c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d967cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d9680:
    // 0x2d9680: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2d9684:
    if (ctx->pc == 0x2D9684u) {
        ctx->pc = 0x2D9684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9680u;
        // 0x2d9684: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9688u;
        goto label_2d9688;
    }
    ctx->pc = 0x2D9680u;
    {
        const bool branch_taken_0x2d9680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9680u;
        // 0x2d9684: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9680) {
            ctx->pc = 0x2D96D8u;
            goto label_2d96d8;
        }
    }
    ctx->pc = 0x2D9688u;
label_2d9688:
    // 0x2d9688: 0x3c1209f8  lui         $s2, 0x9F8
    ctx->pc = 0x2d9688u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2552 << 16));
label_2d968c:
    // 0x2d968c: 0x2416e000  addiu       $s6, $zero, -0x2000
    ctx->pc = 0x2d968cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
label_2d9690:
    // 0x2d9690: 0x3652ed17  ori         $s2, $s2, 0xED17
    ctx->pc = 0x2d9690u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)60695);
label_2d9694:
    // 0x2d9694: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x2d9694u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2d9698:
    // 0x2d9698: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d9698u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d969c:
    // 0x2d969c: 0xc0b6454  jal         func_2D9150
label_2d96a0:
    if (ctx->pc == 0x2D96A0u) {
        ctx->pc = 0x2D96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D969Cu;
        // 0x2d96a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D96A4u;
        goto label_2d96a4;
    }
    ctx->pc = 0x2D969Cu;
    SET_GPR_U32(ctx, 31, 0x2D96A4u);
    ctx->pc = 0x2D96A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D969Cu;
    // 0x2d96a0: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9150u, 0x2D969Cu, 0x2D96A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D96A4u;
label_2d96a4:
    // 0x2d96a4: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
label_2d96a8:
    if (ctx->pc == 0x2D96A8u) {
        ctx->pc = 0x2D96A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96A4u;
        // 0x2d96a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D96ACu;
        goto label_2d96ac;
    }
    ctx->pc = 0x2D96A4u;
    {
        const bool branch_taken_0x2d96a4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d96a4) {
            ctx->pc = 0x2D96A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D96A4u;
            // 0x2d96a8: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D96CCu;
            goto label_2d96cc;
        }
    }
    ctx->pc = 0x2D96ACu;
label_2d96ac:
    // 0x2d96ac: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d96acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d96b0:
    // 0x2d96b0: 0x31340  sll         $v0, $v1, 13
    ctx->pc = 0x2d96b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 13));
label_2d96b4:
    // 0x2d96b4: 0x31cc2  srl         $v1, $v1, 19
    ctx->pc = 0x2d96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 19));
label_2d96b8:
    // 0x2d96b8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2d96b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_2d96bc:
    // 0x2d96bc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d96bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2d96c0:
    // 0x2d96c0: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x2d96c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_2d96c4:
    // 0x2d96c4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d96c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d96c8:
    // 0x2d96c8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d96c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d96cc:
    // 0x2d96cc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d96ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d96d0:
    // 0x2d96d0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_2d96d4:
    if (ctx->pc == 0x2D96D4u) {
        ctx->pc = 0x2D96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96D0u;
        // 0x2d96d4: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D96D8u;
        goto label_2d96d8;
    }
    ctx->pc = 0x2D96D0u;
    {
        const bool branch_taken_0x2d96d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D96D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96D0u;
        // 0x2d96d4: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d96d0) {
            ctx->pc = 0x2D9698u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9698;
        }
    }
    ctx->pc = 0x2D96D8u;
label_2d96d8:
    // 0x2d96d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d96d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d96dc:
    // 0x2d96dc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d96dcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d96e0:
    // 0x2d96e0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d96e0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d96e4:
    // 0x2d96e4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d96e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d96e8:
    // 0x2d96e8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d96e8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d96ec:
    // 0x2d96ec: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d96ecu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d96f0:
    // 0x2d96f0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d96f0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d96f4:
    // 0x2d96f4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d96f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d96f8:
    // 0x2d96f8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d96f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d96fc:
    // 0x2d96fc: 0x3e00008  jr          $ra
label_2d9700:
    if (ctx->pc == 0x2D9700u) {
        ctx->pc = 0x2D9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96FCu;
        // 0x2d9700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9704u;
        goto label_2d9704;
    }
    ctx->pc = 0x2D96FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D96FCu;
        // 0x2d9700: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D96FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9704u;
label_2d9704:
    // 0x2d9704: 0x0  nop
    ctx->pc = 0x2d9704u;
    // NOP
label_2d9708:
    // 0x2d9708: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d9708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d970c:
    // 0x2d970c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d970cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9710:
    // 0x2d9710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9714:
    // 0x2d9714: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9718:
    // 0x2d9718: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9718u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d971c:
    // 0x2d971c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d971cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9720:
    // 0x2d9720: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9724:
    // 0x2d9724: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9728:
    // 0x2d9728: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d9728u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d972c:
    // 0x2d972c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9730:
    // 0x2d9730: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d9730u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9734:
    // 0x2d9734: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9734u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9738:
    // 0x2d9738: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d9738u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d973c:
    // 0x2d973c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d973cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d9740:
    // 0x2d9740: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d9740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2d9744:
    // 0x2d9744: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d9744u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2d9748:
    // 0x2d9748: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_2d974c:
    if (ctx->pc == 0x2D974Cu) {
        ctx->pc = 0x2D974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9748u;
        // 0x2d974c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9750u;
        goto label_2d9750;
    }
    ctx->pc = 0x2D9748u;
    {
        const bool branch_taken_0x2d9748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D974Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9748u;
        // 0x2d974c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9748) {
            ctx->pc = 0x2D97D4u;
            goto label_2d97d4;
        }
    }
    ctx->pc = 0x2D9750u;
label_2d9750:
    // 0x2d9750: 0x3c12a951  lui         $s2, 0xA951
    ctx->pc = 0x2d9750u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43345 << 16));
label_2d9754:
    // 0x2d9754: 0x241eff00  addiu       $fp, $zero, -0x100
    ctx->pc = 0x2d9754u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_2d9758:
    // 0x2d9758: 0x365228c3  ori         $s2, $s2, 0x28C3
    ctx->pc = 0x2d9758u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)10435);
label_2d975c:
    // 0x2d975c: 0x3c1700ff  lui         $s7, 0xFF
    ctx->pc = 0x2d975cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)255 << 16));
label_2d9760:
    // 0x2d9760: 0x3c16ff00  lui         $s6, 0xFF00
    ctx->pc = 0x2d9760u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65280 << 16));
label_2d9764:
    // 0x2d9764: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x2d9764u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2d9768:
    // 0x2d9768: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d9768u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d976c:
    // 0x2d976c: 0xc0b6454  jal         func_2D9150
label_2d9770:
    if (ctx->pc == 0x2D9770u) {
        ctx->pc = 0x2D9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D976Cu;
        // 0x2d9770: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9774u;
        goto label_2d9774;
    }
    ctx->pc = 0x2D976Cu;
    SET_GPR_U32(ctx, 31, 0x2D9774u);
    ctx->pc = 0x2D9770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D976Cu;
    // 0x2d9770: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9150u, 0x2D976Cu, 0x2D9774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9774u;
label_2d9774:
    // 0x2d9774: 0x58400014  blezl       $v0, . + 4 + (0x14 << 2)
label_2d9778:
    if (ctx->pc == 0x2D9778u) {
        ctx->pc = 0x2D9778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9774u;
        // 0x2d9778: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D977Cu;
        goto label_2d977c;
    }
    ctx->pc = 0x2D9774u;
    {
        const bool branch_taken_0x2d9774 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9774) {
            ctx->pc = 0x2D9778u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9774u;
            // 0x2d9778: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D97C8u;
            goto label_2d97c8;
        }
    }
    ctx->pc = 0x2D977Cu;
label_2d977c:
    // 0x2d977c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d977cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9780:
    // 0x2d9780: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x2d9780u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2d9784:
    // 0x2d9784: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x2d9784u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
label_2d9788:
    // 0x2d9788: 0x5e1024  and         $v0, $v0, $fp
    ctx->pc = 0x2d9788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 30));
label_2d978c:
    // 0x2d978c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d978cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2d9790:
    // 0x2d9790: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x2d9790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_2d9794:
    // 0x2d9794: 0x21c00  sll         $v1, $v0, 16
    ctx->pc = 0x2d9794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2d9798:
    // 0x2d9798: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x2d9798u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
label_2d979c:
    // 0x2d979c: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x2d979cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2d97a0:
    // 0x2d97a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d97a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2d97a4:
    // 0x2d97a4: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x2d97a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
label_2d97a8:
    // 0x2d97a8: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2d97a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2d97ac:
    // 0x2d97ac: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d97acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2d97b0:
    // 0x2d97b0: 0xb62824  and         $a1, $a1, $s6
    ctx->pc = 0x2d97b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 22));
label_2d97b4:
    // 0x2d97b4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2d97b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2d97b8:
    // 0x2d97b8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d97b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_2d97bc:
    // 0x2d97bc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d97bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2d97c0:
    // 0x2d97c0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d97c0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d97c4:
    // 0x2d97c4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d97c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d97c8:
    // 0x2d97c8: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d97c8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d97cc:
    // 0x2d97cc: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
label_2d97d0:
    if (ctx->pc == 0x2D97D0u) {
        ctx->pc = 0x2D97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97CCu;
        // 0x2d97d0: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D97D4u;
        goto label_2d97d4;
    }
    ctx->pc = 0x2D97CCu;
    {
        const bool branch_taken_0x2d97cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D97CCu;
        // 0x2d97d0: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d97cc) {
            ctx->pc = 0x2D9768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9768;
        }
    }
    ctx->pc = 0x2D97D4u;
label_2d97d4:
    // 0x2d97d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d97d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d97d8:
    // 0x2d97d8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d97d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d97dc:
    // 0x2d97dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d97dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d97e0:
    // 0x2d97e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d97e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d97e4:
    // 0x2d97e4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d97e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d97e8:
    // 0x2d97e8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d97e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d97ec:
    // 0x2d97ec: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d97ecu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d97f0:
    // 0x2d97f0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d97f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d97f4:
    // 0x2d97f4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d97f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d97f8:
    // 0x2d97f8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d97f8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d97fc:
    // 0x2d97fc: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d97fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d9800:
    // 0x2d9800: 0x3e00008  jr          $ra
label_2d9804:
    if (ctx->pc == 0x2D9804u) {
        ctx->pc = 0x2D9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9800u;
        // 0x2d9804: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9808u;
        goto label_2d9808;
    }
    ctx->pc = 0x2D9800u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9800u;
        // 0x2d9804: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9800u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9808u;
label_2d9808:
    // 0x2d9808: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d9808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d980c:
    // 0x2d980c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d980cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9810:
    // 0x2d9810: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9810u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9814:
    // 0x2d9814: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9814u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9818:
    // 0x2d9818: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9818u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d981c:
    // 0x2d981c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d981cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9820:
    // 0x2d9820: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9824:
    // 0x2d9824: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9828:
    // 0x2d9828: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d9828u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d982c:
    // 0x2d982c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d982cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9830:
    // 0x2d9830: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d9830u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9834:
    // 0x2d9834: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9838:
    // 0x2d9838: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d9838u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d983c:
    // 0x2d983c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d983cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d9840:
    // 0x2d9840: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d9840u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2d9844:
    // 0x2d9844: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d9844u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2d9848:
    // 0x2d9848: 0x10400027  beqz        $v0, . + 4 + (0x27 << 2)
label_2d984c:
    if (ctx->pc == 0x2D984Cu) {
        ctx->pc = 0x2D984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9848u;
        // 0x2d984c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9850u;
        goto label_2d9850;
    }
    ctx->pc = 0x2D9848u;
    {
        const bool branch_taken_0x2d9848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9848u;
        // 0x2d984c: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9848) {
            ctx->pc = 0x2D98E8u;
            goto label_2d98e8;
        }
    }
    ctx->pc = 0x2D9850u;
label_2d9850:
    // 0x2d9850: 0x3c1209f8  lui         $s2, 0x9F8
    ctx->pc = 0x2d9850u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2552 << 16));
label_2d9854:
    // 0x2d9854: 0x3c1eff00  lui         $fp, 0xFF00
    ctx->pc = 0x2d9854u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65280 << 16));
label_2d9858:
    // 0x2d9858: 0x2417e000  addiu       $s7, $zero, -0x2000
    ctx->pc = 0x2d9858u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294959104));
label_2d985c:
    // 0x2d985c: 0x2416ff00  addiu       $s6, $zero, -0x100
    ctx->pc = 0x2d985cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_2d9860:
    // 0x2d9860: 0x3652ed17  ori         $s2, $s2, 0xED17
    ctx->pc = 0x2d9860u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)60695);
label_2d9864:
    // 0x2d9864: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x2d9864u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2d9868:
    // 0x2d9868: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d9868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d986c:
    // 0x2d986c: 0xc0b6454  jal         func_2D9150
label_2d9870:
    if (ctx->pc == 0x2D9870u) {
        ctx->pc = 0x2D9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D986Cu;
        // 0x2d9870: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9874u;
        goto label_2d9874;
    }
    ctx->pc = 0x2D986Cu;
    SET_GPR_U32(ctx, 31, 0x2D9874u);
    ctx->pc = 0x2D9870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2D986Cu;
    // 0x2d9870: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D9150u, 0x2D986Cu, 0x2D9874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D9874u;
label_2d9874:
    // 0x2d9874: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_2d9878:
    if (ctx->pc == 0x2D9878u) {
        ctx->pc = 0x2D9878u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9874u;
        // 0x2d9878: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D987Cu;
        goto label_2d987c;
    }
    ctx->pc = 0x2D9874u;
    {
        const bool branch_taken_0x2d9874 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9874) {
            ctx->pc = 0x2D9878u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2D9874u;
            // 0x2d9878: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2D98DCu;
            goto label_2d98dc;
        }
    }
    ctx->pc = 0x2D987Cu;
label_2d987c:
    // 0x2d987c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d987cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9880:
    // 0x2d9880: 0x3c0500ff  lui         $a1, 0xFF
    ctx->pc = 0x2d9880u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)255 << 16));
label_2d9884:
    // 0x2d9884: 0x22400  sll         $a0, $v0, 16
    ctx->pc = 0x2d9884u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2d9888:
    // 0x2d9888: 0x21a03  sra         $v1, $v0, 8
    ctx->pc = 0x2d9888u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 2), 8));
label_2d988c:
    // 0x2d988c: 0x852024  and         $a0, $a0, $a1
    ctx->pc = 0x2d988cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 5));
label_2d9890:
    // 0x2d9890: 0x22a00  sll         $a1, $v0, 8
    ctx->pc = 0x2d9890u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2d9894:
    // 0x2d9894: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d9894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2d9898:
    // 0x2d9898: 0xbe2824  and         $a1, $a1, $fp
    ctx->pc = 0x2d9898u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 30));
label_2d989c:
    // 0x2d989c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2d989cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2d98a0:
    // 0x2d98a0: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d98a0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2d98a4:
    // 0x2d98a4: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d98a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_2d98a8:
    // 0x2d98a8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2d98a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2d98ac:
    // 0x2d98ac: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x2d98acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_2d98b0:
    // 0x2d98b0: 0x41b40  sll         $v1, $a0, 13
    ctx->pc = 0x2d98b0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 13));
label_2d98b4:
    // 0x2d98b4: 0x424c2  srl         $a0, $a0, 19
    ctx->pc = 0x2d98b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 19));
label_2d98b8:
    // 0x2d98b8: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x2d98b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
label_2d98bc:
    // 0x2d98bc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d98bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2d98c0:
    // 0x2d98c0: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x2d98c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2d98c4:
    // 0x2d98c4: 0x31e02  srl         $v1, $v1, 24
    ctx->pc = 0x2d98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 24));
label_2d98c8:
    // 0x2d98c8: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x2d98c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_2d98cc:
    // 0x2d98cc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d98ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2d98d0:
    // 0x2d98d0: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x2d98d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_2d98d4:
    // 0x2d98d4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d98d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d98d8:
    // 0x2d98d8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d98d8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d98dc:
    // 0x2d98dc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d98dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d98e0:
    // 0x2d98e0: 0x1440ffe1  bnez        $v0, . + 4 + (-0x1F << 2)
label_2d98e4:
    if (ctx->pc == 0x2D98E4u) {
        ctx->pc = 0x2D98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D98E0u;
        // 0x2d98e4: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D98E8u;
        goto label_2d98e8;
    }
    ctx->pc = 0x2D98E0u;
    {
        const bool branch_taken_0x2d98e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D98E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D98E0u;
        // 0x2d98e4: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d98e0) {
            ctx->pc = 0x2D9868u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9868;
        }
    }
    ctx->pc = 0x2D98E8u;
label_2d98e8:
    // 0x2d98e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d98e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d98ec:
    // 0x2d98ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d98ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d98f0:
    // 0x2d98f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d98f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d98f4:
    // 0x2d98f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d98f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d98f8:
    // 0x2d98f8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d98f8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d98fc:
    // 0x2d98fc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d98fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9900:
    // 0x2d9900: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d9900u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9904:
    // 0x2d9904: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d9904u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9908:
    // 0x2d9908: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d9908u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d990c:
    // 0x2d990c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d990cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d9910:
    // 0x2d9910: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d9910u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d9914:
    // 0x2d9914: 0x3e00008  jr          $ra
label_2d9918:
    if (ctx->pc == 0x2D9918u) {
        ctx->pc = 0x2D9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9914u;
        // 0x2d9918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D991Cu;
        goto label_2d991c;
    }
    ctx->pc = 0x2D9914u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9914u;
        // 0x2d9918: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9914u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D991Cu;
label_2d991c:
    // 0x2d991c: 0x0  nop
    ctx->pc = 0x2d991cu;
    // NOP
    if (ctx->pc == 0x2d991cu) { ctx->pc = 0x2d9920u; }
}
