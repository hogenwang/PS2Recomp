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

// Function: sub_002FA068
// Address: 0x2fa068 - 0x2fa650
void sub_002FA068_0x2fa068(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FA068_0x2fa068");
#endif

    switch (ctx->pc) {
        case 0x2fa068u: goto label_2fa068;
        case 0x2fa06cu: goto label_2fa06c;
        case 0x2fa070u: goto label_2fa070;
        case 0x2fa074u: goto label_2fa074;
        case 0x2fa078u: goto label_2fa078;
        case 0x2fa07cu: goto label_2fa07c;
        case 0x2fa080u: goto label_2fa080;
        case 0x2fa084u: goto label_2fa084;
        case 0x2fa088u: goto label_2fa088;
        case 0x2fa08cu: goto label_2fa08c;
        case 0x2fa090u: goto label_2fa090;
        case 0x2fa094u: goto label_2fa094;
        case 0x2fa098u: goto label_2fa098;
        case 0x2fa09cu: goto label_2fa09c;
        case 0x2fa0a0u: goto label_2fa0a0;
        case 0x2fa0a4u: goto label_2fa0a4;
        case 0x2fa0a8u: goto label_2fa0a8;
        case 0x2fa0acu: goto label_2fa0ac;
        case 0x2fa0b0u: goto label_2fa0b0;
        case 0x2fa0b4u: goto label_2fa0b4;
        case 0x2fa0b8u: goto label_2fa0b8;
        case 0x2fa0bcu: goto label_2fa0bc;
        case 0x2fa0c0u: goto label_2fa0c0;
        case 0x2fa0c4u: goto label_2fa0c4;
        case 0x2fa0c8u: goto label_2fa0c8;
        case 0x2fa0ccu: goto label_2fa0cc;
        case 0x2fa0d0u: goto label_2fa0d0;
        case 0x2fa0d4u: goto label_2fa0d4;
        case 0x2fa0d8u: goto label_2fa0d8;
        case 0x2fa0dcu: goto label_2fa0dc;
        case 0x2fa0e0u: goto label_2fa0e0;
        case 0x2fa0e4u: goto label_2fa0e4;
        case 0x2fa0e8u: goto label_2fa0e8;
        case 0x2fa0ecu: goto label_2fa0ec;
        case 0x2fa0f0u: goto label_2fa0f0;
        case 0x2fa0f4u: goto label_2fa0f4;
        case 0x2fa0f8u: goto label_2fa0f8;
        case 0x2fa0fcu: goto label_2fa0fc;
        case 0x2fa100u: goto label_2fa100;
        case 0x2fa104u: goto label_2fa104;
        case 0x2fa108u: goto label_2fa108;
        case 0x2fa10cu: goto label_2fa10c;
        case 0x2fa110u: goto label_2fa110;
        case 0x2fa114u: goto label_2fa114;
        case 0x2fa118u: goto label_2fa118;
        case 0x2fa11cu: goto label_2fa11c;
        case 0x2fa120u: goto label_2fa120;
        case 0x2fa124u: goto label_2fa124;
        case 0x2fa128u: goto label_2fa128;
        case 0x2fa12cu: goto label_2fa12c;
        case 0x2fa130u: goto label_2fa130;
        case 0x2fa134u: goto label_2fa134;
        case 0x2fa138u: goto label_2fa138;
        case 0x2fa13cu: goto label_2fa13c;
        case 0x2fa140u: goto label_2fa140;
        case 0x2fa144u: goto label_2fa144;
        case 0x2fa148u: goto label_2fa148;
        case 0x2fa14cu: goto label_2fa14c;
        case 0x2fa150u: goto label_2fa150;
        case 0x2fa154u: goto label_2fa154;
        case 0x2fa158u: goto label_2fa158;
        case 0x2fa15cu: goto label_2fa15c;
        case 0x2fa160u: goto label_2fa160;
        case 0x2fa164u: goto label_2fa164;
        case 0x2fa168u: goto label_2fa168;
        case 0x2fa16cu: goto label_2fa16c;
        case 0x2fa170u: goto label_2fa170;
        case 0x2fa174u: goto label_2fa174;
        case 0x2fa178u: goto label_2fa178;
        case 0x2fa17cu: goto label_2fa17c;
        case 0x2fa180u: goto label_2fa180;
        case 0x2fa184u: goto label_2fa184;
        case 0x2fa188u: goto label_2fa188;
        case 0x2fa18cu: goto label_2fa18c;
        case 0x2fa190u: goto label_2fa190;
        case 0x2fa194u: goto label_2fa194;
        case 0x2fa198u: goto label_2fa198;
        case 0x2fa19cu: goto label_2fa19c;
        case 0x2fa1a0u: goto label_2fa1a0;
        case 0x2fa1a4u: goto label_2fa1a4;
        case 0x2fa1a8u: goto label_2fa1a8;
        case 0x2fa1acu: goto label_2fa1ac;
        case 0x2fa1b0u: goto label_2fa1b0;
        case 0x2fa1b4u: goto label_2fa1b4;
        case 0x2fa1b8u: goto label_2fa1b8;
        case 0x2fa1bcu: goto label_2fa1bc;
        case 0x2fa1c0u: goto label_2fa1c0;
        case 0x2fa1c4u: goto label_2fa1c4;
        case 0x2fa1c8u: goto label_2fa1c8;
        case 0x2fa1ccu: goto label_2fa1cc;
        case 0x2fa1d0u: goto label_2fa1d0;
        case 0x2fa1d4u: goto label_2fa1d4;
        case 0x2fa1d8u: goto label_2fa1d8;
        case 0x2fa1dcu: goto label_2fa1dc;
        case 0x2fa1e0u: goto label_2fa1e0;
        case 0x2fa1e4u: goto label_2fa1e4;
        case 0x2fa1e8u: goto label_2fa1e8;
        case 0x2fa1ecu: goto label_2fa1ec;
        case 0x2fa1f0u: goto label_2fa1f0;
        case 0x2fa1f4u: goto label_2fa1f4;
        case 0x2fa1f8u: goto label_2fa1f8;
        case 0x2fa1fcu: goto label_2fa1fc;
        case 0x2fa200u: goto label_2fa200;
        case 0x2fa204u: goto label_2fa204;
        case 0x2fa208u: goto label_2fa208;
        case 0x2fa20cu: goto label_2fa20c;
        case 0x2fa210u: goto label_2fa210;
        case 0x2fa214u: goto label_2fa214;
        case 0x2fa218u: goto label_2fa218;
        case 0x2fa21cu: goto label_2fa21c;
        case 0x2fa220u: goto label_2fa220;
        case 0x2fa224u: goto label_2fa224;
        case 0x2fa228u: goto label_2fa228;
        case 0x2fa22cu: goto label_2fa22c;
        case 0x2fa230u: goto label_2fa230;
        case 0x2fa234u: goto label_2fa234;
        case 0x2fa238u: goto label_2fa238;
        case 0x2fa23cu: goto label_2fa23c;
        case 0x2fa240u: goto label_2fa240;
        case 0x2fa244u: goto label_2fa244;
        case 0x2fa248u: goto label_2fa248;
        case 0x2fa24cu: goto label_2fa24c;
        case 0x2fa250u: goto label_2fa250;
        case 0x2fa254u: goto label_2fa254;
        case 0x2fa258u: goto label_2fa258;
        case 0x2fa25cu: goto label_2fa25c;
        case 0x2fa260u: goto label_2fa260;
        case 0x2fa264u: goto label_2fa264;
        case 0x2fa268u: goto label_2fa268;
        case 0x2fa26cu: goto label_2fa26c;
        case 0x2fa270u: goto label_2fa270;
        case 0x2fa274u: goto label_2fa274;
        case 0x2fa278u: goto label_2fa278;
        case 0x2fa27cu: goto label_2fa27c;
        case 0x2fa280u: goto label_2fa280;
        case 0x2fa284u: goto label_2fa284;
        case 0x2fa288u: goto label_2fa288;
        case 0x2fa28cu: goto label_2fa28c;
        case 0x2fa290u: goto label_2fa290;
        case 0x2fa294u: goto label_2fa294;
        case 0x2fa298u: goto label_2fa298;
        case 0x2fa29cu: goto label_2fa29c;
        case 0x2fa2a0u: goto label_2fa2a0;
        case 0x2fa2a4u: goto label_2fa2a4;
        case 0x2fa2a8u: goto label_2fa2a8;
        case 0x2fa2acu: goto label_2fa2ac;
        case 0x2fa2b0u: goto label_2fa2b0;
        case 0x2fa2b4u: goto label_2fa2b4;
        case 0x2fa2b8u: goto label_2fa2b8;
        case 0x2fa2bcu: goto label_2fa2bc;
        case 0x2fa2c0u: goto label_2fa2c0;
        case 0x2fa2c4u: goto label_2fa2c4;
        case 0x2fa2c8u: goto label_2fa2c8;
        case 0x2fa2ccu: goto label_2fa2cc;
        case 0x2fa2d0u: goto label_2fa2d0;
        case 0x2fa2d4u: goto label_2fa2d4;
        case 0x2fa2d8u: goto label_2fa2d8;
        case 0x2fa2dcu: goto label_2fa2dc;
        case 0x2fa2e0u: goto label_2fa2e0;
        case 0x2fa2e4u: goto label_2fa2e4;
        case 0x2fa2e8u: goto label_2fa2e8;
        case 0x2fa2ecu: goto label_2fa2ec;
        case 0x2fa2f0u: goto label_2fa2f0;
        case 0x2fa2f4u: goto label_2fa2f4;
        case 0x2fa2f8u: goto label_2fa2f8;
        case 0x2fa2fcu: goto label_2fa2fc;
        case 0x2fa300u: goto label_2fa300;
        case 0x2fa304u: goto label_2fa304;
        case 0x2fa308u: goto label_2fa308;
        case 0x2fa30cu: goto label_2fa30c;
        case 0x2fa310u: goto label_2fa310;
        case 0x2fa314u: goto label_2fa314;
        case 0x2fa318u: goto label_2fa318;
        case 0x2fa31cu: goto label_2fa31c;
        case 0x2fa320u: goto label_2fa320;
        case 0x2fa324u: goto label_2fa324;
        case 0x2fa328u: goto label_2fa328;
        case 0x2fa32cu: goto label_2fa32c;
        case 0x2fa330u: goto label_2fa330;
        case 0x2fa334u: goto label_2fa334;
        case 0x2fa338u: goto label_2fa338;
        case 0x2fa33cu: goto label_2fa33c;
        case 0x2fa340u: goto label_2fa340;
        case 0x2fa344u: goto label_2fa344;
        case 0x2fa348u: goto label_2fa348;
        case 0x2fa34cu: goto label_2fa34c;
        case 0x2fa350u: goto label_2fa350;
        case 0x2fa354u: goto label_2fa354;
        case 0x2fa358u: goto label_2fa358;
        case 0x2fa35cu: goto label_2fa35c;
        case 0x2fa360u: goto label_2fa360;
        case 0x2fa364u: goto label_2fa364;
        case 0x2fa368u: goto label_2fa368;
        case 0x2fa36cu: goto label_2fa36c;
        case 0x2fa370u: goto label_2fa370;
        case 0x2fa374u: goto label_2fa374;
        case 0x2fa378u: goto label_2fa378;
        case 0x2fa37cu: goto label_2fa37c;
        case 0x2fa380u: goto label_2fa380;
        case 0x2fa384u: goto label_2fa384;
        case 0x2fa388u: goto label_2fa388;
        case 0x2fa38cu: goto label_2fa38c;
        case 0x2fa390u: goto label_2fa390;
        case 0x2fa394u: goto label_2fa394;
        case 0x2fa398u: goto label_2fa398;
        case 0x2fa39cu: goto label_2fa39c;
        case 0x2fa3a0u: goto label_2fa3a0;
        case 0x2fa3a4u: goto label_2fa3a4;
        case 0x2fa3a8u: goto label_2fa3a8;
        case 0x2fa3acu: goto label_2fa3ac;
        case 0x2fa3b0u: goto label_2fa3b0;
        case 0x2fa3b4u: goto label_2fa3b4;
        case 0x2fa3b8u: goto label_2fa3b8;
        case 0x2fa3bcu: goto label_2fa3bc;
        case 0x2fa3c0u: goto label_2fa3c0;
        case 0x2fa3c4u: goto label_2fa3c4;
        case 0x2fa3c8u: goto label_2fa3c8;
        case 0x2fa3ccu: goto label_2fa3cc;
        case 0x2fa3d0u: goto label_2fa3d0;
        case 0x2fa3d4u: goto label_2fa3d4;
        case 0x2fa3d8u: goto label_2fa3d8;
        case 0x2fa3dcu: goto label_2fa3dc;
        case 0x2fa3e0u: goto label_2fa3e0;
        case 0x2fa3e4u: goto label_2fa3e4;
        case 0x2fa3e8u: goto label_2fa3e8;
        case 0x2fa3ecu: goto label_2fa3ec;
        case 0x2fa3f0u: goto label_2fa3f0;
        case 0x2fa3f4u: goto label_2fa3f4;
        case 0x2fa3f8u: goto label_2fa3f8;
        case 0x2fa3fcu: goto label_2fa3fc;
        case 0x2fa400u: goto label_2fa400;
        case 0x2fa404u: goto label_2fa404;
        case 0x2fa408u: goto label_2fa408;
        case 0x2fa40cu: goto label_2fa40c;
        case 0x2fa410u: goto label_2fa410;
        case 0x2fa414u: goto label_2fa414;
        case 0x2fa418u: goto label_2fa418;
        case 0x2fa41cu: goto label_2fa41c;
        case 0x2fa420u: goto label_2fa420;
        case 0x2fa424u: goto label_2fa424;
        case 0x2fa428u: goto label_2fa428;
        case 0x2fa42cu: goto label_2fa42c;
        case 0x2fa430u: goto label_2fa430;
        case 0x2fa434u: goto label_2fa434;
        case 0x2fa438u: goto label_2fa438;
        case 0x2fa43cu: goto label_2fa43c;
        case 0x2fa440u: goto label_2fa440;
        case 0x2fa444u: goto label_2fa444;
        case 0x2fa448u: goto label_2fa448;
        case 0x2fa44cu: goto label_2fa44c;
        case 0x2fa450u: goto label_2fa450;
        case 0x2fa454u: goto label_2fa454;
        case 0x2fa458u: goto label_2fa458;
        case 0x2fa45cu: goto label_2fa45c;
        case 0x2fa460u: goto label_2fa460;
        case 0x2fa464u: goto label_2fa464;
        case 0x2fa468u: goto label_2fa468;
        case 0x2fa46cu: goto label_2fa46c;
        case 0x2fa470u: goto label_2fa470;
        case 0x2fa474u: goto label_2fa474;
        case 0x2fa478u: goto label_2fa478;
        case 0x2fa47cu: goto label_2fa47c;
        case 0x2fa480u: goto label_2fa480;
        case 0x2fa484u: goto label_2fa484;
        case 0x2fa488u: goto label_2fa488;
        case 0x2fa48cu: goto label_2fa48c;
        case 0x2fa490u: goto label_2fa490;
        case 0x2fa494u: goto label_2fa494;
        case 0x2fa498u: goto label_2fa498;
        case 0x2fa49cu: goto label_2fa49c;
        case 0x2fa4a0u: goto label_2fa4a0;
        case 0x2fa4a4u: goto label_2fa4a4;
        case 0x2fa4a8u: goto label_2fa4a8;
        case 0x2fa4acu: goto label_2fa4ac;
        case 0x2fa4b0u: goto label_2fa4b0;
        case 0x2fa4b4u: goto label_2fa4b4;
        case 0x2fa4b8u: goto label_2fa4b8;
        case 0x2fa4bcu: goto label_2fa4bc;
        case 0x2fa4c0u: goto label_2fa4c0;
        case 0x2fa4c4u: goto label_2fa4c4;
        case 0x2fa4c8u: goto label_2fa4c8;
        case 0x2fa4ccu: goto label_2fa4cc;
        case 0x2fa4d0u: goto label_2fa4d0;
        case 0x2fa4d4u: goto label_2fa4d4;
        case 0x2fa4d8u: goto label_2fa4d8;
        case 0x2fa4dcu: goto label_2fa4dc;
        case 0x2fa4e0u: goto label_2fa4e0;
        case 0x2fa4e4u: goto label_2fa4e4;
        case 0x2fa4e8u: goto label_2fa4e8;
        case 0x2fa4ecu: goto label_2fa4ec;
        case 0x2fa4f0u: goto label_2fa4f0;
        case 0x2fa4f4u: goto label_2fa4f4;
        case 0x2fa4f8u: goto label_2fa4f8;
        case 0x2fa4fcu: goto label_2fa4fc;
        case 0x2fa500u: goto label_2fa500;
        case 0x2fa504u: goto label_2fa504;
        case 0x2fa508u: goto label_2fa508;
        case 0x2fa50cu: goto label_2fa50c;
        case 0x2fa510u: goto label_2fa510;
        case 0x2fa514u: goto label_2fa514;
        case 0x2fa518u: goto label_2fa518;
        case 0x2fa51cu: goto label_2fa51c;
        case 0x2fa520u: goto label_2fa520;
        case 0x2fa524u: goto label_2fa524;
        case 0x2fa528u: goto label_2fa528;
        case 0x2fa52cu: goto label_2fa52c;
        case 0x2fa530u: goto label_2fa530;
        case 0x2fa534u: goto label_2fa534;
        case 0x2fa538u: goto label_2fa538;
        case 0x2fa53cu: goto label_2fa53c;
        case 0x2fa540u: goto label_2fa540;
        case 0x2fa544u: goto label_2fa544;
        case 0x2fa548u: goto label_2fa548;
        case 0x2fa54cu: goto label_2fa54c;
        case 0x2fa550u: goto label_2fa550;
        case 0x2fa554u: goto label_2fa554;
        case 0x2fa558u: goto label_2fa558;
        case 0x2fa55cu: goto label_2fa55c;
        case 0x2fa560u: goto label_2fa560;
        case 0x2fa564u: goto label_2fa564;
        case 0x2fa568u: goto label_2fa568;
        case 0x2fa56cu: goto label_2fa56c;
        case 0x2fa570u: goto label_2fa570;
        case 0x2fa574u: goto label_2fa574;
        case 0x2fa578u: goto label_2fa578;
        case 0x2fa57cu: goto label_2fa57c;
        case 0x2fa580u: goto label_2fa580;
        case 0x2fa584u: goto label_2fa584;
        case 0x2fa588u: goto label_2fa588;
        case 0x2fa58cu: goto label_2fa58c;
        case 0x2fa590u: goto label_2fa590;
        case 0x2fa594u: goto label_2fa594;
        case 0x2fa598u: goto label_2fa598;
        case 0x2fa59cu: goto label_2fa59c;
        case 0x2fa5a0u: goto label_2fa5a0;
        case 0x2fa5a4u: goto label_2fa5a4;
        case 0x2fa5a8u: goto label_2fa5a8;
        case 0x2fa5acu: goto label_2fa5ac;
        case 0x2fa5b0u: goto label_2fa5b0;
        case 0x2fa5b4u: goto label_2fa5b4;
        case 0x2fa5b8u: goto label_2fa5b8;
        case 0x2fa5bcu: goto label_2fa5bc;
        case 0x2fa5c0u: goto label_2fa5c0;
        case 0x2fa5c4u: goto label_2fa5c4;
        case 0x2fa5c8u: goto label_2fa5c8;
        case 0x2fa5ccu: goto label_2fa5cc;
        case 0x2fa5d0u: goto label_2fa5d0;
        case 0x2fa5d4u: goto label_2fa5d4;
        case 0x2fa5d8u: goto label_2fa5d8;
        case 0x2fa5dcu: goto label_2fa5dc;
        case 0x2fa5e0u: goto label_2fa5e0;
        case 0x2fa5e4u: goto label_2fa5e4;
        case 0x2fa5e8u: goto label_2fa5e8;
        case 0x2fa5ecu: goto label_2fa5ec;
        case 0x2fa5f0u: goto label_2fa5f0;
        case 0x2fa5f4u: goto label_2fa5f4;
        case 0x2fa5f8u: goto label_2fa5f8;
        case 0x2fa5fcu: goto label_2fa5fc;
        case 0x2fa600u: goto label_2fa600;
        case 0x2fa604u: goto label_2fa604;
        case 0x2fa608u: goto label_2fa608;
        case 0x2fa60cu: goto label_2fa60c;
        case 0x2fa610u: goto label_2fa610;
        case 0x2fa614u: goto label_2fa614;
        case 0x2fa618u: goto label_2fa618;
        case 0x2fa61cu: goto label_2fa61c;
        case 0x2fa620u: goto label_2fa620;
        case 0x2fa624u: goto label_2fa624;
        case 0x2fa628u: goto label_2fa628;
        case 0x2fa62cu: goto label_2fa62c;
        case 0x2fa630u: goto label_2fa630;
        case 0x2fa634u: goto label_2fa634;
        case 0x2fa638u: goto label_2fa638;
        case 0x2fa63cu: goto label_2fa63c;
        case 0x2fa640u: goto label_2fa640;
        case 0x2fa644u: goto label_2fa644;
        case 0x2fa648u: goto label_2fa648;
        case 0x2fa64cu: goto label_2fa64c;
        default: break;
    }

    ctx->pc = 0x2fa068u;

label_2fa068:
    // 0x2fa068: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x2fa068u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_2fa06c:
    // 0x2fa06c: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fa06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2fa070:
    // 0x2fa070: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x2fa070u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_2fa074:
    // 0x2fa074: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2fa074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2fa078:
    // 0x2fa078: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2fa078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2fa07c:
    // 0x2fa07c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2fa07cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2fa080:
    // 0x2fa080: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2fa080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2fa084:
    // 0x2fa084: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2fa084u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2fa088:
    // 0x2fa088: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2fa088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2fa08c:
    // 0x2fa08c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2fa08cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fa090:
    // 0x2fa090: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x2fa090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_2fa094:
    // 0x2fa094: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x2fa094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_2fa098:
    // 0x2fa098: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x2fa098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_2fa09c:
    // 0x2fa09c: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2fa09cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2fa0a0:
    // 0x2fa0a0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2fa0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2fa0a4:
    // 0x2fa0a4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2fa0a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2fa0a8:
    // 0x2fa0a8: 0xc0be7c6  jal         func_2F9F18
label_2fa0ac:
    if (ctx->pc == 0x2FA0ACu) {
        ctx->pc = 0x2FA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0A8u;
        // 0x2fa0ac: 0xac62068c  sw          $v0, 0x68C($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1676), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0B0u;
        goto label_2fa0b0;
    }
    ctx->pc = 0x2FA0A8u;
    SET_GPR_U32(ctx, 31, 0x2FA0B0u);
    ctx->pc = 0x2FA0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA0A8u;
    // 0x2fa0ac: 0xac62068c  sw          $v0, 0x68C($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 1676), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F18u, 0x2FA0A8u, 0x2FA0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0B0u;
label_2fa0b0:
    // 0x2fa0b0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2fa0b0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa0b4:
    // 0x2fa0b4: 0x6200084  bltz        $s1, . + 4 + (0x84 << 2)
label_2fa0b8:
    if (ctx->pc == 0x2FA0B8u) {
        ctx->pc = 0x2FA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0B4u;
        // 0x2fa0b8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0BCu;
        goto label_2fa0bc;
    }
    ctx->pc = 0x2FA0B4u;
    {
        const bool branch_taken_0x2fa0b4 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2FA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0B4u;
        // 0x2fa0b8: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0b4) {
            ctx->pc = 0x2FA2C8u;
            goto label_2fa2c8;
        }
    }
    ctx->pc = 0x2FA0BCu;
label_2fa0bc:
    // 0x2fa0bc: 0xc0a2e20  jal         func_28B880
label_2fa0c0:
    if (ctx->pc == 0x2FA0C0u) {
        ctx->pc = 0x2FA0C4u;
        goto label_2fa0c4;
    }
    ctx->pc = 0x2FA0BCu;
    SET_GPR_U32(ctx, 31, 0x2FA0C4u);
    ctx->pc = 0x28B880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28B880u, 0x2FA0BCu, 0x2FA0C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0C4u;
label_2fa0c4:
    // 0x2fa0c4: 0xc0a13de  jal         func_284F78
label_2fa0c8:
    if (ctx->pc == 0x2FA0C8u) {
        ctx->pc = 0x2FA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0C4u;
        // 0x2fa0c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0CCu;
        goto label_2fa0cc;
    }
    ctx->pc = 0x2FA0C4u;
    SET_GPR_U32(ctx, 31, 0x2FA0CCu);
    ctx->pc = 0x2FA0C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA0C4u;
    // 0x2fa0c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x284F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x284F78u, 0x2FA0C4u, 0x2FA0CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA0CCu;
label_2fa0cc:
    // 0x2fa0cc: 0x12400044  beqz        $s2, . + 4 + (0x44 << 2)
label_2fa0d0:
    if (ctx->pc == 0x2FA0D0u) {
        ctx->pc = 0x2FA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0CCu;
        // 0x2fa0d0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0D4u;
        goto label_2fa0d4;
    }
    ctx->pc = 0x2FA0CCu;
    {
        const bool branch_taken_0x2fa0cc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0CCu;
        // 0x2fa0d0: 0x40a82d  daddu       $s5, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0cc) {
            ctx->pc = 0x2FA1E0u;
            goto label_2fa1e0;
        }
    }
    ctx->pc = 0x2FA0D4u;
label_2fa0d4:
    // 0x2fa0d4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x2fa0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2fa0d8:
    // 0x2fa0d8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2fa0dc:
    if (ctx->pc == 0x2FA0DCu) {
        ctx->pc = 0x2FA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0D8u;
        // 0x2fa0dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA0E0u;
        goto label_2fa0e0;
    }
    ctx->pc = 0x2FA0D8u;
    {
        const bool branch_taken_0x2fa0d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA0D8u;
        // 0x2fa0dc: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa0d8) {
            ctx->pc = 0x2FA10Cu;
            goto label_2fa10c;
        }
    }
    ctx->pc = 0x2FA0E0u;
label_2fa0e0:
    // 0x2fa0e0: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2fa0e0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
label_2fa0e4:
    // 0x2fa0e4: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x2fa0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
label_2fa0e8:
    // 0x2fa0e8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fa0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fa0ec:
    // 0x2fa0ec: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x2fa0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2fa0f0:
    // 0x2fa0f0: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x2fa0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_2fa0f4:
    // 0x2fa0f4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2fa0f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2fa0f8:
    // 0x2fa0f8: 0x0  nop
    ctx->pc = 0x2fa0f8u;
    // NOP
label_2fa0fc:
    // 0x2fa0fc: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_2fa100:
    if (ctx->pc == 0x2FA100u) {
        ctx->pc = 0x2FA104u;
        goto label_2fa104;
    }
    ctx->pc = 0x2FA0FCu;
    {
        const bool branch_taken_0x2fa0fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa0fc) {
            ctx->pc = 0x2FA0E8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa0e8;
        }
    }
    ctx->pc = 0x2FA104u;
label_2fa104:
    // 0x2fa104: 0x10000005  b           . + 4 + (0x5 << 2)
label_2fa108:
    if (ctx->pc == 0x2FA108u) {
        ctx->pc = 0x2FA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA104u;
        // 0x2fa108: 0xae700684  sw          $s0, 0x684($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1668), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA10Cu;
        goto label_2fa10c;
    }
    ctx->pc = 0x2FA104u;
    {
        const bool branch_taken_0x2fa104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA104u;
        // 0x2fa108: 0xae700684  sw          $s0, 0x684($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 1668), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa104) {
            ctx->pc = 0x2FA11Cu;
            goto label_2fa11c;
        }
    }
    ctx->pc = 0x2FA10Cu;
label_2fa10c:
    // 0x2fa10c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2fa10cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa110:
    // 0x2fa110: 0x3c13003c  lui         $s3, 0x3C
    ctx->pc = 0x2fa110u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)60 << 16));
label_2fa114:
    // 0x2fa114: 0x3c0501cb  lui         $a1, 0x1CB
    ctx->pc = 0x2fa114u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)459 << 16));
label_2fa118:
    // 0x2fa118: 0xae700684  sw          $s0, 0x684($s3)
    ctx->pc = 0x2fa118u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 1668), GPR_U32(ctx, 16));
label_2fa11c:
    // 0x2fa11c: 0x8ca206d0  lw          $v0, 0x6D0($a1)
    ctx->pc = 0x2fa11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1744)));
label_2fa120:
    // 0x2fa120: 0x40f809  jalr        $v0
label_2fa124:
    if (ctx->pc == 0x2FA124u) {
        ctx->pc = 0x2FA128u;
        goto label_2fa128;
    }
    ctx->pc = 0x2FA120u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FA128u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA120u, 0x2FA128u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FA128u;
label_2fa128:
    // 0x2fa128: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fa128u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2fa12c:
    // 0x2fa12c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2fa130:
    if (ctx->pc == 0x2FA130u) {
        ctx->pc = 0x2FA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA12Cu;
        // 0x2fa130: 0xac620668  sw          $v0, 0x668($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA134u;
        goto label_2fa134;
    }
    ctx->pc = 0x2FA12Cu;
    {
        const bool branch_taken_0x2fa12c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA12Cu;
        // 0x2fa130: 0xac620668  sw          $v0, 0x668($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa12c) {
            ctx->pc = 0x2FA14Cu;
            goto label_2fa14c;
        }
    }
    ctx->pc = 0x2FA134u;
label_2fa134:
    // 0x2fa134: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa134u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2fa138:
    // 0x2fa138: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2fa138u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fa13c:
    // 0x2fa13c: 0xc043e52  jal         func_10F948
label_2fa140:
    if (ctx->pc == 0x2FA140u) {
        ctx->pc = 0x2FA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA13Cu;
        // 0x2fa140: 0x24842740  addiu       $a0, $a0, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA144u;
        goto label_2fa144;
    }
    ctx->pc = 0x2FA13Cu;
    SET_GPR_U32(ctx, 31, 0x2FA144u);
    ctx->pc = 0x2FA140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA13Cu;
    // 0x2fa140: 0x24842740  addiu       $a0, $a0, 0x2740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FA13Cu, 0x2FA144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA144u;
label_2fa144:
    // 0x2fa144: 0x10000058  b           . + 4 + (0x58 << 2)
label_2fa148:
    if (ctx->pc == 0x2FA148u) {
        ctx->pc = 0x2FA14Cu;
        goto label_2fa14c;
    }
    ctx->pc = 0x2FA144u;
    {
        const bool branch_taken_0x2fa144 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa144) {
            ctx->pc = 0x2FA2A8u;
            goto label_2fa2a8;
        }
    }
    ctx->pc = 0x2FA14Cu;
label_2fa14c:
    // 0x2fa14c: 0x8e660684  lw          $a2, 0x684($s3)
    ctx->pc = 0x2fa14cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1668)));
label_2fa150:
    // 0x2fa150: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fa150u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa154:
    // 0x2fa154: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa158:
    // 0x2fa158: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fa158u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa15c:
    // 0x2fa15c: 0xc049cb6  jal         func_1272D8
label_2fa160:
    if (ctx->pc == 0x2FA160u) {
        ctx->pc = 0x2FA160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA15Cu;
        // 0x2fa160: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA164u;
        goto label_2fa164;
    }
    ctx->pc = 0x2FA15Cu;
    SET_GPR_U32(ctx, 31, 0x2FA164u);
    ctx->pc = 0x2FA160u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA15Cu;
    // 0x2fa160: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2FA15Cu, 0x2FA164u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA164u;
label_2fa164:
    // 0x2fa164: 0x8e630684  lw          $v1, 0x684($s3)
    ctx->pc = 0x2fa164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1668)));
label_2fa168:
    // 0x2fa168: 0x1860001d  blez        $v1, . + 4 + (0x1D << 2)
label_2fa16c:
    if (ctx->pc == 0x2FA16Cu) {
        ctx->pc = 0x2FA170u;
        goto label_2fa170;
    }
    ctx->pc = 0x2FA168u;
    {
        const bool branch_taken_0x2fa168 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x2fa168) {
            ctx->pc = 0x2FA1E0u;
            goto label_2fa1e0;
        }
    }
    ctx->pc = 0x2FA170u;
label_2fa170:
    // 0x2fa170: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x2fa170u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2fa174:
    // 0x2fa174: 0x3c1e002c  lui         $fp, 0x2C
    ctx->pc = 0x2fa174u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)44 << 16));
label_2fa178:
    // 0x2fa178: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2fa178u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_2fa17c:
    // 0x2fa17c: 0x0  nop
    ctx->pc = 0x2fa17cu;
    // NOP
label_2fa180:
    // 0x2fa180: 0x8e270000  lw          $a3, 0x0($s1)
    ctx->pc = 0x2fa180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2fa184:
    // 0x2fa184: 0x109080  sll         $s2, $s0, 2
    ctx->pc = 0x2fa184u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2fa188:
    // 0x2fa188: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2fa188u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2fa18c:
    // 0x2fa18c: 0x2405006c  addiu       $a1, $zero, 0x6C
    ctx->pc = 0x2fa18cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 108));
label_2fa190:
    // 0x2fa190: 0xc0a1558  jal         func_285560
label_2fa194:
    if (ctx->pc == 0x2FA194u) {
        ctx->pc = 0x2FA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA190u;
        // 0x2fa194: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA198u;
        goto label_2fa198;
    }
    ctx->pc = 0x2FA190u;
    SET_GPR_U32(ctx, 31, 0x2FA198u);
    ctx->pc = 0x2FA194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA190u;
    // 0x2fa194: 0x24060003  addiu       $a2, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x2FA190u, 0x2FA198u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA198u;
label_2fa198:
    // 0x2fa198: 0x18400032  blez        $v0, . + 4 + (0x32 << 2)
label_2fa19c:
    if (ctx->pc == 0x2FA19Cu) {
        ctx->pc = 0x2FA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA198u;
        // 0x2fa19c: 0x27c45548  addiu       $a0, $fp, 0x5548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 21832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1A0u;
        goto label_2fa1a0;
    }
    ctx->pc = 0x2FA198u;
    {
        const bool branch_taken_0x2fa198 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2FA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA198u;
        // 0x2fa19c: 0x27c45548  addiu       $a0, $fp, 0x5548 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 30), 21832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa198) {
            ctx->pc = 0x2FA264u;
            goto label_2fa264;
        }
    }
    ctx->pc = 0x2FA1A0u;
label_2fa1a0:
    // 0x2fa1a0: 0x26e52770  addiu       $a1, $s7, 0x2770
    ctx->pc = 0x2fa1a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 10096));
label_2fa1a4:
    // 0x2fa1a4: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2fa1a4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2fa1a8:
    // 0x2fa1a8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fa1a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa1ac:
    // 0x2fa1ac: 0xc0a74b2  jal         func_29D2C8
label_2fa1b0:
    if (ctx->pc == 0x2FA1B0u) {
        ctx->pc = 0x2FA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1ACu;
        // 0x2fa1b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1B4u;
        goto label_2fa1b4;
    }
    ctx->pc = 0x2FA1ACu;
    SET_GPR_U32(ctx, 31, 0x2FA1B4u);
    ctx->pc = 0x2FA1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA1ACu;
    // 0x2fa1b0: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D2C8u, 0x2FA1ACu, 0x2FA1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA1B4u;
label_2fa1b4:
    // 0x2fa1b4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fa1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa1b8:
    // 0x2fa1b8: 0x10800030  beqz        $a0, . + 4 + (0x30 << 2)
label_2fa1bc:
    if (ctx->pc == 0x2FA1BCu) {
        ctx->pc = 0x2FA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1B8u;
        // 0x2fa1bc: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1C0u;
        goto label_2fa1c0;
    }
    ctx->pc = 0x2FA1B8u;
    {
        const bool branch_taken_0x2fa1b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1B8u;
        // 0x2fa1bc: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1b8) {
            ctx->pc = 0x2FA27Cu;
            goto label_2fa27c;
        }
    }
    ctx->pc = 0x2FA1C0u;
label_2fa1c0:
    // 0x2fa1c0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2fa1c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2fa1c4:
    // 0x2fa1c4: 0x8c620668  lw          $v0, 0x668($v1)
    ctx->pc = 0x2fa1c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1640)));
label_2fa1c8:
    // 0x2fa1c8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x2fa1c8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2fa1cc:
    // 0x2fa1cc: 0x8e630684  lw          $v1, 0x684($s3)
    ctx->pc = 0x2fa1ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1668)));
label_2fa1d0:
    // 0x2fa1d0: 0x2421021  addu        $v0, $s2, $v0
    ctx->pc = 0x2fa1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_2fa1d4:
    // 0x2fa1d4: 0x203182a  slt         $v1, $s0, $v1
    ctx->pc = 0x2fa1d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2fa1d8:
    // 0x2fa1d8: 0x1460ffe9  bnez        $v1, . + 4 + (-0x17 << 2)
label_2fa1dc:
    if (ctx->pc == 0x2FA1DCu) {
        ctx->pc = 0x2FA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1D8u;
        // 0x2fa1dc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1E0u;
        goto label_2fa1e0;
    }
    ctx->pc = 0x2FA1D8u;
    {
        const bool branch_taken_0x2fa1d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1D8u;
        // 0x2fa1dc: 0xac440000  sw          $a0, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1d8) {
            ctx->pc = 0x2FA180u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa180;
        }
    }
    ctx->pc = 0x2FA1E0u;
label_2fa1e0:
    // 0x2fa1e0: 0x1280000c  beqz        $s4, . + 4 + (0xC << 2)
label_2fa1e4:
    if (ctx->pc == 0x2FA1E4u) {
        ctx->pc = 0x2FA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1E0u;
        // 0x2fa1e4: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1E8u;
        goto label_2fa1e8;
    }
    ctx->pc = 0x2FA1E0u;
    {
        const bool branch_taken_0x2fa1e0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1E0u;
        // 0x2fa1e4: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1e0) {
            ctx->pc = 0x2FA214u;
            goto label_2fa214;
        }
    }
    ctx->pc = 0x2FA1E8u;
label_2fa1e8:
    // 0x2fa1e8: 0xc04a83e  jal         func_12A0F8
label_2fa1ec:
    if (ctx->pc == 0x2FA1ECu) {
        ctx->pc = 0x2FA1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1E8u;
        // 0x2fa1ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1F0u;
        goto label_2fa1f0;
    }
    ctx->pc = 0x2FA1E8u;
    SET_GPR_U32(ctx, 31, 0x2FA1F0u);
    ctx->pc = 0x2FA1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA1E8u;
    // 0x2fa1ec: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2FA1E8u, 0x2FA1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA1F0u;
label_2fa1f0:
    // 0x2fa1f0: 0x28420100  slti        $v0, $v0, 0x100
    ctx->pc = 0x2fa1f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_2fa1f4:
    // 0x2fa1f4: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_2fa1f8:
    if (ctx->pc == 0x2FA1F8u) {
        ctx->pc = 0x2FA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1F4u;
        // 0x2fa1f8: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA1FCu;
        goto label_2fa1fc;
    }
    ctx->pc = 0x2FA1F4u;
    {
        const bool branch_taken_0x2fa1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA1F4u;
        // 0x2fa1f8: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa1f4) {
            ctx->pc = 0x2FA234u;
            goto label_2fa234;
        }
    }
    ctx->pc = 0x2FA1FCu;
label_2fa1fc:
    // 0x2fa1fc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2fa1fcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa200:
    // 0x2fa200: 0x24840a20  addiu       $a0, $a0, 0xA20
    ctx->pc = 0x2fa200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2592));
label_2fa204:
    // 0x2fa204: 0xc04a966  jal         func_12A598
label_2fa208:
    if (ctx->pc == 0x2FA208u) {
        ctx->pc = 0x2FA208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA204u;
        // 0x2fa208: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA20Cu;
        goto label_2fa20c;
    }
    ctx->pc = 0x2FA204u;
    SET_GPR_U32(ctx, 31, 0x2FA20Cu);
    ctx->pc = 0x2FA208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA204u;
    // 0x2fa208: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2FA204u, 0x2FA20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA20Cu;
label_2fa20c:
    // 0x2fa20c: 0x10000002  b           . + 4 + (0x2 << 2)
label_2fa210:
    if (ctx->pc == 0x2FA210u) {
        ctx->pc = 0x2FA214u;
        goto label_2fa214;
    }
    ctx->pc = 0x2FA20Cu;
    {
        const bool branch_taken_0x2fa20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa20c) {
            ctx->pc = 0x2FA218u;
            goto label_2fa218;
        }
    }
    ctx->pc = 0x2FA214u;
label_2fa214:
    // 0x2fa214: 0xa0400a20  sb          $zero, 0xA20($v0)
    ctx->pc = 0x2fa214u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2592), (uint8_t)GPR_U32(ctx, 0));
label_2fa218:
    // 0x2fa218: 0x12c00021  beqz        $s6, . + 4 + (0x21 << 2)
label_2fa21c:
    if (ctx->pc == 0x2FA21Cu) {
        ctx->pc = 0x2FA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA218u;
        // 0x2fa21c: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA220u;
        goto label_2fa220;
    }
    ctx->pc = 0x2FA218u;
    {
        const bool branch_taken_0x2fa218 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA218u;
        // 0x2fa21c: 0x3c0201cb  lui         $v0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa218) {
            ctx->pc = 0x2FA2A0u;
            goto label_2fa2a0;
        }
    }
    ctx->pc = 0x2FA220u;
label_2fa220:
    // 0x2fa220: 0xc04a83e  jal         func_12A0F8
label_2fa224:
    if (ctx->pc == 0x2FA224u) {
        ctx->pc = 0x2FA224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA220u;
        // 0x2fa224: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA228u;
        goto label_2fa228;
    }
    ctx->pc = 0x2FA220u;
    SET_GPR_U32(ctx, 31, 0x2FA228u);
    ctx->pc = 0x2FA224u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA220u;
    // 0x2fa224: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2FA220u, 0x2FA228u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA228u;
label_2fa228:
    // 0x2fa228: 0x28420100  slti        $v0, $v0, 0x100
    ctx->pc = 0x2fa228u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_2fa22c:
    // 0x2fa22c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2fa230:
    if (ctx->pc == 0x2FA230u) {
        ctx->pc = 0x2FA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA22Cu;
        // 0x2fa230: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA234u;
        goto label_2fa234;
    }
    ctx->pc = 0x2FA22Cu;
    {
        const bool branch_taken_0x2fa22c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA22Cu;
        // 0x2fa230: 0x3c0401cb  lui         $a0, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa22c) {
            ctx->pc = 0x2FA24Cu;
            goto label_2fa24c;
        }
    }
    ctx->pc = 0x2FA234u;
label_2fa234:
    // 0x2fa234: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa234u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2fa238:
    // 0x2fa238: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2fa238u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fa23c:
    // 0x2fa23c: 0xc043e52  jal         func_10F948
label_2fa240:
    if (ctx->pc == 0x2FA240u) {
        ctx->pc = 0x2FA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA23Cu;
        // 0x2fa240: 0x248427a8  addiu       $a0, $a0, 0x27A8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10152));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA244u;
        goto label_2fa244;
    }
    ctx->pc = 0x2FA23Cu;
    SET_GPR_U32(ctx, 31, 0x2FA244u);
    ctx->pc = 0x2FA240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA23Cu;
    // 0x2fa240: 0x248427a8  addiu       $a0, $a0, 0x27A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FA23Cu, 0x2FA244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA244u;
label_2fa244:
    // 0x2fa244: 0x10000018  b           . + 4 + (0x18 << 2)
label_2fa248:
    if (ctx->pc == 0x2FA248u) {
        ctx->pc = 0x2FA24Cu;
        goto label_2fa24c;
    }
    ctx->pc = 0x2FA244u;
    {
        const bool branch_taken_0x2fa244 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa244) {
            ctx->pc = 0x2FA2A8u;
            goto label_2fa2a8;
        }
    }
    ctx->pc = 0x2FA24Cu;
label_2fa24c:
    // 0x2fa24c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2fa24cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2fa250:
    // 0x2fa250: 0x24840b20  addiu       $a0, $a0, 0xB20
    ctx->pc = 0x2fa250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2848));
label_2fa254:
    // 0x2fa254: 0xc04a966  jal         func_12A598
label_2fa258:
    if (ctx->pc == 0x2FA258u) {
        ctx->pc = 0x2FA258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA254u;
        // 0x2fa258: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA25Cu;
        goto label_2fa25c;
    }
    ctx->pc = 0x2FA254u;
    SET_GPR_U32(ctx, 31, 0x2FA25Cu);
    ctx->pc = 0x2FA258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA254u;
    // 0x2fa258: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2FA254u, 0x2FA25Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA25Cu;
label_2fa25c:
    // 0x2fa25c: 0x10000012  b           . + 4 + (0x12 << 2)
label_2fa260:
    if (ctx->pc == 0x2FA260u) {
        ctx->pc = 0x2FA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA25Cu;
        // 0x2fa260: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA264u;
        goto label_2fa264;
    }
    ctx->pc = 0x2FA25Cu;
    {
        const bool branch_taken_0x2fa25c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA25Cu;
        // 0x2fa260: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa25c) {
            ctx->pc = 0x2FA2A8u;
            goto label_2fa2a8;
        }
    }
    ctx->pc = 0x2FA264u;
label_2fa264:
    // 0x2fa264: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa264u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2fa268:
    // 0x2fa268: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2fa268u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fa26c:
    // 0x2fa26c: 0xc043e52  jal         func_10F948
label_2fa270:
    if (ctx->pc == 0x2FA270u) {
        ctx->pc = 0x2FA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA26Cu;
        // 0x2fa270: 0x24842750  addiu       $a0, $a0, 0x2750 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA274u;
        goto label_2fa274;
    }
    ctx->pc = 0x2FA26Cu;
    SET_GPR_U32(ctx, 31, 0x2FA274u);
    ctx->pc = 0x2FA270u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA26Cu;
    // 0x2fa270: 0x24842750  addiu       $a0, $a0, 0x2750 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FA26Cu, 0x2FA274u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA274u;
label_2fa274:
    // 0x2fa274: 0x1000000c  b           . + 4 + (0xC << 2)
label_2fa278:
    if (ctx->pc == 0x2FA278u) {
        ctx->pc = 0x2FA27Cu;
        goto label_2fa27c;
    }
    ctx->pc = 0x2FA274u;
    {
        const bool branch_taken_0x2fa274 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa274) {
            ctx->pc = 0x2FA2A8u;
            goto label_2fa2a8;
        }
    }
    ctx->pc = 0x2FA27Cu;
label_2fa27c:
    // 0x2fa27c: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2fa27cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2fa280:
    // 0x2fa280: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2fa280u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fa284:
    // 0x2fa284: 0xc0a56c0  jal         func_295B00
label_2fa288:
    if (ctx->pc == 0x2FA288u) {
        ctx->pc = 0x2FA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA284u;
        // 0x2fa288: 0x26102780  addiu       $s0, $s0, 0x2780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA28Cu;
        goto label_2fa28c;
    }
    ctx->pc = 0x2FA284u;
    SET_GPR_U32(ctx, 31, 0x2FA28Cu);
    ctx->pc = 0x2FA288u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA284u;
    // 0x2fa288: 0x26102780  addiu       $s0, $s0, 0x2780 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 10112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295B00u, 0x2FA284u, 0x2FA28Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA28Cu;
label_2fa28c:
    // 0x2fa28c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2fa28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fa290:
    // 0x2fa290: 0xc043e52  jal         func_10F948
label_2fa294:
    if (ctx->pc == 0x2FA294u) {
        ctx->pc = 0x2FA294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA290u;
        // 0x2fa294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA298u;
        goto label_2fa298;
    }
    ctx->pc = 0x2FA290u;
    SET_GPR_U32(ctx, 31, 0x2FA298u);
    ctx->pc = 0x2FA294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA290u;
    // 0x2fa294: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FA290u, 0x2FA298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA298u;
label_2fa298:
    // 0x2fa298: 0x10000003  b           . + 4 + (0x3 << 2)
label_2fa29c:
    if (ctx->pc == 0x2FA29Cu) {
        ctx->pc = 0x2FA2A0u;
        goto label_2fa2a0;
    }
    ctx->pc = 0x2FA298u;
    {
        const bool branch_taken_0x2fa298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa298) {
            ctx->pc = 0x2FA2A8u;
            goto label_2fa2a8;
        }
    }
    ctx->pc = 0x2FA2A0u;
label_2fa2a0:
    // 0x2fa2a0: 0xa0400b20  sb          $zero, 0xB20($v0)
    ctx->pc = 0x2fa2a0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2848), (uint8_t)GPR_U32(ctx, 0));
label_2fa2a4:
    // 0x2fa2a4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2fa2a4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa2a8:
    // 0x2fa2a8: 0xc0a1430  jal         func_2850C0
label_2fa2ac:
    if (ctx->pc == 0x2FA2ACu) {
        ctx->pc = 0x2FA2ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2A8u;
        // 0x2fa2ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA2B0u;
        goto label_2fa2b0;
    }
    ctx->pc = 0x2FA2A8u;
    SET_GPR_U32(ctx, 31, 0x2FA2B0u);
    ctx->pc = 0x2FA2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA2A8u;
    // 0x2fa2ac: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x2FA2A8u, 0x2FA2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA2B0u;
label_2fa2b0:
    // 0x2fa2b0: 0x6210004  bgez        $s1, . + 4 + (0x4 << 2)
label_2fa2b4:
    if (ctx->pc == 0x2FA2B4u) {
        ctx->pc = 0x2FA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2B0u;
        // 0x2fa2b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA2B8u;
        goto label_2fa2b8;
    }
    ctx->pc = 0x2FA2B0u;
    {
        const bool branch_taken_0x2fa2b0 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2FA2B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2B0u;
        // 0x2fa2b4: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa2b0) {
            ctx->pc = 0x2FA2C4u;
            goto label_2fa2c4;
        }
    }
    ctx->pc = 0x2FA2B8u;
label_2fa2b8:
    // 0x2fa2b8: 0xc0bead0  jal         func_2FAB40
label_2fa2bc:
    if (ctx->pc == 0x2FA2BCu) {
        ctx->pc = 0x2FA2C0u;
        goto label_2fa2c0;
    }
    ctx->pc = 0x2FA2B8u;
    SET_GPR_U32(ctx, 31, 0x2FA2C0u);
    ctx->pc = 0x2FAB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB40u, 0x2FA2B8u, 0x2FA2C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA2C0u;
label_2fa2c0:
    // 0x2fa2c0: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2fa2c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2fa2c4:
    // 0x2fa2c4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2fa2c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2fa2c8:
    // 0x2fa2c8: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x2fa2c8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2fa2cc:
    // 0x2fa2cc: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x2fa2ccu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2fa2d0:
    // 0x2fa2d0: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x2fa2d0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2fa2d4:
    // 0x2fa2d4: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x2fa2d4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2fa2d8:
    // 0x2fa2d8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2fa2d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fa2dc:
    // 0x2fa2dc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2fa2dcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fa2e0:
    // 0x2fa2e0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2fa2e0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fa2e4:
    // 0x2fa2e4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2fa2e4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fa2e8:
    // 0x2fa2e8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2fa2e8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa2ec:
    // 0x2fa2ec: 0x3e00008  jr          $ra
label_2fa2f0:
    if (ctx->pc == 0x2FA2F0u) {
        ctx->pc = 0x2FA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2ECu;
        // 0x2fa2f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA2F4u;
        goto label_2fa2f4;
    }
    ctx->pc = 0x2FA2ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA2ECu;
        // 0x2fa2f0: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA2ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA2F4u;
label_2fa2f4:
    // 0x2fa2f4: 0x0  nop
    ctx->pc = 0x2fa2f4u;
    // NOP
label_2fa2f8:
    // 0x2fa2f8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2fa2f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_2fa2fc:
    // 0x2fa2fc: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fa2fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2fa300:
    // 0x2fa300: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x2fa300u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_2fa304:
    // 0x2fa304: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2fa304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa308:
    // 0x2fa308: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x2fa308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_2fa30c:
    // 0x2fa30c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2fa30cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2fa310:
    // 0x2fa310: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2fa310u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2fa314:
    // 0x2fa314: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2fa314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2fa318:
    // 0x2fa318: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2fa318u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2fa31c:
    // 0x2fa31c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fa31cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2fa320:
    // 0x2fa320: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2fa320u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2fa324:
    // 0x2fa324: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x2fa324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_2fa328:
    // 0x2fa328: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2fa328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2fa32c:
    // 0x2fa32c: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2fa32cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2fa330:
    // 0x2fa330: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2fa330u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2fa334:
    // 0x2fa334: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x2fa334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_2fa338:
    // 0x2fa338: 0xac62068c  sw          $v0, 0x68C($v1)
    ctx->pc = 0x2fa338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1676), GPR_U32(ctx, 2));
label_2fa33c:
    // 0x2fa33c: 0xc0be7c6  jal         func_2F9F18
label_2fa340:
    if (ctx->pc == 0x2FA340u) {
        ctx->pc = 0x2FA340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA33Cu;
        // 0x2fa340: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA344u;
        goto label_2fa344;
    }
    ctx->pc = 0x2FA33Cu;
    SET_GPR_U32(ctx, 31, 0x2FA344u);
    ctx->pc = 0x2FA340u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA33Cu;
    // 0x2fa340: 0xafa80000  sw          $t0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9F18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9F18u, 0x2FA33Cu, 0x2FA344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA344u;
label_2fa344:
    // 0x2fa344: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2fa344u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa348:
    // 0x2fa348: 0x60000b5  bltz        $s0, . + 4 + (0xB5 << 2)
label_2fa34c:
    if (ctx->pc == 0x2FA34Cu) {
        ctx->pc = 0x2FA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA348u;
        // 0x2fa34c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA350u;
        goto label_2fa350;
    }
    ctx->pc = 0x2FA348u;
    {
        const bool branch_taken_0x2fa348 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x2FA34Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA348u;
        // 0x2fa34c: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa348) {
            ctx->pc = 0x2FA620u;
            goto label_2fa620;
        }
    }
    ctx->pc = 0x2FA350u;
label_2fa350:
    // 0x2fa350: 0xc0a3090  jal         func_28C240
label_2fa354:
    if (ctx->pc == 0x2FA354u) {
        ctx->pc = 0x2FA358u;
        goto label_2fa358;
    }
    ctx->pc = 0x2FA350u;
    SET_GPR_U32(ctx, 31, 0x2FA358u);
    ctx->pc = 0x28C240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x28C240u, 0x2FA350u, 0x2FA358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA358u;
label_2fa358:
    // 0x2fa358: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2fa358u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa35c:
    // 0x2fa35c: 0x16800006  bnez        $s4, . + 4 + (0x6 << 2)
label_2fa360:
    if (ctx->pc == 0x2FA360u) {
        ctx->pc = 0x2FA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA35Cu;
        // 0x2fa360: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA364u;
        goto label_2fa364;
    }
    ctx->pc = 0x2FA35Cu;
    {
        const bool branch_taken_0x2fa35c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA35Cu;
        // 0x2fa360: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa35c) {
            ctx->pc = 0x2FA378u;
            goto label_2fa378;
        }
    }
    ctx->pc = 0x2FA364u;
label_2fa364:
    // 0x2fa364: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa364u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2fa368:
    // 0x2fa368: 0xc043e52  jal         func_10F948
label_2fa36c:
    if (ctx->pc == 0x2FA36Cu) {
        ctx->pc = 0x2FA36Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA368u;
        // 0x2fa36c: 0x248427c0  addiu       $a0, $a0, 0x27C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA370u;
        goto label_2fa370;
    }
    ctx->pc = 0x2FA368u;
    SET_GPR_U32(ctx, 31, 0x2FA370u);
    ctx->pc = 0x2FA36Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA368u;
    // 0x2fa36c: 0x248427c0  addiu       $a0, $a0, 0x27C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FA368u, 0x2FA370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA370u;
label_2fa370:
    // 0x2fa370: 0x100000aa  b           . + 4 + (0xAA << 2)
label_2fa374:
    if (ctx->pc == 0x2FA374u) {
        ctx->pc = 0x2FA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA370u;
        // 0x2fa374: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA378u;
        goto label_2fa378;
    }
    ctx->pc = 0x2FA370u;
    {
        const bool branch_taken_0x2fa370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA370u;
        // 0x2fa374: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa370) {
            ctx->pc = 0x2FA61Cu;
            goto label_2fa61c;
        }
    }
    ctx->pc = 0x2FA378u;
label_2fa378:
    // 0x2fa378: 0x3c1e003c  lui         $fp, 0x3C
    ctx->pc = 0x2fa378u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)60 << 16));
label_2fa37c:
    // 0x2fa37c: 0xac400668  sw          $zero, 0x668($v0)
    ctx->pc = 0x2fa37cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1640), GPR_U32(ctx, 0));
label_2fa380:
    // 0x2fa380: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fa380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2fa384:
    // 0x2fa384: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2fa384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2fa388:
    // 0x2fa388: 0xafc00684  sw          $zero, 0x684($fp)
    ctx->pc = 0x2fa388u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1668), GPR_U32(ctx, 0));
label_2fa38c:
    // 0x2fa38c: 0xac600690  sw          $zero, 0x690($v1)
    ctx->pc = 0x2fa38cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1680), GPR_U32(ctx, 0));
label_2fa390:
    // 0x2fa390: 0x12a0003f  beqz        $s5, . + 4 + (0x3F << 2)
label_2fa394:
    if (ctx->pc == 0x2FA394u) {
        ctx->pc = 0x2FA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA390u;
        // 0x2fa394: 0xac400694  sw          $zero, 0x694($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA398u;
        goto label_2fa398;
    }
    ctx->pc = 0x2FA390u;
    {
        const bool branch_taken_0x2fa390 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA390u;
        // 0x2fa394: 0xac400694  sw          $zero, 0x694($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1684), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa390) {
            ctx->pc = 0x2FA490u;
            goto label_2fa490;
        }
    }
    ctx->pc = 0x2FA398u;
label_2fa398:
    // 0x2fa398: 0x1a20003d  blez        $s1, . + 4 + (0x3D << 2)
label_2fa39c:
    if (ctx->pc == 0x2FA39Cu) {
        ctx->pc = 0x2FA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA398u;
        // 0x2fa39c: 0x3c0301cb  lui         $v1, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA3A0u;
        goto label_2fa3a0;
    }
    ctx->pc = 0x2FA398u;
    {
        const bool branch_taken_0x2fa398 = (GPR_S32(ctx, 17) <= 0);
        ctx->pc = 0x2FA39Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA398u;
        // 0x2fa39c: 0x3c0301cb  lui         $v1, 0x1CB (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)459 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa398) {
            ctx->pc = 0x2FA490u;
            goto label_2fa490;
        }
    }
    ctx->pc = 0x2FA3A0u;
label_2fa3a0:
    // 0x2fa3a0: 0xafd10684  sw          $s1, 0x684($fp)
    ctx->pc = 0x2fa3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 1668), GPR_U32(ctx, 17));
label_2fa3a4:
    // 0x2fa3a4: 0x8c6206d0  lw          $v0, 0x6D0($v1)
    ctx->pc = 0x2fa3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1744)));
label_2fa3a8:
    // 0x2fa3a8: 0x40f809  jalr        $v0
label_2fa3ac:
    if (ctx->pc == 0x2FA3ACu) {
        ctx->pc = 0x2FA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3A8u;
        // 0x2fa3ac: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA3B0u;
        goto label_2fa3b0;
    }
    ctx->pc = 0x2FA3A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2FA3B0u);
        ctx->pc = 0x2FA3ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3A8u;
        // 0x2fa3ac: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA3A8u, 0x2FA3B0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2FA3B0u;
label_2fa3b0:
    // 0x2fa3b0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fa3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2fa3b4:
    // 0x2fa3b4: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2fa3b8:
    if (ctx->pc == 0x2FA3B8u) {
        ctx->pc = 0x2FA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3B4u;
        // 0x2fa3b8: 0xac620668  sw          $v0, 0x668($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA3BCu;
        goto label_2fa3bc;
    }
    ctx->pc = 0x2FA3B4u;
    {
        const bool branch_taken_0x2fa3b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA3B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3B4u;
        // 0x2fa3b8: 0xac620668  sw          $v0, 0x668($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa3b4) {
            ctx->pc = 0x2FA3D4u;
            goto label_2fa3d4;
        }
    }
    ctx->pc = 0x2FA3BCu;
label_2fa3bc:
    // 0x2fa3bc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa3bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2fa3c0:
    // 0x2fa3c0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2fa3c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fa3c4:
    // 0x2fa3c4: 0xc043e52  jal         func_10F948
label_2fa3c8:
    if (ctx->pc == 0x2FA3C8u) {
        ctx->pc = 0x2FA3C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3C4u;
        // 0x2fa3c8: 0x24842740  addiu       $a0, $a0, 0x2740 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA3CCu;
        goto label_2fa3cc;
    }
    ctx->pc = 0x2FA3C4u;
    SET_GPR_U32(ctx, 31, 0x2FA3CCu);
    ctx->pc = 0x2FA3C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA3C4u;
    // 0x2fa3c8: 0x24842740  addiu       $a0, $a0, 0x2740 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FA3C4u, 0x2FA3CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA3CCu;
label_2fa3cc:
    // 0x2fa3cc: 0x1000008c  b           . + 4 + (0x8C << 2)
label_2fa3d0:
    if (ctx->pc == 0x2FA3D0u) {
        ctx->pc = 0x2FA3D4u;
        goto label_2fa3d4;
    }
    ctx->pc = 0x2FA3CCu;
    {
        const bool branch_taken_0x2fa3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa3cc) {
            ctx->pc = 0x2FA600u;
            goto label_2fa600;
        }
    }
    ctx->pc = 0x2FA3D4u;
label_2fa3d4:
    // 0x2fa3d4: 0x8fc60684  lw          $a2, 0x684($fp)
    ctx->pc = 0x2fa3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1668)));
label_2fa3d8:
    // 0x2fa3d8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2fa3d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa3dc:
    // 0x2fa3dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2fa3dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa3e0:
    // 0x2fa3e0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2fa3e0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa3e4:
    // 0x2fa3e4: 0xc049cb6  jal         func_1272D8
label_2fa3e8:
    if (ctx->pc == 0x2FA3E8u) {
        ctx->pc = 0x2FA3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3E4u;
        // 0x2fa3e8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA3ECu;
        goto label_2fa3ec;
    }
    ctx->pc = 0x2FA3E4u;
    SET_GPR_U32(ctx, 31, 0x2FA3ECu);
    ctx->pc = 0x2FA3E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA3E4u;
    // 0x2fa3e8: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2FA3E4u, 0x2FA3ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA3ECu;
label_2fa3ec:
    // 0x2fa3ec: 0x8fc30684  lw          $v1, 0x684($fp)
    ctx->pc = 0x2fa3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1668)));
label_2fa3f0:
    // 0x2fa3f0: 0x18600028  blez        $v1, . + 4 + (0x28 << 2)
label_2fa3f4:
    if (ctx->pc == 0x2FA3F4u) {
        ctx->pc = 0x2FA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3F0u;
        // 0x2fa3f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA3F8u;
        goto label_2fa3f8;
    }
    ctx->pc = 0x2FA3F0u;
    {
        const bool branch_taken_0x2fa3f0 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x2FA3F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA3F0u;
        // 0x2fa3f4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa3f0) {
            ctx->pc = 0x2FA494u;
            goto label_2fa494;
        }
    }
    ctx->pc = 0x2FA3F8u;
label_2fa3f8:
    // 0x2fa3f8: 0x1390c0  sll         $s2, $s3, 3
    ctx->pc = 0x2fa3f8u;
    SET_GPR_S32(ctx, 18, (int32_t)SLL32(GPR_U32(ctx, 19), 3));
label_2fa3fc:
    // 0x2fa3fc: 0x2551021  addu        $v0, $s2, $s5
    ctx->pc = 0x2fa3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2fa400:
    // 0x2fa400: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fa400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2fa404:
    // 0x2fa404: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_2fa408:
    if (ctx->pc == 0x2FA408u) {
        ctx->pc = 0x2FA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA404u;
        // 0x2fa408: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA40Cu;
        goto label_2fa40c;
    }
    ctx->pc = 0x2FA404u;
    {
        const bool branch_taken_0x2fa404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA404u;
        // 0x2fa408: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa404) {
            ctx->pc = 0x2FA444u;
            goto label_2fa444;
        }
    }
    ctx->pc = 0x2FA40Cu;
label_2fa40c:
    // 0x2fa40c: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2fa40cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_2fa410:
    // 0x2fa410: 0x2558021  addu        $s0, $s2, $s5
    ctx->pc = 0x2fa410u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
label_2fa414:
    // 0x2fa414: 0x0  nop
    ctx->pc = 0x2fa414u;
    // NOP
label_2fa418:
    // 0x2fa418: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa418u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa41c:
    // 0x2fa41c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2fa41cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2fa420:
    // 0x2fa420: 0x26e527d8  addiu       $a1, $s7, 0x27D8
    ctx->pc = 0x2fa420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 10200));
label_2fa424:
    // 0x2fa424: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa424u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa428:
    // 0x2fa428: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x2fa428u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2fa42c:
    // 0x2fa42c: 0xc0a0ccc  jal         func_283330
label_2fa430:
    if (ctx->pc == 0x2FA430u) {
        ctx->pc = 0x2FA430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA42Cu;
        // 0x2fa430: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA434u;
        goto label_2fa434;
    }
    ctx->pc = 0x2FA42Cu;
    SET_GPR_U32(ctx, 31, 0x2FA434u);
    ctx->pc = 0x2FA430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA42Cu;
    // 0x2fa430: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283330u, 0x2FA42Cu, 0x2FA434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA434u;
label_2fa434:
    // 0x2fa434: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x2fa434u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2fa438:
    // 0x2fa438: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2fa438u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2fa43c:
    // 0x2fa43c: 0x1460fff6  bnez        $v1, . + 4 + (-0xA << 2)
label_2fa440:
    if (ctx->pc == 0x2FA440u) {
        ctx->pc = 0x2FA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA43Cu;
        // 0x2fa440: 0x2558021  addu        $s0, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA444u;
        goto label_2fa444;
    }
    ctx->pc = 0x2FA43Cu;
    {
        const bool branch_taken_0x2fa43c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA43Cu;
        // 0x2fa440: 0x2558021  addu        $s0, $s2, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa43c) {
            ctx->pc = 0x2FA418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa418;
        }
    }
    ctx->pc = 0x2FA444u;
label_2fa444:
    // 0x2fa444: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2fa444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2fa448:
    // 0x2fa448: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fa448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2fa44c:
    // 0x2fa44c: 0x24445548  addiu       $a0, $v0, 0x5548
    ctx->pc = 0x2fa44cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21832));
label_2fa450:
    // 0x2fa450: 0x24652770  addiu       $a1, $v1, 0x2770
    ctx->pc = 0x2fa450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10096));
label_2fa454:
    // 0x2fa454: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2fa454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa458:
    // 0x2fa458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fa458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa45c:
    // 0x2fa45c: 0xc0a74b2  jal         func_29D2C8
label_2fa460:
    if (ctx->pc == 0x2FA460u) {
        ctx->pc = 0x2FA460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA45Cu;
        // 0x2fa460: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA464u;
        goto label_2fa464;
    }
    ctx->pc = 0x2FA45Cu;
    SET_GPR_U32(ctx, 31, 0x2FA464u);
    ctx->pc = 0x2FA460u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA45Cu;
    // 0x2fa460: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D2C8u, 0x2FA45Cu, 0x2FA464u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA464u;
label_2fa464:
    // 0x2fa464: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2fa464u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2fa468:
    // 0x2fa468: 0x10a0005e  beqz        $a1, . + 4 + (0x5E << 2)
label_2fa46c:
    if (ctx->pc == 0x2FA46Cu) {
        ctx->pc = 0x2FA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA468u;
        // 0x2fa46c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA470u;
        goto label_2fa470;
    }
    ctx->pc = 0x2FA468u;
    {
        const bool branch_taken_0x2fa468 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA46Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA468u;
        // 0x2fa46c: 0x3c03003c  lui         $v1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa468) {
            ctx->pc = 0x2FA5E4u;
            goto label_2fa5e4;
        }
    }
    ctx->pc = 0x2FA470u;
label_2fa470:
    // 0x2fa470: 0x8fc40684  lw          $a0, 0x684($fp)
    ctx->pc = 0x2fa470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1668)));
label_2fa474:
    // 0x2fa474: 0x8c620668  lw          $v0, 0x668($v1)
    ctx->pc = 0x2fa474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1640)));
label_2fa478:
    // 0x2fa478: 0x131880  sll         $v1, $s3, 2
    ctx->pc = 0x2fa478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_2fa47c:
    // 0x2fa47c: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2fa47cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2fa480:
    // 0x2fa480: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2fa480u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2fa484:
    // 0x2fa484: 0x264202a  slt         $a0, $s3, $a0
    ctx->pc = 0x2fa484u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_2fa488:
    // 0x2fa488: 0x1480ffdb  bnez        $a0, . + 4 + (-0x25 << 2)
label_2fa48c:
    if (ctx->pc == 0x2FA48Cu) {
        ctx->pc = 0x2FA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA488u;
        // 0x2fa48c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA490u;
        goto label_2fa490;
    }
    ctx->pc = 0x2FA488u;
    {
        const bool branch_taken_0x2fa488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA48Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA488u;
        // 0x2fa48c: 0xac650000  sw          $a1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa488) {
            ctx->pc = 0x2FA3F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa3f8;
        }
    }
    ctx->pc = 0x2FA490u;
label_2fa490:
    // 0x2fa490: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa490u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa494:
    // 0x2fa494: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fa494u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa498:
    // 0x2fa498: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fa498u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa49c:
    // 0x2fa49c: 0xc0a1558  jal         func_285560
label_2fa4a0:
    if (ctx->pc == 0x2FA4A0u) {
        ctx->pc = 0x2FA4A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA49Cu;
        // 0x2fa4a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA4A4u;
        goto label_2fa4a4;
    }
    ctx->pc = 0x2FA49Cu;
    SET_GPR_U32(ctx, 31, 0x2FA4A4u);
    ctx->pc = 0x2FA4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA49Cu;
    // 0x2fa4a0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x2FA49Cu, 0x2FA4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA4A4u;
label_2fa4a4:
    // 0x2fa4a4: 0x12c00022  beqz        $s6, . + 4 + (0x22 << 2)
label_2fa4a8:
    if (ctx->pc == 0x2FA4A8u) {
        ctx->pc = 0x2FA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4A4u;
        // 0x2fa4a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA4ACu;
        goto label_2fa4ac;
    }
    ctx->pc = 0x2FA4A4u;
    {
        const bool branch_taken_0x2fa4a4 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4A4u;
        // 0x2fa4a8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa4a4) {
            ctx->pc = 0x2FA530u;
            goto label_2fa530;
        }
    }
    ctx->pc = 0x2FA4ACu;
label_2fa4ac:
    // 0x2fa4ac: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x2fa4acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2fa4b0:
    // 0x2fa4b0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2fa4b4:
    if (ctx->pc == 0x2FA4B4u) {
        ctx->pc = 0x2FA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4B0u;
        // 0x2fa4b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA4B8u;
        goto label_2fa4b8;
    }
    ctx->pc = 0x2FA4B0u;
    {
        const bool branch_taken_0x2fa4b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA4B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4B0u;
        // 0x2fa4b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa4b0) {
            ctx->pc = 0x2FA4E8u;
            goto label_2fa4e8;
        }
    }
    ctx->pc = 0x2FA4B8u;
label_2fa4b8:
    // 0x2fa4b8: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2fa4b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_2fa4bc:
    // 0x2fa4bc: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2fa4bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2fa4c0:
    // 0x2fa4c0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa4c0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa4c4:
    // 0x2fa4c4: 0x26e527d8  addiu       $a1, $s7, 0x27D8
    ctx->pc = 0x2fa4c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 10200));
label_2fa4c8:
    // 0x2fa4c8: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa4cc:
    // 0x2fa4cc: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x2fa4ccu;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2fa4d0:
    // 0x2fa4d0: 0xc0a0ccc  jal         func_283330
label_2fa4d4:
    if (ctx->pc == 0x2FA4D4u) {
        ctx->pc = 0x2FA4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4D0u;
        // 0x2fa4d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA4D8u;
        goto label_2fa4d8;
    }
    ctx->pc = 0x2FA4D0u;
    SET_GPR_U32(ctx, 31, 0x2FA4D8u);
    ctx->pc = 0x2FA4D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA4D0u;
    // 0x2fa4d4: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283330u, 0x2FA4D0u, 0x2FA4D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA4D8u;
label_2fa4d8:
    // 0x2fa4d8: 0x8ec30004  lw          $v1, 0x4($s6)
    ctx->pc = 0x2fa4d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2fa4dc:
    // 0x2fa4dc: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2fa4dcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2fa4e0:
    // 0x2fa4e0: 0x5460fff7  bnel        $v1, $zero, . + 4 + (-0x9 << 2)
label_2fa4e4:
    if (ctx->pc == 0x2FA4E4u) {
        ctx->pc = 0x2FA4E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA4E0u;
        // 0x2fa4e4: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA4E8u;
        goto label_2fa4e8;
    }
    ctx->pc = 0x2FA4E0u;
    {
        const bool branch_taken_0x2fa4e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2fa4e0) {
            ctx->pc = 0x2FA4E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2FA4E0u;
            // 0x2fa4e4: 0x8ec20000  lw          $v0, 0x0($s6) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2FA4C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa4c0;
        }
    }
    ctx->pc = 0x2FA4E8u;
label_2fa4e8:
    // 0x2fa4e8: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2fa4e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2fa4ec:
    // 0x2fa4ec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2fa4ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2fa4f0:
    // 0x2fa4f0: 0x24445548  addiu       $a0, $v0, 0x5548
    ctx->pc = 0x2fa4f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 21832));
label_2fa4f4:
    // 0x2fa4f4: 0x24652770  addiu       $a1, $v1, 0x2770
    ctx->pc = 0x2fa4f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 10096));
label_2fa4f8:
    // 0x2fa4f8: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2fa4f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa4fc:
    // 0x2fa4fc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fa4fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa500:
    // 0x2fa500: 0xc0a74b2  jal         func_29D2C8
label_2fa504:
    if (ctx->pc == 0x2FA504u) {
        ctx->pc = 0x2FA504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA500u;
        // 0x2fa504: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA508u;
        goto label_2fa508;
    }
    ctx->pc = 0x2FA500u;
    SET_GPR_U32(ctx, 31, 0x2FA508u);
    ctx->pc = 0x2FA504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA500u;
    // 0x2fa504: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D2C8u, 0x2FA500u, 0x2FA508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA508u;
label_2fa508:
    // 0x2fa508: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fa508u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2fa50c:
    // 0x2fa50c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2fa510:
    if (ctx->pc == 0x2FA510u) {
        ctx->pc = 0x2FA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA50Cu;
        // 0x2fa510: 0xac620690  sw          $v0, 0x690($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA514u;
        goto label_2fa514;
    }
    ctx->pc = 0x2FA50Cu;
    {
        const bool branch_taken_0x2fa50c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA50Cu;
        // 0x2fa510: 0xac620690  sw          $v0, 0x690($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1680), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa50c) {
            ctx->pc = 0x2FA52Cu;
            goto label_2fa52c;
        }
    }
    ctx->pc = 0x2FA514u;
label_2fa514:
    // 0x2fa514: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa514u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2fa518:
    // 0x2fa518: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2fa518u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fa51c:
    // 0x2fa51c: 0xc043e52  jal         func_10F948
label_2fa520:
    if (ctx->pc == 0x2FA520u) {
        ctx->pc = 0x2FA520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA51Cu;
        // 0x2fa520: 0x248427e0  addiu       $a0, $a0, 0x27E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA524u;
        goto label_2fa524;
    }
    ctx->pc = 0x2FA51Cu;
    SET_GPR_U32(ctx, 31, 0x2FA524u);
    ctx->pc = 0x2FA520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA51Cu;
    // 0x2fa520: 0x248427e0  addiu       $a0, $a0, 0x27E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FA51Cu, 0x2FA524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA524u;
label_2fa524:
    // 0x2fa524: 0x10000036  b           . + 4 + (0x36 << 2)
label_2fa528:
    if (ctx->pc == 0x2FA528u) {
        ctx->pc = 0x2FA52Cu;
        goto label_2fa52c;
    }
    ctx->pc = 0x2FA524u;
    {
        const bool branch_taken_0x2fa524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa524) {
            ctx->pc = 0x2FA600u;
            goto label_2fa600;
        }
    }
    ctx->pc = 0x2FA52Cu;
label_2fa52c:
    // 0x2fa52c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa52cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa530:
    // 0x2fa530: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2fa530u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2fa534:
    // 0x2fa534: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2fa534u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa538:
    // 0x2fa538: 0xc0a1558  jal         func_285560
label_2fa53c:
    if (ctx->pc == 0x2FA53Cu) {
        ctx->pc = 0x2FA53Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA538u;
        // 0x2fa53c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA540u;
        goto label_2fa540;
    }
    ctx->pc = 0x2FA538u;
    SET_GPR_U32(ctx, 31, 0x2FA540u);
    ctx->pc = 0x2FA53Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA538u;
    // 0x2fa53c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x285560u, 0x2FA538u, 0x2FA540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA540u;
label_2fa540:
    // 0x2fa540: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fa540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa544:
    // 0x2fa544: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
label_2fa548:
    if (ctx->pc == 0x2FA548u) {
        ctx->pc = 0x2FA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA544u;
        // 0x2fa548: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA54Cu;
        goto label_2fa54c;
    }
    ctx->pc = 0x2FA544u;
    {
        const bool branch_taken_0x2fa544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA544u;
        // 0x2fa548: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa544) {
            ctx->pc = 0x2FA600u;
            goto label_2fa600;
        }
    }
    ctx->pc = 0x2FA54Cu;
label_2fa54c:
    // 0x2fa54c: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x2fa54cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2fa550:
    // 0x2fa550: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_2fa554:
    if (ctx->pc == 0x2FA554u) {
        ctx->pc = 0x2FA554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA550u;
        // 0x2fa554: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA558u;
        goto label_2fa558;
    }
    ctx->pc = 0x2FA550u;
    {
        const bool branch_taken_0x2fa550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA550u;
        // 0x2fa554: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa550) {
            ctx->pc = 0x2FA5A0u;
            goto label_2fa5a0;
        }
    }
    ctx->pc = 0x2FA558u;
label_2fa558:
    // 0x2fa558: 0x3c170040  lui         $s7, 0x40
    ctx->pc = 0x2fa558u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)64 << 16));
label_2fa55c:
    // 0x2fa55c: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x2fa55cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
label_2fa560:
    // 0x2fa560: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2fa560u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2fa564:
    // 0x2fa564: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2fa564u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa568:
    // 0x2fa568: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2fa568u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa56c:
    // 0x2fa56c: 0x26e527d8  addiu       $a1, $s7, 0x27D8
    ctx->pc = 0x2fa56cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 10200));
label_2fa570:
    // 0x2fa570: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2fa570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2fa574:
    // 0x2fa574: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x2fa574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2fa578:
    // 0x2fa578: 0x80460000  lb          $a2, 0x0($v0)
    ctx->pc = 0x2fa578u;
    SET_GPR_S32(ctx, 6, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2fa57c:
    // 0x2fa57c: 0xc0a0ccc  jal         func_283330
label_2fa580:
    if (ctx->pc == 0x2FA580u) {
        ctx->pc = 0x2FA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA57Cu;
        // 0x2fa580: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA584u;
        goto label_2fa584;
    }
    ctx->pc = 0x2FA57Cu;
    SET_GPR_U32(ctx, 31, 0x2FA584u);
    ctx->pc = 0x2FA580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA57Cu;
    // 0x2fa580: 0x26310001  addiu       $s1, $s1, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x283330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x283330u, 0x2FA57Cu, 0x2FA584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA584u;
label_2fa584:
    // 0x2fa584: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2fa584u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2fa588:
    // 0x2fa588: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x2fa588u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2fa58c:
    // 0x2fa58c: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x2fa58cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_2fa590:
    // 0x2fa590: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
label_2fa594:
    if (ctx->pc == 0x2FA594u) {
        ctx->pc = 0x2FA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA590u;
        // 0x2fa594: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA598u;
        goto label_2fa598;
    }
    ctx->pc = 0x2FA590u;
    {
        const bool branch_taken_0x2fa590 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA590u;
        // 0x2fa594: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa590) {
            ctx->pc = 0x2FA568u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2fa568;
        }
    }
    ctx->pc = 0x2FA598u;
label_2fa598:
    // 0x2fa598: 0x10000004  b           . + 4 + (0x4 << 2)
label_2fa59c:
    if (ctx->pc == 0x2FA59Cu) {
        ctx->pc = 0x2FA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA598u;
        // 0x2fa59c: 0x26440cd0  addiu       $a0, $s2, 0xCD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA5A0u;
        goto label_2fa5a0;
    }
    ctx->pc = 0x2FA598u;
    {
        const bool branch_taken_0x2fa598 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FA59Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA598u;
        // 0x2fa59c: 0x26440cd0  addiu       $a0, $s2, 0xCD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa598) {
            ctx->pc = 0x2FA5ACu;
            goto label_2fa5ac;
        }
    }
    ctx->pc = 0x2FA5A0u;
label_2fa5a0:
    // 0x2fa5a0: 0x3c120029  lui         $s2, 0x29
    ctx->pc = 0x2fa5a0u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)41 << 16));
label_2fa5a4:
    // 0x2fa5a4: 0x3c100040  lui         $s0, 0x40
    ctx->pc = 0x2fa5a4u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)64 << 16));
label_2fa5a8:
    // 0x2fa5a8: 0x26440cd0  addiu       $a0, $s2, 0xCD0
    ctx->pc = 0x2fa5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 3280));
label_2fa5ac:
    // 0x2fa5ac: 0x26052800  addiu       $a1, $s0, 0x2800
    ctx->pc = 0x2fa5acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 10240));
label_2fa5b0:
    // 0x2fa5b0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x2fa5b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2fa5b4:
    // 0x2fa5b4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2fa5b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa5b8:
    // 0x2fa5b8: 0xc0a74b2  jal         func_29D2C8
label_2fa5bc:
    if (ctx->pc == 0x2FA5BCu) {
        ctx->pc = 0x2FA5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5B8u;
        // 0x2fa5bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA5C0u;
        goto label_2fa5c0;
    }
    ctx->pc = 0x2FA5B8u;
    SET_GPR_U32(ctx, 31, 0x2FA5C0u);
    ctx->pc = 0x2FA5BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA5B8u;
    // 0x2fa5bc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29D2C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29D2C8u, 0x2FA5B8u, 0x2FA5C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA5C0u;
label_2fa5c0:
    // 0x2fa5c0: 0x3c03003c  lui         $v1, 0x3C
    ctx->pc = 0x2fa5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)60 << 16));
label_2fa5c4:
    // 0x2fa5c4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_2fa5c8:
    if (ctx->pc == 0x2FA5C8u) {
        ctx->pc = 0x2FA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5C4u;
        // 0x2fa5c8: 0xac620694  sw          $v0, 0x694($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA5CCu;
        goto label_2fa5cc;
    }
    ctx->pc = 0x2FA5C4u;
    {
        const bool branch_taken_0x2fa5c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5C4u;
        // 0x2fa5c8: 0xac620694  sw          $v0, 0x694($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 1684), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa5c4) {
            ctx->pc = 0x2FA5FCu;
            goto label_2fa5fc;
        }
    }
    ctx->pc = 0x2FA5CCu;
label_2fa5cc:
    // 0x2fa5cc: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa5ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2fa5d0:
    // 0x2fa5d0: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2fa5d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fa5d4:
    // 0x2fa5d4: 0xc043e52  jal         func_10F948
label_2fa5d8:
    if (ctx->pc == 0x2FA5D8u) {
        ctx->pc = 0x2FA5D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5D4u;
        // 0x2fa5d8: 0x24842810  addiu       $a0, $a0, 0x2810 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA5DCu;
        goto label_2fa5dc;
    }
    ctx->pc = 0x2FA5D4u;
    SET_GPR_U32(ctx, 31, 0x2FA5DCu);
    ctx->pc = 0x2FA5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA5D4u;
    // 0x2fa5d8: 0x24842810  addiu       $a0, $a0, 0x2810 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FA5D4u, 0x2FA5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA5DCu;
label_2fa5dc:
    // 0x2fa5dc: 0x10000008  b           . + 4 + (0x8 << 2)
label_2fa5e0:
    if (ctx->pc == 0x2FA5E0u) {
        ctx->pc = 0x2FA5E4u;
        goto label_2fa5e4;
    }
    ctx->pc = 0x2FA5DCu;
    {
        const bool branch_taken_0x2fa5dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa5dc) {
            ctx->pc = 0x2FA600u;
            goto label_2fa600;
        }
    }
    ctx->pc = 0x2FA5E4u;
label_2fa5e4:
    // 0x2fa5e4: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2fa5e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
label_2fa5e8:
    // 0x2fa5e8: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2fa5e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2fa5ec:
    // 0x2fa5ec: 0xc043e52  jal         func_10F948
label_2fa5f0:
    if (ctx->pc == 0x2FA5F0u) {
        ctx->pc = 0x2FA5F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA5ECu;
        // 0x2fa5f0: 0x248427e0  addiu       $a0, $a0, 0x27E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA5F4u;
        goto label_2fa5f4;
    }
    ctx->pc = 0x2FA5ECu;
    SET_GPR_U32(ctx, 31, 0x2FA5F4u);
    ctx->pc = 0x2FA5F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA5ECu;
    // 0x2fa5f0: 0x248427e0  addiu       $a0, $a0, 0x27E0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F948u, 0x2FA5ECu, 0x2FA5F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA5F4u;
label_2fa5f4:
    // 0x2fa5f4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2fa5f8:
    if (ctx->pc == 0x2FA5F8u) {
        ctx->pc = 0x2FA5FCu;
        goto label_2fa5fc;
    }
    ctx->pc = 0x2FA5F4u;
    {
        const bool branch_taken_0x2fa5f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fa5f4) {
            ctx->pc = 0x2FA600u;
            goto label_2fa600;
        }
    }
    ctx->pc = 0x2FA5FCu;
label_2fa5fc:
    // 0x2fa5fc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2fa5fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2fa600:
    // 0x2fa600: 0xc0a1430  jal         func_2850C0
label_2fa604:
    if (ctx->pc == 0x2FA604u) {
        ctx->pc = 0x2FA604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA600u;
        // 0x2fa604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA608u;
        goto label_2fa608;
    }
    ctx->pc = 0x2FA600u;
    SET_GPR_U32(ctx, 31, 0x2FA608u);
    ctx->pc = 0x2FA604u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2FA600u;
    // 0x2fa604: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2850C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2850C0u, 0x2FA600u, 0x2FA608u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA608u;
label_2fa608:
    // 0x2fa608: 0x6010004  bgez        $s0, . + 4 + (0x4 << 2)
label_2fa60c:
    if (ctx->pc == 0x2FA60Cu) {
        ctx->pc = 0x2FA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA608u;
        // 0x2fa60c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA610u;
        goto label_2fa610;
    }
    ctx->pc = 0x2FA608u;
    {
        const bool branch_taken_0x2fa608 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x2FA60Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA608u;
        // 0x2fa60c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fa608) {
            ctx->pc = 0x2FA61Cu;
            goto label_2fa61c;
        }
    }
    ctx->pc = 0x2FA610u;
label_2fa610:
    // 0x2fa610: 0xc0bead0  jal         func_2FAB40
label_2fa614:
    if (ctx->pc == 0x2FA614u) {
        ctx->pc = 0x2FA618u;
        goto label_2fa618;
    }
    ctx->pc = 0x2FA610u;
    SET_GPR_U32(ctx, 31, 0x2FA618u);
    ctx->pc = 0x2FAB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FAB40u, 0x2FA610u, 0x2FA618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2FA618u;
label_2fa618:
    // 0x2fa618: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2fa618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2fa61c:
    // 0x2fa61c: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2fa61cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2fa620:
    // 0x2fa620: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2fa620u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2fa624:
    // 0x2fa624: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2fa624u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2fa628:
    // 0x2fa628: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2fa628u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2fa62c:
    // 0x2fa62c: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2fa62cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2fa630:
    // 0x2fa630: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2fa630u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2fa634:
    // 0x2fa634: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2fa634u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2fa638:
    // 0x2fa638: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2fa638u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2fa63c:
    // 0x2fa63c: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2fa63cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2fa640:
    // 0x2fa640: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2fa640u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2fa644:
    // 0x2fa644: 0x3e00008  jr          $ra
label_2fa648:
    if (ctx->pc == 0x2FA648u) {
        ctx->pc = 0x2FA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA644u;
        // 0x2fa648: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2FA64Cu;
        goto label_2fa64c;
    }
    ctx->pc = 0x2FA644u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FA648u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FA644u;
        // 0x2fa648: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FA644u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FA64Cu;
label_2fa64c:
    // 0x2fa64c: 0x0  nop
    ctx->pc = 0x2fa64cu;
    // NOP
}
