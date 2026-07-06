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

// Function: sub_00250B50
// Address: 0x250b50 - 0x251740
void sub_00250B50_0x250b50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00250B50_0x250b50");
#endif

    switch (ctx->pc) {
        case 0x250b50u: goto label_250b50;
        case 0x250b54u: goto label_250b54;
        case 0x250b58u: goto label_250b58;
        case 0x250b5cu: goto label_250b5c;
        case 0x250b60u: goto label_250b60;
        case 0x250b64u: goto label_250b64;
        case 0x250b68u: goto label_250b68;
        case 0x250b6cu: goto label_250b6c;
        case 0x250b70u: goto label_250b70;
        case 0x250b74u: goto label_250b74;
        case 0x250b78u: goto label_250b78;
        case 0x250b7cu: goto label_250b7c;
        case 0x250b80u: goto label_250b80;
        case 0x250b84u: goto label_250b84;
        case 0x250b88u: goto label_250b88;
        case 0x250b8cu: goto label_250b8c;
        case 0x250b90u: goto label_250b90;
        case 0x250b94u: goto label_250b94;
        case 0x250b98u: goto label_250b98;
        case 0x250b9cu: goto label_250b9c;
        case 0x250ba0u: goto label_250ba0;
        case 0x250ba4u: goto label_250ba4;
        case 0x250ba8u: goto label_250ba8;
        case 0x250bacu: goto label_250bac;
        case 0x250bb0u: goto label_250bb0;
        case 0x250bb4u: goto label_250bb4;
        case 0x250bb8u: goto label_250bb8;
        case 0x250bbcu: goto label_250bbc;
        case 0x250bc0u: goto label_250bc0;
        case 0x250bc4u: goto label_250bc4;
        case 0x250bc8u: goto label_250bc8;
        case 0x250bccu: goto label_250bcc;
        case 0x250bd0u: goto label_250bd0;
        case 0x250bd4u: goto label_250bd4;
        case 0x250bd8u: goto label_250bd8;
        case 0x250bdcu: goto label_250bdc;
        case 0x250be0u: goto label_250be0;
        case 0x250be4u: goto label_250be4;
        case 0x250be8u: goto label_250be8;
        case 0x250becu: goto label_250bec;
        case 0x250bf0u: goto label_250bf0;
        case 0x250bf4u: goto label_250bf4;
        case 0x250bf8u: goto label_250bf8;
        case 0x250bfcu: goto label_250bfc;
        case 0x250c00u: goto label_250c00;
        case 0x250c04u: goto label_250c04;
        case 0x250c08u: goto label_250c08;
        case 0x250c0cu: goto label_250c0c;
        case 0x250c10u: goto label_250c10;
        case 0x250c14u: goto label_250c14;
        case 0x250c18u: goto label_250c18;
        case 0x250c1cu: goto label_250c1c;
        case 0x250c20u: goto label_250c20;
        case 0x250c24u: goto label_250c24;
        case 0x250c28u: goto label_250c28;
        case 0x250c2cu: goto label_250c2c;
        case 0x250c30u: goto label_250c30;
        case 0x250c34u: goto label_250c34;
        case 0x250c38u: goto label_250c38;
        case 0x250c3cu: goto label_250c3c;
        case 0x250c40u: goto label_250c40;
        case 0x250c44u: goto label_250c44;
        case 0x250c48u: goto label_250c48;
        case 0x250c4cu: goto label_250c4c;
        case 0x250c50u: goto label_250c50;
        case 0x250c54u: goto label_250c54;
        case 0x250c58u: goto label_250c58;
        case 0x250c5cu: goto label_250c5c;
        case 0x250c60u: goto label_250c60;
        case 0x250c64u: goto label_250c64;
        case 0x250c68u: goto label_250c68;
        case 0x250c6cu: goto label_250c6c;
        case 0x250c70u: goto label_250c70;
        case 0x250c74u: goto label_250c74;
        case 0x250c78u: goto label_250c78;
        case 0x250c7cu: goto label_250c7c;
        case 0x250c80u: goto label_250c80;
        case 0x250c84u: goto label_250c84;
        case 0x250c88u: goto label_250c88;
        case 0x250c8cu: goto label_250c8c;
        case 0x250c90u: goto label_250c90;
        case 0x250c94u: goto label_250c94;
        case 0x250c98u: goto label_250c98;
        case 0x250c9cu: goto label_250c9c;
        case 0x250ca0u: goto label_250ca0;
        case 0x250ca4u: goto label_250ca4;
        case 0x250ca8u: goto label_250ca8;
        case 0x250cacu: goto label_250cac;
        case 0x250cb0u: goto label_250cb0;
        case 0x250cb4u: goto label_250cb4;
        case 0x250cb8u: goto label_250cb8;
        case 0x250cbcu: goto label_250cbc;
        case 0x250cc0u: goto label_250cc0;
        case 0x250cc4u: goto label_250cc4;
        case 0x250cc8u: goto label_250cc8;
        case 0x250cccu: goto label_250ccc;
        case 0x250cd0u: goto label_250cd0;
        case 0x250cd4u: goto label_250cd4;
        case 0x250cd8u: goto label_250cd8;
        case 0x250cdcu: goto label_250cdc;
        case 0x250ce0u: goto label_250ce0;
        case 0x250ce4u: goto label_250ce4;
        case 0x250ce8u: goto label_250ce8;
        case 0x250cecu: goto label_250cec;
        case 0x250cf0u: goto label_250cf0;
        case 0x250cf4u: goto label_250cf4;
        case 0x250cf8u: goto label_250cf8;
        case 0x250cfcu: goto label_250cfc;
        case 0x250d00u: goto label_250d00;
        case 0x250d04u: goto label_250d04;
        case 0x250d08u: goto label_250d08;
        case 0x250d0cu: goto label_250d0c;
        case 0x250d10u: goto label_250d10;
        case 0x250d14u: goto label_250d14;
        case 0x250d18u: goto label_250d18;
        case 0x250d1cu: goto label_250d1c;
        case 0x250d20u: goto label_250d20;
        case 0x250d24u: goto label_250d24;
        case 0x250d28u: goto label_250d28;
        case 0x250d2cu: goto label_250d2c;
        case 0x250d30u: goto label_250d30;
        case 0x250d34u: goto label_250d34;
        case 0x250d38u: goto label_250d38;
        case 0x250d3cu: goto label_250d3c;
        case 0x250d40u: goto label_250d40;
        case 0x250d44u: goto label_250d44;
        case 0x250d48u: goto label_250d48;
        case 0x250d4cu: goto label_250d4c;
        case 0x250d50u: goto label_250d50;
        case 0x250d54u: goto label_250d54;
        case 0x250d58u: goto label_250d58;
        case 0x250d5cu: goto label_250d5c;
        case 0x250d60u: goto label_250d60;
        case 0x250d64u: goto label_250d64;
        case 0x250d68u: goto label_250d68;
        case 0x250d6cu: goto label_250d6c;
        case 0x250d70u: goto label_250d70;
        case 0x250d74u: goto label_250d74;
        case 0x250d78u: goto label_250d78;
        case 0x250d7cu: goto label_250d7c;
        case 0x250d80u: goto label_250d80;
        case 0x250d84u: goto label_250d84;
        case 0x250d88u: goto label_250d88;
        case 0x250d8cu: goto label_250d8c;
        case 0x250d90u: goto label_250d90;
        case 0x250d94u: goto label_250d94;
        case 0x250d98u: goto label_250d98;
        case 0x250d9cu: goto label_250d9c;
        case 0x250da0u: goto label_250da0;
        case 0x250da4u: goto label_250da4;
        case 0x250da8u: goto label_250da8;
        case 0x250dacu: goto label_250dac;
        case 0x250db0u: goto label_250db0;
        case 0x250db4u: goto label_250db4;
        case 0x250db8u: goto label_250db8;
        case 0x250dbcu: goto label_250dbc;
        case 0x250dc0u: goto label_250dc0;
        case 0x250dc4u: goto label_250dc4;
        case 0x250dc8u: goto label_250dc8;
        case 0x250dccu: goto label_250dcc;
        case 0x250dd0u: goto label_250dd0;
        case 0x250dd4u: goto label_250dd4;
        case 0x250dd8u: goto label_250dd8;
        case 0x250ddcu: goto label_250ddc;
        case 0x250de0u: goto label_250de0;
        case 0x250de4u: goto label_250de4;
        case 0x250de8u: goto label_250de8;
        case 0x250decu: goto label_250dec;
        case 0x250df0u: goto label_250df0;
        case 0x250df4u: goto label_250df4;
        case 0x250df8u: goto label_250df8;
        case 0x250dfcu: goto label_250dfc;
        case 0x250e00u: goto label_250e00;
        case 0x250e04u: goto label_250e04;
        case 0x250e08u: goto label_250e08;
        case 0x250e0cu: goto label_250e0c;
        case 0x250e10u: goto label_250e10;
        case 0x250e14u: goto label_250e14;
        case 0x250e18u: goto label_250e18;
        case 0x250e1cu: goto label_250e1c;
        case 0x250e20u: goto label_250e20;
        case 0x250e24u: goto label_250e24;
        case 0x250e28u: goto label_250e28;
        case 0x250e2cu: goto label_250e2c;
        case 0x250e30u: goto label_250e30;
        case 0x250e34u: goto label_250e34;
        case 0x250e38u: goto label_250e38;
        case 0x250e3cu: goto label_250e3c;
        case 0x250e40u: goto label_250e40;
        case 0x250e44u: goto label_250e44;
        case 0x250e48u: goto label_250e48;
        case 0x250e4cu: goto label_250e4c;
        case 0x250e50u: goto label_250e50;
        case 0x250e54u: goto label_250e54;
        case 0x250e58u: goto label_250e58;
        case 0x250e5cu: goto label_250e5c;
        case 0x250e60u: goto label_250e60;
        case 0x250e64u: goto label_250e64;
        case 0x250e68u: goto label_250e68;
        case 0x250e6cu: goto label_250e6c;
        case 0x250e70u: goto label_250e70;
        case 0x250e74u: goto label_250e74;
        case 0x250e78u: goto label_250e78;
        case 0x250e7cu: goto label_250e7c;
        case 0x250e80u: goto label_250e80;
        case 0x250e84u: goto label_250e84;
        case 0x250e88u: goto label_250e88;
        case 0x250e8cu: goto label_250e8c;
        case 0x250e90u: goto label_250e90;
        case 0x250e94u: goto label_250e94;
        case 0x250e98u: goto label_250e98;
        case 0x250e9cu: goto label_250e9c;
        case 0x250ea0u: goto label_250ea0;
        case 0x250ea4u: goto label_250ea4;
        case 0x250ea8u: goto label_250ea8;
        case 0x250eacu: goto label_250eac;
        case 0x250eb0u: goto label_250eb0;
        case 0x250eb4u: goto label_250eb4;
        case 0x250eb8u: goto label_250eb8;
        case 0x250ebcu: goto label_250ebc;
        case 0x250ec0u: goto label_250ec0;
        case 0x250ec4u: goto label_250ec4;
        case 0x250ec8u: goto label_250ec8;
        case 0x250eccu: goto label_250ecc;
        case 0x250ed0u: goto label_250ed0;
        case 0x250ed4u: goto label_250ed4;
        case 0x250ed8u: goto label_250ed8;
        case 0x250edcu: goto label_250edc;
        case 0x250ee0u: goto label_250ee0;
        case 0x250ee4u: goto label_250ee4;
        case 0x250ee8u: goto label_250ee8;
        case 0x250eecu: goto label_250eec;
        case 0x250ef0u: goto label_250ef0;
        case 0x250ef4u: goto label_250ef4;
        case 0x250ef8u: goto label_250ef8;
        case 0x250efcu: goto label_250efc;
        case 0x250f00u: goto label_250f00;
        case 0x250f04u: goto label_250f04;
        case 0x250f08u: goto label_250f08;
        case 0x250f0cu: goto label_250f0c;
        case 0x250f10u: goto label_250f10;
        case 0x250f14u: goto label_250f14;
        case 0x250f18u: goto label_250f18;
        case 0x250f1cu: goto label_250f1c;
        case 0x250f20u: goto label_250f20;
        case 0x250f24u: goto label_250f24;
        case 0x250f28u: goto label_250f28;
        case 0x250f2cu: goto label_250f2c;
        case 0x250f30u: goto label_250f30;
        case 0x250f34u: goto label_250f34;
        case 0x250f38u: goto label_250f38;
        case 0x250f3cu: goto label_250f3c;
        case 0x250f40u: goto label_250f40;
        case 0x250f44u: goto label_250f44;
        case 0x250f48u: goto label_250f48;
        case 0x250f4cu: goto label_250f4c;
        case 0x250f50u: goto label_250f50;
        case 0x250f54u: goto label_250f54;
        case 0x250f58u: goto label_250f58;
        case 0x250f5cu: goto label_250f5c;
        case 0x250f60u: goto label_250f60;
        case 0x250f64u: goto label_250f64;
        case 0x250f68u: goto label_250f68;
        case 0x250f6cu: goto label_250f6c;
        case 0x250f70u: goto label_250f70;
        case 0x250f74u: goto label_250f74;
        case 0x250f78u: goto label_250f78;
        case 0x250f7cu: goto label_250f7c;
        case 0x250f80u: goto label_250f80;
        case 0x250f84u: goto label_250f84;
        case 0x250f88u: goto label_250f88;
        case 0x250f8cu: goto label_250f8c;
        case 0x250f90u: goto label_250f90;
        case 0x250f94u: goto label_250f94;
        case 0x250f98u: goto label_250f98;
        case 0x250f9cu: goto label_250f9c;
        case 0x250fa0u: goto label_250fa0;
        case 0x250fa4u: goto label_250fa4;
        case 0x250fa8u: goto label_250fa8;
        case 0x250facu: goto label_250fac;
        case 0x250fb0u: goto label_250fb0;
        case 0x250fb4u: goto label_250fb4;
        case 0x250fb8u: goto label_250fb8;
        case 0x250fbcu: goto label_250fbc;
        case 0x250fc0u: goto label_250fc0;
        case 0x250fc4u: goto label_250fc4;
        case 0x250fc8u: goto label_250fc8;
        case 0x250fccu: goto label_250fcc;
        case 0x250fd0u: goto label_250fd0;
        case 0x250fd4u: goto label_250fd4;
        case 0x250fd8u: goto label_250fd8;
        case 0x250fdcu: goto label_250fdc;
        case 0x250fe0u: goto label_250fe0;
        case 0x250fe4u: goto label_250fe4;
        case 0x250fe8u: goto label_250fe8;
        case 0x250fecu: goto label_250fec;
        case 0x250ff0u: goto label_250ff0;
        case 0x250ff4u: goto label_250ff4;
        case 0x250ff8u: goto label_250ff8;
        case 0x250ffcu: goto label_250ffc;
        case 0x251000u: goto label_251000;
        case 0x251004u: goto label_251004;
        case 0x251008u: goto label_251008;
        case 0x25100cu: goto label_25100c;
        case 0x251010u: goto label_251010;
        case 0x251014u: goto label_251014;
        case 0x251018u: goto label_251018;
        case 0x25101cu: goto label_25101c;
        case 0x251020u: goto label_251020;
        case 0x251024u: goto label_251024;
        case 0x251028u: goto label_251028;
        case 0x25102cu: goto label_25102c;
        case 0x251030u: goto label_251030;
        case 0x251034u: goto label_251034;
        case 0x251038u: goto label_251038;
        case 0x25103cu: goto label_25103c;
        case 0x251040u: goto label_251040;
        case 0x251044u: goto label_251044;
        case 0x251048u: goto label_251048;
        case 0x25104cu: goto label_25104c;
        case 0x251050u: goto label_251050;
        case 0x251054u: goto label_251054;
        case 0x251058u: goto label_251058;
        case 0x25105cu: goto label_25105c;
        case 0x251060u: goto label_251060;
        case 0x251064u: goto label_251064;
        case 0x251068u: goto label_251068;
        case 0x25106cu: goto label_25106c;
        case 0x251070u: goto label_251070;
        case 0x251074u: goto label_251074;
        case 0x251078u: goto label_251078;
        case 0x25107cu: goto label_25107c;
        case 0x251080u: goto label_251080;
        case 0x251084u: goto label_251084;
        case 0x251088u: goto label_251088;
        case 0x25108cu: goto label_25108c;
        case 0x251090u: goto label_251090;
        case 0x251094u: goto label_251094;
        case 0x251098u: goto label_251098;
        case 0x25109cu: goto label_25109c;
        case 0x2510a0u: goto label_2510a0;
        case 0x2510a4u: goto label_2510a4;
        case 0x2510a8u: goto label_2510a8;
        case 0x2510acu: goto label_2510ac;
        case 0x2510b0u: goto label_2510b0;
        case 0x2510b4u: goto label_2510b4;
        case 0x2510b8u: goto label_2510b8;
        case 0x2510bcu: goto label_2510bc;
        case 0x2510c0u: goto label_2510c0;
        case 0x2510c4u: goto label_2510c4;
        case 0x2510c8u: goto label_2510c8;
        case 0x2510ccu: goto label_2510cc;
        case 0x2510d0u: goto label_2510d0;
        case 0x2510d4u: goto label_2510d4;
        case 0x2510d8u: goto label_2510d8;
        case 0x2510dcu: goto label_2510dc;
        case 0x2510e0u: goto label_2510e0;
        case 0x2510e4u: goto label_2510e4;
        case 0x2510e8u: goto label_2510e8;
        case 0x2510ecu: goto label_2510ec;
        case 0x2510f0u: goto label_2510f0;
        case 0x2510f4u: goto label_2510f4;
        case 0x2510f8u: goto label_2510f8;
        case 0x2510fcu: goto label_2510fc;
        case 0x251100u: goto label_251100;
        case 0x251104u: goto label_251104;
        case 0x251108u: goto label_251108;
        case 0x25110cu: goto label_25110c;
        case 0x251110u: goto label_251110;
        case 0x251114u: goto label_251114;
        case 0x251118u: goto label_251118;
        case 0x25111cu: goto label_25111c;
        case 0x251120u: goto label_251120;
        case 0x251124u: goto label_251124;
        case 0x251128u: goto label_251128;
        case 0x25112cu: goto label_25112c;
        case 0x251130u: goto label_251130;
        case 0x251134u: goto label_251134;
        case 0x251138u: goto label_251138;
        case 0x25113cu: goto label_25113c;
        case 0x251140u: goto label_251140;
        case 0x251144u: goto label_251144;
        case 0x251148u: goto label_251148;
        case 0x25114cu: goto label_25114c;
        case 0x251150u: goto label_251150;
        case 0x251154u: goto label_251154;
        case 0x251158u: goto label_251158;
        case 0x25115cu: goto label_25115c;
        case 0x251160u: goto label_251160;
        case 0x251164u: goto label_251164;
        case 0x251168u: goto label_251168;
        case 0x25116cu: goto label_25116c;
        case 0x251170u: goto label_251170;
        case 0x251174u: goto label_251174;
        case 0x251178u: goto label_251178;
        case 0x25117cu: goto label_25117c;
        case 0x251180u: goto label_251180;
        case 0x251184u: goto label_251184;
        case 0x251188u: goto label_251188;
        case 0x25118cu: goto label_25118c;
        case 0x251190u: goto label_251190;
        case 0x251194u: goto label_251194;
        case 0x251198u: goto label_251198;
        case 0x25119cu: goto label_25119c;
        case 0x2511a0u: goto label_2511a0;
        case 0x2511a4u: goto label_2511a4;
        case 0x2511a8u: goto label_2511a8;
        case 0x2511acu: goto label_2511ac;
        case 0x2511b0u: goto label_2511b0;
        case 0x2511b4u: goto label_2511b4;
        case 0x2511b8u: goto label_2511b8;
        case 0x2511bcu: goto label_2511bc;
        case 0x2511c0u: goto label_2511c0;
        case 0x2511c4u: goto label_2511c4;
        case 0x2511c8u: goto label_2511c8;
        case 0x2511ccu: goto label_2511cc;
        case 0x2511d0u: goto label_2511d0;
        case 0x2511d4u: goto label_2511d4;
        case 0x2511d8u: goto label_2511d8;
        case 0x2511dcu: goto label_2511dc;
        case 0x2511e0u: goto label_2511e0;
        case 0x2511e4u: goto label_2511e4;
        case 0x2511e8u: goto label_2511e8;
        case 0x2511ecu: goto label_2511ec;
        case 0x2511f0u: goto label_2511f0;
        case 0x2511f4u: goto label_2511f4;
        case 0x2511f8u: goto label_2511f8;
        case 0x2511fcu: goto label_2511fc;
        case 0x251200u: goto label_251200;
        case 0x251204u: goto label_251204;
        case 0x251208u: goto label_251208;
        case 0x25120cu: goto label_25120c;
        case 0x251210u: goto label_251210;
        case 0x251214u: goto label_251214;
        case 0x251218u: goto label_251218;
        case 0x25121cu: goto label_25121c;
        case 0x251220u: goto label_251220;
        case 0x251224u: goto label_251224;
        case 0x251228u: goto label_251228;
        case 0x25122cu: goto label_25122c;
        case 0x251230u: goto label_251230;
        case 0x251234u: goto label_251234;
        case 0x251238u: goto label_251238;
        case 0x25123cu: goto label_25123c;
        case 0x251240u: goto label_251240;
        case 0x251244u: goto label_251244;
        case 0x251248u: goto label_251248;
        case 0x25124cu: goto label_25124c;
        case 0x251250u: goto label_251250;
        case 0x251254u: goto label_251254;
        case 0x251258u: goto label_251258;
        case 0x25125cu: goto label_25125c;
        case 0x251260u: goto label_251260;
        case 0x251264u: goto label_251264;
        case 0x251268u: goto label_251268;
        case 0x25126cu: goto label_25126c;
        case 0x251270u: goto label_251270;
        case 0x251274u: goto label_251274;
        case 0x251278u: goto label_251278;
        case 0x25127cu: goto label_25127c;
        case 0x251280u: goto label_251280;
        case 0x251284u: goto label_251284;
        case 0x251288u: goto label_251288;
        case 0x25128cu: goto label_25128c;
        case 0x251290u: goto label_251290;
        case 0x251294u: goto label_251294;
        case 0x251298u: goto label_251298;
        case 0x25129cu: goto label_25129c;
        case 0x2512a0u: goto label_2512a0;
        case 0x2512a4u: goto label_2512a4;
        case 0x2512a8u: goto label_2512a8;
        case 0x2512acu: goto label_2512ac;
        case 0x2512b0u: goto label_2512b0;
        case 0x2512b4u: goto label_2512b4;
        case 0x2512b8u: goto label_2512b8;
        case 0x2512bcu: goto label_2512bc;
        case 0x2512c0u: goto label_2512c0;
        case 0x2512c4u: goto label_2512c4;
        case 0x2512c8u: goto label_2512c8;
        case 0x2512ccu: goto label_2512cc;
        case 0x2512d0u: goto label_2512d0;
        case 0x2512d4u: goto label_2512d4;
        case 0x2512d8u: goto label_2512d8;
        case 0x2512dcu: goto label_2512dc;
        case 0x2512e0u: goto label_2512e0;
        case 0x2512e4u: goto label_2512e4;
        case 0x2512e8u: goto label_2512e8;
        case 0x2512ecu: goto label_2512ec;
        case 0x2512f0u: goto label_2512f0;
        case 0x2512f4u: goto label_2512f4;
        case 0x2512f8u: goto label_2512f8;
        case 0x2512fcu: goto label_2512fc;
        case 0x251300u: goto label_251300;
        case 0x251304u: goto label_251304;
        case 0x251308u: goto label_251308;
        case 0x25130cu: goto label_25130c;
        case 0x251310u: goto label_251310;
        case 0x251314u: goto label_251314;
        case 0x251318u: goto label_251318;
        case 0x25131cu: goto label_25131c;
        case 0x251320u: goto label_251320;
        case 0x251324u: goto label_251324;
        case 0x251328u: goto label_251328;
        case 0x25132cu: goto label_25132c;
        case 0x251330u: goto label_251330;
        case 0x251334u: goto label_251334;
        case 0x251338u: goto label_251338;
        case 0x25133cu: goto label_25133c;
        case 0x251340u: goto label_251340;
        case 0x251344u: goto label_251344;
        case 0x251348u: goto label_251348;
        case 0x25134cu: goto label_25134c;
        case 0x251350u: goto label_251350;
        case 0x251354u: goto label_251354;
        case 0x251358u: goto label_251358;
        case 0x25135cu: goto label_25135c;
        case 0x251360u: goto label_251360;
        case 0x251364u: goto label_251364;
        case 0x251368u: goto label_251368;
        case 0x25136cu: goto label_25136c;
        case 0x251370u: goto label_251370;
        case 0x251374u: goto label_251374;
        case 0x251378u: goto label_251378;
        case 0x25137cu: goto label_25137c;
        case 0x251380u: goto label_251380;
        case 0x251384u: goto label_251384;
        case 0x251388u: goto label_251388;
        case 0x25138cu: goto label_25138c;
        case 0x251390u: goto label_251390;
        case 0x251394u: goto label_251394;
        case 0x251398u: goto label_251398;
        case 0x25139cu: goto label_25139c;
        case 0x2513a0u: goto label_2513a0;
        case 0x2513a4u: goto label_2513a4;
        case 0x2513a8u: goto label_2513a8;
        case 0x2513acu: goto label_2513ac;
        case 0x2513b0u: goto label_2513b0;
        case 0x2513b4u: goto label_2513b4;
        case 0x2513b8u: goto label_2513b8;
        case 0x2513bcu: goto label_2513bc;
        case 0x2513c0u: goto label_2513c0;
        case 0x2513c4u: goto label_2513c4;
        case 0x2513c8u: goto label_2513c8;
        case 0x2513ccu: goto label_2513cc;
        case 0x2513d0u: goto label_2513d0;
        case 0x2513d4u: goto label_2513d4;
        case 0x2513d8u: goto label_2513d8;
        case 0x2513dcu: goto label_2513dc;
        case 0x2513e0u: goto label_2513e0;
        case 0x2513e4u: goto label_2513e4;
        case 0x2513e8u: goto label_2513e8;
        case 0x2513ecu: goto label_2513ec;
        case 0x2513f0u: goto label_2513f0;
        case 0x2513f4u: goto label_2513f4;
        case 0x2513f8u: goto label_2513f8;
        case 0x2513fcu: goto label_2513fc;
        case 0x251400u: goto label_251400;
        case 0x251404u: goto label_251404;
        case 0x251408u: goto label_251408;
        case 0x25140cu: goto label_25140c;
        case 0x251410u: goto label_251410;
        case 0x251414u: goto label_251414;
        case 0x251418u: goto label_251418;
        case 0x25141cu: goto label_25141c;
        case 0x251420u: goto label_251420;
        case 0x251424u: goto label_251424;
        case 0x251428u: goto label_251428;
        case 0x25142cu: goto label_25142c;
        case 0x251430u: goto label_251430;
        case 0x251434u: goto label_251434;
        case 0x251438u: goto label_251438;
        case 0x25143cu: goto label_25143c;
        case 0x251440u: goto label_251440;
        case 0x251444u: goto label_251444;
        case 0x251448u: goto label_251448;
        case 0x25144cu: goto label_25144c;
        case 0x251450u: goto label_251450;
        case 0x251454u: goto label_251454;
        case 0x251458u: goto label_251458;
        case 0x25145cu: goto label_25145c;
        case 0x251460u: goto label_251460;
        case 0x251464u: goto label_251464;
        case 0x251468u: goto label_251468;
        case 0x25146cu: goto label_25146c;
        case 0x251470u: goto label_251470;
        case 0x251474u: goto label_251474;
        case 0x251478u: goto label_251478;
        case 0x25147cu: goto label_25147c;
        case 0x251480u: goto label_251480;
        case 0x251484u: goto label_251484;
        case 0x251488u: goto label_251488;
        case 0x25148cu: goto label_25148c;
        case 0x251490u: goto label_251490;
        case 0x251494u: goto label_251494;
        case 0x251498u: goto label_251498;
        case 0x25149cu: goto label_25149c;
        case 0x2514a0u: goto label_2514a0;
        case 0x2514a4u: goto label_2514a4;
        case 0x2514a8u: goto label_2514a8;
        case 0x2514acu: goto label_2514ac;
        case 0x2514b0u: goto label_2514b0;
        case 0x2514b4u: goto label_2514b4;
        case 0x2514b8u: goto label_2514b8;
        case 0x2514bcu: goto label_2514bc;
        case 0x2514c0u: goto label_2514c0;
        case 0x2514c4u: goto label_2514c4;
        case 0x2514c8u: goto label_2514c8;
        case 0x2514ccu: goto label_2514cc;
        case 0x2514d0u: goto label_2514d0;
        case 0x2514d4u: goto label_2514d4;
        case 0x2514d8u: goto label_2514d8;
        case 0x2514dcu: goto label_2514dc;
        case 0x2514e0u: goto label_2514e0;
        case 0x2514e4u: goto label_2514e4;
        case 0x2514e8u: goto label_2514e8;
        case 0x2514ecu: goto label_2514ec;
        case 0x2514f0u: goto label_2514f0;
        case 0x2514f4u: goto label_2514f4;
        case 0x2514f8u: goto label_2514f8;
        case 0x2514fcu: goto label_2514fc;
        case 0x251500u: goto label_251500;
        case 0x251504u: goto label_251504;
        case 0x251508u: goto label_251508;
        case 0x25150cu: goto label_25150c;
        case 0x251510u: goto label_251510;
        case 0x251514u: goto label_251514;
        case 0x251518u: goto label_251518;
        case 0x25151cu: goto label_25151c;
        case 0x251520u: goto label_251520;
        case 0x251524u: goto label_251524;
        case 0x251528u: goto label_251528;
        case 0x25152cu: goto label_25152c;
        case 0x251530u: goto label_251530;
        case 0x251534u: goto label_251534;
        case 0x251538u: goto label_251538;
        case 0x25153cu: goto label_25153c;
        case 0x251540u: goto label_251540;
        case 0x251544u: goto label_251544;
        case 0x251548u: goto label_251548;
        case 0x25154cu: goto label_25154c;
        case 0x251550u: goto label_251550;
        case 0x251554u: goto label_251554;
        case 0x251558u: goto label_251558;
        case 0x25155cu: goto label_25155c;
        case 0x251560u: goto label_251560;
        case 0x251564u: goto label_251564;
        case 0x251568u: goto label_251568;
        case 0x25156cu: goto label_25156c;
        case 0x251570u: goto label_251570;
        case 0x251574u: goto label_251574;
        case 0x251578u: goto label_251578;
        case 0x25157cu: goto label_25157c;
        case 0x251580u: goto label_251580;
        case 0x251584u: goto label_251584;
        case 0x251588u: goto label_251588;
        case 0x25158cu: goto label_25158c;
        case 0x251590u: goto label_251590;
        case 0x251594u: goto label_251594;
        case 0x251598u: goto label_251598;
        case 0x25159cu: goto label_25159c;
        case 0x2515a0u: goto label_2515a0;
        case 0x2515a4u: goto label_2515a4;
        case 0x2515a8u: goto label_2515a8;
        case 0x2515acu: goto label_2515ac;
        case 0x2515b0u: goto label_2515b0;
        case 0x2515b4u: goto label_2515b4;
        case 0x2515b8u: goto label_2515b8;
        case 0x2515bcu: goto label_2515bc;
        case 0x2515c0u: goto label_2515c0;
        case 0x2515c4u: goto label_2515c4;
        case 0x2515c8u: goto label_2515c8;
        case 0x2515ccu: goto label_2515cc;
        case 0x2515d0u: goto label_2515d0;
        case 0x2515d4u: goto label_2515d4;
        case 0x2515d8u: goto label_2515d8;
        case 0x2515dcu: goto label_2515dc;
        case 0x2515e0u: goto label_2515e0;
        case 0x2515e4u: goto label_2515e4;
        case 0x2515e8u: goto label_2515e8;
        case 0x2515ecu: goto label_2515ec;
        case 0x2515f0u: goto label_2515f0;
        case 0x2515f4u: goto label_2515f4;
        case 0x2515f8u: goto label_2515f8;
        case 0x2515fcu: goto label_2515fc;
        case 0x251600u: goto label_251600;
        case 0x251604u: goto label_251604;
        case 0x251608u: goto label_251608;
        case 0x25160cu: goto label_25160c;
        case 0x251610u: goto label_251610;
        case 0x251614u: goto label_251614;
        case 0x251618u: goto label_251618;
        case 0x25161cu: goto label_25161c;
        case 0x251620u: goto label_251620;
        case 0x251624u: goto label_251624;
        case 0x251628u: goto label_251628;
        case 0x25162cu: goto label_25162c;
        case 0x251630u: goto label_251630;
        case 0x251634u: goto label_251634;
        case 0x251638u: goto label_251638;
        case 0x25163cu: goto label_25163c;
        case 0x251640u: goto label_251640;
        case 0x251644u: goto label_251644;
        case 0x251648u: goto label_251648;
        case 0x25164cu: goto label_25164c;
        case 0x251650u: goto label_251650;
        case 0x251654u: goto label_251654;
        case 0x251658u: goto label_251658;
        case 0x25165cu: goto label_25165c;
        case 0x251660u: goto label_251660;
        case 0x251664u: goto label_251664;
        case 0x251668u: goto label_251668;
        case 0x25166cu: goto label_25166c;
        case 0x251670u: goto label_251670;
        case 0x251674u: goto label_251674;
        case 0x251678u: goto label_251678;
        case 0x25167cu: goto label_25167c;
        case 0x251680u: goto label_251680;
        case 0x251684u: goto label_251684;
        case 0x251688u: goto label_251688;
        case 0x25168cu: goto label_25168c;
        case 0x251690u: goto label_251690;
        case 0x251694u: goto label_251694;
        case 0x251698u: goto label_251698;
        case 0x25169cu: goto label_25169c;
        case 0x2516a0u: goto label_2516a0;
        case 0x2516a4u: goto label_2516a4;
        case 0x2516a8u: goto label_2516a8;
        case 0x2516acu: goto label_2516ac;
        case 0x2516b0u: goto label_2516b0;
        case 0x2516b4u: goto label_2516b4;
        case 0x2516b8u: goto label_2516b8;
        case 0x2516bcu: goto label_2516bc;
        case 0x2516c0u: goto label_2516c0;
        case 0x2516c4u: goto label_2516c4;
        case 0x2516c8u: goto label_2516c8;
        case 0x2516ccu: goto label_2516cc;
        case 0x2516d0u: goto label_2516d0;
        case 0x2516d4u: goto label_2516d4;
        case 0x2516d8u: goto label_2516d8;
        case 0x2516dcu: goto label_2516dc;
        case 0x2516e0u: goto label_2516e0;
        case 0x2516e4u: goto label_2516e4;
        case 0x2516e8u: goto label_2516e8;
        case 0x2516ecu: goto label_2516ec;
        case 0x2516f0u: goto label_2516f0;
        case 0x2516f4u: goto label_2516f4;
        case 0x2516f8u: goto label_2516f8;
        case 0x2516fcu: goto label_2516fc;
        case 0x251700u: goto label_251700;
        case 0x251704u: goto label_251704;
        case 0x251708u: goto label_251708;
        case 0x25170cu: goto label_25170c;
        case 0x251710u: goto label_251710;
        case 0x251714u: goto label_251714;
        case 0x251718u: goto label_251718;
        case 0x25171cu: goto label_25171c;
        case 0x251720u: goto label_251720;
        case 0x251724u: goto label_251724;
        case 0x251728u: goto label_251728;
        case 0x25172cu: goto label_25172c;
        case 0x251730u: goto label_251730;
        case 0x251734u: goto label_251734;
        case 0x251738u: goto label_251738;
        case 0x25173cu: goto label_25173c;
        default: break;
    }

    ctx->pc = 0x250b50u;

label_250b50:
    // 0x250b50: 0x27bdfe90  addiu       $sp, $sp, -0x170
    ctx->pc = 0x250b50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966928));
label_250b54:
    // 0x250b54: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x250b54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_250b58:
    // 0x250b58: 0xffa70148  sd          $a3, 0x148($sp)
    ctx->pc = 0x250b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 328), GPR_U64(ctx, 7));
label_250b5c:
    // 0x250b5c: 0xffa80150  sd          $t0, 0x150($sp)
    ctx->pc = 0x250b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 8));
label_250b60:
    // 0x250b60: 0x8fa30148  lw          $v1, 0x148($sp)
    ctx->pc = 0x250b60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 328)));
label_250b64:
    // 0x250b64: 0xffa60140  sd          $a2, 0x140($sp)
    ctx->pc = 0x250b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 6));
label_250b68:
    // 0x250b68: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x250b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_250b6c:
    // 0x250b6c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x250b6cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_250b70:
    // 0x250b70: 0xffa50138  sd          $a1, 0x138($sp)
    ctx->pc = 0x250b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 312), GPR_U64(ctx, 5));
label_250b74:
    // 0x250b74: 0x8fa60150  lw          $a2, 0x150($sp)
    ctx->pc = 0x250b74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
label_250b78:
    // 0x250b78: 0x30640004  andi        $a0, $v1, 0x4
    ctx->pc = 0x250b78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
label_250b7c:
    // 0x250b7c: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x250b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_250b80:
    // 0x250b80: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x250b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_250b84:
    // 0x250b84: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x250b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_250b88:
    // 0x250b88: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x250b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_250b8c:
    // 0x250b8c: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x250b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_250b90:
    // 0x250b90: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x250b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_250b94:
    // 0x250b94: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x250b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_250b98:
    // 0x250b98: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x250b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_250b9c:
    // 0x250b9c: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x250b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_250ba0:
    // 0x250ba0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x250ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_250ba4:
    // 0x250ba4: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x250ba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_250ba8:
    // 0x250ba8: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x250ba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_250bac:
    // 0x250bac: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x250bacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
label_250bb0:
    // 0x250bb0: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x250bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_250bb4:
    // 0x250bb4: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x250bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
label_250bb8:
    // 0x250bb8: 0xffa90158  sd          $t1, 0x158($sp)
    ctx->pc = 0x250bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 344), GPR_U64(ctx, 9));
label_250bbc:
    // 0x250bbc: 0xffaa0160  sd          $t2, 0x160($sp)
    ctx->pc = 0x250bbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 10));
label_250bc0:
    // 0x250bc0: 0xffab0168  sd          $t3, 0x168($sp)
    ctx->pc = 0x250bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 360), GPR_U64(ctx, 11));
label_250bc4:
    // 0x250bc4: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_250bc8:
    if (ctx->pc == 0x250BC8u) {
        ctx->pc = 0x250BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BC4u;
        // 0x250bc8: 0x8fbe0140  lw          $fp, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250BCCu;
        goto label_250bcc;
    }
    ctx->pc = 0x250BC4u;
    {
        const bool branch_taken_0x250bc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x250BC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BC4u;
        // 0x250bc8: 0x8fbe0140  lw          $fp, 0x140($sp) (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250bc4) {
            ctx->pc = 0x250BD8u;
            goto label_250bd8;
        }
    }
    ctx->pc = 0x250BCCu;
label_250bcc:
    // 0x250bcc: 0x8fa20158  lw          $v0, 0x158($sp)
    ctx->pc = 0x250bccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
label_250bd0:
    // 0x250bd0: 0x10000002  b           . + 4 + (0x2 << 2)
label_250bd4:
    if (ctx->pc == 0x250BD4u) {
        ctx->pc = 0x250BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BD0u;
        // 0x250bd4: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250BD8u;
        goto label_250bd8;
    }
    ctx->pc = 0x250BD0u;
    {
        const bool branch_taken_0x250bd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BD0u;
        // 0x250bd4: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250bd0) {
            ctx->pc = 0x250BDCu;
            goto label_250bdc;
        }
    }
    ctx->pc = 0x250BD8u;
label_250bd8:
    // 0x250bd8: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x250bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_250bdc:
    // 0x250bdc: 0x10a00006  beqz        $a1, . + 4 + (0x6 << 2)
label_250be0:
    if (ctx->pc == 0x250BE0u) {
        ctx->pc = 0x250BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BDCu;
        // 0x250be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250BE4u;
        goto label_250be4;
    }
    ctx->pc = 0x250BDCu;
    {
        const bool branch_taken_0x250bdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BDCu;
        // 0x250be0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250bdc) {
            ctx->pc = 0x250BF8u;
            goto label_250bf8;
        }
    }
    ctx->pc = 0x250BE4u;
label_250be4:
    // 0x250be4: 0xc0945d6  jal         func_251758
label_250be8:
    if (ctx->pc == 0x250BE8u) {
        ctx->pc = 0x250BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250BE4u;
        // 0x250be8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250BECu;
        goto label_250bec;
    }
    ctx->pc = 0x250BE4u;
    SET_GPR_U32(ctx, 31, 0x250BECu);
    ctx->pc = 0x250BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250BE4u;
    // 0x250be8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251758u, 0x250BE4u, 0x250BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250BECu;
label_250bec:
    // 0x250bec: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x250becu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_250bf0:
    // 0x250bf0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x250bf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250bf4:
    // 0x250bf4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x250bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
label_250bf8:
    // 0x250bf8: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x250bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_250bfc:
    // 0x250bfc: 0x30820003  andi        $v0, $a0, 0x3
    ctx->pc = 0x250bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
label_250c00:
    // 0x250c00: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
label_250c04:
    if (ctx->pc == 0x250C04u) {
        ctx->pc = 0x250C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C00u;
        // 0x250c04: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C08u;
        goto label_250c08;
    }
    ctx->pc = 0x250C00u;
    {
        const bool branch_taken_0x250c00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C00u;
        // 0x250c04: 0x8e510008  lw          $s1, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c00) {
            ctx->pc = 0x250CA4u;
            goto label_250ca4;
        }
    }
    ctx->pc = 0x250C08u;
label_250c08:
    // 0x250c08: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x250c08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_250c0c:
    // 0x250c0c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x250c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_250c10:
    // 0x250c10: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x250c10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_250c14:
    // 0x250c14: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x250c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_250c18:
    // 0x250c18: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x250c18u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_250c1c:
    // 0x250c1c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x250c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_250c20:
    // 0x250c20: 0xa2200006  sb          $zero, 0x6($s1)
    ctx->pc = 0x250c20u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 0));
label_250c24:
    // 0x250c24: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x250c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_250c28:
    // 0x250c28: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x250c28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_250c2c:
    // 0x250c2c: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x250c2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_250c30:
    // 0x250c30: 0x34630040  ori         $v1, $v1, 0x40
    ctx->pc = 0x250c30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64);
label_250c34:
    // 0x250c34: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x250c34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_250c38:
    // 0x250c38: 0xa2230000  sb          $v1, 0x0($s1)
    ctx->pc = 0x250c38u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 3));
label_250c3c:
    // 0x250c3c: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x250c3cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
label_250c40:
    // 0x250c40: 0x94a41194  lhu         $a0, 0x1194($a1)
    ctx->pc = 0x250c40u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 4500)));
label_250c44:
    // 0x250c44: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x250c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_250c48:
    // 0x250c48: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x250c48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_250c4c:
    // 0x250c4c: 0xc08a262  jal         func_228988
label_250c50:
    if (ctx->pc == 0x250C50u) {
        ctx->pc = 0x250C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C4Cu;
        // 0x250c50: 0xa4a21194  sh          $v0, 0x1194($a1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 5), 4500), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C54u;
        goto label_250c54;
    }
    ctx->pc = 0x250C4Cu;
    SET_GPR_U32(ctx, 31, 0x250C54u);
    ctx->pc = 0x250C50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250C4Cu;
    // 0x250c50: 0xa4a21194  sh          $v0, 0x1194($a1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 5), 4500), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x250C4Cu, 0x250C54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C54u;
label_250c54:
    // 0x250c54: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x250c54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_250c58:
    // 0x250c58: 0x3c06003a  lui         $a2, 0x3A
    ctx->pc = 0x250c58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)58 << 16));
label_250c5c:
    // 0x250c5c: 0x92240000  lbu         $a0, 0x0($s1)
    ctx->pc = 0x250c5cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_250c60:
    // 0x250c60: 0x51883  sra         $v1, $a1, 2
    ctx->pc = 0x250c60u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
label_250c64:
    // 0x250c64: 0xa2220004  sb          $v0, 0x4($s1)
    ctx->pc = 0x250c64u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4), (uint8_t)GPR_U32(ctx, 2));
label_250c68:
    // 0x250c68: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x250c68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_250c6c:
    // 0x250c6c: 0x308400f0  andi        $a0, $a0, 0xF0
    ctx->pc = 0x250c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)240);
label_250c70:
    // 0x250c70: 0x22a02  srl         $a1, $v0, 8
    ctx->pc = 0x250c70u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_250c74:
    // 0x250c74: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x250c74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_250c78:
    // 0x250c78: 0xa2250005  sb          $a1, 0x5($s1)
    ctx->pc = 0x250c78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 5), (uint8_t)GPR_U32(ctx, 5));
label_250c7c:
    // 0x250c7c: 0x24c310a8  addiu       $v1, $a2, 0x10A8
    ctx->pc = 0x250c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4264));
label_250c80:
    // 0x250c80: 0xa2240000  sb          $a0, 0x0($s1)
    ctx->pc = 0x250c80u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 4));
label_250c84:
    // 0x250c84: 0xdc620078  ld          $v0, 0x78($v1)
    ctx->pc = 0x250c84u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 120)));
label_250c88:
    // 0x250c88: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x250c88u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_250c8c:
    // 0x250c8c: 0x10000009  b           . + 4 + (0x9 << 2)
label_250c90:
    if (ctx->pc == 0x250C90u) {
        ctx->pc = 0x250C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C8Cu;
        // 0x250c90: 0xfc620078  sd          $v0, 0x78($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250C94u;
        goto label_250c94;
    }
    ctx->pc = 0x250C8Cu;
    {
        const bool branch_taken_0x250c8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C8Cu;
        // 0x250c90: 0xfc620078  sd          $v0, 0x78($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 120), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c8c) {
            ctx->pc = 0x250CB4u;
            goto label_250cb4;
        }
    }
    ctx->pc = 0x250C94u;
label_250c94:
    // 0x250c94: 0xc090c4c  jal         func_243130
label_250c98:
    if (ctx->pc == 0x250C98u) {
        ctx->pc = 0x250C9Cu;
        goto label_250c9c;
    }
    ctx->pc = 0x250C94u;
    SET_GPR_U32(ctx, 31, 0x250C9Cu);
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x250C94u, 0x250C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250C9Cu;
label_250c9c:
    // 0x250c9c: 0x10000020  b           . + 4 + (0x20 << 2)
label_250ca0:
    if (ctx->pc == 0x250CA0u) {
        ctx->pc = 0x250CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C9Cu;
        // 0x250ca0: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250CA4u;
        goto label_250ca4;
    }
    ctx->pc = 0x250C9Cu;
    {
        const bool branch_taken_0x250c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250C9Cu;
        // 0x250ca0: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250c9c) {
            ctx->pc = 0x250D20u;
            goto label_250d20;
        }
    }
    ctx->pc = 0x250CA4u;
label_250ca4:
    // 0x250ca4: 0x92220000  lbu         $v0, 0x0($s1)
    ctx->pc = 0x250ca4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_250ca8:
    // 0x250ca8: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x250ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_250cac:
    // 0x250cac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x250cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_250cb0:
    // 0x250cb0: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x250cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_250cb4:
    // 0x250cb4: 0x17c00006  bnez        $fp, . + 4 + (0x6 << 2)
label_250cb8:
    if (ctx->pc == 0x250CB8u) {
        ctx->pc = 0x250CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CB4u;
        // 0x250cb8: 0x27c20004  addiu       $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250CBCu;
        goto label_250cbc;
    }
    ctx->pc = 0x250CB4u;
    {
        const bool branch_taken_0x250cb4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x250CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CB4u;
        // 0x250cb8: 0x27c20004  addiu       $v0, $fp, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cb4) {
            ctx->pc = 0x250CD0u;
            goto label_250cd0;
        }
    }
    ctx->pc = 0x250CBCu;
label_250cbc:
    // 0x250cbc: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x250cbcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_250cc0:
    // 0x250cc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x250cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_250cc4:
    // 0x250cc4: 0xc048c96  jal         func_123258
label_250cc8:
    if (ctx->pc == 0x250CC8u) {
        ctx->pc = 0x250CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CC4u;
        // 0x250cc8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250CCCu;
        goto label_250ccc;
    }
    ctx->pc = 0x250CC4u;
    SET_GPR_U32(ctx, 31, 0x250CCCu);
    ctx->pc = 0x250CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250CC4u;
    // 0x250cc8: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x250CC4u, 0x250CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250CCCu;
label_250ccc:
    // 0x250ccc: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x250cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_250cd0:
    // 0x250cd0: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x250cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_250cd4:
    // 0x250cd4: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x250cd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_250cd8:
    // 0x250cd8: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_250cdc:
    if (ctx->pc == 0x250CDCu) {
        ctx->pc = 0x250CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CD8u;
        // 0x250cdc: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250CE0u;
        goto label_250ce0;
    }
    ctx->pc = 0x250CD8u;
    {
        const bool branch_taken_0x250cd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CD8u;
        // 0x250cdc: 0xafa2004c  sw          $v0, 0x4C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250cd8) {
            ctx->pc = 0x250D2Cu;
            goto label_250d2c;
        }
    }
    ctx->pc = 0x250CE0u;
label_250ce0:
    // 0x250ce0: 0x8c820034  lw          $v0, 0x34($a0)
    ctx->pc = 0x250ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_250ce4:
    // 0x250ce4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x250ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_250ce8:
    // 0x250ce8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_250cec:
    if (ctx->pc == 0x250CECu) {
        ctx->pc = 0x250CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CE8u;
        // 0x250cec: 0x8fa5002c  lw          $a1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250CF0u;
        goto label_250cf0;
    }
    ctx->pc = 0x250CE8u;
    {
        const bool branch_taken_0x250ce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250CE8u;
        // 0x250cec: 0x8fa5002c  lw          $a1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ce8) {
            ctx->pc = 0x250D08u;
            goto label_250d08;
        }
    }
    ctx->pc = 0x250CF0u;
label_250cf0:
    // 0x250cf0: 0x8a220013  lwl         $v0, 0x13($s1)
    ctx->pc = 0x250cf0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_250cf4:
    // 0x250cf4: 0x9a220010  lwr         $v0, 0x10($s1)
    ctx->pc = 0x250cf4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_250cf8:
    // 0x250cf8: 0x88a30007  lwl         $v1, 0x7($a1)
    ctx->pc = 0x250cf8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_250cfc:
    // 0x250cfc: 0x98a30004  lwr         $v1, 0x4($a1)
    ctx->pc = 0x250cfcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_250d00:
    // 0x250d00: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
label_250d04:
    if (ctx->pc == 0x250D04u) {
        ctx->pc = 0x250D08u;
        goto label_250d08;
    }
    ctx->pc = 0x250D00u;
    {
        const bool branch_taken_0x250d00 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x250d00) {
            ctx->pc = 0x250D24u;
            goto label_250d24;
        }
    }
    ctx->pc = 0x250D08u;
label_250d08:
    // 0x250d08: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x250d08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_250d0c:
    // 0x250d0c: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x250d0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_250d10:
    // 0x250d10: 0x1440ffe0  bnez        $v0, . + 4 + (-0x20 << 2)
label_250d14:
    if (ctx->pc == 0x250D14u) {
        ctx->pc = 0x250D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D10u;
        // 0x250d14: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D18u;
        goto label_250d18;
    }
    ctx->pc = 0x250D10u;
    {
        const bool branch_taken_0x250d10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x250D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D10u;
        // 0x250d14: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d10) {
            ctx->pc = 0x250C94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_250c94;
        }
    }
    ctx->pc = 0x250D18u;
label_250d18:
    // 0x250d18: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x250d18u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_250d1c:
    // 0x250d1c: 0xafc00000  sw          $zero, 0x0($fp)
    ctx->pc = 0x250d1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
label_250d20:
    // 0x250d20: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x250d20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_250d24:
    // 0x250d24: 0x1480000b  bnez        $a0, . + 4 + (0xB << 2)
label_250d28:
    if (ctx->pc == 0x250D28u) {
        ctx->pc = 0x250D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D24u;
        // 0x250d28: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D2Cu;
        goto label_250d2c;
    }
    ctx->pc = 0x250D24u;
    {
        const bool branch_taken_0x250d24 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x250D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D24u;
        // 0x250d28: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d24) {
            ctx->pc = 0x250D54u;
            goto label_250d54;
        }
    }
    ctx->pc = 0x250D2Cu;
label_250d2c:
    // 0x250d2c: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x250d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_250d30:
    // 0x250d30: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x250d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_250d34:
    // 0x250d34: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x250d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_250d38:
    // 0x250d38: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x250d38u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
label_250d3c:
    // 0x250d3c: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x250d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_250d40:
    // 0x250d40: 0x8a220013  lwl         $v0, 0x13($s1)
    ctx->pc = 0x250d40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_250d44:
    // 0x250d44: 0x9a220010  lwr         $v0, 0x10($s1)
    ctx->pc = 0x250d44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_250d48:
    // 0x250d48: 0xa8c20007  swl         $v0, 0x7($a2)
    ctx->pc = 0x250d48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_250d4c:
    // 0x250d4c: 0xb8c20004  swr         $v0, 0x4($a2)
    ctx->pc = 0x250d4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_250d50:
    // 0x250d50: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x250d50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_250d54:
    // 0x250d54: 0x30c60010  andi        $a2, $a2, 0x10
    ctx->pc = 0x250d54u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
label_250d58:
    // 0x250d58: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_250d5c:
    if (ctx->pc == 0x250D5Cu) {
        ctx->pc = 0x250D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D58u;
        // 0x250d5c: 0xafa60040  sw          $a2, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D60u;
        goto label_250d60;
    }
    ctx->pc = 0x250D58u;
    {
        const bool branch_taken_0x250d58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D58u;
        // 0x250d5c: 0xafa60040  sw          $a2, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d58) {
            ctx->pc = 0x250D8Cu;
            goto label_250d8c;
        }
    }
    ctx->pc = 0x250D60u;
label_250d60:
    // 0x250d60: 0xc08d432  jal         func_2350C8
label_250d64:
    if (ctx->pc == 0x250D64u) {
        ctx->pc = 0x250D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D60u;
        // 0x250d64: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D68u;
        goto label_250d68;
    }
    ctx->pc = 0x250D60u;
    SET_GPR_U32(ctx, 31, 0x250D68u);
    ctx->pc = 0x250D64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250D60u;
    // 0x250d64: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2350C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2350C8u, 0x250D60u, 0x250D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250D68u;
label_250d68:
    // 0x250d68: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x250d68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250d6c:
    // 0x250d6c: 0x1260005c  beqz        $s3, . + 4 + (0x5C << 2)
label_250d70:
    if (ctx->pc == 0x250D70u) {
        ctx->pc = 0x250D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D6Cu;
        // 0x250d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D74u;
        goto label_250d74;
    }
    ctx->pc = 0x250D6Cu;
    {
        const bool branch_taken_0x250d6c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D6Cu;
        // 0x250d70: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d6c) {
            ctx->pc = 0x250EE0u;
            goto label_250ee0;
        }
    }
    ctx->pc = 0x250D74u;
label_250d74:
    // 0x250d74: 0x8e75000c  lw          $s5, 0xC($s3)
    ctx->pc = 0x250d74u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_250d78:
    // 0x250d78: 0xdea30040  ld          $v1, 0x40($s5)
    ctx->pc = 0x250d78u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 64)));
label_250d7c:
    // 0x250d7c: 0x3b83c  dsll32      $s7, $v1, 0
    ctx->pc = 0x250d7cu;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 3) << (32 + 0));
label_250d80:
    // 0x250d80: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x250d80u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
label_250d84:
    // 0x250d84: 0x1000001f  b           . + 4 + (0x1F << 2)
label_250d88:
    if (ctx->pc == 0x250D88u) {
        ctx->pc = 0x250D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D84u;
        // 0x250d88: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D8Cu;
        goto label_250d8c;
    }
    ctx->pc = 0x250D84u;
    {
        const bool branch_taken_0x250d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D84u;
        // 0x250d88: 0xa2220008  sb          $v0, 0x8($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250d84) {
            ctx->pc = 0x250E04u;
            goto label_250e04;
        }
    }
    ctx->pc = 0x250D8Cu;
label_250d8c:
    // 0x250d8c: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x250d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_250d90:
    // 0x250d90: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
label_250d94:
    if (ctx->pc == 0x250D94u) {
        ctx->pc = 0x250D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D90u;
        // 0x250d94: 0xdc820060  ld          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250D98u;
        goto label_250d98;
    }
    ctx->pc = 0x250D90u;
    {
        const bool branch_taken_0x250d90 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x250d90) {
            ctx->pc = 0x250D94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250D90u;
            // 0x250d94: 0xdc820060  ld          $v0, 0x60($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250DBCu;
            goto label_250dbc;
        }
    }
    ctx->pc = 0x250D98u;
label_250d98:
    // 0x250d98: 0xc090bda  jal         func_242F68
label_250d9c:
    if (ctx->pc == 0x250D9Cu) {
        ctx->pc = 0x250D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250D98u;
        // 0x250d9c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250DA0u;
        goto label_250da0;
    }
    ctx->pc = 0x250D98u;
    SET_GPR_U32(ctx, 31, 0x250DA0u);
    ctx->pc = 0x250D9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250D98u;
    // 0x250d9c: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242F68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242F68u, 0x250D98u, 0x250DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250DA0u;
label_250da0:
    // 0x250da0: 0x8fc40000  lw          $a0, 0x0($fp)
    ctx->pc = 0x250da0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_250da4:
    // 0x250da4: 0x54800005  bnel        $a0, $zero, . + 4 + (0x5 << 2)
label_250da8:
    if (ctx->pc == 0x250DA8u) {
        ctx->pc = 0x250DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DA4u;
        // 0x250da8: 0xdc820060  ld          $v0, 0x60($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250DACu;
        goto label_250dac;
    }
    ctx->pc = 0x250DA4u;
    {
        const bool branch_taken_0x250da4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x250da4) {
            ctx->pc = 0x250DA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250DA4u;
            // 0x250da8: 0xdc820060  ld          $v0, 0x60($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 96)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250DBCu;
            goto label_250dbc;
        }
    }
    ctx->pc = 0x250DACu;
label_250dac:
    // 0x250dac: 0x24040076  addiu       $a0, $zero, 0x76
    ctx->pc = 0x250dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_250db0:
    // 0x250db0: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x250db0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_250db4:
    // 0x250db4: 0x1000004d  b           . + 4 + (0x4D << 2)
label_250db8:
    if (ctx->pc == 0x250DB8u) {
        ctx->pc = 0x250DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DB4u;
        // 0x250db8: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250DBCu;
        goto label_250dbc;
    }
    ctx->pc = 0x250DB4u;
    {
        const bool branch_taken_0x250db4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DB4u;
        // 0x250db8: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250db4) {
            ctx->pc = 0x250EECu;
            goto label_250eec;
        }
    }
    ctx->pc = 0x250DBCu;
label_250dbc:
    // 0x250dbc: 0x8c93004c  lw          $s3, 0x4C($a0)
    ctx->pc = 0x250dbcu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_250dc0:
    // 0x250dc0: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x250dc0u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
label_250dc4:
    // 0x250dc4: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x250dc4u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
label_250dc8:
    // 0x250dc8: 0x16e00004  bnez        $s7, . + 4 + (0x4 << 2)
label_250dcc:
    if (ctx->pc == 0x250DCCu) {
        ctx->pc = 0x250DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DC8u;
        // 0x250dcc: 0x8c950048  lw          $s5, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250DD0u;
        goto label_250dd0;
    }
    ctx->pc = 0x250DC8u;
    {
        const bool branch_taken_0x250dc8 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x250DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250DC8u;
        // 0x250dcc: 0x8c950048  lw          $s5, 0x48($a0) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 72)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250dc8) {
            ctx->pc = 0x250DDCu;
            goto label_250ddc;
        }
    }
    ctx->pc = 0x250DD0u;
label_250dd0:
    // 0x250dd0: 0xdea20040  ld          $v0, 0x40($s5)
    ctx->pc = 0x250dd0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 64)));
label_250dd4:
    // 0x250dd4: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x250dd4u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
label_250dd8:
    // 0x250dd8: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x250dd8u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
label_250ddc:
    // 0x250ddc: 0xdc820040  ld          $v0, 0x40($a0)
    ctx->pc = 0x250ddcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 64)));
label_250de0:
    // 0x250de0: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x250de0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_250de4:
    // 0x250de4: 0xfc820040  sd          $v0, 0x40($a0)
    ctx->pc = 0x250de4u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 64), GPR_U64(ctx, 2));
label_250de8:
    // 0x250de8: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x250de8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_250dec:
    // 0x250dec: 0x8c620034  lw          $v0, 0x34($v1)
    ctx->pc = 0x250decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_250df0:
    // 0x250df0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x250df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_250df4:
    // 0x250df4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_250df8:
    if (ctx->pc == 0x250DF8u) {
        ctx->pc = 0x250DFCu;
        goto label_250dfc;
    }
    ctx->pc = 0x250DF4u;
    {
        const bool branch_taken_0x250df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250df4) {
            ctx->pc = 0x250E04u;
            goto label_250e04;
        }
    }
    ctx->pc = 0x250DFCu;
label_250dfc:
    // 0x250dfc: 0x8c630030  lw          $v1, 0x30($v1)
    ctx->pc = 0x250dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 48)));
label_250e00:
    // 0x250e00: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x250e00u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_250e04:
    // 0x250e04: 0xc08a254  jal         func_228950
label_250e08:
    if (ctx->pc == 0x250E08u) {
        ctx->pc = 0x250E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E04u;
        // 0x250e08: 0x3c04f000  lui         $a0, 0xF000 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E0Cu;
        goto label_250e0c;
    }
    ctx->pc = 0x250E04u;
    SET_GPR_U32(ctx, 31, 0x250E0Cu);
    ctx->pc = 0x250E08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E04u;
    // 0x250e08: 0x3c04f000  lui         $a0, 0xF000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61440 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x250E04u, 0x250E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E0Cu;
label_250e0c:
    // 0x250e0c: 0x8a300013  lwl         $s0, 0x13($s1)
    ctx->pc = 0x250e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
label_250e10:
    // 0x250e10: 0x9a300010  lwr         $s0, 0x10($s1)
    ctx->pc = 0x250e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
label_250e14:
    // 0x250e14: 0x3c04e000  lui         $a0, 0xE000
    ctx->pc = 0x250e14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57344 << 16));
label_250e18:
    // 0x250e18: 0xc08a254  jal         func_228950
label_250e1c:
    if (ctx->pc == 0x250E1Cu) {
        ctx->pc = 0x250E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E18u;
        // 0x250e1c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E20u;
        goto label_250e20;
    }
    ctx->pc = 0x250E18u;
    SET_GPR_U32(ctx, 31, 0x250E20u);
    ctx->pc = 0x250E1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E18u;
    // 0x250e1c: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x250E18u, 0x250E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E20u;
label_250e20:
    // 0x250e20: 0x2161824  and         $v1, $s0, $s6
    ctx->pc = 0x250e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
label_250e24:
    // 0x250e24: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x250e24u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250e28:
    // 0x250e28: 0x10740006  beq         $v1, $s4, . + 4 + (0x6 << 2)
label_250e2c:
    if (ctx->pc == 0x250E2Cu) {
        ctx->pc = 0x250E30u;
        goto label_250e30;
    }
    ctx->pc = 0x250E28u;
    {
        const bool branch_taken_0x250e28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 20));
        if (branch_taken_0x250e28) {
            ctx->pc = 0x250E44u;
            goto label_250e44;
        }
    }
    ctx->pc = 0x250E30u;
label_250e30:
    // 0x250e30: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x250e30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_250e34:
    // 0x250e34: 0xc08a254  jal         func_228950
label_250e38:
    if (ctx->pc == 0x250E38u) {
        ctx->pc = 0x250E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E34u;
        // 0x250e38: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E3Cu;
        goto label_250e3c;
    }
    ctx->pc = 0x250E34u;
    SET_GPR_U32(ctx, 31, 0x250E3Cu);
    ctx->pc = 0x250E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E34u;
    // 0x250e38: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x250E34u, 0x250E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E3Cu;
label_250e3c:
    // 0x250e3c: 0x16020080  bne         $s0, $v0, . + 4 + (0x80 << 2)
label_250e40:
    if (ctx->pc == 0x250E40u) {
        ctx->pc = 0x250E44u;
        goto label_250e44;
    }
    ctx->pc = 0x250E3Cu;
    {
        const bool branch_taken_0x250e3c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x250e3c) {
            ctx->pc = 0x251040u;
            goto label_251040;
        }
    }
    ctx->pc = 0x250E44u;
label_250e44:
    // 0x250e44: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x250e44u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_250e48:
    // 0x250e48: 0x86530012  lh          $s3, 0x12($s2)
    ctx->pc = 0x250e48u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_250e4c:
    // 0x250e4c: 0xc08a254  jal         func_228950
label_250e50:
    if (ctx->pc == 0x250E50u) {
        ctx->pc = 0x250E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E4Cu;
        // 0x250e50: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E54u;
        goto label_250e54;
    }
    ctx->pc = 0x250E4Cu;
    SET_GPR_U32(ctx, 31, 0x250E54u);
    ctx->pc = 0x250E50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250E4Cu;
    // 0x250e50: 0x3484ffff  ori         $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x250E4Cu, 0x250E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250E54u;
label_250e54:
    // 0x250e54: 0x16020002  bne         $s0, $v0, . + 4 + (0x2 << 2)
label_250e58:
    if (ctx->pc == 0x250E58u) {
        ctx->pc = 0x250E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E54u;
        // 0x250e58: 0x36620200  ori         $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E5Cu;
        goto label_250e5c;
    }
    ctx->pc = 0x250E54u;
    {
        const bool branch_taken_0x250e54 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x250E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E54u;
        // 0x250e58: 0x36620200  ori         $v0, $s3, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e54) {
            ctx->pc = 0x250E60u;
            goto label_250e60;
        }
    }
    ctx->pc = 0x250E5Cu;
label_250e5c:
    // 0x250e5c: 0x36620100  ori         $v0, $s3, 0x100
    ctx->pc = 0x250e5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)256);
label_250e60:
    // 0x250e60: 0xa6420012  sh          $v0, 0x12($s2)
    ctx->pc = 0x250e60u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
label_250e64:
    // 0x250e64: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x250e64u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
label_250e68:
    // 0x250e68: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x250e68u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
label_250e6c:
    // 0x250e6c: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_250e70:
    if (ctx->pc == 0x250E70u) {
        ctx->pc = 0x250E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E6Cu;
        // 0x250e70: 0xafa5002c  sw          $a1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E74u;
        goto label_250e74;
    }
    ctx->pc = 0x250E6Cu;
    {
        const bool branch_taken_0x250e6c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E6Cu;
        // 0x250e70: 0xafa5002c  sw          $a1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e6c) {
            ctx->pc = 0x250EA0u;
            goto label_250ea0;
        }
    }
    ctx->pc = 0x250E74u;
label_250e74:
    // 0x250e74: 0x90c20004  lbu         $v0, 0x4($a2)
    ctx->pc = 0x250e74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_250e78:
    // 0x250e78: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x250e78u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
label_250e7c:
    // 0x250e7c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x250e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_250e80:
    // 0x250e80: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_250e84:
    if (ctx->pc == 0x250E84u) {
        ctx->pc = 0x250E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E80u;
        // 0x250e84: 0x96430012  lhu         $v1, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250E88u;
        goto label_250e88;
    }
    ctx->pc = 0x250E80u;
    {
        const bool branch_taken_0x250e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E80u;
        // 0x250e84: 0x96430012  lhu         $v1, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e80) {
            ctx->pc = 0x250EACu;
            goto label_250eac;
        }
    }
    ctx->pc = 0x250E88u;
label_250e88:
    // 0x250e88: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x250e88u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_250e8c:
    // 0x250e8c: 0xdea20040  ld          $v0, 0x40($s5)
    ctx->pc = 0x250e8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 21), 64)));
label_250e90:
    // 0x250e90: 0x2b83c  dsll32      $s7, $v0, 0
    ctx->pc = 0x250e90u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 2) << (32 + 0));
label_250e94:
    // 0x250e94: 0x17b83f  dsra32      $s7, $s7, 0
    ctx->pc = 0x250e94u;
    SET_GPR_S64(ctx, 23, GPR_S64(ctx, 23) >> (32 + 0));
label_250e98:
    // 0x250e98: 0x10000005  b           . + 4 + (0x5 << 2)
label_250e9c:
    if (ctx->pc == 0x250E9Cu) {
        ctx->pc = 0x250E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E98u;
        // 0x250e9c: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250EA0u;
        goto label_250ea0;
    }
    ctx->pc = 0x250E98u;
    {
        const bool branch_taken_0x250e98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250E98u;
        // 0x250e9c: 0x30620200  andi        $v0, $v1, 0x200 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250e98) {
            ctx->pc = 0x250EB0u;
            goto label_250eb0;
        }
    }
    ctx->pc = 0x250EA0u;
label_250ea0:
    // 0x250ea0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x250ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_250ea4:
    // 0x250ea4: 0xa2220008  sb          $v0, 0x8($s1)
    ctx->pc = 0x250ea4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 8), (uint8_t)GPR_U32(ctx, 2));
label_250ea8:
    // 0x250ea8: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x250ea8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_250eac:
    // 0x250eac: 0x30620200  andi        $v0, $v1, 0x200
    ctx->pc = 0x250eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)512);
label_250eb0:
    // 0x250eb0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_250eb4:
    if (ctx->pc == 0x250EB4u) {
        ctx->pc = 0x250EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EB0u;
        // 0x250eb4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250EB8u;
        goto label_250eb8;
    }
    ctx->pc = 0x250EB0u;
    {
        const bool branch_taken_0x250eb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EB0u;
        // 0x250eb4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250eb0) {
            ctx->pc = 0x250EC8u;
            goto label_250ec8;
        }
    }
    ctx->pc = 0x250EB8u;
label_250eb8:
    // 0x250eb8: 0x86a20030  lh          $v0, 0x30($s5)
    ctx->pc = 0x250eb8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 48)));
label_250ebc:
    // 0x250ebc: 0x30428000  andi        $v0, $v0, 0x8000
    ctx->pc = 0x250ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32768);
label_250ec0:
    // 0x250ec0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_250ec4:
    if (ctx->pc == 0x250EC4u) {
        ctx->pc = 0x250EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EC0u;
        // 0x250ec4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x250EC8u;
        goto label_250ec8;
    }
    ctx->pc = 0x250EC0u;
    {
        const bool branch_taken_0x250ec0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x250EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EC0u;
        // 0x250ec4: 0x30620100  andi        $v0, $v1, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ec0) {
            ctx->pc = 0x250EE0u;
            goto label_250ee0;
        }
    }
    ctx->pc = 0x250EC8u;
label_250ec8:
    // 0x250ec8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_250ecc:
    if (ctx->pc == 0x250ECCu) {
        ctx->pc = 0x250ED0u;
        goto label_250ed0;
    }
    ctx->pc = 0x250EC8u;
    {
        const bool branch_taken_0x250ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x250ec8) {
            ctx->pc = 0x250F00u;
            goto label_250f00;
        }
    }
    ctx->pc = 0x250ED0u;
label_250ed0:
    // 0x250ed0: 0x96a20030  lhu         $v0, 0x30($s5)
    ctx->pc = 0x250ed0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 48)));
label_250ed4:
    // 0x250ed4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x250ed4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_250ed8:
    // 0x250ed8: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_250edc:
    if (ctx->pc == 0x250EDCu) {
        ctx->pc = 0x250EE0u;
        goto label_250ee0;
    }
    ctx->pc = 0x250ED8u;
    {
        const bool branch_taken_0x250ed8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x250ed8) {
            ctx->pc = 0x250F00u;
            goto label_250f00;
        }
    }
    ctx->pc = 0x250EE0u;
label_250ee0:
    // 0x250ee0: 0x24020072  addiu       $v0, $zero, 0x72
    ctx->pc = 0x250ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 114));
label_250ee4:
    // 0x250ee4: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x250ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_250ee8:
    // 0x250ee8: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x250ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_250eec:
    // 0x250eec: 0x246310a8  addiu       $v1, $v1, 0x10A8
    ctx->pc = 0x250eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4264));
label_250ef0:
    // 0x250ef0: 0xdc6200b0  ld          $v0, 0xB0($v1)
    ctx->pc = 0x250ef0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 176)));
label_250ef4:
    // 0x250ef4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x250ef4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_250ef8:
    // 0x250ef8: 0x100001ff  b           . + 4 + (0x1FF << 2)
label_250efc:
    if (ctx->pc == 0x250EFCu) {
        ctx->pc = 0x250EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EF8u;
        // 0x250efc: 0xfc6200b0  sd          $v0, 0xB0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F00u;
        goto label_250f00;
    }
    ctx->pc = 0x250EF8u;
    {
        const bool branch_taken_0x250ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250EF8u;
        // 0x250efc: 0xfc6200b0  sd          $v0, 0xB0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 176), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ef8) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x250F00u;
label_250f00:
    // 0x250f00: 0x8a30000f  lwl         $s0, 0xF($s1)
    ctx->pc = 0x250f00u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
label_250f04:
    // 0x250f04: 0x9a30000c  lwr         $s0, 0xC($s1)
    ctx->pc = 0x250f04u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
label_250f08:
    // 0x250f08: 0xc08a254  jal         func_228950
label_250f0c:
    if (ctx->pc == 0x250F0Cu) {
        ctx->pc = 0x250F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F08u;
        // 0x250f0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F10u;
        goto label_250f10;
    }
    ctx->pc = 0x250F08u;
    SET_GPR_U32(ctx, 31, 0x250F10u);
    ctx->pc = 0x250F0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x250F08u;
    // 0x250f0c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x250F08u, 0x250F10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x250F10u;
label_250f10:
    // 0x250f10: 0x16020018  bne         $s0, $v0, . + 4 + (0x18 << 2)
label_250f14:
    if (ctx->pc == 0x250F14u) {
        ctx->pc = 0x250F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F10u;
        // 0x250f14: 0x8ea5000c  lw          $a1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F18u;
        goto label_250f18;
    }
    ctx->pc = 0x250F10u;
    {
        const bool branch_taken_0x250f10 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x250F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F10u;
        // 0x250f14: 0x8ea5000c  lw          $a1, 0xC($s5) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f10) {
            ctx->pc = 0x250F74u;
            goto label_250f74;
        }
    }
    ctx->pc = 0x250F18u;
label_250f18:
    // 0x250f18: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
label_250f1c:
    if (ctx->pc == 0x250F1Cu) {
        ctx->pc = 0x250F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F18u;
        // 0x250f1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F20u;
        goto label_250f20;
    }
    ctx->pc = 0x250F18u;
    {
        const bool branch_taken_0x250f18 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F18u;
        // 0x250f1c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f18) {
            ctx->pc = 0x250F50u;
            goto label_250f50;
        }
    }
    ctx->pc = 0x250F20u;
label_250f20:
    // 0x250f20: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x250f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_250f24:
    // 0x250f24: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x250f24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_250f28:
    // 0x250f28: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_250f2c:
    if (ctx->pc == 0x250F2Cu) {
        ctx->pc = 0x250F30u;
        goto label_250f30;
    }
    ctx->pc = 0x250F28u;
    {
        const bool branch_taken_0x250f28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x250f28) {
            ctx->pc = 0x250F50u;
            goto label_250f50;
        }
    }
    ctx->pc = 0x250F30u;
label_250f30:
    // 0x250f30: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x250f30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_250f34:
    // 0x250f34: 0x0  nop
    ctx->pc = 0x250f34u;
    // NOP
label_250f38:
    // 0x250f38: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_250f3c:
    if (ctx->pc == 0x250F3Cu) {
        ctx->pc = 0x250F40u;
        goto label_250f40;
    }
    ctx->pc = 0x250F38u;
    {
        const bool branch_taken_0x250f38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x250f38) {
            ctx->pc = 0x250F50u;
            goto label_250f50;
        }
    }
    ctx->pc = 0x250F40u;
label_250f40:
    // 0x250f40: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x250f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_250f44:
    // 0x250f44: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x250f44u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_250f48:
    // 0x250f48: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
label_250f4c:
    if (ctx->pc == 0x250F4Cu) {
        ctx->pc = 0x250F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F48u;
        // 0x250f4c: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F50u;
        goto label_250f50;
    }
    ctx->pc = 0x250F48u;
    {
        const bool branch_taken_0x250f48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x250f48) {
            ctx->pc = 0x250F4Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250F48u;
            // 0x250f4c: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250F38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_250f38;
        }
    }
    ctx->pc = 0x250F50u;
label_250f50:
    // 0x250f50: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
label_250f54:
    if (ctx->pc == 0x250F54u) {
        ctx->pc = 0x250F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F50u;
        // 0x250f54: 0x2403007d  addiu       $v1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F58u;
        goto label_250f58;
    }
    ctx->pc = 0x250F50u;
    {
        const bool branch_taken_0x250f50 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x250F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F50u;
        // 0x250f54: 0x2403007d  addiu       $v1, $zero, 0x7D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f50) {
            ctx->pc = 0x250F60u;
            goto label_250f60;
        }
    }
    ctx->pc = 0x250F58u;
label_250f58:
    // 0x250f58: 0x100001e7  b           . + 4 + (0x1E7 << 2)
label_250f5c:
    if (ctx->pc == 0x250F5Cu) {
        ctx->pc = 0x250F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F58u;
        // 0x250f5c: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F60u;
        goto label_250f60;
    }
    ctx->pc = 0x250F58u;
    {
        const bool branch_taken_0x250f58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F58u;
        // 0x250f5c: 0xafa30028  sw          $v1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f58) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x250F60u;
label_250f60:
    // 0x250f60: 0x88a40063  lwl         $a0, 0x63($a1)
    ctx->pc = 0x250f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_250f64:
    // 0x250f64: 0x98a40060  lwr         $a0, 0x60($a1)
    ctx->pc = 0x250f64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_250f68:
    // 0x250f68: 0xaa24000f  swl         $a0, 0xF($s1)
    ctx->pc = 0x250f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_250f6c:
    // 0x250f6c: 0xba24000c  swr         $a0, 0xC($s1)
    ctx->pc = 0x250f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_250f70:
    // 0x250f70: 0x8ea5000c  lw          $a1, 0xC($s5)
    ctx->pc = 0x250f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 12)));
label_250f74:
    // 0x250f74: 0x10a0001f  beqz        $a1, . + 4 + (0x1F << 2)
label_250f78:
    if (ctx->pc == 0x250F78u) {
        ctx->pc = 0x250F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F74u;
        // 0x250f78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250F7Cu;
        goto label_250f7c;
    }
    ctx->pc = 0x250F74u;
    {
        const bool branch_taken_0x250f74 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F74u;
        // 0x250f78: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f74) {
            ctx->pc = 0x250FF4u;
            goto label_250ff4;
        }
    }
    ctx->pc = 0x250F7Cu;
label_250f7c:
    // 0x250f7c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x250f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_250f80:
    // 0x250f80: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x250f80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_250f84:
    // 0x250f84: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x250f84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_250f88:
    // 0x250f88: 0x10640009  beq         $v1, $a0, . + 4 + (0x9 << 2)
label_250f8c:
    if (ctx->pc == 0x250F8Cu) {
        ctx->pc = 0x250F90u;
        goto label_250f90;
    }
    ctx->pc = 0x250F88u;
    {
        const bool branch_taken_0x250f88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x250f88) {
            ctx->pc = 0x250FB0u;
            goto label_250fb0;
        }
    }
    ctx->pc = 0x250F90u;
label_250f90:
    // 0x250f90: 0x8ca50010  lw          $a1, 0x10($a1)
    ctx->pc = 0x250f90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
label_250f94:
    // 0x250f94: 0x0  nop
    ctx->pc = 0x250f94u;
    // NOP
label_250f98:
    // 0x250f98: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
label_250f9c:
    if (ctx->pc == 0x250F9Cu) {
        ctx->pc = 0x250F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F98u;
        // 0x250f9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FA0u;
        goto label_250fa0;
    }
    ctx->pc = 0x250F98u;
    {
        const bool branch_taken_0x250f98 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250F98u;
        // 0x250f9c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250f98) {
            ctx->pc = 0x250FF4u;
            goto label_250ff4;
        }
    }
    ctx->pc = 0x250FA0u;
label_250fa0:
    // 0x250fa0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x250fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_250fa4:
    // 0x250fa4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x250fa4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_250fa8:
    // 0x250fa8: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
label_250fac:
    if (ctx->pc == 0x250FACu) {
        ctx->pc = 0x250FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FA8u;
        // 0x250fac: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FB0u;
        goto label_250fb0;
    }
    ctx->pc = 0x250FA8u;
    {
        const bool branch_taken_0x250fa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x250fa8) {
            ctx->pc = 0x250FACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250FA8u;
            // 0x250fac: 0x8ca50010  lw          $a1, 0x10($a1) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250F98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_250f98;
        }
    }
    ctx->pc = 0x250FB0u;
label_250fb0:
    // 0x250fb0: 0x10a00010  beqz        $a1, . + 4 + (0x10 << 2)
label_250fb4:
    if (ctx->pc == 0x250FB4u) {
        ctx->pc = 0x250FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FB0u;
        // 0x250fb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FB8u;
        goto label_250fb8;
    }
    ctx->pc = 0x250FB0u;
    {
        const bool branch_taken_0x250fb0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x250FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FB0u;
        // 0x250fb4: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250fb0) {
            ctx->pc = 0x250FF4u;
            goto label_250ff4;
        }
    }
    ctx->pc = 0x250FB8u;
label_250fb8:
    // 0x250fb8: 0x8ca3008c  lw          $v1, 0x8C($a1)
    ctx->pc = 0x250fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 140)));
label_250fbc:
    // 0x250fbc: 0x50600018  beql        $v1, $zero, . + 4 + (0x18 << 2)
label_250fc0:
    if (ctx->pc == 0x250FC0u) {
        ctx->pc = 0x250FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FBCu;
        // 0x250fc0: 0x92220008  lbu         $v0, 0x8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FC4u;
        goto label_250fc4;
    }
    ctx->pc = 0x250FBCu;
    {
        const bool branch_taken_0x250fbc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x250fbc) {
            ctx->pc = 0x250FC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250FBCu;
            // 0x250fc0: 0x92220008  lbu         $v0, 0x8($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251020u;
            goto label_251020;
        }
    }
    ctx->pc = 0x250FC4u;
label_250fc4:
    // 0x250fc4: 0x8a240013  lwl         $a0, 0x13($s1)
    ctx->pc = 0x250fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_250fc8:
    // 0x250fc8: 0x9a240010  lwr         $a0, 0x10($s1)
    ctx->pc = 0x250fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_250fcc:
    // 0x250fcc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x250fccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_250fd0:
    // 0x250fd0: 0x10440008  beq         $v0, $a0, . + 4 + (0x8 << 2)
label_250fd4:
    if (ctx->pc == 0x250FD4u) {
        ctx->pc = 0x250FD8u;
        goto label_250fd8;
    }
    ctx->pc = 0x250FD0u;
    {
        const bool branch_taken_0x250fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x250fd0) {
            ctx->pc = 0x250FF4u;
            goto label_250ff4;
        }
    }
    ctx->pc = 0x250FD8u;
label_250fd8:
    // 0x250fd8: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x250fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_250fdc:
    // 0x250fdc: 0x0  nop
    ctx->pc = 0x250fdcu;
    // NOP
label_250fe0:
    // 0x250fe0: 0x5060000f  beql        $v1, $zero, . + 4 + (0xF << 2)
label_250fe4:
    if (ctx->pc == 0x250FE4u) {
        ctx->pc = 0x250FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FE0u;
        // 0x250fe4: 0x92220008  lbu         $v0, 0x8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FE8u;
        goto label_250fe8;
    }
    ctx->pc = 0x250FE0u;
    {
        const bool branch_taken_0x250fe0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x250fe0) {
            ctx->pc = 0x250FE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250FE0u;
            // 0x250fe4: 0x92220008  lbu         $v0, 0x8($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251020u;
            goto label_251020;
        }
    }
    ctx->pc = 0x250FE8u;
label_250fe8:
    // 0x250fe8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x250fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_250fec:
    // 0x250fec: 0x5444fffc  bnel        $v0, $a0, . + 4 + (-0x4 << 2)
label_250ff0:
    if (ctx->pc == 0x250FF0u) {
        ctx->pc = 0x250FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FECu;
        // 0x250ff0: 0x8c630014  lw          $v1, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FF4u;
        goto label_250ff4;
    }
    ctx->pc = 0x250FECu;
    {
        const bool branch_taken_0x250fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x250fec) {
            ctx->pc = 0x250FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x250FECu;
            // 0x250ff0: 0x8c630014  lw          $v1, 0x14($v1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x250FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_250fe0;
        }
    }
    ctx->pc = 0x250FF4u;
label_250ff4:
    // 0x250ff4: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_250ff8:
    if (ctx->pc == 0x250FF8u) {
        ctx->pc = 0x250FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FF4u;
        // 0x250ff8: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x250FFCu;
        goto label_250ffc;
    }
    ctx->pc = 0x250FF4u;
    {
        const bool branch_taken_0x250ff4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x250FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FF4u;
        // 0x250ff8: 0x8fa40038  lw          $a0, 0x38($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ff4) {
            ctx->pc = 0x25101Cu;
            goto label_25101c;
        }
    }
    ctx->pc = 0x250FFCu;
label_250ffc:
    // 0x250ffc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_251000:
    if (ctx->pc == 0x251000u) {
        ctx->pc = 0x251000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FFCu;
        // 0x251000: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251004u;
        goto label_251004;
    }
    ctx->pc = 0x250FFCu;
    {
        const bool branch_taken_0x250ffc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x251000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x250FFCu;
        // 0x251000: 0x8fa6004c  lw          $a2, 0x4C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x250ffc) {
            ctx->pc = 0x251010u;
            goto label_251010;
        }
    }
    ctx->pc = 0x251004u;
label_251004:
    // 0x251004: 0x90820005  lbu         $v0, 0x5($a0)
    ctx->pc = 0x251004u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 5)));
label_251008:
    // 0x251008: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_25100c:
    if (ctx->pc == 0x25100Cu) {
        ctx->pc = 0x25100Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251008u;
        // 0x25100c: 0x92220008  lbu         $v0, 0x8($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251010u;
        goto label_251010;
    }
    ctx->pc = 0x251008u;
    {
        const bool branch_taken_0x251008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251008) {
            ctx->pc = 0x25100Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251008u;
            // 0x25100c: 0x92220008  lbu         $v0, 0x8($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251020u;
            goto label_251020;
        }
    }
    ctx->pc = 0x251010u;
label_251010:
    // 0x251010: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x251010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_251014:
    // 0x251014: 0xc0949b8  jal         func_2526E0
label_251018:
    if (ctx->pc == 0x251018u) {
        ctx->pc = 0x251018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251014u;
        // 0x251018: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25101Cu;
        goto label_25101c;
    }
    ctx->pc = 0x251014u;
    SET_GPR_U32(ctx, 31, 0x25101Cu);
    ctx->pc = 0x251018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251014u;
    // 0x251018: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2526E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2526E0u, 0x251014u, 0x25101Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25101Cu;
label_25101c:
    // 0x25101c: 0x92220008  lbu         $v0, 0x8($s1)
    ctx->pc = 0x25101cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_251020:
    // 0x251020: 0x104001b5  beqz        $v0, . + 4 + (0x1B5 << 2)
label_251024:
    if (ctx->pc == 0x251024u) {
        ctx->pc = 0x251028u;
        goto label_251028;
    }
    ctx->pc = 0x251020u;
    {
        const bool branch_taken_0x251020 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251020) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x251028u;
label_251028:
    // 0x251028: 0x96a20030  lhu         $v0, 0x30($s5)
    ctx->pc = 0x251028u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 48)));
label_25102c:
    // 0x25102c: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x25102cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_251030:
    // 0x251030: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_251034:
    if (ctx->pc == 0x251034u) {
        ctx->pc = 0x251034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251030u;
        // 0x251034: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251038u;
        goto label_251038;
    }
    ctx->pc = 0x251030u;
    {
        const bool branch_taken_0x251030 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251034u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251030u;
        // 0x251034: 0x8fa60030  lw          $a2, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251030) {
            ctx->pc = 0x251130u;
            goto label_251130;
        }
    }
    ctx->pc = 0x251038u;
label_251038:
    // 0x251038: 0x100001af  b           . + 4 + (0x1AF << 2)
label_25103c:
    if (ctx->pc == 0x25103Cu) {
        ctx->pc = 0x251040u;
        goto label_251040;
    }
    ctx->pc = 0x251038u;
    {
        const bool branch_taken_0x251038 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251038) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x251040u;
label_251040:
    // 0x251040: 0x8a30000f  lwl         $s0, 0xF($s1)
    ctx->pc = 0x251040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
label_251044:
    // 0x251044: 0x9a30000c  lwr         $s0, 0xC($s1)
    ctx->pc = 0x251044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
label_251048:
    // 0x251048: 0xc08a254  jal         func_228950
label_25104c:
    if (ctx->pc == 0x25104Cu) {
        ctx->pc = 0x25104Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251048u;
        // 0x25104c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251050u;
        goto label_251050;
    }
    ctx->pc = 0x251048u;
    SET_GPR_U32(ctx, 31, 0x251050u);
    ctx->pc = 0x25104Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251048u;
    // 0x25104c: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228950u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228950u, 0x251048u, 0x251050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251050u;
label_251050:
    // 0x251050: 0x16020008  bne         $s0, $v0, . + 4 + (0x8 << 2)
label_251054:
    if (ctx->pc == 0x251054u) {
        ctx->pc = 0x251054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251050u;
        // 0x251054: 0x2161024  and         $v0, $s0, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251058u;
        goto label_251058;
    }
    ctx->pc = 0x251050u;
    {
        const bool branch_taken_0x251050 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x251054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251050u;
        // 0x251054: 0x2161024  and         $v0, $s0, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251050) {
            ctx->pc = 0x251074u;
            goto label_251074;
        }
    }
    ctx->pc = 0x251058u;
label_251058:
    // 0x251058: 0x8a650063  lwl         $a1, 0x63($s3)
    ctx->pc = 0x251058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 99); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 5) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 5, (int32_t)merged); }
label_25105c:
    // 0x25105c: 0x9a650060  lwr         $a1, 0x60($s3)
    ctx->pc = 0x25105cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 96); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 5) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 5) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 5, merged64); }
label_251060:
    // 0x251060: 0xaa25000f  swl         $a1, 0xF($s1)
    ctx->pc = 0x251060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_251064:
    // 0x251064: 0xba25000c  swr         $a1, 0xC($s1)
    ctx->pc = 0x251064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 5); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_251068:
    // 0x251068: 0x8a30000f  lwl         $s0, 0xF($s1)
    ctx->pc = 0x251068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 16) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 16, (int32_t)merged); }
label_25106c:
    // 0x25106c: 0x9a30000c  lwr         $s0, 0xC($s1)
    ctx->pc = 0x25106cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 16) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 16) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 16, merged64); }
label_251070:
    // 0x251070: 0x2161024  and         $v0, $s0, $s6
    ctx->pc = 0x251070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & GPR_U64(ctx, 22));
label_251074:
    // 0x251074: 0x14540009  bne         $v0, $s4, . + 4 + (0x9 << 2)
label_251078:
    if (ctx->pc == 0x251078u) {
        ctx->pc = 0x251078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251074u;
        // 0x251078: 0x8fa5002c  lw          $a1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25107Cu;
        goto label_25107c;
    }
    ctx->pc = 0x251074u;
    {
        const bool branch_taken_0x251074 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        ctx->pc = 0x251078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251074u;
        // 0x251078: 0x8fa5002c  lw          $a1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251074) {
            ctx->pc = 0x25109Cu;
            goto label_25109c;
        }
    }
    ctx->pc = 0x25107Cu;
label_25107c:
    // 0x25107c: 0x2404007d  addiu       $a0, $zero, 0x7D
    ctx->pc = 0x25107cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_251080:
    // 0x251080: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x251080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_251084:
    // 0x251084: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x251084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_251088:
    // 0x251088: 0x246310a8  addiu       $v1, $v1, 0x10A8
    ctx->pc = 0x251088u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4264));
label_25108c:
    // 0x25108c: 0xdc620080  ld          $v0, 0x80($v1)
    ctx->pc = 0x25108cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 128)));
label_251090:
    // 0x251090: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x251090u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_251094:
    // 0x251094: 0x10000198  b           . + 4 + (0x198 << 2)
label_251098:
    if (ctx->pc == 0x251098u) {
        ctx->pc = 0x251098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251094u;
        // 0x251098: 0xfc620080  sd          $v0, 0x80($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25109Cu;
        goto label_25109c;
    }
    ctx->pc = 0x251094u;
    {
        const bool branch_taken_0x251094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251094u;
        // 0x251098: 0xfc620080  sd          $v0, 0x80($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251094) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x25109Cu;
label_25109c:
    // 0x25109c: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x25109cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
label_2510a0:
    // 0x2510a0: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2510a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
label_2510a4:
    // 0x2510a4: 0x88a20007  lwl         $v0, 0x7($a1)
    ctx->pc = 0x2510a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
label_2510a8:
    // 0x2510a8: 0x98a20004  lwr         $v0, 0x4($a1)
    ctx->pc = 0x2510a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
label_2510ac:
    // 0x2510ac: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2510acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2510b0:
    // 0x2510b0: 0xc092ad2  jal         func_24AB48
label_2510b4:
    if (ctx->pc == 0x2510B4u) {
        ctx->pc = 0x2510B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510B0u;
        // 0x2510b4: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510B8u;
        goto label_2510b8;
    }
    ctx->pc = 0x2510B0u;
    SET_GPR_U32(ctx, 31, 0x2510B8u);
    ctx->pc = 0x2510B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2510B0u;
    // 0x2510b4: 0x442024  and         $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24AB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24AB48u, 0x2510B0u, 0x2510B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2510B8u;
label_2510b8:
    // 0x2510b8: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_2510bc:
    if (ctx->pc == 0x2510BCu) {
        ctx->pc = 0x2510BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510B8u;
        // 0x2510bc: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510C0u;
        goto label_2510c0;
    }
    ctx->pc = 0x2510B8u;
    {
        const bool branch_taken_0x2510b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2510b8) {
            ctx->pc = 0x2510BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2510B8u;
            // 0x2510bc: 0x96420012  lhu         $v0, 0x12($s2) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251124u;
            goto label_251124;
        }
    }
    ctx->pc = 0x2510C0u;
label_2510c0:
    // 0x2510c0: 0x96a20030  lhu         $v0, 0x30($s5)
    ctx->pc = 0x2510c0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 48)));
label_2510c4:
    // 0x2510c4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2510c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2510c8:
    // 0x2510c8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2510cc:
    if (ctx->pc == 0x2510CCu) {
        ctx->pc = 0x2510CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510C8u;
        // 0x2510cc: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510D0u;
        goto label_2510d0;
    }
    ctx->pc = 0x2510C8u;
    {
        const bool branch_taken_0x2510c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2510CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510C8u;
        // 0x2510cc: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510c8) {
            ctx->pc = 0x2510DCu;
            goto label_2510dc;
        }
    }
    ctx->pc = 0x2510D0u;
label_2510d0:
    // 0x2510d0: 0x2406007d  addiu       $a2, $zero, 0x7D
    ctx->pc = 0x2510d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 125));
label_2510d4:
    // 0x2510d4: 0x10000188  b           . + 4 + (0x188 << 2)
label_2510d8:
    if (ctx->pc == 0x2510D8u) {
        ctx->pc = 0x2510D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510D4u;
        // 0x2510d8: 0xafa60028  sw          $a2, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510DCu;
        goto label_2510dc;
    }
    ctx->pc = 0x2510D4u;
    {
        const bool branch_taken_0x2510d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2510D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510D4u;
        // 0x2510d8: 0xafa60028  sw          $a2, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510d4) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x2510DCu;
label_2510dc:
    // 0x2510dc: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x2510dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_2510e0:
    // 0x2510e0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2510e4:
    if (ctx->pc == 0x2510E4u) {
        ctx->pc = 0x2510E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510E0u;
        // 0x2510e4: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510E8u;
        goto label_2510e8;
    }
    ctx->pc = 0x2510E0u;
    {
        const bool branch_taken_0x2510e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2510e0) {
            ctx->pc = 0x2510E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2510E0u;
            // 0x2510e4: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2510F4u;
            goto label_2510f4;
        }
    }
    ctx->pc = 0x2510E8u;
label_2510e8:
    // 0x2510e8: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x2510e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_2510ec:
    // 0x2510ec: 0x10000182  b           . + 4 + (0x182 << 2)
label_2510f0:
    if (ctx->pc == 0x2510F0u) {
        ctx->pc = 0x2510F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510ECu;
        // 0x2510f0: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2510F4u;
        goto label_2510f4;
    }
    ctx->pc = 0x2510ECu;
    {
        const bool branch_taken_0x2510ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2510F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2510ECu;
        // 0x2510f0: 0xafa40028  sw          $a0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2510ec) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x2510F4u;
label_2510f4:
    // 0x2510f4: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x2510f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_2510f8:
    // 0x2510f8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2510f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2510fc:
    // 0x2510fc: 0xdea30040  ld          $v1, 0x40($s5)
    ctx->pc = 0x2510fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 21), 64)));
label_251100:
    // 0x251100: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x251100u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_251104:
    // 0x251104: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x251104u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_251108:
    // 0x251108: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_25110c:
    if (ctx->pc == 0x25110Cu) {
        ctx->pc = 0x25110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251108u;
        // 0x25110c: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251110u;
        goto label_251110;
    }
    ctx->pc = 0x251108u;
    {
        const bool branch_taken_0x251108 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25110Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251108u;
        // 0x25110c: 0x2405007a  addiu       $a1, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251108) {
            ctx->pc = 0x251118u;
            goto label_251118;
        }
    }
    ctx->pc = 0x251110u;
label_251110:
    // 0x251110: 0x10000179  b           . + 4 + (0x179 << 2)
label_251114:
    if (ctx->pc == 0x251114u) {
        ctx->pc = 0x251114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251110u;
        // 0x251114: 0xafa50028  sw          $a1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251118u;
        goto label_251118;
    }
    ctx->pc = 0x251110u;
    {
        const bool branch_taken_0x251110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251110u;
        // 0x251114: 0xafa50028  sw          $a1, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251110) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x251118u;
label_251118:
    // 0x251118: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x251118u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_25111c:
    // 0x25111c: 0x10000002  b           . + 4 + (0x2 << 2)
label_251120:
    if (ctx->pc == 0x251120u) {
        ctx->pc = 0x251120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25111Cu;
        // 0x251120: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251124u;
        goto label_251124;
    }
    ctx->pc = 0x25111Cu;
    {
        const bool branch_taken_0x25111c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25111Cu;
        // 0x251120: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25111c) {
            ctx->pc = 0x251128u;
            goto label_251128;
        }
    }
    ctx->pc = 0x251124u;
label_251124:
    // 0x251124: 0x3042feff  andi        $v0, $v0, 0xFEFF
    ctx->pc = 0x251124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65279);
label_251128:
    // 0x251128: 0xa6420012  sh          $v0, 0x12($s2)
    ctx->pc = 0x251128u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 2));
label_25112c:
    // 0x25112c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x25112cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_251130:
    // 0x251130: 0x30c20400  andi        $v0, $a2, 0x400
    ctx->pc = 0x251130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)1024);
label_251134:
    // 0x251134: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_251138:
    if (ctx->pc == 0x251138u) {
        ctx->pc = 0x251138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251134u;
        // 0x251138: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25113Cu;
        goto label_25113c;
    }
    ctx->pc = 0x251134u;
    {
        const bool branch_taken_0x251134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251134) {
            ctx->pc = 0x251138u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251134u;
            // 0x251138: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251180u;
            goto label_251180;
        }
    }
    ctx->pc = 0x25113Cu;
label_25113c:
    // 0x25113c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x25113cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_251140:
    // 0x251140: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_251144:
    if (ctx->pc == 0x251144u) {
        ctx->pc = 0x251144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251140u;
        // 0x251144: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251148u;
        goto label_251148;
    }
    ctx->pc = 0x251140u;
    {
        const bool branch_taken_0x251140 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x251140) {
            ctx->pc = 0x251144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251140u;
            // 0x251144: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251180u;
            goto label_251180;
        }
    }
    ctx->pc = 0x251148u;
label_251148:
    // 0x251148: 0xdc420058  ld          $v0, 0x58($v0)
    ctx->pc = 0x251148u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 88)));
label_25114c:
    // 0x25114c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x25114cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_251150:
    // 0x251150: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_251154:
    if (ctx->pc == 0x251154u) {
        ctx->pc = 0x251154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251150u;
        // 0x251154: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251158u;
        goto label_251158;
    }
    ctx->pc = 0x251150u;
    {
        const bool branch_taken_0x251150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x251150) {
            ctx->pc = 0x251154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251150u;
            // 0x251154: 0x92220003  lbu         $v0, 0x3($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251180u;
            goto label_251180;
        }
    }
    ctx->pc = 0x251158u;
label_251158:
    // 0x251158: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x251158u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_25115c:
    // 0x25115c: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x25115cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_251160:
    // 0x251160: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x251160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_251164:
    // 0x251164: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x251164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_251168:
    // 0x251168: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x251168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_25116c:
    // 0x25116c: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x25116cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
label_251170:
    // 0x251170: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x251170u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_251174:
    // 0x251174: 0xa2220006  sb          $v0, 0x6($s1)
    ctx->pc = 0x251174u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
label_251178:
    // 0x251178: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x251178u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
label_25117c:
    // 0x25117c: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x25117cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_251180:
    // 0x251180: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x251180u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_251184:
    // 0x251184: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x251184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_251188:
    // 0x251188: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x251188u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25118c:
    // 0x25118c: 0x3044ffff  andi        $a0, $v0, 0xFFFF
    ctx->pc = 0x25118cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_251190:
    // 0x251190: 0x2e4182a  slt         $v1, $s7, $a0
    ctx->pc = 0x251190u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 23) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
label_251194:
    // 0x251194: 0x5460001f  bnel        $v1, $zero, . + 4 + (0x1F << 2)
label_251198:
    if (ctx->pc == 0x251198u) {
        ctx->pc = 0x251198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251194u;
        // 0x251198: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25119Cu;
        goto label_25119c;
    }
    ctx->pc = 0x251194u;
    {
        const bool branch_taken_0x251194 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x251194) {
            ctx->pc = 0x251198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251194u;
            // 0x251198: 0x92220007  lbu         $v0, 0x7($s1) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251214u;
            goto label_251214;
        }
    }
    ctx->pc = 0x25119Cu;
label_25119c:
    // 0x25119c: 0xc08a262  jal         func_228988
label_2511a0:
    if (ctx->pc == 0x2511A0u) {
        ctx->pc = 0x2511A4u;
        goto label_2511a4;
    }
    ctx->pc = 0x25119Cu;
    SET_GPR_U32(ctx, 31, 0x2511A4u);
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x25119Cu, 0x2511A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511A4u;
label_2511a4:
    // 0x2511a4: 0x92240007  lbu         $a0, 0x7($s1)
    ctx->pc = 0x2511a4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2511a8:
    // 0x2511a8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2511a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2511ac:
    // 0x2511ac: 0x92250006  lbu         $a1, 0x6($s1)
    ctx->pc = 0x2511acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_2511b0:
    // 0x2511b0: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x2511b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_2511b4:
    // 0x2511b4: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x2511b4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
label_2511b8:
    // 0x2511b8: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2511b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_2511bc:
    // 0x2511bc: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x2511bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_2511c0:
    // 0x2511c0: 0xc08a262  jal         func_228988
label_2511c4:
    if (ctx->pc == 0x2511C4u) {
        ctx->pc = 0x2511C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511C0u;
        // 0x2511c4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2511C8u;
        goto label_2511c8;
    }
    ctx->pc = 0x2511C0u;
    SET_GPR_U32(ctx, 31, 0x2511C8u);
    ctx->pc = 0x2511C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2511C0u;
    // 0x2511c4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x2511C0u, 0x2511C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511C8u;
label_2511c8:
    // 0x2511c8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2511c8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2511cc:
    // 0x2511cc: 0xa220000a  sb          $zero, 0xA($s1)
    ctx->pc = 0x2511ccu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
label_2511d0:
    // 0x2511d0: 0xa220000b  sb          $zero, 0xB($s1)
    ctx->pc = 0x2511d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 0));
label_2511d4:
    // 0x2511d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2511d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2511d8:
    // 0x2511d8: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x2511d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
label_2511dc:
    // 0x2511dc: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2511dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2511e0:
    // 0x2511e0: 0xc092d7e  jal         func_24B5F8
label_2511e4:
    if (ctx->pc == 0x2511E4u) {
        ctx->pc = 0x2511E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2511E0u;
        // 0x2511e4: 0xa2220006  sb          $v0, 0x6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2511E8u;
        goto label_2511e8;
    }
    ctx->pc = 0x2511E0u;
    SET_GPR_U32(ctx, 31, 0x2511E8u);
    ctx->pc = 0x2511E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2511E0u;
    // 0x2511e4: 0xa2220006  sb          $v0, 0x6($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5F8u, 0x2511E0u, 0x2511E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2511E8u;
label_2511e8:
    // 0x2511e8: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2511e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_2511ec:
    // 0x2511ec: 0xa222000a  sb          $v0, 0xA($s1)
    ctx->pc = 0x2511ecu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 2));
label_2511f0:
    // 0x2511f0: 0xa223000b  sb          $v1, 0xB($s1)
    ctx->pc = 0x2511f0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 3));
label_2511f4:
    // 0x2511f4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2511f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2511f8:
    // 0x2511f8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2511f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2511fc:
    // 0x2511fc: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x2511fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_251200:
    // 0x251200: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x251200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
label_251204:
    // 0x251204: 0x40f809  jalr        $v0
label_251208:
    if (ctx->pc == 0x251208u) {
        ctx->pc = 0x251208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251204u;
        // 0x251208: 0x8fc70000  lw          $a3, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25120Cu;
        goto label_25120c;
    }
    ctx->pc = 0x251204u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x25120Cu);
        ctx->pc = 0x251208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251204u;
        // 0x251208: 0x8fc70000  lw          $a3, 0x0($fp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251204u, 0x25120Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x25120Cu;
label_25120c:
    // 0x25120c: 0x1000012b  b           . + 4 + (0x12B << 2)
label_251210:
    if (ctx->pc == 0x251210u) {
        ctx->pc = 0x251210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25120Cu;
        // 0x251210: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251214u;
        goto label_251214;
    }
    ctx->pc = 0x25120Cu;
    {
        const bool branch_taken_0x25120c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251210u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25120Cu;
        // 0x251210: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x25120c) {
            ctx->pc = 0x2516BCu;
            goto label_2516bc;
        }
    }
    ctx->pc = 0x251214u;
label_251214:
    // 0x251214: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x251214u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_251218:
    // 0x251218: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x251218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_25121c:
    // 0x25121c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25121cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_251220:
    // 0x251220: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x251220u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_251224:
    // 0x251224: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x251224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_251228:
    // 0x251228: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_25122c:
    if (ctx->pc == 0x25122Cu) {
        ctx->pc = 0x25122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251228u;
        // 0x25122c: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251230u;
        goto label_251230;
    }
    ctx->pc = 0x251228u;
    {
        const bool branch_taken_0x251228 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x25122Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251228u;
        // 0x25122c: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251228) {
            ctx->pc = 0x25125Cu;
            goto label_25125c;
        }
    }
    ctx->pc = 0x251230u;
label_251230:
    // 0x251230: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_251234:
    if (ctx->pc == 0x251234u) {
        ctx->pc = 0x251234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251230u;
        // 0x251234: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251238u;
        goto label_251238;
    }
    ctx->pc = 0x251230u;
    {
        const bool branch_taken_0x251230 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251230u;
        // 0x251234: 0x8fa30034  lw          $v1, 0x34($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251230) {
            ctx->pc = 0x25123Cu;
            goto label_25123c;
        }
    }
    ctx->pc = 0x251238u;
label_251238:
    // 0x251238: 0xac770000  sw          $s7, 0x0($v1)
    ctx->pc = 0x251238u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 23));
label_25123c:
    // 0x25123c: 0x2404007a  addiu       $a0, $zero, 0x7A
    ctx->pc = 0x25123cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_251240:
    // 0x251240: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x251240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_251244:
    // 0x251244: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x251244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
label_251248:
    // 0x251248: 0x246310a8  addiu       $v1, $v1, 0x10A8
    ctx->pc = 0x251248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4264));
label_25124c:
    // 0x25124c: 0xdc6200a0  ld          $v0, 0xA0($v1)
    ctx->pc = 0x25124cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 160)));
label_251250:
    // 0x251250: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x251250u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_251254:
    // 0x251254: 0x10000128  b           . + 4 + (0x128 << 2)
label_251258:
    if (ctx->pc == 0x251258u) {
        ctx->pc = 0x251258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251254u;
        // 0x251258: 0xfc6200a0  sd          $v0, 0xA0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 160), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25125Cu;
        goto label_25125c;
    }
    ctx->pc = 0x251254u;
    {
        const bool branch_taken_0x251254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251254u;
        // 0x251258: 0xfc6200a0  sd          $v0, 0xA0($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 160), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251254) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x25125Cu;
label_25125c:
    // 0x25125c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x25125cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_251260:
    // 0x251260: 0x2403fff8  addiu       $v1, $zero, -0x8
    ctx->pc = 0x251260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_251264:
    // 0x251264: 0x2e51023  subu        $v0, $s7, $a1
    ctx->pc = 0x251264u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
label_251268:
    // 0x251268: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x251268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_25126c:
    // 0x25126c: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x25126cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
label_251270:
    // 0x251270: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x251270u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_251274:
    // 0x251274: 0x28c30008  slti        $v1, $a2, 0x8
    ctx->pc = 0x251274u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8) ? 1 : 0);
label_251278:
    // 0x251278: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_25127c:
    if (ctx->pc == 0x25127Cu) {
        ctx->pc = 0x25127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251278u;
        // 0x25127c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251280u;
        goto label_251280;
    }
    ctx->pc = 0x251278u;
    {
        const bool branch_taken_0x251278 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x25127Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251278u;
        // 0x25127c: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251278) {
            ctx->pc = 0x25129Cu;
            goto label_25129c;
        }
    }
    ctx->pc = 0x251280u;
label_251280:
    // 0x251280: 0x2402007a  addiu       $v0, $zero, 0x7A
    ctx->pc = 0x251280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_251284:
    // 0x251284: 0x1000011c  b           . + 4 + (0x11C << 2)
label_251288:
    if (ctx->pc == 0x251288u) {
        ctx->pc = 0x251288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251284u;
        // 0x251288: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25128Cu;
        goto label_25128c;
    }
    ctx->pc = 0x251284u;
    {
        const bool branch_taken_0x251284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251284u;
        // 0x251288: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251284) {
            ctx->pc = 0x2516F8u;
            goto label_2516f8;
        }
    }
    ctx->pc = 0x25128Cu;
label_25128c:
    // 0x25128c: 0xc090c4c  jal         func_243130
label_251290:
    if (ctx->pc == 0x251290u) {
        ctx->pc = 0x251294u;
        goto label_251294;
    }
    ctx->pc = 0x25128Cu;
    SET_GPR_U32(ctx, 31, 0x251294u);
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x25128Cu, 0x251294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251294u;
label_251294:
    // 0x251294: 0x1000011c  b           . + 4 + (0x11C << 2)
label_251298:
    if (ctx->pc == 0x251298u) {
        ctx->pc = 0x251298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251294u;
        // 0x251298: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25129Cu;
        goto label_25129c;
    }
    ctx->pc = 0x251294u;
    {
        const bool branch_taken_0x251294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251294u;
        // 0x251298: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251294) {
            ctx->pc = 0x251708u;
            goto label_251708;
        }
    }
    ctx->pc = 0x25129Cu;
label_25129c:
    // 0x25129c: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x25129cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_2512a0:
    // 0x2512a0: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x2512a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2512a4:
    // 0x2512a4: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x2512a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2512a8:
    // 0x2512a8: 0x26570004  addiu       $s7, $s2, 0x4
    ctx->pc = 0x2512a8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2512ac:
    // 0x2512ac: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x2512acu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_2512b0:
    // 0x2512b0: 0x24160014  addiu       $s6, $zero, 0x14
    ctx->pc = 0x2512b0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2512b4:
    // 0x2512b4: 0xc29821  addu        $s3, $a2, $v0
    ctx->pc = 0x2512b4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2512b8:
    // 0x2512b8: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x2512b8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_2512bc:
    // 0x2512bc: 0x51238  dsll        $v0, $a1, 8
    ctx->pc = 0x2512bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 8);
label_2512c0:
    // 0x2512c0: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_2512c4:
    if (ctx->pc == 0x2512C4u) {
        ctx->pc = 0x2512C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512C0u;
        // 0x2512c4: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2512C8u;
        goto label_2512c8;
    }
    ctx->pc = 0x2512C0u;
    {
        const bool branch_taken_0x2512c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2512C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512C0u;
        // 0x2512c4: 0xafa00048  sw          $zero, 0x48($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512c0) {
            ctx->pc = 0x251568u;
            goto label_251568;
        }
    }
    ctx->pc = 0x2512C8u;
label_2512c8:
    // 0x2512c8: 0xc08c682  jal         func_231A08
label_2512cc:
    if (ctx->pc == 0x2512CCu) {
        ctx->pc = 0x2512D0u;
        goto label_2512d0;
    }
    ctx->pc = 0x2512C8u;
    SET_GPR_U32(ctx, 31, 0x2512D0u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2512C8u, 0x2512D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512D0u;
label_2512d0:
    // 0x2512d0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2512d0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2512d4:
    // 0x2512d4: 0xc098552  jal         func_261548
label_2512d8:
    if (ctx->pc == 0x2512D8u) {
        ctx->pc = 0x2512D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512D4u;
        // 0x2512d8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2512DCu;
        goto label_2512dc;
    }
    ctx->pc = 0x2512D4u;
    SET_GPR_U32(ctx, 31, 0x2512DCu);
    ctx->pc = 0x2512D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2512D4u;
    // 0x2512d8: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2512D4u, 0x2512DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512DCu;
label_2512dc:
    // 0x2512dc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2512dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2512e0:
    // 0x2512e0: 0xc08c698  jal         func_231A60
label_2512e4:
    if (ctx->pc == 0x2512E4u) {
        ctx->pc = 0x2512E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512E0u;
        // 0x2512e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2512E8u;
        goto label_2512e8;
    }
    ctx->pc = 0x2512E0u;
    SET_GPR_U32(ctx, 31, 0x2512E8u);
    ctx->pc = 0x2512E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2512E0u;
    // 0x2512e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2512E0u, 0x2512E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512E8u;
label_2512e8:
    // 0x2512e8: 0x1640000f  bnez        $s2, . + 4 + (0xF << 2)
label_2512ec:
    if (ctx->pc == 0x2512ECu) {
        ctx->pc = 0x2512ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512E8u;
        // 0x2512ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2512F0u;
        goto label_2512f0;
    }
    ctx->pc = 0x2512E8u;
    {
        const bool branch_taken_0x2512e8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x2512ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512E8u;
        // 0x2512ec: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2512e8) {
            ctx->pc = 0x251328u;
            goto label_251328;
        }
    }
    ctx->pc = 0x2512F0u;
label_2512f0:
    // 0x2512f0: 0xc08a8cc  jal         func_22A330
label_2512f4:
    if (ctx->pc == 0x2512F4u) {
        ctx->pc = 0x2512F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2512F0u;
        // 0x2512f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2512F8u;
        goto label_2512f8;
    }
    ctx->pc = 0x2512F0u;
    SET_GPR_U32(ctx, 31, 0x2512F8u);
    ctx->pc = 0x2512F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2512F0u;
    // 0x2512f4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x2512F0u, 0x2512F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2512F8u;
label_2512f8:
    // 0x2512f8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2512f8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2512fc:
    // 0x2512fc: 0x0  nop
    ctx->pc = 0x2512fcu;
    // NOP
label_251300:
    // 0x251300: 0x56400012  bnel        $s2, $zero, . + 4 + (0x12 << 2)
label_251304:
    if (ctx->pc == 0x251304u) {
        ctx->pc = 0x251304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251300u;
        // 0x251304: 0xaef20000  sw          $s2, 0x0($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251308u;
        goto label_251308;
    }
    ctx->pc = 0x251300u;
    {
        const bool branch_taken_0x251300 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x251300) {
            ctx->pc = 0x251304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251300u;
            // 0x251304: 0xaef20000  sw          $s2, 0x0($s7) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 23), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x25134Cu;
            goto label_25134c;
        }
    }
    ctx->pc = 0x251308u;
label_251308:
    // 0x251308: 0x24050069  addiu       $a1, $zero, 0x69
    ctx->pc = 0x251308u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_25130c:
    // 0x25130c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25130cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_251310:
    // 0x251310: 0xafa50028  sw          $a1, 0x28($sp)
    ctx->pc = 0x251310u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 5));
label_251314:
    // 0x251314: 0x248310a8  addiu       $v1, $a0, 0x10A8
    ctx->pc = 0x251314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4264));
label_251318:
    // 0x251318: 0xdc620080  ld          $v0, 0x80($v1)
    ctx->pc = 0x251318u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 128)));
label_25131c:
    // 0x25131c: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x25131cu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_251320:
    // 0x251320: 0x100000bf  b           . + 4 + (0xBF << 2)
label_251324:
    if (ctx->pc == 0x251324u) {
        ctx->pc = 0x251324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251320u;
        // 0x251324: 0xfc620080  sd          $v0, 0x80($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251328u;
        goto label_251328;
    }
    ctx->pc = 0x251320u;
    {
        const bool branch_taken_0x251320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251320u;
        // 0x251324: 0xfc620080  sd          $v0, 0x80($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 128), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251320) {
            ctx->pc = 0x251620u;
            goto label_251620;
        }
    }
    ctx->pc = 0x251328u;
label_251328:
    // 0x251328: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x251328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_25132c:
    // 0x25132c: 0x26420020  addiu       $v0, $s2, 0x20
    ctx->pc = 0x25132cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
label_251330:
    // 0x251330: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x251330u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_251334:
    // 0x251334: 0xa6430012  sh          $v1, 0x12($s2)
    ctx->pc = 0x251334u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 3));
label_251338:
    // 0x251338: 0xa6430010  sh          $v1, 0x10($s2)
    ctx->pc = 0x251338u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 16), (uint16_t)GPR_U32(ctx, 3));
label_25133c:
    // 0x25133c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x25133cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_251340:
    // 0x251340: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x251340u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_251344:
    // 0x251344: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_251348:
    if (ctx->pc == 0x251348u) {
        ctx->pc = 0x251348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251344u;
        // 0x251348: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25134Cu;
        goto label_25134c;
    }
    ctx->pc = 0x251344u;
    {
        const bool branch_taken_0x251344 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251344u;
        // 0x251348: 0xae40001c  sw          $zero, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251344) {
            ctx->pc = 0x251300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_251300;
        }
    }
    ctx->pc = 0x25134Cu;
label_25134c:
    // 0x25134c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x25134cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_251350:
    // 0x251350: 0x26570004  addiu       $s7, $s2, 0x4
    ctx->pc = 0x251350u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_251354:
    // 0x251354: 0x8c83f9e8  lw          $v1, -0x618($a0)
    ctx->pc = 0x251354u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965736)));
label_251358:
    // 0x251358: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x251358u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_25135c:
    // 0x25135c: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x25135cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_251360:
    // 0x251360: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x251360u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_251364:
    // 0x251364: 0xae500008  sw          $s0, 0x8($s2)
    ctx->pc = 0x251364u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 16));
label_251368:
    // 0x251368: 0x2cc50015  sltiu       $a1, $a2, 0x15
    ctx->pc = 0x251368u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
label_25136c:
    // 0x25136c: 0x6a220007  ldl         $v0, 0x7($s1)
    ctx->pc = 0x25136cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_251370:
    // 0x251370: 0x6e220000  ldr         $v0, 0x0($s1)
    ctx->pc = 0x251370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_251374:
    // 0x251374: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x251374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_251378:
    // 0x251378: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x251378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_25137c:
    // 0x25137c: 0x8a240013  lwl         $a0, 0x13($s1)
    ctx->pc = 0x25137cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
label_251380:
    // 0x251380: 0x9a240010  lwr         $a0, 0x10($s1)
    ctx->pc = 0x251380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
label_251384:
    // 0x251384: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x251384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_251388:
    // 0x251388: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x251388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_25138c:
    // 0x25138c: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x25138cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_251390:
    // 0x251390: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x251390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_251394:
    // 0x251394: 0xaa040013  swl         $a0, 0x13($s0)
    ctx->pc = 0x251394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_251398:
    // 0x251398: 0xba040010  swr         $a0, 0x10($s0)
    ctx->pc = 0x251398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_25139c:
    // 0x25139c: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x25139cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_2513a0:
    // 0x2513a0: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x2513a0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_2513a4:
    // 0x2513a4: 0x30420300  andi        $v0, $v0, 0x300
    ctx->pc = 0x2513a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)768);
label_2513a8:
    // 0x2513a8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2513a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2513ac:
    // 0x2513ac: 0x14a0000b  bnez        $a1, . + 4 + (0xB << 2)
label_2513b0:
    if (ctx->pc == 0x2513B0u) {
        ctx->pc = 0x2513B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513ACu;
        // 0x2513b0: 0xa6430012  sh          $v1, 0x12($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2513B4u;
        goto label_2513b4;
    }
    ctx->pc = 0x2513ACu;
    {
        const bool branch_taken_0x2513ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2513B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513ACu;
        // 0x2513b0: 0xa6430012  sh          $v1, 0x12($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 18), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2513ac) {
            ctx->pc = 0x2513DCu;
            goto label_2513dc;
        }
    }
    ctx->pc = 0x2513B4u;
label_2513b4:
    // 0x2513b4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2513b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2513b8:
    // 0x2513b8: 0xc094658  jal         func_251960
label_2513bc:
    if (ctx->pc == 0x2513BCu) {
        ctx->pc = 0x2513BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2513B8u;
        // 0x2513bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2513C0u;
        goto label_2513c0;
    }
    ctx->pc = 0x2513B8u;
    SET_GPR_U32(ctx, 31, 0x2513C0u);
    ctx->pc = 0x2513BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2513B8u;
    // 0x2513bc: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x251960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x251960u, 0x2513B8u, 0x2513C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2513C0u;
label_2513c0:
    // 0x2513c0: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x2513c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_2513c4:
    // 0x2513c4: 0x24560014  addiu       $s6, $v0, 0x14
    ctx->pc = 0x2513c4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2513c8:
    // 0x2513c8: 0x161083  sra         $v0, $s6, 2
    ctx->pc = 0x2513c8u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 22), 2));
label_2513cc:
    // 0x2513cc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2513ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
label_2513d0:
    // 0x2513d0: 0x306300f0  andi        $v1, $v1, 0xF0
    ctx->pc = 0x2513d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
label_2513d4:
    // 0x2513d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2513d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2513d8:
    // 0x2513d8: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x2513d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
label_2513dc:
    // 0x2513dc: 0xae56000c  sw          $s6, 0xC($s2)
    ctx->pc = 0x2513dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 22));
label_2513e0:
    // 0x2513e0: 0x8fa20024  lw          $v0, 0x24($sp)
    ctx->pc = 0x2513e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2513e4:
    // 0x2513e4: 0x92240006  lbu         $a0, 0x6($s1)
    ctx->pc = 0x2513e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_2513e8:
    // 0x2513e8: 0x2621823  subu        $v1, $s3, $v0
    ctx->pc = 0x2513e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_2513ec:
    // 0x2513ec: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x2513ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2513f0:
    // 0x2513f0: 0x318c3  sra         $v1, $v1, 3
    ctx->pc = 0x2513f0u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 3));
label_2513f4:
    // 0x2513f4: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2513f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2513f8:
    // 0x2513f8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2513f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2513fc:
    // 0x2513fc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2513fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_251400:
    // 0x251400: 0x3042dfff  andi        $v0, $v0, 0xDFFF
    ctx->pc = 0x251400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)57343);
label_251404:
    // 0x251404: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x251404u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_251408:
    // 0x251408: 0x3223a  dsrl        $a0, $v1, 8
    ctx->pc = 0x251408u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) >> 8);
label_25140c:
    // 0x25140c: 0xa2030006  sb          $v1, 0x6($s0)
    ctx->pc = 0x25140cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 3));
label_251410:
    // 0x251410: 0xa2040007  sb          $a0, 0x7($s0)
    ctx->pc = 0x251410u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 4));
label_251414:
    // 0x251414: 0x92220007  lbu         $v0, 0x7($s1)
    ctx->pc = 0x251414u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_251418:
    // 0x251418: 0x92230006  lbu         $v1, 0x6($s1)
    ctx->pc = 0x251418u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_25141c:
    // 0x25141c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x25141cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_251420:
    // 0x251420: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x251420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_251424:
    // 0x251424: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x251424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_251428:
    // 0x251428: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x251428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
label_25142c:
    // 0x25142c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_251430:
    if (ctx->pc == 0x251430u) {
        ctx->pc = 0x251430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25142Cu;
        // 0x251430: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251434u;
        goto label_251434;
    }
    ctx->pc = 0x25142Cu;
    {
        const bool branch_taken_0x25142c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x251430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25142Cu;
        // 0x251430: 0x308200ff  andi        $v0, $a0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x25142c) {
            ctx->pc = 0x251454u;
            goto label_251454;
        }
    }
    ctx->pc = 0x251434u;
label_251434:
    // 0x251434: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x251434u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_251438:
    // 0x251438: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x251438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_25143c:
    // 0x25143c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x25143cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_251440:
    // 0x251440: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x251440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_251444:
    // 0x251444: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x251444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_251448:
    // 0x251448: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x251448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_25144c:
    // 0x25144c: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x25144cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_251450:
    // 0x251450: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x251450u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
label_251454:
    // 0x251454: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x251454u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_251458:
    // 0x251458: 0x92240002  lbu         $a0, 0x2($s1)
    ctx->pc = 0x251458u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_25145c:
    // 0x25145c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x25145cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_251460:
    // 0x251460: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x251460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_251464:
    // 0x251464: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x251464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_251468:
    // 0x251468: 0x2631821  addu        $v1, $s3, $v1
    ctx->pc = 0x251468u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_25146c:
    // 0x25146c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25146cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_251470:
    // 0x251470: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x251470u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_251474:
    // 0x251474: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
label_251478:
    if (ctx->pc == 0x251478u) {
        ctx->pc = 0x251478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251474u;
        // 0x251478: 0x92020007  lbu         $v0, 0x7($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25147Cu;
        goto label_25147c;
    }
    ctx->pc = 0x251474u;
    {
        const bool branch_taken_0x251474 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x251474) {
            ctx->pc = 0x251478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251474u;
            // 0x251478: 0x92020007  lbu         $v0, 0x7($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251488u;
            goto label_251488;
        }
    }
    ctx->pc = 0x25147Cu;
label_25147c:
    // 0x25147c: 0x531023  subu        $v0, $v0, $s3
    ctx->pc = 0x25147cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_251480:
    // 0x251480: 0x10000009  b           . + 4 + (0x9 << 2)
label_251484:
    if (ctx->pc == 0x251484u) {
        ctx->pc = 0x251484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251480u;
        // 0x251484: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251488u;
        goto label_251488;
    }
    ctx->pc = 0x251480u;
    {
        const bool branch_taken_0x251480 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251480u;
        // 0x251484: 0xafa20020  sw          $v0, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251480) {
            ctx->pc = 0x2514A8u;
            goto label_2514a8;
        }
    }
    ctx->pc = 0x251488u;
label_251488:
    // 0x251488: 0x92030006  lbu         $v1, 0x6($s0)
    ctx->pc = 0x251488u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_25148c:
    // 0x25148c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x25148cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_251490:
    // 0x251490: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x251490u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_251494:
    // 0x251494: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x251494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_251498:
    // 0x251498: 0x34422000  ori         $v0, $v0, 0x2000
    ctx->pc = 0x251498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8192);
label_25149c:
    // 0x25149c: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x25149cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_2514a0:
    // 0x2514a0: 0xa2020006  sb          $v0, 0x6($s0)
    ctx->pc = 0x2514a0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
label_2514a4:
    // 0x2514a4: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x2514a4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
label_2514a8:
    // 0x2514a8: 0x97a40020  lhu         $a0, 0x20($sp)
    ctx->pc = 0x2514a8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_2514ac:
    // 0x2514ac: 0x962021  addu        $a0, $a0, $s6
    ctx->pc = 0x2514acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 22)));
label_2514b0:
    // 0x2514b0: 0xc08a262  jal         func_228988
label_2514b4:
    if (ctx->pc == 0x2514B4u) {
        ctx->pc = 0x2514B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514B0u;
        // 0x2514b4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2514B8u;
        goto label_2514b8;
    }
    ctx->pc = 0x2514B0u;
    SET_GPR_U32(ctx, 31, 0x2514B8u);
    ctx->pc = 0x2514B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2514B0u;
    // 0x2514b4: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x2514B0u, 0x2514B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514B8u;
label_2514b8:
    // 0x2514b8: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2514b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2514bc:
    // 0x2514bc: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2514bcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
label_2514c0:
    // 0x2514c0: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2514c0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_2514c4:
    // 0x2514c4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2514c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2514c8:
    // 0x2514c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2514c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2514cc:
    // 0x2514cc: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2514ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2514d0:
    // 0x2514d0: 0xc08aa68  jal         func_22A9A0
label_2514d4:
    if (ctx->pc == 0x2514D4u) {
        ctx->pc = 0x2514D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514D0u;
        // 0x2514d4: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2514D8u;
        goto label_2514d8;
    }
    ctx->pc = 0x2514D0u;
    SET_GPR_U32(ctx, 31, 0x2514D8u);
    ctx->pc = 0x2514D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2514D0u;
    // 0x2514d4: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A9A0u, 0x2514D0u, 0x2514D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2514D8u;
label_2514d8:
    // 0x2514d8: 0x1040ff8b  beqz        $v0, . + 4 + (-0x75 << 2)
label_2514dc:
    if (ctx->pc == 0x2514DCu) {
        ctx->pc = 0x2514DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514D8u;
        // 0x2514dc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2514E0u;
        goto label_2514e0;
    }
    ctx->pc = 0x2514D8u;
    {
        const bool branch_taken_0x2514d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2514DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2514D8u;
        // 0x2514dc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2514d8) {
            ctx->pc = 0x251308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_251308;
        }
    }
    ctx->pc = 0x2514E0u;
label_2514e0:
    // 0x2514e0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2514e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_2514e4:
    // 0x2514e4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x2514e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2514e8:
    // 0x2514e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2514e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2514ec:
    // 0x2514ec: 0xafa30048  sw          $v1, 0x48($sp)
    ctx->pc = 0x2514ecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
label_2514f0:
    // 0x2514f0: 0x2c21021  addu        $v0, $s6, $v0
    ctx->pc = 0x2514f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
label_2514f4:
    // 0x2514f4: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x2514f4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
label_2514f8:
    // 0x2514f8: 0xae420018  sw          $v0, 0x18($s2)
    ctx->pc = 0x2514f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 2));
label_2514fc:
    // 0x2514fc: 0x92040007  lbu         $a0, 0x7($s0)
    ctx->pc = 0x2514fcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_251500:
    // 0x251500: 0x92020006  lbu         $v0, 0x6($s0)
    ctx->pc = 0x251500u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_251504:
    // 0x251504: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x251504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_251508:
    // 0x251508: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x251508u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_25150c:
    // 0x25150c: 0xc08a262  jal         func_228988
label_251510:
    if (ctx->pc == 0x251510u) {
        ctx->pc = 0x251510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25150Cu;
        // 0x251510: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x251514u;
        goto label_251514;
    }
    ctx->pc = 0x25150Cu;
    SET_GPR_U32(ctx, 31, 0x251514u);
    ctx->pc = 0x251510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25150Cu;
    // 0x251510: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x25150Cu, 0x251514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251514u;
label_251514:
    // 0x251514: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x251514u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_251518:
    // 0x251518: 0xa200000a  sb          $zero, 0xA($s0)
    ctx->pc = 0x251518u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 0));
label_25151c:
    // 0x25151c: 0xa200000b  sb          $zero, 0xB($s0)
    ctx->pc = 0x25151cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 0));
label_251520:
    // 0x251520: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251520u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_251524:
    // 0x251524: 0xa2030007  sb          $v1, 0x7($s0)
    ctx->pc = 0x251524u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 3));
label_251528:
    // 0x251528: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x251528u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_25152c:
    // 0x25152c: 0xc092d7e  jal         func_24B5F8
label_251530:
    if (ctx->pc == 0x251530u) {
        ctx->pc = 0x251530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25152Cu;
        // 0x251530: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251534u;
        goto label_251534;
    }
    ctx->pc = 0x25152Cu;
    SET_GPR_U32(ctx, 31, 0x251534u);
    ctx->pc = 0x251530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25152Cu;
    // 0x251530: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5F8u, 0x25152Cu, 0x251534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251534u;
label_251534:
    // 0x251534: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x251534u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_251538:
    // 0x251538: 0xa202000a  sb          $v0, 0xA($s0)
    ctx->pc = 0x251538u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 10), (uint8_t)GPR_U32(ctx, 2));
label_25153c:
    // 0x25153c: 0xa203000b  sb          $v1, 0xB($s0)
    ctx->pc = 0x25153cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 3));
label_251540:
    // 0x251540: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x251540u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_251544:
    // 0x251544: 0x24a410a8  addiu       $a0, $a1, 0x10A8
    ctx->pc = 0x251544u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), 4264));
label_251548:
    // 0x251548: 0xdc820098  ld          $v0, 0x98($a0)
    ctx->pc = 0x251548u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 152)));
label_25154c:
    // 0x25154c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x25154cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_251550:
    // 0x251550: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x251550u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_251554:
    // 0x251554: 0xfc820098  sd          $v0, 0x98($a0)
    ctx->pc = 0x251554u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 152), GPR_U64(ctx, 2));
label_251558:
    // 0x251558: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x251558u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_25155c:
    // 0x25155c: 0x92250003  lbu         $a1, 0x3($s1)
    ctx->pc = 0x25155cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
label_251560:
    // 0x251560: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x251560u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
label_251564:
    // 0x251564: 0x51238  dsll        $v0, $a1, 8
    ctx->pc = 0x251564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << 8);
label_251568:
    // 0x251568: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x251568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_25156c:
    // 0x25156c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x25156cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_251570:
    // 0x251570: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x251570u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_251574:
    // 0x251574: 0x1440ff54  bnez        $v0, . + 4 + (-0xAC << 2)
label_251578:
    if (ctx->pc == 0x251578u) {
        ctx->pc = 0x251578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251574u;
        // 0x251578: 0x52a38  dsll        $a1, $a1, 8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x25157Cu;
        goto label_25157c;
    }
    ctx->pc = 0x251574u;
    {
        const bool branch_taken_0x251574 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x251578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251574u;
        // 0x251578: 0x52a38  dsll        $a1, $a1, 8 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x251574) {
            ctx->pc = 0x2512C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2512c8;
        }
    }
    ctx->pc = 0x25157Cu;
label_25157c:
    // 0x25157c: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x25157cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_251580:
    // 0x251580: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x251580u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_251584:
    // 0x251584: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x251584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
label_251588:
    // 0x251588: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x251588u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_25158c:
    // 0x25158c: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x25158cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
label_251590:
    // 0x251590: 0xc28021  addu        $s0, $a2, $v0
    ctx->pc = 0x251590u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_251594:
    // 0x251594: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_251598:
    // 0x251598: 0xc08ac88  jal         func_22B220
label_25159c:
    if (ctx->pc == 0x25159Cu) {
        ctx->pc = 0x25159Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251598u;
        // 0x25159c: 0x2052823  subu        $a1, $s0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2515A0u;
        goto label_2515a0;
    }
    ctx->pc = 0x251598u;
    SET_GPR_U32(ctx, 31, 0x2515A0u);
    ctx->pc = 0x25159Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251598u;
    // 0x25159c: 0x2052823  subu        $a1, $s0, $a1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x251598u, 0x2515A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515A0u;
label_2515a0:
    // 0x2515a0: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x2515a0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
label_2515a4:
    // 0x2515a4: 0xc08a262  jal         func_228988
label_2515a8:
    if (ctx->pc == 0x2515A8u) {
        ctx->pc = 0x2515A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515A4u;
        // 0x2515a8: 0x96440018  lhu         $a0, 0x18($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2515ACu;
        goto label_2515ac;
    }
    ctx->pc = 0x2515A4u;
    SET_GPR_U32(ctx, 31, 0x2515ACu);
    ctx->pc = 0x2515A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2515A4u;
    // 0x2515a8: 0x96440018  lhu         $a0, 0x18($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x2515A4u, 0x2515ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515ACu;
label_2515ac:
    // 0x2515ac: 0x92230007  lbu         $v1, 0x7($s1)
    ctx->pc = 0x2515acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 7)));
label_2515b0:
    // 0x2515b0: 0x22202  srl         $a0, $v0, 8
    ctx->pc = 0x2515b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2515b4:
    // 0x2515b4: 0x92250006  lbu         $a1, 0x6($s1)
    ctx->pc = 0x2515b4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 6)));
label_2515b8:
    // 0x2515b8: 0x31a38  dsll        $v1, $v1, 8
    ctx->pc = 0x2515b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 8);
label_2515bc:
    // 0x2515bc: 0xa2220002  sb          $v0, 0x2($s1)
    ctx->pc = 0x2515bcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 2));
label_2515c0:
    // 0x2515c0: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2515c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2515c4:
    // 0x2515c4: 0xa2240003  sb          $a0, 0x3($s1)
    ctx->pc = 0x2515c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 4));
label_2515c8:
    // 0x2515c8: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x2515c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_2515cc:
    // 0x2515cc: 0x34632000  ori         $v1, $v1, 0x2000
    ctx->pc = 0x2515ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8192);
label_2515d0:
    // 0x2515d0: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x2515d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
label_2515d4:
    // 0x2515d4: 0xa2230006  sb          $v1, 0x6($s1)
    ctx->pc = 0x2515d4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 3));
label_2515d8:
    // 0x2515d8: 0xa2220007  sb          $v0, 0x7($s1)
    ctx->pc = 0x2515d8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 2));
label_2515dc:
    // 0x2515dc: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2515dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2515e0:
    // 0x2515e0: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2515e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2515e4:
    // 0x2515e4: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x2515e4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_2515e8:
    // 0x2515e8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2515e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_2515ec:
    // 0x2515ec: 0xc08a262  jal         func_228988
label_2515f0:
    if (ctx->pc == 0x2515F0u) {
        ctx->pc = 0x2515F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2515ECu;
        // 0x2515f0: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2515F4u;
        goto label_2515f4;
    }
    ctx->pc = 0x2515ECu;
    SET_GPR_U32(ctx, 31, 0x2515F4u);
    ctx->pc = 0x2515F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2515ECu;
    // 0x2515f0: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x2515ECu, 0x2515F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2515F4u;
label_2515f4:
    // 0x2515f4: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x2515f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2515f8:
    // 0x2515f8: 0xa220000a  sb          $zero, 0xA($s1)
    ctx->pc = 0x2515f8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 0));
label_2515fc:
    // 0x2515fc: 0xa220000b  sb          $zero, 0xB($s1)
    ctx->pc = 0x2515fcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 0));
label_251600:
    // 0x251600: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x251600u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_251604:
    // 0x251604: 0xa2230007  sb          $v1, 0x7($s1)
    ctx->pc = 0x251604u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 7), (uint8_t)GPR_U32(ctx, 3));
label_251608:
    // 0x251608: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x251608u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_25160c:
    // 0x25160c: 0xc092d7e  jal         func_24B5F8
label_251610:
    if (ctx->pc == 0x251610u) {
        ctx->pc = 0x251610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25160Cu;
        // 0x251610: 0xa2220006  sb          $v0, 0x6($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251614u;
        goto label_251614;
    }
    ctx->pc = 0x25160Cu;
    SET_GPR_U32(ctx, 31, 0x251614u);
    ctx->pc = 0x251610u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25160Cu;
    // 0x251610: 0xa2220006  sb          $v0, 0x6($s1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 17), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5F8u, 0x25160Cu, 0x251614u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251614u;
label_251614:
    // 0x251614: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x251614u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
label_251618:
    // 0x251618: 0xa222000a  sb          $v0, 0xA($s1)
    ctx->pc = 0x251618u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 10), (uint8_t)GPR_U32(ctx, 2));
label_25161c:
    // 0x25161c: 0xa223000b  sb          $v1, 0xB($s1)
    ctx->pc = 0x25161cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 11), (uint8_t)GPR_U32(ctx, 3));
label_251620:
    // 0x251620: 0xc08c682  jal         func_231A08
label_251624:
    if (ctx->pc == 0x251624u) {
        ctx->pc = 0x251624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251620u;
        // 0x251624: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251628u;
        goto label_251628;
    }
    ctx->pc = 0x251620u;
    SET_GPR_U32(ctx, 31, 0x251628u);
    ctx->pc = 0x251624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x251620u;
    // 0x251624: 0x280902d  daddu       $s2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x251620u, 0x251628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251628u;
label_251628:
    // 0x251628: 0x8ea500e4  lw          $a1, 0xE4($s5)
    ctx->pc = 0x251628u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 228)));
label_25162c:
    // 0x25162c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x25162cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_251630:
    // 0x251630: 0x8ea300e8  lw          $v1, 0xE8($s5)
    ctx->pc = 0x251630u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 232)));
label_251634:
    // 0x251634: 0x24060069  addiu       $a2, $zero, 0x69
    ctx->pc = 0x251634u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_251638:
    // 0x251638: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251638u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_25163c:
    // 0x25163c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x25163cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_251640:
    // 0x251640: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x251640u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
label_251644:
    // 0x251644: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x251644u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_251648:
    // 0x251648: 0xc3100b  movn        $v0, $a2, $v1
    ctx->pc = 0x251648u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
label_25164c:
    // 0x25164c: 0xc08c698  jal         func_231A60
label_251650:
    if (ctx->pc == 0x251650u) {
        ctx->pc = 0x251650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25164Cu;
        // 0x251650: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251654u;
        goto label_251654;
    }
    ctx->pc = 0x25164Cu;
    SET_GPR_U32(ctx, 31, 0x251654u);
    ctx->pc = 0x251650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25164Cu;
    // 0x251650: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x25164Cu, 0x251654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251654u;
label_251654:
    // 0x251654: 0x12400013  beqz        $s2, . + 4 + (0x13 << 2)
label_251658:
    if (ctx->pc == 0x251658u) {
        ctx->pc = 0x251658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251654u;
        // 0x251658: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25165Cu;
        goto label_25165c;
    }
    ctx->pc = 0x251654u;
    {
        const bool branch_taken_0x251654 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x251658u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251654u;
        // 0x251658: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251654) {
            ctx->pc = 0x2516A4u;
            goto label_2516a4;
        }
    }
    ctx->pc = 0x25165Cu;
label_25165c:
    // 0x25165c: 0x8e940004  lw          $s4, 0x4($s4)
    ctx->pc = 0x25165cu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_251660:
    // 0x251660: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x251660u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_251664:
    // 0x251664: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x251664u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_251668:
    // 0x251668: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
label_25166c:
    if (ctx->pc == 0x25166Cu) {
        ctx->pc = 0x25166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251668u;
        // 0x25166c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251670u;
        goto label_251670;
    }
    ctx->pc = 0x251668u;
    {
        const bool branch_taken_0x251668 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x25166Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251668u;
        // 0x25166c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251668) {
            ctx->pc = 0x25168Cu;
            goto label_25168c;
        }
    }
    ctx->pc = 0x251670u;
label_251670:
    // 0x251670: 0x8ea200c0  lw          $v0, 0xC0($s5)
    ctx->pc = 0x251670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 192)));
label_251674:
    // 0x251674: 0x8fc70000  lw          $a3, 0x0($fp)
    ctx->pc = 0x251674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_251678:
    // 0x251678: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x251678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_25167c:
    // 0x25167c: 0x40f809  jalr        $v0
label_251680:
    if (ctx->pc == 0x251680u) {
        ctx->pc = 0x251680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25167Cu;
        // 0x251680: 0x8fa6002c  lw          $a2, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251684u;
        goto label_251684;
    }
    ctx->pc = 0x25167Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x251684u);
        ctx->pc = 0x251680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25167Cu;
        // 0x251680: 0x8fa6002c  lw          $a2, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25167Cu, 0x251684u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x251684u;
label_251684:
    // 0x251684: 0x10000003  b           . + 4 + (0x3 << 2)
label_251688:
    if (ctx->pc == 0x251688u) {
        ctx->pc = 0x251688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251684u;
        // 0x251688: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25168Cu;
        goto label_25168c;
    }
    ctx->pc = 0x251684u;
    {
        const bool branch_taken_0x251684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x251688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251684u;
        // 0x251688: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x251684) {
            ctx->pc = 0x251694u;
            goto label_251694;
        }
    }
    ctx->pc = 0x25168Cu;
label_25168c:
    // 0x25168c: 0xc08a9d6  jal         func_22A758
label_251690:
    if (ctx->pc == 0x251690u) {
        ctx->pc = 0x251690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x25168Cu;
        // 0x251690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251694u;
        goto label_251694;
    }
    ctx->pc = 0x25168Cu;
    SET_GPR_U32(ctx, 31, 0x251694u);
    ctx->pc = 0x251690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x25168Cu;
    // 0x251690: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x25168Cu, 0x251694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251694u;
label_251694:
    // 0x251694: 0x280902d  daddu       $s2, $s4, $zero
    ctx->pc = 0x251694u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_251698:
    // 0x251698: 0x5640fff1  bnel        $s2, $zero, . + 4 + (-0xF << 2)
label_25169c:
    if (ctx->pc == 0x25169Cu) {
        ctx->pc = 0x25169Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251698u;
        // 0x25169c: 0x8e940004  lw          $s4, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516A0u;
        goto label_2516a0;
    }
    ctx->pc = 0x251698u;
    {
        const bool branch_taken_0x251698 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x251698) {
            ctx->pc = 0x25169Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x251698u;
            // 0x25169c: 0x8e940004  lw          $s4, 0x4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251660u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_251660;
        }
    }
    ctx->pc = 0x2516A0u;
label_2516a0:
    // 0x2516a0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2516a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2516a4:
    // 0x2516a4: 0x14800005  bnez        $a0, . + 4 + (0x5 << 2)
label_2516a8:
    if (ctx->pc == 0x2516A8u) {
        ctx->pc = 0x2516A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516A4u;
        // 0x2516a8: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516ACu;
        goto label_2516ac;
    }
    ctx->pc = 0x2516A4u;
    {
        const bool branch_taken_0x2516a4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2516A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516A4u;
        // 0x2516a8: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516a4) {
            ctx->pc = 0x2516BCu;
            goto label_2516bc;
        }
    }
    ctx->pc = 0x2516ACu;
label_2516ac:
    // 0x2516ac: 0x246310a8  addiu       $v1, $v1, 0x10A8
    ctx->pc = 0x2516acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4264));
label_2516b0:
    // 0x2516b0: 0xdc620090  ld          $v0, 0x90($v1)
    ctx->pc = 0x2516b0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 144)));
label_2516b4:
    // 0x2516b4: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x2516b4u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_2516b8:
    // 0x2516b8: 0xfc620090  sd          $v0, 0x90($v1)
    ctx->pc = 0x2516b8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 144), GPR_U64(ctx, 2));
label_2516bc:
    // 0x2516bc: 0x17dd0013  bne         $fp, $sp, . + 4 + (0x13 << 2)
label_2516c0:
    if (ctx->pc == 0x2516C0u) {
        ctx->pc = 0x2516C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516BCu;
        // 0x2516c0: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516C4u;
        goto label_2516c4;
    }
    ctx->pc = 0x2516BCu;
    {
        const bool branch_taken_0x2516bc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 29));
        ctx->pc = 0x2516C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516BCu;
        // 0x2516c0: 0x8fa20028  lw          $v0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516bc) {
            ctx->pc = 0x25170Cu;
            goto label_25170c;
        }
    }
    ctx->pc = 0x2516C4u;
label_2516c4:
    // 0x2516c4: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2516c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2516c8:
    // 0x2516c8: 0x14a00011  bnez        $a1, . + 4 + (0x11 << 2)
label_2516cc:
    if (ctx->pc == 0x2516CCu) {
        ctx->pc = 0x2516CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516C8u;
        // 0x2516cc: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516D0u;
        goto label_2516d0;
    }
    ctx->pc = 0x2516C8u;
    {
        const bool branch_taken_0x2516c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2516CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516C8u;
        // 0x2516cc: 0xdfbf00e0  ld          $ra, 0xE0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516c8) {
            ctx->pc = 0x251710u;
            goto label_251710;
        }
    }
    ctx->pc = 0x2516D0u;
label_2516d0:
    // 0x2516d0: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x2516d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2516d4:
    // 0x2516d4: 0x5080000f  beql        $a0, $zero, . + 4 + (0xF << 2)
label_2516d8:
    if (ctx->pc == 0x2516D8u) {
        ctx->pc = 0x2516D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516D4u;
        // 0x2516d8: 0xdfbe00d0  ld          $fp, 0xD0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516DCu;
        goto label_2516dc;
    }
    ctx->pc = 0x2516D4u;
    {
        const bool branch_taken_0x2516d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2516d4) {
            ctx->pc = 0x2516D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2516D4u;
            // 0x2516d8: 0xdfbe00d0  ld          $fp, 0xD0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x251714u;
            goto label_251714;
        }
    }
    ctx->pc = 0x2516DCu;
label_2516dc:
    // 0x2516dc: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x2516dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
label_2516e0:
    // 0x2516e0: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x2516e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_2516e4:
    // 0x2516e4: 0x1440fee9  bnez        $v0, . + 4 + (-0x117 << 2)
label_2516e8:
    if (ctx->pc == 0x2516E8u) {
        ctx->pc = 0x2516E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516E4u;
        // 0x2516e8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516ECu;
        goto label_2516ec;
    }
    ctx->pc = 0x2516E4u;
    {
        const bool branch_taken_0x2516e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2516E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516E4u;
        // 0x2516e8: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516e4) {
            ctx->pc = 0x25128Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_25128c;
        }
    }
    ctx->pc = 0x2516ECu;
label_2516ec:
    // 0x2516ec: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x2516ecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
label_2516f0:
    // 0x2516f0: 0x10000005  b           . + 4 + (0x5 << 2)
label_2516f4:
    if (ctx->pc == 0x2516F4u) {
        ctx->pc = 0x2516F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516F0u;
        // 0x2516f4: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2516F8u;
        goto label_2516f8;
    }
    ctx->pc = 0x2516F0u;
    {
        const bool branch_taken_0x2516f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2516F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516F0u;
        // 0x2516f4: 0xafc00000  sw          $zero, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2516f0) {
            ctx->pc = 0x251708u;
            goto label_251708;
        }
    }
    ctx->pc = 0x2516F8u;
label_2516f8:
    // 0x2516f8: 0xc08a9d6  jal         func_22A758
label_2516fc:
    if (ctx->pc == 0x2516FCu) {
        ctx->pc = 0x2516FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2516F8u;
        // 0x2516fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x251700u;
        goto label_251700;
    }
    ctx->pc = 0x2516F8u;
    SET_GPR_U32(ctx, 31, 0x251700u);
    ctx->pc = 0x2516FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2516F8u;
    // 0x2516fc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2516F8u, 0x251700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x251700u;
label_251700:
    // 0x251700: 0x1000ffee  b           . + 4 + (-0x12 << 2)
label_251704:
    if (ctx->pc == 0x251704u) {
        ctx->pc = 0x251708u;
        goto label_251708;
    }
    ctx->pc = 0x251700u;
    {
        const bool branch_taken_0x251700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x251700) {
            ctx->pc = 0x2516BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2516bc;
        }
    }
    ctx->pc = 0x251708u;
label_251708:
    // 0x251708: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x251708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_25170c:
    // 0x25170c: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x25170cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_251710:
    // 0x251710: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x251710u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_251714:
    // 0x251714: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x251714u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_251718:
    // 0x251718: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x251718u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_25171c:
    // 0x25171c: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x25171cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_251720:
    // 0x251720: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x251720u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_251724:
    // 0x251724: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x251724u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_251728:
    // 0x251728: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x251728u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_25172c:
    // 0x25172c: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x25172cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_251730:
    // 0x251730: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x251730u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_251734:
    // 0x251734: 0x3e00008  jr          $ra
label_251738:
    if (ctx->pc == 0x251738u) {
        ctx->pc = 0x251738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251734u;
        // 0x251738: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = 0x25173Cu;
        goto label_25173c;
    }
    ctx->pc = 0x251734u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x251738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x251734u;
        // 0x251738: 0x27bd0170  addiu       $sp, $sp, 0x170 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x251734u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25173Cu;
label_25173c:
    // 0x25173c: 0x0  nop
    ctx->pc = 0x25173cu;
    // NOP
    if (ctx->pc == 0x25173cu) { ctx->pc = 0x251740u; }
}
