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

// Function: sub_001BEE68
// Address: 0x1bee68 - 0x1bf9d0
void sub_001BEE68_0x1bee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001BEE68_0x1bee68");
#endif

    switch (ctx->pc) {
        case 0x1bee68u: goto label_1bee68;
        case 0x1bee6cu: goto label_1bee6c;
        case 0x1bee70u: goto label_1bee70;
        case 0x1bee74u: goto label_1bee74;
        case 0x1bee78u: goto label_1bee78;
        case 0x1bee7cu: goto label_1bee7c;
        case 0x1bee80u: goto label_1bee80;
        case 0x1bee84u: goto label_1bee84;
        case 0x1bee88u: goto label_1bee88;
        case 0x1bee8cu: goto label_1bee8c;
        case 0x1bee90u: goto label_1bee90;
        case 0x1bee94u: goto label_1bee94;
        case 0x1bee98u: goto label_1bee98;
        case 0x1bee9cu: goto label_1bee9c;
        case 0x1beea0u: goto label_1beea0;
        case 0x1beea4u: goto label_1beea4;
        case 0x1beea8u: goto label_1beea8;
        case 0x1beeacu: goto label_1beeac;
        case 0x1beeb0u: goto label_1beeb0;
        case 0x1beeb4u: goto label_1beeb4;
        case 0x1beeb8u: goto label_1beeb8;
        case 0x1beebcu: goto label_1beebc;
        case 0x1beec0u: goto label_1beec0;
        case 0x1beec4u: goto label_1beec4;
        case 0x1beec8u: goto label_1beec8;
        case 0x1beeccu: goto label_1beecc;
        case 0x1beed0u: goto label_1beed0;
        case 0x1beed4u: goto label_1beed4;
        case 0x1beed8u: goto label_1beed8;
        case 0x1beedcu: goto label_1beedc;
        case 0x1beee0u: goto label_1beee0;
        case 0x1beee4u: goto label_1beee4;
        case 0x1beee8u: goto label_1beee8;
        case 0x1beeecu: goto label_1beeec;
        case 0x1beef0u: goto label_1beef0;
        case 0x1beef4u: goto label_1beef4;
        case 0x1beef8u: goto label_1beef8;
        case 0x1beefcu: goto label_1beefc;
        case 0x1bef00u: goto label_1bef00;
        case 0x1bef04u: goto label_1bef04;
        case 0x1bef08u: goto label_1bef08;
        case 0x1bef0cu: goto label_1bef0c;
        case 0x1bef10u: goto label_1bef10;
        case 0x1bef14u: goto label_1bef14;
        case 0x1bef18u: goto label_1bef18;
        case 0x1bef1cu: goto label_1bef1c;
        case 0x1bef20u: goto label_1bef20;
        case 0x1bef24u: goto label_1bef24;
        case 0x1bef28u: goto label_1bef28;
        case 0x1bef2cu: goto label_1bef2c;
        case 0x1bef30u: goto label_1bef30;
        case 0x1bef34u: goto label_1bef34;
        case 0x1bef38u: goto label_1bef38;
        case 0x1bef3cu: goto label_1bef3c;
        case 0x1bef40u: goto label_1bef40;
        case 0x1bef44u: goto label_1bef44;
        case 0x1bef48u: goto label_1bef48;
        case 0x1bef4cu: goto label_1bef4c;
        case 0x1bef50u: goto label_1bef50;
        case 0x1bef54u: goto label_1bef54;
        case 0x1bef58u: goto label_1bef58;
        case 0x1bef5cu: goto label_1bef5c;
        case 0x1bef60u: goto label_1bef60;
        case 0x1bef64u: goto label_1bef64;
        case 0x1bef68u: goto label_1bef68;
        case 0x1bef6cu: goto label_1bef6c;
        case 0x1bef70u: goto label_1bef70;
        case 0x1bef74u: goto label_1bef74;
        case 0x1bef78u: goto label_1bef78;
        case 0x1bef7cu: goto label_1bef7c;
        case 0x1bef80u: goto label_1bef80;
        case 0x1bef84u: goto label_1bef84;
        case 0x1bef88u: goto label_1bef88;
        case 0x1bef8cu: goto label_1bef8c;
        case 0x1bef90u: goto label_1bef90;
        case 0x1bef94u: goto label_1bef94;
        case 0x1bef98u: goto label_1bef98;
        case 0x1bef9cu: goto label_1bef9c;
        case 0x1befa0u: goto label_1befa0;
        case 0x1befa4u: goto label_1befa4;
        case 0x1befa8u: goto label_1befa8;
        case 0x1befacu: goto label_1befac;
        case 0x1befb0u: goto label_1befb0;
        case 0x1befb4u: goto label_1befb4;
        case 0x1befb8u: goto label_1befb8;
        case 0x1befbcu: goto label_1befbc;
        case 0x1befc0u: goto label_1befc0;
        case 0x1befc4u: goto label_1befc4;
        case 0x1befc8u: goto label_1befc8;
        case 0x1befccu: goto label_1befcc;
        case 0x1befd0u: goto label_1befd0;
        case 0x1befd4u: goto label_1befd4;
        case 0x1befd8u: goto label_1befd8;
        case 0x1befdcu: goto label_1befdc;
        case 0x1befe0u: goto label_1befe0;
        case 0x1befe4u: goto label_1befe4;
        case 0x1befe8u: goto label_1befe8;
        case 0x1befecu: goto label_1befec;
        case 0x1beff0u: goto label_1beff0;
        case 0x1beff4u: goto label_1beff4;
        case 0x1beff8u: goto label_1beff8;
        case 0x1beffcu: goto label_1beffc;
        case 0x1bf000u: goto label_1bf000;
        case 0x1bf004u: goto label_1bf004;
        case 0x1bf008u: goto label_1bf008;
        case 0x1bf00cu: goto label_1bf00c;
        case 0x1bf010u: goto label_1bf010;
        case 0x1bf014u: goto label_1bf014;
        case 0x1bf018u: goto label_1bf018;
        case 0x1bf01cu: goto label_1bf01c;
        case 0x1bf020u: goto label_1bf020;
        case 0x1bf024u: goto label_1bf024;
        case 0x1bf028u: goto label_1bf028;
        case 0x1bf02cu: goto label_1bf02c;
        case 0x1bf030u: goto label_1bf030;
        case 0x1bf034u: goto label_1bf034;
        case 0x1bf038u: goto label_1bf038;
        case 0x1bf03cu: goto label_1bf03c;
        case 0x1bf040u: goto label_1bf040;
        case 0x1bf044u: goto label_1bf044;
        case 0x1bf048u: goto label_1bf048;
        case 0x1bf04cu: goto label_1bf04c;
        case 0x1bf050u: goto label_1bf050;
        case 0x1bf054u: goto label_1bf054;
        case 0x1bf058u: goto label_1bf058;
        case 0x1bf05cu: goto label_1bf05c;
        case 0x1bf060u: goto label_1bf060;
        case 0x1bf064u: goto label_1bf064;
        case 0x1bf068u: goto label_1bf068;
        case 0x1bf06cu: goto label_1bf06c;
        case 0x1bf070u: goto label_1bf070;
        case 0x1bf074u: goto label_1bf074;
        case 0x1bf078u: goto label_1bf078;
        case 0x1bf07cu: goto label_1bf07c;
        case 0x1bf080u: goto label_1bf080;
        case 0x1bf084u: goto label_1bf084;
        case 0x1bf088u: goto label_1bf088;
        case 0x1bf08cu: goto label_1bf08c;
        case 0x1bf090u: goto label_1bf090;
        case 0x1bf094u: goto label_1bf094;
        case 0x1bf098u: goto label_1bf098;
        case 0x1bf09cu: goto label_1bf09c;
        case 0x1bf0a0u: goto label_1bf0a0;
        case 0x1bf0a4u: goto label_1bf0a4;
        case 0x1bf0a8u: goto label_1bf0a8;
        case 0x1bf0acu: goto label_1bf0ac;
        case 0x1bf0b0u: goto label_1bf0b0;
        case 0x1bf0b4u: goto label_1bf0b4;
        case 0x1bf0b8u: goto label_1bf0b8;
        case 0x1bf0bcu: goto label_1bf0bc;
        case 0x1bf0c0u: goto label_1bf0c0;
        case 0x1bf0c4u: goto label_1bf0c4;
        case 0x1bf0c8u: goto label_1bf0c8;
        case 0x1bf0ccu: goto label_1bf0cc;
        case 0x1bf0d0u: goto label_1bf0d0;
        case 0x1bf0d4u: goto label_1bf0d4;
        case 0x1bf0d8u: goto label_1bf0d8;
        case 0x1bf0dcu: goto label_1bf0dc;
        case 0x1bf0e0u: goto label_1bf0e0;
        case 0x1bf0e4u: goto label_1bf0e4;
        case 0x1bf0e8u: goto label_1bf0e8;
        case 0x1bf0ecu: goto label_1bf0ec;
        case 0x1bf0f0u: goto label_1bf0f0;
        case 0x1bf0f4u: goto label_1bf0f4;
        case 0x1bf0f8u: goto label_1bf0f8;
        case 0x1bf0fcu: goto label_1bf0fc;
        case 0x1bf100u: goto label_1bf100;
        case 0x1bf104u: goto label_1bf104;
        case 0x1bf108u: goto label_1bf108;
        case 0x1bf10cu: goto label_1bf10c;
        case 0x1bf110u: goto label_1bf110;
        case 0x1bf114u: goto label_1bf114;
        case 0x1bf118u: goto label_1bf118;
        case 0x1bf11cu: goto label_1bf11c;
        case 0x1bf120u: goto label_1bf120;
        case 0x1bf124u: goto label_1bf124;
        case 0x1bf128u: goto label_1bf128;
        case 0x1bf12cu: goto label_1bf12c;
        case 0x1bf130u: goto label_1bf130;
        case 0x1bf134u: goto label_1bf134;
        case 0x1bf138u: goto label_1bf138;
        case 0x1bf13cu: goto label_1bf13c;
        case 0x1bf140u: goto label_1bf140;
        case 0x1bf144u: goto label_1bf144;
        case 0x1bf148u: goto label_1bf148;
        case 0x1bf14cu: goto label_1bf14c;
        case 0x1bf150u: goto label_1bf150;
        case 0x1bf154u: goto label_1bf154;
        case 0x1bf158u: goto label_1bf158;
        case 0x1bf15cu: goto label_1bf15c;
        case 0x1bf160u: goto label_1bf160;
        case 0x1bf164u: goto label_1bf164;
        case 0x1bf168u: goto label_1bf168;
        case 0x1bf16cu: goto label_1bf16c;
        case 0x1bf170u: goto label_1bf170;
        case 0x1bf174u: goto label_1bf174;
        case 0x1bf178u: goto label_1bf178;
        case 0x1bf17cu: goto label_1bf17c;
        case 0x1bf180u: goto label_1bf180;
        case 0x1bf184u: goto label_1bf184;
        case 0x1bf188u: goto label_1bf188;
        case 0x1bf18cu: goto label_1bf18c;
        case 0x1bf190u: goto label_1bf190;
        case 0x1bf194u: goto label_1bf194;
        case 0x1bf198u: goto label_1bf198;
        case 0x1bf19cu: goto label_1bf19c;
        case 0x1bf1a0u: goto label_1bf1a0;
        case 0x1bf1a4u: goto label_1bf1a4;
        case 0x1bf1a8u: goto label_1bf1a8;
        case 0x1bf1acu: goto label_1bf1ac;
        case 0x1bf1b0u: goto label_1bf1b0;
        case 0x1bf1b4u: goto label_1bf1b4;
        case 0x1bf1b8u: goto label_1bf1b8;
        case 0x1bf1bcu: goto label_1bf1bc;
        case 0x1bf1c0u: goto label_1bf1c0;
        case 0x1bf1c4u: goto label_1bf1c4;
        case 0x1bf1c8u: goto label_1bf1c8;
        case 0x1bf1ccu: goto label_1bf1cc;
        case 0x1bf1d0u: goto label_1bf1d0;
        case 0x1bf1d4u: goto label_1bf1d4;
        case 0x1bf1d8u: goto label_1bf1d8;
        case 0x1bf1dcu: goto label_1bf1dc;
        case 0x1bf1e0u: goto label_1bf1e0;
        case 0x1bf1e4u: goto label_1bf1e4;
        case 0x1bf1e8u: goto label_1bf1e8;
        case 0x1bf1ecu: goto label_1bf1ec;
        case 0x1bf1f0u: goto label_1bf1f0;
        case 0x1bf1f4u: goto label_1bf1f4;
        case 0x1bf1f8u: goto label_1bf1f8;
        case 0x1bf1fcu: goto label_1bf1fc;
        case 0x1bf200u: goto label_1bf200;
        case 0x1bf204u: goto label_1bf204;
        case 0x1bf208u: goto label_1bf208;
        case 0x1bf20cu: goto label_1bf20c;
        case 0x1bf210u: goto label_1bf210;
        case 0x1bf214u: goto label_1bf214;
        case 0x1bf218u: goto label_1bf218;
        case 0x1bf21cu: goto label_1bf21c;
        case 0x1bf220u: goto label_1bf220;
        case 0x1bf224u: goto label_1bf224;
        case 0x1bf228u: goto label_1bf228;
        case 0x1bf22cu: goto label_1bf22c;
        case 0x1bf230u: goto label_1bf230;
        case 0x1bf234u: goto label_1bf234;
        case 0x1bf238u: goto label_1bf238;
        case 0x1bf23cu: goto label_1bf23c;
        case 0x1bf240u: goto label_1bf240;
        case 0x1bf244u: goto label_1bf244;
        case 0x1bf248u: goto label_1bf248;
        case 0x1bf24cu: goto label_1bf24c;
        case 0x1bf250u: goto label_1bf250;
        case 0x1bf254u: goto label_1bf254;
        case 0x1bf258u: goto label_1bf258;
        case 0x1bf25cu: goto label_1bf25c;
        case 0x1bf260u: goto label_1bf260;
        case 0x1bf264u: goto label_1bf264;
        case 0x1bf268u: goto label_1bf268;
        case 0x1bf26cu: goto label_1bf26c;
        case 0x1bf270u: goto label_1bf270;
        case 0x1bf274u: goto label_1bf274;
        case 0x1bf278u: goto label_1bf278;
        case 0x1bf27cu: goto label_1bf27c;
        case 0x1bf280u: goto label_1bf280;
        case 0x1bf284u: goto label_1bf284;
        case 0x1bf288u: goto label_1bf288;
        case 0x1bf28cu: goto label_1bf28c;
        case 0x1bf290u: goto label_1bf290;
        case 0x1bf294u: goto label_1bf294;
        case 0x1bf298u: goto label_1bf298;
        case 0x1bf29cu: goto label_1bf29c;
        case 0x1bf2a0u: goto label_1bf2a0;
        case 0x1bf2a4u: goto label_1bf2a4;
        case 0x1bf2a8u: goto label_1bf2a8;
        case 0x1bf2acu: goto label_1bf2ac;
        case 0x1bf2b0u: goto label_1bf2b0;
        case 0x1bf2b4u: goto label_1bf2b4;
        case 0x1bf2b8u: goto label_1bf2b8;
        case 0x1bf2bcu: goto label_1bf2bc;
        case 0x1bf2c0u: goto label_1bf2c0;
        case 0x1bf2c4u: goto label_1bf2c4;
        case 0x1bf2c8u: goto label_1bf2c8;
        case 0x1bf2ccu: goto label_1bf2cc;
        case 0x1bf2d0u: goto label_1bf2d0;
        case 0x1bf2d4u: goto label_1bf2d4;
        case 0x1bf2d8u: goto label_1bf2d8;
        case 0x1bf2dcu: goto label_1bf2dc;
        case 0x1bf2e0u: goto label_1bf2e0;
        case 0x1bf2e4u: goto label_1bf2e4;
        case 0x1bf2e8u: goto label_1bf2e8;
        case 0x1bf2ecu: goto label_1bf2ec;
        case 0x1bf2f0u: goto label_1bf2f0;
        case 0x1bf2f4u: goto label_1bf2f4;
        case 0x1bf2f8u: goto label_1bf2f8;
        case 0x1bf2fcu: goto label_1bf2fc;
        case 0x1bf300u: goto label_1bf300;
        case 0x1bf304u: goto label_1bf304;
        case 0x1bf308u: goto label_1bf308;
        case 0x1bf30cu: goto label_1bf30c;
        case 0x1bf310u: goto label_1bf310;
        case 0x1bf314u: goto label_1bf314;
        case 0x1bf318u: goto label_1bf318;
        case 0x1bf31cu: goto label_1bf31c;
        case 0x1bf320u: goto label_1bf320;
        case 0x1bf324u: goto label_1bf324;
        case 0x1bf328u: goto label_1bf328;
        case 0x1bf32cu: goto label_1bf32c;
        case 0x1bf330u: goto label_1bf330;
        case 0x1bf334u: goto label_1bf334;
        case 0x1bf338u: goto label_1bf338;
        case 0x1bf33cu: goto label_1bf33c;
        case 0x1bf340u: goto label_1bf340;
        case 0x1bf344u: goto label_1bf344;
        case 0x1bf348u: goto label_1bf348;
        case 0x1bf34cu: goto label_1bf34c;
        case 0x1bf350u: goto label_1bf350;
        case 0x1bf354u: goto label_1bf354;
        case 0x1bf358u: goto label_1bf358;
        case 0x1bf35cu: goto label_1bf35c;
        case 0x1bf360u: goto label_1bf360;
        case 0x1bf364u: goto label_1bf364;
        case 0x1bf368u: goto label_1bf368;
        case 0x1bf36cu: goto label_1bf36c;
        case 0x1bf370u: goto label_1bf370;
        case 0x1bf374u: goto label_1bf374;
        case 0x1bf378u: goto label_1bf378;
        case 0x1bf37cu: goto label_1bf37c;
        case 0x1bf380u: goto label_1bf380;
        case 0x1bf384u: goto label_1bf384;
        case 0x1bf388u: goto label_1bf388;
        case 0x1bf38cu: goto label_1bf38c;
        case 0x1bf390u: goto label_1bf390;
        case 0x1bf394u: goto label_1bf394;
        case 0x1bf398u: goto label_1bf398;
        case 0x1bf39cu: goto label_1bf39c;
        case 0x1bf3a0u: goto label_1bf3a0;
        case 0x1bf3a4u: goto label_1bf3a4;
        case 0x1bf3a8u: goto label_1bf3a8;
        case 0x1bf3acu: goto label_1bf3ac;
        case 0x1bf3b0u: goto label_1bf3b0;
        case 0x1bf3b4u: goto label_1bf3b4;
        case 0x1bf3b8u: goto label_1bf3b8;
        case 0x1bf3bcu: goto label_1bf3bc;
        case 0x1bf3c0u: goto label_1bf3c0;
        case 0x1bf3c4u: goto label_1bf3c4;
        case 0x1bf3c8u: goto label_1bf3c8;
        case 0x1bf3ccu: goto label_1bf3cc;
        case 0x1bf3d0u: goto label_1bf3d0;
        case 0x1bf3d4u: goto label_1bf3d4;
        case 0x1bf3d8u: goto label_1bf3d8;
        case 0x1bf3dcu: goto label_1bf3dc;
        case 0x1bf3e0u: goto label_1bf3e0;
        case 0x1bf3e4u: goto label_1bf3e4;
        case 0x1bf3e8u: goto label_1bf3e8;
        case 0x1bf3ecu: goto label_1bf3ec;
        case 0x1bf3f0u: goto label_1bf3f0;
        case 0x1bf3f4u: goto label_1bf3f4;
        case 0x1bf3f8u: goto label_1bf3f8;
        case 0x1bf3fcu: goto label_1bf3fc;
        case 0x1bf400u: goto label_1bf400;
        case 0x1bf404u: goto label_1bf404;
        case 0x1bf408u: goto label_1bf408;
        case 0x1bf40cu: goto label_1bf40c;
        case 0x1bf410u: goto label_1bf410;
        case 0x1bf414u: goto label_1bf414;
        case 0x1bf418u: goto label_1bf418;
        case 0x1bf41cu: goto label_1bf41c;
        case 0x1bf420u: goto label_1bf420;
        case 0x1bf424u: goto label_1bf424;
        case 0x1bf428u: goto label_1bf428;
        case 0x1bf42cu: goto label_1bf42c;
        case 0x1bf430u: goto label_1bf430;
        case 0x1bf434u: goto label_1bf434;
        case 0x1bf438u: goto label_1bf438;
        case 0x1bf43cu: goto label_1bf43c;
        case 0x1bf440u: goto label_1bf440;
        case 0x1bf444u: goto label_1bf444;
        case 0x1bf448u: goto label_1bf448;
        case 0x1bf44cu: goto label_1bf44c;
        case 0x1bf450u: goto label_1bf450;
        case 0x1bf454u: goto label_1bf454;
        case 0x1bf458u: goto label_1bf458;
        case 0x1bf45cu: goto label_1bf45c;
        case 0x1bf460u: goto label_1bf460;
        case 0x1bf464u: goto label_1bf464;
        case 0x1bf468u: goto label_1bf468;
        case 0x1bf46cu: goto label_1bf46c;
        case 0x1bf470u: goto label_1bf470;
        case 0x1bf474u: goto label_1bf474;
        case 0x1bf478u: goto label_1bf478;
        case 0x1bf47cu: goto label_1bf47c;
        case 0x1bf480u: goto label_1bf480;
        case 0x1bf484u: goto label_1bf484;
        case 0x1bf488u: goto label_1bf488;
        case 0x1bf48cu: goto label_1bf48c;
        case 0x1bf490u: goto label_1bf490;
        case 0x1bf494u: goto label_1bf494;
        case 0x1bf498u: goto label_1bf498;
        case 0x1bf49cu: goto label_1bf49c;
        case 0x1bf4a0u: goto label_1bf4a0;
        case 0x1bf4a4u: goto label_1bf4a4;
        case 0x1bf4a8u: goto label_1bf4a8;
        case 0x1bf4acu: goto label_1bf4ac;
        case 0x1bf4b0u: goto label_1bf4b0;
        case 0x1bf4b4u: goto label_1bf4b4;
        case 0x1bf4b8u: goto label_1bf4b8;
        case 0x1bf4bcu: goto label_1bf4bc;
        case 0x1bf4c0u: goto label_1bf4c0;
        case 0x1bf4c4u: goto label_1bf4c4;
        case 0x1bf4c8u: goto label_1bf4c8;
        case 0x1bf4ccu: goto label_1bf4cc;
        case 0x1bf4d0u: goto label_1bf4d0;
        case 0x1bf4d4u: goto label_1bf4d4;
        case 0x1bf4d8u: goto label_1bf4d8;
        case 0x1bf4dcu: goto label_1bf4dc;
        case 0x1bf4e0u: goto label_1bf4e0;
        case 0x1bf4e4u: goto label_1bf4e4;
        case 0x1bf4e8u: goto label_1bf4e8;
        case 0x1bf4ecu: goto label_1bf4ec;
        case 0x1bf4f0u: goto label_1bf4f0;
        case 0x1bf4f4u: goto label_1bf4f4;
        case 0x1bf4f8u: goto label_1bf4f8;
        case 0x1bf4fcu: goto label_1bf4fc;
        case 0x1bf500u: goto label_1bf500;
        case 0x1bf504u: goto label_1bf504;
        case 0x1bf508u: goto label_1bf508;
        case 0x1bf50cu: goto label_1bf50c;
        case 0x1bf510u: goto label_1bf510;
        case 0x1bf514u: goto label_1bf514;
        case 0x1bf518u: goto label_1bf518;
        case 0x1bf51cu: goto label_1bf51c;
        case 0x1bf520u: goto label_1bf520;
        case 0x1bf524u: goto label_1bf524;
        case 0x1bf528u: goto label_1bf528;
        case 0x1bf52cu: goto label_1bf52c;
        case 0x1bf530u: goto label_1bf530;
        case 0x1bf534u: goto label_1bf534;
        case 0x1bf538u: goto label_1bf538;
        case 0x1bf53cu: goto label_1bf53c;
        case 0x1bf540u: goto label_1bf540;
        case 0x1bf544u: goto label_1bf544;
        case 0x1bf548u: goto label_1bf548;
        case 0x1bf54cu: goto label_1bf54c;
        case 0x1bf550u: goto label_1bf550;
        case 0x1bf554u: goto label_1bf554;
        case 0x1bf558u: goto label_1bf558;
        case 0x1bf55cu: goto label_1bf55c;
        case 0x1bf560u: goto label_1bf560;
        case 0x1bf564u: goto label_1bf564;
        case 0x1bf568u: goto label_1bf568;
        case 0x1bf56cu: goto label_1bf56c;
        case 0x1bf570u: goto label_1bf570;
        case 0x1bf574u: goto label_1bf574;
        case 0x1bf578u: goto label_1bf578;
        case 0x1bf57cu: goto label_1bf57c;
        case 0x1bf580u: goto label_1bf580;
        case 0x1bf584u: goto label_1bf584;
        case 0x1bf588u: goto label_1bf588;
        case 0x1bf58cu: goto label_1bf58c;
        case 0x1bf590u: goto label_1bf590;
        case 0x1bf594u: goto label_1bf594;
        case 0x1bf598u: goto label_1bf598;
        case 0x1bf59cu: goto label_1bf59c;
        case 0x1bf5a0u: goto label_1bf5a0;
        case 0x1bf5a4u: goto label_1bf5a4;
        case 0x1bf5a8u: goto label_1bf5a8;
        case 0x1bf5acu: goto label_1bf5ac;
        case 0x1bf5b0u: goto label_1bf5b0;
        case 0x1bf5b4u: goto label_1bf5b4;
        case 0x1bf5b8u: goto label_1bf5b8;
        case 0x1bf5bcu: goto label_1bf5bc;
        case 0x1bf5c0u: goto label_1bf5c0;
        case 0x1bf5c4u: goto label_1bf5c4;
        case 0x1bf5c8u: goto label_1bf5c8;
        case 0x1bf5ccu: goto label_1bf5cc;
        case 0x1bf5d0u: goto label_1bf5d0;
        case 0x1bf5d4u: goto label_1bf5d4;
        case 0x1bf5d8u: goto label_1bf5d8;
        case 0x1bf5dcu: goto label_1bf5dc;
        case 0x1bf5e0u: goto label_1bf5e0;
        case 0x1bf5e4u: goto label_1bf5e4;
        case 0x1bf5e8u: goto label_1bf5e8;
        case 0x1bf5ecu: goto label_1bf5ec;
        case 0x1bf5f0u: goto label_1bf5f0;
        case 0x1bf5f4u: goto label_1bf5f4;
        case 0x1bf5f8u: goto label_1bf5f8;
        case 0x1bf5fcu: goto label_1bf5fc;
        case 0x1bf600u: goto label_1bf600;
        case 0x1bf604u: goto label_1bf604;
        case 0x1bf608u: goto label_1bf608;
        case 0x1bf60cu: goto label_1bf60c;
        case 0x1bf610u: goto label_1bf610;
        case 0x1bf614u: goto label_1bf614;
        case 0x1bf618u: goto label_1bf618;
        case 0x1bf61cu: goto label_1bf61c;
        case 0x1bf620u: goto label_1bf620;
        case 0x1bf624u: goto label_1bf624;
        case 0x1bf628u: goto label_1bf628;
        case 0x1bf62cu: goto label_1bf62c;
        case 0x1bf630u: goto label_1bf630;
        case 0x1bf634u: goto label_1bf634;
        case 0x1bf638u: goto label_1bf638;
        case 0x1bf63cu: goto label_1bf63c;
        case 0x1bf640u: goto label_1bf640;
        case 0x1bf644u: goto label_1bf644;
        case 0x1bf648u: goto label_1bf648;
        case 0x1bf64cu: goto label_1bf64c;
        case 0x1bf650u: goto label_1bf650;
        case 0x1bf654u: goto label_1bf654;
        case 0x1bf658u: goto label_1bf658;
        case 0x1bf65cu: goto label_1bf65c;
        case 0x1bf660u: goto label_1bf660;
        case 0x1bf664u: goto label_1bf664;
        case 0x1bf668u: goto label_1bf668;
        case 0x1bf66cu: goto label_1bf66c;
        case 0x1bf670u: goto label_1bf670;
        case 0x1bf674u: goto label_1bf674;
        case 0x1bf678u: goto label_1bf678;
        case 0x1bf67cu: goto label_1bf67c;
        case 0x1bf680u: goto label_1bf680;
        case 0x1bf684u: goto label_1bf684;
        case 0x1bf688u: goto label_1bf688;
        case 0x1bf68cu: goto label_1bf68c;
        case 0x1bf690u: goto label_1bf690;
        case 0x1bf694u: goto label_1bf694;
        case 0x1bf698u: goto label_1bf698;
        case 0x1bf69cu: goto label_1bf69c;
        case 0x1bf6a0u: goto label_1bf6a0;
        case 0x1bf6a4u: goto label_1bf6a4;
        case 0x1bf6a8u: goto label_1bf6a8;
        case 0x1bf6acu: goto label_1bf6ac;
        case 0x1bf6b0u: goto label_1bf6b0;
        case 0x1bf6b4u: goto label_1bf6b4;
        case 0x1bf6b8u: goto label_1bf6b8;
        case 0x1bf6bcu: goto label_1bf6bc;
        case 0x1bf6c0u: goto label_1bf6c0;
        case 0x1bf6c4u: goto label_1bf6c4;
        case 0x1bf6c8u: goto label_1bf6c8;
        case 0x1bf6ccu: goto label_1bf6cc;
        case 0x1bf6d0u: goto label_1bf6d0;
        case 0x1bf6d4u: goto label_1bf6d4;
        case 0x1bf6d8u: goto label_1bf6d8;
        case 0x1bf6dcu: goto label_1bf6dc;
        case 0x1bf6e0u: goto label_1bf6e0;
        case 0x1bf6e4u: goto label_1bf6e4;
        case 0x1bf6e8u: goto label_1bf6e8;
        case 0x1bf6ecu: goto label_1bf6ec;
        case 0x1bf6f0u: goto label_1bf6f0;
        case 0x1bf6f4u: goto label_1bf6f4;
        case 0x1bf6f8u: goto label_1bf6f8;
        case 0x1bf6fcu: goto label_1bf6fc;
        case 0x1bf700u: goto label_1bf700;
        case 0x1bf704u: goto label_1bf704;
        case 0x1bf708u: goto label_1bf708;
        case 0x1bf70cu: goto label_1bf70c;
        case 0x1bf710u: goto label_1bf710;
        case 0x1bf714u: goto label_1bf714;
        case 0x1bf718u: goto label_1bf718;
        case 0x1bf71cu: goto label_1bf71c;
        case 0x1bf720u: goto label_1bf720;
        case 0x1bf724u: goto label_1bf724;
        case 0x1bf728u: goto label_1bf728;
        case 0x1bf72cu: goto label_1bf72c;
        case 0x1bf730u: goto label_1bf730;
        case 0x1bf734u: goto label_1bf734;
        case 0x1bf738u: goto label_1bf738;
        case 0x1bf73cu: goto label_1bf73c;
        case 0x1bf740u: goto label_1bf740;
        case 0x1bf744u: goto label_1bf744;
        case 0x1bf748u: goto label_1bf748;
        case 0x1bf74cu: goto label_1bf74c;
        case 0x1bf750u: goto label_1bf750;
        case 0x1bf754u: goto label_1bf754;
        case 0x1bf758u: goto label_1bf758;
        case 0x1bf75cu: goto label_1bf75c;
        case 0x1bf760u: goto label_1bf760;
        case 0x1bf764u: goto label_1bf764;
        case 0x1bf768u: goto label_1bf768;
        case 0x1bf76cu: goto label_1bf76c;
        case 0x1bf770u: goto label_1bf770;
        case 0x1bf774u: goto label_1bf774;
        case 0x1bf778u: goto label_1bf778;
        case 0x1bf77cu: goto label_1bf77c;
        case 0x1bf780u: goto label_1bf780;
        case 0x1bf784u: goto label_1bf784;
        case 0x1bf788u: goto label_1bf788;
        case 0x1bf78cu: goto label_1bf78c;
        case 0x1bf790u: goto label_1bf790;
        case 0x1bf794u: goto label_1bf794;
        case 0x1bf798u: goto label_1bf798;
        case 0x1bf79cu: goto label_1bf79c;
        case 0x1bf7a0u: goto label_1bf7a0;
        case 0x1bf7a4u: goto label_1bf7a4;
        case 0x1bf7a8u: goto label_1bf7a8;
        case 0x1bf7acu: goto label_1bf7ac;
        case 0x1bf7b0u: goto label_1bf7b0;
        case 0x1bf7b4u: goto label_1bf7b4;
        case 0x1bf7b8u: goto label_1bf7b8;
        case 0x1bf7bcu: goto label_1bf7bc;
        case 0x1bf7c0u: goto label_1bf7c0;
        case 0x1bf7c4u: goto label_1bf7c4;
        case 0x1bf7c8u: goto label_1bf7c8;
        case 0x1bf7ccu: goto label_1bf7cc;
        case 0x1bf7d0u: goto label_1bf7d0;
        case 0x1bf7d4u: goto label_1bf7d4;
        case 0x1bf7d8u: goto label_1bf7d8;
        case 0x1bf7dcu: goto label_1bf7dc;
        case 0x1bf7e0u: goto label_1bf7e0;
        case 0x1bf7e4u: goto label_1bf7e4;
        case 0x1bf7e8u: goto label_1bf7e8;
        case 0x1bf7ecu: goto label_1bf7ec;
        case 0x1bf7f0u: goto label_1bf7f0;
        case 0x1bf7f4u: goto label_1bf7f4;
        case 0x1bf7f8u: goto label_1bf7f8;
        case 0x1bf7fcu: goto label_1bf7fc;
        case 0x1bf800u: goto label_1bf800;
        case 0x1bf804u: goto label_1bf804;
        case 0x1bf808u: goto label_1bf808;
        case 0x1bf80cu: goto label_1bf80c;
        case 0x1bf810u: goto label_1bf810;
        case 0x1bf814u: goto label_1bf814;
        case 0x1bf818u: goto label_1bf818;
        case 0x1bf81cu: goto label_1bf81c;
        case 0x1bf820u: goto label_1bf820;
        case 0x1bf824u: goto label_1bf824;
        case 0x1bf828u: goto label_1bf828;
        case 0x1bf82cu: goto label_1bf82c;
        case 0x1bf830u: goto label_1bf830;
        case 0x1bf834u: goto label_1bf834;
        case 0x1bf838u: goto label_1bf838;
        case 0x1bf83cu: goto label_1bf83c;
        case 0x1bf840u: goto label_1bf840;
        case 0x1bf844u: goto label_1bf844;
        case 0x1bf848u: goto label_1bf848;
        case 0x1bf84cu: goto label_1bf84c;
        case 0x1bf850u: goto label_1bf850;
        case 0x1bf854u: goto label_1bf854;
        case 0x1bf858u: goto label_1bf858;
        case 0x1bf85cu: goto label_1bf85c;
        case 0x1bf860u: goto label_1bf860;
        case 0x1bf864u: goto label_1bf864;
        case 0x1bf868u: goto label_1bf868;
        case 0x1bf86cu: goto label_1bf86c;
        case 0x1bf870u: goto label_1bf870;
        case 0x1bf874u: goto label_1bf874;
        case 0x1bf878u: goto label_1bf878;
        case 0x1bf87cu: goto label_1bf87c;
        case 0x1bf880u: goto label_1bf880;
        case 0x1bf884u: goto label_1bf884;
        case 0x1bf888u: goto label_1bf888;
        case 0x1bf88cu: goto label_1bf88c;
        case 0x1bf890u: goto label_1bf890;
        case 0x1bf894u: goto label_1bf894;
        case 0x1bf898u: goto label_1bf898;
        case 0x1bf89cu: goto label_1bf89c;
        case 0x1bf8a0u: goto label_1bf8a0;
        case 0x1bf8a4u: goto label_1bf8a4;
        case 0x1bf8a8u: goto label_1bf8a8;
        case 0x1bf8acu: goto label_1bf8ac;
        case 0x1bf8b0u: goto label_1bf8b0;
        case 0x1bf8b4u: goto label_1bf8b4;
        case 0x1bf8b8u: goto label_1bf8b8;
        case 0x1bf8bcu: goto label_1bf8bc;
        case 0x1bf8c0u: goto label_1bf8c0;
        case 0x1bf8c4u: goto label_1bf8c4;
        case 0x1bf8c8u: goto label_1bf8c8;
        case 0x1bf8ccu: goto label_1bf8cc;
        case 0x1bf8d0u: goto label_1bf8d0;
        case 0x1bf8d4u: goto label_1bf8d4;
        case 0x1bf8d8u: goto label_1bf8d8;
        case 0x1bf8dcu: goto label_1bf8dc;
        case 0x1bf8e0u: goto label_1bf8e0;
        case 0x1bf8e4u: goto label_1bf8e4;
        case 0x1bf8e8u: goto label_1bf8e8;
        case 0x1bf8ecu: goto label_1bf8ec;
        case 0x1bf8f0u: goto label_1bf8f0;
        case 0x1bf8f4u: goto label_1bf8f4;
        case 0x1bf8f8u: goto label_1bf8f8;
        case 0x1bf8fcu: goto label_1bf8fc;
        case 0x1bf900u: goto label_1bf900;
        case 0x1bf904u: goto label_1bf904;
        case 0x1bf908u: goto label_1bf908;
        case 0x1bf90cu: goto label_1bf90c;
        case 0x1bf910u: goto label_1bf910;
        case 0x1bf914u: goto label_1bf914;
        case 0x1bf918u: goto label_1bf918;
        case 0x1bf91cu: goto label_1bf91c;
        case 0x1bf920u: goto label_1bf920;
        case 0x1bf924u: goto label_1bf924;
        case 0x1bf928u: goto label_1bf928;
        case 0x1bf92cu: goto label_1bf92c;
        case 0x1bf930u: goto label_1bf930;
        case 0x1bf934u: goto label_1bf934;
        case 0x1bf938u: goto label_1bf938;
        case 0x1bf93cu: goto label_1bf93c;
        case 0x1bf940u: goto label_1bf940;
        case 0x1bf944u: goto label_1bf944;
        case 0x1bf948u: goto label_1bf948;
        case 0x1bf94cu: goto label_1bf94c;
        case 0x1bf950u: goto label_1bf950;
        case 0x1bf954u: goto label_1bf954;
        case 0x1bf958u: goto label_1bf958;
        case 0x1bf95cu: goto label_1bf95c;
        case 0x1bf960u: goto label_1bf960;
        case 0x1bf964u: goto label_1bf964;
        case 0x1bf968u: goto label_1bf968;
        case 0x1bf96cu: goto label_1bf96c;
        case 0x1bf970u: goto label_1bf970;
        case 0x1bf974u: goto label_1bf974;
        case 0x1bf978u: goto label_1bf978;
        case 0x1bf97cu: goto label_1bf97c;
        case 0x1bf980u: goto label_1bf980;
        case 0x1bf984u: goto label_1bf984;
        case 0x1bf988u: goto label_1bf988;
        case 0x1bf98cu: goto label_1bf98c;
        case 0x1bf990u: goto label_1bf990;
        case 0x1bf994u: goto label_1bf994;
        case 0x1bf998u: goto label_1bf998;
        case 0x1bf99cu: goto label_1bf99c;
        case 0x1bf9a0u: goto label_1bf9a0;
        case 0x1bf9a4u: goto label_1bf9a4;
        case 0x1bf9a8u: goto label_1bf9a8;
        case 0x1bf9acu: goto label_1bf9ac;
        case 0x1bf9b0u: goto label_1bf9b0;
        case 0x1bf9b4u: goto label_1bf9b4;
        case 0x1bf9b8u: goto label_1bf9b8;
        case 0x1bf9bcu: goto label_1bf9bc;
        case 0x1bf9c0u: goto label_1bf9c0;
        case 0x1bf9c4u: goto label_1bf9c4;
        case 0x1bf9c8u: goto label_1bf9c8;
        case 0x1bf9ccu: goto label_1bf9cc;
        default: break;
    }

    ctx->pc = 0x1bee68u;

label_1bee68:
    // 0x1bee68: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1bee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_1bee6c:
    // 0x1bee6c: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1bee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1bee70:
    // 0x1bee70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bee70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bee74:
    // 0x1bee74: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1bee74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1bee78:
    // 0x1bee78: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1bee7c:
    if (ctx->pc == 0x1BEE7Cu) {
        ctx->pc = 0x1BEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE78u;
        // 0x1bee7c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE80u;
        goto label_1bee80;
    }
    ctx->pc = 0x1BEE78u;
    {
        const bool branch_taken_0x1bee78 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE78u;
        // 0x1bee7c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee78) {
            ctx->pc = 0x1BEE90u;
            goto label_1bee90;
        }
    }
    ctx->pc = 0x1BEE80u;
label_1bee80:
    // 0x1bee80: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bee80u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bee84:
    // 0x1bee84: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1bee88:
    if (ctx->pc == 0x1BEE88u) {
        ctx->pc = 0x1BEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE84u;
        // 0x1bee88: 0x24848d50  addiu       $a0, $a0, -0x72B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEE8Cu;
        goto label_1bee8c;
    }
    ctx->pc = 0x1BEE84u;
    {
        const bool branch_taken_0x1bee84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEE88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE84u;
        // 0x1bee88: 0x24848d50  addiu       $a0, $a0, -0x72B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bee84) {
            ctx->pc = 0x1BEF04u;
            goto label_1bef04;
        }
    }
    ctx->pc = 0x1BEE8Cu;
label_1bee8c:
    // 0x1bee8c: 0x0  nop
    ctx->pc = 0x1bee8cu;
    // NOP
label_1bee90:
    // 0x1bee90: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1bee90u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1bee94:
    // 0x1bee94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bee94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bee98:
    // 0x1bee98: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bee98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bee9c:
    // 0x1bee9c: 0xc06fa46  jal         func_1BE918
label_1beea0:
    if (ctx->pc == 0x1BEEA0u) {
        ctx->pc = 0x1BEEA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEE9Cu;
        // 0x1beea0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEA4u;
        goto label_1beea4;
    }
    ctx->pc = 0x1BEE9Cu;
    SET_GPR_U32(ctx, 31, 0x1BEEA4u);
    ctx->pc = 0x1BEEA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEE9Cu;
    // 0x1beea0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE918u, 0x1BEE9Cu, 0x1BEEA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEEA4u;
label_1beea4:
    // 0x1beea4: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x1beea4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_1beea8:
    // 0x1beea8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1beeac:
    if (ctx->pc == 0x1BEEACu) {
        ctx->pc = 0x1BEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEA8u;
        // 0x1beeac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEB0u;
        goto label_1beeb0;
    }
    ctx->pc = 0x1BEEA8u;
    {
        const bool branch_taken_0x1beea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEA8u;
        // 0x1beeac: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beea8) {
            ctx->pc = 0x1BEEC0u;
            goto label_1beec0;
        }
    }
    ctx->pc = 0x1BEEB0u;
label_1beeb0:
    // 0x1beeb0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1beeb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1beeb4:
    // 0x1beeb4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1beeb8:
    if (ctx->pc == 0x1BEEB8u) {
        ctx->pc = 0x1BEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEB4u;
        // 0x1beeb8: 0x24848d50  addiu       $a0, $a0, -0x72B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937936));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEBCu;
        goto label_1beebc;
    }
    ctx->pc = 0x1BEEB4u;
    {
        const bool branch_taken_0x1beeb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEB4u;
        // 0x1beeb8: 0x24848d50  addiu       $a0, $a0, -0x72B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937936));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beeb4) {
            ctx->pc = 0x1BEF04u;
            goto label_1bef04;
        }
    }
    ctx->pc = 0x1BEEBCu;
label_1beebc:
    // 0x1beebc: 0x0  nop
    ctx->pc = 0x1beebcu;
    // NOP
label_1beec0:
    // 0x1beec0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1beec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1beec4:
    // 0x1beec4: 0xc06f9b4  jal         func_1BE6D0
label_1beec8:
    if (ctx->pc == 0x1BEEC8u) {
        ctx->pc = 0x1BEEC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEC4u;
        // 0x1beec8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEECCu;
        goto label_1beecc;
    }
    ctx->pc = 0x1BEEC4u;
    SET_GPR_U32(ctx, 31, 0x1BEECCu);
    ctx->pc = 0x1BEEC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEC4u;
    // 0x1beec8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE6D0u, 0x1BEEC4u, 0x1BEECCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEECCu;
label_1beecc:
    // 0x1beecc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1beeccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1beed0:
    // 0x1beed0: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1beed4:
    if (ctx->pc == 0x1BEED4u) {
        ctx->pc = 0x1BEED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEED0u;
        // 0x1beed4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEED8u;
        goto label_1beed8;
    }
    ctx->pc = 0x1BEED0u;
    {
        const bool branch_taken_0x1beed0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1beed0) {
            ctx->pc = 0x1BEED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEED0u;
            // 0x1beed4: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEEE8u;
            goto label_1beee8;
        }
    }
    ctx->pc = 0x1BEED8u;
label_1beed8:
    // 0x1beed8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1beed8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1beedc:
    // 0x1beedc: 0xc06f838  jal         func_1BE0E0
label_1beee0:
    if (ctx->pc == 0x1BEEE0u) {
        ctx->pc = 0x1BEEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEDCu;
        // 0x1beee0: 0x24848da0  addiu       $a0, $a0, -0x7260 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938016));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEE4u;
        goto label_1beee4;
    }
    ctx->pc = 0x1BEEDCu;
    SET_GPR_U32(ctx, 31, 0x1BEEE4u);
    ctx->pc = 0x1BEEE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEEDCu;
    // 0x1beee0: 0x24848da0  addiu       $a0, $a0, -0x7260 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938016));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BEEDCu, 0x1BEEE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEEE4u;
label_1beee4:
    // 0x1beee4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1beee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1beee8:
    // 0x1beee8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1beeec:
    if (ctx->pc == 0x1BEEECu) {
        ctx->pc = 0x1BEEECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEE8u;
        // 0x1beeec: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEF0u;
        goto label_1beef0;
    }
    ctx->pc = 0x1BEEE8u;
    {
        const bool branch_taken_0x1beee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1beee8) {
            ctx->pc = 0x1BEEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEEE8u;
            // 0x1beeec: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEF00u;
            goto label_1bef00;
        }
    }
    ctx->pc = 0x1BEEF0u;
label_1beef0:
    // 0x1beef0: 0x40f809  jalr        $v0
label_1beef4:
    if (ctx->pc == 0x1BEEF4u) {
        ctx->pc = 0x1BEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEF0u;
        // 0x1beef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEEF8u;
        goto label_1beef8;
    }
    ctx->pc = 0x1BEEF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BEEF8u);
        ctx->pc = 0x1BEEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEF0u;
        // 0x1beef4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEEF0u, 0x1BEEF8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BEEF8u;
label_1beef8:
    // 0x1beef8: 0x10000006  b           . + 4 + (0x6 << 2)
label_1beefc:
    if (ctx->pc == 0x1BEEFCu) {
        ctx->pc = 0x1BEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEF8u;
        // 0x1beefc: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF00u;
        goto label_1bef00;
    }
    ctx->pc = 0x1BEEF8u;
    {
        const bool branch_taken_0x1beef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEEF8u;
        // 0x1beefc: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beef8) {
            ctx->pc = 0x1BEF14u;
            goto label_1bef14;
        }
    }
    ctx->pc = 0x1BEF00u;
label_1bef00:
    // 0x1bef00: 0x24848dc8  addiu       $a0, $a0, -0x7238
    ctx->pc = 0x1bef00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938056));
label_1bef04:
    // 0x1bef04: 0xc06f838  jal         func_1BE0E0
label_1bef08:
    if (ctx->pc == 0x1BEF08u) {
        ctx->pc = 0x1BEF0Cu;
        goto label_1bef0c;
    }
    ctx->pc = 0x1BEF04u;
    SET_GPR_U32(ctx, 31, 0x1BEF0Cu);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BEF04u, 0x1BEF0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF0Cu;
label_1bef0c:
    // 0x1bef0c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bef0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bef10:
    // 0x1bef10: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1bef10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1bef14:
    // 0x1bef14: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1bef14u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1bef18:
    // 0x1bef18: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x1bef18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1bef1c:
    // 0x1bef1c: 0x3e00008  jr          $ra
label_1bef20:
    if (ctx->pc == 0x1BEF20u) {
        ctx->pc = 0x1BEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF1Cu;
        // 0x1bef20: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF24u;
        goto label_1bef24;
    }
    ctx->pc = 0x1BEF1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF1Cu;
        // 0x1bef20: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEF1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEF24u;
label_1bef24:
    // 0x1bef24: 0x0  nop
    ctx->pc = 0x1bef24u;
    // NOP
label_1bef28:
    // 0x1bef28: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1bef28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_1bef2c:
    // 0x1bef2c: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1bef2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1bef30:
    // 0x1bef30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bef30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bef34:
    // 0x1bef34: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x1bef34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_1bef38:
    // 0x1bef38: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bef38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bef3c:
    // 0x1bef3c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1bef3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1bef40:
    // 0x1bef40: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1bef44:
    if (ctx->pc == 0x1BEF44u) {
        ctx->pc = 0x1BEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF40u;
        // 0x1bef44: 0xffbf0278  sd          $ra, 0x278($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF48u;
        goto label_1bef48;
    }
    ctx->pc = 0x1BEF40u;
    {
        const bool branch_taken_0x1bef40 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF40u;
        // 0x1bef44: 0xffbf0278  sd          $ra, 0x278($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef40) {
            ctx->pc = 0x1BEF58u;
            goto label_1bef58;
        }
    }
    ctx->pc = 0x1BEF48u;
label_1bef48:
    // 0x1bef48: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bef48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bef4c:
    // 0x1bef4c: 0x10000020  b           . + 4 + (0x20 << 2)
label_1bef50:
    if (ctx->pc == 0x1BEF50u) {
        ctx->pc = 0x1BEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF4Cu;
        // 0x1bef50: 0x24848de8  addiu       $a0, $a0, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF54u;
        goto label_1bef54;
    }
    ctx->pc = 0x1BEF4Cu;
    {
        const bool branch_taken_0x1bef4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF4Cu;
        // 0x1bef50: 0x24848de8  addiu       $a0, $a0, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef4c) {
            ctx->pc = 0x1BEFD0u;
            goto label_1befd0;
        }
    }
    ctx->pc = 0x1BEF54u;
label_1bef54:
    // 0x1bef54: 0x0  nop
    ctx->pc = 0x1bef54u;
    // NOP
label_1bef58:
    // 0x1bef58: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1bef58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1bef5c:
    // 0x1bef5c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bef5cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bef60:
    // 0x1bef60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bef60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bef64:
    // 0x1bef64: 0xc06fa46  jal         func_1BE918
label_1bef68:
    if (ctx->pc == 0x1BEF68u) {
        ctx->pc = 0x1BEF68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF64u;
        // 0x1bef68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF6Cu;
        goto label_1bef6c;
    }
    ctx->pc = 0x1BEF64u;
    SET_GPR_U32(ctx, 31, 0x1BEF6Cu);
    ctx->pc = 0x1BEF68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF64u;
    // 0x1bef68: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE918u, 0x1BEF64u, 0x1BEF6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF6Cu;
label_1bef6c:
    // 0x1bef6c: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x1bef6cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_1bef70:
    // 0x1bef70: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bef74:
    if (ctx->pc == 0x1BEF74u) {
        ctx->pc = 0x1BEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF70u;
        // 0x1bef74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF78u;
        goto label_1bef78;
    }
    ctx->pc = 0x1BEF70u;
    {
        const bool branch_taken_0x1bef70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF70u;
        // 0x1bef74: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef70) {
            ctx->pc = 0x1BEF88u;
            goto label_1bef88;
        }
    }
    ctx->pc = 0x1BEF78u;
label_1bef78:
    // 0x1bef78: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bef78u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bef7c:
    // 0x1bef7c: 0x10000014  b           . + 4 + (0x14 << 2)
label_1bef80:
    if (ctx->pc == 0x1BEF80u) {
        ctx->pc = 0x1BEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF7Cu;
        // 0x1bef80: 0x24848de8  addiu       $a0, $a0, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF84u;
        goto label_1bef84;
    }
    ctx->pc = 0x1BEF7Cu;
    {
        const bool branch_taken_0x1bef7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF7Cu;
        // 0x1bef80: 0x24848de8  addiu       $a0, $a0, -0x7218 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bef7c) {
            ctx->pc = 0x1BEFD0u;
            goto label_1befd0;
        }
    }
    ctx->pc = 0x1BEF84u;
label_1bef84:
    // 0x1bef84: 0x0  nop
    ctx->pc = 0x1bef84u;
    // NOP
label_1bef88:
    // 0x1bef88: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bef88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bef8c:
    // 0x1bef8c: 0xc06f9b4  jal         func_1BE6D0
label_1bef90:
    if (ctx->pc == 0x1BEF90u) {
        ctx->pc = 0x1BEF90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF8Cu;
        // 0x1bef90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEF94u;
        goto label_1bef94;
    }
    ctx->pc = 0x1BEF8Cu;
    SET_GPR_U32(ctx, 31, 0x1BEF94u);
    ctx->pc = 0x1BEF90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEF8Cu;
    // 0x1bef90: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE6D0u, 0x1BEF8Cu, 0x1BEF94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEF94u;
label_1bef94:
    // 0x1bef94: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bef94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bef98:
    // 0x1bef98: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1bef9c:
    if (ctx->pc == 0x1BEF9Cu) {
        ctx->pc = 0x1BEF9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEF98u;
        // 0x1bef9c: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFA0u;
        goto label_1befa0;
    }
    ctx->pc = 0x1BEF98u;
    {
        const bool branch_taken_0x1bef98 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bef98) {
            ctx->pc = 0x1BEF9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BEF98u;
            // 0x1bef9c: 0x8e02005c  lw          $v0, 0x5C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BEFB0u;
            goto label_1befb0;
        }
    }
    ctx->pc = 0x1BEFA0u;
label_1befa0:
    // 0x1befa0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1befa0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1befa4:
    // 0x1befa4: 0xc06f838  jal         func_1BE0E0
label_1befa8:
    if (ctx->pc == 0x1BEFA8u) {
        ctx->pc = 0x1BEFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFA4u;
        // 0x1befa8: 0x24848e40  addiu       $a0, $a0, -0x71C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFACu;
        goto label_1befac;
    }
    ctx->pc = 0x1BEFA4u;
    SET_GPR_U32(ctx, 31, 0x1BEFACu);
    ctx->pc = 0x1BEFA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BEFA4u;
    // 0x1befa8: 0x24848e40  addiu       $a0, $a0, -0x71C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BEFA4u, 0x1BEFACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFACu;
label_1befac:
    // 0x1befac: 0x8e02005c  lw          $v0, 0x5C($s0)
    ctx->pc = 0x1befacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 92)));
label_1befb0:
    // 0x1befb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1befb4:
    if (ctx->pc == 0x1BEFB4u) {
        ctx->pc = 0x1BEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFB0u;
        // 0x1befb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFB8u;
        goto label_1befb8;
    }
    ctx->pc = 0x1BEFB0u;
    {
        const bool branch_taken_0x1befb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFB0u;
        // 0x1befb4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befb0) {
            ctx->pc = 0x1BEFC8u;
            goto label_1befc8;
        }
    }
    ctx->pc = 0x1BEFB8u;
label_1befb8:
    // 0x1befb8: 0x40f809  jalr        $v0
label_1befbc:
    if (ctx->pc == 0x1BEFBCu) {
        ctx->pc = 0x1BEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFB8u;
        // 0x1befbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFC0u;
        goto label_1befc0;
    }
    ctx->pc = 0x1BEFB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BEFC0u);
        ctx->pc = 0x1BEFBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFB8u;
        // 0x1befbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEFB8u, 0x1BEFC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BEFC0u;
label_1befc0:
    // 0x1befc0: 0x10000007  b           . + 4 + (0x7 << 2)
label_1befc4:
    if (ctx->pc == 0x1BEFC4u) {
        ctx->pc = 0x1BEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFC0u;
        // 0x1befc4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFC8u;
        goto label_1befc8;
    }
    ctx->pc = 0x1BEFC0u;
    {
        const bool branch_taken_0x1befc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BEFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFC0u;
        // 0x1befc4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1befc0) {
            ctx->pc = 0x1BEFE0u;
            goto label_1befe0;
        }
    }
    ctx->pc = 0x1BEFC8u;
label_1befc8:
    // 0x1befc8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1befc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1befcc:
    // 0x1befcc: 0x24848e68  addiu       $a0, $a0, -0x7198
    ctx->pc = 0x1befccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938216));
label_1befd0:
    // 0x1befd0: 0xc06f838  jal         func_1BE0E0
label_1befd4:
    if (ctx->pc == 0x1BEFD4u) {
        ctx->pc = 0x1BEFD8u;
        goto label_1befd8;
    }
    ctx->pc = 0x1BEFD0u;
    SET_GPR_U32(ctx, 31, 0x1BEFD8u);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BEFD0u, 0x1BEFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BEFD8u;
label_1befd8:
    // 0x1befd8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1befd8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1befdc:
    // 0x1befdc: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1befdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1befe0:
    // 0x1befe0: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1befe0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1befe4:
    // 0x1befe4: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x1befe4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1befe8:
    // 0x1befe8: 0xdfbf0278  ld          $ra, 0x278($sp)
    ctx->pc = 0x1befe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_1befec:
    // 0x1befec: 0x3e00008  jr          $ra
label_1beff0:
    if (ctx->pc == 0x1BEFF0u) {
        ctx->pc = 0x1BEFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFECu;
        // 0x1beff0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BEFF4u;
        goto label_1beff4;
    }
    ctx->pc = 0x1BEFECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BEFF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFECu;
        // 0x1beff0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BEFECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BEFF4u;
label_1beff4:
    // 0x1beff4: 0x0  nop
    ctx->pc = 0x1beff4u;
    // NOP
label_1beff8:
    // 0x1beff8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1beff8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1beffc:
    // 0x1beffc: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bf000:
    if (ctx->pc == 0x1BF000u) {
        ctx->pc = 0x1BF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFFCu;
        // 0x1bf000: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF004u;
        goto label_1bf004;
    }
    ctx->pc = 0x1BEFFCu;
    {
        const bool branch_taken_0x1beffc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BEFFCu;
        // 0x1bf000: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1beffc) {
            ctx->pc = 0x1BF018u;
            goto label_1bf018;
        }
    }
    ctx->pc = 0x1BF004u;
label_1bf004:
    // 0x1bf004: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf008:
    // 0x1bf008: 0xc06f838  jal         func_1BE0E0
label_1bf00c:
    if (ctx->pc == 0x1BF00Cu) {
        ctx->pc = 0x1BF00Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF008u;
        // 0x1bf00c: 0x24848e88  addiu       $a0, $a0, -0x7178 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF010u;
        goto label_1bf010;
    }
    ctx->pc = 0x1BF008u;
    SET_GPR_U32(ctx, 31, 0x1BF010u);
    ctx->pc = 0x1BF00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF008u;
    // 0x1bf00c: 0x24848e88  addiu       $a0, $a0, -0x7178 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF008u, 0x1BF010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF010u;
label_1bf010:
    // 0x1bf010: 0x1000000d  b           . + 4 + (0xD << 2)
label_1bf014:
    if (ctx->pc == 0x1BF014u) {
        ctx->pc = 0x1BF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF010u;
        // 0x1bf014: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF018u;
        goto label_1bf018;
    }
    ctx->pc = 0x1BF010u;
    {
        const bool branch_taken_0x1bf010 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF010u;
        // 0x1bf014: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf010) {
            ctx->pc = 0x1BF048u;
            goto label_1bf048;
        }
    }
    ctx->pc = 0x1BF018u;
label_1bf018:
    // 0x1bf018: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bf018u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf01c:
    // 0x1bf01c: 0x3c037fff  lui         $v1, 0x7FFF
    ctx->pc = 0x1bf01cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32767 << 16));
label_1bf020:
    // 0x1bf020: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1bf020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1bf024:
    // 0x1bf024: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1bf028:
    if (ctx->pc == 0x1BF028u) {
        ctx->pc = 0x1BF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF024u;
        // 0x1bf028: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF02Cu;
        goto label_1bf02c;
    }
    ctx->pc = 0x1BF024u;
    {
        const bool branch_taken_0x1bf024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF024u;
        // 0x1bf028: 0x3463ffff  ori         $v1, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf024) {
            ctx->pc = 0x1BF044u;
            goto label_1bf044;
        }
    }
    ctx->pc = 0x1BF02Cu;
label_1bf02c:
    // 0x1bf02c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bf02cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1bf030:
    // 0x1bf030: 0x2405012c  addiu       $a1, $zero, 0x12C
    ctx->pc = 0x1bf030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_1bf034:
    // 0x1bf034: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf034u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf038:
    // 0x1bf038: 0x40f809  jalr        $v0
label_1bf03c:
    if (ctx->pc == 0x1BF03Cu) {
        ctx->pc = 0x1BF03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF038u;
        // 0x1bf03c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF040u;
        goto label_1bf040;
    }
    ctx->pc = 0x1BF038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF040u);
        ctx->pc = 0x1BF03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF038u;
        // 0x1bf03c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF038u, 0x1BF040u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF040u;
label_1bf040:
    // 0x1bf040: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bf040u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf044:
    // 0x1bf044: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bf044u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bf048:
    // 0x1bf048: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf048u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf04c:
    // 0x1bf04c: 0x3e00008  jr          $ra
label_1bf050:
    if (ctx->pc == 0x1BF050u) {
        ctx->pc = 0x1BF050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF04Cu;
        // 0x1bf050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF054u;
        goto label_1bf054;
    }
    ctx->pc = 0x1BF04Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF04Cu;
        // 0x1bf050: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF04Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF054u;
label_1bf054:
    // 0x1bf054: 0x0  nop
    ctx->pc = 0x1bf054u;
    // NOP
label_1bf058:
    // 0x1bf058: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf058u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bf05c:
    // 0x1bf05c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bf060:
    if (ctx->pc == 0x1BF060u) {
        ctx->pc = 0x1BF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF05Cu;
        // 0x1bf060: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF064u;
        goto label_1bf064;
    }
    ctx->pc = 0x1BF05Cu;
    {
        const bool branch_taken_0x1bf05c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF05Cu;
        // 0x1bf060: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf05c) {
            ctx->pc = 0x1BF078u;
            goto label_1bf078;
        }
    }
    ctx->pc = 0x1BF064u;
label_1bf064:
    // 0x1bf064: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf068:
    // 0x1bf068: 0xc06f838  jal         func_1BE0E0
label_1bf06c:
    if (ctx->pc == 0x1BF06Cu) {
        ctx->pc = 0x1BF06Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF068u;
        // 0x1bf06c: 0x24848eb8  addiu       $a0, $a0, -0x7148 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938296));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF070u;
        goto label_1bf070;
    }
    ctx->pc = 0x1BF068u;
    SET_GPR_U32(ctx, 31, 0x1BF070u);
    ctx->pc = 0x1BF06Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF068u;
    // 0x1bf06c: 0x24848eb8  addiu       $a0, $a0, -0x7148 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF068u, 0x1BF070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF070u;
label_1bf070:
    // 0x1bf070: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bf074:
    if (ctx->pc == 0x1BF074u) {
        ctx->pc = 0x1BF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF070u;
        // 0x1bf074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF078u;
        goto label_1bf078;
    }
    ctx->pc = 0x1BF070u;
    {
        const bool branch_taken_0x1bf070 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF070u;
        // 0x1bf074: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf070) {
            ctx->pc = 0x1BF0A4u;
            goto label_1bf0a4;
        }
    }
    ctx->pc = 0x1BF078u;
label_1bf078:
    // 0x1bf078: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bf078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf07c:
    // 0x1bf07c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1bf07cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1bf080:
    // 0x1bf080: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1bf084:
    if (ctx->pc == 0x1BF084u) {
        ctx->pc = 0x1BF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF080u;
        // 0x1bf084: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF088u;
        goto label_1bf088;
    }
    ctx->pc = 0x1BF080u;
    {
        const bool branch_taken_0x1bf080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF080u;
        // 0x1bf084: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf080) {
            ctx->pc = 0x1BF0A0u;
            goto label_1bf0a0;
        }
    }
    ctx->pc = 0x1BF088u;
label_1bf088:
    // 0x1bf088: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bf088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1bf08c:
    // 0x1bf08c: 0x24050191  addiu       $a1, $zero, 0x191
    ctx->pc = 0x1bf08cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 401));
label_1bf090:
    // 0x1bf090: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf090u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf094:
    // 0x1bf094: 0x40f809  jalr        $v0
label_1bf098:
    if (ctx->pc == 0x1BF098u) {
        ctx->pc = 0x1BF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF094u;
        // 0x1bf098: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF09Cu;
        goto label_1bf09c;
    }
    ctx->pc = 0x1BF094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF09Cu);
        ctx->pc = 0x1BF098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF094u;
        // 0x1bf098: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF094u, 0x1BF09Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF09Cu;
label_1bf09c:
    // 0x1bf09c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bf09cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf0a0:
    // 0x1bf0a0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bf0a0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bf0a4:
    // 0x1bf0a4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf0a8:
    // 0x1bf0a8: 0x3e00008  jr          $ra
label_1bf0ac:
    if (ctx->pc == 0x1BF0ACu) {
        ctx->pc = 0x1BF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0A8u;
        // 0x1bf0ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF0B0u;
        goto label_1bf0b0;
    }
    ctx->pc = 0x1BF0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0A8u;
        // 0x1bf0ac: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF0B0u;
label_1bf0b0:
    // 0x1bf0b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bf0b4:
    // 0x1bf0b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf0b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf0b8:
    // 0x1bf0b8: 0x1080000c  beqz        $a0, . + 4 + (0xC << 2)
label_1bf0bc:
    if (ctx->pc == 0x1BF0BCu) {
        ctx->pc = 0x1BF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0B8u;
        // 0x1bf0bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF0C0u;
        goto label_1bf0c0;
    }
    ctx->pc = 0x1BF0B8u;
    {
        const bool branch_taken_0x1bf0b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0B8u;
        // 0x1bf0bc: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0b8) {
            ctx->pc = 0x1BF0ECu;
            goto label_1bf0ec;
        }
    }
    ctx->pc = 0x1BF0C0u;
label_1bf0c0:
    // 0x1bf0c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bf0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf0c4:
    // 0x1bf0c4: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x1bf0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_1bf0c8:
    // 0x1bf0c8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_1bf0cc:
    if (ctx->pc == 0x1BF0CCu) {
        ctx->pc = 0x1BF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0C8u;
        // 0x1bf0cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF0D0u;
        goto label_1bf0d0;
    }
    ctx->pc = 0x1BF0C8u;
    {
        const bool branch_taken_0x1bf0c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF0CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0C8u;
        // 0x1bf0cc: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf0c8) {
            ctx->pc = 0x1BF0E8u;
            goto label_1bf0e8;
        }
    }
    ctx->pc = 0x1BF0D0u;
label_1bf0d0:
    // 0x1bf0d0: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x1bf0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_1bf0d4:
    // 0x1bf0d4: 0x24050192  addiu       $a1, $zero, 0x192
    ctx->pc = 0x1bf0d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 402));
label_1bf0d8:
    // 0x1bf0d8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf0d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf0dc:
    // 0x1bf0dc: 0x40f809  jalr        $v0
label_1bf0e0:
    if (ctx->pc == 0x1BF0E0u) {
        ctx->pc = 0x1BF0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0DCu;
        // 0x1bf0e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF0E4u;
        goto label_1bf0e4;
    }
    ctx->pc = 0x1BF0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF0E4u);
        ctx->pc = 0x1BF0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0DCu;
        // 0x1bf0e0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF0DCu, 0x1BF0E4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF0E4u;
label_1bf0e4:
    // 0x1bf0e4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1bf0e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf0e8:
    // 0x1bf0e8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x1bf0e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bf0ec:
    // 0x1bf0ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf0ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf0f0:
    // 0x1bf0f0: 0x3e00008  jr          $ra
label_1bf0f4:
    if (ctx->pc == 0x1BF0F4u) {
        ctx->pc = 0x1BF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0F0u;
        // 0x1bf0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF0F8u;
        goto label_1bf0f8;
    }
    ctx->pc = 0x1BF0F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF0F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF0F0u;
        // 0x1bf0f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF0F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF0F8u;
label_1bf0f8:
    // 0x1bf0f8: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x1bf0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_1bf0fc:
    // 0x1bf0fc: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x1bf0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
label_1bf100:
    // 0x1bf100: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf100u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf104:
    // 0x1bf104: 0xffb40150  sd          $s4, 0x150($sp)
    ctx->pc = 0x1bf104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 20));
label_1bf108:
    // 0x1bf108: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bf108u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf10c:
    // 0x1bf10c: 0xffb10138  sd          $s1, 0x138($sp)
    ctx->pc = 0x1bf10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 17));
label_1bf110:
    // 0x1bf110: 0xffb20140  sd          $s2, 0x140($sp)
    ctx->pc = 0x1bf110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 18));
label_1bf114:
    // 0x1bf114: 0xffb30148  sd          $s3, 0x148($sp)
    ctx->pc = 0x1bf114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 19));
label_1bf118:
    // 0x1bf118: 0xffb50158  sd          $s5, 0x158($sp)
    ctx->pc = 0x1bf118u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 21));
label_1bf11c:
    // 0x1bf11c: 0xffb60160  sd          $s6, 0x160($sp)
    ctx->pc = 0x1bf11cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 22));
label_1bf120:
    // 0x1bf120: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1bf124:
    if (ctx->pc == 0x1BF124u) {
        ctx->pc = 0x1BF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF120u;
        // 0x1bf124: 0xffbf0168  sd          $ra, 0x168($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF128u;
        goto label_1bf128;
    }
    ctx->pc = 0x1BF120u;
    {
        const bool branch_taken_0x1bf120 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF120u;
        // 0x1bf124: 0xffbf0168  sd          $ra, 0x168($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf120) {
            ctx->pc = 0x1BF134u;
            goto label_1bf134;
        }
    }
    ctx->pc = 0x1BF128u;
label_1bf128:
    // 0x1bf128: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x1bf128u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf12c:
    // 0x1bf12c: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_1bf130:
    if (ctx->pc == 0x1BF130u) {
        ctx->pc = 0x1BF134u;
        goto label_1bf134;
    }
    ctx->pc = 0x1BF12Cu;
    {
        const bool branch_taken_0x1bf12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf12c) {
            ctx->pc = 0x1BF158u;
            goto label_1bf158;
        }
    }
    ctx->pc = 0x1BF134u;
label_1bf134:
    // 0x1bf134: 0xc06fa98  jal         func_1BEA60
label_1bf138:
    if (ctx->pc == 0x1BF138u) {
        ctx->pc = 0x1BF138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF134u;
        // 0x1bf138: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF13Cu;
        goto label_1bf13c;
    }
    ctx->pc = 0x1BF134u;
    SET_GPR_U32(ctx, 31, 0x1BF13Cu);
    ctx->pc = 0x1BF138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF134u;
    // 0x1bf138: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEA60u, 0x1BF134u, 0x1BF13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF13Cu;
label_1bf13c:
    // 0x1bf13c: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x1bf13cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf140:
    // 0x1bf140: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_1bf144:
    if (ctx->pc == 0x1BF144u) {
        ctx->pc = 0x1BF148u;
        goto label_1bf148;
    }
    ctx->pc = 0x1BF140u;
    {
        const bool branch_taken_0x1bf140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf140) {
            ctx->pc = 0x1BF170u;
            goto label_1bf170;
        }
    }
    ctx->pc = 0x1BF148u;
label_1bf148:
    // 0x1bf148: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf148u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf14c:
    // 0x1bf14c: 0x10000028  b           . + 4 + (0x28 << 2)
label_1bf150:
    if (ctx->pc == 0x1BF150u) {
        ctx->pc = 0x1BF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF14Cu;
        // 0x1bf150: 0x24848ee0  addiu       $a0, $a0, -0x7120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF154u;
        goto label_1bf154;
    }
    ctx->pc = 0x1BF14Cu;
    {
        const bool branch_taken_0x1bf14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF14Cu;
        // 0x1bf150: 0x24848ee0  addiu       $a0, $a0, -0x7120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf14c) {
            ctx->pc = 0x1BF1F0u;
            goto label_1bf1f0;
        }
    }
    ctx->pc = 0x1BF154u;
label_1bf154:
    // 0x1bf154: 0x0  nop
    ctx->pc = 0x1bf154u;
    // NOP
label_1bf158:
    // 0x1bf158: 0xc04a83e  jal         func_12A0F8
label_1bf15c:
    if (ctx->pc == 0x1BF15Cu) {
        ctx->pc = 0x1BF160u;
        goto label_1bf160;
    }
    ctx->pc = 0x1BF158u;
    SET_GPR_U32(ctx, 31, 0x1BF160u);
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1BF158u, 0x1BF160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF160u;
label_1bf160:
    // 0x1bf160: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1bf160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf164:
    // 0x1bf164: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf164u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf168:
    // 0x1bf168: 0xc049c48  jal         func_127120
label_1bf16c:
    if (ctx->pc == 0x1BF16Cu) {
        ctx->pc = 0x1BF16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF168u;
        // 0x1bf16c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF170u;
        goto label_1bf170;
    }
    ctx->pc = 0x1BF168u;
    SET_GPR_U32(ctx, 31, 0x1BF170u);
    ctx->pc = 0x1BF16Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF168u;
    // 0x1bf16c: 0x24460001  addiu       $a2, $v0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x1BF168u, 0x1BF170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF170u;
label_1bf170:
    // 0x1bf170: 0xc04a83e  jal         func_12A0F8
label_1bf174:
    if (ctx->pc == 0x1BF174u) {
        ctx->pc = 0x1BF174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF170u;
        // 0x1bf174: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF178u;
        goto label_1bf178;
    }
    ctx->pc = 0x1BF170u;
    SET_GPR_U32(ctx, 31, 0x1BF178u);
    ctx->pc = 0x1BF174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF170u;
    // 0x1bf174: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1BF170u, 0x1BF178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF178u;
label_1bf178:
    // 0x1bf178: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1bf178u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf17c:
    // 0x1bf17c: 0x5e400004  bgtzl       $s2, . + 4 + (0x4 << 2)
label_1bf180:
    if (ctx->pc == 0x1BF180u) {
        ctx->pc = 0x1BF180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF17Cu;
        // 0x1bf180: 0x3c0201bf  lui         $v0, 0x1BF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF184u;
        goto label_1bf184;
    }
    ctx->pc = 0x1BF17Cu;
    {
        const bool branch_taken_0x1bf17c = (GPR_S32(ctx, 18) > 0);
        if (branch_taken_0x1bf17c) {
            ctx->pc = 0x1BF180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF17Cu;
            // 0x1bf180: 0x3c0201bf  lui         $v0, 0x1BF (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF190u;
            goto label_1bf190;
        }
    }
    ctx->pc = 0x1BF184u;
label_1bf184:
    // 0x1bf184: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf184u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf188:
    // 0x1bf188: 0x10000019  b           . + 4 + (0x19 << 2)
label_1bf18c:
    if (ctx->pc == 0x1BF18Cu) {
        ctx->pc = 0x1BF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF188u;
        // 0x1bf18c: 0x24848ee0  addiu       $a0, $a0, -0x7120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF190u;
        goto label_1bf190;
    }
    ctx->pc = 0x1BF188u;
    {
        const bool branch_taken_0x1bf188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF188u;
        // 0x1bf18c: 0x24848ee0  addiu       $a0, $a0, -0x7120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938336));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf188) {
            ctx->pc = 0x1BF1F0u;
            goto label_1bf1f0;
        }
    }
    ctx->pc = 0x1BF190u;
label_1bf190:
    // 0x1bf190: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf190u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf194:
    // 0x1bf194: 0x24535594  addiu       $s3, $v0, 0x5594
    ctx->pc = 0x1bf194u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 21908));
label_1bf198:
    // 0x1bf198: 0x3c16003f  lui         $s6, 0x3F
    ctx->pc = 0x1bf198u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)63 << 16));
label_1bf19c:
    // 0x1bf19c: 0x2675fffc  addiu       $s5, $s3, -0x4
    ctx->pc = 0x1bf19cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_1bf1a0:
    // 0x1bf1a0: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1bf1a0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1bf1a4:
    // 0x1bf1a4: 0x0  nop
    ctx->pc = 0x1bf1a4u;
    // NOP
label_1bf1a8:
    // 0x1bf1a8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bf1a8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bf1ac:
    // 0x1bf1ac: 0x2132821  addu        $a1, $s0, $s3
    ctx->pc = 0x1bf1acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1bf1b0:
    // 0x1bf1b0: 0x2158021  addu        $s0, $s0, $s5
    ctx->pc = 0x1bf1b0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_1bf1b4:
    // 0x1bf1b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf1b8:
    // 0x1bf1b8: 0xc04a8f8  jal         func_12A3E0
label_1bf1bc:
    if (ctx->pc == 0x1BF1BCu) {
        ctx->pc = 0x1BF1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1B8u;
        // 0x1bf1bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1C0u;
        goto label_1bf1c0;
    }
    ctx->pc = 0x1BF1B8u;
    SET_GPR_U32(ctx, 31, 0x1BF1C0u);
    ctx->pc = 0x1BF1BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF1B8u;
    // 0x1bf1bc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x1BF1B8u, 0x1BF1C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1C0u;
label_1bf1c0:
    // 0x1bf1c0: 0x54400010  bnel        $v0, $zero, . + 4 + (0x10 << 2)
label_1bf1c4:
    if (ctx->pc == 0x1BF1C4u) {
        ctx->pc = 0x1BF1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1C0u;
        // 0x1bf1c4: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1C8u;
        goto label_1bf1c8;
    }
    ctx->pc = 0x1BF1C0u;
    {
        const bool branch_taken_0x1bf1c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf1c0) {
            ctx->pc = 0x1BF1C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF1C0u;
            // 0x1bf1c4: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF204u;
            goto label_1bf204;
        }
    }
    ctx->pc = 0x1BF1C8u;
label_1bf1c8:
    // 0x1bf1c8: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x1bf1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1bf1cc:
    // 0x1bf1cc: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
label_1bf1d0:
    if (ctx->pc == 0x1BF1D0u) {
        ctx->pc = 0x1BF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1CCu;
        // 0x1bf1d0: 0x26c48f08  addiu       $a0, $s6, -0x70F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938376));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1D4u;
        goto label_1bf1d4;
    }
    ctx->pc = 0x1BF1CCu;
    {
        const bool branch_taken_0x1bf1cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1CCu;
        // 0x1bf1d0: 0x26c48f08  addiu       $a0, $s6, -0x70F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 22), 4294938376));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1cc) {
            ctx->pc = 0x1BF1F0u;
            goto label_1bf1f0;
        }
    }
    ctx->pc = 0x1BF1D4u;
label_1bf1d4:
    // 0x1bf1d4: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x1bf1d4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1bf1d8:
    // 0x1bf1d8: 0x5200000a  beql        $s0, $zero, . + 4 + (0xA << 2)
label_1bf1dc:
    if (ctx->pc == 0x1BF1DCu) {
        ctx->pc = 0x1BF1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1D8u;
        // 0x1bf1dc: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1E0u;
        goto label_1bf1e0;
    }
    ctx->pc = 0x1BF1D8u;
    {
        const bool branch_taken_0x1bf1d8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf1d8) {
            ctx->pc = 0x1BF1DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF1D8u;
            // 0x1bf1dc: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
            SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF204u;
            goto label_1bf204;
        }
    }
    ctx->pc = 0x1BF1E0u;
label_1bf1e0:
    // 0x1bf1e0: 0x200f809  jalr        $s0
label_1bf1e4:
    if (ctx->pc == 0x1BF1E4u) {
        ctx->pc = 0x1BF1E8u;
        goto label_1bf1e8;
    }
    ctx->pc = 0x1BF1E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1BF1E8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF1E0u, 0x1BF1E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF1E8u;
label_1bf1e8:
    // 0x1bf1e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bf1ec:
    if (ctx->pc == 0x1BF1ECu) {
        ctx->pc = 0x1BF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1E8u;
        // 0x1bf1ec: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF1F0u;
        goto label_1bf1f0;
    }
    ctx->pc = 0x1BF1E8u;
    {
        const bool branch_taken_0x1bf1e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1E8u;
        // 0x1bf1ec: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1e8) {
            ctx->pc = 0x1BF200u;
            goto label_1bf200;
        }
    }
    ctx->pc = 0x1BF1F0u;
label_1bf1f0:
    // 0x1bf1f0: 0xc06f838  jal         func_1BE0E0
label_1bf1f4:
    if (ctx->pc == 0x1BF1F4u) {
        ctx->pc = 0x1BF1F8u;
        goto label_1bf1f8;
    }
    ctx->pc = 0x1BF1F0u;
    SET_GPR_U32(ctx, 31, 0x1BF1F8u);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF1F0u, 0x1BF1F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF1F8u;
label_1bf1f8:
    // 0x1bf1f8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bf1fc:
    if (ctx->pc == 0x1BF1FCu) {
        ctx->pc = 0x1BF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1F8u;
        // 0x1bf1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF200u;
        goto label_1bf200;
    }
    ctx->pc = 0x1BF1F8u;
    {
        const bool branch_taken_0x1bf1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF1F8u;
        // 0x1bf1fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf1f8) {
            ctx->pc = 0x1BF210u;
            goto label_1bf210;
        }
    }
    ctx->pc = 0x1BF200u;
label_1bf200:
    // 0x1bf200: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1bf200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_1bf204:
    // 0x1bf204: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
label_1bf208:
    if (ctx->pc == 0x1BF208u) {
        ctx->pc = 0x1BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF204u;
        // 0x1bf208: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF20Cu;
        goto label_1bf20c;
    }
    ctx->pc = 0x1BF204u;
    {
        const bool branch_taken_0x1bf204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF204u;
        // 0x1bf208: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf204) {
            ctx->pc = 0x1BF1A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf1a8;
        }
    }
    ctx->pc = 0x1BF20Cu;
label_1bf20c:
    // 0x1bf20c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1bf20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bf210:
    // 0x1bf210: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x1bf210u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_1bf214:
    // 0x1bf214: 0xdfb10138  ld          $s1, 0x138($sp)
    ctx->pc = 0x1bf214u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 312)));
label_1bf218:
    // 0x1bf218: 0xdfb20140  ld          $s2, 0x140($sp)
    ctx->pc = 0x1bf218u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_1bf21c:
    // 0x1bf21c: 0xdfb30148  ld          $s3, 0x148($sp)
    ctx->pc = 0x1bf21cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 328)));
label_1bf220:
    // 0x1bf220: 0xdfb40150  ld          $s4, 0x150($sp)
    ctx->pc = 0x1bf220u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_1bf224:
    // 0x1bf224: 0xdfb50158  ld          $s5, 0x158($sp)
    ctx->pc = 0x1bf224u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 344)));
label_1bf228:
    // 0x1bf228: 0xdfb60160  ld          $s6, 0x160($sp)
    ctx->pc = 0x1bf228u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_1bf22c:
    // 0x1bf22c: 0xdfbf0168  ld          $ra, 0x168($sp)
    ctx->pc = 0x1bf22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 360)));
label_1bf230:
    // 0x1bf230: 0x3e00008  jr          $ra
label_1bf234:
    if (ctx->pc == 0x1BF234u) {
        ctx->pc = 0x1BF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF230u;
        // 0x1bf234: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF238u;
        goto label_1bf238;
    }
    ctx->pc = 0x1BF230u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF230u;
        // 0x1bf234: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF230u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF238u;
label_1bf238:
    // 0x1bf238: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf238u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bf23c:
    // 0x1bf23c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf23cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bf240:
    // 0x1bf240: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bf240u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf244:
    // 0x1bf244: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bf248:
    if (ctx->pc == 0x1BF248u) {
        ctx->pc = 0x1BF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF244u;
        // 0x1bf248: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF24Cu;
        goto label_1bf24c;
    }
    ctx->pc = 0x1BF244u;
    {
        const bool branch_taken_0x1bf244 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF244u;
        // 0x1bf248: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf244) {
            ctx->pc = 0x1BF260u;
            goto label_1bf260;
        }
    }
    ctx->pc = 0x1BF24Cu;
label_1bf24c:
    // 0x1bf24c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf24cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf250:
    // 0x1bf250: 0xc06f838  jal         func_1BE0E0
label_1bf254:
    if (ctx->pc == 0x1BF254u) {
        ctx->pc = 0x1BF254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF250u;
        // 0x1bf254: 0x24848f28  addiu       $a0, $a0, -0x70D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938408));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF258u;
        goto label_1bf258;
    }
    ctx->pc = 0x1BF250u;
    SET_GPR_U32(ctx, 31, 0x1BF258u);
    ctx->pc = 0x1BF254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF250u;
    // 0x1bf254: 0x24848f28  addiu       $a0, $a0, -0x70D8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938408));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF250u, 0x1BF258u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF258u;
label_1bf258:
    // 0x1bf258: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bf25c:
    if (ctx->pc == 0x1BF25Cu) {
        ctx->pc = 0x1BF25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF258u;
        // 0x1bf25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF260u;
        goto label_1bf260;
    }
    ctx->pc = 0x1BF258u;
    {
        const bool branch_taken_0x1bf258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF258u;
        // 0x1bf25c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf258) {
            ctx->pc = 0x1BF28Cu;
            goto label_1bf28c;
        }
    }
    ctx->pc = 0x1BF260u;
label_1bf260:
    // 0x1bf260: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bf260u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf264:
    // 0x1bf264: 0x8c420030  lw          $v0, 0x30($v0)
    ctx->pc = 0x1bf264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
label_1bf268:
    // 0x1bf268: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bf26c:
    if (ctx->pc == 0x1BF26Cu) {
        ctx->pc = 0x1BF26Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF268u;
        // 0x1bf26c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF270u;
        goto label_1bf270;
    }
    ctx->pc = 0x1BF268u;
    {
        const bool branch_taken_0x1bf268 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf268) {
            ctx->pc = 0x1BF26Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF268u;
            // 0x1bf26c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF280u;
            goto label_1bf280;
        }
    }
    ctx->pc = 0x1BF270u;
label_1bf270:
    // 0x1bf270: 0x40f809  jalr        $v0
label_1bf274:
    if (ctx->pc == 0x1BF274u) {
        ctx->pc = 0x1BF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF270u;
        // 0x1bf274: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF278u;
        goto label_1bf278;
    }
    ctx->pc = 0x1BF270u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF278u);
        ctx->pc = 0x1BF274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF270u;
        // 0x1bf274: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF270u, 0x1BF278u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF278u;
label_1bf278:
    // 0x1bf278: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bf27c:
    if (ctx->pc == 0x1BF27Cu) {
        ctx->pc = 0x1BF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF278u;
        // 0x1bf27c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF280u;
        goto label_1bf280;
    }
    ctx->pc = 0x1BF278u;
    {
        const bool branch_taken_0x1bf278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF278u;
        // 0x1bf27c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf278) {
            ctx->pc = 0x1BF288u;
            goto label_1bf288;
        }
    }
    ctx->pc = 0x1BF280u;
label_1bf280:
    // 0x1bf280: 0xc06f838  jal         func_1BE0E0
label_1bf284:
    if (ctx->pc == 0x1BF284u) {
        ctx->pc = 0x1BF284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF280u;
        // 0x1bf284: 0x24848f48  addiu       $a0, $a0, -0x70B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938440));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF288u;
        goto label_1bf288;
    }
    ctx->pc = 0x1BF280u;
    SET_GPR_U32(ctx, 31, 0x1BF288u);
    ctx->pc = 0x1BF284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF280u;
    // 0x1bf284: 0x24848f48  addiu       $a0, $a0, -0x70B8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF280u, 0x1BF288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF288u;
label_1bf288:
    // 0x1bf288: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bf288u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf28c:
    // 0x1bf28c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf28cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf290:
    // 0x1bf290: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bf290u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bf294:
    // 0x1bf294: 0x3e00008  jr          $ra
label_1bf298:
    if (ctx->pc == 0x1BF298u) {
        ctx->pc = 0x1BF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF294u;
        // 0x1bf298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF29Cu;
        goto label_1bf29c;
    }
    ctx->pc = 0x1BF294u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF294u;
        // 0x1bf298: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF294u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF29Cu;
label_1bf29c:
    // 0x1bf29c: 0x0  nop
    ctx->pc = 0x1bf29cu;
    // NOP
label_1bf2a0:
    // 0x1bf2a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf2a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bf2a4:
    // 0x1bf2a4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bf2a8:
    if (ctx->pc == 0x1BF2A8u) {
        ctx->pc = 0x1BF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2A4u;
        // 0x1bf2a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2ACu;
        goto label_1bf2ac;
    }
    ctx->pc = 0x1BF2A4u;
    {
        const bool branch_taken_0x1bf2a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2A4u;
        // 0x1bf2a8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf2a4) {
            ctx->pc = 0x1BF2C0u;
            goto label_1bf2c0;
        }
    }
    ctx->pc = 0x1BF2ACu;
label_1bf2ac:
    // 0x1bf2ac: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf2acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf2b0:
    // 0x1bf2b0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf2b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf2b4:
    // 0x1bf2b4: 0x24848f68  addiu       $a0, $a0, -0x7098
    ctx->pc = 0x1bf2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938472));
label_1bf2b8:
    // 0x1bf2b8: 0x806f838  j           func_1BE0E0
label_1bf2bc:
    if (ctx->pc == 0x1BF2BCu) {
        ctx->pc = 0x1BF2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2B8u;
        // 0x1bf2bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2C0u;
        goto label_1bf2c0;
    }
    ctx->pc = 0x1BF2B8u;
    ctx->pc = 0x1BF2BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF2B8u;
    // 0x1bf2bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BF2C0u;
label_1bf2c0:
    // 0x1bf2c0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bf2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf2c4:
    // 0x1bf2c4: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x1bf2c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_1bf2c8:
    // 0x1bf2c8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_1bf2cc:
    if (ctx->pc == 0x1BF2CCu) {
        ctx->pc = 0x1BF2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2C8u;
        // 0x1bf2cc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2D0u;
        goto label_1bf2d0;
    }
    ctx->pc = 0x1BF2C8u;
    {
        const bool branch_taken_0x1bf2c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf2c8) {
            ctx->pc = 0x1BF2CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF2C8u;
            // 0x1bf2cc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF2E8u;
            goto label_1bf2e8;
        }
    }
    ctx->pc = 0x1BF2D0u;
label_1bf2d0:
    // 0x1bf2d0: 0x40f809  jalr        $v0
label_1bf2d4:
    if (ctx->pc == 0x1BF2D4u) {
        ctx->pc = 0x1BF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2D0u;
        // 0x1bf2d4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2D8u;
        goto label_1bf2d8;
    }
    ctx->pc = 0x1BF2D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF2D8u);
        ctx->pc = 0x1BF2D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2D0u;
        // 0x1bf2d4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF2D0u, 0x1BF2D8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF2D8u;
label_1bf2d8:
    // 0x1bf2d8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf2d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf2dc:
    // 0x1bf2dc: 0x3e00008  jr          $ra
label_1bf2e0:
    if (ctx->pc == 0x1BF2E0u) {
        ctx->pc = 0x1BF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2DCu;
        // 0x1bf2e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2E4u;
        goto label_1bf2e4;
    }
    ctx->pc = 0x1BF2DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2DCu;
        // 0x1bf2e0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF2DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF2E4u;
label_1bf2e4:
    // 0x1bf2e4: 0x0  nop
    ctx->pc = 0x1bf2e4u;
    // NOP
label_1bf2e8:
    // 0x1bf2e8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf2e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf2ec:
    // 0x1bf2ec: 0x24848f88  addiu       $a0, $a0, -0x7078
    ctx->pc = 0x1bf2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938504));
label_1bf2f0:
    // 0x1bf2f0: 0x806f838  j           func_1BE0E0
label_1bf2f4:
    if (ctx->pc == 0x1BF2F4u) {
        ctx->pc = 0x1BF2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF2F0u;
        // 0x1bf2f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF2F8u;
        goto label_1bf2f8;
    }
    ctx->pc = 0x1BF2F0u;
    ctx->pc = 0x1BF2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF2F0u;
    // 0x1bf2f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    sub_001BE0E0_0x1be0e0(rdram, ctx, runtime); return;
    ctx->pc = 0x1BF2F8u;
label_1bf2f8:
    // 0x1bf2f8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bf2fc:
    // 0x1bf2fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1bf2fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1bf300:
    // 0x1bf300: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1bf300u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf304:
    // 0x1bf304: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bf308:
    if (ctx->pc == 0x1BF308u) {
        ctx->pc = 0x1BF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF304u;
        // 0x1bf308: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF30Cu;
        goto label_1bf30c;
    }
    ctx->pc = 0x1BF304u;
    {
        const bool branch_taken_0x1bf304 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF308u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF304u;
        // 0x1bf308: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf304) {
            ctx->pc = 0x1BF320u;
            goto label_1bf320;
        }
    }
    ctx->pc = 0x1BF30Cu;
label_1bf30c:
    // 0x1bf30c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf30cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf310:
    // 0x1bf310: 0xc06f838  jal         func_1BE0E0
label_1bf314:
    if (ctx->pc == 0x1BF314u) {
        ctx->pc = 0x1BF314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF310u;
        // 0x1bf314: 0x24848fa8  addiu       $a0, $a0, -0x7058 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF318u;
        goto label_1bf318;
    }
    ctx->pc = 0x1BF310u;
    SET_GPR_U32(ctx, 31, 0x1BF318u);
    ctx->pc = 0x1BF314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF310u;
    // 0x1bf314: 0x24848fa8  addiu       $a0, $a0, -0x7058 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF310u, 0x1BF318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF318u;
label_1bf318:
    // 0x1bf318: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bf31c:
    if (ctx->pc == 0x1BF31Cu) {
        ctx->pc = 0x1BF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF318u;
        // 0x1bf31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF320u;
        goto label_1bf320;
    }
    ctx->pc = 0x1BF318u;
    {
        const bool branch_taken_0x1bf318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF318u;
        // 0x1bf31c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf318) {
            ctx->pc = 0x1BF34Cu;
            goto label_1bf34c;
        }
    }
    ctx->pc = 0x1BF320u;
label_1bf320:
    // 0x1bf320: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bf320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf324:
    // 0x1bf324: 0x8c420038  lw          $v0, 0x38($v0)
    ctx->pc = 0x1bf324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 56)));
label_1bf328:
    // 0x1bf328: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bf32c:
    if (ctx->pc == 0x1BF32Cu) {
        ctx->pc = 0x1BF32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF328u;
        // 0x1bf32c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF330u;
        goto label_1bf330;
    }
    ctx->pc = 0x1BF328u;
    {
        const bool branch_taken_0x1bf328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf328) {
            ctx->pc = 0x1BF32Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF328u;
            // 0x1bf32c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF340u;
            goto label_1bf340;
        }
    }
    ctx->pc = 0x1BF330u;
label_1bf330:
    // 0x1bf330: 0x40f809  jalr        $v0
label_1bf334:
    if (ctx->pc == 0x1BF334u) {
        ctx->pc = 0x1BF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF330u;
        // 0x1bf334: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF338u;
        goto label_1bf338;
    }
    ctx->pc = 0x1BF330u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF338u);
        ctx->pc = 0x1BF334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF330u;
        // 0x1bf334: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF330u, 0x1BF338u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF338u;
label_1bf338:
    // 0x1bf338: 0x10000003  b           . + 4 + (0x3 << 2)
label_1bf33c:
    if (ctx->pc == 0x1BF33Cu) {
        ctx->pc = 0x1BF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF338u;
        // 0x1bf33c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF340u;
        goto label_1bf340;
    }
    ctx->pc = 0x1BF338u;
    {
        const bool branch_taken_0x1bf338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF338u;
        // 0x1bf33c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf338) {
            ctx->pc = 0x1BF348u;
            goto label_1bf348;
        }
    }
    ctx->pc = 0x1BF340u;
label_1bf340:
    // 0x1bf340: 0xc06f838  jal         func_1BE0E0
label_1bf344:
    if (ctx->pc == 0x1BF344u) {
        ctx->pc = 0x1BF344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF340u;
        // 0x1bf344: 0x24848fc8  addiu       $a0, $a0, -0x7038 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF348u;
        goto label_1bf348;
    }
    ctx->pc = 0x1BF340u;
    SET_GPR_U32(ctx, 31, 0x1BF348u);
    ctx->pc = 0x1BF344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF340u;
    // 0x1bf344: 0x24848fc8  addiu       $a0, $a0, -0x7038 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF340u, 0x1BF348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF348u;
label_1bf348:
    // 0x1bf348: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1bf348u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf34c:
    // 0x1bf34c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1bf34cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf350:
    // 0x1bf350: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1bf350u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1bf354:
    // 0x1bf354: 0x3e00008  jr          $ra
label_1bf358:
    if (ctx->pc == 0x1BF358u) {
        ctx->pc = 0x1BF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF354u;
        // 0x1bf358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF35Cu;
        goto label_1bf35c;
    }
    ctx->pc = 0x1BF354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF354u;
        // 0x1bf358: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF354u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF35Cu;
label_1bf35c:
    // 0x1bf35c: 0x0  nop
    ctx->pc = 0x1bf35cu;
    // NOP
label_1bf360:
    // 0x1bf360: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1bf360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_1bf364:
    // 0x1bf364: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1bf364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1bf368:
    // 0x1bf368: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf368u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf36c:
    // 0x1bf36c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1bf36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1bf370:
    // 0x1bf370: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1bf374:
    if (ctx->pc == 0x1BF374u) {
        ctx->pc = 0x1BF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF370u;
        // 0x1bf374: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF378u;
        goto label_1bf378;
    }
    ctx->pc = 0x1BF370u;
    {
        const bool branch_taken_0x1bf370 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF370u;
        // 0x1bf374: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf370) {
            ctx->pc = 0x1BF388u;
            goto label_1bf388;
        }
    }
    ctx->pc = 0x1BF378u;
label_1bf378:
    // 0x1bf378: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf378u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf37c:
    // 0x1bf37c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1bf380:
    if (ctx->pc == 0x1BF380u) {
        ctx->pc = 0x1BF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF37Cu;
        // 0x1bf380: 0x24848fe8  addiu       $a0, $a0, -0x7018 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF384u;
        goto label_1bf384;
    }
    ctx->pc = 0x1BF37Cu;
    {
        const bool branch_taken_0x1bf37c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF37Cu;
        // 0x1bf380: 0x24848fe8  addiu       $a0, $a0, -0x7018 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf37c) {
            ctx->pc = 0x1BF3FCu;
            goto label_1bf3fc;
        }
    }
    ctx->pc = 0x1BF384u;
label_1bf384:
    // 0x1bf384: 0x0  nop
    ctx->pc = 0x1bf384u;
    // NOP
label_1bf388:
    // 0x1bf388: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1bf388u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1bf38c:
    // 0x1bf38c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf38cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf390:
    // 0x1bf390: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf390u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bf394:
    // 0x1bf394: 0xc06fa46  jal         func_1BE918
label_1bf398:
    if (ctx->pc == 0x1BF398u) {
        ctx->pc = 0x1BF398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF394u;
        // 0x1bf398: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF39Cu;
        goto label_1bf39c;
    }
    ctx->pc = 0x1BF394u;
    SET_GPR_U32(ctx, 31, 0x1BF39Cu);
    ctx->pc = 0x1BF398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF394u;
    // 0x1bf398: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE918u, 0x1BF394u, 0x1BF39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF39Cu;
label_1bf39c:
    // 0x1bf39c: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x1bf39cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_1bf3a0:
    // 0x1bf3a0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bf3a4:
    if (ctx->pc == 0x1BF3A4u) {
        ctx->pc = 0x1BF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3A0u;
        // 0x1bf3a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF3A8u;
        goto label_1bf3a8;
    }
    ctx->pc = 0x1BF3A0u;
    {
        const bool branch_taken_0x1bf3a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3A0u;
        // 0x1bf3a4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3a0) {
            ctx->pc = 0x1BF3B8u;
            goto label_1bf3b8;
        }
    }
    ctx->pc = 0x1BF3A8u;
label_1bf3a8:
    // 0x1bf3a8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf3ac:
    // 0x1bf3ac: 0x10000013  b           . + 4 + (0x13 << 2)
label_1bf3b0:
    if (ctx->pc == 0x1BF3B0u) {
        ctx->pc = 0x1BF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3ACu;
        // 0x1bf3b0: 0x24848fe8  addiu       $a0, $a0, -0x7018 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938600));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF3B4u;
        goto label_1bf3b4;
    }
    ctx->pc = 0x1BF3ACu;
    {
        const bool branch_taken_0x1bf3ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3ACu;
        // 0x1bf3b0: 0x24848fe8  addiu       $a0, $a0, -0x7018 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938600));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3ac) {
            ctx->pc = 0x1BF3FCu;
            goto label_1bf3fc;
        }
    }
    ctx->pc = 0x1BF3B4u;
label_1bf3b4:
    // 0x1bf3b4: 0x0  nop
    ctx->pc = 0x1bf3b4u;
    // NOP
label_1bf3b8:
    // 0x1bf3b8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf3b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf3bc:
    // 0x1bf3bc: 0xc06f9b4  jal         func_1BE6D0
label_1bf3c0:
    if (ctx->pc == 0x1BF3C0u) {
        ctx->pc = 0x1BF3C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3BCu;
        // 0x1bf3c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF3C4u;
        goto label_1bf3c4;
    }
    ctx->pc = 0x1BF3BCu;
    SET_GPR_U32(ctx, 31, 0x1BF3C4u);
    ctx->pc = 0x1BF3C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3BCu;
    // 0x1bf3c0: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE6D0u, 0x1BF3BCu, 0x1BF3C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3C4u;
label_1bf3c4:
    // 0x1bf3c4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bf3c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf3c8:
    // 0x1bf3c8: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1bf3cc:
    if (ctx->pc == 0x1BF3CCu) {
        ctx->pc = 0x1BF3CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3C8u;
        // 0x1bf3cc: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF3D0u;
        goto label_1bf3d0;
    }
    ctx->pc = 0x1BF3C8u;
    {
        const bool branch_taken_0x1bf3c8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf3c8) {
            ctx->pc = 0x1BF3CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF3C8u;
            // 0x1bf3cc: 0x8e02003c  lw          $v0, 0x3C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF3E0u;
            goto label_1bf3e0;
        }
    }
    ctx->pc = 0x1BF3D0u;
label_1bf3d0:
    // 0x1bf3d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf3d4:
    // 0x1bf3d4: 0xc06f838  jal         func_1BE0E0
label_1bf3d8:
    if (ctx->pc == 0x1BF3D8u) {
        ctx->pc = 0x1BF3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3D4u;
        // 0x1bf3d8: 0x24849038  addiu       $a0, $a0, -0x6FC8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938680));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF3DCu;
        goto label_1bf3dc;
    }
    ctx->pc = 0x1BF3D4u;
    SET_GPR_U32(ctx, 31, 0x1BF3DCu);
    ctx->pc = 0x1BF3D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF3D4u;
    // 0x1bf3d8: 0x24849038  addiu       $a0, $a0, -0x6FC8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938680));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF3D4u, 0x1BF3DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF3DCu;
label_1bf3dc:
    // 0x1bf3dc: 0x8e02003c  lw          $v0, 0x3C($s0)
    ctx->pc = 0x1bf3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1bf3e0:
    // 0x1bf3e0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bf3e4:
    if (ctx->pc == 0x1BF3E4u) {
        ctx->pc = 0x1BF3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3E0u;
        // 0x1bf3e4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF3E8u;
        goto label_1bf3e8;
    }
    ctx->pc = 0x1BF3E0u;
    {
        const bool branch_taken_0x1bf3e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf3e0) {
            ctx->pc = 0x1BF3E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF3E0u;
            // 0x1bf3e4: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF3F8u;
            goto label_1bf3f8;
        }
    }
    ctx->pc = 0x1BF3E8u;
label_1bf3e8:
    // 0x1bf3e8: 0x40f809  jalr        $v0
label_1bf3ec:
    if (ctx->pc == 0x1BF3ECu) {
        ctx->pc = 0x1BF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3E8u;
        // 0x1bf3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF3F0u;
        goto label_1bf3f0;
    }
    ctx->pc = 0x1BF3E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF3F0u);
        ctx->pc = 0x1BF3ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3E8u;
        // 0x1bf3ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF3E8u, 0x1BF3F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF3F0u;
label_1bf3f0:
    // 0x1bf3f0: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bf3f4:
    if (ctx->pc == 0x1BF3F4u) {
        ctx->pc = 0x1BF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3F0u;
        // 0x1bf3f4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF3F8u;
        goto label_1bf3f8;
    }
    ctx->pc = 0x1BF3F0u;
    {
        const bool branch_taken_0x1bf3f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF3F0u;
        // 0x1bf3f4: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf3f0) {
            ctx->pc = 0x1BF40Cu;
            goto label_1bf40c;
        }
    }
    ctx->pc = 0x1BF3F8u;
label_1bf3f8:
    // 0x1bf3f8: 0x24849060  addiu       $a0, $a0, -0x6FA0
    ctx->pc = 0x1bf3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938720));
label_1bf3fc:
    // 0x1bf3fc: 0xc06f838  jal         func_1BE0E0
label_1bf400:
    if (ctx->pc == 0x1BF400u) {
        ctx->pc = 0x1BF404u;
        goto label_1bf404;
    }
    ctx->pc = 0x1BF3FCu;
    SET_GPR_U32(ctx, 31, 0x1BF404u);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF3FCu, 0x1BF404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF404u;
label_1bf404:
    // 0x1bf404: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bf404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bf408:
    // 0x1bf408: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1bf408u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1bf40c:
    // 0x1bf40c: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1bf40cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1bf410:
    // 0x1bf410: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x1bf410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1bf414:
    // 0x1bf414: 0x3e00008  jr          $ra
label_1bf418:
    if (ctx->pc == 0x1BF418u) {
        ctx->pc = 0x1BF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF414u;
        // 0x1bf418: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF41Cu;
        goto label_1bf41c;
    }
    ctx->pc = 0x1BF414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF414u;
        // 0x1bf418: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF41Cu;
label_1bf41c:
    // 0x1bf41c: 0x0  nop
    ctx->pc = 0x1bf41cu;
    // NOP
label_1bf420:
    // 0x1bf420: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1bf420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_1bf424:
    // 0x1bf424: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1bf424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1bf428:
    // 0x1bf428: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf428u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf42c:
    // 0x1bf42c: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1bf42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1bf430:
    // 0x1bf430: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1bf430u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1bf434:
    // 0x1bf434: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf438:
    // 0x1bf438: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf43c:
    // 0x1bf43c: 0xffbf0270  sd          $ra, 0x270($sp)
    ctx->pc = 0x1bf43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
label_1bf440:
    // 0x1bf440: 0xc06fa46  jal         func_1BE918
label_1bf444:
    if (ctx->pc == 0x1BF444u) {
        ctx->pc = 0x1BF444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF440u;
        // 0x1bf444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF448u;
        goto label_1bf448;
    }
    ctx->pc = 0x1BF440u;
    SET_GPR_U32(ctx, 31, 0x1BF448u);
    ctx->pc = 0x1BF444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF440u;
    // 0x1bf444: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE918u, 0x1BF440u, 0x1BF448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF448u;
label_1bf448:
    // 0x1bf448: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf44c:
    // 0x1bf44c: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x1bf44cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_1bf450:
    // 0x1bf450: 0x24849080  addiu       $a0, $a0, -0x6F80
    ctx->pc = 0x1bf450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938752));
label_1bf454:
    // 0x1bf454: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x1bf454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1bf458:
    // 0x1bf458: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_1bf45c:
    if (ctx->pc == 0x1BF45Cu) {
        ctx->pc = 0x1BF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF458u;
        // 0x1bf45c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF460u;
        goto label_1bf460;
    }
    ctx->pc = 0x1BF458u;
    {
        const bool branch_taken_0x1bf458 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF45Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF458u;
        // 0x1bf45c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf458) {
            ctx->pc = 0x1BF4A4u;
            goto label_1bf4a4;
        }
    }
    ctx->pc = 0x1BF460u;
label_1bf460:
    // 0x1bf460: 0xc06f9b4  jal         func_1BE6D0
label_1bf464:
    if (ctx->pc == 0x1BF464u) {
        ctx->pc = 0x1BF464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF460u;
        // 0x1bf464: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF468u;
        goto label_1bf468;
    }
    ctx->pc = 0x1BF460u;
    SET_GPR_U32(ctx, 31, 0x1BF468u);
    ctx->pc = 0x1BF464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF460u;
    // 0x1bf464: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE6D0u, 0x1BF460u, 0x1BF468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF468u;
label_1bf468:
    // 0x1bf468: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf468u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf46c:
    // 0x1bf46c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bf46cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf470:
    // 0x1bf470: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
label_1bf474:
    if (ctx->pc == 0x1BF474u) {
        ctx->pc = 0x1BF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF470u;
        // 0x1bf474: 0x248490d0  addiu       $a0, $a0, -0x6F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF478u;
        goto label_1bf478;
    }
    ctx->pc = 0x1BF470u;
    {
        const bool branch_taken_0x1bf470 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF470u;
        // 0x1bf474: 0x248490d0  addiu       $a0, $a0, -0x6F30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf470) {
            ctx->pc = 0x1BF480u;
            goto label_1bf480;
        }
    }
    ctx->pc = 0x1BF478u;
label_1bf478:
    // 0x1bf478: 0xc06f838  jal         func_1BE0E0
label_1bf47c:
    if (ctx->pc == 0x1BF47Cu) {
        ctx->pc = 0x1BF480u;
        goto label_1bf480;
    }
    ctx->pc = 0x1BF478u;
    SET_GPR_U32(ctx, 31, 0x1BF480u);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF478u, 0x1BF480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF480u;
label_1bf480:
    // 0x1bf480: 0x8e020040  lw          $v0, 0x40($s0)
    ctx->pc = 0x1bf480u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1bf484:
    // 0x1bf484: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
label_1bf488:
    if (ctx->pc == 0x1BF488u) {
        ctx->pc = 0x1BF488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF484u;
        // 0x1bf488: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF48Cu;
        goto label_1bf48c;
    }
    ctx->pc = 0x1BF484u;
    {
        const bool branch_taken_0x1bf484 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf484) {
            ctx->pc = 0x1BF488u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF484u;
            // 0x1bf488: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF4A0u;
            goto label_1bf4a0;
        }
    }
    ctx->pc = 0x1BF48Cu;
label_1bf48c:
    // 0x1bf48c: 0x40f809  jalr        $v0
label_1bf490:
    if (ctx->pc == 0x1BF490u) {
        ctx->pc = 0x1BF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF48Cu;
        // 0x1bf490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF494u;
        goto label_1bf494;
    }
    ctx->pc = 0x1BF48Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF494u);
        ctx->pc = 0x1BF490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF48Cu;
        // 0x1bf490: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF48Cu, 0x1BF494u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF494u;
label_1bf494:
    // 0x1bf494: 0x10000007  b           . + 4 + (0x7 << 2)
label_1bf498:
    if (ctx->pc == 0x1BF498u) {
        ctx->pc = 0x1BF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF494u;
        // 0x1bf498: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF49Cu;
        goto label_1bf49c;
    }
    ctx->pc = 0x1BF494u;
    {
        const bool branch_taken_0x1bf494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF494u;
        // 0x1bf498: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf494) {
            ctx->pc = 0x1BF4B4u;
            goto label_1bf4b4;
        }
    }
    ctx->pc = 0x1BF49Cu;
label_1bf49c:
    // 0x1bf49c: 0x0  nop
    ctx->pc = 0x1bf49cu;
    // NOP
label_1bf4a0:
    // 0x1bf4a0: 0x248490f8  addiu       $a0, $a0, -0x6F08
    ctx->pc = 0x1bf4a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938872));
label_1bf4a4:
    // 0x1bf4a4: 0xc06f838  jal         func_1BE0E0
label_1bf4a8:
    if (ctx->pc == 0x1BF4A8u) {
        ctx->pc = 0x1BF4ACu;
        goto label_1bf4ac;
    }
    ctx->pc = 0x1BF4A4u;
    SET_GPR_U32(ctx, 31, 0x1BF4ACu);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF4A4u, 0x1BF4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4ACu;
label_1bf4ac:
    // 0x1bf4ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf4acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf4b0:
    // 0x1bf4b0: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1bf4b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1bf4b4:
    // 0x1bf4b4: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1bf4b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1bf4b8:
    // 0x1bf4b8: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x1bf4b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1bf4bc:
    // 0x1bf4bc: 0x3e00008  jr          $ra
label_1bf4c0:
    if (ctx->pc == 0x1BF4C0u) {
        ctx->pc = 0x1BF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4BCu;
        // 0x1bf4c0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF4C4u;
        goto label_1bf4c4;
    }
    ctx->pc = 0x1BF4BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4BCu;
        // 0x1bf4c0: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF4BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF4C4u;
label_1bf4c4:
    // 0x1bf4c4: 0x0  nop
    ctx->pc = 0x1bf4c4u;
    // NOP
label_1bf4c8:
    // 0x1bf4c8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1bf4c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1bf4cc:
    // 0x1bf4cc: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1bf4ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1bf4d0:
    // 0x1bf4d0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x1bf4d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf4d4:
    // 0x1bf4d4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1bf4d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1bf4d8:
    // 0x1bf4d8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1bf4d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf4dc:
    // 0x1bf4dc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1bf4dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1bf4e0:
    // 0x1bf4e0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1bf4e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1bf4e4:
    // 0x1bf4e4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1bf4e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1bf4e8:
    // 0x1bf4e8: 0xffb60050  sd          $s6, 0x50($sp)
    ctx->pc = 0x1bf4e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 22));
label_1bf4ec:
    // 0x1bf4ec: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1bf4ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1bf4f0:
    // 0x1bf4f0: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x1bf4f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_1bf4f4:
    // 0x1bf4f4: 0xc04a83e  jal         func_12A0F8
label_1bf4f8:
    if (ctx->pc == 0x1BF4F8u) {
        ctx->pc = 0x1BF4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF4F4u;
        // 0x1bf4f8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF4FCu;
        goto label_1bf4fc;
    }
    ctx->pc = 0x1BF4F4u;
    SET_GPR_U32(ctx, 31, 0x1BF4FCu);
    ctx->pc = 0x1BF4F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF4F4u;
    // 0x1bf4f8: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x1BF4F4u, 0x1BF4FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF4FCu;
label_1bf4fc:
    // 0x1bf4fc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x1bf4fcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf500:
    // 0x1bf500: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1bf500u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1bf504:
    // 0x1bf504: 0x24535594  addiu       $s3, $v0, 0x5594
    ctx->pc = 0x1bf504u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 21908));
label_1bf508:
    // 0x1bf508: 0x2676fffc  addiu       $s6, $s3, -0x4
    ctx->pc = 0x1bf508u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967292));
label_1bf50c:
    // 0x1bf50c: 0x118100  sll         $s0, $s1, 4
    ctx->pc = 0x1bf50cu;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_1bf510:
    // 0x1bf510: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x1bf510u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_1bf514:
    // 0x1bf514: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x1bf514u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bf518:
    // 0x1bf518: 0x2132821  addu        $a1, $s0, $s3
    ctx->pc = 0x1bf518u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 19)));
label_1bf51c:
    // 0x1bf51c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x1bf51cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_1bf520:
    // 0x1bf520: 0xc04a8f8  jal         func_12A3E0
label_1bf524:
    if (ctx->pc == 0x1BF524u) {
        ctx->pc = 0x1BF524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF520u;
        // 0x1bf524: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF528u;
        goto label_1bf528;
    }
    ctx->pc = 0x1BF520u;
    SET_GPR_U32(ctx, 31, 0x1BF528u);
    ctx->pc = 0x1BF524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF520u;
    // 0x1bf524: 0x2168021  addu        $s0, $s0, $s6 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x1BF520u, 0x1BF528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF528u;
label_1bf528:
    // 0x1bf528: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1bf52c:
    if (ctx->pc == 0x1BF52Cu) {
        ctx->pc = 0x1BF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF528u;
        // 0x1bf52c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF530u;
        goto label_1bf530;
    }
    ctx->pc = 0x1BF528u;
    {
        const bool branch_taken_0x1bf528 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF528u;
        // 0x1bf52c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf528) {
            ctx->pc = 0x1BF5A0u;
            goto label_1bf5a0;
        }
    }
    ctx->pc = 0x1BF530u;
label_1bf530:
    // 0x1bf530: 0xc06ffba  jal         func_1BFEE8
label_1bf534:
    if (ctx->pc == 0x1BF534u) {
        ctx->pc = 0x1BF534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF530u;
        // 0x1bf534: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF538u;
        goto label_1bf538;
    }
    ctx->pc = 0x1BF530u;
    SET_GPR_U32(ctx, 31, 0x1BF538u);
    ctx->pc = 0x1BF534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF530u;
    // 0x1bf534: 0x8e100000  lw          $s0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFEE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFEE8u, 0x1BF530u, 0x1BF538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF538u;
label_1bf538:
    // 0x1bf538: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_1bf53c:
    if (ctx->pc == 0x1BF53Cu) {
        ctx->pc = 0x1BF540u;
        goto label_1bf540;
    }
    ctx->pc = 0x1BF538u;
    {
        const bool branch_taken_0x1bf538 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf538) {
            ctx->pc = 0x1BF578u;
            goto label_1bf578;
        }
    }
    ctx->pc = 0x1BF540u;
label_1bf540:
    // 0x1bf540: 0x12000018  beqz        $s0, . + 4 + (0x18 << 2)
label_1bf544:
    if (ctx->pc == 0x1BF544u) {
        ctx->pc = 0x1BF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF540u;
        // 0x1bf544: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF548u;
        goto label_1bf548;
    }
    ctx->pc = 0x1BF540u;
    {
        const bool branch_taken_0x1bf540 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF540u;
        // 0x1bf544: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf540) {
            ctx->pc = 0x1BF5A4u;
            goto label_1bf5a4;
        }
    }
    ctx->pc = 0x1BF548u;
label_1bf548:
    // 0x1bf548: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1bf548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1bf54c:
    // 0x1bf54c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_1bf550:
    if (ctx->pc == 0x1BF550u) {
        ctx->pc = 0x1BF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF54Cu;
        // 0x1bf550: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF554u;
        goto label_1bf554;
    }
    ctx->pc = 0x1BF54Cu;
    {
        const bool branch_taken_0x1bf54c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF54Cu;
        // 0x1bf550: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf54c) {
            ctx->pc = 0x1BF5A4u;
            goto label_1bf5a4;
        }
    }
    ctx->pc = 0x1BF554u;
label_1bf554:
    // 0x1bf554: 0xafb20004  sw          $s2, 0x4($sp)
    ctx->pc = 0x1bf554u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 18));
label_1bf558:
    // 0x1bf558: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf558u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf55c:
    // 0x1bf55c: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1bf55cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1bf560:
    // 0x1bf560: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf560u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf564:
    // 0x1bf564: 0x8e020060  lw          $v0, 0x60($s0)
    ctx->pc = 0x1bf564u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
label_1bf568:
    // 0x1bf568: 0x40f809  jalr        $v0
label_1bf56c:
    if (ctx->pc == 0x1BF56Cu) {
        ctx->pc = 0x1BF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF568u;
        // 0x1bf56c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF570u;
        goto label_1bf570;
    }
    ctx->pc = 0x1BF568u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF570u);
        ctx->pc = 0x1BF56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF568u;
        // 0x1bf56c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF568u, 0x1BF570u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF570u;
label_1bf570:
    // 0x1bf570: 0x1000000e  b           . + 4 + (0xE << 2)
label_1bf574:
    if (ctx->pc == 0x1BF574u) {
        ctx->pc = 0x1BF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF570u;
        // 0x1bf574: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF578u;
        goto label_1bf578;
    }
    ctx->pc = 0x1BF570u;
    {
        const bool branch_taken_0x1bf570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF570u;
        // 0x1bf574: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf570) {
            ctx->pc = 0x1BF5ACu;
            goto label_1bf5ac;
        }
    }
    ctx->pc = 0x1BF578u;
label_1bf578:
    // 0x1bf578: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_1bf57c:
    if (ctx->pc == 0x1BF57Cu) {
        ctx->pc = 0x1BF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF578u;
        // 0x1bf57c: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF580u;
        goto label_1bf580;
    }
    ctx->pc = 0x1BF578u;
    {
        const bool branch_taken_0x1bf578 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF57Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF578u;
        // 0x1bf57c: 0x2a220020  slti        $v0, $s1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf578) {
            ctx->pc = 0x1BF5A4u;
            goto label_1bf5a4;
        }
    }
    ctx->pc = 0x1BF580u;
label_1bf580:
    // 0x1bf580: 0x8e100044  lw          $s0, 0x44($s0)
    ctx->pc = 0x1bf580u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1bf584:
    // 0x1bf584: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_1bf588:
    if (ctx->pc == 0x1BF588u) {
        ctx->pc = 0x1BF58Cu;
        goto label_1bf58c;
    }
    ctx->pc = 0x1BF584u;
    {
        const bool branch_taken_0x1bf584 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf584) {
            ctx->pc = 0x1BF5A4u;
            goto label_1bf5a4;
        }
    }
    ctx->pc = 0x1BF58Cu;
label_1bf58c:
    // 0x1bf58c: 0x200f809  jalr        $s0
label_1bf590:
    if (ctx->pc == 0x1BF590u) {
        ctx->pc = 0x1BF594u;
        goto label_1bf594;
    }
    ctx->pc = 0x1BF58Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 16);
        SET_GPR_U32(ctx, 31, 0x1BF594u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF58Cu, 0x1BF594u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF594u;
label_1bf594:
    // 0x1bf594: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bf598:
    if (ctx->pc == 0x1BF598u) {
        ctx->pc = 0x1BF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF594u;
        // 0x1bf598: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF59Cu;
        goto label_1bf59c;
    }
    ctx->pc = 0x1BF594u;
    {
        const bool branch_taken_0x1bf594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF594u;
        // 0x1bf598: 0x40a02d  daddu       $s4, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf594) {
            ctx->pc = 0x1BF5ACu;
            goto label_1bf5ac;
        }
    }
    ctx->pc = 0x1BF59Cu;
label_1bf59c:
    // 0x1bf59c: 0x0  nop
    ctx->pc = 0x1bf59cu;
    // NOP
label_1bf5a0:
    // 0x1bf5a0: 0x2a220020  slti        $v0, $s1, 0x20
    ctx->pc = 0x1bf5a0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)32) ? 1 : 0);
label_1bf5a4:
    // 0x1bf5a4: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_1bf5a8:
    if (ctx->pc == 0x1BF5A8u) {
        ctx->pc = 0x1BF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5A4u;
        // 0x1bf5a8: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF5ACu;
        goto label_1bf5ac;
    }
    ctx->pc = 0x1BF5A4u;
    {
        const bool branch_taken_0x1bf5a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF5A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5A4u;
        // 0x1bf5a8: 0x118100  sll         $s0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf5a4) {
            ctx->pc = 0x1BF510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf510;
        }
    }
    ctx->pc = 0x1BF5ACu;
label_1bf5ac:
    // 0x1bf5ac: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1bf5acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5b0:
    // 0x1bf5b0: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1bf5b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1bf5b4:
    // 0x1bf5b4: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1bf5b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1bf5b8:
    // 0x1bf5b8: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1bf5b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1bf5bc:
    // 0x1bf5bc: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1bf5bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1bf5c0:
    // 0x1bf5c0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1bf5c0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1bf5c4:
    // 0x1bf5c4: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1bf5c4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1bf5c8:
    // 0x1bf5c8: 0xdfb60050  ld          $s6, 0x50($sp)
    ctx->pc = 0x1bf5c8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1bf5cc:
    // 0x1bf5cc: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x1bf5ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_1bf5d0:
    // 0x1bf5d0: 0x3e00008  jr          $ra
label_1bf5d4:
    if (ctx->pc == 0x1BF5D4u) {
        ctx->pc = 0x1BF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5D0u;
        // 0x1bf5d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF5D8u;
        goto label_1bf5d8;
    }
    ctx->pc = 0x1BF5D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF5D0u;
        // 0x1bf5d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF5D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF5D8u;
label_1bf5d8:
    // 0x1bf5d8: 0x27bdfd70  addiu       $sp, $sp, -0x290
    ctx->pc = 0x1bf5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966640));
label_1bf5dc:
    // 0x1bf5dc: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1bf5dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1bf5e0:
    // 0x1bf5e0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf5e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5e4:
    // 0x1bf5e4: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1bf5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1bf5e8:
    // 0x1bf5e8: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1bf5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1bf5ec:
    // 0x1bf5ec: 0xffb20270  sd          $s2, 0x270($sp)
    ctx->pc = 0x1bf5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 18));
label_1bf5f0:
    // 0x1bf5f0: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1bf5f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5f4:
    // 0x1bf5f4: 0xffb30278  sd          $s3, 0x278($sp)
    ctx->pc = 0x1bf5f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 632), GPR_U64(ctx, 19));
label_1bf5f8:
    // 0x1bf5f8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1bf5f8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1bf5fc:
    // 0x1bf5fc: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf5fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf600:
    // 0x1bf600: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf600u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bf604:
    // 0x1bf604: 0xffb40280  sd          $s4, 0x280($sp)
    ctx->pc = 0x1bf604u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 640), GPR_U64(ctx, 20));
label_1bf608:
    // 0x1bf608: 0xffbf0288  sd          $ra, 0x288($sp)
    ctx->pc = 0x1bf608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 648), GPR_U64(ctx, 31));
label_1bf60c:
    // 0x1bf60c: 0xc06fa46  jal         func_1BE918
label_1bf610:
    if (ctx->pc == 0x1BF610u) {
        ctx->pc = 0x1BF610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF60Cu;
        // 0x1bf610: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF614u;
        goto label_1bf614;
    }
    ctx->pc = 0x1BF60Cu;
    SET_GPR_U32(ctx, 31, 0x1BF614u);
    ctx->pc = 0x1BF610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF60Cu;
    // 0x1bf610: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE918u, 0x1BF60Cu, 0x1BF614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF614u;
label_1bf614:
    // 0x1bf614: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x1bf614u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf618:
    // 0x1bf618: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x1bf618u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf61c:
    // 0x1bf61c: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_1bf620:
    if (ctx->pc == 0x1BF620u) {
        ctx->pc = 0x1BF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF61Cu;
        // 0x1bf620: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF624u;
        goto label_1bf624;
    }
    ctx->pc = 0x1BF61Cu;
    {
        const bool branch_taken_0x1bf61c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF61Cu;
        // 0x1bf620: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf61c) {
            ctx->pc = 0x1BF650u;
            goto label_1bf650;
        }
    }
    ctx->pc = 0x1BF624u;
label_1bf624:
    // 0x1bf624: 0xc06fa98  jal         func_1BEA60
label_1bf628:
    if (ctx->pc == 0x1BF628u) {
        ctx->pc = 0x1BF62Cu;
        goto label_1bf62c;
    }
    ctx->pc = 0x1BF624u;
    SET_GPR_U32(ctx, 31, 0x1BF62Cu);
    ctx->pc = 0x1BEA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BEA60u, 0x1BF624u, 0x1BF62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF62Cu;
label_1bf62c:
    // 0x1bf62c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf62cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf630:
    // 0x1bf630: 0x83a20000  lb          $v0, 0x0($sp)
    ctx->pc = 0x1bf630u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf634:
    // 0x1bf634: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1bf638:
    if (ctx->pc == 0x1BF638u) {
        ctx->pc = 0x1BF638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF634u;
        // 0x1bf638: 0x248490a8  addiu       $a0, $a0, -0x6F58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938792));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF63Cu;
        goto label_1bf63c;
    }
    ctx->pc = 0x1BF634u;
    {
        const bool branch_taken_0x1bf634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF634u;
        // 0x1bf638: 0x248490a8  addiu       $a0, $a0, -0x6F58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938792));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf634) {
            ctx->pc = 0x1BF650u;
            goto label_1bf650;
        }
    }
    ctx->pc = 0x1BF63Cu;
label_1bf63c:
    // 0x1bf63c: 0xc06f838  jal         func_1BE0E0
label_1bf640:
    if (ctx->pc == 0x1BF640u) {
        ctx->pc = 0x1BF644u;
        goto label_1bf644;
    }
    ctx->pc = 0x1BF63Cu;
    SET_GPR_U32(ctx, 31, 0x1BF644u);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF63Cu, 0x1BF644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF644u;
label_1bf644:
    // 0x1bf644: 0x10000011  b           . + 4 + (0x11 << 2)
label_1bf648:
    if (ctx->pc == 0x1BF648u) {
        ctx->pc = 0x1BF648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF644u;
        // 0x1bf648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF64Cu;
        goto label_1bf64c;
    }
    ctx->pc = 0x1BF644u;
    {
        const bool branch_taken_0x1bf644 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF644u;
        // 0x1bf648: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf644) {
            ctx->pc = 0x1BF68Cu;
            goto label_1bf68c;
        }
    }
    ctx->pc = 0x1BF64Cu;
label_1bf64c:
    // 0x1bf64c: 0x0  nop
    ctx->pc = 0x1bf64cu;
    // NOP
label_1bf650:
    // 0x1bf650: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf654:
    // 0x1bf654: 0xc06ffce  jal         func_1BFF38
label_1bf658:
    if (ctx->pc == 0x1BF658u) {
        ctx->pc = 0x1BF658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF654u;
        // 0x1bf658: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF65Cu;
        goto label_1bf65c;
    }
    ctx->pc = 0x1BF654u;
    SET_GPR_U32(ctx, 31, 0x1BF65Cu);
    ctx->pc = 0x1BF658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF654u;
    // 0x1bf658: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BFF38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BFF38u, 0x1BF654u, 0x1BF65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF65Cu;
label_1bf65c:
    // 0x1bf65c: 0xc06f8ea  jal         func_1BE3A8
label_1bf660:
    if (ctx->pc == 0x1BF660u) {
        ctx->pc = 0x1BF660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF65Cu;
        // 0x1bf660: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF664u;
        goto label_1bf664;
    }
    ctx->pc = 0x1BF65Cu;
    SET_GPR_U32(ctx, 31, 0x1BF664u);
    ctx->pc = 0x1BF660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF65Cu;
    // 0x1bf660: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE3A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE3A8u, 0x1BF65Cu, 0x1BF664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF664u;
label_1bf664:
    // 0x1bf664: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_1bf668:
    if (ctx->pc == 0x1BF668u) {
        ctx->pc = 0x1BF668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF664u;
        // 0x1bf668: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF66Cu;
        goto label_1bf66c;
    }
    ctx->pc = 0x1BF664u;
    {
        const bool branch_taken_0x1bf664 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf664) {
            ctx->pc = 0x1BF668u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF664u;
            // 0x1bf668: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF68Cu;
            goto label_1bf68c;
        }
    }
    ctx->pc = 0x1BF66Cu;
label_1bf66c:
    // 0x1bf66c: 0x8c420048  lw          $v0, 0x48($v0)
    ctx->pc = 0x1bf66cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_1bf670:
    // 0x1bf670: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1bf674:
    if (ctx->pc == 0x1BF674u) {
        ctx->pc = 0x1BF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF670u;
        // 0x1bf674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF678u;
        goto label_1bf678;
    }
    ctx->pc = 0x1BF670u;
    {
        const bool branch_taken_0x1bf670 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF670u;
        // 0x1bf674: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf670) {
            ctx->pc = 0x1BF688u;
            goto label_1bf688;
        }
    }
    ctx->pc = 0x1BF678u;
label_1bf678:
    // 0x1bf678: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1bf678u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1bf67c:
    // 0x1bf67c: 0x40f809  jalr        $v0
label_1bf680:
    if (ctx->pc == 0x1BF680u) {
        ctx->pc = 0x1BF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF67Cu;
        // 0x1bf680: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF684u;
        goto label_1bf684;
    }
    ctx->pc = 0x1BF67Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF684u);
        ctx->pc = 0x1BF680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF67Cu;
        // 0x1bf680: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF67Cu, 0x1BF684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF684u;
label_1bf684:
    // 0x1bf684: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1bf684u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf688:
    // 0x1bf688: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1bf688u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1bf68c:
    // 0x1bf68c: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1bf68cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1bf690:
    // 0x1bf690: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1bf690u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1bf694:
    // 0x1bf694: 0xdfb20270  ld          $s2, 0x270($sp)
    ctx->pc = 0x1bf694u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1bf698:
    // 0x1bf698: 0xdfb30278  ld          $s3, 0x278($sp)
    ctx->pc = 0x1bf698u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 632)));
label_1bf69c:
    // 0x1bf69c: 0xdfb40280  ld          $s4, 0x280($sp)
    ctx->pc = 0x1bf69cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 640)));
label_1bf6a0:
    // 0x1bf6a0: 0xdfbf0288  ld          $ra, 0x288($sp)
    ctx->pc = 0x1bf6a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 648)));
label_1bf6a4:
    // 0x1bf6a4: 0x3e00008  jr          $ra
label_1bf6a8:
    if (ctx->pc == 0x1BF6A8u) {
        ctx->pc = 0x1BF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6A4u;
        // 0x1bf6a8: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF6ACu;
        goto label_1bf6ac;
    }
    ctx->pc = 0x1BF6A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6A4u;
        // 0x1bf6a8: 0x27bd0290  addiu       $sp, $sp, 0x290 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF6A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF6ACu;
label_1bf6ac:
    // 0x1bf6ac: 0x0  nop
    ctx->pc = 0x1bf6acu;
    // NOP
label_1bf6b0:
    // 0x1bf6b0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf6b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bf6b4:
    // 0x1bf6b4: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bf6b8:
    if (ctx->pc == 0x1BF6B8u) {
        ctx->pc = 0x1BF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6B4u;
        // 0x1bf6b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF6BCu;
        goto label_1bf6bc;
    }
    ctx->pc = 0x1BF6B4u;
    {
        const bool branch_taken_0x1bf6b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF6B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6B4u;
        // 0x1bf6b8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf6b4) {
            ctx->pc = 0x1BF6D0u;
            goto label_1bf6d0;
        }
    }
    ctx->pc = 0x1BF6BCu;
label_1bf6bc:
    // 0x1bf6bc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf6bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf6c0:
    // 0x1bf6c0: 0xc06f838  jal         func_1BE0E0
label_1bf6c4:
    if (ctx->pc == 0x1BF6C4u) {
        ctx->pc = 0x1BF6C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6C0u;
        // 0x1bf6c4: 0x24849118  addiu       $a0, $a0, -0x6EE8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938904));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF6C8u;
        goto label_1bf6c8;
    }
    ctx->pc = 0x1BF6C0u;
    SET_GPR_U32(ctx, 31, 0x1BF6C8u);
    ctx->pc = 0x1BF6C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6C0u;
    // 0x1bf6c4: 0x24849118  addiu       $a0, $a0, -0x6EE8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF6C0u, 0x1BF6C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6C8u;
label_1bf6c8:
    // 0x1bf6c8: 0x1000000c  b           . + 4 + (0xC << 2)
label_1bf6cc:
    if (ctx->pc == 0x1BF6CCu) {
        ctx->pc = 0x1BF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6C8u;
        // 0x1bf6cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF6D0u;
        goto label_1bf6d0;
    }
    ctx->pc = 0x1BF6C8u;
    {
        const bool branch_taken_0x1bf6c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6C8u;
        // 0x1bf6cc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf6c8) {
            ctx->pc = 0x1BF6FCu;
            goto label_1bf6fc;
        }
    }
    ctx->pc = 0x1BF6D0u;
label_1bf6d0:
    // 0x1bf6d0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1bf6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf6d4:
    // 0x1bf6d4: 0x8c42004c  lw          $v0, 0x4C($v0)
    ctx->pc = 0x1bf6d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_1bf6d8:
    // 0x1bf6d8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bf6dc:
    if (ctx->pc == 0x1BF6DCu) {
        ctx->pc = 0x1BF6DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6D8u;
        // 0x1bf6dc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF6E0u;
        goto label_1bf6e0;
    }
    ctx->pc = 0x1BF6D8u;
    {
        const bool branch_taken_0x1bf6d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf6d8) {
            ctx->pc = 0x1BF6DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF6D8u;
            // 0x1bf6dc: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF6F0u;
            goto label_1bf6f0;
        }
    }
    ctx->pc = 0x1BF6E0u;
label_1bf6e0:
    // 0x1bf6e0: 0x40f809  jalr        $v0
label_1bf6e4:
    if (ctx->pc == 0x1BF6E4u) {
        ctx->pc = 0x1BF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6E0u;
        // 0x1bf6e4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF6E8u;
        goto label_1bf6e8;
    }
    ctx->pc = 0x1BF6E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF6E8u);
        ctx->pc = 0x1BF6E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6E0u;
        // 0x1bf6e4: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF6E0u, 0x1BF6E8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF6E8u;
label_1bf6e8:
    // 0x1bf6e8: 0x10000005  b           . + 4 + (0x5 << 2)
label_1bf6ec:
    if (ctx->pc == 0x1BF6ECu) {
        ctx->pc = 0x1BF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6E8u;
        // 0x1bf6ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF6F0u;
        goto label_1bf6f0;
    }
    ctx->pc = 0x1BF6E8u;
    {
        const bool branch_taken_0x1bf6e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF6ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6E8u;
        // 0x1bf6ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf6e8) {
            ctx->pc = 0x1BF700u;
            goto label_1bf700;
        }
    }
    ctx->pc = 0x1BF6F0u;
label_1bf6f0:
    // 0x1bf6f0: 0xc06f838  jal         func_1BE0E0
label_1bf6f4:
    if (ctx->pc == 0x1BF6F4u) {
        ctx->pc = 0x1BF6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF6F0u;
        // 0x1bf6f4: 0x24849140  addiu       $a0, $a0, -0x6EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF6F8u;
        goto label_1bf6f8;
    }
    ctx->pc = 0x1BF6F0u;
    SET_GPR_U32(ctx, 31, 0x1BF6F8u);
    ctx->pc = 0x1BF6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF6F0u;
    // 0x1bf6f4: 0x24849140  addiu       $a0, $a0, -0x6EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF6F0u, 0x1BF6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF6F8u;
label_1bf6f8:
    // 0x1bf6f8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1bf6f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf6fc:
    // 0x1bf6fc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf6fcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf700:
    // 0x1bf700: 0x3e00008  jr          $ra
label_1bf704:
    if (ctx->pc == 0x1BF704u) {
        ctx->pc = 0x1BF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF700u;
        // 0x1bf704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF708u;
        goto label_1bf708;
    }
    ctx->pc = 0x1BF700u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF700u;
        // 0x1bf704: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF700u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF708u;
label_1bf708:
    // 0x1bf708: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x1bf708u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_1bf70c:
    // 0x1bf70c: 0xffb00060  sd          $s0, 0x60($sp)
    ctx->pc = 0x1bf70cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
label_1bf710:
    // 0x1bf710: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf710u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf714:
    // 0x1bf714: 0xffb10068  sd          $s1, 0x68($sp)
    ctx->pc = 0x1bf714u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 104), GPR_U64(ctx, 17));
label_1bf718:
    // 0x1bf718: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1bf71c:
    if (ctx->pc == 0x1BF71Cu) {
        ctx->pc = 0x1BF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF718u;
        // 0x1bf71c: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF720u;
        goto label_1bf720;
    }
    ctx->pc = 0x1BF718u;
    {
        const bool branch_taken_0x1bf718 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF71Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF718u;
        // 0x1bf71c: 0xffbf0070  sd          $ra, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf718) {
            ctx->pc = 0x1BF730u;
            goto label_1bf730;
        }
    }
    ctx->pc = 0x1BF720u;
label_1bf720:
    // 0x1bf720: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf720u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf724:
    // 0x1bf724: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1bf728:
    if (ctx->pc == 0x1BF728u) {
        ctx->pc = 0x1BF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF724u;
        // 0x1bf728: 0x24849168  addiu       $a0, $a0, -0x6E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF72Cu;
        goto label_1bf72c;
    }
    ctx->pc = 0x1BF724u;
    {
        const bool branch_taken_0x1bf724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF724u;
        // 0x1bf728: 0x24849168  addiu       $a0, $a0, -0x6E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf724) {
            ctx->pc = 0x1BF7A4u;
            goto label_1bf7a4;
        }
    }
    ctx->pc = 0x1BF72Cu;
label_1bf72c:
    // 0x1bf72c: 0x0  nop
    ctx->pc = 0x1bf72cu;
    // NOP
label_1bf730:
    // 0x1bf730: 0x27b10030  addiu       $s1, $sp, 0x30
    ctx->pc = 0x1bf730u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_1bf734:
    // 0x1bf734: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf738:
    // 0x1bf738: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bf73c:
    // 0x1bf73c: 0xc06fa46  jal         func_1BE918
label_1bf740:
    if (ctx->pc == 0x1BF740u) {
        ctx->pc = 0x1BF740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF73Cu;
        // 0x1bf740: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF744u;
        goto label_1bf744;
    }
    ctx->pc = 0x1BF73Cu;
    SET_GPR_U32(ctx, 31, 0x1BF744u);
    ctx->pc = 0x1BF740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF73Cu;
    // 0x1bf740: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE918u, 0x1BF73Cu, 0x1BF744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF744u;
label_1bf744:
    // 0x1bf744: 0x83a20030  lb          $v0, 0x30($sp)
    ctx->pc = 0x1bf744u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_1bf748:
    // 0x1bf748: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bf74c:
    if (ctx->pc == 0x1BF74Cu) {
        ctx->pc = 0x1BF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF748u;
        // 0x1bf74c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF750u;
        goto label_1bf750;
    }
    ctx->pc = 0x1BF748u;
    {
        const bool branch_taken_0x1bf748 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF74Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF748u;
        // 0x1bf74c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf748) {
            ctx->pc = 0x1BF760u;
            goto label_1bf760;
        }
    }
    ctx->pc = 0x1BF750u;
label_1bf750:
    // 0x1bf750: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf750u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf754:
    // 0x1bf754: 0x10000013  b           . + 4 + (0x13 << 2)
label_1bf758:
    if (ctx->pc == 0x1BF758u) {
        ctx->pc = 0x1BF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF754u;
        // 0x1bf758: 0x24849168  addiu       $a0, $a0, -0x6E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF75Cu;
        goto label_1bf75c;
    }
    ctx->pc = 0x1BF754u;
    {
        const bool branch_taken_0x1bf754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF754u;
        // 0x1bf758: 0x24849168  addiu       $a0, $a0, -0x6E98 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938984));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf754) {
            ctx->pc = 0x1BF7A4u;
            goto label_1bf7a4;
        }
    }
    ctx->pc = 0x1BF75Cu;
label_1bf75c:
    // 0x1bf75c: 0x0  nop
    ctx->pc = 0x1bf75cu;
    // NOP
label_1bf760:
    // 0x1bf760: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf764:
    // 0x1bf764: 0xc06f9b4  jal         func_1BE6D0
label_1bf768:
    if (ctx->pc == 0x1BF768u) {
        ctx->pc = 0x1BF768u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF764u;
        // 0x1bf768: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF76Cu;
        goto label_1bf76c;
    }
    ctx->pc = 0x1BF764u;
    SET_GPR_U32(ctx, 31, 0x1BF76Cu);
    ctx->pc = 0x1BF768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF764u;
    // 0x1bf768: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE6D0u, 0x1BF764u, 0x1BF76Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF76Cu;
label_1bf76c:
    // 0x1bf76c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bf76cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf770:
    // 0x1bf770: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1bf774:
    if (ctx->pc == 0x1BF774u) {
        ctx->pc = 0x1BF774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF770u;
        // 0x1bf774: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF778u;
        goto label_1bf778;
    }
    ctx->pc = 0x1BF770u;
    {
        const bool branch_taken_0x1bf770 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf770) {
            ctx->pc = 0x1BF774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF770u;
            // 0x1bf774: 0x8e020050  lw          $v0, 0x50($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF788u;
            goto label_1bf788;
        }
    }
    ctx->pc = 0x1BF778u;
label_1bf778:
    // 0x1bf778: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf778u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf77c:
    // 0x1bf77c: 0xc06f838  jal         func_1BE0E0
label_1bf780:
    if (ctx->pc == 0x1BF780u) {
        ctx->pc = 0x1BF780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF77Cu;
        // 0x1bf780: 0x248491b8  addiu       $a0, $a0, -0x6E48 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF784u;
        goto label_1bf784;
    }
    ctx->pc = 0x1BF77Cu;
    SET_GPR_U32(ctx, 31, 0x1BF784u);
    ctx->pc = 0x1BF780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF77Cu;
    // 0x1bf780: 0x248491b8  addiu       $a0, $a0, -0x6E48 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF77Cu, 0x1BF784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF784u;
label_1bf784:
    // 0x1bf784: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x1bf784u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_1bf788:
    // 0x1bf788: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bf78c:
    if (ctx->pc == 0x1BF78Cu) {
        ctx->pc = 0x1BF78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF788u;
        // 0x1bf78c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF790u;
        goto label_1bf790;
    }
    ctx->pc = 0x1BF788u;
    {
        const bool branch_taken_0x1bf788 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf788) {
            ctx->pc = 0x1BF78Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF788u;
            // 0x1bf78c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF7A0u;
            goto label_1bf7a0;
        }
    }
    ctx->pc = 0x1BF790u;
label_1bf790:
    // 0x1bf790: 0x40f809  jalr        $v0
label_1bf794:
    if (ctx->pc == 0x1BF794u) {
        ctx->pc = 0x1BF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF790u;
        // 0x1bf794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF798u;
        goto label_1bf798;
    }
    ctx->pc = 0x1BF790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF798u);
        ctx->pc = 0x1BF794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF790u;
        // 0x1bf794: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF790u, 0x1BF798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF798u;
label_1bf798:
    // 0x1bf798: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bf79c:
    if (ctx->pc == 0x1BF79Cu) {
        ctx->pc = 0x1BF79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF798u;
        // 0x1bf79c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7A0u;
        goto label_1bf7a0;
    }
    ctx->pc = 0x1BF798u;
    {
        const bool branch_taken_0x1bf798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF79Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF798u;
        // 0x1bf79c: 0xdfb00060  ld          $s0, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf798) {
            ctx->pc = 0x1BF7B4u;
            goto label_1bf7b4;
        }
    }
    ctx->pc = 0x1BF7A0u;
label_1bf7a0:
    // 0x1bf7a0: 0x248491d8  addiu       $a0, $a0, -0x6E28
    ctx->pc = 0x1bf7a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939096));
label_1bf7a4:
    // 0x1bf7a4: 0xc06f838  jal         func_1BE0E0
label_1bf7a8:
    if (ctx->pc == 0x1BF7A8u) {
        ctx->pc = 0x1BF7ACu;
        goto label_1bf7ac;
    }
    ctx->pc = 0x1BF7A4u;
    SET_GPR_U32(ctx, 31, 0x1BF7ACu);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF7A4u, 0x1BF7ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF7ACu;
label_1bf7ac:
    // 0x1bf7ac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bf7acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bf7b0:
    // 0x1bf7b0: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x1bf7b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1bf7b4:
    // 0x1bf7b4: 0xdfb10068  ld          $s1, 0x68($sp)
    ctx->pc = 0x1bf7b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 104)));
label_1bf7b8:
    // 0x1bf7b8: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x1bf7b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1bf7bc:
    // 0x1bf7bc: 0x3e00008  jr          $ra
label_1bf7c0:
    if (ctx->pc == 0x1BF7C0u) {
        ctx->pc = 0x1BF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7BCu;
        // 0x1bf7c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7C4u;
        goto label_1bf7c4;
    }
    ctx->pc = 0x1BF7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF7C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7BCu;
        // 0x1bf7c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF7BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF7C4u;
label_1bf7c4:
    // 0x1bf7c4: 0x0  nop
    ctx->pc = 0x1bf7c4u;
    // NOP
label_1bf7c8:
    // 0x1bf7c8: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1bf7c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_1bf7cc:
    // 0x1bf7cc: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1bf7ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1bf7d0:
    // 0x1bf7d0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf7d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf7d4:
    // 0x1bf7d4: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1bf7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1bf7d8:
    // 0x1bf7d8: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1bf7dc:
    if (ctx->pc == 0x1BF7DCu) {
        ctx->pc = 0x1BF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7D8u;
        // 0x1bf7dc: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7E0u;
        goto label_1bf7e0;
    }
    ctx->pc = 0x1BF7D8u;
    {
        const bool branch_taken_0x1bf7d8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7D8u;
        // 0x1bf7dc: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7d8) {
            ctx->pc = 0x1BF7F0u;
            goto label_1bf7f0;
        }
    }
    ctx->pc = 0x1BF7E0u;
label_1bf7e0:
    // 0x1bf7e0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf7e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf7e4:
    // 0x1bf7e4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1bf7e8:
    if (ctx->pc == 0x1BF7E8u) {
        ctx->pc = 0x1BF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7E4u;
        // 0x1bf7e8: 0x248491f8  addiu       $a0, $a0, -0x6E08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF7ECu;
        goto label_1bf7ec;
    }
    ctx->pc = 0x1BF7E4u;
    {
        const bool branch_taken_0x1bf7e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF7E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7E4u;
        // 0x1bf7e8: 0x248491f8  addiu       $a0, $a0, -0x6E08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf7e4) {
            ctx->pc = 0x1BF864u;
            goto label_1bf864;
        }
    }
    ctx->pc = 0x1BF7ECu;
label_1bf7ec:
    // 0x1bf7ec: 0x0  nop
    ctx->pc = 0x1bf7ecu;
    // NOP
label_1bf7f0:
    // 0x1bf7f0: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1bf7f0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1bf7f4:
    // 0x1bf7f4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf7f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf7f8:
    // 0x1bf7f8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf7f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bf7fc:
    // 0x1bf7fc: 0xc06fa46  jal         func_1BE918
label_1bf800:
    if (ctx->pc == 0x1BF800u) {
        ctx->pc = 0x1BF800u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF7FCu;
        // 0x1bf800: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF804u;
        goto label_1bf804;
    }
    ctx->pc = 0x1BF7FCu;
    SET_GPR_U32(ctx, 31, 0x1BF804u);
    ctx->pc = 0x1BF800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF7FCu;
    // 0x1bf800: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE918u, 0x1BF7FCu, 0x1BF804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF804u;
label_1bf804:
    // 0x1bf804: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x1bf804u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_1bf808:
    // 0x1bf808: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bf80c:
    if (ctx->pc == 0x1BF80Cu) {
        ctx->pc = 0x1BF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF808u;
        // 0x1bf80c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF810u;
        goto label_1bf810;
    }
    ctx->pc = 0x1BF808u;
    {
        const bool branch_taken_0x1bf808 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF80Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF808u;
        // 0x1bf80c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf808) {
            ctx->pc = 0x1BF820u;
            goto label_1bf820;
        }
    }
    ctx->pc = 0x1BF810u;
label_1bf810:
    // 0x1bf810: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf810u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf814:
    // 0x1bf814: 0x10000013  b           . + 4 + (0x13 << 2)
label_1bf818:
    if (ctx->pc == 0x1BF818u) {
        ctx->pc = 0x1BF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF814u;
        // 0x1bf818: 0x248491f8  addiu       $a0, $a0, -0x6E08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF81Cu;
        goto label_1bf81c;
    }
    ctx->pc = 0x1BF814u;
    {
        const bool branch_taken_0x1bf814 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF814u;
        // 0x1bf818: 0x248491f8  addiu       $a0, $a0, -0x6E08 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf814) {
            ctx->pc = 0x1BF864u;
            goto label_1bf864;
        }
    }
    ctx->pc = 0x1BF81Cu;
label_1bf81c:
    // 0x1bf81c: 0x0  nop
    ctx->pc = 0x1bf81cu;
    // NOP
label_1bf820:
    // 0x1bf820: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf824:
    // 0x1bf824: 0xc06f9b4  jal         func_1BE6D0
label_1bf828:
    if (ctx->pc == 0x1BF828u) {
        ctx->pc = 0x1BF828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF824u;
        // 0x1bf828: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF82Cu;
        goto label_1bf82c;
    }
    ctx->pc = 0x1BF824u;
    SET_GPR_U32(ctx, 31, 0x1BF82Cu);
    ctx->pc = 0x1BF828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF824u;
    // 0x1bf828: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE6D0u, 0x1BF824u, 0x1BF82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF82Cu;
label_1bf82c:
    // 0x1bf82c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bf82cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf830:
    // 0x1bf830: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1bf834:
    if (ctx->pc == 0x1BF834u) {
        ctx->pc = 0x1BF834u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF830u;
        // 0x1bf834: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF838u;
        goto label_1bf838;
    }
    ctx->pc = 0x1BF830u;
    {
        const bool branch_taken_0x1bf830 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf830) {
            ctx->pc = 0x1BF834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF830u;
            // 0x1bf834: 0x8e020054  lw          $v0, 0x54($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF848u;
            goto label_1bf848;
        }
    }
    ctx->pc = 0x1BF838u;
label_1bf838:
    // 0x1bf838: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf838u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf83c:
    // 0x1bf83c: 0xc06f838  jal         func_1BE0E0
label_1bf840:
    if (ctx->pc == 0x1BF840u) {
        ctx->pc = 0x1BF840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF83Cu;
        // 0x1bf840: 0x24849248  addiu       $a0, $a0, -0x6DB8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF844u;
        goto label_1bf844;
    }
    ctx->pc = 0x1BF83Cu;
    SET_GPR_U32(ctx, 31, 0x1BF844u);
    ctx->pc = 0x1BF840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF83Cu;
    // 0x1bf840: 0x24849248  addiu       $a0, $a0, -0x6DB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF83Cu, 0x1BF844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF844u;
label_1bf844:
    // 0x1bf844: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x1bf844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
label_1bf848:
    // 0x1bf848: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bf84c:
    if (ctx->pc == 0x1BF84Cu) {
        ctx->pc = 0x1BF84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF848u;
        // 0x1bf84c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF850u;
        goto label_1bf850;
    }
    ctx->pc = 0x1BF848u;
    {
        const bool branch_taken_0x1bf848 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf848) {
            ctx->pc = 0x1BF84Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF848u;
            // 0x1bf84c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF860u;
            goto label_1bf860;
        }
    }
    ctx->pc = 0x1BF850u;
label_1bf850:
    // 0x1bf850: 0x40f809  jalr        $v0
label_1bf854:
    if (ctx->pc == 0x1BF854u) {
        ctx->pc = 0x1BF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF850u;
        // 0x1bf854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF858u;
        goto label_1bf858;
    }
    ctx->pc = 0x1BF850u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF858u);
        ctx->pc = 0x1BF854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF850u;
        // 0x1bf854: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF850u, 0x1BF858u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF858u;
label_1bf858:
    // 0x1bf858: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bf85c:
    if (ctx->pc == 0x1BF85Cu) {
        ctx->pc = 0x1BF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF858u;
        // 0x1bf85c: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF860u;
        goto label_1bf860;
    }
    ctx->pc = 0x1BF858u;
    {
        const bool branch_taken_0x1bf858 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF858u;
        // 0x1bf85c: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf858) {
            ctx->pc = 0x1BF874u;
            goto label_1bf874;
        }
    }
    ctx->pc = 0x1BF860u;
label_1bf860:
    // 0x1bf860: 0x24849270  addiu       $a0, $a0, -0x6D90
    ctx->pc = 0x1bf860u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939248));
label_1bf864:
    // 0x1bf864: 0xc06f838  jal         func_1BE0E0
label_1bf868:
    if (ctx->pc == 0x1BF868u) {
        ctx->pc = 0x1BF86Cu;
        goto label_1bf86c;
    }
    ctx->pc = 0x1BF864u;
    SET_GPR_U32(ctx, 31, 0x1BF86Cu);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF864u, 0x1BF86Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF86Cu;
label_1bf86c:
    // 0x1bf86c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bf86cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bf870:
    // 0x1bf870: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1bf870u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1bf874:
    // 0x1bf874: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1bf874u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1bf878:
    // 0x1bf878: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x1bf878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1bf87c:
    // 0x1bf87c: 0x3e00008  jr          $ra
label_1bf880:
    if (ctx->pc == 0x1BF880u) {
        ctx->pc = 0x1BF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF87Cu;
        // 0x1bf880: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF884u;
        goto label_1bf884;
    }
    ctx->pc = 0x1BF87Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF87Cu;
        // 0x1bf880: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF87Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF884u;
label_1bf884:
    // 0x1bf884: 0x0  nop
    ctx->pc = 0x1bf884u;
    // NOP
label_1bf888:
    // 0x1bf888: 0x27bdfd80  addiu       $sp, $sp, -0x280
    ctx->pc = 0x1bf888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966656));
label_1bf88c:
    // 0x1bf88c: 0xffb00260  sd          $s0, 0x260($sp)
    ctx->pc = 0x1bf88cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 608), GPR_U64(ctx, 16));
label_1bf890:
    // 0x1bf890: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1bf890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1bf894:
    // 0x1bf894: 0xffb10268  sd          $s1, 0x268($sp)
    ctx->pc = 0x1bf894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 616), GPR_U64(ctx, 17));
label_1bf898:
    // 0x1bf898: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
label_1bf89c:
    if (ctx->pc == 0x1BF89Cu) {
        ctx->pc = 0x1BF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF898u;
        // 0x1bf89c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8A0u;
        goto label_1bf8a0;
    }
    ctx->pc = 0x1BF898u;
    {
        const bool branch_taken_0x1bf898 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF89Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF898u;
        // 0x1bf89c: 0xffbf0270  sd          $ra, 0x270($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 624), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf898) {
            ctx->pc = 0x1BF8B0u;
            goto label_1bf8b0;
        }
    }
    ctx->pc = 0x1BF8A0u;
label_1bf8a0:
    // 0x1bf8a0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf8a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf8a4:
    // 0x1bf8a4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1bf8a8:
    if (ctx->pc == 0x1BF8A8u) {
        ctx->pc = 0x1BF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8A4u;
        // 0x1bf8a8: 0x24849290  addiu       $a0, $a0, -0x6D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8ACu;
        goto label_1bf8ac;
    }
    ctx->pc = 0x1BF8A4u;
    {
        const bool branch_taken_0x1bf8a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8A4u;
        // 0x1bf8a8: 0x24849290  addiu       $a0, $a0, -0x6D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8a4) {
            ctx->pc = 0x1BF924u;
            goto label_1bf924;
        }
    }
    ctx->pc = 0x1BF8ACu;
label_1bf8ac:
    // 0x1bf8ac: 0x0  nop
    ctx->pc = 0x1bf8acu;
    // NOP
label_1bf8b0:
    // 0x1bf8b0: 0x27b10130  addiu       $s1, $sp, 0x130
    ctx->pc = 0x1bf8b0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_1bf8b4:
    // 0x1bf8b4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf8b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf8b8:
    // 0x1bf8b8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1bf8b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1bf8bc:
    // 0x1bf8bc: 0xc06fa46  jal         func_1BE918
label_1bf8c0:
    if (ctx->pc == 0x1BF8C0u) {
        ctx->pc = 0x1BF8C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8BCu;
        // 0x1bf8c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8C4u;
        goto label_1bf8c4;
    }
    ctx->pc = 0x1BF8BCu;
    SET_GPR_U32(ctx, 31, 0x1BF8C4u);
    ctx->pc = 0x1BF8C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8BCu;
    // 0x1bf8c0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE918u, 0x1BF8BCu, 0x1BF8C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8C4u;
label_1bf8c4:
    // 0x1bf8c4: 0x83a20130  lb          $v0, 0x130($sp)
    ctx->pc = 0x1bf8c4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 304)));
label_1bf8c8:
    // 0x1bf8c8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_1bf8cc:
    if (ctx->pc == 0x1BF8CCu) {
        ctx->pc = 0x1BF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8C8u;
        // 0x1bf8cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8D0u;
        goto label_1bf8d0;
    }
    ctx->pc = 0x1BF8C8u;
    {
        const bool branch_taken_0x1bf8c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8C8u;
        // 0x1bf8cc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8c8) {
            ctx->pc = 0x1BF8E0u;
            goto label_1bf8e0;
        }
    }
    ctx->pc = 0x1BF8D0u;
label_1bf8d0:
    // 0x1bf8d0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf8d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf8d4:
    // 0x1bf8d4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1bf8d8:
    if (ctx->pc == 0x1BF8D8u) {
        ctx->pc = 0x1BF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8D4u;
        // 0x1bf8d8: 0x24849290  addiu       $a0, $a0, -0x6D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8DCu;
        goto label_1bf8dc;
    }
    ctx->pc = 0x1BF8D4u;
    {
        const bool branch_taken_0x1bf8d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF8D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8D4u;
        // 0x1bf8d8: 0x24849290  addiu       $a0, $a0, -0x6D70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf8d4) {
            ctx->pc = 0x1BF924u;
            goto label_1bf924;
        }
    }
    ctx->pc = 0x1BF8DCu;
label_1bf8dc:
    // 0x1bf8dc: 0x0  nop
    ctx->pc = 0x1bf8dcu;
    // NOP
label_1bf8e0:
    // 0x1bf8e0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x1bf8e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1bf8e4:
    // 0x1bf8e4: 0xc06f9b4  jal         func_1BE6D0
label_1bf8e8:
    if (ctx->pc == 0x1BF8E8u) {
        ctx->pc = 0x1BF8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8E4u;
        // 0x1bf8e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8ECu;
        goto label_1bf8ec;
    }
    ctx->pc = 0x1BF8E4u;
    SET_GPR_U32(ctx, 31, 0x1BF8ECu);
    ctx->pc = 0x1BF8E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8E4u;
    // 0x1bf8e8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE6D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE6D0u, 0x1BF8E4u, 0x1BF8ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF8ECu;
label_1bf8ec:
    // 0x1bf8ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1bf8ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1bf8f0:
    // 0x1bf8f0: 0x56000005  bnel        $s0, $zero, . + 4 + (0x5 << 2)
label_1bf8f4:
    if (ctx->pc == 0x1BF8F4u) {
        ctx->pc = 0x1BF8F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8F0u;
        // 0x1bf8f4: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF8F8u;
        goto label_1bf8f8;
    }
    ctx->pc = 0x1BF8F0u;
    {
        const bool branch_taken_0x1bf8f0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x1bf8f0) {
            ctx->pc = 0x1BF8F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF8F0u;
            // 0x1bf8f4: 0x8e020058  lw          $v0, 0x58($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF908u;
            goto label_1bf908;
        }
    }
    ctx->pc = 0x1BF8F8u;
label_1bf8f8:
    // 0x1bf8f8: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf8f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf8fc:
    // 0x1bf8fc: 0xc06f838  jal         func_1BE0E0
label_1bf900:
    if (ctx->pc == 0x1BF900u) {
        ctx->pc = 0x1BF900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF8FCu;
        // 0x1bf900: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF904u;
        goto label_1bf904;
    }
    ctx->pc = 0x1BF8FCu;
    SET_GPR_U32(ctx, 31, 0x1BF904u);
    ctx->pc = 0x1BF900u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF8FCu;
    // 0x1bf900: 0x248492e0  addiu       $a0, $a0, -0x6D20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939360));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF8FCu, 0x1BF904u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF904u;
label_1bf904:
    // 0x1bf904: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1bf904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_1bf908:
    // 0x1bf908: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_1bf90c:
    if (ctx->pc == 0x1BF90Cu) {
        ctx->pc = 0x1BF90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF908u;
        // 0x1bf90c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF910u;
        goto label_1bf910;
    }
    ctx->pc = 0x1BF908u;
    {
        const bool branch_taken_0x1bf908 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bf908) {
            ctx->pc = 0x1BF90Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF908u;
            // 0x1bf90c: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF920u;
            goto label_1bf920;
        }
    }
    ctx->pc = 0x1BF910u;
label_1bf910:
    // 0x1bf910: 0x40f809  jalr        $v0
label_1bf914:
    if (ctx->pc == 0x1BF914u) {
        ctx->pc = 0x1BF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF910u;
        // 0x1bf914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF918u;
        goto label_1bf918;
    }
    ctx->pc = 0x1BF910u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1BF918u);
        ctx->pc = 0x1BF914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF910u;
        // 0x1bf914: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF910u, 0x1BF918u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1BF918u;
label_1bf918:
    // 0x1bf918: 0x10000006  b           . + 4 + (0x6 << 2)
label_1bf91c:
    if (ctx->pc == 0x1BF91Cu) {
        ctx->pc = 0x1BF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF918u;
        // 0x1bf91c: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF920u;
        goto label_1bf920;
    }
    ctx->pc = 0x1BF918u;
    {
        const bool branch_taken_0x1bf918 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF91Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF918u;
        // 0x1bf91c: 0xdfb00260  ld          $s0, 0x260($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf918) {
            ctx->pc = 0x1BF934u;
            goto label_1bf934;
        }
    }
    ctx->pc = 0x1BF920u;
label_1bf920:
    // 0x1bf920: 0x24849308  addiu       $a0, $a0, -0x6CF8
    ctx->pc = 0x1bf920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939400));
label_1bf924:
    // 0x1bf924: 0xc06f838  jal         func_1BE0E0
label_1bf928:
    if (ctx->pc == 0x1BF928u) {
        ctx->pc = 0x1BF92Cu;
        goto label_1bf92c;
    }
    ctx->pc = 0x1BF924u;
    SET_GPR_U32(ctx, 31, 0x1BF92Cu);
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF924u, 0x1BF92Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF92Cu;
label_1bf92c:
    // 0x1bf92c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x1bf92cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1bf930:
    // 0x1bf930: 0xdfb00260  ld          $s0, 0x260($sp)
    ctx->pc = 0x1bf930u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 608)));
label_1bf934:
    // 0x1bf934: 0xdfb10268  ld          $s1, 0x268($sp)
    ctx->pc = 0x1bf934u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 616)));
label_1bf938:
    // 0x1bf938: 0xdfbf0270  ld          $ra, 0x270($sp)
    ctx->pc = 0x1bf938u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 624)));
label_1bf93c:
    // 0x1bf93c: 0x3e00008  jr          $ra
label_1bf940:
    if (ctx->pc == 0x1BF940u) {
        ctx->pc = 0x1BF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF93Cu;
        // 0x1bf940: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF944u;
        goto label_1bf944;
    }
    ctx->pc = 0x1BF93Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF93Cu;
        // 0x1bf940: 0x27bd0280  addiu       $sp, $sp, 0x280 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF93Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF944u;
label_1bf944:
    // 0x1bf944: 0x0  nop
    ctx->pc = 0x1bf944u;
    // NOP
label_1bf948:
    // 0x1bf948: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1bf948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1bf94c:
    // 0x1bf94c: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
label_1bf950:
    if (ctx->pc == 0x1BF950u) {
        ctx->pc = 0x1BF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF94Cu;
        // 0x1bf950: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF954u;
        goto label_1bf954;
    }
    ctx->pc = 0x1BF94Cu;
    {
        const bool branch_taken_0x1bf94c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1BF950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF94Cu;
        // 0x1bf950: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf94c) {
            ctx->pc = 0x1BF968u;
            goto label_1bf968;
        }
    }
    ctx->pc = 0x1BF954u;
label_1bf954:
    // 0x1bf954: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1bf954u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
label_1bf958:
    // 0x1bf958: 0xc06f838  jal         func_1BE0E0
label_1bf95c:
    if (ctx->pc == 0x1BF95Cu) {
        ctx->pc = 0x1BF95Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF958u;
        // 0x1bf95c: 0x24849328  addiu       $a0, $a0, -0x6CD8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939432));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF960u;
        goto label_1bf960;
    }
    ctx->pc = 0x1BF958u;
    SET_GPR_U32(ctx, 31, 0x1BF960u);
    ctx->pc = 0x1BF95Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1BF958u;
    // 0x1bf95c: 0x24849328  addiu       $a0, $a0, -0x6CD8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294939432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE0E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE0E0u, 0x1BF958u, 0x1BF960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BF960u;
label_1bf960:
    // 0x1bf960: 0x10000017  b           . + 4 + (0x17 << 2)
label_1bf964:
    if (ctx->pc == 0x1BF964u) {
        ctx->pc = 0x1BF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF960u;
        // 0x1bf964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF968u;
        goto label_1bf968;
    }
    ctx->pc = 0x1BF960u;
    {
        const bool branch_taken_0x1bf960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF960u;
        // 0x1bf964: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf960) {
            ctx->pc = 0x1BF9C0u;
            goto label_1bf9c0;
        }
    }
    ctx->pc = 0x1BF968u;
label_1bf968:
    // 0x1bf968: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1bf968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1bf96c:
    // 0x1bf96c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1bf96cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1bf970:
    // 0x1bf970: 0x24435590  addiu       $v1, $v0, 0x5590
    ctx->pc = 0x1bf970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 21904));
label_1bf974:
    // 0x1bf974: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1bf974u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1bf978:
    // 0x1bf978: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bf978u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bf97c:
    // 0x1bf97c: 0x1044000d  beq         $v0, $a0, . + 4 + (0xD << 2)
label_1bf980:
    if (ctx->pc == 0x1BF980u) {
        ctx->pc = 0x1BF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF97Cu;
        // 0x1bf980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF984u;
        goto label_1bf984;
    }
    ctx->pc = 0x1BF97Cu;
    {
        const bool branch_taken_0x1bf97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x1BF980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF97Cu;
        // 0x1bf980: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf97c) {
            ctx->pc = 0x1BF9B4u;
            goto label_1bf9b4;
        }
    }
    ctx->pc = 0x1BF984u;
label_1bf984:
    // 0x1bf984: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x1bf984u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_1bf988:
    // 0x1bf988: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1bf988u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_1bf98c:
    // 0x1bf98c: 0x0  nop
    ctx->pc = 0x1bf98cu;
    // NOP
label_1bf990:
    // 0x1bf990: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x1bf990u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
label_1bf994:
    // 0x1bf994: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x1bf994u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
label_1bf998:
    // 0x1bf998: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_1bf99c:
    if (ctx->pc == 0x1BF99Cu) {
        ctx->pc = 0x1BF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF998u;
        // 0x1bf99c: 0xa71821  addu        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9A0u;
        goto label_1bf9a0;
    }
    ctx->pc = 0x1BF998u;
    {
        const bool branch_taken_0x1bf998 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1BF99Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF998u;
        // 0x1bf99c: 0xa71821  addu        $v1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1bf998) {
            ctx->pc = 0x1BF9B4u;
            goto label_1bf9b4;
        }
    }
    ctx->pc = 0x1BF9A0u;
label_1bf9a0:
    // 0x1bf9a0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1bf9a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1bf9a4:
    // 0x1bf9a4: 0x0  nop
    ctx->pc = 0x1bf9a4u;
    // NOP
label_1bf9a8:
    // 0x1bf9a8: 0x0  nop
    ctx->pc = 0x1bf9a8u;
    // NOP
label_1bf9ac:
    // 0x1bf9ac: 0x5444fff8  bnel        $v0, $a0, . + 4 + (-0x8 << 2)
label_1bf9b0:
    if (ctx->pc == 0x1BF9B0u) {
        ctx->pc = 0x1BF9B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9ACu;
        // 0x1bf9b0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9B4u;
        goto label_1bf9b4;
    }
    ctx->pc = 0x1BF9ACu;
    {
        const bool branch_taken_0x1bf9ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1bf9ac) {
            ctx->pc = 0x1BF9B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1BF9ACu;
            // 0x1bf9b0: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1BF990u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1bf990;
        }
    }
    ctx->pc = 0x1BF9B4u;
label_1bf9b4:
    // 0x1bf9b4: 0x3c0201bf  lui         $v0, 0x1BF
    ctx->pc = 0x1bf9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)447 << 16));
label_1bf9b8:
    // 0x1bf9b8: 0x24425594  addiu       $v0, $v0, 0x5594
    ctx->pc = 0x1bf9b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21908));
label_1bf9bc:
    // 0x1bf9bc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x1bf9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1bf9c0:
    // 0x1bf9c0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1bf9c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1bf9c4:
    // 0x1bf9c4: 0x3e00008  jr          $ra
label_1bf9c8:
    if (ctx->pc == 0x1BF9C8u) {
        ctx->pc = 0x1BF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9C4u;
        // 0x1bf9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1BF9CCu;
        goto label_1bf9cc;
    }
    ctx->pc = 0x1BF9C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1BF9C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1BF9C4u;
        // 0x1bf9c8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1BF9C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1BF9CCu;
label_1bf9cc:
    // 0x1bf9cc: 0x0  nop
    ctx->pc = 0x1bf9ccu;
    // NOP
}
