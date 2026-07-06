#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0026AFF0
// Address: 0x26aff0 - 0x26b7b8
void sub_0026AFF0_0x26aff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026AFF0_0x26aff0");
#endif

    switch (ctx->pc) {
        case 0x26aff0u: goto label_26aff0;
        case 0x26aff4u: goto label_26aff4;
        case 0x26aff8u: goto label_26aff8;
        case 0x26affcu: goto label_26affc;
        case 0x26b000u: goto label_26b000;
        case 0x26b004u: goto label_26b004;
        case 0x26b008u: goto label_26b008;
        case 0x26b00cu: goto label_26b00c;
        case 0x26b010u: goto label_26b010;
        case 0x26b014u: goto label_26b014;
        case 0x26b018u: goto label_26b018;
        case 0x26b01cu: goto label_26b01c;
        case 0x26b020u: goto label_26b020;
        case 0x26b024u: goto label_26b024;
        case 0x26b028u: goto label_26b028;
        case 0x26b02cu: goto label_26b02c;
        case 0x26b030u: goto label_26b030;
        case 0x26b034u: goto label_26b034;
        case 0x26b038u: goto label_26b038;
        case 0x26b03cu: goto label_26b03c;
        case 0x26b040u: goto label_26b040;
        case 0x26b044u: goto label_26b044;
        case 0x26b048u: goto label_26b048;
        case 0x26b04cu: goto label_26b04c;
        case 0x26b050u: goto label_26b050;
        case 0x26b054u: goto label_26b054;
        case 0x26b058u: goto label_26b058;
        case 0x26b05cu: goto label_26b05c;
        case 0x26b060u: goto label_26b060;
        case 0x26b064u: goto label_26b064;
        case 0x26b068u: goto label_26b068;
        case 0x26b06cu: goto label_26b06c;
        case 0x26b070u: goto label_26b070;
        case 0x26b074u: goto label_26b074;
        case 0x26b078u: goto label_26b078;
        case 0x26b07cu: goto label_26b07c;
        case 0x26b080u: goto label_26b080;
        case 0x26b084u: goto label_26b084;
        case 0x26b088u: goto label_26b088;
        case 0x26b08cu: goto label_26b08c;
        case 0x26b090u: goto label_26b090;
        case 0x26b094u: goto label_26b094;
        case 0x26b098u: goto label_26b098;
        case 0x26b09cu: goto label_26b09c;
        case 0x26b0a0u: goto label_26b0a0;
        case 0x26b0a4u: goto label_26b0a4;
        case 0x26b0a8u: goto label_26b0a8;
        case 0x26b0acu: goto label_26b0ac;
        case 0x26b0b0u: goto label_26b0b0;
        case 0x26b0b4u: goto label_26b0b4;
        case 0x26b0b8u: goto label_26b0b8;
        case 0x26b0bcu: goto label_26b0bc;
        case 0x26b0c0u: goto label_26b0c0;
        case 0x26b0c4u: goto label_26b0c4;
        case 0x26b0c8u: goto label_26b0c8;
        case 0x26b0ccu: goto label_26b0cc;
        case 0x26b0d0u: goto label_26b0d0;
        case 0x26b0d4u: goto label_26b0d4;
        case 0x26b0d8u: goto label_26b0d8;
        case 0x26b0dcu: goto label_26b0dc;
        case 0x26b0e0u: goto label_26b0e0;
        case 0x26b0e4u: goto label_26b0e4;
        case 0x26b0e8u: goto label_26b0e8;
        case 0x26b0ecu: goto label_26b0ec;
        case 0x26b0f0u: goto label_26b0f0;
        case 0x26b0f4u: goto label_26b0f4;
        case 0x26b0f8u: goto label_26b0f8;
        case 0x26b0fcu: goto label_26b0fc;
        case 0x26b100u: goto label_26b100;
        case 0x26b104u: goto label_26b104;
        case 0x26b108u: goto label_26b108;
        case 0x26b10cu: goto label_26b10c;
        case 0x26b110u: goto label_26b110;
        case 0x26b114u: goto label_26b114;
        case 0x26b118u: goto label_26b118;
        case 0x26b11cu: goto label_26b11c;
        case 0x26b120u: goto label_26b120;
        case 0x26b124u: goto label_26b124;
        case 0x26b128u: goto label_26b128;
        case 0x26b12cu: goto label_26b12c;
        case 0x26b130u: goto label_26b130;
        case 0x26b134u: goto label_26b134;
        case 0x26b138u: goto label_26b138;
        case 0x26b13cu: goto label_26b13c;
        case 0x26b140u: goto label_26b140;
        case 0x26b144u: goto label_26b144;
        case 0x26b148u: goto label_26b148;
        case 0x26b14cu: goto label_26b14c;
        case 0x26b150u: goto label_26b150;
        case 0x26b154u: goto label_26b154;
        case 0x26b158u: goto label_26b158;
        case 0x26b15cu: goto label_26b15c;
        case 0x26b160u: goto label_26b160;
        case 0x26b164u: goto label_26b164;
        case 0x26b168u: goto label_26b168;
        case 0x26b16cu: goto label_26b16c;
        case 0x26b170u: goto label_26b170;
        case 0x26b174u: goto label_26b174;
        case 0x26b178u: goto label_26b178;
        case 0x26b17cu: goto label_26b17c;
        case 0x26b180u: goto label_26b180;
        case 0x26b184u: goto label_26b184;
        case 0x26b188u: goto label_26b188;
        case 0x26b18cu: goto label_26b18c;
        case 0x26b190u: goto label_26b190;
        case 0x26b194u: goto label_26b194;
        case 0x26b198u: goto label_26b198;
        case 0x26b19cu: goto label_26b19c;
        case 0x26b1a0u: goto label_26b1a0;
        case 0x26b1a4u: goto label_26b1a4;
        case 0x26b1a8u: goto label_26b1a8;
        case 0x26b1acu: goto label_26b1ac;
        case 0x26b1b0u: goto label_26b1b0;
        case 0x26b1b4u: goto label_26b1b4;
        case 0x26b1b8u: goto label_26b1b8;
        case 0x26b1bcu: goto label_26b1bc;
        case 0x26b1c0u: goto label_26b1c0;
        case 0x26b1c4u: goto label_26b1c4;
        case 0x26b1c8u: goto label_26b1c8;
        case 0x26b1ccu: goto label_26b1cc;
        case 0x26b1d0u: goto label_26b1d0;
        case 0x26b1d4u: goto label_26b1d4;
        case 0x26b1d8u: goto label_26b1d8;
        case 0x26b1dcu: goto label_26b1dc;
        case 0x26b1e0u: goto label_26b1e0;
        case 0x26b1e4u: goto label_26b1e4;
        case 0x26b1e8u: goto label_26b1e8;
        case 0x26b1ecu: goto label_26b1ec;
        case 0x26b1f0u: goto label_26b1f0;
        case 0x26b1f4u: goto label_26b1f4;
        case 0x26b1f8u: goto label_26b1f8;
        case 0x26b1fcu: goto label_26b1fc;
        case 0x26b200u: goto label_26b200;
        case 0x26b204u: goto label_26b204;
        case 0x26b208u: goto label_26b208;
        case 0x26b20cu: goto label_26b20c;
        case 0x26b210u: goto label_26b210;
        case 0x26b214u: goto label_26b214;
        case 0x26b218u: goto label_26b218;
        case 0x26b21cu: goto label_26b21c;
        case 0x26b220u: goto label_26b220;
        case 0x26b224u: goto label_26b224;
        case 0x26b228u: goto label_26b228;
        case 0x26b22cu: goto label_26b22c;
        case 0x26b230u: goto label_26b230;
        case 0x26b234u: goto label_26b234;
        case 0x26b238u: goto label_26b238;
        case 0x26b23cu: goto label_26b23c;
        case 0x26b240u: goto label_26b240;
        case 0x26b244u: goto label_26b244;
        case 0x26b248u: goto label_26b248;
        case 0x26b24cu: goto label_26b24c;
        case 0x26b250u: goto label_26b250;
        case 0x26b254u: goto label_26b254;
        case 0x26b258u: goto label_26b258;
        case 0x26b25cu: goto label_26b25c;
        case 0x26b260u: goto label_26b260;
        case 0x26b264u: goto label_26b264;
        case 0x26b268u: goto label_26b268;
        case 0x26b26cu: goto label_26b26c;
        case 0x26b270u: goto label_26b270;
        case 0x26b274u: goto label_26b274;
        case 0x26b278u: goto label_26b278;
        case 0x26b27cu: goto label_26b27c;
        case 0x26b280u: goto label_26b280;
        case 0x26b284u: goto label_26b284;
        case 0x26b288u: goto label_26b288;
        case 0x26b28cu: goto label_26b28c;
        case 0x26b290u: goto label_26b290;
        case 0x26b294u: goto label_26b294;
        case 0x26b298u: goto label_26b298;
        case 0x26b29cu: goto label_26b29c;
        case 0x26b2a0u: goto label_26b2a0;
        case 0x26b2a4u: goto label_26b2a4;
        case 0x26b2a8u: goto label_26b2a8;
        case 0x26b2acu: goto label_26b2ac;
        case 0x26b2b0u: goto label_26b2b0;
        case 0x26b2b4u: goto label_26b2b4;
        case 0x26b2b8u: goto label_26b2b8;
        case 0x26b2bcu: goto label_26b2bc;
        case 0x26b2c0u: goto label_26b2c0;
        case 0x26b2c4u: goto label_26b2c4;
        case 0x26b2c8u: goto label_26b2c8;
        case 0x26b2ccu: goto label_26b2cc;
        case 0x26b2d0u: goto label_26b2d0;
        case 0x26b2d4u: goto label_26b2d4;
        case 0x26b2d8u: goto label_26b2d8;
        case 0x26b2dcu: goto label_26b2dc;
        case 0x26b2e0u: goto label_26b2e0;
        case 0x26b2e4u: goto label_26b2e4;
        case 0x26b2e8u: goto label_26b2e8;
        case 0x26b2ecu: goto label_26b2ec;
        case 0x26b2f0u: goto label_26b2f0;
        case 0x26b2f4u: goto label_26b2f4;
        case 0x26b2f8u: goto label_26b2f8;
        case 0x26b2fcu: goto label_26b2fc;
        case 0x26b300u: goto label_26b300;
        case 0x26b304u: goto label_26b304;
        case 0x26b308u: goto label_26b308;
        case 0x26b30cu: goto label_26b30c;
        case 0x26b310u: goto label_26b310;
        case 0x26b314u: goto label_26b314;
        case 0x26b318u: goto label_26b318;
        case 0x26b31cu: goto label_26b31c;
        case 0x26b320u: goto label_26b320;
        case 0x26b324u: goto label_26b324;
        case 0x26b328u: goto label_26b328;
        case 0x26b32cu: goto label_26b32c;
        case 0x26b330u: goto label_26b330;
        case 0x26b334u: goto label_26b334;
        case 0x26b338u: goto label_26b338;
        case 0x26b33cu: goto label_26b33c;
        case 0x26b340u: goto label_26b340;
        case 0x26b344u: goto label_26b344;
        case 0x26b348u: goto label_26b348;
        case 0x26b34cu: goto label_26b34c;
        case 0x26b350u: goto label_26b350;
        case 0x26b354u: goto label_26b354;
        case 0x26b358u: goto label_26b358;
        case 0x26b35cu: goto label_26b35c;
        case 0x26b360u: goto label_26b360;
        case 0x26b364u: goto label_26b364;
        case 0x26b368u: goto label_26b368;
        case 0x26b36cu: goto label_26b36c;
        case 0x26b370u: goto label_26b370;
        case 0x26b374u: goto label_26b374;
        case 0x26b378u: goto label_26b378;
        case 0x26b37cu: goto label_26b37c;
        case 0x26b380u: goto label_26b380;
        case 0x26b384u: goto label_26b384;
        case 0x26b388u: goto label_26b388;
        case 0x26b38cu: goto label_26b38c;
        case 0x26b390u: goto label_26b390;
        case 0x26b394u: goto label_26b394;
        case 0x26b398u: goto label_26b398;
        case 0x26b39cu: goto label_26b39c;
        case 0x26b3a0u: goto label_26b3a0;
        case 0x26b3a4u: goto label_26b3a4;
        case 0x26b3a8u: goto label_26b3a8;
        case 0x26b3acu: goto label_26b3ac;
        case 0x26b3b0u: goto label_26b3b0;
        case 0x26b3b4u: goto label_26b3b4;
        case 0x26b3b8u: goto label_26b3b8;
        case 0x26b3bcu: goto label_26b3bc;
        case 0x26b3c0u: goto label_26b3c0;
        case 0x26b3c4u: goto label_26b3c4;
        case 0x26b3c8u: goto label_26b3c8;
        case 0x26b3ccu: goto label_26b3cc;
        case 0x26b3d0u: goto label_26b3d0;
        case 0x26b3d4u: goto label_26b3d4;
        case 0x26b3d8u: goto label_26b3d8;
        case 0x26b3dcu: goto label_26b3dc;
        case 0x26b3e0u: goto label_26b3e0;
        case 0x26b3e4u: goto label_26b3e4;
        case 0x26b3e8u: goto label_26b3e8;
        case 0x26b3ecu: goto label_26b3ec;
        case 0x26b3f0u: goto label_26b3f0;
        case 0x26b3f4u: goto label_26b3f4;
        case 0x26b3f8u: goto label_26b3f8;
        case 0x26b3fcu: goto label_26b3fc;
        case 0x26b400u: goto label_26b400;
        case 0x26b404u: goto label_26b404;
        case 0x26b408u: goto label_26b408;
        case 0x26b40cu: goto label_26b40c;
        case 0x26b410u: goto label_26b410;
        case 0x26b414u: goto label_26b414;
        case 0x26b418u: goto label_26b418;
        case 0x26b41cu: goto label_26b41c;
        case 0x26b420u: goto label_26b420;
        case 0x26b424u: goto label_26b424;
        case 0x26b428u: goto label_26b428;
        case 0x26b42cu: goto label_26b42c;
        case 0x26b430u: goto label_26b430;
        case 0x26b434u: goto label_26b434;
        case 0x26b438u: goto label_26b438;
        case 0x26b43cu: goto label_26b43c;
        case 0x26b440u: goto label_26b440;
        case 0x26b444u: goto label_26b444;
        case 0x26b448u: goto label_26b448;
        case 0x26b44cu: goto label_26b44c;
        case 0x26b450u: goto label_26b450;
        case 0x26b454u: goto label_26b454;
        case 0x26b458u: goto label_26b458;
        case 0x26b45cu: goto label_26b45c;
        case 0x26b460u: goto label_26b460;
        case 0x26b464u: goto label_26b464;
        case 0x26b468u: goto label_26b468;
        case 0x26b46cu: goto label_26b46c;
        case 0x26b470u: goto label_26b470;
        case 0x26b474u: goto label_26b474;
        case 0x26b478u: goto label_26b478;
        case 0x26b47cu: goto label_26b47c;
        case 0x26b480u: goto label_26b480;
        case 0x26b484u: goto label_26b484;
        case 0x26b488u: goto label_26b488;
        case 0x26b48cu: goto label_26b48c;
        case 0x26b490u: goto label_26b490;
        case 0x26b494u: goto label_26b494;
        case 0x26b498u: goto label_26b498;
        case 0x26b49cu: goto label_26b49c;
        case 0x26b4a0u: goto label_26b4a0;
        case 0x26b4a4u: goto label_26b4a4;
        case 0x26b4a8u: goto label_26b4a8;
        case 0x26b4acu: goto label_26b4ac;
        case 0x26b4b0u: goto label_26b4b0;
        case 0x26b4b4u: goto label_26b4b4;
        case 0x26b4b8u: goto label_26b4b8;
        case 0x26b4bcu: goto label_26b4bc;
        case 0x26b4c0u: goto label_26b4c0;
        case 0x26b4c4u: goto label_26b4c4;
        case 0x26b4c8u: goto label_26b4c8;
        case 0x26b4ccu: goto label_26b4cc;
        case 0x26b4d0u: goto label_26b4d0;
        case 0x26b4d4u: goto label_26b4d4;
        case 0x26b4d8u: goto label_26b4d8;
        case 0x26b4dcu: goto label_26b4dc;
        case 0x26b4e0u: goto label_26b4e0;
        case 0x26b4e4u: goto label_26b4e4;
        case 0x26b4e8u: goto label_26b4e8;
        case 0x26b4ecu: goto label_26b4ec;
        case 0x26b4f0u: goto label_26b4f0;
        case 0x26b4f4u: goto label_26b4f4;
        case 0x26b4f8u: goto label_26b4f8;
        case 0x26b4fcu: goto label_26b4fc;
        case 0x26b500u: goto label_26b500;
        case 0x26b504u: goto label_26b504;
        case 0x26b508u: goto label_26b508;
        case 0x26b50cu: goto label_26b50c;
        case 0x26b510u: goto label_26b510;
        case 0x26b514u: goto label_26b514;
        case 0x26b518u: goto label_26b518;
        case 0x26b51cu: goto label_26b51c;
        case 0x26b520u: goto label_26b520;
        case 0x26b524u: goto label_26b524;
        case 0x26b528u: goto label_26b528;
        case 0x26b52cu: goto label_26b52c;
        case 0x26b530u: goto label_26b530;
        case 0x26b534u: goto label_26b534;
        case 0x26b538u: goto label_26b538;
        case 0x26b53cu: goto label_26b53c;
        case 0x26b540u: goto label_26b540;
        case 0x26b544u: goto label_26b544;
        case 0x26b548u: goto label_26b548;
        case 0x26b54cu: goto label_26b54c;
        case 0x26b550u: goto label_26b550;
        case 0x26b554u: goto label_26b554;
        case 0x26b558u: goto label_26b558;
        case 0x26b55cu: goto label_26b55c;
        case 0x26b560u: goto label_26b560;
        case 0x26b564u: goto label_26b564;
        case 0x26b568u: goto label_26b568;
        case 0x26b56cu: goto label_26b56c;
        case 0x26b570u: goto label_26b570;
        case 0x26b574u: goto label_26b574;
        case 0x26b578u: goto label_26b578;
        case 0x26b57cu: goto label_26b57c;
        case 0x26b580u: goto label_26b580;
        case 0x26b584u: goto label_26b584;
        case 0x26b588u: goto label_26b588;
        case 0x26b58cu: goto label_26b58c;
        case 0x26b590u: goto label_26b590;
        case 0x26b594u: goto label_26b594;
        case 0x26b598u: goto label_26b598;
        case 0x26b59cu: goto label_26b59c;
        case 0x26b5a0u: goto label_26b5a0;
        case 0x26b5a4u: goto label_26b5a4;
        case 0x26b5a8u: goto label_26b5a8;
        case 0x26b5acu: goto label_26b5ac;
        case 0x26b5b0u: goto label_26b5b0;
        case 0x26b5b4u: goto label_26b5b4;
        case 0x26b5b8u: goto label_26b5b8;
        case 0x26b5bcu: goto label_26b5bc;
        case 0x26b5c0u: goto label_26b5c0;
        case 0x26b5c4u: goto label_26b5c4;
        case 0x26b5c8u: goto label_26b5c8;
        case 0x26b5ccu: goto label_26b5cc;
        case 0x26b5d0u: goto label_26b5d0;
        case 0x26b5d4u: goto label_26b5d4;
        case 0x26b5d8u: goto label_26b5d8;
        case 0x26b5dcu: goto label_26b5dc;
        case 0x26b5e0u: goto label_26b5e0;
        case 0x26b5e4u: goto label_26b5e4;
        case 0x26b5e8u: goto label_26b5e8;
        case 0x26b5ecu: goto label_26b5ec;
        case 0x26b5f0u: goto label_26b5f0;
        case 0x26b5f4u: goto label_26b5f4;
        case 0x26b5f8u: goto label_26b5f8;
        case 0x26b5fcu: goto label_26b5fc;
        case 0x26b600u: goto label_26b600;
        case 0x26b604u: goto label_26b604;
        case 0x26b608u: goto label_26b608;
        case 0x26b60cu: goto label_26b60c;
        case 0x26b610u: goto label_26b610;
        case 0x26b614u: goto label_26b614;
        case 0x26b618u: goto label_26b618;
        case 0x26b61cu: goto label_26b61c;
        case 0x26b620u: goto label_26b620;
        case 0x26b624u: goto label_26b624;
        case 0x26b628u: goto label_26b628;
        case 0x26b62cu: goto label_26b62c;
        case 0x26b630u: goto label_26b630;
        case 0x26b634u: goto label_26b634;
        case 0x26b638u: goto label_26b638;
        case 0x26b63cu: goto label_26b63c;
        case 0x26b640u: goto label_26b640;
        case 0x26b644u: goto label_26b644;
        case 0x26b648u: goto label_26b648;
        case 0x26b64cu: goto label_26b64c;
        case 0x26b650u: goto label_26b650;
        case 0x26b654u: goto label_26b654;
        case 0x26b658u: goto label_26b658;
        case 0x26b65cu: goto label_26b65c;
        case 0x26b660u: goto label_26b660;
        case 0x26b664u: goto label_26b664;
        case 0x26b668u: goto label_26b668;
        case 0x26b66cu: goto label_26b66c;
        case 0x26b670u: goto label_26b670;
        case 0x26b674u: goto label_26b674;
        case 0x26b678u: goto label_26b678;
        case 0x26b67cu: goto label_26b67c;
        case 0x26b680u: goto label_26b680;
        case 0x26b684u: goto label_26b684;
        case 0x26b688u: goto label_26b688;
        case 0x26b68cu: goto label_26b68c;
        case 0x26b690u: goto label_26b690;
        case 0x26b694u: goto label_26b694;
        case 0x26b698u: goto label_26b698;
        case 0x26b69cu: goto label_26b69c;
        case 0x26b6a0u: goto label_26b6a0;
        case 0x26b6a4u: goto label_26b6a4;
        case 0x26b6a8u: goto label_26b6a8;
        case 0x26b6acu: goto label_26b6ac;
        case 0x26b6b0u: goto label_26b6b0;
        case 0x26b6b4u: goto label_26b6b4;
        case 0x26b6b8u: goto label_26b6b8;
        case 0x26b6bcu: goto label_26b6bc;
        case 0x26b6c0u: goto label_26b6c0;
        case 0x26b6c4u: goto label_26b6c4;
        case 0x26b6c8u: goto label_26b6c8;
        case 0x26b6ccu: goto label_26b6cc;
        case 0x26b6d0u: goto label_26b6d0;
        case 0x26b6d4u: goto label_26b6d4;
        case 0x26b6d8u: goto label_26b6d8;
        case 0x26b6dcu: goto label_26b6dc;
        case 0x26b6e0u: goto label_26b6e0;
        case 0x26b6e4u: goto label_26b6e4;
        case 0x26b6e8u: goto label_26b6e8;
        case 0x26b6ecu: goto label_26b6ec;
        case 0x26b6f0u: goto label_26b6f0;
        case 0x26b6f4u: goto label_26b6f4;
        case 0x26b6f8u: goto label_26b6f8;
        case 0x26b6fcu: goto label_26b6fc;
        case 0x26b700u: goto label_26b700;
        case 0x26b704u: goto label_26b704;
        case 0x26b708u: goto label_26b708;
        case 0x26b70cu: goto label_26b70c;
        case 0x26b710u: goto label_26b710;
        case 0x26b714u: goto label_26b714;
        case 0x26b718u: goto label_26b718;
        case 0x26b71cu: goto label_26b71c;
        case 0x26b720u: goto label_26b720;
        case 0x26b724u: goto label_26b724;
        case 0x26b728u: goto label_26b728;
        case 0x26b72cu: goto label_26b72c;
        case 0x26b730u: goto label_26b730;
        case 0x26b734u: goto label_26b734;
        case 0x26b738u: goto label_26b738;
        case 0x26b73cu: goto label_26b73c;
        case 0x26b740u: goto label_26b740;
        case 0x26b744u: goto label_26b744;
        case 0x26b748u: goto label_26b748;
        case 0x26b74cu: goto label_26b74c;
        case 0x26b750u: goto label_26b750;
        case 0x26b754u: goto label_26b754;
        case 0x26b758u: goto label_26b758;
        case 0x26b75cu: goto label_26b75c;
        case 0x26b760u: goto label_26b760;
        case 0x26b764u: goto label_26b764;
        case 0x26b768u: goto label_26b768;
        case 0x26b76cu: goto label_26b76c;
        case 0x26b770u: goto label_26b770;
        case 0x26b774u: goto label_26b774;
        case 0x26b778u: goto label_26b778;
        case 0x26b77cu: goto label_26b77c;
        case 0x26b780u: goto label_26b780;
        case 0x26b784u: goto label_26b784;
        case 0x26b788u: goto label_26b788;
        case 0x26b78cu: goto label_26b78c;
        case 0x26b790u: goto label_26b790;
        case 0x26b794u: goto label_26b794;
        case 0x26b798u: goto label_26b798;
        case 0x26b79cu: goto label_26b79c;
        case 0x26b7a0u: goto label_26b7a0;
        case 0x26b7a4u: goto label_26b7a4;
        case 0x26b7a8u: goto label_26b7a8;
        case 0x26b7acu: goto label_26b7ac;
        case 0x26b7b0u: goto label_26b7b0;
        case 0x26b7b4u: goto label_26b7b4;
        default: break;
    }

    ctx->pc = 0x26aff0u;

label_26aff0:
    // 0x26aff0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x26aff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_26aff4:
    // 0x26aff4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26aff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26aff8:
    // 0x26aff8: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x26aff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_26affc:
    // 0x26affc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x26affcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26b000:
    // 0x26b000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x26b000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26b004:
    // 0x26b004: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x26b004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_26b008:
    // 0x26b008: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x26b008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_26b00c:
    // 0x26b00c: 0x263e0004  addiu       $fp, $s1, 0x4
    ctx->pc = 0x26b00cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_26b010:
    // 0x26b010: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x26b010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_26b014:
    // 0x26b014: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x26b014u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_26b018:
    // 0x26b018: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x26b018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_26b01c:
    // 0x26b01c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26b01cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b020:
    // 0x26b020: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x26b020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_26b024:
    // 0x26b024: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26b024u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26b028:
    // 0x26b028: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x26b028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_26b02c:
    // 0x26b02c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26b02cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b030:
    // 0x26b030: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x26b030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_26b034:
    // 0x26b034: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x26b034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_26b038:
    // 0x26b038: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x26b038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_26b03c:
    // 0x26b03c: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x26b03cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_26b040:
    // 0x26b040: 0xafa60034  sw          $a2, 0x34($sp)
    ctx->pc = 0x26b040u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 6));
label_26b044:
    // 0x26b044: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x26b044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_26b048:
    // 0x26b048: 0xafa2003c  sw          $v0, 0x3C($sp)
    ctx->pc = 0x26b048u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
label_26b04c:
    // 0x26b04c: 0xafa30040  sw          $v1, 0x40($sp)
    ctx->pc = 0x26b04cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 3));
label_26b050:
    // 0x26b050: 0xc09ae2a  jal         func_26B8A8
label_26b054:
    if (ctx->pc == 0x26B054u) {
        ctx->pc = 0x26B054u;
            // 0x26b054: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x26B058u;
        goto label_26b058;
    }
    ctx->pc = 0x26B050u;
    SET_GPR_U32(ctx, 31, 0x26B058u);
    ctx->pc = 0x26B054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B050u;
            // 0x26b054: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B8A8u;
    if (runtime->hasFunction(0x26B8A8u)) {
        auto targetFn = runtime->lookupFunction(0x26B8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B058u; }
        if (ctx->pc != 0x26B058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B8A8_0x26b8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B058u; }
        if (ctx->pc != 0x26B058u) { return; }
    }
    ctx->pc = 0x26B058u;
label_26b058:
    // 0x26b058: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_26b05c:
    if (ctx->pc == 0x26B05Cu) {
        ctx->pc = 0x26B05Cu;
            // 0x26b05c: 0x2403fffa  addiu       $v1, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x26B060u;
        goto label_26b060;
    }
    ctx->pc = 0x26B058u;
    {
        const bool branch_taken_0x26b058 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26B05Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B058u;
            // 0x26b05c: 0x2403fffa  addiu       $v1, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b058) {
            ctx->pc = 0x26B06Cu;
            goto label_26b06c;
        }
    }
    ctx->pc = 0x26B060u;
label_26b060:
    // 0x26b060: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26b060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26b064:
    // 0x26b064: 0x1000013c  b           . + 4 + (0x13C << 2)
label_26b068:
    if (ctx->pc == 0x26B068u) {
        ctx->pc = 0x26B068u;
            // 0x26b068: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x26B06Cu;
        goto label_26b06c;
    }
    ctx->pc = 0x26B064u;
    {
        const bool branch_taken_0x26b064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B064u;
            // 0x26b068: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b064) {
            ctx->pc = 0x26B558u;
            goto label_26b558;
        }
    }
    ctx->pc = 0x26B06Cu;
label_26b06c:
    // 0x26b06c: 0xc09805c  jal         func_260170
label_26b070:
    if (ctx->pc == 0x26B070u) {
        ctx->pc = 0x26B074u;
        goto label_26b074;
    }
    ctx->pc = 0x26B06Cu;
    SET_GPR_U32(ctx, 31, 0x26B074u);
    ctx->pc = 0x260170u;
    if (runtime->hasFunction(0x260170u)) {
        auto targetFn = runtime->lookupFunction(0x260170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B074u; }
        if (ctx->pc != 0x26B074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260170_0x260170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B074u; }
        if (ctx->pc != 0x26B074u) { return; }
    }
    ctx->pc = 0x26B074u;
label_26b074:
    // 0x26b074: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x26b074u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b078:
    // 0x26b078: 0x6e10006  bgez        $s7, . + 4 + (0x6 << 2)
label_26b07c:
    if (ctx->pc == 0x26B07Cu) {
        ctx->pc = 0x26B07Cu;
            // 0x26b07c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26B080u;
        goto label_26b080;
    }
    ctx->pc = 0x26B078u;
    {
        const bool branch_taken_0x26b078 = (GPR_S32(ctx, 23) >= 0);
        ctx->pc = 0x26B07Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B078u;
            // 0x26b07c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b078) {
            ctx->pc = 0x26B094u;
            goto label_26b094;
        }
    }
    ctx->pc = 0x26B080u;
label_26b080:
    // 0x26b080: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b080u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b084:
    // 0x26b084: 0xc08b5ac  jal         func_22D6B0
label_26b088:
    if (ctx->pc == 0x26B088u) {
        ctx->pc = 0x26B088u;
            // 0x26b088: 0x24a58618  addiu       $a1, $a1, -0x79E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936088));
        ctx->pc = 0x26B08Cu;
        goto label_26b08c;
    }
    ctx->pc = 0x26B084u;
    SET_GPR_U32(ctx, 31, 0x26B08Cu);
    ctx->pc = 0x26B088u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B084u;
            // 0x26b088: 0x24a58618  addiu       $a1, $a1, -0x79E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B08Cu; }
        if (ctx->pc != 0x26B08Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B08Cu; }
        if (ctx->pc != 0x26B08Cu) { return; }
    }
    ctx->pc = 0x26B08Cu;
label_26b08c:
    // 0x26b08c: 0x10000107  b           . + 4 + (0x107 << 2)
label_26b090:
    if (ctx->pc == 0x26B090u) {
        ctx->pc = 0x26B090u;
            // 0x26b090: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26B094u;
        goto label_26b094;
    }
    ctx->pc = 0x26B08Cu;
    {
        const bool branch_taken_0x26b08c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B08Cu;
            // 0x26b090: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b08c) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B094u;
label_26b094:
    // 0x26b094: 0xc09805c  jal         func_260170
label_26b098:
    if (ctx->pc == 0x26B098u) {
        ctx->pc = 0x26B09Cu;
        goto label_26b09c;
    }
    ctx->pc = 0x26B094u;
    SET_GPR_U32(ctx, 31, 0x26B09Cu);
    ctx->pc = 0x260170u;
    if (runtime->hasFunction(0x260170u)) {
        auto targetFn = runtime->lookupFunction(0x260170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B09Cu; }
        if (ctx->pc != 0x26B09Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260170_0x260170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B09Cu; }
        if (ctx->pc != 0x26B09Cu) { return; }
    }
    ctx->pc = 0x26B09Cu;
label_26b09c:
    // 0x26b09c: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_26b0a0:
    if (ctx->pc == 0x26B0A0u) {
        ctx->pc = 0x26B0A0u;
            // 0x26b0a0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->pc = 0x26B0A4u;
        goto label_26b0a4;
    }
    ctx->pc = 0x26B09Cu;
    {
        const bool branch_taken_0x26b09c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26B0A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B09Cu;
            // 0x26b0a0: 0xafa2003c  sw          $v0, 0x3C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b09c) {
            ctx->pc = 0x26B0BCu;
            goto label_26b0bc;
        }
    }
    ctx->pc = 0x26B0A4u;
label_26b0a4:
    // 0x26b0a4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b0a8:
    // 0x26b0a8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b0a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b0ac:
    // 0x26b0ac: 0xc08b5ac  jal         func_22D6B0
label_26b0b0:
    if (ctx->pc == 0x26B0B0u) {
        ctx->pc = 0x26B0B0u;
            // 0x26b0b0: 0x24a58618  addiu       $a1, $a1, -0x79E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936088));
        ctx->pc = 0x26B0B4u;
        goto label_26b0b4;
    }
    ctx->pc = 0x26B0ACu;
    SET_GPR_U32(ctx, 31, 0x26B0B4u);
    ctx->pc = 0x26B0B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0ACu;
            // 0x26b0b0: 0x24a58618  addiu       $a1, $a1, -0x79E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936088));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0B4u; }
        if (ctx->pc != 0x26B0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0B4u; }
        if (ctx->pc != 0x26B0B4u) { return; }
    }
    ctx->pc = 0x26B0B4u;
label_26b0b4:
    // 0x26b0b4: 0x100000fd  b           . + 4 + (0xFD << 2)
label_26b0b8:
    if (ctx->pc == 0x26B0B8u) {
        ctx->pc = 0x26B0B8u;
            // 0x26b0b8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26B0BCu;
        goto label_26b0bc;
    }
    ctx->pc = 0x26B0B4u;
    {
        const bool branch_taken_0x26b0b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0B4u;
            // 0x26b0b8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0b4) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B0BCu;
label_26b0bc:
    // 0x26b0bc: 0xc098552  jal         func_261548
label_26b0c0:
    if (ctx->pc == 0x26B0C0u) {
        ctx->pc = 0x26B0C0u;
            // 0x26b0c0: 0x240408d8  addiu       $a0, $zero, 0x8D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2264));
        ctx->pc = 0x26B0C4u;
        goto label_26b0c4;
    }
    ctx->pc = 0x26B0BCu;
    SET_GPR_U32(ctx, 31, 0x26B0C4u);
    ctx->pc = 0x26B0C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0BCu;
            // 0x26b0c0: 0x240408d8  addiu       $a0, $zero, 0x8D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2264));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0C4u; }
        if (ctx->pc != 0x26B0C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0C4u; }
        if (ctx->pc != 0x26B0C4u) { return; }
    }
    ctx->pc = 0x26B0C4u;
label_26b0c4:
    // 0x26b0c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x26b0c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b0c8:
    // 0x26b0c8: 0x16000008  bnez        $s0, . + 4 + (0x8 << 2)
label_26b0cc:
    if (ctx->pc == 0x26B0CCu) {
        ctx->pc = 0x26B0CCu;
            // 0x26b0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B0D0u;
        goto label_26b0d0;
    }
    ctx->pc = 0x26B0C8u;
    {
        const bool branch_taken_0x26b0c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B0CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0C8u;
            // 0x26b0cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0c8) {
            ctx->pc = 0x26B0ECu;
            goto label_26b0ec;
        }
    }
    ctx->pc = 0x26B0D0u;
label_26b0d0:
    // 0x26b0d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b0d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b0d4:
    // 0x26b0d4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b0d8:
    // 0x26b0d8: 0xc08b5ac  jal         func_22D6B0
label_26b0dc:
    if (ctx->pc == 0x26B0DCu) {
        ctx->pc = 0x26B0DCu;
            // 0x26b0dc: 0x24a58648  addiu       $a1, $a1, -0x79B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936136));
        ctx->pc = 0x26B0E0u;
        goto label_26b0e0;
    }
    ctx->pc = 0x26B0D8u;
    SET_GPR_U32(ctx, 31, 0x26B0E0u);
    ctx->pc = 0x26B0DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0D8u;
            // 0x26b0dc: 0x24a58648  addiu       $a1, $a1, -0x79B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936136));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0E0u; }
        if (ctx->pc != 0x26B0E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0E0u; }
        if (ctx->pc != 0x26B0E0u) { return; }
    }
    ctx->pc = 0x26B0E0u;
label_26b0e0:
    // 0x26b0e0: 0x8fa30040  lw          $v1, 0x40($sp)
    ctx->pc = 0x26b0e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26b0e4:
    // 0x26b0e4: 0x100000f2  b           . + 4 + (0xF2 << 2)
label_26b0e8:
    if (ctx->pc == 0x26B0E8u) {
        ctx->pc = 0x26B0E8u;
            // 0x26b0e8: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->pc = 0x26B0ECu;
        goto label_26b0ec;
    }
    ctx->pc = 0x26B0E4u;
    {
        const bool branch_taken_0x26b0e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0E4u;
            // 0x26b0e8: 0xae230050  sw          $v1, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b0e4) {
            ctx->pc = 0x26B4B0u;
            goto label_26b4b0;
        }
    }
    ctx->pc = 0x26B0ECu;
label_26b0ec:
    // 0x26b0ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b0ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b0f0:
    // 0x26b0f0: 0x240608d8  addiu       $a2, $zero, 0x8D8
    ctx->pc = 0x26b0f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2264));
label_26b0f4:
    // 0x26b0f4: 0xc049cb6  jal         func_1272D8
label_26b0f8:
    if (ctx->pc == 0x26B0F8u) {
        ctx->pc = 0x26B0F8u;
            // 0x26b0f8: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x26B0FCu;
        goto label_26b0fc;
    }
    ctx->pc = 0x26B0F4u;
    SET_GPR_U32(ctx, 31, 0x26B0FCu);
    ctx->pc = 0x26B0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B0F4u;
            // 0x26b0f8: 0x24150003  addiu       $s5, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0FCu; }
        if (ctx->pc != 0x26B0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B0FCu; }
        if (ctx->pc != 0x26B0FCu) { return; }
    }
    ctx->pc = 0x26B0FCu;
label_26b0fc:
    // 0x26b0fc: 0x2416000f  addiu       $s6, $zero, 0xF
    ctx->pc = 0x26b0fcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_26b100:
    // 0x26b100: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b100u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b104:
    // 0x26b104: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x26b104u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26b108:
    // 0x26b108: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x26b108u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_26b10c:
    // 0x26b10c: 0xc04a966  jal         func_12A598
label_26b110:
    if (ctx->pc == 0x26B110u) {
        ctx->pc = 0x26B110u;
            // 0x26b110: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x26B114u;
        goto label_26b114;
    }
    ctx->pc = 0x26B10Cu;
    SET_GPR_U32(ctx, 31, 0x26B114u);
    ctx->pc = 0x26B110u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B10Cu;
            // 0x26b110: 0x24140006  addiu       $s4, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B114u; }
        if (ctx->pc != 0x26B114u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B114u; }
        if (ctx->pc != 0x26B114u) { return; }
    }
    ctx->pc = 0x26B114u;
label_26b114:
    // 0x26b114: 0x2612006a  addiu       $s2, $s0, 0x6A
    ctx->pc = 0x26b114u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 106));
label_26b118:
    // 0x26b118: 0xae13018c  sw          $s3, 0x18C($s0)
    ctx->pc = 0x26b118u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 396), GPR_U32(ctx, 19));
label_26b11c:
    // 0x26b11c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x26b11cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b120:
    // 0x26b120: 0xae170010  sw          $s7, 0x10($s0)
    ctx->pc = 0x26b120u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 23));
label_26b124:
    // 0x26b124: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b128:
    // 0x26b128: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26b128u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26b12c:
    // 0x26b12c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x26b12cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_26b130:
    // 0x26b130: 0xae150190  sw          $s5, 0x190($s0)
    ctx->pc = 0x26b130u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 400), GPR_U32(ctx, 21));
label_26b134:
    // 0x26b134: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x26b134u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_26b138:
    // 0x26b138: 0xae160194  sw          $s6, 0x194($s0)
    ctx->pc = 0x26b138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 404), GPR_U32(ctx, 22));
label_26b13c:
    // 0x26b13c: 0xa2140069  sb          $s4, 0x69($s0)
    ctx->pc = 0x26b13cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 105), (uint8_t)GPR_U32(ctx, 20));
label_26b140:
    // 0x26b140: 0xc09aed8  jal         func_26BB60
label_26b144:
    if (ctx->pc == 0x26B144u) {
        ctx->pc = 0x26B144u;
            // 0x26b144: 0xa2020068  sb          $v0, 0x68($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x26B148u;
        goto label_26b148;
    }
    ctx->pc = 0x26B140u;
    SET_GPR_U32(ctx, 31, 0x26B148u);
    ctx->pc = 0x26B144u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B140u;
            // 0x26b144: 0xa2020068  sb          $v0, 0x68($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 104), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26BB60u;
    if (runtime->hasFunction(0x26BB60u)) {
        auto targetFn = runtime->lookupFunction(0x26BB60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B148u; }
        if (ctx->pc != 0x26B148u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026BB60_0x26bb60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B148u; }
        if (ctx->pc != 0x26B148u) { return; }
    }
    ctx->pc = 0x26B148u;
label_26b148:
    // 0x26b148: 0x4430003  bgezl       $v0, . + 4 + (0x3 << 2)
label_26b14c:
    if (ctx->pc == 0x26B14Cu) {
        ctx->pc = 0x26B14Cu;
            // 0x26b14c: 0x92030068  lbu         $v1, 0x68($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->pc = 0x26B150u;
        goto label_26b150;
    }
    ctx->pc = 0x26B148u;
    {
        const bool branch_taken_0x26b148 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26b148) {
            ctx->pc = 0x26B14Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B148u;
            // 0x26b14c: 0x92030068  lbu         $v1, 0x68($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 104)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B158u;
            goto label_26b158;
        }
    }
    ctx->pc = 0x26B150u;
label_26b150:
    // 0x26b150: 0x100000d6  b           . + 4 + (0xD6 << 2)
label_26b154:
    if (ctx->pc == 0x26B154u) {
        ctx->pc = 0x26B154u;
            // 0x26b154: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->pc = 0x26B158u;
        goto label_26b158;
    }
    ctx->pc = 0x26B150u;
    {
        const bool branch_taken_0x26b150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B154u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B150u;
            // 0x26b154: 0x2402fffa  addiu       $v0, $zero, -0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967290));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b150) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B158u;
label_26b158:
    // 0x26b158: 0x260a08d0  addiu       $t2, $s0, 0x8D0
    ctx->pc = 0x26b158u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), 2256));
label_26b15c:
    // 0x26b15c: 0x92070069  lbu         $a3, 0x69($s0)
    ctx->pc = 0x26b15cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 105)));
label_26b160:
    // 0x26b160: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x26b160u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b164:
    // 0x26b164: 0x2408001c  addiu       $t0, $zero, 0x1C
    ctx->pc = 0x26b164u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_26b168:
    // 0x26b168: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26b168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_26b16c:
    // 0x26b16c: 0xae1208d4  sw          $s2, 0x8D4($s0)
    ctx->pc = 0x26b16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 2260), GPR_U32(ctx, 18));
label_26b170:
    // 0x26b170: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26b170u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26b174:
    // 0x26b174: 0xa215007e  sb          $s5, 0x7E($s0)
    ctx->pc = 0x26b174u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 126), (uint8_t)GPR_U32(ctx, 21));
label_26b178:
    // 0x26b178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b17c:
    // 0x26b17c: 0xa2140080  sb          $s4, 0x80($s0)
    ctx->pc = 0x26b17cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 128), (uint8_t)GPR_U32(ctx, 20));
label_26b180:
    // 0x26b180: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x26b180u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_26b184:
    // 0x26b184: 0xa2160081  sb          $s6, 0x81($s0)
    ctx->pc = 0x26b184u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 129), (uint8_t)GPR_U32(ctx, 22));
label_26b188:
    // 0x26b188: 0xa20308d0  sb          $v1, 0x8D0($s0)
    ctx->pc = 0x26b188u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2256), (uint8_t)GPR_U32(ctx, 3));
label_26b18c:
    // 0x26b18c: 0xa20708d1  sb          $a3, 0x8D1($s0)
    ctx->pc = 0x26b18cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2257), (uint8_t)GPR_U32(ctx, 7));
label_26b190:
    // 0x26b190: 0xae0a017c  sw          $t2, 0x17C($s0)
    ctx->pc = 0x26b190u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 380), GPR_U32(ctx, 10));
label_26b194:
    // 0x26b194: 0xa209007d  sb          $t1, 0x7D($s0)
    ctx->pc = 0x26b194u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 125), (uint8_t)GPR_U32(ctx, 9));
label_26b198:
    // 0x26b198: 0xa208007f  sb          $t0, 0x7F($s0)
    ctx->pc = 0x26b198u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 127), (uint8_t)GPR_U32(ctx, 8));
label_26b19c:
    // 0x26b19c: 0xc049cb6  jal         func_1272D8
label_26b1a0:
    if (ctx->pc == 0x26B1A0u) {
        ctx->pc = 0x26B1A0u;
            // 0x26b1a0: 0xa202007c  sb          $v0, 0x7C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
        ctx->pc = 0x26B1A4u;
        goto label_26b1a4;
    }
    ctx->pc = 0x26B19Cu;
    SET_GPR_U32(ctx, 31, 0x26B1A4u);
    ctx->pc = 0x26B1A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B19Cu;
            // 0x26b1a0: 0xa202007c  sb          $v0, 0x7C($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 124), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1A4u; }
        if (ctx->pc != 0x26B1A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1A4u; }
        if (ctx->pc != 0x26B1A4u) { return; }
    }
    ctx->pc = 0x26B1A4u;
label_26b1a4:
    // 0x26b1a4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x26b1a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_26b1a8:
    // 0x26b1a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26b1a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b1ac:
    // 0x26b1ac: 0xc04a966  jal         func_12A598
label_26b1b0:
    if (ctx->pc == 0x26B1B0u) {
        ctx->pc = 0x26B1B0u;
            // 0x26b1b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x26B1B4u;
        goto label_26b1b4;
    }
    ctx->pc = 0x26B1ACu;
    SET_GPR_U32(ctx, 31, 0x26B1B4u);
    ctx->pc = 0x26B1B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1ACu;
            // 0x26b1b0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1B4u; }
        if (ctx->pc != 0x26B1B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1B4u; }
        if (ctx->pc != 0x26B1B4u) { return; }
    }
    ctx->pc = 0x26B1B4u;
label_26b1b4:
    // 0x26b1b4: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x26b1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_26b1b8:
    // 0x26b1b8: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x26b1b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_26b1bc:
    // 0x26b1bc: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26b1bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_26b1c0:
    // 0x26b1c0: 0x34a5426c  ori         $a1, $a1, 0x426C
    ctx->pc = 0x26b1c0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17004);
label_26b1c4:
    // 0x26b1c4: 0xc0980e6  jal         func_260398
label_26b1c8:
    if (ctx->pc == 0x26B1C8u) {
        ctx->pc = 0x26B1C8u;
            // 0x26b1c8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B1CCu;
        goto label_26b1cc;
    }
    ctx->pc = 0x26B1C4u;
    SET_GPR_U32(ctx, 31, 0x26B1CCu);
    ctx->pc = 0x26B1C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1C4u;
            // 0x26b1c8: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260398u;
    if (runtime->hasFunction(0x260398u)) {
        auto targetFn = runtime->lookupFunction(0x260398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1CCu; }
        if (ctx->pc != 0x26B1CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260398_0x260398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1CCu; }
        if (ctx->pc != 0x26B1CCu) { return; }
    }
    ctx->pc = 0x26B1CCu;
label_26b1cc:
    // 0x26b1cc: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_26b1d0:
    if (ctx->pc == 0x26B1D0u) {
        ctx->pc = 0x26B1D0u;
            // 0x26b1d0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x26B1D4u;
        goto label_26b1d4;
    }
    ctx->pc = 0x26B1CCu;
    {
        const bool branch_taken_0x26b1cc = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26b1cc) {
            ctx->pc = 0x26B1D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1CCu;
            // 0x26b1d0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B1ECu;
            goto label_26b1ec;
        }
    }
    ctx->pc = 0x26B1D4u;
label_26b1d4:
    // 0x26b1d4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b1d8:
    // 0x26b1d8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b1dc:
    // 0x26b1dc: 0xc08b5ac  jal         func_22D6B0
label_26b1e0:
    if (ctx->pc == 0x26B1E0u) {
        ctx->pc = 0x26B1E0u;
            // 0x26b1e0: 0x24a58678  addiu       $a1, $a1, -0x7988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936184));
        ctx->pc = 0x26B1E4u;
        goto label_26b1e4;
    }
    ctx->pc = 0x26B1DCu;
    SET_GPR_U32(ctx, 31, 0x26B1E4u);
    ctx->pc = 0x26B1E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1DCu;
            // 0x26b1e0: 0x24a58678  addiu       $a1, $a1, -0x7988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1E4u; }
        if (ctx->pc != 0x26B1E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B1E4u; }
        if (ctx->pc != 0x26B1E4u) { return; }
    }
    ctx->pc = 0x26B1E4u;
label_26b1e4:
    // 0x26b1e4: 0x100000b1  b           . + 4 + (0xB1 << 2)
label_26b1e8:
    if (ctx->pc == 0x26B1E8u) {
        ctx->pc = 0x26B1E8u;
            // 0x26b1e8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26B1ECu;
        goto label_26b1ec;
    }
    ctx->pc = 0x26B1E4u;
    {
        const bool branch_taken_0x26b1e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B1E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1E4u;
            // 0x26b1e8: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b1e4) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B1ECu;
label_26b1ec:
    // 0x26b1ec: 0x34058020  ori         $a1, $zero, 0x8020
    ctx->pc = 0x26b1ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32800);
label_26b1f0:
    // 0x26b1f0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26b1f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_26b1f4:
    // 0x26b1f4: 0x34a5426c  ori         $a1, $a1, 0x426C
    ctx->pc = 0x26b1f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17004);
label_26b1f8:
    // 0x26b1f8: 0xc0980e6  jal         func_260398
label_26b1fc:
    if (ctx->pc == 0x26B1FCu) {
        ctx->pc = 0x26B1FCu;
            // 0x26b1fc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B200u;
        goto label_26b200;
    }
    ctx->pc = 0x26B1F8u;
    SET_GPR_U32(ctx, 31, 0x26B200u);
    ctx->pc = 0x26B1FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B1F8u;
            // 0x26b1fc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260398u;
    if (runtime->hasFunction(0x260398u)) {
        auto targetFn = runtime->lookupFunction(0x260398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B200u; }
        if (ctx->pc != 0x26B200u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260398_0x260398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B200u; }
        if (ctx->pc != 0x26B200u) { return; }
    }
    ctx->pc = 0x26B200u;
label_26b200:
    // 0x26b200: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_26b204:
    if (ctx->pc == 0x26B204u) {
        ctx->pc = 0x26B204u;
            // 0x26b204: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26B208u;
        goto label_26b208;
    }
    ctx->pc = 0x26B200u;
    {
        const bool branch_taken_0x26b200 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26b200) {
            ctx->pc = 0x26B204u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B200u;
            // 0x26b204: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B220u;
            goto label_26b220;
        }
    }
    ctx->pc = 0x26B208u;
label_26b208:
    // 0x26b208: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b208u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b20c:
    // 0x26b20c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b210:
    // 0x26b210: 0xc08b5ac  jal         func_22D6B0
label_26b214:
    if (ctx->pc == 0x26B214u) {
        ctx->pc = 0x26B214u;
            // 0x26b214: 0x24a58678  addiu       $a1, $a1, -0x7988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936184));
        ctx->pc = 0x26B218u;
        goto label_26b218;
    }
    ctx->pc = 0x26B210u;
    SET_GPR_U32(ctx, 31, 0x26B218u);
    ctx->pc = 0x26B214u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B210u;
            // 0x26b214: 0x24a58678  addiu       $a1, $a1, -0x7988 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936184));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B218u; }
        if (ctx->pc != 0x26B218u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B218u; }
        if (ctx->pc != 0x26B218u) { return; }
    }
    ctx->pc = 0x26B218u;
label_26b218:
    // 0x26b218: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_26b21c:
    if (ctx->pc == 0x26B21Cu) {
        ctx->pc = 0x26B21Cu;
            // 0x26b21c: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26B220u;
        goto label_26b220;
    }
    ctx->pc = 0x26B218u;
    {
        const bool branch_taken_0x26b218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B21Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B218u;
            // 0x26b21c: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b218) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B220u;
label_26b220:
    // 0x26b220: 0x3c054004  lui         $a1, 0x4004
    ctx->pc = 0x26b220u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16388 << 16));
label_26b224:
    // 0x26b224: 0x34a54266  ori         $a1, $a1, 0x4266
    ctx->pc = 0x26b224u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16998);
label_26b228:
    // 0x26b228: 0xc0980e6  jal         func_260398
label_26b22c:
    if (ctx->pc == 0x26B22Cu) {
        ctx->pc = 0x26B22Cu;
            // 0x26b22c: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->pc = 0x26B230u;
        goto label_26b230;
    }
    ctx->pc = 0x26B228u;
    SET_GPR_U32(ctx, 31, 0x26B230u);
    ctx->pc = 0x26B22Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B228u;
            // 0x26b22c: 0x2606001c  addiu       $a2, $s0, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260398u;
    if (runtime->hasFunction(0x260398u)) {
        auto targetFn = runtime->lookupFunction(0x260398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B230u; }
        if (ctx->pc != 0x26B230u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260398_0x260398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B230u; }
        if (ctx->pc != 0x26B230u) { return; }
    }
    ctx->pc = 0x26B230u;
label_26b230:
    // 0x26b230: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_26b234:
    if (ctx->pc == 0x26B234u) {
        ctx->pc = 0x26B234u;
            // 0x26b234: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26B238u;
        goto label_26b238;
    }
    ctx->pc = 0x26B230u;
    {
        const bool branch_taken_0x26b230 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26B234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B230u;
            // 0x26b234: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b230) {
            ctx->pc = 0x26B24Cu;
            goto label_26b24c;
        }
    }
    ctx->pc = 0x26B238u;
label_26b238:
    // 0x26b238: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b23c:
    // 0x26b23c: 0xc08b5ac  jal         func_22D6B0
label_26b240:
    if (ctx->pc == 0x26B240u) {
        ctx->pc = 0x26B240u;
            // 0x26b240: 0x24a586b8  addiu       $a1, $a1, -0x7948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936248));
        ctx->pc = 0x26B244u;
        goto label_26b244;
    }
    ctx->pc = 0x26B23Cu;
    SET_GPR_U32(ctx, 31, 0x26B244u);
    ctx->pc = 0x26B240u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B23Cu;
            // 0x26b240: 0x24a586b8  addiu       $a1, $a1, -0x7948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B244u; }
        if (ctx->pc != 0x26B244u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B244u; }
        if (ctx->pc != 0x26B244u) { return; }
    }
    ctx->pc = 0x26B244u;
label_26b244:
    // 0x26b244: 0x10000099  b           . + 4 + (0x99 << 2)
label_26b248:
    if (ctx->pc == 0x26B248u) {
        ctx->pc = 0x26B248u;
            // 0x26b248: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26B24Cu;
        goto label_26b24c;
    }
    ctx->pc = 0x26B244u;
    {
        const bool branch_taken_0x26b244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B248u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B244u;
            // 0x26b248: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b244) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B24Cu;
label_26b24c:
    // 0x26b24c: 0xc098552  jal         func_261548
label_26b250:
    if (ctx->pc == 0x26B250u) {
        ctx->pc = 0x26B250u;
            // 0x26b250: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->pc = 0x26B254u;
        goto label_26b254;
    }
    ctx->pc = 0x26B24Cu;
    SET_GPR_U32(ctx, 31, 0x26B254u);
    ctx->pc = 0x26B250u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B24Cu;
            // 0x26b250: 0x8e04001c  lw          $a0, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B254u; }
        if (ctx->pc != 0x26B254u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B254u; }
        if (ctx->pc != 0x26B254u) { return; }
    }
    ctx->pc = 0x26B254u;
label_26b254:
    // 0x26b254: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_26b258:
    if (ctx->pc == 0x26B258u) {
        ctx->pc = 0x26B258u;
            // 0x26b258: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->pc = 0x26B25Cu;
        goto label_26b25c;
    }
    ctx->pc = 0x26B254u;
    {
        const bool branch_taken_0x26b254 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B258u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B254u;
            // 0x26b258: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b254) {
            ctx->pc = 0x26B274u;
            goto label_26b274;
        }
    }
    ctx->pc = 0x26B25Cu;
label_26b25c:
    // 0x26b25c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b25cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b260:
    // 0x26b260: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b264:
    // 0x26b264: 0xc08b5ac  jal         func_22D6B0
label_26b268:
    if (ctx->pc == 0x26B268u) {
        ctx->pc = 0x26B268u;
            // 0x26b268: 0x24a586f8  addiu       $a1, $a1, -0x7908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936312));
        ctx->pc = 0x26B26Cu;
        goto label_26b26c;
    }
    ctx->pc = 0x26B264u;
    SET_GPR_U32(ctx, 31, 0x26B26Cu);
    ctx->pc = 0x26B268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B264u;
            // 0x26b268: 0x24a586f8  addiu       $a1, $a1, -0x7908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B26Cu; }
        if (ctx->pc != 0x26B26Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B26Cu; }
        if (ctx->pc != 0x26B26Cu) { return; }
    }
    ctx->pc = 0x26B26Cu;
label_26b26c:
    // 0x26b26c: 0x1000008f  b           . + 4 + (0x8F << 2)
label_26b270:
    if (ctx->pc == 0x26B270u) {
        ctx->pc = 0x26B270u;
            // 0x26b270: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x26B274u;
        goto label_26b274;
    }
    ctx->pc = 0x26B26Cu;
    {
        const bool branch_taken_0x26b26c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B270u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B26Cu;
            // 0x26b270: 0x8fa20040  lw          $v0, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b26c) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B274u;
label_26b274:
    // 0x26b274: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x26b274u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_26b278:
    // 0x26b278: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b278u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b27c:
    // 0x26b27c: 0xc049cb6  jal         func_1272D8
label_26b280:
    if (ctx->pc == 0x26B280u) {
        ctx->pc = 0x26B280u;
            // 0x26b280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B284u;
        goto label_26b284;
    }
    ctx->pc = 0x26B27Cu;
    SET_GPR_U32(ctx, 31, 0x26B284u);
    ctx->pc = 0x26B280u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B27Cu;
            // 0x26b280: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B284u; }
        if (ctx->pc != 0x26B284u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B284u; }
        if (ctx->pc != 0x26B284u) { return; }
    }
    ctx->pc = 0x26B284u;
label_26b284:
    // 0x26b284: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x26b284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_26b288:
    // 0x26b288: 0x3c054004  lui         $a1, 0x4004
    ctx->pc = 0x26b288u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16388 << 16));
label_26b28c:
    // 0x26b28c: 0x34a54266  ori         $a1, $a1, 0x4266
    ctx->pc = 0x26b28cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16998);
label_26b290:
    // 0x26b290: 0xc0980e6  jal         func_260398
label_26b294:
    if (ctx->pc == 0x26B294u) {
        ctx->pc = 0x26B294u;
            // 0x26b294: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->pc = 0x26B298u;
        goto label_26b298;
    }
    ctx->pc = 0x26B290u;
    SET_GPR_U32(ctx, 31, 0x26B298u);
    ctx->pc = 0x26B294u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B290u;
            // 0x26b294: 0x26060024  addiu       $a2, $s0, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260398u;
    if (runtime->hasFunction(0x260398u)) {
        auto targetFn = runtime->lookupFunction(0x260398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B298u; }
        if (ctx->pc != 0x26B298u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260398_0x260398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B298u; }
        if (ctx->pc != 0x26B298u) { return; }
    }
    ctx->pc = 0x26B298u;
label_26b298:
    // 0x26b298: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_26b29c:
    if (ctx->pc == 0x26B29Cu) {
        ctx->pc = 0x26B29Cu;
            // 0x26b29c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26B2A0u;
        goto label_26b2a0;
    }
    ctx->pc = 0x26B298u;
    {
        const bool branch_taken_0x26b298 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26B29Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B298u;
            // 0x26b29c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b298) {
            ctx->pc = 0x26B2B4u;
            goto label_26b2b4;
        }
    }
    ctx->pc = 0x26B2A0u;
label_26b2a0:
    // 0x26b2a0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b2a4:
    // 0x26b2a4: 0xc08b5ac  jal         func_22D6B0
label_26b2a8:
    if (ctx->pc == 0x26B2A8u) {
        ctx->pc = 0x26B2A8u;
            // 0x26b2a8: 0x24a586b8  addiu       $a1, $a1, -0x7948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936248));
        ctx->pc = 0x26B2ACu;
        goto label_26b2ac;
    }
    ctx->pc = 0x26B2A4u;
    SET_GPR_U32(ctx, 31, 0x26B2ACu);
    ctx->pc = 0x26B2A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2A4u;
            // 0x26b2a8: 0x24a586b8  addiu       $a1, $a1, -0x7948 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936248));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2ACu; }
        if (ctx->pc != 0x26B2ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2ACu; }
        if (ctx->pc != 0x26B2ACu) { return; }
    }
    ctx->pc = 0x26B2ACu;
label_26b2ac:
    // 0x26b2ac: 0x1000007f  b           . + 4 + (0x7F << 2)
label_26b2b0:
    if (ctx->pc == 0x26B2B0u) {
        ctx->pc = 0x26B2B0u;
            // 0x26b2b0: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26B2B4u;
        goto label_26b2b4;
    }
    ctx->pc = 0x26B2ACu;
    {
        const bool branch_taken_0x26b2ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2ACu;
            // 0x26b2b0: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2ac) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B2B4u;
label_26b2b4:
    // 0x26b2b4: 0xc098552  jal         func_261548
label_26b2b8:
    if (ctx->pc == 0x26B2B8u) {
        ctx->pc = 0x26B2B8u;
            // 0x26b2b8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->pc = 0x26B2BCu;
        goto label_26b2bc;
    }
    ctx->pc = 0x26B2B4u;
    SET_GPR_U32(ctx, 31, 0x26B2BCu);
    ctx->pc = 0x26B2B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2B4u;
            // 0x26b2b8: 0x8e040024  lw          $a0, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2BCu; }
        if (ctx->pc != 0x26B2BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2BCu; }
        if (ctx->pc != 0x26B2BCu) { return; }
    }
    ctx->pc = 0x26B2BCu;
label_26b2bc:
    // 0x26b2bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_26b2c0:
    if (ctx->pc == 0x26B2C0u) {
        ctx->pc = 0x26B2C0u;
            // 0x26b2c0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->pc = 0x26B2C4u;
        goto label_26b2c4;
    }
    ctx->pc = 0x26B2BCu;
    {
        const bool branch_taken_0x26b2bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B2C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2BCu;
            // 0x26b2c0: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2bc) {
            ctx->pc = 0x26B2DCu;
            goto label_26b2dc;
        }
    }
    ctx->pc = 0x26B2C4u;
label_26b2c4:
    // 0x26b2c4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b2c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b2c8:
    // 0x26b2c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b2cc:
    // 0x26b2cc: 0xc08b5ac  jal         func_22D6B0
label_26b2d0:
    if (ctx->pc == 0x26B2D0u) {
        ctx->pc = 0x26B2D0u;
            // 0x26b2d0: 0x24a586f8  addiu       $a1, $a1, -0x7908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936312));
        ctx->pc = 0x26B2D4u;
        goto label_26b2d4;
    }
    ctx->pc = 0x26B2CCu;
    SET_GPR_U32(ctx, 31, 0x26B2D4u);
    ctx->pc = 0x26B2D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2CCu;
            // 0x26b2d0: 0x24a586f8  addiu       $a1, $a1, -0x7908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2D4u; }
        if (ctx->pc != 0x26B2D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2D4u; }
        if (ctx->pc != 0x26B2D4u) { return; }
    }
    ctx->pc = 0x26B2D4u;
label_26b2d4:
    // 0x26b2d4: 0x10000075  b           . + 4 + (0x75 << 2)
label_26b2d8:
    if (ctx->pc == 0x26B2D8u) {
        ctx->pc = 0x26B2D8u;
            // 0x26b2d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x26B2DCu;
        goto label_26b2dc;
    }
    ctx->pc = 0x26B2D4u;
    {
        const bool branch_taken_0x26b2d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B2D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2D4u;
            // 0x26b2d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b2d4) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B2DCu;
label_26b2dc:
    // 0x26b2dc: 0x8e060024  lw          $a2, 0x24($s0)
    ctx->pc = 0x26b2dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
label_26b2e0:
    // 0x26b2e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b2e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b2e4:
    // 0x26b2e4: 0xc049cb6  jal         func_1272D8
label_26b2e8:
    if (ctx->pc == 0x26B2E8u) {
        ctx->pc = 0x26B2E8u;
            // 0x26b2e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B2ECu;
        goto label_26b2ec;
    }
    ctx->pc = 0x26B2E4u;
    SET_GPR_U32(ctx, 31, 0x26B2ECu);
    ctx->pc = 0x26B2E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B2E4u;
            // 0x26b2e8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2ECu; }
        if (ctx->pc != 0x26B2ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B2ECu; }
        if (ctx->pc != 0x26B2ECu) { return; }
    }
    ctx->pc = 0x26B2ECu;
label_26b2ec:
    // 0x26b2ec: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x26b2ecu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_26b2f0:
    // 0x26b2f0: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x26b2f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_26b2f4:
    // 0x26b2f4: 0x34058008  ori         $a1, $zero, 0x8008
    ctx->pc = 0x26b2f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32776);
label_26b2f8:
    // 0x26b2f8: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26b2f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_26b2fc:
    // 0x26b2fc: 0x34a54267  ori         $a1, $a1, 0x4267
    ctx->pc = 0x26b2fcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16999);
label_26b300:
    // 0x26b300: 0xc0980e6  jal         func_260398
label_26b304:
    if (ctx->pc == 0x26B304u) {
        ctx->pc = 0x26B304u;
            // 0x26b304: 0x24c61b18  addiu       $a2, $a2, 0x1B18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6936));
        ctx->pc = 0x26B308u;
        goto label_26b308;
    }
    ctx->pc = 0x26B300u;
    SET_GPR_U32(ctx, 31, 0x26B308u);
    ctx->pc = 0x26B304u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B300u;
            // 0x26b304: 0x24c61b18  addiu       $a2, $a2, 0x1B18 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 6936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260398u;
    if (runtime->hasFunction(0x260398u)) {
        auto targetFn = runtime->lookupFunction(0x260398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B308u; }
        if (ctx->pc != 0x26B308u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260398_0x260398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B308u; }
        if (ctx->pc != 0x26B308u) { return; }
    }
    ctx->pc = 0x26B308u;
label_26b308:
    // 0x26b308: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_26b30c:
    if (ctx->pc == 0x26B30Cu) {
        ctx->pc = 0x26B30Cu;
            // 0x26b30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x26B310u;
        goto label_26b310;
    }
    ctx->pc = 0x26B308u;
    {
        const bool branch_taken_0x26b308 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26B30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B308u;
            // 0x26b30c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b308) {
            ctx->pc = 0x26B328u;
            goto label_26b328;
        }
    }
    ctx->pc = 0x26B310u;
label_26b310:
    // 0x26b310: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b310u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b314:
    // 0x26b314: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b314u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b318:
    // 0x26b318: 0xc08b5ac  jal         func_22D6B0
label_26b31c:
    if (ctx->pc == 0x26B31Cu) {
        ctx->pc = 0x26B31Cu;
            // 0x26b31c: 0x24a58728  addiu       $a1, $a1, -0x78D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936360));
        ctx->pc = 0x26B320u;
        goto label_26b320;
    }
    ctx->pc = 0x26B318u;
    SET_GPR_U32(ctx, 31, 0x26B320u);
    ctx->pc = 0x26B31Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B318u;
            // 0x26b31c: 0x24a58728  addiu       $a1, $a1, -0x78D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B320u; }
        if (ctx->pc != 0x26B320u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B320u; }
        if (ctx->pc != 0x26B320u) { return; }
    }
    ctx->pc = 0x26B320u;
label_26b320:
    // 0x26b320: 0x10000062  b           . + 4 + (0x62 << 2)
label_26b324:
    if (ctx->pc == 0x26B324u) {
        ctx->pc = 0x26B324u;
            // 0x26b324: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26B328u;
        goto label_26b328;
    }
    ctx->pc = 0x26B320u;
    {
        const bool branch_taken_0x26b320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B320u;
            // 0x26b324: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b320) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B328u;
label_26b328:
    // 0x26b328: 0xffa00028  sd          $zero, 0x28($sp)
    ctx->pc = 0x26b328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 0));
label_26b32c:
    // 0x26b32c: 0xffa20020  sd          $v0, 0x20($sp)
    ctx->pc = 0x26b32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 2));
label_26b330:
    // 0x26b330: 0x27b20020  addiu       $s2, $sp, 0x20
    ctx->pc = 0x26b330u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_26b334:
    // 0x26b334: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x26b334u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
label_26b338:
    // 0x26b338: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26b338u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_26b33c:
    // 0x26b33c: 0x34a5426d  ori         $a1, $a1, 0x426D
    ctx->pc = 0x26b33cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17005);
label_26b340:
    // 0x26b340: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26b340u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26b344:
    // 0x26b344: 0xc0980e6  jal         func_260398
label_26b348:
    if (ctx->pc == 0x26B348u) {
        ctx->pc = 0x26B348u;
            // 0x26b348: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x26B34Cu;
        goto label_26b34c;
    }
    ctx->pc = 0x26B344u;
    SET_GPR_U32(ctx, 31, 0x26B34Cu);
    ctx->pc = 0x26B348u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B344u;
            // 0x26b348: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260398u;
    if (runtime->hasFunction(0x260398u)) {
        auto targetFn = runtime->lookupFunction(0x260398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B34Cu; }
        if (ctx->pc != 0x26B34Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260398_0x260398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B34Cu; }
        if (ctx->pc != 0x26B34Cu) { return; }
    }
    ctx->pc = 0x26B34Cu;
label_26b34c:
    // 0x26b34c: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_26b350:
    if (ctx->pc == 0x26B350u) {
        ctx->pc = 0x26B350u;
            // 0x26b350: 0xffa00020  sd          $zero, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
        ctx->pc = 0x26B354u;
        goto label_26b354;
    }
    ctx->pc = 0x26B34Cu;
    {
        const bool branch_taken_0x26b34c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26b34c) {
            ctx->pc = 0x26B350u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B34Cu;
            // 0x26b350: 0xffa00020  sd          $zero, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B36Cu;
            goto label_26b36c;
        }
    }
    ctx->pc = 0x26B354u;
label_26b354:
    // 0x26b354: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b358:
    // 0x26b358: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b35c:
    // 0x26b35c: 0xc08b5ac  jal         func_22D6B0
label_26b360:
    if (ctx->pc == 0x26B360u) {
        ctx->pc = 0x26B360u;
            // 0x26b360: 0x24a58760  addiu       $a1, $a1, -0x78A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936416));
        ctx->pc = 0x26B364u;
        goto label_26b364;
    }
    ctx->pc = 0x26B35Cu;
    SET_GPR_U32(ctx, 31, 0x26B364u);
    ctx->pc = 0x26B360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B35Cu;
            // 0x26b360: 0x24a58760  addiu       $a1, $a1, -0x78A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B364u; }
        if (ctx->pc != 0x26B364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B364u; }
        if (ctx->pc != 0x26B364u) { return; }
    }
    ctx->pc = 0x26B364u;
label_26b364:
    // 0x26b364: 0x10000051  b           . + 4 + (0x51 << 2)
label_26b368:
    if (ctx->pc == 0x26B368u) {
        ctx->pc = 0x26B368u;
            // 0x26b368: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26B36Cu;
        goto label_26b36c;
    }
    ctx->pc = 0x26B364u;
    {
        const bool branch_taken_0x26b364 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B368u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B364u;
            // 0x26b368: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b364) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B36Cu;
label_26b36c:
    // 0x26b36c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x26b36cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
label_26b370:
    // 0x26b370: 0x3442a120  ori         $v0, $v0, 0xA120
    ctx->pc = 0x26b370u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)41248);
label_26b374:
    // 0x26b374: 0xffa20028  sd          $v0, 0x28($sp)
    ctx->pc = 0x26b374u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 2));
label_26b378:
    // 0x26b378: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x26b378u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26b37c:
    // 0x26b37c: 0x34058010  ori         $a1, $zero, 0x8010
    ctx->pc = 0x26b37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32784);
label_26b380:
    // 0x26b380: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x26b380u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_26b384:
    // 0x26b384: 0x34a5426d  ori         $a1, $a1, 0x426D
    ctx->pc = 0x26b384u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)17005);
label_26b388:
    // 0x26b388: 0xc0980e6  jal         func_260398
label_26b38c:
    if (ctx->pc == 0x26B38Cu) {
        ctx->pc = 0x26B38Cu;
            // 0x26b38c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x26B390u;
        goto label_26b390;
    }
    ctx->pc = 0x26B388u;
    SET_GPR_U32(ctx, 31, 0x26B390u);
    ctx->pc = 0x26B38Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B388u;
            // 0x26b38c: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x260398u;
    if (runtime->hasFunction(0x260398u)) {
        auto targetFn = runtime->lookupFunction(0x260398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B390u; }
        if (ctx->pc != 0x26B390u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00260398_0x260398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B390u; }
        if (ctx->pc != 0x26B390u) { return; }
    }
    ctx->pc = 0x26B390u;
label_26b390:
    // 0x26b390: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_26b394:
    if (ctx->pc == 0x26B394u) {
        ctx->pc = 0x26B394u;
            // 0x26b394: 0x2402024e  addiu       $v0, $zero, 0x24E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
        ctx->pc = 0x26B398u;
        goto label_26b398;
    }
    ctx->pc = 0x26B390u;
    {
        const bool branch_taken_0x26b390 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26B394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B390u;
            // 0x26b394: 0x2402024e  addiu       $v0, $zero, 0x24E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 590));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b390) {
            ctx->pc = 0x26B3B0u;
            goto label_26b3b0;
        }
    }
    ctx->pc = 0x26B398u;
label_26b398:
    // 0x26b398: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b398u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b39c:
    // 0x26b39c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b3a0:
    // 0x26b3a0: 0xc08b5ac  jal         func_22D6B0
label_26b3a4:
    if (ctx->pc == 0x26B3A4u) {
        ctx->pc = 0x26B3A4u;
            // 0x26b3a4: 0x24a58760  addiu       $a1, $a1, -0x78A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936416));
        ctx->pc = 0x26B3A8u;
        goto label_26b3a8;
    }
    ctx->pc = 0x26B3A0u;
    SET_GPR_U32(ctx, 31, 0x26B3A8u);
    ctx->pc = 0x26B3A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3A0u;
            // 0x26b3a4: 0x24a58760  addiu       $a1, $a1, -0x78A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936416));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3A8u; }
        if (ctx->pc != 0x26B3A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3A8u; }
        if (ctx->pc != 0x26B3A8u) { return; }
    }
    ctx->pc = 0x26B3A8u;
label_26b3a8:
    // 0x26b3a8: 0x10000040  b           . + 4 + (0x40 << 2)
label_26b3ac:
    if (ctx->pc == 0x26B3ACu) {
        ctx->pc = 0x26B3ACu;
            // 0x26b3ac: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->pc = 0x26B3B0u;
        goto label_26b3b0;
    }
    ctx->pc = 0x26B3A8u;
    {
        const bool branch_taken_0x26b3a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B3ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3A8u;
            // 0x26b3ac: 0x2402fffb  addiu       $v0, $zero, -0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3a8) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B3B0u;
label_26b3b0:
    // 0x26b3b0: 0x24040250  addiu       $a0, $zero, 0x250
    ctx->pc = 0x26b3b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 592));
label_26b3b4:
    // 0x26b3b4: 0xc098552  jal         func_261548
label_26b3b8:
    if (ctx->pc == 0x26B3B8u) {
        ctx->pc = 0x26B3B8u;
            // 0x26b3b8: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->pc = 0x26B3BCu;
        goto label_26b3bc;
    }
    ctx->pc = 0x26B3B4u;
    SET_GPR_U32(ctx, 31, 0x26B3BCu);
    ctx->pc = 0x26B3B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3B4u;
            // 0x26b3b8: 0xae02002c  sw          $v0, 0x2C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3BCu; }
        if (ctx->pc != 0x26B3BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3BCu; }
        if (ctx->pc != 0x26B3BCu) { return; }
    }
    ctx->pc = 0x26B3BCu;
label_26b3bc:
    // 0x26b3bc: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_26b3c0:
    if (ctx->pc == 0x26B3C0u) {
        ctx->pc = 0x26B3C0u;
            // 0x26b3c0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->pc = 0x26B3C4u;
        goto label_26b3c4;
    }
    ctx->pc = 0x26B3BCu;
    {
        const bool branch_taken_0x26b3bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x26B3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3BCu;
            // 0x26b3c0: 0xae020028  sw          $v0, 0x28($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3bc) {
            ctx->pc = 0x26B3DCu;
            goto label_26b3dc;
        }
    }
    ctx->pc = 0x26B3C4u;
label_26b3c4:
    // 0x26b3c4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b3c4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b3c8:
    // 0x26b3c8: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b3cc:
    // 0x26b3cc: 0xc08b5ac  jal         func_22D6B0
label_26b3d0:
    if (ctx->pc == 0x26B3D0u) {
        ctx->pc = 0x26B3D0u;
            // 0x26b3d0: 0x24a586f8  addiu       $a1, $a1, -0x7908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936312));
        ctx->pc = 0x26B3D4u;
        goto label_26b3d4;
    }
    ctx->pc = 0x26B3CCu;
    SET_GPR_U32(ctx, 31, 0x26B3D4u);
    ctx->pc = 0x26B3D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3CCu;
            // 0x26b3d0: 0x24a586f8  addiu       $a1, $a1, -0x7908 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936312));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3D4u; }
        if (ctx->pc != 0x26B3D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3D4u; }
        if (ctx->pc != 0x26B3D4u) { return; }
    }
    ctx->pc = 0x26B3D4u;
label_26b3d4:
    // 0x26b3d4: 0x10000035  b           . + 4 + (0x35 << 2)
label_26b3d8:
    if (ctx->pc == 0x26B3D8u) {
        ctx->pc = 0x26B3D8u;
            // 0x26b3d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x26B3DCu;
        goto label_26b3dc;
    }
    ctx->pc = 0x26B3D4u;
    {
        const bool branch_taken_0x26b3d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B3D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3D4u;
            // 0x26b3d8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b3d4) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B3DCu;
label_26b3dc:
    // 0x26b3dc: 0x8e06002c  lw          $a2, 0x2C($s0)
    ctx->pc = 0x26b3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_26b3e0:
    // 0x26b3e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x26b3e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b3e4:
    // 0x26b3e4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26b3e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b3e8:
    // 0x26b3e8: 0xc049cb6  jal         func_1272D8
label_26b3ec:
    if (ctx->pc == 0x26B3ECu) {
        ctx->pc = 0x26B3ECu;
            // 0x26b3ec: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->pc = 0x26B3F0u;
        goto label_26b3f0;
    }
    ctx->pc = 0x26B3E8u;
    SET_GPR_U32(ctx, 31, 0x26B3F0u);
    ctx->pc = 0x26B3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B3E8u;
            // 0x26b3ec: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3F0u; }
        if (ctx->pc != 0x26B3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B3F0u; }
        if (ctx->pc != 0x26B3F0u) { return; }
    }
    ctx->pc = 0x26B3F0u;
label_26b3f0:
    // 0x26b3f0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x26b3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_26b3f4:
    // 0x26b3f4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x26b3f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_26b3f8:
    // 0x26b3f8: 0x24c687a0  addiu       $a2, $a2, -0x7860
    ctx->pc = 0x26b3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294936480));
label_26b3fc:
    // 0x26b3fc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x26b3fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b400:
    // 0x26b400: 0x2468002c  addiu       $t0, $v1, 0x2C
    ctx->pc = 0x26b400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 44));
label_26b404:
    // 0x26b404: 0x24620002  addiu       $v0, $v1, 0x2
    ctx->pc = 0x26b404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
label_26b408:
    // 0x26b408: 0x24670010  addiu       $a3, $v1, 0x10
    ctx->pc = 0x26b408u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_26b40c:
    // 0x26b40c: 0xae02004c  sw          $v0, 0x4C($s0)
    ctx->pc = 0x26b40cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 2));
label_26b410:
    // 0x26b410: 0x24630024  addiu       $v1, $v1, 0x24
    ctx->pc = 0x26b410u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 36));
label_26b414:
    // 0x26b414: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x26b414u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_26b418:
    // 0x26b418: 0xae070050  sw          $a3, 0x50($s0)
    ctx->pc = 0x26b418u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 7));
label_26b41c:
    // 0x26b41c: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x26b41cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_26b420:
    // 0x26b420: 0xc0985b8  jal         func_2616E0
label_26b424:
    if (ctx->pc == 0x26B424u) {
        ctx->pc = 0x26B424u;
            // 0x26b424: 0xae080058  sw          $t0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 8));
        ctx->pc = 0x26B428u;
        goto label_26b428;
    }
    ctx->pc = 0x26B420u;
    SET_GPR_U32(ctx, 31, 0x26B428u);
    ctx->pc = 0x26B424u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B420u;
            // 0x26b424: 0xae080058  sw          $t0, 0x58($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2616E0u;
    if (runtime->hasFunction(0x2616E0u)) {
        auto targetFn = runtime->lookupFunction(0x2616E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B428u; }
        if (ctx->pc != 0x26B428u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002616E0_0x2616e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B428u; }
        if (ctx->pc != 0x26B428u) { return; }
    }
    ctx->pc = 0x26B428u;
label_26b428:
    // 0x26b428: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
label_26b42c:
    if (ctx->pc == 0x26B42Cu) {
        ctx->pc = 0x26B42Cu;
            // 0x26b42c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x26B430u;
        goto label_26b430;
    }
    ctx->pc = 0x26B428u;
    {
        const bool branch_taken_0x26b428 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x26B42Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B428u;
            // 0x26b42c: 0xafa20044  sw          $v0, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b428) {
            ctx->pc = 0x26B448u;
            goto label_26b448;
        }
    }
    ctx->pc = 0x26B430u;
label_26b430:
    // 0x26b430: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b430u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b434:
    // 0x26b434: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b438:
    // 0x26b438: 0xc08b5ac  jal         func_22D6B0
label_26b43c:
    if (ctx->pc == 0x26B43Cu) {
        ctx->pc = 0x26B43Cu;
            // 0x26b43c: 0x24a587b8  addiu       $a1, $a1, -0x7848 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936504));
        ctx->pc = 0x26B440u;
        goto label_26b440;
    }
    ctx->pc = 0x26B438u;
    SET_GPR_U32(ctx, 31, 0x26B440u);
    ctx->pc = 0x26B43Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B438u;
            // 0x26b43c: 0x24a587b8  addiu       $a1, $a1, -0x7848 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936504));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B440u; }
        if (ctx->pc != 0x26B440u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B440u; }
        if (ctx->pc != 0x26B440u) { return; }
    }
    ctx->pc = 0x26B440u;
label_26b440:
    // 0x26b440: 0x1000001a  b           . + 4 + (0x1A << 2)
label_26b444:
    if (ctx->pc == 0x26B444u) {
        ctx->pc = 0x26B444u;
            // 0x26b444: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->pc = 0x26B448u;
        goto label_26b448;
    }
    ctx->pc = 0x26B440u;
    {
        const bool branch_taken_0x26b440 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B440u;
            // 0x26b444: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b440) {
            ctx->pc = 0x26B4ACu;
            goto label_26b4ac;
        }
    }
    ctx->pc = 0x26B448u;
label_26b448:
    // 0x26b448: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x26b448u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_26b44c:
    // 0x26b44c: 0x3c040027  lui         $a0, 0x27
    ctx->pc = 0x26b44cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)39 << 16));
label_26b450:
    // 0x26b450: 0xae1101b8  sw          $s1, 0x1B8($s0)
    ctx->pc = 0x26b450u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 440), GPR_U32(ctx, 17));
label_26b454:
    // 0x26b454: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x26b454u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
label_26b458:
    // 0x26b458: 0xae0301b0  sw          $v1, 0x1B0($s0)
    ctx->pc = 0x26b458u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 432), GPR_U32(ctx, 3));
label_26b45c:
    // 0x26b45c: 0x2484b588  addiu       $a0, $a0, -0x4A78
    ctx->pc = 0x26b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948232));
label_26b460:
    // 0x26b460: 0x252987e8  addiu       $t1, $t1, -0x7818
    ctx->pc = 0x26b460u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294936552));
label_26b464:
    // 0x26b464: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x26b464u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b468:
    // 0x26b468: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x26b468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_26b46c:
    // 0x26b46c: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x26b46cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
label_26b470:
    // 0x26b470: 0xc0985d0  jal         func_261740
label_26b474:
    if (ctx->pc == 0x26B474u) {
        ctx->pc = 0x26B474u;
            // 0x26b474: 0x8fa70038  lw          $a3, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->pc = 0x26B478u;
        goto label_26b478;
    }
    ctx->pc = 0x26B470u;
    SET_GPR_U32(ctx, 31, 0x26B478u);
    ctx->pc = 0x26B474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B470u;
            // 0x26b474: 0x8fa70038  lw          $a3, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261740u;
    if (runtime->hasFunction(0x261740u)) {
        auto targetFn = runtime->lookupFunction(0x261740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B478u; }
        if (ctx->pc != 0x26B478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261740_0x261740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B478u; }
        if (ctx->pc != 0x26B478u) { return; }
    }
    ctx->pc = 0x26B478u;
label_26b478:
    // 0x26b478: 0x4400007  bltz        $v0, . + 4 + (0x7 << 2)
label_26b47c:
    if (ctx->pc == 0x26B47Cu) {
        ctx->pc = 0x26B47Cu;
            // 0x26b47c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->pc = 0x26B480u;
        goto label_26b480;
    }
    ctx->pc = 0x26B478u;
    {
        const bool branch_taken_0x26b478 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26B47Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B478u;
            // 0x26b47c: 0xafa20040  sw          $v0, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b478) {
            ctx->pc = 0x26B498u;
            goto label_26b498;
        }
    }
    ctx->pc = 0x26B480u;
label_26b480:
    // 0x26b480: 0xae300048  sw          $s0, 0x48($s1)
    ctx->pc = 0x26b480u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 72), GPR_U32(ctx, 16));
label_26b484:
    // 0x26b484: 0x3c030027  lui         $v1, 0x27
    ctx->pc = 0x26b484u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)39 << 16));
label_26b488:
    // 0x26b488: 0x2463b738  addiu       $v1, $v1, -0x48C8
    ctx->pc = 0x26b488u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948664));
label_26b48c:
    // 0x26b48c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x26b48cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_26b490:
    // 0x26b490: 0x10000031  b           . + 4 + (0x31 << 2)
label_26b494:
    if (ctx->pc == 0x26B494u) {
        ctx->pc = 0x26B494u;
            // 0x26b494: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x26B498u;
        goto label_26b498;
    }
    ctx->pc = 0x26B490u;
    {
        const bool branch_taken_0x26b490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B490u;
            // 0x26b494: 0xae23004c  sw          $v1, 0x4C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b490) {
            ctx->pc = 0x26B558u;
            goto label_26b558;
        }
    }
    ctx->pc = 0x26B498u;
label_26b498:
    // 0x26b498: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b498u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b49c:
    // 0x26b49c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b49cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b4a0:
    // 0x26b4a0: 0xc08b5ac  jal         func_22D6B0
label_26b4a4:
    if (ctx->pc == 0x26B4A4u) {
        ctx->pc = 0x26B4A4u;
            // 0x26b4a4: 0x24a58808  addiu       $a1, $a1, -0x77F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936584));
        ctx->pc = 0x26B4A8u;
        goto label_26b4a8;
    }
    ctx->pc = 0x26B4A0u;
    SET_GPR_U32(ctx, 31, 0x26B4A8u);
    ctx->pc = 0x26B4A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4A0u;
            // 0x26b4a4: 0x24a58808  addiu       $a1, $a1, -0x77F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936584));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4A8u; }
        if (ctx->pc != 0x26B4A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4A8u; }
        if (ctx->pc != 0x26B4A8u) { return; }
    }
    ctx->pc = 0x26B4A8u;
label_26b4a8:
    // 0x26b4a8: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x26b4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_26b4ac:
    // 0x26b4ac: 0xae220050  sw          $v0, 0x50($s1)
    ctx->pc = 0x26b4acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
label_26b4b0:
    // 0x26b4b0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x26b4b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_26b4b4:
    // 0x26b4b4: 0xc09ae2a  jal         func_26B8A8
label_26b4b8:
    if (ctx->pc == 0x26B4B8u) {
        ctx->pc = 0x26B4B8u;
            // 0x26b4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B4BCu;
        goto label_26b4bc;
    }
    ctx->pc = 0x26B4B4u;
    SET_GPR_U32(ctx, 31, 0x26B4BCu);
    ctx->pc = 0x26B4B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4B4u;
            // 0x26b4b8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B8A8u;
    if (runtime->hasFunction(0x26B8A8u)) {
        auto targetFn = runtime->lookupFunction(0x26B8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4BCu; }
        if (ctx->pc != 0x26B4BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B8A8_0x26b8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4BCu; }
        if (ctx->pc != 0x26B4BCu) { return; }
    }
    ctx->pc = 0x26B4BCu;
label_26b4bc:
    // 0x26b4bc: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x26b4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_26b4c0:
    // 0x26b4c0: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_26b4c4:
    if (ctx->pc == 0x26B4C4u) {
        ctx->pc = 0x26B4C4u;
            // 0x26b4c4: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->pc = 0x26B4C8u;
        goto label_26b4c8;
    }
    ctx->pc = 0x26B4C0u;
    {
        const bool branch_taken_0x26b4c0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26B4C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4C0u;
            // 0x26b4c4: 0x8fa30044  lw          $v1, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b4c0) {
            ctx->pc = 0x26B4D4u;
            goto label_26b4d4;
        }
    }
    ctx->pc = 0x26B4C8u;
label_26b4c8:
    // 0x26b4c8: 0xc04329c  jal         func_10CA70
label_26b4cc:
    if (ctx->pc == 0x26B4CCu) {
        ctx->pc = 0x26B4CCu;
            // 0x26b4cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B4D0u;
        goto label_26b4d0;
    }
    ctx->pc = 0x26B4C8u;
    SET_GPR_U32(ctx, 31, 0x26B4D0u);
    ctx->pc = 0x26B4CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4C8u;
            // 0x26b4cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CA70u;
    if (runtime->hasFunction(0x10CA70u)) {
        auto targetFn = runtime->lookupFunction(0x10CA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4D0u; }
        if (ctx->pc != 0x26B4D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallDeleteThreadWrapper_0x10ca70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4D0u; }
        if (ctx->pc != 0x26B4D0u) { return; }
    }
    ctx->pc = 0x26B4D0u;
label_26b4d0:
    // 0x26b4d0: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x26b4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_26b4d4:
    // 0x26b4d4: 0x4600003  bltz        $v1, . + 4 + (0x3 << 2)
label_26b4d8:
    if (ctx->pc == 0x26B4D8u) {
        ctx->pc = 0x26B4DCu;
        goto label_26b4dc;
    }
    ctx->pc = 0x26B4D4u;
    {
        const bool branch_taken_0x26b4d4 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x26b4d4) {
            ctx->pc = 0x26B4E4u;
            goto label_26b4e4;
        }
    }
    ctx->pc = 0x26B4DCu;
label_26b4dc:
    // 0x26b4dc: 0xc04331c  jal         func_10CC70
label_26b4e0:
    if (ctx->pc == 0x26B4E0u) {
        ctx->pc = 0x26B4E0u;
            // 0x26b4e0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B4E4u;
        goto label_26b4e4;
    }
    ctx->pc = 0x26B4DCu;
    SET_GPR_U32(ctx, 31, 0x26B4E4u);
    ctx->pc = 0x26B4E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4DCu;
            // 0x26b4e0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4E4u; }
        if (ctx->pc != 0x26B4E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B4E4u; }
        if (ctx->pc != 0x26B4E4u) { return; }
    }
    ctx->pc = 0x26B4E4u;
label_26b4e4:
    // 0x26b4e4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
label_26b4e8:
    if (ctx->pc == 0x26B4E8u) {
        ctx->pc = 0x26B4ECu;
        goto label_26b4ec;
    }
    ctx->pc = 0x26B4E4u;
    {
        const bool branch_taken_0x26b4e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b4e4) {
            ctx->pc = 0x26B530u;
            goto label_26b530;
        }
    }
    ctx->pc = 0x26B4ECu;
label_26b4ec:
    // 0x26b4ec: 0x8e040018  lw          $a0, 0x18($s0)
    ctx->pc = 0x26b4ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_26b4f0:
    // 0x26b4f0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_26b4f4:
    if (ctx->pc == 0x26B4F4u) {
        ctx->pc = 0x26B4F4u;
            // 0x26b4f4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->pc = 0x26B4F8u;
        goto label_26b4f8;
    }
    ctx->pc = 0x26B4F0u;
    {
        const bool branch_taken_0x26b4f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b4f0) {
            ctx->pc = 0x26B4F4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B4F0u;
            // 0x26b4f4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B504u;
            goto label_26b504;
        }
    }
    ctx->pc = 0x26B4F8u;
label_26b4f8:
    // 0x26b4f8: 0xc098560  jal         func_261580
label_26b4fc:
    if (ctx->pc == 0x26B4FCu) {
        ctx->pc = 0x26B500u;
        goto label_26b500;
    }
    ctx->pc = 0x26B4F8u;
    SET_GPR_U32(ctx, 31, 0x26B500u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B500u; }
        if (ctx->pc != 0x26B500u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B500u; }
        if (ctx->pc != 0x26B500u) { return; }
    }
    ctx->pc = 0x26B500u;
label_26b500:
    // 0x26b500: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x26b500u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_26b504:
    // 0x26b504: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_26b508:
    if (ctx->pc == 0x26B508u) {
        ctx->pc = 0x26B508u;
            // 0x26b508: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->pc = 0x26B50Cu;
        goto label_26b50c;
    }
    ctx->pc = 0x26B504u;
    {
        const bool branch_taken_0x26b504 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b504) {
            ctx->pc = 0x26B508u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B504u;
            // 0x26b508: 0x8e040028  lw          $a0, 0x28($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B518u;
            goto label_26b518;
        }
    }
    ctx->pc = 0x26B50Cu;
label_26b50c:
    // 0x26b50c: 0xc098560  jal         func_261580
label_26b510:
    if (ctx->pc == 0x26B510u) {
        ctx->pc = 0x26B514u;
        goto label_26b514;
    }
    ctx->pc = 0x26B50Cu;
    SET_GPR_U32(ctx, 31, 0x26B514u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B514u; }
        if (ctx->pc != 0x26B514u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B514u; }
        if (ctx->pc != 0x26B514u) { return; }
    }
    ctx->pc = 0x26B514u;
label_26b514:
    // 0x26b514: 0x8e040028  lw          $a0, 0x28($s0)
    ctx->pc = 0x26b514u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_26b518:
    // 0x26b518: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_26b51c:
    if (ctx->pc == 0x26B51Cu) {
        ctx->pc = 0x26B520u;
        goto label_26b520;
    }
    ctx->pc = 0x26B518u;
    {
        const bool branch_taken_0x26b518 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b518) {
            ctx->pc = 0x26B528u;
            goto label_26b528;
        }
    }
    ctx->pc = 0x26B520u;
label_26b520:
    // 0x26b520: 0xc098560  jal         func_261580
label_26b524:
    if (ctx->pc == 0x26B524u) {
        ctx->pc = 0x26B528u;
        goto label_26b528;
    }
    ctx->pc = 0x26B520u;
    SET_GPR_U32(ctx, 31, 0x26B528u);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B528u; }
        if (ctx->pc != 0x26B528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B528u; }
        if (ctx->pc != 0x26B528u) { return; }
    }
    ctx->pc = 0x26B528u;
label_26b528:
    // 0x26b528: 0xc098560  jal         func_261580
label_26b52c:
    if (ctx->pc == 0x26B52Cu) {
        ctx->pc = 0x26B52Cu;
            // 0x26b52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B530u;
        goto label_26b530;
    }
    ctx->pc = 0x26B528u;
    SET_GPR_U32(ctx, 31, 0x26B530u);
    ctx->pc = 0x26B52Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B528u;
            // 0x26b52c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B530u; }
        if (ctx->pc != 0x26B530u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B530u; }
        if (ctx->pc != 0x26B530u) { return; }
    }
    ctx->pc = 0x26B530u;
label_26b530:
    // 0x26b530: 0x6e00004  bltz        $s7, . + 4 + (0x4 << 2)
label_26b534:
    if (ctx->pc == 0x26B534u) {
        ctx->pc = 0x26B534u;
            // 0x26b534: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->pc = 0x26B538u;
        goto label_26b538;
    }
    ctx->pc = 0x26B530u;
    {
        const bool branch_taken_0x26b530 = (GPR_S32(ctx, 23) < 0);
        ctx->pc = 0x26B534u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B530u;
            // 0x26b534: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b530) {
            ctx->pc = 0x26B544u;
            goto label_26b544;
        }
    }
    ctx->pc = 0x26B538u;
label_26b538:
    // 0x26b538: 0xc09807e  jal         func_2601F8
label_26b53c:
    if (ctx->pc == 0x26B53Cu) {
        ctx->pc = 0x26B53Cu;
            // 0x26b53c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B540u;
        goto label_26b540;
    }
    ctx->pc = 0x26B538u;
    SET_GPR_U32(ctx, 31, 0x26B540u);
    ctx->pc = 0x26B53Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B538u;
            // 0x26b53c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2601F8u;
    if (runtime->hasFunction(0x2601F8u)) {
        auto targetFn = runtime->lookupFunction(0x2601F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B540u; }
        if (ctx->pc != 0x26B540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002601F8_0x2601f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B540u; }
        if (ctx->pc != 0x26B540u) { return; }
    }
    ctx->pc = 0x26B540u;
label_26b540:
    // 0x26b540: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x26b540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_26b544:
    // 0x26b544: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
label_26b548:
    if (ctx->pc == 0x26B548u) {
        ctx->pc = 0x26B548u;
            // 0x26b548: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x26B54Cu;
        goto label_26b54c;
    }
    ctx->pc = 0x26B544u;
    {
        const bool branch_taken_0x26b544 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26b544) {
            ctx->pc = 0x26B548u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B544u;
            // 0x26b548: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B558u;
            goto label_26b558;
        }
    }
    ctx->pc = 0x26B54Cu;
label_26b54c:
    // 0x26b54c: 0xc09807e  jal         func_2601F8
label_26b550:
    if (ctx->pc == 0x26B550u) {
        ctx->pc = 0x26B550u;
            // 0x26b550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B554u;
        goto label_26b554;
    }
    ctx->pc = 0x26B54Cu;
    SET_GPR_U32(ctx, 31, 0x26B554u);
    ctx->pc = 0x26B550u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B54Cu;
            // 0x26b550: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2601F8u;
    if (runtime->hasFunction(0x2601F8u)) {
        auto targetFn = runtime->lookupFunction(0x2601F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B554u; }
        if (ctx->pc != 0x26B554u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002601F8_0x2601f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B554u; }
        if (ctx->pc != 0x26B554u) { return; }
    }
    ctx->pc = 0x26B554u;
label_26b554:
    // 0x26b554: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x26b554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_26b558:
    // 0x26b558: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x26b558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_26b55c:
    // 0x26b55c: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x26b55cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_26b560:
    // 0x26b560: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x26b560u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_26b564:
    // 0x26b564: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x26b564u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_26b568:
    // 0x26b568: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x26b568u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_26b56c:
    // 0x26b56c: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x26b56cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_26b570:
    // 0x26b570: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x26b570u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_26b574:
    // 0x26b574: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x26b574u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_26b578:
    // 0x26b578: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x26b578u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26b57c:
    // 0x26b57c: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x26b57cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26b580:
    // 0x26b580: 0x3e00008  jr          $ra
label_26b584:
    if (ctx->pc == 0x26B584u) {
        ctx->pc = 0x26B584u;
            // 0x26b584: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x26B588u;
        goto label_26b588;
    }
    ctx->pc = 0x26B580u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B584u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B580u;
            // 0x26b584: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x26B588u;
label_26b588:
    // 0x26b588: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x26b588u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_26b58c:
    // 0x26b58c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26b58cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_26b590:
    // 0x26b590: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26b590u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_26b594:
    // 0x26b594: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x26b594u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b598:
    // 0x26b598: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26b598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_26b59c:
    // 0x26b59c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x26b59cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_26b5a0:
    // 0x26b5a0: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x26b5a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_26b5a4:
    // 0x26b5a4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26b5a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_26b5a8:
    // 0x26b5a8: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x26b5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_26b5ac:
    // 0x26b5ac: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26b5acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_26b5b0:
    // 0x26b5b0: 0xae0001b4  sw          $zero, 0x1B4($s0)
    ctx->pc = 0x26b5b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 0));
label_26b5b4:
    // 0x26b5b4: 0x8e0501b0  lw          $a1, 0x1B0($s0)
    ctx->pc = 0x26b5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_26b5b8:
    // 0x26b5b8: 0xc09a08e  jal         func_268238
label_26b5bc:
    if (ctx->pc == 0x26B5BCu) {
        ctx->pc = 0x26B5BCu;
            // 0x26b5bc: 0x8e1101b8  lw          $s1, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->pc = 0x26B5C0u;
        goto label_26b5c0;
    }
    ctx->pc = 0x26B5B8u;
    SET_GPR_U32(ctx, 31, 0x26B5C0u);
    ctx->pc = 0x26B5BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5B8u;
            // 0x26b5bc: 0x8e1101b8  lw          $s1, 0x1B8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x268238u;
    if (runtime->hasFunction(0x268238u)) {
        auto targetFn = runtime->lookupFunction(0x268238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5C0u; }
        if (ctx->pc != 0x26B5C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00268238_0x268238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5C0u; }
        if (ctx->pc != 0x26B5C0u) { return; }
    }
    ctx->pc = 0x26B5C0u;
label_26b5c0:
    // 0x26b5c0: 0x4410003  bgez        $v0, . + 4 + (0x3 << 2)
label_26b5c4:
    if (ctx->pc == 0x26B5C4u) {
        ctx->pc = 0x26B5C8u;
        goto label_26b5c8;
    }
    ctx->pc = 0x26B5C0u;
    {
        const bool branch_taken_0x26b5c0 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26b5c0) {
            ctx->pc = 0x26B5D0u;
            goto label_26b5d0;
        }
    }
    ctx->pc = 0x26B5C8u;
label_26b5c8:
    // 0x26b5c8: 0x10000038  b           . + 4 + (0x38 << 2)
label_26b5cc:
    if (ctx->pc == 0x26B5CCu) {
        ctx->pc = 0x26B5CCu;
            // 0x26b5cc: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x26B5D0u;
        goto label_26b5d0;
    }
    ctx->pc = 0x26B5C8u;
    {
        const bool branch_taken_0x26b5c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5C8u;
            // 0x26b5cc: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5c8) {
            ctx->pc = 0x26B6ACu;
            goto label_26b6ac;
        }
    }
    ctx->pc = 0x26B5D0u;
label_26b5d0:
    // 0x26b5d0: 0xc098ba8  jal         func_262EA0
label_26b5d4:
    if (ctx->pc == 0x26B5D4u) {
        ctx->pc = 0x26B5D4u;
            // 0x26b5d4: 0x26040198  addiu       $a0, $s0, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 408));
        ctx->pc = 0x26B5D8u;
        goto label_26b5d8;
    }
    ctx->pc = 0x26B5D0u;
    SET_GPR_U32(ctx, 31, 0x26B5D8u);
    ctx->pc = 0x26B5D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5D0u;
            // 0x26b5d4: 0x26040198  addiu       $a0, $s0, 0x198 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 408));
        ctx->in_delay_slot = false;
    ctx->pc = 0x262EA0u;
    if (runtime->hasFunction(0x262EA0u)) {
        auto targetFn = runtime->lookupFunction(0x262EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5D8u; }
        if (ctx->pc != 0x26B5D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262EA0_0x262ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5D8u; }
        if (ctx->pc != 0x26B5D8u) { return; }
    }
    ctx->pc = 0x26B5D8u;
label_26b5d8:
    // 0x26b5d8: 0x4430007  bgezl       $v0, . + 4 + (0x7 << 2)
label_26b5dc:
    if (ctx->pc == 0x26B5DCu) {
        ctx->pc = 0x26B5DCu;
            // 0x26b5dc: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->pc = 0x26B5E0u;
        goto label_26b5e0;
    }
    ctx->pc = 0x26B5D8u;
    {
        const bool branch_taken_0x26b5d8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x26b5d8) {
            ctx->pc = 0x26B5DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5D8u;
            // 0x26b5dc: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B5F8u;
            goto label_26b5f8;
        }
    }
    ctx->pc = 0x26B5E0u;
label_26b5e0:
    // 0x26b5e0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b5e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b5e4:
    // 0x26b5e4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b5e8:
    // 0x26b5e8: 0xc08b5ac  jal         func_22D6B0
label_26b5ec:
    if (ctx->pc == 0x26B5ECu) {
        ctx->pc = 0x26B5ECu;
            // 0x26b5ec: 0x24a58840  addiu       $a1, $a1, -0x77C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936640));
        ctx->pc = 0x26B5F0u;
        goto label_26b5f0;
    }
    ctx->pc = 0x26B5E8u;
    SET_GPR_U32(ctx, 31, 0x26B5F0u);
    ctx->pc = 0x26B5ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5E8u;
            // 0x26b5ec: 0x24a58840  addiu       $a1, $a1, -0x77C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936640));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5F0u; }
        if (ctx->pc != 0x26B5F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B5F0u; }
        if (ctx->pc != 0x26B5F0u) { return; }
    }
    ctx->pc = 0x26B5F0u;
label_26b5f0:
    // 0x26b5f0: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_26b5f4:
    if (ctx->pc == 0x26B5F4u) {
        ctx->pc = 0x26B5F4u;
            // 0x26b5f4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->pc = 0x26B5F8u;
        goto label_26b5f8;
    }
    ctx->pc = 0x26B5F0u;
    {
        const bool branch_taken_0x26b5f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B5F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B5F0u;
            // 0x26b5f4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b5f0) {
            ctx->pc = 0x26B5C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b5c8;
        }
    }
    ctx->pc = 0x26B5F8u;
label_26b5f8:
    // 0x26b5f8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x26b5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_26b5fc:
    // 0x26b5fc: 0x24421aa0  addiu       $v0, $v0, 0x1AA0
    ctx->pc = 0x26b5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6816));
label_26b600:
    // 0x26b600: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x26b600u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_26b604:
    // 0x26b604: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26b604u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_26b608:
    // 0x26b608: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26b608u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26b60c:
    // 0x26b60c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x26b60cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_26b610:
    // 0x26b610: 0x24a58868  addiu       $a1, $a1, -0x7798
    ctx->pc = 0x26b610u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936680));
label_26b614:
    // 0x26b614: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x26b614u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26b618:
    // 0x26b618: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b618u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b61c:
    // 0x26b61c: 0xc08b5ac  jal         func_22D6B0
label_26b620:
    if (ctx->pc == 0x26B620u) {
        ctx->pc = 0x26B620u;
            // 0x26b620: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x26B624u;
        goto label_26b624;
    }
    ctx->pc = 0x26B61Cu;
    SET_GPR_U32(ctx, 31, 0x26B624u);
    ctx->pc = 0x26B620u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B61Cu;
            // 0x26b620: 0x3c150040  lui         $s5, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B624u; }
        if (ctx->pc != 0x26B624u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B624u; }
        if (ctx->pc != 0x26B624u) { return; }
    }
    ctx->pc = 0x26B624u;
label_26b624:
    // 0x26b624: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x26b624u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_26b628:
    // 0x26b628: 0x24541a60  addiu       $s4, $v0, 0x1A60
    ctx->pc = 0x26b628u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 6752));
label_26b62c:
    // 0x26b62c: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x26b62cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_26b630:
    // 0x26b630: 0x1243000a  beq         $s2, $v1, . + 4 + (0xA << 2)
label_26b634:
    if (ctx->pc == 0x26B634u) {
        ctx->pc = 0x26B634u;
            // 0x26b634: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->pc = 0x26B638u;
        goto label_26b638;
    }
    ctx->pc = 0x26B630u;
    {
        const bool branch_taken_0x26b630 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x26B634u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B630u;
            // 0x26b634: 0x121080  sll         $v0, $s2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b630) {
            ctx->pc = 0x26B65Cu;
            goto label_26b65c;
        }
    }
    ctx->pc = 0x26B638u;
label_26b638:
    // 0x26b638: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26b638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_26b63c:
    // 0x26b63c: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x26b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_26b640:
    // 0x26b640: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x26b640u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
label_26b644:
    // 0x26b644: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x26b644u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26b648:
    // 0x26b648: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x26b648u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_26b64c:
    // 0x26b64c: 0x8c670000  lw          $a3, 0x0($v1)
    ctx->pc = 0x26b64cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26b650:
    // 0x26b650: 0xc08b5ac  jal         func_22D6B0
label_26b654:
    if (ctx->pc == 0x26B654u) {
        ctx->pc = 0x26B654u;
            // 0x26b654: 0x26a58880  addiu       $a1, $s5, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936704));
        ctx->pc = 0x26B658u;
        goto label_26b658;
    }
    ctx->pc = 0x26B650u;
    SET_GPR_U32(ctx, 31, 0x26B658u);
    ctx->pc = 0x26B654u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B650u;
            // 0x26b654: 0x26a58880  addiu       $a1, $s5, -0x7780 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294936704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B658u; }
        if (ctx->pc != 0x26B658u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B658u; }
        if (ctx->pc != 0x26B658u) { return; }
    }
    ctx->pc = 0x26B658u;
label_26b658:
    // 0x26b658: 0x8e0301b4  lw          $v1, 0x1B4($s0)
    ctx->pc = 0x26b658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_26b65c:
    // 0x26b65c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x26b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_26b660:
    // 0x26b660: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x26b660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26b664:
    // 0x26b664: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x26b664u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
label_26b668:
    // 0x26b668: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26b668u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_26b66c:
    // 0x26b66c: 0x40f809  jalr        $v0
label_26b670:
    if (ctx->pc == 0x26B670u) {
        ctx->pc = 0x26B670u;
            // 0x26b670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B674u;
        goto label_26b674;
    }
    ctx->pc = 0x26B66Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B674u);
        ctx->pc = 0x26B670u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B66Cu;
            // 0x26b670: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B674u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B674u; }
            if (ctx->pc != 0x26B674u) { return; }
        }
        }
    }
    ctx->pc = 0x26B674u;
label_26b674:
    // 0x26b674: 0x442000d  bltzl       $v0, . + 4 + (0xD << 2)
label_26b678:
    if (ctx->pc == 0x26B678u) {
        ctx->pc = 0x26B678u;
            // 0x26b678: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->pc = 0x26B67Cu;
        goto label_26b67c;
    }
    ctx->pc = 0x26B674u;
    {
        const bool branch_taken_0x26b674 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26b674) {
            ctx->pc = 0x26B678u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B674u;
            // 0x26b678: 0xae220050  sw          $v0, 0x50($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B6ACu;
            goto label_26b6ac;
        }
    }
    ctx->pc = 0x26B67Cu;
label_26b67c:
    // 0x26b67c: 0x8e1201b4  lw          $s2, 0x1B4($s0)
    ctx->pc = 0x26b67cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_26b680:
    // 0x26b680: 0x8e0401b0  lw          $a0, 0x1B0($s0)
    ctx->pc = 0x26b680u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_26b684:
    // 0x26b684: 0xc04332c  jal         func_10CCB0
label_26b688:
    if (ctx->pc == 0x26B688u) {
        ctx->pc = 0x26B688u;
            // 0x26b688: 0xae0201b4  sw          $v0, 0x1B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
        ctx->pc = 0x26B68Cu;
        goto label_26b68c;
    }
    ctx->pc = 0x26B684u;
    SET_GPR_U32(ctx, 31, 0x26B68Cu);
    ctx->pc = 0x26B688u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B684u;
            // 0x26b688: 0xae0201b4  sw          $v0, 0x1B4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 436), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCB0u;
    if (runtime->hasFunction(0x10CCB0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B68Cu; }
        if (ctx->pc != 0x26B68Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CCB0_0x10ccb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B68Cu; }
        if (ctx->pc != 0x26B68Cu) { return; }
    }
    ctx->pc = 0x26B68Cu;
label_26b68c:
    // 0x26b68c: 0x8e0301b0  lw          $v1, 0x1B0($s0)
    ctx->pc = 0x26b68cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 432)));
label_26b690:
    // 0x26b690: 0x5443ffe7  bnel        $v0, $v1, . + 4 + (-0x19 << 2)
label_26b694:
    if (ctx->pc == 0x26B694u) {
        ctx->pc = 0x26B694u;
            // 0x26b694: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->pc = 0x26B698u;
        goto label_26b698;
    }
    ctx->pc = 0x26B690u;
    {
        const bool branch_taken_0x26b690 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26b690) {
            ctx->pc = 0x26B694u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B690u;
            // 0x26b694: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b630;
        }
    }
    ctx->pc = 0x26B698u;
label_26b698:
    // 0x26b698: 0x8e0501b4  lw          $a1, 0x1B4($s0)
    ctx->pc = 0x26b698u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_26b69c:
    // 0x26b69c: 0xc09a536  jal         func_2694D8
label_26b6a0:
    if (ctx->pc == 0x26B6A0u) {
        ctx->pc = 0x26B6A0u;
            // 0x26b6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B6A4u;
        goto label_26b6a4;
    }
    ctx->pc = 0x26B69Cu;
    SET_GPR_U32(ctx, 31, 0x26B6A4u);
    ctx->pc = 0x26B6A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B69Cu;
            // 0x26b6a0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2694D8u;
    if (runtime->hasFunction(0x2694D8u)) {
        auto targetFn = runtime->lookupFunction(0x2694D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6A4u; }
        if (ctx->pc != 0x26B6A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002694D8_0x2694d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6A4u; }
        if (ctx->pc != 0x26B6A4u) { return; }
    }
    ctx->pc = 0x26B6A4u;
label_26b6a4:
    // 0x26b6a4: 0x1000ffe2  b           . + 4 + (-0x1E << 2)
label_26b6a8:
    if (ctx->pc == 0x26B6A8u) {
        ctx->pc = 0x26B6A8u;
            // 0x26b6a8: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->pc = 0x26B6ACu;
        goto label_26b6ac;
    }
    ctx->pc = 0x26B6A4u;
    {
        const bool branch_taken_0x26b6a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B6A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6A4u;
            // 0x26b6a8: 0x8e0301b4  lw          $v1, 0x1B4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6a4) {
            ctx->pc = 0x26B630u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_26b630;
        }
    }
    ctx->pc = 0x26B6ACu;
label_26b6ac:
    // 0x26b6ac: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x26b6acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_26b6b0:
    // 0x26b6b0: 0x4420008  bltzl       $v0, . + 4 + (0x8 << 2)
label_26b6b4:
    if (ctx->pc == 0x26B6B4u) {
        ctx->pc = 0x26B6B4u;
            // 0x26b6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B6B8u;
        goto label_26b6b8;
    }
    ctx->pc = 0x26B6B0u;
    {
        const bool branch_taken_0x26b6b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x26b6b0) {
            ctx->pc = 0x26B6B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6B0u;
            // 0x26b6b4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B6D4u;
            goto label_26b6d4;
        }
    }
    ctx->pc = 0x26B6B8u;
label_26b6b8:
    // 0x26b6b8: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x26b6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_26b6bc:
    // 0x26b6bc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x26b6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_26b6c0:
    // 0x26b6c0: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x26b6c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_26b6c4:
    // 0x26b6c4: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26b6c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_26b6c8:
    // 0x26b6c8: 0x40f809  jalr        $v0
label_26b6cc:
    if (ctx->pc == 0x26B6CCu) {
        ctx->pc = 0x26B6CCu;
            // 0x26b6cc: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x26B6D0u;
        goto label_26b6d0;
    }
    ctx->pc = 0x26B6C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B6D0u);
        ctx->pc = 0x26B6CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6C8u;
            // 0x26b6cc: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B6D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B6D0u; }
            if (ctx->pc != 0x26B6D0u) { return; }
        }
        }
    }
    ctx->pc = 0x26B6D0u;
label_26b6d0:
    // 0x26b6d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x26b6d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_26b6d4:
    // 0x26b6d4: 0xc09ae2a  jal         func_26B8A8
label_26b6d8:
    if (ctx->pc == 0x26B6D8u) {
        ctx->pc = 0x26B6D8u;
            // 0x26b6d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B6DCu;
        goto label_26b6dc;
    }
    ctx->pc = 0x26B6D4u;
    SET_GPR_U32(ctx, 31, 0x26B6DCu);
    ctx->pc = 0x26B6D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6D4u;
            // 0x26b6d8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x26B8A8u;
    if (runtime->hasFunction(0x26B8A8u)) {
        auto targetFn = runtime->lookupFunction(0x26B8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6DCu; }
        if (ctx->pc != 0x26B6DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0026B8A8_0x26b8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6DCu; }
        if (ctx->pc != 0x26B6DCu) { return; }
    }
    ctx->pc = 0x26B6DCu;
label_26b6dc:
    // 0x26b6dc: 0xc09a50a  jal         func_269428
label_26b6e0:
    if (ctx->pc == 0x26B6E0u) {
        ctx->pc = 0x26B6E0u;
            // 0x26b6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B6E4u;
        goto label_26b6e4;
    }
    ctx->pc = 0x26B6DCu;
    SET_GPR_U32(ctx, 31, 0x26B6E4u);
    ctx->pc = 0x26B6E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6DCu;
            // 0x26b6e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x269428u;
    if (runtime->hasFunction(0x269428u)) {
        auto targetFn = runtime->lookupFunction(0x269428u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6E4u; }
        if (ctx->pc != 0x26B6E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00269428_0x269428(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B6E4u; }
        if (ctx->pc != 0x26B6E4u) { return; }
    }
    ctx->pc = 0x26B6E4u;
label_26b6e4:
    // 0x26b6e4: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x26b6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_26b6e8:
    // 0x26b6e8: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
label_26b6ec:
    if (ctx->pc == 0x26B6ECu) {
        ctx->pc = 0x26B6ECu;
            // 0x26b6ec: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->pc = 0x26B6F0u;
        goto label_26b6f0;
    }
    ctx->pc = 0x26B6E8u;
    {
        const bool branch_taken_0x26b6e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x26B6ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6E8u;
            // 0x26b6ec: 0x3c042000  lui         $a0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b6e8) {
            ctx->pc = 0x26B704u;
            goto label_26b704;
        }
    }
    ctx->pc = 0x26B6F0u;
label_26b6f0:
    // 0x26b6f0: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x26b6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_26b6f4:
    // 0x26b6f4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x26b6f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_26b6f8:
    // 0x26b6f8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x26b6f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_26b6fc:
    // 0x26b6fc: 0x40f809  jalr        $v0
label_26b700:
    if (ctx->pc == 0x26B700u) {
        ctx->pc = 0x26B700u;
            // 0x26b700: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->pc = 0x26B704u;
        goto label_26b704;
    }
    ctx->pc = 0x26B6FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x26B704u);
        ctx->pc = 0x26B700u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B6FCu;
            // 0x26b700: 0xae230030  sw          $v1, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x26B704u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x26B704u; }
            if (ctx->pc != 0x26B704u) { return; }
        }
        }
    }
    ctx->pc = 0x26B704u;
label_26b704:
    // 0x26b704: 0xc0432d4  jal         func_10CB50
label_26b708:
    if (ctx->pc == 0x26B708u) {
        ctx->pc = 0x26B70Cu;
        goto label_26b70c;
    }
    ctx->pc = 0x26B704u;
    SET_GPR_U32(ctx, 31, 0x26B70Cu);
    ctx->pc = 0x10CB50u;
    if (runtime->hasFunction(0x10CB50u)) {
        auto targetFn = runtime->lookupFunction(0x10CB50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B70Cu; }
        if (ctx->pc != 0x26B70Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallGetThreadIdWrapper_0x10cb50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B70Cu; }
        if (ctx->pc != 0x26B70Cu) { return; }
    }
    ctx->pc = 0x26B70Cu;
label_26b70c:
    // 0x26b70c: 0xc097360  jal         func_25CD80
label_26b710:
    if (ctx->pc == 0x26B710u) {
        ctx->pc = 0x26B710u;
            // 0x26b710: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B714u;
        goto label_26b714;
    }
    ctx->pc = 0x26B70Cu;
    SET_GPR_U32(ctx, 31, 0x26B714u);
    ctx->pc = 0x26B710u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B70Cu;
            // 0x26b710: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x25CD80u;
    if (runtime->hasFunction(0x25CD80u)) {
        auto targetFn = runtime->lookupFunction(0x25CD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B714u; }
        if (ctx->pc != 0x26B714u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0025CD80_0x25cd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B714u; }
        if (ctx->pc != 0x26B714u) { return; }
    }
    ctx->pc = 0x26B714u;
label_26b714:
    // 0x26b714: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26b714u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_26b718:
    // 0x26b718: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x26b718u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26b71c:
    // 0x26b71c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26b71cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26b720:
    // 0x26b720: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26b720u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_26b724:
    // 0x26b724: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x26b724u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_26b728:
    // 0x26b728: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x26b728u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26b72c:
    // 0x26b72c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26b72cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26b730:
    // 0x26b730: 0x80432a8  j           func_10CAA0
label_26b734:
    if (ctx->pc == 0x26B734u) {
        ctx->pc = 0x26B734u;
            // 0x26b734: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x26B738u;
        goto label_26b738;
    }
    ctx->pc = 0x26B730u;
    ctx->pc = 0x26B734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B730u;
            // 0x26b734: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CAA0u;
    if (runtime->hasFunction(0x10CAA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CAA0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiSyscallExitDeleteThreadWrapper_0x10caa0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x26B738u;
label_26b738:
    // 0x26b738: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x26b738u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_26b73c:
    // 0x26b73c: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x26b73cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_26b740:
    // 0x26b740: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x26b740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_26b744:
    // 0x26b744: 0x14c20004  bne         $a2, $v0, . + 4 + (0x4 << 2)
label_26b748:
    if (ctx->pc == 0x26B748u) {
        ctx->pc = 0x26B748u;
            // 0x26b748: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x26B74Cu;
        goto label_26b74c;
    }
    ctx->pc = 0x26B744u;
    {
        const bool branch_taken_0x26b744 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x26B748u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B744u;
            // 0x26b748: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b744) {
            ctx->pc = 0x26B758u;
            goto label_26b758;
        }
    }
    ctx->pc = 0x26B74Cu;
label_26b74c:
    // 0x26b74c: 0x8c850048  lw          $a1, 0x48($a0)
    ctx->pc = 0x26b74cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
label_26b750:
    // 0x26b750: 0x54a00003  bnel        $a1, $zero, . + 4 + (0x3 << 2)
label_26b754:
    if (ctx->pc == 0x26B754u) {
        ctx->pc = 0x26B754u;
            // 0x26b754: 0x8ca201b4  lw          $v0, 0x1B4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 436)));
        ctx->pc = 0x26B758u;
        goto label_26b758;
    }
    ctx->pc = 0x26B750u;
    {
        const bool branch_taken_0x26b750 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b750) {
            ctx->pc = 0x26B754u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B750u;
            // 0x26b754: 0x8ca201b4  lw          $v0, 0x1B4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 436)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B760u;
            goto label_26b760;
        }
    }
    ctx->pc = 0x26B758u;
label_26b758:
    // 0x26b758: 0x10000014  b           . + 4 + (0x14 << 2)
label_26b75c:
    if (ctx->pc == 0x26B75Cu) {
        ctx->pc = 0x26B75Cu;
            // 0x26b75c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x26B760u;
        goto label_26b760;
    }
    ctx->pc = 0x26B758u;
    {
        const bool branch_taken_0x26b758 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B75Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B758u;
            // 0x26b75c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b758) {
            ctx->pc = 0x26B7ACu;
            goto label_26b7ac;
        }
    }
    ctx->pc = 0x26B760u;
label_26b760:
    // 0x26b760: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x26b760u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_26b764:
    // 0x26b764: 0x24631a80  addiu       $v1, $v1, 0x1A80
    ctx->pc = 0x26b764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 6784));
label_26b768:
    // 0x26b768: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x26b768u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_26b76c:
    // 0x26b76c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x26b76cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_26b770:
    // 0x26b770: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26b770u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_26b774:
    // 0x26b774: 0xace40000  sw          $a0, 0x0($a3)
    ctx->pc = 0x26b774u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 4));
label_26b778:
    // 0x26b778: 0x8ca20188  lw          $v0, 0x188($a1)
    ctx->pc = 0x26b778u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 392)));
label_26b77c:
    // 0x26b77c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_26b780:
    if (ctx->pc == 0x26B780u) {
        ctx->pc = 0x26B780u;
            // 0x26b780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26B784u;
        goto label_26b784;
    }
    ctx->pc = 0x26B77Cu;
    {
        const bool branch_taken_0x26b77c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b77c) {
            ctx->pc = 0x26B780u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26B77Cu;
            // 0x26b780: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x26B7ACu;
            goto label_26b7ac;
        }
    }
    ctx->pc = 0x26B784u;
label_26b784:
    // 0x26b784: 0x8c4203dc  lw          $v0, 0x3DC($v0)
    ctx->pc = 0x26b784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 988)));
label_26b788:
    // 0x26b788: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x26b788u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_26b78c:
    // 0x26b78c: 0x8ca50188  lw          $a1, 0x188($a1)
    ctx->pc = 0x26b78cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 392)));
label_26b790:
    // 0x26b790: 0x8ca203e8  lw          $v0, 0x3E8($a1)
    ctx->pc = 0x26b790u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1000)));
label_26b794:
    // 0x26b794: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_26b798:
    if (ctx->pc == 0x26B798u) {
        ctx->pc = 0x26B798u;
            // 0x26b798: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->pc = 0x26B79Cu;
        goto label_26b79c;
    }
    ctx->pc = 0x26B794u;
    {
        const bool branch_taken_0x26b794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26B798u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B794u;
            // 0x26b798: 0x24e40008  addiu       $a0, $a3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26b794) {
            ctx->pc = 0x26B7A8u;
            goto label_26b7a8;
        }
    }
    ctx->pc = 0x26B79Cu;
label_26b79c:
    // 0x26b79c: 0x24a503e8  addiu       $a1, $a1, 0x3E8
    ctx->pc = 0x26b79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1000));
label_26b7a0:
    // 0x26b7a0: 0xc08b538  jal         func_22D4E0
label_26b7a4:
    if (ctx->pc == 0x26B7A4u) {
        ctx->pc = 0x26B7A4u;
            // 0x26b7a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x26B7A8u;
        goto label_26b7a8;
    }
    ctx->pc = 0x26B7A0u;
    SET_GPR_U32(ctx, 31, 0x26B7A8u);
    ctx->pc = 0x26B7A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7A0u;
            // 0x26b7a4: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B7A8u; }
        if (ctx->pc != 0x26B7A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26B7A8u; }
        if (ctx->pc != 0x26B7A8u) { return; }
    }
    ctx->pc = 0x26B7A8u;
label_26b7a8:
    // 0x26b7a8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26b7a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b7ac:
    // 0x26b7ac: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x26b7acu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26b7b0:
    // 0x26b7b0: 0x3e00008  jr          $ra
label_26b7b4:
    if (ctx->pc == 0x26B7B4u) {
        ctx->pc = 0x26B7B4u;
            // 0x26b7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x26B7B8u;
        goto label_fallthrough_0x26b7b0;
    }
    ctx->pc = 0x26B7B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26B7B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26B7B0u;
            // 0x26b7b4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x26b7b0:
    ctx->pc = 0x26B7B8u;
    ctx->pc = 0x26b7b8u;
}
