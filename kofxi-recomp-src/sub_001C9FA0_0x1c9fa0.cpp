#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001C9FA0
// Address: 0x1c9fa0 - 0x1ca668
void sub_001C9FA0_0x1c9fa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C9FA0_0x1c9fa0");
#endif

    switch (ctx->pc) {
        case 0x1c9fa0u: goto label_1c9fa0;
        case 0x1c9fa4u: goto label_1c9fa4;
        case 0x1c9fa8u: goto label_1c9fa8;
        case 0x1c9facu: goto label_1c9fac;
        case 0x1c9fb0u: goto label_1c9fb0;
        case 0x1c9fb4u: goto label_1c9fb4;
        case 0x1c9fb8u: goto label_1c9fb8;
        case 0x1c9fbcu: goto label_1c9fbc;
        case 0x1c9fc0u: goto label_1c9fc0;
        case 0x1c9fc4u: goto label_1c9fc4;
        case 0x1c9fc8u: goto label_1c9fc8;
        case 0x1c9fccu: goto label_1c9fcc;
        case 0x1c9fd0u: goto label_1c9fd0;
        case 0x1c9fd4u: goto label_1c9fd4;
        case 0x1c9fd8u: goto label_1c9fd8;
        case 0x1c9fdcu: goto label_1c9fdc;
        case 0x1c9fe0u: goto label_1c9fe0;
        case 0x1c9fe4u: goto label_1c9fe4;
        case 0x1c9fe8u: goto label_1c9fe8;
        case 0x1c9fecu: goto label_1c9fec;
        case 0x1c9ff0u: goto label_1c9ff0;
        case 0x1c9ff4u: goto label_1c9ff4;
        case 0x1c9ff8u: goto label_1c9ff8;
        case 0x1c9ffcu: goto label_1c9ffc;
        case 0x1ca000u: goto label_1ca000;
        case 0x1ca004u: goto label_1ca004;
        case 0x1ca008u: goto label_1ca008;
        case 0x1ca00cu: goto label_1ca00c;
        case 0x1ca010u: goto label_1ca010;
        case 0x1ca014u: goto label_1ca014;
        case 0x1ca018u: goto label_1ca018;
        case 0x1ca01cu: goto label_1ca01c;
        case 0x1ca020u: goto label_1ca020;
        case 0x1ca024u: goto label_1ca024;
        case 0x1ca028u: goto label_1ca028;
        case 0x1ca02cu: goto label_1ca02c;
        case 0x1ca030u: goto label_1ca030;
        case 0x1ca034u: goto label_1ca034;
        case 0x1ca038u: goto label_1ca038;
        case 0x1ca03cu: goto label_1ca03c;
        case 0x1ca040u: goto label_1ca040;
        case 0x1ca044u: goto label_1ca044;
        case 0x1ca048u: goto label_1ca048;
        case 0x1ca04cu: goto label_1ca04c;
        case 0x1ca050u: goto label_1ca050;
        case 0x1ca054u: goto label_1ca054;
        case 0x1ca058u: goto label_1ca058;
        case 0x1ca05cu: goto label_1ca05c;
        case 0x1ca060u: goto label_1ca060;
        case 0x1ca064u: goto label_1ca064;
        case 0x1ca068u: goto label_1ca068;
        case 0x1ca06cu: goto label_1ca06c;
        case 0x1ca070u: goto label_1ca070;
        case 0x1ca074u: goto label_1ca074;
        case 0x1ca078u: goto label_1ca078;
        case 0x1ca07cu: goto label_1ca07c;
        case 0x1ca080u: goto label_1ca080;
        case 0x1ca084u: goto label_1ca084;
        case 0x1ca088u: goto label_1ca088;
        case 0x1ca08cu: goto label_1ca08c;
        case 0x1ca090u: goto label_1ca090;
        case 0x1ca094u: goto label_1ca094;
        case 0x1ca098u: goto label_1ca098;
        case 0x1ca09cu: goto label_1ca09c;
        case 0x1ca0a0u: goto label_1ca0a0;
        case 0x1ca0a4u: goto label_1ca0a4;
        case 0x1ca0a8u: goto label_1ca0a8;
        case 0x1ca0acu: goto label_1ca0ac;
        case 0x1ca0b0u: goto label_1ca0b0;
        case 0x1ca0b4u: goto label_1ca0b4;
        case 0x1ca0b8u: goto label_1ca0b8;
        case 0x1ca0bcu: goto label_1ca0bc;
        case 0x1ca0c0u: goto label_1ca0c0;
        case 0x1ca0c4u: goto label_1ca0c4;
        case 0x1ca0c8u: goto label_1ca0c8;
        case 0x1ca0ccu: goto label_1ca0cc;
        case 0x1ca0d0u: goto label_1ca0d0;
        case 0x1ca0d4u: goto label_1ca0d4;
        case 0x1ca0d8u: goto label_1ca0d8;
        case 0x1ca0dcu: goto label_1ca0dc;
        case 0x1ca0e0u: goto label_1ca0e0;
        case 0x1ca0e4u: goto label_1ca0e4;
        case 0x1ca0e8u: goto label_1ca0e8;
        case 0x1ca0ecu: goto label_1ca0ec;
        case 0x1ca0f0u: goto label_1ca0f0;
        case 0x1ca0f4u: goto label_1ca0f4;
        case 0x1ca0f8u: goto label_1ca0f8;
        case 0x1ca0fcu: goto label_1ca0fc;
        case 0x1ca100u: goto label_1ca100;
        case 0x1ca104u: goto label_1ca104;
        case 0x1ca108u: goto label_1ca108;
        case 0x1ca10cu: goto label_1ca10c;
        case 0x1ca110u: goto label_1ca110;
        case 0x1ca114u: goto label_1ca114;
        case 0x1ca118u: goto label_1ca118;
        case 0x1ca11cu: goto label_1ca11c;
        case 0x1ca120u: goto label_1ca120;
        case 0x1ca124u: goto label_1ca124;
        case 0x1ca128u: goto label_1ca128;
        case 0x1ca12cu: goto label_1ca12c;
        case 0x1ca130u: goto label_1ca130;
        case 0x1ca134u: goto label_1ca134;
        case 0x1ca138u: goto label_1ca138;
        case 0x1ca13cu: goto label_1ca13c;
        case 0x1ca140u: goto label_1ca140;
        case 0x1ca144u: goto label_1ca144;
        case 0x1ca148u: goto label_1ca148;
        case 0x1ca14cu: goto label_1ca14c;
        case 0x1ca150u: goto label_1ca150;
        case 0x1ca154u: goto label_1ca154;
        case 0x1ca158u: goto label_1ca158;
        case 0x1ca15cu: goto label_1ca15c;
        case 0x1ca160u: goto label_1ca160;
        case 0x1ca164u: goto label_1ca164;
        case 0x1ca168u: goto label_1ca168;
        case 0x1ca16cu: goto label_1ca16c;
        case 0x1ca170u: goto label_1ca170;
        case 0x1ca174u: goto label_1ca174;
        case 0x1ca178u: goto label_1ca178;
        case 0x1ca17cu: goto label_1ca17c;
        case 0x1ca180u: goto label_1ca180;
        case 0x1ca184u: goto label_1ca184;
        case 0x1ca188u: goto label_1ca188;
        case 0x1ca18cu: goto label_1ca18c;
        case 0x1ca190u: goto label_1ca190;
        case 0x1ca194u: goto label_1ca194;
        case 0x1ca198u: goto label_1ca198;
        case 0x1ca19cu: goto label_1ca19c;
        case 0x1ca1a0u: goto label_1ca1a0;
        case 0x1ca1a4u: goto label_1ca1a4;
        case 0x1ca1a8u: goto label_1ca1a8;
        case 0x1ca1acu: goto label_1ca1ac;
        case 0x1ca1b0u: goto label_1ca1b0;
        case 0x1ca1b4u: goto label_1ca1b4;
        case 0x1ca1b8u: goto label_1ca1b8;
        case 0x1ca1bcu: goto label_1ca1bc;
        case 0x1ca1c0u: goto label_1ca1c0;
        case 0x1ca1c4u: goto label_1ca1c4;
        case 0x1ca1c8u: goto label_1ca1c8;
        case 0x1ca1ccu: goto label_1ca1cc;
        case 0x1ca1d0u: goto label_1ca1d0;
        case 0x1ca1d4u: goto label_1ca1d4;
        case 0x1ca1d8u: goto label_1ca1d8;
        case 0x1ca1dcu: goto label_1ca1dc;
        case 0x1ca1e0u: goto label_1ca1e0;
        case 0x1ca1e4u: goto label_1ca1e4;
        case 0x1ca1e8u: goto label_1ca1e8;
        case 0x1ca1ecu: goto label_1ca1ec;
        case 0x1ca1f0u: goto label_1ca1f0;
        case 0x1ca1f4u: goto label_1ca1f4;
        case 0x1ca1f8u: goto label_1ca1f8;
        case 0x1ca1fcu: goto label_1ca1fc;
        case 0x1ca200u: goto label_1ca200;
        case 0x1ca204u: goto label_1ca204;
        case 0x1ca208u: goto label_1ca208;
        case 0x1ca20cu: goto label_1ca20c;
        case 0x1ca210u: goto label_1ca210;
        case 0x1ca214u: goto label_1ca214;
        case 0x1ca218u: goto label_1ca218;
        case 0x1ca21cu: goto label_1ca21c;
        case 0x1ca220u: goto label_1ca220;
        case 0x1ca224u: goto label_1ca224;
        case 0x1ca228u: goto label_1ca228;
        case 0x1ca22cu: goto label_1ca22c;
        case 0x1ca230u: goto label_1ca230;
        case 0x1ca234u: goto label_1ca234;
        case 0x1ca238u: goto label_1ca238;
        case 0x1ca23cu: goto label_1ca23c;
        case 0x1ca240u: goto label_1ca240;
        case 0x1ca244u: goto label_1ca244;
        case 0x1ca248u: goto label_1ca248;
        case 0x1ca24cu: goto label_1ca24c;
        case 0x1ca250u: goto label_1ca250;
        case 0x1ca254u: goto label_1ca254;
        case 0x1ca258u: goto label_1ca258;
        case 0x1ca25cu: goto label_1ca25c;
        case 0x1ca260u: goto label_1ca260;
        case 0x1ca264u: goto label_1ca264;
        case 0x1ca268u: goto label_1ca268;
        case 0x1ca26cu: goto label_1ca26c;
        case 0x1ca270u: goto label_1ca270;
        case 0x1ca274u: goto label_1ca274;
        case 0x1ca278u: goto label_1ca278;
        case 0x1ca27cu: goto label_1ca27c;
        case 0x1ca280u: goto label_1ca280;
        case 0x1ca284u: goto label_1ca284;
        case 0x1ca288u: goto label_1ca288;
        case 0x1ca28cu: goto label_1ca28c;
        case 0x1ca290u: goto label_1ca290;
        case 0x1ca294u: goto label_1ca294;
        case 0x1ca298u: goto label_1ca298;
        case 0x1ca29cu: goto label_1ca29c;
        case 0x1ca2a0u: goto label_1ca2a0;
        case 0x1ca2a4u: goto label_1ca2a4;
        case 0x1ca2a8u: goto label_1ca2a8;
        case 0x1ca2acu: goto label_1ca2ac;
        case 0x1ca2b0u: goto label_1ca2b0;
        case 0x1ca2b4u: goto label_1ca2b4;
        case 0x1ca2b8u: goto label_1ca2b8;
        case 0x1ca2bcu: goto label_1ca2bc;
        case 0x1ca2c0u: goto label_1ca2c0;
        case 0x1ca2c4u: goto label_1ca2c4;
        case 0x1ca2c8u: goto label_1ca2c8;
        case 0x1ca2ccu: goto label_1ca2cc;
        case 0x1ca2d0u: goto label_1ca2d0;
        case 0x1ca2d4u: goto label_1ca2d4;
        case 0x1ca2d8u: goto label_1ca2d8;
        case 0x1ca2dcu: goto label_1ca2dc;
        case 0x1ca2e0u: goto label_1ca2e0;
        case 0x1ca2e4u: goto label_1ca2e4;
        case 0x1ca2e8u: goto label_1ca2e8;
        case 0x1ca2ecu: goto label_1ca2ec;
        case 0x1ca2f0u: goto label_1ca2f0;
        case 0x1ca2f4u: goto label_1ca2f4;
        case 0x1ca2f8u: goto label_1ca2f8;
        case 0x1ca2fcu: goto label_1ca2fc;
        case 0x1ca300u: goto label_1ca300;
        case 0x1ca304u: goto label_1ca304;
        case 0x1ca308u: goto label_1ca308;
        case 0x1ca30cu: goto label_1ca30c;
        case 0x1ca310u: goto label_1ca310;
        case 0x1ca314u: goto label_1ca314;
        case 0x1ca318u: goto label_1ca318;
        case 0x1ca31cu: goto label_1ca31c;
        case 0x1ca320u: goto label_1ca320;
        case 0x1ca324u: goto label_1ca324;
        case 0x1ca328u: goto label_1ca328;
        case 0x1ca32cu: goto label_1ca32c;
        case 0x1ca330u: goto label_1ca330;
        case 0x1ca334u: goto label_1ca334;
        case 0x1ca338u: goto label_1ca338;
        case 0x1ca33cu: goto label_1ca33c;
        case 0x1ca340u: goto label_1ca340;
        case 0x1ca344u: goto label_1ca344;
        case 0x1ca348u: goto label_1ca348;
        case 0x1ca34cu: goto label_1ca34c;
        case 0x1ca350u: goto label_1ca350;
        case 0x1ca354u: goto label_1ca354;
        case 0x1ca358u: goto label_1ca358;
        case 0x1ca35cu: goto label_1ca35c;
        case 0x1ca360u: goto label_1ca360;
        case 0x1ca364u: goto label_1ca364;
        case 0x1ca368u: goto label_1ca368;
        case 0x1ca36cu: goto label_1ca36c;
        case 0x1ca370u: goto label_1ca370;
        case 0x1ca374u: goto label_1ca374;
        case 0x1ca378u: goto label_1ca378;
        case 0x1ca37cu: goto label_1ca37c;
        case 0x1ca380u: goto label_1ca380;
        case 0x1ca384u: goto label_1ca384;
        case 0x1ca388u: goto label_1ca388;
        case 0x1ca38cu: goto label_1ca38c;
        case 0x1ca390u: goto label_1ca390;
        case 0x1ca394u: goto label_1ca394;
        case 0x1ca398u: goto label_1ca398;
        case 0x1ca39cu: goto label_1ca39c;
        case 0x1ca3a0u: goto label_1ca3a0;
        case 0x1ca3a4u: goto label_1ca3a4;
        case 0x1ca3a8u: goto label_1ca3a8;
        case 0x1ca3acu: goto label_1ca3ac;
        case 0x1ca3b0u: goto label_1ca3b0;
        case 0x1ca3b4u: goto label_1ca3b4;
        case 0x1ca3b8u: goto label_1ca3b8;
        case 0x1ca3bcu: goto label_1ca3bc;
        case 0x1ca3c0u: goto label_1ca3c0;
        case 0x1ca3c4u: goto label_1ca3c4;
        case 0x1ca3c8u: goto label_1ca3c8;
        case 0x1ca3ccu: goto label_1ca3cc;
        case 0x1ca3d0u: goto label_1ca3d0;
        case 0x1ca3d4u: goto label_1ca3d4;
        case 0x1ca3d8u: goto label_1ca3d8;
        case 0x1ca3dcu: goto label_1ca3dc;
        case 0x1ca3e0u: goto label_1ca3e0;
        case 0x1ca3e4u: goto label_1ca3e4;
        case 0x1ca3e8u: goto label_1ca3e8;
        case 0x1ca3ecu: goto label_1ca3ec;
        case 0x1ca3f0u: goto label_1ca3f0;
        case 0x1ca3f4u: goto label_1ca3f4;
        case 0x1ca3f8u: goto label_1ca3f8;
        case 0x1ca3fcu: goto label_1ca3fc;
        case 0x1ca400u: goto label_1ca400;
        case 0x1ca404u: goto label_1ca404;
        case 0x1ca408u: goto label_1ca408;
        case 0x1ca40cu: goto label_1ca40c;
        case 0x1ca410u: goto label_1ca410;
        case 0x1ca414u: goto label_1ca414;
        case 0x1ca418u: goto label_1ca418;
        case 0x1ca41cu: goto label_1ca41c;
        case 0x1ca420u: goto label_1ca420;
        case 0x1ca424u: goto label_1ca424;
        case 0x1ca428u: goto label_1ca428;
        case 0x1ca42cu: goto label_1ca42c;
        case 0x1ca430u: goto label_1ca430;
        case 0x1ca434u: goto label_1ca434;
        case 0x1ca438u: goto label_1ca438;
        case 0x1ca43cu: goto label_1ca43c;
        case 0x1ca440u: goto label_1ca440;
        case 0x1ca444u: goto label_1ca444;
        case 0x1ca448u: goto label_1ca448;
        case 0x1ca44cu: goto label_1ca44c;
        case 0x1ca450u: goto label_1ca450;
        case 0x1ca454u: goto label_1ca454;
        case 0x1ca458u: goto label_1ca458;
        case 0x1ca45cu: goto label_1ca45c;
        case 0x1ca460u: goto label_1ca460;
        case 0x1ca464u: goto label_1ca464;
        case 0x1ca468u: goto label_1ca468;
        case 0x1ca46cu: goto label_1ca46c;
        case 0x1ca470u: goto label_1ca470;
        case 0x1ca474u: goto label_1ca474;
        case 0x1ca478u: goto label_1ca478;
        case 0x1ca47cu: goto label_1ca47c;
        case 0x1ca480u: goto label_1ca480;
        case 0x1ca484u: goto label_1ca484;
        case 0x1ca488u: goto label_1ca488;
        case 0x1ca48cu: goto label_1ca48c;
        case 0x1ca490u: goto label_1ca490;
        case 0x1ca494u: goto label_1ca494;
        case 0x1ca498u: goto label_1ca498;
        case 0x1ca49cu: goto label_1ca49c;
        case 0x1ca4a0u: goto label_1ca4a0;
        case 0x1ca4a4u: goto label_1ca4a4;
        case 0x1ca4a8u: goto label_1ca4a8;
        case 0x1ca4acu: goto label_1ca4ac;
        case 0x1ca4b0u: goto label_1ca4b0;
        case 0x1ca4b4u: goto label_1ca4b4;
        case 0x1ca4b8u: goto label_1ca4b8;
        case 0x1ca4bcu: goto label_1ca4bc;
        case 0x1ca4c0u: goto label_1ca4c0;
        case 0x1ca4c4u: goto label_1ca4c4;
        case 0x1ca4c8u: goto label_1ca4c8;
        case 0x1ca4ccu: goto label_1ca4cc;
        case 0x1ca4d0u: goto label_1ca4d0;
        case 0x1ca4d4u: goto label_1ca4d4;
        case 0x1ca4d8u: goto label_1ca4d8;
        case 0x1ca4dcu: goto label_1ca4dc;
        case 0x1ca4e0u: goto label_1ca4e0;
        case 0x1ca4e4u: goto label_1ca4e4;
        case 0x1ca4e8u: goto label_1ca4e8;
        case 0x1ca4ecu: goto label_1ca4ec;
        case 0x1ca4f0u: goto label_1ca4f0;
        case 0x1ca4f4u: goto label_1ca4f4;
        case 0x1ca4f8u: goto label_1ca4f8;
        case 0x1ca4fcu: goto label_1ca4fc;
        case 0x1ca500u: goto label_1ca500;
        case 0x1ca504u: goto label_1ca504;
        case 0x1ca508u: goto label_1ca508;
        case 0x1ca50cu: goto label_1ca50c;
        case 0x1ca510u: goto label_1ca510;
        case 0x1ca514u: goto label_1ca514;
        case 0x1ca518u: goto label_1ca518;
        case 0x1ca51cu: goto label_1ca51c;
        case 0x1ca520u: goto label_1ca520;
        case 0x1ca524u: goto label_1ca524;
        case 0x1ca528u: goto label_1ca528;
        case 0x1ca52cu: goto label_1ca52c;
        case 0x1ca530u: goto label_1ca530;
        case 0x1ca534u: goto label_1ca534;
        case 0x1ca538u: goto label_1ca538;
        case 0x1ca53cu: goto label_1ca53c;
        case 0x1ca540u: goto label_1ca540;
        case 0x1ca544u: goto label_1ca544;
        case 0x1ca548u: goto label_1ca548;
        case 0x1ca54cu: goto label_1ca54c;
        case 0x1ca550u: goto label_1ca550;
        case 0x1ca554u: goto label_1ca554;
        case 0x1ca558u: goto label_1ca558;
        case 0x1ca55cu: goto label_1ca55c;
        case 0x1ca560u: goto label_1ca560;
        case 0x1ca564u: goto label_1ca564;
        case 0x1ca568u: goto label_1ca568;
        case 0x1ca56cu: goto label_1ca56c;
        case 0x1ca570u: goto label_1ca570;
        case 0x1ca574u: goto label_1ca574;
        case 0x1ca578u: goto label_1ca578;
        case 0x1ca57cu: goto label_1ca57c;
        case 0x1ca580u: goto label_1ca580;
        case 0x1ca584u: goto label_1ca584;
        case 0x1ca588u: goto label_1ca588;
        case 0x1ca58cu: goto label_1ca58c;
        case 0x1ca590u: goto label_1ca590;
        case 0x1ca594u: goto label_1ca594;
        case 0x1ca598u: goto label_1ca598;
        case 0x1ca59cu: goto label_1ca59c;
        case 0x1ca5a0u: goto label_1ca5a0;
        case 0x1ca5a4u: goto label_1ca5a4;
        case 0x1ca5a8u: goto label_1ca5a8;
        case 0x1ca5acu: goto label_1ca5ac;
        case 0x1ca5b0u: goto label_1ca5b0;
        case 0x1ca5b4u: goto label_1ca5b4;
        case 0x1ca5b8u: goto label_1ca5b8;
        case 0x1ca5bcu: goto label_1ca5bc;
        case 0x1ca5c0u: goto label_1ca5c0;
        case 0x1ca5c4u: goto label_1ca5c4;
        case 0x1ca5c8u: goto label_1ca5c8;
        case 0x1ca5ccu: goto label_1ca5cc;
        case 0x1ca5d0u: goto label_1ca5d0;
        case 0x1ca5d4u: goto label_1ca5d4;
        case 0x1ca5d8u: goto label_1ca5d8;
        case 0x1ca5dcu: goto label_1ca5dc;
        case 0x1ca5e0u: goto label_1ca5e0;
        case 0x1ca5e4u: goto label_1ca5e4;
        case 0x1ca5e8u: goto label_1ca5e8;
        case 0x1ca5ecu: goto label_1ca5ec;
        case 0x1ca5f0u: goto label_1ca5f0;
        case 0x1ca5f4u: goto label_1ca5f4;
        case 0x1ca5f8u: goto label_1ca5f8;
        case 0x1ca5fcu: goto label_1ca5fc;
        case 0x1ca600u: goto label_1ca600;
        case 0x1ca604u: goto label_1ca604;
        case 0x1ca608u: goto label_1ca608;
        case 0x1ca60cu: goto label_1ca60c;
        case 0x1ca610u: goto label_1ca610;
        case 0x1ca614u: goto label_1ca614;
        case 0x1ca618u: goto label_1ca618;
        case 0x1ca61cu: goto label_1ca61c;
        case 0x1ca620u: goto label_1ca620;
        case 0x1ca624u: goto label_1ca624;
        case 0x1ca628u: goto label_1ca628;
        case 0x1ca62cu: goto label_1ca62c;
        case 0x1ca630u: goto label_1ca630;
        case 0x1ca634u: goto label_1ca634;
        case 0x1ca638u: goto label_1ca638;
        case 0x1ca63cu: goto label_1ca63c;
        case 0x1ca640u: goto label_1ca640;
        case 0x1ca644u: goto label_1ca644;
        case 0x1ca648u: goto label_1ca648;
        case 0x1ca64cu: goto label_1ca64c;
        case 0x1ca650u: goto label_1ca650;
        case 0x1ca654u: goto label_1ca654;
        case 0x1ca658u: goto label_1ca658;
        case 0x1ca65cu: goto label_1ca65c;
        case 0x1ca660u: goto label_1ca660;
        case 0x1ca664u: goto label_1ca664;
        default: break;
    }

    ctx->pc = 0x1c9fa0u;

label_1c9fa0:
    // 0x1c9fa0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1c9fa0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_1c9fa4:
    // 0x1c9fa4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1c9fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9fa8:
    // 0x1c9fa8: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1c9fa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1c9fac:
    // 0x1c9fac: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1c9facu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1c9fb0:
    // 0x1c9fb0: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1c9fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1c9fb4:
    // 0x1c9fb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1c9fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1c9fb8:
    // 0x1c9fb8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1c9fb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1c9fbc:
    // 0x1c9fbc: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1c9fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1c9fc0:
    // 0x1c9fc0: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x1c9fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
label_1c9fc4:
    // 0x1c9fc4: 0x82220058  lb          $v0, 0x58($s1)
    ctx->pc = 0x1c9fc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 88)));
label_1c9fc8:
    // 0x1c9fc8: 0x1443005d  bne         $v0, $v1, . + 4 + (0x5D << 2)
label_1c9fcc:
    if (ctx->pc == 0x1C9FCCu) {
        ctx->pc = 0x1C9FCCu;
            // 0x1c9fcc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1C9FD0u;
        goto label_1c9fd0;
    }
    ctx->pc = 0x1C9FC8u;
    {
        const bool branch_taken_0x1c9fc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1C9FCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FC8u;
            // 0x1c9fcc: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fc8) {
            ctx->pc = 0x1CA140u;
            goto label_1ca140;
        }
    }
    ctx->pc = 0x1C9FD0u;
label_1c9fd0:
    // 0x1c9fd0: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x1c9fd0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_1c9fd4:
    // 0x1c9fd4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1c9fd4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1c9fd8:
    // 0x1c9fd8: 0x92230052  lbu         $v1, 0x52($s1)
    ctx->pc = 0x1c9fd8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_1c9fdc:
    // 0x1c9fdc: 0x18400018  blez        $v0, . + 4 + (0x18 << 2)
label_1c9fe0:
    if (ctx->pc == 0x1C9FE0u) {
        ctx->pc = 0x1C9FE0u;
            // 0x1c9fe0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1C9FE4u;
        goto label_1c9fe4;
    }
    ctx->pc = 0x1C9FDCu;
    {
        const bool branch_taken_0x1c9fdc = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1C9FE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FDCu;
            // 0x1c9fe0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9fdc) {
            ctx->pc = 0x1CA040u;
            goto label_1ca040;
        }
    }
    ctx->pc = 0x1C9FE4u;
label_1c9fe4:
    // 0x1c9fe4: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x1c9fe4u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1c9fe8:
    // 0x1c9fe8: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x1c9fe8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1c9fec:
    // 0x1c9fec: 0x0  nop
    ctx->pc = 0x1c9fecu;
    // NOP
label_1c9ff0:
    // 0x1c9ff0: 0xc0706b8  jal         func_1C1AE0
label_1c9ff4:
    if (ctx->pc == 0x1C9FF4u) {
        ctx->pc = 0x1C9FF4u;
            // 0x1c9ff4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1C9FF8u;
        goto label_1c9ff8;
    }
    ctx->pc = 0x1C9FF0u;
    SET_GPR_U32(ctx, 31, 0x1C9FF8u);
    ctx->pc = 0x1C9FF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FF0u;
            // 0x1c9ff4: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1AE0u;
    if (runtime->hasFunction(0x1C1AE0u)) {
        auto targetFn = runtime->lookupFunction(0x1C1AE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9FF8u; }
        if (ctx->pc != 0x1C9FF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1AE0_0x1c1ae0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1C9FF8u; }
        if (ctx->pc != 0x1C9FF8u) { return; }
    }
    ctx->pc = 0x1C9FF8u;
label_1c9ff8:
    // 0x1c9ff8: 0x1054000b  beq         $v0, $s4, . + 4 + (0xB << 2)
label_1c9ffc:
    if (ctx->pc == 0x1C9FFCu) {
        ctx->pc = 0x1C9FFCu;
            // 0x1c9ffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA000u;
        goto label_1ca000;
    }
    ctx->pc = 0x1C9FF8u;
    {
        const bool branch_taken_0x1c9ff8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 20));
        ctx->pc = 0x1C9FFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1C9FF8u;
            // 0x1c9ffc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1c9ff8) {
            ctx->pc = 0x1CA028u;
            goto label_1ca028;
        }
    }
    ctx->pc = 0x1CA000u;
label_1ca000:
    // 0x1ca000: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca000u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca004:
    // 0x1ca004: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ca004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ca008:
    // 0x1ca008: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ca008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ca00c:
    // 0x1ca00c: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1ca00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1ca010:
    // 0x1ca010: 0x40f809  jalr        $v0
label_1ca014:
    if (ctx->pc == 0x1CA014u) {
        ctx->pc = 0x1CA018u;
        goto label_1ca018;
    }
    ctx->pc = 0x1CA010u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CA018u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CA018u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CA018u; }
            if (ctx->pc != 0x1CA018u) { return; }
        }
        }
    }
    ctx->pc = 0x1CA018u;
label_1ca018:
    // 0x1ca018: 0x8e23002c  lw          $v1, 0x2C($s1)
    ctx->pc = 0x1ca018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ca01c:
    // 0x1ca01c: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x1ca01cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_1ca020:
    // 0x1ca020: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x1ca020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
label_1ca024:
    // 0x1ca024: 0x82900a  movz        $s2, $a0, $v0
    ctx->pc = 0x1ca024u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 4));
label_1ca028:
    // 0x1ca028: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x1ca028u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_1ca02c:
    // 0x1ca02c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1ca02cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1ca030:
    // 0x1ca030: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ca030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ca034:
    // 0x1ca034: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1ca034u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ca038:
    // 0x1ca038: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_1ca03c:
    if (ctx->pc == 0x1CA03Cu) {
        ctx->pc = 0x1CA03Cu;
            // 0x1ca03c: 0x92230052  lbu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->pc = 0x1CA040u;
        goto label_1ca040;
    }
    ctx->pc = 0x1CA038u;
    {
        const bool branch_taken_0x1ca038 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CA03Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA038u;
            // 0x1ca03c: 0x92230052  lbu         $v1, 0x52($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca038) {
            ctx->pc = 0x1C9FF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1c9ff0;
        }
    }
    ctx->pc = 0x1CA040u;
label_1ca040:
    // 0x1ca040: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1ca040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1ca044:
    // 0x1ca044: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1ca044u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1ca048:
    // 0x1ca048: 0x1642003d  bne         $s2, $v0, . + 4 + (0x3D << 2)
label_1ca04c:
    if (ctx->pc == 0x1CA04Cu) {
        ctx->pc = 0x1CA04Cu;
            // 0x1ca04c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x1CA050u;
        goto label_1ca050;
    }
    ctx->pc = 0x1CA048u;
    {
        const bool branch_taken_0x1ca048 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1CA04Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA048u;
            // 0x1ca04c: 0xdfb00010  ld          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca048) {
            ctx->pc = 0x1CA140u;
            goto label_1ca140;
        }
    }
    ctx->pc = 0x1CA050u;
label_1ca050:
    // 0x1ca050: 0x1a40003b  blez        $s2, . + 4 + (0x3B << 2)
label_1ca054:
    if (ctx->pc == 0x1CA054u) {
        ctx->pc = 0x1CA054u;
            // 0x1ca054: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA058u;
        goto label_1ca058;
    }
    ctx->pc = 0x1CA050u;
    {
        const bool branch_taken_0x1ca050 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x1CA054u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA050u;
            // 0x1ca054: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca050) {
            ctx->pc = 0x1CA140u;
            goto label_1ca140;
        }
    }
    ctx->pc = 0x1CA058u;
label_1ca058:
    // 0x1ca058: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x1ca058u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_1ca05c:
    // 0x1ca05c: 0x26300008  addiu       $s0, $s1, 0x8
    ctx->pc = 0x1ca05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_1ca060:
    // 0x1ca060: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca064:
    // 0x1ca064: 0x0  nop
    ctx->pc = 0x1ca064u;
    // NOP
label_1ca068:
    // 0x1ca068: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1ca068u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1ca06c:
    // 0x1ca06c: 0x3a0382d  daddu       $a3, $sp, $zero
    ctx->pc = 0x1ca06cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ca070:
    // 0x1ca070: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca070u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca074:
    // 0x1ca074: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ca074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ca078:
    // 0x1ca078: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ca078u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ca07c:
    // 0x1ca07c: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1ca07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1ca080:
    // 0x1ca080: 0x40f809  jalr        $v0
label_1ca084:
    if (ctx->pc == 0x1CA084u) {
        ctx->pc = 0x1CA084u;
            // 0x1ca084: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1CA088u;
        goto label_1ca088;
    }
    ctx->pc = 0x1CA080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CA088u);
        ctx->pc = 0x1CA084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA080u;
            // 0x1ca084: 0x34c6ffff  ori         $a2, $a2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CA088u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CA088u; }
            if (ctx->pc != 0x1CA088u) { return; }
        }
        }
    }
    ctx->pc = 0x1CA088u;
label_1ca088:
    // 0x1ca088: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x1ca088u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca08c:
    // 0x1ca08c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1ca08cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1ca090:
    // 0x1ca090: 0x8ce40008  lw          $a0, 0x8($a3)
    ctx->pc = 0x1ca090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1ca094:
    // 0x1ca094: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ca094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ca098:
    // 0x1ca098: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ca098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1ca09c:
    // 0x1ca09c: 0x40f809  jalr        $v0
label_1ca0a0:
    if (ctx->pc == 0x1CA0A0u) {
        ctx->pc = 0x1CA0A0u;
            // 0x1ca0a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0A4u;
        goto label_1ca0a4;
    }
    ctx->pc = 0x1CA09Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CA0A4u);
        ctx->pc = 0x1CA0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA09Cu;
            // 0x1ca0a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CA0A4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CA0A4u; }
            if (ctx->pc != 0x1CA0A4u) { return; }
        }
        }
    }
    ctx->pc = 0x1CA0A4u;
label_1ca0a4:
    // 0x1ca0a4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1ca0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca0a8:
    // 0x1ca0a8: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1ca0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1ca0ac:
    // 0x1ca0ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca0acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca0b0:
    // 0x1ca0b0: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x1ca0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_1ca0b4:
    // 0x1ca0b4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1ca0b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1ca0b8:
    // 0x1ca0b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ca0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ca0bc:
    // 0x1ca0bc: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x1ca0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_1ca0c0:
    // 0x1ca0c0: 0x40f809  jalr        $v0
label_1ca0c4:
    if (ctx->pc == 0x1CA0C4u) {
        ctx->pc = 0x1CA0C4u;
            // 0x1ca0c4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0C8u;
        goto label_1ca0c8;
    }
    ctx->pc = 0x1CA0C0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CA0C8u);
        ctx->pc = 0x1CA0C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0C0u;
            // 0x1ca0c4: 0x3a0382d  daddu       $a3, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CA0C8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CA0C8u; }
            if (ctx->pc != 0x1CA0C8u) { return; }
        }
        }
    }
    ctx->pc = 0x1CA0C8u;
label_1ca0c8:
    // 0x1ca0c8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1ca0c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca0cc:
    // 0x1ca0cc: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1ca0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_1ca0d0:
    // 0x1ca0d0: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x1ca0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
label_1ca0d4:
    // 0x1ca0d4: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_1ca0d8:
    if (ctx->pc == 0x1CA0D8u) {
        ctx->pc = 0x1CA0D8u;
            // 0x1ca0d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA0DCu;
        goto label_1ca0dc;
    }
    ctx->pc = 0x1CA0D4u;
    {
        const bool branch_taken_0x1ca0d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA0D4u;
            // 0x1ca0d8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca0d4) {
            ctx->pc = 0x1CA100u;
            goto label_1ca100;
        }
    }
    ctx->pc = 0x1CA0DCu;
label_1ca0dc:
    // 0x1ca0dc: 0x0  nop
    ctx->pc = 0x1ca0dcu;
    // NOP
label_1ca0e0:
    // 0x1ca0e0: 0x0  nop
    ctx->pc = 0x1ca0e0u;
    // NOP
label_1ca0e4:
    // 0x1ca0e4: 0x0  nop
    ctx->pc = 0x1ca0e4u;
    // NOP
label_1ca0e8:
    // 0x1ca0e8: 0x0  nop
    ctx->pc = 0x1ca0e8u;
    // NOP
label_1ca0ec:
    // 0x1ca0ec: 0x0  nop
    ctx->pc = 0x1ca0ecu;
    // NOP
label_1ca0f0:
    // 0x1ca0f0: 0x0  nop
    ctx->pc = 0x1ca0f0u;
    // NOP
label_1ca0f4:
    // 0x1ca0f4: 0x1000fffa  b           . + 4 + (-0x6 << 2)
label_1ca0f8:
    if (ctx->pc == 0x1CA0F8u) {
        ctx->pc = 0x1CA0FCu;
        goto label_1ca0fc;
    }
    ctx->pc = 0x1CA0F4u;
    {
        const bool branch_taken_0x1ca0f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca0f4) {
            ctx->pc = 0x1CA0E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ca0e0;
        }
    }
    ctx->pc = 0x1CA0FCu;
label_1ca0fc:
    // 0x1ca0fc: 0x0  nop
    ctx->pc = 0x1ca0fcu;
    // NOP
label_1ca100:
    // 0x1ca100: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ca100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca104:
    // 0x1ca104: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ca104u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ca108:
    // 0x1ca108: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x1ca108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_1ca10c:
    // 0x1ca10c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1ca10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1ca110:
    // 0x1ca110: 0x8c620020  lw          $v0, 0x20($v1)
    ctx->pc = 0x1ca110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
label_1ca114:
    // 0x1ca114: 0x40f809  jalr        $v0
label_1ca118:
    if (ctx->pc == 0x1CA118u) {
        ctx->pc = 0x1CA118u;
            // 0x1ca118: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->pc = 0x1CA11Cu;
        goto label_1ca11c;
    }
    ctx->pc = 0x1CA114u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1CA11Cu);
        ctx->pc = 0x1CA118u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA114u;
            // 0x1ca118: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1CA11Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1CA11Cu; }
            if (ctx->pc != 0x1CA11Cu) { return; }
        }
        }
    }
    ctx->pc = 0x1CA11Cu;
label_1ca11c:
    // 0x1ca11c: 0xa220005b  sb          $zero, 0x5B($s1)
    ctx->pc = 0x1ca11cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 91), (uint8_t)GPR_U32(ctx, 0));
label_1ca120:
    // 0x1ca120: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x1ca120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_1ca124:
    // 0x1ca124: 0xc070750  jal         func_1C1D40
label_1ca128:
    if (ctx->pc == 0x1CA128u) {
        ctx->pc = 0x1CA128u;
            // 0x1ca128: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->pc = 0x1CA12Cu;
        goto label_1ca12c;
    }
    ctx->pc = 0x1CA124u;
    SET_GPR_U32(ctx, 31, 0x1CA12Cu);
    ctx->pc = 0x1CA128u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA124u;
            // 0x1ca128: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C1D40u;
    if (runtime->hasFunction(0x1C1D40u)) {
        auto targetFn = runtime->lookupFunction(0x1C1D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA12Cu; }
        if (ctx->pc != 0x1CA12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1D40_0x1c1d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA12Cu; }
        if (ctx->pc != 0x1CA12Cu) { return; }
    }
    ctx->pc = 0x1CA12Cu;
label_1ca12c:
    // 0x1ca12c: 0x82220052  lb          $v0, 0x52($s1)
    ctx->pc = 0x1ca12cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 82)));
label_1ca130:
    // 0x1ca130: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1ca130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_1ca134:
    // 0x1ca134: 0x5440ffcc  bnel        $v0, $zero, . + 4 + (-0x34 << 2)
label_1ca138:
    if (ctx->pc == 0x1CA138u) {
        ctx->pc = 0x1CA138u;
            // 0x1ca138: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1CA13Cu;
        goto label_1ca13c;
    }
    ctx->pc = 0x1CA134u;
    {
        const bool branch_taken_0x1ca134 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ca134) {
            ctx->pc = 0x1CA138u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA134u;
            // 0x1ca138: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ca068;
        }
    }
    ctx->pc = 0x1CA13Cu;
label_1ca13c:
    // 0x1ca13c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1ca13cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca140:
    // 0x1ca140: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1ca140u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ca144:
    // 0x1ca144: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1ca144u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1ca148:
    // 0x1ca148: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1ca148u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1ca14c:
    // 0x1ca14c: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1ca14cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1ca150:
    // 0x1ca150: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x1ca150u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1ca154:
    // 0x1ca154: 0x3e00008  jr          $ra
label_1ca158:
    if (ctx->pc == 0x1CA158u) {
        ctx->pc = 0x1CA158u;
            // 0x1ca158: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x1CA15Cu;
        goto label_1ca15c;
    }
    ctx->pc = 0x1CA154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA154u;
            // 0x1ca158: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA15Cu;
label_1ca15c:
    // 0x1ca15c: 0x0  nop
    ctx->pc = 0x1ca15cu;
    // NOP
label_1ca160:
    // 0x1ca160: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca160u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca164:
    // 0x1ca164: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca164u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ca168:
    // 0x1ca168: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca168u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca16c:
    // 0x1ca16c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca170:
    // 0x1ca170: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ca174:
    // 0x1ca174: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ca178:
    // 0x1ca178: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1ca178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1ca17c:
    // 0x1ca17c: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1ca180:
    if (ctx->pc == 0x1CA180u) {
        ctx->pc = 0x1CA180u;
            // 0x1ca180: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->pc = 0x1CA184u;
        goto label_1ca184;
    }
    ctx->pc = 0x1CA17Cu;
    {
        const bool branch_taken_0x1ca17c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CA180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA17Cu;
            // 0x1ca180: 0xffbf0018  sd          $ra, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca17c) {
            ctx->pc = 0x1CA194u;
            goto label_1ca194;
        }
    }
    ctx->pc = 0x1CA184u;
label_1ca184:
    // 0x1ca184: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca188:
    // 0x1ca188: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1ca188u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1ca18c:
    // 0x1ca18c: 0x18600018  blez        $v1, . + 4 + (0x18 << 2)
label_1ca190:
    if (ctx->pc == 0x1CA190u) {
        ctx->pc = 0x1CA190u;
            // 0x1ca190: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CA194u;
        goto label_1ca194;
    }
    ctx->pc = 0x1CA18Cu;
    {
        const bool branch_taken_0x1ca18c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA18Cu;
            // 0x1ca190: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca18c) {
            ctx->pc = 0x1CA1F0u;
            goto label_1ca1f0;
        }
    }
    ctx->pc = 0x1CA194u;
label_1ca194:
    // 0x1ca194: 0xc0729d4  jal         func_1CA750
label_1ca198:
    if (ctx->pc == 0x1CA198u) {
        ctx->pc = 0x1CA198u;
            // 0x1ca198: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x1CA19Cu;
        goto label_1ca19c;
    }
    ctx->pc = 0x1CA194u;
    SET_GPR_U32(ctx, 31, 0x1CA19Cu);
    ctx->pc = 0x1CA198u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA194u;
            // 0x1ca198: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CA750u;
    if (runtime->hasFunction(0x1CA750u)) {
        auto targetFn = runtime->lookupFunction(0x1CA750u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA19Cu; }
        if (ctx->pc != 0x1CA19Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA750_0x1ca750(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA19Cu; }
        if (ctx->pc != 0x1CA19Cu) { return; }
    }
    ctx->pc = 0x1CA19Cu;
label_1ca19c:
    // 0x1ca19c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca19cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca1a0:
    // 0x1ca1a0: 0x24507780  addiu       $s0, $v0, 0x7780
    ctx->pc = 0x1ca1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 30592));
label_1ca1a4:
    // 0x1ca1a4: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x1ca1a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ca1a8:
    // 0x1ca1a8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1ca1a8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1ca1ac:
    // 0x1ca1ac: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_1ca1b0:
    if (ctx->pc == 0x1CA1B0u) {
        ctx->pc = 0x1CA1B0u;
            // 0x1ca1b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->pc = 0x1CA1B4u;
        goto label_1ca1b4;
    }
    ctx->pc = 0x1CA1ACu;
    {
        const bool branch_taken_0x1ca1ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x1ca1ac) {
            ctx->pc = 0x1CA1B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1ACu;
            // 0x1ca1b0: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA1C0u;
            goto label_1ca1c0;
        }
    }
    ctx->pc = 0x1CA1B4u;
label_1ca1b4:
    // 0x1ca1b4: 0xc0727e8  jal         func_1C9FA0
label_1ca1b8:
    if (ctx->pc == 0x1CA1B8u) {
        ctx->pc = 0x1CA1B8u;
            // 0x1ca1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA1BCu;
        goto label_1ca1bc;
    }
    ctx->pc = 0x1CA1B4u;
    SET_GPR_U32(ctx, 31, 0x1CA1BCu);
    ctx->pc = 0x1CA1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1B4u;
            // 0x1ca1b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1C9FA0u;
    goto label_1c9fa0;
    ctx->pc = 0x1CA1BCu;
label_1ca1bc:
    // 0x1ca1bc: 0x2631ffff  addiu       $s1, $s1, -0x1
    ctx->pc = 0x1ca1bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_1ca1c0:
    // 0x1ca1c0: 0x621fff9  bgez        $s1, . + 4 + (-0x7 << 2)
label_1ca1c4:
    if (ctx->pc == 0x1CA1C4u) {
        ctx->pc = 0x1CA1C4u;
            // 0x1ca1c4: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->pc = 0x1CA1C8u;
        goto label_1ca1c8;
    }
    ctx->pc = 0x1CA1C0u;
    {
        const bool branch_taken_0x1ca1c0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x1CA1C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1C0u;
            // 0x1ca1c4: 0x26100064  addiu       $s0, $s0, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 100));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca1c0) {
            ctx->pc = 0x1CA1A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1ca1a8;
        }
    }
    ctx->pc = 0x1CA1C8u;
label_1ca1c8:
    // 0x1ca1c8: 0xc0729da  jal         func_1CA768
label_1ca1cc:
    if (ctx->pc == 0x1CA1CCu) {
        ctx->pc = 0x1CA1D0u;
        goto label_1ca1d0;
    }
    ctx->pc = 0x1CA1C8u;
    SET_GPR_U32(ctx, 31, 0x1CA1D0u);
    ctx->pc = 0x1CA768u;
    if (runtime->hasFunction(0x1CA768u)) {
        auto targetFn = runtime->lookupFunction(0x1CA768u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1D0u; }
        if (ctx->pc != 0x1CA1D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001CA768_0x1ca768(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1D0u; }
        if (ctx->pc != 0x1CA1D0u) { return; }
    }
    ctx->pc = 0x1CA1D0u;
label_1ca1d0:
    // 0x1ca1d0: 0xc0706ba  jal         func_1C1AE8
label_1ca1d4:
    if (ctx->pc == 0x1CA1D4u) {
        ctx->pc = 0x1CA1D8u;
        goto label_1ca1d8;
    }
    ctx->pc = 0x1CA1D0u;
    SET_GPR_U32(ctx, 31, 0x1CA1D8u);
    ctx->pc = 0x1C1AE8u;
    if (runtime->hasFunction(0x1C1AE8u)) {
        auto targetFn = runtime->lookupFunction(0x1C1AE8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1D8u; }
        if (ctx->pc != 0x1CA1D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001C1AE8_0x1c1ae8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA1D8u; }
        if (ctx->pc != 0x1CA1D8u) { return; }
    }
    ctx->pc = 0x1CA1D8u;
label_1ca1d8:
    // 0x1ca1d8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca1d8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca1dc:
    // 0x1ca1dc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca1dcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ca1e0:
    // 0x1ca1e0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca1e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca1e4:
    // 0x1ca1e4: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ca1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ca1e8:
    // 0x1ca1e8: 0x80735b8  j           func_1CD6E0
label_1ca1ec:
    if (ctx->pc == 0x1CA1ECu) {
        ctx->pc = 0x1CA1ECu;
            // 0x1ca1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1CA1F0u;
        goto label_1ca1f0;
    }
    ctx->pc = 0x1CA1E8u;
    ctx->pc = 0x1CA1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1E8u;
            // 0x1ca1ec: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1CD6E0u;
    {
        auto targetFn = runtime->lookupFunction(0x1CD6E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x1CA1F0u;
label_1ca1f0:
    // 0x1ca1f0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca1f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ca1f4:
    // 0x1ca1f4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ca1f4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca1f8:
    // 0x1ca1f8: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1ca1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1ca1fc:
    // 0x1ca1fc: 0x3e00008  jr          $ra
label_1ca200:
    if (ctx->pc == 0x1CA200u) {
        ctx->pc = 0x1CA200u;
            // 0x1ca200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1CA204u;
        goto label_1ca204;
    }
    ctx->pc = 0x1CA1FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA1FCu;
            // 0x1ca200: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA204u;
label_1ca204:
    // 0x1ca204: 0x0  nop
    ctx->pc = 0x1ca204u;
    // NOP
label_1ca208:
    // 0x1ca208: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca20c:
    // 0x1ca20c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca20cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ca210:
    // 0x1ca210: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca210u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca214:
    // 0x1ca214: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca218:
    // 0x1ca218: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1ca21c:
    if (ctx->pc == 0x1CA21Cu) {
        ctx->pc = 0x1CA21Cu;
            // 0x1ca21c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1CA220u;
        goto label_1ca220;
    }
    ctx->pc = 0x1CA218u;
    {
        const bool branch_taken_0x1ca218 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CA21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA218u;
            // 0x1ca21c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca218) {
            ctx->pc = 0x1CA230u;
            goto label_1ca230;
        }
    }
    ctx->pc = 0x1CA220u;
label_1ca220:
    // 0x1ca220: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca224:
    // 0x1ca224: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1ca224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1ca228:
    // 0x1ca228: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_1ca22c:
    if (ctx->pc == 0x1CA22Cu) {
        ctx->pc = 0x1CA22Cu;
            // 0x1ca22c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CA230u;
        goto label_1ca230;
    }
    ctx->pc = 0x1CA228u;
    {
        const bool branch_taken_0x1ca228 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA228u;
            // 0x1ca22c: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca228) {
            ctx->pc = 0x1CA248u;
            goto label_1ca248;
        }
    }
    ctx->pc = 0x1CA230u;
label_1ca230:
    // 0x1ca230: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ca230u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ca234:
    // 0x1ca234: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca234u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca238:
    // 0x1ca238: 0x2484b6a8  addiu       $a0, $a0, -0x4958
    ctx->pc = 0x1ca238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948520));
label_1ca23c:
    // 0x1ca23c: 0x806d212  j           func_1B4848
label_1ca240:
    if (ctx->pc == 0x1CA240u) {
        ctx->pc = 0x1CA240u;
            // 0x1ca240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CA244u;
        goto label_1ca244;
    }
    ctx->pc = 0x1CA23Cu;
    ctx->pc = 0x1CA240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA23Cu;
            // 0x1ca240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B4848_0x1b4848(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CA244u;
label_1ca244:
    // 0x1ca244: 0x0  nop
    ctx->pc = 0x1ca244u;
    // NOP
label_1ca248:
    // 0x1ca248: 0x3e00008  jr          $ra
label_1ca24c:
    if (ctx->pc == 0x1CA24Cu) {
        ctx->pc = 0x1CA24Cu;
            // 0x1ca24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CA250u;
        goto label_1ca250;
    }
    ctx->pc = 0x1CA248u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA24Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA248u;
            // 0x1ca24c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA250u;
label_1ca250:
    // 0x1ca250: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca250u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca254:
    // 0x1ca254: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca258:
    // 0x1ca258: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca25c:
    // 0x1ca25c: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
label_1ca260:
    if (ctx->pc == 0x1CA260u) {
        ctx->pc = 0x1CA260u;
            // 0x1ca260: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x1CA264u;
        goto label_1ca264;
    }
    ctx->pc = 0x1CA25Cu;
    {
        const bool branch_taken_0x1ca25c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ca25c) {
            ctx->pc = 0x1CA260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA25Cu;
            // 0x1ca260: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA274u;
            goto label_1ca274;
        }
    }
    ctx->pc = 0x1CA264u;
label_1ca264:
    // 0x1ca264: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca264u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca268:
    // 0x1ca268: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1ca268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1ca26c:
    // 0x1ca26c: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
label_1ca270:
    if (ctx->pc == 0x1CA270u) {
        ctx->pc = 0x1CA270u;
            // 0x1ca270: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x1CA274u;
        goto label_1ca274;
    }
    ctx->pc = 0x1CA26Cu;
    {
        const bool branch_taken_0x1ca26c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ca26c) {
            ctx->pc = 0x1CA270u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA26Cu;
            // 0x1ca270: 0xa0850052  sb          $a1, 0x52($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 82), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA274u;
            goto label_1ca274;
        }
    }
    ctx->pc = 0x1CA274u;
label_1ca274:
    // 0x1ca274: 0x3e00008  jr          $ra
label_1ca278:
    if (ctx->pc == 0x1CA278u) {
        ctx->pc = 0x1CA27Cu;
        goto label_1ca27c;
    }
    ctx->pc = 0x1CA274u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA27Cu;
label_1ca27c:
    // 0x1ca27c: 0x0  nop
    ctx->pc = 0x1ca27cu;
    // NOP
label_1ca280:
    // 0x1ca280: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca284:
    // 0x1ca284: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ca284u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1ca288:
    // 0x1ca288: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca28c:
    // 0x1ca28c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca28cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca290:
    // 0x1ca290: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1ca290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1ca294:
    // 0x1ca294: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1ca294u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1ca298:
    // 0x1ca298: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1ca298u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1ca29c:
    // 0x1ca29c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1ca29cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca2a0:
    // 0x1ca2a0: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_1ca2a4:
    if (ctx->pc == 0x1CA2A4u) {
        ctx->pc = 0x1CA2A4u;
            // 0x1ca2a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->pc = 0x1CA2A8u;
        goto label_1ca2a8;
    }
    ctx->pc = 0x1CA2A0u;
    {
        const bool branch_taken_0x1ca2a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CA2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2A0u;
            // 0x1ca2a4: 0xffbf0010  sd          $ra, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca2a0) {
            ctx->pc = 0x1CA2B8u;
            goto label_1ca2b8;
        }
    }
    ctx->pc = 0x1CA2A8u;
label_1ca2a8:
    // 0x1ca2a8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca2ac:
    // 0x1ca2ac: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1ca2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1ca2b0:
    // 0x1ca2b0: 0x5860000d  blezl       $v1, . + 4 + (0xD << 2)
label_1ca2b4:
    if (ctx->pc == 0x1CA2B4u) {
        ctx->pc = 0x1CA2B4u;
            // 0x1ca2b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CA2B8u;
        goto label_1ca2b8;
    }
    ctx->pc = 0x1CA2B0u;
    {
        const bool branch_taken_0x1ca2b0 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ca2b0) {
            ctx->pc = 0x1CA2B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2B0u;
            // 0x1ca2b4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA2E8u;
            goto label_1ca2e8;
        }
    }
    ctx->pc = 0x1CA2B8u;
label_1ca2b8:
    // 0x1ca2b8: 0x3402bb80  ori         $v0, $zero, 0xBB80
    ctx->pc = 0x1ca2b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)48000);
label_1ca2bc:
    // 0x1ca2bc: 0x52000001  beql        $s0, $zero, . + 4 + (0x1 << 2)
label_1ca2c0:
    if (ctx->pc == 0x1CA2C0u) {
        ctx->pc = 0x1CA2C0u;
            // 0x1ca2c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x1CA2C4u;
        goto label_1ca2c4;
    }
    ctx->pc = 0x1CA2BCu;
    {
        const bool branch_taken_0x1ca2bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca2bc) {
            ctx->pc = 0x1CA2C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2BCu;
            // 0x1ca2c0: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA2C4u;
            goto label_1ca2c4;
        }
    }
    ctx->pc = 0x1CA2C4u;
label_1ca2c4:
    // 0x1ca2c4: 0x50001a  div         $zero, $v0, $s0
    ctx->pc = 0x1ca2c4u;
    { int32_t divisor = GPR_S32(ctx, 16);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
label_1ca2c8:
    // 0x1ca2c8: 0x1810  mfhi        $v1
    ctx->pc = 0x1ca2c8u;
    SET_GPR_U64(ctx, 3, ctx->hi);
label_1ca2cc:
    // 0x1ca2cc: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1ca2d0:
    if (ctx->pc == 0x1CA2D0u) {
        ctx->pc = 0x1CA2D0u;
            // 0x1ca2d0: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
        ctx->pc = 0x1CA2D4u;
        goto label_1ca2d4;
    }
    ctx->pc = 0x1CA2CCu;
    {
        const bool branch_taken_0x1ca2cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca2cc) {
            ctx->pc = 0x1CA2D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2CCu;
            // 0x1ca2d0: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA2E4u;
            goto label_1ca2e4;
        }
    }
    ctx->pc = 0x1CA2D4u;
label_1ca2d4:
    // 0x1ca2d4: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ca2d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ca2d8:
    // 0x1ca2d8: 0xc06d1f4  jal         func_1B47D0
label_1ca2dc:
    if (ctx->pc == 0x1CA2DCu) {
        ctx->pc = 0x1CA2DCu;
            // 0x1ca2dc: 0x2484b6d0  addiu       $a0, $a0, -0x4930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948560));
        ctx->pc = 0x1CA2E0u;
        goto label_1ca2e0;
    }
    ctx->pc = 0x1CA2D8u;
    SET_GPR_U32(ctx, 31, 0x1CA2E0u);
    ctx->pc = 0x1CA2DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2D8u;
            // 0x1ca2dc: 0x2484b6d0  addiu       $a0, $a0, -0x4930 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948560));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B47D0u;
    if (runtime->hasFunction(0x1B47D0u)) {
        auto targetFn = runtime->lookupFunction(0x1B47D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2E0u; }
        if (ctx->pc != 0x1CA2E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B47D0_0x1b47d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA2E0u; }
        if (ctx->pc != 0x1CA2E0u) { return; }
    }
    ctx->pc = 0x1CA2E0u;
label_1ca2e0:
    // 0x1ca2e0: 0xae300030  sw          $s0, 0x30($s1)
    ctx->pc = 0x1ca2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
label_1ca2e4:
    // 0x1ca2e4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ca2e4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca2e8:
    // 0x1ca2e8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ca2e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1ca2ec:
    // 0x1ca2ec: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1ca2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1ca2f0:
    // 0x1ca2f0: 0x3e00008  jr          $ra
label_1ca2f4:
    if (ctx->pc == 0x1CA2F4u) {
        ctx->pc = 0x1CA2F4u;
            // 0x1ca2f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x1CA2F8u;
        goto label_1ca2f8;
    }
    ctx->pc = 0x1CA2F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA2F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA2F0u;
            // 0x1ca2f4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA2F8u;
label_1ca2f8:
    // 0x1ca2f8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca2f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca2fc:
    // 0x1ca2fc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca2fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca300:
    // 0x1ca300: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca304:
    // 0x1ca304: 0x5102a  slt         $v0, $zero, $a1
    ctx->pc = 0x1ca304u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 0) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_1ca308:
    // 0x1ca308: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_1ca30c:
    if (ctx->pc == 0x1CA30Cu) {
        ctx->pc = 0x1CA30Cu;
            // 0x1ca30c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->pc = 0x1CA310u;
        goto label_1ca310;
    }
    ctx->pc = 0x1CA308u;
    {
        const bool branch_taken_0x1ca308 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CA30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA308u;
            // 0x1ca30c: 0x2280b  movn        $a1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca308) {
            ctx->pc = 0x1CA320u;
            goto label_1ca320;
        }
    }
    ctx->pc = 0x1CA310u;
label_1ca310:
    // 0x1ca310: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca314:
    // 0x1ca314: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1ca314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1ca318:
    // 0x1ca318: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_1ca31c:
    if (ctx->pc == 0x1CA31Cu) {
        ctx->pc = 0x1CA320u;
        goto label_1ca320;
    }
    ctx->pc = 0x1CA318u;
    {
        const bool branch_taken_0x1ca318 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ca318) {
            ctx->pc = 0x1CA330u;
            goto label_1ca330;
        }
    }
    ctx->pc = 0x1CA320u;
label_1ca320:
    // 0x1ca320: 0x28a3fc19  slti        $v1, $a1, -0x3E7
    ctx->pc = 0x1ca320u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4294966297) ? 1 : 0);
label_1ca324:
    // 0x1ca324: 0x2402fc19  addiu       $v0, $zero, -0x3E7
    ctx->pc = 0x1ca324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966297));
label_1ca328:
    // 0x1ca328: 0x43280b  movn        $a1, $v0, $v1
    ctx->pc = 0x1ca328u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
label_1ca32c:
    // 0x1ca32c: 0xac850038  sw          $a1, 0x38($a0)
    ctx->pc = 0x1ca32cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 5));
label_1ca330:
    // 0x1ca330: 0x3e00008  jr          $ra
label_1ca334:
    if (ctx->pc == 0x1CA334u) {
        ctx->pc = 0x1CA338u;
        goto label_1ca338;
    }
    ctx->pc = 0x1CA330u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA338u;
label_1ca338:
    // 0x1ca338: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca33c:
    // 0x1ca33c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1ca33cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca340:
    // 0x1ca340: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca344:
    // 0x1ca344: 0x28c9fff1  slti        $t1, $a2, -0xF
    ctx->pc = 0x1ca344u;
    SET_GPR_U64(ctx, 9, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)4294967281) ? 1 : 0);
label_1ca348:
    // 0x1ca348: 0x14670005  bne         $v1, $a3, . + 4 + (0x5 << 2)
label_1ca34c:
    if (ctx->pc == 0x1CA34Cu) {
        ctx->pc = 0x1CA34Cu;
            // 0x1ca34c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA350u;
        goto label_1ca350;
    }
    ctx->pc = 0x1CA348u;
    {
        const bool branch_taken_0x1ca348 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 7));
        ctx->pc = 0x1CA34Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA348u;
            // 0x1ca34c: 0x80402d  daddu       $t0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca348) {
            ctx->pc = 0x1CA360u;
            goto label_1ca360;
        }
    }
    ctx->pc = 0x1CA350u;
label_1ca350:
    // 0x1ca350: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca354:
    // 0x1ca354: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1ca354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1ca358:
    // 0x1ca358: 0x18600009  blez        $v1, . + 4 + (0x9 << 2)
label_1ca35c:
    if (ctx->pc == 0x1CA35Cu) {
        ctx->pc = 0x1CA360u;
        goto label_1ca360;
    }
    ctx->pc = 0x1CA358u;
    {
        const bool branch_taken_0x1ca358 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x1ca358) {
            ctx->pc = 0x1CA380u;
            goto label_1ca380;
        }
    }
    ctx->pc = 0x1CA360u;
label_1ca360:
    // 0x1ca360: 0x2402fff1  addiu       $v0, $zero, -0xF
    ctx->pc = 0x1ca360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967281));
label_1ca364:
    // 0x1ca364: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x1ca364u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_1ca368:
    // 0x1ca368: 0xc9100a  movz        $v0, $a2, $t1
    ctx->pc = 0x1ca368u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_1ca36c:
    // 0x1ca36c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x1ca36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_1ca370:
    // 0x1ca370: 0x28430010  slti        $v1, $v0, 0x10
    ctx->pc = 0x1ca370u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)16) ? 1 : 0);
label_1ca374:
    // 0x1ca374: 0x882021  addu        $a0, $a0, $t0
    ctx->pc = 0x1ca374u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
label_1ca378:
    // 0x1ca378: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x1ca378u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_1ca37c:
    // 0x1ca37c: 0xac820040  sw          $v0, 0x40($a0)
    ctx->pc = 0x1ca37cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 64), GPR_U32(ctx, 2));
label_1ca380:
    // 0x1ca380: 0x3e00008  jr          $ra
label_1ca384:
    if (ctx->pc == 0x1CA384u) {
        ctx->pc = 0x1CA388u;
        goto label_1ca388;
    }
    ctx->pc = 0x1CA380u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA388u;
label_1ca388:
    // 0x1ca388: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca38c:
    // 0x1ca38c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca38cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca390:
    // 0x1ca390: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca394:
    // 0x1ca394: 0x54660005  bnel        $v1, $a2, . + 4 + (0x5 << 2)
label_1ca398:
    if (ctx->pc == 0x1CA398u) {
        ctx->pc = 0x1CA398u;
            // 0x1ca398: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->pc = 0x1CA39Cu;
        goto label_1ca39c;
    }
    ctx->pc = 0x1CA394u;
    {
        const bool branch_taken_0x1ca394 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1ca394) {
            ctx->pc = 0x1CA398u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA394u;
            // 0x1ca398: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA3ACu;
            goto label_1ca3ac;
        }
    }
    ctx->pc = 0x1CA39Cu;
label_1ca39c:
    // 0x1ca39c: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca39cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca3a0:
    // 0x1ca3a0: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1ca3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1ca3a4:
    // 0x1ca3a4: 0x5c600001  bgtzl       $v1, . + 4 + (0x1 << 2)
label_1ca3a8:
    if (ctx->pc == 0x1CA3A8u) {
        ctx->pc = 0x1CA3A8u;
            // 0x1ca3a8: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->pc = 0x1CA3ACu;
        goto label_1ca3ac;
    }
    ctx->pc = 0x1CA3A4u;
    {
        const bool branch_taken_0x1ca3a4 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1ca3a4) {
            ctx->pc = 0x1CA3A8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3A4u;
            // 0x1ca3a8: 0xac85005c  sw          $a1, 0x5C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 92), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1CA3ACu;
            goto label_1ca3ac;
        }
    }
    ctx->pc = 0x1CA3ACu;
label_1ca3ac:
    // 0x1ca3ac: 0x3e00008  jr          $ra
label_1ca3b0:
    if (ctx->pc == 0x1CA3B0u) {
        ctx->pc = 0x1CA3B4u;
        goto label_1ca3b4;
    }
    ctx->pc = 0x1CA3ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA3B4u;
label_1ca3b4:
    // 0x1ca3b4: 0x0  nop
    ctx->pc = 0x1ca3b4u;
    // NOP
label_1ca3b8:
    // 0x1ca3b8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca3b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca3bc:
    // 0x1ca3bc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca3bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ca3c0:
    // 0x1ca3c0: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca3c4:
    // 0x1ca3c4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca3c8:
    // 0x1ca3c8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ca3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1ca3cc:
    // 0x1ca3cc: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1ca3d0:
    if (ctx->pc == 0x1CA3D0u) {
        ctx->pc = 0x1CA3D0u;
            // 0x1ca3d0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA3D4u;
        goto label_1ca3d4;
    }
    ctx->pc = 0x1CA3CCu;
    {
        const bool branch_taken_0x1ca3cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CA3D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3CCu;
            // 0x1ca3d0: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3cc) {
            ctx->pc = 0x1CA3E4u;
            goto label_1ca3e4;
        }
    }
    ctx->pc = 0x1CA3D4u;
label_1ca3d4:
    // 0x1ca3d4: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca3d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca3d8:
    // 0x1ca3d8: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1ca3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1ca3dc:
    // 0x1ca3dc: 0x18600008  blez        $v1, . + 4 + (0x8 << 2)
label_1ca3e0:
    if (ctx->pc == 0x1CA3E0u) {
        ctx->pc = 0x1CA3E0u;
            // 0x1ca3e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CA3E4u;
        goto label_1ca3e4;
    }
    ctx->pc = 0x1CA3DCu;
    {
        const bool branch_taken_0x1ca3dc = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA3E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3DCu;
            // 0x1ca3e0: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3dc) {
            ctx->pc = 0x1CA400u;
            goto label_1ca400;
        }
    }
    ctx->pc = 0x1CA3E4u;
label_1ca3e4:
    // 0x1ca3e4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1ca3e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1ca3e8:
    // 0x1ca3e8: 0x10c20005  beq         $a2, $v0, . + 4 + (0x5 << 2)
label_1ca3ec:
    if (ctx->pc == 0x1CA3ECu) {
        ctx->pc = 0x1CA3ECu;
            // 0x1ca3ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CA3F0u;
        goto label_1ca3f0;
    }
    ctx->pc = 0x1CA3E8u;
    {
        const bool branch_taken_0x1ca3e8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x1CA3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3E8u;
            // 0x1ca3ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca3e8) {
            ctx->pc = 0x1CA400u;
            goto label_1ca400;
        }
    }
    ctx->pc = 0x1CA3F0u;
label_1ca3f0:
    // 0x1ca3f0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ca3f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ca3f4:
    // 0x1ca3f4: 0xc06d212  jal         func_1B4848
label_1ca3f8:
    if (ctx->pc == 0x1CA3F8u) {
        ctx->pc = 0x1CA3F8u;
            // 0x1ca3f8: 0x2484b710  addiu       $a0, $a0, -0x48F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
        ctx->pc = 0x1CA3FCu;
        goto label_1ca3fc;
    }
    ctx->pc = 0x1CA3F4u;
    SET_GPR_U32(ctx, 31, 0x1CA3FCu);
    ctx->pc = 0x1CA3F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA3F4u;
            // 0x1ca3f8: 0x2484b710  addiu       $a0, $a0, -0x48F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948624));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3FCu; }
        if (ctx->pc != 0x1CA3FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA3FCu; }
        if (ctx->pc != 0x1CA3FCu) { return; }
    }
    ctx->pc = 0x1CA3FCu;
label_1ca3fc:
    // 0x1ca3fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca3fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca400:
    // 0x1ca400: 0x3e00008  jr          $ra
label_1ca404:
    if (ctx->pc == 0x1CA404u) {
        ctx->pc = 0x1CA404u;
            // 0x1ca404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CA408u;
        goto label_1ca408;
    }
    ctx->pc = 0x1CA400u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA404u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA400u;
            // 0x1ca404: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA408u;
label_1ca408:
    // 0x1ca408: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca40c:
    // 0x1ca40c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca40cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ca410:
    // 0x1ca410: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca414:
    // 0x1ca414: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca414u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca418:
    // 0x1ca418: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1ca41c:
    if (ctx->pc == 0x1CA41Cu) {
        ctx->pc = 0x1CA41Cu;
            // 0x1ca41c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1CA420u;
        goto label_1ca420;
    }
    ctx->pc = 0x1CA418u;
    {
        const bool branch_taken_0x1ca418 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CA41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA418u;
            // 0x1ca41c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca418) {
            ctx->pc = 0x1CA430u;
            goto label_1ca430;
        }
    }
    ctx->pc = 0x1CA420u;
label_1ca420:
    // 0x1ca420: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ca420u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1ca424:
    // 0x1ca424: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1ca424u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
label_1ca428:
    // 0x1ca428: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_1ca42c:
    if (ctx->pc == 0x1CA42Cu) {
        ctx->pc = 0x1CA42Cu;
            // 0x1ca42c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA430u;
        goto label_1ca430;
    }
    ctx->pc = 0x1CA428u;
    {
        const bool branch_taken_0x1ca428 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA428u;
            // 0x1ca42c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca428) {
            ctx->pc = 0x1CA440u;
            goto label_1ca440;
        }
    }
    ctx->pc = 0x1CA430u;
label_1ca430:
    // 0x1ca430: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ca430u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ca434:
    // 0x1ca434: 0xc06d212  jal         func_1B4848
label_1ca438:
    if (ctx->pc == 0x1CA438u) {
        ctx->pc = 0x1CA438u;
            // 0x1ca438: 0x2484b740  addiu       $a0, $a0, -0x48C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948672));
        ctx->pc = 0x1CA43Cu;
        goto label_1ca43c;
    }
    ctx->pc = 0x1CA434u;
    SET_GPR_U32(ctx, 31, 0x1CA43Cu);
    ctx->pc = 0x1CA438u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA434u;
            // 0x1ca438: 0x2484b740  addiu       $a0, $a0, -0x48C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948672));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA43Cu; }
        if (ctx->pc != 0x1CA43Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA43Cu; }
        if (ctx->pc != 0x1CA43Cu) { return; }
    }
    ctx->pc = 0x1CA43Cu;
label_1ca43c:
    // 0x1ca43c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca43cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca440:
    // 0x1ca440: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca440u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca444:
    // 0x1ca444: 0x3e00008  jr          $ra
label_1ca448:
    if (ctx->pc == 0x1CA448u) {
        ctx->pc = 0x1CA448u;
            // 0x1ca448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CA44Cu;
        goto label_1ca44c;
    }
    ctx->pc = 0x1CA444u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA448u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA444u;
            // 0x1ca448: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA44Cu;
label_1ca44c:
    // 0x1ca44c: 0x0  nop
    ctx->pc = 0x1ca44cu;
    // NOP
label_1ca450:
    // 0x1ca450: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca454:
    // 0x1ca454: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca454u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca458:
    // 0x1ca458: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca45c:
    // 0x1ca45c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_1ca460:
    if (ctx->pc == 0x1CA460u) {
        ctx->pc = 0x1CA460u;
            // 0x1ca460: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA464u;
        goto label_1ca464;
    }
    ctx->pc = 0x1CA45Cu;
    {
        const bool branch_taken_0x1ca45c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CA460u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA45Cu;
            // 0x1ca460: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca45c) {
            ctx->pc = 0x1CA474u;
            goto label_1ca474;
        }
    }
    ctx->pc = 0x1CA464u;
label_1ca464:
    // 0x1ca464: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ca464u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1ca468:
    // 0x1ca468: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1ca468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
label_1ca46c:
    // 0x1ca46c: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_1ca470:
    if (ctx->pc == 0x1CA470u) {
        ctx->pc = 0x1CA470u;
            // 0x1ca470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA474u;
        goto label_1ca474;
    }
    ctx->pc = 0x1CA46Cu;
    {
        const bool branch_taken_0x1ca46c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA46Cu;
            // 0x1ca470: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca46c) {
            ctx->pc = 0x1CA478u;
            goto label_1ca478;
        }
    }
    ctx->pc = 0x1CA474u;
label_1ca474:
    // 0x1ca474: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x1ca474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_1ca478:
    // 0x1ca478: 0x3e00008  jr          $ra
label_1ca47c:
    if (ctx->pc == 0x1CA47Cu) {
        ctx->pc = 0x1CA480u;
        goto label_1ca480;
    }
    ctx->pc = 0x1CA478u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA480u;
label_1ca480:
    // 0x1ca480: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca484:
    // 0x1ca484: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca484u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca488:
    // 0x1ca488: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca488u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca48c:
    // 0x1ca48c: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_1ca490:
    if (ctx->pc == 0x1CA490u) {
        ctx->pc = 0x1CA490u;
            // 0x1ca490: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA494u;
        goto label_1ca494;
    }
    ctx->pc = 0x1CA48Cu;
    {
        const bool branch_taken_0x1ca48c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CA490u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA48Cu;
            // 0x1ca490: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca48c) {
            ctx->pc = 0x1CA4A4u;
            goto label_1ca4a4;
        }
    }
    ctx->pc = 0x1CA494u;
label_1ca494:
    // 0x1ca494: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ca494u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1ca498:
    // 0x1ca498: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1ca498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
label_1ca49c:
    // 0x1ca49c: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_1ca4a0:
    if (ctx->pc == 0x1CA4A0u) {
        ctx->pc = 0x1CA4A0u;
            // 0x1ca4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4A4u;
        goto label_1ca4a4;
    }
    ctx->pc = 0x1CA49Cu;
    {
        const bool branch_taken_0x1ca49c = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA4A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA49Cu;
            // 0x1ca4a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca49c) {
            ctx->pc = 0x1CA4A8u;
            goto label_1ca4a8;
        }
    }
    ctx->pc = 0x1CA4A4u;
label_1ca4a4:
    // 0x1ca4a4: 0x8cc20038  lw          $v0, 0x38($a2)
    ctx->pc = 0x1ca4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 56)));
label_1ca4a8:
    // 0x1ca4a8: 0x3e00008  jr          $ra
label_1ca4ac:
    if (ctx->pc == 0x1CA4ACu) {
        ctx->pc = 0x1CA4B0u;
        goto label_1ca4b0;
    }
    ctx->pc = 0x1CA4A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA4B0u;
label_1ca4b0:
    // 0x1ca4b0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca4b4:
    // 0x1ca4b4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1ca4b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca4b8:
    // 0x1ca4b8: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca4bc:
    // 0x1ca4bc: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x1ca4bcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1ca4c0:
    // 0x1ca4c0: 0x14660005  bne         $v1, $a2, . + 4 + (0x5 << 2)
label_1ca4c4:
    if (ctx->pc == 0x1CA4C4u) {
        ctx->pc = 0x1CA4C4u;
            // 0x1ca4c4: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->pc = 0x1CA4C8u;
        goto label_1ca4c8;
    }
    ctx->pc = 0x1CA4C0u;
    {
        const bool branch_taken_0x1ca4c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        ctx->pc = 0x1CA4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA4C0u;
            // 0x1ca4c4: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4c0) {
            ctx->pc = 0x1CA4D8u;
            goto label_1ca4d8;
        }
    }
    ctx->pc = 0x1CA4C8u;
label_1ca4c8:
    // 0x1ca4c8: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ca4c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1ca4cc:
    // 0x1ca4cc: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1ca4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
label_1ca4d0:
    // 0x1ca4d0: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
label_1ca4d4:
    if (ctx->pc == 0x1CA4D4u) {
        ctx->pc = 0x1CA4D4u;
            // 0x1ca4d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4D8u;
        goto label_1ca4d8;
    }
    ctx->pc = 0x1CA4D0u;
    {
        const bool branch_taken_0x1ca4d0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA4D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA4D0u;
            // 0x1ca4d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4d0) {
            ctx->pc = 0x1CA4E0u;
            goto label_1ca4e0;
        }
    }
    ctx->pc = 0x1CA4D8u;
label_1ca4d8:
    // 0x1ca4d8: 0xa71821  addu        $v1, $a1, $a3
    ctx->pc = 0x1ca4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_1ca4dc:
    // 0x1ca4dc: 0x8c620040  lw          $v0, 0x40($v1)
    ctx->pc = 0x1ca4dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 64)));
label_1ca4e0:
    // 0x1ca4e0: 0x3e00008  jr          $ra
label_1ca4e4:
    if (ctx->pc == 0x1CA4E4u) {
        ctx->pc = 0x1CA4E8u;
        goto label_1ca4e8;
    }
    ctx->pc = 0x1CA4E0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA4E8u;
label_1ca4e8:
    // 0x1ca4e8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca4ec:
    // 0x1ca4ec: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1ca4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca4f0:
    // 0x1ca4f0: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca4f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca4f4:
    // 0x1ca4f4: 0x14650005  bne         $v1, $a1, . + 4 + (0x5 << 2)
label_1ca4f8:
    if (ctx->pc == 0x1CA4F8u) {
        ctx->pc = 0x1CA4F8u;
            // 0x1ca4f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA4FCu;
        goto label_1ca4fc;
    }
    ctx->pc = 0x1CA4F4u;
    {
        const bool branch_taken_0x1ca4f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x1CA4F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA4F4u;
            // 0x1ca4f8: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca4f4) {
            ctx->pc = 0x1CA50Cu;
            goto label_1ca50c;
        }
    }
    ctx->pc = 0x1CA4FCu;
label_1ca4fc:
    // 0x1ca4fc: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ca4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1ca500:
    // 0x1ca500: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1ca500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
label_1ca504:
    // 0x1ca504: 0x18600002  blez        $v1, . + 4 + (0x2 << 2)
label_1ca508:
    if (ctx->pc == 0x1CA508u) {
        ctx->pc = 0x1CA508u;
            // 0x1ca508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA50Cu;
        goto label_1ca50c;
    }
    ctx->pc = 0x1CA504u;
    {
        const bool branch_taken_0x1ca504 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA508u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA504u;
            // 0x1ca508: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca504) {
            ctx->pc = 0x1CA510u;
            goto label_1ca510;
        }
    }
    ctx->pc = 0x1CA50Cu;
label_1ca50c:
    // 0x1ca50c: 0x8cc2005c  lw          $v0, 0x5C($a2)
    ctx->pc = 0x1ca50cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 92)));
label_1ca510:
    // 0x1ca510: 0x3e00008  jr          $ra
label_1ca514:
    if (ctx->pc == 0x1CA514u) {
        ctx->pc = 0x1CA518u;
        goto label_1ca518;
    }
    ctx->pc = 0x1CA510u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA518u;
label_1ca518:
    // 0x1ca518: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca518u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca51c:
    // 0x1ca51c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca51cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca520:
    // 0x1ca520: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca520u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca524:
    // 0x1ca524: 0x14640003  bne         $v1, $a0, . + 4 + (0x3 << 2)
label_1ca528:
    if (ctx->pc == 0x1CA528u) {
        ctx->pc = 0x1CA528u;
            // 0x1ca528: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x1CA52Cu;
        goto label_1ca52c;
    }
    ctx->pc = 0x1CA524u;
    {
        const bool branch_taken_0x1ca524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CA528u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA524u;
            // 0x1ca528: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca524) {
            ctx->pc = 0x1CA534u;
            goto label_1ca534;
        }
    }
    ctx->pc = 0x1CA52Cu;
label_1ca52c:
    // 0x1ca52c: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ca52cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1ca530:
    // 0x1ca530: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1ca530u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
label_1ca534:
    // 0x1ca534: 0x3e00008  jr          $ra
label_1ca538:
    if (ctx->pc == 0x1CA538u) {
        ctx->pc = 0x1CA53Cu;
        goto label_1ca53c;
    }
    ctx->pc = 0x1CA534u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA53Cu;
label_1ca53c:
    // 0x1ca53c: 0x0  nop
    ctx->pc = 0x1ca53cu;
    // NOP
label_1ca540:
    // 0x1ca540: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca540u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca544:
    // 0x1ca544: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca544u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ca548:
    // 0x1ca548: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca54c:
    // 0x1ca54c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca54cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca550:
    // 0x1ca550: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1ca554:
    if (ctx->pc == 0x1CA554u) {
        ctx->pc = 0x1CA554u;
            // 0x1ca554: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1CA558u;
        goto label_1ca558;
    }
    ctx->pc = 0x1CA550u;
    {
        const bool branch_taken_0x1ca550 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CA554u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA550u;
            // 0x1ca554: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca550) {
            ctx->pc = 0x1CA568u;
            goto label_1ca568;
        }
    }
    ctx->pc = 0x1CA558u;
label_1ca558:
    // 0x1ca558: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ca558u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1ca55c:
    // 0x1ca55c: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1ca55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
label_1ca560:
    // 0x1ca560: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_1ca564:
    if (ctx->pc == 0x1CA564u) {
        ctx->pc = 0x1CA564u;
            // 0x1ca564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA568u;
        goto label_1ca568;
    }
    ctx->pc = 0x1CA560u;
    {
        const bool branch_taken_0x1ca560 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA564u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA560u;
            // 0x1ca564: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca560) {
            ctx->pc = 0x1CA578u;
            goto label_1ca578;
        }
    }
    ctx->pc = 0x1CA568u;
label_1ca568:
    // 0x1ca568: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ca568u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ca56c:
    // 0x1ca56c: 0xc06d212  jal         func_1B4848
label_1ca570:
    if (ctx->pc == 0x1CA570u) {
        ctx->pc = 0x1CA570u;
            // 0x1ca570: 0x2484b768  addiu       $a0, $a0, -0x4898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948712));
        ctx->pc = 0x1CA574u;
        goto label_1ca574;
    }
    ctx->pc = 0x1CA56Cu;
    SET_GPR_U32(ctx, 31, 0x1CA574u);
    ctx->pc = 0x1CA570u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA56Cu;
            // 0x1ca570: 0x2484b768  addiu       $a0, $a0, -0x4898 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948712));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA574u; }
        if (ctx->pc != 0x1CA574u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA574u; }
        if (ctx->pc != 0x1CA574u) { return; }
    }
    ctx->pc = 0x1CA574u;
label_1ca574:
    // 0x1ca574: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca574u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca578:
    // 0x1ca578: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca578u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca57c:
    // 0x1ca57c: 0x3e00008  jr          $ra
label_1ca580:
    if (ctx->pc == 0x1CA580u) {
        ctx->pc = 0x1CA580u;
            // 0x1ca580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CA584u;
        goto label_1ca584;
    }
    ctx->pc = 0x1CA57Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA580u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA57Cu;
            // 0x1ca580: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA584u;
label_1ca584:
    // 0x1ca584: 0x0  nop
    ctx->pc = 0x1ca584u;
    // NOP
label_1ca588:
    // 0x1ca588: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca58c:
    // 0x1ca58c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca58cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ca590:
    // 0x1ca590: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca590u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca594:
    // 0x1ca594: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca598:
    // 0x1ca598: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1ca59c:
    if (ctx->pc == 0x1CA59Cu) {
        ctx->pc = 0x1CA59Cu;
            // 0x1ca59c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1CA5A0u;
        goto label_1ca5a0;
    }
    ctx->pc = 0x1CA598u;
    {
        const bool branch_taken_0x1ca598 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CA59Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA598u;
            // 0x1ca59c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca598) {
            ctx->pc = 0x1CA5B0u;
            goto label_1ca5b0;
        }
    }
    ctx->pc = 0x1CA5A0u;
label_1ca5a0:
    // 0x1ca5a0: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca5a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca5a4:
    // 0x1ca5a4: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1ca5a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1ca5a8:
    // 0x1ca5a8: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_1ca5ac:
    if (ctx->pc == 0x1CA5ACu) {
        ctx->pc = 0x1CA5ACu;
            // 0x1ca5ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CA5B0u;
        goto label_1ca5b0;
    }
    ctx->pc = 0x1CA5A8u;
    {
        const bool branch_taken_0x1ca5a8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA5ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5A8u;
            // 0x1ca5ac: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5a8) {
            ctx->pc = 0x1CA5C8u;
            goto label_1ca5c8;
        }
    }
    ctx->pc = 0x1CA5B0u;
label_1ca5b0:
    // 0x1ca5b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ca5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ca5b4:
    // 0x1ca5b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca5b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca5b8:
    // 0x1ca5b8: 0x2484b790  addiu       $a0, $a0, -0x4870
    ctx->pc = 0x1ca5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948752));
label_1ca5bc:
    // 0x1ca5bc: 0x806d212  j           func_1B4848
label_1ca5c0:
    if (ctx->pc == 0x1CA5C0u) {
        ctx->pc = 0x1CA5C0u;
            // 0x1ca5c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CA5C4u;
        goto label_1ca5c4;
    }
    ctx->pc = 0x1CA5BCu;
    ctx->pc = 0x1CA5C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5BCu;
            // 0x1ca5c0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B4848_0x1b4848(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CA5C4u;
label_1ca5c4:
    // 0x1ca5c4: 0x0  nop
    ctx->pc = 0x1ca5c4u;
    // NOP
label_1ca5c8:
    // 0x1ca5c8: 0x3e00008  jr          $ra
label_1ca5cc:
    if (ctx->pc == 0x1CA5CCu) {
        ctx->pc = 0x1CA5CCu;
            // 0x1ca5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CA5D0u;
        goto label_1ca5d0;
    }
    ctx->pc = 0x1CA5C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5C8u;
            // 0x1ca5cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA5D0u;
label_1ca5d0:
    // 0x1ca5d0: 0x3e00008  jr          $ra
label_1ca5d4:
    if (ctx->pc == 0x1CA5D4u) {
        ctx->pc = 0x1CA5D8u;
        goto label_1ca5d8;
    }
    ctx->pc = 0x1CA5D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA5D8u;
label_1ca5d8:
    // 0x1ca5d8: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca5dc:
    // 0x1ca5dc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca5dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ca5e0:
    // 0x1ca5e0: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca5e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca5e4:
    // 0x1ca5e4: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca5e8:
    // 0x1ca5e8: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1ca5ec:
    if (ctx->pc == 0x1CA5ECu) {
        ctx->pc = 0x1CA5ECu;
            // 0x1ca5ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1CA5F0u;
        goto label_1ca5f0;
    }
    ctx->pc = 0x1CA5E8u;
    {
        const bool branch_taken_0x1ca5e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CA5ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5E8u;
            // 0x1ca5ec: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5e8) {
            ctx->pc = 0x1CA600u;
            goto label_1ca600;
        }
    }
    ctx->pc = 0x1CA5F0u;
label_1ca5f0:
    // 0x1ca5f0: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x1ca5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
label_1ca5f4:
    // 0x1ca5f4: 0x8c835320  lw          $v1, 0x5320($a0)
    ctx->pc = 0x1ca5f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 21280)));
label_1ca5f8:
    // 0x1ca5f8: 0x18600005  blez        $v1, . + 4 + (0x5 << 2)
label_1ca5fc:
    if (ctx->pc == 0x1CA5FCu) {
        ctx->pc = 0x1CA5FCu;
            // 0x1ca5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1CA600u;
        goto label_1ca600;
    }
    ctx->pc = 0x1CA5F8u;
    {
        const bool branch_taken_0x1ca5f8 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA5FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA5F8u;
            // 0x1ca5fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca5f8) {
            ctx->pc = 0x1CA610u;
            goto label_1ca610;
        }
    }
    ctx->pc = 0x1CA600u;
label_1ca600:
    // 0x1ca600: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ca600u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ca604:
    // 0x1ca604: 0xc06d212  jal         func_1B4848
label_1ca608:
    if (ctx->pc == 0x1CA608u) {
        ctx->pc = 0x1CA608u;
            // 0x1ca608: 0x2484b7b8  addiu       $a0, $a0, -0x4848 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948792));
        ctx->pc = 0x1CA60Cu;
        goto label_1ca60c;
    }
    ctx->pc = 0x1CA604u;
    SET_GPR_U32(ctx, 31, 0x1CA60Cu);
    ctx->pc = 0x1CA608u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA604u;
            // 0x1ca608: 0x2484b7b8  addiu       $a0, $a0, -0x4848 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA60Cu; }
        if (ctx->pc != 0x1CA60Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001B4848_0x1b4848(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1CA60Cu; }
        if (ctx->pc != 0x1CA60Cu) { return; }
    }
    ctx->pc = 0x1CA60Cu;
label_1ca60c:
    // 0x1ca60c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ca60cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ca610:
    // 0x1ca610: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca610u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca614:
    // 0x1ca614: 0x3e00008  jr          $ra
label_1ca618:
    if (ctx->pc == 0x1CA618u) {
        ctx->pc = 0x1CA618u;
            // 0x1ca618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CA61Cu;
        goto label_1ca61c;
    }
    ctx->pc = 0x1CA614u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA618u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA614u;
            // 0x1ca618: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1CA61Cu;
label_1ca61c:
    // 0x1ca61c: 0x0  nop
    ctx->pc = 0x1ca61cu;
    // NOP
label_1ca620:
    // 0x1ca620: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca624:
    // 0x1ca624: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1ca624u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1ca628:
    // 0x1ca628: 0x8c435328  lw          $v1, 0x5328($v0)
    ctx->pc = 0x1ca628u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21288)));
label_1ca62c:
    // 0x1ca62c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1ca62cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ca630:
    // 0x1ca630: 0x14640005  bne         $v1, $a0, . + 4 + (0x5 << 2)
label_1ca634:
    if (ctx->pc == 0x1CA634u) {
        ctx->pc = 0x1CA634u;
            // 0x1ca634: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x1CA638u;
        goto label_1ca638;
    }
    ctx->pc = 0x1CA630u;
    {
        const bool branch_taken_0x1ca630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x1CA634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA630u;
            // 0x1ca634: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca630) {
            ctx->pc = 0x1CA648u;
            goto label_1ca648;
        }
    }
    ctx->pc = 0x1CA638u;
label_1ca638:
    // 0x1ca638: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x1ca638u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
label_1ca63c:
    // 0x1ca63c: 0x8c435320  lw          $v1, 0x5320($v0)
    ctx->pc = 0x1ca63cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21280)));
label_1ca640:
    // 0x1ca640: 0x18600007  blez        $v1, . + 4 + (0x7 << 2)
label_1ca644:
    if (ctx->pc == 0x1CA644u) {
        ctx->pc = 0x1CA644u;
            // 0x1ca644: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1CA648u;
        goto label_1ca648;
    }
    ctx->pc = 0x1CA640u;
    {
        const bool branch_taken_0x1ca640 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x1CA644u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA640u;
            // 0x1ca644: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ca640) {
            ctx->pc = 0x1CA660u;
            goto label_1ca660;
        }
    }
    ctx->pc = 0x1CA648u;
label_1ca648:
    // 0x1ca648: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1ca648u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1ca64c:
    // 0x1ca64c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ca64cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1ca650:
    // 0x1ca650: 0x2484b7e0  addiu       $a0, $a0, -0x4820
    ctx->pc = 0x1ca650u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948832));
label_1ca654:
    // 0x1ca654: 0x806d212  j           func_1B4848
label_1ca658:
    if (ctx->pc == 0x1CA658u) {
        ctx->pc = 0x1CA658u;
            // 0x1ca658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CA65Cu;
        goto label_1ca65c;
    }
    ctx->pc = 0x1CA654u;
    ctx->pc = 0x1CA658u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA654u;
            // 0x1ca658: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1B4848u;
    if (runtime->hasFunction(0x1B4848u)) {
        auto targetFn = runtime->lookupFunction(0x1B4848u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001B4848_0x1b4848(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x1CA65Cu;
label_1ca65c:
    // 0x1ca65c: 0x0  nop
    ctx->pc = 0x1ca65cu;
    // NOP
label_1ca660:
    // 0x1ca660: 0x3e00008  jr          $ra
label_1ca664:
    if (ctx->pc == 0x1CA664u) {
        ctx->pc = 0x1CA664u;
            // 0x1ca664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1CA668u;
        goto label_fallthrough_0x1ca660;
    }
    ctx->pc = 0x1CA660u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CA664u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1CA660u;
            // 0x1ca664: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1ca660:
    ctx->pc = 0x1CA668u;
    ctx->pc = 0x1ca668u;
}
