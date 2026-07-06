#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001DA410
// Address: 0x1da410 - 0x1daad0
void sub_001DA410_0x1da410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DA410_0x1da410");
#endif

    switch (ctx->pc) {
        case 0x1da410u: goto label_1da410;
        case 0x1da414u: goto label_1da414;
        case 0x1da418u: goto label_1da418;
        case 0x1da41cu: goto label_1da41c;
        case 0x1da420u: goto label_1da420;
        case 0x1da424u: goto label_1da424;
        case 0x1da428u: goto label_1da428;
        case 0x1da42cu: goto label_1da42c;
        case 0x1da430u: goto label_1da430;
        case 0x1da434u: goto label_1da434;
        case 0x1da438u: goto label_1da438;
        case 0x1da43cu: goto label_1da43c;
        case 0x1da440u: goto label_1da440;
        case 0x1da444u: goto label_1da444;
        case 0x1da448u: goto label_1da448;
        case 0x1da44cu: goto label_1da44c;
        case 0x1da450u: goto label_1da450;
        case 0x1da454u: goto label_1da454;
        case 0x1da458u: goto label_1da458;
        case 0x1da45cu: goto label_1da45c;
        case 0x1da460u: goto label_1da460;
        case 0x1da464u: goto label_1da464;
        case 0x1da468u: goto label_1da468;
        case 0x1da46cu: goto label_1da46c;
        case 0x1da470u: goto label_1da470;
        case 0x1da474u: goto label_1da474;
        case 0x1da478u: goto label_1da478;
        case 0x1da47cu: goto label_1da47c;
        case 0x1da480u: goto label_1da480;
        case 0x1da484u: goto label_1da484;
        case 0x1da488u: goto label_1da488;
        case 0x1da48cu: goto label_1da48c;
        case 0x1da490u: goto label_1da490;
        case 0x1da494u: goto label_1da494;
        case 0x1da498u: goto label_1da498;
        case 0x1da49cu: goto label_1da49c;
        case 0x1da4a0u: goto label_1da4a0;
        case 0x1da4a4u: goto label_1da4a4;
        case 0x1da4a8u: goto label_1da4a8;
        case 0x1da4acu: goto label_1da4ac;
        case 0x1da4b0u: goto label_1da4b0;
        case 0x1da4b4u: goto label_1da4b4;
        case 0x1da4b8u: goto label_1da4b8;
        case 0x1da4bcu: goto label_1da4bc;
        case 0x1da4c0u: goto label_1da4c0;
        case 0x1da4c4u: goto label_1da4c4;
        case 0x1da4c8u: goto label_1da4c8;
        case 0x1da4ccu: goto label_1da4cc;
        case 0x1da4d0u: goto label_1da4d0;
        case 0x1da4d4u: goto label_1da4d4;
        case 0x1da4d8u: goto label_1da4d8;
        case 0x1da4dcu: goto label_1da4dc;
        case 0x1da4e0u: goto label_1da4e0;
        case 0x1da4e4u: goto label_1da4e4;
        case 0x1da4e8u: goto label_1da4e8;
        case 0x1da4ecu: goto label_1da4ec;
        case 0x1da4f0u: goto label_1da4f0;
        case 0x1da4f4u: goto label_1da4f4;
        case 0x1da4f8u: goto label_1da4f8;
        case 0x1da4fcu: goto label_1da4fc;
        case 0x1da500u: goto label_1da500;
        case 0x1da504u: goto label_1da504;
        case 0x1da508u: goto label_1da508;
        case 0x1da50cu: goto label_1da50c;
        case 0x1da510u: goto label_1da510;
        case 0x1da514u: goto label_1da514;
        case 0x1da518u: goto label_1da518;
        case 0x1da51cu: goto label_1da51c;
        case 0x1da520u: goto label_1da520;
        case 0x1da524u: goto label_1da524;
        case 0x1da528u: goto label_1da528;
        case 0x1da52cu: goto label_1da52c;
        case 0x1da530u: goto label_1da530;
        case 0x1da534u: goto label_1da534;
        case 0x1da538u: goto label_1da538;
        case 0x1da53cu: goto label_1da53c;
        case 0x1da540u: goto label_1da540;
        case 0x1da544u: goto label_1da544;
        case 0x1da548u: goto label_1da548;
        case 0x1da54cu: goto label_1da54c;
        case 0x1da550u: goto label_1da550;
        case 0x1da554u: goto label_1da554;
        case 0x1da558u: goto label_1da558;
        case 0x1da55cu: goto label_1da55c;
        case 0x1da560u: goto label_1da560;
        case 0x1da564u: goto label_1da564;
        case 0x1da568u: goto label_1da568;
        case 0x1da56cu: goto label_1da56c;
        case 0x1da570u: goto label_1da570;
        case 0x1da574u: goto label_1da574;
        case 0x1da578u: goto label_1da578;
        case 0x1da57cu: goto label_1da57c;
        case 0x1da580u: goto label_1da580;
        case 0x1da584u: goto label_1da584;
        case 0x1da588u: goto label_1da588;
        case 0x1da58cu: goto label_1da58c;
        case 0x1da590u: goto label_1da590;
        case 0x1da594u: goto label_1da594;
        case 0x1da598u: goto label_1da598;
        case 0x1da59cu: goto label_1da59c;
        case 0x1da5a0u: goto label_1da5a0;
        case 0x1da5a4u: goto label_1da5a4;
        case 0x1da5a8u: goto label_1da5a8;
        case 0x1da5acu: goto label_1da5ac;
        case 0x1da5b0u: goto label_1da5b0;
        case 0x1da5b4u: goto label_1da5b4;
        case 0x1da5b8u: goto label_1da5b8;
        case 0x1da5bcu: goto label_1da5bc;
        case 0x1da5c0u: goto label_1da5c0;
        case 0x1da5c4u: goto label_1da5c4;
        case 0x1da5c8u: goto label_1da5c8;
        case 0x1da5ccu: goto label_1da5cc;
        case 0x1da5d0u: goto label_1da5d0;
        case 0x1da5d4u: goto label_1da5d4;
        case 0x1da5d8u: goto label_1da5d8;
        case 0x1da5dcu: goto label_1da5dc;
        case 0x1da5e0u: goto label_1da5e0;
        case 0x1da5e4u: goto label_1da5e4;
        case 0x1da5e8u: goto label_1da5e8;
        case 0x1da5ecu: goto label_1da5ec;
        case 0x1da5f0u: goto label_1da5f0;
        case 0x1da5f4u: goto label_1da5f4;
        case 0x1da5f8u: goto label_1da5f8;
        case 0x1da5fcu: goto label_1da5fc;
        case 0x1da600u: goto label_1da600;
        case 0x1da604u: goto label_1da604;
        case 0x1da608u: goto label_1da608;
        case 0x1da60cu: goto label_1da60c;
        case 0x1da610u: goto label_1da610;
        case 0x1da614u: goto label_1da614;
        case 0x1da618u: goto label_1da618;
        case 0x1da61cu: goto label_1da61c;
        case 0x1da620u: goto label_1da620;
        case 0x1da624u: goto label_1da624;
        case 0x1da628u: goto label_1da628;
        case 0x1da62cu: goto label_1da62c;
        case 0x1da630u: goto label_1da630;
        case 0x1da634u: goto label_1da634;
        case 0x1da638u: goto label_1da638;
        case 0x1da63cu: goto label_1da63c;
        case 0x1da640u: goto label_1da640;
        case 0x1da644u: goto label_1da644;
        case 0x1da648u: goto label_1da648;
        case 0x1da64cu: goto label_1da64c;
        case 0x1da650u: goto label_1da650;
        case 0x1da654u: goto label_1da654;
        case 0x1da658u: goto label_1da658;
        case 0x1da65cu: goto label_1da65c;
        case 0x1da660u: goto label_1da660;
        case 0x1da664u: goto label_1da664;
        case 0x1da668u: goto label_1da668;
        case 0x1da66cu: goto label_1da66c;
        case 0x1da670u: goto label_1da670;
        case 0x1da674u: goto label_1da674;
        case 0x1da678u: goto label_1da678;
        case 0x1da67cu: goto label_1da67c;
        case 0x1da680u: goto label_1da680;
        case 0x1da684u: goto label_1da684;
        case 0x1da688u: goto label_1da688;
        case 0x1da68cu: goto label_1da68c;
        case 0x1da690u: goto label_1da690;
        case 0x1da694u: goto label_1da694;
        case 0x1da698u: goto label_1da698;
        case 0x1da69cu: goto label_1da69c;
        case 0x1da6a0u: goto label_1da6a0;
        case 0x1da6a4u: goto label_1da6a4;
        case 0x1da6a8u: goto label_1da6a8;
        case 0x1da6acu: goto label_1da6ac;
        case 0x1da6b0u: goto label_1da6b0;
        case 0x1da6b4u: goto label_1da6b4;
        case 0x1da6b8u: goto label_1da6b8;
        case 0x1da6bcu: goto label_1da6bc;
        case 0x1da6c0u: goto label_1da6c0;
        case 0x1da6c4u: goto label_1da6c4;
        case 0x1da6c8u: goto label_1da6c8;
        case 0x1da6ccu: goto label_1da6cc;
        case 0x1da6d0u: goto label_1da6d0;
        case 0x1da6d4u: goto label_1da6d4;
        case 0x1da6d8u: goto label_1da6d8;
        case 0x1da6dcu: goto label_1da6dc;
        case 0x1da6e0u: goto label_1da6e0;
        case 0x1da6e4u: goto label_1da6e4;
        case 0x1da6e8u: goto label_1da6e8;
        case 0x1da6ecu: goto label_1da6ec;
        case 0x1da6f0u: goto label_1da6f0;
        case 0x1da6f4u: goto label_1da6f4;
        case 0x1da6f8u: goto label_1da6f8;
        case 0x1da6fcu: goto label_1da6fc;
        case 0x1da700u: goto label_1da700;
        case 0x1da704u: goto label_1da704;
        case 0x1da708u: goto label_1da708;
        case 0x1da70cu: goto label_1da70c;
        case 0x1da710u: goto label_1da710;
        case 0x1da714u: goto label_1da714;
        case 0x1da718u: goto label_1da718;
        case 0x1da71cu: goto label_1da71c;
        case 0x1da720u: goto label_1da720;
        case 0x1da724u: goto label_1da724;
        case 0x1da728u: goto label_1da728;
        case 0x1da72cu: goto label_1da72c;
        case 0x1da730u: goto label_1da730;
        case 0x1da734u: goto label_1da734;
        case 0x1da738u: goto label_1da738;
        case 0x1da73cu: goto label_1da73c;
        case 0x1da740u: goto label_1da740;
        case 0x1da744u: goto label_1da744;
        case 0x1da748u: goto label_1da748;
        case 0x1da74cu: goto label_1da74c;
        case 0x1da750u: goto label_1da750;
        case 0x1da754u: goto label_1da754;
        case 0x1da758u: goto label_1da758;
        case 0x1da75cu: goto label_1da75c;
        case 0x1da760u: goto label_1da760;
        case 0x1da764u: goto label_1da764;
        case 0x1da768u: goto label_1da768;
        case 0x1da76cu: goto label_1da76c;
        case 0x1da770u: goto label_1da770;
        case 0x1da774u: goto label_1da774;
        case 0x1da778u: goto label_1da778;
        case 0x1da77cu: goto label_1da77c;
        case 0x1da780u: goto label_1da780;
        case 0x1da784u: goto label_1da784;
        case 0x1da788u: goto label_1da788;
        case 0x1da78cu: goto label_1da78c;
        case 0x1da790u: goto label_1da790;
        case 0x1da794u: goto label_1da794;
        case 0x1da798u: goto label_1da798;
        case 0x1da79cu: goto label_1da79c;
        case 0x1da7a0u: goto label_1da7a0;
        case 0x1da7a4u: goto label_1da7a4;
        case 0x1da7a8u: goto label_1da7a8;
        case 0x1da7acu: goto label_1da7ac;
        case 0x1da7b0u: goto label_1da7b0;
        case 0x1da7b4u: goto label_1da7b4;
        case 0x1da7b8u: goto label_1da7b8;
        case 0x1da7bcu: goto label_1da7bc;
        case 0x1da7c0u: goto label_1da7c0;
        case 0x1da7c4u: goto label_1da7c4;
        case 0x1da7c8u: goto label_1da7c8;
        case 0x1da7ccu: goto label_1da7cc;
        case 0x1da7d0u: goto label_1da7d0;
        case 0x1da7d4u: goto label_1da7d4;
        case 0x1da7d8u: goto label_1da7d8;
        case 0x1da7dcu: goto label_1da7dc;
        case 0x1da7e0u: goto label_1da7e0;
        case 0x1da7e4u: goto label_1da7e4;
        case 0x1da7e8u: goto label_1da7e8;
        case 0x1da7ecu: goto label_1da7ec;
        case 0x1da7f0u: goto label_1da7f0;
        case 0x1da7f4u: goto label_1da7f4;
        case 0x1da7f8u: goto label_1da7f8;
        case 0x1da7fcu: goto label_1da7fc;
        case 0x1da800u: goto label_1da800;
        case 0x1da804u: goto label_1da804;
        case 0x1da808u: goto label_1da808;
        case 0x1da80cu: goto label_1da80c;
        case 0x1da810u: goto label_1da810;
        case 0x1da814u: goto label_1da814;
        case 0x1da818u: goto label_1da818;
        case 0x1da81cu: goto label_1da81c;
        case 0x1da820u: goto label_1da820;
        case 0x1da824u: goto label_1da824;
        case 0x1da828u: goto label_1da828;
        case 0x1da82cu: goto label_1da82c;
        case 0x1da830u: goto label_1da830;
        case 0x1da834u: goto label_1da834;
        case 0x1da838u: goto label_1da838;
        case 0x1da83cu: goto label_1da83c;
        case 0x1da840u: goto label_1da840;
        case 0x1da844u: goto label_1da844;
        case 0x1da848u: goto label_1da848;
        case 0x1da84cu: goto label_1da84c;
        case 0x1da850u: goto label_1da850;
        case 0x1da854u: goto label_1da854;
        case 0x1da858u: goto label_1da858;
        case 0x1da85cu: goto label_1da85c;
        case 0x1da860u: goto label_1da860;
        case 0x1da864u: goto label_1da864;
        case 0x1da868u: goto label_1da868;
        case 0x1da86cu: goto label_1da86c;
        case 0x1da870u: goto label_1da870;
        case 0x1da874u: goto label_1da874;
        case 0x1da878u: goto label_1da878;
        case 0x1da87cu: goto label_1da87c;
        case 0x1da880u: goto label_1da880;
        case 0x1da884u: goto label_1da884;
        case 0x1da888u: goto label_1da888;
        case 0x1da88cu: goto label_1da88c;
        case 0x1da890u: goto label_1da890;
        case 0x1da894u: goto label_1da894;
        case 0x1da898u: goto label_1da898;
        case 0x1da89cu: goto label_1da89c;
        case 0x1da8a0u: goto label_1da8a0;
        case 0x1da8a4u: goto label_1da8a4;
        case 0x1da8a8u: goto label_1da8a8;
        case 0x1da8acu: goto label_1da8ac;
        case 0x1da8b0u: goto label_1da8b0;
        case 0x1da8b4u: goto label_1da8b4;
        case 0x1da8b8u: goto label_1da8b8;
        case 0x1da8bcu: goto label_1da8bc;
        case 0x1da8c0u: goto label_1da8c0;
        case 0x1da8c4u: goto label_1da8c4;
        case 0x1da8c8u: goto label_1da8c8;
        case 0x1da8ccu: goto label_1da8cc;
        case 0x1da8d0u: goto label_1da8d0;
        case 0x1da8d4u: goto label_1da8d4;
        case 0x1da8d8u: goto label_1da8d8;
        case 0x1da8dcu: goto label_1da8dc;
        case 0x1da8e0u: goto label_1da8e0;
        case 0x1da8e4u: goto label_1da8e4;
        case 0x1da8e8u: goto label_1da8e8;
        case 0x1da8ecu: goto label_1da8ec;
        case 0x1da8f0u: goto label_1da8f0;
        case 0x1da8f4u: goto label_1da8f4;
        case 0x1da8f8u: goto label_1da8f8;
        case 0x1da8fcu: goto label_1da8fc;
        case 0x1da900u: goto label_1da900;
        case 0x1da904u: goto label_1da904;
        case 0x1da908u: goto label_1da908;
        case 0x1da90cu: goto label_1da90c;
        case 0x1da910u: goto label_1da910;
        case 0x1da914u: goto label_1da914;
        case 0x1da918u: goto label_1da918;
        case 0x1da91cu: goto label_1da91c;
        case 0x1da920u: goto label_1da920;
        case 0x1da924u: goto label_1da924;
        case 0x1da928u: goto label_1da928;
        case 0x1da92cu: goto label_1da92c;
        case 0x1da930u: goto label_1da930;
        case 0x1da934u: goto label_1da934;
        case 0x1da938u: goto label_1da938;
        case 0x1da93cu: goto label_1da93c;
        case 0x1da940u: goto label_1da940;
        case 0x1da944u: goto label_1da944;
        case 0x1da948u: goto label_1da948;
        case 0x1da94cu: goto label_1da94c;
        case 0x1da950u: goto label_1da950;
        case 0x1da954u: goto label_1da954;
        case 0x1da958u: goto label_1da958;
        case 0x1da95cu: goto label_1da95c;
        case 0x1da960u: goto label_1da960;
        case 0x1da964u: goto label_1da964;
        case 0x1da968u: goto label_1da968;
        case 0x1da96cu: goto label_1da96c;
        case 0x1da970u: goto label_1da970;
        case 0x1da974u: goto label_1da974;
        case 0x1da978u: goto label_1da978;
        case 0x1da97cu: goto label_1da97c;
        case 0x1da980u: goto label_1da980;
        case 0x1da984u: goto label_1da984;
        case 0x1da988u: goto label_1da988;
        case 0x1da98cu: goto label_1da98c;
        case 0x1da990u: goto label_1da990;
        case 0x1da994u: goto label_1da994;
        case 0x1da998u: goto label_1da998;
        case 0x1da99cu: goto label_1da99c;
        case 0x1da9a0u: goto label_1da9a0;
        case 0x1da9a4u: goto label_1da9a4;
        case 0x1da9a8u: goto label_1da9a8;
        case 0x1da9acu: goto label_1da9ac;
        case 0x1da9b0u: goto label_1da9b0;
        case 0x1da9b4u: goto label_1da9b4;
        case 0x1da9b8u: goto label_1da9b8;
        case 0x1da9bcu: goto label_1da9bc;
        case 0x1da9c0u: goto label_1da9c0;
        case 0x1da9c4u: goto label_1da9c4;
        case 0x1da9c8u: goto label_1da9c8;
        case 0x1da9ccu: goto label_1da9cc;
        case 0x1da9d0u: goto label_1da9d0;
        case 0x1da9d4u: goto label_1da9d4;
        case 0x1da9d8u: goto label_1da9d8;
        case 0x1da9dcu: goto label_1da9dc;
        case 0x1da9e0u: goto label_1da9e0;
        case 0x1da9e4u: goto label_1da9e4;
        case 0x1da9e8u: goto label_1da9e8;
        case 0x1da9ecu: goto label_1da9ec;
        case 0x1da9f0u: goto label_1da9f0;
        case 0x1da9f4u: goto label_1da9f4;
        case 0x1da9f8u: goto label_1da9f8;
        case 0x1da9fcu: goto label_1da9fc;
        case 0x1daa00u: goto label_1daa00;
        case 0x1daa04u: goto label_1daa04;
        case 0x1daa08u: goto label_1daa08;
        case 0x1daa0cu: goto label_1daa0c;
        case 0x1daa10u: goto label_1daa10;
        case 0x1daa14u: goto label_1daa14;
        case 0x1daa18u: goto label_1daa18;
        case 0x1daa1cu: goto label_1daa1c;
        case 0x1daa20u: goto label_1daa20;
        case 0x1daa24u: goto label_1daa24;
        case 0x1daa28u: goto label_1daa28;
        case 0x1daa2cu: goto label_1daa2c;
        case 0x1daa30u: goto label_1daa30;
        case 0x1daa34u: goto label_1daa34;
        case 0x1daa38u: goto label_1daa38;
        case 0x1daa3cu: goto label_1daa3c;
        case 0x1daa40u: goto label_1daa40;
        case 0x1daa44u: goto label_1daa44;
        case 0x1daa48u: goto label_1daa48;
        case 0x1daa4cu: goto label_1daa4c;
        case 0x1daa50u: goto label_1daa50;
        case 0x1daa54u: goto label_1daa54;
        case 0x1daa58u: goto label_1daa58;
        case 0x1daa5cu: goto label_1daa5c;
        case 0x1daa60u: goto label_1daa60;
        case 0x1daa64u: goto label_1daa64;
        case 0x1daa68u: goto label_1daa68;
        case 0x1daa6cu: goto label_1daa6c;
        case 0x1daa70u: goto label_1daa70;
        case 0x1daa74u: goto label_1daa74;
        case 0x1daa78u: goto label_1daa78;
        case 0x1daa7cu: goto label_1daa7c;
        case 0x1daa80u: goto label_1daa80;
        case 0x1daa84u: goto label_1daa84;
        case 0x1daa88u: goto label_1daa88;
        case 0x1daa8cu: goto label_1daa8c;
        case 0x1daa90u: goto label_1daa90;
        case 0x1daa94u: goto label_1daa94;
        case 0x1daa98u: goto label_1daa98;
        case 0x1daa9cu: goto label_1daa9c;
        case 0x1daaa0u: goto label_1daaa0;
        case 0x1daaa4u: goto label_1daaa4;
        case 0x1daaa8u: goto label_1daaa8;
        case 0x1daaacu: goto label_1daaac;
        case 0x1daab0u: goto label_1daab0;
        case 0x1daab4u: goto label_1daab4;
        case 0x1daab8u: goto label_1daab8;
        case 0x1daabcu: goto label_1daabc;
        case 0x1daac0u: goto label_1daac0;
        case 0x1daac4u: goto label_1daac4;
        case 0x1daac8u: goto label_1daac8;
        case 0x1daaccu: goto label_1daacc;
        default: break;
    }

    ctx->pc = 0x1da410u;

label_1da410:
    // 0x1da410: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1da410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1da414:
    // 0x1da414: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1da414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da418:
    // 0x1da418: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1da418u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1da41c:
    // 0x1da41c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1da41cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1da420:
    // 0x1da420: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1da420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1da424:
    // 0x1da424: 0x261101dc  addiu       $s1, $s0, 0x1DC
    ctx->pc = 0x1da424u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 476));
label_1da428:
    // 0x1da428: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1da428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1da42c:
    // 0x1da42c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1da42cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da430:
    // 0x1da430: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1da430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1da434:
    // 0x1da434: 0x261303a8  addiu       $s3, $s0, 0x3A8
    ctx->pc = 0x1da434u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 936));
label_1da438:
    // 0x1da438: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1da438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_1da43c:
    // 0x1da43c: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1da43cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1da440:
    // 0x1da440: 0xae0203d4  sw          $v0, 0x3D4($s0)
    ctx->pc = 0x1da440u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 980), GPR_U32(ctx, 2));
label_1da444:
    // 0x1da444: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1da444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1da448:
    // 0x1da448: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x1da448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_1da44c:
    // 0x1da44c: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1da44cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1da450:
    // 0x1da450: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1da450u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1da454:
    // 0x1da454: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x1da454u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1da458:
    // 0x1da458: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1da458u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1da45c:
    // 0x1da45c: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x1da45cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_1da460:
    // 0x1da460: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1da460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1da464:
    // 0x1da464: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1da464u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1da468:
    // 0x1da468: 0xae000418  sw          $zero, 0x418($s0)
    ctx->pc = 0x1da468u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1048), GPR_U32(ctx, 0));
label_1da46c:
    // 0x1da46c: 0xae00041c  sw          $zero, 0x41C($s0)
    ctx->pc = 0x1da46cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1052), GPR_U32(ctx, 0));
label_1da470:
    // 0x1da470: 0x40f809  jalr        $v0
label_1da474:
    if (ctx->pc == 0x1DA474u) {
        ctx->pc = 0x1DA474u;
            // 0x1da474: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->pc = 0x1DA478u;
        goto label_1da478;
    }
    ctx->pc = 0x1DA470u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DA478u);
        ctx->pc = 0x1DA474u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA470u;
            // 0x1da474: 0xae200068  sw          $zero, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DA478u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DA478u; }
            if (ctx->pc != 0x1DA478u) { return; }
        }
        }
    }
    ctx->pc = 0x1DA478u;
label_1da478:
    // 0x1da478: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1da478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1da47c:
    // 0x1da47c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1da47cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1da480:
    // 0x1da480: 0x623024  and         $a2, $v1, $v0
    ctx->pc = 0x1da480u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1da484:
    // 0x1da484: 0x661823  subu        $v1, $v1, $a2
    ctx->pc = 0x1da484u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_1da488:
    // 0x1da488: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1da488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1da48c:
    // 0x1da48c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da48cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da490:
    // 0x1da490: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da490u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da494:
    // 0x1da494: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da494u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da498:
    // 0x1da498: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da498u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da49c:
    // 0x1da49c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da49cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da4a0:
    // 0x1da4a0: 0x90c40000  lbu         $a0, 0x0($a2)
    ctx->pc = 0x1da4a0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da4a4:
    // 0x1da4a4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da4a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da4a8:
    // 0x1da4a8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da4a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da4ac:
    // 0x1da4ac: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da4acu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da4b0:
    // 0x1da4b0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da4b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da4b4:
    // 0x1da4b4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1da4b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
label_1da4b8:
    // 0x1da4b8: 0x340c0  sll         $t0, $v1, 3
    ctx->pc = 0x1da4b8u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1da4bc:
    // 0x1da4bc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da4bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da4c0:
    // 0x1da4c0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da4c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da4c4:
    // 0x1da4c4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da4c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da4c8:
    // 0x1da4c8: 0x39030000  xori        $v1, $t0, 0x0
    ctx->pc = 0x1da4c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)0);
label_1da4cc:
    // 0x1da4cc: 0x1051004  sllv        $v0, $a1, $t0
    ctx->pc = 0x1da4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1da4d0:
    // 0x1da4d0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1da4d0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da4d4:
    // 0x1da4d4: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da4d4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da4d8:
    // 0x1da4d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da4d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da4dc:
    // 0x1da4dc: 0x43380b  movn        $a3, $v0, $v1
    ctx->pc = 0x1da4dcu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_1da4e0:
    // 0x1da4e0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da4e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da4e4:
    // 0x1da4e4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da4e4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da4e8:
    // 0x1da4e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da4e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da4ec:
    // 0x1da4ec: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1da4ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da4f0:
    // 0x1da4f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da4f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da4f4:
    // 0x1da4f4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da4f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da4f8:
    // 0x1da4f8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da4f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da4fc:
    // 0x1da4fc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da4fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da500:
    // 0x1da500: 0x29040014  slti        $a0, $t0, 0x14
    ctx->pc = 0x1da500u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
label_1da504:
    // 0x1da504: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1da504u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1da508:
    // 0x1da508: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da508u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da50c:
    // 0x1da50c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da50cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da510:
    // 0x1da510: 0x1480001d  bnez        $a0, . + 4 + (0x1D << 2)
label_1da514:
    if (ctx->pc == 0x1DA514u) {
        ctx->pc = 0x1DA514u;
            // 0x1da514: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1DA518u;
        goto label_1da518;
    }
    ctx->pc = 0x1DA510u;
    {
        const bool branch_taken_0x1da510 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA514u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA510u;
            // 0x1da514: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da510) {
            ctx->pc = 0x1DA588u;
            goto label_1da588;
        }
    }
    ctx->pc = 0x1DA518u;
label_1da518:
    // 0x1da518: 0x2508ffec  addiu       $t0, $t0, -0x14
    ctx->pc = 0x1da518u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
label_1da51c:
    // 0x1da51c: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_1da520:
    if (ctx->pc == 0x1DA520u) {
        ctx->pc = 0x1DA520u;
            // 0x1da520: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x1DA524u;
        goto label_1da524;
    }
    ctx->pc = 0x1DA51Cu;
    {
        const bool branch_taken_0x1da51c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA520u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA51Cu;
            // 0x1da520: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da51c) {
            ctx->pc = 0x1DA540u;
            goto label_1da540;
        }
    }
    ctx->pc = 0x1DA524u;
label_1da524:
    // 0x1da524: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1da524u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1da528:
    // 0x1da528: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1da528u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1da52c:
    // 0x1da52c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1da52cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1da530:
    // 0x1da530: 0x71d02  srl         $v1, $a3, 20
    ctx->pc = 0x1da530u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1da534:
    // 0x1da534: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1da534u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1da538:
    // 0x1da538: 0x10000004  b           . + 4 + (0x4 << 2)
label_1da53c:
    if (ctx->pc == 0x1DA53Cu) {
        ctx->pc = 0x1DA53Cu;
            // 0x1da53c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x1DA540u;
        goto label_1da540;
    }
    ctx->pc = 0x1DA538u;
    {
        const bool branch_taken_0x1da538 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA53Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA538u;
            // 0x1da53c: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da538) {
            ctx->pc = 0x1DA54Cu;
            goto label_1da54c;
        }
    }
    ctx->pc = 0x1DA540u;
label_1da540:
    // 0x1da540: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x1da540u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1da544:
    // 0x1da544: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1da544u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da548:
    // 0x1da548: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1da548u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1da54c:
    // 0x1da54c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da54cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da550:
    // 0x1da550: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da550u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da554:
    // 0x1da554: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da554u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da558:
    // 0x1da558: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da558u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da55c:
    // 0x1da55c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da55cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da560:
    // 0x1da560: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1da560u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da564:
    // 0x1da564: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da564u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da568:
    // 0x1da568: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da568u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da56c:
    // 0x1da56c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da56cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da570:
    // 0x1da570: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da570u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da574:
    // 0x1da574: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1da574u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1da578:
    // 0x1da578: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da578u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da57c:
    // 0x1da57c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da57cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da580:
    // 0x1da580: 0x10000005  b           . + 4 + (0x5 << 2)
label_1da584:
    if (ctx->pc == 0x1DA584u) {
        ctx->pc = 0x1DA584u;
            // 0x1da584: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1DA588u;
        goto label_1da588;
    }
    ctx->pc = 0x1DA580u;
    {
        const bool branch_taken_0x1da580 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA580u;
            // 0x1da584: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da580) {
            ctx->pc = 0x1DA598u;
            goto label_1da598;
        }
    }
    ctx->pc = 0x1DA588u;
label_1da588:
    // 0x1da588: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x1da588u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1da58c:
    // 0x1da58c: 0x73b00  sll         $a3, $a3, 12
    ctx->pc = 0x1da58cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
label_1da590:
    // 0x1da590: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1da590u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1da594:
    // 0x1da594: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x1da594u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1da598:
    // 0x1da598: 0x29020014  slti        $v0, $t0, 0x14
    ctx->pc = 0x1da598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)20) ? 1 : 0);
label_1da59c:
    // 0x1da59c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1da5a0:
    if (ctx->pc == 0x1DA5A0u) {
        ctx->pc = 0x1DA5A0u;
            // 0x1da5a0: 0x71502  srl         $v0, $a3, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
        ctx->pc = 0x1DA5A4u;
        goto label_1da5a4;
    }
    ctx->pc = 0x1DA59Cu;
    {
        const bool branch_taken_0x1da59c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA59Cu;
            // 0x1da5a0: 0x71502  srl         $v0, $a3, 20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da59c) {
            ctx->pc = 0x1DA618u;
            goto label_1da618;
        }
    }
    ctx->pc = 0x1DA5A4u;
label_1da5a4:
    // 0x1da5a4: 0x2508ffec  addiu       $t0, $t0, -0x14
    ctx->pc = 0x1da5a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967276));
label_1da5a8:
    // 0x1da5a8: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_1da5ac:
    if (ctx->pc == 0x1DA5ACu) {
        ctx->pc = 0x1DA5ACu;
            // 0x1da5ac: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->pc = 0x1DA5B0u;
        goto label_1da5b0;
    }
    ctx->pc = 0x1DA5A8u;
    {
        const bool branch_taken_0x1da5a8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA5A8u;
            // 0x1da5ac: 0x2402000c  addiu       $v0, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5a8) {
            ctx->pc = 0x1DA5D0u;
            goto label_1da5d0;
        }
    }
    ctx->pc = 0x1DA5B0u;
label_1da5b0:
    // 0x1da5b0: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1da5b0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1da5b4:
    // 0x1da5b4: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1da5b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1da5b8:
    // 0x1da5b8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1da5b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1da5bc:
    // 0x1da5bc: 0x71d02  srl         $v1, $a3, 20
    ctx->pc = 0x1da5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1da5c0:
    // 0x1da5c0: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1da5c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1da5c4:
    // 0x1da5c4: 0x10000005  b           . + 4 + (0x5 << 2)
label_1da5c8:
    if (ctx->pc == 0x1DA5C8u) {
        ctx->pc = 0x1DA5C8u;
            // 0x1da5c8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x1DA5CCu;
        goto label_1da5cc;
    }
    ctx->pc = 0x1DA5C4u;
    {
        const bool branch_taken_0x1da5c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA5C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA5C4u;
            // 0x1da5c8: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da5c4) {
            ctx->pc = 0x1DA5DCu;
            goto label_1da5dc;
        }
    }
    ctx->pc = 0x1DA5CCu;
label_1da5cc:
    // 0x1da5cc: 0x0  nop
    ctx->pc = 0x1da5ccu;
    // NOP
label_1da5d0:
    // 0x1da5d0: 0x71502  srl         $v0, $a3, 20
    ctx->pc = 0x1da5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 20));
label_1da5d4:
    // 0x1da5d4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1da5d4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da5d8:
    // 0x1da5d8: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1da5d8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1da5dc:
    // 0x1da5dc: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da5dcu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da5e0:
    // 0x1da5e0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da5e4:
    // 0x1da5e4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da5e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da5e8:
    // 0x1da5e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da5e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da5ec:
    // 0x1da5ec: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da5ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da5f0:
    // 0x1da5f0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1da5f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da5f4:
    // 0x1da5f4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da5f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da5f8:
    // 0x1da5f8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da5f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da5fc:
    // 0x1da5fc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da5fcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da600:
    // 0x1da600: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da600u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da604:
    // 0x1da604: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1da604u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1da608:
    // 0x1da608: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da608u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da60c:
    // 0x1da60c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da60cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da610:
    // 0x1da610: 0x10000004  b           . + 4 + (0x4 << 2)
label_1da614:
    if (ctx->pc == 0x1DA614u) {
        ctx->pc = 0x1DA614u;
            // 0x1da614: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1DA618u;
        goto label_1da618;
    }
    ctx->pc = 0x1DA610u;
    {
        const bool branch_taken_0x1da610 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA614u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA610u;
            // 0x1da614: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da610) {
            ctx->pc = 0x1DA624u;
            goto label_1da624;
        }
    }
    ctx->pc = 0x1DA618u;
label_1da618:
    // 0x1da618: 0x73b00  sll         $a3, $a3, 12
    ctx->pc = 0x1da618u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 12));
label_1da61c:
    // 0x1da61c: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1da61cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1da620:
    // 0x1da620: 0x2508000c  addiu       $t0, $t0, 0xC
    ctx->pc = 0x1da620u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
label_1da624:
    // 0x1da624: 0x2902001c  slti        $v0, $t0, 0x1C
    ctx->pc = 0x1da624u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)28) ? 1 : 0);
label_1da628:
    // 0x1da628: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1da62c:
    if (ctx->pc == 0x1DA62Cu) {
        ctx->pc = 0x1DA62Cu;
            // 0x1da62c: 0x71702  srl         $v0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->pc = 0x1DA630u;
        goto label_1da630;
    }
    ctx->pc = 0x1DA628u;
    {
        const bool branch_taken_0x1da628 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA62Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA628u;
            // 0x1da62c: 0x71702  srl         $v0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da628) {
            ctx->pc = 0x1DA6A0u;
            goto label_1da6a0;
        }
    }
    ctx->pc = 0x1DA630u;
label_1da630:
    // 0x1da630: 0x2508ffe4  addiu       $t0, $t0, -0x1C
    ctx->pc = 0x1da630u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967268));
label_1da634:
    // 0x1da634: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_1da638:
    if (ctx->pc == 0x1DA638u) {
        ctx->pc = 0x1DA638u;
            // 0x1da638: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DA63Cu;
        goto label_1da63c;
    }
    ctx->pc = 0x1DA634u;
    {
        const bool branch_taken_0x1da634 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA634u;
            // 0x1da638: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da634) {
            ctx->pc = 0x1DA658u;
            goto label_1da658;
        }
    }
    ctx->pc = 0x1DA63Cu;
label_1da63c:
    // 0x1da63c: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1da63cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1da640:
    // 0x1da640: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1da640u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1da644:
    // 0x1da644: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1da644u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1da648:
    // 0x1da648: 0x71f02  srl         $v1, $a3, 28
    ctx->pc = 0x1da648u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_1da64c:
    // 0x1da64c: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1da64cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1da650:
    // 0x1da650: 0x10000004  b           . + 4 + (0x4 << 2)
label_1da654:
    if (ctx->pc == 0x1DA654u) {
        ctx->pc = 0x1DA654u;
            // 0x1da654: 0xae0302c0  sw          $v1, 0x2C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 3));
        ctx->pc = 0x1DA658u;
        goto label_1da658;
    }
    ctx->pc = 0x1DA650u;
    {
        const bool branch_taken_0x1da650 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA654u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA650u;
            // 0x1da654: 0xae0302c0  sw          $v1, 0x2C0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da650) {
            ctx->pc = 0x1DA664u;
            goto label_1da664;
        }
    }
    ctx->pc = 0x1DA658u;
label_1da658:
    // 0x1da658: 0x71702  srl         $v0, $a3, 28
    ctx->pc = 0x1da658u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_1da65c:
    // 0x1da65c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1da65cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da660:
    // 0x1da660: 0xae0202c0  sw          $v0, 0x2C0($s0)
    ctx->pc = 0x1da660u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 2));
label_1da664:
    // 0x1da664: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da664u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da668:
    // 0x1da668: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da66c:
    // 0x1da66c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da66cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da670:
    // 0x1da670: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da670u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da674:
    // 0x1da674: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da674u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da678:
    // 0x1da678: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1da678u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da67c:
    // 0x1da67c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da67cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da680:
    // 0x1da680: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da684:
    // 0x1da684: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da684u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da688:
    // 0x1da688: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da688u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da68c:
    // 0x1da68c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1da68cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1da690:
    // 0x1da690: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da694:
    // 0x1da694: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da694u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da698:
    // 0x1da698: 0x10000004  b           . + 4 + (0x4 << 2)
label_1da69c:
    if (ctx->pc == 0x1DA69Cu) {
        ctx->pc = 0x1DA69Cu;
            // 0x1da69c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1DA6A0u;
        goto label_1da6a0;
    }
    ctx->pc = 0x1DA698u;
    {
        const bool branch_taken_0x1da698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA69Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA698u;
            // 0x1da69c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da698) {
            ctx->pc = 0x1DA6ACu;
            goto label_1da6ac;
        }
    }
    ctx->pc = 0x1DA6A0u;
label_1da6a0:
    // 0x1da6a0: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1da6a0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1da6a4:
    // 0x1da6a4: 0xae0202c0  sw          $v0, 0x2C0($s0)
    ctx->pc = 0x1da6a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 704), GPR_U32(ctx, 2));
label_1da6a8:
    // 0x1da6a8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1da6a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1da6ac:
    // 0x1da6ac: 0x2902001c  slti        $v0, $t0, 0x1C
    ctx->pc = 0x1da6acu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)28) ? 1 : 0);
label_1da6b0:
    // 0x1da6b0: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1da6b4:
    if (ctx->pc == 0x1DA6B4u) {
        ctx->pc = 0x1DA6B4u;
            // 0x1da6b4: 0x72702  srl         $a0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->pc = 0x1DA6B8u;
        goto label_1da6b8;
    }
    ctx->pc = 0x1DA6B0u;
    {
        const bool branch_taken_0x1da6b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6B0u;
            // 0x1da6b4: 0x72702  srl         $a0, $a3, 28 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6b0) {
            ctx->pc = 0x1DA720u;
            goto label_1da720;
        }
    }
    ctx->pc = 0x1DA6B8u;
label_1da6b8:
    // 0x1da6b8: 0x2508ffe4  addiu       $t0, $t0, -0x1C
    ctx->pc = 0x1da6b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967268));
label_1da6bc:
    // 0x1da6bc: 0x11000008  beqz        $t0, . + 4 + (0x8 << 2)
label_1da6c0:
    if (ctx->pc == 0x1DA6C0u) {
        ctx->pc = 0x1DA6C0u;
            // 0x1da6c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x1DA6C4u;
        goto label_1da6c4;
    }
    ctx->pc = 0x1DA6BCu;
    {
        const bool branch_taken_0x1da6bc = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6BCu;
            // 0x1da6c0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6bc) {
            ctx->pc = 0x1DA6E0u;
            goto label_1da6e0;
        }
    }
    ctx->pc = 0x1DA6C4u;
label_1da6c4:
    // 0x1da6c4: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1da6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1da6c8:
    // 0x1da6c8: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1da6c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1da6cc:
    // 0x1da6cc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1da6ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1da6d0:
    // 0x1da6d0: 0x72702  srl         $a0, $a3, 28
    ctx->pc = 0x1da6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 28));
label_1da6d4:
    // 0x1da6d4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1da6d8:
    if (ctx->pc == 0x1DA6D8u) {
        ctx->pc = 0x1DA6D8u;
            // 0x1da6d8: 0x1053804  sllv        $a3, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
        ctx->pc = 0x1DA6DCu;
        goto label_1da6dc;
    }
    ctx->pc = 0x1DA6D4u;
    {
        const bool branch_taken_0x1da6d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA6D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA6D4u;
            // 0x1da6d8: 0x1053804  sllv        $a3, $a1, $t0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da6d4) {
            ctx->pc = 0x1DA6E4u;
            goto label_1da6e4;
        }
    }
    ctx->pc = 0x1DA6DCu;
label_1da6dc:
    // 0x1da6dc: 0x0  nop
    ctx->pc = 0x1da6dcu;
    // NOP
label_1da6e0:
    // 0x1da6e0: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1da6e0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da6e4:
    // 0x1da6e4: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da6e4u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da6e8:
    // 0x1da6e8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da6e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da6ec:
    // 0x1da6ec: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da6ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da6f0:
    // 0x1da6f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da6f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da6f4:
    // 0x1da6f4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da6f8:
    // 0x1da6f8: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1da6f8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da6fc:
    // 0x1da6fc: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da6fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da700:
    // 0x1da700: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da700u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da704:
    // 0x1da704: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da704u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da708:
    // 0x1da708: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da708u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da70c:
    // 0x1da70c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1da70cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1da710:
    // 0x1da710: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da714:
    // 0x1da714: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da714u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da718:
    // 0x1da718: 0x10000003  b           . + 4 + (0x3 << 2)
label_1da71c:
    if (ctx->pc == 0x1DA71Cu) {
        ctx->pc = 0x1DA71Cu;
            // 0x1da71c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1DA720u;
        goto label_1da720;
    }
    ctx->pc = 0x1DA718u;
    {
        const bool branch_taken_0x1da718 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA71Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA718u;
            // 0x1da71c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da718) {
            ctx->pc = 0x1DA728u;
            goto label_1da728;
        }
    }
    ctx->pc = 0x1DA720u;
label_1da720:
    // 0x1da720: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x1da720u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
label_1da724:
    // 0x1da724: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1da724u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1da728:
    // 0x1da728: 0x2902000e  slti        $v0, $t0, 0xE
    ctx->pc = 0x1da728u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)14) ? 1 : 0);
label_1da72c:
    // 0x1da72c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1da730:
    if (ctx->pc == 0x1DA730u) {
        ctx->pc = 0x1DA730u;
            // 0x1da730: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->pc = 0x1DA734u;
        goto label_1da734;
    }
    ctx->pc = 0x1DA72Cu;
    {
        const bool branch_taken_0x1da72c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA730u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA72Cu;
            // 0x1da730: 0xae240010  sw          $a0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da72c) {
            ctx->pc = 0x1DA7A8u;
            goto label_1da7a8;
        }
    }
    ctx->pc = 0x1DA734u;
label_1da734:
    // 0x1da734: 0x2508fff2  addiu       $t0, $t0, -0xE
    ctx->pc = 0x1da734u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967282));
label_1da738:
    // 0x1da738: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_1da73c:
    if (ctx->pc == 0x1DA73Cu) {
        ctx->pc = 0x1DA73Cu;
            // 0x1da73c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->pc = 0x1DA740u;
        goto label_1da740;
    }
    ctx->pc = 0x1DA738u;
    {
        const bool branch_taken_0x1da738 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA73Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA738u;
            // 0x1da73c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da738) {
            ctx->pc = 0x1DA760u;
            goto label_1da760;
        }
    }
    ctx->pc = 0x1DA740u;
label_1da740:
    // 0x1da740: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1da740u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1da744:
    // 0x1da744: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1da744u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1da748:
    // 0x1da748: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1da748u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1da74c:
    // 0x1da74c: 0x71b82  srl         $v1, $a3, 14
    ctx->pc = 0x1da74cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_1da750:
    // 0x1da750: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1da750u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1da754:
    // 0x1da754: 0x10000005  b           . + 4 + (0x5 << 2)
label_1da758:
    if (ctx->pc == 0x1DA758u) {
        ctx->pc = 0x1DA758u;
            // 0x1da758: 0xae0302c4  sw          $v1, 0x2C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 3));
        ctx->pc = 0x1DA75Cu;
        goto label_1da75c;
    }
    ctx->pc = 0x1DA754u;
    {
        const bool branch_taken_0x1da754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA758u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA754u;
            // 0x1da758: 0xae0302c4  sw          $v1, 0x2C4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da754) {
            ctx->pc = 0x1DA76Cu;
            goto label_1da76c;
        }
    }
    ctx->pc = 0x1DA75Cu;
label_1da75c:
    // 0x1da75c: 0x0  nop
    ctx->pc = 0x1da75cu;
    // NOP
label_1da760:
    // 0x1da760: 0x71382  srl         $v0, $a3, 14
    ctx->pc = 0x1da760u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_1da764:
    // 0x1da764: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1da764u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da768:
    // 0x1da768: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x1da768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
label_1da76c:
    // 0x1da76c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da76cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da770:
    // 0x1da770: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da774:
    // 0x1da774: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da774u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da778:
    // 0x1da778: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da778u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da77c:
    // 0x1da77c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da77cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da780:
    // 0x1da780: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1da780u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da784:
    // 0x1da784: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da784u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da788:
    // 0x1da788: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da788u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da78c:
    // 0x1da78c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da78cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da790:
    // 0x1da790: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da794:
    // 0x1da794: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1da794u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1da798:
    // 0x1da798: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da79c:
    // 0x1da79c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da79cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da7a0:
    // 0x1da7a0: 0x10000005  b           . + 4 + (0x5 << 2)
label_1da7a4:
    if (ctx->pc == 0x1DA7A4u) {
        ctx->pc = 0x1DA7A4u;
            // 0x1da7a4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1DA7A8u;
        goto label_1da7a8;
    }
    ctx->pc = 0x1DA7A0u;
    {
        const bool branch_taken_0x1da7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA7A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7A0u;
            // 0x1da7a4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da7a0) {
            ctx->pc = 0x1DA7B8u;
            goto label_1da7b8;
        }
    }
    ctx->pc = 0x1DA7A8u;
label_1da7a8:
    // 0x1da7a8: 0x71382  srl         $v0, $a3, 14
    ctx->pc = 0x1da7a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 14));
label_1da7ac:
    // 0x1da7ac: 0x73c80  sll         $a3, $a3, 18
    ctx->pc = 0x1da7acu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 18));
label_1da7b0:
    // 0x1da7b0: 0xae0202c4  sw          $v0, 0x2C4($s0)
    ctx->pc = 0x1da7b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 708), GPR_U32(ctx, 2));
label_1da7b4:
    // 0x1da7b4: 0x25080012  addiu       $t0, $t0, 0x12
    ctx->pc = 0x1da7b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 18));
label_1da7b8:
    // 0x1da7b8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1da7b8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1da7bc:
    // 0x1da7bc: 0x29020020  slti        $v0, $t0, 0x20
    ctx->pc = 0x1da7bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)32) ? 1 : 0);
label_1da7c0:
    // 0x1da7c0: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1da7c4:
    if (ctx->pc == 0x1DA7C4u) {
        ctx->pc = 0x1DA7C4u;
            // 0x1da7c4: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->pc = 0x1DA7C8u;
        goto label_1da7c8;
    }
    ctx->pc = 0x1DA7C0u;
    {
        const bool branch_taken_0x1da7c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da7c0) {
            ctx->pc = 0x1DA7C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA7C0u;
            // 0x1da7c4: 0x73840  sll         $a3, $a3, 1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA808u;
            goto label_1da808;
        }
    }
    ctx->pc = 0x1DA7C8u;
label_1da7c8:
    // 0x1da7c8: 0x2508ffe0  addiu       $t0, $t0, -0x20
    ctx->pc = 0x1da7c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967264));
label_1da7cc:
    // 0x1da7cc: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1da7ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1da7d0:
    // 0x1da7d0: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da7d0u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da7d4:
    // 0x1da7d4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da7d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da7d8:
    // 0x1da7d8: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da7d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da7dc:
    // 0x1da7dc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da7dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da7e0:
    // 0x1da7e0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da7e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da7e4:
    // 0x1da7e4: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1da7e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da7e8:
    // 0x1da7e8: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da7e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da7ec:
    // 0x1da7ec: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da7ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da7f0:
    // 0x1da7f0: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da7f0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da7f4:
    // 0x1da7f4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da7f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da7f8:
    // 0x1da7f8: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1da7f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1da7fc:
    // 0x1da7fc: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da800:
    // 0x1da800: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da800u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da804:
    // 0x1da804: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da808:
    // 0x1da808: 0x29020016  slti        $v0, $t0, 0x16
    ctx->pc = 0x1da808u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)22) ? 1 : 0);
label_1da80c:
    // 0x1da80c: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1da810:
    if (ctx->pc == 0x1DA810u) {
        ctx->pc = 0x1DA810u;
            // 0x1da810: 0x71582  srl         $v0, $a3, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
        ctx->pc = 0x1DA814u;
        goto label_1da814;
    }
    ctx->pc = 0x1DA80Cu;
    {
        const bool branch_taken_0x1da80c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1DA810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA80Cu;
            // 0x1da810: 0x71582  srl         $v0, $a3, 22 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da80c) {
            ctx->pc = 0x1DA888u;
            goto label_1da888;
        }
    }
    ctx->pc = 0x1DA814u;
label_1da814:
    // 0x1da814: 0x2508ffea  addiu       $t0, $t0, -0x16
    ctx->pc = 0x1da814u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967274));
label_1da818:
    // 0x1da818: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
label_1da81c:
    if (ctx->pc == 0x1DA81Cu) {
        ctx->pc = 0x1DA81Cu;
            // 0x1da81c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1DA820u;
        goto label_1da820;
    }
    ctx->pc = 0x1DA818u;
    {
        const bool branch_taken_0x1da818 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA81Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA818u;
            // 0x1da81c: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da818) {
            ctx->pc = 0x1DA840u;
            goto label_1da840;
        }
    }
    ctx->pc = 0x1DA820u;
label_1da820:
    // 0x1da820: 0x481023  subu        $v0, $v0, $t0
    ctx->pc = 0x1da820u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 8)));
label_1da824:
    // 0x1da824: 0x451006  srlv        $v0, $a1, $v0
    ctx->pc = 0x1da824u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), GPR_U32(ctx, 2) & 0x1F));
label_1da828:
    // 0x1da828: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1da828u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1da82c:
    // 0x1da82c: 0x71d82  srl         $v1, $a3, 22
    ctx->pc = 0x1da82cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_1da830:
    // 0x1da830: 0x1053804  sllv        $a3, $a1, $t0
    ctx->pc = 0x1da830u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1da834:
    // 0x1da834: 0x10000005  b           . + 4 + (0x5 << 2)
label_1da838:
    if (ctx->pc == 0x1DA838u) {
        ctx->pc = 0x1DA838u;
            // 0x1da838: 0xae0302c8  sw          $v1, 0x2C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 3));
        ctx->pc = 0x1DA83Cu;
        goto label_1da83c;
    }
    ctx->pc = 0x1DA834u;
    {
        const bool branch_taken_0x1da834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA838u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA834u;
            // 0x1da838: 0xae0302c8  sw          $v1, 0x2C8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da834) {
            ctx->pc = 0x1DA84Cu;
            goto label_1da84c;
        }
    }
    ctx->pc = 0x1DA83Cu;
label_1da83c:
    // 0x1da83c: 0x0  nop
    ctx->pc = 0x1da83cu;
    // NOP
label_1da840:
    // 0x1da840: 0x71582  srl         $v0, $a3, 22
    ctx->pc = 0x1da840u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 22));
label_1da844:
    // 0x1da844: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1da844u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da848:
    // 0x1da848: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x1da848u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
label_1da84c:
    // 0x1da84c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da84cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da850:
    // 0x1da850: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da854:
    // 0x1da854: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da854u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da858:
    // 0x1da858: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da858u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da85c:
    // 0x1da85c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da85cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da860:
    // 0x1da860: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1da860u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da864:
    // 0x1da864: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da868:
    // 0x1da868: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da868u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da86c:
    // 0x1da86c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da86cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da870:
    // 0x1da870: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da870u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da874:
    // 0x1da874: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1da874u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1da878:
    // 0x1da878: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da878u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da87c:
    // 0x1da87c: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da87cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da880:
    // 0x1da880: 0x10000004  b           . + 4 + (0x4 << 2)
label_1da884:
    if (ctx->pc == 0x1DA884u) {
        ctx->pc = 0x1DA884u;
            // 0x1da884: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1DA888u;
        goto label_1da888;
    }
    ctx->pc = 0x1DA880u;
    {
        const bool branch_taken_0x1da880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA880u;
            // 0x1da884: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da880) {
            ctx->pc = 0x1DA894u;
            goto label_1da894;
        }
    }
    ctx->pc = 0x1DA888u;
label_1da888:
    // 0x1da888: 0x73a80  sll         $a3, $a3, 10
    ctx->pc = 0x1da888u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 10));
label_1da88c:
    // 0x1da88c: 0xae0202c8  sw          $v0, 0x2C8($s0)
    ctx->pc = 0x1da88cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 712), GPR_U32(ctx, 2));
label_1da890:
    // 0x1da890: 0x2508000a  addiu       $t0, $t0, 0xA
    ctx->pc = 0x1da890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10));
label_1da894:
    // 0x1da894: 0x717c2  srl         $v0, $a3, 31
    ctx->pc = 0x1da894u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
label_1da898:
    // 0x1da898: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1da898u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1da89c:
    // 0x1da89c: 0x15030012  bne         $t0, $v1, . + 4 + (0x12 << 2)
label_1da8a0:
    if (ctx->pc == 0x1DA8A0u) {
        ctx->pc = 0x1DA8A0u;
            // 0x1da8a0: 0xae0202cc  sw          $v0, 0x2CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
        ctx->pc = 0x1DA8A4u;
        goto label_1da8a4;
    }
    ctx->pc = 0x1DA89Cu;
    {
        const bool branch_taken_0x1da89c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 3));
        ctx->pc = 0x1DA8A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA89Cu;
            // 0x1da8a0: 0xae0202cc  sw          $v0, 0x2CC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 716), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da89c) {
            ctx->pc = 0x1DA8E8u;
            goto label_1da8e8;
        }
    }
    ctx->pc = 0x1DA8A4u;
label_1da8a4:
    // 0x1da8a4: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1da8a4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da8a8:
    // 0x1da8a8: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da8a8u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da8ac:
    // 0x1da8ac: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da8acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da8b0:
    // 0x1da8b0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da8b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da8b4:
    // 0x1da8b4: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da8b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da8b8:
    // 0x1da8b8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da8b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da8bc:
    // 0x1da8bc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da8bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da8c0:
    // 0x1da8c0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1da8c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da8c4:
    // 0x1da8c4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da8c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da8c8:
    // 0x1da8c8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da8cc:
    // 0x1da8cc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da8ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da8d0:
    // 0x1da8d0: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da8d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da8d4:
    // 0x1da8d4: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1da8d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1da8d8:
    // 0x1da8d8: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da8d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da8dc:
    // 0x1da8dc: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da8dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da8e0:
    // 0x1da8e0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1da8e4:
    if (ctx->pc == 0x1DA8E4u) {
        ctx->pc = 0x1DA8E4u;
            // 0x1da8e4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1DA8E8u;
        goto label_1da8e8;
    }
    ctx->pc = 0x1DA8E0u;
    {
        const bool branch_taken_0x1da8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA8E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8E0u;
            // 0x1da8e4: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8e0) {
            ctx->pc = 0x1DA8F0u;
            goto label_1da8f0;
        }
    }
    ctx->pc = 0x1DA8E8u;
label_1da8e8:
    // 0x1da8e8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1da8e8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1da8ec:
    // 0x1da8ec: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1da8ecu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1da8f0:
    // 0x1da8f0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1da8f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1da8f4:
    // 0x1da8f4: 0x15020012  bne         $t0, $v0, . + 4 + (0x12 << 2)
label_1da8f8:
    if (ctx->pc == 0x1DA8F8u) {
        ctx->pc = 0x1DA8F8u;
            // 0x1da8f8: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->pc = 0x1DA8FCu;
        goto label_1da8fc;
    }
    ctx->pc = 0x1DA8F4u;
    {
        const bool branch_taken_0x1da8f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA8F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA8F4u;
            // 0x1da8f8: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da8f4) {
            ctx->pc = 0x1DA940u;
            goto label_1da940;
        }
    }
    ctx->pc = 0x1DA8FCu;
label_1da8fc:
    // 0x1da8fc: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1da8fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da900:
    // 0x1da900: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da900u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da904:
    // 0x1da904: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da908:
    // 0x1da908: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da908u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da90c:
    // 0x1da90c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da90cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da910:
    // 0x1da910: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da914:
    // 0x1da914: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da914u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da918:
    // 0x1da918: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1da918u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da91c:
    // 0x1da91c: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da91cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da920:
    // 0x1da920: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da924:
    // 0x1da924: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da924u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da928:
    // 0x1da928: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da928u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da92c:
    // 0x1da92c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1da92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1da930:
    // 0x1da930: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da930u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da934:
    // 0x1da934: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da934u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da938:
    // 0x1da938: 0x10000003  b           . + 4 + (0x3 << 2)
label_1da93c:
    if (ctx->pc == 0x1DA93Cu) {
        ctx->pc = 0x1DA93Cu;
            // 0x1da93c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1DA940u;
        goto label_1da940;
    }
    ctx->pc = 0x1DA938u;
    {
        const bool branch_taken_0x1da938 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA93Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA938u;
            // 0x1da93c: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da938) {
            ctx->pc = 0x1DA948u;
            goto label_1da948;
        }
    }
    ctx->pc = 0x1DA940u;
label_1da940:
    // 0x1da940: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1da940u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1da944:
    // 0x1da944: 0x73840  sll         $a3, $a3, 1
    ctx->pc = 0x1da944u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1da948:
    // 0x1da948: 0x1080001d  beqz        $a0, . + 4 + (0x1D << 2)
label_1da94c:
    if (ctx->pc == 0x1DA94Cu) {
        ctx->pc = 0x1DA94Cu;
            // 0x1da94c: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x1DA950u;
        goto label_1da950;
    }
    ctx->pc = 0x1DA948u;
    {
        const bool branch_taken_0x1da948 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA94Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA948u;
            // 0x1da94c: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da948) {
            ctx->pc = 0x1DA9C0u;
            goto label_1da9c0;
        }
    }
    ctx->pc = 0x1DA950u;
label_1da950:
    // 0x1da950: 0x29020018  slti        $v0, $t0, 0x18
    ctx->pc = 0x1da950u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
label_1da954:
    // 0x1da954: 0x0  nop
    ctx->pc = 0x1da954u;
    // NOP
label_1da958:
    // 0x1da958: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_1da95c:
    if (ctx->pc == 0x1DA95Cu) {
        ctx->pc = 0x1DA95Cu;
            // 0x1da95c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x1DA960u;
        goto label_1da960;
    }
    ctx->pc = 0x1DA958u;
    {
        const bool branch_taken_0x1da958 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da958) {
            ctx->pc = 0x1DA95Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA958u;
            // 0x1da95c: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA9B0u;
            goto label_1da9b0;
        }
    }
    ctx->pc = 0x1DA960u;
label_1da960:
    // 0x1da960: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x1da960u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
label_1da964:
    // 0x1da964: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x1da964u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1da968:
    // 0x1da968: 0x1051804  sllv        $v1, $a1, $t0
    ctx->pc = 0x1da968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), GPR_U32(ctx, 8) & 0x1F));
label_1da96c:
    // 0x1da96c: 0x80c50000  lb          $a1, 0x0($a2)
    ctx->pc = 0x1da96cu;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da970:
    // 0x1da970: 0x39020000  xori        $v0, $t0, 0x0
    ctx->pc = 0x1da970u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) ^ (uint64_t)(uint16_t)0);
label_1da974:
    // 0x1da974: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da978:
    // 0x1da978: 0x62380b  movn        $a3, $v1, $v0
    ctx->pc = 0x1da978u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
label_1da97c:
    // 0x1da97c: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da97cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da980:
    // 0x1da980: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da980u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da984:
    // 0x1da984: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da988:
    // 0x1da988: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x1da988u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da98c:
    // 0x1da98c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da98cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da990:
    // 0x1da990: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1da990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1da994:
    // 0x1da994: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1da994u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1da998:
    // 0x1da998: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da998u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da99c:
    // 0x1da99c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1da99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1da9a0:
    // 0x1da9a0: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x1da9a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_1da9a4:
    // 0x1da9a4: 0x52a00  sll         $a1, $a1, 8
    ctx->pc = 0x1da9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 8));
label_1da9a8:
    // 0x1da9a8: 0x10000002  b           . + 4 + (0x2 << 2)
label_1da9ac:
    if (ctx->pc == 0x1DA9ACu) {
        ctx->pc = 0x1DA9ACu;
            // 0x1da9ac: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->pc = 0x1DA9B0u;
        goto label_1da9b0;
    }
    ctx->pc = 0x1DA9A8u;
    {
        const bool branch_taken_0x1da9a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9A8u;
            // 0x1da9ac: 0xa22825  or          $a1, $a1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9a8) {
            ctx->pc = 0x1DA9B4u;
            goto label_1da9b4;
        }
    }
    ctx->pc = 0x1DA9B0u;
label_1da9b0:
    // 0x1da9b0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1da9b0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1da9b4:
    // 0x1da9b4: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1da9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1da9b8:
    // 0x1da9b8: 0x481ffe7  bgez        $a0, . + 4 + (-0x19 << 2)
label_1da9bc:
    if (ctx->pc == 0x1DA9BCu) {
        ctx->pc = 0x1DA9BCu;
            // 0x1da9bc: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->pc = 0x1DA9C0u;
        goto label_1da9c0;
    }
    ctx->pc = 0x1DA9B8u;
    {
        const bool branch_taken_0x1da9b8 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1DA9BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9B8u;
            // 0x1da9bc: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9b8) {
            ctx->pc = 0x1DA958u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da958;
        }
    }
    ctx->pc = 0x1DA9C0u;
label_1da9c0:
    // 0x1da9c0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1da9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1da9c4:
    // 0x1da9c4: 0x15020004  bne         $t0, $v0, . + 4 + (0x4 << 2)
label_1da9c8:
    if (ctx->pc == 0x1DA9C8u) {
        ctx->pc = 0x1DA9C8u;
            // 0x1da9c8: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->pc = 0x1DA9CCu;
        goto label_1da9cc;
    }
    ctx->pc = 0x1DA9C4u;
    {
        const bool branch_taken_0x1da9c4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x1DA9C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9C4u;
            // 0x1da9c8: 0x727c2  srl         $a0, $a3, 31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 7), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9c4) {
            ctx->pc = 0x1DA9D8u;
            goto label_1da9d8;
        }
    }
    ctx->pc = 0x1DA9CCu;
label_1da9cc:
    // 0x1da9cc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1da9ccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1da9d0:
    // 0x1da9d0: 0x10000002  b           . + 4 + (0x2 << 2)
label_1da9d4:
    if (ctx->pc == 0x1DA9D4u) {
        ctx->pc = 0x1DA9D4u;
            // 0x1da9d4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->pc = 0x1DA9D8u;
        goto label_1da9d8;
    }
    ctx->pc = 0x1DA9D0u;
    {
        const bool branch_taken_0x1da9d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9D0u;
            // 0x1da9d4: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9d0) {
            ctx->pc = 0x1DA9DCu;
            goto label_1da9dc;
        }
    }
    ctx->pc = 0x1DA9D8u;
label_1da9d8:
    // 0x1da9d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1da9d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1da9dc:
    // 0x1da9dc: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
label_1da9e0:
    if (ctx->pc == 0x1DA9E0u) {
        ctx->pc = 0x1DA9E0u;
            // 0x1da9e0: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->pc = 0x1DA9E4u;
        goto label_1da9e4;
    }
    ctx->pc = 0x1DA9DCu;
    {
        const bool branch_taken_0x1da9dc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DA9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9DCu;
            // 0x1da9e0: 0x2404003f  addiu       $a0, $zero, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1da9dc) {
            ctx->pc = 0x1DAA0Cu;
            goto label_1daa0c;
        }
    }
    ctx->pc = 0x1DA9E4u;
label_1da9e4:
    // 0x1da9e4: 0x29020018  slti        $v0, $t0, 0x18
    ctx->pc = 0x1da9e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
label_1da9e8:
    // 0x1da9e8: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_1da9ec:
    if (ctx->pc == 0x1DA9ECu) {
        ctx->pc = 0x1DA9ECu;
            // 0x1da9ec: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x1DA9F0u;
        goto label_1da9f0;
    }
    ctx->pc = 0x1DA9E8u;
    {
        const bool branch_taken_0x1da9e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1da9e8) {
            ctx->pc = 0x1DA9ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1DA9E8u;
            // 0x1da9ec: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1DA9F8u;
            goto label_1da9f8;
        }
    }
    ctx->pc = 0x1DA9F0u;
label_1da9f0:
    // 0x1da9f0: 0x2508ffe8  addiu       $t0, $t0, -0x18
    ctx->pc = 0x1da9f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967272));
label_1da9f4:
    // 0x1da9f4: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x1da9f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1da9f8:
    // 0x1da9f8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x1da9f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
label_1da9fc:
    // 0x1da9fc: 0x0  nop
    ctx->pc = 0x1da9fcu;
    // NOP
label_1daa00:
    // 0x1daa00: 0x0  nop
    ctx->pc = 0x1daa00u;
    // NOP
label_1daa04:
    // 0x1daa04: 0x481fff8  bgez        $a0, . + 4 + (-0x8 << 2)
label_1daa08:
    if (ctx->pc == 0x1DAA08u) {
        ctx->pc = 0x1DAA08u;
            // 0x1daa08: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->pc = 0x1DAA0Cu;
        goto label_1daa0c;
    }
    ctx->pc = 0x1DAA04u;
    {
        const bool branch_taken_0x1daa04 = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1DAA08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA04u;
            // 0x1daa08: 0x29020018  slti        $v0, $t0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1daa04) {
            ctx->pc = 0x1DA9E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1da9e8;
        }
    }
    ctx->pc = 0x1DAA0Cu;
label_1daa0c:
    // 0x1daa0c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1daa0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_1daa10:
    // 0x1daa10: 0x25080007  addiu       $t0, $t0, 0x7
    ctx->pc = 0x1daa10u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 7));
label_1daa14:
    // 0x1daa14: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1daa14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1daa18:
    // 0x1daa18: 0x840c3  sra         $t0, $t0, 3
    ctx->pc = 0x1daa18u;
    SET_GPR_S32(ctx, 8, SRA32(GPR_S32(ctx, 8), 3));
label_1daa1c:
    // 0x1daa1c: 0x2442000f  addiu       $v0, $v0, 0xF
    ctx->pc = 0x1daa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15));
label_1daa20:
    // 0x1daa20: 0xc84021  addu        $t0, $a2, $t0
    ctx->pc = 0x1daa20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 8)));
label_1daa24:
    // 0x1daa24: 0x2463000f  addiu       $v1, $v1, 0xF
    ctx->pc = 0x1daa24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15));
label_1daa28:
    // 0x1daa28: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x1daa28u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
label_1daa2c:
    // 0x1daa2c: 0x31903  sra         $v1, $v1, 4
    ctx->pc = 0x1daa2cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 4));
label_1daa30:
    // 0x1daa30: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1daa30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1daa34:
    // 0x1daa34: 0x621018  mult        $v0, $v1, $v0
    ctx->pc = 0x1daa34u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1daa38:
    // 0x1daa38: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x1daa38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
label_1daa3c:
    // 0x1daa3c: 0x2508fff8  addiu       $t0, $t0, -0x8
    ctx->pc = 0x1daa3cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967288));
label_1daa40:
    // 0x1daa40: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1daa40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1daa44:
    // 0x1daa44: 0x8e0302c4  lw          $v1, 0x2C4($s0)
    ctx->pc = 0x1daa44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
label_1daa48:
    // 0x1daa48: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x1daa48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1daa4c:
    // 0x1daa4c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1daa4cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1daa50:
    // 0x1daa50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1daa50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1daa54:
    // 0x1daa54: 0xae020360  sw          $v0, 0x360($s0)
    ctx->pc = 0x1daa54u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 864), GPR_U32(ctx, 2));
label_1daa58:
    // 0x1daa58: 0xae230048  sw          $v1, 0x48($s1)
    ctx->pc = 0x1daa58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 3));
label_1daa5c:
    // 0x1daa5c: 0x8e0202c8  lw          $v0, 0x2C8($s0)
    ctx->pc = 0x1daa5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 712)));
label_1daa60:
    // 0x1daa60: 0xae22004c  sw          $v0, 0x4C($s1)
    ctx->pc = 0x1daa60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 2));
label_1daa64:
    // 0x1daa64: 0x920302c0  lbu         $v1, 0x2C0($s0)
    ctx->pc = 0x1daa64u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 704)));
label_1daa68:
    // 0x1daa68: 0xa2230059  sb          $v1, 0x59($s1)
    ctx->pc = 0x1daa68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 89), (uint8_t)GPR_U32(ctx, 3));
label_1daa6c:
    // 0x1daa6c: 0x920202cc  lbu         $v0, 0x2CC($s0)
    ctx->pc = 0x1daa6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 716)));
label_1daa70:
    // 0x1daa70: 0xa222005a  sb          $v0, 0x5A($s1)
    ctx->pc = 0x1daa70u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 90), (uint8_t)GPR_U32(ctx, 2));
label_1daa74:
    // 0x1daa74: 0x8e0503a8  lw          $a1, 0x3A8($s0)
    ctx->pc = 0x1daa74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 936)));
label_1daa78:
    // 0x1daa78: 0xc07337e  jal         func_1CCDF8
label_1daa7c:
    if (ctx->pc == 0x1DAA7Cu) {
        ctx->pc = 0x1DAA7Cu;
            // 0x1daa7c: 0x1052823  subu        $a1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->pc = 0x1DAA80u;
        goto label_1daa80;
    }
    ctx->pc = 0x1DAA78u;
    SET_GPR_U32(ctx, 31, 0x1DAA80u);
    ctx->pc = 0x1DAA7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA78u;
            // 0x1daa7c: 0x1052823  subu        $a1, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CCDF8u;
    if (runtime->hasFunction(0x1CCDF8u)) {
        auto targetFn = runtime->lookupFunction(0x1CCDF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA80u; }
        if (ctx->pc != 0x1DAA80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CCDF8_0x1ccdf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA80u; }
        if (ctx->pc != 0x1DAA80u) { return; }
    }
    ctx->pc = 0x1DAA80u;
label_1daa80:
    // 0x1daa80: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1daa80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1daa84:
    // 0x1daa84: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x1daa84u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_1daa88:
    // 0x1daa88: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1daa88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1daa8c:
    // 0x1daa8c: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1daa8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1daa90:
    // 0x1daa90: 0x40f809  jalr        $v0
label_1daa94:
    if (ctx->pc == 0x1DAA94u) {
        ctx->pc = 0x1DAA94u;
            // 0x1daa94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAA98u;
        goto label_1daa98;
    }
    ctx->pc = 0x1DAA90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAA98u);
        ctx->pc = 0x1DAA94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAA90u;
            // 0x1daa94: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DAA98u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DAA98u; }
            if (ctx->pc != 0x1DAA98u) { return; }
        }
        }
    }
    ctx->pc = 0x1DAA98u;
label_1daa98:
    // 0x1daa98: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x1daa98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1daa9c:
    // 0x1daa9c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1daa9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1daaa0:
    // 0x1daaa0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1daaa0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1daaa4:
    // 0x1daaa4: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1daaa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1daaa8:
    // 0x1daaa8: 0x40f809  jalr        $v0
label_1daaac:
    if (ctx->pc == 0x1DAAACu) {
        ctx->pc = 0x1DAAACu;
            // 0x1daaac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1DAAB0u;
        goto label_1daab0;
    }
    ctx->pc = 0x1DAAA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1DAAB0u);
        ctx->pc = 0x1DAAACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAAA8u;
            // 0x1daaac: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1DAAB0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1DAAB0u; }
            if (ctx->pc != 0x1DAAB0u) { return; }
        }
        }
    }
    ctx->pc = 0x1DAAB0u;
label_1daab0:
    // 0x1daab0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1daab0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1daab4:
    // 0x1daab4: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1daab4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1daab8:
    // 0x1daab8: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1daab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1daabc:
    // 0x1daabc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1daabcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1daac0:
    // 0x1daac0: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1daac0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1daac4:
    // 0x1daac4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1daac4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1daac8:
    // 0x1daac8: 0x3e00008  jr          $ra
label_1daacc:
    if (ctx->pc == 0x1DAACCu) {
        ctx->pc = 0x1DAACCu;
            // 0x1daacc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1DAAD0u;
        goto label_fallthrough_0x1daac8;
    }
    ctx->pc = 0x1DAAC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DAACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1DAAC8u;
            // 0x1daacc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1daac8:
    ctx->pc = 0x1DAAD0u;
    ctx->pc = 0x1daad0u;
}
