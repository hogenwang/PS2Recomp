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

// Function: sub_00235B68
// Address: 0x235b68 - 0x236700
void sub_00235B68_0x235b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00235B68_0x235b68");
#endif

    switch (ctx->pc) {
        case 0x235b68u: goto label_235b68;
        case 0x235b6cu: goto label_235b6c;
        case 0x235b70u: goto label_235b70;
        case 0x235b74u: goto label_235b74;
        case 0x235b78u: goto label_235b78;
        case 0x235b7cu: goto label_235b7c;
        case 0x235b80u: goto label_235b80;
        case 0x235b84u: goto label_235b84;
        case 0x235b88u: goto label_235b88;
        case 0x235b8cu: goto label_235b8c;
        case 0x235b90u: goto label_235b90;
        case 0x235b94u: goto label_235b94;
        case 0x235b98u: goto label_235b98;
        case 0x235b9cu: goto label_235b9c;
        case 0x235ba0u: goto label_235ba0;
        case 0x235ba4u: goto label_235ba4;
        case 0x235ba8u: goto label_235ba8;
        case 0x235bacu: goto label_235bac;
        case 0x235bb0u: goto label_235bb0;
        case 0x235bb4u: goto label_235bb4;
        case 0x235bb8u: goto label_235bb8;
        case 0x235bbcu: goto label_235bbc;
        case 0x235bc0u: goto label_235bc0;
        case 0x235bc4u: goto label_235bc4;
        case 0x235bc8u: goto label_235bc8;
        case 0x235bccu: goto label_235bcc;
        case 0x235bd0u: goto label_235bd0;
        case 0x235bd4u: goto label_235bd4;
        case 0x235bd8u: goto label_235bd8;
        case 0x235bdcu: goto label_235bdc;
        case 0x235be0u: goto label_235be0;
        case 0x235be4u: goto label_235be4;
        case 0x235be8u: goto label_235be8;
        case 0x235becu: goto label_235bec;
        case 0x235bf0u: goto label_235bf0;
        case 0x235bf4u: goto label_235bf4;
        case 0x235bf8u: goto label_235bf8;
        case 0x235bfcu: goto label_235bfc;
        case 0x235c00u: goto label_235c00;
        case 0x235c04u: goto label_235c04;
        case 0x235c08u: goto label_235c08;
        case 0x235c0cu: goto label_235c0c;
        case 0x235c10u: goto label_235c10;
        case 0x235c14u: goto label_235c14;
        case 0x235c18u: goto label_235c18;
        case 0x235c1cu: goto label_235c1c;
        case 0x235c20u: goto label_235c20;
        case 0x235c24u: goto label_235c24;
        case 0x235c28u: goto label_235c28;
        case 0x235c2cu: goto label_235c2c;
        case 0x235c30u: goto label_235c30;
        case 0x235c34u: goto label_235c34;
        case 0x235c38u: goto label_235c38;
        case 0x235c3cu: goto label_235c3c;
        case 0x235c40u: goto label_235c40;
        case 0x235c44u: goto label_235c44;
        case 0x235c48u: goto label_235c48;
        case 0x235c4cu: goto label_235c4c;
        case 0x235c50u: goto label_235c50;
        case 0x235c54u: goto label_235c54;
        case 0x235c58u: goto label_235c58;
        case 0x235c5cu: goto label_235c5c;
        case 0x235c60u: goto label_235c60;
        case 0x235c64u: goto label_235c64;
        case 0x235c68u: goto label_235c68;
        case 0x235c6cu: goto label_235c6c;
        case 0x235c70u: goto label_235c70;
        case 0x235c74u: goto label_235c74;
        case 0x235c78u: goto label_235c78;
        case 0x235c7cu: goto label_235c7c;
        case 0x235c80u: goto label_235c80;
        case 0x235c84u: goto label_235c84;
        case 0x235c88u: goto label_235c88;
        case 0x235c8cu: goto label_235c8c;
        case 0x235c90u: goto label_235c90;
        case 0x235c94u: goto label_235c94;
        case 0x235c98u: goto label_235c98;
        case 0x235c9cu: goto label_235c9c;
        case 0x235ca0u: goto label_235ca0;
        case 0x235ca4u: goto label_235ca4;
        case 0x235ca8u: goto label_235ca8;
        case 0x235cacu: goto label_235cac;
        case 0x235cb0u: goto label_235cb0;
        case 0x235cb4u: goto label_235cb4;
        case 0x235cb8u: goto label_235cb8;
        case 0x235cbcu: goto label_235cbc;
        case 0x235cc0u: goto label_235cc0;
        case 0x235cc4u: goto label_235cc4;
        case 0x235cc8u: goto label_235cc8;
        case 0x235cccu: goto label_235ccc;
        case 0x235cd0u: goto label_235cd0;
        case 0x235cd4u: goto label_235cd4;
        case 0x235cd8u: goto label_235cd8;
        case 0x235cdcu: goto label_235cdc;
        case 0x235ce0u: goto label_235ce0;
        case 0x235ce4u: goto label_235ce4;
        case 0x235ce8u: goto label_235ce8;
        case 0x235cecu: goto label_235cec;
        case 0x235cf0u: goto label_235cf0;
        case 0x235cf4u: goto label_235cf4;
        case 0x235cf8u: goto label_235cf8;
        case 0x235cfcu: goto label_235cfc;
        case 0x235d00u: goto label_235d00;
        case 0x235d04u: goto label_235d04;
        case 0x235d08u: goto label_235d08;
        case 0x235d0cu: goto label_235d0c;
        case 0x235d10u: goto label_235d10;
        case 0x235d14u: goto label_235d14;
        case 0x235d18u: goto label_235d18;
        case 0x235d1cu: goto label_235d1c;
        case 0x235d20u: goto label_235d20;
        case 0x235d24u: goto label_235d24;
        case 0x235d28u: goto label_235d28;
        case 0x235d2cu: goto label_235d2c;
        case 0x235d30u: goto label_235d30;
        case 0x235d34u: goto label_235d34;
        case 0x235d38u: goto label_235d38;
        case 0x235d3cu: goto label_235d3c;
        case 0x235d40u: goto label_235d40;
        case 0x235d44u: goto label_235d44;
        case 0x235d48u: goto label_235d48;
        case 0x235d4cu: goto label_235d4c;
        case 0x235d50u: goto label_235d50;
        case 0x235d54u: goto label_235d54;
        case 0x235d58u: goto label_235d58;
        case 0x235d5cu: goto label_235d5c;
        case 0x235d60u: goto label_235d60;
        case 0x235d64u: goto label_235d64;
        case 0x235d68u: goto label_235d68;
        case 0x235d6cu: goto label_235d6c;
        case 0x235d70u: goto label_235d70;
        case 0x235d74u: goto label_235d74;
        case 0x235d78u: goto label_235d78;
        case 0x235d7cu: goto label_235d7c;
        case 0x235d80u: goto label_235d80;
        case 0x235d84u: goto label_235d84;
        case 0x235d88u: goto label_235d88;
        case 0x235d8cu: goto label_235d8c;
        case 0x235d90u: goto label_235d90;
        case 0x235d94u: goto label_235d94;
        case 0x235d98u: goto label_235d98;
        case 0x235d9cu: goto label_235d9c;
        case 0x235da0u: goto label_235da0;
        case 0x235da4u: goto label_235da4;
        case 0x235da8u: goto label_235da8;
        case 0x235dacu: goto label_235dac;
        case 0x235db0u: goto label_235db0;
        case 0x235db4u: goto label_235db4;
        case 0x235db8u: goto label_235db8;
        case 0x235dbcu: goto label_235dbc;
        case 0x235dc0u: goto label_235dc0;
        case 0x235dc4u: goto label_235dc4;
        case 0x235dc8u: goto label_235dc8;
        case 0x235dccu: goto label_235dcc;
        case 0x235dd0u: goto label_235dd0;
        case 0x235dd4u: goto label_235dd4;
        case 0x235dd8u: goto label_235dd8;
        case 0x235ddcu: goto label_235ddc;
        case 0x235de0u: goto label_235de0;
        case 0x235de4u: goto label_235de4;
        case 0x235de8u: goto label_235de8;
        case 0x235decu: goto label_235dec;
        case 0x235df0u: goto label_235df0;
        case 0x235df4u: goto label_235df4;
        case 0x235df8u: goto label_235df8;
        case 0x235dfcu: goto label_235dfc;
        case 0x235e00u: goto label_235e00;
        case 0x235e04u: goto label_235e04;
        case 0x235e08u: goto label_235e08;
        case 0x235e0cu: goto label_235e0c;
        case 0x235e10u: goto label_235e10;
        case 0x235e14u: goto label_235e14;
        case 0x235e18u: goto label_235e18;
        case 0x235e1cu: goto label_235e1c;
        case 0x235e20u: goto label_235e20;
        case 0x235e24u: goto label_235e24;
        case 0x235e28u: goto label_235e28;
        case 0x235e2cu: goto label_235e2c;
        case 0x235e30u: goto label_235e30;
        case 0x235e34u: goto label_235e34;
        case 0x235e38u: goto label_235e38;
        case 0x235e3cu: goto label_235e3c;
        case 0x235e40u: goto label_235e40;
        case 0x235e44u: goto label_235e44;
        case 0x235e48u: goto label_235e48;
        case 0x235e4cu: goto label_235e4c;
        case 0x235e50u: goto label_235e50;
        case 0x235e54u: goto label_235e54;
        case 0x235e58u: goto label_235e58;
        case 0x235e5cu: goto label_235e5c;
        case 0x235e60u: goto label_235e60;
        case 0x235e64u: goto label_235e64;
        case 0x235e68u: goto label_235e68;
        case 0x235e6cu: goto label_235e6c;
        case 0x235e70u: goto label_235e70;
        case 0x235e74u: goto label_235e74;
        case 0x235e78u: goto label_235e78;
        case 0x235e7cu: goto label_235e7c;
        case 0x235e80u: goto label_235e80;
        case 0x235e84u: goto label_235e84;
        case 0x235e88u: goto label_235e88;
        case 0x235e8cu: goto label_235e8c;
        case 0x235e90u: goto label_235e90;
        case 0x235e94u: goto label_235e94;
        case 0x235e98u: goto label_235e98;
        case 0x235e9cu: goto label_235e9c;
        case 0x235ea0u: goto label_235ea0;
        case 0x235ea4u: goto label_235ea4;
        case 0x235ea8u: goto label_235ea8;
        case 0x235eacu: goto label_235eac;
        case 0x235eb0u: goto label_235eb0;
        case 0x235eb4u: goto label_235eb4;
        case 0x235eb8u: goto label_235eb8;
        case 0x235ebcu: goto label_235ebc;
        case 0x235ec0u: goto label_235ec0;
        case 0x235ec4u: goto label_235ec4;
        case 0x235ec8u: goto label_235ec8;
        case 0x235eccu: goto label_235ecc;
        case 0x235ed0u: goto label_235ed0;
        case 0x235ed4u: goto label_235ed4;
        case 0x235ed8u: goto label_235ed8;
        case 0x235edcu: goto label_235edc;
        case 0x235ee0u: goto label_235ee0;
        case 0x235ee4u: goto label_235ee4;
        case 0x235ee8u: goto label_235ee8;
        case 0x235eecu: goto label_235eec;
        case 0x235ef0u: goto label_235ef0;
        case 0x235ef4u: goto label_235ef4;
        case 0x235ef8u: goto label_235ef8;
        case 0x235efcu: goto label_235efc;
        case 0x235f00u: goto label_235f00;
        case 0x235f04u: goto label_235f04;
        case 0x235f08u: goto label_235f08;
        case 0x235f0cu: goto label_235f0c;
        case 0x235f10u: goto label_235f10;
        case 0x235f14u: goto label_235f14;
        case 0x235f18u: goto label_235f18;
        case 0x235f1cu: goto label_235f1c;
        case 0x235f20u: goto label_235f20;
        case 0x235f24u: goto label_235f24;
        case 0x235f28u: goto label_235f28;
        case 0x235f2cu: goto label_235f2c;
        case 0x235f30u: goto label_235f30;
        case 0x235f34u: goto label_235f34;
        case 0x235f38u: goto label_235f38;
        case 0x235f3cu: goto label_235f3c;
        case 0x235f40u: goto label_235f40;
        case 0x235f44u: goto label_235f44;
        case 0x235f48u: goto label_235f48;
        case 0x235f4cu: goto label_235f4c;
        case 0x235f50u: goto label_235f50;
        case 0x235f54u: goto label_235f54;
        case 0x235f58u: goto label_235f58;
        case 0x235f5cu: goto label_235f5c;
        case 0x235f60u: goto label_235f60;
        case 0x235f64u: goto label_235f64;
        case 0x235f68u: goto label_235f68;
        case 0x235f6cu: goto label_235f6c;
        case 0x235f70u: goto label_235f70;
        case 0x235f74u: goto label_235f74;
        case 0x235f78u: goto label_235f78;
        case 0x235f7cu: goto label_235f7c;
        case 0x235f80u: goto label_235f80;
        case 0x235f84u: goto label_235f84;
        case 0x235f88u: goto label_235f88;
        case 0x235f8cu: goto label_235f8c;
        case 0x235f90u: goto label_235f90;
        case 0x235f94u: goto label_235f94;
        case 0x235f98u: goto label_235f98;
        case 0x235f9cu: goto label_235f9c;
        case 0x235fa0u: goto label_235fa0;
        case 0x235fa4u: goto label_235fa4;
        case 0x235fa8u: goto label_235fa8;
        case 0x235facu: goto label_235fac;
        case 0x235fb0u: goto label_235fb0;
        case 0x235fb4u: goto label_235fb4;
        case 0x235fb8u: goto label_235fb8;
        case 0x235fbcu: goto label_235fbc;
        case 0x235fc0u: goto label_235fc0;
        case 0x235fc4u: goto label_235fc4;
        case 0x235fc8u: goto label_235fc8;
        case 0x235fccu: goto label_235fcc;
        case 0x235fd0u: goto label_235fd0;
        case 0x235fd4u: goto label_235fd4;
        case 0x235fd8u: goto label_235fd8;
        case 0x235fdcu: goto label_235fdc;
        case 0x235fe0u: goto label_235fe0;
        case 0x235fe4u: goto label_235fe4;
        case 0x235fe8u: goto label_235fe8;
        case 0x235fecu: goto label_235fec;
        case 0x235ff0u: goto label_235ff0;
        case 0x235ff4u: goto label_235ff4;
        case 0x235ff8u: goto label_235ff8;
        case 0x235ffcu: goto label_235ffc;
        case 0x236000u: goto label_236000;
        case 0x236004u: goto label_236004;
        case 0x236008u: goto label_236008;
        case 0x23600cu: goto label_23600c;
        case 0x236010u: goto label_236010;
        case 0x236014u: goto label_236014;
        case 0x236018u: goto label_236018;
        case 0x23601cu: goto label_23601c;
        case 0x236020u: goto label_236020;
        case 0x236024u: goto label_236024;
        case 0x236028u: goto label_236028;
        case 0x23602cu: goto label_23602c;
        case 0x236030u: goto label_236030;
        case 0x236034u: goto label_236034;
        case 0x236038u: goto label_236038;
        case 0x23603cu: goto label_23603c;
        case 0x236040u: goto label_236040;
        case 0x236044u: goto label_236044;
        case 0x236048u: goto label_236048;
        case 0x23604cu: goto label_23604c;
        case 0x236050u: goto label_236050;
        case 0x236054u: goto label_236054;
        case 0x236058u: goto label_236058;
        case 0x23605cu: goto label_23605c;
        case 0x236060u: goto label_236060;
        case 0x236064u: goto label_236064;
        case 0x236068u: goto label_236068;
        case 0x23606cu: goto label_23606c;
        case 0x236070u: goto label_236070;
        case 0x236074u: goto label_236074;
        case 0x236078u: goto label_236078;
        case 0x23607cu: goto label_23607c;
        case 0x236080u: goto label_236080;
        case 0x236084u: goto label_236084;
        case 0x236088u: goto label_236088;
        case 0x23608cu: goto label_23608c;
        case 0x236090u: goto label_236090;
        case 0x236094u: goto label_236094;
        case 0x236098u: goto label_236098;
        case 0x23609cu: goto label_23609c;
        case 0x2360a0u: goto label_2360a0;
        case 0x2360a4u: goto label_2360a4;
        case 0x2360a8u: goto label_2360a8;
        case 0x2360acu: goto label_2360ac;
        case 0x2360b0u: goto label_2360b0;
        case 0x2360b4u: goto label_2360b4;
        case 0x2360b8u: goto label_2360b8;
        case 0x2360bcu: goto label_2360bc;
        case 0x2360c0u: goto label_2360c0;
        case 0x2360c4u: goto label_2360c4;
        case 0x2360c8u: goto label_2360c8;
        case 0x2360ccu: goto label_2360cc;
        case 0x2360d0u: goto label_2360d0;
        case 0x2360d4u: goto label_2360d4;
        case 0x2360d8u: goto label_2360d8;
        case 0x2360dcu: goto label_2360dc;
        case 0x2360e0u: goto label_2360e0;
        case 0x2360e4u: goto label_2360e4;
        case 0x2360e8u: goto label_2360e8;
        case 0x2360ecu: goto label_2360ec;
        case 0x2360f0u: goto label_2360f0;
        case 0x2360f4u: goto label_2360f4;
        case 0x2360f8u: goto label_2360f8;
        case 0x2360fcu: goto label_2360fc;
        case 0x236100u: goto label_236100;
        case 0x236104u: goto label_236104;
        case 0x236108u: goto label_236108;
        case 0x23610cu: goto label_23610c;
        case 0x236110u: goto label_236110;
        case 0x236114u: goto label_236114;
        case 0x236118u: goto label_236118;
        case 0x23611cu: goto label_23611c;
        case 0x236120u: goto label_236120;
        case 0x236124u: goto label_236124;
        case 0x236128u: goto label_236128;
        case 0x23612cu: goto label_23612c;
        case 0x236130u: goto label_236130;
        case 0x236134u: goto label_236134;
        case 0x236138u: goto label_236138;
        case 0x23613cu: goto label_23613c;
        case 0x236140u: goto label_236140;
        case 0x236144u: goto label_236144;
        case 0x236148u: goto label_236148;
        case 0x23614cu: goto label_23614c;
        case 0x236150u: goto label_236150;
        case 0x236154u: goto label_236154;
        case 0x236158u: goto label_236158;
        case 0x23615cu: goto label_23615c;
        case 0x236160u: goto label_236160;
        case 0x236164u: goto label_236164;
        case 0x236168u: goto label_236168;
        case 0x23616cu: goto label_23616c;
        case 0x236170u: goto label_236170;
        case 0x236174u: goto label_236174;
        case 0x236178u: goto label_236178;
        case 0x23617cu: goto label_23617c;
        case 0x236180u: goto label_236180;
        case 0x236184u: goto label_236184;
        case 0x236188u: goto label_236188;
        case 0x23618cu: goto label_23618c;
        case 0x236190u: goto label_236190;
        case 0x236194u: goto label_236194;
        case 0x236198u: goto label_236198;
        case 0x23619cu: goto label_23619c;
        case 0x2361a0u: goto label_2361a0;
        case 0x2361a4u: goto label_2361a4;
        case 0x2361a8u: goto label_2361a8;
        case 0x2361acu: goto label_2361ac;
        case 0x2361b0u: goto label_2361b0;
        case 0x2361b4u: goto label_2361b4;
        case 0x2361b8u: goto label_2361b8;
        case 0x2361bcu: goto label_2361bc;
        case 0x2361c0u: goto label_2361c0;
        case 0x2361c4u: goto label_2361c4;
        case 0x2361c8u: goto label_2361c8;
        case 0x2361ccu: goto label_2361cc;
        case 0x2361d0u: goto label_2361d0;
        case 0x2361d4u: goto label_2361d4;
        case 0x2361d8u: goto label_2361d8;
        case 0x2361dcu: goto label_2361dc;
        case 0x2361e0u: goto label_2361e0;
        case 0x2361e4u: goto label_2361e4;
        case 0x2361e8u: goto label_2361e8;
        case 0x2361ecu: goto label_2361ec;
        case 0x2361f0u: goto label_2361f0;
        case 0x2361f4u: goto label_2361f4;
        case 0x2361f8u: goto label_2361f8;
        case 0x2361fcu: goto label_2361fc;
        case 0x236200u: goto label_236200;
        case 0x236204u: goto label_236204;
        case 0x236208u: goto label_236208;
        case 0x23620cu: goto label_23620c;
        case 0x236210u: goto label_236210;
        case 0x236214u: goto label_236214;
        case 0x236218u: goto label_236218;
        case 0x23621cu: goto label_23621c;
        case 0x236220u: goto label_236220;
        case 0x236224u: goto label_236224;
        case 0x236228u: goto label_236228;
        case 0x23622cu: goto label_23622c;
        case 0x236230u: goto label_236230;
        case 0x236234u: goto label_236234;
        case 0x236238u: goto label_236238;
        case 0x23623cu: goto label_23623c;
        case 0x236240u: goto label_236240;
        case 0x236244u: goto label_236244;
        case 0x236248u: goto label_236248;
        case 0x23624cu: goto label_23624c;
        case 0x236250u: goto label_236250;
        case 0x236254u: goto label_236254;
        case 0x236258u: goto label_236258;
        case 0x23625cu: goto label_23625c;
        case 0x236260u: goto label_236260;
        case 0x236264u: goto label_236264;
        case 0x236268u: goto label_236268;
        case 0x23626cu: goto label_23626c;
        case 0x236270u: goto label_236270;
        case 0x236274u: goto label_236274;
        case 0x236278u: goto label_236278;
        case 0x23627cu: goto label_23627c;
        case 0x236280u: goto label_236280;
        case 0x236284u: goto label_236284;
        case 0x236288u: goto label_236288;
        case 0x23628cu: goto label_23628c;
        case 0x236290u: goto label_236290;
        case 0x236294u: goto label_236294;
        case 0x236298u: goto label_236298;
        case 0x23629cu: goto label_23629c;
        case 0x2362a0u: goto label_2362a0;
        case 0x2362a4u: goto label_2362a4;
        case 0x2362a8u: goto label_2362a8;
        case 0x2362acu: goto label_2362ac;
        case 0x2362b0u: goto label_2362b0;
        case 0x2362b4u: goto label_2362b4;
        case 0x2362b8u: goto label_2362b8;
        case 0x2362bcu: goto label_2362bc;
        case 0x2362c0u: goto label_2362c0;
        case 0x2362c4u: goto label_2362c4;
        case 0x2362c8u: goto label_2362c8;
        case 0x2362ccu: goto label_2362cc;
        case 0x2362d0u: goto label_2362d0;
        case 0x2362d4u: goto label_2362d4;
        case 0x2362d8u: goto label_2362d8;
        case 0x2362dcu: goto label_2362dc;
        case 0x2362e0u: goto label_2362e0;
        case 0x2362e4u: goto label_2362e4;
        case 0x2362e8u: goto label_2362e8;
        case 0x2362ecu: goto label_2362ec;
        case 0x2362f0u: goto label_2362f0;
        case 0x2362f4u: goto label_2362f4;
        case 0x2362f8u: goto label_2362f8;
        case 0x2362fcu: goto label_2362fc;
        case 0x236300u: goto label_236300;
        case 0x236304u: goto label_236304;
        case 0x236308u: goto label_236308;
        case 0x23630cu: goto label_23630c;
        case 0x236310u: goto label_236310;
        case 0x236314u: goto label_236314;
        case 0x236318u: goto label_236318;
        case 0x23631cu: goto label_23631c;
        case 0x236320u: goto label_236320;
        case 0x236324u: goto label_236324;
        case 0x236328u: goto label_236328;
        case 0x23632cu: goto label_23632c;
        case 0x236330u: goto label_236330;
        case 0x236334u: goto label_236334;
        case 0x236338u: goto label_236338;
        case 0x23633cu: goto label_23633c;
        case 0x236340u: goto label_236340;
        case 0x236344u: goto label_236344;
        case 0x236348u: goto label_236348;
        case 0x23634cu: goto label_23634c;
        case 0x236350u: goto label_236350;
        case 0x236354u: goto label_236354;
        case 0x236358u: goto label_236358;
        case 0x23635cu: goto label_23635c;
        case 0x236360u: goto label_236360;
        case 0x236364u: goto label_236364;
        case 0x236368u: goto label_236368;
        case 0x23636cu: goto label_23636c;
        case 0x236370u: goto label_236370;
        case 0x236374u: goto label_236374;
        case 0x236378u: goto label_236378;
        case 0x23637cu: goto label_23637c;
        case 0x236380u: goto label_236380;
        case 0x236384u: goto label_236384;
        case 0x236388u: goto label_236388;
        case 0x23638cu: goto label_23638c;
        case 0x236390u: goto label_236390;
        case 0x236394u: goto label_236394;
        case 0x236398u: goto label_236398;
        case 0x23639cu: goto label_23639c;
        case 0x2363a0u: goto label_2363a0;
        case 0x2363a4u: goto label_2363a4;
        case 0x2363a8u: goto label_2363a8;
        case 0x2363acu: goto label_2363ac;
        case 0x2363b0u: goto label_2363b0;
        case 0x2363b4u: goto label_2363b4;
        case 0x2363b8u: goto label_2363b8;
        case 0x2363bcu: goto label_2363bc;
        case 0x2363c0u: goto label_2363c0;
        case 0x2363c4u: goto label_2363c4;
        case 0x2363c8u: goto label_2363c8;
        case 0x2363ccu: goto label_2363cc;
        case 0x2363d0u: goto label_2363d0;
        case 0x2363d4u: goto label_2363d4;
        case 0x2363d8u: goto label_2363d8;
        case 0x2363dcu: goto label_2363dc;
        case 0x2363e0u: goto label_2363e0;
        case 0x2363e4u: goto label_2363e4;
        case 0x2363e8u: goto label_2363e8;
        case 0x2363ecu: goto label_2363ec;
        case 0x2363f0u: goto label_2363f0;
        case 0x2363f4u: goto label_2363f4;
        case 0x2363f8u: goto label_2363f8;
        case 0x2363fcu: goto label_2363fc;
        case 0x236400u: goto label_236400;
        case 0x236404u: goto label_236404;
        case 0x236408u: goto label_236408;
        case 0x23640cu: goto label_23640c;
        case 0x236410u: goto label_236410;
        case 0x236414u: goto label_236414;
        case 0x236418u: goto label_236418;
        case 0x23641cu: goto label_23641c;
        case 0x236420u: goto label_236420;
        case 0x236424u: goto label_236424;
        case 0x236428u: goto label_236428;
        case 0x23642cu: goto label_23642c;
        case 0x236430u: goto label_236430;
        case 0x236434u: goto label_236434;
        case 0x236438u: goto label_236438;
        case 0x23643cu: goto label_23643c;
        case 0x236440u: goto label_236440;
        case 0x236444u: goto label_236444;
        case 0x236448u: goto label_236448;
        case 0x23644cu: goto label_23644c;
        case 0x236450u: goto label_236450;
        case 0x236454u: goto label_236454;
        case 0x236458u: goto label_236458;
        case 0x23645cu: goto label_23645c;
        case 0x236460u: goto label_236460;
        case 0x236464u: goto label_236464;
        case 0x236468u: goto label_236468;
        case 0x23646cu: goto label_23646c;
        case 0x236470u: goto label_236470;
        case 0x236474u: goto label_236474;
        case 0x236478u: goto label_236478;
        case 0x23647cu: goto label_23647c;
        case 0x236480u: goto label_236480;
        case 0x236484u: goto label_236484;
        case 0x236488u: goto label_236488;
        case 0x23648cu: goto label_23648c;
        case 0x236490u: goto label_236490;
        case 0x236494u: goto label_236494;
        case 0x236498u: goto label_236498;
        case 0x23649cu: goto label_23649c;
        case 0x2364a0u: goto label_2364a0;
        case 0x2364a4u: goto label_2364a4;
        case 0x2364a8u: goto label_2364a8;
        case 0x2364acu: goto label_2364ac;
        case 0x2364b0u: goto label_2364b0;
        case 0x2364b4u: goto label_2364b4;
        case 0x2364b8u: goto label_2364b8;
        case 0x2364bcu: goto label_2364bc;
        case 0x2364c0u: goto label_2364c0;
        case 0x2364c4u: goto label_2364c4;
        case 0x2364c8u: goto label_2364c8;
        case 0x2364ccu: goto label_2364cc;
        case 0x2364d0u: goto label_2364d0;
        case 0x2364d4u: goto label_2364d4;
        case 0x2364d8u: goto label_2364d8;
        case 0x2364dcu: goto label_2364dc;
        case 0x2364e0u: goto label_2364e0;
        case 0x2364e4u: goto label_2364e4;
        case 0x2364e8u: goto label_2364e8;
        case 0x2364ecu: goto label_2364ec;
        case 0x2364f0u: goto label_2364f0;
        case 0x2364f4u: goto label_2364f4;
        case 0x2364f8u: goto label_2364f8;
        case 0x2364fcu: goto label_2364fc;
        case 0x236500u: goto label_236500;
        case 0x236504u: goto label_236504;
        case 0x236508u: goto label_236508;
        case 0x23650cu: goto label_23650c;
        case 0x236510u: goto label_236510;
        case 0x236514u: goto label_236514;
        case 0x236518u: goto label_236518;
        case 0x23651cu: goto label_23651c;
        case 0x236520u: goto label_236520;
        case 0x236524u: goto label_236524;
        case 0x236528u: goto label_236528;
        case 0x23652cu: goto label_23652c;
        case 0x236530u: goto label_236530;
        case 0x236534u: goto label_236534;
        case 0x236538u: goto label_236538;
        case 0x23653cu: goto label_23653c;
        case 0x236540u: goto label_236540;
        case 0x236544u: goto label_236544;
        case 0x236548u: goto label_236548;
        case 0x23654cu: goto label_23654c;
        case 0x236550u: goto label_236550;
        case 0x236554u: goto label_236554;
        case 0x236558u: goto label_236558;
        case 0x23655cu: goto label_23655c;
        case 0x236560u: goto label_236560;
        case 0x236564u: goto label_236564;
        case 0x236568u: goto label_236568;
        case 0x23656cu: goto label_23656c;
        case 0x236570u: goto label_236570;
        case 0x236574u: goto label_236574;
        case 0x236578u: goto label_236578;
        case 0x23657cu: goto label_23657c;
        case 0x236580u: goto label_236580;
        case 0x236584u: goto label_236584;
        case 0x236588u: goto label_236588;
        case 0x23658cu: goto label_23658c;
        case 0x236590u: goto label_236590;
        case 0x236594u: goto label_236594;
        case 0x236598u: goto label_236598;
        case 0x23659cu: goto label_23659c;
        case 0x2365a0u: goto label_2365a0;
        case 0x2365a4u: goto label_2365a4;
        case 0x2365a8u: goto label_2365a8;
        case 0x2365acu: goto label_2365ac;
        case 0x2365b0u: goto label_2365b0;
        case 0x2365b4u: goto label_2365b4;
        case 0x2365b8u: goto label_2365b8;
        case 0x2365bcu: goto label_2365bc;
        case 0x2365c0u: goto label_2365c0;
        case 0x2365c4u: goto label_2365c4;
        case 0x2365c8u: goto label_2365c8;
        case 0x2365ccu: goto label_2365cc;
        case 0x2365d0u: goto label_2365d0;
        case 0x2365d4u: goto label_2365d4;
        case 0x2365d8u: goto label_2365d8;
        case 0x2365dcu: goto label_2365dc;
        case 0x2365e0u: goto label_2365e0;
        case 0x2365e4u: goto label_2365e4;
        case 0x2365e8u: goto label_2365e8;
        case 0x2365ecu: goto label_2365ec;
        case 0x2365f0u: goto label_2365f0;
        case 0x2365f4u: goto label_2365f4;
        case 0x2365f8u: goto label_2365f8;
        case 0x2365fcu: goto label_2365fc;
        case 0x236600u: goto label_236600;
        case 0x236604u: goto label_236604;
        case 0x236608u: goto label_236608;
        case 0x23660cu: goto label_23660c;
        case 0x236610u: goto label_236610;
        case 0x236614u: goto label_236614;
        case 0x236618u: goto label_236618;
        case 0x23661cu: goto label_23661c;
        case 0x236620u: goto label_236620;
        case 0x236624u: goto label_236624;
        case 0x236628u: goto label_236628;
        case 0x23662cu: goto label_23662c;
        case 0x236630u: goto label_236630;
        case 0x236634u: goto label_236634;
        case 0x236638u: goto label_236638;
        case 0x23663cu: goto label_23663c;
        case 0x236640u: goto label_236640;
        case 0x236644u: goto label_236644;
        case 0x236648u: goto label_236648;
        case 0x23664cu: goto label_23664c;
        case 0x236650u: goto label_236650;
        case 0x236654u: goto label_236654;
        case 0x236658u: goto label_236658;
        case 0x23665cu: goto label_23665c;
        case 0x236660u: goto label_236660;
        case 0x236664u: goto label_236664;
        case 0x236668u: goto label_236668;
        case 0x23666cu: goto label_23666c;
        case 0x236670u: goto label_236670;
        case 0x236674u: goto label_236674;
        case 0x236678u: goto label_236678;
        case 0x23667cu: goto label_23667c;
        case 0x236680u: goto label_236680;
        case 0x236684u: goto label_236684;
        case 0x236688u: goto label_236688;
        case 0x23668cu: goto label_23668c;
        case 0x236690u: goto label_236690;
        case 0x236694u: goto label_236694;
        case 0x236698u: goto label_236698;
        case 0x23669cu: goto label_23669c;
        case 0x2366a0u: goto label_2366a0;
        case 0x2366a4u: goto label_2366a4;
        case 0x2366a8u: goto label_2366a8;
        case 0x2366acu: goto label_2366ac;
        case 0x2366b0u: goto label_2366b0;
        case 0x2366b4u: goto label_2366b4;
        case 0x2366b8u: goto label_2366b8;
        case 0x2366bcu: goto label_2366bc;
        case 0x2366c0u: goto label_2366c0;
        case 0x2366c4u: goto label_2366c4;
        case 0x2366c8u: goto label_2366c8;
        case 0x2366ccu: goto label_2366cc;
        case 0x2366d0u: goto label_2366d0;
        case 0x2366d4u: goto label_2366d4;
        case 0x2366d8u: goto label_2366d8;
        case 0x2366dcu: goto label_2366dc;
        case 0x2366e0u: goto label_2366e0;
        case 0x2366e4u: goto label_2366e4;
        case 0x2366e8u: goto label_2366e8;
        case 0x2366ecu: goto label_2366ec;
        case 0x2366f0u: goto label_2366f0;
        case 0x2366f4u: goto label_2366f4;
        case 0x2366f8u: goto label_2366f8;
        case 0x2366fcu: goto label_2366fc;
        default: break;
    }

    ctx->pc = 0x235b68u;

label_235b68:
    // 0x235b68: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x235b68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_235b6c:
    // 0x235b6c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x235b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_235b70:
    // 0x235b70: 0xffb60080  sd          $s6, 0x80($sp)
    ctx->pc = 0x235b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 22));
label_235b74:
    // 0x235b74: 0xffb50070  sd          $s5, 0x70($sp)
    ctx->pc = 0x235b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 21));
label_235b78:
    // 0x235b78: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x235b78u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235b7c:
    // 0x235b7c: 0xffb40060  sd          $s4, 0x60($sp)
    ctx->pc = 0x235b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 20));
label_235b80:
    // 0x235b80: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x235b80u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235b84:
    // 0x235b84: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x235b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_235b88:
    // 0x235b88: 0xffb70090  sd          $s7, 0x90($sp)
    ctx->pc = 0x235b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 23));
label_235b8c:
    // 0x235b8c: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x235b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
label_235b90:
    // 0x235b90: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x235b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
label_235b94:
    // 0x235b94: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x235b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
label_235b98:
    // 0x235b98: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x235b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
label_235b9c:
    // 0x235b9c: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x235b9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_235ba0:
    // 0x235ba0: 0x8c54fcd0  lw          $s4, -0x330($v0)
    ctx->pc = 0x235ba0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
label_235ba4:
    // 0x235ba4: 0x240182d  daddu       $v1, $s2, $zero
    ctx->pc = 0x235ba4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_235ba8:
    // 0x235ba8: 0x12800056  beqz        $s4, . + 4 + (0x56 << 2)
label_235bac:
    if (ctx->pc == 0x235BACu) {
        ctx->pc = 0x235BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BA8u;
        // 0x235bac: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BB0u;
        goto label_235bb0;
    }
    ctx->pc = 0x235BA8u;
    {
        const bool branch_taken_0x235ba8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BA8u;
        // 0x235bac: 0x8eb10004  lw          $s1, 0x4($s5) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ba8) {
            ctx->pc = 0x235D04u;
            goto label_235d04;
        }
    }
    ctx->pc = 0x235BB0u;
label_235bb0:
    // 0x235bb0: 0x26840014  addiu       $a0, $s4, 0x14
    ctx->pc = 0x235bb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
label_235bb4:
    // 0x235bb4: 0x0  nop
    ctx->pc = 0x235bb4u;
    // NOP
label_235bb8:
    // 0x235bb8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x235bb8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_235bbc:
    // 0x235bbc: 0xc08b4f8  jal         func_22D3E0
label_235bc0:
    if (ctx->pc == 0x235BC0u) {
        ctx->pc = 0x235BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BBCu;
        // 0x235bc0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BC4u;
        goto label_235bc4;
    }
    ctx->pc = 0x235BBCu;
    SET_GPR_U32(ctx, 31, 0x235BC4u);
    ctx->pc = 0x235BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BBCu;
    // 0x235bc0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x235BBCu, 0x235BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BC4u;
label_235bc4:
    // 0x235bc4: 0x8e93000c  lw          $s3, 0xC($s4)
    ctx->pc = 0x235bc4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_235bc8:
    // 0x235bc8: 0x1660000d  bnez        $s3, . + 4 + (0xD << 2)
label_235bcc:
    if (ctx->pc == 0x235BCCu) {
        ctx->pc = 0x235BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BC8u;
        // 0x235bcc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BD0u;
        goto label_235bd0;
    }
    ctx->pc = 0x235BC8u;
    {
        const bool branch_taken_0x235bc8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x235BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BC8u;
        // 0x235bcc: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bc8) {
            ctx->pc = 0x235C00u;
            goto label_235c00;
        }
    }
    ctx->pc = 0x235BD0u;
label_235bd0:
    // 0x235bd0: 0xc048c96  jal         func_123258
label_235bd4:
    if (ctx->pc == 0x235BD4u) {
        ctx->pc = 0x235BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BD0u;
        // 0x235bd4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BD8u;
        goto label_235bd8;
    }
    ctx->pc = 0x235BD0u;
    SET_GPR_U32(ctx, 31, 0x235BD8u);
    ctx->pc = 0x235BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BD0u;
    // 0x235bd4: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123258u, 0x235BD0u, 0x235BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BD8u;
label_235bd8:
    // 0x235bd8: 0x2a420020  slti        $v0, $s2, 0x20
    ctx->pc = 0x235bd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_235bdc:
    // 0x235bdc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_235be0:
    if (ctx->pc == 0x235BE0u) {
        ctx->pc = 0x235BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BDCu;
        // 0x235be0: 0x2652ffe0  addiu       $s2, $s2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BE4u;
        goto label_235be4;
    }
    ctx->pc = 0x235BDCu;
    {
        const bool branch_taken_0x235bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235bdc) {
            ctx->pc = 0x235BE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235BDCu;
            // 0x235be0: 0x2652ffe0  addiu       $s2, $s2, -0x20 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235BF8u;
            goto label_235bf8;
        }
    }
    ctx->pc = 0x235BE4u;
label_235be4:
    // 0x235be4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x235be4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_235be8:
    // 0x235be8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235be8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235bec:
    // 0x235bec: 0xc08b4f8  jal         func_22D3E0
label_235bf0:
    if (ctx->pc == 0x235BF0u) {
        ctx->pc = 0x235BF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BECu;
        // 0x235bf0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235BF4u;
        goto label_235bf4;
    }
    ctx->pc = 0x235BECu;
    SET_GPR_U32(ctx, 31, 0x235BF4u);
    ctx->pc = 0x235BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235BECu;
    // 0x235bf0: 0x24060020  addiu       $a2, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x235BECu, 0x235BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235BF4u;
label_235bf4:
    // 0x235bf4: 0x2652ffe0  addiu       $s2, $s2, -0x20
    ctx->pc = 0x235bf4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
label_235bf8:
    // 0x235bf8: 0x1000003e  b           . + 4 + (0x3E << 2)
label_235bfc:
    if (ctx->pc == 0x235BFCu) {
        ctx->pc = 0x235BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BF8u;
        // 0x235bfc: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C00u;
        goto label_235c00;
    }
    ctx->pc = 0x235BF8u;
    {
        const bool branch_taken_0x235bf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235BF8u;
        // 0x235bfc: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235bf8) {
            ctx->pc = 0x235CF4u;
            goto label_235cf4;
        }
    }
    ctx->pc = 0x235C00u;
label_235c00:
    // 0x235c00: 0x3417c008  ori         $s7, $zero, 0xC008
    ctx->pc = 0x235c00u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49160);
label_235c04:
    // 0x235c04: 0x17bc38  dsll        $s7, $s7, 16
    ctx->pc = 0x235c04u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) << 16);
label_235c08:
    // 0x235c08: 0x36f76914  ori         $s7, $s7, 0x6914
    ctx->pc = 0x235c08u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)26900);
label_235c0c:
    // 0x235c0c: 0x0  nop
    ctx->pc = 0x235c0cu;
    // NOP
label_235c10:
    // 0x235c10: 0x16d7000f  bne         $s6, $s7, . + 4 + (0xF << 2)
label_235c14:
    if (ctx->pc == 0x235C14u) {
        ctx->pc = 0x235C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C10u;
        // 0x235c14: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C18u;
        goto label_235c18;
    }
    ctx->pc = 0x235C10u;
    {
        const bool branch_taken_0x235c10 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 23));
        ctx->pc = 0x235C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C10u;
        // 0x235c14: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c10) {
            ctx->pc = 0x235C50u;
            goto label_235c50;
        }
    }
    ctx->pc = 0x235C18u;
label_235c18:
    // 0x235c18: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x235c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_235c1c:
    // 0x235c1c: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x235c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_235c20:
    // 0x235c20: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x235c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_235c24:
    // 0x235c24: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x235c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_235c28:
    // 0x235c28: 0xb3a20017  sdl         $v0, 0x17($sp)
    ctx->pc = 0x235c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_235c2c:
    // 0x235c2c: 0xb7a20010  sdr         $v0, 0x10($sp)
    ctx->pc = 0x235c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_235c30:
    // 0x235c30: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x235c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_235c34:
    // 0x235c34: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x235c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_235c38:
    // 0x235c38: 0x2a430020  slti        $v1, $s2, 0x20
    ctx->pc = 0x235c38u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_235c3c:
    // 0x235c3c: 0x92020001  lbu         $v0, 0x1($s0)
    ctx->pc = 0x235c3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_235c40:
    // 0x235c40: 0x14600029  bnez        $v1, . + 4 + (0x29 << 2)
label_235c44:
    if (ctx->pc == 0x235C44u) {
        ctx->pc = 0x235C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C40u;
        // 0x235c44: 0xa7a20010  sh          $v0, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C48u;
        goto label_235c48;
    }
    ctx->pc = 0x235C40u;
    {
        const bool branch_taken_0x235c40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x235C44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C40u;
        // 0x235c44: 0xa7a20010  sh          $v0, 0x10($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 16), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c40) {
            ctx->pc = 0x235CE8u;
            goto label_235ce8;
        }
    }
    ctx->pc = 0x235C48u;
label_235c48:
    // 0x235c48: 0x10000010  b           . + 4 + (0x10 << 2)
label_235c4c:
    if (ctx->pc == 0x235C4Cu) {
        ctx->pc = 0x235C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C48u;
        // 0x235c4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C50u;
        goto label_235c50;
    }
    ctx->pc = 0x235C48u;
    {
        const bool branch_taken_0x235c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C48u;
        // 0x235c4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c48) {
            ctx->pc = 0x235C8Cu;
            goto label_235c8c;
        }
    }
    ctx->pc = 0x235C50u;
label_235c50:
    // 0x235c50: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x235c50u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_235c54:
    // 0x235c54: 0x2c420011  sltiu       $v0, $v0, 0x11
    ctx->pc = 0x235c54u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)17) ? 1 : 0);
label_235c58:
    // 0x235c58: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_235c5c:
    if (ctx->pc == 0x235C5Cu) {
        ctx->pc = 0x235C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C58u;
        // 0x235c5c: 0x2a420020  slti        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C60u;
        goto label_235c60;
    }
    ctx->pc = 0x235C58u;
    {
        const bool branch_taken_0x235c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C58u;
        // 0x235c5c: 0x2a420020  slti        $v0, $s2, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c58) {
            ctx->pc = 0x235CA4u;
            goto label_235ca4;
        }
    }
    ctx->pc = 0x235C60u;
label_235c60:
    // 0x235c60: 0x6a060007  ldl         $a2, 0x7($s0)
    ctx->pc = 0x235c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_235c64:
    // 0x235c64: 0x6e060000  ldr         $a2, 0x0($s0)
    ctx->pc = 0x235c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_235c68:
    // 0x235c68: 0x6a03000f  ldl         $v1, 0xF($s0)
    ctx->pc = 0x235c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_235c6c:
    // 0x235c6c: 0x6e030008  ldr         $v1, 0x8($s0)
    ctx->pc = 0x235c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_235c70:
    // 0x235c70: 0xb3a60017  sdl         $a2, 0x17($sp)
    ctx->pc = 0x235c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_235c74:
    // 0x235c74: 0xb7a60010  sdr         $a2, 0x10($sp)
    ctx->pc = 0x235c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_235c78:
    // 0x235c78: 0xb3a3001f  sdl         $v1, 0x1F($sp)
    ctx->pc = 0x235c78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_235c7c:
    // 0x235c7c: 0xb7a30018  sdr         $v1, 0x18($sp)
    ctx->pc = 0x235c7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_235c80:
    // 0x235c80: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_235c84:
    if (ctx->pc == 0x235C84u) {
        ctx->pc = 0x235C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C80u;
        // 0x235c84: 0x8e730010  lw          $s3, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C88u;
        goto label_235c88;
    }
    ctx->pc = 0x235C80u;
    {
        const bool branch_taken_0x235c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235c80) {
            ctx->pc = 0x235C84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235C80u;
            // 0x235c84: 0x8e730010  lw          $s3, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235CECu;
            goto label_235cec;
        }
    }
    ctx->pc = 0x235C88u;
label_235c88:
    // 0x235c88: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235c88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235c8c:
    // 0x235c8c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x235c8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_235c90:
    // 0x235c90: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x235c90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_235c94:
    // 0x235c94: 0xc08b4f8  jal         func_22D3E0
label_235c98:
    if (ctx->pc == 0x235C98u) {
        ctx->pc = 0x235C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C94u;
        // 0x235c98: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235C9Cu;
        goto label_235c9c;
    }
    ctx->pc = 0x235C94u;
    SET_GPR_U32(ctx, 31, 0x235C9Cu);
    ctx->pc = 0x235C98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235C94u;
    // 0x235c98: 0x26310020  addiu       $s1, $s1, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x235C94u, 0x235C9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235C9Cu;
label_235c9c:
    // 0x235c9c: 0x10000013  b           . + 4 + (0x13 << 2)
label_235ca0:
    if (ctx->pc == 0x235CA0u) {
        ctx->pc = 0x235CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C9Cu;
        // 0x235ca0: 0x8e730010  lw          $s3, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CA4u;
        goto label_235ca4;
    }
    ctx->pc = 0x235C9Cu;
    {
        const bool branch_taken_0x235c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235C9Cu;
        // 0x235ca0: 0x8e730010  lw          $s3, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235c9c) {
            ctx->pc = 0x235CECu;
            goto label_235cec;
        }
    }
    ctx->pc = 0x235CA4u;
label_235ca4:
    // 0x235ca4: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x235ca4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_235ca8:
    // 0x235ca8: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x235ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
label_235cac:
    // 0x235cac: 0x629023  subu        $s2, $v1, $v0
    ctx->pc = 0x235cacu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_235cb0:
    // 0x235cb0: 0x2a440020  slti        $a0, $s2, 0x20
    ctx->pc = 0x235cb0u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)32) ? 1 : 0);
label_235cb4:
    // 0x235cb4: 0x5480000d  bnel        $a0, $zero, . + 4 + (0xD << 2)
label_235cb8:
    if (ctx->pc == 0x235CB8u) {
        ctx->pc = 0x235CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CB4u;
        // 0x235cb8: 0x8e730010  lw          $s3, 0x10($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CBCu;
        goto label_235cbc;
    }
    ctx->pc = 0x235CB4u;
    {
        const bool branch_taken_0x235cb4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x235cb4) {
            ctx->pc = 0x235CB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235CB4u;
            // 0x235cb8: 0x8e730010  lw          $s3, 0x10($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235CECu;
            goto label_235cec;
        }
    }
    ctx->pc = 0x235CBCu;
label_235cbc:
    // 0x235cbc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235cbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235cc0:
    // 0x235cc0: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x235cc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_235cc4:
    // 0x235cc4: 0xc08b4f8  jal         func_22D3E0
label_235cc8:
    if (ctx->pc == 0x235CC8u) {
        ctx->pc = 0x235CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CC4u;
        // 0x235cc8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CCCu;
        goto label_235ccc;
    }
    ctx->pc = 0x235CC4u;
    SET_GPR_U32(ctx, 31, 0x235CCCu);
    ctx->pc = 0x235CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CC4u;
    // 0x235cc8: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x235CC4u, 0x235CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CCCu;
label_235ccc:
    // 0x235ccc: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x235cccu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_235cd0:
    // 0x235cd0: 0x26250010  addiu       $a1, $s1, 0x10
    ctx->pc = 0x235cd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
label_235cd4:
    // 0x235cd4: 0xc08b4f8  jal         func_22D3E0
label_235cd8:
    if (ctx->pc == 0x235CD8u) {
        ctx->pc = 0x235CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CD4u;
        // 0x235cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CDCu;
        goto label_235cdc;
    }
    ctx->pc = 0x235CD4u;
    SET_GPR_U32(ctx, 31, 0x235CDCu);
    ctx->pc = 0x235CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235CD4u;
    // 0x235cd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x235CD4u, 0x235CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235CDCu;
label_235cdc:
    // 0x235cdc: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x235cdcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_235ce0:
    // 0x235ce0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x235ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_235ce4:
    // 0x235ce4: 0x2228821  addu        $s1, $s1, $v0
    ctx->pc = 0x235ce4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_235ce8:
    // 0x235ce8: 0x8e730010  lw          $s3, 0x10($s3)
    ctx->pc = 0x235ce8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_235cec:
    // 0x235cec: 0x1660ffc8  bnez        $s3, . + 4 + (-0x38 << 2)
label_235cf0:
    if (ctx->pc == 0x235CF0u) {
        ctx->pc = 0x235CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CECu;
        // 0x235cf0: 0x2652ffe0  addiu       $s2, $s2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235CF4u;
        goto label_235cf4;
    }
    ctx->pc = 0x235CECu;
    {
        const bool branch_taken_0x235cec = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x235CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CECu;
        // 0x235cf0: 0x2652ffe0  addiu       $s2, $s2, -0x20 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967264));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235cec) {
            ctx->pc = 0x235C10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235c10;
        }
    }
    ctx->pc = 0x235CF4u;
label_235cf4:
    // 0x235cf4: 0x8e940004  lw          $s4, 0x4($s4)
    ctx->pc = 0x235cf4u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_235cf8:
    // 0x235cf8: 0x5680ffaf  bnel        $s4, $zero, . + 4 + (-0x51 << 2)
label_235cfc:
    if (ctx->pc == 0x235CFCu) {
        ctx->pc = 0x235CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235CF8u;
        // 0x235cfc: 0x26840014  addiu       $a0, $s4, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D00u;
        goto label_235d00;
    }
    ctx->pc = 0x235CF8u;
    {
        const bool branch_taken_0x235cf8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x235cf8) {
            ctx->pc = 0x235CFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235CF8u;
            // 0x235cfc: 0x26840014  addiu       $a0, $s4, 0x14 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235BB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_235bb8;
        }
    }
    ctx->pc = 0x235D00u;
label_235d00:
    // 0x235d00: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x235d00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_235d04:
    // 0x235d04: 0x721823  subu        $v1, $v1, $s2
    ctx->pc = 0x235d04u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
label_235d08:
    // 0x235d08: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x235d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_235d0c:
    // 0x235d0c: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x235d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
label_235d10:
    // 0x235d10: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x235d10u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235d14:
    // 0x235d14: 0xdfb70090  ld          $s7, 0x90($sp)
    ctx->pc = 0x235d14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_235d18:
    // 0x235d18: 0xdfb60080  ld          $s6, 0x80($sp)
    ctx->pc = 0x235d18u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_235d1c:
    // 0x235d1c: 0xdfb50070  ld          $s5, 0x70($sp)
    ctx->pc = 0x235d1cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_235d20:
    // 0x235d20: 0xdfb40060  ld          $s4, 0x60($sp)
    ctx->pc = 0x235d20u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_235d24:
    // 0x235d24: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x235d24u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_235d28:
    // 0x235d28: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x235d28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_235d2c:
    // 0x235d2c: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x235d2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_235d30:
    // 0x235d30: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x235d30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_235d34:
    // 0x235d34: 0x3e00008  jr          $ra
label_235d38:
    if (ctx->pc == 0x235D38u) {
        ctx->pc = 0x235D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D34u;
        // 0x235d38: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235D3Cu;
        goto label_235d3c;
    }
    ctx->pc = 0x235D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x235D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D34u;
        // 0x235d38: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235D34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x235D3Cu;
label_235d3c:
    // 0x235d3c: 0x0  nop
    ctx->pc = 0x235d3cu;
    // NOP
label_235d40:
    // 0x235d40: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x235d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_235d44:
    // 0x235d44: 0x24020041  addiu       $v0, $zero, 0x41
    ctx->pc = 0x235d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
label_235d48:
    // 0x235d48: 0xffbe00b0  sd          $fp, 0xB0($sp)
    ctx->pc = 0x235d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 30));
label_235d4c:
    // 0x235d4c: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x235d4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_235d50:
    // 0x235d50: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x235d50u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235d54:
    // 0x235d54: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x235d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_235d58:
    // 0x235d58: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x235d58u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235d5c:
    // 0x235d5c: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x235d5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_235d60:
    // 0x235d60: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x235d60u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_235d64:
    // 0x235d64: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x235d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_235d68:
    // 0x235d68: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x235d68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_235d6c:
    // 0x235d6c: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x235d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_235d70:
    // 0x235d70: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x235d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_235d74:
    // 0x235d74: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x235d74u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_235d78:
    // 0x235d78: 0xffbf00c0  sd          $ra, 0xC0($sp)
    ctx->pc = 0x235d78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 31));
label_235d7c:
    // 0x235d7c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x235d7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_235d80:
    // 0x235d80: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x235d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_235d84:
    // 0x235d84: 0x240a02d  daddu       $s4, $s2, $zero
    ctx->pc = 0x235d84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_235d88:
    // 0x235d88: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x235d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_235d8c:
    // 0x235d8c: 0x96630030  lhu         $v1, 0x30($s3)
    ctx->pc = 0x235d8cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_235d90:
    // 0x235d90: 0xa7a00020  sh          $zero, 0x20($sp)
    ctx->pc = 0x235d90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 0));
label_235d94:
    // 0x235d94: 0x30630041  andi        $v1, $v1, 0x41
    ctx->pc = 0x235d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65);
label_235d98:
    // 0x235d98: 0x1462014f  bne         $v1, $v0, . + 4 + (0x14F << 2)
label_235d9c:
    if (ctx->pc == 0x235D9Cu) {
        ctx->pc = 0x235D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D98u;
        // 0x235d9c: 0x24100073  addiu       $s0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DA0u;
        goto label_235da0;
    }
    ctx->pc = 0x235D98u;
    {
        const bool branch_taken_0x235d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x235D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235D98u;
        // 0x235d9c: 0x24100073  addiu       $s0, $zero, 0x73 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 115));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235d98) {
            ctx->pc = 0x2362D8u;
            goto label_2362d8;
        }
    }
    ctx->pc = 0x235DA0u;
label_235da0:
    // 0x235da0: 0x3c10003a  lui         $s0, 0x3A
    ctx->pc = 0x235da0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)58 << 16));
label_235da4:
    // 0x235da4: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x235da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_235da8:
    // 0x235da8: 0xde0217c0  ld          $v0, 0x17C0($s0)
    ctx->pc = 0x235da8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 6080)));
label_235dac:
    // 0x235dac: 0x260417c0  addiu       $a0, $s0, 0x17C0
    ctx->pc = 0x235dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 6080));
label_235db0:
    // 0x235db0: 0xfe6200b0  sd          $v0, 0xB0($s3)
    ctx->pc = 0x235db0u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 176), GPR_U64(ctx, 2));
label_235db4:
    // 0x235db4: 0xdc830008  ld          $v1, 0x8($a0)
    ctx->pc = 0x235db4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
label_235db8:
    // 0x235db8: 0x1220004d  beqz        $s1, . + 4 + (0x4D << 2)
label_235dbc:
    if (ctx->pc == 0x235DBCu) {
        ctx->pc = 0x235DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DB8u;
        // 0x235dbc: 0xfe6300b8  sd          $v1, 0xB8($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 184), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DC0u;
        goto label_235dc0;
    }
    ctx->pc = 0x235DB8u;
    {
        const bool branch_taken_0x235db8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DB8u;
        // 0x235dbc: 0xfe6300b8  sd          $v1, 0xB8($s3) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 19), 184), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235db8) {
            ctx->pc = 0x235EF0u;
            goto label_235ef0;
        }
    }
    ctx->pc = 0x235DC0u;
label_235dc0:
    // 0x235dc0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x235dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_235dc4:
    // 0x235dc4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x235dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_235dc8:
    // 0x235dc8: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
label_235dcc:
    if (ctx->pc == 0x235DCCu) {
        ctx->pc = 0x235DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DC8u;
        // 0x235dcc: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DD0u;
        goto label_235dd0;
    }
    ctx->pc = 0x235DC8u;
    {
        const bool branch_taken_0x235dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235dc8) {
            ctx->pc = 0x235DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235DC8u;
            // 0x235dcc: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235E20u;
            goto label_235e20;
        }
    }
    ctx->pc = 0x235DD0u;
label_235dd0:
    // 0x235dd0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x235dd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_235dd4:
    // 0x235dd4: 0xc090bf0  jal         func_242FC0
label_235dd8:
    if (ctx->pc == 0x235DD8u) {
        ctx->pc = 0x235DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DD4u;
        // 0x235dd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DDCu;
        goto label_235ddc;
    }
    ctx->pc = 0x235DD4u;
    SET_GPR_U32(ctx, 31, 0x235DDCu);
    ctx->pc = 0x235DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235DD4u;
    // 0x235dd8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242FC0u, 0x235DD4u, 0x235DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235DDCu;
label_235ddc:
    // 0x235ddc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x235ddcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235de0:
    // 0x235de0: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
label_235de4:
    if (ctx->pc == 0x235DE4u) {
        ctx->pc = 0x235DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DE0u;
        // 0x235de4: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DE8u;
        goto label_235de8;
    }
    ctx->pc = 0x235DE0u;
    {
        const bool branch_taken_0x235de0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x235DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DE0u;
        // 0x235de4: 0x220b02d  daddu       $s6, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235de0) {
            ctx->pc = 0x235E80u;
            goto label_235e80;
        }
    }
    ctx->pc = 0x235DE8u;
label_235de8:
    // 0x235de8: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x235de8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_235dec:
    // 0x235dec: 0x8e230048  lw          $v1, 0x48($s1)
    ctx->pc = 0x235decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_235df0:
    // 0x235df0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x235df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_235df4:
    // 0x235df4: 0x10730009  beq         $v1, $s3, . + 4 + (0x9 << 2)
label_235df8:
    if (ctx->pc == 0x235DF8u) {
        ctx->pc = 0x235DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DF4u;
        // 0x235df8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235DFCu;
        goto label_235dfc;
    }
    ctx->pc = 0x235DF4u;
    {
        const bool branch_taken_0x235df4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 19));
        ctx->pc = 0x235DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235DF4u;
        // 0x235df8: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235df4) {
            ctx->pc = 0x235E1Cu;
            goto label_235e1c;
        }
    }
    ctx->pc = 0x235DFCu;
label_235dfc:
    // 0x235dfc: 0x8c6200c0  lw          $v0, 0xC0($v1)
    ctx->pc = 0x235dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 192)));
label_235e00:
    // 0x235e00: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x235e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_235e04:
    // 0x235e04: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x235e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_235e08:
    // 0x235e08: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x235e08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_235e0c:
    // 0x235e0c: 0x40f809  jalr        $v0
label_235e10:
    if (ctx->pc == 0x235E10u) {
        ctx->pc = 0x235E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E0Cu;
        // 0x235e10: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E14u;
        goto label_235e14;
    }
    ctx->pc = 0x235E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x235E14u);
        ctx->pc = 0x235E10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E0Cu;
        // 0x235e10: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x235E0Cu, 0x235E14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x235E14u;
label_235e14:
    // 0x235e14: 0x10000136  b           . + 4 + (0x136 << 2)
label_235e18:
    if (ctx->pc == 0x235E18u) {
        ctx->pc = 0x235E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E14u;
        // 0x235e18: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E1Cu;
        goto label_235e1c;
    }
    ctx->pc = 0x235E14u;
    {
        const bool branch_taken_0x235e14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E14u;
        // 0x235e18: 0xdfbf00c0  ld          $ra, 0xC0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e14) {
            ctx->pc = 0x2362F0u;
            goto label_2362f0;
        }
    }
    ctx->pc = 0x235E1Cu;
label_235e1c:
    // 0x235e1c: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x235e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_235e20:
    // 0x235e20: 0x30820002  andi        $v0, $a0, 0x2
    ctx->pc = 0x235e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)2);
label_235e24:
    // 0x235e24: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
label_235e28:
    if (ctx->pc == 0x235E28u) {
        ctx->pc = 0x235E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E24u;
        // 0x235e28: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E2Cu;
        goto label_235e2c;
    }
    ctx->pc = 0x235E24u;
    {
        const bool branch_taken_0x235e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E24u;
        // 0x235e28: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e24) {
            ctx->pc = 0x235EB8u;
            goto label_235eb8;
        }
    }
    ctx->pc = 0x235E2Cu;
label_235e2c:
    // 0x235e2c: 0x92a30001  lbu         $v1, 0x1($s5)
    ctx->pc = 0x235e2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_235e30:
    // 0x235e30: 0x10620022  beq         $v1, $v0, . + 4 + (0x22 << 2)
label_235e34:
    if (ctx->pc == 0x235E34u) {
        ctx->pc = 0x235E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E30u;
        // 0x235e34: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E38u;
        goto label_235e38;
    }
    ctx->pc = 0x235E30u;
    {
        const bool branch_taken_0x235e30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x235E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E30u;
        // 0x235e34: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e30) {
            ctx->pc = 0x235EBCu;
            goto label_235ebc;
        }
    }
    ctx->pc = 0x235E38u;
label_235e38:
    // 0x235e38: 0x8e2200a8  lw          $v0, 0xA8($s1)
    ctx->pc = 0x235e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
label_235e3c:
    // 0x235e3c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_235e40:
    if (ctx->pc == 0x235E40u) {
        ctx->pc = 0x235E40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E3Cu;
        // 0x235e40: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E44u;
        goto label_235e44;
    }
    ctx->pc = 0x235E3Cu;
    {
        const bool branch_taken_0x235e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235e3c) {
            ctx->pc = 0x235E40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235E3Cu;
            // 0x235e40: 0x8e240030  lw          $a0, 0x30($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235E68u;
            goto label_235e68;
        }
    }
    ctx->pc = 0x235E44u;
label_235e44:
    // 0x235e44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x235e44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235e48:
    // 0x235e48: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x235e48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_235e4c:
    // 0x235e4c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x235e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
label_235e50:
    // 0x235e50: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_235e54:
    if (ctx->pc == 0x235E54u) {
        ctx->pc = 0x235E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E50u;
        // 0x235e54: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E58u;
        goto label_235e58;
    }
    ctx->pc = 0x235E50u;
    {
        const bool branch_taken_0x235e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x235E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E50u;
        // 0x235e54: 0x30820008  andi        $v0, $a0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e50) {
            ctx->pc = 0x235EBCu;
            goto label_235ebc;
        }
    }
    ctx->pc = 0x235E58u;
label_235e58:
    // 0x235e58: 0xc090c4c  jal         func_243130
label_235e5c:
    if (ctx->pc == 0x235E5Cu) {
        ctx->pc = 0x235E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E58u;
        // 0x235e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E60u;
        goto label_235e60;
    }
    ctx->pc = 0x235E58u;
    SET_GPR_U32(ctx, 31, 0x235E60u);
    ctx->pc = 0x235E5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E58u;
    // 0x235e5c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x243130u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x243130u, 0x235E58u, 0x235E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E60u;
label_235e60:
    // 0x235e60: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x235e60u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_235e64:
    // 0x235e64: 0x8e240030  lw          $a0, 0x30($s1)
    ctx->pc = 0x235e64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_235e68:
    // 0x235e68: 0xc090bf0  jal         func_242FC0
label_235e6c:
    if (ctx->pc == 0x235E6Cu) {
        ctx->pc = 0x235E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E68u;
        // 0x235e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E70u;
        goto label_235e70;
    }
    ctx->pc = 0x235E68u;
    SET_GPR_U32(ctx, 31, 0x235E70u);
    ctx->pc = 0x235E6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235E68u;
    // 0x235e6c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x242FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242FC0u, 0x235E68u, 0x235E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235E70u;
label_235e70:
    // 0x235e70: 0xae2200a8  sw          $v0, 0xA8($s1)
    ctx->pc = 0x235e70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 2));
label_235e74:
    // 0x235e74: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x235e74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235e78:
    // 0x235e78: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
label_235e7c:
    if (ctx->pc == 0x235E7Cu) {
        ctx->pc = 0x235E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E78u;
        // 0x235e7c: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E80u;
        goto label_235e80;
    }
    ctx->pc = 0x235E78u;
    {
        const bool branch_taken_0x235e78 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x235e78) {
            ctx->pc = 0x235E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235E78u;
            // 0x235e7c: 0x8e230034  lw          $v1, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235E88u;
            goto label_235e88;
        }
    }
    ctx->pc = 0x235E80u;
label_235e80:
    // 0x235e80: 0x10000115  b           . + 4 + (0x115 << 2)
label_235e84:
    if (ctx->pc == 0x235E84u) {
        ctx->pc = 0x235E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E80u;
        // 0x235e84: 0x24100076  addiu       $s0, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E88u;
        goto label_235e88;
    }
    ctx->pc = 0x235E80u;
    {
        const bool branch_taken_0x235e80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E80u;
        // 0x235e84: 0x24100076  addiu       $s0, $zero, 0x76 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e80) {
            ctx->pc = 0x2362D8u;
            goto label_2362d8;
        }
    }
    ctx->pc = 0x235E88u;
label_235e88:
    // 0x235e88: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x235e88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_235e8c:
    // 0x235e8c: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_235e90:
    if (ctx->pc == 0x235E90u) {
        ctx->pc = 0x235E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E8Cu;
        // 0x235e90: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235E94u;
        goto label_235e94;
    }
    ctx->pc = 0x235E8Cu;
    {
        const bool branch_taken_0x235e8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235e8c) {
            ctx->pc = 0x235E90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235E8Cu;
            // 0x235e90: 0x8e220038  lw          $v0, 0x38($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235EA4u;
            goto label_235ea4;
        }
    }
    ctx->pc = 0x235E94u;
label_235e94:
    // 0x235e94: 0x8e220048  lw          $v0, 0x48($s1)
    ctx->pc = 0x235e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 72)));
label_235e98:
    // 0x235e98: 0x10530007  beq         $v0, $s3, . + 4 + (0x7 << 2)
label_235e9c:
    if (ctx->pc == 0x235E9Cu) {
        ctx->pc = 0x235E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E98u;
        // 0x235e9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EA0u;
        goto label_235ea0;
    }
    ctx->pc = 0x235E98u;
    {
        const bool branch_taken_0x235e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 19));
        ctx->pc = 0x235E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235E98u;
        // 0x235e9c: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235e98) {
            ctx->pc = 0x235EB8u;
            goto label_235eb8;
        }
    }
    ctx->pc = 0x235EA0u;
label_235ea0:
    // 0x235ea0: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x235ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
label_235ea4:
    // 0x235ea4: 0x24100076  addiu       $s0, $zero, 0x76
    ctx->pc = 0x235ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_235ea8:
    // 0x235ea8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x235ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_235eac:
    // 0x235eac: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x235eacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_235eb0:
    // 0x235eb0: 0x10000109  b           . + 4 + (0x109 << 2)
label_235eb4:
    if (ctx->pc == 0x235EB4u) {
        ctx->pc = 0x235EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EB0u;
        // 0x235eb4: 0xaec000a8  sw          $zero, 0xA8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EB8u;
        goto label_235eb8;
    }
    ctx->pc = 0x235EB0u;
    {
        const bool branch_taken_0x235eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EB0u;
        // 0x235eb4: 0xaec000a8  sw          $zero, 0xA8($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235eb0) {
            ctx->pc = 0x2362D8u;
            goto label_2362d8;
        }
    }
    ctx->pc = 0x235EB8u;
label_235eb8:
    // 0x235eb8: 0x30820008  andi        $v0, $a0, 0x8
    ctx->pc = 0x235eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)8);
label_235ebc:
    // 0x235ebc: 0x5040000d  beql        $v0, $zero, . + 4 + (0xD << 2)
label_235ec0:
    if (ctx->pc == 0x235EC0u) {
        ctx->pc = 0x235EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EBCu;
        // 0x235ec0: 0x92a70001  lbu         $a3, 0x1($s5) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EC4u;
        goto label_235ec4;
    }
    ctx->pc = 0x235EBCu;
    {
        const bool branch_taken_0x235ebc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235ebc) {
            ctx->pc = 0x235EC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235EBCu;
            // 0x235ec0: 0x92a70001  lbu         $a3, 0x1($s5) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235EF4u;
            goto label_235ef4;
        }
    }
    ctx->pc = 0x235EC4u;
label_235ec4:
    // 0x235ec4: 0xde240070  ld          $a0, 0x70($s1)
    ctx->pc = 0x235ec4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 17), 112)));
label_235ec8:
    // 0x235ec8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_235ecc:
    if (ctx->pc == 0x235ECCu) {
        ctx->pc = 0x235ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EC8u;
        // 0x235ecc: 0xde0217c0  ld          $v0, 0x17C0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 6080)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235ED0u;
        goto label_235ed0;
    }
    ctx->pc = 0x235EC8u;
    {
        const bool branch_taken_0x235ec8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x235ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EC8u;
        // 0x235ecc: 0xde0217c0  ld          $v0, 0x17C0($s0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 6080)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ec8) {
            ctx->pc = 0x235EDCu;
            goto label_235edc;
        }
    }
    ctx->pc = 0x235ED0u;
label_235ed0:
    // 0x235ed0: 0x44102b  sltu        $v0, $v0, $a0
    ctx->pc = 0x235ed0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_235ed4:
    // 0x235ed4: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_235ed8:
    if (ctx->pc == 0x235ED8u) {
        ctx->pc = 0x235ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235ED4u;
        // 0x235ed8: 0x92a70001  lbu         $a3, 0x1($s5) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EDCu;
        goto label_235edc;
    }
    ctx->pc = 0x235ED4u;
    {
        const bool branch_taken_0x235ed4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x235ed4) {
            ctx->pc = 0x235ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235ED4u;
            // 0x235ed8: 0x92a70001  lbu         $a3, 0x1($s5) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235EF4u;
            goto label_235ef4;
        }
    }
    ctx->pc = 0x235EDCu;
label_235edc:
    // 0x235edc: 0x2361826  xor         $v1, $s1, $s6
    ctx->pc = 0x235edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 22));
label_235ee0:
    // 0x235ee0: 0x24100076  addiu       $s0, $zero, 0x76
    ctx->pc = 0x235ee0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_235ee4:
    // 0x235ee4: 0x24020075  addiu       $v0, $zero, 0x75
    ctx->pc = 0x235ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_235ee8:
    // 0x235ee8: 0x100000fb  b           . + 4 + (0xFB << 2)
label_235eec:
    if (ctx->pc == 0x235EECu) {
        ctx->pc = 0x235EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EE8u;
        // 0x235eec: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235EF0u;
        goto label_235ef0;
    }
    ctx->pc = 0x235EE8u;
    {
        const bool branch_taken_0x235ee8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EE8u;
        // 0x235eec: 0x43800a  movz        $s0, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ee8) {
            ctx->pc = 0x2362D8u;
            goto label_2362d8;
        }
    }
    ctx->pc = 0x235EF0u;
label_235ef0:
    // 0x235ef0: 0x92a70001  lbu         $a3, 0x1($s5)
    ctx->pc = 0x235ef0u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 1)));
label_235ef4:
    // 0x235ef4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x235ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_235ef8:
    // 0x235ef8: 0x10e2000d  beq         $a3, $v0, . + 4 + (0xD << 2)
label_235efc:
    if (ctx->pc == 0x235EFCu) {
        ctx->pc = 0x235EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EF8u;
        // 0x235efc: 0x28e20003  slti        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F00u;
        goto label_235f00;
    }
    ctx->pc = 0x235EF8u;
    {
        const bool branch_taken_0x235ef8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x235EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235EF8u;
        // 0x235efc: 0x28e20003  slti        $v0, $a3, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ef8) {
            ctx->pc = 0x235F30u;
            goto label_235f30;
        }
    }
    ctx->pc = 0x235F00u;
label_235f00:
    // 0x235f00: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_235f04:
    if (ctx->pc == 0x235F04u) {
        ctx->pc = 0x235F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F00u;
        // 0x235f04: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F08u;
        goto label_235f08;
    }
    ctx->pc = 0x235F00u;
    {
        const bool branch_taken_0x235f00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F00u;
        // 0x235f04: 0x2402001c  addiu       $v0, $zero, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f00) {
            ctx->pc = 0x235F18u;
            goto label_235f18;
        }
    }
    ctx->pc = 0x235F08u;
label_235f08:
    // 0x235f08: 0x10e0006c  beqz        $a3, . + 4 + (0x6C << 2)
label_235f0c:
    if (ctx->pc == 0x235F0Cu) {
        ctx->pc = 0x235F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F08u;
        // 0x235f0c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F10u;
        goto label_235f10;
    }
    ctx->pc = 0x235F08u;
    {
        const bool branch_taken_0x235f08 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F08u;
        // 0x235f0c: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f08) {
            ctx->pc = 0x2360BCu;
            goto label_2360bc;
        }
    }
    ctx->pc = 0x235F10u;
label_235f10:
    // 0x235f10: 0x10000076  b           . + 4 + (0x76 << 2)
label_235f14:
    if (ctx->pc == 0x235F14u) {
        ctx->pc = 0x235F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F10u;
        // 0x235f14: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F18u;
        goto label_235f18;
    }
    ctx->pc = 0x235F10u;
    {
        const bool branch_taken_0x235f10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F10u;
        // 0x235f14: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f10) {
            ctx->pc = 0x2360ECu;
            goto label_2360ec;
        }
    }
    ctx->pc = 0x235F18u;
label_235f18:
    // 0x235f18: 0x10e20036  beq         $a3, $v0, . + 4 + (0x36 << 2)
label_235f1c:
    if (ctx->pc == 0x235F1Cu) {
        ctx->pc = 0x235F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F18u;
        // 0x235f1c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F20u;
        goto label_235f20;
    }
    ctx->pc = 0x235F18u;
    {
        const bool branch_taken_0x235f18 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x235F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F18u;
        // 0x235f1c: 0x2402001e  addiu       $v0, $zero, 0x1E (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f18) {
            ctx->pc = 0x235FF4u;
            goto label_235ff4;
        }
    }
    ctx->pc = 0x235F20u;
label_235f20:
    // 0x235f20: 0x10e2005e  beq         $a3, $v0, . + 4 + (0x5E << 2)
label_235f24:
    if (ctx->pc == 0x235F24u) {
        ctx->pc = 0x235F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F20u;
        // 0x235f24: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F28u;
        goto label_235f28;
    }
    ctx->pc = 0x235F20u;
    {
        const bool branch_taken_0x235f20 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x235F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F20u;
        // 0x235f24: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f20) {
            ctx->pc = 0x23609Cu;
            goto label_23609c;
        }
    }
    ctx->pc = 0x235F28u;
label_235f28:
    // 0x235f28: 0x10000070  b           . + 4 + (0x70 << 2)
label_235f2c:
    if (ctx->pc == 0x235F2Cu) {
        ctx->pc = 0x235F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F28u;
        // 0x235f2c: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F30u;
        goto label_235f30;
    }
    ctx->pc = 0x235F28u;
    {
        const bool branch_taken_0x235f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F28u;
        // 0x235f2c: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f28) {
            ctx->pc = 0x2360ECu;
            goto label_2360ec;
        }
    }
    ctx->pc = 0x235F30u;
label_235f30:
    // 0x235f30: 0x96470012  lhu         $a3, 0x12($s2)
    ctx->pc = 0x235f30u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_235f34:
    // 0x235f34: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x235f34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
label_235f38:
    // 0x235f38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_235f3c:
    if (ctx->pc == 0x235F3Cu) {
        ctx->pc = 0x235F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F38u;
        // 0x235f3c: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F40u;
        goto label_235f40;
    }
    ctx->pc = 0x235F38u;
    {
        const bool branch_taken_0x235f38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F38u;
        // 0x235f3c: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f38) {
            ctx->pc = 0x235F58u;
            goto label_235f58;
        }
    }
    ctx->pc = 0x235F40u;
label_235f40:
    // 0x235f40: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x235f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_235f44:
    // 0x235f44: 0x2484fd00  addiu       $a0, $a0, -0x300
    ctx->pc = 0x235f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966528));
label_235f48:
    // 0x235f48: 0xc08b4f8  jal         func_22D3E0
label_235f4c:
    if (ctx->pc == 0x235F4Cu) {
        ctx->pc = 0x235F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F48u;
        // 0x235f4c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F50u;
        goto label_235f50;
    }
    ctx->pc = 0x235F48u;
    SET_GPR_U32(ctx, 31, 0x235F50u);
    ctx->pc = 0x235F4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F48u;
    // 0x235f4c: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x235F48u, 0x235F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F50u;
label_235f50:
    // 0x235f50: 0x10000019  b           . + 4 + (0x19 << 2)
label_235f54:
    if (ctx->pc == 0x235F54u) {
        ctx->pc = 0x235F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F50u;
        // 0x235f54: 0x96470012  lhu         $a3, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F58u;
        goto label_235f58;
    }
    ctx->pc = 0x235F50u;
    {
        const bool branch_taken_0x235f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F50u;
        // 0x235f54: 0x96470012  lhu         $a3, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f50) {
            ctx->pc = 0x235FB8u;
            goto label_235fb8;
        }
    }
    ctx->pc = 0x235F58u;
label_235f58:
    // 0x235f58: 0x30e20200  andi        $v0, $a3, 0x200
    ctx->pc = 0x235f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)512);
label_235f5c:
    // 0x235f5c: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_235f60:
    if (ctx->pc == 0x235F60u) {
        ctx->pc = 0x235F60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F5Cu;
        // 0x235f60: 0x92a20005  lbu         $v0, 0x5($s5) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F64u;
        goto label_235f64;
    }
    ctx->pc = 0x235F5Cu;
    {
        const bool branch_taken_0x235f5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235f5c) {
            ctx->pc = 0x235F60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235F5Cu;
            // 0x235f60: 0x92a20005  lbu         $v0, 0x5($s5) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 5)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235F8Cu;
            goto label_235f8c;
        }
    }
    ctx->pc = 0x235F64u;
label_235f64:
    // 0x235f64: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x235f64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_235f68:
    // 0x235f68: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x235f68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_235f6c:
    // 0x235f6c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x235f6cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_235f70:
    // 0x235f70: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x235f70u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_235f74:
    // 0x235f74: 0xc091cfe  jal         func_2473F8
label_235f78:
    if (ctx->pc == 0x235F78u) {
        ctx->pc = 0x235F78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F74u;
        // 0x235f78: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F7Cu;
        goto label_235f7c;
    }
    ctx->pc = 0x235F74u;
    SET_GPR_U32(ctx, 31, 0x235F7Cu);
    ctx->pc = 0x235F78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235F74u;
    // 0x235f78: 0x27a80010  addiu       $t0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2473F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2473F8u, 0x235F74u, 0x235F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235F7Cu;
label_235f7c:
    // 0x235f7c: 0x5440000e  bnel        $v0, $zero, . + 4 + (0xE << 2)
label_235f80:
    if (ctx->pc == 0x235F80u) {
        ctx->pc = 0x235F80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F7Cu;
        // 0x235f80: 0x96470012  lhu         $a3, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F84u;
        goto label_235f84;
    }
    ctx->pc = 0x235F7Cu;
    {
        const bool branch_taken_0x235f7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x235f7c) {
            ctx->pc = 0x235F80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x235F7Cu;
            // 0x235f80: 0x96470012  lhu         $a3, 0x12($s2) (Delay Slot)
            SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x235FB8u;
            goto label_235fb8;
        }
    }
    ctx->pc = 0x235F84u;
label_235f84:
    // 0x235f84: 0x100000d9  b           . + 4 + (0xD9 << 2)
label_235f88:
    if (ctx->pc == 0x235F88u) {
        ctx->pc = 0x235F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F84u;
        // 0x235f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235F8Cu;
        goto label_235f8c;
    }
    ctx->pc = 0x235F84u;
    {
        const bool branch_taken_0x235f84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235F88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235F84u;
        // 0x235f88: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235f84) {
            ctx->pc = 0x2362ECu;
            goto label_2362ec;
        }
    }
    ctx->pc = 0x235F8Cu;
label_235f8c:
    // 0x235f8c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x235f8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_235f90:
    // 0x235f90: 0x92a60006  lbu         $a2, 0x6($s5)
    ctx->pc = 0x235f90u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 6)));
label_235f94:
    // 0x235f94: 0x2403005e  addiu       $v1, $zero, 0x5E
    ctx->pc = 0x235f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 94));
label_235f98:
    // 0x235f98: 0x92a50007  lbu         $a1, 0x7($s5)
    ctx->pc = 0x235f98u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 7)));
label_235f9c:
    // 0x235f9c: 0x3042007f  andi        $v0, $v0, 0x7F
    ctx->pc = 0x235f9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)127);
label_235fa0:
    // 0x235fa0: 0xa3a40010  sb          $a0, 0x10($sp)
    ctx->pc = 0x235fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 16), (uint8_t)GPR_U32(ctx, 4));
label_235fa4:
    // 0x235fa4: 0xa3a30012  sb          $v1, 0x12($sp)
    ctx->pc = 0x235fa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 18), (uint8_t)GPR_U32(ctx, 3));
label_235fa8:
    // 0x235fa8: 0xa3a20013  sb          $v0, 0x13($sp)
    ctx->pc = 0x235fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 19), (uint8_t)GPR_U32(ctx, 2));
label_235fac:
    // 0x235fac: 0xa3a60014  sb          $a2, 0x14($sp)
    ctx->pc = 0x235facu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 6));
label_235fb0:
    // 0x235fb0: 0xa3a50015  sb          $a1, 0x15($sp)
    ctx->pc = 0x235fb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 21), (uint8_t)GPR_U32(ctx, 5));
label_235fb4:
    // 0x235fb4: 0xa3a00011  sb          $zero, 0x11($sp)
    ctx->pc = 0x235fb4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 17), (uint8_t)GPR_U32(ctx, 0));
label_235fb8:
    // 0x235fb8: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x235fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
label_235fbc:
    // 0x235fbc: 0x10400033  beqz        $v0, . + 4 + (0x33 << 2)
label_235fc0:
    if (ctx->pc == 0x235FC0u) {
        ctx->pc = 0x235FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FBCu;
        // 0x235fc0: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FC4u;
        goto label_235fc4;
    }
    ctx->pc = 0x235FBCu;
    {
        const bool branch_taken_0x235fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FBCu;
        // 0x235fc0: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fbc) {
            ctx->pc = 0x23608Cu;
            goto label_23608c;
        }
    }
    ctx->pc = 0x235FC4u;
label_235fc4:
    // 0x235fc4: 0x96620030  lhu         $v0, 0x30($s3)
    ctx->pc = 0x235fc4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_235fc8:
    // 0x235fc8: 0x30420800  andi        $v0, $v0, 0x800
    ctx->pc = 0x235fc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2048);
label_235fcc:
    // 0x235fcc: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_235fd0:
    if (ctx->pc == 0x235FD0u) {
        ctx->pc = 0x235FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FCCu;
        // 0x235fd0: 0x3c063b9a  lui         $a2, 0x3B9A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15258 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FD4u;
        goto label_235fd4;
    }
    ctx->pc = 0x235FCCu;
    {
        const bool branch_taken_0x235fcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FCCu;
        // 0x235fd0: 0x3c063b9a  lui         $a2, 0x3B9A (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)15258 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fcc) {
            ctx->pc = 0x23608Cu;
            goto label_23608c;
        }
    }
    ctx->pc = 0x235FD4u;
label_235fd4:
    // 0x235fd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x235fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_235fd8:
    // 0x235fd8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x235fd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_235fdc:
    // 0x235fdc: 0x34c6ca00  ori         $a2, $a2, 0xCA00
    ctx->pc = 0x235fdcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)51712);
label_235fe0:
    // 0x235fe0: 0xc08aa68  jal         func_22A9A0
label_235fe4:
    if (ctx->pc == 0x235FE4u) {
        ctx->pc = 0x235FE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FE0u;
        // 0x235fe4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FE8u;
        goto label_235fe8;
    }
    ctx->pc = 0x235FE0u;
    SET_GPR_U32(ctx, 31, 0x235FE8u);
    ctx->pc = 0x235FE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x235FE0u;
    // 0x235fe4: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A9A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A9A0u, 0x235FE0u, 0x235FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x235FE8u;
label_235fe8:
    // 0x235fe8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x235fe8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_235fec:
    // 0x235fec: 0x10000027  b           . + 4 + (0x27 << 2)
label_235ff0:
    if (ctx->pc == 0x235FF0u) {
        ctx->pc = 0x235FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FECu;
        // 0x235ff0: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x235FF4u;
        goto label_235ff4;
    }
    ctx->pc = 0x235FECu;
    {
        const bool branch_taken_0x235fec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x235FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FECu;
        // 0x235ff0: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235fec) {
            ctx->pc = 0x23608Cu;
            goto label_23608c;
        }
    }
    ctx->pc = 0x235FF4u;
label_235ff4:
    // 0x235ff4: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x235ff4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_235ff8:
    // 0x235ff8: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x235ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
label_235ffc:
    // 0x235ffc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_236000:
    if (ctx->pc == 0x236000u) {
        ctx->pc = 0x236000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FFCu;
        // 0x236000: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236004u;
        goto label_236004;
    }
    ctx->pc = 0x235FFCu;
    {
        const bool branch_taken_0x235ffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x235FFCu;
        // 0x236000: 0x8e500008  lw          $s0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x235ffc) {
            ctx->pc = 0x236020u;
            goto label_236020;
        }
    }
    ctx->pc = 0x236004u;
label_236004:
    // 0x236004: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x236004u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_236008:
    // 0x236008: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x236008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_23600c:
    // 0x23600c: 0x2484fd00  addiu       $a0, $a0, -0x300
    ctx->pc = 0x23600cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966528));
label_236010:
    // 0x236010: 0xc08b4f8  jal         func_22D3E0
label_236014:
    if (ctx->pc == 0x236014u) {
        ctx->pc = 0x236014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236010u;
        // 0x236014: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236018u;
        goto label_236018;
    }
    ctx->pc = 0x236010u;
    SET_GPR_U32(ctx, 31, 0x236018u);
    ctx->pc = 0x236014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236010u;
    // 0x236014: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x236010u, 0x236018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236018u;
label_236018:
    // 0x236018: 0x10000009  b           . + 4 + (0x9 << 2)
label_23601c:
    if (ctx->pc == 0x23601Cu) {
        ctx->pc = 0x236020u;
        goto label_236020;
    }
    ctx->pc = 0x236018u;
    {
        const bool branch_taken_0x236018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236018) {
            ctx->pc = 0x236040u;
            goto label_236040;
        }
    }
    ctx->pc = 0x236020u;
label_236020:
    // 0x236020: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x236020u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
label_236024:
    // 0x236024: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x236024u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_236028:
    // 0x236028: 0x92040004  lbu         $a0, 0x4($s0)
    ctx->pc = 0x236028u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
label_23602c:
    // 0x23602c: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x23602cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_236030:
    // 0x236030: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x236030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_236034:
    // 0x236034: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x236034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_236038:
    // 0x236038: 0xc08b4f8  jal         func_22D3E0
label_23603c:
    if (ctx->pc == 0x23603Cu) {
        ctx->pc = 0x23603Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236038u;
        // 0x23603c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236040u;
        goto label_236040;
    }
    ctx->pc = 0x236038u;
    SET_GPR_U32(ctx, 31, 0x236040u);
    ctx->pc = 0x23603Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236038u;
    // 0x23603c: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x236038u, 0x236040u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236040u;
label_236040:
    // 0x236040: 0xc08a262  jal         func_228988
label_236044:
    if (ctx->pc == 0x236044u) {
        ctx->pc = 0x236044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236040u;
        // 0x236044: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236048u;
        goto label_236048;
    }
    ctx->pc = 0x236040u;
    SET_GPR_U32(ctx, 31, 0x236048u);
    ctx->pc = 0x236044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236040u;
    // 0x236044: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x236040u, 0x236048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236048u;
label_236048:
    // 0x236048: 0x92040007  lbu         $a0, 0x7($s0)
    ctx->pc = 0x236048u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
label_23604c:
    // 0x23604c: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x23604cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_236050:
    // 0x236050: 0x92050006  lbu         $a1, 0x6($s0)
    ctx->pc = 0x236050u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
label_236054:
    // 0x236054: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x236054u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_236058:
    // 0x236058: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x236058u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
label_23605c:
    // 0x23605c: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x23605cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
label_236060:
    // 0x236060: 0xa2020000  sb          $v0, 0x0($s0)
    ctx->pc = 0x236060u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 2));
label_236064:
    // 0x236064: 0xc08b60c  jal         func_22D830
label_236068:
    if (ctx->pc == 0x236068u) {
        ctx->pc = 0x236068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236064u;
        // 0x236068: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23606Cu;
        goto label_23606c;
    }
    ctx->pc = 0x236064u;
    SET_GPR_U32(ctx, 31, 0x23606Cu);
    ctx->pc = 0x236068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236064u;
    // 0x236068: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x236064u, 0x23606Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23606Cu;
label_23606c:
    // 0x23606c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23606cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236070:
    // 0x236070: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
label_236074:
    if (ctx->pc == 0x236074u) {
        ctx->pc = 0x236074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236070u;
        // 0x236074: 0x24040806  addiu       $a0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236078u;
        goto label_236078;
    }
    ctx->pc = 0x236070u;
    {
        const bool branch_taken_0x236070 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x236074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236070u;
        // 0x236074: 0x24040806  addiu       $a0, $zero, 0x806 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236070) {
            ctx->pc = 0x23608Cu;
            goto label_23608c;
        }
    }
    ctx->pc = 0x236078u;
label_236078:
    // 0x236078: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x236078u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
label_23607c:
    // 0x23607c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_236080:
    if (ctx->pc == 0x236080u) {
        ctx->pc = 0x236080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23607Cu;
        // 0x236080: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236084u;
        goto label_236084;
    }
    ctx->pc = 0x23607Cu;
    {
        const bool branch_taken_0x23607c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23607Cu;
        // 0x236080: 0x28620005  slti        $v0, $v1, 0x5 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)5) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23607c) {
            ctx->pc = 0x23608Cu;
            goto label_23608c;
        }
    }
    ctx->pc = 0x236084u;
label_236084:
    // 0x236084: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_236088:
    if (ctx->pc == 0x236088u) {
        ctx->pc = 0x236088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236084u;
        // 0x236088: 0x34048035  ori         $a0, $zero, 0x8035 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32821);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23608Cu;
        goto label_23608c;
    }
    ctx->pc = 0x236084u;
    {
        const bool branch_taken_0x236084 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236084) {
            ctx->pc = 0x236088u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236084u;
            // 0x236088: 0x34048035  ori         $a0, $zero, 0x8035 (Delay Slot)
            SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32821);
            ctx->in_delay_slot = false;
            ctx->pc = 0x23608Cu;
            goto label_23608c;
        }
    }
    ctx->pc = 0x23608Cu;
label_23608c:
    // 0x23608c: 0xc08a262  jal         func_228988
label_236090:
    if (ctx->pc == 0x236090u) {
        ctx->pc = 0x236094u;
        goto label_236094;
    }
    ctx->pc = 0x23608Cu;
    SET_GPR_U32(ctx, 31, 0x236094u);
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x23608Cu, 0x236094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236094u;
label_236094:
    // 0x236094: 0x1000001b  b           . + 4 + (0x1B << 2)
label_236098:
    if (ctx->pc == 0x236098u) {
        ctx->pc = 0x236098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236094u;
        // 0x236098: 0xa7a20020  sh          $v0, 0x20($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23609Cu;
        goto label_23609c;
    }
    ctx->pc = 0x236094u;
    {
        const bool branch_taken_0x236094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236094u;
        // 0x236098: 0xa7a20020  sh          $v0, 0x20($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236094) {
            ctx->pc = 0x236104u;
            goto label_236104;
        }
    }
    ctx->pc = 0x23609Cu;
label_23609c:
    // 0x23609c: 0x241e0001  addiu       $fp, $zero, 0x1
    ctx->pc = 0x23609cu;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2360a0:
    // 0x2360a0: 0x26b00002  addiu       $s0, $s5, 0x2
    ctx->pc = 0x2360a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_2360a4:
    // 0x2360a4: 0x26a40008  addiu       $a0, $s5, 0x8
    ctx->pc = 0x2360a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
label_2360a8:
    // 0x2360a8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2360a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2360ac:
    // 0x2360ac: 0xc08b4f8  jal         func_22D3E0
label_2360b0:
    if (ctx->pc == 0x2360B0u) {
        ctx->pc = 0x2360B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360ACu;
        // 0x2360b0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360B4u;
        goto label_2360b4;
    }
    ctx->pc = 0x2360ACu;
    SET_GPR_U32(ctx, 31, 0x2360B4u);
    ctx->pc = 0x2360B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360ACu;
    // 0x2360b0: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2360ACu, 0x2360B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360B4u;
label_2360b4:
    // 0x2360b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2360b8:
    if (ctx->pc == 0x2360B8u) {
        ctx->pc = 0x2360B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360B4u;
        // 0x2360b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360BCu;
        goto label_2360bc;
    }
    ctx->pc = 0x2360B4u;
    {
        const bool branch_taken_0x2360b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360B4u;
        // 0x2360b8: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360b4) {
            ctx->pc = 0x2360C4u;
            goto label_2360c4;
        }
    }
    ctx->pc = 0x2360BCu;
label_2360bc:
    // 0x2360bc: 0x26b00002  addiu       $s0, $s5, 0x2
    ctx->pc = 0x2360bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 21), 2));
label_2360c0:
    // 0x2360c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x2360c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2360c4:
    // 0x2360c4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2360c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2360c8:
    // 0x2360c8: 0xc08b4f8  jal         func_22D3E0
label_2360cc:
    if (ctx->pc == 0x2360CCu) {
        ctx->pc = 0x2360CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360C8u;
        // 0x2360cc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360D0u;
        goto label_2360d0;
    }
    ctx->pc = 0x2360C8u;
    SET_GPR_U32(ctx, 31, 0x2360D0u);
    ctx->pc = 0x2360CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360C8u;
    // 0x2360cc: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2360C8u, 0x2360D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360D0u;
label_2360d0:
    // 0x2360d0: 0x9202000d  lbu         $v0, 0xD($s0)
    ctx->pc = 0x2360d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
label_2360d4:
    // 0x2360d4: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x2360d4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_2360d8:
    // 0x2360d8: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x2360d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
label_2360dc:
    // 0x2360dc: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2360dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2360e0:
    // 0x2360e0: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x2360e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_2360e4:
    // 0x2360e4: 0x10000007  b           . + 4 + (0x7 << 2)
label_2360e8:
    if (ctx->pc == 0x2360E8u) {
        ctx->pc = 0x2360E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360E4u;
        // 0x2360e8: 0xa7a20020  sh          $v0, 0x20($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360ECu;
        goto label_2360ec;
    }
    ctx->pc = 0x2360E4u;
    {
        const bool branch_taken_0x2360e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2360E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360E4u;
        // 0x2360e8: 0xa7a20020  sh          $v0, 0x20($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2360e4) {
            ctx->pc = 0x236104u;
            goto label_236104;
        }
    }
    ctx->pc = 0x2360ECu;
label_2360ec:
    // 0x2360ec: 0x24a54b48  addiu       $a1, $a1, 0x4B48
    ctx->pc = 0x2360ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19272));
label_2360f0:
    // 0x2360f0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2360f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2360f4:
    // 0x2360f4: 0xc08b5ac  jal         func_22D6B0
label_2360f8:
    if (ctx->pc == 0x2360F8u) {
        ctx->pc = 0x2360F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2360F4u;
        // 0x2360f8: 0x2410006a  addiu       $s0, $zero, 0x6A (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2360FCu;
        goto label_2360fc;
    }
    ctx->pc = 0x2360F4u;
    SET_GPR_U32(ctx, 31, 0x2360FCu);
    ctx->pc = 0x2360F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2360F4u;
    // 0x2360f8: 0x2410006a  addiu       $s0, $zero, 0x6A (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 106));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2360F4u, 0x2360FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2360FCu;
label_2360fc:
    // 0x2360fc: 0x10000076  b           . + 4 + (0x76 << 2)
label_236100:
    if (ctx->pc == 0x236100u) {
        ctx->pc = 0x236104u;
        goto label_236104;
    }
    ctx->pc = 0x2360FCu;
    {
        const bool branch_taken_0x2360fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2360fc) {
            ctx->pc = 0x2362D8u;
            goto label_2362d8;
        }
    }
    ctx->pc = 0x236104u;
label_236104:
    // 0x236104: 0x12e00005  beqz        $s7, . + 4 + (0x5 << 2)
label_236108:
    if (ctx->pc == 0x236108u) {
        ctx->pc = 0x236108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236104u;
        // 0x236108: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23610Cu;
        goto label_23610c;
    }
    ctx->pc = 0x236104u;
    {
        const bool branch_taken_0x236104 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x236108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236104u;
        // 0x236108: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236104) {
            ctx->pc = 0x23611Cu;
            goto label_23611c;
        }
    }
    ctx->pc = 0x23610Cu;
label_23610c:
    // 0x23610c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x23610cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_236110:
    // 0x236110: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x236110u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236114:
    // 0x236114: 0xc08db58  jal         func_236D60
label_236118:
    if (ctx->pc == 0x236118u) {
        ctx->pc = 0x236118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236114u;
        // 0x236118: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23611Cu;
        goto label_23611c;
    }
    ctx->pc = 0x236114u;
    SET_GPR_U32(ctx, 31, 0x23611Cu);
    ctx->pc = 0x236118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236114u;
    // 0x236118: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x236D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x236D60u, 0x236114u, 0x23611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23611Cu;
label_23611c:
    // 0x23611c: 0x97a20020  lhu         $v0, 0x20($sp)
    ctx->pc = 0x23611cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_236120:
    // 0x236120: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_236124:
    if (ctx->pc == 0x236124u) {
        ctx->pc = 0x236124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236120u;
        // 0x236124: 0x96430012  lhu         $v1, 0x12($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236128u;
        goto label_236128;
    }
    ctx->pc = 0x236120u;
    {
        const bool branch_taken_0x236120 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236120) {
            ctx->pc = 0x236124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236120u;
            // 0x236124: 0x96430012  lhu         $v1, 0x12($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236138u;
            goto label_236138;
        }
    }
    ctx->pc = 0x236128u;
label_236128:
    // 0x236128: 0xc08a262  jal         func_228988
label_23612c:
    if (ctx->pc == 0x23612Cu) {
        ctx->pc = 0x23612Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236128u;
        // 0x23612c: 0x96440018  lhu         $a0, 0x18($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236130u;
        goto label_236130;
    }
    ctx->pc = 0x236128u;
    SET_GPR_U32(ctx, 31, 0x236130u);
    ctx->pc = 0x23612Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236128u;
    // 0x23612c: 0x96440018  lhu         $a0, 0x18($s2) (Delay Slot)
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x228988u, 0x236128u, 0x236130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236130u;
label_236130:
    // 0x236130: 0xa7a20020  sh          $v0, 0x20($sp)
    ctx->pc = 0x236130u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 2));
label_236134:
    // 0x236134: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x236134u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
label_236138:
    // 0x236138: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x236138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_23613c:
    // 0x23613c: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
label_236140:
    if (ctx->pc == 0x236140u) {
        ctx->pc = 0x236140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23613Cu;
        // 0x236140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236144u;
        goto label_236144;
    }
    ctx->pc = 0x23613Cu;
    {
        const bool branch_taken_0x23613c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23613Cu;
        // 0x236140: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23613c) {
            ctx->pc = 0x236198u;
            goto label_236198;
        }
    }
    ctx->pc = 0x236144u;
label_236144:
    // 0x236144: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x236144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_236148:
    // 0x236148: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_23614c:
    if (ctx->pc == 0x23614Cu) {
        ctx->pc = 0x23614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236148u;
        // 0x23614c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236150u;
        goto label_236150;
    }
    ctx->pc = 0x236148u;
    {
        const bool branch_taken_0x236148 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236148u;
        // 0x23614c: 0x8e440008  lw          $a0, 0x8($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236148) {
            ctx->pc = 0x23616Cu;
            goto label_23616c;
        }
    }
    ctx->pc = 0x236150u;
label_236150:
    // 0x236150: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x236150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
label_236154:
    // 0x236154: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x236154u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_236158:
    // 0x236158: 0x2c42000e  sltiu       $v0, $v0, 0xE
    ctx->pc = 0x236158u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_23615c:
    // 0x23615c: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
label_236160:
    if (ctx->pc == 0x236160u) {
        ctx->pc = 0x236160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23615Cu;
        // 0x236160: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236164u;
        goto label_236164;
    }
    ctx->pc = 0x23615Cu;
    {
        const bool branch_taken_0x23615c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x23615c) {
            ctx->pc = 0x236160u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23615Cu;
            // 0x236160: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236184u;
            goto label_236184;
        }
    }
    ctx->pc = 0x236164u;
label_236164:
    // 0x236164: 0x1000000c  b           . + 4 + (0xC << 2)
label_236168:
    if (ctx->pc == 0x236168u) {
        ctx->pc = 0x236168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236164u;
        // 0x236168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23616Cu;
        goto label_23616c;
    }
    ctx->pc = 0x236164u;
    {
        const bool branch_taken_0x236164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236164u;
        // 0x236168: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236164) {
            ctx->pc = 0x236198u;
            goto label_236198;
        }
    }
    ctx->pc = 0x23616Cu;
label_23616c:
    // 0x23616c: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x23616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
label_236170:
    // 0x236170: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x236170u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
label_236174:
    // 0x236174: 0x2c42000e  sltiu       $v0, $v0, 0xE
    ctx->pc = 0x236174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
label_236178:
    // 0x236178: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_23617c:
    if (ctx->pc == 0x23617Cu) {
        ctx->pc = 0x23617Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236178u;
        // 0x23617c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236180u;
        goto label_236180;
    }
    ctx->pc = 0x236178u;
    {
        const bool branch_taken_0x236178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236178) {
            ctx->pc = 0x23617Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236178u;
            // 0x23617c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236198u;
            goto label_236198;
        }
    }
    ctx->pc = 0x236180u;
label_236180:
    // 0x236180: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x236180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_236184:
    // 0x236184: 0x2482fff2  addiu       $v0, $a0, -0xE
    ctx->pc = 0x236184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967282));
label_236188:
    // 0x236188: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x236188u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
label_23618c:
    // 0x23618c: 0x2463000e  addiu       $v1, $v1, 0xE
    ctx->pc = 0x23618cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14));
label_236190:
    // 0x236190: 0x10000005  b           . + 4 + (0x5 << 2)
label_236194:
    if (ctx->pc == 0x236194u) {
        ctx->pc = 0x236194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236190u;
        // 0x236194: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236198u;
        goto label_236198;
    }
    ctx->pc = 0x236190u;
    {
        const bool branch_taken_0x236190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236190u;
        // 0x236194: 0xae43000c  sw          $v1, 0xC($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236190) {
            ctx->pc = 0x2361A8u;
            goto label_2361a8;
        }
    }
    ctx->pc = 0x236198u;
label_236198:
    // 0x236198: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x236198u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_23619c:
    // 0x23619c: 0xc08aa1c  jal         func_22A870
label_2361a0:
    if (ctx->pc == 0x2361A0u) {
        ctx->pc = 0x2361A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23619Cu;
        // 0x2361a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361A4u;
        goto label_2361a4;
    }
    ctx->pc = 0x23619Cu;
    SET_GPR_U32(ctx, 31, 0x2361A4u);
    ctx->pc = 0x2361A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23619Cu;
    // 0x2361a0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A870u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A870u, 0x23619Cu, 0x2361A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361A4u;
label_2361a4:
    // 0x2361a4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2361a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2361a8:
    // 0x2361a8: 0x1280004b  beqz        $s4, . + 4 + (0x4B << 2)
label_2361ac:
    if (ctx->pc == 0x2361ACu) {
        ctx->pc = 0x2361ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361A8u;
        // 0x2361ac: 0x24100069  addiu       $s0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361B0u;
        goto label_2361b0;
    }
    ctx->pc = 0x2361A8u;
    {
        const bool branch_taken_0x2361a8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361A8u;
        // 0x2361ac: 0x24100069  addiu       $s0, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361a8) {
            ctx->pc = 0x2362D8u;
            goto label_2362d8;
        }
    }
    ctx->pc = 0x2361B0u;
label_2361b0:
    // 0x2361b0: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x2361b0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_2361b4:
    // 0x2361b4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2361b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2361b8:
    // 0x2361b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2361bc:
    if (ctx->pc == 0x2361BCu) {
        ctx->pc = 0x2361BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361B8u;
        // 0x2361bc: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361C0u;
        goto label_2361c0;
    }
    ctx->pc = 0x2361B8u;
    {
        const bool branch_taken_0x2361b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2361b8) {
            ctx->pc = 0x2361BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2361B8u;
            // 0x2361bc: 0x8e900008  lw          $s0, 0x8($s4) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2361D0u;
            goto label_2361d0;
        }
    }
    ctx->pc = 0x2361C0u;
label_2361c0:
    // 0x2361c0: 0x8e820018  lw          $v0, 0x18($s4)
    ctx->pc = 0x2361c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
label_2361c4:
    // 0x2361c4: 0x2442000e  addiu       $v0, $v0, 0xE
    ctx->pc = 0x2361c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 14));
label_2361c8:
    // 0x2361c8: 0xae820018  sw          $v0, 0x18($s4)
    ctx->pc = 0x2361c8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
label_2361cc:
    // 0x2361cc: 0x8e900008  lw          $s0, 0x8($s4)
    ctx->pc = 0x2361ccu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
label_2361d0:
    // 0x2361d0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x2361d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_2361d4:
    // 0x2361d4: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2361d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2361d8:
    // 0x2361d8: 0xc08b4f8  jal         func_22D3E0
label_2361dc:
    if (ctx->pc == 0x2361DCu) {
        ctx->pc = 0x2361DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361D8u;
        // 0x2361dc: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361E0u;
        goto label_2361e0;
    }
    ctx->pc = 0x2361D8u;
    SET_GPR_U32(ctx, 31, 0x2361E0u);
    ctx->pc = 0x2361DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361D8u;
    // 0x2361dc: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2361D8u, 0x2361E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361E0u;
label_2361e0:
    // 0x2361e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x2361e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_2361e4:
    // 0x2361e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2361e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2361e8:
    // 0x2361e8: 0xc08b4f8  jal         func_22D3E0
label_2361ec:
    if (ctx->pc == 0x2361ECu) {
        ctx->pc = 0x2361ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361E8u;
        // 0x2361ec: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361F0u;
        goto label_2361f0;
    }
    ctx->pc = 0x2361E8u;
    SET_GPR_U32(ctx, 31, 0x2361F0u);
    ctx->pc = 0x2361ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361E8u;
    // 0x2361ec: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2361E8u, 0x2361F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2361F0u;
label_2361f0:
    // 0x2361f0: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_2361f4:
    if (ctx->pc == 0x2361F4u) {
        ctx->pc = 0x2361F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361F0u;
        // 0x2361f4: 0x26050006  addiu       $a1, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2361F8u;
        goto label_2361f8;
    }
    ctx->pc = 0x2361F0u;
    {
        const bool branch_taken_0x2361f0 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2361F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361F0u;
        // 0x2361f4: 0x26050006  addiu       $a1, $s0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2361f0) {
            ctx->pc = 0x23620Cu;
            goto label_23620c;
        }
    }
    ctx->pc = 0x2361F8u;
label_2361f8:
    // 0x2361f8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2361f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2361fc:
    // 0x2361fc: 0xc08b4f8  jal         func_22D3E0
label_236200:
    if (ctx->pc == 0x236200u) {
        ctx->pc = 0x236200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2361FCu;
        // 0x236200: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236204u;
        goto label_236204;
    }
    ctx->pc = 0x2361FCu;
    SET_GPR_U32(ctx, 31, 0x236204u);
    ctx->pc = 0x236200u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2361FCu;
    // 0x236200: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x2361FCu, 0x236204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236204u;
label_236204:
    // 0x236204: 0x10000007  b           . + 4 + (0x7 << 2)
label_236208:
    if (ctx->pc == 0x236208u) {
        ctx->pc = 0x23620Cu;
        goto label_23620c;
    }
    ctx->pc = 0x236204u;
    {
        const bool branch_taken_0x236204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236204) {
            ctx->pc = 0x236224u;
            goto label_236224;
        }
    }
    ctx->pc = 0x23620Cu;
label_23620c:
    // 0x23620c: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x23620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
label_236210:
    // 0x236210: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x236210u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_236214:
    // 0x236214: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x236214u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_236218:
    // 0x236218: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x236218u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_23621c:
    // 0x23621c: 0xc08b4f8  jal         func_22D3E0
label_236220:
    if (ctx->pc == 0x236220u) {
        ctx->pc = 0x236220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23621Cu;
        // 0x236220: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236224u;
        goto label_236224;
    }
    ctx->pc = 0x23621Cu;
    SET_GPR_U32(ctx, 31, 0x236224u);
    ctx->pc = 0x236220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23621Cu;
    // 0x236220: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D3E0u, 0x23621Cu, 0x236224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236224u;
label_236224:
    // 0x236224: 0xc08c682  jal         func_231A08
label_236228:
    if (ctx->pc == 0x236228u) {
        ctx->pc = 0x23622Cu;
        goto label_23622c;
    }
    ctx->pc = 0x236224u;
    SET_GPR_U32(ctx, 31, 0x23622Cu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x236224u, 0x23622Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23622Cu;
label_23622c:
    // 0x23622c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x23622cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236230:
    // 0x236230: 0x8e6300e8  lw          $v1, 0xE8($s3)
    ctx->pc = 0x236230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 232)));
label_236234:
    // 0x236234: 0x8e6200e4  lw          $v0, 0xE4($s3)
    ctx->pc = 0x236234u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
label_236238:
    // 0x236238: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x236238u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_23623c:
    // 0x23623c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_236240:
    if (ctx->pc == 0x236240u) {
        ctx->pc = 0x236240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23623Cu;
        // 0x236240: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236244u;
        goto label_236244;
    }
    ctx->pc = 0x23623Cu;
    {
        const bool branch_taken_0x23623c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23623c) {
            ctx->pc = 0x236240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23623Cu;
            // 0x236240: 0x8e820018  lw          $v0, 0x18($s4) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236264u;
            goto label_236264;
        }
    }
    ctx->pc = 0x236244u;
label_236244:
    // 0x236244: 0x8e6200ec  lw          $v0, 0xEC($s3)
    ctx->pc = 0x236244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 236)));
label_236248:
    // 0x236248: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x236248u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_23624c:
    // 0x23624c: 0x24100069  addiu       $s0, $zero, 0x69
    ctx->pc = 0x23624cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
label_236250:
    // 0x236250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_236254:
    // 0x236254: 0xc08c698  jal         func_231A60
label_236258:
    if (ctx->pc == 0x236258u) {
        ctx->pc = 0x236258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236254u;
        // 0x236258: 0xae6200ec  sw          $v0, 0xEC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23625Cu;
        goto label_23625c;
    }
    ctx->pc = 0x236254u;
    SET_GPR_U32(ctx, 31, 0x23625Cu);
    ctx->pc = 0x236258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236254u;
    // 0x236258: 0xae6200ec  sw          $v0, 0xEC($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 236), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x236254u, 0x23625Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23625Cu;
label_23625c:
    // 0x23625c: 0x1000001e  b           . + 4 + (0x1E << 2)
label_236260:
    if (ctx->pc == 0x236260u) {
        ctx->pc = 0x236264u;
        goto label_236264;
    }
    ctx->pc = 0x23625Cu;
    {
        const bool branch_taken_0x23625c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x23625c) {
            ctx->pc = 0x2362D8u;
            goto label_2362d8;
        }
    }
    ctx->pc = 0x236264u;
label_236264:
    // 0x236264: 0xde630088  ld          $v1, 0x88($s3)
    ctx->pc = 0x236264u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 19), 136)));
label_236268:
    // 0x236268: 0x62182d  daddu       $v1, $v1, $v0
    ctx->pc = 0x236268u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 2));
label_23626c:
    // 0x23626c: 0xfe630088  sd          $v1, 0x88($s3)
    ctx->pc = 0x23626cu;
    WRITE64(ADD32(GPR_U32(ctx, 19), 136), GPR_U64(ctx, 3));
label_236270:
    // 0x236270: 0x96820012  lhu         $v0, 0x12($s4)
    ctx->pc = 0x236270u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 18)));
label_236274:
    // 0x236274: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x236274u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
label_236278:
    // 0x236278: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_23627c:
    if (ctx->pc == 0x23627Cu) {
        ctx->pc = 0x23627Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236278u;
        // 0x23627c: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236280u;
        goto label_236280;
    }
    ctx->pc = 0x236278u;
    {
        const bool branch_taken_0x236278 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x236278) {
            ctx->pc = 0x23627Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236278u;
            // 0x23627c: 0xae800004  sw          $zero, 0x4($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236290u;
            goto label_236290;
        }
    }
    ctx->pc = 0x236280u;
label_236280:
    // 0x236280: 0xde620098  ld          $v0, 0x98($s3)
    ctx->pc = 0x236280u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 19), 152)));
label_236284:
    // 0x236284: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x236284u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_236288:
    // 0x236288: 0xfe620098  sd          $v0, 0x98($s3)
    ctx->pc = 0x236288u;
    WRITE64(ADD32(GPR_U32(ctx, 19), 152), GPR_U64(ctx, 2));
label_23628c:
    // 0x23628c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x23628cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
label_236290:
    // 0x236290: 0x8e6200e0  lw          $v0, 0xE0($s3)
    ctx->pc = 0x236290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 224)));
label_236294:
    // 0x236294: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_236298:
    if (ctx->pc == 0x236298u) {
        ctx->pc = 0x236298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236294u;
        // 0x236298: 0xac540004  sw          $s4, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23629Cu;
        goto label_23629c;
    }
    ctx->pc = 0x236294u;
    {
        const bool branch_taken_0x236294 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x236294) {
            ctx->pc = 0x236298u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236294u;
            // 0x236298: 0xac540004  sw          $s4, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 20));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2362A0u;
            goto label_2362a0;
        }
    }
    ctx->pc = 0x23629Cu;
label_23629c:
    // 0x23629c: 0xae7400dc  sw          $s4, 0xDC($s3)
    ctx->pc = 0x23629cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 220), GPR_U32(ctx, 20));
label_2362a0:
    // 0x2362a0: 0x8e6200e4  lw          $v0, 0xE4($s3)
    ctx->pc = 0x2362a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 228)));
label_2362a4:
    // 0x2362a4: 0x96630030  lhu         $v1, 0x30($s3)
    ctx->pc = 0x2362a4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 48)));
label_2362a8:
    // 0x2362a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2362a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2362ac:
    // 0x2362ac: 0xae7400e0  sw          $s4, 0xE0($s3)
    ctx->pc = 0x2362acu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 224), GPR_U32(ctx, 20));
label_2362b0:
    // 0x2362b0: 0x30630400  andi        $v1, $v1, 0x400
    ctx->pc = 0x2362b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1024);
label_2362b4:
    // 0x2362b4: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_2362b8:
    if (ctx->pc == 0x2362B8u) {
        ctx->pc = 0x2362B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362B4u;
        // 0x2362b8: 0xae6200e4  sw          $v0, 0xE4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362BCu;
        goto label_2362bc;
    }
    ctx->pc = 0x2362B4u;
    {
        const bool branch_taken_0x2362b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2362B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362B4u;
        // 0x2362b8: 0xae6200e4  sw          $v0, 0xE4($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 228), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362b4) {
            ctx->pc = 0x2362C8u;
            goto label_2362c8;
        }
    }
    ctx->pc = 0x2362BCu;
label_2362bc:
    // 0x2362bc: 0x8e6200c8  lw          $v0, 0xC8($s3)
    ctx->pc = 0x2362bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 200)));
label_2362c0:
    // 0x2362c0: 0x40f809  jalr        $v0
label_2362c4:
    if (ctx->pc == 0x2362C4u) {
        ctx->pc = 0x2362C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362C0u;
        // 0x2362c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362C8u;
        goto label_2362c8;
    }
    ctx->pc = 0x2362C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2362C8u);
        ctx->pc = 0x2362C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362C0u;
        // 0x2362c4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2362C0u, 0x2362C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2362C8u;
label_2362c8:
    // 0x2362c8: 0xc08c698  jal         func_231A60
label_2362cc:
    if (ctx->pc == 0x2362CCu) {
        ctx->pc = 0x2362CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362C8u;
        // 0x2362cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362D0u;
        goto label_2362d0;
    }
    ctx->pc = 0x2362C8u;
    SET_GPR_U32(ctx, 31, 0x2362D0u);
    ctx->pc = 0x2362CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2362C8u;
    // 0x2362cc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2362C8u, 0x2362D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2362D0u;
label_2362d0:
    // 0x2362d0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2362d4:
    if (ctx->pc == 0x2362D4u) {
        ctx->pc = 0x2362D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362D0u;
        // 0x2362d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362D8u;
        goto label_2362d8;
    }
    ctx->pc = 0x2362D0u;
    {
        const bool branch_taken_0x2362d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2362D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362D0u;
        // 0x2362d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362d0) {
            ctx->pc = 0x2362ECu;
            goto label_2362ec;
        }
    }
    ctx->pc = 0x2362D8u;
label_2362d8:
    // 0x2362d8: 0x12800004  beqz        $s4, . + 4 + (0x4 << 2)
label_2362dc:
    if (ctx->pc == 0x2362DCu) {
        ctx->pc = 0x2362DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362D8u;
        // 0x2362dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362E0u;
        goto label_2362e0;
    }
    ctx->pc = 0x2362D8u;
    {
        const bool branch_taken_0x2362d8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x2362DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362D8u;
        // 0x2362dc: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2362d8) {
            ctx->pc = 0x2362ECu;
            goto label_2362ec;
        }
    }
    ctx->pc = 0x2362E0u;
label_2362e0:
    // 0x2362e0: 0xc08a9d6  jal         func_22A758
label_2362e4:
    if (ctx->pc == 0x2362E4u) {
        ctx->pc = 0x2362E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2362E0u;
        // 0x2362e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2362E8u;
        goto label_2362e8;
    }
    ctx->pc = 0x2362E0u;
    SET_GPR_U32(ctx, 31, 0x2362E8u);
    ctx->pc = 0x2362E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2362E0u;
    // 0x2362e4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2362E0u, 0x2362E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2362E8u;
label_2362e8:
    // 0x2362e8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2362e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2362ec:
    // 0x2362ec: 0xdfbf00c0  ld          $ra, 0xC0($sp)
    ctx->pc = 0x2362ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2362f0:
    // 0x2362f0: 0xdfbe00b0  ld          $fp, 0xB0($sp)
    ctx->pc = 0x2362f0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2362f4:
    // 0x2362f4: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x2362f4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2362f8:
    // 0x2362f8: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2362f8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2362fc:
    // 0x2362fc: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2362fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_236300:
    // 0x236300: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x236300u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_236304:
    // 0x236304: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x236304u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_236308:
    // 0x236308: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x236308u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_23630c:
    // 0x23630c: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x23630cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_236310:
    // 0x236310: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x236310u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236314:
    // 0x236314: 0x3e00008  jr          $ra
label_236318:
    if (ctx->pc == 0x236318u) {
        ctx->pc = 0x236318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236314u;
        // 0x236318: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23631Cu;
        goto label_23631c;
    }
    ctx->pc = 0x236314u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x236318u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236314u;
        // 0x236318: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x236314u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23631Cu;
label_23631c:
    // 0x23631c: 0x0  nop
    ctx->pc = 0x23631cu;
    // NOP
label_236320:
    // 0x236320: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x236320u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_236324:
    // 0x236324: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x236324u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_236328:
    // 0x236328: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x236328u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_23632c:
    // 0x23632c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x23632cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_236330:
    // 0x236330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x236330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_236334:
    // 0x236334: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x236334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_236338:
    // 0x236338: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x236338u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_23633c:
    // 0x23633c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x23633cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_236340:
    // 0x236340: 0x96140030  lhu         $s4, 0x30($s0)
    ctx->pc = 0x236340u;
    SET_GPR_U32(ctx, 20, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 48)));
label_236344:
    // 0x236344: 0x32820001  andi        $v0, $s4, 0x1
    ctx->pc = 0x236344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)1);
label_236348:
    // 0x236348: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_23634c:
    if (ctx->pc == 0x23634Cu) {
        ctx->pc = 0x23634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236348u;
        // 0x23634c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236350u;
        goto label_236350;
    }
    ctx->pc = 0x236348u;
    {
        const bool branch_taken_0x236348 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x23634Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236348u;
        // 0x23634c: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236348) {
            ctx->pc = 0x236374u;
            goto label_236374;
        }
    }
    ctx->pc = 0x236350u;
label_236350:
    // 0x236350: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236350u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236354:
    // 0x236354: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x236354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_236358:
    // 0x236358: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x236358u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_23635c:
    // 0x23635c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x23635cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236360:
    // 0x236360: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236360u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236364:
    // 0x236364: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x236364u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236368:
    // 0x236368: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236368u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_23636c:
    // 0x23636c: 0x808a9d6  j           func_22A758
label_236370:
    if (ctx->pc == 0x236370u) {
        ctx->pc = 0x236370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23636Cu;
        // 0x236370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236374u;
        goto label_236374;
    }
    ctx->pc = 0x23636Cu;
    ctx->pc = 0x236370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23636Cu;
    // 0x236370: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x236374u;
label_236374:
    // 0x236374: 0x8e330008  lw          $s3, 0x8($s1)
    ctx->pc = 0x236374u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_236378:
    // 0x236378: 0x9264000d  lbu         $a0, 0xD($s3)
    ctx->pc = 0x236378u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
label_23637c:
    // 0x23637c: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x23637cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
label_236380:
    // 0x236380: 0x42238  dsll        $a0, $a0, 8
    ctx->pc = 0x236380u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 8);
label_236384:
    // 0x236384: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x236384u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_236388:
    // 0x236388: 0xc08b60c  jal         func_22D830
label_23638c:
    if (ctx->pc == 0x23638Cu) {
        ctx->pc = 0x23638Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236388u;
        // 0x23638c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x236390u;
        goto label_236390;
    }
    ctx->pc = 0x236388u;
    SET_GPR_U32(ctx, 31, 0x236390u);
    ctx->pc = 0x23638Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236388u;
    // 0x23638c: 0x3084ffff  andi        $a0, $a0, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D830u, 0x236388u, 0x236390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236390u;
label_236390:
    // 0x236390: 0xde030040  ld          $v1, 0x40($s0)
    ctx->pc = 0x236390u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 64)));
label_236394:
    // 0x236394: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x236394u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236398:
    // 0x236398: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x236398u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_23639c:
    // 0x23639c: 0x34058100  ori         $a1, $zero, 0x8100
    ctx->pc = 0x23639cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)33024);
label_2363a0:
    // 0x2363a0: 0x64640012  daddiu      $a0, $v1, 0x12
    ctx->pc = 0x2363a0u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)18);
label_2363a4:
    // 0x2363a4: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x2363a4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2363a8:
    // 0x2363a8: 0x6463000e  daddiu      $v1, $v1, 0xE
    ctx->pc = 0x2363a8u;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)14);
label_2363ac:
    // 0x2363ac: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2363acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_2363b0:
    // 0x2363b0: 0x16450007  bne         $s2, $a1, . + 4 + (0x7 << 2)
label_2363b4:
    if (ctx->pc == 0x2363B4u) {
        ctx->pc = 0x2363B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363B0u;
        // 0x2363b4: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363B8u;
        goto label_2363b8;
    }
    ctx->pc = 0x2363B0u;
    {
        const bool branch_taken_0x2363b0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 5));
        ctx->pc = 0x2363B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363B0u;
        // 0x2363b4: 0x82180b  movn        $v1, $a0, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363b0) {
            ctx->pc = 0x2363D0u;
            goto label_2363d0;
        }
    }
    ctx->pc = 0x2363B8u;
label_2363b8:
    // 0x2363b8: 0x64620004  daddiu      $v0, $v1, 0x4
    ctx->pc = 0x2363b8u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 3) + (int64_t)(int32_t)4);
label_2363bc:
    // 0x2363bc: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x2363bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2363c0:
    // 0x2363c0: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
label_2363c4:
    if (ctx->pc == 0x2363C4u) {
        ctx->pc = 0x2363C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363C0u;
        // 0x2363c4: 0x8e270018  lw          $a3, 0x18($s1) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363C8u;
        goto label_2363c8;
    }
    ctx->pc = 0x2363C0u;
    {
        const bool branch_taken_0x2363c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2363c0) {
            ctx->pc = 0x2363C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2363C0u;
            // 0x2363c4: 0x8e270018  lw          $a3, 0x18($s1) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2363E0u;
            goto label_2363e0;
        }
    }
    ctx->pc = 0x2363C8u;
label_2363c8:
    // 0x2363c8: 0x10000013  b           . + 4 + (0x13 << 2)
label_2363cc:
    if (ctx->pc == 0x2363CCu) {
        ctx->pc = 0x2363CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363C8u;
        // 0x2363cc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363D0u;
        goto label_2363d0;
    }
    ctx->pc = 0x2363C8u;
    {
        const bool branch_taken_0x2363c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2363CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363C8u;
        // 0x2363cc: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363c8) {
            ctx->pc = 0x236418u;
            goto label_236418;
        }
    }
    ctx->pc = 0x2363D0u;
label_2363d0:
    // 0x2363d0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x2363d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_2363d4:
    // 0x2363d4: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2363d8:
    if (ctx->pc == 0x2363D8u) {
        ctx->pc = 0x2363D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363D4u;
        // 0x2363d8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363DCu;
        goto label_2363dc;
    }
    ctx->pc = 0x2363D4u;
    {
        const bool branch_taken_0x2363d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2363D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363D4u;
        // 0x2363d8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2363d4) {
            ctx->pc = 0x236418u;
            goto label_236418;
        }
    }
    ctx->pc = 0x2363DCu;
label_2363dc:
    // 0x2363dc: 0x8e270018  lw          $a3, 0x18($s1)
    ctx->pc = 0x2363dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_2363e0:
    // 0x2363e0: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2363e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2363e4:
    // 0x2363e4: 0x26060014  addiu       $a2, $s0, 0x14
    ctx->pc = 0x2363e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_2363e8:
    // 0x2363e8: 0x24a54b60  addiu       $a1, $a1, 0x4B60
    ctx->pc = 0x2363e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19296));
label_2363ec:
    // 0x2363ec: 0xc08b5ac  jal         func_22D6B0
label_2363f0:
    if (ctx->pc == 0x2363F0u) {
        ctx->pc = 0x2363F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2363ECu;
        // 0x2363f0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2363F4u;
        goto label_2363f4;
    }
    ctx->pc = 0x2363ECu;
    SET_GPR_U32(ctx, 31, 0x2363F4u);
    ctx->pc = 0x2363F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2363ECu;
    // 0x2363f0: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2363ECu, 0x2363F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2363F4u;
label_2363f4:
    // 0x2363f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2363f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2363f8:
    // 0x2363f8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2363f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2363fc:
    // 0x2363fc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2363fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_236400:
    // 0x236400: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x236400u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236404:
    // 0x236404: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236404u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236408:
    // 0x236408: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x236408u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_23640c:
    // 0x23640c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x23640cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236410:
    // 0x236410: 0x808a9d6  j           func_22A758
label_236414:
    if (ctx->pc == 0x236414u) {
        ctx->pc = 0x236414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236410u;
        // 0x236414: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236418u;
        goto label_236418;
    }
    ctx->pc = 0x236410u;
    ctx->pc = 0x236414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236410u;
    // 0x236414: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x236418u;
label_236418:
    // 0x236418: 0xde040080  ld          $a0, 0x80($s0)
    ctx->pc = 0x236418u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 128)));
label_23641c:
    // 0x23641c: 0xdc4517c0  ld          $a1, 0x17C0($v0)
    ctx->pc = 0x23641cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 6080)));
label_236420:
    // 0x236420: 0x244217c0  addiu       $v0, $v0, 0x17C0
    ctx->pc = 0x236420u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6080));
label_236424:
    // 0x236424: 0xfe0500b0  sd          $a1, 0xB0($s0)
    ctx->pc = 0x236424u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 176), GPR_U64(ctx, 5));
label_236428:
    // 0x236428: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x236428u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_23642c:
    // 0x23642c: 0xfe0300b8  sd          $v1, 0xB8($s0)
    ctx->pc = 0x23642cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 184), GPR_U64(ctx, 3));
label_236430:
    // 0x236430: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x236430u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_236434:
    // 0x236434: 0x82202d  daddu       $a0, $a0, $v0
    ctx->pc = 0x236434u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 2));
label_236438:
    // 0x236438: 0xfe040080  sd          $a0, 0x80($s0)
    ctx->pc = 0x236438u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 128), GPR_U64(ctx, 4));
label_23643c:
    // 0x23643c: 0x92620000  lbu         $v0, 0x0($s3)
    ctx->pc = 0x23643cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 0)));
label_236440:
    // 0x236440: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x236440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_236444:
    // 0x236444: 0x1040000f  beqz        $v0, . + 4 + (0xF << 2)
label_236448:
    if (ctx->pc == 0x236448u) {
        ctx->pc = 0x236448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236444u;
        // 0x236448: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23644Cu;
        goto label_23644c;
    }
    ctx->pc = 0x236444u;
    {
        const bool branch_taken_0x236444 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x236448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236444u;
        // 0x236448: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236444) {
            ctx->pc = 0x236484u;
            goto label_236484;
        }
    }
    ctx->pc = 0x23644Cu;
label_23644c:
    // 0x23644c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x23644cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_236450:
    // 0x236450: 0x2484fd00  addiu       $a0, $a0, -0x300
    ctx->pc = 0x236450u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966528));
label_236454:
    // 0x236454: 0xc048c5e  jal         func_123178
label_236458:
    if (ctx->pc == 0x236458u) {
        ctx->pc = 0x236458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236454u;
        // 0x236458: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23645Cu;
        goto label_23645c;
    }
    ctx->pc = 0x236454u;
    SET_GPR_U32(ctx, 31, 0x23645Cu);
    ctx->pc = 0x236458u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236454u;
    // 0x236458: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x123178u, 0x236454u, 0x23645Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23645Cu;
label_23645c:
    // 0x23645c: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_236460:
    if (ctx->pc == 0x236460u) {
        ctx->pc = 0x236460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23645Cu;
        // 0x236460: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236464u;
        goto label_236464;
    }
    ctx->pc = 0x23645Cu;
    {
        const bool branch_taken_0x23645c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x236460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23645Cu;
        // 0x236460: 0x96220012  lhu         $v0, 0x12($s1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23645c) {
            ctx->pc = 0x23646Cu;
            goto label_23646c;
        }
    }
    ctx->pc = 0x236464u;
label_236464:
    // 0x236464: 0x10000002  b           . + 4 + (0x2 << 2)
label_236468:
    if (ctx->pc == 0x236468u) {
        ctx->pc = 0x236468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236464u;
        // 0x236468: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        ctx->pc = 0x23646Cu;
        goto label_23646c;
    }
    ctx->pc = 0x236464u;
    {
        const bool branch_taken_0x236464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236464u;
        // 0x236468: 0x34420100  ori         $v0, $v0, 0x100 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
        ctx->in_delay_slot = false;
        if (branch_taken_0x236464) {
            ctx->pc = 0x236470u;
            goto label_236470;
        }
    }
    ctx->pc = 0x23646Cu;
label_23646c:
    // 0x23646c: 0x34420200  ori         $v0, $v0, 0x200
    ctx->pc = 0x23646cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)512);
label_236470:
    // 0x236470: 0xa6220012  sh          $v0, 0x12($s1)
    ctx->pc = 0x236470u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
label_236474:
    // 0x236474: 0xde020090  ld          $v0, 0x90($s0)
    ctx->pc = 0x236474u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 144)));
label_236478:
    // 0x236478: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x236478u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
label_23647c:
    // 0x23647c: 0x10000015  b           . + 4 + (0x15 << 2)
label_236480:
    if (ctx->pc == 0x236480u) {
        ctx->pc = 0x236480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23647Cu;
        // 0x236480: 0xfe020090  sd          $v0, 0x90($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236484u;
        goto label_236484;
    }
    ctx->pc = 0x23647Cu;
    {
        const bool branch_taken_0x23647c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23647Cu;
        // 0x236480: 0xfe020090  sd          $v0, 0x90($s0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 16), 144), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23647c) {
            ctx->pc = 0x2364D4u;
            goto label_2364d4;
        }
    }
    ctx->pc = 0x236484u;
label_236484:
    // 0x236484: 0x32820100  andi        $v0, $s4, 0x100
    ctx->pc = 0x236484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) & (uint64_t)(uint16_t)256);
label_236488:
    // 0x236488: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_23648c:
    if (ctx->pc == 0x23648Cu) {
        ctx->pc = 0x23648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236488u;
        // 0x23648c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236490u;
        goto label_236490;
    }
    ctx->pc = 0x236488u;
    {
        const bool branch_taken_0x236488 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236488u;
        // 0x23648c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236488) {
            ctx->pc = 0x2364D4u;
            goto label_2364d4;
        }
    }
    ctx->pc = 0x236490u;
label_236490:
    // 0x236490: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x236490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_236494:
    // 0x236494: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x236494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_236498:
    // 0x236498: 0x90440005  lbu         $a0, 0x5($v0)
    ctx->pc = 0x236498u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
label_23649c:
    // 0x23649c: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x23649cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
label_2364a0:
    // 0x2364a0: 0xc049c22  jal         func_127088
label_2364a4:
    if (ctx->pc == 0x2364A4u) {
        ctx->pc = 0x2364A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A0u;
        // 0x2364a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364A8u;
        goto label_2364a8;
    }
    ctx->pc = 0x2364A0u;
    SET_GPR_U32(ctx, 31, 0x2364A8u);
    ctx->pc = 0x2364A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2364A0u;
    // 0x2364a4: 0x442021  addu        $a0, $v0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127088u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127088u, 0x2364A0u, 0x2364A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2364A8u;
label_2364a8:
    // 0x2364a8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2364ac:
    if (ctx->pc == 0x2364ACu) {
        ctx->pc = 0x2364ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A8u;
        // 0x2364ac: 0x34028864  ori         $v0, $zero, 0x8864 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34916);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364B0u;
        goto label_2364b0;
    }
    ctx->pc = 0x2364A8u;
    {
        const bool branch_taken_0x2364a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2364ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364A8u;
        // 0x2364ac: 0x34028864  ori         $v0, $zero, 0x8864 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34916);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364a8) {
            ctx->pc = 0x2364D8u;
            goto label_2364d8;
        }
    }
    ctx->pc = 0x2364B0u;
label_2364b0:
    // 0x2364b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2364b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2364b4:
    // 0x2364b4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2364b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2364b8:
    // 0x2364b8: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2364b8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2364bc:
    // 0x2364bc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2364bcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2364c0:
    // 0x2364c0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2364c0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2364c4:
    // 0x2364c4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2364c4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2364c8:
    // 0x2364c8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2364c8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2364cc:
    // 0x2364cc: 0x808a9d6  j           func_22A758
label_2364d0:
    if (ctx->pc == 0x2364D0u) {
        ctx->pc = 0x2364D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364CCu;
        // 0x2364d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364D4u;
        goto label_2364d4;
    }
    ctx->pc = 0x2364CCu;
    ctx->pc = 0x2364D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2364CCu;
    // 0x2364d0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x2364D4u;
label_2364d4:
    // 0x2364d4: 0x34028864  ori         $v0, $zero, 0x8864
    ctx->pc = 0x2364d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34916);
label_2364d8:
    // 0x2364d8: 0x52102a  slt         $v0, $v0, $s2
    ctx->pc = 0x2364d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
label_2364dc:
    // 0x2364dc: 0x14400031  bnez        $v0, . + 4 + (0x31 << 2)
label_2364e0:
    if (ctx->pc == 0x2364E0u) {
        ctx->pc = 0x2364E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364DCu;
        // 0x2364e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364E4u;
        goto label_2364e4;
    }
    ctx->pc = 0x2364DCu;
    {
        const bool branch_taken_0x2364dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2364E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364DCu;
        // 0x2364e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364dc) {
            ctx->pc = 0x2365A4u;
            goto label_2365a4;
        }
    }
    ctx->pc = 0x2364E4u;
label_2364e4:
    // 0x2364e4: 0x34038863  ori         $v1, $zero, 0x8863
    ctx->pc = 0x2364e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)34915);
label_2364e8:
    // 0x2364e8: 0x243102a  slt         $v0, $s2, $v1
    ctx->pc = 0x2364e8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_2364ec:
    // 0x2364ec: 0x1440002d  bnez        $v0, . + 4 + (0x2D << 2)
label_2364f0:
    if (ctx->pc == 0x2364F0u) {
        ctx->pc = 0x2364F4u;
        goto label_2364f4;
    }
    ctx->pc = 0x2364ECu;
    {
        const bool branch_taken_0x2364ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2364ec) {
            ctx->pc = 0x2365A4u;
            goto label_2365a4;
        }
    }
    ctx->pc = 0x2364F4u;
label_2364f4:
    // 0x2364f4: 0x16430004  bne         $s2, $v1, . + 4 + (0x4 << 2)
label_2364f8:
    if (ctx->pc == 0x2364F8u) {
        ctx->pc = 0x2364F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364F4u;
        // 0x2364f8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2364FCu;
        goto label_2364fc;
    }
    ctx->pc = 0x2364F4u;
    {
        const bool branch_taken_0x2364f4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x2364F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2364F4u;
        // 0x2364f8: 0x3c02003a  lui         $v0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2364f4) {
            ctx->pc = 0x236508u;
            goto label_236508;
        }
    }
    ctx->pc = 0x2364FCu;
label_2364fc:
    // 0x2364fc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2364fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_236500:
    // 0x236500: 0x10000002  b           . + 4 + (0x2 << 2)
label_236504:
    if (ctx->pc == 0x236504u) {
        ctx->pc = 0x236504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236500u;
        // 0x236504: 0x2450fe30  addiu       $s0, $v0, -0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966832));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236508u;
        goto label_236508;
    }
    ctx->pc = 0x236500u;
    {
        const bool branch_taken_0x236500 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236500u;
        // 0x236504: 0x2450fe30  addiu       $s0, $v0, -0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966832));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236500) {
            ctx->pc = 0x23650Cu;
            goto label_23650c;
        }
    }
    ctx->pc = 0x236508u;
label_236508:
    // 0x236508: 0x2450fe48  addiu       $s0, $v0, -0x1B8
    ctx->pc = 0x236508u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966856));
label_23650c:
    // 0x23650c: 0xc08c682  jal         func_231A08
label_236510:
    if (ctx->pc == 0x236510u) {
        ctx->pc = 0x236514u;
        goto label_236514;
    }
    ctx->pc = 0x23650Cu;
    SET_GPR_U32(ctx, 31, 0x236514u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23650Cu, 0x236514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236514u;
label_236514:
    // 0x236514: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x236514u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236518:
    // 0x236518: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x236518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23651c:
    // 0x23651c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x23651cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_236520:
    // 0x236520: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x236520u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_236524:
    // 0x236524: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_236528:
    if (ctx->pc == 0x236528u) {
        ctx->pc = 0x236528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236524u;
        // 0x236528: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23652Cu;
        goto label_23652c;
    }
    ctx->pc = 0x236524u;
    {
        const bool branch_taken_0x236524 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x236524) {
            ctx->pc = 0x236528u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236524u;
            // 0x236528: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236548u;
            goto label_236548;
        }
    }
    ctx->pc = 0x23652Cu;
label_23652c:
    // 0x23652c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x23652cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_236530:
    // 0x236530: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x236530u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_236534:
    // 0x236534: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_236538:
    // 0x236538: 0xc08a9d6  jal         func_22A758
label_23653c:
    if (ctx->pc == 0x23653Cu) {
        ctx->pc = 0x23653Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236538u;
        // 0x23653c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236540u;
        goto label_236540;
    }
    ctx->pc = 0x236538u;
    SET_GPR_U32(ctx, 31, 0x236540u);
    ctx->pc = 0x23653Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236538u;
    // 0x23653c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x236538u, 0x236540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236540u;
label_236540:
    // 0x236540: 0x10000009  b           . + 4 + (0x9 << 2)
label_236544:
    if (ctx->pc == 0x236544u) {
        ctx->pc = 0x236548u;
        goto label_236548;
    }
    ctx->pc = 0x236540u;
    {
        const bool branch_taken_0x236540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x236540) {
            ctx->pc = 0x236568u;
            goto label_236568;
        }
    }
    ctx->pc = 0x236548u;
label_236548:
    // 0x236548: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x236548u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_23654c:
    // 0x23654c: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_236550:
    if (ctx->pc == 0x236550u) {
        ctx->pc = 0x236550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23654Cu;
        // 0x236550: 0xac510004  sw          $s1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236554u;
        goto label_236554;
    }
    ctx->pc = 0x23654Cu;
    {
        const bool branch_taken_0x23654c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x23654c) {
            ctx->pc = 0x236550u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x23654Cu;
            // 0x236550: 0xac510004  sw          $s1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x236558u;
            goto label_236558;
        }
    }
    ctx->pc = 0x236554u;
label_236554:
    // 0x236554: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x236554u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_236558:
    // 0x236558: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x236558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23655c:
    // 0x23655c: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x23655cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_236560:
    // 0x236560: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x236560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_236564:
    // 0x236564: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x236564u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_236568:
    // 0x236568: 0xc08c698  jal         func_231A60
label_23656c:
    if (ctx->pc == 0x23656Cu) {
        ctx->pc = 0x23656Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236568u;
        // 0x23656c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236570u;
        goto label_236570;
    }
    ctx->pc = 0x236568u;
    SET_GPR_U32(ctx, 31, 0x236570u);
    ctx->pc = 0x23656Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236568u;
    // 0x23656c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x236568u, 0x236570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236570u;
label_236570:
    // 0x236570: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x236570u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_236574:
    // 0x236574: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x236574u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_236578:
    // 0x236578: 0x8c821770  lw          $v0, 0x1770($a0)
    ctx->pc = 0x236578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6000)));
label_23657c:
    // 0x23657c: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x23657cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_236580:
    // 0x236580: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x236580u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_236584:
    // 0x236584: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x236584u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_236588:
    // 0x236588: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x236588u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23658c:
    // 0x23658c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23658cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236590:
    // 0x236590: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x236590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236594:
    // 0x236594: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236594u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236598:
    // 0x236598: 0xac821770  sw          $v0, 0x1770($a0)
    ctx->pc = 0x236598u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 6000), GPR_U32(ctx, 2));
label_23659c:
    // 0x23659c: 0x8097de6  j           func_25F798
label_2365a0:
    if (ctx->pc == 0x2365A0u) {
        ctx->pc = 0x2365A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23659Cu;
        // 0x2365a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365A4u;
        goto label_2365a4;
    }
    ctx->pc = 0x23659Cu;
    ctx->pc = 0x2365A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23659Cu;
    // 0x2365a0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F798u;
    sub_0025F798_0x25f798(rdram, ctx, runtime); return;
    ctx->pc = 0x2365A4u;
label_2365a4:
    // 0x2365a4: 0xc08ac88  jal         func_22B220
label_2365a8:
    if (ctx->pc == 0x2365A8u) {
        ctx->pc = 0x2365A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365A4u;
        // 0x2365a8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365ACu;
        goto label_2365ac;
    }
    ctx->pc = 0x2365A4u;
    SET_GPR_U32(ctx, 31, 0x2365ACu);
    ctx->pc = 0x2365A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365A4u;
    // 0x2365a8: 0x2405000e  addiu       $a1, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x2365A4u, 0x2365ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365ACu;
label_2365ac:
    // 0x2365ac: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x2365acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
label_2365b0:
    // 0x2365b0: 0x30421000  andi        $v0, $v0, 0x1000
    ctx->pc = 0x2365b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4096);
label_2365b4:
    // 0x2365b4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2365b8:
    if (ctx->pc == 0x2365B8u) {
        ctx->pc = 0x2365B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365B4u;
        // 0x2365b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365BCu;
        goto label_2365bc;
    }
    ctx->pc = 0x2365B4u;
    {
        const bool branch_taken_0x2365b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2365B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365B4u;
        // 0x2365b8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365b4) {
            ctx->pc = 0x2365C4u;
            goto label_2365c4;
        }
    }
    ctx->pc = 0x2365BCu;
label_2365bc:
    // 0x2365bc: 0xc08ac88  jal         func_22B220
label_2365c0:
    if (ctx->pc == 0x2365C0u) {
        ctx->pc = 0x2365C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365BCu;
        // 0x2365c0: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365C4u;
        goto label_2365c4;
    }
    ctx->pc = 0x2365BCu;
    SET_GPR_U32(ctx, 31, 0x2365C4u);
    ctx->pc = 0x2365C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2365BCu;
    // 0x2365c0: 0x2405fffc  addiu       $a1, $zero, -0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22B220u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22B220u, 0x2365BCu, 0x2365C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2365C4u;
label_2365c4:
    // 0x2365c4: 0x24020806  addiu       $v0, $zero, 0x806
    ctx->pc = 0x2365c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2054));
label_2365c8:
    // 0x2365c8: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
label_2365cc:
    if (ctx->pc == 0x2365CCu) {
        ctx->pc = 0x2365CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365C8u;
        // 0x2365cc: 0x2a420807  slti        $v0, $s2, 0x807 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2055) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365D0u;
        goto label_2365d0;
    }
    ctx->pc = 0x2365C8u;
    {
        const bool branch_taken_0x2365c8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2365CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365C8u;
        // 0x2365cc: 0x2a420807  slti        $v0, $s2, 0x807 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2055) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365c8) {
            ctx->pc = 0x23661Cu;
            goto label_23661c;
        }
    }
    ctx->pc = 0x2365D0u;
label_2365d0:
    // 0x2365d0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2365d4:
    if (ctx->pc == 0x2365D4u) {
        ctx->pc = 0x2365D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365D0u;
        // 0x2365d4: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365D8u;
        goto label_2365d8;
    }
    ctx->pc = 0x2365D0u;
    {
        const bool branch_taken_0x2365d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2365D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365D0u;
        // 0x2365d4: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365d0) {
            ctx->pc = 0x2365E8u;
            goto label_2365e8;
        }
    }
    ctx->pc = 0x2365D8u;
label_2365d8:
    // 0x2365d8: 0x12420008  beq         $s2, $v0, . + 4 + (0x8 << 2)
label_2365dc:
    if (ctx->pc == 0x2365DCu) {
        ctx->pc = 0x2365DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365D8u;
        // 0x2365dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365E0u;
        goto label_2365e0;
    }
    ctx->pc = 0x2365D8u;
    {
        const bool branch_taken_0x2365d8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2365DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365D8u;
        // 0x2365dc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365d8) {
            ctx->pc = 0x2365FCu;
            goto label_2365fc;
        }
    }
    ctx->pc = 0x2365E0u;
label_2365e0:
    // 0x2365e0: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2365e4:
    if (ctx->pc == 0x2365E4u) {
        ctx->pc = 0x2365E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365E0u;
        // 0x2365e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365E8u;
        goto label_2365e8;
    }
    ctx->pc = 0x2365E0u;
    {
        const bool branch_taken_0x2365e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2365E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365E0u;
        // 0x2365e4: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365e0) {
            ctx->pc = 0x236660u;
            goto label_236660;
        }
    }
    ctx->pc = 0x2365E8u;
label_2365e8:
    // 0x2365e8: 0x34028035  ori         $v0, $zero, 0x8035
    ctx->pc = 0x2365e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32821);
label_2365ec:
    // 0x2365ec: 0x12420014  beq         $s2, $v0, . + 4 + (0x14 << 2)
label_2365f0:
    if (ctx->pc == 0x2365F0u) {
        ctx->pc = 0x2365F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365ECu;
        // 0x2365f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365F4u;
        goto label_2365f4;
    }
    ctx->pc = 0x2365ECu;
    {
        const bool branch_taken_0x2365ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x2365F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365ECu;
        // 0x2365f0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365ec) {
            ctx->pc = 0x236640u;
            goto label_236640;
        }
    }
    ctx->pc = 0x2365F4u;
label_2365f4:
    // 0x2365f4: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2365f8:
    if (ctx->pc == 0x2365F8u) {
        ctx->pc = 0x2365F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365F4u;
        // 0x2365f8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2365FCu;
        goto label_2365fc;
    }
    ctx->pc = 0x2365F4u;
    {
        const bool branch_taken_0x2365f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2365F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2365F4u;
        // 0x2365f8: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2365f4) {
            ctx->pc = 0x236660u;
            goto label_236660;
        }
    }
    ctx->pc = 0x2365FCu;
label_2365fc:
    // 0x2365fc: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x2365fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_236600:
    // 0x236600: 0x8c431770  lw          $v1, 0x1770($v0)
    ctx->pc = 0x236600u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 6000)));
label_236604:
    // 0x236604: 0x34630004  ori         $v1, $v1, 0x4
    ctx->pc = 0x236604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4);
label_236608:
    // 0x236608: 0xc097de6  jal         func_25F798
label_23660c:
    if (ctx->pc == 0x23660Cu) {
        ctx->pc = 0x23660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236608u;
        // 0x23660c: 0xac431770  sw          $v1, 0x1770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 6000), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236610u;
        goto label_236610;
    }
    ctx->pc = 0x236608u;
    SET_GPR_U32(ctx, 31, 0x236610u);
    ctx->pc = 0x23660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236608u;
    // 0x23660c: 0xac431770  sw          $v1, 0x1770($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 6000), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F798u, 0x236608u, 0x236610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236610u;
label_236610:
    // 0x236610: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x236610u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_236614:
    // 0x236614: 0x10000019  b           . + 4 + (0x19 << 2)
label_236618:
    if (ctx->pc == 0x236618u) {
        ctx->pc = 0x236618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236614u;
        // 0x236618: 0x245011a8  addiu       $s0, $v0, 0x11A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23661Cu;
        goto label_23661c;
    }
    ctx->pc = 0x236614u;
    {
        const bool branch_taken_0x236614 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x236618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236614u;
        // 0x236618: 0x245011a8  addiu       $s0, $v0, 0x11A8 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4520));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236614) {
            ctx->pc = 0x23667Cu;
            goto label_23667c;
        }
    }
    ctx->pc = 0x23661Cu;
label_23661c:
    // 0x23661c: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x23661cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_236620:
    // 0x236620: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x236620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_236624:
    // 0x236624: 0x8c821770  lw          $v0, 0x1770($a0)
    ctx->pc = 0x236624u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 6000)));
label_236628:
    // 0x236628: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x236628u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_23662c:
    // 0x23662c: 0xc097de6  jal         func_25F798
label_236630:
    if (ctx->pc == 0x236630u) {
        ctx->pc = 0x236630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23662Cu;
        // 0x236630: 0xac821770  sw          $v0, 0x1770($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 6000), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236634u;
        goto label_236634;
    }
    ctx->pc = 0x23662Cu;
    SET_GPR_U32(ctx, 31, 0x236634u);
    ctx->pc = 0x236630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23662Cu;
    // 0x236630: 0xac821770  sw          $v0, 0x1770($a0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 4), 6000), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x25F798u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F798u, 0x23662Cu, 0x236634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236634u;
label_236634:
    // 0x236634: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x236634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_236638:
    // 0x236638: 0x10000010  b           . + 4 + (0x10 << 2)
label_23663c:
    if (ctx->pc == 0x23663Cu) {
        ctx->pc = 0x23663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236638u;
        // 0x23663c: 0x24500060  addiu       $s0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236640u;
        goto label_236640;
    }
    ctx->pc = 0x236638u;
    {
        const bool branch_taken_0x236638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23663Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236638u;
        // 0x23663c: 0x24500060  addiu       $s0, $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x236638) {
            ctx->pc = 0x23667Cu;
            goto label_23667c;
        }
    }
    ctx->pc = 0x236640u;
label_236640:
    // 0x236640: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x236640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_236644:
    // 0x236644: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x236644u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_236648:
    // 0x236648: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x236648u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_23664c:
    // 0x23664c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x23664cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_236650:
    // 0x236650: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x236650u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236654:
    // 0x236654: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236654u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236658:
    // 0x236658: 0x8092044  j           func_248110
label_23665c:
    if (ctx->pc == 0x23665Cu) {
        ctx->pc = 0x23665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236658u;
        // 0x23665c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x236660u;
        goto label_236660;
    }
    ctx->pc = 0x236658u;
    ctx->pc = 0x23665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236658u;
    // 0x23665c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x248110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x248110u, 0x236658u, 0x0u, PS2Runtime::GuestBranchKind::DirectJump, "J")) {
        return;
    }
    ctx->pc = 0x236660u;
label_236660:
    // 0x236660: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x236660u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_236664:
    // 0x236664: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x236664u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_236668:
    // 0x236668: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x236668u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_23666c:
    // 0x23666c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x23666cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_236670:
    // 0x236670: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x236670u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_236674:
    // 0x236674: 0x808a9d6  j           func_22A758
label_236678:
    if (ctx->pc == 0x236678u) {
        ctx->pc = 0x236678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236674u;
        // 0x236678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23667Cu;
        goto label_23667c;
    }
    ctx->pc = 0x236674u;
    ctx->pc = 0x236678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x236674u;
    // 0x236678: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    sub_0022A758_0x22a758(rdram, ctx, runtime); return;
    ctx->pc = 0x23667Cu;
label_23667c:
    // 0x23667c: 0xc08c682  jal         func_231A08
label_236680:
    if (ctx->pc == 0x236680u) {
        ctx->pc = 0x236684u;
        goto label_236684;
    }
    ctx->pc = 0x23667Cu;
    SET_GPR_U32(ctx, 31, 0x236684u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x23667Cu, 0x236684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x236684u;
label_236684:
    // 0x236684: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x236684u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_236688:
    // 0x236688: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x236688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_23668c:
    // 0x23668c: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x23668cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_236690:
    // 0x236690: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x236690u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_236694:
    // 0x236694: 0x54600008  bnel        $v1, $zero, . + 4 + (0x8 << 2)
label_236698:
    if (ctx->pc == 0x236698u) {
        ctx->pc = 0x236698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x236694u;
        // 0x236698: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x23669Cu;
        goto label_23669c;
    }
    ctx->pc = 0x236694u;
    {
        const bool branch_taken_0x236694 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x236694) {
            ctx->pc = 0x236698u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x236694u;
            // 0x236698: 0xae200004  sw          $zero, 0x4($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2366B8u;
            goto label_2366b8;
        }
    }
    ctx->pc = 0x23669Cu;
label_23669c:
    // 0x23669c: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x23669cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2366a0:
    // 0x2366a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2366a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2366a4:
    // 0x2366a4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2366a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2366a8:
    // 0x2366a8: 0xc08a9d6  jal         func_22A758
label_2366ac:
    if (ctx->pc == 0x2366ACu) {
        ctx->pc = 0x2366ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366A8u;
        // 0x2366ac: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2366B0u;
        goto label_2366b0;
    }
    ctx->pc = 0x2366A8u;
    SET_GPR_U32(ctx, 31, 0x2366B0u);
    ctx->pc = 0x2366ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366A8u;
    // 0x2366ac: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x2366A8u, 0x2366B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2366B0u;
label_2366b0:
    // 0x2366b0: 0x1000000a  b           . + 4 + (0xA << 2)
label_2366b4:
    if (ctx->pc == 0x2366B4u) {
        ctx->pc = 0x2366B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366B0u;
        // 0x2366b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2366B8u;
        goto label_2366b8;
    }
    ctx->pc = 0x2366B0u;
    {
        const bool branch_taken_0x2366b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2366B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366B0u;
        // 0x2366b4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2366b0) {
            ctx->pc = 0x2366DCu;
            goto label_2366dc;
        }
    }
    ctx->pc = 0x2366B8u;
label_2366b8:
    // 0x2366b8: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2366b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2366bc:
    // 0x2366bc: 0x54400002  bnel        $v0, $zero, . + 4 + (0x2 << 2)
label_2366c0:
    if (ctx->pc == 0x2366C0u) {
        ctx->pc = 0x2366C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366BCu;
        // 0x2366c0: 0xac510004  sw          $s1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2366C4u;
        goto label_2366c4;
    }
    ctx->pc = 0x2366BCu;
    {
        const bool branch_taken_0x2366bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2366bc) {
            ctx->pc = 0x2366C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2366BCu;
            // 0x2366c0: 0xac510004  sw          $s1, 0x4($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2366C8u;
            goto label_2366c8;
        }
    }
    ctx->pc = 0x2366C4u;
label_2366c4:
    // 0x2366c4: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2366c4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
label_2366c8:
    // 0x2366c8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2366c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2366cc:
    // 0x2366cc: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2366ccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_2366d0:
    // 0x2366d0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2366d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2366d4:
    // 0x2366d4: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x2366d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_2366d8:
    // 0x2366d8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2366d8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2366dc:
    // 0x2366dc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x2366dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2366e0:
    // 0x2366e0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x2366e0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2366e4:
    // 0x2366e4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2366e4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2366e8:
    // 0x2366e8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2366e8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2366ec:
    // 0x2366ec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2366ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2366f0:
    // 0x2366f0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2366f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2366f4:
    // 0x2366f4: 0x808c698  j           func_231A60
label_2366f8:
    if (ctx->pc == 0x2366F8u) {
        ctx->pc = 0x2366F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2366F4u;
        // 0x2366f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2366FCu;
        goto label_2366fc;
    }
    ctx->pc = 0x2366F4u;
    ctx->pc = 0x2366F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2366F4u;
    // 0x2366f8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    sub_00231A60_0x231a60(rdram, ctx, runtime); return;
    ctx->pc = 0x2366FCu;
label_2366fc:
    // 0x2366fc: 0x0  nop
    ctx->pc = 0x2366fcu;
    // NOP
}
