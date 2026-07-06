#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00241C38
// Address: 0x241c38 - 0x242678
void sub_00241C38_0x241c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00241C38_0x241c38");
#endif

    switch (ctx->pc) {
        case 0x241c38u: goto label_241c38;
        case 0x241c3cu: goto label_241c3c;
        case 0x241c40u: goto label_241c40;
        case 0x241c44u: goto label_241c44;
        case 0x241c48u: goto label_241c48;
        case 0x241c4cu: goto label_241c4c;
        case 0x241c50u: goto label_241c50;
        case 0x241c54u: goto label_241c54;
        case 0x241c58u: goto label_241c58;
        case 0x241c5cu: goto label_241c5c;
        case 0x241c60u: goto label_241c60;
        case 0x241c64u: goto label_241c64;
        case 0x241c68u: goto label_241c68;
        case 0x241c6cu: goto label_241c6c;
        case 0x241c70u: goto label_241c70;
        case 0x241c74u: goto label_241c74;
        case 0x241c78u: goto label_241c78;
        case 0x241c7cu: goto label_241c7c;
        case 0x241c80u: goto label_241c80;
        case 0x241c84u: goto label_241c84;
        case 0x241c88u: goto label_241c88;
        case 0x241c8cu: goto label_241c8c;
        case 0x241c90u: goto label_241c90;
        case 0x241c94u: goto label_241c94;
        case 0x241c98u: goto label_241c98;
        case 0x241c9cu: goto label_241c9c;
        case 0x241ca0u: goto label_241ca0;
        case 0x241ca4u: goto label_241ca4;
        case 0x241ca8u: goto label_241ca8;
        case 0x241cacu: goto label_241cac;
        case 0x241cb0u: goto label_241cb0;
        case 0x241cb4u: goto label_241cb4;
        case 0x241cb8u: goto label_241cb8;
        case 0x241cbcu: goto label_241cbc;
        case 0x241cc0u: goto label_241cc0;
        case 0x241cc4u: goto label_241cc4;
        case 0x241cc8u: goto label_241cc8;
        case 0x241cccu: goto label_241ccc;
        case 0x241cd0u: goto label_241cd0;
        case 0x241cd4u: goto label_241cd4;
        case 0x241cd8u: goto label_241cd8;
        case 0x241cdcu: goto label_241cdc;
        case 0x241ce0u: goto label_241ce0;
        case 0x241ce4u: goto label_241ce4;
        case 0x241ce8u: goto label_241ce8;
        case 0x241cecu: goto label_241cec;
        case 0x241cf0u: goto label_241cf0;
        case 0x241cf4u: goto label_241cf4;
        case 0x241cf8u: goto label_241cf8;
        case 0x241cfcu: goto label_241cfc;
        case 0x241d00u: goto label_241d00;
        case 0x241d04u: goto label_241d04;
        case 0x241d08u: goto label_241d08;
        case 0x241d0cu: goto label_241d0c;
        case 0x241d10u: goto label_241d10;
        case 0x241d14u: goto label_241d14;
        case 0x241d18u: goto label_241d18;
        case 0x241d1cu: goto label_241d1c;
        case 0x241d20u: goto label_241d20;
        case 0x241d24u: goto label_241d24;
        case 0x241d28u: goto label_241d28;
        case 0x241d2cu: goto label_241d2c;
        case 0x241d30u: goto label_241d30;
        case 0x241d34u: goto label_241d34;
        case 0x241d38u: goto label_241d38;
        case 0x241d3cu: goto label_241d3c;
        case 0x241d40u: goto label_241d40;
        case 0x241d44u: goto label_241d44;
        case 0x241d48u: goto label_241d48;
        case 0x241d4cu: goto label_241d4c;
        case 0x241d50u: goto label_241d50;
        case 0x241d54u: goto label_241d54;
        case 0x241d58u: goto label_241d58;
        case 0x241d5cu: goto label_241d5c;
        case 0x241d60u: goto label_241d60;
        case 0x241d64u: goto label_241d64;
        case 0x241d68u: goto label_241d68;
        case 0x241d6cu: goto label_241d6c;
        case 0x241d70u: goto label_241d70;
        case 0x241d74u: goto label_241d74;
        case 0x241d78u: goto label_241d78;
        case 0x241d7cu: goto label_241d7c;
        case 0x241d80u: goto label_241d80;
        case 0x241d84u: goto label_241d84;
        case 0x241d88u: goto label_241d88;
        case 0x241d8cu: goto label_241d8c;
        case 0x241d90u: goto label_241d90;
        case 0x241d94u: goto label_241d94;
        case 0x241d98u: goto label_241d98;
        case 0x241d9cu: goto label_241d9c;
        case 0x241da0u: goto label_241da0;
        case 0x241da4u: goto label_241da4;
        case 0x241da8u: goto label_241da8;
        case 0x241dacu: goto label_241dac;
        case 0x241db0u: goto label_241db0;
        case 0x241db4u: goto label_241db4;
        case 0x241db8u: goto label_241db8;
        case 0x241dbcu: goto label_241dbc;
        case 0x241dc0u: goto label_241dc0;
        case 0x241dc4u: goto label_241dc4;
        case 0x241dc8u: goto label_241dc8;
        case 0x241dccu: goto label_241dcc;
        case 0x241dd0u: goto label_241dd0;
        case 0x241dd4u: goto label_241dd4;
        case 0x241dd8u: goto label_241dd8;
        case 0x241ddcu: goto label_241ddc;
        case 0x241de0u: goto label_241de0;
        case 0x241de4u: goto label_241de4;
        case 0x241de8u: goto label_241de8;
        case 0x241decu: goto label_241dec;
        case 0x241df0u: goto label_241df0;
        case 0x241df4u: goto label_241df4;
        case 0x241df8u: goto label_241df8;
        case 0x241dfcu: goto label_241dfc;
        case 0x241e00u: goto label_241e00;
        case 0x241e04u: goto label_241e04;
        case 0x241e08u: goto label_241e08;
        case 0x241e0cu: goto label_241e0c;
        case 0x241e10u: goto label_241e10;
        case 0x241e14u: goto label_241e14;
        case 0x241e18u: goto label_241e18;
        case 0x241e1cu: goto label_241e1c;
        case 0x241e20u: goto label_241e20;
        case 0x241e24u: goto label_241e24;
        case 0x241e28u: goto label_241e28;
        case 0x241e2cu: goto label_241e2c;
        case 0x241e30u: goto label_241e30;
        case 0x241e34u: goto label_241e34;
        case 0x241e38u: goto label_241e38;
        case 0x241e3cu: goto label_241e3c;
        case 0x241e40u: goto label_241e40;
        case 0x241e44u: goto label_241e44;
        case 0x241e48u: goto label_241e48;
        case 0x241e4cu: goto label_241e4c;
        case 0x241e50u: goto label_241e50;
        case 0x241e54u: goto label_241e54;
        case 0x241e58u: goto label_241e58;
        case 0x241e5cu: goto label_241e5c;
        case 0x241e60u: goto label_241e60;
        case 0x241e64u: goto label_241e64;
        case 0x241e68u: goto label_241e68;
        case 0x241e6cu: goto label_241e6c;
        case 0x241e70u: goto label_241e70;
        case 0x241e74u: goto label_241e74;
        case 0x241e78u: goto label_241e78;
        case 0x241e7cu: goto label_241e7c;
        case 0x241e80u: goto label_241e80;
        case 0x241e84u: goto label_241e84;
        case 0x241e88u: goto label_241e88;
        case 0x241e8cu: goto label_241e8c;
        case 0x241e90u: goto label_241e90;
        case 0x241e94u: goto label_241e94;
        case 0x241e98u: goto label_241e98;
        case 0x241e9cu: goto label_241e9c;
        case 0x241ea0u: goto label_241ea0;
        case 0x241ea4u: goto label_241ea4;
        case 0x241ea8u: goto label_241ea8;
        case 0x241eacu: goto label_241eac;
        case 0x241eb0u: goto label_241eb0;
        case 0x241eb4u: goto label_241eb4;
        case 0x241eb8u: goto label_241eb8;
        case 0x241ebcu: goto label_241ebc;
        case 0x241ec0u: goto label_241ec0;
        case 0x241ec4u: goto label_241ec4;
        case 0x241ec8u: goto label_241ec8;
        case 0x241eccu: goto label_241ecc;
        case 0x241ed0u: goto label_241ed0;
        case 0x241ed4u: goto label_241ed4;
        case 0x241ed8u: goto label_241ed8;
        case 0x241edcu: goto label_241edc;
        case 0x241ee0u: goto label_241ee0;
        case 0x241ee4u: goto label_241ee4;
        case 0x241ee8u: goto label_241ee8;
        case 0x241eecu: goto label_241eec;
        case 0x241ef0u: goto label_241ef0;
        case 0x241ef4u: goto label_241ef4;
        case 0x241ef8u: goto label_241ef8;
        case 0x241efcu: goto label_241efc;
        case 0x241f00u: goto label_241f00;
        case 0x241f04u: goto label_241f04;
        case 0x241f08u: goto label_241f08;
        case 0x241f0cu: goto label_241f0c;
        case 0x241f10u: goto label_241f10;
        case 0x241f14u: goto label_241f14;
        case 0x241f18u: goto label_241f18;
        case 0x241f1cu: goto label_241f1c;
        case 0x241f20u: goto label_241f20;
        case 0x241f24u: goto label_241f24;
        case 0x241f28u: goto label_241f28;
        case 0x241f2cu: goto label_241f2c;
        case 0x241f30u: goto label_241f30;
        case 0x241f34u: goto label_241f34;
        case 0x241f38u: goto label_241f38;
        case 0x241f3cu: goto label_241f3c;
        case 0x241f40u: goto label_241f40;
        case 0x241f44u: goto label_241f44;
        case 0x241f48u: goto label_241f48;
        case 0x241f4cu: goto label_241f4c;
        case 0x241f50u: goto label_241f50;
        case 0x241f54u: goto label_241f54;
        case 0x241f58u: goto label_241f58;
        case 0x241f5cu: goto label_241f5c;
        case 0x241f60u: goto label_241f60;
        case 0x241f64u: goto label_241f64;
        case 0x241f68u: goto label_241f68;
        case 0x241f6cu: goto label_241f6c;
        case 0x241f70u: goto label_241f70;
        case 0x241f74u: goto label_241f74;
        case 0x241f78u: goto label_241f78;
        case 0x241f7cu: goto label_241f7c;
        case 0x241f80u: goto label_241f80;
        case 0x241f84u: goto label_241f84;
        case 0x241f88u: goto label_241f88;
        case 0x241f8cu: goto label_241f8c;
        case 0x241f90u: goto label_241f90;
        case 0x241f94u: goto label_241f94;
        case 0x241f98u: goto label_241f98;
        case 0x241f9cu: goto label_241f9c;
        case 0x241fa0u: goto label_241fa0;
        case 0x241fa4u: goto label_241fa4;
        case 0x241fa8u: goto label_241fa8;
        case 0x241facu: goto label_241fac;
        case 0x241fb0u: goto label_241fb0;
        case 0x241fb4u: goto label_241fb4;
        case 0x241fb8u: goto label_241fb8;
        case 0x241fbcu: goto label_241fbc;
        case 0x241fc0u: goto label_241fc0;
        case 0x241fc4u: goto label_241fc4;
        case 0x241fc8u: goto label_241fc8;
        case 0x241fccu: goto label_241fcc;
        case 0x241fd0u: goto label_241fd0;
        case 0x241fd4u: goto label_241fd4;
        case 0x241fd8u: goto label_241fd8;
        case 0x241fdcu: goto label_241fdc;
        case 0x241fe0u: goto label_241fe0;
        case 0x241fe4u: goto label_241fe4;
        case 0x241fe8u: goto label_241fe8;
        case 0x241fecu: goto label_241fec;
        case 0x241ff0u: goto label_241ff0;
        case 0x241ff4u: goto label_241ff4;
        case 0x241ff8u: goto label_241ff8;
        case 0x241ffcu: goto label_241ffc;
        case 0x242000u: goto label_242000;
        case 0x242004u: goto label_242004;
        case 0x242008u: goto label_242008;
        case 0x24200cu: goto label_24200c;
        case 0x242010u: goto label_242010;
        case 0x242014u: goto label_242014;
        case 0x242018u: goto label_242018;
        case 0x24201cu: goto label_24201c;
        case 0x242020u: goto label_242020;
        case 0x242024u: goto label_242024;
        case 0x242028u: goto label_242028;
        case 0x24202cu: goto label_24202c;
        case 0x242030u: goto label_242030;
        case 0x242034u: goto label_242034;
        case 0x242038u: goto label_242038;
        case 0x24203cu: goto label_24203c;
        case 0x242040u: goto label_242040;
        case 0x242044u: goto label_242044;
        case 0x242048u: goto label_242048;
        case 0x24204cu: goto label_24204c;
        case 0x242050u: goto label_242050;
        case 0x242054u: goto label_242054;
        case 0x242058u: goto label_242058;
        case 0x24205cu: goto label_24205c;
        case 0x242060u: goto label_242060;
        case 0x242064u: goto label_242064;
        case 0x242068u: goto label_242068;
        case 0x24206cu: goto label_24206c;
        case 0x242070u: goto label_242070;
        case 0x242074u: goto label_242074;
        case 0x242078u: goto label_242078;
        case 0x24207cu: goto label_24207c;
        case 0x242080u: goto label_242080;
        case 0x242084u: goto label_242084;
        case 0x242088u: goto label_242088;
        case 0x24208cu: goto label_24208c;
        case 0x242090u: goto label_242090;
        case 0x242094u: goto label_242094;
        case 0x242098u: goto label_242098;
        case 0x24209cu: goto label_24209c;
        case 0x2420a0u: goto label_2420a0;
        case 0x2420a4u: goto label_2420a4;
        case 0x2420a8u: goto label_2420a8;
        case 0x2420acu: goto label_2420ac;
        case 0x2420b0u: goto label_2420b0;
        case 0x2420b4u: goto label_2420b4;
        case 0x2420b8u: goto label_2420b8;
        case 0x2420bcu: goto label_2420bc;
        case 0x2420c0u: goto label_2420c0;
        case 0x2420c4u: goto label_2420c4;
        case 0x2420c8u: goto label_2420c8;
        case 0x2420ccu: goto label_2420cc;
        case 0x2420d0u: goto label_2420d0;
        case 0x2420d4u: goto label_2420d4;
        case 0x2420d8u: goto label_2420d8;
        case 0x2420dcu: goto label_2420dc;
        case 0x2420e0u: goto label_2420e0;
        case 0x2420e4u: goto label_2420e4;
        case 0x2420e8u: goto label_2420e8;
        case 0x2420ecu: goto label_2420ec;
        case 0x2420f0u: goto label_2420f0;
        case 0x2420f4u: goto label_2420f4;
        case 0x2420f8u: goto label_2420f8;
        case 0x2420fcu: goto label_2420fc;
        case 0x242100u: goto label_242100;
        case 0x242104u: goto label_242104;
        case 0x242108u: goto label_242108;
        case 0x24210cu: goto label_24210c;
        case 0x242110u: goto label_242110;
        case 0x242114u: goto label_242114;
        case 0x242118u: goto label_242118;
        case 0x24211cu: goto label_24211c;
        case 0x242120u: goto label_242120;
        case 0x242124u: goto label_242124;
        case 0x242128u: goto label_242128;
        case 0x24212cu: goto label_24212c;
        case 0x242130u: goto label_242130;
        case 0x242134u: goto label_242134;
        case 0x242138u: goto label_242138;
        case 0x24213cu: goto label_24213c;
        case 0x242140u: goto label_242140;
        case 0x242144u: goto label_242144;
        case 0x242148u: goto label_242148;
        case 0x24214cu: goto label_24214c;
        case 0x242150u: goto label_242150;
        case 0x242154u: goto label_242154;
        case 0x242158u: goto label_242158;
        case 0x24215cu: goto label_24215c;
        case 0x242160u: goto label_242160;
        case 0x242164u: goto label_242164;
        case 0x242168u: goto label_242168;
        case 0x24216cu: goto label_24216c;
        case 0x242170u: goto label_242170;
        case 0x242174u: goto label_242174;
        case 0x242178u: goto label_242178;
        case 0x24217cu: goto label_24217c;
        case 0x242180u: goto label_242180;
        case 0x242184u: goto label_242184;
        case 0x242188u: goto label_242188;
        case 0x24218cu: goto label_24218c;
        case 0x242190u: goto label_242190;
        case 0x242194u: goto label_242194;
        case 0x242198u: goto label_242198;
        case 0x24219cu: goto label_24219c;
        case 0x2421a0u: goto label_2421a0;
        case 0x2421a4u: goto label_2421a4;
        case 0x2421a8u: goto label_2421a8;
        case 0x2421acu: goto label_2421ac;
        case 0x2421b0u: goto label_2421b0;
        case 0x2421b4u: goto label_2421b4;
        case 0x2421b8u: goto label_2421b8;
        case 0x2421bcu: goto label_2421bc;
        case 0x2421c0u: goto label_2421c0;
        case 0x2421c4u: goto label_2421c4;
        case 0x2421c8u: goto label_2421c8;
        case 0x2421ccu: goto label_2421cc;
        case 0x2421d0u: goto label_2421d0;
        case 0x2421d4u: goto label_2421d4;
        case 0x2421d8u: goto label_2421d8;
        case 0x2421dcu: goto label_2421dc;
        case 0x2421e0u: goto label_2421e0;
        case 0x2421e4u: goto label_2421e4;
        case 0x2421e8u: goto label_2421e8;
        case 0x2421ecu: goto label_2421ec;
        case 0x2421f0u: goto label_2421f0;
        case 0x2421f4u: goto label_2421f4;
        case 0x2421f8u: goto label_2421f8;
        case 0x2421fcu: goto label_2421fc;
        case 0x242200u: goto label_242200;
        case 0x242204u: goto label_242204;
        case 0x242208u: goto label_242208;
        case 0x24220cu: goto label_24220c;
        case 0x242210u: goto label_242210;
        case 0x242214u: goto label_242214;
        case 0x242218u: goto label_242218;
        case 0x24221cu: goto label_24221c;
        case 0x242220u: goto label_242220;
        case 0x242224u: goto label_242224;
        case 0x242228u: goto label_242228;
        case 0x24222cu: goto label_24222c;
        case 0x242230u: goto label_242230;
        case 0x242234u: goto label_242234;
        case 0x242238u: goto label_242238;
        case 0x24223cu: goto label_24223c;
        case 0x242240u: goto label_242240;
        case 0x242244u: goto label_242244;
        case 0x242248u: goto label_242248;
        case 0x24224cu: goto label_24224c;
        case 0x242250u: goto label_242250;
        case 0x242254u: goto label_242254;
        case 0x242258u: goto label_242258;
        case 0x24225cu: goto label_24225c;
        case 0x242260u: goto label_242260;
        case 0x242264u: goto label_242264;
        case 0x242268u: goto label_242268;
        case 0x24226cu: goto label_24226c;
        case 0x242270u: goto label_242270;
        case 0x242274u: goto label_242274;
        case 0x242278u: goto label_242278;
        case 0x24227cu: goto label_24227c;
        case 0x242280u: goto label_242280;
        case 0x242284u: goto label_242284;
        case 0x242288u: goto label_242288;
        case 0x24228cu: goto label_24228c;
        case 0x242290u: goto label_242290;
        case 0x242294u: goto label_242294;
        case 0x242298u: goto label_242298;
        case 0x24229cu: goto label_24229c;
        case 0x2422a0u: goto label_2422a0;
        case 0x2422a4u: goto label_2422a4;
        case 0x2422a8u: goto label_2422a8;
        case 0x2422acu: goto label_2422ac;
        case 0x2422b0u: goto label_2422b0;
        case 0x2422b4u: goto label_2422b4;
        case 0x2422b8u: goto label_2422b8;
        case 0x2422bcu: goto label_2422bc;
        case 0x2422c0u: goto label_2422c0;
        case 0x2422c4u: goto label_2422c4;
        case 0x2422c8u: goto label_2422c8;
        case 0x2422ccu: goto label_2422cc;
        case 0x2422d0u: goto label_2422d0;
        case 0x2422d4u: goto label_2422d4;
        case 0x2422d8u: goto label_2422d8;
        case 0x2422dcu: goto label_2422dc;
        case 0x2422e0u: goto label_2422e0;
        case 0x2422e4u: goto label_2422e4;
        case 0x2422e8u: goto label_2422e8;
        case 0x2422ecu: goto label_2422ec;
        case 0x2422f0u: goto label_2422f0;
        case 0x2422f4u: goto label_2422f4;
        case 0x2422f8u: goto label_2422f8;
        case 0x2422fcu: goto label_2422fc;
        case 0x242300u: goto label_242300;
        case 0x242304u: goto label_242304;
        case 0x242308u: goto label_242308;
        case 0x24230cu: goto label_24230c;
        case 0x242310u: goto label_242310;
        case 0x242314u: goto label_242314;
        case 0x242318u: goto label_242318;
        case 0x24231cu: goto label_24231c;
        case 0x242320u: goto label_242320;
        case 0x242324u: goto label_242324;
        case 0x242328u: goto label_242328;
        case 0x24232cu: goto label_24232c;
        case 0x242330u: goto label_242330;
        case 0x242334u: goto label_242334;
        case 0x242338u: goto label_242338;
        case 0x24233cu: goto label_24233c;
        case 0x242340u: goto label_242340;
        case 0x242344u: goto label_242344;
        case 0x242348u: goto label_242348;
        case 0x24234cu: goto label_24234c;
        case 0x242350u: goto label_242350;
        case 0x242354u: goto label_242354;
        case 0x242358u: goto label_242358;
        case 0x24235cu: goto label_24235c;
        case 0x242360u: goto label_242360;
        case 0x242364u: goto label_242364;
        case 0x242368u: goto label_242368;
        case 0x24236cu: goto label_24236c;
        case 0x242370u: goto label_242370;
        case 0x242374u: goto label_242374;
        case 0x242378u: goto label_242378;
        case 0x24237cu: goto label_24237c;
        case 0x242380u: goto label_242380;
        case 0x242384u: goto label_242384;
        case 0x242388u: goto label_242388;
        case 0x24238cu: goto label_24238c;
        case 0x242390u: goto label_242390;
        case 0x242394u: goto label_242394;
        case 0x242398u: goto label_242398;
        case 0x24239cu: goto label_24239c;
        case 0x2423a0u: goto label_2423a0;
        case 0x2423a4u: goto label_2423a4;
        case 0x2423a8u: goto label_2423a8;
        case 0x2423acu: goto label_2423ac;
        case 0x2423b0u: goto label_2423b0;
        case 0x2423b4u: goto label_2423b4;
        case 0x2423b8u: goto label_2423b8;
        case 0x2423bcu: goto label_2423bc;
        case 0x2423c0u: goto label_2423c0;
        case 0x2423c4u: goto label_2423c4;
        case 0x2423c8u: goto label_2423c8;
        case 0x2423ccu: goto label_2423cc;
        case 0x2423d0u: goto label_2423d0;
        case 0x2423d4u: goto label_2423d4;
        case 0x2423d8u: goto label_2423d8;
        case 0x2423dcu: goto label_2423dc;
        case 0x2423e0u: goto label_2423e0;
        case 0x2423e4u: goto label_2423e4;
        case 0x2423e8u: goto label_2423e8;
        case 0x2423ecu: goto label_2423ec;
        case 0x2423f0u: goto label_2423f0;
        case 0x2423f4u: goto label_2423f4;
        case 0x2423f8u: goto label_2423f8;
        case 0x2423fcu: goto label_2423fc;
        case 0x242400u: goto label_242400;
        case 0x242404u: goto label_242404;
        case 0x242408u: goto label_242408;
        case 0x24240cu: goto label_24240c;
        case 0x242410u: goto label_242410;
        case 0x242414u: goto label_242414;
        case 0x242418u: goto label_242418;
        case 0x24241cu: goto label_24241c;
        case 0x242420u: goto label_242420;
        case 0x242424u: goto label_242424;
        case 0x242428u: goto label_242428;
        case 0x24242cu: goto label_24242c;
        case 0x242430u: goto label_242430;
        case 0x242434u: goto label_242434;
        case 0x242438u: goto label_242438;
        case 0x24243cu: goto label_24243c;
        case 0x242440u: goto label_242440;
        case 0x242444u: goto label_242444;
        case 0x242448u: goto label_242448;
        case 0x24244cu: goto label_24244c;
        case 0x242450u: goto label_242450;
        case 0x242454u: goto label_242454;
        case 0x242458u: goto label_242458;
        case 0x24245cu: goto label_24245c;
        case 0x242460u: goto label_242460;
        case 0x242464u: goto label_242464;
        case 0x242468u: goto label_242468;
        case 0x24246cu: goto label_24246c;
        case 0x242470u: goto label_242470;
        case 0x242474u: goto label_242474;
        case 0x242478u: goto label_242478;
        case 0x24247cu: goto label_24247c;
        case 0x242480u: goto label_242480;
        case 0x242484u: goto label_242484;
        case 0x242488u: goto label_242488;
        case 0x24248cu: goto label_24248c;
        case 0x242490u: goto label_242490;
        case 0x242494u: goto label_242494;
        case 0x242498u: goto label_242498;
        case 0x24249cu: goto label_24249c;
        case 0x2424a0u: goto label_2424a0;
        case 0x2424a4u: goto label_2424a4;
        case 0x2424a8u: goto label_2424a8;
        case 0x2424acu: goto label_2424ac;
        case 0x2424b0u: goto label_2424b0;
        case 0x2424b4u: goto label_2424b4;
        case 0x2424b8u: goto label_2424b8;
        case 0x2424bcu: goto label_2424bc;
        case 0x2424c0u: goto label_2424c0;
        case 0x2424c4u: goto label_2424c4;
        case 0x2424c8u: goto label_2424c8;
        case 0x2424ccu: goto label_2424cc;
        case 0x2424d0u: goto label_2424d0;
        case 0x2424d4u: goto label_2424d4;
        case 0x2424d8u: goto label_2424d8;
        case 0x2424dcu: goto label_2424dc;
        case 0x2424e0u: goto label_2424e0;
        case 0x2424e4u: goto label_2424e4;
        case 0x2424e8u: goto label_2424e8;
        case 0x2424ecu: goto label_2424ec;
        case 0x2424f0u: goto label_2424f0;
        case 0x2424f4u: goto label_2424f4;
        case 0x2424f8u: goto label_2424f8;
        case 0x2424fcu: goto label_2424fc;
        case 0x242500u: goto label_242500;
        case 0x242504u: goto label_242504;
        case 0x242508u: goto label_242508;
        case 0x24250cu: goto label_24250c;
        case 0x242510u: goto label_242510;
        case 0x242514u: goto label_242514;
        case 0x242518u: goto label_242518;
        case 0x24251cu: goto label_24251c;
        case 0x242520u: goto label_242520;
        case 0x242524u: goto label_242524;
        case 0x242528u: goto label_242528;
        case 0x24252cu: goto label_24252c;
        case 0x242530u: goto label_242530;
        case 0x242534u: goto label_242534;
        case 0x242538u: goto label_242538;
        case 0x24253cu: goto label_24253c;
        case 0x242540u: goto label_242540;
        case 0x242544u: goto label_242544;
        case 0x242548u: goto label_242548;
        case 0x24254cu: goto label_24254c;
        case 0x242550u: goto label_242550;
        case 0x242554u: goto label_242554;
        case 0x242558u: goto label_242558;
        case 0x24255cu: goto label_24255c;
        case 0x242560u: goto label_242560;
        case 0x242564u: goto label_242564;
        case 0x242568u: goto label_242568;
        case 0x24256cu: goto label_24256c;
        case 0x242570u: goto label_242570;
        case 0x242574u: goto label_242574;
        case 0x242578u: goto label_242578;
        case 0x24257cu: goto label_24257c;
        case 0x242580u: goto label_242580;
        case 0x242584u: goto label_242584;
        case 0x242588u: goto label_242588;
        case 0x24258cu: goto label_24258c;
        case 0x242590u: goto label_242590;
        case 0x242594u: goto label_242594;
        case 0x242598u: goto label_242598;
        case 0x24259cu: goto label_24259c;
        case 0x2425a0u: goto label_2425a0;
        case 0x2425a4u: goto label_2425a4;
        case 0x2425a8u: goto label_2425a8;
        case 0x2425acu: goto label_2425ac;
        case 0x2425b0u: goto label_2425b0;
        case 0x2425b4u: goto label_2425b4;
        case 0x2425b8u: goto label_2425b8;
        case 0x2425bcu: goto label_2425bc;
        case 0x2425c0u: goto label_2425c0;
        case 0x2425c4u: goto label_2425c4;
        case 0x2425c8u: goto label_2425c8;
        case 0x2425ccu: goto label_2425cc;
        case 0x2425d0u: goto label_2425d0;
        case 0x2425d4u: goto label_2425d4;
        case 0x2425d8u: goto label_2425d8;
        case 0x2425dcu: goto label_2425dc;
        case 0x2425e0u: goto label_2425e0;
        case 0x2425e4u: goto label_2425e4;
        case 0x2425e8u: goto label_2425e8;
        case 0x2425ecu: goto label_2425ec;
        case 0x2425f0u: goto label_2425f0;
        case 0x2425f4u: goto label_2425f4;
        case 0x2425f8u: goto label_2425f8;
        case 0x2425fcu: goto label_2425fc;
        case 0x242600u: goto label_242600;
        case 0x242604u: goto label_242604;
        case 0x242608u: goto label_242608;
        case 0x24260cu: goto label_24260c;
        case 0x242610u: goto label_242610;
        case 0x242614u: goto label_242614;
        case 0x242618u: goto label_242618;
        case 0x24261cu: goto label_24261c;
        case 0x242620u: goto label_242620;
        case 0x242624u: goto label_242624;
        case 0x242628u: goto label_242628;
        case 0x24262cu: goto label_24262c;
        case 0x242630u: goto label_242630;
        case 0x242634u: goto label_242634;
        case 0x242638u: goto label_242638;
        case 0x24263cu: goto label_24263c;
        case 0x242640u: goto label_242640;
        case 0x242644u: goto label_242644;
        case 0x242648u: goto label_242648;
        case 0x24264cu: goto label_24264c;
        case 0x242650u: goto label_242650;
        case 0x242654u: goto label_242654;
        case 0x242658u: goto label_242658;
        case 0x24265cu: goto label_24265c;
        case 0x242660u: goto label_242660;
        case 0x242664u: goto label_242664;
        case 0x242668u: goto label_242668;
        case 0x24266cu: goto label_24266c;
        case 0x242670u: goto label_242670;
        case 0x242674u: goto label_242674;
        default: break;
    }

    ctx->pc = 0x241c38u;

label_241c38:
    // 0x241c38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x241c38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_241c3c:
    // 0x241c3c: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x241c3cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_241c40:
    // 0x241c40: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x241c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_241c44:
    // 0x241c44: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x241c44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_241c48:
    // 0x241c48: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x241c48u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_241c4c:
    // 0x241c4c: 0x8c62feb8  lw          $v0, -0x148($v1)
    ctx->pc = 0x241c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966968)));
label_241c50:
    // 0x241c50: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x241c50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_241c54:
    // 0x241c54: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x241c54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_241c58:
    // 0x241c58: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_241c5c:
    if (ctx->pc == 0x241C5Cu) {
        ctx->pc = 0x241C5Cu;
            // 0x241c5c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x241C60u;
        goto label_241c60;
    }
    ctx->pc = 0x241C58u;
    {
        const bool branch_taken_0x241c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241C58u;
            // 0x241c5c: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c58) {
            ctx->pc = 0x241C70u;
            goto label_241c70;
        }
    }
    ctx->pc = 0x241C60u;
label_241c60:
    // 0x241c60: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x241c60u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241c64:
    // 0x241c64: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x241c64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_241c68:
    // 0x241c68: 0x10000004  b           . + 4 + (0x4 << 2)
label_241c6c:
    if (ctx->pc == 0x241C6Cu) {
        ctx->pc = 0x241C6Cu;
            // 0x241c6c: 0xac62feb8  sw          $v0, -0x148($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966968), GPR_U32(ctx, 2));
        ctx->pc = 0x241C70u;
        goto label_241c70;
    }
    ctx->pc = 0x241C68u;
    {
        const bool branch_taken_0x241c68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241C68u;
            // 0x241c6c: 0xac62feb8  sw          $v0, -0x148($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294966968), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c68) {
            ctx->pc = 0x241C7Cu;
            goto label_241c7c;
        }
    }
    ctx->pc = 0x241C70u;
label_241c70:
    // 0x241c70: 0xc098552  jal         func_261548
label_241c74:
    if (ctx->pc == 0x241C74u) {
        ctx->pc = 0x241C74u;
            // 0x241c74: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x241C78u;
        goto label_241c78;
    }
    ctx->pc = 0x241C70u;
    SET_GPR_U32(ctx, 31, 0x241C78u);
    ctx->pc = 0x241C74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241C70u;
            // 0x241c74: 0x24040010  addiu       $a0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C78u; }
        if (ctx->pc != 0x241C78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C78u; }
        if (ctx->pc != 0x241C78u) { return; }
    }
    ctx->pc = 0x241C78u;
label_241c78:
    // 0x241c78: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x241c78u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241c7c:
    // 0x241c7c: 0x16000007  bnez        $s0, . + 4 + (0x7 << 2)
label_241c80:
    if (ctx->pc == 0x241C80u) {
        ctx->pc = 0x241C80u;
            // 0x241c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241C84u;
        goto label_241c84;
    }
    ctx->pc = 0x241C7Cu;
    {
        const bool branch_taken_0x241c7c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x241C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241C7Cu;
            // 0x241c80: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c7c) {
            ctx->pc = 0x241C9Cu;
            goto label_241c9c;
        }
    }
    ctx->pc = 0x241C84u;
label_241c84:
    // 0x241c84: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x241c84u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_241c88:
    // 0x241c88: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x241c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_241c8c:
    // 0x241c8c: 0xc08b5ac  jal         func_22D6B0
label_241c90:
    if (ctx->pc == 0x241C90u) {
        ctx->pc = 0x241C90u;
            // 0x241c90: 0x24a564f8  addiu       $a1, $a1, 0x64F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25848));
        ctx->pc = 0x241C94u;
        goto label_241c94;
    }
    ctx->pc = 0x241C8Cu;
    SET_GPR_U32(ctx, 31, 0x241C94u);
    ctx->pc = 0x241C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241C8Cu;
            // 0x241c90: 0x24a564f8  addiu       $a1, $a1, 0x64F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25848));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C94u; }
        if (ctx->pc != 0x241C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241C94u; }
        if (ctx->pc != 0x241C94u) { return; }
    }
    ctx->pc = 0x241C94u;
label_241c94:
    // 0x241c94: 0x10000011  b           . + 4 + (0x11 << 2)
label_241c98:
    if (ctx->pc == 0x241C98u) {
        ctx->pc = 0x241C98u;
            // 0x241c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241C9Cu;
        goto label_241c9c;
    }
    ctx->pc = 0x241C94u;
    {
        const bool branch_taken_0x241c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241C94u;
            // 0x241c98: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241c94) {
            ctx->pc = 0x241CDCu;
            goto label_241cdc;
        }
    }
    ctx->pc = 0x241C9Cu;
label_241c9c:
    // 0x241c9c: 0xc048c96  jal         func_123258
label_241ca0:
    if (ctx->pc == 0x241CA0u) {
        ctx->pc = 0x241CA0u;
            // 0x241ca0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x241CA4u;
        goto label_241ca4;
    }
    ctx->pc = 0x241C9Cu;
    SET_GPR_U32(ctx, 31, 0x241CA4u);
    ctx->pc = 0x241CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241C9Cu;
            // 0x241ca0: 0x24050010  addiu       $a1, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241CA4u; }
        if (ctx->pc != 0x241CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241CA4u; }
        if (ctx->pc != 0x241CA4u) { return; }
    }
    ctx->pc = 0x241CA4u;
label_241ca4:
    // 0x241ca4: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x241ca4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_241ca8:
    // 0x241ca8: 0xa6020000  sh          $v0, 0x0($s0)
    ctx->pc = 0x241ca8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 2));
label_241cac:
    // 0x241cac: 0x9223000b  lbu         $v1, 0xB($s1)
    ctx->pc = 0x241cacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
label_241cb0:
    // 0x241cb0: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x241cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
label_241cb4:
    // 0x241cb4: 0x9222000b  lbu         $v0, 0xB($s1)
    ctx->pc = 0x241cb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
label_241cb8:
    // 0x241cb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_241cbc:
    // 0x241cbc: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_241cc0:
    if (ctx->pc == 0x241CC0u) {
        ctx->pc = 0x241CC0u;
            // 0x241cc0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->pc = 0x241CC4u;
        goto label_241cc4;
    }
    ctx->pc = 0x241CBCu;
    {
        const bool branch_taken_0x241cbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241cbc) {
            ctx->pc = 0x241CC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241CBCu;
            // 0x241cc0: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241CCCu;
            goto label_241ccc;
        }
    }
    ctx->pc = 0x241CC4u;
label_241cc4:
    // 0x241cc4: 0x10000002  b           . + 4 + (0x2 << 2)
label_241cc8:
    if (ctx->pc == 0x241CC8u) {
        ctx->pc = 0x241CC8u;
            // 0x241cc8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->pc = 0x241CCCu;
        goto label_241ccc;
    }
    ctx->pc = 0x241CC4u;
    {
        const bool branch_taken_0x241cc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241CC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241CC4u;
            // 0x241cc8: 0xae110008  sw          $s1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241cc4) {
            ctx->pc = 0x241CD0u;
            goto label_241cd0;
        }
    }
    ctx->pc = 0x241CCCu;
label_241ccc:
    // 0x241ccc: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x241cccu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
label_241cd0:
    // 0x241cd0: 0xae120004  sw          $s2, 0x4($s0)
    ctx->pc = 0x241cd0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
label_241cd4:
    // 0x241cd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x241cd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241cd8:
    // 0x241cd8: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x241cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_241cdc:
    // 0x241cdc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x241cdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_241ce0:
    // 0x241ce0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x241ce0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_241ce4:
    // 0x241ce4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x241ce4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_241ce8:
    // 0x241ce8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x241ce8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_241cec:
    // 0x241cec: 0x3e00008  jr          $ra
label_241cf0:
    if (ctx->pc == 0x241CF0u) {
        ctx->pc = 0x241CF0u;
            // 0x241cf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x241CF4u;
        goto label_241cf4;
    }
    ctx->pc = 0x241CECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x241CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241CECu;
            // 0x241cf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x241CF4u;
label_241cf4:
    // 0x241cf4: 0x0  nop
    ctx->pc = 0x241cf4u;
    // NOP
label_241cf8:
    // 0x241cf8: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x241cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_241cfc:
    // 0x241cfc: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x241cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_241d00:
    // 0x241d00: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x241d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_241d04:
    // 0x241d04: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x241d04u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241d08:
    // 0x241d08: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x241d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_241d0c:
    // 0x241d0c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x241d0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241d10:
    // 0x241d10: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x241d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_241d14:
    // 0x241d14: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x241d14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_241d18:
    // 0x241d18: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x241d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_241d1c:
    // 0x241d1c: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x241d1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_241d20:
    // 0x241d20: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x241d20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_241d24:
    // 0x241d24: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x241d24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_241d28:
    // 0x241d28: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x241d28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_241d2c:
    // 0x241d2c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x241d2cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_241d30:
    // 0x241d30: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x241d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_241d34:
    // 0x241d34: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x241d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_241d38:
    // 0x241d38: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x241d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
label_241d3c:
    // 0x241d3c: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x241d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_241d40:
    // 0x241d40: 0x12a0000f  beqz        $s5, . + 4 + (0xF << 2)
label_241d44:
    if (ctx->pc == 0x241D44u) {
        ctx->pc = 0x241D44u;
            // 0x241d44: 0x8e370000  lw          $s7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->pc = 0x241D48u;
        goto label_241d48;
    }
    ctx->pc = 0x241D40u;
    {
        const bool branch_taken_0x241d40 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241D40u;
            // 0x241d44: 0x8e370000  lw          $s7, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d40) {
            ctx->pc = 0x241D80u;
            goto label_241d80;
        }
    }
    ctx->pc = 0x241D48u;
label_241d48:
    // 0x241d48: 0x8ee6000c  lw          $a2, 0xC($s7)
    ctx->pc = 0x241d48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_241d4c:
    // 0x241d4c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x241d4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_241d50:
    // 0x241d50: 0xc090624  jal         func_241890
label_241d54:
    if (ctx->pc == 0x241D54u) {
        ctx->pc = 0x241D54u;
            // 0x241d54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241D58u;
        goto label_241d58;
    }
    ctx->pc = 0x241D50u;
    SET_GPR_U32(ctx, 31, 0x241D58u);
    ctx->pc = 0x241D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241D50u;
            // 0x241d54: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241890u;
    if (runtime->hasFunction(0x241890u)) {
        auto targetFn = runtime->lookupFunction(0x241890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D58u; }
        if (ctx->pc != 0x241D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241890_0x241890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D58u; }
        if (ctx->pc != 0x241D58u) { return; }
    }
    ctx->pc = 0x241D58u;
label_241d58:
    // 0x241d58: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x241d58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241d5c:
    // 0x241d5c: 0x56800003  bnel        $s4, $zero, . + 4 + (0x3 << 2)
label_241d60:
    if (ctx->pc == 0x241D60u) {
        ctx->pc = 0x241D60u;
            // 0x241d60: 0x96820008  lhu         $v0, 0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x241D64u;
        goto label_241d64;
    }
    ctx->pc = 0x241D5Cu;
    {
        const bool branch_taken_0x241d5c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x241d5c) {
            ctx->pc = 0x241D60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241D5Cu;
            // 0x241d60: 0x96820008  lhu         $v0, 0x8($s4) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241D6Cu;
            goto label_241d6c;
        }
    }
    ctx->pc = 0x241D64u;
label_241d64:
    // 0x241d64: 0x100000c8  b           . + 4 + (0xC8 << 2)
label_241d68:
    if (ctx->pc == 0x241D68u) {
        ctx->pc = 0x241D68u;
            // 0x241d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241D6Cu;
        goto label_241d6c;
    }
    ctx->pc = 0x241D64u;
    {
        const bool branch_taken_0x241d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241D64u;
            // 0x241d68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d64) {
            ctx->pc = 0x242088u;
            goto label_242088;
        }
    }
    ctx->pc = 0x241D6Cu;
label_241d6c:
    // 0x241d6c: 0x86960008  lh          $s6, 0x8($s4)
    ctx->pc = 0x241d6cu;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_241d70:
    // 0x241d70: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x241d70u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_241d74:
    // 0x241d74: 0x8e95000c  lw          $s5, 0xC($s4)
    ctx->pc = 0x241d74u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_241d78:
    // 0x241d78: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x241d78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_241d7c:
    // 0x241d7c: 0x2f403  sra         $fp, $v0, 16
    ctx->pc = 0x241d7cu;
    SET_GPR_S32(ctx, 30, SRA32(GPR_S32(ctx, 2), 16));
label_241d80:
    // 0x241d80: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x241d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_241d84:
    // 0x241d84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x241d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241d88:
    // 0x241d88: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x241d88u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_241d8c:
    // 0x241d8c: 0xc0905be  jal         func_2416F8
label_241d90:
    if (ctx->pc == 0x241D90u) {
        ctx->pc = 0x241D90u;
            // 0x241d90: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241D94u;
        goto label_241d94;
    }
    ctx->pc = 0x241D8Cu;
    SET_GPR_U32(ctx, 31, 0x241D94u);
    ctx->pc = 0x241D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241D8Cu;
            // 0x241d90: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2416F8u;
    if (runtime->hasFunction(0x2416F8u)) {
        auto targetFn = runtime->lookupFunction(0x2416F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D94u; }
        if (ctx->pc != 0x241D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002416F8_0x2416f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241D94u; }
        if (ctx->pc != 0x241D94u) { return; }
    }
    ctx->pc = 0x241D94u;
label_241d94:
    // 0x241d94: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x241d94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241d98:
    // 0x241d98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x241d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_241d9c:
    // 0x241d9c: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
label_241da0:
    if (ctx->pc == 0x241DA0u) {
        ctx->pc = 0x241DA0u;
            // 0x241da0: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241DA4u;
        goto label_241da4;
    }
    ctx->pc = 0x241D9Cu;
    {
        const bool branch_taken_0x241d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241DA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241D9Cu;
            // 0x241da0: 0x240982d  daddu       $s3, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241d9c) {
            ctx->pc = 0x241E84u;
            goto label_241e84;
        }
    }
    ctx->pc = 0x241DA4u;
label_241da4:
    // 0x241da4: 0x10000003  b           . + 4 + (0x3 << 2)
label_241da8:
    if (ctx->pc == 0x241DA8u) {
        ctx->pc = 0x241DA8u;
            // 0x241da8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241DACu;
        goto label_241dac;
    }
    ctx->pc = 0x241DA4u;
    {
        const bool branch_taken_0x241da4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241DA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241DA4u;
            // 0x241da8: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241da4) {
            ctx->pc = 0x241DB4u;
            goto label_241db4;
        }
    }
    ctx->pc = 0x241DACu;
label_241dac:
    // 0x241dac: 0x0  nop
    ctx->pc = 0x241dacu;
    // NOP
label_241db0:
    // 0x241db0: 0x8e520014  lw          $s2, 0x14($s2)
    ctx->pc = 0x241db0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_241db4:
    // 0x241db4: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
label_241db8:
    if (ctx->pc == 0x241DB8u) {
        ctx->pc = 0x241DBCu;
        goto label_241dbc;
    }
    ctx->pc = 0x241DB4u;
    {
        const bool branch_taken_0x241db4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x241db4) {
            ctx->pc = 0x241E0Cu;
            goto label_241e0c;
        }
    }
    ctx->pc = 0x241DBCu;
label_241dbc:
    // 0x241dbc: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x241dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_241dc0:
    // 0x241dc0: 0x10b500b1  beq         $a1, $s5, . + 4 + (0xB1 << 2)
label_241dc4:
    if (ctx->pc == 0x241DC4u) {
        ctx->pc = 0x241DC4u;
            // 0x241dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241DC8u;
        goto label_241dc8;
    }
    ctx->pc = 0x241DC0u;
    {
        const bool branch_taken_0x241dc0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 21));
        ctx->pc = 0x241DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241DC0u;
            // 0x241dc4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241dc0) {
            ctx->pc = 0x242088u;
            goto label_242088;
        }
    }
    ctx->pc = 0x241DC8u;
label_241dc8:
    // 0x241dc8: 0x12a00010  beqz        $s5, . + 4 + (0x10 << 2)
label_241dcc:
    if (ctx->pc == 0x241DCCu) {
        ctx->pc = 0x241DD0u;
        goto label_241dd0;
    }
    ctx->pc = 0x241DC8u;
    {
        const bool branch_taken_0x241dc8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x241dc8) {
            ctx->pc = 0x241E0Cu;
            goto label_241e0c;
        }
    }
    ctx->pc = 0x241DD0u;
label_241dd0:
    // 0x241dd0: 0x50a0fff7  beql        $a1, $zero, . + 4 + (-0x9 << 2)
label_241dd4:
    if (ctx->pc == 0x241DD4u) {
        ctx->pc = 0x241DD4u;
            // 0x241dd4: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241DD8u;
        goto label_241dd8;
    }
    ctx->pc = 0x241DD0u;
    {
        const bool branch_taken_0x241dd0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x241dd0) {
            ctx->pc = 0x241DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241DD0u;
            // 0x241dd4: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241db0;
        }
    }
    ctx->pc = 0x241DD8u;
label_241dd8:
    // 0x241dd8: 0x86420008  lh          $v0, 0x8($s2)
    ctx->pc = 0x241dd8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_241ddc:
    // 0x241ddc: 0x2c2102a  slt         $v0, $s6, $v0
    ctx->pc = 0x241ddcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_241de0:
    // 0x241de0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_241de4:
    if (ctx->pc == 0x241DE4u) {
        ctx->pc = 0x241DE8u;
        goto label_241de8;
    }
    ctx->pc = 0x241DE0u;
    {
        const bool branch_taken_0x241de0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241de0) {
            ctx->pc = 0x241E0Cu;
            goto label_241e0c;
        }
    }
    ctx->pc = 0x241DE8u;
label_241de8:
    // 0x241de8: 0xc090492  jal         func_241248
label_241dec:
    if (ctx->pc == 0x241DECu) {
        ctx->pc = 0x241DECu;
            // 0x241dec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241DF0u;
        goto label_241df0;
    }
    ctx->pc = 0x241DE8u;
    SET_GPR_U32(ctx, 31, 0x241DF0u);
    ctx->pc = 0x241DECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241DE8u;
            // 0x241dec: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241248u;
    if (runtime->hasFunction(0x241248u)) {
        auto targetFn = runtime->lookupFunction(0x241248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241DF0u; }
        if (ctx->pc != 0x241DF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241248_0x241248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241DF0u; }
        if (ctx->pc != 0x241DF0u) { return; }
    }
    ctx->pc = 0x241DF0u;
label_241df0:
    // 0x241df0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_241df4:
    if (ctx->pc == 0x241DF4u) {
        ctx->pc = 0x241DF8u;
        goto label_241df8;
    }
    ctx->pc = 0x241DF0u;
    {
        const bool branch_taken_0x241df0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241df0) {
            ctx->pc = 0x241E0Cu;
            goto label_241e0c;
        }
    }
    ctx->pc = 0x241DF8u;
label_241df8:
    // 0x241df8: 0x8e450010  lw          $a1, 0x10($s2)
    ctx->pc = 0x241df8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_241dfc:
    // 0x241dfc: 0xc0906f2  jal         func_241BC8
label_241e00:
    if (ctx->pc == 0x241E00u) {
        ctx->pc = 0x241E00u;
            // 0x241e00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241E04u;
        goto label_241e04;
    }
    ctx->pc = 0x241DFCu;
    SET_GPR_U32(ctx, 31, 0x241E04u);
    ctx->pc = 0x241E00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241DFCu;
            // 0x241e00: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241BC8u;
    if (runtime->hasFunction(0x241BC8u)) {
        auto targetFn = runtime->lookupFunction(0x241BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E04u; }
        if (ctx->pc != 0x241E04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241BC8_0x241bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x241E04u; }
        if (ctx->pc != 0x241E04u) { return; }
    }
    ctx->pc = 0x241E04u;
label_241e04:
    // 0x241e04: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
label_241e08:
    if (ctx->pc == 0x241E08u) {
        ctx->pc = 0x241E08u;
            // 0x241e08: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241E0Cu;
        goto label_241e0c;
    }
    ctx->pc = 0x241E04u;
    {
        const bool branch_taken_0x241e04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241e04) {
            ctx->pc = 0x241E08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241E04u;
            // 0x241e08: 0x240882d  daddu       $s1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241DB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241db0;
        }
    }
    ctx->pc = 0x241E0Cu;
label_241e0c:
    // 0x241e0c: 0x56530010  bnel        $s2, $s3, . + 4 + (0x10 << 2)
label_241e10:
    if (ctx->pc == 0x241E10u) {
        ctx->pc = 0x241E10u;
            // 0x241e10: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x241E14u;
        goto label_241e14;
    }
    ctx->pc = 0x241E0Cu;
    {
        const bool branch_taken_0x241e0c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 19));
        if (branch_taken_0x241e0c) {
            ctx->pc = 0x241E10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241E0Cu;
            // 0x241e10: 0x8e220014  lw          $v0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241E50u;
            goto label_241e50;
        }
    }
    ctx->pc = 0x241E14u;
label_241e14:
    // 0x241e14: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x241e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241e18:
    // 0x241e18: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x241e18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_241e1c:
    // 0x241e1c: 0xae510014  sw          $s1, 0x14($s2)
    ctx->pc = 0x241e1cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 17));
label_241e20:
    // 0x241e20: 0x9222000b  lbu         $v0, 0xB($s1)
    ctx->pc = 0x241e20u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
label_241e24:
    // 0x241e24: 0xa242000b  sb          $v0, 0xB($s2)
    ctx->pc = 0x241e24u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11), (uint8_t)GPR_U32(ctx, 2));
label_241e28:
    // 0x241e28: 0x8e340004  lw          $s4, 0x4($s1)
    ctx->pc = 0x241e28u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_241e2c:
    // 0x241e2c: 0xae540004  sw          $s4, 0x4($s2)
    ctx->pc = 0x241e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 20));
label_241e30:
    // 0x241e30: 0xae320004  sw          $s2, 0x4($s1)
    ctx->pc = 0x241e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 18));
label_241e34:
    // 0x241e34: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x241e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_241e38:
    // 0x241e38: 0x54510002  bnel        $v0, $s1, . + 4 + (0x2 << 2)
label_241e3c:
    if (ctx->pc == 0x241E3Cu) {
        ctx->pc = 0x241E3Cu;
            // 0x241e3c: 0xae920014  sw          $s2, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 18));
        ctx->pc = 0x241E40u;
        goto label_241e40;
    }
    ctx->pc = 0x241E38u;
    {
        const bool branch_taken_0x241e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x241e38) {
            ctx->pc = 0x241E3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241E38u;
            // 0x241e3c: 0xae920014  sw          $s2, 0x14($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 20), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241E44u;
            goto label_241e44;
        }
    }
    ctx->pc = 0x241E40u;
label_241e40:
    // 0x241e40: 0xae920010  sw          $s2, 0x10($s4)
    ctx->pc = 0x241e40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 18));
label_241e44:
    // 0x241e44: 0x60a02d  daddu       $s4, $v1, $zero
    ctx->pc = 0x241e44u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_241e48:
    // 0x241e48: 0x10000008  b           . + 4 + (0x8 << 2)
label_241e4c:
    if (ctx->pc == 0x241E4Cu) {
        ctx->pc = 0x241E4Cu;
            // 0x241e4c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241E50u;
        goto label_241e50;
    }
    ctx->pc = 0x241E48u;
    {
        const bool branch_taken_0x241e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241E48u;
            // 0x241e4c: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e48) {
            ctx->pc = 0x241E6Cu;
            goto label_241e6c;
        }
    }
    ctx->pc = 0x241E50u;
label_241e50:
    // 0x241e50: 0x200902d  daddu       $s2, $s0, $zero
    ctx->pc = 0x241e50u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_241e54:
    // 0x241e54: 0xae420014  sw          $v0, 0x14($s2)
    ctx->pc = 0x241e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 2));
label_241e58:
    // 0x241e58: 0xae320014  sw          $s2, 0x14($s1)
    ctx->pc = 0x241e58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 18));
label_241e5c:
    // 0x241e5c: 0xae510004  sw          $s1, 0x4($s2)
    ctx->pc = 0x241e5cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 17));
label_241e60:
    // 0x241e60: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x241e60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_241e64:
    // 0x241e64: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_241e68:
    if (ctx->pc == 0x241E68u) {
        ctx->pc = 0x241E68u;
            // 0x241e68: 0xac520004  sw          $s2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
        ctx->pc = 0x241E6Cu;
        goto label_241e6c;
    }
    ctx->pc = 0x241E64u;
    {
        const bool branch_taken_0x241e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241e64) {
            ctx->pc = 0x241E68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241E64u;
            // 0x241e68: 0xac520004  sw          $s2, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241E6Cu;
            goto label_241e6c;
        }
    }
    ctx->pc = 0x241E6Cu;
label_241e6c:
    // 0x241e6c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x241e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_241e70:
    // 0x241e70: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x241e70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_241e74:
    // 0x241e74: 0xa202000b  sb          $v0, 0xB($s0)
    ctx->pc = 0x241e74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 11), (uint8_t)GPR_U32(ctx, 2));
label_241e78:
    // 0x241e78: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x241e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_241e7c:
    // 0x241e7c: 0xa6030008  sh          $v1, 0x8($s0)
    ctx->pc = 0x241e7cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 3));
label_241e80:
    // 0x241e80: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x241e80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
label_241e84:
    // 0x241e84: 0x12a0000a  beqz        $s5, . + 4 + (0xA << 2)
label_241e88:
    if (ctx->pc == 0x241E88u) {
        ctx->pc = 0x241E88u;
            // 0x241e88: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x241E8Cu;
        goto label_241e8c;
    }
    ctx->pc = 0x241E84u;
    {
        const bool branch_taken_0x241e84 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x241E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241E84u;
            // 0x241e88: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241e84) {
            ctx->pc = 0x241EB0u;
            goto label_241eb0;
        }
    }
    ctx->pc = 0x241E8Cu;
label_241e8c:
    // 0x241e8c: 0xae550010  sw          $s5, 0x10($s2)
    ctx->pc = 0x241e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 21));
label_241e90:
    // 0x241e90: 0x9244000b  lbu         $a0, 0xB($s2)
    ctx->pc = 0x241e90u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
label_241e94:
    // 0x241e94: 0x96830008  lhu         $v1, 0x8($s4)
    ctx->pc = 0x241e94u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_241e98:
    // 0x241e98: 0xa6430008  sh          $v1, 0x8($s2)
    ctx->pc = 0x241e98u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 8), (uint16_t)GPR_U32(ctx, 3));
label_241e9c:
    // 0x241e9c: 0x9282000b  lbu         $v0, 0xB($s4)
    ctx->pc = 0x241e9cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 11)));
label_241ea0:
    // 0x241ea0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241ea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_241ea4:
    // 0x241ea4: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x241ea4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
label_241ea8:
    // 0x241ea8: 0xa244000b  sb          $a0, 0xB($s2)
    ctx->pc = 0x241ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11), (uint8_t)GPR_U32(ctx, 4));
label_241eac:
    // 0x241eac: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x241eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_241eb0:
    // 0x241eb0: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_241eb4:
    if (ctx->pc == 0x241EB4u) {
        ctx->pc = 0x241EB4u;
            // 0x241eb4: 0x8e710004  lw          $s1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->pc = 0x241EB8u;
        goto label_241eb8;
    }
    ctx->pc = 0x241EB0u;
    {
        const bool branch_taken_0x241eb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241EB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241EB0u;
            // 0x241eb4: 0x8e710004  lw          $s1, 0x4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241eb0) {
            ctx->pc = 0x241F7Cu;
            goto label_241f7c;
        }
    }
    ctx->pc = 0x241EB8u;
label_241eb8:
    // 0x241eb8: 0x96220008  lhu         $v0, 0x8($s1)
    ctx->pc = 0x241eb8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_241ebc:
    // 0x241ebc: 0x8e340014  lw          $s4, 0x14($s1)
    ctx->pc = 0x241ebcu;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_241ec0:
    // 0x241ec0: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x241ec0u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
label_241ec4:
    // 0x241ec4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x241ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_241ec8:
    // 0x241ec8: 0x16930002  bne         $s4, $s3, . + 4 + (0x2 << 2)
label_241ecc:
    if (ctx->pc == 0x241ECCu) {
        ctx->pc = 0x241ECCu;
            // 0x241ecc: 0x2b403  sra         $s6, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 16));
        ctx->pc = 0x241ED0u;
        goto label_241ed0;
    }
    ctx->pc = 0x241EC8u;
    {
        const bool branch_taken_0x241ec8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 19));
        ctx->pc = 0x241ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241EC8u;
            // 0x241ecc: 0x2b403  sra         $s6, $v0, 16 (Delay Slot)
        SET_GPR_S32(ctx, 22, SRA32(GPR_S32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ec8) {
            ctx->pc = 0x241ED4u;
            goto label_241ed4;
        }
    }
    ctx->pc = 0x241ED0u;
label_241ed0:
    // 0x241ed0: 0x8e340010  lw          $s4, 0x10($s1)
    ctx->pc = 0x241ed0u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_241ed4:
    // 0x241ed4: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x241ed4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_241ed8:
    // 0x241ed8: 0x443001a  bgezl       $v0, . + 4 + (0x1A << 2)
label_241edc:
    if (ctx->pc == 0x241EDCu) {
        ctx->pc = 0x241EDCu;
            // 0x241edc: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->pc = 0x241EE0u;
        goto label_241ee0;
    }
    ctx->pc = 0x241ED8u;
    {
        const bool branch_taken_0x241ed8 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x241ed8) {
            ctx->pc = 0x241EDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241ED8u;
            // 0x241edc: 0x8e820000  lw          $v0, 0x0($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241F44u;
            goto label_241f44;
        }
    }
    ctx->pc = 0x241EE0u;
label_241ee0:
    // 0x241ee0: 0x12800026  beqz        $s4, . + 4 + (0x26 << 2)
label_241ee4:
    if (ctx->pc == 0x241EE4u) {
        ctx->pc = 0x241EE4u;
            // 0x241ee4: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241EE8u;
        goto label_241ee8;
    }
    ctx->pc = 0x241EE0u;
    {
        const bool branch_taken_0x241ee0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x241EE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241EE0u;
            // 0x241ee4: 0x220982d  daddu       $s3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241ee0) {
            ctx->pc = 0x241F7Cu;
            goto label_241f7c;
        }
    }
    ctx->pc = 0x241EE8u;
label_241ee8:
    // 0x241ee8: 0x8e820010  lw          $v0, 0x10($s4)
    ctx->pc = 0x241ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
label_241eec:
    // 0x241eec: 0x0  nop
    ctx->pc = 0x241eecu;
    // NOP
label_241ef0:
    // 0x241ef0: 0x50400010  beql        $v0, $zero, . + 4 + (0x10 << 2)
label_241ef4:
    if (ctx->pc == 0x241EF4u) {
        ctx->pc = 0x241EF4u;
            // 0x241ef4: 0x8e940014  lw          $s4, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x241EF8u;
        goto label_241ef8;
    }
    ctx->pc = 0x241EF0u;
    {
        const bool branch_taken_0x241ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241ef0) {
            ctx->pc = 0x241EF4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241EF0u;
            // 0x241ef4: 0x8e940014  lw          $s4, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241F34u;
            goto label_241f34;
        }
    }
    ctx->pc = 0x241EF8u;
label_241ef8:
    // 0x241ef8: 0x86820008  lh          $v0, 0x8($s4)
    ctx->pc = 0x241ef8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 20), 8)));
label_241efc:
    // 0x241efc: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x241efcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_241f00:
    // 0x241f00: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_241f04:
    if (ctx->pc == 0x241F04u) {
        ctx->pc = 0x241F04u;
            // 0x241f04: 0x8e940014  lw          $s4, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x241F08u;
        goto label_241f08;
    }
    ctx->pc = 0x241F00u;
    {
        const bool branch_taken_0x241f00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241f00) {
            ctx->pc = 0x241F04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241F00u;
            // 0x241f04: 0x8e940014  lw          $s4, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241F34u;
            goto label_241f34;
        }
    }
    ctx->pc = 0x241F08u;
label_241f08:
    // 0x241f08: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x241f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
label_241f0c:
    // 0x241f0c: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
label_241f10:
    if (ctx->pc == 0x241F10u) {
        ctx->pc = 0x241F10u;
            // 0x241f10: 0x8e940014  lw          $s4, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->pc = 0x241F14u;
        goto label_241f14;
    }
    ctx->pc = 0x241F0Cu;
    {
        const bool branch_taken_0x241f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241f0c) {
            ctx->pc = 0x241F10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241F0Cu;
            // 0x241f10: 0x8e940014  lw          $s4, 0x14($s4) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241F34u;
            goto label_241f34;
        }
    }
    ctx->pc = 0x241F14u;
label_241f14:
    // 0x241f14: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x241f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_241f18:
    // 0x241f18: 0xc09070e  jal         func_241C38
label_241f1c:
    if (ctx->pc == 0x241F1Cu) {
        ctx->pc = 0x241F1Cu;
            // 0x241f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241F20u;
        goto label_241f20;
    }
    ctx->pc = 0x241F18u;
    SET_GPR_U32(ctx, 31, 0x241F20u);
    ctx->pc = 0x241F1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x241F18u;
            // 0x241f1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241C38u;
    goto label_241c38;
    ctx->pc = 0x241F20u;
label_241f20:
    // 0x241f20: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x241f20u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_241f24:
    // 0x241f24: 0xae700000  sw          $s0, 0x0($s3)
    ctx->pc = 0x241f24u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 16));
label_241f28:
    // 0x241f28: 0x26020004  addiu       $v0, $s0, 0x4
    ctx->pc = 0x241f28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_241f2c:
    // 0x241f2c: 0x50980b  movn        $s3, $v0, $s0
    ctx->pc = 0x241f2cu;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
label_241f30:
    // 0x241f30: 0x8e940014  lw          $s4, 0x14($s4)
    ctx->pc = 0x241f30u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_241f34:
    // 0x241f34: 0x5680ffee  bnel        $s4, $zero, . + 4 + (-0x12 << 2)
label_241f38:
    if (ctx->pc == 0x241F38u) {
        ctx->pc = 0x241F38u;
            // 0x241f38: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->pc = 0x241F3Cu;
        goto label_241f3c;
    }
    ctx->pc = 0x241F34u;
    {
        const bool branch_taken_0x241f34 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x241f34) {
            ctx->pc = 0x241F38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241F34u;
            // 0x241f38: 0x8e820010  lw          $v0, 0x10($s4) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241EF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241ef0;
        }
    }
    ctx->pc = 0x241F3Cu;
label_241f3c:
    // 0x241f3c: 0x1000000f  b           . + 4 + (0xF << 2)
label_241f40:
    if (ctx->pc == 0x241F40u) {
        ctx->pc = 0x241F44u;
        goto label_241f44;
    }
    ctx->pc = 0x241F3Cu;
    {
        const bool branch_taken_0x241f3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x241f3c) {
            ctx->pc = 0x241F7Cu;
            goto label_241f7c;
        }
    }
    ctx->pc = 0x241F44u;
label_241f44:
    // 0x241f44: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_241f48:
    if (ctx->pc == 0x241F48u) {
        ctx->pc = 0x241F48u;
            // 0x241f48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241F4Cu;
        goto label_241f4c;
    }
    ctx->pc = 0x241F44u;
    {
        const bool branch_taken_0x241f44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241F44u;
            // 0x241f48: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f44) {
            ctx->pc = 0x241F7Cu;
            goto label_241f7c;
        }
    }
    ctx->pc = 0x241F4Cu;
label_241f4c:
    // 0x241f4c: 0x10000005  b           . + 4 + (0x5 << 2)
label_241f50:
    if (ctx->pc == 0x241F50u) {
        ctx->pc = 0x241F50u;
            // 0x241f50: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241F54u;
        goto label_241f54;
    }
    ctx->pc = 0x241F4Cu;
    {
        const bool branch_taken_0x241f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241F4Cu;
            // 0x241f50: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f4c) {
            ctx->pc = 0x241F64u;
            goto label_241f64;
        }
    }
    ctx->pc = 0x241F54u;
label_241f54:
    // 0x241f54: 0x0  nop
    ctx->pc = 0x241f54u;
    // NOP
label_241f58:
    // 0x241f58: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x241f58u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_241f5c:
    // 0x241f5c: 0x52000006  beql        $s0, $zero, . + 4 + (0x6 << 2)
label_241f60:
    if (ctx->pc == 0x241F60u) {
        ctx->pc = 0x241F60u;
            // 0x241f60: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x241F64u;
        goto label_241f64;
    }
    ctx->pc = 0x241F5Cu;
    {
        const bool branch_taken_0x241f5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x241f5c) {
            ctx->pc = 0x241F60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241F5Cu;
            // 0x241f60: 0xae300000  sw          $s0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241F78u;
            goto label_241f78;
        }
    }
    ctx->pc = 0x241F64u;
label_241f64:
    // 0x241f64: 0x86020000  lh          $v0, 0x0($s0)
    ctx->pc = 0x241f64u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_241f68:
    // 0x241f68: 0x56102a  slt         $v0, $v0, $s6
    ctx->pc = 0x241f68u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_241f6c:
    // 0x241f6c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_241f70:
    if (ctx->pc == 0x241F70u) {
        ctx->pc = 0x241F70u;
            // 0x241f70: 0x26130004  addiu       $s3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x241F74u;
        goto label_241f74;
    }
    ctx->pc = 0x241F6Cu;
    {
        const bool branch_taken_0x241f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x241f6c) {
            ctx->pc = 0x241F70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241F6Cu;
            // 0x241f70: 0x26130004  addiu       $s3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241f58;
        }
    }
    ctx->pc = 0x241F74u;
label_241f74:
    // 0x241f74: 0xae300000  sw          $s0, 0x0($s1)
    ctx->pc = 0x241f74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 16));
label_241f78:
    // 0x241f78: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x241f78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
label_241f7c:
    // 0x241f7c: 0x12a00042  beqz        $s5, . + 4 + (0x42 << 2)
label_241f80:
    if (ctx->pc == 0x241F80u) {
        ctx->pc = 0x241F80u;
            // 0x241f80: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241F84u;
        goto label_241f84;
    }
    ctx->pc = 0x241F7Cu;
    {
        const bool branch_taken_0x241f7c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241F7Cu;
            // 0x241f80: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f7c) {
            ctx->pc = 0x242088u;
            goto label_242088;
        }
    }
    ctx->pc = 0x241F84u;
label_241f84:
    // 0x241f84: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x241f84u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_241f88:
    // 0x241f88: 0x5e102a  slt         $v0, $v0, $fp
    ctx->pc = 0x241f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_241f8c:
    // 0x241f8c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_241f90:
    if (ctx->pc == 0x241F90u) {
        ctx->pc = 0x241F90u;
            // 0x241f90: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241F94u;
        goto label_241f94;
    }
    ctx->pc = 0x241F8Cu;
    {
        const bool branch_taken_0x241f8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241F8Cu;
            // 0x241f90: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f8c) {
            ctx->pc = 0x241FB4u;
            goto label_241fb4;
        }
    }
    ctx->pc = 0x241F94u;
label_241f94:
    // 0x241f94: 0x1000003d  b           . + 4 + (0x3D << 2)
label_241f98:
    if (ctx->pc == 0x241F98u) {
        ctx->pc = 0x241F98u;
            // 0x241f98: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x241F9Cu;
        goto label_241f9c;
    }
    ctx->pc = 0x241F94u;
    {
        const bool branch_taken_0x241f94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241F94u;
            // 0x241f98: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241f94) {
            ctx->pc = 0x24208Cu;
            goto label_24208c;
        }
    }
    ctx->pc = 0x241F9Cu;
label_241f9c:
    // 0x241f9c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x241f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_241fa0:
    // 0x241fa0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x241fa0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_241fa4:
    // 0x241fa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x241fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_241fa8:
    // 0x241fa8: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x241fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
label_241fac:
    // 0x241fac: 0x10000036  b           . + 4 + (0x36 << 2)
label_241fb0:
    if (ctx->pc == 0x241FB0u) {
        ctx->pc = 0x241FB0u;
            // 0x241fb0: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x241FB4u;
        goto label_241fb4;
    }
    ctx->pc = 0x241FACu;
    {
        const bool branch_taken_0x241fac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241FACu;
            // 0x241fb0: 0xae500000  sw          $s0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fac) {
            ctx->pc = 0x242088u;
            goto label_242088;
        }
    }
    ctx->pc = 0x241FB4u;
label_241fb4:
    // 0x241fb4: 0x86560008  lh          $s6, 0x8($s2)
    ctx->pc = 0x241fb4u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_241fb8:
    // 0x241fb8: 0x220a02d  daddu       $s4, $s1, $zero
    ctx->pc = 0x241fb8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_241fbc:
    // 0x241fbc: 0x0  nop
    ctx->pc = 0x241fbcu;
    // NOP
label_241fc0:
    // 0x241fc0: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x241fc0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_241fc4:
    // 0x241fc4: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x241fc4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_241fc8:
    // 0x241fc8: 0x5e102a  slt         $v0, $v0, $fp
    ctx->pc = 0x241fc8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 30)) ? 1 : 0);
label_241fcc:
    // 0x241fcc: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_241fd0:
    if (ctx->pc == 0x241FD0u) {
        ctx->pc = 0x241FD0u;
            // 0x241fd0: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241FD4u;
        goto label_241fd4;
    }
    ctx->pc = 0x241FCCu;
    {
        const bool branch_taken_0x241fcc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x241FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241FCCu;
            // 0x241fd0: 0x280982d  daddu       $s3, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fcc) {
            ctx->pc = 0x241FE0u;
            goto label_241fe0;
        }
    }
    ctx->pc = 0x241FD4u;
label_241fd4:
    // 0x241fd4: 0x5697fffa  bnel        $s4, $s7, . + 4 + (-0x6 << 2)
label_241fd8:
    if (ctx->pc == 0x241FD8u) {
        ctx->pc = 0x241FD8u;
            // 0x241fd8: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x241FDCu;
        goto label_241fdc;
    }
    ctx->pc = 0x241FD4u;
    {
        const bool branch_taken_0x241fd4 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 23));
        if (branch_taken_0x241fd4) {
            ctx->pc = 0x241FD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241FD4u;
            // 0x241fd8: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241FC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241fc0;
        }
    }
    ctx->pc = 0x241FDCu;
label_241fdc:
    // 0x241fdc: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x241fdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_241fe0:
    // 0x241fe0: 0x1000001b  b           . + 4 + (0x1B << 2)
label_241fe4:
    if (ctx->pc == 0x241FE4u) {
        ctx->pc = 0x241FE4u;
            // 0x241fe4: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x241FE8u;
        goto label_241fe8;
    }
    ctx->pc = 0x241FE0u;
    {
        const bool branch_taken_0x241fe0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x241FE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x241FE0u;
            // 0x241fe4: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x241fe0) {
            ctx->pc = 0x242050u;
            goto label_242050;
        }
    }
    ctx->pc = 0x241FE8u;
label_241fe8:
    // 0x241fe8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241fe8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_241fec:
    // 0x241fec: 0x5040000c  beql        $v0, $zero, . + 4 + (0xC << 2)
label_241ff0:
    if (ctx->pc == 0x241FF0u) {
        ctx->pc = 0x241FF0u;
            // 0x241ff0: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x241FF4u;
        goto label_241ff4;
    }
    ctx->pc = 0x241FECu;
    {
        const bool branch_taken_0x241fec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x241fec) {
            ctx->pc = 0x241FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x241FECu;
            // 0x241ff0: 0x8e110008  lw          $s1, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242020u;
            goto label_242020;
        }
    }
    ctx->pc = 0x241FF4u;
label_241ff4:
    // 0x241ff4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x241ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_241ff8:
    // 0x241ff8: 0x9242000b  lbu         $v0, 0xB($s2)
    ctx->pc = 0x241ff8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
label_241ffc:
    // 0x241ffc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x241ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_242000:
    // 0x242000: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_242004:
    if (ctx->pc == 0x242004u) {
        ctx->pc = 0x242004u;
            // 0x242004: 0x8c710010  lw          $s1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->pc = 0x242008u;
        goto label_242008;
    }
    ctx->pc = 0x242000u;
    {
        const bool branch_taken_0x242000 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242000u;
            // 0x242004: 0x8c710010  lw          $s1, 0x10($v1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242000) {
            ctx->pc = 0x242020u;
            goto label_242020;
        }
    }
    ctx->pc = 0x242008u;
label_242008:
    // 0x242008: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x242008u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_24200c:
    // 0x24200c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x24200cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_242010:
    // 0x242010: 0xc08b5ac  jal         func_22D6B0
label_242014:
    if (ctx->pc == 0x242014u) {
        ctx->pc = 0x242014u;
            // 0x242014: 0x24a56518  addiu       $a1, $a1, 0x6518 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25880));
        ctx->pc = 0x242018u;
        goto label_242018;
    }
    ctx->pc = 0x242010u;
    SET_GPR_U32(ctx, 31, 0x242018u);
    ctx->pc = 0x242014u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242010u;
            // 0x242014: 0x24a56518  addiu       $a1, $a1, 0x6518 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25880));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242018u; }
        if (ctx->pc != 0x242018u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242018u; }
        if (ctx->pc != 0x242018u) { return; }
    }
    ctx->pc = 0x242018u;
label_242018:
    // 0x242018: 0x1000001b  b           . + 4 + (0x1B << 2)
label_24201c:
    if (ctx->pc == 0x24201Cu) {
        ctx->pc = 0x24201Cu;
            // 0x24201c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242020u;
        goto label_242020;
    }
    ctx->pc = 0x242018u;
    {
        const bool branch_taken_0x242018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24201Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242018u;
            // 0x24201c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242018) {
            ctx->pc = 0x242088u;
            goto label_242088;
        }
    }
    ctx->pc = 0x242020u;
label_242020:
    // 0x242020: 0x1235ffde  beq         $s1, $s5, . + 4 + (-0x22 << 2)
label_242024:
    if (ctx->pc == 0x242024u) {
        ctx->pc = 0x242024u;
            // 0x242024: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242028u;
        goto label_242028;
    }
    ctx->pc = 0x242020u;
    {
        const bool branch_taken_0x242020 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 21));
        ctx->pc = 0x242024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242020u;
            // 0x242024: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242020) {
            ctx->pc = 0x241F9Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241f9c;
        }
    }
    ctx->pc = 0x242028u;
label_242028:
    // 0x242028: 0xc090492  jal         func_241248
label_24202c:
    if (ctx->pc == 0x24202Cu) {
        ctx->pc = 0x24202Cu;
            // 0x24202c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242030u;
        goto label_242030;
    }
    ctx->pc = 0x242028u;
    SET_GPR_U32(ctx, 31, 0x242030u);
    ctx->pc = 0x24202Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242028u;
            // 0x24202c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241248u;
    if (runtime->hasFunction(0x241248u)) {
        auto targetFn = runtime->lookupFunction(0x241248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242030u; }
        if (ctx->pc != 0x242030u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241248_0x241248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242030u; }
        if (ctx->pc != 0x242030u) { return; }
    }
    ctx->pc = 0x242030u;
label_242030:
    // 0x242030: 0x14400010  bnez        $v0, . + 4 + (0x10 << 2)
label_242034:
    if (ctx->pc == 0x242034u) {
        ctx->pc = 0x242034u;
            // 0x242034: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242038u;
        goto label_242038;
    }
    ctx->pc = 0x242030u;
    {
        const bool branch_taken_0x242030 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242034u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242030u;
            // 0x242034: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242030) {
            ctx->pc = 0x242074u;
            goto label_242074;
        }
    }
    ctx->pc = 0x242038u;
label_242038:
    // 0x242038: 0xc0906f2  jal         func_241BC8
label_24203c:
    if (ctx->pc == 0x24203Cu) {
        ctx->pc = 0x24203Cu;
            // 0x24203c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242040u;
        goto label_242040;
    }
    ctx->pc = 0x242038u;
    SET_GPR_U32(ctx, 31, 0x242040u);
    ctx->pc = 0x24203Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242038u;
            // 0x24203c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241BC8u;
    if (runtime->hasFunction(0x241BC8u)) {
        auto targetFn = runtime->lookupFunction(0x241BC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242040u; }
        if (ctx->pc != 0x242040u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241BC8_0x241bc8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242040u; }
        if (ctx->pc != 0x242040u) { return; }
    }
    ctx->pc = 0x242040u;
label_242040:
    // 0x242040: 0x5440000d  bnel        $v0, $zero, . + 4 + (0xD << 2)
label_242044:
    if (ctx->pc == 0x242044u) {
        ctx->pc = 0x242044u;
            // 0x242044: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x242048u;
        goto label_242048;
    }
    ctx->pc = 0x242040u;
    {
        const bool branch_taken_0x242040 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242040) {
            ctx->pc = 0x242044u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242040u;
            // 0x242044: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242078u;
            goto label_242078;
        }
    }
    ctx->pc = 0x242048u;
label_242048:
    // 0x242048: 0x26130004  addiu       $s3, $s0, 0x4
    ctx->pc = 0x242048u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_24204c:
    // 0x24204c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x24204cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_242050:
    // 0x242050: 0x52000009  beql        $s0, $zero, . + 4 + (0x9 << 2)
label_242054:
    if (ctx->pc == 0x242054u) {
        ctx->pc = 0x242054u;
            // 0x242054: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x242058u;
        goto label_242058;
    }
    ctx->pc = 0x242050u;
    {
        const bool branch_taken_0x242050 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x242050) {
            ctx->pc = 0x242054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242050u;
            // 0x242054: 0x8e650000  lw          $a1, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242078u;
            goto label_242078;
        }
    }
    ctx->pc = 0x242058u;
label_242058:
    // 0x242058: 0x86030000  lh          $v1, 0x0($s0)
    ctx->pc = 0x242058u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
label_24205c:
    // 0x24205c: 0x76102a  slt         $v0, $v1, $s6
    ctx->pc = 0x24205cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_242060:
    // 0x242060: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_242064:
    if (ctx->pc == 0x242064u) {
        ctx->pc = 0x242064u;
            // 0x242064: 0x26130004  addiu       $s3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x242068u;
        goto label_242068;
    }
    ctx->pc = 0x242060u;
    {
        const bool branch_taken_0x242060 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242060) {
            ctx->pc = 0x242064u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242060u;
            // 0x242064: 0x26130004  addiu       $s3, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24204Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_24204c;
        }
    }
    ctx->pc = 0x242068u;
label_242068:
    // 0x242068: 0x2c3102a  slt         $v0, $s6, $v1
    ctx->pc = 0x242068u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24206c:
    // 0x24206c: 0x5040ffde  beql        $v0, $zero, . + 4 + (-0x22 << 2)
label_242070:
    if (ctx->pc == 0x242070u) {
        ctx->pc = 0x242070u;
            // 0x242070: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->pc = 0x242074u;
        goto label_242074;
    }
    ctx->pc = 0x24206Cu;
    {
        const bool branch_taken_0x24206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x24206c) {
            ctx->pc = 0x242070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24206Cu;
            // 0x242070: 0x92020003  lbu         $v0, 0x3($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x241FE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_241fe8;
        }
    }
    ctx->pc = 0x242074u;
label_242074:
    // 0x242074: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x242074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_242078:
    // 0x242078: 0xc09070e  jal         func_241C38
label_24207c:
    if (ctx->pc == 0x24207Cu) {
        ctx->pc = 0x24207Cu;
            // 0x24207c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242080u;
        goto label_242080;
    }
    ctx->pc = 0x242078u;
    SET_GPR_U32(ctx, 31, 0x242080u);
    ctx->pc = 0x24207Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242078u;
            // 0x24207c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241C38u;
    goto label_241c38;
    ctx->pc = 0x242080u;
label_242080:
    // 0x242080: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x242080u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_242084:
    // 0x242084: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x242084u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_242088:
    // 0x242088: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x242088u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_24208c:
    // 0x24208c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x24208cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_242090:
    // 0x242090: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x242090u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_242094:
    // 0x242094: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x242094u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_242098:
    // 0x242098: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x242098u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24209c:
    // 0x24209c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x24209cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2420a0:
    // 0x2420a0: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2420a0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2420a4:
    // 0x2420a4: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x2420a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2420a8:
    // 0x2420a8: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2420a8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2420ac:
    // 0x2420ac: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2420acu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2420b0:
    // 0x2420b0: 0x3e00008  jr          $ra
label_2420b4:
    if (ctx->pc == 0x2420B4u) {
        ctx->pc = 0x2420B4u;
            // 0x2420b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x2420B8u;
        goto label_2420b8;
    }
    ctx->pc = 0x2420B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2420B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2420B0u;
            // 0x2420b4: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2420B8u;
label_2420b8:
    // 0x2420b8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2420b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_2420bc:
    // 0x2420bc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x2420bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_2420c0:
    // 0x2420c0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x2420c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_2420c4:
    // 0x2420c4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2420c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2420c8:
    // 0x2420c8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2420c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2420cc:
    // 0x2420cc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2420ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2420d0:
    // 0x2420d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2420d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2420d4:
    // 0x2420d4: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x2420d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
label_2420d8:
    // 0x2420d8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2420d8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2420dc:
    // 0x2420dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2420dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2420e0:
    // 0x2420e0: 0x8cd00000  lw          $s0, 0x0($a2)
    ctx->pc = 0x2420e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2420e4:
    // 0x2420e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2420e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2420e8:
    // 0x2420e8: 0xc09046e  jal         func_2411B8
label_2420ec:
    if (ctx->pc == 0x2420ECu) {
        ctx->pc = 0x2420ECu;
            // 0x2420ec: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2420F0u;
        goto label_2420f0;
    }
    ctx->pc = 0x2420E8u;
    SET_GPR_U32(ctx, 31, 0x2420F0u);
    ctx->pc = 0x2420ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2420E8u;
            // 0x2420ec: 0x200a82d  daddu       $s5, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2411B8u;
    if (runtime->hasFunction(0x2411B8u)) {
        auto targetFn = runtime->lookupFunction(0x2411B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2420F0u; }
        if (ctx->pc != 0x2420F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002411B8_0x2411b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2420F0u; }
        if (ctx->pc != 0x2420F0u) { return; }
    }
    ctx->pc = 0x2420F0u;
label_2420f0:
    // 0x2420f0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2420f0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2420f4:
    // 0x2420f4: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x2420f4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2420f8:
    // 0x2420f8: 0x92260000  lbu         $a2, 0x0($s1)
    ctx->pc = 0x2420f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
label_2420fc:
    // 0x2420fc: 0x1240002f  beqz        $s2, . + 4 + (0x2F << 2)
label_242100:
    if (ctx->pc == 0x242100u) {
        ctx->pc = 0x242100u;
            // 0x242100: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242104u;
        goto label_242104;
    }
    ctx->pc = 0x2420FCu;
    {
        const bool branch_taken_0x2420fc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x242100u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2420FCu;
            // 0x242100: 0x240a02d  daddu       $s4, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2420fc) {
            ctx->pc = 0x2421BCu;
            goto label_2421bc;
        }
    }
    ctx->pc = 0x242104u;
label_242104:
    // 0x242104: 0x10d00007  beq         $a2, $s0, . + 4 + (0x7 << 2)
label_242108:
    if (ctx->pc == 0x242108u) {
        ctx->pc = 0x242108u;
            // 0x242108: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->pc = 0x24210Cu;
        goto label_24210c;
    }
    ctx->pc = 0x242104u;
    {
        const bool branch_taken_0x242104 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 16));
        ctx->pc = 0x242108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242104u;
            // 0x242108: 0x2302021  addu        $a0, $s1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242104) {
            ctx->pc = 0x242124u;
            goto label_242124;
        }
    }
    ctx->pc = 0x24210Cu;
label_24210c:
    // 0x24210c: 0x8e45000c  lw          $a1, 0xC($s2)
    ctx->pc = 0x24210cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_242110:
    // 0x242110: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x242110u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
label_242114:
    // 0x242114: 0xc048c5e  jal         func_123178
label_242118:
    if (ctx->pc == 0x242118u) {
        ctx->pc = 0x242118u;
            // 0x242118: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->pc = 0x24211Cu;
        goto label_24211c;
    }
    ctx->pc = 0x242114u;
    SET_GPR_U32(ctx, 31, 0x24211Cu);
    ctx->pc = 0x242118u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242114u;
            // 0x242118: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123178u;
    if (runtime->hasFunction(0x123178u)) {
        auto targetFn = runtime->lookupFunction(0x123178u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24211Cu; }
        if (ctx->pc != 0x24211Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123178_0x123178(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x24211Cu; }
        if (ctx->pc != 0x24211Cu) { return; }
    }
    ctx->pc = 0x24211Cu;
label_24211c:
    // 0x24211c: 0x14400106  bnez        $v0, . + 4 + (0x106 << 2)
label_242120:
    if (ctx->pc == 0x242120u) {
        ctx->pc = 0x242120u;
            // 0x242120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242124u;
        goto label_242124;
    }
    ctx->pc = 0x24211Cu;
    {
        const bool branch_taken_0x24211c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24211Cu;
            // 0x242120: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24211c) {
            ctx->pc = 0x242538u;
            goto label_242538;
        }
    }
    ctx->pc = 0x242124u;
label_242124:
    // 0x242124: 0x12600013  beqz        $s3, . + 4 + (0x13 << 2)
label_242128:
    if (ctx->pc == 0x242128u) {
        ctx->pc = 0x242128u;
            // 0x242128: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24212Cu;
        goto label_24212c;
    }
    ctx->pc = 0x242124u;
    {
        const bool branch_taken_0x242124 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x242128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242124u;
            // 0x242128: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242124) {
            ctx->pc = 0x242174u;
            goto label_242174;
        }
    }
    ctx->pc = 0x24212Cu;
label_24212c:
    // 0x24212c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x24212cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_242130:
    // 0x242130: 0xc090624  jal         func_241890
label_242134:
    if (ctx->pc == 0x242134u) {
        ctx->pc = 0x242134u;
            // 0x242134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x242138u;
        goto label_242138;
    }
    ctx->pc = 0x242130u;
    SET_GPR_U32(ctx, 31, 0x242138u);
    ctx->pc = 0x242134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242130u;
            // 0x242134: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x241890u;
    if (runtime->hasFunction(0x241890u)) {
        auto targetFn = runtime->lookupFunction(0x241890u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242138u; }
        if (ctx->pc != 0x242138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00241890_0x241890(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242138u; }
        if (ctx->pc != 0x242138u) { return; }
    }
    ctx->pc = 0x242138u;
label_242138:
    // 0x242138: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x242138u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_24213c:
    // 0x24213c: 0x120000fe  beqz        $s0, . + 4 + (0xFE << 2)
label_242140:
    if (ctx->pc == 0x242140u) {
        ctx->pc = 0x242140u;
            // 0x242140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242144u;
        goto label_242144;
    }
    ctx->pc = 0x24213Cu;
    {
        const bool branch_taken_0x24213c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x242140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24213Cu;
            // 0x242140: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24213c) {
            ctx->pc = 0x242538u;
            goto label_242538;
        }
    }
    ctx->pc = 0x242144u;
label_242144:
    // 0x242144: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x242144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_242148:
    // 0x242148: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x242148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_24214c:
    // 0x24214c: 0x1082000a  beq         $a0, $v0, . + 4 + (0xA << 2)
label_242150:
    if (ctx->pc == 0x242150u) {
        ctx->pc = 0x242154u;
        goto label_242154;
    }
    ctx->pc = 0x24214Cu;
    {
        const bool branch_taken_0x24214c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x24214c) {
            ctx->pc = 0x242178u;
            goto label_242178;
        }
    }
    ctx->pc = 0x242154u;
label_242154:
    // 0x242154: 0x8e520014  lw          $s2, 0x14($s2)
    ctx->pc = 0x242154u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_242158:
    // 0x242158: 0x524000f7  beql        $s2, $zero, . + 4 + (0xF7 << 2)
label_24215c:
    if (ctx->pc == 0x24215Cu) {
        ctx->pc = 0x24215Cu;
            // 0x24215c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242160u;
        goto label_242160;
    }
    ctx->pc = 0x242158u;
    {
        const bool branch_taken_0x242158 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x242158) {
            ctx->pc = 0x24215Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242158u;
            // 0x24215c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242538u;
            goto label_242538;
        }
    }
    ctx->pc = 0x242160u;
label_242160:
    // 0x242160: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x242160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_242164:
    // 0x242164: 0x5482fffc  bnel        $a0, $v0, . + 4 + (-0x4 << 2)
label_242168:
    if (ctx->pc == 0x242168u) {
        ctx->pc = 0x242168u;
            // 0x242168: 0x8e520014  lw          $s2, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->pc = 0x24216Cu;
        goto label_24216c;
    }
    ctx->pc = 0x242164u;
    {
        const bool branch_taken_0x242164 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x242164) {
            ctx->pc = 0x242168u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242164u;
            // 0x242168: 0x8e520014  lw          $s2, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242158u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242158;
        }
    }
    ctx->pc = 0x24216Cu;
label_24216c:
    // 0x24216c: 0x10000002  b           . + 4 + (0x2 << 2)
label_242170:
    if (ctx->pc == 0x242170u) {
        ctx->pc = 0x242174u;
        goto label_242174;
    }
    ctx->pc = 0x24216Cu;
    {
        const bool branch_taken_0x24216c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24216c) {
            ctx->pc = 0x242178u;
            goto label_242178;
        }
    }
    ctx->pc = 0x242174u;
label_242174:
    // 0x242174: 0x8e440010  lw          $a0, 0x10($s2)
    ctx->pc = 0x242174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_242178:
    // 0x242178: 0x5080004c  beql        $a0, $zero, . + 4 + (0x4C << 2)
label_24217c:
    if (ctx->pc == 0x24217Cu) {
        ctx->pc = 0x24217Cu;
            // 0x24217c: 0x9243000b  lbu         $v1, 0xB($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
        ctx->pc = 0x242180u;
        goto label_242180;
    }
    ctx->pc = 0x242178u;
    {
        const bool branch_taken_0x242178 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x242178) {
            ctx->pc = 0x24217Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242178u;
            // 0x24217c: 0x9243000b  lbu         $v1, 0xB($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2422ACu;
            goto label_2422ac;
        }
    }
    ctx->pc = 0x242180u;
label_242180:
    // 0x242180: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x242180u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_242184:
    // 0x242184: 0x10e00048  beqz        $a3, . + 4 + (0x48 << 2)
label_242188:
    if (ctx->pc == 0x242188u) {
        ctx->pc = 0x242188u;
            // 0x242188: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24218Cu;
        goto label_24218c;
    }
    ctx->pc = 0x242184u;
    {
        const bool branch_taken_0x242184 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x242188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242184u;
            // 0x242188: 0xe0302d  daddu       $a2, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242184) {
            ctx->pc = 0x2422A8u;
            goto label_2422a8;
        }
    }
    ctx->pc = 0x24218Cu;
label_24218c:
    // 0x24218c: 0x9243000b  lbu         $v1, 0xB($s2)
    ctx->pc = 0x24218cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
label_242190:
    // 0x242190: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x242190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_242194:
    // 0x242194: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_242198:
    if (ctx->pc == 0x242198u) {
        ctx->pc = 0x242198u;
            // 0x242198: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->pc = 0x24219Cu;
        goto label_24219c;
    }
    ctx->pc = 0x242194u;
    {
        const bool branch_taken_0x242194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242194u;
            // 0x242198: 0x8ce20008  lw          $v0, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242194) {
            ctx->pc = 0x2421C4u;
            goto label_2421c4;
        }
    }
    ctx->pc = 0x24219Cu;
label_24219c:
    // 0x24219c: 0x14520004  bne         $v0, $s2, . + 4 + (0x4 << 2)
label_2421a0:
    if (ctx->pc == 0x2421A0u) {
        ctx->pc = 0x2421A0u;
            // 0x2421a0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x2421A4u;
        goto label_2421a4;
    }
    ctx->pc = 0x24219Cu;
    {
        const bool branch_taken_0x24219c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x2421A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24219Cu;
            // 0x2421a0: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24219c) {
            ctx->pc = 0x2421B0u;
            goto label_2421b0;
        }
    }
    ctx->pc = 0x2421A4u;
label_2421a4:
    // 0x2421a4: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2421a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_2421a8:
    // 0x2421a8: 0x58400012  blezl       $v0, . + 4 + (0x12 << 2)
label_2421ac:
    if (ctx->pc == 0x2421ACu) {
        ctx->pc = 0x2421ACu;
            // 0x2421ac: 0x8e910004  lw          $s1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->pc = 0x2421B0u;
        goto label_2421b0;
    }
    ctx->pc = 0x2421A8u;
    {
        const bool branch_taken_0x2421a8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2421a8) {
            ctx->pc = 0x2421ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2421A8u;
            // 0x2421ac: 0x8e910004  lw          $s1, 0x4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2421F4u;
            goto label_2421f4;
        }
    }
    ctx->pc = 0x2421B0u;
label_2421b0:
    // 0x2421b0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2421b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2421b4:
    // 0x2421b4: 0xc08b5ac  jal         func_22D6B0
label_2421b8:
    if (ctx->pc == 0x2421B8u) {
        ctx->pc = 0x2421B8u;
            // 0x2421b8: 0x24a56548  addiu       $a1, $a1, 0x6548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25928));
        ctx->pc = 0x2421BCu;
        goto label_2421bc;
    }
    ctx->pc = 0x2421B4u;
    SET_GPR_U32(ctx, 31, 0x2421BCu);
    ctx->pc = 0x2421B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2421B4u;
            // 0x2421b8: 0x24a56548  addiu       $a1, $a1, 0x6548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2421BCu; }
        if (ctx->pc != 0x2421BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2421BCu; }
        if (ctx->pc != 0x2421BCu) { return; }
    }
    ctx->pc = 0x2421BCu;
label_2421bc:
    // 0x2421bc: 0x100000de  b           . + 4 + (0xDE << 2)
label_2421c0:
    if (ctx->pc == 0x2421C0u) {
        ctx->pc = 0x2421C0u;
            // 0x2421c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2421C4u;
        goto label_2421c4;
    }
    ctx->pc = 0x2421BCu;
    {
        const bool branch_taken_0x2421bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2421C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2421BCu;
            // 0x2421c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421bc) {
            ctx->pc = 0x242538u;
            goto label_242538;
        }
    }
    ctx->pc = 0x2421C4u;
label_2421c4:
    // 0x2421c4: 0x10440006  beq         $v0, $a0, . + 4 + (0x6 << 2)
label_2421c8:
    if (ctx->pc == 0x2421C8u) {
        ctx->pc = 0x2421C8u;
            // 0x2421c8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x2421CCu;
        goto label_2421cc;
    }
    ctx->pc = 0x2421C4u;
    {
        const bool branch_taken_0x2421c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2421C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2421C4u;
            // 0x2421c8: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421c4) {
            ctx->pc = 0x2421E0u;
            goto label_2421e0;
        }
    }
    ctx->pc = 0x2421CCu;
label_2421cc:
    // 0x2421cc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x2421ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2421d0:
    // 0x2421d0: 0xc08b5ac  jal         func_22D6B0
label_2421d4:
    if (ctx->pc == 0x2421D4u) {
        ctx->pc = 0x2421D4u;
            // 0x2421d4: 0x24a56548  addiu       $a1, $a1, 0x6548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25928));
        ctx->pc = 0x2421D8u;
        goto label_2421d8;
    }
    ctx->pc = 0x2421D0u;
    SET_GPR_U32(ctx, 31, 0x2421D8u);
    ctx->pc = 0x2421D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2421D0u;
            // 0x2421d4: 0x24a56548  addiu       $a1, $a1, 0x6548 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25928));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2421D8u; }
        if (ctx->pc != 0x2421D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2421D8u; }
        if (ctx->pc != 0x2421D8u) { return; }
    }
    ctx->pc = 0x2421D8u;
label_2421d8:
    // 0x2421d8: 0x10000034  b           . + 4 + (0x34 << 2)
label_2421dc:
    if (ctx->pc == 0x2421DCu) {
        ctx->pc = 0x2421DCu;
            // 0x2421dc: 0x9243000b  lbu         $v1, 0xB($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
        ctx->pc = 0x2421E0u;
        goto label_2421e0;
    }
    ctx->pc = 0x2421D8u;
    {
        const bool branch_taken_0x2421d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2421DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2421D8u;
            // 0x2421dc: 0x9243000b  lbu         $v1, 0xB($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421d8) {
            ctx->pc = 0x2422ACu;
            goto label_2422ac;
        }
    }
    ctx->pc = 0x2421E0u;
label_2421e0:
    // 0x2421e0: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x2421e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_2421e4:
    // 0x2421e4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2421e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2421e8:
    // 0x2421e8: 0x441002f  bgez        $v0, . + 4 + (0x2F << 2)
label_2421ec:
    if (ctx->pc == 0x2421ECu) {
        ctx->pc = 0x2421ECu;
            // 0x2421ec: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x2421F0u;
        goto label_2421f0;
    }
    ctx->pc = 0x2421E8u;
    {
        const bool branch_taken_0x2421e8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2421ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2421E8u;
            // 0x2421ec: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2421e8) {
            ctx->pc = 0x2422A8u;
            goto label_2422a8;
        }
    }
    ctx->pc = 0x2421F0u;
label_2421f0:
    // 0x2421f0: 0x8e910004  lw          $s1, 0x4($s4)
    ctx->pc = 0x2421f0u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2421f4:
    // 0x2421f4: 0x86430008  lh          $v1, 0x8($s2)
    ctx->pc = 0x2421f4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 8)));
label_2421f8:
    // 0x2421f8: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x2421f8u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_2421fc:
    // 0x2421fc: 0x31827  nor         $v1, $zero, $v1
    ctx->pc = 0x2421fcu;
    SET_GPR_U64(ctx, 3, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 3)));
label_242200:
    // 0x242200: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x242200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_242204:
    // 0x242204: 0x54400029  bnel        $v0, $zero, . + 4 + (0x29 << 2)
label_242208:
    if (ctx->pc == 0x242208u) {
        ctx->pc = 0x242208u;
            // 0x242208: 0x9243000b  lbu         $v1, 0xB($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
        ctx->pc = 0x24220Cu;
        goto label_24220c;
    }
    ctx->pc = 0x242204u;
    {
        const bool branch_taken_0x242204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242204) {
            ctx->pc = 0x242208u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242204u;
            // 0x242208: 0x9243000b  lbu         $v1, 0xB($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2422ACu;
            goto label_2422ac;
        }
    }
    ctx->pc = 0x24220Cu;
label_24220c:
    // 0x24220c: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x24220cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_242210:
    // 0x242210: 0x8e310004  lw          $s1, 0x4($s1)
    ctx->pc = 0x242210u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_242214:
    // 0x242214: 0x86220008  lh          $v0, 0x8($s1)
    ctx->pc = 0x242214u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 8)));
label_242218:
    // 0x242218: 0x43102a  slt         $v0, $v0, $v1
    ctx->pc = 0x242218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_24221c:
    // 0x24221c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_242220:
    if (ctx->pc == 0x242220u) {
        ctx->pc = 0x242220u;
            // 0x242220: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x242224u;
        goto label_242224;
    }
    ctx->pc = 0x24221Cu;
    {
        const bool branch_taken_0x24221c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x24221c) {
            ctx->pc = 0x242220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24221Cu;
            // 0x242220: 0x8e070000  lw          $a3, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242230u;
            goto label_242230;
        }
    }
    ctx->pc = 0x242224u;
label_242224:
    // 0x242224: 0x5615fffa  bnel        $s0, $s5, . + 4 + (-0x6 << 2)
label_242228:
    if (ctx->pc == 0x242228u) {
        ctx->pc = 0x242228u;
            // 0x242228: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24222Cu;
        goto label_24222c;
    }
    ctx->pc = 0x242224u;
    {
        const bool branch_taken_0x242224 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 21));
        if (branch_taken_0x242224) {
            ctx->pc = 0x242228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242224u;
            // 0x242228: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242210u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242210;
        }
    }
    ctx->pc = 0x24222Cu;
label_24222c:
    // 0x24222c: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x24222cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_242230:
    // 0x242230: 0x10e00014  beqz        $a3, . + 4 + (0x14 << 2)
label_242234:
    if (ctx->pc == 0x242234u) {
        ctx->pc = 0x242234u;
            // 0x242234: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x242238u;
        goto label_242238;
    }
    ctx->pc = 0x242230u;
    {
        const bool branch_taken_0x242230 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x242234u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242230u;
            // 0x242234: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242230) {
            ctx->pc = 0x242284u;
            goto label_242284;
        }
    }
    ctx->pc = 0x242238u;
label_242238:
    // 0x242238: 0x14e60005  bne         $a3, $a2, . + 4 + (0x5 << 2)
label_24223c:
    if (ctx->pc == 0x24223Cu) {
        ctx->pc = 0x24223Cu;
            // 0x24223c: 0x24e50004  addiu       $a1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x242240u;
        goto label_242240;
    }
    ctx->pc = 0x242238u;
    {
        const bool branch_taken_0x242238 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x24223Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242238u;
            // 0x24223c: 0x24e50004  addiu       $a1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242238) {
            ctx->pc = 0x242250u;
            goto label_242250;
        }
    }
    ctx->pc = 0x242240u;
label_242240:
    // 0x242240: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x242240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_242244:
    // 0x242244: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x242244u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_242248:
    // 0x242248: 0x10000009  b           . + 4 + (0x9 << 2)
label_24224c:
    if (ctx->pc == 0x24224Cu) {
        ctx->pc = 0x24224Cu;
            // 0x24224c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x242250u;
        goto label_242250;
    }
    ctx->pc = 0x242248u;
    {
        const bool branch_taken_0x242248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24224Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242248u;
            // 0x24224c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242248) {
            ctx->pc = 0x242270u;
            goto label_242270;
        }
    }
    ctx->pc = 0x242250u;
label_242250:
    // 0x242250: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x242250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_242254:
    // 0x242254: 0x50e0000b  beql        $a3, $zero, . + 4 + (0xB << 2)
label_242258:
    if (ctx->pc == 0x242258u) {
        ctx->pc = 0x242258u;
            // 0x242258: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x24225Cu;
        goto label_24225c;
    }
    ctx->pc = 0x242254u;
    {
        const bool branch_taken_0x242254 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x242254) {
            ctx->pc = 0x242258u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242254u;
            // 0x242258: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242284u;
            goto label_242284;
        }
    }
    ctx->pc = 0x24225Cu;
label_24225c:
    // 0x24225c: 0x54e6fffc  bnel        $a3, $a2, . + 4 + (-0x4 << 2)
label_242260:
    if (ctx->pc == 0x242260u) {
        ctx->pc = 0x242260u;
            // 0x242260: 0x24e50004  addiu       $a1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->pc = 0x242264u;
        goto label_242264;
    }
    ctx->pc = 0x24225Cu;
    {
        const bool branch_taken_0x24225c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        if (branch_taken_0x24225c) {
            ctx->pc = 0x242260u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24225Cu;
            // 0x242260: 0x24e50004  addiu       $a1, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242250;
        }
    }
    ctx->pc = 0x242264u;
label_242264:
    // 0x242264: 0x8ce20004  lw          $v0, 0x4($a3)
    ctx->pc = 0x242264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_242268:
    // 0x242268: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x242268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
label_24226c:
    // 0x24226c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x24226cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
label_242270:
    // 0x242270: 0x8c83feb8  lw          $v1, -0x148($a0)
    ctx->pc = 0x242270u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294966968)));
label_242274:
    // 0x242274: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x242274u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_242278:
    // 0x242278: 0x14e0000b  bnez        $a3, . + 4 + (0xB << 2)
label_24227c:
    if (ctx->pc == 0x24227Cu) {
        ctx->pc = 0x24227Cu;
            // 0x24227c: 0xac87feb8  sw          $a3, -0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294966968), GPR_U32(ctx, 7));
        ctx->pc = 0x242280u;
        goto label_242280;
    }
    ctx->pc = 0x242278u;
    {
        const bool branch_taken_0x242278 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x24227Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242278u;
            // 0x24227c: 0xac87feb8  sw          $a3, -0x148($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294966968), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242278) {
            ctx->pc = 0x2422A8u;
            goto label_2422a8;
        }
    }
    ctx->pc = 0x242280u;
label_242280:
    // 0x242280: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x242280u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_242284:
    // 0x242284: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x242284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_242288:
    // 0x242288: 0xc08b5ac  jal         func_22D6B0
label_24228c:
    if (ctx->pc == 0x24228Cu) {
        ctx->pc = 0x24228Cu;
            // 0x24228c: 0x24a56570  addiu       $a1, $a1, 0x6570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25968));
        ctx->pc = 0x242290u;
        goto label_242290;
    }
    ctx->pc = 0x242288u;
    SET_GPR_U32(ctx, 31, 0x242290u);
    ctx->pc = 0x24228Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x242288u;
            // 0x24228c: 0x24a56570  addiu       $a1, $a1, 0x6570 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25968));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242290u; }
        if (ctx->pc != 0x242290u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242290u; }
        if (ctx->pc != 0x242290u) { return; }
    }
    ctx->pc = 0x242290u;
label_242290:
    // 0x242290: 0x9243000b  lbu         $v1, 0xB($s2)
    ctx->pc = 0x242290u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
label_242294:
    // 0x242294: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x242294u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_242298:
    // 0x242298: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_24229c:
    if (ctx->pc == 0x24229Cu) {
        ctx->pc = 0x24229Cu;
            // 0x24229c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2422A0u;
        goto label_2422a0;
    }
    ctx->pc = 0x242298u;
    {
        const bool branch_taken_0x242298 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24229Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242298u;
            // 0x24229c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242298) {
            ctx->pc = 0x2422ACu;
            goto label_2422ac;
        }
    }
    ctx->pc = 0x2422A0u;
label_2422a0:
    // 0x2422a0: 0x100000a6  b           . + 4 + (0xA6 << 2)
label_2422a4:
    if (ctx->pc == 0x2422A4u) {
        ctx->pc = 0x2422A4u;
            // 0x2422a4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->pc = 0x2422A8u;
        goto label_2422a8;
    }
    ctx->pc = 0x2422A0u;
    {
        const bool branch_taken_0x2422a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2422A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2422A0u;
            // 0x2422a4: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2422a0) {
            ctx->pc = 0x24253Cu;
            goto label_24253c;
        }
    }
    ctx->pc = 0x2422A8u;
label_2422a8:
    // 0x2422a8: 0x9243000b  lbu         $v1, 0xB($s2)
    ctx->pc = 0x2422a8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
label_2422ac:
    // 0x2422ac: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x2422acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_2422b0:
    // 0x2422b0: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
label_2422b4:
    if (ctx->pc == 0x2422B4u) {
        ctx->pc = 0x2422B4u;
            // 0x2422b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2422B8u;
        goto label_2422b8;
    }
    ctx->pc = 0x2422B0u;
    {
        const bool branch_taken_0x2422b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2422B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2422B0u;
            // 0x2422b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2422b0) {
            ctx->pc = 0x242538u;
            goto label_242538;
        }
    }
    ctx->pc = 0x2422B8u;
label_2422b8:
    // 0x2422b8: 0x8e820014  lw          $v0, 0x14($s4)
    ctx->pc = 0x2422b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
label_2422bc:
    // 0x2422bc: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_2422c0:
    if (ctx->pc == 0x2422C0u) {
        ctx->pc = 0x2422C0u;
            // 0x2422c0: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x2422C4u;
        goto label_2422c4;
    }
    ctx->pc = 0x2422BCu;
    {
        const bool branch_taken_0x2422bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2422C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2422BCu;
            // 0x2422c0: 0x8e510004  lw          $s1, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2422bc) {
            ctx->pc = 0x2423D0u;
            goto label_2423d0;
        }
    }
    ctx->pc = 0x2422C4u;
label_2422c4:
    // 0x2422c4: 0x5654000b  bnel        $s2, $s4, . + 4 + (0xB << 2)
label_2422c8:
    if (ctx->pc == 0x2422C8u) {
        ctx->pc = 0x2422C8u;
            // 0x2422c8: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2422CCu;
        goto label_2422cc;
    }
    ctx->pc = 0x2422C4u;
    {
        const bool branch_taken_0x2422c4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x2422c4) {
            ctx->pc = 0x2422C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2422C4u;
            // 0x2422c8: 0x280182d  daddu       $v1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2422F4u;
            goto label_2422f4;
        }
    }
    ctx->pc = 0x2422CCu;
label_2422cc:
    // 0x2422cc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2422ccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2422d0:
    // 0x2422d0: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2422d0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_2422d4:
    // 0x2422d4: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2422d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2422d8:
    // 0x2422d8: 0x54520004  bnel        $v0, $s2, . + 4 + (0x4 << 2)
label_2422dc:
    if (ctx->pc == 0x2422DCu) {
        ctx->pc = 0x2422DCu;
            // 0x2422dc: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->pc = 0x2422E0u;
        goto label_2422e0;
    }
    ctx->pc = 0x2422D8u;
    {
        const bool branch_taken_0x2422d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x2422d8) {
            ctx->pc = 0x2422DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2422D8u;
            // 0x2422dc: 0xae300014  sw          $s0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2422ECu;
            goto label_2422ec;
        }
    }
    ctx->pc = 0x2422E0u;
label_2422e0:
    // 0x2422e0: 0xae300010  sw          $s0, 0x10($s1)
    ctx->pc = 0x2422e0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 16));
label_2422e4:
    // 0x2422e4: 0x1000001f  b           . + 4 + (0x1F << 2)
label_2422e8:
    if (ctx->pc == 0x2422E8u) {
        ctx->pc = 0x2422E8u;
            // 0x2422e8: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x2422ECu;
        goto label_2422ec;
    }
    ctx->pc = 0x2422E4u;
    {
        const bool branch_taken_0x2422e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2422E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2422E4u;
            // 0x2422e8: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2422e4) {
            ctx->pc = 0x242364u;
            goto label_242364;
        }
    }
    ctx->pc = 0x2422ECu;
label_2422ec:
    // 0x2422ec: 0x1000001d  b           . + 4 + (0x1D << 2)
label_2422f0:
    if (ctx->pc == 0x2422F0u) {
        ctx->pc = 0x2422F0u;
            // 0x2422f0: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x2422F4u;
        goto label_2422f4;
    }
    ctx->pc = 0x2422ECu;
    {
        const bool branch_taken_0x2422ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2422F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2422ECu;
            // 0x2422f0: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2422ec) {
            ctx->pc = 0x242364u;
            goto label_242364;
        }
    }
    ctx->pc = 0x2422F4u;
label_2422f4:
    // 0x2422f4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
label_2422f8:
    if (ctx->pc == 0x2422F8u) {
        ctx->pc = 0x2422F8u;
            // 0x2422f8: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2422FCu;
        goto label_2422fc;
    }
    ctx->pc = 0x2422F4u;
    {
        const bool branch_taken_0x2422f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2422F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2422F4u;
            // 0x2422f8: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2422f4) {
            ctx->pc = 0x242350u;
            goto label_242350;
        }
    }
    ctx->pc = 0x2422FCu;
label_2422fc:
    // 0x2422fc: 0x1052000a  beq         $v0, $s2, . + 4 + (0xA << 2)
label_242300:
    if (ctx->pc == 0x242300u) {
        ctx->pc = 0x242300u;
            // 0x242300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242304u;
        goto label_242304;
    }
    ctx->pc = 0x2422FCu;
    {
        const bool branch_taken_0x2422fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x242300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2422FCu;
            // 0x242300: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2422fc) {
            ctx->pc = 0x242328u;
            goto label_242328;
        }
    }
    ctx->pc = 0x242304u;
label_242304:
    // 0x242304: 0x26530018  addiu       $s3, $s2, 0x18
    ctx->pc = 0x242304u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_242308:
    // 0x242308: 0x80182d  daddu       $v1, $a0, $zero
    ctx->pc = 0x242308u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_24230c:
    // 0x24230c: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
label_242310:
    if (ctx->pc == 0x242310u) {
        ctx->pc = 0x242310u;
            // 0x242310: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x242314u;
        goto label_242314;
    }
    ctx->pc = 0x24230Cu;
    {
        const bool branch_taken_0x24230c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242310u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24230Cu;
            // 0x242310: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24230c) {
            ctx->pc = 0x242358u;
            goto label_242358;
        }
    }
    ctx->pc = 0x242314u;
label_242314:
    // 0x242314: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x242314u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_242318:
    // 0x242318: 0x1452fffb  bne         $v0, $s2, . + 4 + (-0x5 << 2)
label_24231c:
    if (ctx->pc == 0x24231Cu) {
        ctx->pc = 0x24231Cu;
            // 0x24231c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242320u;
        goto label_242320;
    }
    ctx->pc = 0x242318u;
    {
        const bool branch_taken_0x242318 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        ctx->pc = 0x24231Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242318u;
            // 0x24231c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242318) {
            ctx->pc = 0x242308u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242308;
        }
    }
    ctx->pc = 0x242320u;
label_242320:
    // 0x242320: 0x10000002  b           . + 4 + (0x2 << 2)
label_242324:
    if (ctx->pc == 0x242324u) {
        ctx->pc = 0x242328u;
        goto label_242328;
    }
    ctx->pc = 0x242320u;
    {
        const bool branch_taken_0x242320 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242320) {
            ctx->pc = 0x24232Cu;
            goto label_24232c;
        }
    }
    ctx->pc = 0x242328u;
label_242328:
    // 0x242328: 0x26530018  addiu       $s3, $s2, 0x18
    ctx->pc = 0x242328u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_24232c:
    // 0x24232c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
label_242330:
    if (ctx->pc == 0x242330u) {
        ctx->pc = 0x242330u;
            // 0x242330: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x242334u;
        goto label_242334;
    }
    ctx->pc = 0x24232Cu;
    {
        const bool branch_taken_0x24232c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x242330u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24232Cu;
            // 0x242330: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24232c) {
            ctx->pc = 0x242358u;
            goto label_242358;
        }
    }
    ctx->pc = 0x242334u;
label_242334:
    // 0x242334: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x242334u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_242338:
    // 0x242338: 0xac620014  sw          $v0, 0x14($v1)
    ctx->pc = 0x242338u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 2));
label_24233c:
    // 0x24233c: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x24233cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_242340:
    // 0x242340: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_242344:
    if (ctx->pc == 0x242344u) {
        ctx->pc = 0x242344u;
            // 0x242344: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x242348u;
        goto label_242348;
    }
    ctx->pc = 0x242340u;
    {
        const bool branch_taken_0x242340 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x242340) {
            ctx->pc = 0x242344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242340u;
            // 0x242344: 0xac430004  sw          $v1, 0x4($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242364u;
            goto label_242364;
        }
    }
    ctx->pc = 0x242348u;
label_242348:
    // 0x242348: 0x10000007  b           . + 4 + (0x7 << 2)
label_24234c:
    if (ctx->pc == 0x24234Cu) {
        ctx->pc = 0x24234Cu;
            // 0x24234c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242350u;
        goto label_242350;
    }
    ctx->pc = 0x242348u;
    {
        const bool branch_taken_0x242348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24234Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242348u;
            // 0x24234c: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242348) {
            ctx->pc = 0x242368u;
            goto label_242368;
        }
    }
    ctx->pc = 0x242350u;
label_242350:
    // 0x242350: 0x26530018  addiu       $s3, $s2, 0x18
    ctx->pc = 0x242350u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_242354:
    // 0x242354: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x242354u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_242358:
    // 0x242358: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x242358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_24235c:
    // 0x24235c: 0xc08b5ac  jal         func_22D6B0
label_242360:
    if (ctx->pc == 0x242360u) {
        ctx->pc = 0x242360u;
            // 0x242360: 0x24a565a0  addiu       $a1, $a1, 0x65A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26016));
        ctx->pc = 0x242364u;
        goto label_242364;
    }
    ctx->pc = 0x24235Cu;
    SET_GPR_U32(ctx, 31, 0x242364u);
    ctx->pc = 0x242360u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x24235Cu;
            // 0x242360: 0x24a565a0  addiu       $a1, $a1, 0x65A0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26016));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242364u; }
        if (ctx->pc != 0x242364u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x242364u; }
        if (ctx->pc != 0x242364u) { return; }
    }
    ctx->pc = 0x242364u;
label_242364:
    // 0x242364: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x242364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_242368:
    // 0x242368: 0x9222000b  lbu         $v0, 0xB($s1)
    ctx->pc = 0x242368u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 11)));
label_24236c:
    // 0x24236c: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x24236cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_242370:
    // 0x242370: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_242374:
    if (ctx->pc == 0x242374u) {
        ctx->pc = 0x242374u;
            // 0x242374: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->pc = 0x242378u;
        goto label_242378;
    }
    ctx->pc = 0x242370u;
    {
        const bool branch_taken_0x242370 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x242374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242370u;
            // 0x242374: 0x26100018  addiu       $s0, $s0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242370) {
            ctx->pc = 0x24251Cu;
            goto label_24251c;
        }
    }
    ctx->pc = 0x242378u;
label_242378:
    // 0x242378: 0x6a42001f  ldl         $v0, 0x1F($s2)
    ctx->pc = 0x242378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_24237c:
    // 0x24237c: 0x6e420018  ldr         $v0, 0x18($s2)
    ctx->pc = 0x24237cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_242380:
    // 0x242380: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x242380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_242384:
    // 0x242384: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x242384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_242388:
    // 0x242388: 0x6a44002f  ldl         $a0, 0x2F($s2)
    ctx->pc = 0x242388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_24238c:
    // 0x24238c: 0x6e440028  ldr         $a0, 0x28($s2)
    ctx->pc = 0x24238cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_242390:
    // 0x242390: 0xb2020007  sdl         $v0, 0x7($s0)
    ctx->pc = 0x242390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_242394:
    // 0x242394: 0xb6020000  sdr         $v0, 0x0($s0)
    ctx->pc = 0x242394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_242398:
    // 0x242398: 0xb203000f  sdl         $v1, 0xF($s0)
    ctx->pc = 0x242398u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_24239c:
    // 0x24239c: 0xb6030008  sdr         $v1, 0x8($s0)
    ctx->pc = 0x24239cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2423a0:
    // 0x2423a0: 0xb2040017  sdl         $a0, 0x17($s0)
    ctx->pc = 0x2423a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2423a4:
    // 0x2423a4: 0xb6040010  sdr         $a0, 0x10($s0)
    ctx->pc = 0x2423a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2423a8:
    // 0x2423a8: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2423a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2423ac:
    // 0x2423ac: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2423acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2423b0:
    // 0x2423b0: 0x54510002  bnel        $v0, $s1, . + 4 + (0x2 << 2)
label_2423b4:
    if (ctx->pc == 0x2423B4u) {
        ctx->pc = 0x2423B4u;
            // 0x2423b4: 0xac700014  sw          $s0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
        ctx->pc = 0x2423B8u;
        goto label_2423b8;
    }
    ctx->pc = 0x2423B0u;
    {
        const bool branch_taken_0x2423b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2423b0) {
            ctx->pc = 0x2423B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2423B0u;
            // 0x2423b4: 0xac700014  sw          $s0, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2423BCu;
            goto label_2423bc;
        }
    }
    ctx->pc = 0x2423B8u;
label_2423b8:
    // 0x2423b8: 0xac700010  sw          $s0, 0x10($v1)
    ctx->pc = 0x2423b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
label_2423bc:
    // 0x2423bc: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2423bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2423c0:
    // 0x2423c0: 0xac500004  sw          $s0, 0x4($v0)
    ctx->pc = 0x2423c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 16));
label_2423c4:
    // 0x2423c4: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x2423c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_2423c8:
    // 0x2423c8: 0x10000054  b           . + 4 + (0x54 << 2)
label_2423cc:
    if (ctx->pc == 0x2423CCu) {
        ctx->pc = 0x2423CCu;
            // 0x2423cc: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->pc = 0x2423D0u;
        goto label_2423d0;
    }
    ctx->pc = 0x2423C8u;
    {
        const bool branch_taken_0x2423c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2423C8u;
            // 0x2423cc: 0xac700004  sw          $s0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423c8) {
            ctx->pc = 0x24251Cu;
            goto label_24251c;
        }
    }
    ctx->pc = 0x2423D0u;
label_2423d0:
    // 0x2423d0: 0x8e300010  lw          $s0, 0x10($s1)
    ctx->pc = 0x2423d0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2423d4:
    // 0x2423d4: 0x52120001  beql        $s0, $s2, . + 4 + (0x1 << 2)
label_2423d8:
    if (ctx->pc == 0x2423D8u) {
        ctx->pc = 0x2423D8u;
            // 0x2423d8: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->pc = 0x2423DCu;
        goto label_2423dc;
    }
    ctx->pc = 0x2423D4u;
    {
        const bool branch_taken_0x2423d4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 18));
        if (branch_taken_0x2423d4) {
            ctx->pc = 0x2423D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2423D4u;
            // 0x2423d8: 0x8e300014  lw          $s0, 0x14($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2423DCu;
            goto label_2423dc;
        }
    }
    ctx->pc = 0x2423DCu;
label_2423dc:
    // 0x2423dc: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x2423dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2423e0:
    // 0x2423e0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2423e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2423e4:
    // 0x2423e4: 0x54510002  bnel        $v0, $s1, . + 4 + (0x2 << 2)
label_2423e8:
    if (ctx->pc == 0x2423E8u) {
        ctx->pc = 0x2423E8u;
            // 0x2423e8: 0xac700010  sw          $s0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
        ctx->pc = 0x2423ECu;
        goto label_2423ec;
    }
    ctx->pc = 0x2423E4u;
    {
        const bool branch_taken_0x2423e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2423e4) {
            ctx->pc = 0x2423E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2423E4u;
            // 0x2423e8: 0xac700010  sw          $s0, 0x10($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2423F0u;
            goto label_2423f0;
        }
    }
    ctx->pc = 0x2423ECu;
label_2423ec:
    // 0x2423ec: 0xac700014  sw          $s0, 0x14($v1)
    ctx->pc = 0x2423ecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 16));
label_2423f0:
    // 0x2423f0: 0xae030004  sw          $v1, 0x4($s0)
    ctx->pc = 0x2423f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
label_2423f4:
    // 0x2423f4: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x2423f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2423f8:
    // 0x2423f8: 0x10600031  beqz        $v1, . + 4 + (0x31 << 2)
label_2423fc:
    if (ctx->pc == 0x2423FCu) {
        ctx->pc = 0x2423FCu;
            // 0x2423fc: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->pc = 0x242400u;
        goto label_242400;
    }
    ctx->pc = 0x2423F8u;
    {
        const bool branch_taken_0x2423f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2423FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2423F8u;
            // 0x2423fc: 0x26530018  addiu       $s3, $s2, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2423f8) {
            ctx->pc = 0x2424C0u;
            goto label_2424c0;
        }
    }
    ctx->pc = 0x242400u;
label_242400:
    // 0x242400: 0x86020008  lh          $v0, 0x8($s0)
    ctx->pc = 0x242400u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 8)));
label_242404:
    // 0x242404: 0x440000d  bltz        $v0, . + 4 + (0xD << 2)
label_242408:
    if (ctx->pc == 0x242408u) {
        ctx->pc = 0x242408u;
            // 0x242408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24240Cu;
        goto label_24240c;
    }
    ctx->pc = 0x242404u;
    {
        const bool branch_taken_0x242404 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x242408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242404u;
            // 0x242408: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242404) {
            ctx->pc = 0x24243Cu;
            goto label_24243c;
        }
    }
    ctx->pc = 0x24240Cu;
label_24240c:
    // 0x24240c: 0x8ca70000  lw          $a3, 0x0($a1)
    ctx->pc = 0x24240cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_242410:
    // 0x242410: 0x50e0002b  beql        $a3, $zero, . + 4 + (0x2B << 2)
label_242414:
    if (ctx->pc == 0x242414u) {
        ctx->pc = 0x242414u;
            // 0x242414: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x242418u;
        goto label_242418;
    }
    ctx->pc = 0x242410u;
    {
        const bool branch_taken_0x242410 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x242410) {
            ctx->pc = 0x242414u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242410u;
            // 0x242414: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2424C0u;
            goto label_2424c0;
        }
    }
    ctx->pc = 0x242418u;
label_242418:
    // 0x242418: 0x24e50004  addiu       $a1, $a3, 0x4
    ctx->pc = 0x242418u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
label_24241c:
    // 0x24241c: 0x8ce70004  lw          $a3, 0x4($a3)
    ctx->pc = 0x24241cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_242420:
    // 0x242420: 0x0  nop
    ctx->pc = 0x242420u;
    // NOP
label_242424:
    // 0x242424: 0x0  nop
    ctx->pc = 0x242424u;
    // NOP
label_242428:
    // 0x242428: 0x0  nop
    ctx->pc = 0x242428u;
    // NOP
label_24242c:
    // 0x24242c: 0x14e0fffa  bnez        $a3, . + 4 + (-0x6 << 2)
label_242430:
    if (ctx->pc == 0x242430u) {
        ctx->pc = 0x242434u;
        goto label_242434;
    }
    ctx->pc = 0x24242Cu;
    {
        const bool branch_taken_0x24242c = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        if (branch_taken_0x24242c) {
            ctx->pc = 0x242418u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242418;
        }
    }
    ctx->pc = 0x242434u;
label_242434:
    // 0x242434: 0x10000022  b           . + 4 + (0x22 << 2)
label_242438:
    if (ctx->pc == 0x242438u) {
        ctx->pc = 0x242438u;
            // 0x242438: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x24243Cu;
        goto label_24243c;
    }
    ctx->pc = 0x242434u;
    {
        const bool branch_taken_0x242434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242438u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242434u;
            // 0x242438: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242434) {
            ctx->pc = 0x2424C0u;
            goto label_2424c0;
        }
    }
    ctx->pc = 0x24243Cu;
label_24243c:
    // 0x24243c: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
label_242440:
    if (ctx->pc == 0x242440u) {
        ctx->pc = 0x242440u;
            // 0x242440: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242444u;
        goto label_242444;
    }
    ctx->pc = 0x24243Cu;
    {
        const bool branch_taken_0x24243c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x242440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24243Cu;
            // 0x242440: 0x60382d  daddu       $a3, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24243c) {
            ctx->pc = 0x24249Cu;
            goto label_24249c;
        }
    }
    ctx->pc = 0x242444u;
label_242444:
    // 0x242444: 0x26530018  addiu       $s3, $s2, 0x18
    ctx->pc = 0x242444u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_242448:
    // 0x242448: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x242448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_24244c:
    // 0x24244c: 0x0  nop
    ctx->pc = 0x24244cu;
    // NOP
label_242450:
    // 0x242450: 0x14e2000c  bne         $a3, $v0, . + 4 + (0xC << 2)
label_242454:
    if (ctx->pc == 0x242454u) {
        ctx->pc = 0x242458u;
        goto label_242458;
    }
    ctx->pc = 0x242450u;
    {
        const bool branch_taken_0x242450 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        if (branch_taken_0x242450) {
            ctx->pc = 0x242484u;
            goto label_242484;
        }
    }
    ctx->pc = 0x242458u;
label_242458:
    // 0x242458: 0x8ce40004  lw          $a0, 0x4($a3)
    ctx->pc = 0x242458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
label_24245c:
    // 0x24245c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x24245cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_242460:
    // 0x242460: 0x8ce2000c  lw          $v0, 0xC($a3)
    ctx->pc = 0x242460u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_242464:
    // 0x242464: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x242464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_242468:
    // 0x242468: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
label_24246c:
    if (ctx->pc == 0x24246Cu) {
        ctx->pc = 0x24246Cu;
            // 0x24246c: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->pc = 0x242470u;
        goto label_242470;
    }
    ctx->pc = 0x242468u;
    {
        const bool branch_taken_0x242468 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x24246Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242468u;
            // 0x24246c: 0xace2000c  sw          $v0, 0xC($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242468) {
            ctx->pc = 0x242480u;
            goto label_242480;
        }
    }
    ctx->pc = 0x242470u;
label_242470:
    // 0x242470: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x242470u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_242474:
    // 0x242474: 0x8c62feb8  lw          $v0, -0x148($v1)
    ctx->pc = 0x242474u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294966968)));
label_242478:
    // 0x242478: 0xace20004  sw          $v0, 0x4($a3)
    ctx->pc = 0x242478u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 2));
label_24247c:
    // 0x24247c: 0xac67feb8  sw          $a3, -0x148($v1)
    ctx->pc = 0x24247cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294966968), GPR_U32(ctx, 7));
label_242480:
    // 0x242480: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x242480u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242484:
    // 0x242484: 0x10e0000e  beqz        $a3, . + 4 + (0xE << 2)
label_242488:
    if (ctx->pc == 0x242488u) {
        ctx->pc = 0x242488u;
            // 0x242488: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x24248Cu;
        goto label_24248c;
    }
    ctx->pc = 0x242484u;
    {
        const bool branch_taken_0x242484 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x242488u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242484u;
            // 0x242488: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242484) {
            ctx->pc = 0x2424C0u;
            goto label_2424c0;
        }
    }
    ctx->pc = 0x24248Cu;
label_24248c:
    // 0x24248c: 0x5600fff0  bnel        $s0, $zero, . + 4 + (-0x10 << 2)
label_242490:
    if (ctx->pc == 0x242490u) {
        ctx->pc = 0x242490u;
            // 0x242490: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x242494u;
        goto label_242494;
    }
    ctx->pc = 0x24248Cu;
    {
        const bool branch_taken_0x24248c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x24248c) {
            ctx->pc = 0x242490u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x24248Cu;
            // 0x242490: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242450u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242450;
        }
    }
    ctx->pc = 0x242494u;
label_242494:
    // 0x242494: 0x10000002  b           . + 4 + (0x2 << 2)
label_242498:
    if (ctx->pc == 0x242498u) {
        ctx->pc = 0x24249Cu;
        goto label_24249c;
    }
    ctx->pc = 0x242494u;
    {
        const bool branch_taken_0x242494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x242494) {
            ctx->pc = 0x2424A0u;
            goto label_2424a0;
        }
    }
    ctx->pc = 0x24249Cu;
label_24249c:
    // 0x24249c: 0x26530018  addiu       $s3, $s2, 0x18
    ctx->pc = 0x24249cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 24));
label_2424a0:
    // 0x2424a0: 0x10e00007  beqz        $a3, . + 4 + (0x7 << 2)
label_2424a4:
    if (ctx->pc == 0x2424A4u) {
        ctx->pc = 0x2424A4u;
            // 0x2424a4: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x2424A8u;
        goto label_2424a8;
    }
    ctx->pc = 0x2424A0u;
    {
        const bool branch_taken_0x2424a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2424A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2424A0u;
            // 0x2424a4: 0x3c05003f  lui         $a1, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2424a0) {
            ctx->pc = 0x2424C0u;
            goto label_2424c0;
        }
    }
    ctx->pc = 0x2424A8u;
label_2424a8:
    // 0x2424a8: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x2424a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
label_2424ac:
    // 0x2424ac: 0x24a565c0  addiu       $a1, $a1, 0x65C0
    ctx->pc = 0x2424acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26048));
label_2424b0:
    // 0x2424b0: 0x24c665d0  addiu       $a2, $a2, 0x65D0
    ctx->pc = 0x2424b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 26064));
label_2424b4:
    // 0x2424b4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x2424b4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2424b8:
    // 0x2424b8: 0xc08b5ac  jal         func_22D6B0
label_2424bc:
    if (ctx->pc == 0x2424BCu) {
        ctx->pc = 0x2424BCu;
            // 0x2424bc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x2424C0u;
        goto label_2424c0;
    }
    ctx->pc = 0x2424B8u;
    SET_GPR_U32(ctx, 31, 0x2424C0u);
    ctx->pc = 0x2424BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2424B8u;
            // 0x2424bc: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424C0u; }
        if (ctx->pc != 0x2424C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2424C0u; }
        if (ctx->pc != 0x2424C0u) { return; }
    }
    ctx->pc = 0x2424C0u;
label_2424c0:
    // 0x2424c0: 0x52330017  beql        $s1, $s3, . + 4 + (0x17 << 2)
label_2424c4:
    if (ctx->pc == 0x2424C4u) {
        ctx->pc = 0x2424C4u;
            // 0x2424c4: 0x9244000b  lbu         $a0, 0xB($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
        ctx->pc = 0x2424C8u;
        goto label_2424c8;
    }
    ctx->pc = 0x2424C0u;
    {
        const bool branch_taken_0x2424c0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 19));
        if (branch_taken_0x2424c0) {
            ctx->pc = 0x2424C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2424C0u;
            // 0x2424c4: 0x9244000b  lbu         $a0, 0xB($s2) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242520u;
            goto label_242520;
        }
    }
    ctx->pc = 0x2424C8u;
label_2424c8:
    // 0x2424c8: 0x6a42001f  ldl         $v0, 0x1F($s2)
    ctx->pc = 0x2424c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_2424cc:
    // 0x2424cc: 0x6e420018  ldr         $v0, 0x18($s2)
    ctx->pc = 0x2424ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_2424d0:
    // 0x2424d0: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x2424d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2424d4:
    // 0x2424d4: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x2424d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2424d8:
    // 0x2424d8: 0x6a44002f  ldl         $a0, 0x2F($s2)
    ctx->pc = 0x2424d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_2424dc:
    // 0x2424dc: 0x6e440028  ldr         $a0, 0x28($s2)
    ctx->pc = 0x2424dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_2424e0:
    // 0x2424e0: 0xb2220007  sdl         $v0, 0x7($s1)
    ctx->pc = 0x2424e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2424e4:
    // 0x2424e4: 0xb6220000  sdr         $v0, 0x0($s1)
    ctx->pc = 0x2424e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2424e8:
    // 0x2424e8: 0xb223000f  sdl         $v1, 0xF($s1)
    ctx->pc = 0x2424e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2424ec:
    // 0x2424ec: 0xb6230008  sdr         $v1, 0x8($s1)
    ctx->pc = 0x2424ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2424f0:
    // 0x2424f0: 0xb2240017  sdl         $a0, 0x17($s1)
    ctx->pc = 0x2424f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2424f4:
    // 0x2424f4: 0xb6240010  sdr         $a0, 0x10($s1)
    ctx->pc = 0x2424f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2424f8:
    // 0x2424f8: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x2424f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2424fc:
    // 0x2424fc: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x2424fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
label_242500:
    // 0x242500: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x242500u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_242504:
    // 0x242504: 0xac710004  sw          $s1, 0x4($v1)
    ctx->pc = 0x242504u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 17));
label_242508:
    // 0x242508: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x242508u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_24250c:
    // 0x24250c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x24250cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_242510:
    // 0x242510: 0x54530002  bnel        $v0, $s3, . + 4 + (0x2 << 2)
label_242514:
    if (ctx->pc == 0x242514u) {
        ctx->pc = 0x242514u;
            // 0x242514: 0xac710014  sw          $s1, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 17));
        ctx->pc = 0x242518u;
        goto label_242518;
    }
    ctx->pc = 0x242510u;
    {
        const bool branch_taken_0x242510 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        if (branch_taken_0x242510) {
            ctx->pc = 0x242514u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242510u;
            // 0x242514: 0xac710014  sw          $s1, 0x14($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x24251Cu;
            goto label_24251c;
        }
    }
    ctx->pc = 0x242518u;
label_242518:
    // 0x242518: 0xac710010  sw          $s1, 0x10($v1)
    ctx->pc = 0x242518u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 17));
label_24251c:
    // 0x24251c: 0x9244000b  lbu         $a0, 0xB($s2)
    ctx->pc = 0x24251cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 11)));
label_242520:
    // 0x242520: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x242520u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_242524:
    // 0x242524: 0x92430023  lbu         $v1, 0x23($s2)
    ctx->pc = 0x242524u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 35)));
label_242528:
    // 0x242528: 0x308400fb  andi        $a0, $a0, 0xFB
    ctx->pc = 0x242528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)251);
label_24252c:
    // 0x24252c: 0x306300fb  andi        $v1, $v1, 0xFB
    ctx->pc = 0x24252cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)251);
label_242530:
    // 0x242530: 0xa244000b  sb          $a0, 0xB($s2)
    ctx->pc = 0x242530u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 11), (uint8_t)GPR_U32(ctx, 4));
label_242534:
    // 0x242534: 0xa2430023  sb          $v1, 0x23($s2)
    ctx->pc = 0x242534u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 35), (uint8_t)GPR_U32(ctx, 3));
label_242538:
    // 0x242538: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x242538u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_24253c:
    // 0x24253c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x24253cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_242540:
    // 0x242540: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x242540u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_242544:
    // 0x242544: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x242544u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_242548:
    // 0x242548: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x242548u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_24254c:
    // 0x24254c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x24254cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_242550:
    // 0x242550: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x242550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242554:
    // 0x242554: 0x3e00008  jr          $ra
label_242558:
    if (ctx->pc == 0x242558u) {
        ctx->pc = 0x242558u;
            // 0x242558: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->pc = 0x24255Cu;
        goto label_24255c;
    }
    ctx->pc = 0x242554u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242558u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242554u;
            // 0x242558: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x24255Cu;
label_24255c:
    // 0x24255c: 0x0  nop
    ctx->pc = 0x24255cu;
    // NOP
label_242560:
    // 0x242560: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x242560u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_242564:
    // 0x242564: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x242564u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_242568:
    // 0x242568: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x242568u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_24256c:
    // 0x24256c: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x24256cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_242570:
    // 0x242570: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x242570u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_242574:
    // 0x242574: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x242574u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_242578:
    // 0x242578: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x242578u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_24257c:
    // 0x24257c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x24257cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_242580:
    // 0x242580: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x242580u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_242584:
    // 0x242584: 0x440000a  bltz        $v0, . + 4 + (0xA << 2)
label_242588:
    if (ctx->pc == 0x242588u) {
        ctx->pc = 0x242588u;
            // 0x242588: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24258Cu;
        goto label_24258c;
    }
    ctx->pc = 0x242584u;
    {
        const bool branch_taken_0x242584 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x242588u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242584u;
            // 0x242588: 0xc0902d  daddu       $s2, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242584) {
            ctx->pc = 0x2425B0u;
            goto label_2425b0;
        }
    }
    ctx->pc = 0x24258Cu;
label_24258c:
    // 0x24258c: 0x0  nop
    ctx->pc = 0x24258cu;
    // NOP
label_242590:
    // 0x242590: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x242590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_242594:
    // 0x242594: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x242594u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_242598:
    // 0x242598: 0x0  nop
    ctx->pc = 0x242598u;
    // NOP
label_24259c:
    // 0x24259c: 0x0  nop
    ctx->pc = 0x24259cu;
    // NOP
label_2425a0:
    // 0x2425a0: 0x0  nop
    ctx->pc = 0x2425a0u;
    // NOP
label_2425a4:
    // 0x2425a4: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
label_2425a8:
    if (ctx->pc == 0x2425A8u) {
        ctx->pc = 0x2425ACu;
        goto label_2425ac;
    }
    ctx->pc = 0x2425A4u;
    {
        const bool branch_taken_0x2425a4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2425a4) {
            ctx->pc = 0x242590u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242590;
        }
    }
    ctx->pc = 0x2425ACu;
label_2425ac:
    // 0x2425ac: 0x0  nop
    ctx->pc = 0x2425acu;
    // NOP
label_2425b0:
    // 0x2425b0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2425b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2425b4:
    // 0x2425b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2425b8:
    if (ctx->pc == 0x2425B8u) {
        ctx->pc = 0x2425B8u;
            // 0x2425b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2425BCu;
        goto label_2425bc;
    }
    ctx->pc = 0x2425B4u;
    {
        const bool branch_taken_0x2425b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2425B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425B4u;
            // 0x2425b8: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2425b4) {
            ctx->pc = 0x2425C4u;
            goto label_2425c4;
        }
    }
    ctx->pc = 0x2425BCu;
label_2425bc:
    // 0x2425bc: 0x0  nop
    ctx->pc = 0x2425bcu;
    // NOP
label_2425c0:
    // 0x2425c0: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2425c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2425c4:
    // 0x2425c4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2425c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2425c8:
    // 0x2425c8: 0x14440005  bne         $v0, $a0, . + 4 + (0x5 << 2)
label_2425cc:
    if (ctx->pc == 0x2425CCu) {
        ctx->pc = 0x2425CCu;
            // 0x2425cc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2425D0u;
        goto label_2425d0;
    }
    ctx->pc = 0x2425C8u;
    {
        const bool branch_taken_0x2425c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x2425CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425C8u;
            // 0x2425cc: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2425c8) {
            ctx->pc = 0x2425E0u;
            goto label_2425e0;
        }
    }
    ctx->pc = 0x2425D0u;
label_2425d0:
    // 0x2425d0: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x2425d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
label_2425d4:
    // 0x2425d4: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x2425d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_2425d8:
    // 0x2425d8: 0x1040fff9  beqz        $v0, . + 4 + (-0x7 << 2)
label_2425dc:
    if (ctx->pc == 0x2425DCu) {
        ctx->pc = 0x2425DCu;
            // 0x2425dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2425E0u;
        goto label_2425e0;
    }
    ctx->pc = 0x2425D8u;
    {
        const bool branch_taken_0x2425d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2425DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425D8u;
            // 0x2425dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2425d8) {
            ctx->pc = 0x2425C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2425c0;
        }
    }
    ctx->pc = 0x2425E0u;
label_2425e0:
    // 0x2425e0: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2425e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2425e4:
    // 0x2425e4: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x2425e4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_2425e8:
    // 0x2425e8: 0x4400009  bltz        $v0, . + 4 + (0x9 << 2)
label_2425ec:
    if (ctx->pc == 0x2425ECu) {
        ctx->pc = 0x2425ECu;
            // 0x2425ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2425F0u;
        goto label_2425f0;
    }
    ctx->pc = 0x2425E8u;
    {
        const bool branch_taken_0x2425e8 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x2425ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2425E8u;
            // 0x2425ec: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2425e8) {
            ctx->pc = 0x242610u;
            goto label_242610;
        }
    }
    ctx->pc = 0x2425F0u;
label_2425f0:
    // 0x2425f0: 0x8c840010  lw          $a0, 0x10($a0)
    ctx->pc = 0x2425f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2425f4:
    // 0x2425f4: 0x84820008  lh          $v0, 0x8($a0)
    ctx->pc = 0x2425f4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 8)));
label_2425f8:
    // 0x2425f8: 0x0  nop
    ctx->pc = 0x2425f8u;
    // NOP
label_2425fc:
    // 0x2425fc: 0x0  nop
    ctx->pc = 0x2425fcu;
    // NOP
label_242600:
    // 0x242600: 0x0  nop
    ctx->pc = 0x242600u;
    // NOP
label_242604:
    // 0x242604: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
label_242608:
    if (ctx->pc == 0x242608u) {
        ctx->pc = 0x24260Cu;
        goto label_24260c;
    }
    ctx->pc = 0x242604u;
    {
        const bool branch_taken_0x242604 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x242604) {
            ctx->pc = 0x2425F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2425f0;
        }
    }
    ctx->pc = 0x24260Cu;
label_24260c:
    // 0x24260c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x24260cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_242610:
    // 0x242610: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x242610u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_242614:
    // 0x242614: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
label_242618:
    if (ctx->pc == 0x242618u) {
        ctx->pc = 0x242618u;
            // 0x242618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x24261Cu;
        goto label_24261c;
    }
    ctx->pc = 0x242614u;
    {
        const bool branch_taken_0x242614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x242614) {
            ctx->pc = 0x242618u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242614u;
            // 0x242618: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x242648u;
            goto label_242648;
        }
    }
    ctx->pc = 0x24261Cu;
label_24261c:
    // 0x24261c: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x24261cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
label_242620:
    // 0x242620: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x242620u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_242624:
    // 0x242624: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_242628:
    if (ctx->pc == 0x242628u) {
        ctx->pc = 0x242628u;
            // 0x242628: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->pc = 0x24262Cu;
        goto label_24262c;
    }
    ctx->pc = 0x242624u;
    {
        const bool branch_taken_0x242624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242628u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242624u;
            // 0x242628: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242624) {
            ctx->pc = 0x242610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242610;
        }
    }
    ctx->pc = 0x24262Cu;
label_24262c:
    // 0x24262c: 0x260f809  jalr        $s3
label_242630:
    if (ctx->pc == 0x242630u) {
        ctx->pc = 0x242630u;
            // 0x242630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242634u;
        goto label_242634;
    }
    ctx->pc = 0x24262Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 19);
        SET_GPR_U32(ctx, 31, 0x242634u);
        ctx->pc = 0x242630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24262Cu;
            // 0x242630: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x242634u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x242634u; }
            if (ctx->pc != 0x242634u) { return; }
        }
        }
    }
    ctx->pc = 0x242634u;
label_242634:
    // 0x242634: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_242638:
    if (ctx->pc == 0x242638u) {
        ctx->pc = 0x242638u;
            // 0x242638: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->pc = 0x24263Cu;
        goto label_24263c;
    }
    ctx->pc = 0x242634u;
    {
        const bool branch_taken_0x242634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x242638u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242634u;
            // 0x242638: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x242634) {
            ctx->pc = 0x242660u;
            goto label_242660;
        }
    }
    ctx->pc = 0x24263Cu;
label_24263c:
    // 0x24263c: 0x1000fff5  b           . + 4 + (-0xB << 2)
label_242640:
    if (ctx->pc == 0x242640u) {
        ctx->pc = 0x242640u;
            // 0x242640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x242644u;
        goto label_242644;
    }
    ctx->pc = 0x24263Cu;
    {
        const bool branch_taken_0x24263c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x242640u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x24263Cu;
            // 0x242640: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24263c) {
            ctx->pc = 0x242614u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_242614;
        }
    }
    ctx->pc = 0x242644u;
label_242644:
    // 0x242644: 0x0  nop
    ctx->pc = 0x242644u;
    // NOP
label_242648:
    // 0x242648: 0x9082000b  lbu         $v0, 0xB($a0)
    ctx->pc = 0x242648u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 11)));
label_24264c:
    // 0x24264c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x24264cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_242650:
    // 0x242650: 0x5040ffd8  beql        $v0, $zero, . + 4 + (-0x28 << 2)
label_242654:
    if (ctx->pc == 0x242654u) {
        ctx->pc = 0x242654u;
            // 0x242654: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->pc = 0x242658u;
        goto label_242658;
    }
    ctx->pc = 0x242650u;
    {
        const bool branch_taken_0x242650 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x242650) {
            ctx->pc = 0x242654u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x242650u;
            // 0x242654: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2425B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2425b4;
        }
    }
    ctx->pc = 0x242658u;
label_242658:
    // 0x242658: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x242658u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_24265c:
    // 0x24265c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x24265cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_242660:
    // 0x242660: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x242660u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_242664:
    // 0x242664: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x242664u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_242668:
    // 0x242668: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x242668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_24266c:
    // 0x24266c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x24266cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_242670:
    // 0x242670: 0x3e00008  jr          $ra
label_242674:
    if (ctx->pc == 0x242674u) {
        ctx->pc = 0x242674u;
            // 0x242674: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x242678u;
        goto label_fallthrough_0x242670;
    }
    ctx->pc = 0x242670u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x242674u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x242670u;
            // 0x242674: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x242670:
    ctx->pc = 0x242678u;
    ctx->pc = 0x242678u;
}
