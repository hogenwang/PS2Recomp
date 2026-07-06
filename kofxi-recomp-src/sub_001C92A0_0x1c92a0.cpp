#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C92A0
// Address: 0x1c92a0 - 0x1c9c60
void sub_001C92A0_0x1c92a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C92A0_0x1c92a0");
#endif

    switch (ctx->pc) {
        case 0x1c92a0u: goto label_1c92a0;
        case 0x1c92a4u: goto label_1c92a4;
        case 0x1c92a8u: goto label_1c92a8;
        case 0x1c92acu: goto label_1c92ac;
        case 0x1c92b0u: goto label_1c92b0;
        case 0x1c92b4u: goto label_1c92b4;
        case 0x1c92b8u: goto label_1c92b8;
        case 0x1c92bcu: goto label_1c92bc;
        case 0x1c92c0u: goto label_1c92c0;
        case 0x1c92c4u: goto label_1c92c4;
        case 0x1c92c8u: goto label_1c92c8;
        case 0x1c92ccu: goto label_1c92cc;
        case 0x1c92d0u: goto label_1c92d0;
        case 0x1c92d4u: goto label_1c92d4;
        case 0x1c92d8u: goto label_1c92d8;
        case 0x1c92dcu: goto label_1c92dc;
        case 0x1c92e0u: goto label_1c92e0;
        case 0x1c92e4u: goto label_1c92e4;
        case 0x1c92e8u: goto label_1c92e8;
        case 0x1c92ecu: goto label_1c92ec;
        case 0x1c92f0u: goto label_1c92f0;
        case 0x1c92f4u: goto label_1c92f4;
        case 0x1c92f8u: goto label_1c92f8;
        case 0x1c92fcu: goto label_1c92fc;
        case 0x1c9300u: goto label_1c9300;
        case 0x1c9304u: goto label_1c9304;
        case 0x1c9308u: goto label_1c9308;
        case 0x1c930cu: goto label_1c930c;
        case 0x1c9310u: goto label_1c9310;
        case 0x1c9314u: goto label_1c9314;
        case 0x1c9318u: goto label_1c9318;
        case 0x1c931cu: goto label_1c931c;
        case 0x1c9320u: goto label_1c9320;
        case 0x1c9324u: goto label_1c9324;
        case 0x1c9328u: goto label_1c9328;
        case 0x1c932cu: goto label_1c932c;
        case 0x1c9330u: goto label_1c9330;
        case 0x1c9334u: goto label_1c9334;
        case 0x1c9338u: goto label_1c9338;
        case 0x1c933cu: goto label_1c933c;
        case 0x1c9340u: goto label_1c9340;
        case 0x1c9344u: goto label_1c9344;
        case 0x1c9348u: goto label_1c9348;
        case 0x1c934cu: goto label_1c934c;
        case 0x1c9350u: goto label_1c9350;
        case 0x1c9354u: goto label_1c9354;
        case 0x1c9358u: goto label_1c9358;
        case 0x1c935cu: goto label_1c935c;
        case 0x1c9360u: goto label_1c9360;
        case 0x1c9364u: goto label_1c9364;
        case 0x1c9368u: goto label_1c9368;
        case 0x1c936cu: goto label_1c936c;
        case 0x1c9370u: goto label_1c9370;
        case 0x1c9374u: goto label_1c9374;
        case 0x1c9378u: goto label_1c9378;
        case 0x1c937cu: goto label_1c937c;
        case 0x1c9380u: goto label_1c9380;
        case 0x1c9384u: goto label_1c9384;
        case 0x1c9388u: goto label_1c9388;
        case 0x1c938cu: goto label_1c938c;
        case 0x1c9390u: goto label_1c9390;
        case 0x1c9394u: goto label_1c9394;
        case 0x1c9398u: goto label_1c9398;
        case 0x1c939cu: goto label_1c939c;
        case 0x1c93a0u: goto label_1c93a0;
        case 0x1c93a4u: goto label_1c93a4;
        case 0x1c93a8u: goto label_1c93a8;
        case 0x1c93acu: goto label_1c93ac;
        case 0x1c93b0u: goto label_1c93b0;
        case 0x1c93b4u: goto label_1c93b4;
        case 0x1c93b8u: goto label_1c93b8;
        case 0x1c93bcu: goto label_1c93bc;
        case 0x1c93c0u: goto label_1c93c0;
        case 0x1c93c4u: goto label_1c93c4;
        case 0x1c93c8u: goto label_1c93c8;
        case 0x1c93ccu: goto label_1c93cc;
        case 0x1c93d0u: goto label_1c93d0;
        case 0x1c93d4u: goto label_1c93d4;
        case 0x1c93d8u: goto label_1c93d8;
        case 0x1c93dcu: goto label_1c93dc;
        case 0x1c93e0u: goto label_1c93e0;
        case 0x1c93e4u: goto label_1c93e4;
        case 0x1c93e8u: goto label_1c93e8;
        case 0x1c93ecu: goto label_1c93ec;
        case 0x1c93f0u: goto label_1c93f0;
        case 0x1c93f4u: goto label_1c93f4;
        case 0x1c93f8u: goto label_1c93f8;
        case 0x1c93fcu: goto label_1c93fc;
        case 0x1c9400u: goto label_1c9400;
        case 0x1c9404u: goto label_1c9404;
        case 0x1c9408u: goto label_1c9408;
        case 0x1c940cu: goto label_1c940c;
        case 0x1c9410u: goto label_1c9410;
        case 0x1c9414u: goto label_1c9414;
        case 0x1c9418u: goto label_1c9418;
        case 0x1c941cu: goto label_1c941c;
        case 0x1c9420u: goto label_1c9420;
        case 0x1c9424u: goto label_1c9424;
        case 0x1c9428u: goto label_1c9428;
        case 0x1c942cu: goto label_1c942c;
        case 0x1c9430u: goto label_1c9430;
        case 0x1c9434u: goto label_1c9434;
        case 0x1c9438u: goto label_1c9438;
        case 0x1c943cu: goto label_1c943c;
        case 0x1c9440u: goto label_1c9440;
        case 0x1c9444u: goto label_1c9444;
        case 0x1c9448u: goto label_1c9448;
        case 0x1c944cu: goto label_1c944c;
        case 0x1c9450u: goto label_1c9450;
        case 0x1c9454u: goto label_1c9454;
        case 0x1c9458u: goto label_1c9458;
        case 0x1c945cu: goto label_1c945c;
        case 0x1c9460u: goto label_1c9460;
        case 0x1c9464u: goto label_1c9464;
        case 0x1c9468u: goto label_1c9468;
        case 0x1c946cu: goto label_1c946c;
        case 0x1c9470u: goto label_1c9470;
        case 0x1c9474u: goto label_1c9474;
        case 0x1c9478u: goto label_1c9478;
        case 0x1c947cu: goto label_1c947c;
        case 0x1c9480u: goto label_1c9480;
        case 0x1c9484u: goto label_1c9484;
        case 0x1c9488u: goto label_1c9488;
        case 0x1c948cu: goto label_1c948c;
        case 0x1c9490u: goto label_1c9490;
        case 0x1c9494u: goto label_1c9494;
        case 0x1c9498u: goto label_1c9498;
        case 0x1c949cu: goto label_1c949c;
        case 0x1c94a0u: goto label_1c94a0;
        case 0x1c94a4u: goto label_1c94a4;
        case 0x1c94a8u: goto label_1c94a8;
        case 0x1c94acu: goto label_1c94ac;
        case 0x1c94b0u: goto label_1c94b0;
        case 0x1c94b4u: goto label_1c94b4;
        case 0x1c94b8u: goto label_1c94b8;
        case 0x1c94bcu: goto label_1c94bc;
        case 0x1c94c0u: goto label_1c94c0;
        case 0x1c94c4u: goto label_1c94c4;
        case 0x1c94c8u: goto label_1c94c8;
        case 0x1c94ccu: goto label_1c94cc;
        case 0x1c94d0u: goto label_1c94d0;
        case 0x1c94d4u: goto label_1c94d4;
        case 0x1c94d8u: goto label_1c94d8;
        case 0x1c94dcu: goto label_1c94dc;
        case 0x1c94e0u: goto label_1c94e0;
        case 0x1c94e4u: goto label_1c94e4;
        case 0x1c94e8u: goto label_1c94e8;
        case 0x1c94ecu: goto label_1c94ec;
        case 0x1c94f0u: goto label_1c94f0;
        case 0x1c94f4u: goto label_1c94f4;
        case 0x1c94f8u: goto label_1c94f8;
        case 0x1c94fcu: goto label_1c94fc;
        case 0x1c9500u: goto label_1c9500;
        case 0x1c9504u: goto label_1c9504;
        case 0x1c9508u: goto label_1c9508;
        case 0x1c950cu: goto label_1c950c;
        case 0x1c9510u: goto label_1c9510;
        case 0x1c9514u: goto label_1c9514;
        case 0x1c9518u: goto label_1c9518;
        case 0x1c951cu: goto label_1c951c;
        case 0x1c9520u: goto label_1c9520;
        case 0x1c9524u: goto label_1c9524;
        case 0x1c9528u: goto label_1c9528;
        case 0x1c952cu: goto label_1c952c;
        case 0x1c9530u: goto label_1c9530;
        case 0x1c9534u: goto label_1c9534;
        case 0x1c9538u: goto label_1c9538;
        case 0x1c953cu: goto label_1c953c;
        case 0x1c9540u: goto label_1c9540;
        case 0x1c9544u: goto label_1c9544;
        case 0x1c9548u: goto label_1c9548;
        case 0x1c954cu: goto label_1c954c;
        case 0x1c9550u: goto label_1c9550;
        case 0x1c9554u: goto label_1c9554;
        case 0x1c9558u: goto label_1c9558;
        case 0x1c955cu: goto label_1c955c;
        case 0x1c9560u: goto label_1c9560;
        case 0x1c9564u: goto label_1c9564;
        case 0x1c9568u: goto label_1c9568;
        case 0x1c956cu: goto label_1c956c;
        case 0x1c9570u: goto label_1c9570;
        case 0x1c9574u: goto label_1c9574;
        case 0x1c9578u: goto label_1c9578;
        case 0x1c957cu: goto label_1c957c;
        case 0x1c9580u: goto label_1c9580;
        case 0x1c9584u: goto label_1c9584;
        case 0x1c9588u: goto label_1c9588;
        case 0x1c958cu: goto label_1c958c;
        case 0x1c9590u: goto label_1c9590;
        case 0x1c9594u: goto label_1c9594;
        case 0x1c9598u: goto label_1c9598;
        case 0x1c959cu: goto label_1c959c;
        case 0x1c95a0u: goto label_1c95a0;
        case 0x1c95a4u: goto label_1c95a4;
        case 0x1c95a8u: goto label_1c95a8;
        case 0x1c95acu: goto label_1c95ac;
        case 0x1c95b0u: goto label_1c95b0;
        case 0x1c95b4u: goto label_1c95b4;
        case 0x1c95b8u: goto label_1c95b8;
        case 0x1c95bcu: goto label_1c95bc;
        case 0x1c95c0u: goto label_1c95c0;
        case 0x1c95c4u: goto label_1c95c4;
        case 0x1c95c8u: goto label_1c95c8;
        case 0x1c95ccu: goto label_1c95cc;
        case 0x1c95d0u: goto label_1c95d0;
        case 0x1c95d4u: goto label_1c95d4;
        case 0x1c95d8u: goto label_1c95d8;
        case 0x1c95dcu: goto label_1c95dc;
        case 0x1c95e0u: goto label_1c95e0;
        case 0x1c95e4u: goto label_1c95e4;
        case 0x1c95e8u: goto label_1c95e8;
        case 0x1c95ecu: goto label_1c95ec;
        case 0x1c95f0u: goto label_1c95f0;
        case 0x1c95f4u: goto label_1c95f4;
        case 0x1c95f8u: goto label_1c95f8;
        case 0x1c95fcu: goto label_1c95fc;
        case 0x1c9600u: goto label_1c9600;
        case 0x1c9604u: goto label_1c9604;
        case 0x1c9608u: goto label_1c9608;
        case 0x1c960cu: goto label_1c960c;
        case 0x1c9610u: goto label_1c9610;
        case 0x1c9614u: goto label_1c9614;
        case 0x1c9618u: goto label_1c9618;
        case 0x1c961cu: goto label_1c961c;
        case 0x1c9620u: goto label_1c9620;
        case 0x1c9624u: goto label_1c9624;
        case 0x1c9628u: goto label_1c9628;
        case 0x1c962cu: goto label_1c962c;
        case 0x1c9630u: goto label_1c9630;
        case 0x1c9634u: goto label_1c9634;
        case 0x1c9638u: goto label_1c9638;
        case 0x1c963cu: goto label_1c963c;
        case 0x1c9640u: goto label_1c9640;
        case 0x1c9644u: goto label_1c9644;
        case 0x1c9648u: goto label_1c9648;
        case 0x1c964cu: goto label_1c964c;
        case 0x1c9650u: goto label_1c9650;
        case 0x1c9654u: goto label_1c9654;
        case 0x1c9658u: goto label_1c9658;
        case 0x1c965cu: goto label_1c965c;
        case 0x1c9660u: goto label_1c9660;
        case 0x1c9664u: goto label_1c9664;
        case 0x1c9668u: goto label_1c9668;
        case 0x1c966cu: goto label_1c966c;
        case 0x1c9670u: goto label_1c9670;
        case 0x1c9674u: goto label_1c9674;
        case 0x1c9678u: goto label_1c9678;
        case 0x1c967cu: goto label_1c967c;
        case 0x1c9680u: goto label_1c9680;
        case 0x1c9684u: goto label_1c9684;
        case 0x1c9688u: goto label_1c9688;
        case 0x1c968cu: goto label_1c968c;
        case 0x1c9690u: goto label_1c9690;
        case 0x1c9694u: goto label_1c9694;
        case 0x1c9698u: goto label_1c9698;
        case 0x1c969cu: goto label_1c969c;
        case 0x1c96a0u: goto label_1c96a0;
        case 0x1c96a4u: goto label_1c96a4;
        case 0x1c96a8u: goto label_1c96a8;
        case 0x1c96acu: goto label_1c96ac;
        case 0x1c96b0u: goto label_1c96b0;
        case 0x1c96b4u: goto label_1c96b4;
        case 0x1c96b8u: goto label_1c96b8;
        case 0x1c96bcu: goto label_1c96bc;
        case 0x1c96c0u: goto label_1c96c0;
        case 0x1c96c4u: goto label_1c96c4;
        case 0x1c96c8u: goto label_1c96c8;
        case 0x1c96ccu: goto label_1c96cc;
        case 0x1c96d0u: goto label_1c96d0;
        case 0x1c96d4u: goto label_1c96d4;
        case 0x1c96d8u: goto label_1c96d8;
        case 0x1c96dcu: goto label_1c96dc;
        case 0x1c96e0u: goto label_1c96e0;
        case 0x1c96e4u: goto label_1c96e4;
        case 0x1c96e8u: goto label_1c96e8;
        case 0x1c96ecu: goto label_1c96ec;
        case 0x1c96f0u: goto label_1c96f0;
        case 0x1c96f4u: goto label_1c96f4;
        case 0x1c96f8u: goto label_1c96f8;
        case 0x1c96fcu: goto label_1c96fc;
        case 0x1c9700u: goto label_1c9700;
        case 0x1c9704u: goto label_1c9704;
        case 0x1c9708u: goto label_1c9708;
        case 0x1c970cu: goto label_1c970c;
        case 0x1c9710u: goto label_1c9710;
        case 0x1c9714u: goto label_1c9714;
        case 0x1c9718u: goto label_1c9718;
        case 0x1c971cu: goto label_1c971c;
        case 0x1c9720u: goto label_1c9720;
        case 0x1c9724u: goto label_1c9724;
        case 0x1c9728u: goto label_1c9728;
        case 0x1c972cu: goto label_1c972c;
        case 0x1c9730u: goto label_1c9730;
        case 0x1c9734u: goto label_1c9734;
        case 0x1c9738u: goto label_1c9738;
        case 0x1c973cu: goto label_1c973c;
        case 0x1c9740u: goto label_1c9740;
        case 0x1c9744u: goto label_1c9744;
        case 0x1c9748u: goto label_1c9748;
        case 0x1c974cu: goto label_1c974c;
        case 0x1c9750u: goto label_1c9750;
        case 0x1c9754u: goto label_1c9754;
        case 0x1c9758u: goto label_1c9758;
        case 0x1c975cu: goto label_1c975c;
        case 0x1c9760u: goto label_1c9760;
        case 0x1c9764u: goto label_1c9764;
        case 0x1c9768u: goto label_1c9768;
        case 0x1c976cu: goto label_1c976c;
        case 0x1c9770u: goto label_1c9770;
        case 0x1c9774u: goto label_1c9774;
        case 0x1c9778u: goto label_1c9778;
        case 0x1c977cu: goto label_1c977c;
        case 0x1c9780u: goto label_1c9780;
        case 0x1c9784u: goto label_1c9784;
        case 0x1c9788u: goto label_1c9788;
        case 0x1c978cu: goto label_1c978c;
        case 0x1c9790u: goto label_1c9790;
        case 0x1c9794u: goto label_1c9794;
        case 0x1c9798u: goto label_1c9798;
        case 0x1c979cu: goto label_1c979c;
        case 0x1c97a0u: goto label_1c97a0;
        case 0x1c97a4u: goto label_1c97a4;
        case 0x1c97a8u: goto label_1c97a8;
        case 0x1c97acu: goto label_1c97ac;
        case 0x1c97b0u: goto label_1c97b0;
        case 0x1c97b4u: goto label_1c97b4;
        case 0x1c97b8u: goto label_1c97b8;
        case 0x1c97bcu: goto label_1c97bc;
        case 0x1c97c0u: goto label_1c97c0;
        case 0x1c97c4u: goto label_1c97c4;
        case 0x1c97c8u: goto label_1c97c8;
        case 0x1c97ccu: goto label_1c97cc;
        case 0x1c97d0u: goto label_1c97d0;
        case 0x1c97d4u: goto label_1c97d4;
        case 0x1c97d8u: goto label_1c97d8;
        case 0x1c97dcu: goto label_1c97dc;
        case 0x1c97e0u: goto label_1c97e0;
        case 0x1c97e4u: goto label_1c97e4;
        case 0x1c97e8u: goto label_1c97e8;
        case 0x1c97ecu: goto label_1c97ec;
        case 0x1c97f0u: goto label_1c97f0;
        case 0x1c97f4u: goto label_1c97f4;
        case 0x1c97f8u: goto label_1c97f8;
        case 0x1c97fcu: goto label_1c97fc;
        case 0x1c9800u: goto label_1c9800;
        case 0x1c9804u: goto label_1c9804;
        case 0x1c9808u: goto label_1c9808;
        case 0x1c980cu: goto label_1c980c;
        case 0x1c9810u: goto label_1c9810;
        case 0x1c9814u: goto label_1c9814;
        case 0x1c9818u: goto label_1c9818;
        case 0x1c981cu: goto label_1c981c;
        case 0x1c9820u: goto label_1c9820;
        case 0x1c9824u: goto label_1c9824;
        case 0x1c9828u: goto label_1c9828;
        case 0x1c982cu: goto label_1c982c;
        case 0x1c9830u: goto label_1c9830;
        case 0x1c9834u: goto label_1c9834;
        case 0x1c9838u: goto label_1c9838;
        case 0x1c983cu: goto label_1c983c;
        case 0x1c9840u: goto label_1c9840;
        case 0x1c9844u: goto label_1c9844;
        case 0x1c9848u: goto label_1c9848;
        case 0x1c984cu: goto label_1c984c;
        case 0x1c9850u: goto label_1c9850;
        case 0x1c9854u: goto label_1c9854;
        case 0x1c9858u: goto label_1c9858;
        case 0x1c985cu: goto label_1c985c;
        case 0x1c9860u: goto label_1c9860;
        case 0x1c9864u: goto label_1c9864;
        case 0x1c9868u: goto label_1c9868;
        case 0x1c986cu: goto label_1c986c;
        case 0x1c9870u: goto label_1c9870;
        case 0x1c9874u: goto label_1c9874;
        case 0x1c9878u: goto label_1c9878;
        case 0x1c987cu: goto label_1c987c;
        case 0x1c9880u: goto label_1c9880;
        case 0x1c9884u: goto label_1c9884;
        case 0x1c9888u: goto label_1c9888;
        case 0x1c988cu: goto label_1c988c;
        case 0x1c9890u: goto label_1c9890;
        case 0x1c9894u: goto label_1c9894;
        case 0x1c9898u: goto label_1c9898;
        case 0x1c989cu: goto label_1c989c;
        case 0x1c98a0u: goto label_1c98a0;
        case 0x1c98a4u: goto label_1c98a4;
        case 0x1c98a8u: goto label_1c98a8;
        case 0x1c98acu: goto label_1c98ac;
        case 0x1c98b0u: goto label_1c98b0;
        case 0x1c98b4u: goto label_1c98b4;
        case 0x1c98b8u: goto label_1c98b8;
        case 0x1c98bcu: goto label_1c98bc;
        case 0x1c98c0u: goto label_1c98c0;
        case 0x1c98c4u: goto label_1c98c4;
        case 0x1c98c8u: goto label_1c98c8;
        case 0x1c98ccu: goto label_1c98cc;
        case 0x1c98d0u: goto label_1c98d0;
        case 0x1c98d4u: goto label_1c98d4;
        case 0x1c98d8u: goto label_1c98d8;
        case 0x1c98dcu: goto label_1c98dc;
        case 0x1c98e0u: goto label_1c98e0;
        case 0x1c98e4u: goto label_1c98e4;
        case 0x1c98e8u: goto label_1c98e8;
        case 0x1c98ecu: goto label_1c98ec;
        case 0x1c98f0u: goto label_1c98f0;
        case 0x1c98f4u: goto label_1c98f4;
        case 0x1c98f8u: goto label_1c98f8;
        case 0x1c98fcu: goto label_1c98fc;
        case 0x1c9900u: goto label_1c9900;
        case 0x1c9904u: goto label_1c9904;
        case 0x1c9908u: goto label_1c9908;
        case 0x1c990cu: goto label_1c990c;
        case 0x1c9910u: goto label_1c9910;
        case 0x1c9914u: goto label_1c9914;
        case 0x1c9918u: goto label_1c9918;
        case 0x1c991cu: goto label_1c991c;
        case 0x1c9920u: goto label_1c9920;
        case 0x1c9924u: goto label_1c9924;
        case 0x1c9928u: goto label_1c9928;
        case 0x1c992cu: goto label_1c992c;
        case 0x1c9930u: goto label_1c9930;
        case 0x1c9934u: goto label_1c9934;
        case 0x1c9938u: goto label_1c9938;
        case 0x1c993cu: goto label_1c993c;
        case 0x1c9940u: goto label_1c9940;
        case 0x1c9944u: goto label_1c9944;
        case 0x1c9948u: goto label_1c9948;
        case 0x1c994cu: goto label_1c994c;
        case 0x1c9950u: goto label_1c9950;
        case 0x1c9954u: goto label_1c9954;
        case 0x1c9958u: goto label_1c9958;
        case 0x1c995cu: goto label_1c995c;
        case 0x1c9960u: goto label_1c9960;
        case 0x1c9964u: goto label_1c9964;
        case 0x1c9968u: goto label_1c9968;
        case 0x1c996cu: goto label_1c996c;
        case 0x1c9970u: goto label_1c9970;
        case 0x1c9974u: goto label_1c9974;
        case 0x1c9978u: goto label_1c9978;
        case 0x1c997cu: goto label_1c997c;
        case 0x1c9980u: goto label_1c9980;
        case 0x1c9984u: goto label_1c9984;
        case 0x1c9988u: goto label_1c9988;
        case 0x1c998cu: goto label_1c998c;
        case 0x1c9990u: goto label_1c9990;
        case 0x1c9994u: goto label_1c9994;
        case 0x1c9998u: goto label_1c9998;
        case 0x1c999cu: goto label_1c999c;
        case 0x1c99a0u: goto label_1c99a0;
        case 0x1c99a4u: goto label_1c99a4;
        case 0x1c99a8u: goto label_1c99a8;
        case 0x1c99acu: goto label_1c99ac;
        case 0x1c99b0u: goto label_1c99b0;
        case 0x1c99b4u: goto label_1c99b4;
        case 0x1c99b8u: goto label_1c99b8;
        case 0x1c99bcu: goto label_1c99bc;
        case 0x1c99c0u: goto label_1c99c0;
        case 0x1c99c4u: goto label_1c99c4;
        case 0x1c99c8u: goto label_1c99c8;
        case 0x1c99ccu: goto label_1c99cc;
        case 0x1c99d0u: goto label_1c99d0;
        case 0x1c99d4u: goto label_1c99d4;
        case 0x1c99d8u: goto label_1c99d8;
        case 0x1c99dcu: goto label_1c99dc;
        case 0x1c99e0u: goto label_1c99e0;
        case 0x1c99e4u: goto label_1c99e4;
        case 0x1c99e8u: goto label_1c99e8;
        case 0x1c99ecu: goto label_1c99ec;
        case 0x1c99f0u: goto label_1c99f0;
        case 0x1c99f4u: goto label_1c99f4;
        case 0x1c99f8u: goto label_1c99f8;
        case 0x1c99fcu: goto label_1c99fc;
        case 0x1c9a00u: goto label_1c9a00;
        case 0x1c9a04u: goto label_1c9a04;
        case 0x1c9a08u: goto label_1c9a08;
        case 0x1c9a0cu: goto label_1c9a0c;
        case 0x1c9a10u: goto label_1c9a10;
        case 0x1c9a14u: goto label_1c9a14;
        case 0x1c9a18u: goto label_1c9a18;
        case 0x1c9a1cu: goto label_1c9a1c;
        case 0x1c9a20u: goto label_1c9a20;
        case 0x1c9a24u: goto label_1c9a24;
        case 0x1c9a28u: goto label_1c9a28;
        case 0x1c9a2cu: goto label_1c9a2c;
        case 0x1c9a30u: goto label_1c9a30;
        case 0x1c9a34u: goto label_1c9a34;
        case 0x1c9a38u: goto label_1c9a38;
        case 0x1c9a3cu: goto label_1c9a3c;
        case 0x1c9a40u: goto label_1c9a40;
        case 0x1c9a44u: goto label_1c9a44;
        case 0x1c9a48u: goto label_1c9a48;
        case 0x1c9a4cu: goto label_1c9a4c;
        case 0x1c9a50u: goto label_1c9a50;
        case 0x1c9a54u: goto label_1c9a54;
        case 0x1c9a58u: goto label_1c9a58;
        case 0x1c9a5cu: goto label_1c9a5c;
        case 0x1c9a60u: goto label_1c9a60;
        case 0x1c9a64u: goto label_1c9a64;
        case 0x1c9a68u: goto label_1c9a68;
        case 0x1c9a6cu: goto label_1c9a6c;
        case 0x1c9a70u: goto label_1c9a70;
        case 0x1c9a74u: goto label_1c9a74;
        case 0x1c9a78u: goto label_1c9a78;
        case 0x1c9a7cu: goto label_1c9a7c;
        case 0x1c9a80u: goto label_1c9a80;
        case 0x1c9a84u: goto label_1c9a84;
        case 0x1c9a88u: goto label_1c9a88;
        case 0x1c9a8cu: goto label_1c9a8c;
        case 0x1c9a90u: goto label_1c9a90;
        case 0x1c9a94u: goto label_1c9a94;
        case 0x1c9a98u: goto label_1c9a98;
        case 0x1c9a9cu: goto label_1c9a9c;
        case 0x1c9aa0u: goto label_1c9aa0;
        case 0x1c9aa4u: goto label_1c9aa4;
        case 0x1c9aa8u: goto label_1c9aa8;
        case 0x1c9aacu: goto label_1c9aac;
        case 0x1c9ab0u: goto label_1c9ab0;
        case 0x1c9ab4u: goto label_1c9ab4;
        case 0x1c9ab8u: goto label_1c9ab8;
        case 0x1c9abcu: goto label_1c9abc;
        case 0x1c9ac0u: goto label_1c9ac0;
        case 0x1c9ac4u: goto label_1c9ac4;
        case 0x1c9ac8u: goto label_1c9ac8;
        case 0x1c9accu: goto label_1c9acc;
        case 0x1c9ad0u: goto label_1c9ad0;
        case 0x1c9ad4u: goto label_1c9ad4;
        case 0x1c9ad8u: goto label_1c9ad8;
        case 0x1c9adcu: goto label_1c9adc;
        case 0x1c9ae0u: goto label_1c9ae0;
        case 0x1c9ae4u: goto label_1c9ae4;
        case 0x1c9ae8u: goto label_1c9ae8;
        case 0x1c9aecu: goto label_1c9aec;
        case 0x1c9af0u: goto label_1c9af0;
        case 0x1c9af4u: goto label_1c9af4;
        case 0x1c9af8u: goto label_1c9af8;
        case 0x1c9afcu: goto label_1c9afc;
        case 0x1c9b00u: goto label_1c9b00;
        case 0x1c9b04u: goto label_1c9b04;
        case 0x1c9b08u: goto label_1c9b08;
        case 0x1c9b0cu: goto label_1c9b0c;
        case 0x1c9b10u: goto label_1c9b10;
        case 0x1c9b14u: goto label_1c9b14;
        case 0x1c9b18u: goto label_1c9b18;
        case 0x1c9b1cu: goto label_1c9b1c;
        case 0x1c9b20u: goto label_1c9b20;
        case 0x1c9b24u: goto label_1c9b24;
        case 0x1c9b28u: goto label_1c9b28;
        case 0x1c9b2cu: goto label_1c9b2c;
        case 0x1c9b30u: goto label_1c9b30;
        case 0x1c9b34u: goto label_1c9b34;
        case 0x1c9b38u: goto label_1c9b38;
        case 0x1c9b3cu: goto label_1c9b3c;
        case 0x1c9b40u: goto label_1c9b40;
        case 0x1c9b44u: goto label_1c9b44;
        case 0x1c9b48u: goto label_1c9b48;
        case 0x1c9b4cu: goto label_1c9b4c;
        case 0x1c9b50u: goto label_1c9b50;
        case 0x1c9b54u: goto label_1c9b54;
        case 0x1c9b58u: goto label_1c9b58;
        case 0x1c9b5cu: goto label_1c9b5c;
        case 0x1c9b60u: goto label_1c9b60;
        case 0x1c9b64u: goto label_1c9b64;
        case 0x1c9b68u: goto label_1c9b68;
        case 0x1c9b6cu: goto label_1c9b6c;
        case 0x1c9b70u: goto label_1c9b70;
        case 0x1c9b74u: goto label_1c9b74;
        case 0x1c9b78u: goto label_1c9b78;
        case 0x1c9b7cu: goto label_1c9b7c;
        case 0x1c9b80u: goto label_1c9b80;
        case 0x1c9b84u: goto label_1c9b84;
        case 0x1c9b88u: goto label_1c9b88;
        case 0x1c9b8cu: goto label_1c9b8c;
        case 0x1c9b90u: goto label_1c9b90;
        case 0x1c9b94u: goto label_1c9b94;
        case 0x1c9b98u: goto label_1c9b98;
        case 0x1c9b9cu: goto label_1c9b9c;
        case 0x1c9ba0u: goto label_1c9ba0;
        case 0x1c9ba4u: goto label_1c9ba4;
        case 0x1c9ba8u: goto label_1c9ba8;
        case 0x1c9bacu: goto label_1c9bac;
        case 0x1c9bb0u: goto label_1c9bb0;
        case 0x1c9bb4u: goto label_1c9bb4;
        case 0x1c9bb8u: goto label_1c9bb8;
        case 0x1c9bbcu: goto label_1c9bbc;
        case 0x1c9bc0u: goto label_1c9bc0;
        case 0x1c9bc4u: goto label_1c9bc4;
        case 0x1c9bc8u: goto label_1c9bc8;
        case 0x1c9bccu: goto label_1c9bcc;
        case 0x1c9bd0u: goto label_1c9bd0;
        case 0x1c9bd4u: goto label_1c9bd4;
        case 0x1c9bd8u: goto label_1c9bd8;
        case 0x1c9bdcu: goto label_1c9bdc;
        case 0x1c9be0u: goto label_1c9be0;
        case 0x1c9be4u: goto label_1c9be4;
        case 0x1c9be8u: goto label_1c9be8;
        case 0x1c9becu: goto label_1c9bec;
        case 0x1c9bf0u: goto label_1c9bf0;
        case 0x1c9bf4u: goto label_1c9bf4;
        case 0x1c9bf8u: goto label_1c9bf8;
        case 0x1c9bfcu: goto label_1c9bfc;
        case 0x1c9c00u: goto label_1c9c00;
        case 0x1c9c04u: goto label_1c9c04;
        case 0x1c9c08u: goto label_1c9c08;
        case 0x1c9c0cu: goto label_1c9c0c;
        case 0x1c9c10u: goto label_1c9c10;
        case 0x1c9c14u: goto label_1c9c14;
        case 0x1c9c18u: goto label_1c9c18;
        case 0x1c9c1cu: goto label_1c9c1c;
        case 0x1c9c20u: goto label_1c9c20;
        case 0x1c9c24u: goto label_1c9c24;
        case 0x1c9c28u: goto label_1c9c28;
        case 0x1c9c2cu: goto label_1c9c2c;
        case 0x1c9c30u: goto label_1c9c30;
        case 0x1c9c34u: goto label_1c9c34;
        case 0x1c9c38u: goto label_1c9c38;
        case 0x1c9c3cu: goto label_1c9c3c;
        case 0x1c9c40u: goto label_1c9c40;
        case 0x1c9c44u: goto label_1c9c44;
        case 0x1c9c48u: goto label_1c9c48;
        case 0x1c9c4cu: goto label_1c9c4c;
        case 0x1c9c50u: goto label_1c9c50;
        case 0x1c9c54u: goto label_1c9c54;
        case 0x1c9c58u: goto label_1c9c58;
        case 0x1c9c5cu: goto label_1c9c5c;
        default: break;
    }

    ctx->pc = 0x1c92a0u;

label_1c92a0:
    // 0x1c92a0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c92a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c92a4:
    // 0x1c92a4: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c92a4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c92a8:
    // 0x1c92a8: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c92a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c92ac:
    // 0x1c92ac: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c92acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c92b0:
    // 0x1c92b0: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1c92b4:
    if (ctx->pc == 0x1C92B4u) {
        ctx->pc = 0x1C92B4u;
            // 0x1c92b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1C92B8u;
        goto label_1c92b8;
    }
    ctx->pc = 0x1C92B0u;
    {
        const bool branch_taken_0x1c92b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C92B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92B0u;
            // 0x1c92b4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c92b0) {
            ctx->pc = 0x1C92C8u;
            goto label_1c92c8;
        }
    }
    ctx->pc = 0x1C92B8u;
label_1c92b8:
    // 0x1c92b8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c92b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c92bc:
    // 0x1c92bc: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c92bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c92c0:
    // 0x1c92c0: 0x5860000e  blezl       $v1, . + 4 + (0xE << 2)
label_1c92c4:
    if (ctx->pc == 0x1C92C4u) {
        ctx->pc = 0x1C92C4u;
            // 0x1c92c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1C92C8u;
        goto label_1c92c8;
    }
    ctx->pc = 0x1C92C0u;
    {
        const bool branch_taken_0x1c92c0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c92c0) {
            ctx->pc = 0x1C92C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92C0u;
            // 0x1c92c4: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C92FCu;
            goto label_1c92fc;
        }
    }
    ctx->pc = 0x1C92C8u;
label_1c92c8:
    // 0x1c92c8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x1c92c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_1c92cc:
    // 0x1c92cc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c92ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c92d0:
    // 0x1c92d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c92d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c92d4:
    // 0x1c92d4: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1c92d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c92d8:
    // 0x1c92d8: 0xc07096e  jal         func_1C25B8
label_1c92dc:
    if (ctx->pc == 0x1C92DCu) {
        ctx->pc = 0x1C92DCu;
            // 0x1c92dc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C92E0u;
        goto label_1c92e0;
    }
    ctx->pc = 0x1C92D8u;
    SET_GPR_U32(ctx, 31, 0x1C92E0u);
    ctx->pc = 0x1C92DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92D8u;
            // 0x1c92dc: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (runtime->hasFunction(0x1C25B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C25B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92E0u; }
        if (ctx->pc != 0x1C92E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C25B8_0x1c25b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C92E0u; }
        if (ctx->pc != 0x1C92E0u) { return; }
    }
    ctx->pc = 0x1C92E0u;
label_1c92e0:
    // 0x1c92e0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c92e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c92e4:
    // 0x1c92e4: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1c92e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c92e8:
    // 0x1c92e8: 0x24635360  addiu       $v1, $v1, 0x5360
    ctx->pc = 0x1c92e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21344));
label_1c92ec:
    // 0x1c92ec: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c92ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1c92f0:
    // 0x1c92f0: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c92f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1c92f4:
    // 0x1c92f4: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1c92f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1c92f8:
    // 0x1c92f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c92f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c92fc:
    // 0x1c92fc: 0x3e00008  jr          $ra
label_1c9300:
    if (ctx->pc == 0x1C9300u) {
        ctx->pc = 0x1C9300u;
            // 0x1c9300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C9304u;
        goto label_1c9304;
    }
    ctx->pc = 0x1C92FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C92FCu;
            // 0x1c9300: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9304u;
label_1c9304:
    // 0x1c9304: 0x0  nop
    ctx->pc = 0x1c9304u;
    // NOP
label_1c9308:
    // 0x1c9308: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c930c:
    // 0x1c930c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c930cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9310:
    // 0x1c9310: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9314:
    // 0x1c9314: 0x54660006  bnel        $v1, $a2, . + 4 + (0x6 << 2)
label_1c9318:
    if (ctx->pc == 0x1C9318u) {
        ctx->pc = 0x1C9318u;
            // 0x1c9318: 0x80820054  lb          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->pc = 0x1C931Cu;
        goto label_1c931c;
    }
    ctx->pc = 0x1C9314u;
    {
        const bool branch_taken_0x1c9314 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1c9314) {
            ctx->pc = 0x1C9318u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9314u;
            // 0x1c9318: 0x80820054  lb          $v0, 0x54($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9330u;
            goto label_1c9330;
        }
    }
    ctx->pc = 0x1C931Cu;
label_1c931c:
    // 0x1c931c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9320:
    // 0x1c9320: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9324:
    // 0x1c9324: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
label_1c9328:
    if (ctx->pc == 0x1C9328u) {
        ctx->pc = 0x1C932Cu;
        goto label_1c932c;
    }
    ctx->pc = 0x1C9324u;
    {
        const bool branch_taken_0x1c9324 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c9324) {
            ctx->pc = 0x1C934Cu;
            goto label_1c934c;
        }
    }
    ctx->pc = 0x1C932Cu;
label_1c932c:
    // 0x1c932c: 0x80820054  lb          $v0, 0x54($a0)
    ctx->pc = 0x1c932cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 84)));
label_1c9330:
    // 0x1c9330: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
label_1c9334:
    if (ctx->pc == 0x1C9334u) {
        ctx->pc = 0x1C9334u;
            // 0x1c9334: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->pc = 0x1C9338u;
        goto label_1c9338;
    }
    ctx->pc = 0x1C9330u;
    {
        const bool branch_taken_0x1c9330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C9334u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9330u;
            // 0x1c9334: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9330) {
            ctx->pc = 0x1C934Cu;
            goto label_1c934c;
        }
    }
    ctx->pc = 0x1C9338u;
label_1c9338:
    // 0x1c9338: 0x8c435350  lw          $v1, 0x5350($v0)
    ctx->pc = 0x1c9338u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21328)));
label_1c933c:
    // 0x1c933c: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
label_1c9340:
    if (ctx->pc == 0x1C9340u) {
        ctx->pc = 0x1C9340u;
            // 0x1c9340: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x1C9344u;
        goto label_1c9344;
    }
    ctx->pc = 0x1C933Cu;
    {
        const bool branch_taken_0x1c933c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c933c) {
            ctx->pc = 0x1C9340u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C933Cu;
            // 0x1c9340: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C934Cu;
            goto label_1c934c;
        }
    }
    ctx->pc = 0x1C9344u;
label_1c9344:
    // 0x1c9344: 0x54a60001  bnel        $a1, $a2, . + 4 + (0x1 << 2)
label_1c9348:
    if (ctx->pc == 0x1C9348u) {
        ctx->pc = 0x1C9348u;
            // 0x1c9348: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x1C934Cu;
        goto label_1c934c;
    }
    ctx->pc = 0x1C9344u;
    {
        const bool branch_taken_0x1c9344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x1c9344) {
            ctx->pc = 0x1C9348u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9344u;
            // 0x1c9348: 0xa0850054  sb          $a1, 0x54($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 84), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C934Cu;
            goto label_1c934c;
        }
    }
    ctx->pc = 0x1C934Cu;
label_1c934c:
    // 0x1c934c: 0x3e00008  jr          $ra
label_1c9350:
    if (ctx->pc == 0x1C9350u) {
        ctx->pc = 0x1C9354u;
        goto label_1c9354;
    }
    ctx->pc = 0x1C934Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9354u;
label_1c9354:
    // 0x1c9354: 0x0  nop
    ctx->pc = 0x1c9354u;
    // NOP
label_1c9358:
    // 0x1c9358: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c935c:
    // 0x1c935c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c935cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9360:
    // 0x1c9360: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9360u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9364:
    // 0x1c9364: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_1c9368:
    if (ctx->pc == 0x1C9368u) {
        ctx->pc = 0x1C9368u;
            // 0x1c9368: 0x2ca70002  sltiu       $a3, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x1C936Cu;
        goto label_1c936c;
    }
    ctx->pc = 0x1C9364u;
    {
        const bool branch_taken_0x1c9364 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1C9368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9364u;
            // 0x1c9368: 0x2ca70002  sltiu       $a3, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9364) {
            ctx->pc = 0x1C937Cu;
            goto label_1c937c;
        }
    }
    ctx->pc = 0x1C936Cu;
label_1c936c:
    // 0x1c936c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c936cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9370:
    // 0x1c9370: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9374:
    // 0x1c9374: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
label_1c9378:
    if (ctx->pc == 0x1C9378u) {
        ctx->pc = 0x1C937Cu;
        goto label_1c937c;
    }
    ctx->pc = 0x1C9374u;
    {
        const bool branch_taken_0x1c9374 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c9374) {
            ctx->pc = 0x1C9398u;
            goto label_1c9398;
        }
    }
    ctx->pc = 0x1C937Cu;
label_1c937c:
    // 0x1c937c: 0x10e00006  beqz        $a3, . + 4 + (0x6 << 2)
label_1c9380:
    if (ctx->pc == 0x1C9380u) {
        ctx->pc = 0x1C9384u;
        goto label_1c9384;
    }
    ctx->pc = 0x1C937Cu;
    {
        const bool branch_taken_0x1c937c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c937c) {
            ctx->pc = 0x1C9398u;
            goto label_1c9398;
        }
    }
    ctx->pc = 0x1C9384u;
label_1c9384:
    // 0x1c9384: 0x80820056  lb          $v0, 0x56($a0)
    ctx->pc = 0x1c9384u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 86)));
label_1c9388:
    // 0x1c9388: 0x10450003  beq         $v0, $a1, . + 4 + (0x3 << 2)
label_1c938c:
    if (ctx->pc == 0x1C938Cu) {
        ctx->pc = 0x1C938Cu;
            // 0x1c938c: 0x90830056  lbu         $v1, 0x56($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 86)));
        ctx->pc = 0x1C9390u;
        goto label_1c9390;
    }
    ctx->pc = 0x1C9388u;
    {
        const bool branch_taken_0x1c9388 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C938Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9388u;
            // 0x1c938c: 0x90830056  lbu         $v1, 0x56($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 86)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9388) {
            ctx->pc = 0x1C9398u;
            goto label_1c9398;
        }
    }
    ctx->pc = 0x1C9390u;
label_1c9390:
    // 0x1c9390: 0xa0850056  sb          $a1, 0x56($a0)
    ctx->pc = 0x1c9390u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 5));
label_1c9394:
    // 0x1c9394: 0xa0830001  sb          $v1, 0x1($a0)
    ctx->pc = 0x1c9394u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1), (uint8_t)GPR_U32(ctx, 3));
label_1c9398:
    // 0x1c9398: 0x3e00008  jr          $ra
label_1c939c:
    if (ctx->pc == 0x1C939Cu) {
        ctx->pc = 0x1C93A0u;
        goto label_1c93a0;
    }
    ctx->pc = 0x1C9398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C93A0u;
label_1c93a0:
    // 0x1c93a0: 0x3e00008  jr          $ra
label_1c93a4:
    if (ctx->pc == 0x1C93A4u) {
        ctx->pc = 0x1C93A4u;
            // 0x1c93a4: 0x80820057  lb          $v0, 0x57($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 87)));
        ctx->pc = 0x1C93A8u;
        goto label_1c93a8;
    }
    ctx->pc = 0x1C93A0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C93A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93A0u;
            // 0x1c93a4: 0x80820057  lb          $v0, 0x57($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 87)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C93A8u;
label_1c93a8:
    // 0x1c93a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c93ac:
    // 0x1c93ac: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c93acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c93b0:
    // 0x1c93b0: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c93b4:
    // 0x1c93b4: 0x54650006  bnel        $v1, $a1, . + 4 + (0x6 << 2)
label_1c93b8:
    if (ctx->pc == 0x1C93B8u) {
        ctx->pc = 0x1C93B8u;
            // 0x1c93b8: 0x90820001  lbu         $v0, 0x1($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->pc = 0x1C93BCu;
        goto label_1c93bc;
    }
    ctx->pc = 0x1C93B4u;
    {
        const bool branch_taken_0x1c93b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        if (branch_taken_0x1c93b4) {
            ctx->pc = 0x1C93B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93B4u;
            // 0x1c93b8: 0x90820001  lbu         $v0, 0x1($a0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C93D0u;
            goto label_1c93d0;
        }
    }
    ctx->pc = 0x1C93BCu;
label_1c93bc:
    // 0x1c93bc: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c93bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c93c0:
    // 0x1c93c0: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c93c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c93c4:
    // 0x1c93c4: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1c93c8:
    if (ctx->pc == 0x1C93C8u) {
        ctx->pc = 0x1C93CCu;
        goto label_1c93cc;
    }
    ctx->pc = 0x1C93C4u;
    {
        const bool branch_taken_0x1c93c4 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c93c4) {
            ctx->pc = 0x1C93D4u;
            goto label_1c93d4;
        }
    }
    ctx->pc = 0x1C93CCu;
label_1c93cc:
    // 0x1c93cc: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x1c93ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
label_1c93d0:
    // 0x1c93d0: 0xa0820056  sb          $v0, 0x56($a0)
    ctx->pc = 0x1c93d0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 86), (uint8_t)GPR_U32(ctx, 2));
label_1c93d4:
    // 0x1c93d4: 0x3e00008  jr          $ra
label_1c93d8:
    if (ctx->pc == 0x1C93D8u) {
        ctx->pc = 0x1C93DCu;
        goto label_1c93dc;
    }
    ctx->pc = 0x1C93D4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C93DCu;
label_1c93dc:
    // 0x1c93dc: 0x0  nop
    ctx->pc = 0x1c93dcu;
    // NOP
label_1c93e0:
    // 0x1c93e0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c93e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c93e4:
    // 0x1c93e4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c93e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c93e8:
    // 0x1c93e8: 0x8c625328  lw          $v0, 0x5328($v1)
    ctx->pc = 0x1c93e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 21288)));
label_1c93ec:
    // 0x1c93ec: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c93ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c93f0:
    // 0x1c93f0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x1c93f0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c93f4:
    // 0x1c93f4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c93f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1c93f8:
    // 0x1c93f8: 0x14500005  bne         $v0, $s0, . + 4 + (0x5 << 2)
label_1c93fc:
    if (ctx->pc == 0x1C93FCu) {
        ctx->pc = 0x1C93FCu;
            // 0x1c93fc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->pc = 0x1C9400u;
        goto label_1c9400;
    }
    ctx->pc = 0x1C93F8u;
    {
        const bool branch_taken_0x1c93f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x1C93FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C93F8u;
            // 0x1c93fc: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c93f8) {
            ctx->pc = 0x1C9410u;
            goto label_1c9410;
        }
    }
    ctx->pc = 0x1C9400u;
label_1c9400:
    // 0x1c9400: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9404:
    // 0x1c9404: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9408:
    // 0x1c9408: 0x58600013  blezl       $v1, . + 4 + (0x13 << 2)
label_1c940c:
    if (ctx->pc == 0x1C940Cu) {
        ctx->pc = 0x1C940Cu;
            // 0x1c940c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1C9410u;
        goto label_1c9410;
    }
    ctx->pc = 0x1C9408u;
    {
        const bool branch_taken_0x1c9408 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c9408) {
            ctx->pc = 0x1C940Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9408u;
            // 0x1c940c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9458u;
            goto label_1c9458;
        }
    }
    ctx->pc = 0x1C9410u;
label_1c9410:
    // 0x1c9410: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9410u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9414:
    // 0x1c9414: 0x24515350  addiu       $s1, $v0, 0x5350
    ctx->pc = 0x1c9414u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 21328));
label_1c9418:
    // 0x1c9418: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x1c9418u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c941c:
    // 0x1c941c: 0x1070000d  beq         $v1, $s0, . + 4 + (0xD << 2)
label_1c9420:
    if (ctx->pc == 0x1C9420u) {
        ctx->pc = 0x1C9420u;
            // 0x1c9420: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->pc = 0x1C9424u;
        goto label_1c9424;
    }
    ctx->pc = 0x1C941Cu;
    {
        const bool branch_taken_0x1c941c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x1C9420u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C941Cu;
            // 0x1c9420: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c941c) {
            ctx->pc = 0x1C9454u;
            goto label_1c9454;
        }
    }
    ctx->pc = 0x1C9424u;
label_1c9424:
    // 0x1c9424: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9424u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9428:
    // 0x1c9428: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c9428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c942c:
    // 0x1c942c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1c942cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c9430:
    // 0x1c9430: 0xc07096e  jal         func_1C25B8
label_1c9434:
    if (ctx->pc == 0x1C9434u) {
        ctx->pc = 0x1C9434u;
            // 0x1c9434: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C9438u;
        goto label_1c9438;
    }
    ctx->pc = 0x1C9430u;
    SET_GPR_U32(ctx, 31, 0x1C9438u);
    ctx->pc = 0x1C9434u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9430u;
            // 0x1c9434: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (runtime->hasFunction(0x1C25B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C25B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9438u; }
        if (ctx->pc != 0x1C9438u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C25B8_0x1c25b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9438u; }
        if (ctx->pc != 0x1C9438u) { return; }
    }
    ctx->pc = 0x1C9438u;
label_1c9438:
    // 0x1c9438: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c9438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c943c:
    // 0x1c943c: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1c943cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9440:
    // 0x1c9440: 0x24635360  addiu       $v1, $v1, 0x5360
    ctx->pc = 0x1c9440u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21344));
label_1c9444:
    // 0x1c9444: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c9444u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1c9448:
    // 0x1c9448: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x1c9448u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_1c944c:
    // 0x1c944c: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1c944cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1c9450:
    // 0x1c9450: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c9450u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1c9454:
    // 0x1c9454: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c9454u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9458:
    // 0x1c9458: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c9458u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c945c:
    // 0x1c945c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1c945cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9460:
    // 0x1c9460: 0x3e00008  jr          $ra
label_1c9464:
    if (ctx->pc == 0x1C9464u) {
        ctx->pc = 0x1C9464u;
            // 0x1c9464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C9468u;
        goto label_1c9468;
    }
    ctx->pc = 0x1C9460u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9464u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9460u;
            // 0x1c9464: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9468u;
label_1c9468:
    // 0x1c9468: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c946c:
    // 0x1c946c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c946cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c9470:
    // 0x1c9470: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9474:
    // 0x1c9474: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9478:
    // 0x1c9478: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c9478u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c947c:
    // 0x1c947c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1c9480:
    if (ctx->pc == 0x1C9480u) {
        ctx->pc = 0x1C9480u;
            // 0x1c9480: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x1C9484u;
        goto label_1c9484;
    }
    ctx->pc = 0x1C947Cu;
    {
        const bool branch_taken_0x1c947c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C9480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C947Cu;
            // 0x1c9480: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c947c) {
            ctx->pc = 0x1C9494u;
            goto label_1c9494;
        }
    }
    ctx->pc = 0x1C9484u;
label_1c9484:
    // 0x1c9484: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9488:
    // 0x1c9488: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c948c:
    // 0x1c948c: 0x18600013  blez        $v1, . + 4 + (0x13 << 2)
label_1c9490:
    if (ctx->pc == 0x1C9490u) {
        ctx->pc = 0x1C9490u;
            // 0x1c9490: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1C9494u;
        goto label_1c9494;
    }
    ctx->pc = 0x1C948Cu;
    {
        const bool branch_taken_0x1c948c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C948Cu;
            // 0x1c9490: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c948c) {
            ctx->pc = 0x1C94DCu;
            goto label_1c94dc;
        }
    }
    ctx->pc = 0x1C9494u;
label_1c9494:
    // 0x1c9494: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9494u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9498:
    // 0x1c9498: 0x24505350  addiu       $s0, $v0, 0x5350
    ctx->pc = 0x1c9498u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 21328));
label_1c949c:
    // 0x1c949c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c949cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c94a0:
    // 0x1c94a0: 0x1060000d  beqz        $v1, . + 4 + (0xD << 2)
label_1c94a4:
    if (ctx->pc == 0x1C94A4u) {
        ctx->pc = 0x1C94A4u;
            // 0x1c94a4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->pc = 0x1C94A8u;
        goto label_1c94a8;
    }
    ctx->pc = 0x1C94A0u;
    {
        const bool branch_taken_0x1c94a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C94A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94A0u;
            // 0x1c94a4: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c94a0) {
            ctx->pc = 0x1C94D8u;
            goto label_1c94d8;
        }
    }
    ctx->pc = 0x1C94A8u;
label_1c94a8:
    // 0x1c94a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c94a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c94ac:
    // 0x1c94ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1c94acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c94b0:
    // 0x1c94b0: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1c94b0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c94b4:
    // 0x1c94b4: 0xc07096e  jal         func_1C25B8
label_1c94b8:
    if (ctx->pc == 0x1C94B8u) {
        ctx->pc = 0x1C94B8u;
            // 0x1c94b8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1C94BCu;
        goto label_1c94bc;
    }
    ctx->pc = 0x1C94B4u;
    SET_GPR_U32(ctx, 31, 0x1C94BCu);
    ctx->pc = 0x1C94B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94B4u;
            // 0x1c94b8: 0x24080002  addiu       $t0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (runtime->hasFunction(0x1C25B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C25B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94BCu; }
        if (ctx->pc != 0x1C94BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C25B8_0x1c25b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C94BCu; }
        if (ctx->pc != 0x1C94BCu) { return; }
    }
    ctx->pc = 0x1C94BCu;
label_1c94bc:
    // 0x1c94bc: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c94bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c94c0:
    // 0x1c94c0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x1c94c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1c94c4:
    // 0x1c94c4: 0x24635360  addiu       $v1, $v1, 0x5360
    ctx->pc = 0x1c94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21344));
label_1c94c8:
    // 0x1c94c8: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1c94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1c94cc:
    // 0x1c94cc: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x1c94ccu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_1c94d0:
    // 0x1c94d0: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x1c94d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
label_1c94d4:
    // 0x1c94d4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c94d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c94d8:
    // 0x1c94d8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c94d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c94dc:
    // 0x1c94dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c94dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c94e0:
    // 0x1c94e0: 0x3e00008  jr          $ra
label_1c94e4:
    if (ctx->pc == 0x1C94E4u) {
        ctx->pc = 0x1C94E4u;
            // 0x1c94e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C94E8u;
        goto label_1c94e8;
    }
    ctx->pc = 0x1C94E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C94E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C94E0u;
            // 0x1c94e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C94E8u;
label_1c94e8:
    // 0x1c94e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c94ec:
    // 0x1c94ec: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c94ecu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c94f0:
    // 0x1c94f0: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c94f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c94f4:
    // 0x1c94f4: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1c94f4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c94f8:
    // 0x1c94f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c94f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c94fc:
    // 0x1c94fc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c94fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c9500:
    // 0x1c9500: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c9500u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1c9504:
    // 0x1c9504: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_1c9508:
    if (ctx->pc == 0x1C9508u) {
        ctx->pc = 0x1C9508u;
            // 0x1c9508: 0x2d240002  sltiu       $a0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x1C950Cu;
        goto label_1c950c;
    }
    ctx->pc = 0x1C9504u;
    {
        const bool branch_taken_0x1c9504 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C9508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9504u;
            // 0x1c9508: 0x2d240002  sltiu       $a0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9504) {
            ctx->pc = 0x1C951Cu;
            goto label_1c951c;
        }
    }
    ctx->pc = 0x1C950Cu;
label_1c950c:
    // 0x1c950c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c950cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9510:
    // 0x1c9510: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9510u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9514:
    // 0x1c9514: 0x18600015  blez        $v1, . + 4 + (0x15 << 2)
label_1c9518:
    if (ctx->pc == 0x1C9518u) {
        ctx->pc = 0x1C9518u;
            // 0x1c9518: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1C951Cu;
        goto label_1c951c;
    }
    ctx->pc = 0x1C9514u;
    {
        const bool branch_taken_0x1c9514 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9518u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9514u;
            // 0x1c9518: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9514) {
            ctx->pc = 0x1C956Cu;
            goto label_1c956c;
        }
    }
    ctx->pc = 0x1C951Cu;
label_1c951c:
    // 0x1c951c: 0x10800013  beqz        $a0, . + 4 + (0x13 << 2)
label_1c9520:
    if (ctx->pc == 0x1C9520u) {
        ctx->pc = 0x1C9520u;
            // 0x1c9520: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1C9524u;
        goto label_1c9524;
    }
    ctx->pc = 0x1C951Cu;
    {
        const bool branch_taken_0x1c951c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C951Cu;
            // 0x1c9520: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c951c) {
            ctx->pc = 0x1C956Cu;
            goto label_1c956c;
        }
    }
    ctx->pc = 0x1C9524u;
label_1c9524:
    // 0x1c9524: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9528:
    // 0x1c9528: 0x8c435354  lw          $v1, 0x5354($v0)
    ctx->pc = 0x1c9528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21332)));
label_1c952c:
    // 0x1c952c: 0x1065000f  beq         $v1, $a1, . + 4 + (0xF << 2)
label_1c9530:
    if (ctx->pc == 0x1C9530u) {
        ctx->pc = 0x1C9530u;
            // 0x1c9530: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->pc = 0x1C9534u;
        goto label_1c9534;
    }
    ctx->pc = 0x1C952Cu;
    {
        const bool branch_taken_0x1c952c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C9530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C952Cu;
            // 0x1c9530: 0x91080  sll         $v0, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c952c) {
            ctx->pc = 0x1C956Cu;
            goto label_1c956c;
        }
    }
    ctx->pc = 0x1C9534u;
label_1c9534:
    // 0x1c9534: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c9534u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_1c9538:
    // 0x1c9538: 0x26105360  addiu       $s0, $s0, 0x5360
    ctx->pc = 0x1c9538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21344));
label_1c953c:
    // 0x1c953c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c953cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c9540:
    // 0x1c9540: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c9540u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9544:
    // 0x1c9544: 0x10650008  beq         $v1, $a1, . + 4 + (0x8 << 2)
label_1c9548:
    if (ctx->pc == 0x1C9548u) {
        ctx->pc = 0x1C9548u;
            // 0x1c9548: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1C954Cu;
        goto label_1c954c;
    }
    ctx->pc = 0x1C9544u;
    {
        const bool branch_taken_0x1c9544 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x1C9548u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9544u;
            // 0x1c9548: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9544) {
            ctx->pc = 0x1C9568u;
            goto label_1c9568;
        }
    }
    ctx->pc = 0x1C954Cu;
label_1c954c:
    // 0x1c954c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c954cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c9550:
    // 0x1c9550: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9554:
    // 0x1c9554: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x1c9554u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1c9558:
    // 0x1c9558: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c9558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c955c:
    // 0x1c955c: 0xc07096e  jal         func_1C25B8
label_1c9560:
    if (ctx->pc == 0x1C9560u) {
        ctx->pc = 0x1C9560u;
            // 0x1c9560: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->pc = 0x1C9564u;
        goto label_1c9564;
    }
    ctx->pc = 0x1C955Cu;
    SET_GPR_U32(ctx, 31, 0x1C9564u);
    ctx->pc = 0x1C9560u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C955Cu;
            // 0x1c9560: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (runtime->hasFunction(0x1C25B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C25B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9564u; }
        if (ctx->pc != 0x1C9564u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C25B8_0x1c25b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9564u; }
        if (ctx->pc != 0x1C9564u) { return; }
    }
    ctx->pc = 0x1C9564u;
label_1c9564:
    // 0x1c9564: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c9564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c9568:
    // 0x1c9568: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c9568u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c956c:
    // 0x1c956c: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c956cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c9570:
    // 0x1c9570: 0x3e00008  jr          $ra
label_1c9574:
    if (ctx->pc == 0x1C9574u) {
        ctx->pc = 0x1C9574u;
            // 0x1c9574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C9578u;
        goto label_1c9578;
    }
    ctx->pc = 0x1C9570u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9574u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9570u;
            // 0x1c9574: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9578u;
label_1c9578:
    // 0x1c9578: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c957c:
    // 0x1c957c: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c957cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c9580:
    // 0x1c9580: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9580u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9584:
    // 0x1c9584: 0x80482d  daddu       $t1, $a0, $zero
    ctx->pc = 0x1c9584u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9588:
    // 0x1c9588: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9588u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c958c:
    // 0x1c958c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c958cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c9590:
    // 0x1c9590: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1c9590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1c9594:
    // 0x1c9594: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_1c9598:
    if (ctx->pc == 0x1C9598u) {
        ctx->pc = 0x1C9598u;
            // 0x1c9598: 0x2d240002  sltiu       $a0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->pc = 0x1C959Cu;
        goto label_1c959c;
    }
    ctx->pc = 0x1C9594u;
    {
        const bool branch_taken_0x1c9594 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C9598u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9594u;
            // 0x1c9598: 0x2d240002  sltiu       $a0, $t1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9594) {
            ctx->pc = 0x1C95ACu;
            goto label_1c95ac;
        }
    }
    ctx->pc = 0x1C959Cu;
label_1c959c:
    // 0x1c959c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c959cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c95a0:
    // 0x1c95a0: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c95a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c95a4:
    // 0x1c95a4: 0x18600012  blez        $v1, . + 4 + (0x12 << 2)
label_1c95a8:
    if (ctx->pc == 0x1C95A8u) {
        ctx->pc = 0x1C95A8u;
            // 0x1c95a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1C95ACu;
        goto label_1c95ac;
    }
    ctx->pc = 0x1C95A4u;
    {
        const bool branch_taken_0x1c95a4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C95A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95A4u;
            // 0x1c95a8: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95a4) {
            ctx->pc = 0x1C95F0u;
            goto label_1c95f0;
        }
    }
    ctx->pc = 0x1C95ACu;
label_1c95ac:
    // 0x1c95ac: 0x10800010  beqz        $a0, . + 4 + (0x10 << 2)
label_1c95b0:
    if (ctx->pc == 0x1C95B0u) {
        ctx->pc = 0x1C95B0u;
            // 0x1c95b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1C95B4u;
        goto label_1c95b4;
    }
    ctx->pc = 0x1C95ACu;
    {
        const bool branch_taken_0x1c95ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C95B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95ACu;
            // 0x1c95b0: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95ac) {
            ctx->pc = 0x1C95F0u;
            goto label_1c95f0;
        }
    }
    ctx->pc = 0x1C95B4u;
label_1c95b4:
    // 0x1c95b4: 0x91080  sll         $v0, $t1, 2
    ctx->pc = 0x1c95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
label_1c95b8:
    // 0x1c95b8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c95b8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_1c95bc:
    // 0x1c95bc: 0x26105360  addiu       $s0, $s0, 0x5360
    ctx->pc = 0x1c95bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21344));
label_1c95c0:
    // 0x1c95c0: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c95c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c95c4:
    // 0x1c95c4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1c95c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c95c8:
    // 0x1c95c8: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1c95cc:
    if (ctx->pc == 0x1C95CCu) {
        ctx->pc = 0x1C95CCu;
            // 0x1c95cc: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->pc = 0x1C95D0u;
        goto label_1c95d0;
    }
    ctx->pc = 0x1C95C8u;
    {
        const bool branch_taken_0x1c95c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C95CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95C8u;
            // 0x1c95cc: 0x24040011  addiu       $a0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c95c8) {
            ctx->pc = 0x1C95ECu;
            goto label_1c95ec;
        }
    }
    ctx->pc = 0x1C95D0u;
label_1c95d0:
    // 0x1c95d0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c95d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c95d4:
    // 0x1c95d4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c95d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c95d8:
    // 0x1c95d8: 0x27a70004  addiu       $a3, $sp, 0x4
    ctx->pc = 0x1c95d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1c95dc:
    // 0x1c95dc: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1c95dcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c95e0:
    // 0x1c95e0: 0xc07096e  jal         func_1C25B8
label_1c95e4:
    if (ctx->pc == 0x1C95E4u) {
        ctx->pc = 0x1C95E4u;
            // 0x1c95e4: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->pc = 0x1C95E8u;
        goto label_1c95e8;
    }
    ctx->pc = 0x1C95E0u;
    SET_GPR_U32(ctx, 31, 0x1C95E8u);
    ctx->pc = 0x1C95E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95E0u;
            // 0x1c95e4: 0xafa90000  sw          $t1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 9));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (runtime->hasFunction(0x1C25B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C25B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95E8u; }
        if (ctx->pc != 0x1C95E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C25B8_0x1c25b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C95E8u; }
        if (ctx->pc != 0x1C95E8u) { return; }
    }
    ctx->pc = 0x1C95E8u;
label_1c95e8:
    // 0x1c95e8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c95e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c95ec:
    // 0x1c95ec: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c95ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c95f0:
    // 0x1c95f0: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1c95f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c95f4:
    // 0x1c95f4: 0x3e00008  jr          $ra
label_1c95f8:
    if (ctx->pc == 0x1C95F8u) {
        ctx->pc = 0x1C95F8u;
            // 0x1c95f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C95FCu;
        goto label_1c95fc;
    }
    ctx->pc = 0x1C95F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C95F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C95F4u;
            // 0x1c95f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C95FCu;
label_1c95fc:
    // 0x1c95fc: 0x0  nop
    ctx->pc = 0x1c95fcu;
    // NOP
label_1c9600:
    // 0x1c9600: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x1c9600u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1c9604:
    // 0x1c9604: 0x2c840002  sltiu       $a0, $a0, 0x2
    ctx->pc = 0x1c9604u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
label_1c9608:
    // 0x1c9608: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c960c:
    if (ctx->pc == 0x1C960Cu) {
        ctx->pc = 0x1C960Cu;
            // 0x1c960c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9610u;
        goto label_1c9610;
    }
    ctx->pc = 0x1C9608u;
    {
        const bool branch_taken_0x1c9608 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C960Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9608u;
            // 0x1c960c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9608) {
            ctx->pc = 0x1C961Cu;
            goto label_1c961c;
        }
    }
    ctx->pc = 0x1C9610u;
label_1c9610:
    // 0x1c9610: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9614:
    // 0x1c9614: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1c9614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1c9618:
    // 0x1c9618: 0x8c425360  lw          $v0, 0x5360($v0)
    ctx->pc = 0x1c9618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21344)));
label_1c961c:
    // 0x1c961c: 0x3e00008  jr          $ra
label_1c9620:
    if (ctx->pc == 0x1C9620u) {
        ctx->pc = 0x1C9624u;
        goto label_1c9624;
    }
    ctx->pc = 0x1C961Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9624u;
label_1c9624:
    // 0x1c9624: 0x0  nop
    ctx->pc = 0x1c9624u;
    // NOP
label_1c9628:
    // 0x1c9628: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c962c:
    // 0x1c962c: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c962cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c9630:
    // 0x1c9630: 0xa444537c  sh          $a0, 0x537C($v0)
    ctx->pc = 0x1c9630u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 21372), (uint16_t)GPR_U32(ctx, 4));
label_1c9634:
    // 0x1c9634: 0x3e00008  jr          $ra
label_1c9638:
    if (ctx->pc == 0x1C9638u) {
        ctx->pc = 0x1C9638u;
            // 0x1c9638: 0xa465537e  sh          $a1, 0x537E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 21374), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = 0x1C963Cu;
        goto label_1c963c;
    }
    ctx->pc = 0x1C9634u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9634u;
            // 0x1c9638: 0xa465537e  sh          $a1, 0x537E($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 21374), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C963Cu;
label_1c963c:
    // 0x1c963c: 0x0  nop
    ctx->pc = 0x1c963cu;
    // NOP
label_1c9640:
    // 0x1c9640: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9640u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9644:
    // 0x1c9644: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1c9644u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1c9648:
    // 0x1c9648: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9648u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c964c:
    // 0x1c964c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c964cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9650:
    // 0x1c9650: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9650u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c9654:
    // 0x1c9654: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1c9654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1c9658:
    // 0x1c9658: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1c965c:
    if (ctx->pc == 0x1C965Cu) {
        ctx->pc = 0x1C965Cu;
            // 0x1c965c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1C9660u;
        goto label_1c9660;
    }
    ctx->pc = 0x1C9658u;
    {
        const bool branch_taken_0x1c9658 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C965Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9658u;
            // 0x1c965c: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9658) {
            ctx->pc = 0x1C9670u;
            goto label_1c9670;
        }
    }
    ctx->pc = 0x1C9660u;
label_1c9660:
    // 0x1c9660: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9660u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9664:
    // 0x1c9664: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9668:
    // 0x1c9668: 0x18600020  blez        $v1, . + 4 + (0x20 << 2)
label_1c966c:
    if (ctx->pc == 0x1C966Cu) {
        ctx->pc = 0x1C966Cu;
            // 0x1c966c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C9670u;
        goto label_1c9670;
    }
    ctx->pc = 0x1C9668u;
    {
        const bool branch_taken_0x1c9668 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C966Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9668u;
            // 0x1c966c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9668) {
            ctx->pc = 0x1C96ECu;
            goto label_1c96ec;
        }
    }
    ctx->pc = 0x1C9670u;
label_1c9670:
    // 0x1c9670: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x1c9670u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
label_1c9674:
    // 0x1c9674: 0x2463536c  addiu       $v1, $v1, 0x536C
    ctx->pc = 0x1c9674u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21356));
label_1c9678:
    // 0x1c9678: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1c9678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c967c:
    // 0x1c967c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1c967cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1c9680:
    // 0x1c9680: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_1c9684:
    if (ctx->pc == 0x1C9684u) {
        ctx->pc = 0x1C9684u;
            // 0x1c9684: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C9688u;
        goto label_1c9688;
    }
    ctx->pc = 0x1C9680u;
    {
        const bool branch_taken_0x1c9680 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9680u;
            // 0x1c9684: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9680) {
            ctx->pc = 0x1C96E8u;
            goto label_1c96e8;
        }
    }
    ctx->pc = 0x1C9688u;
label_1c9688:
    // 0x1c9688: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c9688u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_1c968c:
    // 0x1c968c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1c968cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
label_1c9690:
    // 0x1c9690: 0x2610533c  addiu       $s0, $s0, 0x533C
    ctx->pc = 0x1c9690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21308));
label_1c9694:
    // 0x1c9694: 0x26317dc0  addiu       $s1, $s1, 0x7DC0
    ctx->pc = 0x1c9694u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32192));
label_1c9698:
    // 0x1c9698: 0xc0454a2  jal         func_115288
label_1c969c:
    if (ctx->pc == 0x1C969Cu) {
        ctx->pc = 0x1C969Cu;
            // 0x1c969c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C96A0u;
        goto label_1c96a0;
    }
    ctx->pc = 0x1C9698u;
    SET_GPR_U32(ctx, 31, 0x1C96A0u);
    ctx->pc = 0x1C969Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9698u;
            // 0x1c969c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115288u;
    if (runtime->hasFunction(0x115288u)) {
        auto targetFn = runtime->lookupFunction(0x115288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96A0u; }
        if (ctx->pc != 0x1C96A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115288_0x115288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96A0u; }
        if (ctx->pc != 0x1C96A0u) { return; }
    }
    ctx->pc = 0x1C96A0u;
label_1c96a0:
    // 0x1c96a0: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1c96a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_1c96a4:
    // 0x1c96a4: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1c96a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
label_1c96a8:
    // 0x1c96a8: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c96a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c96ac:
    // 0x1c96ac: 0xc070896  jal         func_1C2258
label_1c96b0:
    if (ctx->pc == 0x1C96B0u) {
        ctx->pc = 0x1C96B0u;
            // 0x1c96b0: 0x26105374  addiu       $s0, $s0, 0x5374 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21364));
        ctx->pc = 0x1C96B4u;
        goto label_1c96b4;
    }
    ctx->pc = 0x1C96ACu;
    SET_GPR_U32(ctx, 31, 0x1C96B4u);
    ctx->pc = 0x1C96B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96ACu;
            // 0x1c96b0: 0x26105374  addiu       $s0, $s0, 0x5374 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 21364));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C2258u;
    if (runtime->hasFunction(0x1C2258u)) {
        auto targetFn = runtime->lookupFunction(0x1C2258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96B4u; }
        if (ctx->pc != 0x1C96B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2258_0x1c2258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96B4u; }
        if (ctx->pc != 0x1C96B4u) { return; }
    }
    ctx->pc = 0x1C96B4u;
label_1c96b4:
    // 0x1c96b4: 0x0  nop
    ctx->pc = 0x1c96b4u;
    // NOP
label_1c96b8:
    // 0x1c96b8: 0xc0454a2  jal         func_115288
label_1c96bc:
    if (ctx->pc == 0x1C96BCu) {
        ctx->pc = 0x1C96BCu;
            // 0x1c96bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C96C0u;
        goto label_1c96c0;
    }
    ctx->pc = 0x1C96B8u;
    SET_GPR_U32(ctx, 31, 0x1C96C0u);
    ctx->pc = 0x1C96BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96B8u;
            // 0x1c96bc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x115288u;
    if (runtime->hasFunction(0x115288u)) {
        auto targetFn = runtime->lookupFunction(0x115288u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96C0u; }
        if (ctx->pc != 0x1C96C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00115288_0x115288(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96C0u; }
        if (ctx->pc != 0x1C96C0u) { return; }
    }
    ctx->pc = 0x1C96C0u;
label_1c96c0:
    // 0x1c96c0: 0xc072272  jal         func_1C89C8
label_1c96c4:
    if (ctx->pc == 0x1C96C4u) {
        ctx->pc = 0x1C96C8u;
        goto label_1c96c8;
    }
    ctx->pc = 0x1C96C0u;
    SET_GPR_U32(ctx, 31, 0x1C96C8u);
    ctx->pc = 0x1C89C8u;
    if (runtime->hasFunction(0x1C89C8u)) {
        auto targetFn = runtime->lookupFunction(0x1C89C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96C8u; }
        if (ctx->pc != 0x1C96C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C89C8_0x1c89c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96C8u; }
        if (ctx->pc != 0x1C96C8u) { return; }
    }
    ctx->pc = 0x1C96C8u;
label_1c96c8:
    // 0x1c96c8: 0xc0724a8  jal         func_1C92A0
label_1c96cc:
    if (ctx->pc == 0x1C96CCu) {
        ctx->pc = 0x1C96D0u;
        goto label_1c96d0;
    }
    ctx->pc = 0x1C96C8u;
    SET_GPR_U32(ctx, 31, 0x1C96D0u);
    ctx->pc = 0x1C92A0u;
    goto label_1c92a0;
    ctx->pc = 0x1C96D0u;
label_1c96d0:
    // 0x1c96d0: 0xc070950  jal         func_1C2540
label_1c96d4:
    if (ctx->pc == 0x1C96D4u) {
        ctx->pc = 0x1C96D8u;
        goto label_1c96d8;
    }
    ctx->pc = 0x1C96D0u;
    SET_GPR_U32(ctx, 31, 0x1C96D8u);
    ctx->pc = 0x1C2540u;
    if (runtime->hasFunction(0x1C2540u)) {
        auto targetFn = runtime->lookupFunction(0x1C2540u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96D8u; }
        if (ctx->pc != 0x1C96D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C2540_0x1c2540(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96D8u; }
        if (ctx->pc != 0x1C96D8u) { return; }
    }
    ctx->pc = 0x1C96D8u;
label_1c96d8:
    // 0x1c96d8: 0xc073624  jal         func_1CD890
label_1c96dc:
    if (ctx->pc == 0x1C96DCu) {
        ctx->pc = 0x1C96E0u;
        goto label_1c96e0;
    }
    ctx->pc = 0x1C96D8u;
    SET_GPR_U32(ctx, 31, 0x1C96E0u);
    ctx->pc = 0x1CD890u;
    if (runtime->hasFunction(0x1CD890u)) {
        auto targetFn = runtime->lookupFunction(0x1CD890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E0u; }
        if (ctx->pc != 0x1C96E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD890_0x1cd890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E0u; }
        if (ctx->pc != 0x1C96E0u) { return; }
    }
    ctx->pc = 0x1C96E0u;
label_1c96e0:
    // 0x1c96e0: 0xc07353c  jal         func_1CD4F0
label_1c96e4:
    if (ctx->pc == 0x1C96E4u) {
        ctx->pc = 0x1C96E8u;
        goto label_1c96e8;
    }
    ctx->pc = 0x1C96E0u;
    SET_GPR_U32(ctx, 31, 0x1C96E8u);
    ctx->pc = 0x1CD4F0u;
    if (runtime->hasFunction(0x1CD4F0u)) {
        auto targetFn = runtime->lookupFunction(0x1CD4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E8u; }
        if (ctx->pc != 0x1C96E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CD4F0_0x1cd4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C96E8u; }
        if (ctx->pc != 0x1C96E8u) { return; }
    }
    ctx->pc = 0x1C96E8u;
label_1c96e8:
    // 0x1c96e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c96e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c96ec:
    // 0x1c96ec: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1c96ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c96f0:
    // 0x1c96f0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1c96f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c96f4:
    // 0x1c96f4: 0x3e00008  jr          $ra
label_1c96f8:
    if (ctx->pc == 0x1C96F8u) {
        ctx->pc = 0x1C96F8u;
            // 0x1c96f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1C96FCu;
        goto label_1c96fc;
    }
    ctx->pc = 0x1C96F4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C96F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C96F4u;
            // 0x1c96f8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C96FCu;
label_1c96fc:
    // 0x1c96fc: 0x0  nop
    ctx->pc = 0x1c96fcu;
    // NOP
label_1c9700:
    // 0x1c9700: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1c9700u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1c9704:
    // 0x1c9704: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9708:
    // 0x1c9708: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1c9708u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1c970c:
    // 0x1c970c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1c970cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9710:
    // 0x1c9710: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1c9710u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1c9714:
    // 0x1c9714: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1c9714u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1c9718:
    // 0x1c9718: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1c9718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1c971c:
    // 0x1c971c: 0x24537780  addiu       $s3, $v0, 0x7780
    ctx->pc = 0x1c971cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 30592));
label_1c9720:
    // 0x1c9720: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1c9720u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1c9724:
    // 0x1c9724: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1c9724u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1c9728:
    // 0x1c9728: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1c9728u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1c972c:
    // 0x1c972c: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1c972cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1c9730:
    // 0x1c9730: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1c9730u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1c9734:
    // 0x1c9734: 0x82620000  lb          $v0, 0x0($s3)
    ctx->pc = 0x1c9734u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_1c9738:
    // 0x1c9738: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_1c973c:
    if (ctx->pc == 0x1C973Cu) {
        ctx->pc = 0x1C973Cu;
            // 0x1c973c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9740u;
        goto label_1c9740;
    }
    ctx->pc = 0x1C9738u;
    {
        const bool branch_taken_0x1c9738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9738u;
            // 0x1c973c: 0x80b02d  daddu       $s6, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9738) {
            ctx->pc = 0x1C976Cu;
            goto label_1c976c;
        }
    }
    ctx->pc = 0x1C9740u;
label_1c9740:
    // 0x1c9740: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1c9740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c9744:
    // 0x1c9744: 0x260182d  daddu       $v1, $s3, $zero
    ctx->pc = 0x1c9744u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c9748:
    // 0x1c9748: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c9748u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c974c:
    // 0x1c974c: 0x24840064  addiu       $a0, $a0, 0x64
    ctx->pc = 0x1c974cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 100));
label_1c9750:
    // 0x1c9750: 0x2a220010  slti        $v0, $s1, 0x10
    ctx->pc = 0x1c9750u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
label_1c9754:
    // 0x1c9754: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1c9758:
    if (ctx->pc == 0x1C9758u) {
        ctx->pc = 0x1C9758u;
            // 0x1c9758: 0x24630064  addiu       $v1, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->pc = 0x1C975Cu;
        goto label_1c975c;
    }
    ctx->pc = 0x1C9754u;
    {
        const bool branch_taken_0x1c9754 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9754u;
            // 0x1c9758: 0x24630064  addiu       $v1, $v1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9754) {
            ctx->pc = 0x1C976Cu;
            goto label_1c976c;
        }
    }
    ctx->pc = 0x1C975Cu;
label_1c975c:
    // 0x1c975c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x1c975cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9760:
    // 0x1c9760: 0x0  nop
    ctx->pc = 0x1c9760u;
    // NOP
label_1c9764:
    // 0x1c9764: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_1c9768:
    if (ctx->pc == 0x1C9768u) {
        ctx->pc = 0x1C9768u;
            // 0x1c9768: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C976Cu;
        goto label_1c976c;
    }
    ctx->pc = 0x1C9764u;
    {
        const bool branch_taken_0x1c9764 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9768u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9764u;
            // 0x1c9768: 0x60982d  daddu       $s3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9764) {
            ctx->pc = 0x1C9748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9748;
        }
    }
    ctx->pc = 0x1C976Cu;
label_1c976c:
    // 0x1c976c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x1c976cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1c9770:
    // 0x1c9770: 0x122300cd  beq         $s1, $v1, . + 4 + (0xCD << 2)
label_1c9774:
    if (ctx->pc == 0x1C9774u) {
        ctx->pc = 0x1C9774u;
            // 0x1c9774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9778u;
        goto label_1c9778;
    }
    ctx->pc = 0x1C9770u;
    {
        const bool branch_taken_0x1c9770 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C9774u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9770u;
            // 0x1c9774: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9770) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C9778u;
label_1c9778:
    // 0x1c9778: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c977c:
    // 0x1c977c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c977cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9780:
    // 0x1c9780: 0x8c445328  lw          $a0, 0x5328($v0)
    ctx->pc = 0x1c9780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9784:
    // 0x1c9784: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
label_1c9788:
    if (ctx->pc == 0x1C9788u) {
        ctx->pc = 0x1C9788u;
            // 0x1c9788: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C978Cu;
        goto label_1c978c;
    }
    ctx->pc = 0x1C9784u;
    {
        const bool branch_taken_0x1c9784 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1c9784) {
            ctx->pc = 0x1C9788u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9784u;
            // 0x1c9788: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C97A8u;
            goto label_1c97a8;
        }
    }
    ctx->pc = 0x1C978Cu;
label_1c978c:
    // 0x1c978c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c978cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9790:
    // 0x1c9790: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9794:
    // 0x1c9794: 0x5c600004  bgtzl       $v1, . + 4 + (0x4 << 2)
label_1c9798:
    if (ctx->pc == 0x1C9798u) {
        ctx->pc = 0x1C9798u;
            // 0x1c9798: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C979Cu;
        goto label_1c979c;
    }
    ctx->pc = 0x1C9794u;
    {
        const bool branch_taken_0x1c9794 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1c9794) {
            ctx->pc = 0x1C9798u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9794u;
            // 0x1c9798: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C97A8u;
            goto label_1c97a8;
        }
    }
    ctx->pc = 0x1C979Cu;
label_1c979c:
    // 0x1c979c: 0xa2640000  sb          $a0, 0x0($s3)
    ctx->pc = 0x1c979cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 4));
label_1c97a0:
    // 0x1c97a0: 0x100000c1  b           . + 4 + (0xC1 << 2)
label_1c97a4:
    if (ctx->pc == 0x1C97A4u) {
        ctx->pc = 0x1C97A4u;
            // 0x1c97a4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C97A8u;
        goto label_1c97a8;
    }
    ctx->pc = 0x1C97A0u;
    {
        const bool branch_taken_0x1c97a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C97A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97A0u;
            // 0x1c97a4: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97a0) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C97A8u;
label_1c97a8:
    // 0x1c97a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c97a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c97ac:
    // 0x1c97ac: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x1c97acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
label_1c97b0:
    // 0x1c97b0: 0xc049cb6  jal         func_1272D8
label_1c97b4:
    if (ctx->pc == 0x1C97B4u) {
        ctx->pc = 0x1C97B4u;
            // 0x1c97b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C97B8u;
        goto label_1c97b8;
    }
    ctx->pc = 0x1C97B0u;
    SET_GPR_U32(ctx, 31, 0x1C97B8u);
    ctx->pc = 0x1C97B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97B0u;
            // 0x1c97b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97B8u; }
        if (ctx->pc != 0x1C97B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97B8u; }
        if (ctx->pc != 0x1C97B8u) { return; }
    }
    ctx->pc = 0x1C97B8u;
label_1c97b8:
    // 0x1c97b8: 0x1a40001f  blez        $s2, . + 4 + (0x1F << 2)
label_1c97bc:
    if (ctx->pc == 0x1C97BCu) {
        ctx->pc = 0x1C97BCu;
            // 0x1c97bc: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->pc = 0x1C97C0u;
        goto label_1c97c0;
    }
    ctx->pc = 0x1C97B8u;
    {
        const bool branch_taken_0x1c97b8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1C97BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97B8u;
            // 0x1c97bc: 0xae720004  sw          $s2, 0x4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97b8) {
            ctx->pc = 0x1C9838u;
            goto label_1c9838;
        }
    }
    ctx->pc = 0x1C97C0u;
label_1c97c0:
    // 0x1c97c0: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x1c97c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1c97c4:
    // 0x1c97c4: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x1c97c4u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
label_1c97c8:
    // 0x1c97c8: 0x280802d  daddu       $s0, $s4, $zero
    ctx->pc = 0x1c97c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c97cc:
    // 0x1c97cc: 0x0  nop
    ctx->pc = 0x1c97ccu;
    // NOP
label_1c97d0:
    // 0x1c97d0: 0xc0722aa  jal         func_1C8AA8
label_1c97d4:
    if (ctx->pc == 0x1C97D4u) {
        ctx->pc = 0x1C97D8u;
        goto label_1c97d8;
    }
    ctx->pc = 0x1C97D0u;
    SET_GPR_U32(ctx, 31, 0x1C97D8u);
    ctx->pc = 0x1C8AA8u;
    if (runtime->hasFunction(0x1C8AA8u)) {
        auto targetFn = runtime->lookupFunction(0x1C8AA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97D8u; }
        if (ctx->pc != 0x1C97D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8AA8_0x1c8aa8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97D8u; }
        if (ctx->pc != 0x1C97D8u) { return; }
    }
    ctx->pc = 0x1C97D8u;
label_1c97d8:
    // 0x1c97d8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c97d8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c97dc:
    // 0x1c97dc: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
label_1c97e0:
    if (ctx->pc == 0x1C97E0u) {
        ctx->pc = 0x1C97E0u;
            // 0x1c97e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x1C97E4u;
        goto label_1c97e4;
    }
    ctx->pc = 0x1C97DCu;
    {
        const bool branch_taken_0x1c97dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C97E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97DCu;
            // 0x1c97e0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97dc) {
            ctx->pc = 0x1C9828u;
            goto label_1c9828;
        }
    }
    ctx->pc = 0x1C97E4u;
label_1c97e4:
    // 0x1c97e4: 0xc06d212  jal         func_1B4848
label_1c97e8:
    if (ctx->pc == 0x1C97E8u) {
        ctx->pc = 0x1C97E8u;
            // 0x1c97e8: 0x26a4b5c0  addiu       $a0, $s5, -0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948288));
        ctx->pc = 0x1C97ECu;
        goto label_1c97ec;
    }
    ctx->pc = 0x1C97E4u;
    SET_GPR_U32(ctx, 31, 0x1C97ECu);
    ctx->pc = 0x1C97E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97E4u;
            // 0x1c97e8: 0x26a4b5c0  addiu       $a0, $s5, -0x4A40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948288));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97ECu; }
        if (ctx->pc != 0x1C97ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C97ECu; }
        if (ctx->pc != 0x1C97ECu) { return; }
    }
    ctx->pc = 0x1C97ECu;
label_1c97ec:
    // 0x1c97ec: 0x1a4000ae  blez        $s2, . + 4 + (0xAE << 2)
label_1c97f0:
    if (ctx->pc == 0x1C97F0u) {
        ctx->pc = 0x1C97F0u;
            // 0x1c97f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C97F4u;
        goto label_1c97f4;
    }
    ctx->pc = 0x1C97ECu;
    {
        const bool branch_taken_0x1c97ec = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1C97F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C97ECu;
            // 0x1c97f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c97ec) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C97F4u;
label_1c97f4:
    // 0x1c97f4: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1c97f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c97f8:
    // 0x1c97f8: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1c97f8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c97fc:
    // 0x1c97fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1c97fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c9800:
    // 0x1c9800: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x1c9800u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_1c9804:
    // 0x1c9804: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c9808:
    if (ctx->pc == 0x1C9808u) {
        ctx->pc = 0x1C9808u;
            // 0x1c9808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C980Cu;
        goto label_1c980c;
    }
    ctx->pc = 0x1C9804u;
    {
        const bool branch_taken_0x1c9804 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9808u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9804u;
            // 0x1c9808: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9804) {
            ctx->pc = 0x1C9814u;
            goto label_1c9814;
        }
    }
    ctx->pc = 0x1C980Cu;
label_1c980c:
    // 0x1c980c: 0xc0722c8  jal         func_1C8B20
label_1c9810:
    if (ctx->pc == 0x1C9810u) {
        ctx->pc = 0x1C9814u;
        goto label_1c9814;
    }
    ctx->pc = 0x1C980Cu;
    SET_GPR_U32(ctx, 31, 0x1C9814u);
    ctx->pc = 0x1C8B20u;
    if (runtime->hasFunction(0x1C8B20u)) {
        auto targetFn = runtime->lookupFunction(0x1C8B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9814u; }
        if (ctx->pc != 0x1C9814u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8B20_0x1c8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9814u; }
        if (ctx->pc != 0x1C9814u) { return; }
    }
    ctx->pc = 0x1C9814u;
label_1c9814:
    // 0x1c9814: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x1c9814u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
label_1c9818:
    // 0x1c9818: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_1c981c:
    if (ctx->pc == 0x1C981Cu) {
        ctx->pc = 0x1C981Cu;
            // 0x1c981c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x1C9820u;
        goto label_1c9820;
    }
    ctx->pc = 0x1C9818u;
    {
        const bool branch_taken_0x1c9818 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9818) {
            ctx->pc = 0x1C981Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9818u;
            // 0x1c981c: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9800u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9800;
        }
    }
    ctx->pc = 0x1C9820u;
label_1c9820:
    // 0x1c9820: 0x100000a1  b           . + 4 + (0xA1 << 2)
label_1c9824:
    if (ctx->pc == 0x1C9824u) {
        ctx->pc = 0x1C9824u;
            // 0x1c9824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9828u;
        goto label_1c9828;
    }
    ctx->pc = 0x1C9820u;
    {
        const bool branch_taken_0x1c9820 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9824u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9820u;
            // 0x1c9824: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9820) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C9828u;
label_1c9828:
    // 0x1c9828: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c9828u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c982c:
    // 0x1c982c: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1c982cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1c9830:
    // 0x1c9830: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_1c9834:
    if (ctx->pc == 0x1C9834u) {
        ctx->pc = 0x1C9838u;
        goto label_1c9838;
    }
    ctx->pc = 0x1C9830u;
    {
        const bool branch_taken_0x1c9830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9830) {
            ctx->pc = 0x1C97D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c97d0;
        }
    }
    ctx->pc = 0x1C9838u;
label_1c9838:
    // 0x1c9838: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c983c:
    // 0x1c983c: 0xafb20000  sw          $s2, 0x0($sp)
    ctx->pc = 0x1c983cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 18));
label_1c9840:
    // 0x1c9840: 0x24465368  addiu       $a2, $v0, 0x5368
    ctx->pc = 0x1c9840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 21352));
label_1c9844:
    // 0x1c9844: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1c9844u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1c9848:
    // 0x1c9848: 0x8cc50000  lw          $a1, 0x0($a2)
    ctx->pc = 0x1c9848u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1c984c:
    // 0x1c984c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
label_1c9850:
    if (ctx->pc == 0x1C9850u) {
        ctx->pc = 0x1C9850u;
            // 0x1c9850: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->pc = 0x1C9854u;
        goto label_1c9854;
    }
    ctx->pc = 0x1C984Cu;
    {
        const bool branch_taken_0x1c984c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x1C9850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C984Cu;
            // 0x1c9850: 0x3c020038  lui         $v0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c984c) {
            ctx->pc = 0x1C9864u;
            goto label_1c9864;
        }
    }
    ctx->pc = 0x1C9854u;
label_1c9854:
    // 0x1c9854: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9854u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9858:
    // 0x1c9858: 0x8c435350  lw          $v1, 0x5350($v0)
    ctx->pc = 0x1c9858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21328)));
label_1c985c:
    // 0x1c985c: 0x54640006  bnel        $v1, $a0, . + 4 + (0x6 << 2)
label_1c9860:
    if (ctx->pc == 0x1C9860u) {
        ctx->pc = 0x1C9860u;
            // 0x1c9860: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->pc = 0x1C9864u;
        goto label_1c9864;
    }
    ctx->pc = 0x1C985Cu;
    {
        const bool branch_taken_0x1c985c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x1c985c) {
            ctx->pc = 0x1C9860u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C985Cu;
            // 0x1c9860: 0x90c30000  lbu         $v1, 0x0($a2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9878u;
            goto label_1c9878;
        }
    }
    ctx->pc = 0x1C9864u;
label_1c9864:
    // 0x1c9864: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1c9864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9868:
    // 0x1c9868: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x1c9868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_1c986c:
    // 0x1c986c: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x1c986cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_1c9870:
    // 0x1c9870: 0x10000005  b           . + 4 + (0x5 << 2)
label_1c9874:
    if (ctx->pc == 0x1C9874u) {
        ctx->pc = 0x1C9874u;
            // 0x1c9874: 0xa2620056  sb          $v0, 0x56($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x1C9878u;
        goto label_1c9878;
    }
    ctx->pc = 0x1C9870u;
    {
        const bool branch_taken_0x1c9870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9874u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9870u;
            // 0x1c9874: 0xa2620056  sb          $v0, 0x56($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9870) {
            ctx->pc = 0x1C9888u;
            goto label_1c9888;
        }
    }
    ctx->pc = 0x1C9878u;
label_1c9878:
    // 0x1c9878: 0xafa50004  sw          $a1, 0x4($sp)
    ctx->pc = 0x1c9878u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 5));
label_1c987c:
    // 0x1c987c: 0xa2630056  sb          $v1, 0x56($s3)
    ctx->pc = 0x1c987cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 86), (uint8_t)GPR_U32(ctx, 3));
label_1c9880:
    // 0x1c9880: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1c9880u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1c9884:
    // 0x1c9884: 0xa2620057  sb          $v0, 0x57($s3)
    ctx->pc = 0x1c9884u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 87), (uint8_t)GPR_U32(ctx, 2));
label_1c9888:
    // 0x1c9888: 0x1a40000b  blez        $s2, . + 4 + (0xB << 2)
label_1c988c:
    if (ctx->pc == 0x1C988Cu) {
        ctx->pc = 0x1C988Cu;
            // 0x1c988c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9890u;
        goto label_1c9890;
    }
    ctx->pc = 0x1C9888u;
    {
        const bool branch_taken_0x1c9888 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1C988Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9888u;
            // 0x1c988c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9888) {
            ctx->pc = 0x1C98B8u;
            goto label_1c98b8;
        }
    }
    ctx->pc = 0x1C9890u;
label_1c9890:
    // 0x1c9890: 0x27a60008  addiu       $a2, $sp, 0x8
    ctx->pc = 0x1c9890u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_1c9894:
    // 0x1c9894: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x1c9894u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1c9898:
    // 0x1c9898: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1c9898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1c989c:
    // 0x1c989c: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x1c989cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_1c98a0:
    // 0x1c98a0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c98a0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c98a4:
    // 0x1c98a4: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x1c98a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_1c98a8:
    // 0x1c98a8: 0x232202a  slt         $a0, $s1, $s2
    ctx->pc = 0x1c98a8u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1c98ac:
    // 0x1c98ac: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x1c98acu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
label_1c98b0:
    // 0x1c98b0: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_1c98b4:
    if (ctx->pc == 0x1C98B4u) {
        ctx->pc = 0x1C98B4u;
            // 0x1c98b4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x1C98B8u;
        goto label_1c98b8;
    }
    ctx->pc = 0x1C98B0u;
    {
        const bool branch_taken_0x1c98b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C98B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98B0u;
            // 0x1c98b4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98b0) {
            ctx->pc = 0x1C9898u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9898;
        }
    }
    ctx->pc = 0x1C98B8u;
label_1c98b8:
    // 0x1c98b8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1c98b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1c98bc:
    // 0x1c98bc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c98bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c98c0:
    // 0x1c98c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1c98c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1c98c4:
    // 0x1c98c4: 0x27a70010  addiu       $a3, $sp, 0x10
    ctx->pc = 0x1c98c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1c98c8:
    // 0x1c98c8: 0xc07096e  jal         func_1C25B8
label_1c98cc:
    if (ctx->pc == 0x1C98CCu) {
        ctx->pc = 0x1C98CCu;
            // 0x1c98cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C98D0u;
        goto label_1c98d0;
    }
    ctx->pc = 0x1C98C8u;
    SET_GPR_U32(ctx, 31, 0x1C98D0u);
    ctx->pc = 0x1C98CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98C8u;
            // 0x1c98cc: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (runtime->hasFunction(0x1C25B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C25B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C98D0u; }
        if (ctx->pc != 0x1C98D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C25B8_0x1c25b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C98D0u; }
        if (ctx->pc != 0x1C98D0u) { return; }
    }
    ctx->pc = 0x1C98D0u;
label_1c98d0:
    // 0x1c98d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_1c98d4:
    if (ctx->pc == 0x1C98D4u) {
        ctx->pc = 0x1C98D4u;
            // 0x1c98d4: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x1C98D8u;
        goto label_1c98d8;
    }
    ctx->pc = 0x1C98D0u;
    {
        const bool branch_taken_0x1c98d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C98D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98D0u;
            // 0x1c98d4: 0xae620020  sw          $v0, 0x20($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98d0) {
            ctx->pc = 0x1C98F0u;
            goto label_1c98f0;
        }
    }
    ctx->pc = 0x1C98D8u;
label_1c98d8:
    // 0x1c98d8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c98d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c98dc:
    // 0x1c98dc: 0xc06d212  jal         func_1B4848
label_1c98e0:
    if (ctx->pc == 0x1C98E0u) {
        ctx->pc = 0x1C98E0u;
            // 0x1c98e0: 0x2484b5e8  addiu       $a0, $a0, -0x4A18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948328));
        ctx->pc = 0x1C98E4u;
        goto label_1c98e4;
    }
    ctx->pc = 0x1C98DCu;
    SET_GPR_U32(ctx, 31, 0x1C98E4u);
    ctx->pc = 0x1C98E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98DCu;
            // 0x1c98e0: 0x2484b5e8  addiu       $a0, $a0, -0x4A18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948328));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C98E4u; }
        if (ctx->pc != 0x1C98E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C98E4u; }
        if (ctx->pc != 0x1C98E4u) { return; }
    }
    ctx->pc = 0x1C98E4u;
label_1c98e4:
    // 0x1c98e4: 0x10000070  b           . + 4 + (0x70 << 2)
label_1c98e8:
    if (ctx->pc == 0x1C98E8u) {
        ctx->pc = 0x1C98E8u;
            // 0x1c98e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C98ECu;
        goto label_1c98ec;
    }
    ctx->pc = 0x1C98E4u;
    {
        const bool branch_taken_0x1c98e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C98E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98E4u;
            // 0x1c98e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98e4) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C98ECu;
label_1c98ec:
    // 0x1c98ec: 0x0  nop
    ctx->pc = 0x1c98ecu;
    // NOP
label_1c98f0:
    // 0x1c98f0: 0x1a400035  blez        $s2, . + 4 + (0x35 << 2)
label_1c98f4:
    if (ctx->pc == 0x1C98F4u) {
        ctx->pc = 0x1C98F4u;
            // 0x1c98f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C98F8u;
        goto label_1c98f8;
    }
    ctx->pc = 0x1C98F0u;
    {
        const bool branch_taken_0x1c98f0 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1C98F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C98F0u;
            // 0x1c98f4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c98f0) {
            ctx->pc = 0x1C99C8u;
            goto label_1c99c8;
        }
    }
    ctx->pc = 0x1C98F8u;
label_1c98f8:
    // 0x1c98f8: 0x26740008  addiu       $s4, $s3, 0x8
    ctx->pc = 0x1c98f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1c98fc:
    // 0x1c98fc: 0x3c15003f  lui         $s5, 0x3F
    ctx->pc = 0x1c98fcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)63 << 16));
label_1c9900:
    // 0x1c9900: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x1c9900u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1c9904:
    // 0x1c9904: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x1c9904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1c9908:
    // 0x1c9908: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c9908u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c990c:
    // 0x1c990c: 0x2821821  addu        $v1, $s4, $v0
    ctx->pc = 0x1c990cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 2)));
label_1c9910:
    // 0x1c9910: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x1c9910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_1c9914:
    // 0x1c9914: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x1c9914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1c9918:
    // 0x1c9918: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1c9918u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1c991c:
    // 0x1c991c: 0xc07070a  jal         func_1C1C28
label_1c9920:
    if (ctx->pc == 0x1C9920u) {
        ctx->pc = 0x1C9920u;
            // 0x1c9920: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->pc = 0x1C9924u;
        goto label_1c9924;
    }
    ctx->pc = 0x1C991Cu;
    SET_GPR_U32(ctx, 31, 0x1C9924u);
    ctx->pc = 0x1C9920u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C991Cu;
            // 0x1c9920: 0x8cc50008  lw          $a1, 0x8($a2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1C28u;
    if (runtime->hasFunction(0x1C1C28u)) {
        auto targetFn = runtime->lookupFunction(0x1C1C28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9924u; }
        if (ctx->pc != 0x1C9924u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1C28_0x1c1c28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9924u; }
        if (ctx->pc != 0x1C9924u) { return; }
    }
    ctx->pc = 0x1C9924u;
label_1c9924:
    // 0x1c9924: 0x232182a  slt         $v1, $s1, $s2
    ctx->pc = 0x1c9924u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1c9928:
    // 0x1c9928: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x1c9928u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_1c992c:
    // 0x1c992c: 0x14400024  bnez        $v0, . + 4 + (0x24 << 2)
label_1c9930:
    if (ctx->pc == 0x1C9930u) {
        ctx->pc = 0x1C9930u;
            // 0x1c9930: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x1C9934u;
        goto label_1c9934;
    }
    ctx->pc = 0x1C992Cu;
    {
        const bool branch_taken_0x1c992c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9930u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C992Cu;
            // 0x1c9930: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c992c) {
            ctx->pc = 0x1C99C0u;
            goto label_1c99c0;
        }
    }
    ctx->pc = 0x1C9934u;
label_1c9934:
    // 0x1c9934: 0x26a4b610  addiu       $a0, $s5, -0x49F0
    ctx->pc = 0x1c9934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 4294948368));
label_1c9938:
    // 0x1c9938: 0xc06d212  jal         func_1B4848
label_1c993c:
    if (ctx->pc == 0x1C993Cu) {
        ctx->pc = 0x1C993Cu;
            // 0x1c993c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9940u;
        goto label_1c9940;
    }
    ctx->pc = 0x1C9938u;
    SET_GPR_U32(ctx, 31, 0x1C9940u);
    ctx->pc = 0x1C993Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9938u;
            // 0x1c993c: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9940u; }
        if (ctx->pc != 0x1C9940u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9940u; }
        if (ctx->pc != 0x1C9940u) { return; }
    }
    ctx->pc = 0x1C9940u;
label_1c9940:
    // 0x1c9940: 0x1a400059  blez        $s2, . + 4 + (0x59 << 2)
label_1c9944:
    if (ctx->pc == 0x1C9944u) {
        ctx->pc = 0x1C9944u;
            // 0x1c9944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9948u;
        goto label_1c9948;
    }
    ctx->pc = 0x1C9940u;
    {
        const bool branch_taken_0x1c9940 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1C9944u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9940u;
            // 0x1c9944: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9940) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C9948u;
label_1c9948:
    // 0x1c9948: 0x280882d  daddu       $s1, $s4, $zero
    ctx->pc = 0x1c9948u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1c994c:
    // 0x1c994c: 0x26700010  addiu       $s0, $s3, 0x10
    ctx->pc = 0x1c994cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 16));
label_1c9950:
    // 0x1c9950: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1c9950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9954:
    // 0x1c9954: 0x0  nop
    ctx->pc = 0x1c9954u;
    // NOP
label_1c9958:
    // 0x1c9958: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1c9958u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1c995c:
    // 0x1c995c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1c9960:
    if (ctx->pc == 0x1C9960u) {
        ctx->pc = 0x1C9960u;
            // 0x1c9960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9964u;
        goto label_1c9964;
    }
    ctx->pc = 0x1C995Cu;
    {
        const bool branch_taken_0x1c995c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C995Cu;
            // 0x1c9960: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c995c) {
            ctx->pc = 0x1C996Cu;
            goto label_1c996c;
        }
    }
    ctx->pc = 0x1C9964u;
label_1c9964:
    // 0x1c9964: 0xc070746  jal         func_1C1D18
label_1c9968:
    if (ctx->pc == 0x1C9968u) {
        ctx->pc = 0x1C996Cu;
        goto label_1c996c;
    }
    ctx->pc = 0x1C9964u;
    SET_GPR_U32(ctx, 31, 0x1C996Cu);
    ctx->pc = 0x1C1D18u;
    if (runtime->hasFunction(0x1C1D18u)) {
        auto targetFn = runtime->lookupFunction(0x1C1D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C996Cu; }
        if (ctx->pc != 0x1C996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1D18_0x1c1d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C996Cu; }
        if (ctx->pc != 0x1C996Cu) { return; }
    }
    ctx->pc = 0x1C996Cu;
label_1c996c:
    // 0x1c996c: 0x8e620020  lw          $v0, 0x20($s3)
    ctx->pc = 0x1c996cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 32)));
label_1c9970:
    // 0x1c9970: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1c9974:
    if (ctx->pc == 0x1C9974u) {
        ctx->pc = 0x1C9974u;
            // 0x1c9974: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x1C9978u;
        goto label_1c9978;
    }
    ctx->pc = 0x1C9970u;
    {
        const bool branch_taken_0x1c9970 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9974u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9970u;
            // 0x1c9974: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9970) {
            ctx->pc = 0x1C9990u;
            goto label_1c9990;
        }
    }
    ctx->pc = 0x1C9978u;
label_1c9978:
    // 0x1c9978: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c9978u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c997c:
    // 0x1c997c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c997cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9980:
    // 0x1c9980: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9980u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9984:
    // 0x1c9984: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9984u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9988:
    // 0x1c9988: 0xc07096e  jal         func_1C25B8
label_1c998c:
    if (ctx->pc == 0x1C998Cu) {
        ctx->pc = 0x1C998Cu;
            // 0x1c998c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C9990u;
        goto label_1c9990;
    }
    ctx->pc = 0x1C9988u;
    SET_GPR_U32(ctx, 31, 0x1C9990u);
    ctx->pc = 0x1C998Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9988u;
            // 0x1c998c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (runtime->hasFunction(0x1C25B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C25B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9990u; }
        if (ctx->pc != 0x1C9990u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C25B8_0x1c25b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9990u; }
        if (ctx->pc != 0x1C9990u) { return; }
    }
    ctx->pc = 0x1C9990u;
label_1c9990:
    // 0x1c9990: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x1c9990u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1c9994:
    // 0x1c9994: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_1c9998:
    if (ctx->pc == 0x1C9998u) {
        ctx->pc = 0x1C9998u;
            // 0x1c9998: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x1C999Cu;
        goto label_1c999c;
    }
    ctx->pc = 0x1C9994u;
    {
        const bool branch_taken_0x1c9994 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9998u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9994u;
            // 0x1c9998: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9994) {
            ctx->pc = 0x1C99A4u;
            goto label_1c99a4;
        }
    }
    ctx->pc = 0x1C999Cu;
label_1c999c:
    // 0x1c999c: 0xc0722c8  jal         func_1C8B20
label_1c99a0:
    if (ctx->pc == 0x1C99A0u) {
        ctx->pc = 0x1C99A4u;
        goto label_1c99a4;
    }
    ctx->pc = 0x1C999Cu;
    SET_GPR_U32(ctx, 31, 0x1C99A4u);
    ctx->pc = 0x1C8B20u;
    if (runtime->hasFunction(0x1C8B20u)) {
        auto targetFn = runtime->lookupFunction(0x1C8B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99A4u; }
        if (ctx->pc != 0x1C99A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8B20_0x1c8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C99A4u; }
        if (ctx->pc != 0x1C99A4u) { return; }
    }
    ctx->pc = 0x1C99A4u;
label_1c99a4:
    // 0x1c99a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x1c99a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_1c99a8:
    // 0x1c99a8: 0x2b2102a  slt         $v0, $s5, $s2
    ctx->pc = 0x1c99a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1c99ac:
    // 0x1c99ac: 0x5440ffea  bnel        $v0, $zero, . + 4 + (-0x16 << 2)
label_1c99b0:
    if (ctx->pc == 0x1C99B0u) {
        ctx->pc = 0x1C99B0u;
            // 0x1c99b0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C99B4u;
        goto label_1c99b4;
    }
    ctx->pc = 0x1C99ACu;
    {
        const bool branch_taken_0x1c99ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c99ac) {
            ctx->pc = 0x1C99B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99ACu;
            // 0x1c99b0: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9958;
        }
    }
    ctx->pc = 0x1C99B4u;
label_1c99b4:
    // 0x1c99b4: 0x1000003c  b           . + 4 + (0x3C << 2)
label_1c99b8:
    if (ctx->pc == 0x1C99B8u) {
        ctx->pc = 0x1C99B8u;
            // 0x1c99b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C99BCu;
        goto label_1c99bc;
    }
    ctx->pc = 0x1C99B4u;
    {
        const bool branch_taken_0x1c99b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C99B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99B4u;
            // 0x1c99b8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99b4) {
            ctx->pc = 0x1C9AA8u;
            goto label_1c9aa8;
        }
    }
    ctx->pc = 0x1C99BCu;
label_1c99bc:
    // 0x1c99bc: 0x0  nop
    ctx->pc = 0x1c99bcu;
    // NOP
label_1c99c0:
    // 0x1c99c0: 0x1460ffd1  bnez        $v1, . + 4 + (-0x2F << 2)
label_1c99c4:
    if (ctx->pc == 0x1C99C4u) {
        ctx->pc = 0x1C99C4u;
            // 0x1c99c4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x1C99C8u;
        goto label_1c99c8;
    }
    ctx->pc = 0x1C99C0u;
    {
        const bool branch_taken_0x1c99c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C99C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99C0u;
            // 0x1c99c4: 0x111080  sll         $v0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99c0) {
            ctx->pc = 0x1C9908u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9908;
        }
    }
    ctx->pc = 0x1C99C8u;
label_1c99c8:
    // 0x1c99c8: 0x1a40000a  blez        $s2, . + 4 + (0xA << 2)
label_1c99cc:
    if (ctx->pc == 0x1C99CCu) {
        ctx->pc = 0x1C99CCu;
            // 0x1c99cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C99D0u;
        goto label_1c99d0;
    }
    ctx->pc = 0x1C99C8u;
    {
        const bool branch_taken_0x1c99c8 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1C99CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99C8u;
            // 0x1c99cc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99c8) {
            ctx->pc = 0x1C99F4u;
            goto label_1c99f4;
        }
    }
    ctx->pc = 0x1C99D0u;
label_1c99d0:
    // 0x1c99d0: 0x26650018  addiu       $a1, $s3, 0x18
    ctx->pc = 0x1c99d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 24));
label_1c99d4:
    // 0x1c99d4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1c99d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1c99d8:
    // 0x1c99d8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c99d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c99dc:
    // 0x1c99dc: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1c99dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1c99e0:
    // 0x1c99e0: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1c99e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1c99e4:
    // 0x1c99e4: 0x232102a  slt         $v0, $s1, $s2
    ctx->pc = 0x1c99e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_1c99e8:
    // 0x1c99e8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x1c99e8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_1c99ec:
    // 0x1c99ec: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_1c99f0:
    if (ctx->pc == 0x1C99F0u) {
        ctx->pc = 0x1C99F0u;
            // 0x1c99f0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x1C99F4u;
        goto label_1c99f4;
    }
    ctx->pc = 0x1C99ECu;
    {
        const bool branch_taken_0x1c99ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C99F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C99ECu;
            // 0x1c99f0: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c99ec) {
            ctx->pc = 0x1C99D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c99d8;
        }
    }
    ctx->pc = 0x1C99F4u;
label_1c99f4:
    // 0x1c99f4: 0xa2600050  sb          $zero, 0x50($s3)
    ctx->pc = 0x1c99f4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 80), (uint8_t)GPR_U32(ctx, 0));
label_1c99f8:
    // 0x1c99f8: 0xa2600051  sb          $zero, 0x51($s3)
    ctx->pc = 0x1c99f8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 81), (uint8_t)GPR_U32(ctx, 0));
label_1c99fc:
    // 0x1c99fc: 0xa2720052  sb          $s2, 0x52($s3)
    ctx->pc = 0x1c99fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 82), (uint8_t)GPR_U32(ctx, 18));
label_1c9a00:
    // 0x1c9a00: 0xa2720053  sb          $s2, 0x53($s3)
    ctx->pc = 0x1c9a00u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 83), (uint8_t)GPR_U32(ctx, 18));
label_1c9a04:
    // 0x1c9a04: 0xae600038  sw          $zero, 0x38($s3)
    ctx->pc = 0x1c9a04u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 0));
label_1c9a08:
    // 0x1c9a08: 0xae60003c  sw          $zero, 0x3C($s3)
    ctx->pc = 0x1c9a08u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 60), GPR_U32(ctx, 0));
label_1c9a0c:
    // 0x1c9a0c: 0xa2600054  sb          $zero, 0x54($s3)
    ctx->pc = 0x1c9a0cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 84), (uint8_t)GPR_U32(ctx, 0));
label_1c9a10:
    // 0x1c9a10: 0xa2600055  sb          $zero, 0x55($s3)
    ctx->pc = 0x1c9a10u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 85), (uint8_t)GPR_U32(ctx, 0));
label_1c9a14:
    // 0x1c9a14: 0xa260005b  sb          $zero, 0x5B($s3)
    ctx->pc = 0x1c9a14u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 91), (uint8_t)GPR_U32(ctx, 0));
label_1c9a18:
    // 0x1c9a18: 0x1a40000c  blez        $s2, . + 4 + (0xC << 2)
label_1c9a1c:
    if (ctx->pc == 0x1C9A1Cu) {
        ctx->pc = 0x1C9A1Cu;
            // 0x1c9a1c: 0xa260005a  sb          $zero, 0x5A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1C9A20u;
        goto label_1c9a20;
    }
    ctx->pc = 0x1C9A18u;
    {
        const bool branch_taken_0x1c9a18 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1C9A1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A18u;
            // 0x1c9a1c: 0xa260005a  sb          $zero, 0x5A($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 90), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a18) {
            ctx->pc = 0x1C9A4Cu;
            goto label_1c9a4c;
        }
    }
    ctx->pc = 0x1C9A20u;
label_1c9a20:
    // 0x1c9a20: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x1c9a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a24:
    // 0x1c9a24: 0x26650008  addiu       $a1, $s3, 0x8
    ctx->pc = 0x1c9a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_1c9a28:
    // 0x1c9a28: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x1c9a28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_1c9a2c:
    // 0x1c9a2c: 0x0  nop
    ctx->pc = 0x1c9a2cu;
    // NOP
label_1c9a30:
    // 0x1c9a30: 0x2641021  addu        $v0, $s3, $a0
    ctx->pc = 0x1c9a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_1c9a34:
    // 0x1c9a34: 0xa41821  addu        $v1, $a1, $a0
    ctx->pc = 0x1c9a34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1c9a38:
    // 0x1c9a38: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1c9a38u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1c9a3c:
    // 0x1c9a3c: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1c9a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1c9a40:
    // 0x1c9a40: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x1c9a40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
label_1c9a44:
    // 0x1c9a44: 0x1620fffa  bnez        $s1, . + 4 + (-0x6 << 2)
label_1c9a48:
    if (ctx->pc == 0x1C9A48u) {
        ctx->pc = 0x1C9A48u;
            // 0x1c9a48: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x1C9A4Cu;
        goto label_1c9a4c;
    }
    ctx->pc = 0x1C9A44u;
    {
        const bool branch_taken_0x1c9a44 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A44u;
            // 0x1c9a48: 0xac600000  sw          $zero, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9a44) {
            ctx->pc = 0x1C9A30u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9a30;
        }
    }
    ctx->pc = 0x1C9A4Cu;
label_1c9a4c:
    // 0x1c9a4c: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1c9a4cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9a50:
    // 0x1c9a50: 0xa2600058  sb          $zero, 0x58($s3)
    ctx->pc = 0x1c9a50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 88), (uint8_t)GPR_U32(ctx, 0));
label_1c9a54:
    // 0x1c9a54: 0xa2710059  sb          $s1, 0x59($s3)
    ctx->pc = 0x1c9a54u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 89), (uint8_t)GPR_U32(ctx, 17));
label_1c9a58:
    // 0x1c9a58: 0xae60005c  sw          $zero, 0x5C($s3)
    ctx->pc = 0x1c9a58u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 92), GPR_U32(ctx, 0));
label_1c9a5c:
    // 0x1c9a5c: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1c9a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1c9a60:
    // 0x1c9a60: 0xae600060  sw          $zero, 0x60($s3)
    ctx->pc = 0x1c9a60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 96), GPR_U32(ctx, 0));
label_1c9a64:
    // 0x1c9a64: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9a64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9a68:
    // 0x1c9a68: 0xae600024  sw          $zero, 0x24($s3)
    ctx->pc = 0x1c9a68u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 36), GPR_U32(ctx, 0));
label_1c9a6c:
    // 0x1c9a6c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c9a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1c9a70:
    // 0x1c9a70: 0x40f809  jalr        $v0
label_1c9a74:
    if (ctx->pc == 0x1C9A74u) {
        ctx->pc = 0x1C9A74u;
            // 0x1c9a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1C9A78u;
        goto label_1c9a78;
    }
    ctx->pc = 0x1C9A70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C9A78u);
        ctx->pc = 0x1C9A74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A70u;
            // 0x1c9a74: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C9A78u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A78u; }
            if (ctx->pc != 0x1C9A78u) { return; }
        }
        }
    }
    ctx->pc = 0x1C9A78u;
label_1c9a78:
    // 0x1c9a78: 0x8ec40000  lw          $a0, 0x0($s6)
    ctx->pc = 0x1c9a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_1c9a7c:
    // 0x1c9a7c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1c9a7cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a80:
    // 0x1c9a80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1c9a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1c9a84:
    // 0x1c9a84: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1c9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1c9a88:
    // 0x1c9a88: 0x40f809  jalr        $v0
label_1c9a8c:
    if (ctx->pc == 0x1C9A8Cu) {
        ctx->pc = 0x1C9A8Cu;
            // 0x1c9a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9A90u;
        goto label_1c9a90;
    }
    ctx->pc = 0x1C9A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1C9A90u);
        ctx->pc = 0x1C9A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9A88u;
            // 0x1c9a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1C9A90u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1C9A90u; }
            if (ctx->pc != 0x1C9A90u) { return; }
        }
        }
    }
    ctx->pc = 0x1C9A90u;
label_1c9a90:
    // 0x1c9a90: 0x24034000  addiu       $v1, $zero, 0x4000
    ctx->pc = 0x1c9a90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_1c9a94:
    // 0x1c9a94: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x1c9a94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1c9a98:
    // 0x1c9a98: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x1c9a98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1c9a9c:
    // 0x1c9a9c: 0xae700028  sw          $s0, 0x28($s3)
    ctx->pc = 0x1c9a9cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 40), GPR_U32(ctx, 16));
label_1c9aa0:
    // 0x1c9aa0: 0xae63002c  sw          $v1, 0x2C($s3)
    ctx->pc = 0x1c9aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 44), GPR_U32(ctx, 3));
label_1c9aa4:
    // 0x1c9aa4: 0xa2710000  sb          $s1, 0x0($s3)
    ctx->pc = 0x1c9aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 0), (uint8_t)GPR_U32(ctx, 17));
label_1c9aa8:
    // 0x1c9aa8: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1c9aa8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9aac:
    // 0x1c9aac: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1c9aacu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c9ab0:
    // 0x1c9ab0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1c9ab0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1c9ab4:
    // 0x1c9ab4: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1c9ab4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1c9ab8:
    // 0x1c9ab8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1c9ab8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1c9abc:
    // 0x1c9abc: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1c9abcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1c9ac0:
    // 0x1c9ac0: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1c9ac0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1c9ac4:
    // 0x1c9ac4: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1c9ac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1c9ac8:
    // 0x1c9ac8: 0x3e00008  jr          $ra
label_1c9acc:
    if (ctx->pc == 0x1C9ACCu) {
        ctx->pc = 0x1C9ACCu;
            // 0x1c9acc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1C9AD0u;
        goto label_1c9ad0;
    }
    ctx->pc = 0x1C9AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9AC8u;
            // 0x1c9acc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9AD0u;
label_1c9ad0:
    // 0x1c9ad0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9ad4:
    // 0x1c9ad4: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c9ad4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1c9ad8:
    // 0x1c9ad8: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9adc:
    // 0x1c9adc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9adcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9ae0:
    // 0x1c9ae0: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c9ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1c9ae4:
    // 0x1c9ae4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9ae4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9ae8:
    // 0x1c9ae8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c9ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c9aec:
    // 0x1c9aec: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c9aecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1c9af0:
    // 0x1c9af0: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_1c9af4:
    if (ctx->pc == 0x1C9AF4u) {
        ctx->pc = 0x1C9AF4u;
            // 0x1c9af4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->pc = 0x1C9AF8u;
        goto label_1c9af8;
    }
    ctx->pc = 0x1C9AF0u;
    {
        const bool branch_taken_0x1c9af0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C9AF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9AF0u;
            // 0x1c9af4: 0xffbf0028  sd          $ra, 0x28($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9af0) {
            ctx->pc = 0x1C9B08u;
            goto label_1c9b08;
        }
    }
    ctx->pc = 0x1C9AF8u;
label_1c9af8:
    // 0x1c9af8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9af8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9afc:
    // 0x1c9afc: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9b00:
    // 0x1c9b00: 0x58600027  blezl       $v1, . + 4 + (0x27 << 2)
label_1c9b04:
    if (ctx->pc == 0x1C9B04u) {
        ctx->pc = 0x1C9B04u;
            // 0x1c9b04: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x1C9B08u;
        goto label_1c9b08;
    }
    ctx->pc = 0x1C9B00u;
    {
        const bool branch_taken_0x1c9b00 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c9b00) {
            ctx->pc = 0x1C9B04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B00u;
            // 0x1c9b04: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9BA0u;
            goto label_1c9ba0;
        }
    }
    ctx->pc = 0x1C9B08u;
label_1c9b08:
    // 0x1c9b08: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c9b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c9b0c:
    // 0x1c9b0c: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
label_1c9b10:
    if (ctx->pc == 0x1C9B10u) {
        ctx->pc = 0x1C9B10u;
            // 0x1c9b10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B14u;
        goto label_1c9b14;
    }
    ctx->pc = 0x1C9B0Cu;
    {
        const bool branch_taken_0x1c9b0c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B0Cu;
            // 0x1c9b10: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b0c) {
            ctx->pc = 0x1C9B44u;
            goto label_1c9b44;
        }
    }
    ctx->pc = 0x1C9B14u;
label_1c9b14:
    // 0x1c9b14: 0x26300010  addiu       $s0, $s1, 0x10
    ctx->pc = 0x1c9b14u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1c9b18:
    // 0x1c9b18: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9b18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9b1c:
    // 0x1c9b1c: 0x0  nop
    ctx->pc = 0x1c9b1cu;
    // NOP
label_1c9b20:
    // 0x1c9b20: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c9b24:
    if (ctx->pc == 0x1C9B24u) {
        ctx->pc = 0x1C9B24u;
            // 0x1c9b24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x1C9B28u;
        goto label_1c9b28;
    }
    ctx->pc = 0x1C9B20u;
    {
        const bool branch_taken_0x1c9b20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B20u;
            // 0x1c9b24: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b20) {
            ctx->pc = 0x1C9B34u;
            goto label_1c9b34;
        }
    }
    ctx->pc = 0x1C9B28u;
label_1c9b28:
    // 0x1c9b28: 0xc070746  jal         func_1C1D18
label_1c9b2c:
    if (ctx->pc == 0x1C9B2Cu) {
        ctx->pc = 0x1C9B30u;
        goto label_1c9b30;
    }
    ctx->pc = 0x1C9B28u;
    SET_GPR_U32(ctx, 31, 0x1C9B30u);
    ctx->pc = 0x1C1D18u;
    if (runtime->hasFunction(0x1C1D18u)) {
        auto targetFn = runtime->lookupFunction(0x1C1D18u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B30u; }
        if (ctx->pc != 0x1C9B30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1D18_0x1c1d18(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B30u; }
        if (ctx->pc != 0x1C9B30u) { return; }
    }
    ctx->pc = 0x1C9B30u;
label_1c9b30:
    // 0x1c9b30: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c9b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c9b34:
    // 0x1c9b34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c9b34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c9b38:
    // 0x1c9b38: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1c9b38u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c9b3c:
    // 0x1c9b3c: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_1c9b40:
    if (ctx->pc == 0x1C9B40u) {
        ctx->pc = 0x1C9B40u;
            // 0x1c9b40: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C9B44u;
        goto label_1c9b44;
    }
    ctx->pc = 0x1C9B3Cu;
    {
        const bool branch_taken_0x1c9b3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b3c) {
            ctx->pc = 0x1C9B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B3Cu;
            // 0x1c9b40: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9B20u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9b20;
        }
    }
    ctx->pc = 0x1C9B44u;
label_1c9b44:
    // 0x1c9b44: 0x8e220020  lw          $v0, 0x20($s1)
    ctx->pc = 0x1c9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1c9b48:
    // 0x1c9b48: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x1c9b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1c9b4c:
    // 0x1c9b4c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1c9b4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b50:
    // 0x1c9b50: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1c9b50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9b54:
    // 0x1c9b54: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1c9b54u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b58:
    // 0x1c9b58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1c9b58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9b5c:
    // 0x1c9b5c: 0xc07096e  jal         func_1C25B8
label_1c9b60:
    if (ctx->pc == 0x1C9B60u) {
        ctx->pc = 0x1C9B60u;
            // 0x1c9b60: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x1C9B64u;
        goto label_1c9b64;
    }
    ctx->pc = 0x1C9B5Cu;
    SET_GPR_U32(ctx, 31, 0x1C9B64u);
    ctx->pc = 0x1C9B60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B5Cu;
            // 0x1c9b60: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C25B8u;
    if (runtime->hasFunction(0x1C25B8u)) {
        auto targetFn = runtime->lookupFunction(0x1C25B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B64u; }
        if (ctx->pc != 0x1C9B64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C25B8_0x1c25b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B64u; }
        if (ctx->pc != 0x1C9B64u) { return; }
    }
    ctx->pc = 0x1C9B64u;
label_1c9b64:
    // 0x1c9b64: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c9b64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c9b68:
    // 0x1c9b68: 0x1860000c  blez        $v1, . + 4 + (0xC << 2)
label_1c9b6c:
    if (ctx->pc == 0x1C9B6Cu) {
        ctx->pc = 0x1C9B6Cu;
            // 0x1c9b6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B70u;
        goto label_1c9b70;
    }
    ctx->pc = 0x1C9B68u;
    {
        const bool branch_taken_0x1c9b68 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B68u;
            // 0x1c9b6c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b68) {
            ctx->pc = 0x1C9B9Cu;
            goto label_1c9b9c;
        }
    }
    ctx->pc = 0x1C9B70u;
label_1c9b70:
    // 0x1c9b70: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x1c9b70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1c9b74:
    // 0x1c9b74: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1c9b74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1c9b78:
    // 0x1c9b78: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_1c9b7c:
    if (ctx->pc == 0x1C9B7Cu) {
        ctx->pc = 0x1C9B7Cu;
            // 0x1c9b7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x1C9B80u;
        goto label_1c9b80;
    }
    ctx->pc = 0x1C9B78u;
    {
        const bool branch_taken_0x1c9b78 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1C9B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B78u;
            // 0x1c9b7c: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9b78) {
            ctx->pc = 0x1C9B8Cu;
            goto label_1c9b8c;
        }
    }
    ctx->pc = 0x1C9B80u;
label_1c9b80:
    // 0x1c9b80: 0xc0722c8  jal         func_1C8B20
label_1c9b84:
    if (ctx->pc == 0x1C9B84u) {
        ctx->pc = 0x1C9B88u;
        goto label_1c9b88;
    }
    ctx->pc = 0x1C9B80u;
    SET_GPR_U32(ctx, 31, 0x1C9B88u);
    ctx->pc = 0x1C8B20u;
    if (runtime->hasFunction(0x1C8B20u)) {
        auto targetFn = runtime->lookupFunction(0x1C8B20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B88u; }
        if (ctx->pc != 0x1C9B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C8B20_0x1c8b20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9B88u; }
        if (ctx->pc != 0x1C9B88u) { return; }
    }
    ctx->pc = 0x1C9B88u;
label_1c9b88:
    // 0x1c9b88: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1c9b88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1c9b8c:
    // 0x1c9b8c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x1c9b8cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1c9b90:
    // 0x1c9b90: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x1c9b90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_1c9b94:
    // 0x1c9b94: 0x5440fff8  bnel        $v0, $zero, . + 4 + (-0x8 << 2)
label_1c9b98:
    if (ctx->pc == 0x1C9B98u) {
        ctx->pc = 0x1C9B98u;
            // 0x1c9b98: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1C9B9Cu;
        goto label_1c9b9c;
    }
    ctx->pc = 0x1C9B94u;
    {
        const bool branch_taken_0x1c9b94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1c9b94) {
            ctx->pc = 0x1C9B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9B94u;
            // 0x1c9b98: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9B78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9b78;
        }
    }
    ctx->pc = 0x1C9B9Cu;
label_1c9b9c:
    // 0x1c9b9c: 0xa2200000  sb          $zero, 0x0($s1)
    ctx->pc = 0x1c9b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
label_1c9ba0:
    // 0x1c9ba0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1c9ba0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1c9ba4:
    // 0x1c9ba4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1c9ba4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1c9ba8:
    // 0x1c9ba8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1c9ba8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1c9bac:
    // 0x1c9bac: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1c9bacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1c9bb0:
    // 0x1c9bb0: 0x3e00008  jr          $ra
label_1c9bb4:
    if (ctx->pc == 0x1C9BB4u) {
        ctx->pc = 0x1C9BB4u;
            // 0x1c9bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x1C9BB8u;
        goto label_1c9bb8;
    }
    ctx->pc = 0x1C9BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BB0u;
            // 0x1c9bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9BB8u;
label_1c9bb8:
    // 0x1c9bb8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9bbc:
    // 0x1c9bbc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9bbcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c9bc0:
    // 0x1c9bc0: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9bc4:
    // 0x1c9bc4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c9bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9bc8:
    // 0x1c9bc8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1c9bcc:
    if (ctx->pc == 0x1C9BCCu) {
        ctx->pc = 0x1C9BCCu;
            // 0x1c9bcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1C9BD0u;
        goto label_1c9bd0;
    }
    ctx->pc = 0x1C9BC8u;
    {
        const bool branch_taken_0x1c9bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1C9BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BC8u;
            // 0x1c9bcc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bc8) {
            ctx->pc = 0x1C9BE0u;
            goto label_1c9be0;
        }
    }
    ctx->pc = 0x1C9BD0u;
label_1c9bd0:
    // 0x1c9bd0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9bd4:
    // 0x1c9bd4: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9bd8:
    // 0x1c9bd8: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_1c9bdc:
    if (ctx->pc == 0x1C9BDCu) {
        ctx->pc = 0x1C9BDCu;
            // 0x1c9bdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C9BE0u;
        goto label_1c9be0;
    }
    ctx->pc = 0x1C9BD8u;
    {
        const bool branch_taken_0x1c9bd8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1C9BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BD8u;
            // 0x1c9bdc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9bd8) {
            ctx->pc = 0x1C9BF8u;
            goto label_1c9bf8;
        }
    }
    ctx->pc = 0x1C9BE0u;
label_1c9be0:
    // 0x1c9be0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1c9be0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1c9be4:
    // 0x1c9be4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c9be4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9be8:
    // 0x1c9be8: 0x2484b638  addiu       $a0, $a0, -0x49C8
    ctx->pc = 0x1c9be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948408));
label_1c9bec:
    // 0x1c9bec: 0x806d212  j           func_1B4848
label_1c9bf0:
    if (ctx->pc == 0x1C9BF0u) {
        ctx->pc = 0x1C9BF0u;
            // 0x1c9bf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C9BF4u;
        goto label_1c9bf4;
    }
    ctx->pc = 0x1C9BECu;
    ctx->pc = 0x1C9BF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BECu;
            // 0x1c9bf0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B4848_0x1b4848(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C9BF4u;
label_1c9bf4:
    // 0x1c9bf4: 0x0  nop
    ctx->pc = 0x1c9bf4u;
    // NOP
label_1c9bf8:
    // 0x1c9bf8: 0x3e00008  jr          $ra
label_1c9bfc:
    if (ctx->pc == 0x1C9BFCu) {
        ctx->pc = 0x1C9BFCu;
            // 0x1c9bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C9C00u;
        goto label_1c9c00;
    }
    ctx->pc = 0x1C9BF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9BF8u;
            // 0x1c9bfc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9C00u;
label_1c9c00:
    // 0x1c9c00: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9c00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9c04:
    // 0x1c9c04: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1c9c04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1c9c08:
    // 0x1c9c08: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1c9c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1c9c0c:
    // 0x1c9c0c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1c9c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9c10:
    // 0x1c9c10: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1c9c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1c9c14:
    // 0x1c9c14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1c9c14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9c18:
    // 0x1c9c18: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_1c9c1c:
    if (ctx->pc == 0x1C9C1Cu) {
        ctx->pc = 0x1C9C1Cu;
            // 0x1c9c1c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x1C9C20u;
        goto label_1c9c20;
    }
    ctx->pc = 0x1C9C18u;
    {
        const bool branch_taken_0x1c9c18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1C9C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C18u;
            // 0x1c9c1c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9c18) {
            ctx->pc = 0x1C9C30u;
            goto label_1c9c30;
        }
    }
    ctx->pc = 0x1C9C20u;
label_1c9c20:
    // 0x1c9c20: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1c9c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1c9c24:
    // 0x1c9c24: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1c9c24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1c9c28:
    // 0x1c9c28: 0x58600009  blezl       $v1, . + 4 + (0x9 << 2)
label_1c9c2c:
    if (ctx->pc == 0x1C9C2Cu) {
        ctx->pc = 0x1C9C2Cu;
            // 0x1c9c2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1C9C30u;
        goto label_1c9c30;
    }
    ctx->pc = 0x1C9C28u;
    {
        const bool branch_taken_0x1c9c28 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1c9c28) {
            ctx->pc = 0x1C9C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C28u;
            // 0x1c9c2c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1C9C50u;
            goto label_1c9c50;
        }
    }
    ctx->pc = 0x1C9C30u;
label_1c9c30:
    // 0x1c9c30: 0xc072718  jal         func_1C9C60
label_1c9c34:
    if (ctx->pc == 0x1C9C34u) {
        ctx->pc = 0x1C9C34u;
            // 0x1c9c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9C38u;
        goto label_1c9c38;
    }
    ctx->pc = 0x1C9C30u;
    SET_GPR_U32(ctx, 31, 0x1C9C38u);
    ctx->pc = 0x1C9C34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C30u;
            // 0x1c9c34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9C60u;
    if (runtime->hasFunction(0x1C9C60u)) {
        auto targetFn = runtime->lookupFunction(0x1C9C60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C38u; }
        if (ctx->pc != 0x1C9C38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C9C60_0x1c9c60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9C38u; }
        if (ctx->pc != 0x1C9C38u) { return; }
    }
    ctx->pc = 0x1C9C38u;
label_1c9c38:
    // 0x1c9c38: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1c9c38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1c9c3c:
    // 0x1c9c3c: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9c3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c9c40:
    // 0x1c9c40: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1c9c40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9c44:
    // 0x1c9c44: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1c9c44u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1c9c48:
    // 0x1c9c48: 0x807273e  j           func_1C9CF8
label_1c9c4c:
    if (ctx->pc == 0x1C9C4Cu) {
        ctx->pc = 0x1C9C4Cu;
            // 0x1c9c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C9C50u;
        goto label_1c9c50;
    }
    ctx->pc = 0x1C9C48u;
    ctx->pc = 0x1C9C4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C48u;
            // 0x1c9c4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9CF8u;
    if (runtime->hasFunction(0x1C9CF8u)) {
        auto targetFn = runtime->lookupFunction(0x1C9CF8u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001C9CF8_0x1c9cf8(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1C9C50u;
label_1c9c50:
    // 0x1c9c50: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1c9c50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1c9c54:
    // 0x1c9c54: 0x3e00008  jr          $ra
label_1c9c58:
    if (ctx->pc == 0x1C9C58u) {
        ctx->pc = 0x1C9C58u;
            // 0x1c9c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1C9C5Cu;
        goto label_1c9c5c;
    }
    ctx->pc = 0x1C9C54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1C9C58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9C54u;
            // 0x1c9c58: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1C9C5Cu;
label_1c9c5c:
    // 0x1c9c5c: 0x0  nop
    ctx->pc = 0x1c9c5cu;
    // NOP
    ctx->pc = 0x1c9c60u;
}
