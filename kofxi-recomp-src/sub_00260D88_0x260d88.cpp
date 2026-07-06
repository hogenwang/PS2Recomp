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

// Function: sub_00260D88
// Address: 0x260d88 - 0x261548
void sub_00260D88_0x260d88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260D88_0x260d88");
#endif

    switch (ctx->pc) {
        case 0x260d88u: goto label_260d88;
        case 0x260d8cu: goto label_260d8c;
        case 0x260d90u: goto label_260d90;
        case 0x260d94u: goto label_260d94;
        case 0x260d98u: goto label_260d98;
        case 0x260d9cu: goto label_260d9c;
        case 0x260da0u: goto label_260da0;
        case 0x260da4u: goto label_260da4;
        case 0x260da8u: goto label_260da8;
        case 0x260dacu: goto label_260dac;
        case 0x260db0u: goto label_260db0;
        case 0x260db4u: goto label_260db4;
        case 0x260db8u: goto label_260db8;
        case 0x260dbcu: goto label_260dbc;
        case 0x260dc0u: goto label_260dc0;
        case 0x260dc4u: goto label_260dc4;
        case 0x260dc8u: goto label_260dc8;
        case 0x260dccu: goto label_260dcc;
        case 0x260dd0u: goto label_260dd0;
        case 0x260dd4u: goto label_260dd4;
        case 0x260dd8u: goto label_260dd8;
        case 0x260ddcu: goto label_260ddc;
        case 0x260de0u: goto label_260de0;
        case 0x260de4u: goto label_260de4;
        case 0x260de8u: goto label_260de8;
        case 0x260decu: goto label_260dec;
        case 0x260df0u: goto label_260df0;
        case 0x260df4u: goto label_260df4;
        case 0x260df8u: goto label_260df8;
        case 0x260dfcu: goto label_260dfc;
        case 0x260e00u: goto label_260e00;
        case 0x260e04u: goto label_260e04;
        case 0x260e08u: goto label_260e08;
        case 0x260e0cu: goto label_260e0c;
        case 0x260e10u: goto label_260e10;
        case 0x260e14u: goto label_260e14;
        case 0x260e18u: goto label_260e18;
        case 0x260e1cu: goto label_260e1c;
        case 0x260e20u: goto label_260e20;
        case 0x260e24u: goto label_260e24;
        case 0x260e28u: goto label_260e28;
        case 0x260e2cu: goto label_260e2c;
        case 0x260e30u: goto label_260e30;
        case 0x260e34u: goto label_260e34;
        case 0x260e38u: goto label_260e38;
        case 0x260e3cu: goto label_260e3c;
        case 0x260e40u: goto label_260e40;
        case 0x260e44u: goto label_260e44;
        case 0x260e48u: goto label_260e48;
        case 0x260e4cu: goto label_260e4c;
        case 0x260e50u: goto label_260e50;
        case 0x260e54u: goto label_260e54;
        case 0x260e58u: goto label_260e58;
        case 0x260e5cu: goto label_260e5c;
        case 0x260e60u: goto label_260e60;
        case 0x260e64u: goto label_260e64;
        case 0x260e68u: goto label_260e68;
        case 0x260e6cu: goto label_260e6c;
        case 0x260e70u: goto label_260e70;
        case 0x260e74u: goto label_260e74;
        case 0x260e78u: goto label_260e78;
        case 0x260e7cu: goto label_260e7c;
        case 0x260e80u: goto label_260e80;
        case 0x260e84u: goto label_260e84;
        case 0x260e88u: goto label_260e88;
        case 0x260e8cu: goto label_260e8c;
        case 0x260e90u: goto label_260e90;
        case 0x260e94u: goto label_260e94;
        case 0x260e98u: goto label_260e98;
        case 0x260e9cu: goto label_260e9c;
        case 0x260ea0u: goto label_260ea0;
        case 0x260ea4u: goto label_260ea4;
        case 0x260ea8u: goto label_260ea8;
        case 0x260eacu: goto label_260eac;
        case 0x260eb0u: goto label_260eb0;
        case 0x260eb4u: goto label_260eb4;
        case 0x260eb8u: goto label_260eb8;
        case 0x260ebcu: goto label_260ebc;
        case 0x260ec0u: goto label_260ec0;
        case 0x260ec4u: goto label_260ec4;
        case 0x260ec8u: goto label_260ec8;
        case 0x260eccu: goto label_260ecc;
        case 0x260ed0u: goto label_260ed0;
        case 0x260ed4u: goto label_260ed4;
        case 0x260ed8u: goto label_260ed8;
        case 0x260edcu: goto label_260edc;
        case 0x260ee0u: goto label_260ee0;
        case 0x260ee4u: goto label_260ee4;
        case 0x260ee8u: goto label_260ee8;
        case 0x260eecu: goto label_260eec;
        case 0x260ef0u: goto label_260ef0;
        case 0x260ef4u: goto label_260ef4;
        case 0x260ef8u: goto label_260ef8;
        case 0x260efcu: goto label_260efc;
        case 0x260f00u: goto label_260f00;
        case 0x260f04u: goto label_260f04;
        case 0x260f08u: goto label_260f08;
        case 0x260f0cu: goto label_260f0c;
        case 0x260f10u: goto label_260f10;
        case 0x260f14u: goto label_260f14;
        case 0x260f18u: goto label_260f18;
        case 0x260f1cu: goto label_260f1c;
        case 0x260f20u: goto label_260f20;
        case 0x260f24u: goto label_260f24;
        case 0x260f28u: goto label_260f28;
        case 0x260f2cu: goto label_260f2c;
        case 0x260f30u: goto label_260f30;
        case 0x260f34u: goto label_260f34;
        case 0x260f38u: goto label_260f38;
        case 0x260f3cu: goto label_260f3c;
        case 0x260f40u: goto label_260f40;
        case 0x260f44u: goto label_260f44;
        case 0x260f48u: goto label_260f48;
        case 0x260f4cu: goto label_260f4c;
        case 0x260f50u: goto label_260f50;
        case 0x260f54u: goto label_260f54;
        case 0x260f58u: goto label_260f58;
        case 0x260f5cu: goto label_260f5c;
        case 0x260f60u: goto label_260f60;
        case 0x260f64u: goto label_260f64;
        case 0x260f68u: goto label_260f68;
        case 0x260f6cu: goto label_260f6c;
        case 0x260f70u: goto label_260f70;
        case 0x260f74u: goto label_260f74;
        case 0x260f78u: goto label_260f78;
        case 0x260f7cu: goto label_260f7c;
        case 0x260f80u: goto label_260f80;
        case 0x260f84u: goto label_260f84;
        case 0x260f88u: goto label_260f88;
        case 0x260f8cu: goto label_260f8c;
        case 0x260f90u: goto label_260f90;
        case 0x260f94u: goto label_260f94;
        case 0x260f98u: goto label_260f98;
        case 0x260f9cu: goto label_260f9c;
        case 0x260fa0u: goto label_260fa0;
        case 0x260fa4u: goto label_260fa4;
        case 0x260fa8u: goto label_260fa8;
        case 0x260facu: goto label_260fac;
        case 0x260fb0u: goto label_260fb0;
        case 0x260fb4u: goto label_260fb4;
        case 0x260fb8u: goto label_260fb8;
        case 0x260fbcu: goto label_260fbc;
        case 0x260fc0u: goto label_260fc0;
        case 0x260fc4u: goto label_260fc4;
        case 0x260fc8u: goto label_260fc8;
        case 0x260fccu: goto label_260fcc;
        case 0x260fd0u: goto label_260fd0;
        case 0x260fd4u: goto label_260fd4;
        case 0x260fd8u: goto label_260fd8;
        case 0x260fdcu: goto label_260fdc;
        case 0x260fe0u: goto label_260fe0;
        case 0x260fe4u: goto label_260fe4;
        case 0x260fe8u: goto label_260fe8;
        case 0x260fecu: goto label_260fec;
        case 0x260ff0u: goto label_260ff0;
        case 0x260ff4u: goto label_260ff4;
        case 0x260ff8u: goto label_260ff8;
        case 0x260ffcu: goto label_260ffc;
        case 0x261000u: goto label_261000;
        case 0x261004u: goto label_261004;
        case 0x261008u: goto label_261008;
        case 0x26100cu: goto label_26100c;
        case 0x261010u: goto label_261010;
        case 0x261014u: goto label_261014;
        case 0x261018u: goto label_261018;
        case 0x26101cu: goto label_26101c;
        case 0x261020u: goto label_261020;
        case 0x261024u: goto label_261024;
        case 0x261028u: goto label_261028;
        case 0x26102cu: goto label_26102c;
        case 0x261030u: goto label_261030;
        case 0x261034u: goto label_261034;
        case 0x261038u: goto label_261038;
        case 0x26103cu: goto label_26103c;
        case 0x261040u: goto label_261040;
        case 0x261044u: goto label_261044;
        case 0x261048u: goto label_261048;
        case 0x26104cu: goto label_26104c;
        case 0x261050u: goto label_261050;
        case 0x261054u: goto label_261054;
        case 0x261058u: goto label_261058;
        case 0x26105cu: goto label_26105c;
        case 0x261060u: goto label_261060;
        case 0x261064u: goto label_261064;
        case 0x261068u: goto label_261068;
        case 0x26106cu: goto label_26106c;
        case 0x261070u: goto label_261070;
        case 0x261074u: goto label_261074;
        case 0x261078u: goto label_261078;
        case 0x26107cu: goto label_26107c;
        case 0x261080u: goto label_261080;
        case 0x261084u: goto label_261084;
        case 0x261088u: goto label_261088;
        case 0x26108cu: goto label_26108c;
        case 0x261090u: goto label_261090;
        case 0x261094u: goto label_261094;
        case 0x261098u: goto label_261098;
        case 0x26109cu: goto label_26109c;
        case 0x2610a0u: goto label_2610a0;
        case 0x2610a4u: goto label_2610a4;
        case 0x2610a8u: goto label_2610a8;
        case 0x2610acu: goto label_2610ac;
        case 0x2610b0u: goto label_2610b0;
        case 0x2610b4u: goto label_2610b4;
        case 0x2610b8u: goto label_2610b8;
        case 0x2610bcu: goto label_2610bc;
        case 0x2610c0u: goto label_2610c0;
        case 0x2610c4u: goto label_2610c4;
        case 0x2610c8u: goto label_2610c8;
        case 0x2610ccu: goto label_2610cc;
        case 0x2610d0u: goto label_2610d0;
        case 0x2610d4u: goto label_2610d4;
        case 0x2610d8u: goto label_2610d8;
        case 0x2610dcu: goto label_2610dc;
        case 0x2610e0u: goto label_2610e0;
        case 0x2610e4u: goto label_2610e4;
        case 0x2610e8u: goto label_2610e8;
        case 0x2610ecu: goto label_2610ec;
        case 0x2610f0u: goto label_2610f0;
        case 0x2610f4u: goto label_2610f4;
        case 0x2610f8u: goto label_2610f8;
        case 0x2610fcu: goto label_2610fc;
        case 0x261100u: goto label_261100;
        case 0x261104u: goto label_261104;
        case 0x261108u: goto label_261108;
        case 0x26110cu: goto label_26110c;
        case 0x261110u: goto label_261110;
        case 0x261114u: goto label_261114;
        case 0x261118u: goto label_261118;
        case 0x26111cu: goto label_26111c;
        case 0x261120u: goto label_261120;
        case 0x261124u: goto label_261124;
        case 0x261128u: goto label_261128;
        case 0x26112cu: goto label_26112c;
        case 0x261130u: goto label_261130;
        case 0x261134u: goto label_261134;
        case 0x261138u: goto label_261138;
        case 0x26113cu: goto label_26113c;
        case 0x261140u: goto label_261140;
        case 0x261144u: goto label_261144;
        case 0x261148u: goto label_261148;
        case 0x26114cu: goto label_26114c;
        case 0x261150u: goto label_261150;
        case 0x261154u: goto label_261154;
        case 0x261158u: goto label_261158;
        case 0x26115cu: goto label_26115c;
        case 0x261160u: goto label_261160;
        case 0x261164u: goto label_261164;
        case 0x261168u: goto label_261168;
        case 0x26116cu: goto label_26116c;
        case 0x261170u: goto label_261170;
        case 0x261174u: goto label_261174;
        case 0x261178u: goto label_261178;
        case 0x26117cu: goto label_26117c;
        case 0x261180u: goto label_261180;
        case 0x261184u: goto label_261184;
        case 0x261188u: goto label_261188;
        case 0x26118cu: goto label_26118c;
        case 0x261190u: goto label_261190;
        case 0x261194u: goto label_261194;
        case 0x261198u: goto label_261198;
        case 0x26119cu: goto label_26119c;
        case 0x2611a0u: goto label_2611a0;
        case 0x2611a4u: goto label_2611a4;
        case 0x2611a8u: goto label_2611a8;
        case 0x2611acu: goto label_2611ac;
        case 0x2611b0u: goto label_2611b0;
        case 0x2611b4u: goto label_2611b4;
        case 0x2611b8u: goto label_2611b8;
        case 0x2611bcu: goto label_2611bc;
        case 0x2611c0u: goto label_2611c0;
        case 0x2611c4u: goto label_2611c4;
        case 0x2611c8u: goto label_2611c8;
        case 0x2611ccu: goto label_2611cc;
        case 0x2611d0u: goto label_2611d0;
        case 0x2611d4u: goto label_2611d4;
        case 0x2611d8u: goto label_2611d8;
        case 0x2611dcu: goto label_2611dc;
        case 0x2611e0u: goto label_2611e0;
        case 0x2611e4u: goto label_2611e4;
        case 0x2611e8u: goto label_2611e8;
        case 0x2611ecu: goto label_2611ec;
        case 0x2611f0u: goto label_2611f0;
        case 0x2611f4u: goto label_2611f4;
        case 0x2611f8u: goto label_2611f8;
        case 0x2611fcu: goto label_2611fc;
        case 0x261200u: goto label_261200;
        case 0x261204u: goto label_261204;
        case 0x261208u: goto label_261208;
        case 0x26120cu: goto label_26120c;
        case 0x261210u: goto label_261210;
        case 0x261214u: goto label_261214;
        case 0x261218u: goto label_261218;
        case 0x26121cu: goto label_26121c;
        case 0x261220u: goto label_261220;
        case 0x261224u: goto label_261224;
        case 0x261228u: goto label_261228;
        case 0x26122cu: goto label_26122c;
        case 0x261230u: goto label_261230;
        case 0x261234u: goto label_261234;
        case 0x261238u: goto label_261238;
        case 0x26123cu: goto label_26123c;
        case 0x261240u: goto label_261240;
        case 0x261244u: goto label_261244;
        case 0x261248u: goto label_261248;
        case 0x26124cu: goto label_26124c;
        case 0x261250u: goto label_261250;
        case 0x261254u: goto label_261254;
        case 0x261258u: goto label_261258;
        case 0x26125cu: goto label_26125c;
        case 0x261260u: goto label_261260;
        case 0x261264u: goto label_261264;
        case 0x261268u: goto label_261268;
        case 0x26126cu: goto label_26126c;
        case 0x261270u: goto label_261270;
        case 0x261274u: goto label_261274;
        case 0x261278u: goto label_261278;
        case 0x26127cu: goto label_26127c;
        case 0x261280u: goto label_261280;
        case 0x261284u: goto label_261284;
        case 0x261288u: goto label_261288;
        case 0x26128cu: goto label_26128c;
        case 0x261290u: goto label_261290;
        case 0x261294u: goto label_261294;
        case 0x261298u: goto label_261298;
        case 0x26129cu: goto label_26129c;
        case 0x2612a0u: goto label_2612a0;
        case 0x2612a4u: goto label_2612a4;
        case 0x2612a8u: goto label_2612a8;
        case 0x2612acu: goto label_2612ac;
        case 0x2612b0u: goto label_2612b0;
        case 0x2612b4u: goto label_2612b4;
        case 0x2612b8u: goto label_2612b8;
        case 0x2612bcu: goto label_2612bc;
        case 0x2612c0u: goto label_2612c0;
        case 0x2612c4u: goto label_2612c4;
        case 0x2612c8u: goto label_2612c8;
        case 0x2612ccu: goto label_2612cc;
        case 0x2612d0u: goto label_2612d0;
        case 0x2612d4u: goto label_2612d4;
        case 0x2612d8u: goto label_2612d8;
        case 0x2612dcu: goto label_2612dc;
        case 0x2612e0u: goto label_2612e0;
        case 0x2612e4u: goto label_2612e4;
        case 0x2612e8u: goto label_2612e8;
        case 0x2612ecu: goto label_2612ec;
        case 0x2612f0u: goto label_2612f0;
        case 0x2612f4u: goto label_2612f4;
        case 0x2612f8u: goto label_2612f8;
        case 0x2612fcu: goto label_2612fc;
        case 0x261300u: goto label_261300;
        case 0x261304u: goto label_261304;
        case 0x261308u: goto label_261308;
        case 0x26130cu: goto label_26130c;
        case 0x261310u: goto label_261310;
        case 0x261314u: goto label_261314;
        case 0x261318u: goto label_261318;
        case 0x26131cu: goto label_26131c;
        case 0x261320u: goto label_261320;
        case 0x261324u: goto label_261324;
        case 0x261328u: goto label_261328;
        case 0x26132cu: goto label_26132c;
        case 0x261330u: goto label_261330;
        case 0x261334u: goto label_261334;
        case 0x261338u: goto label_261338;
        case 0x26133cu: goto label_26133c;
        case 0x261340u: goto label_261340;
        case 0x261344u: goto label_261344;
        case 0x261348u: goto label_261348;
        case 0x26134cu: goto label_26134c;
        case 0x261350u: goto label_261350;
        case 0x261354u: goto label_261354;
        case 0x261358u: goto label_261358;
        case 0x26135cu: goto label_26135c;
        case 0x261360u: goto label_261360;
        case 0x261364u: goto label_261364;
        case 0x261368u: goto label_261368;
        case 0x26136cu: goto label_26136c;
        case 0x261370u: goto label_261370;
        case 0x261374u: goto label_261374;
        case 0x261378u: goto label_261378;
        case 0x26137cu: goto label_26137c;
        case 0x261380u: goto label_261380;
        case 0x261384u: goto label_261384;
        case 0x261388u: goto label_261388;
        case 0x26138cu: goto label_26138c;
        case 0x261390u: goto label_261390;
        case 0x261394u: goto label_261394;
        case 0x261398u: goto label_261398;
        case 0x26139cu: goto label_26139c;
        case 0x2613a0u: goto label_2613a0;
        case 0x2613a4u: goto label_2613a4;
        case 0x2613a8u: goto label_2613a8;
        case 0x2613acu: goto label_2613ac;
        case 0x2613b0u: goto label_2613b0;
        case 0x2613b4u: goto label_2613b4;
        case 0x2613b8u: goto label_2613b8;
        case 0x2613bcu: goto label_2613bc;
        case 0x2613c0u: goto label_2613c0;
        case 0x2613c4u: goto label_2613c4;
        case 0x2613c8u: goto label_2613c8;
        case 0x2613ccu: goto label_2613cc;
        case 0x2613d0u: goto label_2613d0;
        case 0x2613d4u: goto label_2613d4;
        case 0x2613d8u: goto label_2613d8;
        case 0x2613dcu: goto label_2613dc;
        case 0x2613e0u: goto label_2613e0;
        case 0x2613e4u: goto label_2613e4;
        case 0x2613e8u: goto label_2613e8;
        case 0x2613ecu: goto label_2613ec;
        case 0x2613f0u: goto label_2613f0;
        case 0x2613f4u: goto label_2613f4;
        case 0x2613f8u: goto label_2613f8;
        case 0x2613fcu: goto label_2613fc;
        case 0x261400u: goto label_261400;
        case 0x261404u: goto label_261404;
        case 0x261408u: goto label_261408;
        case 0x26140cu: goto label_26140c;
        case 0x261410u: goto label_261410;
        case 0x261414u: goto label_261414;
        case 0x261418u: goto label_261418;
        case 0x26141cu: goto label_26141c;
        case 0x261420u: goto label_261420;
        case 0x261424u: goto label_261424;
        case 0x261428u: goto label_261428;
        case 0x26142cu: goto label_26142c;
        case 0x261430u: goto label_261430;
        case 0x261434u: goto label_261434;
        case 0x261438u: goto label_261438;
        case 0x26143cu: goto label_26143c;
        case 0x261440u: goto label_261440;
        case 0x261444u: goto label_261444;
        case 0x261448u: goto label_261448;
        case 0x26144cu: goto label_26144c;
        case 0x261450u: goto label_261450;
        case 0x261454u: goto label_261454;
        case 0x261458u: goto label_261458;
        case 0x26145cu: goto label_26145c;
        case 0x261460u: goto label_261460;
        case 0x261464u: goto label_261464;
        case 0x261468u: goto label_261468;
        case 0x26146cu: goto label_26146c;
        case 0x261470u: goto label_261470;
        case 0x261474u: goto label_261474;
        case 0x261478u: goto label_261478;
        case 0x26147cu: goto label_26147c;
        case 0x261480u: goto label_261480;
        case 0x261484u: goto label_261484;
        case 0x261488u: goto label_261488;
        case 0x26148cu: goto label_26148c;
        case 0x261490u: goto label_261490;
        case 0x261494u: goto label_261494;
        case 0x261498u: goto label_261498;
        case 0x26149cu: goto label_26149c;
        case 0x2614a0u: goto label_2614a0;
        case 0x2614a4u: goto label_2614a4;
        case 0x2614a8u: goto label_2614a8;
        case 0x2614acu: goto label_2614ac;
        case 0x2614b0u: goto label_2614b0;
        case 0x2614b4u: goto label_2614b4;
        case 0x2614b8u: goto label_2614b8;
        case 0x2614bcu: goto label_2614bc;
        case 0x2614c0u: goto label_2614c0;
        case 0x2614c4u: goto label_2614c4;
        case 0x2614c8u: goto label_2614c8;
        case 0x2614ccu: goto label_2614cc;
        case 0x2614d0u: goto label_2614d0;
        case 0x2614d4u: goto label_2614d4;
        case 0x2614d8u: goto label_2614d8;
        case 0x2614dcu: goto label_2614dc;
        case 0x2614e0u: goto label_2614e0;
        case 0x2614e4u: goto label_2614e4;
        case 0x2614e8u: goto label_2614e8;
        case 0x2614ecu: goto label_2614ec;
        case 0x2614f0u: goto label_2614f0;
        case 0x2614f4u: goto label_2614f4;
        case 0x2614f8u: goto label_2614f8;
        case 0x2614fcu: goto label_2614fc;
        case 0x261500u: goto label_261500;
        case 0x261504u: goto label_261504;
        case 0x261508u: goto label_261508;
        case 0x26150cu: goto label_26150c;
        case 0x261510u: goto label_261510;
        case 0x261514u: goto label_261514;
        case 0x261518u: goto label_261518;
        case 0x26151cu: goto label_26151c;
        case 0x261520u: goto label_261520;
        case 0x261524u: goto label_261524;
        case 0x261528u: goto label_261528;
        case 0x26152cu: goto label_26152c;
        case 0x261530u: goto label_261530;
        case 0x261534u: goto label_261534;
        case 0x261538u: goto label_261538;
        case 0x26153cu: goto label_26153c;
        case 0x261540u: goto label_261540;
        case 0x261544u: goto label_261544;
        default: break;
    }

    ctx->pc = 0x260d88u;

label_260d88:
    // 0x260d88: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x260d88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_260d8c:
    // 0x260d8c: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x260d8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_260d90:
    // 0x260d90: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x260d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_260d94:
    // 0x260d94: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x260d94u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_260d98:
    // 0x260d98: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x260d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_260d9c:
    // 0x260d9c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x260d9cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260da0:
    // 0x260da0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x260da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_260da4:
    // 0x260da4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x260da4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260da8:
    // 0x260da8: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x260da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_260dac:
    // 0x260dac: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x260dacu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_260db0:
    // 0x260db0: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x260db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_260db4:
    // 0x260db4: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x260db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_260db8:
    // 0x260db8: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x260db8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_260dbc:
    // 0x260dbc: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x260dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_260dc0:
    // 0x260dc0: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x260dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_260dc4:
    // 0x260dc4: 0xafa60024  sw          $a2, 0x24($sp)
    ctx->pc = 0x260dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 6));
label_260dc8:
    // 0x260dc8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x260dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_260dcc:
    // 0x260dcc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x260dccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_260dd0:
    // 0x260dd0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x260dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_260dd4:
    // 0x260dd4: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x260dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_260dd8:
    // 0x260dd8: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x260dd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_260ddc:
    // 0x260ddc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x260ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_260de0:
    // 0x260de0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x260de0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_260de4:
    // 0x260de4: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x260de4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
label_260de8:
    // 0x260de8: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x260de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_260dec:
    // 0x260dec: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x260decu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_260df0:
    // 0x260df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x260df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260df4:
    // 0x260df4: 0xafb6000c  sw          $s6, 0xC($sp)
    ctx->pc = 0x260df4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 22));
label_260df8:
    // 0x260df8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x260df8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260dfc:
    // 0x260dfc: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x260dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_260e00:
    // 0x260e00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x260e00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260e04:
    // 0x260e04: 0xc097c56  jal         func_25F158
label_260e08:
    if (ctx->pc == 0x260E08u) {
        ctx->pc = 0x260E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E04u;
        // 0x260e08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E0Cu;
        goto label_260e0c;
    }
    ctx->pc = 0x260E04u;
    SET_GPR_U32(ctx, 31, 0x260E0Cu);
    ctx->pc = 0x260E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E04u;
    // 0x260e08: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F158u, 0x260E04u, 0x260E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E0Cu;
label_260e0c:
    // 0x260e0c: 0x44000a1  bltz        $v0, . + 4 + (0xA1 << 2)
label_260e10:
    if (ctx->pc == 0x260E10u) {
        ctx->pc = 0x260E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E0Cu;
        // 0x260e10: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E14u;
        goto label_260e14;
    }
    ctx->pc = 0x260E0Cu;
    {
        const bool branch_taken_0x260e0c = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x260E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E0Cu;
        // 0x260e10: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e0c) {
            ctx->pc = 0x261094u;
            goto label_261094;
        }
    }
    ctx->pc = 0x260E14u;
label_260e14:
    // 0x260e14: 0xc098552  jal         func_261548
label_260e18:
    if (ctx->pc == 0x260E18u) {
        ctx->pc = 0x260E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E14u;
        // 0x260e18: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E1Cu;
        goto label_260e1c;
    }
    ctx->pc = 0x260E14u;
    SET_GPR_U32(ctx, 31, 0x260E1Cu);
    ctx->pc = 0x260E18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E14u;
    // 0x260e18: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x260E14u, 0x260E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E1Cu;
label_260e1c:
    // 0x260e1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x260e1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260e20:
    // 0x260e20: 0x16800003  bnez        $s4, . + 4 + (0x3 << 2)
label_260e24:
    if (ctx->pc == 0x260E24u) {
        ctx->pc = 0x260E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E20u;
        // 0x260e24: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E28u;
        goto label_260e28;
    }
    ctx->pc = 0x260E20u;
    {
        const bool branch_taken_0x260e20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x260E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E20u;
        // 0x260e24: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e20) {
            ctx->pc = 0x260E30u;
            goto label_260e30;
        }
    }
    ctx->pc = 0x260E28u;
label_260e28:
    // 0x260e28: 0x1000009a  b           . + 4 + (0x9A << 2)
label_260e2c:
    if (ctx->pc == 0x260E2Cu) {
        ctx->pc = 0x260E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E28u;
        // 0x260e2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E30u;
        goto label_260e30;
    }
    ctx->pc = 0x260E28u;
    {
        const bool branch_taken_0x260e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E28u;
        // 0x260e2c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e28) {
            ctx->pc = 0x261094u;
            goto label_261094;
        }
    }
    ctx->pc = 0x260E30u;
label_260e30:
    // 0x260e30: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260e30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260e34:
    // 0x260e34: 0xc049cb6  jal         func_1272D8
label_260e38:
    if (ctx->pc == 0x260E38u) {
        ctx->pc = 0x260E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E34u;
        // 0x260e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E3Cu;
        goto label_260e3c;
    }
    ctx->pc = 0x260E34u;
    SET_GPR_U32(ctx, 31, 0x260E3Cu);
    ctx->pc = 0x260E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E34u;
    // 0x260e38: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x260E34u, 0x260E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E3Cu;
label_260e3c:
    // 0x260e3c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x260e3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_260e40:
    // 0x260e40: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x260e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_260e44:
    // 0x260e44: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x260e44u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260e48:
    // 0x260e48: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x260e48u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_260e4c:
    // 0x260e4c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x260e4cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260e50:
    // 0x260e50: 0xc097c56  jal         func_25F158
label_260e54:
    if (ctx->pc == 0x260E54u) {
        ctx->pc = 0x260E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E50u;
        // 0x260e54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E58u;
        goto label_260e58;
    }
    ctx->pc = 0x260E50u;
    SET_GPR_U32(ctx, 31, 0x260E58u);
    ctx->pc = 0x260E54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E50u;
    // 0x260e54: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F158u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F158u, 0x260E50u, 0x260E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E58u;
label_260e58:
    // 0x260e58: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
label_260e5c:
    if (ctx->pc == 0x260E5Cu) {
        ctx->pc = 0x260E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E58u;
        // 0x260e5c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E60u;
        goto label_260e60;
    }
    ctx->pc = 0x260E58u;
    {
        const bool branch_taken_0x260e58 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x260E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E58u;
        // 0x260e5c: 0x8fa30020  lw          $v1, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e58) {
            ctx->pc = 0x260E90u;
            goto label_260e90;
        }
    }
    ctx->pc = 0x260E60u;
label_260e60:
    // 0x260e60: 0xc0972fa  jal         func_25CBE8
label_260e64:
    if (ctx->pc == 0x260E64u) {
        ctx->pc = 0x260E68u;
        goto label_260e68;
    }
    ctx->pc = 0x260E60u;
    SET_GPR_U32(ctx, 31, 0x260E68u);
    ctx->pc = 0x25CBE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25CBE8u, 0x260E60u, 0x260E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E68u;
label_260e68:
    // 0x260e68: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x260e68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_260e6c:
    // 0x260e6c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x260e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_260e70:
    // 0x260e70: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
label_260e74:
    if (ctx->pc == 0x260E74u) {
        ctx->pc = 0x260E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E70u;
        // 0x260e74: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E78u;
        goto label_260e78;
    }
    ctx->pc = 0x260E70u;
    {
        const bool branch_taken_0x260e70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x260E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E70u;
        // 0x260e74: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e70) {
            ctx->pc = 0x260E88u;
            goto label_260e88;
        }
    }
    ctx->pc = 0x260E78u;
label_260e78:
    // 0x260e78: 0xc098560  jal         func_261580
label_260e7c:
    if (ctx->pc == 0x260E7Cu) {
        ctx->pc = 0x260E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E78u;
        // 0x260e7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E80u;
        goto label_260e80;
    }
    ctx->pc = 0x260E78u;
    SET_GPR_U32(ctx, 31, 0x260E80u);
    ctx->pc = 0x260E7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260E78u;
    // 0x260e7c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x260E78u, 0x260E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260E80u;
label_260e80:
    // 0x260e80: 0x1000ffd3  b           . + 4 + (-0x2D << 2)
label_260e84:
    if (ctx->pc == 0x260E84u) {
        ctx->pc = 0x260E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E80u;
        // 0x260e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E88u;
        goto label_260e88;
    }
    ctx->pc = 0x260E80u;
    {
        const bool branch_taken_0x260e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E80u;
        // 0x260e84: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e80) {
            ctx->pc = 0x260DD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_260dd0;
        }
    }
    ctx->pc = 0x260E88u;
label_260e88:
    // 0x260e88: 0x1000007f  b           . + 4 + (0x7F << 2)
label_260e8c:
    if (ctx->pc == 0x260E8Cu) {
        ctx->pc = 0x260E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E88u;
        // 0x260e8c: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260E90u;
        goto label_260e90;
    }
    ctx->pc = 0x260E88u;
    {
        const bool branch_taken_0x260e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E88u;
        // 0x260e8c: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e88) {
            ctx->pc = 0x261088u;
            goto label_261088;
        }
    }
    ctx->pc = 0x260E90u;
label_260e90:
    // 0x260e90: 0x283f021  addu        $fp, $s4, $v1
    ctx->pc = 0x260e90u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_260e94:
    // 0x260e94: 0x29e102b  sltu        $v0, $s4, $fp
    ctx->pc = 0x260e94u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_260e98:
    // 0x260e98: 0x10400079  beqz        $v0, . + 4 + (0x79 << 2)
label_260e9c:
    if (ctx->pc == 0x260E9Cu) {
        ctx->pc = 0x260E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E98u;
        // 0x260e9c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EA0u;
        goto label_260ea0;
    }
    ctx->pc = 0x260E98u;
    {
        const bool branch_taken_0x260e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260E98u;
        // 0x260e9c: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260e98) {
            ctx->pc = 0x261080u;
            goto label_261080;
        }
    }
    ctx->pc = 0x260EA0u;
label_260ea0:
    // 0x260ea0: 0x8e820008  lw          $v0, 0x8($s4)
    ctx->pc = 0x260ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_260ea4:
    // 0x260ea4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x260ea4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_260ea8:
    // 0x260ea8: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
label_260eac:
    if (ctx->pc == 0x260EACu) {
        ctx->pc = 0x260EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EA8u;
        // 0x260eac: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EB0u;
        goto label_260eb0;
    }
    ctx->pc = 0x260EA8u;
    {
        const bool branch_taken_0x260ea8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x260EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EA8u;
        // 0x260eac: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ea8) {
            ctx->pc = 0x261020u;
            goto label_261020;
        }
    }
    ctx->pc = 0x260EB0u;
label_260eb0:
    // 0x260eb0: 0x26900078  addiu       $s0, $s4, 0x78
    ctx->pc = 0x260eb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 120));
label_260eb4:
    // 0x260eb4: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x260eb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_260eb8:
    // 0x260eb8: 0x5456005a  bnel        $v0, $s6, . + 4 + (0x5A << 2)
label_260ebc:
    if (ctx->pc == 0x260EBCu) {
        ctx->pc = 0x260EBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EB8u;
        // 0x260ebc: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EC0u;
        goto label_260ec0;
    }
    ctx->pc = 0x260EB8u;
    {
        const bool branch_taken_0x260eb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x260eb8) {
            ctx->pc = 0x260EBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260EB8u;
            // 0x260ebc: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261024u;
            goto label_261024;
        }
    }
    ctx->pc = 0x260EC0u;
label_260ec0:
    // 0x260ec0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x260ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_260ec4:
    // 0x260ec4: 0x56c20057  bnel        $s6, $v0, . + 4 + (0x57 << 2)
label_260ec8:
    if (ctx->pc == 0x260EC8u) {
        ctx->pc = 0x260EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EC4u;
        // 0x260ec8: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260ECCu;
        goto label_260ecc;
    }
    ctx->pc = 0x260EC4u;
    {
        const bool branch_taken_0x260ec4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x260ec4) {
            ctx->pc = 0x260EC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x260EC4u;
            // 0x260ec8: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261024u;
            goto label_261024;
        }
    }
    ctx->pc = 0x260ECCu;
label_260ecc:
    // 0x260ecc: 0x12e00054  beqz        $s7, . + 4 + (0x54 << 2)
label_260ed0:
    if (ctx->pc == 0x260ED0u) {
        ctx->pc = 0x260ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ECCu;
        // 0x260ed0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260ED4u;
        goto label_260ed4;
    }
    ctx->pc = 0x260ECCu;
    {
        const bool branch_taken_0x260ecc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x260ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260ECCu;
        // 0x260ed0: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ecc) {
            ctx->pc = 0x261020u;
            goto label_261020;
        }
    }
    ctx->pc = 0x260ED4u;
label_260ed4:
    // 0x260ed4: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x260ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_260ed8:
    // 0x260ed8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x260ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_260edc:
    // 0x260edc: 0x1c400004  bgtz        $v0, . + 4 + (0x4 << 2)
label_260ee0:
    if (ctx->pc == 0x260EE0u) {
        ctx->pc = 0x260EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EDCu;
        // 0x260ee0: 0x151140  sll         $v0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EE4u;
        goto label_260ee4;
    }
    ctx->pc = 0x260EDCu;
    {
        const bool branch_taken_0x260edc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x260EE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EDCu;
        // 0x260ee0: 0x151140  sll         $v0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260edc) {
            ctx->pc = 0x260EF0u;
            goto label_260ef0;
        }
    }
    ctx->pc = 0x260EE4u;
label_260ee4:
    // 0x260ee4: 0x10000066  b           . + 4 + (0x66 << 2)
label_260ee8:
    if (ctx->pc == 0x260EE8u) {
        ctx->pc = 0x260EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EE4u;
        // 0x260ee8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260EECu;
        goto label_260eec;
    }
    ctx->pc = 0x260EE4u;
    {
        const bool branch_taken_0x260ee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260EE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260EE4u;
        // 0x260ee8: 0xa82d  daddu       $s5, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ee4) {
            ctx->pc = 0x261080u;
            goto label_261080;
        }
    }
    ctx->pc = 0x260EECu;
label_260eec:
    // 0x260eec: 0x0  nop
    ctx->pc = 0x260eecu;
    // NOP
label_260ef0:
    // 0x260ef0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260ef0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260ef4:
    // 0x260ef4: 0x2442ffe0  addiu       $v0, $v0, -0x20
    ctx->pc = 0x260ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
label_260ef8:
    // 0x260ef8: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x260ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_260efc:
    // 0x260efc: 0x2e28821  addu        $s1, $s7, $v0
    ctx->pc = 0x260efcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_260f00:
    // 0x260f00: 0xc049cb6  jal         func_1272D8
label_260f04:
    if (ctx->pc == 0x260F04u) {
        ctx->pc = 0x260F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F00u;
        // 0x260f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F08u;
        goto label_260f08;
    }
    ctx->pc = 0x260F00u;
    SET_GPR_U32(ctx, 31, 0x260F08u);
    ctx->pc = 0x260F04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F00u;
    // 0x260f04: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x260F00u, 0x260F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F08u;
label_260f08:
    // 0x260f08: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x260f08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_260f0c:
    // 0x260f0c: 0x26240004  addiu       $a0, $s1, 0x4
    ctx->pc = 0x260f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_260f10:
    // 0x260f10: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x260f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_260f14:
    // 0x260f14: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x260f14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_260f18:
    // 0x260f18: 0x30630837  andi        $v1, $v1, 0x837
    ctx->pc = 0x260f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2103);
label_260f1c:
    // 0x260f1c: 0xc08b538  jal         func_22D4E0
label_260f20:
    if (ctx->pc == 0x260F20u) {
        ctx->pc = 0x260F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F1Cu;
        // 0x260f20: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F24u;
        goto label_260f24;
    }
    ctx->pc = 0x260F1Cu;
    SET_GPR_U32(ctx, 31, 0x260F24u);
    ctx->pc = 0x260F20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F1Cu;
    // 0x260f20: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x260F1Cu, 0x260F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F24u;
label_260f24:
    // 0x260f24: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x260f24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_260f28:
    // 0x260f28: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_260f2c:
    if (ctx->pc == 0x260F2Cu) {
        ctx->pc = 0x260F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F28u;
        // 0x260f2c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F30u;
        goto label_260f30;
    }
    ctx->pc = 0x260F28u;
    {
        const bool branch_taken_0x260f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F28u;
        // 0x260f2c: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f28) {
            ctx->pc = 0x260F44u;
            goto label_260f44;
        }
    }
    ctx->pc = 0x260F30u;
label_260f30:
    // 0x260f30: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x260f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_260f34:
    // 0x260f34: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x260f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_260f38:
    // 0x260f38: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x260f38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_260f3c:
    // 0x260f3c: 0x10000002  b           . + 4 + (0x2 << 2)
label_260f40:
    if (ctx->pc == 0x260F40u) {
        ctx->pc = 0x260F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F3Cu;
        // 0x260f40: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F44u;
        goto label_260f44;
    }
    ctx->pc = 0x260F3Cu;
    {
        const bool branch_taken_0x260f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F3Cu;
        // 0x260f40: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f3c) {
            ctx->pc = 0x260F48u;
            goto label_260f48;
        }
    }
    ctx->pc = 0x260F44u;
label_260f44:
    // 0x260f44: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x260f44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_260f48:
    // 0x260f48: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x260f48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_260f4c:
    // 0x260f4c: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x260f4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_260f50:
    // 0x260f50: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_260f54:
    if (ctx->pc == 0x260F54u) {
        ctx->pc = 0x260F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F50u;
        // 0x260f54: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F58u;
        goto label_260f58;
    }
    ctx->pc = 0x260F50u;
    {
        const bool branch_taken_0x260f50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F50u;
        // 0x260f54: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f50) {
            ctx->pc = 0x260F94u;
            goto label_260f94;
        }
    }
    ctx->pc = 0x260F58u;
label_260f58:
    // 0x260f58: 0x26240008  addiu       $a0, $s1, 0x8
    ctx->pc = 0x260f58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
label_260f5c:
    // 0x260f5c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x260f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_260f60:
    // 0x260f60: 0xc08b538  jal         func_22D4E0
label_260f64:
    if (ctx->pc == 0x260F64u) {
        ctx->pc = 0x260F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F60u;
        // 0x260f64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F68u;
        goto label_260f68;
    }
    ctx->pc = 0x260F60u;
    SET_GPR_U32(ctx, 31, 0x260F68u);
    ctx->pc = 0x260F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260F60u;
    // 0x260f64: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x260F60u, 0x260F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260F68u;
label_260f68:
    // 0x260f68: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x260f68u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_260f6c:
    // 0x260f6c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_260f70:
    if (ctx->pc == 0x260F70u) {
        ctx->pc = 0x260F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F6Cu;
        // 0x260f70: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F74u;
        goto label_260f74;
    }
    ctx->pc = 0x260F6Cu;
    {
        const bool branch_taken_0x260f6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F6Cu;
        // 0x260f70: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f6c) {
            ctx->pc = 0x260F88u;
            goto label_260f88;
        }
    }
    ctx->pc = 0x260F74u;
label_260f74:
    // 0x260f74: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x260f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_260f78:
    // 0x260f78: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x260f78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_260f7c:
    // 0x260f7c: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x260f7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_260f80:
    // 0x260f80: 0x10000002  b           . + 4 + (0x2 << 2)
label_260f84:
    if (ctx->pc == 0x260F84u) {
        ctx->pc = 0x260F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F80u;
        // 0x260f84: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260F88u;
        goto label_260f88;
    }
    ctx->pc = 0x260F80u;
    {
        const bool branch_taken_0x260f80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F80u;
        // 0x260f84: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f80) {
            ctx->pc = 0x260F8Cu;
            goto label_260f8c;
        }
    }
    ctx->pc = 0x260F88u;
label_260f88:
    // 0x260f88: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x260f88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_260f8c:
    // 0x260f8c: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x260f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_260f90:
    // 0x260f90: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x260f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_260f94:
    // 0x260f94: 0x30820004  andi        $v0, $a0, 0x4
    ctx->pc = 0x260f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)4);
label_260f98:
    // 0x260f98: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_260f9c:
    if (ctx->pc == 0x260F9Cu) {
        ctx->pc = 0x260F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F98u;
        // 0x260f9c: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260FA0u;
        goto label_260fa0;
    }
    ctx->pc = 0x260F98u;
    {
        const bool branch_taken_0x260f98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260F98u;
        // 0x260f9c: 0x26050004  addiu       $a1, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260f98) {
            ctx->pc = 0x260FD8u;
            goto label_260fd8;
        }
    }
    ctx->pc = 0x260FA0u;
label_260fa0:
    // 0x260fa0: 0x2624000c  addiu       $a0, $s1, 0xC
    ctx->pc = 0x260fa0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
label_260fa4:
    // 0x260fa4: 0xc08b538  jal         func_22D4E0
label_260fa8:
    if (ctx->pc == 0x260FA8u) {
        ctx->pc = 0x260FA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FA4u;
        // 0x260fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260FACu;
        goto label_260fac;
    }
    ctx->pc = 0x260FA4u;
    SET_GPR_U32(ctx, 31, 0x260FACu);
    ctx->pc = 0x260FA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x260FA4u;
    // 0x260fa8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x260FA4u, 0x260FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260FACu;
label_260fac:
    // 0x260fac: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x260facu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_260fb0:
    // 0x260fb0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_260fb4:
    if (ctx->pc == 0x260FB4u) {
        ctx->pc = 0x260FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FB0u;
        // 0x260fb4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260FB8u;
        goto label_260fb8;
    }
    ctx->pc = 0x260FB0u;
    {
        const bool branch_taken_0x260fb0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FB0u;
        // 0x260fb4: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fb0) {
            ctx->pc = 0x260FCCu;
            goto label_260fcc;
        }
    }
    ctx->pc = 0x260FB8u;
label_260fb8:
    // 0x260fb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x260fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_260fbc:
    // 0x260fbc: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x260fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_260fc0:
    // 0x260fc0: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x260fc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_260fc4:
    // 0x260fc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_260fc8:
    if (ctx->pc == 0x260FC8u) {
        ctx->pc = 0x260FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FC4u;
        // 0x260fc8: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260FCCu;
        goto label_260fcc;
    }
    ctx->pc = 0x260FC4u;
    {
        const bool branch_taken_0x260fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FC4u;
        // 0x260fc8: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fc4) {
            ctx->pc = 0x260FD0u;
            goto label_260fd0;
        }
    }
    ctx->pc = 0x260FCCu;
label_260fcc:
    // 0x260fcc: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x260fccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_260fd0:
    // 0x260fd0: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x260fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_260fd4:
    // 0x260fd4: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x260fd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_260fd8:
    // 0x260fd8: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x260fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_260fdc:
    // 0x260fdc: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_260fe0:
    if (ctx->pc == 0x260FE0u) {
        ctx->pc = 0x260FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FDCu;
        // 0x260fe0: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        ctx->pc = 0x260FE4u;
        goto label_260fe4;
    }
    ctx->pc = 0x260FDCu;
    {
        const bool branch_taken_0x260fdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FDCu;
        // 0x260fe0: 0x30820010  andi        $v0, $a0, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fdc) {
            ctx->pc = 0x26100Cu;
            goto label_26100c;
        }
    }
    ctx->pc = 0x260FE4u;
label_260fe4:
    // 0x260fe4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x260fe4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_260fe8:
    // 0x260fe8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_260fec:
    if (ctx->pc == 0x260FECu) {
        ctx->pc = 0x260FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FE8u;
        // 0x260fec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x260FF0u;
        goto label_260ff0;
    }
    ctx->pc = 0x260FE8u;
    {
        const bool branch_taken_0x260fe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FE8u;
        // 0x260fec: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260fe8) {
            ctx->pc = 0x261000u;
            goto label_261000;
        }
    }
    ctx->pc = 0x260FF0u;
label_260ff0:
    // 0x260ff0: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x260ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_260ff4:
    // 0x260ff4: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x260ff4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
label_260ff8:
    // 0x260ff8: 0x10000002  b           . + 4 + (0x2 << 2)
label_260ffc:
    if (ctx->pc == 0x260FFCu) {
        ctx->pc = 0x260FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FF8u;
        // 0x260ffc: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261000u;
        goto label_261000;
    }
    ctx->pc = 0x260FF8u;
    {
        const bool branch_taken_0x260ff8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260FFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x260FF8u;
        // 0x260ffc: 0x621821  addu        $v1, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ff8) {
            ctx->pc = 0x261004u;
            goto label_261004;
        }
    }
    ctx->pc = 0x261000u;
label_261000:
    // 0x261000: 0x26030008  addiu       $v1, $s0, 0x8
    ctx->pc = 0x261000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_261004:
    // 0x261004: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x261004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_261008:
    // 0x261008: 0x30820010  andi        $v0, $a0, 0x10
    ctx->pc = 0x261008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)16);
label_26100c:
    // 0x26100c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_261010:
    if (ctx->pc == 0x261010u) {
        ctx->pc = 0x261010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26100Cu;
        // 0x261010: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261014u;
        goto label_261014;
    }
    ctx->pc = 0x26100Cu;
    {
        const bool branch_taken_0x26100c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26100Cu;
        // 0x261010: 0x26240010  addiu       $a0, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26100c) {
            ctx->pc = 0x261020u;
            goto label_261020;
        }
    }
    ctx->pc = 0x261014u;
label_261014:
    // 0x261014: 0x92060005  lbu         $a2, 0x5($s0)
    ctx->pc = 0x261014u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_261018:
    // 0x261018: 0xc08b538  jal         func_22D4E0
label_26101c:
    if (ctx->pc == 0x26101Cu) {
        ctx->pc = 0x26101Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261018u;
        // 0x26101c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261020u;
        goto label_261020;
    }
    ctx->pc = 0x261018u;
    SET_GPR_U32(ctx, 31, 0x261020u);
    ctx->pc = 0x26101Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261018u;
    // 0x26101c: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x261018u, 0x261020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261020u;
label_261020:
    // 0x261020: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x261020u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_261024:
    // 0x261024: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x261024u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_261028:
    // 0x261028: 0x27e182b  sltu        $v1, $s3, $fp
    ctx->pc = 0x261028u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 30)) ? 1 : 0);
label_26102c:
    // 0x26102c: 0x10600015  beqz        $v1, . + 4 + (0x15 << 2)
label_261030:
    if (ctx->pc == 0x261030u) {
        ctx->pc = 0x261030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26102Cu;
        // 0x261030: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261034u;
        goto label_261034;
    }
    ctx->pc = 0x26102Cu;
    {
        const bool branch_taken_0x26102c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x261030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26102Cu;
        // 0x261030: 0x8fa20024  lw          $v0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26102c) {
            ctx->pc = 0x261084u;
            goto label_261084;
        }
    }
    ctx->pc = 0x261034u;
label_261034:
    // 0x261034: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x261034u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
label_261038:
    // 0x261038: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x261038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_26103c:
    // 0x26103c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
label_261040:
    if (ctx->pc == 0x261040u) {
        ctx->pc = 0x261040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26103Cu;
        // 0x261040: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261044u;
        goto label_261044;
    }
    ctx->pc = 0x26103Cu;
    {
        const bool branch_taken_0x26103c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x261040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26103Cu;
        // 0x261040: 0x260902d  daddu       $s2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26103c) {
            ctx->pc = 0x261020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261020;
        }
    }
    ctx->pc = 0x261044u;
label_261044:
    // 0x261044: 0x26700078  addiu       $s0, $s3, 0x78
    ctx->pc = 0x261044u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 120));
label_261048:
    // 0x261048: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x261048u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_26104c:
    // 0x26104c: 0x5456fff5  bnel        $v0, $s6, . + 4 + (-0xB << 2)
label_261050:
    if (ctx->pc == 0x261050u) {
        ctx->pc = 0x261050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26104Cu;
        // 0x261050: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261054u;
        goto label_261054;
    }
    ctx->pc = 0x26104Cu;
    {
        const bool branch_taken_0x26104c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        if (branch_taken_0x26104c) {
            ctx->pc = 0x261050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26104Cu;
            // 0x261050: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261024u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261024;
        }
    }
    ctx->pc = 0x261054u;
label_261054:
    // 0x261054: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x261054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_261058:
    // 0x261058: 0x56c2fff2  bnel        $s6, $v0, . + 4 + (-0xE << 2)
label_26105c:
    if (ctx->pc == 0x26105Cu) {
        ctx->pc = 0x26105Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261058u;
        // 0x26105c: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261060u;
        goto label_261060;
    }
    ctx->pc = 0x261058u;
    {
        const bool branch_taken_0x261058 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 2));
        if (branch_taken_0x261058) {
            ctx->pc = 0x26105Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261058u;
            // 0x26105c: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261024u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261024;
        }
    }
    ctx->pc = 0x261060u;
label_261060:
    // 0x261060: 0x12e0ffef  beqz        $s7, . + 4 + (-0x11 << 2)
label_261064:
    if (ctx->pc == 0x261064u) {
        ctx->pc = 0x261064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261060u;
        // 0x261064: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261068u;
        goto label_261068;
    }
    ctx->pc = 0x261060u;
    {
        const bool branch_taken_0x261060 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x261064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261060u;
        // 0x261064: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261060) {
            ctx->pc = 0x261020u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261020;
        }
    }
    ctx->pc = 0x261068u;
label_261068:
    // 0x261068: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x261068u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_26106c:
    // 0x26106c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x26106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_261070:
    // 0x261070: 0x55102a  slt         $v0, $v0, $s5
    ctx->pc = 0x261070u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 21)) ? 1 : 0);
label_261074:
    // 0x261074: 0x1040ff9e  beqz        $v0, . + 4 + (-0x62 << 2)
label_261078:
    if (ctx->pc == 0x261078u) {
        ctx->pc = 0x261078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261074u;
        // 0x261078: 0x151140  sll         $v0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26107Cu;
        goto label_26107c;
    }
    ctx->pc = 0x261074u;
    {
        const bool branch_taken_0x261074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x261078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261074u;
        // 0x261078: 0x151140  sll         $v0, $s5, 5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 21), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261074) {
            ctx->pc = 0x260EF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_260ef0;
        }
    }
    ctx->pc = 0x26107Cu;
label_26107c:
    // 0x26107c: 0x26b5ffff  addiu       $s5, $s5, -0x1
    ctx->pc = 0x26107cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_261080:
    // 0x261080: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x261080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_261084:
    // 0x261084: 0xac550000  sw          $s5, 0x0($v0)
    ctx->pc = 0x261084u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 21));
label_261088:
    // 0x261088: 0xc098560  jal         func_261580
label_26108c:
    if (ctx->pc == 0x26108Cu) {
        ctx->pc = 0x26108Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261088u;
        // 0x26108c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261090u;
        goto label_261090;
    }
    ctx->pc = 0x261088u;
    SET_GPR_U32(ctx, 31, 0x261090u);
    ctx->pc = 0x26108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261088u;
    // 0x26108c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x261088u, 0x261090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261090u;
label_261090:
    // 0x261090: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x261090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_261094:
    // 0x261094: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x261094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_261098:
    // 0x261098: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x261098u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_26109c:
    // 0x26109c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x26109cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2610a0:
    // 0x2610a0: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2610a0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2610a4:
    // 0x2610a4: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2610a4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2610a8:
    // 0x2610a8: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2610a8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2610ac:
    // 0x2610ac: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2610acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2610b0:
    // 0x2610b0: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2610b0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2610b4:
    // 0x2610b4: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2610b4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2610b8:
    // 0x2610b8: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2610b8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2610bc:
    // 0x2610bc: 0x3e00008  jr          $ra
label_2610c0:
    if (ctx->pc == 0x2610C0u) {
        ctx->pc = 0x2610C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610BCu;
        // 0x2610c0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610C4u;
        goto label_2610c4;
    }
    ctx->pc = 0x2610BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2610C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610BCu;
        // 0x2610c0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2610BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2610C4u;
label_2610c4:
    // 0x2610c4: 0x0  nop
    ctx->pc = 0x2610c4u;
    // NOP
label_2610c8:
    // 0x2610c8: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2610c8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2610cc:
    // 0x2610cc: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2610ccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2610d0:
    // 0x2610d0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x2610d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2610d4:
    // 0x2610d4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2610d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2610d8:
    // 0x2610d8: 0xc098362  jal         func_260D88
label_2610dc:
    if (ctx->pc == 0x2610DCu) {
        ctx->pc = 0x2610DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610D8u;
        // 0x2610dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610E0u;
        goto label_2610e0;
    }
    ctx->pc = 0x2610D8u;
    SET_GPR_U32(ctx, 31, 0x2610E0u);
    ctx->pc = 0x2610DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2610D8u;
    // 0x2610dc: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260D88u;
    goto label_260d88;
    ctx->pc = 0x2610E0u;
label_2610e0:
    // 0x2610e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2610e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2610e4:
    // 0x2610e4: 0x3e00008  jr          $ra
label_2610e8:
    if (ctx->pc == 0x2610E8u) {
        ctx->pc = 0x2610E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610E4u;
        // 0x2610e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610ECu;
        goto label_2610ec;
    }
    ctx->pc = 0x2610E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2610E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610E4u;
        // 0x2610e8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2610E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2610ECu;
label_2610ec:
    // 0x2610ec: 0x0  nop
    ctx->pc = 0x2610ecu;
    // NOP
label_2610f0:
    // 0x2610f0: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2610f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_2610f4:
    // 0x2610f4: 0x3e00008  jr          $ra
label_2610f8:
    if (ctx->pc == 0x2610F8u) {
        ctx->pc = 0x2610F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610F4u;
        // 0x2610f8: 0x244210a8  addiu       $v0, $v0, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2610FCu;
        goto label_2610fc;
    }
    ctx->pc = 0x2610F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2610F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2610F4u;
        // 0x2610f8: 0x244210a8  addiu       $v0, $v0, 0x10A8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4264));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2610F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2610FCu;
label_2610fc:
    // 0x2610fc: 0x0  nop
    ctx->pc = 0x2610fcu;
    // NOP
label_261100:
    // 0x261100: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x261100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_261104:
    // 0x261104: 0x3e00008  jr          $ra
label_261108:
    if (ctx->pc == 0x261108u) {
        ctx->pc = 0x261108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261104u;
        // 0x261108: 0x24421308  addiu       $v0, $v0, 0x1308 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26110Cu;
        goto label_26110c;
    }
    ctx->pc = 0x261104u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261104u;
        // 0x261108: 0x24421308  addiu       $v0, $v0, 0x1308 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4872));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261104u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26110Cu;
label_26110c:
    // 0x26110c: 0x0  nop
    ctx->pc = 0x26110cu;
    // NOP
label_261110:
    // 0x261110: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x261110u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_261114:
    // 0x261114: 0x3e00008  jr          $ra
label_261118:
    if (ctx->pc == 0x261118u) {
        ctx->pc = 0x261118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261114u;
        // 0x261118: 0x24421708  addiu       $v0, $v0, 0x1708 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5896));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26111Cu;
        goto label_26111c;
    }
    ctx->pc = 0x261114u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261114u;
        // 0x261118: 0x24421708  addiu       $v0, $v0, 0x1708 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5896));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261114u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26111Cu;
label_26111c:
    // 0x26111c: 0x0  nop
    ctx->pc = 0x26111cu;
    // NOP
label_261120:
    // 0x261120: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x261120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_261124:
    // 0x261124: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x261124u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_261128:
    // 0x261128: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x261128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_26112c:
    // 0x26112c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x26112cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_261130:
    // 0x261130: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x261130u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_261134:
    // 0x261134: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x261134u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261138:
    // 0x261138: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x261138u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_26113c:
    // 0x26113c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x26113cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_261140:
    // 0x261140: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x261140u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
label_261144:
    // 0x261144: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x261144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_261148:
    // 0x261148: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x261148u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26114c:
    // 0x26114c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x26114cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_261150:
    // 0x261150: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x261150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_261154:
    // 0x261154: 0xc08c682  jal         func_231A08
label_261158:
    if (ctx->pc == 0x261158u) {
        ctx->pc = 0x261158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261154u;
        // 0x261158: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26115Cu;
        goto label_26115c;
    }
    ctx->pc = 0x261154u;
    SET_GPR_U32(ctx, 31, 0x26115Cu);
    ctx->pc = 0x261158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261154u;
    // 0x261158: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x261154u, 0x26115Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26115Cu;
label_26115c:
    // 0x26115c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x26115cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261160:
    // 0x261160: 0x8eb012e0  lw          $s0, 0x12E0($s5)
    ctx->pc = 0x261160u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4832)));
label_261164:
    // 0x261164: 0x26a212e0  addiu       $v0, $s5, 0x12E0
    ctx->pc = 0x261164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4832));
label_261168:
    // 0x261168: 0x12020029  beq         $s0, $v0, . + 4 + (0x29 << 2)
label_26116c:
    if (ctx->pc == 0x26116Cu) {
        ctx->pc = 0x261170u;
        goto label_261170;
    }
    ctx->pc = 0x261168u;
    {
        const bool branch_taken_0x261168 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x261168) {
            ctx->pc = 0x261210u;
            goto label_261210;
        }
    }
    ctx->pc = 0x261170u;
label_261170:
    // 0x261170: 0x1260001c  beqz        $s3, . + 4 + (0x1C << 2)
label_261174:
    if (ctx->pc == 0x261174u) {
        ctx->pc = 0x261174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261170u;
        // 0x261174: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261178u;
        goto label_261178;
    }
    ctx->pc = 0x261170u;
    {
        const bool branch_taken_0x261170 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x261174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261170u;
        // 0x261174: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261170) {
            ctx->pc = 0x2611E4u;
            goto label_2611e4;
        }
    }
    ctx->pc = 0x261178u;
label_261178:
    // 0x261178: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x261178u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26117c:
    // 0x26117c: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
label_261180:
    if (ctx->pc == 0x261180u) {
        ctx->pc = 0x261180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26117Cu;
        // 0x261180: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261184u;
        goto label_261184;
    }
    ctx->pc = 0x26117Cu;
    {
        const bool branch_taken_0x26117c = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x26117c) {
            ctx->pc = 0x261180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x26117Cu;
            // 0x261180: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261190u;
            goto label_261190;
        }
    }
    ctx->pc = 0x261184u;
label_261184:
    // 0x261184: 0x10000022  b           . + 4 + (0x22 << 2)
label_261188:
    if (ctx->pc == 0x261188u) {
        ctx->pc = 0x261188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261184u;
        // 0x261188: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26118Cu;
        goto label_26118c;
    }
    ctx->pc = 0x261184u;
    {
        const bool branch_taken_0x261184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x261188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261184u;
        // 0x261188: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261184) {
            ctx->pc = 0x261210u;
            goto label_261210;
        }
    }
    ctx->pc = 0x26118Cu;
label_26118c:
    // 0x26118c: 0x0  nop
    ctx->pc = 0x26118cu;
    // NOP
label_261190:
    // 0x261190: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x261190u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_261194:
    // 0x261194: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x261194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_261198:
    // 0x261198: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x261198u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_26119c:
    // 0x26119c: 0xdc620080  ld          $v0, 0x80($v1)
    ctx->pc = 0x26119cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 128)));
label_2611a0:
    // 0x2611a0: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2611a0u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_2611a4:
    // 0x2611a4: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2611a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2611a8:
    // 0x2611a8: 0xdc620048  ld          $v0, 0x48($v1)
    ctx->pc = 0x2611a8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 72)));
label_2611ac:
    // 0x2611ac: 0xc08b538  jal         func_22D4E0
label_2611b0:
    if (ctx->pc == 0x2611B0u) {
        ctx->pc = 0x2611B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611ACu;
        // 0x2611b0: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611B4u;
        goto label_2611b4;
    }
    ctx->pc = 0x2611ACu;
    SET_GPR_U32(ctx, 31, 0x2611B4u);
    ctx->pc = 0x2611B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611ACu;
    // 0x2611b0: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2611ACu, 0x2611B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611B4u;
label_2611b4:
    // 0x2611b4: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x2611b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2611b8:
    // 0x2611b8: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x2611b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_2611bc:
    // 0x2611bc: 0xc08b538  jal         func_22D4E0
label_2611c0:
    if (ctx->pc == 0x2611C0u) {
        ctx->pc = 0x2611C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611BCu;
        // 0x2611c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611C4u;
        goto label_2611c4;
    }
    ctx->pc = 0x2611BCu;
    SET_GPR_U32(ctx, 31, 0x2611C4u);
    ctx->pc = 0x2611C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2611BCu;
    // 0x2611c0: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2611BCu, 0x2611C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2611C4u;
label_2611c4:
    // 0x2611c4: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x2611c4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_2611c8:
    // 0x2611c8: 0xa6230018  sh          $v1, 0x18($s1)
    ctx->pc = 0x2611c8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 3));
label_2611cc:
    // 0x2611cc: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x2611ccu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_2611d0:
    // 0x2611d0: 0xa622001a  sh          $v0, 0x1A($s1)
    ctx->pc = 0x2611d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 2));
label_2611d4:
    // 0x2611d4: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2611d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2611d8:
    // 0x2611d8: 0x94620018  lhu         $v0, 0x18($v1)
    ctx->pc = 0x2611d8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_2611dc:
    // 0x2611dc: 0xa622001c  sh          $v0, 0x1C($s1)
    ctx->pc = 0x2611dcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 28), (uint16_t)GPR_U32(ctx, 2));
label_2611e0:
    // 0x2611e0: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2611e0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_2611e4:
    // 0x2611e4: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x2611e4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2611e8:
    // 0x2611e8: 0x26a212e0  addiu       $v0, $s5, 0x12E0
    ctx->pc = 0x2611e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4832));
label_2611ec:
    // 0x2611ec: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_2611f0:
    if (ctx->pc == 0x2611F0u) {
        ctx->pc = 0x2611F4u;
        goto label_2611f4;
    }
    ctx->pc = 0x2611ECu;
    {
        const bool branch_taken_0x2611ec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x2611ec) {
            ctx->pc = 0x261210u;
            goto label_261210;
        }
    }
    ctx->pc = 0x2611F4u;
label_2611f4:
    // 0x2611f4: 0x1260fffb  beqz        $s3, . + 4 + (-0x5 << 2)
label_2611f8:
    if (ctx->pc == 0x2611F8u) {
        ctx->pc = 0x2611F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611F4u;
        // 0x2611f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2611FCu;
        goto label_2611fc;
    }
    ctx->pc = 0x2611F4u;
    {
        const bool branch_taken_0x2611f4 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2611F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2611F4u;
        // 0x2611f8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2611f4) {
            ctx->pc = 0x2611E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2611e4;
        }
    }
    ctx->pc = 0x2611FCu;
label_2611fc:
    // 0x2611fc: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2611fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_261200:
    // 0x261200: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x261200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_261204:
    // 0x261204: 0x5040ffe2  beql        $v0, $zero, . + 4 + (-0x1E << 2)
label_261208:
    if (ctx->pc == 0x261208u) {
        ctx->pc = 0x261208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261204u;
        // 0x261208: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x26120Cu;
        goto label_26120c;
    }
    ctx->pc = 0x261204u;
    {
        const bool branch_taken_0x261204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261204) {
            ctx->pc = 0x261208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261204u;
            // 0x261208: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x261190u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261190;
        }
    }
    ctx->pc = 0x26120Cu;
label_26120c:
    // 0x26120c: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x26120cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_261210:
    // 0x261210: 0xc08c698  jal         func_231A60
label_261214:
    if (ctx->pc == 0x261214u) {
        ctx->pc = 0x261214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261210u;
        // 0x261214: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261218u;
        goto label_261218;
    }
    ctx->pc = 0x261210u;
    SET_GPR_U32(ctx, 31, 0x261218u);
    ctx->pc = 0x261214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x261210u;
    // 0x261214: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x261210u, 0x261218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261218u;
label_261218:
    // 0x261218: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x261218u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_26121c:
    // 0x26121c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26121cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261220:
    // 0x261220: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x261220u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_261224:
    // 0x261224: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x261224u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_261228:
    // 0x261228: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x261228u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_26122c:
    // 0x26122c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x26122cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_261230:
    // 0x261230: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x261230u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_261234:
    // 0x261234: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x261234u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_261238:
    // 0x261238: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x261238u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_26123c:
    // 0x26123c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x26123cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261240:
    // 0x261240: 0x3e00008  jr          $ra
label_261244:
    if (ctx->pc == 0x261244u) {
        ctx->pc = 0x261244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261240u;
        // 0x261244: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261248u;
        goto label_261248;
    }
    ctx->pc = 0x261240u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261240u;
        // 0x261244: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261240u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261248u;
label_261248:
    // 0x261248: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x261248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
label_26124c:
    // 0x26124c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x26124cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_261250:
    // 0x261250: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x261250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_261254:
    // 0x261254: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x261254u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_261258:
    // 0x261258: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x261258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_26125c:
    // 0x26125c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x26125cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_261260:
    // 0x261260: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x261260u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_261264:
    // 0x261264: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x261264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_261268:
    // 0x261268: 0x3c15003a  lui         $s5, 0x3A
    ctx->pc = 0x261268u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)58 << 16));
label_26126c:
    // 0x26126c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x26126cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_261270:
    // 0x261270: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x261270u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_261274:
    // 0x261274: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261274u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_261278:
    // 0x261278: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x261278u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_26127c:
    // 0x26127c: 0xc08c682  jal         func_231A08
label_261280:
    if (ctx->pc == 0x261280u) {
        ctx->pc = 0x261280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26127Cu;
        // 0x261280: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261284u;
        goto label_261284;
    }
    ctx->pc = 0x26127Cu;
    SET_GPR_U32(ctx, 31, 0x261284u);
    ctx->pc = 0x261280u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26127Cu;
    // 0x261280: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x26127Cu, 0x261284u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261284u;
label_261284:
    // 0x261284: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x261284u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261288:
    // 0x261288: 0x8eb016e0  lw          $s0, 0x16E0($s5)
    ctx->pc = 0x261288u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 5856)));
label_26128c:
    // 0x26128c: 0x26a216e0  addiu       $v0, $s5, 0x16E0
    ctx->pc = 0x26128cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5856));
label_261290:
    // 0x261290: 0x12020026  beq         $s0, $v0, . + 4 + (0x26 << 2)
label_261294:
    if (ctx->pc == 0x261294u) {
        ctx->pc = 0x261298u;
        goto label_261298;
    }
    ctx->pc = 0x261290u;
    {
        const bool branch_taken_0x261290 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x261290) {
            ctx->pc = 0x26132Cu;
            goto label_26132c;
        }
    }
    ctx->pc = 0x261298u;
label_261298:
    // 0x261298: 0x12600019  beqz        $s3, . + 4 + (0x19 << 2)
label_26129c:
    if (ctx->pc == 0x26129Cu) {
        ctx->pc = 0x26129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261298u;
        // 0x26129c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612A0u;
        goto label_2612a0;
    }
    ctx->pc = 0x261298u;
    {
        const bool branch_taken_0x261298 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x26129Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261298u;
        // 0x26129c: 0x24120001  addiu       $s2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261298) {
            ctx->pc = 0x261300u;
            goto label_261300;
        }
    }
    ctx->pc = 0x2612A0u;
label_2612a0:
    // 0x2612a0: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x2612a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_2612a4:
    // 0x2612a4: 0x5c400004  bgtzl       $v0, . + 4 + (0x4 << 2)
label_2612a8:
    if (ctx->pc == 0x2612A8u) {
        ctx->pc = 0x2612A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612A4u;
        // 0x2612a8: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612ACu;
        goto label_2612ac;
    }
    ctx->pc = 0x2612A4u;
    {
        const bool branch_taken_0x2612a4 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x2612a4) {
            ctx->pc = 0x2612A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2612A4u;
            // 0x2612a8: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2612B8u;
            goto label_2612b8;
        }
    }
    ctx->pc = 0x2612ACu;
label_2612ac:
    // 0x2612ac: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2612b0:
    if (ctx->pc == 0x2612B0u) {
        ctx->pc = 0x2612B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612ACu;
        // 0x2612b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612B4u;
        goto label_2612b4;
    }
    ctx->pc = 0x2612ACu;
    {
        const bool branch_taken_0x2612ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2612B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612ACu;
        // 0x2612b0: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2612ac) {
            ctx->pc = 0x26132Cu;
            goto label_26132c;
        }
    }
    ctx->pc = 0x2612B4u;
label_2612b4:
    // 0x2612b4: 0x0  nop
    ctx->pc = 0x2612b4u;
    // NOP
label_2612b8:
    // 0x2612b8: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x2612b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_2612bc:
    // 0x2612bc: 0x26050044  addiu       $a1, $s0, 0x44
    ctx->pc = 0x2612bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 68));
label_2612c0:
    // 0x2612c0: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2612c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2612c4:
    // 0x2612c4: 0xdc620080  ld          $v0, 0x80($v1)
    ctx->pc = 0x2612c4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 128)));
label_2612c8:
    // 0x2612c8: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x2612c8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_2612cc:
    // 0x2612cc: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x2612ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_2612d0:
    // 0x2612d0: 0xdc620048  ld          $v0, 0x48($v1)
    ctx->pc = 0x2612d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 72)));
label_2612d4:
    // 0x2612d4: 0xc08b538  jal         func_22D4E0
label_2612d8:
    if (ctx->pc == 0x2612D8u) {
        ctx->pc = 0x2612D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612D4u;
        // 0x2612d8: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612DCu;
        goto label_2612dc;
    }
    ctx->pc = 0x2612D4u;
    SET_GPR_U32(ctx, 31, 0x2612DCu);
    ctx->pc = 0x2612D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2612D4u;
    // 0x2612d8: 0xfe220008  sd          $v0, 0x8($s1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2612D4u, 0x2612DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2612DCu;
label_2612dc:
    // 0x2612dc: 0x26240014  addiu       $a0, $s1, 0x14
    ctx->pc = 0x2612dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_2612e0:
    // 0x2612e0: 0x26050048  addiu       $a1, $s0, 0x48
    ctx->pc = 0x2612e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 72));
label_2612e4:
    // 0x2612e4: 0xc08b538  jal         func_22D4E0
label_2612e8:
    if (ctx->pc == 0x2612E8u) {
        ctx->pc = 0x2612E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2612E4u;
        // 0x2612e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2612ECu;
        goto label_2612ec;
    }
    ctx->pc = 0x2612E4u;
    SET_GPR_U32(ctx, 31, 0x2612ECu);
    ctx->pc = 0x2612E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2612E4u;
    // 0x2612e8: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x2612E4u, 0x2612ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2612ECu;
label_2612ec:
    // 0x2612ec: 0x9603001a  lhu         $v1, 0x1A($s0)
    ctx->pc = 0x2612ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 26)));
label_2612f0:
    // 0x2612f0: 0xa6230018  sh          $v1, 0x18($s1)
    ctx->pc = 0x2612f0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 24), (uint16_t)GPR_U32(ctx, 3));
label_2612f4:
    // 0x2612f4: 0x96020018  lhu         $v0, 0x18($s0)
    ctx->pc = 0x2612f4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 24)));
label_2612f8:
    // 0x2612f8: 0xa622001a  sh          $v0, 0x1A($s1)
    ctx->pc = 0x2612f8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 26), (uint16_t)GPR_U32(ctx, 2));
label_2612fc:
    // 0x2612fc: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x2612fcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
label_261300:
    // 0x261300: 0x8e100008  lw          $s0, 0x8($s0)
    ctx->pc = 0x261300u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_261304:
    // 0x261304: 0x26a216e0  addiu       $v0, $s5, 0x16E0
    ctx->pc = 0x261304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 5856));
label_261308:
    // 0x261308: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
label_26130c:
    if (ctx->pc == 0x26130Cu) {
        ctx->pc = 0x261310u;
        goto label_261310;
    }
    ctx->pc = 0x261308u;
    {
        const bool branch_taken_0x261308 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        if (branch_taken_0x261308) {
            ctx->pc = 0x26132Cu;
            goto label_26132c;
        }
    }
    ctx->pc = 0x261310u;
label_261310:
    // 0x261310: 0x1260fffb  beqz        $s3, . + 4 + (-0x5 << 2)
label_261314:
    if (ctx->pc == 0x261314u) {
        ctx->pc = 0x261314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261310u;
        // 0x261314: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261318u;
        goto label_261318;
    }
    ctx->pc = 0x261310u;
    {
        const bool branch_taken_0x261310 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x261314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261310u;
        // 0x261314: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x261310) {
            ctx->pc = 0x261300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_261300;
        }
    }
    ctx->pc = 0x261318u;
label_261318:
    // 0x261318: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x261318u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_26131c:
    // 0x26131c: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x26131cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_261320:
    // 0x261320: 0x5040ffe5  beql        $v0, $zero, . + 4 + (-0x1B << 2)
label_261324:
    if (ctx->pc == 0x261324u) {
        ctx->pc = 0x261324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261320u;
        // 0x261324: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261328u;
        goto label_261328;
    }
    ctx->pc = 0x261320u;
    {
        const bool branch_taken_0x261320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x261320) {
            ctx->pc = 0x261324u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x261320u;
            // 0x261324: 0x8e03001c  lw          $v1, 0x1C($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2612B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2612b8;
        }
    }
    ctx->pc = 0x261328u;
label_261328:
    // 0x261328: 0x2652ffff  addiu       $s2, $s2, -0x1
    ctx->pc = 0x261328u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
label_26132c:
    // 0x26132c: 0xc08c698  jal         func_231A60
label_261330:
    if (ctx->pc == 0x261330u) {
        ctx->pc = 0x261330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26132Cu;
        // 0x261330: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261334u;
        goto label_261334;
    }
    ctx->pc = 0x26132Cu;
    SET_GPR_U32(ctx, 31, 0x261334u);
    ctx->pc = 0x261330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x26132Cu;
    // 0x261330: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x26132Cu, 0x261334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x261334u;
label_261334:
    // 0x261334: 0xae920000  sw          $s2, 0x0($s4)
    ctx->pc = 0x261334u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 18));
label_261338:
    // 0x261338: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x261338u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26133c:
    // 0x26133c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x26133cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_261340:
    // 0x261340: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x261340u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_261344:
    // 0x261344: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x261344u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_261348:
    // 0x261348: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x261348u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_26134c:
    // 0x26134c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x26134cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_261350:
    // 0x261350: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x261350u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_261354:
    // 0x261354: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x261354u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_261358:
    // 0x261358: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261358u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26135c:
    // 0x26135c: 0x3e00008  jr          $ra
label_261360:
    if (ctx->pc == 0x261360u) {
        ctx->pc = 0x261360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26135Cu;
        // 0x261360: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261364u;
        goto label_261364;
    }
    ctx->pc = 0x26135Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26135Cu;
        // 0x261360: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26135Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261364u;
label_261364:
    // 0x261364: 0x0  nop
    ctx->pc = 0x261364u;
    // NOP
label_261368:
    // 0x261368: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x261368u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26136c:
    // 0x26136c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26136cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_261370:
    // 0x261370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_261374:
    // 0x261374: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x261374u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_261378:
    // 0x261378: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x261378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26137c:
    // 0x26137c: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x26137cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
label_261380:
    // 0x261380: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x261380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_261384:
    // 0x261384: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x261384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_261388:
    // 0x261388: 0x8c43ced8  lw          $v1, -0x3128($v0)
    ctx->pc = 0x261388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954712)));
label_26138c:
    // 0x26138c: 0xacc5cee8  sw          $a1, -0x3118($a2)
    ctx->pc = 0x26138cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954728), GPR_U32(ctx, 5));
label_261390:
    // 0x261390: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x261390u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_261394:
    // 0x261394: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x261394u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
label_261398:
    // 0x261398: 0x8ca2cec8  lw          $v0, -0x3138($a1)
    ctx->pc = 0x261398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954696)));
label_26139c:
    // 0x26139c: 0x40f809  jalr        $v0
label_2613a0:
    if (ctx->pc == 0x2613A0u) {
        ctx->pc = 0x2613A4u;
        goto label_2613a4;
    }
    ctx->pc = 0x26139Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2613A4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26139Cu, 0x2613A4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2613A4u;
label_2613a4:
    // 0x2613a4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2613a4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2613a8:
    // 0x2613a8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2613a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2613ac:
    // 0x2613ac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2613acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2613b0:
    // 0x2613b0: 0x3e00008  jr          $ra
label_2613b4:
    if (ctx->pc == 0x2613B4u) {
        ctx->pc = 0x2613B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613B0u;
        // 0x2613b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2613B8u;
        goto label_2613b8;
    }
    ctx->pc = 0x2613B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2613B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2613B0u;
        // 0x2613b4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2613B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2613B8u;
label_2613b8:
    // 0x2613b8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2613b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2613bc:
    // 0x2613bc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2613bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2613c0:
    // 0x2613c0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2613c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2613c4:
    // 0x2613c4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2613c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2613c8:
    // 0x2613c8: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x2613c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2613cc:
    // 0x2613cc: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x2613ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
label_2613d0:
    // 0x2613d0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x2613d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2613d4:
    // 0x2613d4: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2613d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_2613d8:
    // 0x2613d8: 0x8c43cedc  lw          $v1, -0x3124($v0)
    ctx->pc = 0x2613d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294954716)));
label_2613dc:
    // 0x2613dc: 0xace6cee8  sw          $a2, -0x3118($a3)
    ctx->pc = 0x2613dcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954728), GPR_U32(ctx, 6));
label_2613e0:
    // 0x2613e0: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2613e0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2613e4:
    // 0x2613e4: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x2613e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
label_2613e8:
    // 0x2613e8: 0x8cc2cecc  lw          $v0, -0x3134($a2)
    ctx->pc = 0x2613e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4294954700)));
label_2613ec:
    // 0x2613ec: 0x40f809  jalr        $v0
label_2613f0:
    if (ctx->pc == 0x2613F0u) {
        ctx->pc = 0x2613F4u;
        goto label_2613f4;
    }
    ctx->pc = 0x2613ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2613F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2613ECu, 0x2613F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2613F4u;
label_2613f4:
    // 0x2613f4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2613f4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2613f8:
    // 0x2613f8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2613f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2613fc:
    // 0x2613fc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2613fcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_261400:
    // 0x261400: 0x3e00008  jr          $ra
label_261404:
    if (ctx->pc == 0x261404u) {
        ctx->pc = 0x261404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261400u;
        // 0x261404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261408u;
        goto label_261408;
    }
    ctx->pc = 0x261400u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261400u;
        // 0x261404: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261400u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261408u;
label_261408:
    // 0x261408: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x261408u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26140c:
    // 0x26140c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26140cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_261410:
    // 0x261410: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261410u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_261414:
    // 0x261414: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x261414u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_261418:
    // 0x261418: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x261418u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26141c:
    // 0x26141c: 0x3c0701c1  lui         $a3, 0x1C1
    ctx->pc = 0x26141cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)449 << 16));
label_261420:
    // 0x261420: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x261420u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261424:
    // 0x261424: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x261424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
label_261428:
    // 0x261428: 0x8c62ced0  lw          $v0, -0x3130($v1)
    ctx->pc = 0x261428u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954704)));
label_26142c:
    // 0x26142c: 0xace6cee8  sw          $a2, -0x3118($a3)
    ctx->pc = 0x26142cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294954728), GPR_U32(ctx, 6));
label_261430:
    // 0x261430: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x261430u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261434:
    // 0x261434: 0x8c62ced0  lw          $v0, -0x3130($v1)
    ctx->pc = 0x261434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294954704)));
label_261438:
    // 0x261438: 0x40f809  jalr        $v0
label_26143c:
    if (ctx->pc == 0x26143Cu) {
        ctx->pc = 0x261440u;
        goto label_261440;
    }
    ctx->pc = 0x261438u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x261440u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261438u, 0x261440u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261440u;
label_261440:
    // 0x261440: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x261440u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261444:
    // 0x261444: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x261444u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_261448:
    // 0x261448: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26144c:
    // 0x26144c: 0x3e00008  jr          $ra
label_261450:
    if (ctx->pc == 0x261450u) {
        ctx->pc = 0x261450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26144Cu;
        // 0x261450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261454u;
        goto label_261454;
    }
    ctx->pc = 0x26144Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26144Cu;
        // 0x261450: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26144Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261454u;
label_261454:
    // 0x261454: 0x0  nop
    ctx->pc = 0x261454u;
    // NOP
label_261458:
    // 0x261458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x261458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_26145c:
    // 0x26145c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x26145cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_261460:
    // 0x261460: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x261460u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_261464:
    // 0x261464: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x261464u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_261468:
    // 0x261468: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x261468u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_26146c:
    // 0x26146c: 0x3c0601c1  lui         $a2, 0x1C1
    ctx->pc = 0x26146cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)449 << 16));
label_261470:
    // 0x261470: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x261470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_261474:
    // 0x261474: 0x3c0501c1  lui         $a1, 0x1C1
    ctx->pc = 0x261474u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)449 << 16));
label_261478:
    // 0x261478: 0x8ca2ced4  lw          $v0, -0x312C($a1)
    ctx->pc = 0x261478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954708)));
label_26147c:
    // 0x26147c: 0xacc3cee8  sw          $v1, -0x3118($a2)
    ctx->pc = 0x26147cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4294954728), GPR_U32(ctx, 3));
label_261480:
    // 0x261480: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x261480u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_261484:
    // 0x261484: 0x8ca3ced4  lw          $v1, -0x312C($a1)
    ctx->pc = 0x261484u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294954708)));
label_261488:
    // 0x261488: 0x60f809  jalr        $v1
label_26148c:
    if (ctx->pc == 0x26148Cu) {
        ctx->pc = 0x261490u;
        goto label_261490;
    }
    ctx->pc = 0x261488u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x261490u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261488u, 0x261490u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x261490u;
label_261490:
    // 0x261490: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x261490u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_261494:
    // 0x261494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x261494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_261498:
    // 0x261498: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x261498u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_26149c:
    // 0x26149c: 0x3e00008  jr          $ra
label_2614a0:
    if (ctx->pc == 0x2614A0u) {
        ctx->pc = 0x2614A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26149Cu;
        // 0x2614a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614A4u;
        goto label_2614a4;
    }
    ctx->pc = 0x26149Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2614A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x26149Cu;
        // 0x2614a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26149Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2614A4u;
label_2614a4:
    // 0x2614a4: 0x0  nop
    ctx->pc = 0x2614a4u;
    // NOP
label_2614a8:
    // 0x2614a8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2614a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_2614ac:
    // 0x2614ac: 0xac44cec8  sw          $a0, -0x3138($v0)
    ctx->pc = 0x2614acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954696), GPR_U32(ctx, 4));
label_2614b0:
    // 0x2614b0: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x2614b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2614b4:
    // 0x2614b4: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x2614b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_2614b8:
    // 0x2614b8: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2614b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_2614bc:
    // 0x2614bc: 0x24421368  addiu       $v0, $v0, 0x1368
    ctx->pc = 0x2614bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4968));
label_2614c0:
    // 0x2614c0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2614c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2614c4:
    // 0x2614c4: 0xac85ced8  sw          $a1, -0x3128($a0)
    ctx->pc = 0x2614c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954712), GPR_U32(ctx, 5));
label_2614c8:
    // 0x2614c8: 0x3e00008  jr          $ra
label_2614cc:
    if (ctx->pc == 0x2614CCu) {
        ctx->pc = 0x2614CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614C8u;
        // 0x2614cc: 0xac6219f0  sw          $v0, 0x19F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614D0u;
        goto label_2614d0;
    }
    ctx->pc = 0x2614C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2614CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614C8u;
        // 0x2614cc: 0xac6219f0  sw          $v0, 0x19F0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6640), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2614C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2614D0u;
label_2614d0:
    // 0x2614d0: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2614d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_2614d4:
    // 0x2614d4: 0xac44cecc  sw          $a0, -0x3134($v0)
    ctx->pc = 0x2614d4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954700), GPR_U32(ctx, 4));
label_2614d8:
    // 0x2614d8: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x2614d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2614dc:
    // 0x2614dc: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x2614dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_2614e0:
    // 0x2614e0: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x2614e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_2614e4:
    // 0x2614e4: 0x244213b8  addiu       $v0, $v0, 0x13B8
    ctx->pc = 0x2614e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5048));
label_2614e8:
    // 0x2614e8: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x2614e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_2614ec:
    // 0x2614ec: 0xac85cedc  sw          $a1, -0x3124($a0)
    ctx->pc = 0x2614ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954716), GPR_U32(ctx, 5));
label_2614f0:
    // 0x2614f0: 0x3e00008  jr          $ra
label_2614f4:
    if (ctx->pc == 0x2614F4u) {
        ctx->pc = 0x2614F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614F0u;
        // 0x2614f4: 0xac6219f4  sw          $v0, 0x19F4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2614F8u;
        goto label_2614f8;
    }
    ctx->pc = 0x2614F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2614F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2614F0u;
        // 0x2614f4: 0xac6219f4  sw          $v0, 0x19F4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6644), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2614F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2614F8u;
label_2614f8:
    // 0x2614f8: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x2614f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_2614fc:
    // 0x2614fc: 0xac44ced0  sw          $a0, -0x3130($v0)
    ctx->pc = 0x2614fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954704), GPR_U32(ctx, 4));
label_261500:
    // 0x261500: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x261500u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_261504:
    // 0x261504: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x261504u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_261508:
    // 0x261508: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x261508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_26150c:
    // 0x26150c: 0x24421408  addiu       $v0, $v0, 0x1408
    ctx->pc = 0x26150cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5128));
label_261510:
    // 0x261510: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x261510u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_261514:
    // 0x261514: 0xac85cee0  sw          $a1, -0x3120($a0)
    ctx->pc = 0x261514u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954720), GPR_U32(ctx, 5));
label_261518:
    // 0x261518: 0x3e00008  jr          $ra
label_26151c:
    if (ctx->pc == 0x26151Cu) {
        ctx->pc = 0x26151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261518u;
        // 0x26151c: 0xac6219f8  sw          $v0, 0x19F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261520u;
        goto label_261520;
    }
    ctx->pc = 0x261518u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x26151Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261518u;
        // 0x26151c: 0xac6219f8  sw          $v0, 0x19F8($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6648), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261518u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x261520u;
label_261520:
    // 0x261520: 0x3c0201c1  lui         $v0, 0x1C1
    ctx->pc = 0x261520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)449 << 16));
label_261524:
    // 0x261524: 0xac44ced4  sw          $a0, -0x312C($v0)
    ctx->pc = 0x261524u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294954708), GPR_U32(ctx, 4));
label_261528:
    // 0x261528: 0x380282d  daddu       $a1, $gp, $zero
    ctx->pc = 0x261528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_26152c:
    // 0x26152c: 0x3c020026  lui         $v0, 0x26
    ctx->pc = 0x26152cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)38 << 16));
label_261530:
    // 0x261530: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x261530u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
label_261534:
    // 0x261534: 0x24421458  addiu       $v0, $v0, 0x1458
    ctx->pc = 0x261534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5208));
label_261538:
    // 0x261538: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x261538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_26153c:
    // 0x26153c: 0xac85cee4  sw          $a1, -0x311C($a0)
    ctx->pc = 0x26153cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294954724), GPR_U32(ctx, 5));
label_261540:
    // 0x261540: 0x3e00008  jr          $ra
label_261544:
    if (ctx->pc == 0x261544u) {
        ctx->pc = 0x261544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261540u;
        // 0x261544: 0xac6219fc  sw          $v0, 0x19FC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x261548u;
        goto label_fallthrough_0x261540;
    }
    ctx->pc = 0x261540u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x261544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x261540u;
        // 0x261544: 0xac6219fc  sw          $v0, 0x19FC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 6652), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x261540u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x261540:
    ctx->pc = 0x261548u;
}
