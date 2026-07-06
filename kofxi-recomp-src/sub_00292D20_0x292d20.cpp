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

// Function: sub_00292D20
// Address: 0x292d20 - 0x293e70
void sub_00292D20_0x292d20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00292D20_0x292d20");
#endif

    switch (ctx->pc) {
        case 0x292d20u: goto label_292d20;
        case 0x292d24u: goto label_292d24;
        case 0x292d28u: goto label_292d28;
        case 0x292d2cu: goto label_292d2c;
        case 0x292d30u: goto label_292d30;
        case 0x292d34u: goto label_292d34;
        case 0x292d38u: goto label_292d38;
        case 0x292d3cu: goto label_292d3c;
        case 0x292d40u: goto label_292d40;
        case 0x292d44u: goto label_292d44;
        case 0x292d48u: goto label_292d48;
        case 0x292d4cu: goto label_292d4c;
        case 0x292d50u: goto label_292d50;
        case 0x292d54u: goto label_292d54;
        case 0x292d58u: goto label_292d58;
        case 0x292d5cu: goto label_292d5c;
        case 0x292d60u: goto label_292d60;
        case 0x292d64u: goto label_292d64;
        case 0x292d68u: goto label_292d68;
        case 0x292d6cu: goto label_292d6c;
        case 0x292d70u: goto label_292d70;
        case 0x292d74u: goto label_292d74;
        case 0x292d78u: goto label_292d78;
        case 0x292d7cu: goto label_292d7c;
        case 0x292d80u: goto label_292d80;
        case 0x292d84u: goto label_292d84;
        case 0x292d88u: goto label_292d88;
        case 0x292d8cu: goto label_292d8c;
        case 0x292d90u: goto label_292d90;
        case 0x292d94u: goto label_292d94;
        case 0x292d98u: goto label_292d98;
        case 0x292d9cu: goto label_292d9c;
        case 0x292da0u: goto label_292da0;
        case 0x292da4u: goto label_292da4;
        case 0x292da8u: goto label_292da8;
        case 0x292dacu: goto label_292dac;
        case 0x292db0u: goto label_292db0;
        case 0x292db4u: goto label_292db4;
        case 0x292db8u: goto label_292db8;
        case 0x292dbcu: goto label_292dbc;
        case 0x292dc0u: goto label_292dc0;
        case 0x292dc4u: goto label_292dc4;
        case 0x292dc8u: goto label_292dc8;
        case 0x292dccu: goto label_292dcc;
        case 0x292dd0u: goto label_292dd0;
        case 0x292dd4u: goto label_292dd4;
        case 0x292dd8u: goto label_292dd8;
        case 0x292ddcu: goto label_292ddc;
        case 0x292de0u: goto label_292de0;
        case 0x292de4u: goto label_292de4;
        case 0x292de8u: goto label_292de8;
        case 0x292decu: goto label_292dec;
        case 0x292df0u: goto label_292df0;
        case 0x292df4u: goto label_292df4;
        case 0x292df8u: goto label_292df8;
        case 0x292dfcu: goto label_292dfc;
        case 0x292e00u: goto label_292e00;
        case 0x292e04u: goto label_292e04;
        case 0x292e08u: goto label_292e08;
        case 0x292e0cu: goto label_292e0c;
        case 0x292e10u: goto label_292e10;
        case 0x292e14u: goto label_292e14;
        case 0x292e18u: goto label_292e18;
        case 0x292e1cu: goto label_292e1c;
        case 0x292e20u: goto label_292e20;
        case 0x292e24u: goto label_292e24;
        case 0x292e28u: goto label_292e28;
        case 0x292e2cu: goto label_292e2c;
        case 0x292e30u: goto label_292e30;
        case 0x292e34u: goto label_292e34;
        case 0x292e38u: goto label_292e38;
        case 0x292e3cu: goto label_292e3c;
        case 0x292e40u: goto label_292e40;
        case 0x292e44u: goto label_292e44;
        case 0x292e48u: goto label_292e48;
        case 0x292e4cu: goto label_292e4c;
        case 0x292e50u: goto label_292e50;
        case 0x292e54u: goto label_292e54;
        case 0x292e58u: goto label_292e58;
        case 0x292e5cu: goto label_292e5c;
        case 0x292e60u: goto label_292e60;
        case 0x292e64u: goto label_292e64;
        case 0x292e68u: goto label_292e68;
        case 0x292e6cu: goto label_292e6c;
        case 0x292e70u: goto label_292e70;
        case 0x292e74u: goto label_292e74;
        case 0x292e78u: goto label_292e78;
        case 0x292e7cu: goto label_292e7c;
        case 0x292e80u: goto label_292e80;
        case 0x292e84u: goto label_292e84;
        case 0x292e88u: goto label_292e88;
        case 0x292e8cu: goto label_292e8c;
        case 0x292e90u: goto label_292e90;
        case 0x292e94u: goto label_292e94;
        case 0x292e98u: goto label_292e98;
        case 0x292e9cu: goto label_292e9c;
        case 0x292ea0u: goto label_292ea0;
        case 0x292ea4u: goto label_292ea4;
        case 0x292ea8u: goto label_292ea8;
        case 0x292eacu: goto label_292eac;
        case 0x292eb0u: goto label_292eb0;
        case 0x292eb4u: goto label_292eb4;
        case 0x292eb8u: goto label_292eb8;
        case 0x292ebcu: goto label_292ebc;
        case 0x292ec0u: goto label_292ec0;
        case 0x292ec4u: goto label_292ec4;
        case 0x292ec8u: goto label_292ec8;
        case 0x292eccu: goto label_292ecc;
        case 0x292ed0u: goto label_292ed0;
        case 0x292ed4u: goto label_292ed4;
        case 0x292ed8u: goto label_292ed8;
        case 0x292edcu: goto label_292edc;
        case 0x292ee0u: goto label_292ee0;
        case 0x292ee4u: goto label_292ee4;
        case 0x292ee8u: goto label_292ee8;
        case 0x292eecu: goto label_292eec;
        case 0x292ef0u: goto label_292ef0;
        case 0x292ef4u: goto label_292ef4;
        case 0x292ef8u: goto label_292ef8;
        case 0x292efcu: goto label_292efc;
        case 0x292f00u: goto label_292f00;
        case 0x292f04u: goto label_292f04;
        case 0x292f08u: goto label_292f08;
        case 0x292f0cu: goto label_292f0c;
        case 0x292f10u: goto label_292f10;
        case 0x292f14u: goto label_292f14;
        case 0x292f18u: goto label_292f18;
        case 0x292f1cu: goto label_292f1c;
        case 0x292f20u: goto label_292f20;
        case 0x292f24u: goto label_292f24;
        case 0x292f28u: goto label_292f28;
        case 0x292f2cu: goto label_292f2c;
        case 0x292f30u: goto label_292f30;
        case 0x292f34u: goto label_292f34;
        case 0x292f38u: goto label_292f38;
        case 0x292f3cu: goto label_292f3c;
        case 0x292f40u: goto label_292f40;
        case 0x292f44u: goto label_292f44;
        case 0x292f48u: goto label_292f48;
        case 0x292f4cu: goto label_292f4c;
        case 0x292f50u: goto label_292f50;
        case 0x292f54u: goto label_292f54;
        case 0x292f58u: goto label_292f58;
        case 0x292f5cu: goto label_292f5c;
        case 0x292f60u: goto label_292f60;
        case 0x292f64u: goto label_292f64;
        case 0x292f68u: goto label_292f68;
        case 0x292f6cu: goto label_292f6c;
        case 0x292f70u: goto label_292f70;
        case 0x292f74u: goto label_292f74;
        case 0x292f78u: goto label_292f78;
        case 0x292f7cu: goto label_292f7c;
        case 0x292f80u: goto label_292f80;
        case 0x292f84u: goto label_292f84;
        case 0x292f88u: goto label_292f88;
        case 0x292f8cu: goto label_292f8c;
        case 0x292f90u: goto label_292f90;
        case 0x292f94u: goto label_292f94;
        case 0x292f98u: goto label_292f98;
        case 0x292f9cu: goto label_292f9c;
        case 0x292fa0u: goto label_292fa0;
        case 0x292fa4u: goto label_292fa4;
        case 0x292fa8u: goto label_292fa8;
        case 0x292facu: goto label_292fac;
        case 0x292fb0u: goto label_292fb0;
        case 0x292fb4u: goto label_292fb4;
        case 0x292fb8u: goto label_292fb8;
        case 0x292fbcu: goto label_292fbc;
        case 0x292fc0u: goto label_292fc0;
        case 0x292fc4u: goto label_292fc4;
        case 0x292fc8u: goto label_292fc8;
        case 0x292fccu: goto label_292fcc;
        case 0x292fd0u: goto label_292fd0;
        case 0x292fd4u: goto label_292fd4;
        case 0x292fd8u: goto label_292fd8;
        case 0x292fdcu: goto label_292fdc;
        case 0x292fe0u: goto label_292fe0;
        case 0x292fe4u: goto label_292fe4;
        case 0x292fe8u: goto label_292fe8;
        case 0x292fecu: goto label_292fec;
        case 0x292ff0u: goto label_292ff0;
        case 0x292ff4u: goto label_292ff4;
        case 0x292ff8u: goto label_292ff8;
        case 0x292ffcu: goto label_292ffc;
        case 0x293000u: goto label_293000;
        case 0x293004u: goto label_293004;
        case 0x293008u: goto label_293008;
        case 0x29300cu: goto label_29300c;
        case 0x293010u: goto label_293010;
        case 0x293014u: goto label_293014;
        case 0x293018u: goto label_293018;
        case 0x29301cu: goto label_29301c;
        case 0x293020u: goto label_293020;
        case 0x293024u: goto label_293024;
        case 0x293028u: goto label_293028;
        case 0x29302cu: goto label_29302c;
        case 0x293030u: goto label_293030;
        case 0x293034u: goto label_293034;
        case 0x293038u: goto label_293038;
        case 0x29303cu: goto label_29303c;
        case 0x293040u: goto label_293040;
        case 0x293044u: goto label_293044;
        case 0x293048u: goto label_293048;
        case 0x29304cu: goto label_29304c;
        case 0x293050u: goto label_293050;
        case 0x293054u: goto label_293054;
        case 0x293058u: goto label_293058;
        case 0x29305cu: goto label_29305c;
        case 0x293060u: goto label_293060;
        case 0x293064u: goto label_293064;
        case 0x293068u: goto label_293068;
        case 0x29306cu: goto label_29306c;
        case 0x293070u: goto label_293070;
        case 0x293074u: goto label_293074;
        case 0x293078u: goto label_293078;
        case 0x29307cu: goto label_29307c;
        case 0x293080u: goto label_293080;
        case 0x293084u: goto label_293084;
        case 0x293088u: goto label_293088;
        case 0x29308cu: goto label_29308c;
        case 0x293090u: goto label_293090;
        case 0x293094u: goto label_293094;
        case 0x293098u: goto label_293098;
        case 0x29309cu: goto label_29309c;
        case 0x2930a0u: goto label_2930a0;
        case 0x2930a4u: goto label_2930a4;
        case 0x2930a8u: goto label_2930a8;
        case 0x2930acu: goto label_2930ac;
        case 0x2930b0u: goto label_2930b0;
        case 0x2930b4u: goto label_2930b4;
        case 0x2930b8u: goto label_2930b8;
        case 0x2930bcu: goto label_2930bc;
        case 0x2930c0u: goto label_2930c0;
        case 0x2930c4u: goto label_2930c4;
        case 0x2930c8u: goto label_2930c8;
        case 0x2930ccu: goto label_2930cc;
        case 0x2930d0u: goto label_2930d0;
        case 0x2930d4u: goto label_2930d4;
        case 0x2930d8u: goto label_2930d8;
        case 0x2930dcu: goto label_2930dc;
        case 0x2930e0u: goto label_2930e0;
        case 0x2930e4u: goto label_2930e4;
        case 0x2930e8u: goto label_2930e8;
        case 0x2930ecu: goto label_2930ec;
        case 0x2930f0u: goto label_2930f0;
        case 0x2930f4u: goto label_2930f4;
        case 0x2930f8u: goto label_2930f8;
        case 0x2930fcu: goto label_2930fc;
        case 0x293100u: goto label_293100;
        case 0x293104u: goto label_293104;
        case 0x293108u: goto label_293108;
        case 0x29310cu: goto label_29310c;
        case 0x293110u: goto label_293110;
        case 0x293114u: goto label_293114;
        case 0x293118u: goto label_293118;
        case 0x29311cu: goto label_29311c;
        case 0x293120u: goto label_293120;
        case 0x293124u: goto label_293124;
        case 0x293128u: goto label_293128;
        case 0x29312cu: goto label_29312c;
        case 0x293130u: goto label_293130;
        case 0x293134u: goto label_293134;
        case 0x293138u: goto label_293138;
        case 0x29313cu: goto label_29313c;
        case 0x293140u: goto label_293140;
        case 0x293144u: goto label_293144;
        case 0x293148u: goto label_293148;
        case 0x29314cu: goto label_29314c;
        case 0x293150u: goto label_293150;
        case 0x293154u: goto label_293154;
        case 0x293158u: goto label_293158;
        case 0x29315cu: goto label_29315c;
        case 0x293160u: goto label_293160;
        case 0x293164u: goto label_293164;
        case 0x293168u: goto label_293168;
        case 0x29316cu: goto label_29316c;
        case 0x293170u: goto label_293170;
        case 0x293174u: goto label_293174;
        case 0x293178u: goto label_293178;
        case 0x29317cu: goto label_29317c;
        case 0x293180u: goto label_293180;
        case 0x293184u: goto label_293184;
        case 0x293188u: goto label_293188;
        case 0x29318cu: goto label_29318c;
        case 0x293190u: goto label_293190;
        case 0x293194u: goto label_293194;
        case 0x293198u: goto label_293198;
        case 0x29319cu: goto label_29319c;
        case 0x2931a0u: goto label_2931a0;
        case 0x2931a4u: goto label_2931a4;
        case 0x2931a8u: goto label_2931a8;
        case 0x2931acu: goto label_2931ac;
        case 0x2931b0u: goto label_2931b0;
        case 0x2931b4u: goto label_2931b4;
        case 0x2931b8u: goto label_2931b8;
        case 0x2931bcu: goto label_2931bc;
        case 0x2931c0u: goto label_2931c0;
        case 0x2931c4u: goto label_2931c4;
        case 0x2931c8u: goto label_2931c8;
        case 0x2931ccu: goto label_2931cc;
        case 0x2931d0u: goto label_2931d0;
        case 0x2931d4u: goto label_2931d4;
        case 0x2931d8u: goto label_2931d8;
        case 0x2931dcu: goto label_2931dc;
        case 0x2931e0u: goto label_2931e0;
        case 0x2931e4u: goto label_2931e4;
        case 0x2931e8u: goto label_2931e8;
        case 0x2931ecu: goto label_2931ec;
        case 0x2931f0u: goto label_2931f0;
        case 0x2931f4u: goto label_2931f4;
        case 0x2931f8u: goto label_2931f8;
        case 0x2931fcu: goto label_2931fc;
        case 0x293200u: goto label_293200;
        case 0x293204u: goto label_293204;
        case 0x293208u: goto label_293208;
        case 0x29320cu: goto label_29320c;
        case 0x293210u: goto label_293210;
        case 0x293214u: goto label_293214;
        case 0x293218u: goto label_293218;
        case 0x29321cu: goto label_29321c;
        case 0x293220u: goto label_293220;
        case 0x293224u: goto label_293224;
        case 0x293228u: goto label_293228;
        case 0x29322cu: goto label_29322c;
        case 0x293230u: goto label_293230;
        case 0x293234u: goto label_293234;
        case 0x293238u: goto label_293238;
        case 0x29323cu: goto label_29323c;
        case 0x293240u: goto label_293240;
        case 0x293244u: goto label_293244;
        case 0x293248u: goto label_293248;
        case 0x29324cu: goto label_29324c;
        case 0x293250u: goto label_293250;
        case 0x293254u: goto label_293254;
        case 0x293258u: goto label_293258;
        case 0x29325cu: goto label_29325c;
        case 0x293260u: goto label_293260;
        case 0x293264u: goto label_293264;
        case 0x293268u: goto label_293268;
        case 0x29326cu: goto label_29326c;
        case 0x293270u: goto label_293270;
        case 0x293274u: goto label_293274;
        case 0x293278u: goto label_293278;
        case 0x29327cu: goto label_29327c;
        case 0x293280u: goto label_293280;
        case 0x293284u: goto label_293284;
        case 0x293288u: goto label_293288;
        case 0x29328cu: goto label_29328c;
        case 0x293290u: goto label_293290;
        case 0x293294u: goto label_293294;
        case 0x293298u: goto label_293298;
        case 0x29329cu: goto label_29329c;
        case 0x2932a0u: goto label_2932a0;
        case 0x2932a4u: goto label_2932a4;
        case 0x2932a8u: goto label_2932a8;
        case 0x2932acu: goto label_2932ac;
        case 0x2932b0u: goto label_2932b0;
        case 0x2932b4u: goto label_2932b4;
        case 0x2932b8u: goto label_2932b8;
        case 0x2932bcu: goto label_2932bc;
        case 0x2932c0u: goto label_2932c0;
        case 0x2932c4u: goto label_2932c4;
        case 0x2932c8u: goto label_2932c8;
        case 0x2932ccu: goto label_2932cc;
        case 0x2932d0u: goto label_2932d0;
        case 0x2932d4u: goto label_2932d4;
        case 0x2932d8u: goto label_2932d8;
        case 0x2932dcu: goto label_2932dc;
        case 0x2932e0u: goto label_2932e0;
        case 0x2932e4u: goto label_2932e4;
        case 0x2932e8u: goto label_2932e8;
        case 0x2932ecu: goto label_2932ec;
        case 0x2932f0u: goto label_2932f0;
        case 0x2932f4u: goto label_2932f4;
        case 0x2932f8u: goto label_2932f8;
        case 0x2932fcu: goto label_2932fc;
        case 0x293300u: goto label_293300;
        case 0x293304u: goto label_293304;
        case 0x293308u: goto label_293308;
        case 0x29330cu: goto label_29330c;
        case 0x293310u: goto label_293310;
        case 0x293314u: goto label_293314;
        case 0x293318u: goto label_293318;
        case 0x29331cu: goto label_29331c;
        case 0x293320u: goto label_293320;
        case 0x293324u: goto label_293324;
        case 0x293328u: goto label_293328;
        case 0x29332cu: goto label_29332c;
        case 0x293330u: goto label_293330;
        case 0x293334u: goto label_293334;
        case 0x293338u: goto label_293338;
        case 0x29333cu: goto label_29333c;
        case 0x293340u: goto label_293340;
        case 0x293344u: goto label_293344;
        case 0x293348u: goto label_293348;
        case 0x29334cu: goto label_29334c;
        case 0x293350u: goto label_293350;
        case 0x293354u: goto label_293354;
        case 0x293358u: goto label_293358;
        case 0x29335cu: goto label_29335c;
        case 0x293360u: goto label_293360;
        case 0x293364u: goto label_293364;
        case 0x293368u: goto label_293368;
        case 0x29336cu: goto label_29336c;
        case 0x293370u: goto label_293370;
        case 0x293374u: goto label_293374;
        case 0x293378u: goto label_293378;
        case 0x29337cu: goto label_29337c;
        case 0x293380u: goto label_293380;
        case 0x293384u: goto label_293384;
        case 0x293388u: goto label_293388;
        case 0x29338cu: goto label_29338c;
        case 0x293390u: goto label_293390;
        case 0x293394u: goto label_293394;
        case 0x293398u: goto label_293398;
        case 0x29339cu: goto label_29339c;
        case 0x2933a0u: goto label_2933a0;
        case 0x2933a4u: goto label_2933a4;
        case 0x2933a8u: goto label_2933a8;
        case 0x2933acu: goto label_2933ac;
        case 0x2933b0u: goto label_2933b0;
        case 0x2933b4u: goto label_2933b4;
        case 0x2933b8u: goto label_2933b8;
        case 0x2933bcu: goto label_2933bc;
        case 0x2933c0u: goto label_2933c0;
        case 0x2933c4u: goto label_2933c4;
        case 0x2933c8u: goto label_2933c8;
        case 0x2933ccu: goto label_2933cc;
        case 0x2933d0u: goto label_2933d0;
        case 0x2933d4u: goto label_2933d4;
        case 0x2933d8u: goto label_2933d8;
        case 0x2933dcu: goto label_2933dc;
        case 0x2933e0u: goto label_2933e0;
        case 0x2933e4u: goto label_2933e4;
        case 0x2933e8u: goto label_2933e8;
        case 0x2933ecu: goto label_2933ec;
        case 0x2933f0u: goto label_2933f0;
        case 0x2933f4u: goto label_2933f4;
        case 0x2933f8u: goto label_2933f8;
        case 0x2933fcu: goto label_2933fc;
        case 0x293400u: goto label_293400;
        case 0x293404u: goto label_293404;
        case 0x293408u: goto label_293408;
        case 0x29340cu: goto label_29340c;
        case 0x293410u: goto label_293410;
        case 0x293414u: goto label_293414;
        case 0x293418u: goto label_293418;
        case 0x29341cu: goto label_29341c;
        case 0x293420u: goto label_293420;
        case 0x293424u: goto label_293424;
        case 0x293428u: goto label_293428;
        case 0x29342cu: goto label_29342c;
        case 0x293430u: goto label_293430;
        case 0x293434u: goto label_293434;
        case 0x293438u: goto label_293438;
        case 0x29343cu: goto label_29343c;
        case 0x293440u: goto label_293440;
        case 0x293444u: goto label_293444;
        case 0x293448u: goto label_293448;
        case 0x29344cu: goto label_29344c;
        case 0x293450u: goto label_293450;
        case 0x293454u: goto label_293454;
        case 0x293458u: goto label_293458;
        case 0x29345cu: goto label_29345c;
        case 0x293460u: goto label_293460;
        case 0x293464u: goto label_293464;
        case 0x293468u: goto label_293468;
        case 0x29346cu: goto label_29346c;
        case 0x293470u: goto label_293470;
        case 0x293474u: goto label_293474;
        case 0x293478u: goto label_293478;
        case 0x29347cu: goto label_29347c;
        case 0x293480u: goto label_293480;
        case 0x293484u: goto label_293484;
        case 0x293488u: goto label_293488;
        case 0x29348cu: goto label_29348c;
        case 0x293490u: goto label_293490;
        case 0x293494u: goto label_293494;
        case 0x293498u: goto label_293498;
        case 0x29349cu: goto label_29349c;
        case 0x2934a0u: goto label_2934a0;
        case 0x2934a4u: goto label_2934a4;
        case 0x2934a8u: goto label_2934a8;
        case 0x2934acu: goto label_2934ac;
        case 0x2934b0u: goto label_2934b0;
        case 0x2934b4u: goto label_2934b4;
        case 0x2934b8u: goto label_2934b8;
        case 0x2934bcu: goto label_2934bc;
        case 0x2934c0u: goto label_2934c0;
        case 0x2934c4u: goto label_2934c4;
        case 0x2934c8u: goto label_2934c8;
        case 0x2934ccu: goto label_2934cc;
        case 0x2934d0u: goto label_2934d0;
        case 0x2934d4u: goto label_2934d4;
        case 0x2934d8u: goto label_2934d8;
        case 0x2934dcu: goto label_2934dc;
        case 0x2934e0u: goto label_2934e0;
        case 0x2934e4u: goto label_2934e4;
        case 0x2934e8u: goto label_2934e8;
        case 0x2934ecu: goto label_2934ec;
        case 0x2934f0u: goto label_2934f0;
        case 0x2934f4u: goto label_2934f4;
        case 0x2934f8u: goto label_2934f8;
        case 0x2934fcu: goto label_2934fc;
        case 0x293500u: goto label_293500;
        case 0x293504u: goto label_293504;
        case 0x293508u: goto label_293508;
        case 0x29350cu: goto label_29350c;
        case 0x293510u: goto label_293510;
        case 0x293514u: goto label_293514;
        case 0x293518u: goto label_293518;
        case 0x29351cu: goto label_29351c;
        case 0x293520u: goto label_293520;
        case 0x293524u: goto label_293524;
        case 0x293528u: goto label_293528;
        case 0x29352cu: goto label_29352c;
        case 0x293530u: goto label_293530;
        case 0x293534u: goto label_293534;
        case 0x293538u: goto label_293538;
        case 0x29353cu: goto label_29353c;
        case 0x293540u: goto label_293540;
        case 0x293544u: goto label_293544;
        case 0x293548u: goto label_293548;
        case 0x29354cu: goto label_29354c;
        case 0x293550u: goto label_293550;
        case 0x293554u: goto label_293554;
        case 0x293558u: goto label_293558;
        case 0x29355cu: goto label_29355c;
        case 0x293560u: goto label_293560;
        case 0x293564u: goto label_293564;
        case 0x293568u: goto label_293568;
        case 0x29356cu: goto label_29356c;
        case 0x293570u: goto label_293570;
        case 0x293574u: goto label_293574;
        case 0x293578u: goto label_293578;
        case 0x29357cu: goto label_29357c;
        case 0x293580u: goto label_293580;
        case 0x293584u: goto label_293584;
        case 0x293588u: goto label_293588;
        case 0x29358cu: goto label_29358c;
        case 0x293590u: goto label_293590;
        case 0x293594u: goto label_293594;
        case 0x293598u: goto label_293598;
        case 0x29359cu: goto label_29359c;
        case 0x2935a0u: goto label_2935a0;
        case 0x2935a4u: goto label_2935a4;
        case 0x2935a8u: goto label_2935a8;
        case 0x2935acu: goto label_2935ac;
        case 0x2935b0u: goto label_2935b0;
        case 0x2935b4u: goto label_2935b4;
        case 0x2935b8u: goto label_2935b8;
        case 0x2935bcu: goto label_2935bc;
        case 0x2935c0u: goto label_2935c0;
        case 0x2935c4u: goto label_2935c4;
        case 0x2935c8u: goto label_2935c8;
        case 0x2935ccu: goto label_2935cc;
        case 0x2935d0u: goto label_2935d0;
        case 0x2935d4u: goto label_2935d4;
        case 0x2935d8u: goto label_2935d8;
        case 0x2935dcu: goto label_2935dc;
        case 0x2935e0u: goto label_2935e0;
        case 0x2935e4u: goto label_2935e4;
        case 0x2935e8u: goto label_2935e8;
        case 0x2935ecu: goto label_2935ec;
        case 0x2935f0u: goto label_2935f0;
        case 0x2935f4u: goto label_2935f4;
        case 0x2935f8u: goto label_2935f8;
        case 0x2935fcu: goto label_2935fc;
        case 0x293600u: goto label_293600;
        case 0x293604u: goto label_293604;
        case 0x293608u: goto label_293608;
        case 0x29360cu: goto label_29360c;
        case 0x293610u: goto label_293610;
        case 0x293614u: goto label_293614;
        case 0x293618u: goto label_293618;
        case 0x29361cu: goto label_29361c;
        case 0x293620u: goto label_293620;
        case 0x293624u: goto label_293624;
        case 0x293628u: goto label_293628;
        case 0x29362cu: goto label_29362c;
        case 0x293630u: goto label_293630;
        case 0x293634u: goto label_293634;
        case 0x293638u: goto label_293638;
        case 0x29363cu: goto label_29363c;
        case 0x293640u: goto label_293640;
        case 0x293644u: goto label_293644;
        case 0x293648u: goto label_293648;
        case 0x29364cu: goto label_29364c;
        case 0x293650u: goto label_293650;
        case 0x293654u: goto label_293654;
        case 0x293658u: goto label_293658;
        case 0x29365cu: goto label_29365c;
        case 0x293660u: goto label_293660;
        case 0x293664u: goto label_293664;
        case 0x293668u: goto label_293668;
        case 0x29366cu: goto label_29366c;
        case 0x293670u: goto label_293670;
        case 0x293674u: goto label_293674;
        case 0x293678u: goto label_293678;
        case 0x29367cu: goto label_29367c;
        case 0x293680u: goto label_293680;
        case 0x293684u: goto label_293684;
        case 0x293688u: goto label_293688;
        case 0x29368cu: goto label_29368c;
        case 0x293690u: goto label_293690;
        case 0x293694u: goto label_293694;
        case 0x293698u: goto label_293698;
        case 0x29369cu: goto label_29369c;
        case 0x2936a0u: goto label_2936a0;
        case 0x2936a4u: goto label_2936a4;
        case 0x2936a8u: goto label_2936a8;
        case 0x2936acu: goto label_2936ac;
        case 0x2936b0u: goto label_2936b0;
        case 0x2936b4u: goto label_2936b4;
        case 0x2936b8u: goto label_2936b8;
        case 0x2936bcu: goto label_2936bc;
        case 0x2936c0u: goto label_2936c0;
        case 0x2936c4u: goto label_2936c4;
        case 0x2936c8u: goto label_2936c8;
        case 0x2936ccu: goto label_2936cc;
        case 0x2936d0u: goto label_2936d0;
        case 0x2936d4u: goto label_2936d4;
        case 0x2936d8u: goto label_2936d8;
        case 0x2936dcu: goto label_2936dc;
        case 0x2936e0u: goto label_2936e0;
        case 0x2936e4u: goto label_2936e4;
        case 0x2936e8u: goto label_2936e8;
        case 0x2936ecu: goto label_2936ec;
        case 0x2936f0u: goto label_2936f0;
        case 0x2936f4u: goto label_2936f4;
        case 0x2936f8u: goto label_2936f8;
        case 0x2936fcu: goto label_2936fc;
        case 0x293700u: goto label_293700;
        case 0x293704u: goto label_293704;
        case 0x293708u: goto label_293708;
        case 0x29370cu: goto label_29370c;
        case 0x293710u: goto label_293710;
        case 0x293714u: goto label_293714;
        case 0x293718u: goto label_293718;
        case 0x29371cu: goto label_29371c;
        case 0x293720u: goto label_293720;
        case 0x293724u: goto label_293724;
        case 0x293728u: goto label_293728;
        case 0x29372cu: goto label_29372c;
        case 0x293730u: goto label_293730;
        case 0x293734u: goto label_293734;
        case 0x293738u: goto label_293738;
        case 0x29373cu: goto label_29373c;
        case 0x293740u: goto label_293740;
        case 0x293744u: goto label_293744;
        case 0x293748u: goto label_293748;
        case 0x29374cu: goto label_29374c;
        case 0x293750u: goto label_293750;
        case 0x293754u: goto label_293754;
        case 0x293758u: goto label_293758;
        case 0x29375cu: goto label_29375c;
        case 0x293760u: goto label_293760;
        case 0x293764u: goto label_293764;
        case 0x293768u: goto label_293768;
        case 0x29376cu: goto label_29376c;
        case 0x293770u: goto label_293770;
        case 0x293774u: goto label_293774;
        case 0x293778u: goto label_293778;
        case 0x29377cu: goto label_29377c;
        case 0x293780u: goto label_293780;
        case 0x293784u: goto label_293784;
        case 0x293788u: goto label_293788;
        case 0x29378cu: goto label_29378c;
        case 0x293790u: goto label_293790;
        case 0x293794u: goto label_293794;
        case 0x293798u: goto label_293798;
        case 0x29379cu: goto label_29379c;
        case 0x2937a0u: goto label_2937a0;
        case 0x2937a4u: goto label_2937a4;
        case 0x2937a8u: goto label_2937a8;
        case 0x2937acu: goto label_2937ac;
        case 0x2937b0u: goto label_2937b0;
        case 0x2937b4u: goto label_2937b4;
        case 0x2937b8u: goto label_2937b8;
        case 0x2937bcu: goto label_2937bc;
        case 0x2937c0u: goto label_2937c0;
        case 0x2937c4u: goto label_2937c4;
        case 0x2937c8u: goto label_2937c8;
        case 0x2937ccu: goto label_2937cc;
        case 0x2937d0u: goto label_2937d0;
        case 0x2937d4u: goto label_2937d4;
        case 0x2937d8u: goto label_2937d8;
        case 0x2937dcu: goto label_2937dc;
        case 0x2937e0u: goto label_2937e0;
        case 0x2937e4u: goto label_2937e4;
        case 0x2937e8u: goto label_2937e8;
        case 0x2937ecu: goto label_2937ec;
        case 0x2937f0u: goto label_2937f0;
        case 0x2937f4u: goto label_2937f4;
        case 0x2937f8u: goto label_2937f8;
        case 0x2937fcu: goto label_2937fc;
        case 0x293800u: goto label_293800;
        case 0x293804u: goto label_293804;
        case 0x293808u: goto label_293808;
        case 0x29380cu: goto label_29380c;
        case 0x293810u: goto label_293810;
        case 0x293814u: goto label_293814;
        case 0x293818u: goto label_293818;
        case 0x29381cu: goto label_29381c;
        case 0x293820u: goto label_293820;
        case 0x293824u: goto label_293824;
        case 0x293828u: goto label_293828;
        case 0x29382cu: goto label_29382c;
        case 0x293830u: goto label_293830;
        case 0x293834u: goto label_293834;
        case 0x293838u: goto label_293838;
        case 0x29383cu: goto label_29383c;
        case 0x293840u: goto label_293840;
        case 0x293844u: goto label_293844;
        case 0x293848u: goto label_293848;
        case 0x29384cu: goto label_29384c;
        case 0x293850u: goto label_293850;
        case 0x293854u: goto label_293854;
        case 0x293858u: goto label_293858;
        case 0x29385cu: goto label_29385c;
        case 0x293860u: goto label_293860;
        case 0x293864u: goto label_293864;
        case 0x293868u: goto label_293868;
        case 0x29386cu: goto label_29386c;
        case 0x293870u: goto label_293870;
        case 0x293874u: goto label_293874;
        case 0x293878u: goto label_293878;
        case 0x29387cu: goto label_29387c;
        case 0x293880u: goto label_293880;
        case 0x293884u: goto label_293884;
        case 0x293888u: goto label_293888;
        case 0x29388cu: goto label_29388c;
        case 0x293890u: goto label_293890;
        case 0x293894u: goto label_293894;
        case 0x293898u: goto label_293898;
        case 0x29389cu: goto label_29389c;
        case 0x2938a0u: goto label_2938a0;
        case 0x2938a4u: goto label_2938a4;
        case 0x2938a8u: goto label_2938a8;
        case 0x2938acu: goto label_2938ac;
        case 0x2938b0u: goto label_2938b0;
        case 0x2938b4u: goto label_2938b4;
        case 0x2938b8u: goto label_2938b8;
        case 0x2938bcu: goto label_2938bc;
        case 0x2938c0u: goto label_2938c0;
        case 0x2938c4u: goto label_2938c4;
        case 0x2938c8u: goto label_2938c8;
        case 0x2938ccu: goto label_2938cc;
        case 0x2938d0u: goto label_2938d0;
        case 0x2938d4u: goto label_2938d4;
        case 0x2938d8u: goto label_2938d8;
        case 0x2938dcu: goto label_2938dc;
        case 0x2938e0u: goto label_2938e0;
        case 0x2938e4u: goto label_2938e4;
        case 0x2938e8u: goto label_2938e8;
        case 0x2938ecu: goto label_2938ec;
        case 0x2938f0u: goto label_2938f0;
        case 0x2938f4u: goto label_2938f4;
        case 0x2938f8u: goto label_2938f8;
        case 0x2938fcu: goto label_2938fc;
        case 0x293900u: goto label_293900;
        case 0x293904u: goto label_293904;
        case 0x293908u: goto label_293908;
        case 0x29390cu: goto label_29390c;
        case 0x293910u: goto label_293910;
        case 0x293914u: goto label_293914;
        case 0x293918u: goto label_293918;
        case 0x29391cu: goto label_29391c;
        case 0x293920u: goto label_293920;
        case 0x293924u: goto label_293924;
        case 0x293928u: goto label_293928;
        case 0x29392cu: goto label_29392c;
        case 0x293930u: goto label_293930;
        case 0x293934u: goto label_293934;
        case 0x293938u: goto label_293938;
        case 0x29393cu: goto label_29393c;
        case 0x293940u: goto label_293940;
        case 0x293944u: goto label_293944;
        case 0x293948u: goto label_293948;
        case 0x29394cu: goto label_29394c;
        case 0x293950u: goto label_293950;
        case 0x293954u: goto label_293954;
        case 0x293958u: goto label_293958;
        case 0x29395cu: goto label_29395c;
        case 0x293960u: goto label_293960;
        case 0x293964u: goto label_293964;
        case 0x293968u: goto label_293968;
        case 0x29396cu: goto label_29396c;
        case 0x293970u: goto label_293970;
        case 0x293974u: goto label_293974;
        case 0x293978u: goto label_293978;
        case 0x29397cu: goto label_29397c;
        case 0x293980u: goto label_293980;
        case 0x293984u: goto label_293984;
        case 0x293988u: goto label_293988;
        case 0x29398cu: goto label_29398c;
        case 0x293990u: goto label_293990;
        case 0x293994u: goto label_293994;
        case 0x293998u: goto label_293998;
        case 0x29399cu: goto label_29399c;
        case 0x2939a0u: goto label_2939a0;
        case 0x2939a4u: goto label_2939a4;
        case 0x2939a8u: goto label_2939a8;
        case 0x2939acu: goto label_2939ac;
        case 0x2939b0u: goto label_2939b0;
        case 0x2939b4u: goto label_2939b4;
        case 0x2939b8u: goto label_2939b8;
        case 0x2939bcu: goto label_2939bc;
        case 0x2939c0u: goto label_2939c0;
        case 0x2939c4u: goto label_2939c4;
        case 0x2939c8u: goto label_2939c8;
        case 0x2939ccu: goto label_2939cc;
        case 0x2939d0u: goto label_2939d0;
        case 0x2939d4u: goto label_2939d4;
        case 0x2939d8u: goto label_2939d8;
        case 0x2939dcu: goto label_2939dc;
        case 0x2939e0u: goto label_2939e0;
        case 0x2939e4u: goto label_2939e4;
        case 0x2939e8u: goto label_2939e8;
        case 0x2939ecu: goto label_2939ec;
        case 0x2939f0u: goto label_2939f0;
        case 0x2939f4u: goto label_2939f4;
        case 0x2939f8u: goto label_2939f8;
        case 0x2939fcu: goto label_2939fc;
        case 0x293a00u: goto label_293a00;
        case 0x293a04u: goto label_293a04;
        case 0x293a08u: goto label_293a08;
        case 0x293a0cu: goto label_293a0c;
        case 0x293a10u: goto label_293a10;
        case 0x293a14u: goto label_293a14;
        case 0x293a18u: goto label_293a18;
        case 0x293a1cu: goto label_293a1c;
        case 0x293a20u: goto label_293a20;
        case 0x293a24u: goto label_293a24;
        case 0x293a28u: goto label_293a28;
        case 0x293a2cu: goto label_293a2c;
        case 0x293a30u: goto label_293a30;
        case 0x293a34u: goto label_293a34;
        case 0x293a38u: goto label_293a38;
        case 0x293a3cu: goto label_293a3c;
        case 0x293a40u: goto label_293a40;
        case 0x293a44u: goto label_293a44;
        case 0x293a48u: goto label_293a48;
        case 0x293a4cu: goto label_293a4c;
        case 0x293a50u: goto label_293a50;
        case 0x293a54u: goto label_293a54;
        case 0x293a58u: goto label_293a58;
        case 0x293a5cu: goto label_293a5c;
        case 0x293a60u: goto label_293a60;
        case 0x293a64u: goto label_293a64;
        case 0x293a68u: goto label_293a68;
        case 0x293a6cu: goto label_293a6c;
        case 0x293a70u: goto label_293a70;
        case 0x293a74u: goto label_293a74;
        case 0x293a78u: goto label_293a78;
        case 0x293a7cu: goto label_293a7c;
        case 0x293a80u: goto label_293a80;
        case 0x293a84u: goto label_293a84;
        case 0x293a88u: goto label_293a88;
        case 0x293a8cu: goto label_293a8c;
        case 0x293a90u: goto label_293a90;
        case 0x293a94u: goto label_293a94;
        case 0x293a98u: goto label_293a98;
        case 0x293a9cu: goto label_293a9c;
        case 0x293aa0u: goto label_293aa0;
        case 0x293aa4u: goto label_293aa4;
        case 0x293aa8u: goto label_293aa8;
        case 0x293aacu: goto label_293aac;
        case 0x293ab0u: goto label_293ab0;
        case 0x293ab4u: goto label_293ab4;
        case 0x293ab8u: goto label_293ab8;
        case 0x293abcu: goto label_293abc;
        case 0x293ac0u: goto label_293ac0;
        case 0x293ac4u: goto label_293ac4;
        case 0x293ac8u: goto label_293ac8;
        case 0x293accu: goto label_293acc;
        case 0x293ad0u: goto label_293ad0;
        case 0x293ad4u: goto label_293ad4;
        case 0x293ad8u: goto label_293ad8;
        case 0x293adcu: goto label_293adc;
        case 0x293ae0u: goto label_293ae0;
        case 0x293ae4u: goto label_293ae4;
        case 0x293ae8u: goto label_293ae8;
        case 0x293aecu: goto label_293aec;
        case 0x293af0u: goto label_293af0;
        case 0x293af4u: goto label_293af4;
        case 0x293af8u: goto label_293af8;
        case 0x293afcu: goto label_293afc;
        case 0x293b00u: goto label_293b00;
        case 0x293b04u: goto label_293b04;
        case 0x293b08u: goto label_293b08;
        case 0x293b0cu: goto label_293b0c;
        case 0x293b10u: goto label_293b10;
        case 0x293b14u: goto label_293b14;
        case 0x293b18u: goto label_293b18;
        case 0x293b1cu: goto label_293b1c;
        case 0x293b20u: goto label_293b20;
        case 0x293b24u: goto label_293b24;
        case 0x293b28u: goto label_293b28;
        case 0x293b2cu: goto label_293b2c;
        case 0x293b30u: goto label_293b30;
        case 0x293b34u: goto label_293b34;
        case 0x293b38u: goto label_293b38;
        case 0x293b3cu: goto label_293b3c;
        case 0x293b40u: goto label_293b40;
        case 0x293b44u: goto label_293b44;
        case 0x293b48u: goto label_293b48;
        case 0x293b4cu: goto label_293b4c;
        case 0x293b50u: goto label_293b50;
        case 0x293b54u: goto label_293b54;
        case 0x293b58u: goto label_293b58;
        case 0x293b5cu: goto label_293b5c;
        case 0x293b60u: goto label_293b60;
        case 0x293b64u: goto label_293b64;
        case 0x293b68u: goto label_293b68;
        case 0x293b6cu: goto label_293b6c;
        case 0x293b70u: goto label_293b70;
        case 0x293b74u: goto label_293b74;
        case 0x293b78u: goto label_293b78;
        case 0x293b7cu: goto label_293b7c;
        case 0x293b80u: goto label_293b80;
        case 0x293b84u: goto label_293b84;
        case 0x293b88u: goto label_293b88;
        case 0x293b8cu: goto label_293b8c;
        case 0x293b90u: goto label_293b90;
        case 0x293b94u: goto label_293b94;
        case 0x293b98u: goto label_293b98;
        case 0x293b9cu: goto label_293b9c;
        case 0x293ba0u: goto label_293ba0;
        case 0x293ba4u: goto label_293ba4;
        case 0x293ba8u: goto label_293ba8;
        case 0x293bacu: goto label_293bac;
        case 0x293bb0u: goto label_293bb0;
        case 0x293bb4u: goto label_293bb4;
        case 0x293bb8u: goto label_293bb8;
        case 0x293bbcu: goto label_293bbc;
        case 0x293bc0u: goto label_293bc0;
        case 0x293bc4u: goto label_293bc4;
        case 0x293bc8u: goto label_293bc8;
        case 0x293bccu: goto label_293bcc;
        case 0x293bd0u: goto label_293bd0;
        case 0x293bd4u: goto label_293bd4;
        case 0x293bd8u: goto label_293bd8;
        case 0x293bdcu: goto label_293bdc;
        case 0x293be0u: goto label_293be0;
        case 0x293be4u: goto label_293be4;
        case 0x293be8u: goto label_293be8;
        case 0x293becu: goto label_293bec;
        case 0x293bf0u: goto label_293bf0;
        case 0x293bf4u: goto label_293bf4;
        case 0x293bf8u: goto label_293bf8;
        case 0x293bfcu: goto label_293bfc;
        case 0x293c00u: goto label_293c00;
        case 0x293c04u: goto label_293c04;
        case 0x293c08u: goto label_293c08;
        case 0x293c0cu: goto label_293c0c;
        case 0x293c10u: goto label_293c10;
        case 0x293c14u: goto label_293c14;
        case 0x293c18u: goto label_293c18;
        case 0x293c1cu: goto label_293c1c;
        case 0x293c20u: goto label_293c20;
        case 0x293c24u: goto label_293c24;
        case 0x293c28u: goto label_293c28;
        case 0x293c2cu: goto label_293c2c;
        case 0x293c30u: goto label_293c30;
        case 0x293c34u: goto label_293c34;
        case 0x293c38u: goto label_293c38;
        case 0x293c3cu: goto label_293c3c;
        case 0x293c40u: goto label_293c40;
        case 0x293c44u: goto label_293c44;
        case 0x293c48u: goto label_293c48;
        case 0x293c4cu: goto label_293c4c;
        case 0x293c50u: goto label_293c50;
        case 0x293c54u: goto label_293c54;
        case 0x293c58u: goto label_293c58;
        case 0x293c5cu: goto label_293c5c;
        case 0x293c60u: goto label_293c60;
        case 0x293c64u: goto label_293c64;
        case 0x293c68u: goto label_293c68;
        case 0x293c6cu: goto label_293c6c;
        case 0x293c70u: goto label_293c70;
        case 0x293c74u: goto label_293c74;
        case 0x293c78u: goto label_293c78;
        case 0x293c7cu: goto label_293c7c;
        case 0x293c80u: goto label_293c80;
        case 0x293c84u: goto label_293c84;
        case 0x293c88u: goto label_293c88;
        case 0x293c8cu: goto label_293c8c;
        case 0x293c90u: goto label_293c90;
        case 0x293c94u: goto label_293c94;
        case 0x293c98u: goto label_293c98;
        case 0x293c9cu: goto label_293c9c;
        case 0x293ca0u: goto label_293ca0;
        case 0x293ca4u: goto label_293ca4;
        case 0x293ca8u: goto label_293ca8;
        case 0x293cacu: goto label_293cac;
        case 0x293cb0u: goto label_293cb0;
        case 0x293cb4u: goto label_293cb4;
        case 0x293cb8u: goto label_293cb8;
        case 0x293cbcu: goto label_293cbc;
        case 0x293cc0u: goto label_293cc0;
        case 0x293cc4u: goto label_293cc4;
        case 0x293cc8u: goto label_293cc8;
        case 0x293cccu: goto label_293ccc;
        case 0x293cd0u: goto label_293cd0;
        case 0x293cd4u: goto label_293cd4;
        case 0x293cd8u: goto label_293cd8;
        case 0x293cdcu: goto label_293cdc;
        case 0x293ce0u: goto label_293ce0;
        case 0x293ce4u: goto label_293ce4;
        case 0x293ce8u: goto label_293ce8;
        case 0x293cecu: goto label_293cec;
        case 0x293cf0u: goto label_293cf0;
        case 0x293cf4u: goto label_293cf4;
        case 0x293cf8u: goto label_293cf8;
        case 0x293cfcu: goto label_293cfc;
        case 0x293d00u: goto label_293d00;
        case 0x293d04u: goto label_293d04;
        case 0x293d08u: goto label_293d08;
        case 0x293d0cu: goto label_293d0c;
        case 0x293d10u: goto label_293d10;
        case 0x293d14u: goto label_293d14;
        case 0x293d18u: goto label_293d18;
        case 0x293d1cu: goto label_293d1c;
        case 0x293d20u: goto label_293d20;
        case 0x293d24u: goto label_293d24;
        case 0x293d28u: goto label_293d28;
        case 0x293d2cu: goto label_293d2c;
        case 0x293d30u: goto label_293d30;
        case 0x293d34u: goto label_293d34;
        case 0x293d38u: goto label_293d38;
        case 0x293d3cu: goto label_293d3c;
        case 0x293d40u: goto label_293d40;
        case 0x293d44u: goto label_293d44;
        case 0x293d48u: goto label_293d48;
        case 0x293d4cu: goto label_293d4c;
        case 0x293d50u: goto label_293d50;
        case 0x293d54u: goto label_293d54;
        case 0x293d58u: goto label_293d58;
        case 0x293d5cu: goto label_293d5c;
        case 0x293d60u: goto label_293d60;
        case 0x293d64u: goto label_293d64;
        case 0x293d68u: goto label_293d68;
        case 0x293d6cu: goto label_293d6c;
        case 0x293d70u: goto label_293d70;
        case 0x293d74u: goto label_293d74;
        case 0x293d78u: goto label_293d78;
        case 0x293d7cu: goto label_293d7c;
        case 0x293d80u: goto label_293d80;
        case 0x293d84u: goto label_293d84;
        case 0x293d88u: goto label_293d88;
        case 0x293d8cu: goto label_293d8c;
        case 0x293d90u: goto label_293d90;
        case 0x293d94u: goto label_293d94;
        case 0x293d98u: goto label_293d98;
        case 0x293d9cu: goto label_293d9c;
        case 0x293da0u: goto label_293da0;
        case 0x293da4u: goto label_293da4;
        case 0x293da8u: goto label_293da8;
        case 0x293dacu: goto label_293dac;
        case 0x293db0u: goto label_293db0;
        case 0x293db4u: goto label_293db4;
        case 0x293db8u: goto label_293db8;
        case 0x293dbcu: goto label_293dbc;
        case 0x293dc0u: goto label_293dc0;
        case 0x293dc4u: goto label_293dc4;
        case 0x293dc8u: goto label_293dc8;
        case 0x293dccu: goto label_293dcc;
        case 0x293dd0u: goto label_293dd0;
        case 0x293dd4u: goto label_293dd4;
        case 0x293dd8u: goto label_293dd8;
        case 0x293ddcu: goto label_293ddc;
        case 0x293de0u: goto label_293de0;
        case 0x293de4u: goto label_293de4;
        case 0x293de8u: goto label_293de8;
        case 0x293decu: goto label_293dec;
        case 0x293df0u: goto label_293df0;
        case 0x293df4u: goto label_293df4;
        case 0x293df8u: goto label_293df8;
        case 0x293dfcu: goto label_293dfc;
        case 0x293e00u: goto label_293e00;
        case 0x293e04u: goto label_293e04;
        case 0x293e08u: goto label_293e08;
        case 0x293e0cu: goto label_293e0c;
        case 0x293e10u: goto label_293e10;
        case 0x293e14u: goto label_293e14;
        case 0x293e18u: goto label_293e18;
        case 0x293e1cu: goto label_293e1c;
        case 0x293e20u: goto label_293e20;
        case 0x293e24u: goto label_293e24;
        case 0x293e28u: goto label_293e28;
        case 0x293e2cu: goto label_293e2c;
        case 0x293e30u: goto label_293e30;
        case 0x293e34u: goto label_293e34;
        case 0x293e38u: goto label_293e38;
        case 0x293e3cu: goto label_293e3c;
        case 0x293e40u: goto label_293e40;
        case 0x293e44u: goto label_293e44;
        case 0x293e48u: goto label_293e48;
        case 0x293e4cu: goto label_293e4c;
        case 0x293e50u: goto label_293e50;
        case 0x293e54u: goto label_293e54;
        case 0x293e58u: goto label_293e58;
        case 0x293e5cu: goto label_293e5c;
        case 0x293e60u: goto label_293e60;
        case 0x293e64u: goto label_293e64;
        case 0x293e68u: goto label_293e68;
        case 0x293e6cu: goto label_293e6c;
        default: break;
    }

    ctx->pc = 0x292d20u;

label_292d20:
    // 0x292d20: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x292d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_292d24:
    // 0x292d24: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x292d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_292d28:
    // 0x292d28: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x292d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_292d2c:
    // 0x292d2c: 0x3c160f0f  lui         $s6, 0xF0F
    ctx->pc = 0x292d2cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)3855 << 16));
label_292d30:
    // 0x292d30: 0x36d60f0f  ori         $s6, $s6, 0xF0F
    ctx->pc = 0x292d30u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)3855);
label_292d34:
    // 0x292d34: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x292d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_292d38:
    // 0x292d38: 0x3c153333  lui         $s5, 0x3333
    ctx->pc = 0x292d38u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)13107 << 16));
label_292d3c:
    // 0x292d3c: 0x36b53333  ori         $s5, $s5, 0x3333
    ctx->pc = 0x292d3cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)13107);
label_292d40:
    // 0x292d40: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x292d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_292d44:
    // 0x292d44: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x292d44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_292d48:
    // 0x292d48: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x292d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_292d4c:
    // 0x292d4c: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x292d4cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
label_292d50:
    // 0x292d50: 0x367300ff  ori         $s3, $s3, 0xFF
    ctx->pc = 0x292d50u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)255);
label_292d54:
    // 0x292d54: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x292d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_292d58:
    // 0x292d58: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x292d58u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_292d5c:
    // 0x292d5c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x292d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_292d60:
    // 0x292d60: 0x3c115555  lui         $s1, 0x5555
    ctx->pc = 0x292d60u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)21845 << 16));
label_292d64:
    // 0x292d64: 0x36315555  ori         $s1, $s1, 0x5555
    ctx->pc = 0x292d64u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | (uint64_t)(uint16_t)21845);
label_292d68:
    // 0x292d68: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x292d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_292d6c:
    // 0x292d6c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x292d6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_292d70:
    // 0x292d70: 0xe0282d  daddu       $a1, $a3, $zero
    ctx->pc = 0x292d70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_292d74:
    // 0x292d74: 0xde090008  ld          $t1, 0x8($s0)
    ctx->pc = 0x292d74u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_292d78:
    // 0x292d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x292d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_292d7c:
    // 0x292d7c: 0xde080000  ld          $t0, 0x0($s0)
    ctx->pc = 0x292d7cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_292d80:
    // 0x292d80: 0x9113a  dsrl        $v0, $t1, 4
    ctx->pc = 0x292d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 4);
label_292d84:
    // 0x292d84: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
label_292d88:
    // 0x292d88: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x292d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_292d8c:
    // 0x292d8c: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x292d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
label_292d90:
    // 0x292d90: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292d90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
label_292d94:
    // 0x292d94: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292d94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
label_292d98:
    // 0x292d98: 0x8143a  dsrl        $v0, $t0, 16
    ctx->pc = 0x292d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 16);
label_292d9c:
    // 0x292d9c: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x292d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
label_292da0:
    // 0x292da0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x292da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_292da4:
    // 0x292da4: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x292da4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_292da8:
    // 0x292da8: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x292da8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
label_292dac:
    // 0x292dac: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x292dacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
label_292db0:
    // 0x292db0: 0x910ba  dsrl        $v0, $t1, 2
    ctx->pc = 0x292db0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 2);
label_292db4:
    // 0x292db4: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
label_292db8:
    // 0x292db8: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x292db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_292dbc:
    // 0x292dbc: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x292dbcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
label_292dc0:
    // 0x292dc0: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292dc0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
label_292dc4:
    // 0x292dc4: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292dc4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
label_292dc8:
    // 0x292dc8: 0x8123a  dsrl        $v0, $t0, 8
    ctx->pc = 0x292dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 8);
label_292dcc:
    // 0x292dcc: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x292dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
label_292dd0:
    // 0x292dd0: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x292dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_292dd4:
    // 0x292dd4: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x292dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_292dd8:
    // 0x292dd8: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x292dd8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
label_292ddc:
    // 0x292ddc: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x292ddcu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
label_292de0:
    // 0x292de0: 0x9107a  dsrl        $v0, $t1, 1
    ctx->pc = 0x292de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 1);
label_292de4:
    // 0x292de4: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
label_292de8:
    // 0x292de8: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x292de8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_292dec:
    // 0x292dec: 0x21878  dsll        $v1, $v0, 1
    ctx->pc = 0x292decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 1);
label_292df0:
    // 0x292df0: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292df0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
label_292df4:
    // 0x292df4: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292df4u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
label_292df8:
    // 0x292df8: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x292df8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
label_292dfc:
    // 0x292dfc: 0xc0a4864  jal         func_292190
label_292e00:
    if (ctx->pc == 0x292E00u) {
        ctx->pc = 0x292E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292DFCu;
        // 0x292e00: 0xfe090008  sd          $t1, 0x8($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E04u;
        goto label_292e04;
    }
    ctx->pc = 0x292DFCu;
    SET_GPR_U32(ctx, 31, 0x292E04u);
    ctx->pc = 0x292E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292DFCu;
    // 0x292e00: 0xfe090008  sd          $t1, 0x8($s0) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292190u, 0x292DFCu, 0x292E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E04u;
label_292e04:
    // 0x292e04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x292e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_292e08:
    // 0x292e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_292e0c:
    // 0x292e0c: 0xc0a4864  jal         func_292190
label_292e10:
    if (ctx->pc == 0x292E10u) {
        ctx->pc = 0x292E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E0Cu;
        // 0x292e10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E14u;
        goto label_292e14;
    }
    ctx->pc = 0x292E0Cu;
    SET_GPR_U32(ctx, 31, 0x292E14u);
    ctx->pc = 0x292E10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E0Cu;
    // 0x292e10: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292190u, 0x292E0Cu, 0x292E14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E14u;
label_292e14:
    // 0x292e14: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x292e14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_292e18:
    // 0x292e18: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x292e18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_292e1c:
    // 0x292e1c: 0xc0a4864  jal         func_292190
label_292e20:
    if (ctx->pc == 0x292E20u) {
        ctx->pc = 0x292E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292E1Cu;
        // 0x292e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292E24u;
        goto label_292e24;
    }
    ctx->pc = 0x292E1Cu;
    SET_GPR_U32(ctx, 31, 0x292E24u);
    ctx->pc = 0x292E20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x292E1Cu;
    // 0x292e20: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292190u, 0x292E1Cu, 0x292E24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292E24u;
label_292e24:
    // 0x292e24: 0xde090008  ld          $t1, 0x8($s0)
    ctx->pc = 0x292e24u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_292e28:
    // 0x292e28: 0xde080000  ld          $t0, 0x0($s0)
    ctx->pc = 0x292e28u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_292e2c:
    // 0x292e2c: 0x9107a  dsrl        $v0, $t1, 1
    ctx->pc = 0x292e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 1);
label_292e30:
    // 0x292e30: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x292e30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_292e34:
    // 0x292e34: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
label_292e38:
    // 0x292e38: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x292e38u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_292e3c:
    // 0x292e3c: 0x511024  and         $v0, $v0, $s1
    ctx->pc = 0x292e3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 17));
label_292e40:
    // 0x292e40: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x292e40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_292e44:
    // 0x292e44: 0x21878  dsll        $v1, $v0, 1
    ctx->pc = 0x292e44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 1);
label_292e48:
    // 0x292e48: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292e48u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
label_292e4c:
    // 0x292e4c: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292e4cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
label_292e50:
    // 0x292e50: 0x8123a  dsrl        $v0, $t0, 8
    ctx->pc = 0x292e50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 8);
label_292e54:
    // 0x292e54: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x292e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
label_292e58:
    // 0x292e58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x292e58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_292e5c:
    // 0x292e5c: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x292e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_292e60:
    // 0x292e60: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x292e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_292e64:
    // 0x292e64: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x292e64u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
label_292e68:
    // 0x292e68: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x292e68u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
label_292e6c:
    // 0x292e6c: 0x910ba  dsrl        $v0, $t1, 2
    ctx->pc = 0x292e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 2);
label_292e70:
    // 0x292e70: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
label_292e74:
    // 0x292e74: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x292e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_292e78:
    // 0x292e78: 0x551024  and         $v0, $v0, $s5
    ctx->pc = 0x292e78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 21));
label_292e7c:
    // 0x292e7c: 0x218b8  dsll        $v1, $v0, 2
    ctx->pc = 0x292e7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 2);
label_292e80:
    // 0x292e80: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292e80u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
label_292e84:
    // 0x292e84: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292e84u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
label_292e88:
    // 0x292e88: 0x8143a  dsrl        $v0, $t0, 16
    ctx->pc = 0x292e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) >> 16);
label_292e8c:
    // 0x292e8c: 0x491026  xor         $v0, $v0, $t1
    ctx->pc = 0x292e8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 9));
label_292e90:
    // 0x292e90: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x292e90u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_292e94:
    // 0x292e94: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x292e94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_292e98:
    // 0x292e98: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x292e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_292e9c:
    // 0x292e9c: 0x1224826  xor         $t1, $t1, $v0
    ctx->pc = 0x292e9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 2));
label_292ea0:
    // 0x292ea0: 0x1034026  xor         $t0, $t0, $v1
    ctx->pc = 0x292ea0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 3));
label_292ea4:
    // 0x292ea4: 0x9113a  dsrl        $v0, $t1, 4
    ctx->pc = 0x292ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) >> 4);
label_292ea8:
    // 0x292ea8: 0x481026  xor         $v0, $v0, $t0
    ctx->pc = 0x292ea8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 8));
label_292eac:
    // 0x292eac: 0x561024  and         $v0, $v0, $s6
    ctx->pc = 0x292eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 22));
label_292eb0:
    // 0x292eb0: 0x21938  dsll        $v1, $v0, 4
    ctx->pc = 0x292eb0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 4);
label_292eb4:
    // 0x292eb4: 0x1024026  xor         $t0, $t0, $v0
    ctx->pc = 0x292eb4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) ^ GPR_U64(ctx, 2));
label_292eb8:
    // 0x292eb8: 0x1234826  xor         $t1, $t1, $v1
    ctx->pc = 0x292eb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) ^ GPR_U64(ctx, 3));
label_292ebc:
    // 0x292ebc: 0xfe080000  sd          $t0, 0x0($s0)
    ctx->pc = 0x292ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 0), GPR_U64(ctx, 8));
label_292ec0:
    // 0x292ec0: 0xfe090008  sd          $t1, 0x8($s0)
    ctx->pc = 0x292ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 8), GPR_U64(ctx, 9));
label_292ec4:
    // 0x292ec4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x292ec4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_292ec8:
    // 0x292ec8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x292ec8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_292ecc:
    // 0x292ecc: 0x3e00008  jr          $ra
label_292ed0:
    if (ctx->pc == 0x292ED0u) {
        ctx->pc = 0x292ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292ECCu;
        // 0x292ed0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292ED4u;
        goto label_292ed4;
    }
    ctx->pc = 0x292ECCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x292ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292ECCu;
        // 0x292ed0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x292ECCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x292ED4u;
label_292ed4:
    // 0x292ed4: 0x0  nop
    ctx->pc = 0x292ed4u;
    // NOP
label_292ed8:
    // 0x292ed8: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x292ed8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_292edc:
    // 0x292edc: 0xafa80014  sw          $t0, 0x14($sp)
    ctx->pc = 0x292edcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
label_292ee0:
    // 0x292ee0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x292ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_292ee4:
    // 0x292ee4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x292ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_292ee8:
    // 0x292ee8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x292ee8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_292eec:
    // 0x292eec: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x292eecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_292ef0:
    // 0x292ef0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x292ef0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_292ef4:
    // 0x292ef4: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x292ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_292ef8:
    // 0x292ef8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x292ef8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_292efc:
    // 0x292efc: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x292efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_292f00:
    // 0x292f00: 0x100502d  daddu       $t2, $t0, $zero
    ctx->pc = 0x292f00u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_292f04:
    // 0x292f04: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x292f04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_292f08:
    // 0x292f08: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x292f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_292f0c:
    // 0x292f0c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x292f0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_292f10:
    // 0x292f10: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x292f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_292f14:
    // 0x292f14: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x292f14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_292f18:
    // 0x292f18: 0x112000e8  beqz        $t1, . + 4 + (0xE8 << 2)
label_292f1c:
    if (ctx->pc == 0x292F1Cu) {
        ctx->pc = 0x292F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F18u;
        // 0x292f1c: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F20u;
        goto label_292f20;
    }
    ctx->pc = 0x292F18u;
    {
        const bool branch_taken_0x292f18 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x292F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F18u;
        // 0x292f1c: 0xafa70010  sw          $a3, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f18) {
            ctx->pc = 0x2932BCu;
            goto label_2932bc;
        }
    }
    ctx->pc = 0x292F20u;
label_292f20:
    // 0x292f20: 0x914c0000  lbu         $t4, 0x0($t2)
    ctx->pc = 0x292f20u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_292f24:
    // 0x292f24: 0x67defff8  daddiu      $fp, $fp, -0x8
    ctx->pc = 0x292f24u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4294967288);
label_292f28:
    // 0x292f28: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x292f28u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_292f2c:
    // 0x292f2c: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x292f2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_292f30:
    // 0x292f30: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x292f30u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_292f34:
    // 0x292f34: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x292f34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_292f38:
    // 0x292f38: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x292f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_292f3c:
    // 0x292f3c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x292f3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_292f40:
    // 0x292f40: 0x1826025  or          $t4, $t4, $v0
    ctx->pc = 0x292f40u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 2));
label_292f44:
    // 0x292f44: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x292f44u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_292f48:
    // 0x292f48: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x292f48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_292f4c:
    // 0x292f4c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x292f4cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_292f50:
    // 0x292f50: 0x1836025  or          $t4, $t4, $v1
    ctx->pc = 0x292f50u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 3));
label_292f54:
    // 0x292f54: 0x914b0000  lbu         $t3, 0x0($t2)
    ctx->pc = 0x292f54u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_292f58:
    // 0x292f58: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x292f58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_292f5c:
    // 0x292f5c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x292f5cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_292f60:
    // 0x292f60: 0x1846025  or          $t4, $t4, $a0
    ctx->pc = 0x292f60u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 4));
label_292f64:
    // 0x292f64: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x292f64u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_292f68:
    // 0x292f68: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x292f68u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_292f6c:
    // 0x292f6c: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x292f6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_292f70:
    // 0x292f70: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x292f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_292f74:
    // 0x292f74: 0x91440001  lbu         $a0, 0x1($t2)
    ctx->pc = 0x292f74u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
label_292f78:
    // 0x292f78: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x292f78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_292f7c:
    // 0x292f7c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x292f7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_292f80:
    // 0x292f80: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x292f80u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_292f84:
    // 0x292f84: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x292f84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_292f88:
    // 0x292f88: 0x7c00048  bltz        $fp, . + 4 + (0x48 << 2)
label_292f8c:
    if (ctx->pc == 0x292F8Cu) {
        ctx->pc = 0x292F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F88u;
        // 0x292f8c: 0x1645825  or          $t3, $t3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x292F90u;
        goto label_292f90;
    }
    ctx->pc = 0x292F88u;
    {
        const bool branch_taken_0x292f88 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x292F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x292F88u;
        // 0x292f8c: 0x1645825  or          $t3, $t3, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x292f88) {
            ctx->pc = 0x2930ACu;
            goto label_2930ac;
        }
    }
    ctx->pc = 0x292F90u;
label_292f90:
    // 0x292f90: 0x26b60007  addiu       $s6, $s5, 0x7
    ctx->pc = 0x292f90u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 7));
label_292f94:
    // 0x292f94: 0x26b40001  addiu       $s4, $s5, 0x1
    ctx->pc = 0x292f94u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_292f98:
    // 0x292f98: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x292f98u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_292f9c:
    // 0x292f9c: 0x0  nop
    ctx->pc = 0x292f9cu;
    // NOP
label_292fa0:
    // 0x292fa0: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x292fa0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_292fa4:
    // 0x292fa4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x292fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_292fa8:
    // 0x292fa8: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x292fa8u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_292fac:
    // 0x292fac: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x292facu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_292fb0:
    // 0x292fb0: 0x92480005  lbu         $t0, 0x5($s2)
    ctx->pc = 0x292fb0u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_292fb4:
    // 0x292fb4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x292fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_292fb8:
    // 0x292fb8: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x292fb8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_292fbc:
    // 0x292fbc: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x292fbcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_292fc0:
    // 0x292fc0: 0x92500004  lbu         $s0, 0x4($s2)
    ctx->pc = 0x292fc0u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_292fc4:
    // 0x292fc4: 0x84238  dsll        $t0, $t0, 8
    ctx->pc = 0x292fc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 8);
label_292fc8:
    // 0x292fc8: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x292fc8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_292fcc:
    // 0x292fcc: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x292fccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_292fd0:
    // 0x292fd0: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x292fd0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_292fd4:
    // 0x292fd4: 0x2088025  or          $s0, $s0, $t0
    ctx->pc = 0x292fd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 8));
label_292fd8:
    // 0x292fd8: 0x92420007  lbu         $v0, 0x7($s2)
    ctx->pc = 0x292fd8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_292fdc:
    // 0x292fdc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x292fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_292fe0:
    // 0x292fe0: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x292fe0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
label_292fe4:
    // 0x292fe4: 0x2278825  or          $s1, $s1, $a3
    ctx->pc = 0x292fe4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
label_292fe8:
    // 0x292fe8: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x292fe8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_292fec:
    // 0x292fec: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x292fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_292ff0:
    // 0x292ff0: 0x2268825  or          $s1, $s1, $a2
    ctx->pc = 0x292ff0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
label_292ff4:
    // 0x292ff4: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x292ff4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_292ff8:
    // 0x292ff8: 0x22c8826  xor         $s1, $s1, $t4
    ctx->pc = 0x292ff8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 12));
label_292ffc:
    // 0x292ffc: 0x20b8026  xor         $s0, $s0, $t3
    ctx->pc = 0x292ffcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 11));
label_293000:
    // 0x293000: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x293000u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_293004:
    // 0x293004: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x293004u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293008:
    // 0x293008: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x293008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
label_29300c:
    // 0x29300c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x29300cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_293010:
    // 0x293010: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x293010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
label_293014:
    // 0x293014: 0xc0a45a0  jal         func_291680
label_293018:
    if (ctx->pc == 0x293018u) {
        ctx->pc = 0x293018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293014u;
        // 0x293018: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29301Cu;
        goto label_29301c;
    }
    ctx->pc = 0x293014u;
    SET_GPR_U32(ctx, 31, 0x29301Cu);
    ctx->pc = 0x293018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293014u;
    // 0x293018: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291680u, 0x293014u, 0x29301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29301Cu;
label_29301c:
    // 0x29301c: 0x67defff8  daddiu      $fp, $fp, -0x8
    ctx->pc = 0x29301cu;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4294967288);
label_293020:
    // 0x293020: 0xdfac0000  ld          $t4, 0x0($sp)
    ctx->pc = 0x293020u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_293024:
    // 0x293024: 0x318d00ff  andi        $t5, $t4, 0xFF
    ctx->pc = 0x293024u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_293028:
    // 0x293028: 0xc723a  dsrl        $t6, $t4, 8
    ctx->pc = 0x293028u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) >> 8);
label_29302c:
    // 0x29302c: 0xc443a  dsrl        $t0, $t4, 16
    ctx->pc = 0x29302cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) >> 16);
label_293030:
    // 0x293030: 0xc263a  dsrl        $a0, $t4, 24
    ctx->pc = 0x293030u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) >> 24);
label_293034:
    // 0x293034: 0x31a500ff  andi        $a1, $t5, 0xFF
    ctx->pc = 0x293034u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
label_293038:
    // 0x293038: 0x31c200ff  andi        $v0, $t6, 0xFF
    ctx->pc = 0x293038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_29303c:
    // 0x29303c: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x29303cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_293040:
    // 0x293040: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x293040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293044:
    // 0x293044: 0xa2c5fff9  sb          $a1, -0x7($s6)
    ctx->pc = 0x293044u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294967289), (uint8_t)GPR_U32(ctx, 5));
label_293048:
    // 0x293048: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293048u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29304c:
    // 0x29304c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29304cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293050:
    // 0x293050: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x293050u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293054:
    // 0x293054: 0xa2820000  sb          $v0, 0x0($s4)
    ctx->pc = 0x293054u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 2));
label_293058:
    // 0x293058: 0xa2830001  sb          $v1, 0x1($s4)
    ctx->pc = 0x293058u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 3));
label_29305c:
    // 0x29305c: 0xa2840002  sb          $a0, 0x2($s4)
    ctx->pc = 0x29305cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 4));
label_293060:
    // 0x293060: 0xdfab0008  ld          $t3, 0x8($sp)
    ctx->pc = 0x293060u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_293064:
    // 0x293064: 0xb3a3a  dsrl        $a3, $t3, 8
    ctx->pc = 0x293064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) >> 8);
label_293068:
    // 0x293068: 0xb343a  dsrl        $a2, $t3, 16
    ctx->pc = 0x293068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> 16);
label_29306c:
    // 0x29306c: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x29306cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_293070:
    // 0x293070: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x293070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_293074:
    // 0x293074: 0x316500ff  andi        $a1, $t3, 0xFF
    ctx->pc = 0x293074u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_293078:
    // 0x293078: 0xb4e3a  dsrl        $t1, $t3, 24
    ctx->pc = 0x293078u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) >> 24);
label_29307c:
    // 0x29307c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x29307cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_293080:
    // 0x293080: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293084:
    // 0x293084: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x293084u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293088:
    // 0x293088: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x293088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_29308c:
    // 0x29308c: 0xa2850003  sb          $a1, 0x3($s4)
    ctx->pc = 0x29308cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 5));
label_293090:
    // 0x293090: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293090u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293094:
    // 0x293094: 0xa2830004  sb          $v1, 0x4($s4)
    ctx->pc = 0x293094u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 3));
label_293098:
    // 0x293098: 0xa2840005  sb          $a0, 0x5($s4)
    ctx->pc = 0x293098u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 4));
label_29309c:
    // 0x29309c: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x29309cu;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_2930a0:
    // 0x2930a0: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x2930a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_2930a4:
    // 0x2930a4: 0x7c1ffbe  bgez        $fp, . + 4 + (-0x42 << 2)
label_2930a8:
    if (ctx->pc == 0x2930A8u) {
        ctx->pc = 0x2930A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930A4u;
        // 0x2930a8: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930ACu;
        goto label_2930ac;
    }
    ctx->pc = 0x2930A4u;
    {
        const bool branch_taken_0x2930a4 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x2930A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930A4u;
        // 0x2930a8: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930a4) {
            ctx->pc = 0x292FA0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_292fa0;
        }
    }
    ctx->pc = 0x2930ACu;
label_2930ac:
    // 0x2930ac: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x2930acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_2930b0:
    // 0x2930b0: 0x13c2005c  beq         $fp, $v0, . + 4 + (0x5C << 2)
label_2930b4:
    if (ctx->pc == 0x2930B4u) {
        ctx->pc = 0x2930B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930B0u;
        // 0x2930b4: 0x67c60007  daddiu      $a2, $fp, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930B8u;
        goto label_2930b8;
    }
    ctx->pc = 0x2930B0u;
    {
        const bool branch_taken_0x2930b0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x2930B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930B0u;
        // 0x2930b4: 0x67c60007  daddiu      $a2, $fp, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930b0) {
            ctx->pc = 0x293224u;
            goto label_293224;
        }
    }
    ctx->pc = 0x2930B8u;
label_2930b8:
    // 0x2930b8: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x2930b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
label_2930bc:
    // 0x2930bc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2930bcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2930c0:
    // 0x2930c0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2930c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2930c4:
    // 0x2930c4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2930c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2930c8:
    // 0x2930c8: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x2930c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2930cc:
    // 0x2930cc: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x2930ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2930d0:
    // 0x2930d0: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2930d4:
    if (ctx->pc == 0x2930D4u) {
        ctx->pc = 0x2930D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930D0u;
        // 0x2930d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2930D8u;
        goto label_2930d8;
    }
    ctx->pc = 0x2930D0u;
    {
        const bool branch_taken_0x2930d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2930D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2930D0u;
        // 0x2930d4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2930d0) {
            ctx->pc = 0x293168u;
            goto label_293168;
        }
    }
    ctx->pc = 0x2930D8u;
label_2930d8:
    // 0x2930d8: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2930d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2930dc:
    // 0x2930dc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2930dcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2930e0:
    // 0x2930e0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2930e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2930e4:
    // 0x2930e4: 0x2463b380  addiu       $v1, $v1, -0x4C80
    ctx->pc = 0x2930e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947712));
label_2930e8:
    // 0x2930e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2930e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2930ec:
    // 0x2930ec: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2930ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2930f0:
    // 0x2930f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2930f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2930f4:
    // 0x2930f4: 0x800008  jr          $a0
label_2930f8:
    if (ctx->pc == 0x2930F8u) {
        ctx->pc = 0x2930FCu;
        goto label_2930fc;
    }
    ctx->pc = 0x2930F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2930F4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2930FCu;
label_2930fc:
    // 0x2930fc: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2930fcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_293100:
    // 0x293100: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x293100u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293104:
    // 0x293104: 0x28638  dsll        $s0, $v0, 24
    ctx->pc = 0x293104u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 24);
label_293108:
    // 0x293108: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x293108u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_29310c:
    // 0x29310c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x29310cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293110:
    // 0x293110: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x293110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_293114:
    // 0x293114: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x293114u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_293118:
    // 0x293118: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x293118u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_29311c:
    // 0x29311c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x29311cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293120:
    // 0x293120: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x293120u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_293124:
    // 0x293124: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x293124u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_293128:
    // 0x293128: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x293128u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_29312c:
    // 0x29312c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x29312cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293130:
    // 0x293130: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x293130u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_293134:
    // 0x293134: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x293134u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_293138:
    // 0x293138: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x293138u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_29313c:
    // 0x29313c: 0x28e38  dsll        $s1, $v0, 24
    ctx->pc = 0x29313cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 24);
label_293140:
    // 0x293140: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x293140u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_293144:
    // 0x293144: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x293144u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293148:
    // 0x293148: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x293148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_29314c:
    // 0x29314c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x29314cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_293150:
    // 0x293150: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x293150u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_293154:
    // 0x293154: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x293154u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293158:
    // 0x293158: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x293158u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_29315c:
    // 0x29315c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x29315cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_293160:
    // 0x293160: 0x9262ffff  lbu         $v0, -0x1($s3)
    ctx->pc = 0x293160u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967295)));
label_293164:
    // 0x293164: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x293164u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_293168:
    // 0x293168: 0x22c8826  xor         $s1, $s1, $t4
    ctx->pc = 0x293168u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 12));
label_29316c:
    // 0x29316c: 0x20b8026  xor         $s0, $s0, $t3
    ctx->pc = 0x29316cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 11));
label_293170:
    // 0x293170: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x293170u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_293174:
    // 0x293174: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x293174u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_293178:
    // 0x293178: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x293178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
label_29317c:
    // 0x29317c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x29317cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_293180:
    // 0x293180: 0xc0a45a0  jal         func_291680
label_293184:
    if (ctx->pc == 0x293184u) {
        ctx->pc = 0x293184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293180u;
        // 0x293184: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293188u;
        goto label_293188;
    }
    ctx->pc = 0x293180u;
    SET_GPR_U32(ctx, 31, 0x293188u);
    ctx->pc = 0x293184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293180u;
    // 0x293184: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291680u, 0x293180u, 0x293188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293188u;
label_293188:
    // 0x293188: 0xdfac0000  ld          $t4, 0x0($sp)
    ctx->pc = 0x293188u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29318c:
    // 0x29318c: 0x318d00ff  andi        $t5, $t4, 0xFF
    ctx->pc = 0x29318cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_293190:
    // 0x293190: 0xc723a  dsrl        $t6, $t4, 8
    ctx->pc = 0x293190u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) >> 8);
label_293194:
    // 0x293194: 0x31a300ff  andi        $v1, $t5, 0xFF
    ctx->pc = 0x293194u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
label_293198:
    // 0x293198: 0x31c200ff  andi        $v0, $t6, 0xFF
    ctx->pc = 0x293198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_29319c:
    // 0x29319c: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x29319cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_2931a0:
    // 0x2931a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2931a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2931a4:
    // 0x2931a4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2931a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2931a8:
    // 0x2931a8: 0xc443a  dsrl        $t0, $t4, 16
    ctx->pc = 0x2931a8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) >> 16);
label_2931ac:
    // 0x2931ac: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2931acu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_2931b0:
    // 0x2931b0: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x2931b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2931b4:
    // 0x2931b4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2931b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2931b8:
    // 0x2931b8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2931b8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2931bc:
    // 0x2931bc: 0xc263a  dsrl        $a0, $t4, 24
    ctx->pc = 0x2931bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) >> 24);
label_2931c0:
    // 0x2931c0: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x2931c0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_2931c4:
    // 0x2931c4: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x2931c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2931c8:
    // 0x2931c8: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2931c8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2931cc:
    // 0x2931cc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2931ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2931d0:
    // 0x2931d0: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2931d0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_2931d4:
    // 0x2931d4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2931d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2931d8:
    // 0x2931d8: 0xdfab0008  ld          $t3, 0x8($sp)
    ctx->pc = 0x2931d8u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2931dc:
    // 0x2931dc: 0x316500ff  andi        $a1, $t3, 0xFF
    ctx->pc = 0x2931dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_2931e0:
    // 0x2931e0: 0xb3a3a  dsrl        $a3, $t3, 8
    ctx->pc = 0x2931e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) >> 8);
label_2931e4:
    // 0x2931e4: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x2931e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2931e8:
    // 0x2931e8: 0x30e200ff  andi        $v0, $a3, 0xFF
    ctx->pc = 0x2931e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2931ec:
    // 0x2931ec: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x2931ecu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_2931f0:
    // 0x2931f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2931f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2931f4:
    // 0x2931f4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2931f4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2931f8:
    // 0x2931f8: 0xb4e3a  dsrl        $t1, $t3, 24
    ctx->pc = 0x2931f8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) >> 24);
label_2931fc:
    // 0x2931fc: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2931fcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293200:
    // 0x293200: 0xb343a  dsrl        $a2, $t3, 16
    ctx->pc = 0x293200u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> 16);
label_293204:
    // 0x293204: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x293204u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_293208:
    // 0x293208: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x293208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_29320c:
    // 0x29320c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x29320cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_293210:
    // 0x293210: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293210u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293214:
    // 0x293214: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293218:
    // 0x293218: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x293218u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_29321c:
    // 0x29321c: 0x10000009  b           . + 4 + (0x9 << 2)
label_293220:
    if (ctx->pc == 0x293220u) {
        ctx->pc = 0x293220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29321Cu;
        // 0x293220: 0xa2a20001  sb          $v0, 0x1($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293224u;
        goto label_293224;
    }
    ctx->pc = 0x29321Cu;
    {
        const bool branch_taken_0x29321c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29321Cu;
        // 0x293220: 0xa2a20001  sb          $v0, 0x1($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29321c) {
            ctx->pc = 0x293244u;
            goto label_293244;
        }
    }
    ctx->pc = 0x293224u;
label_293224:
    // 0x293224: 0xc263a  dsrl        $a0, $t4, 24
    ctx->pc = 0x293224u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) >> 24);
label_293228:
    // 0x293228: 0xb4e3a  dsrl        $t1, $t3, 24
    ctx->pc = 0x293228u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) >> 24);
label_29322c:
    // 0x29322c: 0x318d00ff  andi        $t5, $t4, 0xFF
    ctx->pc = 0x29322cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_293230:
    // 0x293230: 0xc723a  dsrl        $t6, $t4, 8
    ctx->pc = 0x293230u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 12) >> 8);
label_293234:
    // 0x293234: 0xc443a  dsrl        $t0, $t4, 16
    ctx->pc = 0x293234u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 12) >> 16);
label_293238:
    // 0x293238: 0x316500ff  andi        $a1, $t3, 0xFF
    ctx->pc = 0x293238u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_29323c:
    // 0x29323c: 0xb3a3a  dsrl        $a3, $t3, 8
    ctx->pc = 0x29323cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) >> 8);
label_293240:
    // 0x293240: 0xb343a  dsrl        $a2, $t3, 16
    ctx->pc = 0x293240u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> 16);
label_293244:
    // 0x293244: 0x8faa0014  lw          $t2, 0x14($sp)
    ctx->pc = 0x293244u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_293248:
    // 0x293248: 0x31a300ff  andi        $v1, $t5, 0xFF
    ctx->pc = 0x293248u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
label_29324c:
    // 0x29324c: 0x31c200ff  andi        $v0, $t6, 0xFF
    ctx->pc = 0x29324cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_293250:
    // 0x293250: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x293250u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
label_293254:
    // 0x293254: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293254u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293258:
    // 0x293258: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x293258u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_29325c:
    // 0x29325c: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x29325cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_293260:
    // 0x293260: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x293260u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_293264:
    // 0x293264: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293264u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293268:
    // 0x293268: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x293268u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_29326c:
    // 0x29326c: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x29326cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293270:
    // 0x293270: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x293270u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
label_293274:
    // 0x293274: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293278:
    // 0x293278: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x293278u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_29327c:
    // 0x29327c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x29327cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_293280:
    // 0x293280: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x293280u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_293284:
    // 0x293284: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x293284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_293288:
    // 0x293288: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x293288u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_29328c:
    // 0x29328c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29328cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293290:
    // 0x293290: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x293290u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
label_293294:
    // 0x293294: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x293294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_293298:
    // 0x293298: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x293298u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_29329c:
    // 0x29329c: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x29329cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2932a0:
    // 0x2932a0: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x2932a0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
label_2932a4:
    // 0x2932a4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2932a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2932a8:
    // 0x2932a8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2932a8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2932ac:
    // 0x2932ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2932acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2932b0:
    // 0x2932b0: 0xa1420001  sb          $v0, 0x1($t2)
    ctx->pc = 0x2932b0u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 2));
label_2932b4:
    // 0x2932b4: 0x100000e9  b           . + 4 + (0xE9 << 2)
label_2932b8:
    if (ctx->pc == 0x2932B8u) {
        ctx->pc = 0x2932B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932B4u;
        // 0x2932b8: 0xa1440000  sb          $a0, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2932BCu;
        goto label_2932bc;
    }
    ctx->pc = 0x2932B4u;
    {
        const bool branch_taken_0x2932b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2932B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2932B4u;
        // 0x2932b8: 0xa1440000  sb          $a0, 0x0($t2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2932b4) {
            ctx->pc = 0x29365Cu;
            goto label_29365c;
        }
    }
    ctx->pc = 0x2932BCu;
label_2932bc:
    // 0x2932bc: 0x91560000  lbu         $s6, 0x0($t2)
    ctx->pc = 0x2932bcu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_2932c0:
    // 0x2932c0: 0x67defff8  daddiu      $fp, $fp, -0x8
    ctx->pc = 0x2932c0u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4294967288);
label_2932c4:
    // 0x2932c4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2932c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2932c8:
    // 0x2932c8: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x2932c8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_2932cc:
    // 0x2932cc: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2932ccu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2932d0:
    // 0x2932d0: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x2932d0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_2932d4:
    // 0x2932d4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2932d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2932d8:
    // 0x2932d8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2932d8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2932dc:
    // 0x2932dc: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x2932dcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_2932e0:
    // 0x2932e0: 0x91440000  lbu         $a0, 0x0($t2)
    ctx->pc = 0x2932e0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_2932e4:
    // 0x2932e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2932e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2932e8:
    // 0x2932e8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2932e8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2932ec:
    // 0x2932ec: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x2932ecu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
label_2932f0:
    // 0x2932f0: 0x91570000  lbu         $s7, 0x0($t2)
    ctx->pc = 0x2932f0u;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_2932f4:
    // 0x2932f4: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x2932f4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_2932f8:
    // 0x2932f8: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2932f8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2932fc:
    // 0x2932fc: 0x2c4b025  or          $s6, $s6, $a0
    ctx->pc = 0x2932fcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 4));
label_293300:
    // 0x293300: 0x91420000  lbu         $v0, 0x0($t2)
    ctx->pc = 0x293300u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_293304:
    // 0x293304: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x293304u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_293308:
    // 0x293308: 0x91430000  lbu         $v1, 0x0($t2)
    ctx->pc = 0x293308u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 0)));
label_29330c:
    // 0x29330c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x29330cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_293310:
    // 0x293310: 0x91440001  lbu         $a0, 0x1($t2)
    ctx->pc = 0x293310u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 1)));
label_293314:
    // 0x293314: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x293314u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_293318:
    // 0x293318: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x293318u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_29331c:
    // 0x29331c: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x29331cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
label_293320:
    // 0x293320: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x293320u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_293324:
    // 0x293324: 0x7c0004b  bltz        $fp, . + 4 + (0x4B << 2)
label_293328:
    if (ctx->pc == 0x293328u) {
        ctx->pc = 0x293328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293324u;
        // 0x293328: 0x2e4b825  or          $s7, $s7, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x29332Cu;
        goto label_29332c;
    }
    ctx->pc = 0x293324u;
    {
        const bool branch_taken_0x293324 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x293328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293324u;
        // 0x293328: 0x2e4b825  or          $s7, $s7, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293324) {
            ctx->pc = 0x293454u;
            goto label_293454;
        }
    }
    ctx->pc = 0x29332Cu;
label_29332c:
    // 0x29332c: 0x26aa0007  addiu       $t2, $s5, 0x7
    ctx->pc = 0x29332cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 7));
label_293330:
    // 0x293330: 0x26b40001  addiu       $s4, $s5, 0x1
    ctx->pc = 0x293330u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_293334:
    // 0x293334: 0x26720004  addiu       $s2, $s3, 0x4
    ctx->pc = 0x293334u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_293338:
    // 0x293338: 0x9246fffd  lbu         $a2, -0x3($s2)
    ctx->pc = 0x293338u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967293)));
label_29333c:
    // 0x29333c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29333cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_293340:
    // 0x293340: 0x9251fffc  lbu         $s1, -0x4($s2)
    ctx->pc = 0x293340u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967292)));
label_293344:
    // 0x293344: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x293344u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_293348:
    // 0x293348: 0x9242fffe  lbu         $v0, -0x2($s2)
    ctx->pc = 0x293348u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967294)));
label_29334c:
    // 0x29334c: 0x63238  dsll        $a2, $a2, 8
    ctx->pc = 0x29334cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 8);
label_293350:
    // 0x293350: 0x9243ffff  lbu         $v1, -0x1($s2)
    ctx->pc = 0x293350u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4294967295)));
label_293354:
    // 0x293354: 0x2268825  or          $s1, $s1, $a2
    ctx->pc = 0x293354u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
label_293358:
    // 0x293358: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x293358u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_29335c:
    // 0x29335c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x29335cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_293360:
    // 0x293360: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x293360u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_293364:
    // 0x293364: 0x31e38  dsll        $v1, $v1, 24
    ctx->pc = 0x293364u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 24);
label_293368:
    // 0x293368: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x293368u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_29336c:
    // 0x29336c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x29336cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293370:
    // 0x293370: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x293370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
label_293374:
    // 0x293374: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x293374u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_293378:
    // 0x293378: 0x67defff8  daddiu      $fp, $fp, -0x8
    ctx->pc = 0x293378u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4294967288);
label_29337c:
    // 0x29337c: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x29337cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_293380:
    // 0x293380: 0x92500000  lbu         $s0, 0x0($s2)
    ctx->pc = 0x293380u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_293384:
    // 0x293384: 0x92430002  lbu         $v1, 0x2($s2)
    ctx->pc = 0x293384u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_293388:
    // 0x293388: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x293388u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_29338c:
    // 0x29338c: 0x92470003  lbu         $a3, 0x3($s2)
    ctx->pc = 0x29338cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_293390:
    // 0x293390: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x293390u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_293394:
    // 0x293394: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x293394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_293398:
    // 0x293398: 0x7faa0020  sq          $t2, 0x20($sp)
    ctx->pc = 0x293398u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 10));
label_29339c:
    // 0x29339c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x29339cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_2933a0:
    // 0x2933a0: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x2933a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
label_2933a4:
    // 0x2933a4: 0x2078025  or          $s0, $s0, $a3
    ctx->pc = 0x2933a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
label_2933a8:
    // 0x2933a8: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2933a8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2933ac:
    // 0x2933ac: 0xc0a45a0  jal         func_291680
label_2933b0:
    if (ctx->pc == 0x2933B0u) {
        ctx->pc = 0x2933B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2933ACu;
        // 0x2933b0: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2933B4u;
        goto label_2933b4;
    }
    ctx->pc = 0x2933ACu;
    SET_GPR_U32(ctx, 31, 0x2933B4u);
    ctx->pc = 0x2933B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2933ACu;
    // 0x2933b0: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291680u, 0x2933ACu, 0x2933B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2933B4u;
label_2933b4:
    // 0x2933b4: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x2933b4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2933b8:
    // 0x2933b8: 0xdfa30008  ld          $v1, 0x8($sp)
    ctx->pc = 0x2933b8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2933bc:
    // 0x2933bc: 0x566026  xor         $t4, $v0, $s6
    ctx->pc = 0x2933bcu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 22));
label_2933c0:
    // 0x2933c0: 0x7baa0020  lq          $t2, 0x20($sp)
    ctx->pc = 0x2933c0u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2933c4:
    // 0x2933c4: 0x775826  xor         $t3, $v1, $s7
    ctx->pc = 0x2933c4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 23));
label_2933c8:
    // 0x2933c8: 0xc4e3a  dsrl        $t1, $t4, 24
    ctx->pc = 0x2933c8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 12) >> 24);
label_2933cc:
    // 0x2933cc: 0x318400ff  andi        $a0, $t4, 0xFF
    ctx->pc = 0x2933ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_2933d0:
    // 0x2933d0: 0xc2a3a  dsrl        $a1, $t4, 8
    ctx->pc = 0x2933d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 12) >> 8);
label_2933d4:
    // 0x2933d4: 0xc343a  dsrl        $a2, $t4, 16
    ctx->pc = 0x2933d4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 12) >> 16);
label_2933d8:
    // 0x2933d8: 0xb423a  dsrl        $t0, $t3, 8
    ctx->pc = 0x2933d8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 11) >> 8);
label_2933dc:
    // 0x2933dc: 0xb143a  dsrl        $v0, $t3, 16
    ctx->pc = 0x2933dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 16);
label_2933e0:
    // 0x2933e0: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x2933e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_2933e4:
    // 0x2933e4: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x2933e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2933e8:
    // 0x2933e8: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x2933e8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2933ec:
    // 0x2933ec: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x2933ecu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_2933f0:
    // 0x2933f0: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x2933f0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2933f4:
    // 0x2933f4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2933f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2933f8:
    // 0x2933f8: 0xb1e3a  dsrl        $v1, $t3, 24
    ctx->pc = 0x2933f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 11) >> 24);
label_2933fc:
    // 0x2933fc: 0x316700ff  andi        $a3, $t3, 0xFF
    ctx->pc = 0x2933fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_293400:
    // 0x293400: 0xa144fff9  sb          $a0, -0x7($t2)
    ctx->pc = 0x293400u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 4294967289), (uint8_t)GPR_U32(ctx, 4));
label_293404:
    // 0x293404: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x293404u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_293408:
    // 0x293408: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x293408u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_29340c:
    // 0x29340c: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x29340cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_293410:
    // 0x293410: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x293410u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_293414:
    // 0x293414: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x293414u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_293418:
    // 0x293418: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29341c:
    // 0x29341c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x29341cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293420:
    // 0x293420: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x293420u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
label_293424:
    // 0x293424: 0xa2850000  sb          $a1, 0x0($s4)
    ctx->pc = 0x293424u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 5));
label_293428:
    // 0x293428: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293428u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29342c:
    // 0x29342c: 0xa2860001  sb          $a2, 0x1($s4)
    ctx->pc = 0x29342cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 6));
label_293430:
    // 0x293430: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x293430u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_293434:
    // 0x293434: 0xa2890002  sb          $t1, 0x2($s4)
    ctx->pc = 0x293434u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 9));
label_293438:
    // 0x293438: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x293438u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29343c:
    // 0x29343c: 0xa2870003  sb          $a3, 0x3($s4)
    ctx->pc = 0x29343cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 7));
label_293440:
    // 0x293440: 0xa2880004  sb          $t0, 0x4($s4)
    ctx->pc = 0x293440u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 8));
label_293444:
    // 0x293444: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x293444u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
label_293448:
    // 0x293448: 0x26b40001  addiu       $s4, $s5, 0x1
    ctx->pc = 0x293448u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_29344c:
    // 0x29344c: 0x7c1ffba  bgez        $fp, . + 4 + (-0x46 << 2)
label_293450:
    if (ctx->pc == 0x293450u) {
        ctx->pc = 0x293450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29344Cu;
        // 0x293450: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293454u;
        goto label_293454;
    }
    ctx->pc = 0x29344Cu;
    {
        const bool branch_taken_0x29344c = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x293450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29344Cu;
        // 0x293450: 0x254a0008  addiu       $t2, $t2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29344c) {
            ctx->pc = 0x293338u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293338;
        }
    }
    ctx->pc = 0x293454u;
label_293454:
    // 0x293454: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x293454u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_293458:
    // 0x293458: 0x13c2005b  beq         $fp, $v0, . + 4 + (0x5B << 2)
label_29345c:
    if (ctx->pc == 0x29345Cu) {
        ctx->pc = 0x29345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293458u;
        // 0x29345c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293460u;
        goto label_293460;
    }
    ctx->pc = 0x293458u;
    {
        const bool branch_taken_0x293458 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x29345Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293458u;
        // 0x29345c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293458) {
            ctx->pc = 0x2935C8u;
            goto label_2935c8;
        }
    }
    ctx->pc = 0x293460u;
label_293460:
    // 0x293460: 0x92710000  lbu         $s1, 0x0($s3)
    ctx->pc = 0x293460u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293464:
    // 0x293464: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x293464u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293468:
    // 0x293468: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x293468u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_29346c:
    // 0x29346c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x29346cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293470:
    // 0x293470: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x293470u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293474:
    // 0x293474: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x293474u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293478:
    // 0x293478: 0x92670000  lbu         $a3, 0x0($s3)
    ctx->pc = 0x293478u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_29347c:
    // 0x29347c: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x29347cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_293480:
    // 0x293480: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x293480u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293484:
    // 0x293484: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x293484u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_293488:
    // 0x293488: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x293488u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_29348c:
    // 0x29348c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x29348cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_293490:
    // 0x293490: 0x2278825  or          $s1, $s1, $a3
    ctx->pc = 0x293490u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
label_293494:
    // 0x293494: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x293494u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293498:
    // 0x293498: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x293498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_29349c:
    // 0x29349c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x29349cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2934a0:
    // 0x2934a0: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x2934a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
label_2934a4:
    // 0x2934a4: 0x92700000  lbu         $s0, 0x0($s3)
    ctx->pc = 0x2934a4u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2934a8:
    // 0x2934a8: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2934a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2934ac:
    // 0x2934ac: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2934acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2934b0:
    // 0x2934b0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2934b0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2934b4:
    // 0x2934b4: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x2934b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2934b8:
    // 0x2934b8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2934b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2934bc:
    // 0x2934bc: 0x92670001  lbu         $a3, 0x1($s3)
    ctx->pc = 0x2934bcu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_2934c0:
    // 0x2934c0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2934c0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2934c4:
    // 0x2934c4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2934c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2934c8:
    // 0x2934c8: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x2934c8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_2934cc:
    // 0x2934cc: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x2934ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
label_2934d0:
    // 0x2934d0: 0x2078025  or          $s0, $s0, $a3
    ctx->pc = 0x2934d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 7));
label_2934d4:
    // 0x2934d4: 0xc0a45a0  jal         func_291680
label_2934d8:
    if (ctx->pc == 0x2934D8u) {
        ctx->pc = 0x2934D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2934D4u;
        // 0x2934d8: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2934DCu;
        goto label_2934dc;
    }
    ctx->pc = 0x2934D4u;
    SET_GPR_U32(ctx, 31, 0x2934DCu);
    ctx->pc = 0x2934D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2934D4u;
    // 0x2934d8: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x291680u, 0x2934D4u, 0x2934DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2934DCu;
label_2934dc:
    // 0x2934dc: 0xdfa30000  ld          $v1, 0x0($sp)
    ctx->pc = 0x2934dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2934e0:
    // 0x2934e0: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x2934e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
label_2934e4:
    // 0x2934e4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2934e4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2934e8:
    // 0x2934e8: 0xdfa40008  ld          $a0, 0x8($sp)
    ctx->pc = 0x2934e8u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2934ec:
    // 0x2934ec: 0x67ca0007  daddiu      $t2, $fp, 0x7
    ctx->pc = 0x2934ecu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)7);
label_2934f0:
    // 0x2934f0: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x2934f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2934f4:
    // 0x2934f4: 0x766026  xor         $t4, $v1, $s6
    ctx->pc = 0x2934f4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 22));
label_2934f8:
    // 0x2934f8: 0x975826  xor         $t3, $a0, $s7
    ctx->pc = 0x2934f8u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 23));
label_2934fc:
    // 0x2934fc: 0x2d430008  sltiu       $v1, $t2, 0x8
    ctx->pc = 0x2934fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_293500:
    // 0x293500: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_293504:
    if (ctx->pc == 0x293504u) {
        ctx->pc = 0x293504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293500u;
        // 0x293504: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293508u;
        goto label_293508;
    }
    ctx->pc = 0x293500u;
    {
        const bool branch_taken_0x293500 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293500u;
        // 0x293504: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293500) {
            ctx->pc = 0x2935C0u;
            goto label_2935c0;
        }
    }
    ctx->pc = 0x293508u;
label_293508:
    // 0x293508: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x293508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
label_29350c:
    // 0x29350c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x29350cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_293510:
    // 0x293510: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x293510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_293514:
    // 0x293514: 0x2463b3a0  addiu       $v1, $v1, -0x4C60
    ctx->pc = 0x293514u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947744));
label_293518:
    // 0x293518: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x293518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29351c:
    // 0x29351c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29351cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_293520:
    // 0x293520: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x293520u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_293524:
    // 0x293524: 0x800008  jr          $a0
label_293528:
    if (ctx->pc == 0x293528u) {
        ctx->pc = 0x29352Cu;
        goto label_29352c;
    }
    ctx->pc = 0x293524u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293524u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x29352Cu;
label_29352c:
    // 0x29352c: 0xb163a  dsrl        $v0, $t3, 24
    ctx->pc = 0x29352cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 24);
label_293530:
    // 0x293530: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x293530u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293534:
    // 0x293534: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293534u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293538:
    // 0x293538: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293538u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29353c:
    // 0x29353c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x29353cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293540:
    // 0x293540: 0xb143a  dsrl        $v0, $t3, 16
    ctx->pc = 0x293540u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 16);
label_293544:
    // 0x293544: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x293544u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293548:
    // 0x293548: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293548u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29354c:
    // 0x29354c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29354cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293550:
    // 0x293550: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293550u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293554:
    // 0x293554: 0xb123a  dsrl        $v0, $t3, 8
    ctx->pc = 0x293554u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 8);
label_293558:
    // 0x293558: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x293558u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_29355c:
    // 0x29355c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29355cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293560:
    // 0x293560: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293564:
    // 0x293564: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293564u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293568:
    // 0x293568: 0x316200ff  andi        $v0, $t3, 0xFF
    ctx->pc = 0x293568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_29356c:
    // 0x29356c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x29356cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293570:
    // 0x293570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293574:
    // 0x293574: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293574u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293578:
    // 0x293578: 0xc163a  dsrl        $v0, $t4, 24
    ctx->pc = 0x293578u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) >> 24);
label_29357c:
    // 0x29357c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x29357cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293580:
    // 0x293580: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293584:
    // 0x293584: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293584u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293588:
    // 0x293588: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293588u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_29358c:
    // 0x29358c: 0xc143a  dsrl        $v0, $t4, 16
    ctx->pc = 0x29358cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) >> 16);
label_293590:
    // 0x293590: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x293590u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293594:
    // 0x293594: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293598:
    // 0x293598: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293598u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29359c:
    // 0x29359c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x29359cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_2935a0:
    // 0x2935a0: 0xc123a  dsrl        $v0, $t4, 8
    ctx->pc = 0x2935a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) >> 8);
label_2935a4:
    // 0x2935a4: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x2935a4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2935a8:
    // 0x2935a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2935a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2935ac:
    // 0x2935ac: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2935acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2935b0:
    // 0x2935b0: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2935b0u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_2935b4:
    // 0x2935b4: 0x318200ff  andi        $v0, $t4, 0xFF
    ctx->pc = 0x2935b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_2935b8:
    // 0x2935b8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2935b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2935bc:
    // 0x2935bc: 0xa2a2ffff  sb          $v0, -0x1($s5)
    ctx->pc = 0x2935bcu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294967295), (uint8_t)GPR_U32(ctx, 2));
label_2935c0:
    // 0x2935c0: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x2935c0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2935c4:
    // 0x2935c4: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x2935c4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2935c8:
    // 0x2935c8: 0x8faa0014  lw          $t2, 0x14($sp)
    ctx->pc = 0x2935c8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2935cc:
    // 0x2935cc: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x2935ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_2935d0:
    // 0x2935d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2935d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2935d4:
    // 0x2935d4: 0x161a3a  dsrl        $v1, $s6, 8
    ctx->pc = 0x2935d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> 8);
label_2935d8:
    // 0x2935d8: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x2935d8u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_2935dc:
    // 0x2935dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2935dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2935e0:
    // 0x2935e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2935e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2935e4:
    // 0x2935e4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2935e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2935e8:
    // 0x2935e8: 0x16143a  dsrl        $v0, $s6, 16
    ctx->pc = 0x2935e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> 16);
label_2935ec:
    // 0x2935ec: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x2935ecu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
label_2935f0:
    // 0x2935f0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2935f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2935f4:
    // 0x2935f4: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x2935f4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_2935f8:
    // 0x2935f8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2935f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2935fc:
    // 0x2935fc: 0x161e3a  dsrl        $v1, $s6, 24
    ctx->pc = 0x2935fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> 24);
label_293600:
    // 0x293600: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x293600u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_293604:
    // 0x293604: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293608:
    // 0x293608: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29360c:
    // 0x29360c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x29360cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_293610:
    // 0x293610: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x293610u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
label_293614:
    // 0x293614: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x293614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_293618:
    // 0x293618: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_29361c:
    // 0x29361c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x29361cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_293620:
    // 0x293620: 0x171a3a  dsrl        $v1, $s7, 8
    ctx->pc = 0x293620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) >> 8);
label_293624:
    // 0x293624: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x293624u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_293628:
    // 0x293628: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29362c:
    // 0x29362c: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x29362cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_293630:
    // 0x293630: 0x17263a  dsrl        $a0, $s7, 24
    ctx->pc = 0x293630u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) >> 24);
label_293634:
    // 0x293634: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293634u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293638:
    // 0x293638: 0x17143a  dsrl        $v0, $s7, 16
    ctx->pc = 0x293638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) >> 16);
label_29363c:
    // 0x29363c: 0xa1430000  sb          $v1, 0x0($t2)
    ctx->pc = 0x29363cu;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 3));
label_293640:
    // 0x293640: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293640u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293644:
    // 0x293644: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x293644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293648:
    // 0x293648: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x293648u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
label_29364c:
    // 0x29364c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x29364cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293650:
    // 0x293650: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x293650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293654:
    // 0x293654: 0xa1420000  sb          $v0, 0x0($t2)
    ctx->pc = 0x293654u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 2));
label_293658:
    // 0x293658: 0xa1440001  sb          $a0, 0x1($t2)
    ctx->pc = 0x293658u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 1), (uint8_t)GPR_U32(ctx, 4));
label_29365c:
    // 0x29365c: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x29365cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_293660:
    // 0x293660: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x293660u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_293664:
    // 0x293664: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x293664u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_293668:
    // 0x293668: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x293668u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_29366c:
    // 0x29366c: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x29366cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_293670:
    // 0x293670: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x293670u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_293674:
    // 0x293674: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x293674u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_293678:
    // 0x293678: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x293678u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29367c:
    // 0x29367c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x29367cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_293680:
    // 0x293680: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x293680u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_293684:
    // 0x293684: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x293684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_293688:
    // 0x293688: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x293688u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_29368c:
    // 0x29368c: 0x3e00008  jr          $ra
label_293690:
    if (ctx->pc == 0x293690u) {
        ctx->pc = 0x293690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29368Cu;
        // 0x293690: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293694u;
        goto label_293694;
    }
    ctx->pc = 0x29368Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29368Cu;
        // 0x293690: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29368Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293694u;
label_293694:
    // 0x293694: 0x0  nop
    ctx->pc = 0x293694u;
    // NOP
label_293698:
    // 0x293698: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x293698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_29369c:
    // 0x29369c: 0xafaa001c  sw          $t2, 0x1C($sp)
    ctx->pc = 0x29369cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 28), GPR_U32(ctx, 10));
label_2936a0:
    // 0x2936a0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x2936a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_2936a4:
    // 0x2936a4: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2936a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_2936a8:
    // 0x2936a8: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2936a8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2936ac:
    // 0x2936ac: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2936acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_2936b0:
    // 0x2936b0: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x2936b0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2936b4:
    // 0x2936b4: 0xafa90018  sw          $t1, 0x18($sp)
    ctx->pc = 0x2936b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 9));
label_2936b8:
    // 0x2936b8: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2936b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2936bc:
    // 0x2936bc: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x2936bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_2936c0:
    // 0x2936c0: 0x140482d  daddu       $t1, $t2, $zero
    ctx->pc = 0x2936c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2936c4:
    // 0x2936c4: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x2936c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_2936c8:
    // 0x2936c8: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2936c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_2936cc:
    // 0x2936cc: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2936ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_2936d0:
    // 0x2936d0: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2936d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2936d4:
    // 0x2936d4: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2936d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_2936d8:
    // 0x2936d8: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2936d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2936dc:
    // 0x2936dc: 0xafa70010  sw          $a3, 0x10($sp)
    ctx->pc = 0x2936dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 7));
label_2936e0:
    // 0x2936e0: 0x116000ea  beqz        $t3, . + 4 + (0xEA << 2)
label_2936e4:
    if (ctx->pc == 0x2936E4u) {
        ctx->pc = 0x2936E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936E0u;
        // 0x2936e4: 0xafa80014  sw          $t0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2936E8u;
        goto label_2936e8;
    }
    ctx->pc = 0x2936E0u;
    {
        const bool branch_taken_0x2936e0 = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x2936E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2936E0u;
        // 0x2936e4: 0xafa80014  sw          $t0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2936e0) {
            ctx->pc = 0x293A8Cu;
            goto label_293a8c;
        }
    }
    ctx->pc = 0x2936E8u;
label_2936e8:
    // 0x2936e8: 0x912b0000  lbu         $t3, 0x0($t1)
    ctx->pc = 0x2936e8u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2936ec:
    // 0x2936ec: 0x67defff8  daddiu      $fp, $fp, -0x8
    ctx->pc = 0x2936ecu;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4294967288);
label_2936f0:
    // 0x2936f0: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2936f0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2936f4:
    // 0x2936f4: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x2936f4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_2936f8:
    // 0x2936f8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x2936f8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_2936fc:
    // 0x2936fc: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x2936fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293700:
    // 0x293700: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x293700u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_293704:
    // 0x293704: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293704u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293708:
    // 0x293708: 0x1625825  or          $t3, $t3, $v0
    ctx->pc = 0x293708u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 2));
label_29370c:
    // 0x29370c: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x29370cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293710:
    // 0x293710: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x293710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_293714:
    // 0x293714: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293714u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293718:
    // 0x293718: 0x1635825  or          $t3, $t3, $v1
    ctx->pc = 0x293718u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 3));
label_29371c:
    // 0x29371c: 0x912a0000  lbu         $t2, 0x0($t1)
    ctx->pc = 0x29371cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293720:
    // 0x293720: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x293720u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_293724:
    // 0x293724: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293724u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293728:
    // 0x293728: 0x1645825  or          $t3, $t3, $a0
    ctx->pc = 0x293728u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 4));
label_29372c:
    // 0x29372c: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x29372cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293730:
    // 0x293730: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293730u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293734:
    // 0x293734: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x293734u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293738:
    // 0x293738: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x293738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_29373c:
    // 0x29373c: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x29373cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_293740:
    // 0x293740: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x293740u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
label_293744:
    // 0x293744: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x293744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_293748:
    // 0x293748: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x293748u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
label_29374c:
    // 0x29374c: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x29374cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_293750:
    // 0x293750: 0x7c00049  bltz        $fp, . + 4 + (0x49 << 2)
label_293754:
    if (ctx->pc == 0x293754u) {
        ctx->pc = 0x293754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293750u;
        // 0x293754: 0x1445025  or          $t2, $t2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293758u;
        goto label_293758;
    }
    ctx->pc = 0x293750u;
    {
        const bool branch_taken_0x293750 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x293754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293750u;
        // 0x293754: 0x1445025  or          $t2, $t2, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293750) {
            ctx->pc = 0x293878u;
            goto label_293878;
        }
    }
    ctx->pc = 0x293758u;
label_293758:
    // 0x293758: 0x26b60007  addiu       $s6, $s5, 0x7
    ctx->pc = 0x293758u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 7));
label_29375c:
    // 0x29375c: 0x26b40001  addiu       $s4, $s5, 0x1
    ctx->pc = 0x29375cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_293760:
    // 0x293760: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x293760u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_293764:
    // 0x293764: 0x0  nop
    ctx->pc = 0x293764u;
    // NOP
label_293768:
    // 0x293768: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x293768u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_29376c:
    // 0x29376c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x29376cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_293770:
    // 0x293770: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x293770u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_293774:
    // 0x293774: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x293774u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_293778:
    // 0x293778: 0x92480005  lbu         $t0, 0x5($s2)
    ctx->pc = 0x293778u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_29377c:
    // 0x29377c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x29377cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_293780:
    // 0x293780: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x293780u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_293784:
    // 0x293784: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x293784u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_293788:
    // 0x293788: 0x92500004  lbu         $s0, 0x4($s2)
    ctx->pc = 0x293788u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_29378c:
    // 0x29378c: 0x84238  dsll        $t0, $t0, 8
    ctx->pc = 0x29378cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 8);
label_293790:
    // 0x293790: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x293790u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_293794:
    // 0x293794: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x293794u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_293798:
    // 0x293798: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x293798u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_29379c:
    // 0x29379c: 0x2088025  or          $s0, $s0, $t0
    ctx->pc = 0x29379cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 8));
label_2937a0:
    // 0x2937a0: 0x92420007  lbu         $v0, 0x7($s2)
    ctx->pc = 0x2937a0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_2937a4:
    // 0x2937a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x2937a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_2937a8:
    // 0x2937a8: 0x2278825  or          $s1, $s1, $a3
    ctx->pc = 0x2937a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
label_2937ac:
    // 0x2937ac: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x2937acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
label_2937b0:
    // 0x2937b0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x2937b0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_2937b4:
    // 0x2937b4: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x2937b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_2937b8:
    // 0x2937b8: 0x2268825  or          $s1, $s1, $a2
    ctx->pc = 0x2937b8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
label_2937bc:
    // 0x2937bc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2937bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2937c0:
    // 0x2937c0: 0x22b8826  xor         $s1, $s1, $t3
    ctx->pc = 0x2937c0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 11));
label_2937c4:
    // 0x2937c4: 0x20a8026  xor         $s0, $s0, $t2
    ctx->pc = 0x2937c4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 10));
label_2937c8:
    // 0x2937c8: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2937c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2937cc:
    // 0x2937cc: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x2937ccu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2937d0:
    // 0x2937d0: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x2937d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_2937d4:
    // 0x2937d4: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x2937d4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2937d8:
    // 0x2937d8: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x2937d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2937dc:
    // 0x2937dc: 0x67defff8  daddiu      $fp, $fp, -0x8
    ctx->pc = 0x2937dcu;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4294967288);
label_2937e0:
    // 0x2937e0: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x2937e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
label_2937e4:
    // 0x2937e4: 0xc0a4adc  jal         func_292B70
label_2937e8:
    if (ctx->pc == 0x2937E8u) {
        ctx->pc = 0x2937E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2937E4u;
        // 0x2937e8: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2937ECu;
        goto label_2937ec;
    }
    ctx->pc = 0x2937E4u;
    SET_GPR_U32(ctx, 31, 0x2937ECu);
    ctx->pc = 0x2937E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2937E4u;
    // 0x2937e8: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292B70u, 0x2937E4u, 0x2937ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2937ECu;
label_2937ec:
    // 0x2937ec: 0xdfab0000  ld          $t3, 0x0($sp)
    ctx->pc = 0x2937ecu;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2937f0:
    // 0x2937f0: 0xdfaa0008  ld          $t2, 0x8($sp)
    ctx->pc = 0x2937f0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2937f4:
    // 0x2937f4: 0x316e00ff  andi        $t6, $t3, 0xFF
    ctx->pc = 0x2937f4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_2937f8:
    // 0x2937f8: 0xb623a  dsrl        $t4, $t3, 8
    ctx->pc = 0x2937f8u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) >> 8);
label_2937fc:
    // 0x2937fc: 0x31c200ff  andi        $v0, $t6, 0xFF
    ctx->pc = 0x2937fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_293800:
    // 0x293800: 0xb243a  dsrl        $a0, $t3, 16
    ctx->pc = 0x293800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) >> 16);
label_293804:
    // 0x293804: 0xb2e3a  dsrl        $a1, $t3, 24
    ctx->pc = 0x293804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) >> 24);
label_293808:
    // 0x293808: 0xa323a  dsrl        $a2, $t2, 8
    ctx->pc = 0x293808u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) >> 8);
label_29380c:
    // 0x29380c: 0xa3c3a  dsrl        $a3, $t2, 16
    ctx->pc = 0x29380cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) >> 16);
label_293810:
    // 0x293810: 0xa2c2fff9  sb          $v0, -0x7($s6)
    ctx->pc = 0x293810u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 4294967289), (uint8_t)GPR_U32(ctx, 2));
label_293814:
    // 0x293814: 0x318300ff  andi        $v1, $t4, 0xFF
    ctx->pc = 0x293814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_293818:
    // 0x293818: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x293818u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_29381c:
    // 0x29381c: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x29381cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_293820:
    // 0x293820: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x293820u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_293824:
    // 0x293824: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x293824u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_293828:
    // 0x293828: 0x314800ff  andi        $t0, $t2, 0xFF
    ctx->pc = 0x293828u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_29382c:
    // 0x29382c: 0xa6e3a  dsrl        $t5, $t2, 24
    ctx->pc = 0x29382cu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) >> 24);
label_293830:
    // 0x293830: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293830u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293834:
    // 0x293834: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x293834u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293838:
    // 0x293838: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x293838u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_29383c:
    // 0x29383c: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x29383cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_293840:
    // 0x293840: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x293840u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_293844:
    // 0x293844: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x293844u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_293848:
    // 0x293848: 0x31a200ff  andi        $v0, $t5, 0xFF
    ctx->pc = 0x293848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
label_29384c:
    // 0x29384c: 0xa2830000  sb          $v1, 0x0($s4)
    ctx->pc = 0x29384cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 3));
label_293850:
    // 0x293850: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293854:
    // 0x293854: 0xa2840001  sb          $a0, 0x1($s4)
    ctx->pc = 0x293854u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 4));
label_293858:
    // 0x293858: 0xa2850002  sb          $a1, 0x2($s4)
    ctx->pc = 0x293858u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 5));
label_29385c:
    // 0x29385c: 0xa2880003  sb          $t0, 0x3($s4)
    ctx->pc = 0x29385cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 8));
label_293860:
    // 0x293860: 0xa2860004  sb          $a2, 0x4($s4)
    ctx->pc = 0x293860u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 6));
label_293864:
    // 0x293864: 0xa2870005  sb          $a3, 0x5($s4)
    ctx->pc = 0x293864u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 7));
label_293868:
    // 0x293868: 0xa2c20000  sb          $v0, 0x0($s6)
    ctx->pc = 0x293868u;
    WRITE8(ADD32(GPR_U32(ctx, 22), 0), (uint8_t)GPR_U32(ctx, 2));
label_29386c:
    // 0x29386c: 0x26940008  addiu       $s4, $s4, 0x8
    ctx->pc = 0x29386cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 8));
label_293870:
    // 0x293870: 0x7c1ffbd  bgez        $fp, . + 4 + (-0x43 << 2)
label_293874:
    if (ctx->pc == 0x293874u) {
        ctx->pc = 0x293874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293870u;
        // 0x293874: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293878u;
        goto label_293878;
    }
    ctx->pc = 0x293870u;
    {
        const bool branch_taken_0x293870 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x293874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293870u;
        // 0x293874: 0x26d60008  addiu       $s6, $s6, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293870) {
            ctx->pc = 0x293768u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293768;
        }
    }
    ctx->pc = 0x293878u;
label_293878:
    // 0x293878: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x293878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_29387c:
    // 0x29387c: 0x13c2005d  beq         $fp, $v0, . + 4 + (0x5D << 2)
label_293880:
    if (ctx->pc == 0x293880u) {
        ctx->pc = 0x293880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29387Cu;
        // 0x293880: 0x67c60007  daddiu      $a2, $fp, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        ctx->pc = 0x293884u;
        goto label_293884;
    }
    ctx->pc = 0x29387Cu;
    {
        const bool branch_taken_0x29387c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x293880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29387Cu;
        // 0x293880: 0x67c60007  daddiu      $a2, $fp, 0x7 (Delay Slot)
        SET_GPR_S64(ctx, 6, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)7);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29387c) {
            ctx->pc = 0x2939F4u;
            goto label_2939f4;
        }
    }
    ctx->pc = 0x293884u;
label_293884:
    // 0x293884: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x293884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
label_293888:
    // 0x293888: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293888u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_29388c:
    // 0x29388c: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x29388cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_293890:
    // 0x293890: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x293890u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_293894:
    // 0x293894: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x293894u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_293898:
    // 0x293898: 0x2cc20008  sltiu       $v0, $a2, 0x8
    ctx->pc = 0x293898u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_29389c:
    // 0x29389c: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2938a0:
    if (ctx->pc == 0x2938A0u) {
        ctx->pc = 0x2938A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29389Cu;
        // 0x2938a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2938A4u;
        goto label_2938a4;
    }
    ctx->pc = 0x29389Cu;
    {
        const bool branch_taken_0x29389c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2938A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29389Cu;
        // 0x2938a0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29389c) {
            ctx->pc = 0x293934u;
            goto label_293934;
        }
    }
    ctx->pc = 0x2938A4u;
label_2938a4:
    // 0x2938a4: 0x6103c  dsll32      $v0, $a2, 0
    ctx->pc = 0x2938a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) << (32 + 0));
label_2938a8:
    // 0x2938a8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2938a8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2938ac:
    // 0x2938ac: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2938acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2938b0:
    // 0x2938b0: 0x2463b3c0  addiu       $v1, $v1, -0x4C40
    ctx->pc = 0x2938b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947776));
label_2938b4:
    // 0x2938b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2938b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2938b8:
    // 0x2938b8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2938b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2938bc:
    // 0x2938bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2938bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2938c0:
    // 0x2938c0: 0x800008  jr          $a0
label_2938c4:
    if (ctx->pc == 0x2938C4u) {
        ctx->pc = 0x2938C8u;
        goto label_2938c8;
    }
    ctx->pc = 0x2938C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2938C0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2938C8u;
label_2938c8:
    // 0x2938c8: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2938c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2938cc:
    // 0x2938cc: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2938ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2938d0:
    // 0x2938d0: 0x28638  dsll        $s0, $v0, 24
    ctx->pc = 0x2938d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << 24);
label_2938d4:
    // 0x2938d4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2938d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2938d8:
    // 0x2938d8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2938d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2938dc:
    // 0x2938dc: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x2938dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_2938e0:
    // 0x2938e0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2938e0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2938e4:
    // 0x2938e4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2938e4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2938e8:
    // 0x2938e8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2938e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2938ec:
    // 0x2938ec: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2938ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2938f0:
    // 0x2938f0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2938f0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2938f4:
    // 0x2938f4: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x2938f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2938f8:
    // 0x2938f8: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x2938f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_2938fc:
    // 0x2938fc: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2938fcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_293900:
    // 0x293900: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x293900u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_293904:
    // 0x293904: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x293904u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293908:
    // 0x293908: 0x28e38  dsll        $s1, $v0, 24
    ctx->pc = 0x293908u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << 24);
label_29390c:
    // 0x29390c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x29390cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_293910:
    // 0x293910: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x293910u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293914:
    // 0x293914: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x293914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
label_293918:
    // 0x293918: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x293918u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_29391c:
    // 0x29391c: 0x2673ffff  addiu       $s3, $s3, -0x1
    ctx->pc = 0x29391cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_293920:
    // 0x293920: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x293920u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293924:
    // 0x293924: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x293924u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_293928:
    // 0x293928: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x293928u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_29392c:
    // 0x29392c: 0x9262ffff  lbu         $v0, -0x1($s3)
    ctx->pc = 0x29392cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 4294967295)));
label_293930:
    // 0x293930: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x293930u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_293934:
    // 0x293934: 0x22b8826  xor         $s1, $s1, $t3
    ctx->pc = 0x293934u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 11));
label_293938:
    // 0x293938: 0x20a8026  xor         $s0, $s0, $t2
    ctx->pc = 0x293938u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 10));
label_29393c:
    // 0x29393c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x29393cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_293940:
    // 0x293940: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x293940u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_293944:
    // 0x293944: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x293944u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_293948:
    // 0x293948: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x293948u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_29394c:
    // 0x29394c: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x29394cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
label_293950:
    // 0x293950: 0xc0a4adc  jal         func_292B70
label_293954:
    if (ctx->pc == 0x293954u) {
        ctx->pc = 0x293954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293950u;
        // 0x293954: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293958u;
        goto label_293958;
    }
    ctx->pc = 0x293950u;
    SET_GPR_U32(ctx, 31, 0x293958u);
    ctx->pc = 0x293954u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293950u;
    // 0x293954: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292B70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x292B70u, 0x293950u, 0x293958u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x293958u;
label_293958:
    // 0x293958: 0xdfab0000  ld          $t3, 0x0($sp)
    ctx->pc = 0x293958u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29395c:
    // 0x29395c: 0xdfaa0008  ld          $t2, 0x8($sp)
    ctx->pc = 0x29395cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_293960:
    // 0x293960: 0x316e00ff  andi        $t6, $t3, 0xFF
    ctx->pc = 0x293960u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_293964:
    // 0x293964: 0xb623a  dsrl        $t4, $t3, 8
    ctx->pc = 0x293964u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) >> 8);
label_293968:
    // 0x293968: 0x31c300ff  andi        $v1, $t6, 0xFF
    ctx->pc = 0x293968u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_29396c:
    // 0x29396c: 0x318200ff  andi        $v0, $t4, 0xFF
    ctx->pc = 0x29396cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_293970:
    // 0x293970: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x293970u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_293974:
    // 0x293974: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293978:
    // 0x293978: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x293978u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_29397c:
    // 0x29397c: 0xb243a  dsrl        $a0, $t3, 16
    ctx->pc = 0x29397cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) >> 16);
label_293980:
    // 0x293980: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293980u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293984:
    // 0x293984: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x293984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293988:
    // 0x293988: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293988u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_29398c:
    // 0x29398c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x29398cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_293990:
    // 0x293990: 0xb2e3a  dsrl        $a1, $t3, 24
    ctx->pc = 0x293990u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) >> 24);
label_293994:
    // 0x293994: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x293994u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_293998:
    // 0x293998: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x293998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_29399c:
    // 0x29399c: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x29399cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2939a0:
    // 0x2939a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2939a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2939a4:
    // 0x2939a4: 0x314800ff  andi        $t0, $t2, 0xFF
    ctx->pc = 0x2939a4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_2939a8:
    // 0x2939a8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2939a8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_2939ac:
    // 0x2939ac: 0x310300ff  andi        $v1, $t0, 0xFF
    ctx->pc = 0x2939acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_2939b0:
    // 0x2939b0: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2939b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2939b4:
    // 0x2939b4: 0xa323a  dsrl        $a2, $t2, 8
    ctx->pc = 0x2939b4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) >> 8);
label_2939b8:
    // 0x2939b8: 0xa2a30000  sb          $v1, 0x0($s5)
    ctx->pc = 0x2939b8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
label_2939bc:
    // 0x2939bc: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x2939bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_2939c0:
    // 0x2939c0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2939c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2939c4:
    // 0x2939c4: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2939c4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2939c8:
    // 0x2939c8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x2939c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_2939cc:
    // 0x2939cc: 0xa6e3a  dsrl        $t5, $t2, 24
    ctx->pc = 0x2939ccu;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) >> 24);
label_2939d0:
    // 0x2939d0: 0xa3c3a  dsrl        $a3, $t2, 16
    ctx->pc = 0x2939d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) >> 16);
label_2939d4:
    // 0x2939d4: 0x31a200ff  andi        $v0, $t5, 0xFF
    ctx->pc = 0x2939d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
label_2939d8:
    // 0x2939d8: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x2939d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_2939dc:
    // 0x2939dc: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2939dcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2939e0:
    // 0x2939e0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2939e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2939e4:
    // 0x2939e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2939e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2939e8:
    // 0x2939e8: 0xa2a20001  sb          $v0, 0x1($s5)
    ctx->pc = 0x2939e8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 1), (uint8_t)GPR_U32(ctx, 2));
label_2939ec:
    // 0x2939ec: 0x10000009  b           . + 4 + (0x9 << 2)
label_2939f0:
    if (ctx->pc == 0x2939F0u) {
        ctx->pc = 0x2939F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939ECu;
        // 0x2939f0: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2939F4u;
        goto label_2939f4;
    }
    ctx->pc = 0x2939ECu;
    {
        const bool branch_taken_0x2939ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2939F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2939ECu;
        // 0x2939f0: 0xa2a30000  sb          $v1, 0x0($s5) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2939ec) {
            ctx->pc = 0x293A14u;
            goto label_293a14;
        }
    }
    ctx->pc = 0x2939F4u;
label_2939f4:
    // 0x2939f4: 0xb2e3a  dsrl        $a1, $t3, 24
    ctx->pc = 0x2939f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) >> 24);
label_2939f8:
    // 0x2939f8: 0xa6e3a  dsrl        $t5, $t2, 24
    ctx->pc = 0x2939f8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) >> 24);
label_2939fc:
    // 0x2939fc: 0x316e00ff  andi        $t6, $t3, 0xFF
    ctx->pc = 0x2939fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_293a00:
    // 0x293a00: 0xb623a  dsrl        $t4, $t3, 8
    ctx->pc = 0x293a00u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 11) >> 8);
label_293a04:
    // 0x293a04: 0xb243a  dsrl        $a0, $t3, 16
    ctx->pc = 0x293a04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) >> 16);
label_293a08:
    // 0x293a08: 0x314800ff  andi        $t0, $t2, 0xFF
    ctx->pc = 0x293a08u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_293a0c:
    // 0x293a0c: 0xa323a  dsrl        $a2, $t2, 8
    ctx->pc = 0x293a0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 10) >> 8);
label_293a10:
    // 0x293a10: 0xa3c3a  dsrl        $a3, $t2, 16
    ctx->pc = 0x293a10u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) >> 16);
label_293a14:
    // 0x293a14: 0x8fa9001c  lw          $t1, 0x1C($sp)
    ctx->pc = 0x293a14u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_293a18:
    // 0x293a18: 0x31c300ff  andi        $v1, $t6, 0xFF
    ctx->pc = 0x293a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
label_293a1c:
    // 0x293a1c: 0x318200ff  andi        $v0, $t4, 0xFF
    ctx->pc = 0x293a1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 12) & (uint64_t)(uint16_t)255);
label_293a20:
    // 0x293a20: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x293a20u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_293a24:
    // 0x293a24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293a28:
    // 0x293a28: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293a28u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293a2c:
    // 0x293a2c: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x293a2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293a30:
    // 0x293a30: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x293a30u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
label_293a34:
    // 0x293a34: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293a34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293a38:
    // 0x293a38: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293a38u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293a3c:
    // 0x293a3c: 0x30a200ff  andi        $v0, $a1, 0xFF
    ctx->pc = 0x293a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_293a40:
    // 0x293a40: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x293a40u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_293a44:
    // 0x293a44: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293a48:
    // 0x293a48: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293a48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293a4c:
    // 0x293a4c: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x293a4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_293a50:
    // 0x293a50: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x293a50u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
label_293a54:
    // 0x293a54: 0x30c300ff  andi        $v1, $a2, 0xFF
    ctx->pc = 0x293a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_293a58:
    // 0x293a58: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293a58u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293a5c:
    // 0x293a5c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293a60:
    // 0x293a60: 0xa1240000  sb          $a0, 0x0($t1)
    ctx->pc = 0x293a60u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
label_293a64:
    // 0x293a64: 0x31a200ff  andi        $v0, $t5, 0xFF
    ctx->pc = 0x293a64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)255);
label_293a68:
    // 0x293a68: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293a68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293a6c:
    // 0x293a6c: 0x30e400ff  andi        $a0, $a3, 0xFF
    ctx->pc = 0x293a6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_293a70:
    // 0x293a70: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x293a70u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_293a74:
    // 0x293a74: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x293a74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293a78:
    // 0x293a78: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293a78u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293a7c:
    // 0x293a7c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293a7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293a80:
    // 0x293a80: 0xa1220001  sb          $v0, 0x1($t1)
    ctx->pc = 0x293a80u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 2));
label_293a84:
    // 0x293a84: 0x100000eb  b           . + 4 + (0xEB << 2)
label_293a88:
    if (ctx->pc == 0x293A88u) {
        ctx->pc = 0x293A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A84u;
        // 0x293a88: 0xa1240000  sb          $a0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293A8Cu;
        goto label_293a8c;
    }
    ctx->pc = 0x293A84u;
    {
        const bool branch_taken_0x293a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x293A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293A84u;
        // 0x293a88: 0xa1240000  sb          $a0, 0x0($t1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293a84) {
            ctx->pc = 0x293E34u;
            goto label_293e34;
        }
    }
    ctx->pc = 0x293A8Cu;
label_293a8c:
    // 0x293a8c: 0x91360000  lbu         $s6, 0x0($t1)
    ctx->pc = 0x293a8cu;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293a90:
    // 0x293a90: 0x67defff8  daddiu      $fp, $fp, -0x8
    ctx->pc = 0x293a90u;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4294967288);
label_293a94:
    // 0x293a94: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293a94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293a98:
    // 0x293a98: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x293a98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293a9c:
    // 0x293a9c: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293a9cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293aa0:
    // 0x293aa0: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x293aa0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293aa4:
    // 0x293aa4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x293aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_293aa8:
    // 0x293aa8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293aa8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293aac:
    // 0x293aac: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x293aacu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_293ab0:
    // 0x293ab0: 0x91240000  lbu         $a0, 0x0($t1)
    ctx->pc = 0x293ab0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293ab4:
    // 0x293ab4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x293ab4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_293ab8:
    // 0x293ab8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293ab8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293abc:
    // 0x293abc: 0x2c3b025  or          $s6, $s6, $v1
    ctx->pc = 0x293abcu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
label_293ac0:
    // 0x293ac0: 0x91370000  lbu         $s7, 0x0($t1)
    ctx->pc = 0x293ac0u;
    SET_GPR_U32(ctx, 23, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293ac4:
    // 0x293ac4: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x293ac4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_293ac8:
    // 0x293ac8: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293ac8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293acc:
    // 0x293acc: 0x2c4b025  or          $s6, $s6, $a0
    ctx->pc = 0x293accu;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 4));
label_293ad0:
    // 0x293ad0: 0x91220000  lbu         $v0, 0x0($t1)
    ctx->pc = 0x293ad0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293ad4:
    // 0x293ad4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293ad4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293ad8:
    // 0x293ad8: 0x91230000  lbu         $v1, 0x0($t1)
    ctx->pc = 0x293ad8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
label_293adc:
    // 0x293adc: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x293adcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_293ae0:
    // 0x293ae0: 0x91240001  lbu         $a0, 0x1($t1)
    ctx->pc = 0x293ae0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 9), 1)));
label_293ae4:
    // 0x293ae4: 0x2e2b825  or          $s7, $s7, $v0
    ctx->pc = 0x293ae4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 2));
label_293ae8:
    // 0x293ae8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x293ae8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_293aec:
    // 0x293aec: 0x2e3b825  or          $s7, $s7, $v1
    ctx->pc = 0x293aecu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 3));
label_293af0:
    // 0x293af0: 0x42638  dsll        $a0, $a0, 24
    ctx->pc = 0x293af0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 24);
label_293af4:
    // 0x293af4: 0x7c0004c  bltz        $fp, . + 4 + (0x4C << 2)
label_293af8:
    if (ctx->pc == 0x293AF8u) {
        ctx->pc = 0x293AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AF4u;
        // 0x293af8: 0x2e4b825  or          $s7, $s7, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293AFCu;
        goto label_293afc;
    }
    ctx->pc = 0x293AF4u;
    {
        const bool branch_taken_0x293af4 = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x293AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293AF4u;
        // 0x293af8: 0x2e4b825  or          $s7, $s7, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293af4) {
            ctx->pc = 0x293C28u;
            goto label_293c28;
        }
    }
    ctx->pc = 0x293AFCu;
label_293afc:
    // 0x293afc: 0x26ac0007  addiu       $t4, $s5, 0x7
    ctx->pc = 0x293afcu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 21), 7));
label_293b00:
    // 0x293b00: 0x26b40001  addiu       $s4, $s5, 0x1
    ctx->pc = 0x293b00u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_293b04:
    // 0x293b04: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x293b04u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_293b08:
    // 0x293b08: 0x92420001  lbu         $v0, 0x1($s2)
    ctx->pc = 0x293b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 1)));
label_293b0c:
    // 0x293b0c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x293b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_293b10:
    // 0x293b10: 0x92510000  lbu         $s1, 0x0($s2)
    ctx->pc = 0x293b10u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_293b14:
    // 0x293b14: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x293b14u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_293b18:
    // 0x293b18: 0x92480005  lbu         $t0, 0x5($s2)
    ctx->pc = 0x293b18u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 5)));
label_293b1c:
    // 0x293b1c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x293b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_293b20:
    // 0x293b20: 0x92470002  lbu         $a3, 0x2($s2)
    ctx->pc = 0x293b20u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 2)));
label_293b24:
    // 0x293b24: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x293b24u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_293b28:
    // 0x293b28: 0x92500004  lbu         $s0, 0x4($s2)
    ctx->pc = 0x293b28u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
label_293b2c:
    // 0x293b2c: 0x84238  dsll        $t0, $t0, 8
    ctx->pc = 0x293b2cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 8);
label_293b30:
    // 0x293b30: 0x92430006  lbu         $v1, 0x6($s2)
    ctx->pc = 0x293b30u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 6)));
label_293b34:
    // 0x293b34: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x293b34u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
label_293b38:
    // 0x293b38: 0x92460003  lbu         $a2, 0x3($s2)
    ctx->pc = 0x293b38u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 3)));
label_293b3c:
    // 0x293b3c: 0x2278825  or          $s1, $s1, $a3
    ctx->pc = 0x293b3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 7));
label_293b40:
    // 0x293b40: 0x92420007  lbu         $v0, 0x7($s2)
    ctx->pc = 0x293b40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 7)));
label_293b44:
    // 0x293b44: 0x2088025  or          $s0, $s0, $t0
    ctx->pc = 0x293b44u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 8));
label_293b48:
    // 0x293b48: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x293b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
label_293b4c:
    // 0x293b4c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x293b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_293b50:
    // 0x293b50: 0x2268825  or          $s1, $s1, $a2
    ctx->pc = 0x293b50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 6));
label_293b54:
    // 0x293b54: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x293b54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_293b58:
    // 0x293b58: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x293b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
label_293b5c:
    // 0x293b5c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x293b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_293b60:
    // 0x293b60: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x293b60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_293b64:
    // 0x293b64: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x293b64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_293b68:
    // 0x293b68: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x293b68u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_293b6c:
    // 0x293b6c: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x293b6cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_293b70:
    // 0x293b70: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x293b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
label_293b74:
    // 0x293b74: 0x26730008  addiu       $s3, $s3, 0x8
    ctx->pc = 0x293b74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 8));
label_293b78:
    // 0x293b78: 0xffb00008  sd          $s0, 0x8($sp)
    ctx->pc = 0x293b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
label_293b7c:
    // 0x293b7c: 0x67defff8  daddiu      $fp, $fp, -0x8
    ctx->pc = 0x293b7cu;
    SET_GPR_S64(ctx, 30, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)4294967288);
label_293b80:
    // 0x293b80: 0xc0a4b48  jal         func_292D20
label_293b84:
    if (ctx->pc == 0x293B84u) {
        ctx->pc = 0x293B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293B80u;
        // 0x293b84: 0x7fac0020  sq          $t4, 0x20($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293B88u;
        goto label_293b88;
    }
    ctx->pc = 0x293B80u;
    SET_GPR_U32(ctx, 31, 0x293B88u);
    ctx->pc = 0x293B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293B80u;
    // 0x293b84: 0x7fac0020  sq          $t4, 0x20($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D20u;
    goto label_292d20;
    ctx->pc = 0x293B88u;
label_293b88:
    // 0x293b88: 0xdfab0000  ld          $t3, 0x0($sp)
    ctx->pc = 0x293b88u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_293b8c:
    // 0x293b8c: 0xdfaa0008  ld          $t2, 0x8($sp)
    ctx->pc = 0x293b8cu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_293b90:
    // 0x293b90: 0x1765826  xor         $t3, $t3, $s6
    ctx->pc = 0x293b90u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 22));
label_293b94:
    // 0x293b94: 0x7bac0020  lq          $t4, 0x20($sp)
    ctx->pc = 0x293b94u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_293b98:
    // 0x293b98: 0x1575026  xor         $t2, $t2, $s7
    ctx->pc = 0x293b98u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 23));
label_293b9c:
    // 0x293b9c: 0xb4e3a  dsrl        $t1, $t3, 24
    ctx->pc = 0x293b9cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 11) >> 24);
label_293ba0:
    // 0x293ba0: 0x316400ff  andi        $a0, $t3, 0xFF
    ctx->pc = 0x293ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_293ba4:
    // 0x293ba4: 0xb2a3a  dsrl        $a1, $t3, 8
    ctx->pc = 0x293ba4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 11) >> 8);
label_293ba8:
    // 0x293ba8: 0xb343a  dsrl        $a2, $t3, 16
    ctx->pc = 0x293ba8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 11) >> 16);
label_293bac:
    // 0x293bac: 0xa423a  dsrl        $t0, $t2, 8
    ctx->pc = 0x293bacu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 10) >> 8);
label_293bb0:
    // 0x293bb0: 0xa143a  dsrl        $v0, $t2, 16
    ctx->pc = 0x293bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 16);
label_293bb4:
    // 0x293bb4: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x293bb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293bb8:
    // 0x293bb8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x293bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_293bbc:
    // 0x293bbc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x293bbcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_293bc0:
    // 0x293bc0: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x293bc0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_293bc4:
    // 0x293bc4: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x293bc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_293bc8:
    // 0x293bc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293bc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293bcc:
    // 0x293bcc: 0xa1e3a  dsrl        $v1, $t2, 24
    ctx->pc = 0x293bccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) >> 24);
label_293bd0:
    // 0x293bd0: 0x314700ff  andi        $a3, $t2, 0xFF
    ctx->pc = 0x293bd0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_293bd4:
    // 0x293bd4: 0xa184fff9  sb          $a0, -0x7($t4)
    ctx->pc = 0x293bd4u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 4294967289), (uint8_t)GPR_U32(ctx, 4));
label_293bd8:
    // 0x293bd8: 0x30a500ff  andi        $a1, $a1, 0xFF
    ctx->pc = 0x293bd8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_293bdc:
    // 0x293bdc: 0x30c600ff  andi        $a2, $a2, 0xFF
    ctx->pc = 0x293bdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
label_293be0:
    // 0x293be0: 0x312900ff  andi        $t1, $t1, 0xFF
    ctx->pc = 0x293be0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
label_293be4:
    // 0x293be4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x293be4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
label_293be8:
    // 0x293be8: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x293be8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
label_293bec:
    // 0x293bec: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293bf0:
    // 0x293bf0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293bf4:
    // 0x293bf4: 0xa2820005  sb          $v0, 0x5($s4)
    ctx->pc = 0x293bf4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 5), (uint8_t)GPR_U32(ctx, 2));
label_293bf8:
    // 0x293bf8: 0xa2850000  sb          $a1, 0x0($s4)
    ctx->pc = 0x293bf8u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 0), (uint8_t)GPR_U32(ctx, 5));
label_293bfc:
    // 0x293bfc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293c00:
    // 0x293c00: 0xa2860001  sb          $a2, 0x1($s4)
    ctx->pc = 0x293c00u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 1), (uint8_t)GPR_U32(ctx, 6));
label_293c04:
    // 0x293c04: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x293c04u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_293c08:
    // 0x293c08: 0xa2890002  sb          $t1, 0x2($s4)
    ctx->pc = 0x293c08u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 2), (uint8_t)GPR_U32(ctx, 9));
label_293c0c:
    // 0x293c0c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x293c0cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_293c10:
    // 0x293c10: 0xa2870003  sb          $a3, 0x3($s4)
    ctx->pc = 0x293c10u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 3), (uint8_t)GPR_U32(ctx, 7));
label_293c14:
    // 0x293c14: 0xa2880004  sb          $t0, 0x4($s4)
    ctx->pc = 0x293c14u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4), (uint8_t)GPR_U32(ctx, 8));
label_293c18:
    // 0x293c18: 0xa1830000  sb          $v1, 0x0($t4)
    ctx->pc = 0x293c18u;
    WRITE8(ADD32(GPR_U32(ctx, 12), 0), (uint8_t)GPR_U32(ctx, 3));
label_293c1c:
    // 0x293c1c: 0x26b40001  addiu       $s4, $s5, 0x1
    ctx->pc = 0x293c1cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_293c20:
    // 0x293c20: 0x7c1ffb9  bgez        $fp, . + 4 + (-0x47 << 2)
label_293c24:
    if (ctx->pc == 0x293C24u) {
        ctx->pc = 0x293C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C20u;
        // 0x293c24: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293C28u;
        goto label_293c28;
    }
    ctx->pc = 0x293C20u;
    {
        const bool branch_taken_0x293c20 = (GPR_S32(ctx, 30) >= 0);
        ctx->pc = 0x293C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C20u;
        // 0x293c24: 0x258c0008  addiu       $t4, $t4, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c20) {
            ctx->pc = 0x293B08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_293b08;
        }
    }
    ctx->pc = 0x293C28u;
label_293c28:
    // 0x293c28: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x293c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_293c2c:
    // 0x293c2c: 0x13c2005c  beq         $fp, $v0, . + 4 + (0x5C << 2)
label_293c30:
    if (ctx->pc == 0x293C30u) {
        ctx->pc = 0x293C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C2Cu;
        // 0x293c30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293C34u;
        goto label_293c34;
    }
    ctx->pc = 0x293C2Cu;
    {
        const bool branch_taken_0x293c2c = (GPR_U64(ctx, 30) == GPR_U64(ctx, 2));
        ctx->pc = 0x293C30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293C2Cu;
        // 0x293c30: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293c2c) {
            ctx->pc = 0x293DA0u;
            goto label_293da0;
        }
    }
    ctx->pc = 0x293C34u;
label_293c34:
    // 0x293c34: 0x92710000  lbu         $s1, 0x0($s3)
    ctx->pc = 0x293c34u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293c38:
    // 0x293c38: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x293c38u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293c3c:
    // 0x293c3c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x293c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_293c40:
    // 0x293c40: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x293c40u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293c44:
    // 0x293c44: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x293c44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293c48:
    // 0x293c48: 0x8fa60014  lw          $a2, 0x14($sp)
    ctx->pc = 0x293c48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_293c4c:
    // 0x293c4c: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x293c4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293c50:
    // 0x293c50: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x293c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_293c54:
    // 0x293c54: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x293c54u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293c58:
    // 0x293c58: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x293c58u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_293c5c:
    // 0x293c5c: 0x92680000  lbu         $t0, 0x0($s3)
    ctx->pc = 0x293c5cu;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293c60:
    // 0x293c60: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x293c60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_293c64:
    // 0x293c64: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x293c64u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293c68:
    // 0x293c68: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x293c68u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_293c6c:
    // 0x293c6c: 0x92700000  lbu         $s0, 0x0($s3)
    ctx->pc = 0x293c6cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293c70:
    // 0x293c70: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x293c70u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
label_293c74:
    // 0x293c74: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x293c74u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293c78:
    // 0x293c78: 0x2288825  or          $s1, $s1, $t0
    ctx->pc = 0x293c78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 8));
label_293c7c:
    // 0x293c7c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x293c7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293c80:
    // 0x293c80: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x293c80u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_293c84:
    // 0x293c84: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x293c84u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_293c88:
    // 0x293c88: 0x92630000  lbu         $v1, 0x0($s3)
    ctx->pc = 0x293c88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_293c8c:
    // 0x293c8c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x293c8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_293c90:
    // 0x293c90: 0x92680001  lbu         $t0, 0x1($s3)
    ctx->pc = 0x293c90u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 1)));
label_293c94:
    // 0x293c94: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x293c94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_293c98:
    // 0x293c98: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x293c98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
label_293c9c:
    // 0x293c9c: 0xffb10000  sd          $s1, 0x0($sp)
    ctx->pc = 0x293c9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 17));
label_293ca0:
    // 0x293ca0: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x293ca0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_293ca4:
    // 0x293ca4: 0x84638  dsll        $t0, $t0, 24
    ctx->pc = 0x293ca4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << 24);
label_293ca8:
    // 0x293ca8: 0x2088025  or          $s0, $s0, $t0
    ctx->pc = 0x293ca8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 8));
label_293cac:
    // 0x293cac: 0xc0a4b48  jal         func_292D20
label_293cb0:
    if (ctx->pc == 0x293CB0u) {
        ctx->pc = 0x293CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CACu;
        // 0x293cb0: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293CB4u;
        goto label_293cb4;
    }
    ctx->pc = 0x293CACu;
    SET_GPR_U32(ctx, 31, 0x293CB4u);
    ctx->pc = 0x293CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x293CACu;
    // 0x293cb0: 0xffb00008  sd          $s0, 0x8($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x292D20u;
    goto label_292d20;
    ctx->pc = 0x293CB4u;
label_293cb4:
    // 0x293cb4: 0xdfab0000  ld          $t3, 0x0($sp)
    ctx->pc = 0x293cb4u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_293cb8:
    // 0x293cb8: 0x1e103c  dsll32      $v0, $fp, 0
    ctx->pc = 0x293cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) << (32 + 0));
label_293cbc:
    // 0x293cbc: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293cbcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_293cc0:
    // 0x293cc0: 0xdfaa0008  ld          $t2, 0x8($sp)
    ctx->pc = 0x293cc0u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_293cc4:
    // 0x293cc4: 0x67c40007  daddiu      $a0, $fp, 0x7
    ctx->pc = 0x293cc4u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 30) + (int64_t)(int32_t)7);
label_293cc8:
    // 0x293cc8: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x293cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_293ccc:
    // 0x293ccc: 0x1765826  xor         $t3, $t3, $s6
    ctx->pc = 0x293cccu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) ^ GPR_U64(ctx, 22));
label_293cd0:
    // 0x293cd0: 0x1575026  xor         $t2, $t2, $s7
    ctx->pc = 0x293cd0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 23));
label_293cd4:
    // 0x293cd4: 0x2c830008  sltiu       $v1, $a0, 0x8
    ctx->pc = 0x293cd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_293cd8:
    // 0x293cd8: 0x1060002f  beqz        $v1, . + 4 + (0x2F << 2)
label_293cdc:
    if (ctx->pc == 0x293CDCu) {
        ctx->pc = 0x293CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CD8u;
        // 0x293cdc: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293CE0u;
        goto label_293ce0;
    }
    ctx->pc = 0x293CD8u;
    {
        const bool branch_taken_0x293cd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x293CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293CD8u;
        // 0x293cdc: 0x2a2a821  addu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x293cd8) {
            ctx->pc = 0x293D98u;
            goto label_293d98;
        }
    }
    ctx->pc = 0x293CE0u;
label_293ce0:
    // 0x293ce0: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x293ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_293ce4:
    // 0x293ce4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x293ce4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_293ce8:
    // 0x293ce8: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x293ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_293cec:
    // 0x293cec: 0x2463b3e0  addiu       $v1, $v1, -0x4C20
    ctx->pc = 0x293cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947808));
label_293cf0:
    // 0x293cf0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x293cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_293cf4:
    // 0x293cf4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x293cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_293cf8:
    // 0x293cf8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x293cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_293cfc:
    // 0x293cfc: 0x800008  jr          $a0
label_293d00:
    if (ctx->pc == 0x293D00u) {
        ctx->pc = 0x293D04u;
        goto label_293d04;
    }
    ctx->pc = 0x293CFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293CFCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x293D04u;
label_293d04:
    // 0x293d04: 0xa163a  dsrl        $v0, $t2, 24
    ctx->pc = 0x293d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 24);
label_293d08:
    // 0x293d08: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x293d08u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293d0c:
    // 0x293d0c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d10:
    // 0x293d10: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d14:
    // 0x293d14: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293d14u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293d18:
    // 0x293d18: 0xa143a  dsrl        $v0, $t2, 16
    ctx->pc = 0x293d18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 16);
label_293d1c:
    // 0x293d1c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x293d1cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293d20:
    // 0x293d20: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d24:
    // 0x293d24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d28:
    // 0x293d28: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293d28u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293d2c:
    // 0x293d2c: 0xa123a  dsrl        $v0, $t2, 8
    ctx->pc = 0x293d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 8);
label_293d30:
    // 0x293d30: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x293d30u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293d34:
    // 0x293d34: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d38:
    // 0x293d38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d3c:
    // 0x293d3c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293d40:
    // 0x293d40: 0x314200ff  andi        $v0, $t2, 0xFF
    ctx->pc = 0x293d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)255);
label_293d44:
    // 0x293d44: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x293d44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293d48:
    // 0x293d48: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d4c:
    // 0x293d4c: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293d4cu;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293d50:
    // 0x293d50: 0xb163a  dsrl        $v0, $t3, 24
    ctx->pc = 0x293d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 24);
label_293d54:
    // 0x293d54: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x293d54u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293d58:
    // 0x293d58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d5c:
    // 0x293d5c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d60:
    // 0x293d60: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293d60u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293d64:
    // 0x293d64: 0xb143a  dsrl        $v0, $t3, 16
    ctx->pc = 0x293d64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 16);
label_293d68:
    // 0x293d68: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x293d68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293d6c:
    // 0x293d6c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d70:
    // 0x293d70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d74:
    // 0x293d74: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293d74u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293d78:
    // 0x293d78: 0xb123a  dsrl        $v0, $t3, 8
    ctx->pc = 0x293d78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) >> 8);
label_293d7c:
    // 0x293d7c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x293d7cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_293d80:
    // 0x293d80: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d84:
    // 0x293d84: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d88:
    // 0x293d88: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x293d88u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
label_293d8c:
    // 0x293d8c: 0x316200ff  andi        $v0, $t3, 0xFF
    ctx->pc = 0x293d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)255);
label_293d90:
    // 0x293d90: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293d94:
    // 0x293d94: 0xa2a2ffff  sb          $v0, -0x1($s5)
    ctx->pc = 0x293d94u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 4294967295), (uint8_t)GPR_U32(ctx, 2));
label_293d98:
    // 0x293d98: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x293d98u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_293d9c:
    // 0x293d9c: 0x200b82d  daddu       $s7, $s0, $zero
    ctx->pc = 0x293d9cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_293da0:
    // 0x293da0: 0x8fa9001c  lw          $t1, 0x1C($sp)
    ctx->pc = 0x293da0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_293da4:
    // 0x293da4: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x293da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
label_293da8:
    // 0x293da8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293dac:
    // 0x293dac: 0x161a3a  dsrl        $v1, $s6, 8
    ctx->pc = 0x293dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> 8);
label_293db0:
    // 0x293db0: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x293db0u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
label_293db4:
    // 0x293db4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293db4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293db8:
    // 0x293db8: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293db8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293dbc:
    // 0x293dbc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293dbcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293dc0:
    // 0x293dc0: 0x16143a  dsrl        $v0, $s6, 16
    ctx->pc = 0x293dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) >> 16);
label_293dc4:
    // 0x293dc4: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x293dc4u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_293dc8:
    // 0x293dc8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293dcc:
    // 0x293dcc: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293dccu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293dd0:
    // 0x293dd0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293dd4:
    // 0x293dd4: 0x161e3a  dsrl        $v1, $s6, 24
    ctx->pc = 0x293dd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) >> 24);
label_293dd8:
    // 0x293dd8: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x293dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
label_293ddc:
    // 0x293ddc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293de0:
    // 0x293de0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293de4:
    // 0x293de4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293de4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293de8:
    // 0x293de8: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x293de8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_293dec:
    // 0x293dec: 0x32e200ff  andi        $v0, $s7, 0xFF
    ctx->pc = 0x293decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)255);
label_293df0:
    // 0x293df0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293df4:
    // 0x293df4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293df4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293df8:
    // 0x293df8: 0x171a3a  dsrl        $v1, $s7, 8
    ctx->pc = 0x293df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 23) >> 8);
label_293dfc:
    // 0x293dfc: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x293dfcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
label_293e00:
    // 0x293e00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293e04:
    // 0x293e04: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293e04u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293e08:
    // 0x293e08: 0x17263a  dsrl        $a0, $s7, 24
    ctx->pc = 0x293e08u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 23) >> 24);
label_293e0c:
    // 0x293e0c: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x293e0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_293e10:
    // 0x293e10: 0x17143a  dsrl        $v0, $s7, 16
    ctx->pc = 0x293e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) >> 16);
label_293e14:
    // 0x293e14: 0xa1230000  sb          $v1, 0x0($t1)
    ctx->pc = 0x293e14u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 3));
label_293e18:
    // 0x293e18: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293e18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293e1c:
    // 0x293e1c: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x293e1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293e20:
    // 0x293e20: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x293e20u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
label_293e24:
    // 0x293e24: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x293e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_293e28:
    // 0x293e28: 0x308400ff  andi        $a0, $a0, 0xFF
    ctx->pc = 0x293e28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_293e2c:
    // 0x293e2c: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x293e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
label_293e30:
    // 0x293e30: 0xa1240001  sb          $a0, 0x1($t1)
    ctx->pc = 0x293e30u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 1), (uint8_t)GPR_U32(ctx, 4));
label_293e34:
    // 0x293e34: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x293e34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_293e38:
    // 0x293e38: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x293e38u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_293e3c:
    // 0x293e3c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x293e3cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_293e40:
    // 0x293e40: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x293e40u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_293e44:
    // 0x293e44: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x293e44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_293e48:
    // 0x293e48: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x293e48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_293e4c:
    // 0x293e4c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x293e4cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_293e50:
    // 0x293e50: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x293e50u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_293e54:
    // 0x293e54: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x293e54u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_293e58:
    // 0x293e58: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x293e58u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_293e5c:
    // 0x293e5c: 0xffa00008  sd          $zero, 0x8($sp)
    ctx->pc = 0x293e5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 0));
label_293e60:
    // 0x293e60: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x293e60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
label_293e64:
    // 0x293e64: 0x3e00008  jr          $ra
label_293e68:
    if (ctx->pc == 0x293E68u) {
        ctx->pc = 0x293E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E64u;
        // 0x293e68: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x293E6Cu;
        goto label_293e6c;
    }
    ctx->pc = 0x293E64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x293E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x293E64u;
        // 0x293e68: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x293E64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x293E6Cu;
label_293e6c:
    // 0x293e6c: 0x0  nop
    ctx->pc = 0x293e6cu;
    // NOP
}
