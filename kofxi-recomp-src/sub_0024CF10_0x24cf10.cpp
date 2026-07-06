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

// Function: sub_0024CF10
// Address: 0x24cf10 - 0x24d908
void sub_0024CF10_0x24cf10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CF10_0x24cf10");
#endif

    switch (ctx->pc) {
        case 0x24cf10u: goto label_24cf10;
        case 0x24cf14u: goto label_24cf14;
        case 0x24cf18u: goto label_24cf18;
        case 0x24cf1cu: goto label_24cf1c;
        case 0x24cf20u: goto label_24cf20;
        case 0x24cf24u: goto label_24cf24;
        case 0x24cf28u: goto label_24cf28;
        case 0x24cf2cu: goto label_24cf2c;
        case 0x24cf30u: goto label_24cf30;
        case 0x24cf34u: goto label_24cf34;
        case 0x24cf38u: goto label_24cf38;
        case 0x24cf3cu: goto label_24cf3c;
        case 0x24cf40u: goto label_24cf40;
        case 0x24cf44u: goto label_24cf44;
        case 0x24cf48u: goto label_24cf48;
        case 0x24cf4cu: goto label_24cf4c;
        case 0x24cf50u: goto label_24cf50;
        case 0x24cf54u: goto label_24cf54;
        case 0x24cf58u: goto label_24cf58;
        case 0x24cf5cu: goto label_24cf5c;
        case 0x24cf60u: goto label_24cf60;
        case 0x24cf64u: goto label_24cf64;
        case 0x24cf68u: goto label_24cf68;
        case 0x24cf6cu: goto label_24cf6c;
        case 0x24cf70u: goto label_24cf70;
        case 0x24cf74u: goto label_24cf74;
        case 0x24cf78u: goto label_24cf78;
        case 0x24cf7cu: goto label_24cf7c;
        case 0x24cf80u: goto label_24cf80;
        case 0x24cf84u: goto label_24cf84;
        case 0x24cf88u: goto label_24cf88;
        case 0x24cf8cu: goto label_24cf8c;
        case 0x24cf90u: goto label_24cf90;
        case 0x24cf94u: goto label_24cf94;
        case 0x24cf98u: goto label_24cf98;
        case 0x24cf9cu: goto label_24cf9c;
        case 0x24cfa0u: goto label_24cfa0;
        case 0x24cfa4u: goto label_24cfa4;
        case 0x24cfa8u: goto label_24cfa8;
        case 0x24cfacu: goto label_24cfac;
        case 0x24cfb0u: goto label_24cfb0;
        case 0x24cfb4u: goto label_24cfb4;
        case 0x24cfb8u: goto label_24cfb8;
        case 0x24cfbcu: goto label_24cfbc;
        case 0x24cfc0u: goto label_24cfc0;
        case 0x24cfc4u: goto label_24cfc4;
        case 0x24cfc8u: goto label_24cfc8;
        case 0x24cfccu: goto label_24cfcc;
        case 0x24cfd0u: goto label_24cfd0;
        case 0x24cfd4u: goto label_24cfd4;
        case 0x24cfd8u: goto label_24cfd8;
        case 0x24cfdcu: goto label_24cfdc;
        case 0x24cfe0u: goto label_24cfe0;
        case 0x24cfe4u: goto label_24cfe4;
        case 0x24cfe8u: goto label_24cfe8;
        case 0x24cfecu: goto label_24cfec;
        case 0x24cff0u: goto label_24cff0;
        case 0x24cff4u: goto label_24cff4;
        case 0x24cff8u: goto label_24cff8;
        case 0x24cffcu: goto label_24cffc;
        case 0x24d000u: goto label_24d000;
        case 0x24d004u: goto label_24d004;
        case 0x24d008u: goto label_24d008;
        case 0x24d00cu: goto label_24d00c;
        case 0x24d010u: goto label_24d010;
        case 0x24d014u: goto label_24d014;
        case 0x24d018u: goto label_24d018;
        case 0x24d01cu: goto label_24d01c;
        case 0x24d020u: goto label_24d020;
        case 0x24d024u: goto label_24d024;
        case 0x24d028u: goto label_24d028;
        case 0x24d02cu: goto label_24d02c;
        case 0x24d030u: goto label_24d030;
        case 0x24d034u: goto label_24d034;
        case 0x24d038u: goto label_24d038;
        case 0x24d03cu: goto label_24d03c;
        case 0x24d040u: goto label_24d040;
        case 0x24d044u: goto label_24d044;
        case 0x24d048u: goto label_24d048;
        case 0x24d04cu: goto label_24d04c;
        case 0x24d050u: goto label_24d050;
        case 0x24d054u: goto label_24d054;
        case 0x24d058u: goto label_24d058;
        case 0x24d05cu: goto label_24d05c;
        case 0x24d060u: goto label_24d060;
        case 0x24d064u: goto label_24d064;
        case 0x24d068u: goto label_24d068;
        case 0x24d06cu: goto label_24d06c;
        case 0x24d070u: goto label_24d070;
        case 0x24d074u: goto label_24d074;
        case 0x24d078u: goto label_24d078;
        case 0x24d07cu: goto label_24d07c;
        case 0x24d080u: goto label_24d080;
        case 0x24d084u: goto label_24d084;
        case 0x24d088u: goto label_24d088;
        case 0x24d08cu: goto label_24d08c;
        case 0x24d090u: goto label_24d090;
        case 0x24d094u: goto label_24d094;
        case 0x24d098u: goto label_24d098;
        case 0x24d09cu: goto label_24d09c;
        case 0x24d0a0u: goto label_24d0a0;
        case 0x24d0a4u: goto label_24d0a4;
        case 0x24d0a8u: goto label_24d0a8;
        case 0x24d0acu: goto label_24d0ac;
        case 0x24d0b0u: goto label_24d0b0;
        case 0x24d0b4u: goto label_24d0b4;
        case 0x24d0b8u: goto label_24d0b8;
        case 0x24d0bcu: goto label_24d0bc;
        case 0x24d0c0u: goto label_24d0c0;
        case 0x24d0c4u: goto label_24d0c4;
        case 0x24d0c8u: goto label_24d0c8;
        case 0x24d0ccu: goto label_24d0cc;
        case 0x24d0d0u: goto label_24d0d0;
        case 0x24d0d4u: goto label_24d0d4;
        case 0x24d0d8u: goto label_24d0d8;
        case 0x24d0dcu: goto label_24d0dc;
        case 0x24d0e0u: goto label_24d0e0;
        case 0x24d0e4u: goto label_24d0e4;
        case 0x24d0e8u: goto label_24d0e8;
        case 0x24d0ecu: goto label_24d0ec;
        case 0x24d0f0u: goto label_24d0f0;
        case 0x24d0f4u: goto label_24d0f4;
        case 0x24d0f8u: goto label_24d0f8;
        case 0x24d0fcu: goto label_24d0fc;
        case 0x24d100u: goto label_24d100;
        case 0x24d104u: goto label_24d104;
        case 0x24d108u: goto label_24d108;
        case 0x24d10cu: goto label_24d10c;
        case 0x24d110u: goto label_24d110;
        case 0x24d114u: goto label_24d114;
        case 0x24d118u: goto label_24d118;
        case 0x24d11cu: goto label_24d11c;
        case 0x24d120u: goto label_24d120;
        case 0x24d124u: goto label_24d124;
        case 0x24d128u: goto label_24d128;
        case 0x24d12cu: goto label_24d12c;
        case 0x24d130u: goto label_24d130;
        case 0x24d134u: goto label_24d134;
        case 0x24d138u: goto label_24d138;
        case 0x24d13cu: goto label_24d13c;
        case 0x24d140u: goto label_24d140;
        case 0x24d144u: goto label_24d144;
        case 0x24d148u: goto label_24d148;
        case 0x24d14cu: goto label_24d14c;
        case 0x24d150u: goto label_24d150;
        case 0x24d154u: goto label_24d154;
        case 0x24d158u: goto label_24d158;
        case 0x24d15cu: goto label_24d15c;
        case 0x24d160u: goto label_24d160;
        case 0x24d164u: goto label_24d164;
        case 0x24d168u: goto label_24d168;
        case 0x24d16cu: goto label_24d16c;
        case 0x24d170u: goto label_24d170;
        case 0x24d174u: goto label_24d174;
        case 0x24d178u: goto label_24d178;
        case 0x24d17cu: goto label_24d17c;
        case 0x24d180u: goto label_24d180;
        case 0x24d184u: goto label_24d184;
        case 0x24d188u: goto label_24d188;
        case 0x24d18cu: goto label_24d18c;
        case 0x24d190u: goto label_24d190;
        case 0x24d194u: goto label_24d194;
        case 0x24d198u: goto label_24d198;
        case 0x24d19cu: goto label_24d19c;
        case 0x24d1a0u: goto label_24d1a0;
        case 0x24d1a4u: goto label_24d1a4;
        case 0x24d1a8u: goto label_24d1a8;
        case 0x24d1acu: goto label_24d1ac;
        case 0x24d1b0u: goto label_24d1b0;
        case 0x24d1b4u: goto label_24d1b4;
        case 0x24d1b8u: goto label_24d1b8;
        case 0x24d1bcu: goto label_24d1bc;
        case 0x24d1c0u: goto label_24d1c0;
        case 0x24d1c4u: goto label_24d1c4;
        case 0x24d1c8u: goto label_24d1c8;
        case 0x24d1ccu: goto label_24d1cc;
        case 0x24d1d0u: goto label_24d1d0;
        case 0x24d1d4u: goto label_24d1d4;
        case 0x24d1d8u: goto label_24d1d8;
        case 0x24d1dcu: goto label_24d1dc;
        case 0x24d1e0u: goto label_24d1e0;
        case 0x24d1e4u: goto label_24d1e4;
        case 0x24d1e8u: goto label_24d1e8;
        case 0x24d1ecu: goto label_24d1ec;
        case 0x24d1f0u: goto label_24d1f0;
        case 0x24d1f4u: goto label_24d1f4;
        case 0x24d1f8u: goto label_24d1f8;
        case 0x24d1fcu: goto label_24d1fc;
        case 0x24d200u: goto label_24d200;
        case 0x24d204u: goto label_24d204;
        case 0x24d208u: goto label_24d208;
        case 0x24d20cu: goto label_24d20c;
        case 0x24d210u: goto label_24d210;
        case 0x24d214u: goto label_24d214;
        case 0x24d218u: goto label_24d218;
        case 0x24d21cu: goto label_24d21c;
        case 0x24d220u: goto label_24d220;
        case 0x24d224u: goto label_24d224;
        case 0x24d228u: goto label_24d228;
        case 0x24d22cu: goto label_24d22c;
        case 0x24d230u: goto label_24d230;
        case 0x24d234u: goto label_24d234;
        case 0x24d238u: goto label_24d238;
        case 0x24d23cu: goto label_24d23c;
        case 0x24d240u: goto label_24d240;
        case 0x24d244u: goto label_24d244;
        case 0x24d248u: goto label_24d248;
        case 0x24d24cu: goto label_24d24c;
        case 0x24d250u: goto label_24d250;
        case 0x24d254u: goto label_24d254;
        case 0x24d258u: goto label_24d258;
        case 0x24d25cu: goto label_24d25c;
        case 0x24d260u: goto label_24d260;
        case 0x24d264u: goto label_24d264;
        case 0x24d268u: goto label_24d268;
        case 0x24d26cu: goto label_24d26c;
        case 0x24d270u: goto label_24d270;
        case 0x24d274u: goto label_24d274;
        case 0x24d278u: goto label_24d278;
        case 0x24d27cu: goto label_24d27c;
        case 0x24d280u: goto label_24d280;
        case 0x24d284u: goto label_24d284;
        case 0x24d288u: goto label_24d288;
        case 0x24d28cu: goto label_24d28c;
        case 0x24d290u: goto label_24d290;
        case 0x24d294u: goto label_24d294;
        case 0x24d298u: goto label_24d298;
        case 0x24d29cu: goto label_24d29c;
        case 0x24d2a0u: goto label_24d2a0;
        case 0x24d2a4u: goto label_24d2a4;
        case 0x24d2a8u: goto label_24d2a8;
        case 0x24d2acu: goto label_24d2ac;
        case 0x24d2b0u: goto label_24d2b0;
        case 0x24d2b4u: goto label_24d2b4;
        case 0x24d2b8u: goto label_24d2b8;
        case 0x24d2bcu: goto label_24d2bc;
        case 0x24d2c0u: goto label_24d2c0;
        case 0x24d2c4u: goto label_24d2c4;
        case 0x24d2c8u: goto label_24d2c8;
        case 0x24d2ccu: goto label_24d2cc;
        case 0x24d2d0u: goto label_24d2d0;
        case 0x24d2d4u: goto label_24d2d4;
        case 0x24d2d8u: goto label_24d2d8;
        case 0x24d2dcu: goto label_24d2dc;
        case 0x24d2e0u: goto label_24d2e0;
        case 0x24d2e4u: goto label_24d2e4;
        case 0x24d2e8u: goto label_24d2e8;
        case 0x24d2ecu: goto label_24d2ec;
        case 0x24d2f0u: goto label_24d2f0;
        case 0x24d2f4u: goto label_24d2f4;
        case 0x24d2f8u: goto label_24d2f8;
        case 0x24d2fcu: goto label_24d2fc;
        case 0x24d300u: goto label_24d300;
        case 0x24d304u: goto label_24d304;
        case 0x24d308u: goto label_24d308;
        case 0x24d30cu: goto label_24d30c;
        case 0x24d310u: goto label_24d310;
        case 0x24d314u: goto label_24d314;
        case 0x24d318u: goto label_24d318;
        case 0x24d31cu: goto label_24d31c;
        case 0x24d320u: goto label_24d320;
        case 0x24d324u: goto label_24d324;
        case 0x24d328u: goto label_24d328;
        case 0x24d32cu: goto label_24d32c;
        case 0x24d330u: goto label_24d330;
        case 0x24d334u: goto label_24d334;
        case 0x24d338u: goto label_24d338;
        case 0x24d33cu: goto label_24d33c;
        case 0x24d340u: goto label_24d340;
        case 0x24d344u: goto label_24d344;
        case 0x24d348u: goto label_24d348;
        case 0x24d34cu: goto label_24d34c;
        case 0x24d350u: goto label_24d350;
        case 0x24d354u: goto label_24d354;
        case 0x24d358u: goto label_24d358;
        case 0x24d35cu: goto label_24d35c;
        case 0x24d360u: goto label_24d360;
        case 0x24d364u: goto label_24d364;
        case 0x24d368u: goto label_24d368;
        case 0x24d36cu: goto label_24d36c;
        case 0x24d370u: goto label_24d370;
        case 0x24d374u: goto label_24d374;
        case 0x24d378u: goto label_24d378;
        case 0x24d37cu: goto label_24d37c;
        case 0x24d380u: goto label_24d380;
        case 0x24d384u: goto label_24d384;
        case 0x24d388u: goto label_24d388;
        case 0x24d38cu: goto label_24d38c;
        case 0x24d390u: goto label_24d390;
        case 0x24d394u: goto label_24d394;
        case 0x24d398u: goto label_24d398;
        case 0x24d39cu: goto label_24d39c;
        case 0x24d3a0u: goto label_24d3a0;
        case 0x24d3a4u: goto label_24d3a4;
        case 0x24d3a8u: goto label_24d3a8;
        case 0x24d3acu: goto label_24d3ac;
        case 0x24d3b0u: goto label_24d3b0;
        case 0x24d3b4u: goto label_24d3b4;
        case 0x24d3b8u: goto label_24d3b8;
        case 0x24d3bcu: goto label_24d3bc;
        case 0x24d3c0u: goto label_24d3c0;
        case 0x24d3c4u: goto label_24d3c4;
        case 0x24d3c8u: goto label_24d3c8;
        case 0x24d3ccu: goto label_24d3cc;
        case 0x24d3d0u: goto label_24d3d0;
        case 0x24d3d4u: goto label_24d3d4;
        case 0x24d3d8u: goto label_24d3d8;
        case 0x24d3dcu: goto label_24d3dc;
        case 0x24d3e0u: goto label_24d3e0;
        case 0x24d3e4u: goto label_24d3e4;
        case 0x24d3e8u: goto label_24d3e8;
        case 0x24d3ecu: goto label_24d3ec;
        case 0x24d3f0u: goto label_24d3f0;
        case 0x24d3f4u: goto label_24d3f4;
        case 0x24d3f8u: goto label_24d3f8;
        case 0x24d3fcu: goto label_24d3fc;
        case 0x24d400u: goto label_24d400;
        case 0x24d404u: goto label_24d404;
        case 0x24d408u: goto label_24d408;
        case 0x24d40cu: goto label_24d40c;
        case 0x24d410u: goto label_24d410;
        case 0x24d414u: goto label_24d414;
        case 0x24d418u: goto label_24d418;
        case 0x24d41cu: goto label_24d41c;
        case 0x24d420u: goto label_24d420;
        case 0x24d424u: goto label_24d424;
        case 0x24d428u: goto label_24d428;
        case 0x24d42cu: goto label_24d42c;
        case 0x24d430u: goto label_24d430;
        case 0x24d434u: goto label_24d434;
        case 0x24d438u: goto label_24d438;
        case 0x24d43cu: goto label_24d43c;
        case 0x24d440u: goto label_24d440;
        case 0x24d444u: goto label_24d444;
        case 0x24d448u: goto label_24d448;
        case 0x24d44cu: goto label_24d44c;
        case 0x24d450u: goto label_24d450;
        case 0x24d454u: goto label_24d454;
        case 0x24d458u: goto label_24d458;
        case 0x24d45cu: goto label_24d45c;
        case 0x24d460u: goto label_24d460;
        case 0x24d464u: goto label_24d464;
        case 0x24d468u: goto label_24d468;
        case 0x24d46cu: goto label_24d46c;
        case 0x24d470u: goto label_24d470;
        case 0x24d474u: goto label_24d474;
        case 0x24d478u: goto label_24d478;
        case 0x24d47cu: goto label_24d47c;
        case 0x24d480u: goto label_24d480;
        case 0x24d484u: goto label_24d484;
        case 0x24d488u: goto label_24d488;
        case 0x24d48cu: goto label_24d48c;
        case 0x24d490u: goto label_24d490;
        case 0x24d494u: goto label_24d494;
        case 0x24d498u: goto label_24d498;
        case 0x24d49cu: goto label_24d49c;
        case 0x24d4a0u: goto label_24d4a0;
        case 0x24d4a4u: goto label_24d4a4;
        case 0x24d4a8u: goto label_24d4a8;
        case 0x24d4acu: goto label_24d4ac;
        case 0x24d4b0u: goto label_24d4b0;
        case 0x24d4b4u: goto label_24d4b4;
        case 0x24d4b8u: goto label_24d4b8;
        case 0x24d4bcu: goto label_24d4bc;
        case 0x24d4c0u: goto label_24d4c0;
        case 0x24d4c4u: goto label_24d4c4;
        case 0x24d4c8u: goto label_24d4c8;
        case 0x24d4ccu: goto label_24d4cc;
        case 0x24d4d0u: goto label_24d4d0;
        case 0x24d4d4u: goto label_24d4d4;
        case 0x24d4d8u: goto label_24d4d8;
        case 0x24d4dcu: goto label_24d4dc;
        case 0x24d4e0u: goto label_24d4e0;
        case 0x24d4e4u: goto label_24d4e4;
        case 0x24d4e8u: goto label_24d4e8;
        case 0x24d4ecu: goto label_24d4ec;
        case 0x24d4f0u: goto label_24d4f0;
        case 0x24d4f4u: goto label_24d4f4;
        case 0x24d4f8u: goto label_24d4f8;
        case 0x24d4fcu: goto label_24d4fc;
        case 0x24d500u: goto label_24d500;
        case 0x24d504u: goto label_24d504;
        case 0x24d508u: goto label_24d508;
        case 0x24d50cu: goto label_24d50c;
        case 0x24d510u: goto label_24d510;
        case 0x24d514u: goto label_24d514;
        case 0x24d518u: goto label_24d518;
        case 0x24d51cu: goto label_24d51c;
        case 0x24d520u: goto label_24d520;
        case 0x24d524u: goto label_24d524;
        case 0x24d528u: goto label_24d528;
        case 0x24d52cu: goto label_24d52c;
        case 0x24d530u: goto label_24d530;
        case 0x24d534u: goto label_24d534;
        case 0x24d538u: goto label_24d538;
        case 0x24d53cu: goto label_24d53c;
        case 0x24d540u: goto label_24d540;
        case 0x24d544u: goto label_24d544;
        case 0x24d548u: goto label_24d548;
        case 0x24d54cu: goto label_24d54c;
        case 0x24d550u: goto label_24d550;
        case 0x24d554u: goto label_24d554;
        case 0x24d558u: goto label_24d558;
        case 0x24d55cu: goto label_24d55c;
        case 0x24d560u: goto label_24d560;
        case 0x24d564u: goto label_24d564;
        case 0x24d568u: goto label_24d568;
        case 0x24d56cu: goto label_24d56c;
        case 0x24d570u: goto label_24d570;
        case 0x24d574u: goto label_24d574;
        case 0x24d578u: goto label_24d578;
        case 0x24d57cu: goto label_24d57c;
        case 0x24d580u: goto label_24d580;
        case 0x24d584u: goto label_24d584;
        case 0x24d588u: goto label_24d588;
        case 0x24d58cu: goto label_24d58c;
        case 0x24d590u: goto label_24d590;
        case 0x24d594u: goto label_24d594;
        case 0x24d598u: goto label_24d598;
        case 0x24d59cu: goto label_24d59c;
        case 0x24d5a0u: goto label_24d5a0;
        case 0x24d5a4u: goto label_24d5a4;
        case 0x24d5a8u: goto label_24d5a8;
        case 0x24d5acu: goto label_24d5ac;
        case 0x24d5b0u: goto label_24d5b0;
        case 0x24d5b4u: goto label_24d5b4;
        case 0x24d5b8u: goto label_24d5b8;
        case 0x24d5bcu: goto label_24d5bc;
        case 0x24d5c0u: goto label_24d5c0;
        case 0x24d5c4u: goto label_24d5c4;
        case 0x24d5c8u: goto label_24d5c8;
        case 0x24d5ccu: goto label_24d5cc;
        case 0x24d5d0u: goto label_24d5d0;
        case 0x24d5d4u: goto label_24d5d4;
        case 0x24d5d8u: goto label_24d5d8;
        case 0x24d5dcu: goto label_24d5dc;
        case 0x24d5e0u: goto label_24d5e0;
        case 0x24d5e4u: goto label_24d5e4;
        case 0x24d5e8u: goto label_24d5e8;
        case 0x24d5ecu: goto label_24d5ec;
        case 0x24d5f0u: goto label_24d5f0;
        case 0x24d5f4u: goto label_24d5f4;
        case 0x24d5f8u: goto label_24d5f8;
        case 0x24d5fcu: goto label_24d5fc;
        case 0x24d600u: goto label_24d600;
        case 0x24d604u: goto label_24d604;
        case 0x24d608u: goto label_24d608;
        case 0x24d60cu: goto label_24d60c;
        case 0x24d610u: goto label_24d610;
        case 0x24d614u: goto label_24d614;
        case 0x24d618u: goto label_24d618;
        case 0x24d61cu: goto label_24d61c;
        case 0x24d620u: goto label_24d620;
        case 0x24d624u: goto label_24d624;
        case 0x24d628u: goto label_24d628;
        case 0x24d62cu: goto label_24d62c;
        case 0x24d630u: goto label_24d630;
        case 0x24d634u: goto label_24d634;
        case 0x24d638u: goto label_24d638;
        case 0x24d63cu: goto label_24d63c;
        case 0x24d640u: goto label_24d640;
        case 0x24d644u: goto label_24d644;
        case 0x24d648u: goto label_24d648;
        case 0x24d64cu: goto label_24d64c;
        case 0x24d650u: goto label_24d650;
        case 0x24d654u: goto label_24d654;
        case 0x24d658u: goto label_24d658;
        case 0x24d65cu: goto label_24d65c;
        case 0x24d660u: goto label_24d660;
        case 0x24d664u: goto label_24d664;
        case 0x24d668u: goto label_24d668;
        case 0x24d66cu: goto label_24d66c;
        case 0x24d670u: goto label_24d670;
        case 0x24d674u: goto label_24d674;
        case 0x24d678u: goto label_24d678;
        case 0x24d67cu: goto label_24d67c;
        case 0x24d680u: goto label_24d680;
        case 0x24d684u: goto label_24d684;
        case 0x24d688u: goto label_24d688;
        case 0x24d68cu: goto label_24d68c;
        case 0x24d690u: goto label_24d690;
        case 0x24d694u: goto label_24d694;
        case 0x24d698u: goto label_24d698;
        case 0x24d69cu: goto label_24d69c;
        case 0x24d6a0u: goto label_24d6a0;
        case 0x24d6a4u: goto label_24d6a4;
        case 0x24d6a8u: goto label_24d6a8;
        case 0x24d6acu: goto label_24d6ac;
        case 0x24d6b0u: goto label_24d6b0;
        case 0x24d6b4u: goto label_24d6b4;
        case 0x24d6b8u: goto label_24d6b8;
        case 0x24d6bcu: goto label_24d6bc;
        case 0x24d6c0u: goto label_24d6c0;
        case 0x24d6c4u: goto label_24d6c4;
        case 0x24d6c8u: goto label_24d6c8;
        case 0x24d6ccu: goto label_24d6cc;
        case 0x24d6d0u: goto label_24d6d0;
        case 0x24d6d4u: goto label_24d6d4;
        case 0x24d6d8u: goto label_24d6d8;
        case 0x24d6dcu: goto label_24d6dc;
        case 0x24d6e0u: goto label_24d6e0;
        case 0x24d6e4u: goto label_24d6e4;
        case 0x24d6e8u: goto label_24d6e8;
        case 0x24d6ecu: goto label_24d6ec;
        case 0x24d6f0u: goto label_24d6f0;
        case 0x24d6f4u: goto label_24d6f4;
        case 0x24d6f8u: goto label_24d6f8;
        case 0x24d6fcu: goto label_24d6fc;
        case 0x24d700u: goto label_24d700;
        case 0x24d704u: goto label_24d704;
        case 0x24d708u: goto label_24d708;
        case 0x24d70cu: goto label_24d70c;
        case 0x24d710u: goto label_24d710;
        case 0x24d714u: goto label_24d714;
        case 0x24d718u: goto label_24d718;
        case 0x24d71cu: goto label_24d71c;
        case 0x24d720u: goto label_24d720;
        case 0x24d724u: goto label_24d724;
        case 0x24d728u: goto label_24d728;
        case 0x24d72cu: goto label_24d72c;
        case 0x24d730u: goto label_24d730;
        case 0x24d734u: goto label_24d734;
        case 0x24d738u: goto label_24d738;
        case 0x24d73cu: goto label_24d73c;
        case 0x24d740u: goto label_24d740;
        case 0x24d744u: goto label_24d744;
        case 0x24d748u: goto label_24d748;
        case 0x24d74cu: goto label_24d74c;
        case 0x24d750u: goto label_24d750;
        case 0x24d754u: goto label_24d754;
        case 0x24d758u: goto label_24d758;
        case 0x24d75cu: goto label_24d75c;
        case 0x24d760u: goto label_24d760;
        case 0x24d764u: goto label_24d764;
        case 0x24d768u: goto label_24d768;
        case 0x24d76cu: goto label_24d76c;
        case 0x24d770u: goto label_24d770;
        case 0x24d774u: goto label_24d774;
        case 0x24d778u: goto label_24d778;
        case 0x24d77cu: goto label_24d77c;
        case 0x24d780u: goto label_24d780;
        case 0x24d784u: goto label_24d784;
        case 0x24d788u: goto label_24d788;
        case 0x24d78cu: goto label_24d78c;
        case 0x24d790u: goto label_24d790;
        case 0x24d794u: goto label_24d794;
        case 0x24d798u: goto label_24d798;
        case 0x24d79cu: goto label_24d79c;
        case 0x24d7a0u: goto label_24d7a0;
        case 0x24d7a4u: goto label_24d7a4;
        case 0x24d7a8u: goto label_24d7a8;
        case 0x24d7acu: goto label_24d7ac;
        case 0x24d7b0u: goto label_24d7b0;
        case 0x24d7b4u: goto label_24d7b4;
        case 0x24d7b8u: goto label_24d7b8;
        case 0x24d7bcu: goto label_24d7bc;
        case 0x24d7c0u: goto label_24d7c0;
        case 0x24d7c4u: goto label_24d7c4;
        case 0x24d7c8u: goto label_24d7c8;
        case 0x24d7ccu: goto label_24d7cc;
        case 0x24d7d0u: goto label_24d7d0;
        case 0x24d7d4u: goto label_24d7d4;
        case 0x24d7d8u: goto label_24d7d8;
        case 0x24d7dcu: goto label_24d7dc;
        case 0x24d7e0u: goto label_24d7e0;
        case 0x24d7e4u: goto label_24d7e4;
        case 0x24d7e8u: goto label_24d7e8;
        case 0x24d7ecu: goto label_24d7ec;
        case 0x24d7f0u: goto label_24d7f0;
        case 0x24d7f4u: goto label_24d7f4;
        case 0x24d7f8u: goto label_24d7f8;
        case 0x24d7fcu: goto label_24d7fc;
        case 0x24d800u: goto label_24d800;
        case 0x24d804u: goto label_24d804;
        case 0x24d808u: goto label_24d808;
        case 0x24d80cu: goto label_24d80c;
        case 0x24d810u: goto label_24d810;
        case 0x24d814u: goto label_24d814;
        case 0x24d818u: goto label_24d818;
        case 0x24d81cu: goto label_24d81c;
        case 0x24d820u: goto label_24d820;
        case 0x24d824u: goto label_24d824;
        case 0x24d828u: goto label_24d828;
        case 0x24d82cu: goto label_24d82c;
        case 0x24d830u: goto label_24d830;
        case 0x24d834u: goto label_24d834;
        case 0x24d838u: goto label_24d838;
        case 0x24d83cu: goto label_24d83c;
        case 0x24d840u: goto label_24d840;
        case 0x24d844u: goto label_24d844;
        case 0x24d848u: goto label_24d848;
        case 0x24d84cu: goto label_24d84c;
        case 0x24d850u: goto label_24d850;
        case 0x24d854u: goto label_24d854;
        case 0x24d858u: goto label_24d858;
        case 0x24d85cu: goto label_24d85c;
        case 0x24d860u: goto label_24d860;
        case 0x24d864u: goto label_24d864;
        case 0x24d868u: goto label_24d868;
        case 0x24d86cu: goto label_24d86c;
        case 0x24d870u: goto label_24d870;
        case 0x24d874u: goto label_24d874;
        case 0x24d878u: goto label_24d878;
        case 0x24d87cu: goto label_24d87c;
        case 0x24d880u: goto label_24d880;
        case 0x24d884u: goto label_24d884;
        case 0x24d888u: goto label_24d888;
        case 0x24d88cu: goto label_24d88c;
        case 0x24d890u: goto label_24d890;
        case 0x24d894u: goto label_24d894;
        case 0x24d898u: goto label_24d898;
        case 0x24d89cu: goto label_24d89c;
        case 0x24d8a0u: goto label_24d8a0;
        case 0x24d8a4u: goto label_24d8a4;
        case 0x24d8a8u: goto label_24d8a8;
        case 0x24d8acu: goto label_24d8ac;
        case 0x24d8b0u: goto label_24d8b0;
        case 0x24d8b4u: goto label_24d8b4;
        case 0x24d8b8u: goto label_24d8b8;
        case 0x24d8bcu: goto label_24d8bc;
        case 0x24d8c0u: goto label_24d8c0;
        case 0x24d8c4u: goto label_24d8c4;
        case 0x24d8c8u: goto label_24d8c8;
        case 0x24d8ccu: goto label_24d8cc;
        case 0x24d8d0u: goto label_24d8d0;
        case 0x24d8d4u: goto label_24d8d4;
        case 0x24d8d8u: goto label_24d8d8;
        case 0x24d8dcu: goto label_24d8dc;
        case 0x24d8e0u: goto label_24d8e0;
        case 0x24d8e4u: goto label_24d8e4;
        case 0x24d8e8u: goto label_24d8e8;
        case 0x24d8ecu: goto label_24d8ec;
        case 0x24d8f0u: goto label_24d8f0;
        case 0x24d8f4u: goto label_24d8f4;
        case 0x24d8f8u: goto label_24d8f8;
        case 0x24d8fcu: goto label_24d8fc;
        case 0x24d900u: goto label_24d900;
        case 0x24d904u: goto label_24d904;
        default: break;
    }

    ctx->pc = 0x24cf10u;

label_24cf10:
    // 0x24cf10: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x24cf10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_24cf14:
    // 0x24cf14: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x24cf14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_24cf18:
    // 0x24cf18: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x24cf18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_24cf1c:
    // 0x24cf1c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x24cf1cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_24cf20:
    // 0x24cf20: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24cf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_24cf24:
    // 0x24cf24: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x24cf24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24cf28:
    // 0x24cf28: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24cf28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_24cf2c:
    // 0x24cf2c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x24cf2cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_24cf30:
    // 0x24cf30: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24cf30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_24cf34:
    // 0x24cf34: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x24cf34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24cf38:
    // 0x24cf38: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x24cf38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_24cf3c:
    // 0x24cf3c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24cf3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_24cf40:
    // 0x24cf40: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24cf40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_24cf44:
    // 0x24cf44: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24cf44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_24cf48:
    // 0x24cf48: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24cf48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_24cf4c:
    // 0x24cf4c: 0x8ed20008  lw          $s2, 0x8($s6)
    ctx->pc = 0x24cf4cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
label_24cf50:
    // 0x24cf50: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x24cf50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_24cf54:
    // 0x24cf54: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x24cf54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
label_24cf58:
    // 0x24cf58: 0x92420000  lbu         $v0, 0x0($s2)
    ctx->pc = 0x24cf58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_24cf5c:
    // 0x24cf5c: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x24cf5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_24cf60:
    // 0x24cf60: 0x12a50005  beq         $s5, $a1, . + 4 + (0x5 << 2)
label_24cf64:
    if (ctx->pc == 0x24CF64u) {
        ctx->pc = 0x24CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF60u;
        // 0x24cf64: 0x28880  sll         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF68u;
        goto label_24cf68;
    }
    ctx->pc = 0x24CF60u;
    {
        const bool branch_taken_0x24cf60 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 5));
        ctx->pc = 0x24CF64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF60u;
        // 0x24cf64: 0x28880  sll         $s1, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cf60) {
            ctx->pc = 0x24CF78u;
            goto label_24cf78;
        }
    }
    ctx->pc = 0x24CF68u;
label_24cf68:
    // 0x24cf68: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24cf68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_24cf6c:
    // 0x24cf6c: 0xdc620e98  ld          $v0, 0xE98($v1)
    ctx->pc = 0x24cf6cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 3736)));
label_24cf70:
    // 0x24cf70: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24cf70u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24cf74:
    // 0x24cf74: 0xfc620e98  sd          $v0, 0xE98($v1)
    ctx->pc = 0x24cf74u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 3736), GPR_U64(ctx, 2));
label_24cf78:
    // 0x24cf78: 0x96c40012  lhu         $a0, 0x12($s6)
    ctx->pc = 0x24cf78u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 22), 18)));
label_24cf7c:
    // 0x24cf7c: 0x30820020  andi        $v0, $a0, 0x20
    ctx->pc = 0x24cf7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
label_24cf80:
    // 0x24cf80: 0x544000fa  bnel        $v0, $zero, . + 4 + (0xFA << 2)
label_24cf84:
    if (ctx->pc == 0x24CF84u) {
        ctx->pc = 0x24CF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CF80u;
        // 0x24cf84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CF88u;
        goto label_24cf88;
    }
    ctx->pc = 0x24CF80u;
    {
        const bool branch_taken_0x24cf80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cf80) {
            ctx->pc = 0x24CF84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CF80u;
            // 0x24cf84: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D36Cu;
            goto label_24d36c;
        }
    }
    ctx->pc = 0x24CF88u;
label_24cf88:
    // 0x24cf88: 0x92420007  lbu         $v0, 0x7($s2)
    ctx->pc = 0x24cf88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_24cf8c:
    // 0x24cf8c: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x24cf8cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_24cf90:
    // 0x24cf90: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24cf90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_24cf94:
    // 0x24cf94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24cf94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_24cf98:
    // 0x24cf98: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24cf98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_24cf9c:
    // 0x24cf9c: 0x30429fff  andi        $v0, $v0, 0x9FFF
    ctx->pc = 0x24cf9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)40959);
label_24cfa0:
    // 0x24cfa0: 0x544000f2  bnel        $v0, $zero, . + 4 + (0xF2 << 2)
label_24cfa4:
    if (ctx->pc == 0x24CFA4u) {
        ctx->pc = 0x24CFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFA0u;
        // 0x24cfa4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFA8u;
        goto label_24cfa8;
    }
    ctx->pc = 0x24CFA0u;
    {
        const bool branch_taken_0x24cfa0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24cfa0) {
            ctx->pc = 0x24CFA4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24CFA0u;
            // 0x24cfa4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D36Cu;
            goto label_24d36c;
        }
    }
    ctx->pc = 0x24CFA8u;
label_24cfa8:
    // 0x24cfa8: 0x92430009  lbu         $v1, 0x9($s2)
    ctx->pc = 0x24cfa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 9)));
label_24cfac:
    // 0x24cfac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x24cfacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24cfb0:
    // 0x24cfb0: 0x14620023  bne         $v1, $v0, . + 4 + (0x23 << 2)
label_24cfb4:
    if (ctx->pc == 0x24CFB4u) {
        ctx->pc = 0x24CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFB0u;
        // 0x24cfb4: 0x30820300  andi        $v0, $a0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFB8u;
        goto label_24cfb8;
    }
    ctx->pc = 0x24CFB0u;
    {
        const bool branch_taken_0x24cfb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x24CFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFB0u;
        // 0x24cfb4: 0x30820300  andi        $v0, $a0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfb0) {
            ctx->pc = 0x24D040u;
            goto label_24d040;
        }
    }
    ctx->pc = 0x24CFB8u;
label_24cfb8:
    // 0x24cfb8: 0x12a50021  beq         $s5, $a1, . + 4 + (0x21 << 2)
label_24cfbc:
    if (ctx->pc == 0x24CFBCu) {
        ctx->pc = 0x24CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFB8u;
        // 0x24cfbc: 0x26230008  addiu       $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFC0u;
        goto label_24cfc0;
    }
    ctx->pc = 0x24CFB8u;
    {
        const bool branch_taken_0x24cfb8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 5));
        ctx->pc = 0x24CFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFB8u;
        // 0x24cfbc: 0x26230008  addiu       $v1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfb8) {
            ctx->pc = 0x24D040u;
            goto label_24d040;
        }
    }
    ctx->pc = 0x24CFC0u;
label_24cfc0:
    // 0x24cfc0: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x24cfc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
label_24cfc4:
    // 0x24cfc4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x24cfc4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_24cfc8:
    // 0x24cfc8: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_24cfcc:
    if (ctx->pc == 0x24CFCCu) {
        ctx->pc = 0x24CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFC8u;
        // 0x24cfcc: 0x30820300  andi        $v0, $a0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFD0u;
        goto label_24cfd0;
    }
    ctx->pc = 0x24CFC8u;
    {
        const bool branch_taken_0x24cfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24CFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFC8u;
        // 0x24cfcc: 0x30820300  andi        $v0, $a0, 0x300 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfc8) {
            ctx->pc = 0x24D040u;
            goto label_24d040;
        }
    }
    ctx->pc = 0x24CFD0u;
label_24cfd0:
    // 0x24cfd0: 0x2511021  addu        $v0, $s2, $s1
    ctx->pc = 0x24cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 17)));
label_24cfd4:
    // 0x24cfd4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x24cfd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_24cfd8:
    // 0x24cfd8: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
label_24cfdc:
    if (ctx->pc == 0x24CFDCu) {
        ctx->pc = 0x24CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFD8u;
        // 0x24cfdc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFE0u;
        goto label_24cfe0;
    }
    ctx->pc = 0x24CFD8u;
    {
        const bool branch_taken_0x24cfd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFD8u;
        // 0x24cfdc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfd8) {
            ctx->pc = 0x24D03Cu;
            goto label_24d03c;
        }
    }
    ctx->pc = 0x24CFE0u;
label_24cfe0:
    // 0x24cfe0: 0x10620016  beq         $v1, $v0, . + 4 + (0x16 << 2)
label_24cfe4:
    if (ctx->pc == 0x24CFE4u) {
        ctx->pc = 0x24CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFE0u;
        // 0x24cfe4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFE8u;
        goto label_24cfe8;
    }
    ctx->pc = 0x24CFE0u;
    {
        const bool branch_taken_0x24cfe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFE0u;
        // 0x24cfe4: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfe0) {
            ctx->pc = 0x24D03Cu;
            goto label_24d03c;
        }
    }
    ctx->pc = 0x24CFE8u;
label_24cfe8:
    // 0x24cfe8: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
label_24cfec:
    if (ctx->pc == 0x24CFECu) {
        ctx->pc = 0x24CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFE8u;
        // 0x24cfec: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFF0u;
        goto label_24cff0;
    }
    ctx->pc = 0x24CFE8u;
    {
        const bool branch_taken_0x24cfe8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFE8u;
        // 0x24cfec: 0x2402000a  addiu       $v0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cfe8) {
            ctx->pc = 0x24D03Cu;
            goto label_24d03c;
        }
    }
    ctx->pc = 0x24CFF0u;
label_24cff0:
    // 0x24cff0: 0x10620012  beq         $v1, $v0, . + 4 + (0x12 << 2)
label_24cff4:
    if (ctx->pc == 0x24CFF4u) {
        ctx->pc = 0x24CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFF0u;
        // 0x24cff4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24CFF8u;
        goto label_24cff8;
    }
    ctx->pc = 0x24CFF0u;
    {
        const bool branch_taken_0x24cff0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFF0u;
        // 0x24cff4: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cff0) {
            ctx->pc = 0x24D03Cu;
            goto label_24d03c;
        }
    }
    ctx->pc = 0x24CFF8u;
label_24cff8:
    // 0x24cff8: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_24cffc:
    if (ctx->pc == 0x24CFFCu) {
        ctx->pc = 0x24CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFF8u;
        // 0x24cffc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D000u;
        goto label_24d000;
    }
    ctx->pc = 0x24CFF8u;
    {
        const bool branch_taken_0x24cff8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24CFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CFF8u;
        // 0x24cffc: 0x2402000e  addiu       $v0, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cff8) {
            ctx->pc = 0x24D03Cu;
            goto label_24d03c;
        }
    }
    ctx->pc = 0x24D000u;
label_24d000:
    // 0x24d000: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_24d004:
    if (ctx->pc == 0x24D004u) {
        ctx->pc = 0x24D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D000u;
        // 0x24d004: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D008u;
        goto label_24d008;
    }
    ctx->pc = 0x24D000u;
    {
        const bool branch_taken_0x24d000 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D000u;
        // 0x24d004: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d000) {
            ctx->pc = 0x24D03Cu;
            goto label_24d03c;
        }
    }
    ctx->pc = 0x24D008u;
label_24d008:
    // 0x24d008: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_24d00c:
    if (ctx->pc == 0x24D00Cu) {
        ctx->pc = 0x24D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D008u;
        // 0x24d00c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D010u;
        goto label_24d010;
    }
    ctx->pc = 0x24D008u;
    {
        const bool branch_taken_0x24d008 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D008u;
        // 0x24d00c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d008) {
            ctx->pc = 0x24D03Cu;
            goto label_24d03c;
        }
    }
    ctx->pc = 0x24D010u;
label_24d010:
    // 0x24d010: 0x1062000a  beq         $v1, $v0, . + 4 + (0xA << 2)
label_24d014:
    if (ctx->pc == 0x24D014u) {
        ctx->pc = 0x24D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D010u;
        // 0x24d014: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D018u;
        goto label_24d018;
    }
    ctx->pc = 0x24D010u;
    {
        const bool branch_taken_0x24d010 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D010u;
        // 0x24d014: 0x24020011  addiu       $v0, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d010) {
            ctx->pc = 0x24D03Cu;
            goto label_24d03c;
        }
    }
    ctx->pc = 0x24D018u;
label_24d018:
    // 0x24d018: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_24d01c:
    if (ctx->pc == 0x24D01Cu) {
        ctx->pc = 0x24D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D018u;
        // 0x24d01c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D020u;
        goto label_24d020;
    }
    ctx->pc = 0x24D018u;
    {
        const bool branch_taken_0x24d018 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D018u;
        // 0x24d01c: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d018) {
            ctx->pc = 0x24D03Cu;
            goto label_24d03c;
        }
    }
    ctx->pc = 0x24D020u;
label_24d020:
    // 0x24d020: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
label_24d024:
    if (ctx->pc == 0x24D024u) {
        ctx->pc = 0x24D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D020u;
        // 0x24d024: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D028u;
        goto label_24d028;
    }
    ctx->pc = 0x24D020u;
    {
        const bool branch_taken_0x24d020 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D020u;
        // 0x24d024: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d020) {
            ctx->pc = 0x24D03Cu;
            goto label_24d03c;
        }
    }
    ctx->pc = 0x24D028u;
label_24d028:
    // 0x24d028: 0x24630e98  addiu       $v1, $v1, 0xE98
    ctx->pc = 0x24d028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3736));
label_24d02c:
    // 0x24d02c: 0xdc620010  ld          $v0, 0x10($v1)
    ctx->pc = 0x24d02cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 16)));
label_24d030:
    // 0x24d030: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24d030u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24d034:
    // 0x24d034: 0x100000cc  b           . + 4 + (0xCC << 2)
label_24d038:
    if (ctx->pc == 0x24D038u) {
        ctx->pc = 0x24D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D034u;
        // 0x24d038: 0xfc620010  sd          $v0, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D03Cu;
        goto label_24d03c;
    }
    ctx->pc = 0x24D034u;
    {
        const bool branch_taken_0x24d034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D034u;
        // 0x24d038: 0xfc620010  sd          $v0, 0x10($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d034) {
            ctx->pc = 0x24D368u;
            goto label_24d368;
        }
    }
    ctx->pc = 0x24D03Cu;
label_24d03c:
    // 0x24d03c: 0x30820300  andi        $v0, $a0, 0x300
    ctx->pc = 0x24d03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)768);
label_24d040:
    // 0x24d040: 0x144000ca  bnez        $v0, . + 4 + (0xCA << 2)
label_24d044:
    if (ctx->pc == 0x24D044u) {
        ctx->pc = 0x24D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D040u;
        // 0x24d044: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D048u;
        goto label_24d048;
    }
    ctx->pc = 0x24D040u;
    {
        const bool branch_taken_0x24d040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D040u;
        // 0x24d044: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d040) {
            ctx->pc = 0x24D36Cu;
            goto label_24d36c;
        }
    }
    ctx->pc = 0x24D048u;
label_24d048:
    // 0x24d048: 0x2644000c  addiu       $a0, $s2, 0xC
    ctx->pc = 0x24d048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
label_24d04c:
    // 0x24d04c: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x24d04cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_24d050:
    // 0x24d050: 0xc093918  jal         func_24E460
label_24d054:
    if (ctx->pc == 0x24D054u) {
        ctx->pc = 0x24D054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D050u;
        // 0x24d054: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D058u;
        goto label_24d058;
    }
    ctx->pc = 0x24D050u;
    SET_GPR_U32(ctx, 31, 0x24D058u);
    ctx->pc = 0x24D054u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D050u;
    // 0x24d054: 0x2e0302d  daddu       $a2, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24E460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24E460u, 0x24D050u, 0x24D058u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D058u;
label_24d058:
    // 0x24d058: 0x144000c4  bnez        $v0, . + 4 + (0xC4 << 2)
label_24d05c:
    if (ctx->pc == 0x24D05Cu) {
        ctx->pc = 0x24D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D058u;
        // 0x24d05c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D060u;
        goto label_24d060;
    }
    ctx->pc = 0x24D058u;
    {
        const bool branch_taken_0x24d058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D058u;
        // 0x24d05c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d058) {
            ctx->pc = 0x24D36Cu;
            goto label_24d36c;
        }
    }
    ctx->pc = 0x24D060u;
label_24d060:
    // 0x24d060: 0x92420003  lbu         $v0, 0x3($s2)
    ctx->pc = 0x24d060u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_24d064:
    // 0x24d064: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24d064u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_24d068:
    // 0x24d068: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x24d068u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_24d06c:
    // 0x24d06c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d06cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d070:
    // 0x24d070: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24d070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_24d074:
    // 0x24d074: 0x8c640dbc  lw          $a0, 0xDBC($v1)
    ctx->pc = 0x24d074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 3516)));
label_24d078:
    // 0x24d078: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x24d078u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_24d07c:
    // 0x24d07c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x24d07cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24d080:
    // 0x24d080: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24d080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_24d084:
    // 0x24d084: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x24d084u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_24d088:
    // 0x24d088: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x24d088u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_24d08c:
    // 0x24d08c: 0x43200a  movz        $a0, $v0, $v1
    ctx->pc = 0x24d08cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 2));
label_24d090:
    // 0x24d090: 0x12c0000d  beqz        $s6, . + 4 + (0xD << 2)
label_24d094:
    if (ctx->pc == 0x24D094u) {
        ctx->pc = 0x24D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D090u;
        // 0x24d094: 0x2249821  addu        $s3, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D098u;
        goto label_24d098;
    }
    ctx->pc = 0x24D090u;
    {
        const bool branch_taken_0x24d090 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D090u;
        // 0x24d094: 0x2249821  addu        $s3, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d090) {
            ctx->pc = 0x24D0C8u;
            goto label_24d0c8;
        }
    }
    ctx->pc = 0x24D098u;
label_24d098:
    // 0x24d098: 0x1260000e  beqz        $s3, . + 4 + (0xE << 2)
label_24d09c:
    if (ctx->pc == 0x24D09Cu) {
        ctx->pc = 0x24D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D098u;
        // 0x24d09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D0A0u;
        goto label_24d0a0;
    }
    ctx->pc = 0x24D098u;
    {
        const bool branch_taken_0x24d098 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D098u;
        // 0x24d09c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d098) {
            ctx->pc = 0x24D0D4u;
            goto label_24d0d4;
        }
    }
    ctx->pc = 0x24D0A0u;
label_24d0a0:
    // 0x24d0a0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24d0a4:
    // 0x24d0a4: 0x0  nop
    ctx->pc = 0x24d0a4u;
    // NOP
label_24d0a8:
    // 0x24d0a8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x24d0a8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24d0ac:
    // 0x24d0ac: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_24d0b0:
    if (ctx->pc == 0x24D0B0u) {
        ctx->pc = 0x24D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0ACu;
        // 0x24d0b0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D0B4u;
        goto label_24d0b4;
    }
    ctx->pc = 0x24D0ACu;
    {
        const bool branch_taken_0x24d0ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D0B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0ACu;
        // 0x24d0b0: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0ac) {
            ctx->pc = 0x24D0D0u;
            goto label_24d0d0;
        }
    }
    ctx->pc = 0x24D0B4u;
label_24d0b4:
    // 0x24d0b4: 0xd3102b  sltu        $v0, $a2, $s3
    ctx->pc = 0x24d0b4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_24d0b8:
    // 0x24d0b8: 0x5440fffb  bnel        $v0, $zero, . + 4 + (-0x5 << 2)
label_24d0bc:
    if (ctx->pc == 0x24D0BCu) {
        ctx->pc = 0x24D0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0B8u;
        // 0x24d0bc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D0C0u;
        goto label_24d0c0;
    }
    ctx->pc = 0x24D0B8u;
    {
        const bool branch_taken_0x24d0b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d0b8) {
            ctx->pc = 0x24D0BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D0B8u;
            // 0x24d0bc: 0x8e02000c  lw          $v0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D0A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24d0a8;
        }
    }
    ctx->pc = 0x24D0C0u;
label_24d0c0:
    // 0x24d0c0: 0x10000005  b           . + 4 + (0x5 << 2)
label_24d0c4:
    if (ctx->pc == 0x24D0C4u) {
        ctx->pc = 0x24D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0C0u;
        // 0x24d0c4: 0xc2980b  movn        $s3, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D0C8u;
        goto label_24d0c8;
    }
    ctx->pc = 0x24D0C0u;
    {
        const bool branch_taken_0x24d0c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0C0u;
        // 0x24d0c4: 0xc2980b  movn        $s3, $a2, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0c0) {
            ctx->pc = 0x24D0D8u;
            goto label_24d0d8;
        }
    }
    ctx->pc = 0x24D0C8u;
label_24d0c8:
    // 0x24d0c8: 0x10000002  b           . + 4 + (0x2 << 2)
label_24d0cc:
    if (ctx->pc == 0x24D0CCu) {
        ctx->pc = 0x24D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0C8u;
        // 0x24d0cc: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D0D0u;
        goto label_24d0d0;
    }
    ctx->pc = 0x24D0C8u;
    {
        const bool branch_taken_0x24d0c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0C8u;
        // 0x24d0cc: 0x13102b  sltu        $v0, $zero, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0c8) {
            ctx->pc = 0x24D0D4u;
            goto label_24d0d4;
        }
    }
    ctx->pc = 0x24D0D0u;
label_24d0d0:
    // 0x24d0d0: 0xd3102b  sltu        $v0, $a2, $s3
    ctx->pc = 0x24d0d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
label_24d0d4:
    // 0x24d0d4: 0xc2980b  movn        $s3, $a2, $v0
    ctx->pc = 0x24d0d4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 6));
label_24d0d8:
    // 0x24d0d8: 0x240307f8  addiu       $v1, $zero, 0x7F8
    ctx->pc = 0x24d0d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2040));
label_24d0dc:
    // 0x24d0dc: 0x26620008  addiu       $v0, $s3, 0x8
    ctx->pc = 0x24d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_24d0e0:
    // 0x24d0e0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x24d0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d0e4:
    // 0x24d0e4: 0x2c420801  sltiu       $v0, $v0, 0x801
    ctx->pc = 0x24d0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
label_24d0e8:
    // 0x24d0e8: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x24d0e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_24d0ec:
    // 0x24d0ec: 0xc08a946  jal         func_22A518
label_24d0f0:
    if (ctx->pc == 0x24D0F0u) {
        ctx->pc = 0x24D0F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0ECu;
        // 0x24d0f0: 0x62980a  movz        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D0F4u;
        goto label_24d0f4;
    }
    ctx->pc = 0x24D0ECu;
    SET_GPR_U32(ctx, 31, 0x24D0F4u);
    ctx->pc = 0x24D0F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D0ECu;
    // 0x24d0f0: 0x62980a  movz        $s3, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A518u, 0x24D0ECu, 0x24D0F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D0F4u;
label_24d0f4:
    // 0x24d0f4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x24d0f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d0f8:
    // 0x24d0f8: 0x1200009b  beqz        $s0, . + 4 + (0x9B << 2)
label_24d0fc:
    if (ctx->pc == 0x24D0FCu) {
        ctx->pc = 0x24D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0F8u;
        // 0x24d0fc: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D100u;
        goto label_24d100;
    }
    ctx->pc = 0x24D0F8u;
    {
        const bool branch_taken_0x24d0f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D0F8u;
        // 0x24d0fc: 0x26740008  addiu       $s4, $s3, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d0f8) {
            ctx->pc = 0x24D368u;
            goto label_24d368;
        }
    }
    ctx->pc = 0x24D100u;
label_24d100:
    // 0x24d100: 0x2e8200e1  sltiu       $v0, $s4, 0xE1
    ctx->pc = 0x24d100u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)(int64_t)(int32_t)225) ? 1 : 0);
label_24d104:
    // 0x24d104: 0x14400023  bnez        $v0, . + 4 + (0x23 << 2)
label_24d108:
    if (ctx->pc == 0x24D108u) {
        ctx->pc = 0x24D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D104u;
        // 0x24d108: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D10Cu;
        goto label_24d10c;
    }
    ctx->pc = 0x24D104u;
    {
        const bool branch_taken_0x24d104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D104u;
        // 0x24d108: 0x280f02d  daddu       $fp, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d104) {
            ctx->pc = 0x24D194u;
            goto label_24d194;
        }
    }
    ctx->pc = 0x24D10Cu;
label_24d10c:
    // 0x24d10c: 0xc08c682  jal         func_231A08
label_24d110:
    if (ctx->pc == 0x24D110u) {
        ctx->pc = 0x24D114u;
        goto label_24d114;
    }
    ctx->pc = 0x24D10Cu;
    SET_GPR_U32(ctx, 31, 0x24D114u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x24D10Cu, 0x24D114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D114u;
label_24d114:
    // 0x24d114: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24d114u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d118:
    // 0x24d118: 0xc098552  jal         func_261548
label_24d11c:
    if (ctx->pc == 0x24D11Cu) {
        ctx->pc = 0x24D11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D118u;
        // 0x24d11c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D120u;
        goto label_24d120;
    }
    ctx->pc = 0x24D118u;
    SET_GPR_U32(ctx, 31, 0x24D120u);
    ctx->pc = 0x24D11Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D118u;
    // 0x24d11c: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x24D118u, 0x24D120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D120u;
label_24d120:
    // 0x24d120: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_24d124:
    if (ctx->pc == 0x24D124u) {
        ctx->pc = 0x24D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D120u;
        // 0x24d124: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D128u;
        goto label_24d128;
    }
    ctx->pc = 0x24D120u;
    {
        const bool branch_taken_0x24d120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D120u;
        // 0x24d124: 0xae020020  sw          $v0, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d120) {
            ctx->pc = 0x24D140u;
            goto label_24d140;
        }
    }
    ctx->pc = 0x24D128u;
label_24d128:
    // 0x24d128: 0xc08a8ec  jal         func_22A3B0
label_24d12c:
    if (ctx->pc == 0x24D12Cu) {
        ctx->pc = 0x24D12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D128u;
        // 0x24d12c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D130u;
        goto label_24d130;
    }
    ctx->pc = 0x24D128u;
    SET_GPR_U32(ctx, 31, 0x24D130u);
    ctx->pc = 0x24D12Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D128u;
    // 0x24d12c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3B0u, 0x24D128u, 0x24D130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D130u;
label_24d130:
    // 0x24d130: 0xc098552  jal         func_261548
label_24d134:
    if (ctx->pc == 0x24D134u) {
        ctx->pc = 0x24D134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D130u;
        // 0x24d134: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D138u;
        goto label_24d138;
    }
    ctx->pc = 0x24D130u;
    SET_GPR_U32(ctx, 31, 0x24D138u);
    ctx->pc = 0x24D134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D130u;
    // 0x24d134: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x24D130u, 0x24D138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D138u;
label_24d138:
    // 0x24d138: 0xae020020  sw          $v0, 0x20($s0)
    ctx->pc = 0x24d138u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 2));
label_24d13c:
    // 0x24d13c: 0x0  nop
    ctx->pc = 0x24d13cu;
    // NOP
label_24d140:
    // 0x24d140: 0xc08c698  jal         func_231A60
label_24d144:
    if (ctx->pc == 0x24D144u) {
        ctx->pc = 0x24D144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D140u;
        // 0x24d144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D148u;
        goto label_24d148;
    }
    ctx->pc = 0x24D140u;
    SET_GPR_U32(ctx, 31, 0x24D148u);
    ctx->pc = 0x24D144u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D140u;
    // 0x24d144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x24D140u, 0x24D148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D148u;
label_24d148:
    // 0x24d148: 0x8e040020  lw          $a0, 0x20($s0)
    ctx->pc = 0x24d148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_24d14c:
    // 0x24d14c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_24d150:
    if (ctx->pc == 0x24D150u) {
        ctx->pc = 0x24D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D14Cu;
        // 0x24d150: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D154u;
        goto label_24d154;
    }
    ctx->pc = 0x24D14Cu;
    {
        const bool branch_taken_0x24d14c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D14Cu;
        // 0x24d150: 0x24030800  addiu       $v1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d14c) {
            ctx->pc = 0x24D178u;
            goto label_24d178;
        }
    }
    ctx->pc = 0x24D154u;
label_24d154:
    // 0x24d154: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x24d154u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_24d158:
    // 0x24d158: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x24d158u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_24d15c:
    // 0x24d15c: 0x34420009  ori         $v0, $v0, 0x9
    ctx->pc = 0x24d15cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9);
label_24d160:
    // 0x24d160: 0xae03002c  sw          $v1, 0x2C($s0)
    ctx->pc = 0x24d160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 3));
label_24d164:
    // 0x24d164: 0xa6020012  sh          $v0, 0x12($s0)
    ctx->pc = 0x24d164u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 18), (uint16_t)GPR_U32(ctx, 2));
label_24d168:
    // 0x24d168: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x24d168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
label_24d16c:
    // 0x24d16c: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x24d16cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_24d170:
    // 0x24d170: 0xae100038  sw          $s0, 0x38($s0)
    ctx->pc = 0x24d170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 16));
label_24d174:
    // 0x24d174: 0xae100034  sw          $s0, 0x34($s0)
    ctx->pc = 0x24d174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 16));
label_24d178:
    // 0x24d178: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x24d178u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_24d17c:
    // 0x24d17c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24d17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24d180:
    // 0x24d180: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_24d184:
    if (ctx->pc == 0x24D184u) {
        ctx->pc = 0x24D188u;
        goto label_24d188;
    }
    ctx->pc = 0x24D180u;
    {
        const bool branch_taken_0x24d180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d180) {
            ctx->pc = 0x24D194u;
            goto label_24d194;
        }
    }
    ctx->pc = 0x24D188u;
label_24d188:
    // 0x24d188: 0xc08a9d6  jal         func_22A758
label_24d18c:
    if (ctx->pc == 0x24D18Cu) {
        ctx->pc = 0x24D18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D188u;
        // 0x24d18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D190u;
        goto label_24d190;
    }
    ctx->pc = 0x24D188u;
    SET_GPR_U32(ctx, 31, 0x24D190u);
    ctx->pc = 0x24D18Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D188u;
    // 0x24d18c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x24D188u, 0x24D190u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D190u;
label_24d190:
    // 0x24d190: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x24d190u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d194:
    // 0x24d194: 0x52000075  beql        $s0, $zero, . + 4 + (0x75 << 2)
label_24d198:
    if (ctx->pc == 0x24D198u) {
        ctx->pc = 0x24D198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D194u;
        // 0x24d198: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D19Cu;
        goto label_24d19c;
    }
    ctx->pc = 0x24D194u;
    {
        const bool branch_taken_0x24d194 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d194) {
            ctx->pc = 0x24D198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D194u;
            // 0x24d198: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D36Cu;
            goto label_24d36c;
        }
    }
    ctx->pc = 0x24D19Cu;
label_24d19c:
    // 0x24d19c: 0x96020012  lhu         $v0, 0x12($s0)
    ctx->pc = 0x24d19cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 18)));
label_24d1a0:
    // 0x24d1a0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x24d1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_24d1a4:
    // 0x24d1a4: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_24d1a8:
    if (ctx->pc == 0x24D1A8u) {
        ctx->pc = 0x24D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1A4u;
        // 0x24d1a8: 0xae1e000c  sw          $fp, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D1ACu;
        goto label_24d1ac;
    }
    ctx->pc = 0x24D1A4u;
    {
        const bool branch_taken_0x24d1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1A4u;
        // 0x24d1a8: 0xae1e000c  sw          $fp, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d1a4) {
            ctx->pc = 0x24D1D0u;
            goto label_24d1d0;
        }
    }
    ctx->pc = 0x24D1ACu;
label_24d1ac:
    // 0x24d1ac: 0x240200e0  addiu       $v0, $zero, 0xE0
    ctx->pc = 0x24d1acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
label_24d1b0:
    // 0x24d1b0: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x24d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_24d1b4:
    // 0x24d1b4: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x24d1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24d1b8:
    // 0x24d1b8: 0x541023  subu        $v0, $v0, $s4
    ctx->pc = 0x24d1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_24d1bc:
    // 0x24d1bc: 0x3463fff8  ori         $v1, $v1, 0xFFF8
    ctx->pc = 0x24d1bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65528);
label_24d1c0:
    // 0x24d1c0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x24d1c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_24d1c4:
    // 0x24d1c4: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x24d1c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_24d1c8:
    // 0x24d1c8: 0xae040008  sw          $a0, 0x8($s0)
    ctx->pc = 0x24d1c8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 4));
label_24d1cc:
    // 0x24d1cc: 0x0  nop
    ctx->pc = 0x24d1ccu;
    // NOP
label_24d1d0:
    // 0x24d1d0: 0x2ea20013  sltiu       $v0, $s5, 0x13
    ctx->pc = 0x24d1d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_24d1d4:
    // 0x24d1d4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_24d1d8:
    if (ctx->pc == 0x24D1D8u) {
        ctx->pc = 0x24D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1D4u;
        // 0x24d1d8: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D1DCu;
        goto label_24d1dc;
    }
    ctx->pc = 0x24D1D4u;
    {
        const bool branch_taken_0x24d1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1D4u;
        // 0x24d1d8: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d1d4) {
            ctx->pc = 0x24D1E8u;
            goto label_24d1e8;
        }
    }
    ctx->pc = 0x24D1DCu;
label_24d1dc:
    // 0x24d1dc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x24d1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_24d1e0:
    // 0x24d1e0: 0xc08b5e0  jal         func_22D780
label_24d1e4:
    if (ctx->pc == 0x24D1E4u) {
        ctx->pc = 0x24D1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D1E0u;
        // 0x24d1e4: 0x24846ba0  addiu       $a0, $a0, 0x6BA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D1E8u;
        goto label_24d1e8;
    }
    ctx->pc = 0x24D1E0u;
    SET_GPR_U32(ctx, 31, 0x24D1E8u);
    ctx->pc = 0x24D1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D1E0u;
    // 0x24d1e4: 0x24846ba0  addiu       $a0, $a0, 0x6BA0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x24D1E0u, 0x24D1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D1E8u;
label_24d1e8:
    // 0x24d1e8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_24d1ec:
    // 0x24d1ec: 0x1520c0  sll         $a0, $s5, 3
    ctx->pc = 0x24d1ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 21), 3));
label_24d1f0:
    // 0x24d1f0: 0x24630e98  addiu       $v1, $v1, 0xE98
    ctx->pc = 0x24d1f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3736));
label_24d1f4:
    // 0x24d1f4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x24d1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_24d1f8:
    // 0x24d1f8: 0x24630018  addiu       $v1, $v1, 0x18
    ctx->pc = 0x24d1f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
label_24d1fc:
    // 0x24d1fc: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24d1fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_24d200:
    // 0x24d200: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x24d200u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_24d204:
    // 0x24d204: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24d204u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24d208:
    // 0x24d208: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x24d208u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_24d20c:
    // 0x24d20c: 0x16a50004  bne         $s5, $a1, . + 4 + (0x4 << 2)
label_24d210:
    if (ctx->pc == 0x24D210u) {
        ctx->pc = 0x24D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D20Cu;
        // 0x24d210: 0xa2350000  sb          $s5, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D214u;
        goto label_24d214;
    }
    ctx->pc = 0x24D20Cu;
    {
        const bool branch_taken_0x24d20c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 5));
        ctx->pc = 0x24D210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D20Cu;
        // 0x24d210: 0xa2350000  sb          $s5, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d20c) {
            ctx->pc = 0x24D220u;
            goto label_24d220;
        }
    }
    ctx->pc = 0x24D214u;
label_24d214:
    // 0x24d214: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x24d214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_24d218:
    // 0x24d218: 0x10000013  b           . + 4 + (0x13 << 2)
label_24d21c:
    if (ctx->pc == 0x24D21Cu) {
        ctx->pc = 0x24D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D218u;
        // 0x24d21c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D220u;
        goto label_24d220;
    }
    ctx->pc = 0x24D218u;
    {
        const bool branch_taken_0x24d218 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D218u;
        // 0x24d21c: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d218) {
            ctx->pc = 0x24D268u;
            goto label_24d268;
        }
    }
    ctx->pc = 0x24D220u;
label_24d220:
    // 0x24d220: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x24d220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_24d224:
    // 0x24d224: 0x16a20004  bne         $s5, $v0, . + 4 + (0x4 << 2)
label_24d228:
    if (ctx->pc == 0x24D228u) {
        ctx->pc = 0x24D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D224u;
        // 0x24d228: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D22Cu;
        goto label_24d22c;
    }
    ctx->pc = 0x24D224u;
    {
        const bool branch_taken_0x24d224 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        ctx->pc = 0x24D228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D224u;
        // 0x24d228: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d224) {
            ctx->pc = 0x24D238u;
            goto label_24d238;
        }
    }
    ctx->pc = 0x24D22Cu;
label_24d22c:
    // 0x24d22c: 0xa2370004  sb          $s7, 0x4($s1)
    ctx->pc = 0x24d22cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 23));
label_24d230:
    // 0x24d230: 0x1000000d  b           . + 4 + (0xD << 2)
label_24d234:
    if (ctx->pc == 0x24D234u) {
        ctx->pc = 0x24D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D230u;
        // 0x24d234: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D238u;
        goto label_24d238;
    }
    ctx->pc = 0x24D230u;
    {
        const bool branch_taken_0x24d230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D230u;
        // 0x24d234: 0xb82d  daddu       $s7, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d230) {
            ctx->pc = 0x24D268u;
            goto label_24d268;
        }
    }
    ctx->pc = 0x24D238u;
label_24d238:
    // 0x24d238: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x24d238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24d23c:
    // 0x24d23c: 0x56a2000b  bnel        $s5, $v0, . + 4 + (0xB << 2)
label_24d240:
    if (ctx->pc == 0x24D240u) {
        ctx->pc = 0x24D240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D23Cu;
        // 0x24d240: 0x92440007  lbu         $a0, 0x7($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D244u;
        goto label_24d244;
    }
    ctx->pc = 0x24D23Cu;
    {
        const bool branch_taken_0x24d23c = (GPR_U64(ctx, 21) != GPR_U64(ctx, 2));
        if (branch_taken_0x24d23c) {
            ctx->pc = 0x24D240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D23Cu;
            // 0x24d240: 0x92440007  lbu         $a0, 0x7($s2) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D26Cu;
            goto label_24d26c;
        }
    }
    ctx->pc = 0x24D244u;
label_24d244:
    // 0x24d244: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x24d244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24d248:
    // 0x24d248: 0x56e20008  bnel        $s7, $v0, . + 4 + (0x8 << 2)
label_24d24c:
    if (ctx->pc == 0x24D24Cu) {
        ctx->pc = 0x24D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D248u;
        // 0x24d24c: 0x92440007  lbu         $a0, 0x7($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D250u;
        goto label_24d250;
    }
    ctx->pc = 0x24D248u;
    {
        const bool branch_taken_0x24d248 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        if (branch_taken_0x24d248) {
            ctx->pc = 0x24D24Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D248u;
            // 0x24d24c: 0x92440007  lbu         $a0, 0x7($s2) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D26Cu;
            goto label_24d26c;
        }
    }
    ctx->pc = 0x24D250u;
label_24d250:
    // 0x24d250: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x24d250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_24d254:
    // 0x24d254: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_24d258:
    if (ctx->pc == 0x24D258u) {
        ctx->pc = 0x24D258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D254u;
        // 0x24d258: 0x92440007  lbu         $a0, 0x7($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D25Cu;
        goto label_24d25c;
    }
    ctx->pc = 0x24D254u;
    {
        const bool branch_taken_0x24d254 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24d254) {
            ctx->pc = 0x24D258u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D254u;
            // 0x24d258: 0x92440007  lbu         $a0, 0x7($s2) (Delay Slot)
            SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D26Cu;
            goto label_24d26c;
        }
    }
    ctx->pc = 0x24D25Cu;
label_24d25c:
    // 0x24d25c: 0xc08a262  jal         func_228988
label_24d260:
    if (ctx->pc == 0x24D260u) {
        ctx->pc = 0x24D260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D25Cu;
        // 0x24d260: 0x94640040  lhu         $a0, 0x40($v1) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D264u;
        goto label_24d264;
    }
    ctx->pc = 0x24D25Cu;
    SET_GPR_U32(ctx, 31, 0x24D264u);
    ctx->pc = 0x24D260u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D25Cu;
    // 0x24d260: 0x94640040  lhu         $a0, 0x40($v1) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x24D25Cu, 0x24D264u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D264u;
label_24d264:
    // 0x24d264: 0xa6220006  sh          $v0, 0x6($s1)
    ctx->pc = 0x24d264u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 6), (uint16_t)GPR_U32(ctx, 2));
label_24d268:
    // 0x24d268: 0x92440007  lbu         $a0, 0x7($s2)
    ctx->pc = 0x24d268u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_24d26c:
    // 0x24d26c: 0x92420006  lbu         $v0, 0x6($s2)
    ctx->pc = 0x24d26cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_24d270:
    // 0x24d270: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x24d270u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_24d274:
    // 0x24d274: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x24d274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_24d278:
    // 0x24d278: 0xc08a262  jal         func_228988
label_24d27c:
    if (ctx->pc == 0x24D27Cu) {
        ctx->pc = 0x24D27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D278u;
        // 0x24d27c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D280u;
        goto label_24d280;
    }
    ctx->pc = 0x24D278u;
    SET_GPR_U32(ctx, 31, 0x24D280u);
    ctx->pc = 0x24D27Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D278u;
    // 0x24d27c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x24D278u, 0x24D280u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D280u;
label_24d280:
    // 0x24d280: 0x92440003  lbu         $a0, 0x3($s2)
    ctx->pc = 0x24d280u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_24d284:
    // 0x24d284: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x24d284u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_24d288:
    // 0x24d288: 0x92450002  lbu         $a1, 0x2($s2)
    ctx->pc = 0x24d288u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_24d28c:
    // 0x24d28c: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x24d28cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_24d290:
    // 0x24d290: 0xa2430007  sb          $v1, 0x7($s2)
    ctx->pc = 0x24d290u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 7), (uint8_t)GPR_U32(ctx, 3));
label_24d294:
    // 0x24d294: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x24d294u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_24d298:
    // 0x24d298: 0xa2420006  sb          $v0, 0x6($s2)
    ctx->pc = 0x24d298u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 6), (uint8_t)GPR_U32(ctx, 2));
label_24d29c:
    // 0x24d29c: 0xc08a262  jal         func_228988
label_24d2a0:
    if (ctx->pc == 0x24D2A0u) {
        ctx->pc = 0x24D2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D29Cu;
        // 0x24d2a0: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D2A4u;
        goto label_24d2a4;
    }
    ctx->pc = 0x24D29Cu;
    SET_GPR_U32(ctx, 31, 0x24D2A4u);
    ctx->pc = 0x24D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D29Cu;
    // 0x24d2a0: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x24D29Cu, 0x24D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2A4u;
label_24d2a4:
    // 0x24d2a4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x24d2a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_24d2a8:
    // 0x24d2a8: 0xa2420002  sb          $v0, 0x2($s2)
    ctx->pc = 0x24d2a8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 2));
label_24d2ac:
    // 0x24d2ac: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x24d2acu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
label_24d2b0:
    // 0x24d2b0: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x24d2b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24d2b4:
    // 0x24d2b4: 0xa2370001  sb          $s7, 0x1($s1)
    ctx->pc = 0x24d2b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 23));
label_24d2b8:
    // 0x24d2b8: 0x26270008  addiu       $a3, $s1, 0x8
    ctx->pc = 0x24d2b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_24d2bc:
    // 0x24d2bc: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24d2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24d2c0:
    // 0x24d2c0: 0xc08ac18  jal         func_22B060
label_24d2c4:
    if (ctx->pc == 0x24D2C4u) {
        ctx->pc = 0x24D2C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2C0u;
        // 0x24d2c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D2C8u;
        goto label_24d2c8;
    }
    ctx->pc = 0x24D2C0u;
    SET_GPR_U32(ctx, 31, 0x24D2C8u);
    ctx->pc = 0x24D2C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2C0u;
    // 0x24d2c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B060u, 0x24D2C0u, 0x24D2C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2C8u;
label_24d2c8:
    // 0x24d2c8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x24d2c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24d2cc:
    // 0x24d2cc: 0x26030020  addiu       $v1, $s0, 0x20
    ctx->pc = 0x24d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_24d2d0:
    // 0x24d2d0: 0x24e2ffec  addiu       $v0, $a3, -0x14
    ctx->pc = 0x24d2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_24d2d4:
    // 0x24d2d4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x24d2d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_24d2d8:
    // 0x24d2d8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24d2dc:
    if (ctx->pc == 0x24D2DCu) {
        ctx->pc = 0x24D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2D8u;
        // 0x24d2dc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D2E0u;
        goto label_24d2e0;
    }
    ctx->pc = 0x24D2D8u;
    {
        const bool branch_taken_0x24d2d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D2DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2D8u;
        // 0x24d2dc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d2d8) {
            ctx->pc = 0x24D2ECu;
            goto label_24d2ec;
        }
    }
    ctx->pc = 0x24D2E0u;
label_24d2e0:
    // 0x24d2e0: 0xc08b5e0  jal         func_22D780
label_24d2e4:
    if (ctx->pc == 0x24D2E4u) {
        ctx->pc = 0x24D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D2E0u;
        // 0x24d2e4: 0x24846bb0  addiu       $a0, $a0, 0x6BB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D2E8u;
        goto label_24d2e8;
    }
    ctx->pc = 0x24D2E0u;
    SET_GPR_U32(ctx, 31, 0x24D2E8u);
    ctx->pc = 0x24D2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D2E0u;
    // 0x24d2e4: 0x24846bb0  addiu       $a0, $a0, 0x6BB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x24D2E0u, 0x24D2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D2E8u;
label_24d2e8:
    // 0x24d2e8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x24d2e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_24d2ec:
    // 0x24d2ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x24d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_24d2f0:
    // 0x24d2f0: 0x24e5ffec  addiu       $a1, $a3, -0x14
    ctx->pc = 0x24d2f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967276));
label_24d2f4:
    // 0x24d2f4: 0xae050008  sw          $a1, 0x8($s0)
    ctx->pc = 0x24d2f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 5));
label_24d2f8:
    // 0x24d2f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x24d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_24d2fc:
    // 0x24d2fc: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x24d2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_24d300:
    // 0x24d300: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x24d300u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_24d304:
    // 0x24d304: 0xae020018  sw          $v0, 0x18($s0)
    ctx->pc = 0x24d304u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
label_24d308:
    // 0x24d308: 0x8ec30014  lw          $v1, 0x14($s6)
    ctx->pc = 0x24d308u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 20)));
label_24d30c:
    // 0x24d30c: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x24d30cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
label_24d310:
    // 0x24d310: 0x90e2ffec  lbu         $v0, -0x14($a3)
    ctx->pc = 0x24d310u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4294967276)));
label_24d314:
    // 0x24d314: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x24d314u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
label_24d318:
    // 0x24d318: 0x34420005  ori         $v0, $v0, 0x5
    ctx->pc = 0x24d318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)5);
label_24d31c:
    // 0x24d31c: 0xa0e2ffec  sb          $v0, -0x14($a3)
    ctx->pc = 0x24d31cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294967276), (uint8_t)GPR_U32(ctx, 2));
label_24d320:
    // 0x24d320: 0xa0a00001  sb          $zero, 0x1($a1)
    ctx->pc = 0x24d320u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 0));
label_24d324:
    // 0x24d324: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x24d324u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_24d328:
    // 0x24d328: 0xa0a60009  sb          $a2, 0x9($a1)
    ctx->pc = 0x24d328u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 9), (uint8_t)GPR_U32(ctx, 6));
label_24d32c:
    // 0x24d32c: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x24d32cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_24d330:
    // 0x24d330: 0xa0a20002  sb          $v0, 0x2($a1)
    ctx->pc = 0x24d330u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 2));
label_24d334:
    // 0x24d334: 0xa0a30003  sb          $v1, 0x3($a1)
    ctx->pc = 0x24d334u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 3));
label_24d338:
    // 0x24d338: 0xa0a00006  sb          $zero, 0x6($a1)
    ctx->pc = 0x24d338u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 0));
label_24d33c:
    // 0x24d33c: 0xa0a00007  sb          $zero, 0x7($a1)
    ctx->pc = 0x24d33cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
label_24d340:
    // 0x24d340: 0x8a45000f  lwl         $a1, 0xF($s2)
    ctx->pc = 0x24d340u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
label_24d344:
    // 0x24d344: 0x9a45000c  lwr         $a1, 0xC($s2)
    ctx->pc = 0x24d344u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
label_24d348:
    // 0x24d348: 0xa8e5fffb  swl         $a1, -0x5($a3)
    ctx->pc = 0x24d348u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294967291); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d34c:
    // 0x24d34c: 0xb8e5fff8  swr         $a1, -0x8($a3)
    ctx->pc = 0x24d34cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294967288); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d350:
    // 0x24d350: 0x8a450013  lwl         $a1, 0x13($s2)
    ctx->pc = 0x24d350u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
label_24d354:
    // 0x24d354: 0x9a450010  lwr         $a1, 0x10($s2)
    ctx->pc = 0x24d354u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
label_24d358:
    // 0x24d358: 0xa8e5ffff  swl         $a1, -0x1($a3)
    ctx->pc = 0x24d358u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294967295); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d35c:
    // 0x24d35c: 0xb8e5fffc  swr         $a1, -0x4($a3)
    ctx->pc = 0x24d35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294967292); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d360:
    // 0x24d360: 0xc093642  jal         func_24D908
label_24d364:
    if (ctx->pc == 0x24D364u) {
        ctx->pc = 0x24D364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D360u;
        // 0x24d364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D368u;
        goto label_24d368;
    }
    ctx->pc = 0x24D360u;
    SET_GPR_U32(ctx, 31, 0x24D368u);
    ctx->pc = 0x24D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D360u;
    // 0x24d364: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D908u, 0x24D360u, 0x24D368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D368u;
label_24d368:
    // 0x24d368: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x24d368u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24d36c:
    // 0x24d36c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24d36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24d370:
    // 0x24d370: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24d370u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24d374:
    // 0x24d374: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24d374u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24d378:
    // 0x24d378: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24d378u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24d37c:
    // 0x24d37c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24d37cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24d380:
    // 0x24d380: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24d380u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24d384:
    // 0x24d384: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24d384u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24d388:
    // 0x24d388: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24d388u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24d38c:
    // 0x24d38c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24d38cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24d390:
    // 0x24d390: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24d390u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24d394:
    // 0x24d394: 0x808a9d6  j           func_22A758
label_24d398:
    if (ctx->pc == 0x24D398u) {
        ctx->pc = 0x24D398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D394u;
        // 0x24d398: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D39Cu;
        goto label_24d39c;
    }
    ctx->pc = 0x24D394u;
    ctx->pc = 0x24D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D394u;
    // 0x24d398: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x24D39Cu;
label_24d39c:
    // 0x24d39c: 0x0  nop
    ctx->pc = 0x24d39cu;
    // NOP
label_24d3a0:
    // 0x24d3a0: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x24d3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
label_24d3a4:
    // 0x24d3a4: 0xffa60100  sd          $a2, 0x100($sp)
    ctx->pc = 0x24d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 6));
label_24d3a8:
    // 0x24d3a8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x24d3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_24d3ac:
    // 0x24d3ac: 0x8fa20100  lw          $v0, 0x100($sp)
    ctx->pc = 0x24d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
label_24d3b0:
    // 0x24d3b0: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x24d3b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_24d3b4:
    // 0x24d3b4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x24d3b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_24d3b8:
    // 0x24d3b8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x24d3b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_24d3bc:
    // 0x24d3bc: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x24d3bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24d3c0:
    // 0x24d3c0: 0xffa500f8  sd          $a1, 0xF8($sp)
    ctx->pc = 0x24d3c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 5));
label_24d3c4:
    // 0x24d3c4: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x24d3c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_24d3c8:
    // 0x24d3c8: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x24d3c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_24d3cc:
    // 0x24d3cc: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x24d3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_24d3d0:
    // 0x24d3d0: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x24d3d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_24d3d4:
    // 0x24d3d4: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x24d3d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_24d3d8:
    // 0x24d3d8: 0xffa70108  sd          $a3, 0x108($sp)
    ctx->pc = 0x24d3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 264), GPR_U64(ctx, 7));
label_24d3dc:
    // 0x24d3dc: 0xffa80110  sd          $t0, 0x110($sp)
    ctx->pc = 0x24d3dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 8));
label_24d3e0:
    // 0x24d3e0: 0xffa90118  sd          $t1, 0x118($sp)
    ctx->pc = 0x24d3e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 280), GPR_U64(ctx, 9));
label_24d3e4:
    // 0x24d3e4: 0xffaa0120  sd          $t2, 0x120($sp)
    ctx->pc = 0x24d3e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 10));
label_24d3e8:
    // 0x24d3e8: 0xffab0128  sd          $t3, 0x128($sp)
    ctx->pc = 0x24d3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 296), GPR_U64(ctx, 11));
label_24d3ec:
    // 0x24d3ec: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x24d3ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_24d3f0:
    // 0x24d3f0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x24d3f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_24d3f4:
    // 0x24d3f4: 0x8e740008  lw          $s4, 0x8($s3)
    ctx->pc = 0x24d3f4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_24d3f8:
    // 0x24d3f8: 0x8fb700f8  lw          $s7, 0xF8($sp)
    ctx->pc = 0x24d3f8u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_24d3fc:
    // 0x24d3fc: 0x280b02d  daddu       $s6, $s4, $zero
    ctx->pc = 0x24d3fcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_24d400:
    // 0x24d400: 0x92c20003  lbu         $v0, 0x3($s6)
    ctx->pc = 0x24d400u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 3)));
label_24d404:
    // 0x24d404: 0x92c30002  lbu         $v1, 0x2($s6)
    ctx->pc = 0x24d404u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 2)));
label_24d408:
    // 0x24d408: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x24d408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_24d40c:
    // 0x24d40c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x24d40cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_24d410:
    // 0x24d410: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x24d410u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_24d414:
    // 0x24d414: 0x578023  subu        $s0, $v0, $s7
    ctx->pc = 0x24d414u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_24d418:
    // 0x24d418: 0x2a030008  slti        $v1, $s0, 0x8
    ctx->pc = 0x24d418u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)8) ? 1 : 0);
label_24d41c:
    // 0x24d41c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_24d420:
    if (ctx->pc == 0x24D420u) {
        ctx->pc = 0x24D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D41Cu;
        // 0x24d420: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D424u;
        goto label_24d424;
    }
    ctx->pc = 0x24D41Cu;
    {
        const bool branch_taken_0x24d41c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D41Cu;
        // 0x24d420: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d41c) {
            ctx->pc = 0x24D438u;
            goto label_24d438;
        }
    }
    ctx->pc = 0x24D424u;
label_24d424:
    // 0x24d424: 0x24630e98  addiu       $v1, $v1, 0xE98
    ctx->pc = 0x24d424u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3736));
label_24d428:
    // 0x24d428: 0xdc6200b8  ld          $v0, 0xB8($v1)
    ctx->pc = 0x24d428u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 184)));
label_24d42c:
    // 0x24d42c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24d42cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24d430:
    // 0x24d430: 0x10000126  b           . + 4 + (0x126 << 2)
label_24d434:
    if (ctx->pc == 0x24D434u) {
        ctx->pc = 0x24D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D430u;
        // 0x24d434: 0xfc6200b8  sd          $v0, 0xB8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D438u;
        goto label_24d438;
    }
    ctx->pc = 0x24D430u;
    {
        const bool branch_taken_0x24d430 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D430u;
        // 0x24d434: 0xfc6200b8  sd          $v0, 0xB8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d430) {
            ctx->pc = 0x24D8CCu;
            goto label_24d8cc;
        }
    }
    ctx->pc = 0x24D438u;
label_24d438:
    // 0x24d438: 0x24020023  addiu       $v0, $zero, 0x23
    ctx->pc = 0x24d438u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
label_24d43c:
    // 0x24d43c: 0x24030024  addiu       $v1, $zero, 0x24
    ctx->pc = 0x24d43cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_24d440:
    // 0x24d440: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x24d440u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_24d444:
    // 0x24d444: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x24d444u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_24d448:
    // 0x24d448: 0x202180a  movz        $v1, $s0, $v0
    ctx->pc = 0x24d448u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_24d44c:
    // 0x24d44c: 0x2e32821  addu        $a1, $s7, $v1
    ctx->pc = 0x24d44cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
label_24d450:
    // 0x24d450: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x24d450u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_24d454:
    // 0x24d454: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_24d458:
    if (ctx->pc == 0x24D458u) {
        ctx->pc = 0x24D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D454u;
        // 0x24d458: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D45Cu;
        goto label_24d45c;
    }
    ctx->pc = 0x24D454u;
    {
        const bool branch_taken_0x24d454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D454u;
        // 0x24d458: 0x2c0a02d  daddu       $s4, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d454) {
            ctx->pc = 0x24D490u;
            goto label_24d490;
        }
    }
    ctx->pc = 0x24D45Cu;
label_24d45c:
    // 0x24d45c: 0xc08acea  jal         func_22B3A8
label_24d460:
    if (ctx->pc == 0x24D460u) {
        ctx->pc = 0x24D460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D45Cu;
        // 0x24d460: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D464u;
        goto label_24d464;
    }
    ctx->pc = 0x24D45Cu;
    SET_GPR_U32(ctx, 31, 0x24D464u);
    ctx->pc = 0x24D460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D45Cu;
    // 0x24d460: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B3A8u, 0x24D45Cu, 0x24D464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D464u;
label_24d464:
    // 0x24d464: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x24d464u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d468:
    // 0x24d468: 0x56600007  bnel        $s3, $zero, . + 4 + (0x7 << 2)
label_24d46c:
    if (ctx->pc == 0x24D46Cu) {
        ctx->pc = 0x24D46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D468u;
        // 0x24d46c: 0x8e760008  lw          $s6, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D470u;
        goto label_24d470;
    }
    ctx->pc = 0x24D468u;
    {
        const bool branch_taken_0x24d468 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d468) {
            ctx->pc = 0x24D46Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D468u;
            // 0x24d46c: 0x8e760008  lw          $s6, 0x8($s3) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D488u;
            goto label_24d488;
        }
    }
    ctx->pc = 0x24D470u;
label_24d470:
    // 0x24d470: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24d470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_24d474:
    // 0x24d474: 0x24630e98  addiu       $v1, $v1, 0xE98
    ctx->pc = 0x24d474u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3736));
label_24d478:
    // 0x24d478: 0xdc6200b8  ld          $v0, 0xB8($v1)
    ctx->pc = 0x24d478u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 184)));
label_24d47c:
    // 0x24d47c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24d47cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24d480:
    // 0x24d480: 0x10000114  b           . + 4 + (0x114 << 2)
label_24d484:
    if (ctx->pc == 0x24D484u) {
        ctx->pc = 0x24D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D480u;
        // 0x24d484: 0xfc6200b8  sd          $v0, 0xB8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D488u;
        goto label_24d488;
    }
    ctx->pc = 0x24D480u;
    {
        const bool branch_taken_0x24d480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D480u;
        // 0x24d484: 0xfc6200b8  sd          $v0, 0xB8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 184), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d480) {
            ctx->pc = 0x24D8D4u;
            goto label_24d8d4;
        }
    }
    ctx->pc = 0x24D488u;
label_24d488:
    // 0x24d488: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x24d488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_24d48c:
    // 0x24d48c: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x24d48cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_24d490:
    // 0x24d490: 0x971023  subu        $v0, $a0, $s7
    ctx->pc = 0x24d490u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_24d494:
    // 0x24d494: 0x2979021  addu        $s2, $s4, $s7
    ctx->pc = 0x24d494u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 23)));
label_24d498:
    // 0x24d498: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x24d498u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_24d49c:
    // 0x24d49c: 0xae720008  sw          $s2, 0x8($s3)
    ctx->pc = 0x24d49cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 18));
label_24d4a0:
    // 0x24d4a0: 0x240a82d  daddu       $s5, $s2, $zero
    ctx->pc = 0x24d4a0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_24d4a4:
    // 0x24d4a4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24d4a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24d4a8:
    // 0x24d4a8: 0xc092d7e  jal         func_24B5F8
label_24d4ac:
    if (ctx->pc == 0x24D4ACu) {
        ctx->pc = 0x24D4ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4A8u;
        // 0x24d4ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D4B0u;
        goto label_24d4b0;
    }
    ctx->pc = 0x24D4A8u;
    SET_GPR_U32(ctx, 31, 0x24D4B0u);
    ctx->pc = 0x24D4ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D4A8u;
    // 0x24d4ac: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5F8u, 0x24D4A8u, 0x24D4B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D4B0u;
label_24d4b0:
    // 0x24d4b0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24d4b4:
    if (ctx->pc == 0x24D4B4u) {
        ctx->pc = 0x24D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4B0u;
        // 0x24d4b4: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D4B8u;
        goto label_24d4b8;
    }
    ctx->pc = 0x24D4B0u;
    {
        const bool branch_taken_0x24d4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4B0u;
        // 0x24d4b4: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4b0) {
            ctx->pc = 0x24D4CCu;
            goto label_24d4cc;
        }
    }
    ctx->pc = 0x24D4B8u;
label_24d4b8:
    // 0x24d4b8: 0x24630e98  addiu       $v1, $v1, 0xE98
    ctx->pc = 0x24d4b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3736));
label_24d4bc:
    // 0x24d4bc: 0xdc6200c0  ld          $v0, 0xC0($v1)
    ctx->pc = 0x24d4bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 192)));
label_24d4c0:
    // 0x24d4c0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24d4c0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24d4c4:
    // 0x24d4c4: 0x10000101  b           . + 4 + (0x101 << 2)
label_24d4c8:
    if (ctx->pc == 0x24D4C8u) {
        ctx->pc = 0x24D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4C4u;
        // 0x24d4c8: 0xfc6200c0  sd          $v0, 0xC0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D4CCu;
        goto label_24d4cc;
    }
    ctx->pc = 0x24D4C4u;
    {
        const bool branch_taken_0x24d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4C4u;
        // 0x24d4c8: 0xfc6200c0  sd          $v0, 0xC0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4c4) {
            ctx->pc = 0x24D8CCu;
            goto label_24d8cc;
        }
    }
    ctx->pc = 0x24D4CCu;
label_24d4cc:
    // 0x24d4cc: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x24d4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_24d4d0:
    // 0x24d4d0: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x24d4d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_24d4d4:
    // 0x24d4d4: 0x571021  addu        $v0, $v0, $s7
    ctx->pc = 0x24d4d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
label_24d4d8:
    // 0x24d4d8: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x24d4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_24d4dc:
    // 0x24d4dc: 0xae62000c  sw          $v0, 0xC($s3)
    ctx->pc = 0x24d4dcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
label_24d4e0:
    // 0x24d4e0: 0xae630008  sw          $v1, 0x8($s3)
    ctx->pc = 0x24d4e0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 3));
label_24d4e4:
    // 0x24d4e4: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x24d4e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_24d4e8:
    // 0x24d4e8: 0x2c420013  sltiu       $v0, $v0, 0x13
    ctx->pc = 0x24d4e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_24d4ec:
    // 0x24d4ec: 0x104000f1  beqz        $v0, . + 4 + (0xF1 << 2)
label_24d4f0:
    if (ctx->pc == 0x24D4F0u) {
        ctx->pc = 0x24D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4ECu;
        // 0x24d4f0: 0x3c1e003a  lui         $fp, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D4F4u;
        goto label_24d4f4;
    }
    ctx->pc = 0x24D4ECu;
    {
        const bool branch_taken_0x24d4ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D4ECu;
        // 0x24d4f0: 0x3c1e003a  lui         $fp, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d4ec) {
            ctx->pc = 0x24D8B4u;
            goto label_24d8b4;
        }
    }
    ctx->pc = 0x24D4F4u;
label_24d4f4:
    // 0x24d4f4: 0x92a40000  lbu         $a0, 0x0($s5)
    ctx->pc = 0x24d4f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_24d4f8:
    // 0x24d4f8: 0x27c30e98  addiu       $v1, $fp, 0xE98
    ctx->pc = 0x24d4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
label_24d4fc:
    // 0x24d4fc: 0x246300d8  addiu       $v1, $v1, 0xD8
    ctx->pc = 0x24d4fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 216));
label_24d500:
    // 0x24d500: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x24d500u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_24d504:
    // 0x24d504: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x24d504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_24d508:
    // 0x24d508: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x24d508u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_24d50c:
    // 0x24d50c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24d50cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24d510:
    // 0x24d510: 0xfc820000  sd          $v0, 0x0($a0)
    ctx->pc = 0x24d510u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 2));
label_24d514:
    // 0x24d514: 0x92a30000  lbu         $v1, 0x0($s5)
    ctx->pc = 0x24d514u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_24d518:
    // 0x24d518: 0x2c620013  sltiu       $v0, $v1, 0x13
    ctx->pc = 0x24d518u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)19) ? 1 : 0);
label_24d51c:
    // 0x24d51c: 0x104000e5  beqz        $v0, . + 4 + (0xE5 << 2)
label_24d520:
    if (ctx->pc == 0x24D520u) {
        ctx->pc = 0x24D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D51Cu;
        // 0x24d520: 0x92b10001  lbu         $s1, 0x1($s5) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D524u;
        goto label_24d524;
    }
    ctx->pc = 0x24D51Cu;
    {
        const bool branch_taken_0x24d51c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D51Cu;
        // 0x24d520: 0x92b10001  lbu         $s1, 0x1($s5) (Delay Slot)
        SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d51c) {
            ctx->pc = 0x24D8B4u;
            goto label_24d8b4;
        }
    }
    ctx->pc = 0x24D524u;
label_24d524:
    // 0x24d524: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x24d524u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_24d528:
    // 0x24d528: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x24d528u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24d52c:
    // 0x24d52c: 0x24426bc0  addiu       $v0, $v0, 0x6BC0
    ctx->pc = 0x24d52cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27584));
label_24d530:
    // 0x24d530: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d530u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24d534:
    // 0x24d534: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d534u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24d538:
    // 0x24d538: 0x800008  jr          $a0
label_24d53c:
    if (ctx->pc == 0x24D53Cu) {
        ctx->pc = 0x24D540u;
        goto label_24d540;
    }
    ctx->pc = 0x24D538u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D540u: goto label_24d540;
            case 0x24D584u: goto label_24d584;
            case 0x24D598u: goto label_24d598;
            case 0x24D5ACu: goto label_24d5ac;
            case 0x24D6A0u: goto label_24d6a0;
            case 0x24D6A8u: goto label_24d6a8;
            case 0x24D6CCu: goto label_24d6cc;
            case 0x24D7FCu: goto label_24d7fc;
            case 0x24D8B4u: goto label_24d8b4;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D538u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D540u;
label_24d540:
    // 0x24d540: 0x2e22000d  sltiu       $v0, $s1, 0xD
    ctx->pc = 0x24d540u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_24d544:
    // 0x24d544: 0x10400051  beqz        $v0, . + 4 + (0x51 << 2)
label_24d548:
    if (ctx->pc == 0x24D548u) {
        ctx->pc = 0x24D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D544u;
        // 0x24d548: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D54Cu;
        goto label_24d54c;
    }
    ctx->pc = 0x24D544u;
    {
        const bool branch_taken_0x24d544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D544u;
        // 0x24d548: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d544) {
            ctx->pc = 0x24D68Cu;
            goto label_24d68c;
        }
    }
    ctx->pc = 0x24D54Cu;
label_24d54c:
    // 0x24d54c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x24d54cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_24d550:
    // 0x24d550: 0x24426c10  addiu       $v0, $v0, 0x6C10
    ctx->pc = 0x24d550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27664));
label_24d554:
    // 0x24d554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x24d554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_24d558:
    // 0x24d558: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x24d558u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_24d55c:
    // 0x24d55c: 0x800008  jr          $a0
label_24d560:
    if (ctx->pc == 0x24D560u) {
        ctx->pc = 0x24D564u;
        goto label_24d564;
    }
    ctx->pc = 0x24D55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x24D564u: goto label_24d564;
            case 0x24D56Cu: goto label_24d56c;
            case 0x24D574u: goto label_24d574;
            case 0x24D57Cu: goto label_24d57c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D55Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x24D564u;
label_24d564:
    // 0x24d564: 0x10000014  b           . + 4 + (0x14 << 2)
label_24d568:
    if (ctx->pc == 0x24D568u) {
        ctx->pc = 0x24D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D564u;
        // 0x24d568: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D56Cu;
        goto label_24d56c;
    }
    ctx->pc = 0x24D564u;
    {
        const bool branch_taken_0x24d564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D564u;
        // 0x24d568: 0x26310008  addiu       $s1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d564) {
            ctx->pc = 0x24D5B8u;
            goto label_24d5b8;
        }
    }
    ctx->pc = 0x24D56Cu;
label_24d56c:
    // 0x24d56c: 0x10000012  b           . + 4 + (0x12 << 2)
label_24d570:
    if (ctx->pc == 0x24D570u) {
        ctx->pc = 0x24D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D56Cu;
        // 0x24d570: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D574u;
        goto label_24d574;
    }
    ctx->pc = 0x24D56Cu;
    {
        const bool branch_taken_0x24d56c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D56Cu;
        // 0x24d570: 0x24110005  addiu       $s1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d56c) {
            ctx->pc = 0x24D5B8u;
            goto label_24d5b8;
        }
    }
    ctx->pc = 0x24D574u;
label_24d574:
    // 0x24d574: 0x10000010  b           . + 4 + (0x10 << 2)
label_24d578:
    if (ctx->pc == 0x24D578u) {
        ctx->pc = 0x24D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D574u;
        // 0x24d578: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D57Cu;
        goto label_24d57c;
    }
    ctx->pc = 0x24D574u;
    {
        const bool branch_taken_0x24d574 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D574u;
        // 0x24d578: 0x24110008  addiu       $s1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d574) {
            ctx->pc = 0x24D5B8u;
            goto label_24d5b8;
        }
    }
    ctx->pc = 0x24D57Cu;
label_24d57c:
    // 0x24d57c: 0x1000000e  b           . + 4 + (0xE << 2)
label_24d580:
    if (ctx->pc == 0x24D580u) {
        ctx->pc = 0x24D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D57Cu;
        // 0x24d580: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D584u;
        goto label_24d584;
    }
    ctx->pc = 0x24D57Cu;
    {
        const bool branch_taken_0x24d57c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D57Cu;
        // 0x24d580: 0x24110009  addiu       $s1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d57c) {
            ctx->pc = 0x24D5B8u;
            goto label_24d5b8;
        }
    }
    ctx->pc = 0x24D584u;
label_24d584:
    // 0x24d584: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x24d584u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_24d588:
    // 0x24d588: 0x10400040  beqz        $v0, . + 4 + (0x40 << 2)
label_24d58c:
    if (ctx->pc == 0x24D58Cu) {
        ctx->pc = 0x24D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D588u;
        // 0x24d58c: 0x26310012  addiu       $s1, $s1, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D590u;
        goto label_24d590;
    }
    ctx->pc = 0x24D588u;
    {
        const bool branch_taken_0x24d588 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D588u;
        // 0x24d58c: 0x26310012  addiu       $s1, $s1, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d588) {
            ctx->pc = 0x24D68Cu;
            goto label_24d68c;
        }
    }
    ctx->pc = 0x24D590u;
label_24d590:
    // 0x24d590: 0x1000000a  b           . + 4 + (0xA << 2)
label_24d594:
    if (ctx->pc == 0x24D594u) {
        ctx->pc = 0x24D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D590u;
        // 0x24d594: 0x2e020024  sltiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D598u;
        goto label_24d598;
    }
    ctx->pc = 0x24D590u;
    {
        const bool branch_taken_0x24d590 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D590u;
        // 0x24d594: 0x2e020024  sltiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d590) {
            ctx->pc = 0x24D5BCu;
            goto label_24d5bc;
        }
    }
    ctx->pc = 0x24D598u;
label_24d598:
    // 0x24d598: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x24d598u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_24d59c:
    // 0x24d59c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_24d5a0:
    if (ctx->pc == 0x24D5A0u) {
        ctx->pc = 0x24D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D59Cu;
        // 0x24d5a0: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5A4u;
        goto label_24d5a4;
    }
    ctx->pc = 0x24D59Cu;
    {
        const bool branch_taken_0x24d59c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D59Cu;
        // 0x24d5a0: 0x24110014  addiu       $s1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d59c) {
            ctx->pc = 0x24D68Cu;
            goto label_24d68c;
        }
    }
    ctx->pc = 0x24D5A4u;
label_24d5a4:
    // 0x24d5a4: 0x10000005  b           . + 4 + (0x5 << 2)
label_24d5a8:
    if (ctx->pc == 0x24D5A8u) {
        ctx->pc = 0x24D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5A4u;
        // 0x24d5a8: 0x2e020024  sltiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5ACu;
        goto label_24d5ac;
    }
    ctx->pc = 0x24D5A4u;
    {
        const bool branch_taken_0x24d5a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5A4u;
        // 0x24d5a8: 0x2e020024  sltiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5a4) {
            ctx->pc = 0x24D5BCu;
            goto label_24d5bc;
        }
    }
    ctx->pc = 0x24D5ACu;
label_24d5ac:
    // 0x24d5ac: 0x16200038  bnez        $s1, . + 4 + (0x38 << 2)
label_24d5b0:
    if (ctx->pc == 0x24D5B0u) {
        ctx->pc = 0x24D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5ACu;
        // 0x24d5b0: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5B4u;
        goto label_24d5b4;
    }
    ctx->pc = 0x24D5ACu;
    {
        const bool branch_taken_0x24d5ac = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D5B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5ACu;
        // 0x24d5b0: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5ac) {
            ctx->pc = 0x24D690u;
            goto label_24d690;
        }
    }
    ctx->pc = 0x24D5B4u;
label_24d5b4:
    // 0x24d5b4: 0x24110004  addiu       $s1, $zero, 0x4
    ctx->pc = 0x24d5b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_24d5b8:
    // 0x24d5b8: 0x2e020024  sltiu       $v0, $s0, 0x24
    ctx->pc = 0x24d5b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
label_24d5bc:
    // 0x24d5bc: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_24d5c0:
    if (ctx->pc == 0x24D5C0u) {
        ctx->pc = 0x24D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5BCu;
        // 0x24d5c0: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5C4u;
        goto label_24d5c4;
    }
    ctx->pc = 0x24D5BCu;
    {
        const bool branch_taken_0x24d5bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5BCu;
        // 0x24d5c0: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5bc) {
            ctx->pc = 0x24D5ECu;
            goto label_24d5ec;
        }
    }
    ctx->pc = 0x24D5C4u;
label_24d5c4:
    // 0x24d5c4: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x24d5c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_24d5c8:
    // 0x24d5c8: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x24d5c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_24d5cc:
    // 0x24d5cc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24d5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24d5d0:
    // 0x24d5d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24d5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_24d5d4:
    // 0x24d5d4: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x24d5d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24d5d8:
    // 0x24d5d8: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_24d5dc:
    if (ctx->pc == 0x24D5DCu) {
        ctx->pc = 0x24D5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5D8u;
        // 0x24d5dc: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5E0u;
        goto label_24d5e0;
    }
    ctx->pc = 0x24D5D8u;
    {
        const bool branch_taken_0x24d5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d5d8) {
            ctx->pc = 0x24D5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D5D8u;
            // 0x24d5dc: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D5ECu;
            goto label_24d5ec;
        }
    }
    ctx->pc = 0x24D5E0u;
label_24d5e0:
    // 0x24d5e0: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24d5e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_24d5e4:
    // 0x24d5e4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24d5e8:
    if (ctx->pc == 0x24D5E8u) {
        ctx->pc = 0x24D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5E4u;
        // 0x24d5e8: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5ECu;
        goto label_24d5ec;
    }
    ctx->pc = 0x24D5E4u;
    {
        const bool branch_taken_0x24d5e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5E4u;
        // 0x24d5e8: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5e4) {
            ctx->pc = 0x24D5FCu;
            goto label_24d5fc;
        }
    }
    ctx->pc = 0x24D5ECu;
label_24d5ec:
    // 0x24d5ec: 0xdc6200c8  ld          $v0, 0xC8($v1)
    ctx->pc = 0x24d5ecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 200)));
label_24d5f0:
    // 0x24d5f0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24d5f0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24d5f4:
    // 0x24d5f4: 0x100000b5  b           . + 4 + (0xB5 << 2)
label_24d5f8:
    if (ctx->pc == 0x24D5F8u) {
        ctx->pc = 0x24D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5F4u;
        // 0x24d5f8: 0xfc6200c8  sd          $v0, 0xC8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D5FCu;
        goto label_24d5fc;
    }
    ctx->pc = 0x24D5F4u;
    {
        const bool branch_taken_0x24d5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D5F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D5F4u;
        // 0x24d5f8: 0xfc6200c8  sd          $v0, 0xC8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d5f4) {
            ctx->pc = 0x24D8CCu;
            goto label_24d8cc;
        }
    }
    ctx->pc = 0x24D5FCu;
label_24d5fc:
    // 0x24d5fc: 0x3c04f000  lui         $a0, 0xF000
    ctx->pc = 0x24d5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
label_24d600:
    // 0x24d600: 0xc08a254  jal         func_228950
label_24d604:
    if (ctx->pc == 0x24D604u) {
        ctx->pc = 0x24D608u;
        goto label_24d608;
    }
    ctx->pc = 0x24D600u;
    SET_GPR_U32(ctx, 31, 0x24D608u);
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24D600u, 0x24D608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D608u;
label_24d608:
    // 0x24d608: 0x8e500018  lw          $s0, 0x18($s2)
    ctx->pc = 0x24d608u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_24d60c:
    // 0x24d60c: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x24d60cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
label_24d610:
    // 0x24d610: 0xc08a254  jal         func_228950
label_24d614:
    if (ctx->pc == 0x24D614u) {
        ctx->pc = 0x24D614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D610u;
        // 0x24d614: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D618u;
        goto label_24d618;
    }
    ctx->pc = 0x24D610u;
    SET_GPR_U32(ctx, 31, 0x24D618u);
    ctx->pc = 0x24D614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D610u;
    // 0x24d614: 0x2028024  and         $s0, $s0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24D610u, 0x24D618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D618u;
label_24d618:
    // 0x24d618: 0x1202001d  beq         $s0, $v0, . + 4 + (0x1D << 2)
label_24d61c:
    if (ctx->pc == 0x24D61Cu) {
        ctx->pc = 0x24D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D618u;
        // 0x24d61c: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D620u;
        goto label_24d620;
    }
    ctx->pc = 0x24D618u;
    {
        const bool branch_taken_0x24d618 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D61Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D618u;
        // 0x24d61c: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d618) {
            ctx->pc = 0x24D690u;
            goto label_24d690;
        }
    }
    ctx->pc = 0x24D620u;
label_24d620:
    // 0x24d620: 0xc08b60c  jal         func_22D830
label_24d624:
    if (ctx->pc == 0x24D624u) {
        ctx->pc = 0x24D624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D620u;
        // 0x24d624: 0x9644000a  lhu         $a0, 0xA($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D628u;
        goto label_24d628;
    }
    ctx->pc = 0x24D620u;
    SET_GPR_U32(ctx, 31, 0x24D628u);
    ctx->pc = 0x24D624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D620u;
    // 0x24d624: 0x9644000a  lhu         $a0, 0xA($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 10)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x24D620u, 0x24D628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D628u;
label_24d628:
    // 0x24d628: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x24d628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_24d62c:
    // 0x24d62c: 0xa642000a  sh          $v0, 0xA($s2)
    ctx->pc = 0x24d62cu;
    WRITE16(ADD32(GPR_U32(ctx, 18), 10), (uint16_t)GPR_U32(ctx, 2));
label_24d630:
    // 0x24d630: 0x24670dc8  addiu       $a3, $v1, 0xDC8
    ctx->pc = 0x24d630u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 3528));
label_24d634:
    // 0x24d634: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x24d634u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_24d638:
    // 0x24d638: 0x8aa3001b  lwl         $v1, 0x1B($s5)
    ctx->pc = 0x24d638u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_24d63c:
    // 0x24d63c: 0x9aa30018  lwr         $v1, 0x18($s5)
    ctx->pc = 0x24d63cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_24d640:
    // 0x24d640: 0xa8e30007  swl         $v1, 0x7($a3)
    ctx->pc = 0x24d640u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d644:
    // 0x24d644: 0xb8e30004  swr         $v1, 0x4($a3)
    ctx->pc = 0x24d644u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d648:
    // 0x24d648: 0x24a50390  addiu       $a1, $a1, 0x390
    ctx->pc = 0x24d648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 912));
label_24d64c:
    // 0x24d64c: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x24d64cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
label_24d650:
    // 0x24d650: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x24d650u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_24d654:
    // 0x24d654: 0x92430011  lbu         $v1, 0x11($s2)
    ctx->pc = 0x24d654u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 17)));
label_24d658:
    // 0x24d658: 0x248401d8  addiu       $a0, $a0, 0x1D8
    ctx->pc = 0x24d658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 472));
label_24d65c:
    // 0x24d65c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24d65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_24d660:
    // 0x24d660: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x24d660u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_24d664:
    // 0x24d664: 0x461018  mult        $v0, $v0, $a2
    ctx->pc = 0x24d664u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_24d668:
    // 0x24d668: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x24d668u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_24d66c:
    // 0x24d66c: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x24d66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_24d670:
    // 0x24d670: 0x10400090  beqz        $v0, . + 4 + (0x90 << 2)
label_24d674:
    if (ctx->pc == 0x24D674u) {
        ctx->pc = 0x24D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D670u;
        // 0x24d674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D678u;
        goto label_24d678;
    }
    ctx->pc = 0x24D670u;
    {
        const bool branch_taken_0x24d670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D670u;
        // 0x24d674: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d670) {
            ctx->pc = 0x24D8B4u;
            goto label_24d8b4;
        }
    }
    ctx->pc = 0x24D678u;
label_24d678:
    // 0x24d678: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x24d678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_24d67c:
    // 0x24d67c: 0x40f809  jalr        $v0
label_24d680:
    if (ctx->pc == 0x24D680u) {
        ctx->pc = 0x24D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D67Cu;
        // 0x24d680: 0x26460008  addiu       $a2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D684u;
        goto label_24d684;
    }
    ctx->pc = 0x24D67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x24D684u);
        ctx->pc = 0x24D680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D67Cu;
        // 0x24d680: 0x26460008  addiu       $a2, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D67Cu, 0x24D684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x24D684u;
label_24d684:
    // 0x24d684: 0x1000008c  b           . + 4 + (0x8C << 2)
label_24d688:
    if (ctx->pc == 0x24D688u) {
        ctx->pc = 0x24D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D684u;
        // 0x24d688: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D68Cu;
        goto label_24d68c;
    }
    ctx->pc = 0x24D684u;
    {
        const bool branch_taken_0x24d684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D684u;
        // 0x24d688: 0x8fa60000  lw          $a2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d684) {
            ctx->pc = 0x24D8B8u;
            goto label_24d8b8;
        }
    }
    ctx->pc = 0x24D68Cu;
label_24d68c:
    // 0x24d68c: 0x27c30e98  addiu       $v1, $fp, 0xE98
    ctx->pc = 0x24d68cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
label_24d690:
    // 0x24d690: 0xdc6200b0  ld          $v0, 0xB0($v1)
    ctx->pc = 0x24d690u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 176)));
label_24d694:
    // 0x24d694: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24d694u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24d698:
    // 0x24d698: 0x10000086  b           . + 4 + (0x86 << 2)
label_24d69c:
    if (ctx->pc == 0x24D69Cu) {
        ctx->pc = 0x24D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D698u;
        // 0x24d69c: 0xfc6200b0  sd          $v0, 0xB0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6A0u;
        goto label_24d6a0;
    }
    ctx->pc = 0x24D698u;
    {
        const bool branch_taken_0x24d698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D698u;
        // 0x24d69c: 0xfc6200b0  sd          $v0, 0xB0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d698) {
            ctx->pc = 0x24D8B4u;
            goto label_24d8b4;
        }
    }
    ctx->pc = 0x24D6A0u;
label_24d6a0:
    // 0x24d6a0: 0x10000047  b           . + 4 + (0x47 << 2)
label_24d6a4:
    if (ctx->pc == 0x24D6A4u) {
        ctx->pc = 0x24D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6A0u;
        // 0x24d6a4: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6A8u;
        goto label_24d6a8;
    }
    ctx->pc = 0x24D6A0u;
    {
        const bool branch_taken_0x24d6a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6A0u;
        // 0x24d6a4: 0xa2400000  sb          $zero, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6a0) {
            ctx->pc = 0x24D7C0u;
            goto label_24d7c0;
        }
    }
    ctx->pc = 0x24D6A8u;
label_24d6a8:
    // 0x24d6a8: 0x2e020014  sltiu       $v0, $s0, 0x14
    ctx->pc = 0x24d6a8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
label_24d6ac:
    // 0x24d6ac: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_24d6b0:
    if (ctx->pc == 0x24D6B0u) {
        ctx->pc = 0x24D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6ACu;
        // 0x24d6b0: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6B4u;
        goto label_24d6b4;
    }
    ctx->pc = 0x24D6ACu;
    {
        const bool branch_taken_0x24d6ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6ACu;
        // 0x24d6b0: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6ac) {
            ctx->pc = 0x24D838u;
            goto label_24d838;
        }
    }
    ctx->pc = 0x24D6B4u;
label_24d6b4:
    // 0x24d6b4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x24d6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_24d6b8:
    // 0x24d6b8: 0xc0937d6  jal         func_24DF58
label_24d6bc:
    if (ctx->pc == 0x24D6BCu) {
        ctx->pc = 0x24D6BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6B8u;
        // 0x24d6bc: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6C0u;
        goto label_24d6c0;
    }
    ctx->pc = 0x24D6B8u;
    SET_GPR_U32(ctx, 31, 0x24D6C0u);
    ctx->pc = 0x24D6BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D6B8u;
    // 0x24d6bc: 0xa2420000  sb          $v0, 0x0($s2) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24DF58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24DF58u, 0x24D6B8u, 0x24D6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6C0u;
label_24d6c0:
    // 0x24d6c0: 0xae420010  sw          $v0, 0x10($s2)
    ctx->pc = 0x24d6c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 2));
label_24d6c4:
    // 0x24d6c4: 0x1000003e  b           . + 4 + (0x3E << 2)
label_24d6c8:
    if (ctx->pc == 0x24D6C8u) {
        ctx->pc = 0x24D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6C4u;
        // 0x24d6c8: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6CCu;
        goto label_24d6cc;
    }
    ctx->pc = 0x24D6C4u;
    {
        const bool branch_taken_0x24d6c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6C4u;
        // 0x24d6c8: 0xae42000c  sw          $v0, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6c4) {
            ctx->pc = 0x24D7C0u;
            goto label_24d7c0;
        }
    }
    ctx->pc = 0x24D6CCu;
label_24d6cc:
    // 0x24d6cc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24d6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_24d6d0:
    // 0x24d6d0: 0x8c430db8  lw          $v1, 0xDB8($v0)
    ctx->pc = 0x24d6d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3512)));
label_24d6d4:
    // 0x24d6d4: 0x10600077  beqz        $v1, . + 4 + (0x77 << 2)
label_24d6d8:
    if (ctx->pc == 0x24D6D8u) {
        ctx->pc = 0x24D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6D4u;
        // 0x24d6d8: 0x2a02000c  slti        $v0, $s0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6DCu;
        goto label_24d6dc;
    }
    ctx->pc = 0x24D6D4u;
    {
        const bool branch_taken_0x24d6d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6D4u;
        // 0x24d6d8: 0x2a02000c  slti        $v0, $s0, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)12) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6d4) {
            ctx->pc = 0x24D8B4u;
            goto label_24d8b4;
        }
    }
    ctx->pc = 0x24D6DCu;
label_24d6dc:
    // 0x24d6dc: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_24d6e0:
    if (ctx->pc == 0x24D6E0u) {
        ctx->pc = 0x24D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6DCu;
        // 0x24d6e0: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6E4u;
        goto label_24d6e4;
    }
    ctx->pc = 0x24D6DCu;
    {
        const bool branch_taken_0x24d6dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D6E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6DCu;
        // 0x24d6e0: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6dc) {
            ctx->pc = 0x24D838u;
            goto label_24d838;
        }
    }
    ctx->pc = 0x24D6E4u;
label_24d6e4:
    // 0x24d6e4: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x24d6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_24d6e8:
    // 0x24d6e8: 0x8ad00013  lwl         $s0, 0x13($s6)
    ctx->pc = 0x24d6e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
label_24d6ec:
    // 0x24d6ec: 0x9ad00010  lwr         $s0, 0x10($s6)
    ctx->pc = 0x24d6ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
label_24d6f0:
    // 0x24d6f0: 0xc08a254  jal         func_228950
label_24d6f4:
    if (ctx->pc == 0x24D6F4u) {
        ctx->pc = 0x24D6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6F0u;
        // 0x24d6f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D6F8u;
        goto label_24d6f8;
    }
    ctx->pc = 0x24D6F0u;
    SET_GPR_U32(ctx, 31, 0x24D6F8u);
    ctx->pc = 0x24D6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D6F0u;
    // 0x24d6f4: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24D6F0u, 0x24D6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D6F8u;
label_24d6f8:
    // 0x24d6f8: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
label_24d6fc:
    if (ctx->pc == 0x24D6FCu) {
        ctx->pc = 0x24D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6F8u;
        // 0x24d6fc: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D700u;
        goto label_24d700;
    }
    ctx->pc = 0x24D6F8u;
    {
        const bool branch_taken_0x24d6f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x24D6FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D6F8u;
        // 0x24d6fc: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d6f8) {
            ctx->pc = 0x24D710u;
            goto label_24d710;
        }
    }
    ctx->pc = 0x24D700u;
label_24d700:
    // 0x24d700: 0xc08a254  jal         func_228950
label_24d704:
    if (ctx->pc == 0x24D704u) {
        ctx->pc = 0x24D704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D700u;
        // 0x24d704: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D708u;
        goto label_24d708;
    }
    ctx->pc = 0x24D700u;
    SET_GPR_U32(ctx, 31, 0x24D708u);
    ctx->pc = 0x24D704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D700u;
    // 0x24d704: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24D700u, 0x24D708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D708u;
label_24d708:
    // 0x24d708: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_24d70c:
    if (ctx->pc == 0x24D70Cu) {
        ctx->pc = 0x24D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D708u;
        // 0x24d70c: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D710u;
        goto label_24d710;
    }
    ctx->pc = 0x24D708u;
    {
        const bool branch_taken_0x24d708 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x24D70Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D708u;
        // 0x24d70c: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d708) {
            ctx->pc = 0x24D72Cu;
            goto label_24d72c;
        }
    }
    ctx->pc = 0x24D710u;
label_24d710:
    // 0x24d710: 0x24820dd8  addiu       $v0, $a0, 0xDD8
    ctx->pc = 0x24d710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3544));
label_24d714:
    // 0x24d714: 0x8a8b000f  lwl         $t3, 0xF($s4)
    ctx->pc = 0x24d714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
label_24d718:
    // 0x24d718: 0x9a8b000c  lwr         $t3, 0xC($s4)
    ctx->pc = 0x24d718u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_24d71c:
    // 0x24d71c: 0xa84b0007  swl         $t3, 0x7($v0)
    ctx->pc = 0x24d71cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d720:
    // 0x24d720: 0xb84b0004  swr         $t3, 0x4($v0)
    ctx->pc = 0x24d720u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d724:
    // 0x24d724: 0x10000007  b           . + 4 + (0x7 << 2)
label_24d728:
    if (ctx->pc == 0x24D728u) {
        ctx->pc = 0x24D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D724u;
        // 0x24d728: 0x8e650014  lw          $a1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D72Cu;
        goto label_24d72c;
    }
    ctx->pc = 0x24D724u;
    {
        const bool branch_taken_0x24d724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D724u;
        // 0x24d728: 0x8e650014  lw          $a1, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d724) {
            ctx->pc = 0x24D744u;
            goto label_24d744;
        }
    }
    ctx->pc = 0x24D72Cu;
label_24d72c:
    // 0x24d72c: 0x24820dd8  addiu       $v0, $a0, 0xDD8
    ctx->pc = 0x24d72cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 3544));
label_24d730:
    // 0x24d730: 0x8a870013  lwl         $a3, 0x13($s4)
    ctx->pc = 0x24d730u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
label_24d734:
    // 0x24d734: 0x9a870010  lwr         $a3, 0x10($s4)
    ctx->pc = 0x24d734u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
label_24d738:
    // 0x24d738: 0xa8470007  swl         $a3, 0x7($v0)
    ctx->pc = 0x24d738u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d73c:
    // 0x24d73c: 0xb8470004  swr         $a3, 0x4($v0)
    ctx->pc = 0x24d73cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d740:
    // 0x24d740: 0x8e650014  lw          $a1, 0x14($s3)
    ctx->pc = 0x24d740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_24d744:
    // 0x24d744: 0xc08d460  jal         func_235180
label_24d748:
    if (ctx->pc == 0x24D748u) {
        ctx->pc = 0x24D748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D744u;
        // 0x24d748: 0x24840dd8  addiu       $a0, $a0, 0xDD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D74Cu;
        goto label_24d74c;
    }
    ctx->pc = 0x24D744u;
    SET_GPR_U32(ctx, 31, 0x24D74Cu);
    ctx->pc = 0x24D748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D744u;
    // 0x24d748: 0x24840dd8  addiu       $a0, $a0, 0xDD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x235180u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235180u, 0x24D744u, 0x24D74Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D74Cu;
label_24d74c:
    // 0x24d74c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x24d74cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d750:
    // 0x24d750: 0x12200058  beqz        $s1, . + 4 + (0x58 << 2)
label_24d754:
    if (ctx->pc == 0x24D754u) {
        ctx->pc = 0x24D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D750u;
        // 0x24d754: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D758u;
        goto label_24d758;
    }
    ctx->pc = 0x24D750u;
    {
        const bool branch_taken_0x24d750 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D750u;
        // 0x24d754: 0x24020012  addiu       $v0, $zero, 0x12 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d750) {
            ctx->pc = 0x24D8B4u;
            goto label_24d8b4;
        }
    }
    ctx->pc = 0x24D758u;
label_24d758:
    // 0x24d758: 0xa2420000  sb          $v0, 0x0($s2)
    ctx->pc = 0x24d758u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 2));
label_24d75c:
    // 0x24d75c: 0x8e230080  lw          $v1, 0x80($s1)
    ctx->pc = 0x24d75cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_24d760:
    // 0x24d760: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x24d760u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
label_24d764:
    // 0x24d764: 0x8ad0000f  lwl         $s0, 0xF($s6)
    ctx->pc = 0x24d764u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
label_24d768:
    // 0x24d768: 0x9ad0000c  lwr         $s0, 0xC($s6)
    ctx->pc = 0x24d768u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
label_24d76c:
    // 0x24d76c: 0xc08a254  jal         func_228950
label_24d770:
    if (ctx->pc == 0x24D770u) {
        ctx->pc = 0x24D770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D76Cu;
        // 0x24d770: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D774u;
        goto label_24d774;
    }
    ctx->pc = 0x24D76Cu;
    SET_GPR_U32(ctx, 31, 0x24D774u);
    ctx->pc = 0x24D770u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D76Cu;
    // 0x24d770: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x24D76Cu, 0x24D774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D774u;
label_24d774:
    // 0x24d774: 0x16020013  bne         $s0, $v0, . + 4 + (0x13 << 2)
label_24d778:
    if (ctx->pc == 0x24D778u) {
        ctx->pc = 0x24D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D774u;
        // 0x24d778: 0x27c50e98  addiu       $a1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D77Cu;
        goto label_24d77c;
    }
    ctx->pc = 0x24D774u;
    {
        const bool branch_taken_0x24d774 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x24D778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D774u;
        // 0x24d778: 0x27c50e98  addiu       $a1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d774) {
            ctx->pc = 0x24D7C4u;
            goto label_24d7c4;
        }
    }
    ctx->pc = 0x24D77Cu;
label_24d77c:
    // 0x24d77c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24d77cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_24d780:
    // 0x24d780: 0x94420030  lhu         $v0, 0x30($v0)
    ctx->pc = 0x24d780u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 48)));
label_24d784:
    // 0x24d784: 0x30430002  andi        $v1, $v0, 0x2
    ctx->pc = 0x24d784u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_24d788:
    // 0x24d788: 0x10600007  beqz        $v1, . + 4 + (0x7 << 2)
label_24d78c:
    if (ctx->pc == 0x24D78Cu) {
        ctx->pc = 0x24D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D788u;
        // 0x24d78c: 0x30420010  andi        $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D790u;
        goto label_24d790;
    }
    ctx->pc = 0x24D788u;
    {
        const bool branch_taken_0x24d788 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D788u;
        // 0x24d78c: 0x30420010  andi        $v0, $v0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d788) {
            ctx->pc = 0x24D7A8u;
            goto label_24d7a8;
        }
    }
    ctx->pc = 0x24D790u;
label_24d790:
    // 0x24d790: 0x8a240073  lwl         $a0, 0x73($s1)
    ctx->pc = 0x24d790u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 115); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_24d794:
    // 0x24d794: 0x9a240070  lwr         $a0, 0x70($s1)
    ctx->pc = 0x24d794u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 112); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_24d798:
    // 0x24d798: 0xaa84000f  swl         $a0, 0xF($s4)
    ctx->pc = 0x24d798u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d79c:
    // 0x24d79c: 0xba84000c  swr         $a0, 0xC($s4)
    ctx->pc = 0x24d79cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d7a0:
    // 0x24d7a0: 0x10000008  b           . + 4 + (0x8 << 2)
label_24d7a4:
    if (ctx->pc == 0x24D7A4u) {
        ctx->pc = 0x24D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7A0u;
        // 0x24d7a4: 0x27c50e98  addiu       $a1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7A8u;
        goto label_24d7a8;
    }
    ctx->pc = 0x24D7A0u;
    {
        const bool branch_taken_0x24d7a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D7A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7A0u;
        // 0x24d7a4: 0x27c50e98  addiu       $a1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7a0) {
            ctx->pc = 0x24D7C4u;
            goto label_24d7c4;
        }
    }
    ctx->pc = 0x24D7A8u;
label_24d7a8:
    // 0x24d7a8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_24d7ac:
    if (ctx->pc == 0x24D7ACu) {
        ctx->pc = 0x24D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7A8u;
        // 0x24d7ac: 0x27c50e98  addiu       $a1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7B0u;
        goto label_24d7b0;
    }
    ctx->pc = 0x24D7A8u;
    {
        const bool branch_taken_0x24d7a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D7ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7A8u;
        // 0x24d7ac: 0x27c50e98  addiu       $a1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7a8) {
            ctx->pc = 0x24D7C4u;
            goto label_24d7c4;
        }
    }
    ctx->pc = 0x24D7B0u;
label_24d7b0:
    // 0x24d7b0: 0x8a2a0073  lwl         $t2, 0x73($s1)
    ctx->pc = 0x24d7b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 115); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_24d7b4:
    // 0x24d7b4: 0x9a2a0070  lwr         $t2, 0x70($s1)
    ctx->pc = 0x24d7b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 112); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_24d7b8:
    // 0x24d7b8: 0xaa8a000f  swl         $t2, 0xF($s4)
    ctx->pc = 0x24d7b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d7bc:
    // 0x24d7bc: 0xba8a000c  swr         $t2, 0xC($s4)
    ctx->pc = 0x24d7bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d7c0:
    // 0x24d7c0: 0x27c50e98  addiu       $a1, $fp, 0xE98
    ctx->pc = 0x24d7c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
label_24d7c4:
    // 0x24d7c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24d7c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24d7c8:
    // 0x24d7c8: 0xdca200d0  ld          $v0, 0xD0($a1)
    ctx->pc = 0x24d7c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 5), 208)));
label_24d7cc:
    // 0x24d7cc: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x24d7ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
label_24d7d0:
    // 0x24d7d0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24d7d0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24d7d4:
    // 0x24d7d4: 0xfca200d0  sd          $v0, 0xD0($a1)
    ctx->pc = 0x24d7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 208), GPR_U64(ctx, 2));
label_24d7d8:
    // 0x24d7d8: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x24d7d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_24d7dc:
    // 0x24d7dc: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x24d7dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_24d7e0:
    // 0x24d7e0: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x24d7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
label_24d7e4:
    // 0x24d7e4: 0xdc620000  ld          $v0, 0x0($v1)
    ctx->pc = 0x24d7e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 0)));
label_24d7e8:
    // 0x24d7e8: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24d7e8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24d7ec:
    // 0x24d7ec: 0xc093642  jal         func_24D908
label_24d7f0:
    if (ctx->pc == 0x24D7F0u) {
        ctx->pc = 0x24D7F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7ECu;
        // 0x24d7f0: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7F4u;
        goto label_24d7f4;
    }
    ctx->pc = 0x24D7ECu;
    SET_GPR_U32(ctx, 31, 0x24D7F4u);
    ctx->pc = 0x24D7F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D7ECu;
    // 0x24d7f0: 0xfc620000  sd          $v0, 0x0($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D908u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24D908u, 0x24D7ECu, 0x24D7F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D7F4u;
label_24d7f4:
    // 0x24d7f4: 0x10000038  b           . + 4 + (0x38 << 2)
label_24d7f8:
    if (ctx->pc == 0x24D7F8u) {
        ctx->pc = 0x24D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7F4u;
        // 0x24d7f8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D7FCu;
        goto label_24d7fc;
    }
    ctx->pc = 0x24D7F4u;
    {
        const bool branch_taken_0x24d7f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D7F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D7F4u;
        // 0x24d7f8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d7f4) {
            ctx->pc = 0x24D8D8u;
            goto label_24d8d8;
        }
    }
    ctx->pc = 0x24D7FCu;
label_24d7fc:
    // 0x24d7fc: 0x2a220004  slti        $v0, $s1, 0x4
    ctx->pc = 0x24d7fcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)4) ? 1 : 0);
label_24d800:
    // 0x24d800: 0x1040ffa2  beqz        $v0, . + 4 + (-0x5E << 2)
label_24d804:
    if (ctx->pc == 0x24D804u) {
        ctx->pc = 0x24D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D800u;
        // 0x24d804: 0x2e020024  sltiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D808u;
        goto label_24d808;
    }
    ctx->pc = 0x24D800u;
    {
        const bool branch_taken_0x24d800 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D804u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D800u;
        // 0x24d804: 0x2e020024  sltiu       $v0, $s0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)36) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d800) {
            ctx->pc = 0x24D68Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24d68c;
        }
    }
    ctx->pc = 0x24D808u;
label_24d808:
    // 0x24d808: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_24d80c:
    if (ctx->pc == 0x24D80Cu) {
        ctx->pc = 0x24D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D808u;
        // 0x24d80c: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D810u;
        goto label_24d810;
    }
    ctx->pc = 0x24D808u;
    {
        const bool branch_taken_0x24d808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x24D80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D808u;
        // 0x24d80c: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d808) {
            ctx->pc = 0x24D838u;
            goto label_24d838;
        }
    }
    ctx->pc = 0x24D810u;
label_24d810:
    // 0x24d810: 0x92430008  lbu         $v1, 0x8($s2)
    ctx->pc = 0x24d810u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 8)));
label_24d814:
    // 0x24d814: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x24d814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_24d818:
    // 0x24d818: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x24d818u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_24d81c:
    // 0x24d81c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x24d81cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_24d820:
    // 0x24d820: 0x202102a  slt         $v0, $s0, $v0
    ctx->pc = 0x24d820u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_24d824:
    // 0x24d824: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_24d828:
    if (ctx->pc == 0x24D828u) {
        ctx->pc = 0x24D828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D824u;
        // 0x24d828: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D82Cu;
        goto label_24d82c;
    }
    ctx->pc = 0x24D824u;
    {
        const bool branch_taken_0x24d824 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24d824) {
            ctx->pc = 0x24D828u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x24D824u;
            // 0x24d828: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
            ctx->in_delay_slot = false;
            ctx->pc = 0x24D838u;
            goto label_24d838;
        }
    }
    ctx->pc = 0x24D82Cu;
label_24d82c:
    // 0x24d82c: 0x2c620005  sltiu       $v0, $v1, 0x5
    ctx->pc = 0x24d82cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_24d830:
    // 0x24d830: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_24d834:
    if (ctx->pc == 0x24D834u) {
        ctx->pc = 0x24D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D830u;
        // 0x24d834: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D838u;
        goto label_24d838;
    }
    ctx->pc = 0x24D830u;
    {
        const bool branch_taken_0x24d830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D830u;
        // 0x24d834: 0x27c30e98  addiu       $v1, $fp, 0xE98 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 30), 3736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d830) {
            ctx->pc = 0x24D848u;
            goto label_24d848;
        }
    }
    ctx->pc = 0x24D838u;
label_24d838:
    // 0x24d838: 0xdc6200c8  ld          $v0, 0xC8($v1)
    ctx->pc = 0x24d838u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 200)));
label_24d83c:
    // 0x24d83c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x24d83cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_24d840:
    // 0x24d840: 0x1000001c  b           . + 4 + (0x1C << 2)
label_24d844:
    if (ctx->pc == 0x24D844u) {
        ctx->pc = 0x24D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D840u;
        // 0x24d844: 0xfc6200c8  sd          $v0, 0xC8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D848u;
        goto label_24d848;
    }
    ctx->pc = 0x24D840u;
    {
        const bool branch_taken_0x24d840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D840u;
        // 0x24d844: 0xfc6200c8  sd          $v0, 0xC8($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 200), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d840) {
            ctx->pc = 0x24D8B4u;
            goto label_24d8b4;
        }
    }
    ctx->pc = 0x24D848u;
label_24d848:
    // 0x24d848: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x24d848u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_24d84c:
    // 0x24d84c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x24d84cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_24d850:
    // 0x24d850: 0x24420de8  addiu       $v0, $v0, 0xDE8
    ctx->pc = 0x24d850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3560));
label_24d854:
    // 0x24d854: 0x24a50dd8  addiu       $a1, $a1, 0xDD8
    ctx->pc = 0x24d854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 3544));
label_24d858:
    // 0x24d858: 0x8a84000f  lwl         $a0, 0xF($s4)
    ctx->pc = 0x24d858u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_24d85c:
    // 0x24d85c: 0x9a84000c  lwr         $a0, 0xC($s4)
    ctx->pc = 0x24d85cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_24d860:
    // 0x24d860: 0xa8440007  swl         $a0, 0x7($v0)
    ctx->pc = 0x24d860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d864:
    // 0x24d864: 0xb8440004  swr         $a0, 0x4($v0)
    ctx->pc = 0x24d864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d868:
    // 0x24d868: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x24d868u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24d86c:
    // 0x24d86c: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x24d86cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_24d870:
    // 0x24d870: 0x8aab0007  lwl         $t3, 0x7($s5)
    ctx->pc = 0x24d870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 11) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 11, (int32_t)merged); }
label_24d874:
    // 0x24d874: 0x9aab0004  lwr         $t3, 0x4($s5)
    ctx->pc = 0x24d874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 11) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 11) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 11, merged64); }
label_24d878:
    // 0x24d878: 0xa8ab0007  swl         $t3, 0x7($a1)
    ctx->pc = 0x24d878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d87c:
    // 0x24d87c: 0xb8ab0004  swr         $t3, 0x4($a1)
    ctx->pc = 0x24d87cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 11); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d880:
    // 0x24d880: 0x26100dc8  addiu       $s0, $s0, 0xDC8
    ctx->pc = 0x24d880u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 3528));
label_24d884:
    // 0x24d884: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x24d884u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24d888:
    // 0x24d888: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x24d888u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24d88c:
    // 0x24d88c: 0x24070006  addiu       $a3, $zero, 0x6
    ctx->pc = 0x24d88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_24d890:
    // 0x24d890: 0x8aaa001b  lwl         $t2, 0x1B($s5)
    ctx->pc = 0x24d890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
label_24d894:
    // 0x24d894: 0x9aaa0018  lwr         $t2, 0x18($s5)
    ctx->pc = 0x24d894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 21), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 10) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 10) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 10, merged64); }
label_24d898:
    // 0x24d898: 0xaa0a0007  swl         $t2, 0x7($s0)
    ctx->pc = 0x24d898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d89c:
    // 0x24d89c: 0xba0a0004  swr         $t2, 0x4($s0)
    ctx->pc = 0x24d89cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 10); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_24d8a0:
    // 0x24d8a0: 0xc090c84  jal         func_243210
label_24d8a4:
    if (ctx->pc == 0x24D8A4u) {
        ctx->pc = 0x24D8A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8A0u;
        // 0x24d8a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8A8u;
        goto label_24d8a8;
    }
    ctx->pc = 0x24D8A0u;
    SET_GPR_U32(ctx, 31, 0x24D8A8u);
    ctx->pc = 0x24D8A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8A0u;
    // 0x24d8a4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243210u, 0x24D8A0u, 0x24D8A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8A8u;
label_24d8a8:
    // 0x24d8a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x24d8a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_24d8ac:
    // 0x24d8ac: 0xc08a1ce  jal         func_228738
label_24d8b0:
    if (ctx->pc == 0x24D8B0u) {
        ctx->pc = 0x24D8B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8ACu;
        // 0x24d8b0: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8B4u;
        goto label_24d8b4;
    }
    ctx->pc = 0x24D8ACu;
    SET_GPR_U32(ctx, 31, 0x24D8B4u);
    ctx->pc = 0x24D8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8ACu;
    // 0x24d8b0: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228738u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228738u, 0x24D8ACu, 0x24D8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8B4u;
label_24d8b4:
    // 0x24d8b4: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x24d8b4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_24d8b8:
    // 0x24d8b8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24d8b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_24d8bc:
    // 0x24d8bc: 0xc094a0e  jal         func_252838
label_24d8c0:
    if (ctx->pc == 0x24D8C0u) {
        ctx->pc = 0x24D8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8BCu;
        // 0x24d8c0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8C4u;
        goto label_24d8c4;
    }
    ctx->pc = 0x24D8BCu;
    SET_GPR_U32(ctx, 31, 0x24D8C4u);
    ctx->pc = 0x24D8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8BCu;
    // 0x24d8c0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x252838u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x252838u, 0x24D8BCu, 0x24D8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8C4u;
label_24d8c4:
    // 0x24d8c4: 0x10000004  b           . + 4 + (0x4 << 2)
label_24d8c8:
    if (ctx->pc == 0x24D8C8u) {
        ctx->pc = 0x24D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8C4u;
        // 0x24d8c8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8CCu;
        goto label_24d8cc;
    }
    ctx->pc = 0x24D8C4u;
    {
        const bool branch_taken_0x24d8c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24D8C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8C4u;
        // 0x24d8c8: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24d8c4) {
            ctx->pc = 0x24D8D8u;
            goto label_24d8d8;
        }
    }
    ctx->pc = 0x24D8CCu;
label_24d8cc:
    // 0x24d8cc: 0xc08a9d6  jal         func_22A758
label_24d8d0:
    if (ctx->pc == 0x24D8D0u) {
        ctx->pc = 0x24D8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8CCu;
        // 0x24d8d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D8D4u;
        goto label_24d8d4;
    }
    ctx->pc = 0x24D8CCu;
    SET_GPR_U32(ctx, 31, 0x24D8D4u);
    ctx->pc = 0x24D8D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24D8CCu;
    // 0x24d8d0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x24D8CCu, 0x24D8D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24D8D4u;
label_24d8d4:
    // 0x24d8d4: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x24d8d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24d8d8:
    // 0x24d8d8: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24d8d8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_24d8dc:
    // 0x24d8dc: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x24d8dcu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_24d8e0:
    // 0x24d8e0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x24d8e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_24d8e4:
    // 0x24d8e4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x24d8e4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24d8e8:
    // 0x24d8e8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24d8e8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_24d8ec:
    // 0x24d8ec: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x24d8ecu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_24d8f0:
    // 0x24d8f0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x24d8f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_24d8f4:
    // 0x24d8f4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x24d8f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24d8f8:
    // 0x24d8f8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x24d8f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24d8fc:
    // 0x24d8fc: 0x3e00008  jr          $ra
label_24d900:
    if (ctx->pc == 0x24D900u) {
        ctx->pc = 0x24D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8FCu;
        // 0x24d900: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = 0x24D904u;
        goto label_24d904;
    }
    ctx->pc = 0x24D8FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24D900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24D8FCu;
        // 0x24d900: 0x27bd0130  addiu       $sp, $sp, 0x130 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24D8FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24D904u;
label_24d904:
    // 0x24d904: 0x0  nop
    ctx->pc = 0x24d904u;
    // NOP
}
