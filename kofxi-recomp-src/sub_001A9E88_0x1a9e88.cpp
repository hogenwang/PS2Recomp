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

// Function: sub_001A9E88
// Address: 0x1a9e88 - 0x1aa3e8
void sub_001A9E88_0x1a9e88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A9E88_0x1a9e88");
#endif

    switch (ctx->pc) {
        case 0x1a9e88u: goto label_1a9e88;
        case 0x1a9e8cu: goto label_1a9e8c;
        case 0x1a9e90u: goto label_1a9e90;
        case 0x1a9e94u: goto label_1a9e94;
        case 0x1a9e98u: goto label_1a9e98;
        case 0x1a9e9cu: goto label_1a9e9c;
        case 0x1a9ea0u: goto label_1a9ea0;
        case 0x1a9ea4u: goto label_1a9ea4;
        case 0x1a9ea8u: goto label_1a9ea8;
        case 0x1a9eacu: goto label_1a9eac;
        case 0x1a9eb0u: goto label_1a9eb0;
        case 0x1a9eb4u: goto label_1a9eb4;
        case 0x1a9eb8u: goto label_1a9eb8;
        case 0x1a9ebcu: goto label_1a9ebc;
        case 0x1a9ec0u: goto label_1a9ec0;
        case 0x1a9ec4u: goto label_1a9ec4;
        case 0x1a9ec8u: goto label_1a9ec8;
        case 0x1a9eccu: goto label_1a9ecc;
        case 0x1a9ed0u: goto label_1a9ed0;
        case 0x1a9ed4u: goto label_1a9ed4;
        case 0x1a9ed8u: goto label_1a9ed8;
        case 0x1a9edcu: goto label_1a9edc;
        case 0x1a9ee0u: goto label_1a9ee0;
        case 0x1a9ee4u: goto label_1a9ee4;
        case 0x1a9ee8u: goto label_1a9ee8;
        case 0x1a9eecu: goto label_1a9eec;
        case 0x1a9ef0u: goto label_1a9ef0;
        case 0x1a9ef4u: goto label_1a9ef4;
        case 0x1a9ef8u: goto label_1a9ef8;
        case 0x1a9efcu: goto label_1a9efc;
        case 0x1a9f00u: goto label_1a9f00;
        case 0x1a9f04u: goto label_1a9f04;
        case 0x1a9f08u: goto label_1a9f08;
        case 0x1a9f0cu: goto label_1a9f0c;
        case 0x1a9f10u: goto label_1a9f10;
        case 0x1a9f14u: goto label_1a9f14;
        case 0x1a9f18u: goto label_1a9f18;
        case 0x1a9f1cu: goto label_1a9f1c;
        case 0x1a9f20u: goto label_1a9f20;
        case 0x1a9f24u: goto label_1a9f24;
        case 0x1a9f28u: goto label_1a9f28;
        case 0x1a9f2cu: goto label_1a9f2c;
        case 0x1a9f30u: goto label_1a9f30;
        case 0x1a9f34u: goto label_1a9f34;
        case 0x1a9f38u: goto label_1a9f38;
        case 0x1a9f3cu: goto label_1a9f3c;
        case 0x1a9f40u: goto label_1a9f40;
        case 0x1a9f44u: goto label_1a9f44;
        case 0x1a9f48u: goto label_1a9f48;
        case 0x1a9f4cu: goto label_1a9f4c;
        case 0x1a9f50u: goto label_1a9f50;
        case 0x1a9f54u: goto label_1a9f54;
        case 0x1a9f58u: goto label_1a9f58;
        case 0x1a9f5cu: goto label_1a9f5c;
        case 0x1a9f60u: goto label_1a9f60;
        case 0x1a9f64u: goto label_1a9f64;
        case 0x1a9f68u: goto label_1a9f68;
        case 0x1a9f6cu: goto label_1a9f6c;
        case 0x1a9f70u: goto label_1a9f70;
        case 0x1a9f74u: goto label_1a9f74;
        case 0x1a9f78u: goto label_1a9f78;
        case 0x1a9f7cu: goto label_1a9f7c;
        case 0x1a9f80u: goto label_1a9f80;
        case 0x1a9f84u: goto label_1a9f84;
        case 0x1a9f88u: goto label_1a9f88;
        case 0x1a9f8cu: goto label_1a9f8c;
        case 0x1a9f90u: goto label_1a9f90;
        case 0x1a9f94u: goto label_1a9f94;
        case 0x1a9f98u: goto label_1a9f98;
        case 0x1a9f9cu: goto label_1a9f9c;
        case 0x1a9fa0u: goto label_1a9fa0;
        case 0x1a9fa4u: goto label_1a9fa4;
        case 0x1a9fa8u: goto label_1a9fa8;
        case 0x1a9facu: goto label_1a9fac;
        case 0x1a9fb0u: goto label_1a9fb0;
        case 0x1a9fb4u: goto label_1a9fb4;
        case 0x1a9fb8u: goto label_1a9fb8;
        case 0x1a9fbcu: goto label_1a9fbc;
        case 0x1a9fc0u: goto label_1a9fc0;
        case 0x1a9fc4u: goto label_1a9fc4;
        case 0x1a9fc8u: goto label_1a9fc8;
        case 0x1a9fccu: goto label_1a9fcc;
        case 0x1a9fd0u: goto label_1a9fd0;
        case 0x1a9fd4u: goto label_1a9fd4;
        case 0x1a9fd8u: goto label_1a9fd8;
        case 0x1a9fdcu: goto label_1a9fdc;
        case 0x1a9fe0u: goto label_1a9fe0;
        case 0x1a9fe4u: goto label_1a9fe4;
        case 0x1a9fe8u: goto label_1a9fe8;
        case 0x1a9fecu: goto label_1a9fec;
        case 0x1a9ff0u: goto label_1a9ff0;
        case 0x1a9ff4u: goto label_1a9ff4;
        case 0x1a9ff8u: goto label_1a9ff8;
        case 0x1a9ffcu: goto label_1a9ffc;
        case 0x1aa000u: goto label_1aa000;
        case 0x1aa004u: goto label_1aa004;
        case 0x1aa008u: goto label_1aa008;
        case 0x1aa00cu: goto label_1aa00c;
        case 0x1aa010u: goto label_1aa010;
        case 0x1aa014u: goto label_1aa014;
        case 0x1aa018u: goto label_1aa018;
        case 0x1aa01cu: goto label_1aa01c;
        case 0x1aa020u: goto label_1aa020;
        case 0x1aa024u: goto label_1aa024;
        case 0x1aa028u: goto label_1aa028;
        case 0x1aa02cu: goto label_1aa02c;
        case 0x1aa030u: goto label_1aa030;
        case 0x1aa034u: goto label_1aa034;
        case 0x1aa038u: goto label_1aa038;
        case 0x1aa03cu: goto label_1aa03c;
        case 0x1aa040u: goto label_1aa040;
        case 0x1aa044u: goto label_1aa044;
        case 0x1aa048u: goto label_1aa048;
        case 0x1aa04cu: goto label_1aa04c;
        case 0x1aa050u: goto label_1aa050;
        case 0x1aa054u: goto label_1aa054;
        case 0x1aa058u: goto label_1aa058;
        case 0x1aa05cu: goto label_1aa05c;
        case 0x1aa060u: goto label_1aa060;
        case 0x1aa064u: goto label_1aa064;
        case 0x1aa068u: goto label_1aa068;
        case 0x1aa06cu: goto label_1aa06c;
        case 0x1aa070u: goto label_1aa070;
        case 0x1aa074u: goto label_1aa074;
        case 0x1aa078u: goto label_1aa078;
        case 0x1aa07cu: goto label_1aa07c;
        case 0x1aa080u: goto label_1aa080;
        case 0x1aa084u: goto label_1aa084;
        case 0x1aa088u: goto label_1aa088;
        case 0x1aa08cu: goto label_1aa08c;
        case 0x1aa090u: goto label_1aa090;
        case 0x1aa094u: goto label_1aa094;
        case 0x1aa098u: goto label_1aa098;
        case 0x1aa09cu: goto label_1aa09c;
        case 0x1aa0a0u: goto label_1aa0a0;
        case 0x1aa0a4u: goto label_1aa0a4;
        case 0x1aa0a8u: goto label_1aa0a8;
        case 0x1aa0acu: goto label_1aa0ac;
        case 0x1aa0b0u: goto label_1aa0b0;
        case 0x1aa0b4u: goto label_1aa0b4;
        case 0x1aa0b8u: goto label_1aa0b8;
        case 0x1aa0bcu: goto label_1aa0bc;
        case 0x1aa0c0u: goto label_1aa0c0;
        case 0x1aa0c4u: goto label_1aa0c4;
        case 0x1aa0c8u: goto label_1aa0c8;
        case 0x1aa0ccu: goto label_1aa0cc;
        case 0x1aa0d0u: goto label_1aa0d0;
        case 0x1aa0d4u: goto label_1aa0d4;
        case 0x1aa0d8u: goto label_1aa0d8;
        case 0x1aa0dcu: goto label_1aa0dc;
        case 0x1aa0e0u: goto label_1aa0e0;
        case 0x1aa0e4u: goto label_1aa0e4;
        case 0x1aa0e8u: goto label_1aa0e8;
        case 0x1aa0ecu: goto label_1aa0ec;
        case 0x1aa0f0u: goto label_1aa0f0;
        case 0x1aa0f4u: goto label_1aa0f4;
        case 0x1aa0f8u: goto label_1aa0f8;
        case 0x1aa0fcu: goto label_1aa0fc;
        case 0x1aa100u: goto label_1aa100;
        case 0x1aa104u: goto label_1aa104;
        case 0x1aa108u: goto label_1aa108;
        case 0x1aa10cu: goto label_1aa10c;
        case 0x1aa110u: goto label_1aa110;
        case 0x1aa114u: goto label_1aa114;
        case 0x1aa118u: goto label_1aa118;
        case 0x1aa11cu: goto label_1aa11c;
        case 0x1aa120u: goto label_1aa120;
        case 0x1aa124u: goto label_1aa124;
        case 0x1aa128u: goto label_1aa128;
        case 0x1aa12cu: goto label_1aa12c;
        case 0x1aa130u: goto label_1aa130;
        case 0x1aa134u: goto label_1aa134;
        case 0x1aa138u: goto label_1aa138;
        case 0x1aa13cu: goto label_1aa13c;
        case 0x1aa140u: goto label_1aa140;
        case 0x1aa144u: goto label_1aa144;
        case 0x1aa148u: goto label_1aa148;
        case 0x1aa14cu: goto label_1aa14c;
        case 0x1aa150u: goto label_1aa150;
        case 0x1aa154u: goto label_1aa154;
        case 0x1aa158u: goto label_1aa158;
        case 0x1aa15cu: goto label_1aa15c;
        case 0x1aa160u: goto label_1aa160;
        case 0x1aa164u: goto label_1aa164;
        case 0x1aa168u: goto label_1aa168;
        case 0x1aa16cu: goto label_1aa16c;
        case 0x1aa170u: goto label_1aa170;
        case 0x1aa174u: goto label_1aa174;
        case 0x1aa178u: goto label_1aa178;
        case 0x1aa17cu: goto label_1aa17c;
        case 0x1aa180u: goto label_1aa180;
        case 0x1aa184u: goto label_1aa184;
        case 0x1aa188u: goto label_1aa188;
        case 0x1aa18cu: goto label_1aa18c;
        case 0x1aa190u: goto label_1aa190;
        case 0x1aa194u: goto label_1aa194;
        case 0x1aa198u: goto label_1aa198;
        case 0x1aa19cu: goto label_1aa19c;
        case 0x1aa1a0u: goto label_1aa1a0;
        case 0x1aa1a4u: goto label_1aa1a4;
        case 0x1aa1a8u: goto label_1aa1a8;
        case 0x1aa1acu: goto label_1aa1ac;
        case 0x1aa1b0u: goto label_1aa1b0;
        case 0x1aa1b4u: goto label_1aa1b4;
        case 0x1aa1b8u: goto label_1aa1b8;
        case 0x1aa1bcu: goto label_1aa1bc;
        case 0x1aa1c0u: goto label_1aa1c0;
        case 0x1aa1c4u: goto label_1aa1c4;
        case 0x1aa1c8u: goto label_1aa1c8;
        case 0x1aa1ccu: goto label_1aa1cc;
        case 0x1aa1d0u: goto label_1aa1d0;
        case 0x1aa1d4u: goto label_1aa1d4;
        case 0x1aa1d8u: goto label_1aa1d8;
        case 0x1aa1dcu: goto label_1aa1dc;
        case 0x1aa1e0u: goto label_1aa1e0;
        case 0x1aa1e4u: goto label_1aa1e4;
        case 0x1aa1e8u: goto label_1aa1e8;
        case 0x1aa1ecu: goto label_1aa1ec;
        case 0x1aa1f0u: goto label_1aa1f0;
        case 0x1aa1f4u: goto label_1aa1f4;
        case 0x1aa1f8u: goto label_1aa1f8;
        case 0x1aa1fcu: goto label_1aa1fc;
        case 0x1aa200u: goto label_1aa200;
        case 0x1aa204u: goto label_1aa204;
        case 0x1aa208u: goto label_1aa208;
        case 0x1aa20cu: goto label_1aa20c;
        case 0x1aa210u: goto label_1aa210;
        case 0x1aa214u: goto label_1aa214;
        case 0x1aa218u: goto label_1aa218;
        case 0x1aa21cu: goto label_1aa21c;
        case 0x1aa220u: goto label_1aa220;
        case 0x1aa224u: goto label_1aa224;
        case 0x1aa228u: goto label_1aa228;
        case 0x1aa22cu: goto label_1aa22c;
        case 0x1aa230u: goto label_1aa230;
        case 0x1aa234u: goto label_1aa234;
        case 0x1aa238u: goto label_1aa238;
        case 0x1aa23cu: goto label_1aa23c;
        case 0x1aa240u: goto label_1aa240;
        case 0x1aa244u: goto label_1aa244;
        case 0x1aa248u: goto label_1aa248;
        case 0x1aa24cu: goto label_1aa24c;
        case 0x1aa250u: goto label_1aa250;
        case 0x1aa254u: goto label_1aa254;
        case 0x1aa258u: goto label_1aa258;
        case 0x1aa25cu: goto label_1aa25c;
        case 0x1aa260u: goto label_1aa260;
        case 0x1aa264u: goto label_1aa264;
        case 0x1aa268u: goto label_1aa268;
        case 0x1aa26cu: goto label_1aa26c;
        case 0x1aa270u: goto label_1aa270;
        case 0x1aa274u: goto label_1aa274;
        case 0x1aa278u: goto label_1aa278;
        case 0x1aa27cu: goto label_1aa27c;
        case 0x1aa280u: goto label_1aa280;
        case 0x1aa284u: goto label_1aa284;
        case 0x1aa288u: goto label_1aa288;
        case 0x1aa28cu: goto label_1aa28c;
        case 0x1aa290u: goto label_1aa290;
        case 0x1aa294u: goto label_1aa294;
        case 0x1aa298u: goto label_1aa298;
        case 0x1aa29cu: goto label_1aa29c;
        case 0x1aa2a0u: goto label_1aa2a0;
        case 0x1aa2a4u: goto label_1aa2a4;
        case 0x1aa2a8u: goto label_1aa2a8;
        case 0x1aa2acu: goto label_1aa2ac;
        case 0x1aa2b0u: goto label_1aa2b0;
        case 0x1aa2b4u: goto label_1aa2b4;
        case 0x1aa2b8u: goto label_1aa2b8;
        case 0x1aa2bcu: goto label_1aa2bc;
        case 0x1aa2c0u: goto label_1aa2c0;
        case 0x1aa2c4u: goto label_1aa2c4;
        case 0x1aa2c8u: goto label_1aa2c8;
        case 0x1aa2ccu: goto label_1aa2cc;
        case 0x1aa2d0u: goto label_1aa2d0;
        case 0x1aa2d4u: goto label_1aa2d4;
        case 0x1aa2d8u: goto label_1aa2d8;
        case 0x1aa2dcu: goto label_1aa2dc;
        case 0x1aa2e0u: goto label_1aa2e0;
        case 0x1aa2e4u: goto label_1aa2e4;
        case 0x1aa2e8u: goto label_1aa2e8;
        case 0x1aa2ecu: goto label_1aa2ec;
        case 0x1aa2f0u: goto label_1aa2f0;
        case 0x1aa2f4u: goto label_1aa2f4;
        case 0x1aa2f8u: goto label_1aa2f8;
        case 0x1aa2fcu: goto label_1aa2fc;
        case 0x1aa300u: goto label_1aa300;
        case 0x1aa304u: goto label_1aa304;
        case 0x1aa308u: goto label_1aa308;
        case 0x1aa30cu: goto label_1aa30c;
        case 0x1aa310u: goto label_1aa310;
        case 0x1aa314u: goto label_1aa314;
        case 0x1aa318u: goto label_1aa318;
        case 0x1aa31cu: goto label_1aa31c;
        case 0x1aa320u: goto label_1aa320;
        case 0x1aa324u: goto label_1aa324;
        case 0x1aa328u: goto label_1aa328;
        case 0x1aa32cu: goto label_1aa32c;
        case 0x1aa330u: goto label_1aa330;
        case 0x1aa334u: goto label_1aa334;
        case 0x1aa338u: goto label_1aa338;
        case 0x1aa33cu: goto label_1aa33c;
        case 0x1aa340u: goto label_1aa340;
        case 0x1aa344u: goto label_1aa344;
        case 0x1aa348u: goto label_1aa348;
        case 0x1aa34cu: goto label_1aa34c;
        case 0x1aa350u: goto label_1aa350;
        case 0x1aa354u: goto label_1aa354;
        case 0x1aa358u: goto label_1aa358;
        case 0x1aa35cu: goto label_1aa35c;
        case 0x1aa360u: goto label_1aa360;
        case 0x1aa364u: goto label_1aa364;
        case 0x1aa368u: goto label_1aa368;
        case 0x1aa36cu: goto label_1aa36c;
        case 0x1aa370u: goto label_1aa370;
        case 0x1aa374u: goto label_1aa374;
        case 0x1aa378u: goto label_1aa378;
        case 0x1aa37cu: goto label_1aa37c;
        case 0x1aa380u: goto label_1aa380;
        case 0x1aa384u: goto label_1aa384;
        case 0x1aa388u: goto label_1aa388;
        case 0x1aa38cu: goto label_1aa38c;
        case 0x1aa390u: goto label_1aa390;
        case 0x1aa394u: goto label_1aa394;
        case 0x1aa398u: goto label_1aa398;
        case 0x1aa39cu: goto label_1aa39c;
        case 0x1aa3a0u: goto label_1aa3a0;
        case 0x1aa3a4u: goto label_1aa3a4;
        case 0x1aa3a8u: goto label_1aa3a8;
        case 0x1aa3acu: goto label_1aa3ac;
        case 0x1aa3b0u: goto label_1aa3b0;
        case 0x1aa3b4u: goto label_1aa3b4;
        case 0x1aa3b8u: goto label_1aa3b8;
        case 0x1aa3bcu: goto label_1aa3bc;
        case 0x1aa3c0u: goto label_1aa3c0;
        case 0x1aa3c4u: goto label_1aa3c4;
        case 0x1aa3c8u: goto label_1aa3c8;
        case 0x1aa3ccu: goto label_1aa3cc;
        case 0x1aa3d0u: goto label_1aa3d0;
        case 0x1aa3d4u: goto label_1aa3d4;
        case 0x1aa3d8u: goto label_1aa3d8;
        case 0x1aa3dcu: goto label_1aa3dc;
        case 0x1aa3e0u: goto label_1aa3e0;
        case 0x1aa3e4u: goto label_1aa3e4;
        default: break;
    }

    ctx->pc = 0x1a9e88u;

label_1a9e88:
    // 0x1a9e88: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1a9e88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_1a9e8c:
    // 0x1a9e8c: 0x28a21000  slti        $v0, $a1, 0x1000
    ctx->pc = 0x1a9e8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)4096) ? 1 : 0);
label_1a9e90:
    // 0x1a9e90: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1a9e90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_1a9e94:
    // 0x1a9e94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9e94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9e98:
    // 0x1a9e98: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x1a9e98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_1a9e9c:
    // 0x1a9e9c: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x1a9e9cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ea0:
    // 0x1a9ea0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a9ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a9ea4:
    // 0x1a9ea4: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x1a9ea4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ea8:
    // 0x1a9ea8: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x1a9ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_1a9eac:
    // 0x1a9eac: 0x160982d  daddu       $s3, $t3, $zero
    ctx->pc = 0x1a9eacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_1a9eb0:
    // 0x1a9eb0: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x1a9eb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_1a9eb4:
    // 0x1a9eb4: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x1a9eb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_1a9eb8:
    // 0x1a9eb8: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x1a9eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_1a9ebc:
    // 0x1a9ebc: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x1a9ebcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ec0:
    // 0x1a9ec0: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x1a9ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_1a9ec4:
    // 0x1a9ec4: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x1a9ec4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ec8:
    // 0x1a9ec8: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1a9ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_1a9ecc:
    // 0x1a9ecc: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1a9eccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ed0:
    // 0x1a9ed0: 0x27a60004  addiu       $a2, $sp, 0x4
    ctx->pc = 0x1a9ed0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_1a9ed4:
    // 0x1a9ed4: 0x27a8000c  addiu       $t0, $sp, 0xC
    ctx->pc = 0x1a9ed4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 12));
label_1a9ed8:
    // 0x1a9ed8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_1a9edc:
    if (ctx->pc == 0x1A9EDCu) {
        ctx->pc = 0x1A9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ED8u;
        // 0x1a9edc: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EE0u;
        goto label_1a9ee0;
    }
    ctx->pc = 0x1A9ED8u;
    {
        const bool branch_taken_0x1a9ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9ED8u;
        // 0x1a9edc: 0x27a70008  addiu       $a3, $sp, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ed8) {
            ctx->pc = 0x1A9EF0u;
            goto label_1a9ef0;
        }
    }
    ctx->pc = 0x1A9EE0u;
label_1a9ee0:
    // 0x1a9ee0: 0xa6200000  sh          $zero, 0x0($s1)
    ctx->pc = 0x1a9ee0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 0));
label_1a9ee4:
    // 0x1a9ee4: 0x10000022  b           . + 4 + (0x22 << 2)
label_1a9ee8:
    if (ctx->pc == 0x1A9EE8u) {
        ctx->pc = 0x1A9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EE4u;
        // 0x1a9ee8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9EECu;
        goto label_1a9eec;
    }
    ctx->pc = 0x1A9EE4u;
    {
        const bool branch_taken_0x1a9ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EE4u;
        // 0x1a9ee8: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9ee4) {
            ctx->pc = 0x1A9F70u;
            goto label_1a9f70;
        }
    }
    ctx->pc = 0x1A9EECu;
label_1a9eec:
    // 0x1a9eec: 0x0  nop
    ctx->pc = 0x1a9eecu;
    // NOP
label_1a9ef0:
    // 0x1a9ef0: 0xc06a6a4  jal         func_1A9A90
label_1a9ef4:
    if (ctx->pc == 0x1A9EF4u) {
        ctx->pc = 0x1A9EF8u;
        goto label_1a9ef8;
    }
    ctx->pc = 0x1A9EF0u;
    SET_GPR_U32(ctx, 31, 0x1A9EF8u);
    ctx->pc = 0x1A9A90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A9A90u, 0x1A9EF0u, 0x1A9EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1A9EF8u;
label_1a9ef8:
    // 0x1a9ef8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a9ef8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a9efc:
    // 0x1a9efc: 0x1060001c  beqz        $v1, . + 4 + (0x1C << 2)
label_1a9f00:
    if (ctx->pc == 0x1A9F00u) {
        ctx->pc = 0x1A9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EFCu;
        // 0x1a9f00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F04u;
        goto label_1a9f04;
    }
    ctx->pc = 0x1A9EFCu;
    {
        const bool branch_taken_0x1a9efc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9EFCu;
        // 0x1a9f00: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9efc) {
            ctx->pc = 0x1A9F70u;
            goto label_1a9f70;
        }
    }
    ctx->pc = 0x1A9F04u;
label_1a9f04:
    // 0x1a9f04: 0x701823  subu        $v1, $v1, $s0
    ctx->pc = 0x1a9f04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_1a9f08:
    // 0x1a9f08: 0x32400  sll         $a0, $v1, 16
    ctx->pc = 0x1a9f08u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_1a9f0c:
    // 0x1a9f0c: 0x18800018  blez        $a0, . + 4 + (0x18 << 2)
label_1a9f10:
    if (ctx->pc == 0x1A9F10u) {
        ctx->pc = 0x1A9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F0Cu;
        // 0x1a9f10: 0xa6230000  sh          $v1, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F14u;
        goto label_1a9f14;
    }
    ctx->pc = 0x1A9F0Cu;
    {
        const bool branch_taken_0x1a9f0c = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x1A9F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F0Cu;
        // 0x1a9f10: 0xa6230000  sh          $v1, 0x0($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9f0c) {
            ctx->pc = 0x1A9F70u;
            goto label_1a9f70;
        }
    }
    ctx->pc = 0x1A9F14u;
label_1a9f14:
    // 0x1a9f14: 0x93a30004  lbu         $v1, 0x4($sp)
    ctx->pc = 0x1a9f14u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 4)));
label_1a9f18:
    // 0x1a9f18: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1a9f18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a9f1c:
    // 0x1a9f1c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x1a9f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_1a9f20:
    // 0x1a9f20: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x1a9f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9f24:
    // 0x1a9f24: 0x93a40008  lbu         $a0, 0x8($sp)
    ctx->pc = 0x1a9f24u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 8)));
label_1a9f28:
    // 0x1a9f28: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a9f28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a9f2c:
    // 0x1a9f2c: 0xae660000  sw          $a2, 0x0($s3)
    ctx->pc = 0x1a9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 6));
label_1a9f30:
    // 0x1a9f30: 0x8fa5000c  lw          $a1, 0xC($sp)
    ctx->pc = 0x1a9f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1a9f34:
    // 0x1a9f34: 0xa2430000  sb          $v1, 0x0($s2)
    ctx->pc = 0x1a9f34u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a9f38:
    // 0x1a9f38: 0xa2840000  sb          $a0, 0x0($s4)
    ctx->pc = 0x1a9f38u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 4));
label_1a9f3c:
    // 0x1a9f3c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x1a9f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
label_1a9f40:
    // 0x1a9f40: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a9f40u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1a9f44:
    // 0x1a9f44: 0xa2a70000  sb          $a3, 0x0($s5)
    ctx->pc = 0x1a9f44u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 7));
label_1a9f48:
    // 0x1a9f48: 0x82840000  lb          $a0, 0x0($s4)
    ctx->pc = 0x1a9f48u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1a9f4c:
    // 0x1a9f4c: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1a9f4cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1a9f50:
    // 0x1a9f50: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1a9f50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a9f54:
    // 0x1a9f54: 0x28640000  slti        $a0, $v1, 0x0
    ctx->pc = 0x1a9f54u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
label_1a9f58:
    // 0x1a9f58: 0x24650007  addiu       $a1, $v1, 0x7
    ctx->pc = 0x1a9f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 7));
label_1a9f5c:
    // 0x1a9f5c: 0xa4180b  movn        $v1, $a1, $a0
    ctx->pc = 0x1a9f5cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 5));
label_1a9f60:
    // 0x1a9f60: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x1a9f60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_1a9f64:
    // 0x1a9f64: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x1a9f64u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_1a9f68:
    // 0x1a9f68: 0xa2c30000  sb          $v1, 0x0($s6)
    ctx->pc = 0x1a9f68u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a9f6c:
    // 0x1a9f6c: 0xac880000  sw          $t0, 0x0($a0)
    ctx->pc = 0x1a9f6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 8));
label_1a9f70:
    // 0x1a9f70: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1a9f70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a9f74:
    // 0x1a9f74: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x1a9f74u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1a9f78:
    // 0x1a9f78: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a9f78u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a9f7c:
    // 0x1a9f7c: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x1a9f7cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1a9f80:
    // 0x1a9f80: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x1a9f80u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a9f84:
    // 0x1a9f84: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x1a9f84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1a9f88:
    // 0x1a9f88: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x1a9f88u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a9f8c:
    // 0x1a9f8c: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1a9f8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1a9f90:
    // 0x1a9f90: 0x3e00008  jr          $ra
label_1a9f94:
    if (ctx->pc == 0x1A9F94u) {
        ctx->pc = 0x1A9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F90u;
        // 0x1a9f94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1A9F98u;
        goto label_1a9f98;
    }
    ctx->pc = 0x1A9F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A9F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9F90u;
        // 0x1a9f94: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A9F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A9F98u;
label_1a9f98:
    // 0x1a9f98: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a9f98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a9f9c:
    // 0x1a9f9c: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x1a9f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_1a9fa0:
    // 0x1a9fa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1a9fa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fa4:
    // 0x1a9fa4: 0xffb50048  sd          $s5, 0x48($sp)
    ctx->pc = 0x1a9fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 21));
label_1a9fa8:
    // 0x1a9fa8: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x1a9fa8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a9fac:
    // 0x1a9fac: 0xffb10028  sd          $s1, 0x28($sp)
    ctx->pc = 0x1a9facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 17));
label_1a9fb0:
    // 0x1a9fb0: 0x2611000e  addiu       $s1, $s0, 0xE
    ctx->pc = 0x1a9fb0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 14));
label_1a9fb4:
    // 0x1a9fb4: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x1a9fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_1a9fb8:
    // 0x1a9fb8: 0x2612000f  addiu       $s2, $s0, 0xF
    ctx->pc = 0x1a9fb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 15));
label_1a9fbc:
    // 0x1a9fbc: 0xffb30038  sd          $s3, 0x38($sp)
    ctx->pc = 0x1a9fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 19));
label_1a9fc0:
    // 0x1a9fc0: 0x26130010  addiu       $s3, $s0, 0x10
    ctx->pc = 0x1a9fc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_1a9fc4:
    // 0x1a9fc4: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a9fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a9fc8:
    // 0x1a9fc8: 0x2614000d  addiu       $s4, $s0, 0xD
    ctx->pc = 0x1a9fc8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 13));
label_1a9fcc:
    // 0x1a9fcc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a9fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a9fd0:
    // 0x1a9fd0: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x1a9fd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fd4:
    // 0x1a9fd4: 0xa6150002  sh          $s5, 0x2($s0)
    ctx->pc = 0x1a9fd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 2), (uint16_t)GPR_U32(ctx, 21));
label_1a9fd8:
    // 0x1a9fd8: 0x26020018  addiu       $v0, $s0, 0x18
    ctx->pc = 0x1a9fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
label_1a9fdc:
    // 0x1a9fdc: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1a9fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fe0:
    // 0x1a9fe0: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x1a9fe0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_1a9fe4:
    // 0x1a9fe4: 0x2607000c  addiu       $a3, $s0, 0xC
    ctx->pc = 0x1a9fe4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
label_1a9fe8:
    // 0x1a9fe8: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x1a9fe8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1a9fec:
    // 0x1a9fec: 0x240482d  daddu       $t1, $s2, $zero
    ctx->pc = 0x1a9fecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ff0:
    // 0x1a9ff0: 0x220502d  daddu       $t2, $s1, $zero
    ctx->pc = 0x1a9ff0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a9ff4:
    // 0x1a9ff4: 0x260b0014  addiu       $t3, $s0, 0x14
    ctx->pc = 0x1a9ff4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_1a9ff8:
    // 0x1a9ff8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x1a9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_1a9ffc:
    // 0x1a9ffc: 0xc06a7a2  jal         func_1A9E88
label_1aa000:
    if (ctx->pc == 0x1AA000u) {
        ctx->pc = 0x1AA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9FFCu;
        // 0x1aa000: 0xafb30008  sw          $s3, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA004u;
        goto label_1aa004;
    }
    ctx->pc = 0x1A9FFCu;
    SET_GPR_U32(ctx, 31, 0x1AA004u);
    ctx->pc = 0x1AA000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9FFCu;
    // 0x1aa000: 0xafb30008  sw          $s3, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A9E88u;
    goto label_1a9e88;
    ctx->pc = 0x1AA004u;
label_1aa004:
    // 0x1aa004: 0x4410004  bgez        $v0, . + 4 + (0x4 << 2)
label_1aa008:
    if (ctx->pc == 0x1AA008u) {
        ctx->pc = 0x1AA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA004u;
        // 0x1aa008: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA00Cu;
        goto label_1aa00c;
    }
    ctx->pc = 0x1AA004u;
    {
        const bool branch_taken_0x1aa004 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x1AA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA004u;
        // 0x1aa008: 0x24070008  addiu       $a3, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa004) {
            ctx->pc = 0x1AA018u;
            goto label_1aa018;
        }
    }
    ctx->pc = 0x1AA00Cu;
label_1aa00c:
    // 0x1aa00c: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1aa010:
    if (ctx->pc == 0x1AA010u) {
        ctx->pc = 0x1AA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA00Cu;
        // 0x1aa010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA014u;
        goto label_1aa014;
    }
    ctx->pc = 0x1AA00Cu;
    {
        const bool branch_taken_0x1aa00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA00Cu;
        // 0x1aa010: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa00c) {
            ctx->pc = 0x1AA08Cu;
            goto label_1aa08c;
        }
    }
    ctx->pc = 0x1AA014u;
label_1aa014:
    // 0x1aa014: 0x0  nop
    ctx->pc = 0x1aa014u;
    // NOP
label_1aa018:
    // 0x1aa018: 0xae000034  sw          $zero, 0x34($s0)
    ctx->pc = 0x1aa018u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 0));
label_1aa01c:
    // 0x1aa01c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x1aa01cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_1aa020:
    // 0x1aa020: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x1aa020u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
label_1aa024:
    // 0x1aa024: 0xae000028  sw          $zero, 0x28($s0)
    ctx->pc = 0x1aa024u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 0));
label_1aa028:
    // 0x1aa028: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x1aa028u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
label_1aa02c:
    // 0x1aa02c: 0xa600001c  sh          $zero, 0x1C($s0)
    ctx->pc = 0x1aa02cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 28), (uint16_t)GPR_U32(ctx, 0));
label_1aa030:
    // 0x1aa030: 0xa6000026  sh          $zero, 0x26($s0)
    ctx->pc = 0x1aa030u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 38), (uint16_t)GPR_U32(ctx, 0));
label_1aa034:
    // 0x1aa034: 0xa6000024  sh          $zero, 0x24($s0)
    ctx->pc = 0x1aa034u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 36), (uint16_t)GPR_U32(ctx, 0));
label_1aa038:
    // 0x1aa038: 0x8e04003c  lw          $a0, 0x3C($s0)
    ctx->pc = 0x1aa038u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
label_1aa03c:
    // 0x1aa03c: 0x82220000  lb          $v0, 0x0($s1)
    ctx->pc = 0x1aa03cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_1aa040:
    // 0x1aa040: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x1aa040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_1aa044:
    // 0x1aa044: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x1aa044u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
label_1aa048:
    // 0x1aa048: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aa048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aa04c:
    // 0x1aa04c: 0x8e060044  lw          $a2, 0x44($s0)
    ctx->pc = 0x1aa04cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
label_1aa050:
    // 0x1aa050: 0x82430000  lb          $v1, 0x0($s2)
    ctx->pc = 0x1aa050u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_1aa054:
    // 0x1aa054: 0xae04005c  sw          $a0, 0x5C($s0)
    ctx->pc = 0x1aa054u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 4));
label_1aa058:
    // 0x1aa058: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x1aa058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
label_1aa05c:
    // 0x1aa05c: 0xa6020098  sh          $v0, 0x98($s0)
    ctx->pc = 0x1aa05cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 152), (uint16_t)GPR_U32(ctx, 2));
label_1aa060:
    // 0x1aa060: 0x8e630000  lw          $v1, 0x0($s3)
    ctx->pc = 0x1aa060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1aa064:
    // 0x1aa064: 0xae050060  sw          $a1, 0x60($s0)
    ctx->pc = 0x1aa064u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 96), GPR_U32(ctx, 5));
label_1aa068:
    // 0x1aa068: 0xae030058  sw          $v1, 0x58($s0)
    ctx->pc = 0x1aa068u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 3));
label_1aa06c:
    // 0x1aa06c: 0xae060064  sw          $a2, 0x64($s0)
    ctx->pc = 0x1aa06cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 6));
label_1aa070:
    // 0x1aa070: 0xae00008c  sw          $zero, 0x8C($s0)
    ctx->pc = 0x1aa070u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 140), GPR_U32(ctx, 0));
label_1aa074:
    // 0x1aa074: 0xae000088  sw          $zero, 0x88($s0)
    ctx->pc = 0x1aa074u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 136), GPR_U32(ctx, 0));
label_1aa078:
    // 0x1aa078: 0x82820000  lb          $v0, 0x0($s4)
    ctx->pc = 0x1aa078u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1aa07c:
    // 0x1aa07c: 0x54470002  bnel        $v0, $a3, . + 4 + (0x2 << 2)
label_1aa080:
    if (ctx->pc == 0x1AA080u) {
        ctx->pc = 0x1AA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA07Cu;
        // 0x1aa080: 0xa600009c  sh          $zero, 0x9C($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA084u;
        goto label_1aa084;
    }
    ctx->pc = 0x1AA07Cu;
    {
        const bool branch_taken_0x1aa07c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 7));
        if (branch_taken_0x1aa07c) {
            ctx->pc = 0x1AA080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA07Cu;
            // 0x1aa080: 0xa600009c  sh          $zero, 0x9C($s0) (Delay Slot)
            WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA088u;
            goto label_1aa088;
        }
    }
    ctx->pc = 0x1AA084u;
label_1aa084:
    // 0x1aa084: 0xa615009c  sh          $s5, 0x9C($s0)
    ctx->pc = 0x1aa084u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 156), (uint16_t)GPR_U32(ctx, 21));
label_1aa088:
    // 0x1aa088: 0x87a20010  lh          $v0, 0x10($sp)
    ctx->pc = 0x1aa088u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa08c:
    // 0x1aa08c: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x1aa08cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1aa090:
    // 0x1aa090: 0xdfb10028  ld          $s1, 0x28($sp)
    ctx->pc = 0x1aa090u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1aa094:
    // 0x1aa094: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x1aa094u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1aa098:
    // 0x1aa098: 0xdfb30038  ld          $s3, 0x38($sp)
    ctx->pc = 0x1aa098u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_1aa09c:
    // 0x1aa09c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1aa09cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1aa0a0:
    // 0x1aa0a0: 0xdfb50048  ld          $s5, 0x48($sp)
    ctx->pc = 0x1aa0a0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_1aa0a4:
    // 0x1aa0a4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1aa0a4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1aa0a8:
    // 0x1aa0a8: 0x3e00008  jr          $ra
label_1aa0ac:
    if (ctx->pc == 0x1AA0ACu) {
        ctx->pc = 0x1AA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0A8u;
        // 0x1aa0ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0B0u;
        goto label_1aa0b0;
    }
    ctx->pc = 0x1AA0A8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA0ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0A8u;
        // 0x1aa0ac: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA0A8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA0B0u;
label_1aa0b0:
    // 0x1aa0b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1aa0b4:
    // 0x1aa0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa0b8:
    // 0x1aa0b8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa0b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1aa0bc:
    // 0x1aa0bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa0bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa0c0:
    // 0x1aa0c0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1aa0c4:
    // 0x1aa0c4: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x1aa0c4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1aa0c8:
    // 0x1aa0c8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa0c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1aa0cc:
    // 0x1aa0cc: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aa0ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1aa0d0:
    // 0x1aa0d0: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1aa0d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1aa0d4:
    // 0x1aa0d4: 0x14620053  bne         $v1, $v0, . + 4 + (0x53 << 2)
label_1aa0d8:
    if (ctx->pc == 0x1AA0D8u) {
        ctx->pc = 0x1AA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0D4u;
        // 0x1aa0d8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0DCu;
        goto label_1aa0dc;
    }
    ctx->pc = 0x1AA0D4u;
    {
        const bool branch_taken_0x1aa0d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0D4u;
        // 0x1aa0d8: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0d4) {
            ctx->pc = 0x1AA224u;
            goto label_1aa224;
        }
    }
    ctx->pc = 0x1AA0DCu;
label_1aa0dc:
    // 0x1aa0dc: 0xc06f700  jal         func_1BDC00
label_1aa0e0:
    if (ctx->pc == 0x1AA0E0u) {
        ctx->pc = 0x1AA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0DCu;
        // 0x1aa0e0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0E4u;
        goto label_1aa0e4;
    }
    ctx->pc = 0x1AA0DCu;
    SET_GPR_U32(ctx, 31, 0x1AA0E4u);
    ctx->pc = 0x1AA0E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA0DCu;
    // 0x1aa0e0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC00u, 0x1AA0DCu, 0x1AA0E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA0E4u;
label_1aa0e4:
    // 0x1aa0e4: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_1aa0e8:
    if (ctx->pc == 0x1AA0E8u) {
        ctx->pc = 0x1AA0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0E4u;
        // 0x1aa0e8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0ECu;
        goto label_1aa0ec;
    }
    ctx->pc = 0x1AA0E4u;
    {
        const bool branch_taken_0x1aa0e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa0e4) {
            ctx->pc = 0x1AA0E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA0E4u;
            // 0x1aa0e8: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA224u;
            goto label_1aa224;
        }
    }
    ctx->pc = 0x1AA0ECu;
label_1aa0ec:
    // 0x1aa0ec: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1aa0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1aa0f0:
    // 0x1aa0f0: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1aa0f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1aa0f4:
    // 0x1aa0f4: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1aa0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1aa0f8:
    // 0x1aa0f8: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1aa0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1aa0fc:
    // 0x1aa0fc: 0x40f809  jalr        $v0
label_1aa100:
    if (ctx->pc == 0x1AA100u) {
        ctx->pc = 0x1AA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0FCu;
        // 0x1aa100: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA104u;
        goto label_1aa104;
    }
    ctx->pc = 0x1AA0FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA104u);
        ctx->pc = 0x1AA100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0FCu;
        // 0x1aa100: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA0FCu, 0x1AA104u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA104u;
label_1aa104:
    // 0x1aa104: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1aa104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1aa108:
    // 0x1aa108: 0x8e270020  lw          $a3, 0x20($s1)
    ctx->pc = 0x1aa108u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1aa10c:
    // 0x1aa10c: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1aa10cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa110:
    // 0x1aa110: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1aa110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1aa114:
    // 0x1aa114: 0x875023  subu        $t2, $a0, $a3
    ctx->pc = 0x1aa114u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
label_1aa118:
    // 0x1aa118: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1aa118u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1aa11c:
    // 0x1aa11c: 0x6a102a  slt         $v0, $v1, $t2
    ctx->pc = 0x1aa11cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1aa120:
    // 0x1aa120: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1aa120u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1aa124:
    // 0x1aa124: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x1aa124u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
label_1aa128:
    // 0x1aa128: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1aa128u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1aa12c:
    // 0x1aa12c: 0x8e280014  lw          $t0, 0x14($s1)
    ctx->pc = 0x1aa12cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1aa130:
    // 0x1aa130: 0xaa102a  slt         $v0, $a1, $t2
    ctx->pc = 0x1aa130u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1aa134:
    // 0x1aa134: 0xa2500b  movn        $t2, $a1, $v0
    ctx->pc = 0x1aa134u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 5));
label_1aa138:
    // 0x1aa138: 0x1036021  addu        $t4, $t0, $v1
    ctx->pc = 0x1aa138u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_1aa13c:
    // 0x1aa13c: 0x14860020  bne         $a0, $a2, . + 4 + (0x20 << 2)
label_1aa140:
    if (ctx->pc == 0x1AA140u) {
        ctx->pc = 0x1AA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA13Cu;
        // 0x1aa140: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA144u;
        goto label_1aa144;
    }
    ctx->pc = 0x1AA13Cu;
    {
        const bool branch_taken_0x1aa13c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1AA140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA13Cu;
        // 0x1aa140: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa13c) {
            ctx->pc = 0x1AA1C0u;
            goto label_1aa1c0;
        }
    }
    ctx->pc = 0x1AA144u;
label_1aa144:
    // 0x1aa144: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1aa144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1aa148:
    // 0x1aa148: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1aa148u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa14c:
    // 0x1aa14c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x1aa14cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_1aa150:
    // 0x1aa150: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aa150u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aa154:
    // 0x1aa154: 0x1940002b  blez        $t2, . + 4 + (0x2B << 2)
label_1aa158:
    if (ctx->pc == 0x1AA158u) {
        ctx->pc = 0x1AA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA154u;
        // 0x1aa158: 0x1026821  addu        $t5, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA15Cu;
        goto label_1aa15c;
    }
    ctx->pc = 0x1AA154u;
    {
        const bool branch_taken_0x1aa154 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x1AA158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA154u;
        // 0x1aa158: 0x1026821  addu        $t5, $t0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa154) {
            ctx->pc = 0x1AA204u;
            goto label_1aa204;
        }
    }
    ctx->pc = 0x1AA15Cu;
label_1aa15c:
    // 0x1aa15c: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x1aa15cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aa160:
    // 0x1aa160: 0x240bff00  addiu       $t3, $zero, -0x100
    ctx->pc = 0x1aa160u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_1aa164:
    // 0x1aa164: 0x0  nop
    ctx->pc = 0x1aa164u;
    // NOP
label_1aa168:
    // 0x1aa168: 0x95040000  lhu         $a0, 0x0($t0)
    ctx->pc = 0x1aa168u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
label_1aa16c:
    // 0x1aa16c: 0x92840  sll         $a1, $t1, 1
    ctx->pc = 0x1aa16cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1aa170:
    // 0x1aa170: 0xac3021  addu        $a2, $a1, $t4
    ctx->pc = 0x1aa170u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 12)));
label_1aa174:
    // 0x1aa174: 0xad2821  addu        $a1, $a1, $t5
    ctx->pc = 0x1aa174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 13)));
label_1aa178:
    // 0x1aa178: 0x41200  sll         $v0, $a0, 8
    ctx->pc = 0x1aa178u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_1aa17c:
    // 0x1aa17c: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x1aa17cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
label_1aa180:
    // 0x1aa180: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x1aa180u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_1aa184:
    // 0x1aa184: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1aa184u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1aa188:
    // 0x1aa188: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x1aa188u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_1aa18c:
    // 0x1aa18c: 0x12a382a  slt         $a3, $t1, $t2
    ctx->pc = 0x1aa18cu;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1aa190:
    // 0x1aa190: 0xa4c40000  sh          $a0, 0x0($a2)
    ctx->pc = 0x1aa190u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 4));
label_1aa194:
    // 0x1aa194: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x1aa194u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
label_1aa198:
    // 0x1aa198: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1aa198u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
label_1aa19c:
    // 0x1aa19c: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1aa19cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1aa1a0:
    // 0x1aa1a0: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1aa1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_1aa1a4:
    // 0x1aa1a4: 0x4b1024  and         $v0, $v0, $t3
    ctx->pc = 0x1aa1a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 11));
label_1aa1a8:
    // 0x1aa1a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1aa1ac:
    // 0x1aa1ac: 0x14e0ffee  bnez        $a3, . + 4 + (-0x12 << 2)
label_1aa1b0:
    if (ctx->pc == 0x1AA1B0u) {
        ctx->pc = 0x1AA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1ACu;
        // 0x1aa1b0: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1B4u;
        goto label_1aa1b4;
    }
    ctx->pc = 0x1AA1ACu;
    {
        const bool branch_taken_0x1aa1ac = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1ACu;
        // 0x1aa1b0: 0xa4a30000  sh          $v1, 0x0($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1ac) {
            ctx->pc = 0x1AA168u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aa168;
        }
    }
    ctx->pc = 0x1AA1B4u;
label_1aa1b4:
    // 0x1aa1b4: 0x10000013  b           . + 4 + (0x13 << 2)
label_1aa1b8:
    if (ctx->pc == 0x1AA1B8u) {
        ctx->pc = 0x1AA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1B4u;
        // 0x1aa1b8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1BCu;
        goto label_1aa1bc;
    }
    ctx->pc = 0x1AA1B4u;
    {
        const bool branch_taken_0x1aa1b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1B4u;
        // 0x1aa1b8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1b4) {
            ctx->pc = 0x1AA204u;
            goto label_1aa204;
        }
    }
    ctx->pc = 0x1AA1BCu;
label_1aa1bc:
    // 0x1aa1bc: 0x0  nop
    ctx->pc = 0x1aa1bcu;
    // NOP
label_1aa1c0:
    // 0x1aa1c0: 0x19400010  blez        $t2, . + 4 + (0x10 << 2)
label_1aa1c4:
    if (ctx->pc == 0x1AA1C4u) {
        ctx->pc = 0x1AA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1C0u;
        // 0x1aa1c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA1C8u;
        goto label_1aa1c8;
    }
    ctx->pc = 0x1AA1C0u;
    {
        const bool branch_taken_0x1aa1c0 = (GPR_S32(ctx, 10) <= 0);
        ctx->pc = 0x1AA1C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1C0u;
        // 0x1aa1c4: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1c0) {
            ctx->pc = 0x1AA204u;
            goto label_1aa204;
        }
    }
    ctx->pc = 0x1AA1C8u;
label_1aa1c8:
    // 0x1aa1c8: 0x2406ff00  addiu       $a2, $zero, -0x100
    ctx->pc = 0x1aa1c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967040));
label_1aa1cc:
    // 0x1aa1cc: 0x0  nop
    ctx->pc = 0x1aa1ccu;
    // NOP
label_1aa1d0:
    // 0x1aa1d0: 0x92040  sll         $a0, $t1, 1
    ctx->pc = 0x1aa1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1aa1d4:
    // 0x1aa1d4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1aa1d4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_1aa1d8:
    // 0x1aa1d8: 0x921021  addu        $v0, $a0, $s2
    ctx->pc = 0x1aa1d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
label_1aa1dc:
    // 0x1aa1dc: 0x8c2021  addu        $a0, $a0, $t4
    ctx->pc = 0x1aa1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 12)));
label_1aa1e0:
    // 0x1aa1e0: 0x94430000  lhu         $v1, 0x0($v0)
    ctx->pc = 0x1aa1e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa1e4:
    // 0x1aa1e4: 0x12a282a  slt         $a1, $t1, $t2
    ctx->pc = 0x1aa1e4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 10)) ? 1 : 0);
label_1aa1e8:
    // 0x1aa1e8: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x1aa1e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1aa1ec:
    // 0x1aa1ec: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x1aa1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
label_1aa1f0:
    // 0x1aa1f0: 0x461024  and         $v0, $v0, $a2
    ctx->pc = 0x1aa1f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 6));
label_1aa1f4:
    // 0x1aa1f4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1aa1f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_1aa1f8:
    // 0x1aa1f8: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
label_1aa1fc:
    if (ctx->pc == 0x1AA1FCu) {
        ctx->pc = 0x1AA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1F8u;
        // 0x1aa1fc: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA200u;
        goto label_1aa200;
    }
    ctx->pc = 0x1AA1F8u;
    {
        const bool branch_taken_0x1aa1f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA1FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA1F8u;
        // 0x1aa1fc: 0xa4830000  sh          $v1, 0x0($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa1f8) {
            ctx->pc = 0x1AA1D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aa1d0;
        }
    }
    ctx->pc = 0x1AA200u;
label_1aa200:
    // 0x1aa200: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1aa200u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1aa204:
    // 0x1aa204: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1aa204u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aa208:
    // 0x1aa208: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aa208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa20c:
    // 0x1aa20c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1aa20cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1aa210:
    // 0x1aa210: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1aa210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1aa214:
    // 0x1aa214: 0x1421018  mult        $v0, $t2, $v0
    ctx->pc = 0x1aa214u;
    { int64_t result = (int64_t)GPR_S32(ctx, 10) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1aa218:
    // 0x1aa218: 0xae0a0090  sw          $t2, 0x90($s0)
    ctx->pc = 0x1aa218u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 10));
label_1aa21c:
    // 0x1aa21c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aa21cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aa220:
    // 0x1aa220: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1aa220u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1aa224:
    // 0x1aa224: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aa224u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa228:
    // 0x1aa228: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1aa22c:
    if (ctx->pc == 0x1AA22Cu) {
        ctx->pc = 0x1AA22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA228u;
        // 0x1aa22c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA230u;
        goto label_1aa230;
    }
    ctx->pc = 0x1AA228u;
    {
        const bool branch_taken_0x1aa228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa228) {
            ctx->pc = 0x1AA22Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA228u;
            // 0x1aa22c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA250u;
            goto label_1aa250;
        }
    }
    ctx->pc = 0x1AA230u;
label_1aa230:
    // 0x1aa230: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1aa230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1aa234:
    // 0x1aa234: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1aa234u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1aa238:
    // 0x1aa238: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1aa238u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1aa23c:
    // 0x1aa23c: 0x60f809  jalr        $v1
label_1aa240:
    if (ctx->pc == 0x1AA240u) {
        ctx->pc = 0x1AA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA23Cu;
        // 0x1aa240: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA244u;
        goto label_1aa244;
    }
    ctx->pc = 0x1AA23Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AA244u);
        ctx->pc = 0x1AA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA23Cu;
        // 0x1aa240: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA23Cu, 0x1AA244u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA244u;
label_1aa244:
    // 0x1aa244: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aa244u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aa248:
    // 0x1aa248: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aa248u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aa24c:
    // 0x1aa24c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa24cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa250:
    // 0x1aa250: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa250u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1aa254:
    // 0x1aa254: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa254u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa258:
    // 0x1aa258: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1aa25c:
    // 0x1aa25c: 0x3e00008  jr          $ra
label_1aa260:
    if (ctx->pc == 0x1AA260u) {
        ctx->pc = 0x1AA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA25Cu;
        // 0x1aa260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA264u;
        goto label_1aa264;
    }
    ctx->pc = 0x1AA25Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA25Cu;
        // 0x1aa260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA25Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA264u;
label_1aa264:
    // 0x1aa264: 0x0  nop
    ctx->pc = 0x1aa264u;
    // NOP
label_1aa268:
    // 0x1aa268: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1aa26c:
    // 0x1aa26c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1aa26cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1aa270:
    // 0x1aa270: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1aa270u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1aa274:
    // 0x1aa274: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa274u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa278:
    // 0x1aa278: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1aa278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1aa27c:
    // 0x1aa27c: 0x26110048  addiu       $s1, $s0, 0x48
    ctx->pc = 0x1aa27cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_1aa280:
    // 0x1aa280: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1aa280u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1aa284:
    // 0x1aa284: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1aa284u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_1aa288:
    // 0x1aa288: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x1aa288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1aa28c:
    // 0x1aa28c: 0x14620046  bne         $v1, $v0, . + 4 + (0x46 << 2)
label_1aa290:
    if (ctx->pc == 0x1AA290u) {
        ctx->pc = 0x1AA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA28Cu;
        // 0x1aa290: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA294u;
        goto label_1aa294;
    }
    ctx->pc = 0x1AA28Cu;
    {
        const bool branch_taken_0x1aa28c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1AA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA28Cu;
        // 0x1aa290: 0x8e320000  lw          $s2, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa28c) {
            ctx->pc = 0x1AA3A8u;
            goto label_1aa3a8;
        }
    }
    ctx->pc = 0x1AA294u;
label_1aa294:
    // 0x1aa294: 0xc06f700  jal         func_1BDC00
label_1aa298:
    if (ctx->pc == 0x1AA298u) {
        ctx->pc = 0x1AA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA294u;
        // 0x1aa298: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA29Cu;
        goto label_1aa29c;
    }
    ctx->pc = 0x1AA294u;
    SET_GPR_U32(ctx, 31, 0x1AA29Cu);
    ctx->pc = 0x1AA298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1AA294u;
    // 0x1aa298: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BDC00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BDC00u, 0x1AA294u, 0x1AA29Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1AA29Cu;
label_1aa29c:
    // 0x1aa29c: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
label_1aa2a0:
    if (ctx->pc == 0x1AA2A0u) {
        ctx->pc = 0x1AA2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA29Cu;
        // 0x1aa2a0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2A4u;
        goto label_1aa2a4;
    }
    ctx->pc = 0x1AA29Cu;
    {
        const bool branch_taken_0x1aa29c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aa29c) {
            ctx->pc = 0x1AA2A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA29Cu;
            // 0x1aa2a0: 0x8e030004  lw          $v1, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3A8u;
            goto label_1aa3a8;
        }
    }
    ctx->pc = 0x1AA2A4u;
label_1aa2a4:
    // 0x1aa2a4: 0x8e04007c  lw          $a0, 0x7C($s0)
    ctx->pc = 0x1aa2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 124)));
label_1aa2a8:
    // 0x1aa2a8: 0x26050068  addiu       $a1, $s0, 0x68
    ctx->pc = 0x1aa2a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 104));
label_1aa2ac:
    // 0x1aa2ac: 0x8e020078  lw          $v0, 0x78($s0)
    ctx->pc = 0x1aa2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 120)));
label_1aa2b0:
    // 0x1aa2b0: 0x2606006c  addiu       $a2, $s0, 0x6C
    ctx->pc = 0x1aa2b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 108));
label_1aa2b4:
    // 0x1aa2b4: 0x40f809  jalr        $v0
label_1aa2b8:
    if (ctx->pc == 0x1AA2B8u) {
        ctx->pc = 0x1AA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2B4u;
        // 0x1aa2b8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2BCu;
        goto label_1aa2bc;
    }
    ctx->pc = 0x1AA2B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA2BCu);
        ctx->pc = 0x1AA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2B4u;
        // 0x1aa2b8: 0x26070070  addiu       $a3, $s0, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA2B4u, 0x1AA2BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA2BCu;
label_1aa2bc:
    // 0x1aa2bc: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x1aa2bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1aa2c0:
    // 0x1aa2c0: 0x8e290020  lw          $t1, 0x20($s1)
    ctx->pc = 0x1aa2c0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_1aa2c4:
    // 0x1aa2c4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1aa2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa2c8:
    // 0x1aa2c8: 0x8e230024  lw          $v1, 0x24($s1)
    ctx->pc = 0x1aa2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_1aa2cc:
    // 0x1aa2cc: 0x894023  subu        $t0, $a0, $t1
    ctx->pc = 0x1aa2ccu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
label_1aa2d0:
    // 0x1aa2d0: 0x8204000e  lb          $a0, 0xE($s0)
    ctx->pc = 0x1aa2d0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1aa2d4:
    // 0x1aa2d4: 0x68102a  slt         $v0, $v1, $t0
    ctx->pc = 0x1aa2d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1aa2d8:
    // 0x1aa2d8: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x1aa2d8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1aa2dc:
    // 0x1aa2dc: 0x62400b  movn        $t0, $v1, $v0
    ctx->pc = 0x1aa2dcu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 3));
label_1aa2e0:
    // 0x1aa2e0: 0x91840  sll         $v1, $t1, 1
    ctx->pc = 0x1aa2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1aa2e4:
    // 0x1aa2e4: 0x8e2b0014  lw          $t3, 0x14($s1)
    ctx->pc = 0x1aa2e4u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1aa2e8:
    // 0x1aa2e8: 0xa8102a  slt         $v0, $a1, $t0
    ctx->pc = 0x1aa2e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1aa2ec:
    // 0x1aa2ec: 0xa2400b  movn        $t0, $a1, $v0
    ctx->pc = 0x1aa2ecu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 5));
label_1aa2f0:
    // 0x1aa2f0: 0x1635021  addu        $t2, $t3, $v1
    ctx->pc = 0x1aa2f0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 3)));
label_1aa2f4:
    // 0x1aa2f4: 0x14860018  bne         $a0, $a2, . + 4 + (0x18 << 2)
label_1aa2f8:
    if (ctx->pc == 0x1AA2F8u) {
        ctx->pc = 0x1AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2F4u;
        // 0x1aa2f8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA2FCu;
        goto label_1aa2fc;
    }
    ctx->pc = 0x1AA2F4u;
    {
        const bool branch_taken_0x1aa2f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 6));
        ctx->pc = 0x1AA2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA2F4u;
        // 0x1aa2f8: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa2f4) {
            ctx->pc = 0x1AA358u;
            goto label_1aa358;
        }
    }
    ctx->pc = 0x1AA2FCu;
label_1aa2fc:
    // 0x1aa2fc: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x1aa2fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_1aa300:
    // 0x1aa300: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1aa300u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1aa304:
    // 0x1aa304: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x1aa304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_1aa308:
    // 0x1aa308: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1aa308u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
label_1aa30c:
    // 0x1aa30c: 0x1900001f  blez        $t0, . + 4 + (0x1F << 2)
label_1aa310:
    if (ctx->pc == 0x1AA310u) {
        ctx->pc = 0x1AA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA30Cu;
        // 0x1aa310: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA314u;
        goto label_1aa314;
    }
    ctx->pc = 0x1AA30Cu;
    {
        const bool branch_taken_0x1aa30c = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1AA310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA30Cu;
        // 0x1aa310: 0x1624821  addu        $t1, $t3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa30c) {
            ctx->pc = 0x1AA38Cu;
            goto label_1aa38c;
        }
    }
    ctx->pc = 0x1AA314u;
label_1aa314:
    // 0x1aa314: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x1aa314u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1aa318:
    // 0x1aa318: 0x90c20000  lbu         $v0, 0x0($a2)
    ctx->pc = 0x1aa318u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_1aa31c:
    // 0x1aa31c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1aa31cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1aa320:
    // 0x1aa320: 0x6a2021  addu        $a0, $v1, $t2
    ctx->pc = 0x1aa320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
label_1aa324:
    // 0x1aa324: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x1aa324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
label_1aa328:
    // 0x1aa328: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1aa328u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1aa32c:
    // 0x1aa32c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1aa32cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1aa330:
    // 0x1aa330: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x1aa330u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
label_1aa334:
    // 0x1aa334: 0xe8282a  slt         $a1, $a3, $t0
    ctx->pc = 0x1aa334u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1aa338:
    // 0x1aa338: 0x90c20001  lbu         $v0, 0x1($a2)
    ctx->pc = 0x1aa338u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 1)));
label_1aa33c:
    // 0x1aa33c: 0x24c60002  addiu       $a2, $a2, 0x2
    ctx->pc = 0x1aa33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1aa340:
    // 0x1aa340: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x1aa340u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_1aa344:
    // 0x1aa344: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_1aa348:
    if (ctx->pc == 0x1AA348u) {
        ctx->pc = 0x1AA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA344u;
        // 0x1aa348: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA34Cu;
        goto label_1aa34c;
    }
    ctx->pc = 0x1AA344u;
    {
        const bool branch_taken_0x1aa344 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA344u;
        // 0x1aa348: 0xa4620000  sh          $v0, 0x0($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa344) {
            ctx->pc = 0x1AA318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aa318;
        }
    }
    ctx->pc = 0x1AA34Cu;
label_1aa34c:
    // 0x1aa34c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1aa350:
    if (ctx->pc == 0x1AA350u) {
        ctx->pc = 0x1AA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA34Cu;
        // 0x1aa350: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA354u;
        goto label_1aa354;
    }
    ctx->pc = 0x1AA34Cu;
    {
        const bool branch_taken_0x1aa34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA34Cu;
        // 0x1aa350: 0x9203000e  lbu         $v1, 0xE($s0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa34c) {
            ctx->pc = 0x1AA38Cu;
            goto label_1aa38c;
        }
    }
    ctx->pc = 0x1AA354u;
label_1aa354:
    // 0x1aa354: 0x0  nop
    ctx->pc = 0x1aa354u;
    // NOP
label_1aa358:
    // 0x1aa358: 0x1900000c  blez        $t0, . + 4 + (0xC << 2)
label_1aa35c:
    if (ctx->pc == 0x1AA35Cu) {
        ctx->pc = 0x1AA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA358u;
        // 0x1aa35c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA360u;
        goto label_1aa360;
    }
    ctx->pc = 0x1AA358u;
    {
        const bool branch_taken_0x1aa358 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x1AA35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA358u;
        // 0x1aa35c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa358) {
            ctx->pc = 0x1AA38Cu;
            goto label_1aa38c;
        }
    }
    ctx->pc = 0x1AA360u;
label_1aa360:
    // 0x1aa360: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1aa360u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_1aa364:
    // 0x1aa364: 0x0  nop
    ctx->pc = 0x1aa364u;
    // NOP
label_1aa368:
    // 0x1aa368: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x1aa368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
label_1aa36c:
    // 0x1aa36c: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x1aa36cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_1aa370:
    // 0x1aa370: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1aa370u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1aa374:
    // 0x1aa374: 0xe8202a  slt         $a0, $a3, $t0
    ctx->pc = 0x1aa374u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
label_1aa378:
    // 0x1aa378: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1aa378u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_1aa37c:
    // 0x1aa37c: 0xa4a30000  sh          $v1, 0x0($a1)
    ctx->pc = 0x1aa37cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 3));
label_1aa380:
    // 0x1aa380: 0x1480fff9  bnez        $a0, . + 4 + (-0x7 << 2)
label_1aa384:
    if (ctx->pc == 0x1AA384u) {
        ctx->pc = 0x1AA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA380u;
        // 0x1aa384: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA388u;
        goto label_1aa388;
    }
    ctx->pc = 0x1AA380u;
    {
        const bool branch_taken_0x1aa380 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA380u;
        // 0x1aa384: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa380) {
            ctx->pc = 0x1AA368u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1aa368;
        }
    }
    ctx->pc = 0x1AA388u;
label_1aa388:
    // 0x1aa388: 0x9203000e  lbu         $v1, 0xE($s0)
    ctx->pc = 0x1aa388u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 14)));
label_1aa38c:
    // 0x1aa38c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x1aa38cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_1aa390:
    // 0x1aa390: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1aa390u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa394:
    // 0x1aa394: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x1aa394u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_1aa398:
    // 0x1aa398: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x1aa398u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_1aa39c:
    // 0x1aa39c: 0x1021018  mult        $v0, $t0, $v0
    ctx->pc = 0x1aa39cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 8) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_1aa3a0:
    // 0x1aa3a0: 0xae080090  sw          $t0, 0x90($s0)
    ctx->pc = 0x1aa3a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 144), GPR_U32(ctx, 8));
label_1aa3a4:
    // 0x1aa3a4: 0xae020094  sw          $v0, 0x94($s0)
    ctx->pc = 0x1aa3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 148), GPR_U32(ctx, 2));
label_1aa3a8:
    // 0x1aa3a8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1aa3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1aa3ac:
    // 0x1aa3ac: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
label_1aa3b0:
    if (ctx->pc == 0x1AA3B0u) {
        ctx->pc = 0x1AA3B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3ACu;
        // 0x1aa3b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3B4u;
        goto label_1aa3b4;
    }
    ctx->pc = 0x1AA3ACu;
    {
        const bool branch_taken_0x1aa3ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1aa3ac) {
            ctx->pc = 0x1AA3B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA3ACu;
            // 0x1aa3b0: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA3D4u;
            goto label_1aa3d4;
        }
    }
    ctx->pc = 0x1AA3B4u;
label_1aa3b4:
    // 0x1aa3b4: 0x8e030080  lw          $v1, 0x80($s0)
    ctx->pc = 0x1aa3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 128)));
label_1aa3b8:
    // 0x1aa3b8: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x1aa3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_1aa3bc:
    // 0x1aa3bc: 0x8e050094  lw          $a1, 0x94($s0)
    ctx->pc = 0x1aa3bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 148)));
label_1aa3c0:
    // 0x1aa3c0: 0x60f809  jalr        $v1
label_1aa3c4:
    if (ctx->pc == 0x1AA3C4u) {
        ctx->pc = 0x1AA3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3C0u;
        // 0x1aa3c4: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3C8u;
        goto label_1aa3c8;
    }
    ctx->pc = 0x1AA3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1AA3C8u);
        ctx->pc = 0x1AA3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3C0u;
        // 0x1aa3c4: 0x8e060090  lw          $a2, 0x90($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA3C0u, 0x1AA3C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA3C8u;
label_1aa3c8:
    // 0x1aa3c8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1aa3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1aa3cc:
    // 0x1aa3cc: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1aa3ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
label_1aa3d0:
    // 0x1aa3d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1aa3d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa3d4:
    // 0x1aa3d4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1aa3d4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1aa3d8:
    // 0x1aa3d8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1aa3d8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa3dc:
    // 0x1aa3dc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1aa3dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1aa3e0:
    // 0x1aa3e0: 0x3e00008  jr          $ra
label_1aa3e4:
    if (ctx->pc == 0x1AA3E4u) {
        ctx->pc = 0x1AA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3E0u;
        // 0x1aa3e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA3E8u;
        goto label_fallthrough_0x1aa3e0;
    }
    ctx->pc = 0x1AA3E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA3E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA3E0u;
        // 0x1aa3e4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA3E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x1aa3e0:
    ctx->pc = 0x1AA3E8u;
}
