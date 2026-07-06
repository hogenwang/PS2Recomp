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

// Function: sub_001D6D40
// Address: 0x1d6d40 - 0x1d75b0
void sub_001D6D40_0x1d6d40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D6D40_0x1d6d40");
#endif

    switch (ctx->pc) {
        case 0x1d6d40u: goto label_1d6d40;
        case 0x1d6d44u: goto label_1d6d44;
        case 0x1d6d48u: goto label_1d6d48;
        case 0x1d6d4cu: goto label_1d6d4c;
        case 0x1d6d50u: goto label_1d6d50;
        case 0x1d6d54u: goto label_1d6d54;
        case 0x1d6d58u: goto label_1d6d58;
        case 0x1d6d5cu: goto label_1d6d5c;
        case 0x1d6d60u: goto label_1d6d60;
        case 0x1d6d64u: goto label_1d6d64;
        case 0x1d6d68u: goto label_1d6d68;
        case 0x1d6d6cu: goto label_1d6d6c;
        case 0x1d6d70u: goto label_1d6d70;
        case 0x1d6d74u: goto label_1d6d74;
        case 0x1d6d78u: goto label_1d6d78;
        case 0x1d6d7cu: goto label_1d6d7c;
        case 0x1d6d80u: goto label_1d6d80;
        case 0x1d6d84u: goto label_1d6d84;
        case 0x1d6d88u: goto label_1d6d88;
        case 0x1d6d8cu: goto label_1d6d8c;
        case 0x1d6d90u: goto label_1d6d90;
        case 0x1d6d94u: goto label_1d6d94;
        case 0x1d6d98u: goto label_1d6d98;
        case 0x1d6d9cu: goto label_1d6d9c;
        case 0x1d6da0u: goto label_1d6da0;
        case 0x1d6da4u: goto label_1d6da4;
        case 0x1d6da8u: goto label_1d6da8;
        case 0x1d6dacu: goto label_1d6dac;
        case 0x1d6db0u: goto label_1d6db0;
        case 0x1d6db4u: goto label_1d6db4;
        case 0x1d6db8u: goto label_1d6db8;
        case 0x1d6dbcu: goto label_1d6dbc;
        case 0x1d6dc0u: goto label_1d6dc0;
        case 0x1d6dc4u: goto label_1d6dc4;
        case 0x1d6dc8u: goto label_1d6dc8;
        case 0x1d6dccu: goto label_1d6dcc;
        case 0x1d6dd0u: goto label_1d6dd0;
        case 0x1d6dd4u: goto label_1d6dd4;
        case 0x1d6dd8u: goto label_1d6dd8;
        case 0x1d6ddcu: goto label_1d6ddc;
        case 0x1d6de0u: goto label_1d6de0;
        case 0x1d6de4u: goto label_1d6de4;
        case 0x1d6de8u: goto label_1d6de8;
        case 0x1d6decu: goto label_1d6dec;
        case 0x1d6df0u: goto label_1d6df0;
        case 0x1d6df4u: goto label_1d6df4;
        case 0x1d6df8u: goto label_1d6df8;
        case 0x1d6dfcu: goto label_1d6dfc;
        case 0x1d6e00u: goto label_1d6e00;
        case 0x1d6e04u: goto label_1d6e04;
        case 0x1d6e08u: goto label_1d6e08;
        case 0x1d6e0cu: goto label_1d6e0c;
        case 0x1d6e10u: goto label_1d6e10;
        case 0x1d6e14u: goto label_1d6e14;
        case 0x1d6e18u: goto label_1d6e18;
        case 0x1d6e1cu: goto label_1d6e1c;
        case 0x1d6e20u: goto label_1d6e20;
        case 0x1d6e24u: goto label_1d6e24;
        case 0x1d6e28u: goto label_1d6e28;
        case 0x1d6e2cu: goto label_1d6e2c;
        case 0x1d6e30u: goto label_1d6e30;
        case 0x1d6e34u: goto label_1d6e34;
        case 0x1d6e38u: goto label_1d6e38;
        case 0x1d6e3cu: goto label_1d6e3c;
        case 0x1d6e40u: goto label_1d6e40;
        case 0x1d6e44u: goto label_1d6e44;
        case 0x1d6e48u: goto label_1d6e48;
        case 0x1d6e4cu: goto label_1d6e4c;
        case 0x1d6e50u: goto label_1d6e50;
        case 0x1d6e54u: goto label_1d6e54;
        case 0x1d6e58u: goto label_1d6e58;
        case 0x1d6e5cu: goto label_1d6e5c;
        case 0x1d6e60u: goto label_1d6e60;
        case 0x1d6e64u: goto label_1d6e64;
        case 0x1d6e68u: goto label_1d6e68;
        case 0x1d6e6cu: goto label_1d6e6c;
        case 0x1d6e70u: goto label_1d6e70;
        case 0x1d6e74u: goto label_1d6e74;
        case 0x1d6e78u: goto label_1d6e78;
        case 0x1d6e7cu: goto label_1d6e7c;
        case 0x1d6e80u: goto label_1d6e80;
        case 0x1d6e84u: goto label_1d6e84;
        case 0x1d6e88u: goto label_1d6e88;
        case 0x1d6e8cu: goto label_1d6e8c;
        case 0x1d6e90u: goto label_1d6e90;
        case 0x1d6e94u: goto label_1d6e94;
        case 0x1d6e98u: goto label_1d6e98;
        case 0x1d6e9cu: goto label_1d6e9c;
        case 0x1d6ea0u: goto label_1d6ea0;
        case 0x1d6ea4u: goto label_1d6ea4;
        case 0x1d6ea8u: goto label_1d6ea8;
        case 0x1d6eacu: goto label_1d6eac;
        case 0x1d6eb0u: goto label_1d6eb0;
        case 0x1d6eb4u: goto label_1d6eb4;
        case 0x1d6eb8u: goto label_1d6eb8;
        case 0x1d6ebcu: goto label_1d6ebc;
        case 0x1d6ec0u: goto label_1d6ec0;
        case 0x1d6ec4u: goto label_1d6ec4;
        case 0x1d6ec8u: goto label_1d6ec8;
        case 0x1d6eccu: goto label_1d6ecc;
        case 0x1d6ed0u: goto label_1d6ed0;
        case 0x1d6ed4u: goto label_1d6ed4;
        case 0x1d6ed8u: goto label_1d6ed8;
        case 0x1d6edcu: goto label_1d6edc;
        case 0x1d6ee0u: goto label_1d6ee0;
        case 0x1d6ee4u: goto label_1d6ee4;
        case 0x1d6ee8u: goto label_1d6ee8;
        case 0x1d6eecu: goto label_1d6eec;
        case 0x1d6ef0u: goto label_1d6ef0;
        case 0x1d6ef4u: goto label_1d6ef4;
        case 0x1d6ef8u: goto label_1d6ef8;
        case 0x1d6efcu: goto label_1d6efc;
        case 0x1d6f00u: goto label_1d6f00;
        case 0x1d6f04u: goto label_1d6f04;
        case 0x1d6f08u: goto label_1d6f08;
        case 0x1d6f0cu: goto label_1d6f0c;
        case 0x1d6f10u: goto label_1d6f10;
        case 0x1d6f14u: goto label_1d6f14;
        case 0x1d6f18u: goto label_1d6f18;
        case 0x1d6f1cu: goto label_1d6f1c;
        case 0x1d6f20u: goto label_1d6f20;
        case 0x1d6f24u: goto label_1d6f24;
        case 0x1d6f28u: goto label_1d6f28;
        case 0x1d6f2cu: goto label_1d6f2c;
        case 0x1d6f30u: goto label_1d6f30;
        case 0x1d6f34u: goto label_1d6f34;
        case 0x1d6f38u: goto label_1d6f38;
        case 0x1d6f3cu: goto label_1d6f3c;
        case 0x1d6f40u: goto label_1d6f40;
        case 0x1d6f44u: goto label_1d6f44;
        case 0x1d6f48u: goto label_1d6f48;
        case 0x1d6f4cu: goto label_1d6f4c;
        case 0x1d6f50u: goto label_1d6f50;
        case 0x1d6f54u: goto label_1d6f54;
        case 0x1d6f58u: goto label_1d6f58;
        case 0x1d6f5cu: goto label_1d6f5c;
        case 0x1d6f60u: goto label_1d6f60;
        case 0x1d6f64u: goto label_1d6f64;
        case 0x1d6f68u: goto label_1d6f68;
        case 0x1d6f6cu: goto label_1d6f6c;
        case 0x1d6f70u: goto label_1d6f70;
        case 0x1d6f74u: goto label_1d6f74;
        case 0x1d6f78u: goto label_1d6f78;
        case 0x1d6f7cu: goto label_1d6f7c;
        case 0x1d6f80u: goto label_1d6f80;
        case 0x1d6f84u: goto label_1d6f84;
        case 0x1d6f88u: goto label_1d6f88;
        case 0x1d6f8cu: goto label_1d6f8c;
        case 0x1d6f90u: goto label_1d6f90;
        case 0x1d6f94u: goto label_1d6f94;
        case 0x1d6f98u: goto label_1d6f98;
        case 0x1d6f9cu: goto label_1d6f9c;
        case 0x1d6fa0u: goto label_1d6fa0;
        case 0x1d6fa4u: goto label_1d6fa4;
        case 0x1d6fa8u: goto label_1d6fa8;
        case 0x1d6facu: goto label_1d6fac;
        case 0x1d6fb0u: goto label_1d6fb0;
        case 0x1d6fb4u: goto label_1d6fb4;
        case 0x1d6fb8u: goto label_1d6fb8;
        case 0x1d6fbcu: goto label_1d6fbc;
        case 0x1d6fc0u: goto label_1d6fc0;
        case 0x1d6fc4u: goto label_1d6fc4;
        case 0x1d6fc8u: goto label_1d6fc8;
        case 0x1d6fccu: goto label_1d6fcc;
        case 0x1d6fd0u: goto label_1d6fd0;
        case 0x1d6fd4u: goto label_1d6fd4;
        case 0x1d6fd8u: goto label_1d6fd8;
        case 0x1d6fdcu: goto label_1d6fdc;
        case 0x1d6fe0u: goto label_1d6fe0;
        case 0x1d6fe4u: goto label_1d6fe4;
        case 0x1d6fe8u: goto label_1d6fe8;
        case 0x1d6fecu: goto label_1d6fec;
        case 0x1d6ff0u: goto label_1d6ff0;
        case 0x1d6ff4u: goto label_1d6ff4;
        case 0x1d6ff8u: goto label_1d6ff8;
        case 0x1d6ffcu: goto label_1d6ffc;
        case 0x1d7000u: goto label_1d7000;
        case 0x1d7004u: goto label_1d7004;
        case 0x1d7008u: goto label_1d7008;
        case 0x1d700cu: goto label_1d700c;
        case 0x1d7010u: goto label_1d7010;
        case 0x1d7014u: goto label_1d7014;
        case 0x1d7018u: goto label_1d7018;
        case 0x1d701cu: goto label_1d701c;
        case 0x1d7020u: goto label_1d7020;
        case 0x1d7024u: goto label_1d7024;
        case 0x1d7028u: goto label_1d7028;
        case 0x1d702cu: goto label_1d702c;
        case 0x1d7030u: goto label_1d7030;
        case 0x1d7034u: goto label_1d7034;
        case 0x1d7038u: goto label_1d7038;
        case 0x1d703cu: goto label_1d703c;
        case 0x1d7040u: goto label_1d7040;
        case 0x1d7044u: goto label_1d7044;
        case 0x1d7048u: goto label_1d7048;
        case 0x1d704cu: goto label_1d704c;
        case 0x1d7050u: goto label_1d7050;
        case 0x1d7054u: goto label_1d7054;
        case 0x1d7058u: goto label_1d7058;
        case 0x1d705cu: goto label_1d705c;
        case 0x1d7060u: goto label_1d7060;
        case 0x1d7064u: goto label_1d7064;
        case 0x1d7068u: goto label_1d7068;
        case 0x1d706cu: goto label_1d706c;
        case 0x1d7070u: goto label_1d7070;
        case 0x1d7074u: goto label_1d7074;
        case 0x1d7078u: goto label_1d7078;
        case 0x1d707cu: goto label_1d707c;
        case 0x1d7080u: goto label_1d7080;
        case 0x1d7084u: goto label_1d7084;
        case 0x1d7088u: goto label_1d7088;
        case 0x1d708cu: goto label_1d708c;
        case 0x1d7090u: goto label_1d7090;
        case 0x1d7094u: goto label_1d7094;
        case 0x1d7098u: goto label_1d7098;
        case 0x1d709cu: goto label_1d709c;
        case 0x1d70a0u: goto label_1d70a0;
        case 0x1d70a4u: goto label_1d70a4;
        case 0x1d70a8u: goto label_1d70a8;
        case 0x1d70acu: goto label_1d70ac;
        case 0x1d70b0u: goto label_1d70b0;
        case 0x1d70b4u: goto label_1d70b4;
        case 0x1d70b8u: goto label_1d70b8;
        case 0x1d70bcu: goto label_1d70bc;
        case 0x1d70c0u: goto label_1d70c0;
        case 0x1d70c4u: goto label_1d70c4;
        case 0x1d70c8u: goto label_1d70c8;
        case 0x1d70ccu: goto label_1d70cc;
        case 0x1d70d0u: goto label_1d70d0;
        case 0x1d70d4u: goto label_1d70d4;
        case 0x1d70d8u: goto label_1d70d8;
        case 0x1d70dcu: goto label_1d70dc;
        case 0x1d70e0u: goto label_1d70e0;
        case 0x1d70e4u: goto label_1d70e4;
        case 0x1d70e8u: goto label_1d70e8;
        case 0x1d70ecu: goto label_1d70ec;
        case 0x1d70f0u: goto label_1d70f0;
        case 0x1d70f4u: goto label_1d70f4;
        case 0x1d70f8u: goto label_1d70f8;
        case 0x1d70fcu: goto label_1d70fc;
        case 0x1d7100u: goto label_1d7100;
        case 0x1d7104u: goto label_1d7104;
        case 0x1d7108u: goto label_1d7108;
        case 0x1d710cu: goto label_1d710c;
        case 0x1d7110u: goto label_1d7110;
        case 0x1d7114u: goto label_1d7114;
        case 0x1d7118u: goto label_1d7118;
        case 0x1d711cu: goto label_1d711c;
        case 0x1d7120u: goto label_1d7120;
        case 0x1d7124u: goto label_1d7124;
        case 0x1d7128u: goto label_1d7128;
        case 0x1d712cu: goto label_1d712c;
        case 0x1d7130u: goto label_1d7130;
        case 0x1d7134u: goto label_1d7134;
        case 0x1d7138u: goto label_1d7138;
        case 0x1d713cu: goto label_1d713c;
        case 0x1d7140u: goto label_1d7140;
        case 0x1d7144u: goto label_1d7144;
        case 0x1d7148u: goto label_1d7148;
        case 0x1d714cu: goto label_1d714c;
        case 0x1d7150u: goto label_1d7150;
        case 0x1d7154u: goto label_1d7154;
        case 0x1d7158u: goto label_1d7158;
        case 0x1d715cu: goto label_1d715c;
        case 0x1d7160u: goto label_1d7160;
        case 0x1d7164u: goto label_1d7164;
        case 0x1d7168u: goto label_1d7168;
        case 0x1d716cu: goto label_1d716c;
        case 0x1d7170u: goto label_1d7170;
        case 0x1d7174u: goto label_1d7174;
        case 0x1d7178u: goto label_1d7178;
        case 0x1d717cu: goto label_1d717c;
        case 0x1d7180u: goto label_1d7180;
        case 0x1d7184u: goto label_1d7184;
        case 0x1d7188u: goto label_1d7188;
        case 0x1d718cu: goto label_1d718c;
        case 0x1d7190u: goto label_1d7190;
        case 0x1d7194u: goto label_1d7194;
        case 0x1d7198u: goto label_1d7198;
        case 0x1d719cu: goto label_1d719c;
        case 0x1d71a0u: goto label_1d71a0;
        case 0x1d71a4u: goto label_1d71a4;
        case 0x1d71a8u: goto label_1d71a8;
        case 0x1d71acu: goto label_1d71ac;
        case 0x1d71b0u: goto label_1d71b0;
        case 0x1d71b4u: goto label_1d71b4;
        case 0x1d71b8u: goto label_1d71b8;
        case 0x1d71bcu: goto label_1d71bc;
        case 0x1d71c0u: goto label_1d71c0;
        case 0x1d71c4u: goto label_1d71c4;
        case 0x1d71c8u: goto label_1d71c8;
        case 0x1d71ccu: goto label_1d71cc;
        case 0x1d71d0u: goto label_1d71d0;
        case 0x1d71d4u: goto label_1d71d4;
        case 0x1d71d8u: goto label_1d71d8;
        case 0x1d71dcu: goto label_1d71dc;
        case 0x1d71e0u: goto label_1d71e0;
        case 0x1d71e4u: goto label_1d71e4;
        case 0x1d71e8u: goto label_1d71e8;
        case 0x1d71ecu: goto label_1d71ec;
        case 0x1d71f0u: goto label_1d71f0;
        case 0x1d71f4u: goto label_1d71f4;
        case 0x1d71f8u: goto label_1d71f8;
        case 0x1d71fcu: goto label_1d71fc;
        case 0x1d7200u: goto label_1d7200;
        case 0x1d7204u: goto label_1d7204;
        case 0x1d7208u: goto label_1d7208;
        case 0x1d720cu: goto label_1d720c;
        case 0x1d7210u: goto label_1d7210;
        case 0x1d7214u: goto label_1d7214;
        case 0x1d7218u: goto label_1d7218;
        case 0x1d721cu: goto label_1d721c;
        case 0x1d7220u: goto label_1d7220;
        case 0x1d7224u: goto label_1d7224;
        case 0x1d7228u: goto label_1d7228;
        case 0x1d722cu: goto label_1d722c;
        case 0x1d7230u: goto label_1d7230;
        case 0x1d7234u: goto label_1d7234;
        case 0x1d7238u: goto label_1d7238;
        case 0x1d723cu: goto label_1d723c;
        case 0x1d7240u: goto label_1d7240;
        case 0x1d7244u: goto label_1d7244;
        case 0x1d7248u: goto label_1d7248;
        case 0x1d724cu: goto label_1d724c;
        case 0x1d7250u: goto label_1d7250;
        case 0x1d7254u: goto label_1d7254;
        case 0x1d7258u: goto label_1d7258;
        case 0x1d725cu: goto label_1d725c;
        case 0x1d7260u: goto label_1d7260;
        case 0x1d7264u: goto label_1d7264;
        case 0x1d7268u: goto label_1d7268;
        case 0x1d726cu: goto label_1d726c;
        case 0x1d7270u: goto label_1d7270;
        case 0x1d7274u: goto label_1d7274;
        case 0x1d7278u: goto label_1d7278;
        case 0x1d727cu: goto label_1d727c;
        case 0x1d7280u: goto label_1d7280;
        case 0x1d7284u: goto label_1d7284;
        case 0x1d7288u: goto label_1d7288;
        case 0x1d728cu: goto label_1d728c;
        case 0x1d7290u: goto label_1d7290;
        case 0x1d7294u: goto label_1d7294;
        case 0x1d7298u: goto label_1d7298;
        case 0x1d729cu: goto label_1d729c;
        case 0x1d72a0u: goto label_1d72a0;
        case 0x1d72a4u: goto label_1d72a4;
        case 0x1d72a8u: goto label_1d72a8;
        case 0x1d72acu: goto label_1d72ac;
        case 0x1d72b0u: goto label_1d72b0;
        case 0x1d72b4u: goto label_1d72b4;
        case 0x1d72b8u: goto label_1d72b8;
        case 0x1d72bcu: goto label_1d72bc;
        case 0x1d72c0u: goto label_1d72c0;
        case 0x1d72c4u: goto label_1d72c4;
        case 0x1d72c8u: goto label_1d72c8;
        case 0x1d72ccu: goto label_1d72cc;
        case 0x1d72d0u: goto label_1d72d0;
        case 0x1d72d4u: goto label_1d72d4;
        case 0x1d72d8u: goto label_1d72d8;
        case 0x1d72dcu: goto label_1d72dc;
        case 0x1d72e0u: goto label_1d72e0;
        case 0x1d72e4u: goto label_1d72e4;
        case 0x1d72e8u: goto label_1d72e8;
        case 0x1d72ecu: goto label_1d72ec;
        case 0x1d72f0u: goto label_1d72f0;
        case 0x1d72f4u: goto label_1d72f4;
        case 0x1d72f8u: goto label_1d72f8;
        case 0x1d72fcu: goto label_1d72fc;
        case 0x1d7300u: goto label_1d7300;
        case 0x1d7304u: goto label_1d7304;
        case 0x1d7308u: goto label_1d7308;
        case 0x1d730cu: goto label_1d730c;
        case 0x1d7310u: goto label_1d7310;
        case 0x1d7314u: goto label_1d7314;
        case 0x1d7318u: goto label_1d7318;
        case 0x1d731cu: goto label_1d731c;
        case 0x1d7320u: goto label_1d7320;
        case 0x1d7324u: goto label_1d7324;
        case 0x1d7328u: goto label_1d7328;
        case 0x1d732cu: goto label_1d732c;
        case 0x1d7330u: goto label_1d7330;
        case 0x1d7334u: goto label_1d7334;
        case 0x1d7338u: goto label_1d7338;
        case 0x1d733cu: goto label_1d733c;
        case 0x1d7340u: goto label_1d7340;
        case 0x1d7344u: goto label_1d7344;
        case 0x1d7348u: goto label_1d7348;
        case 0x1d734cu: goto label_1d734c;
        case 0x1d7350u: goto label_1d7350;
        case 0x1d7354u: goto label_1d7354;
        case 0x1d7358u: goto label_1d7358;
        case 0x1d735cu: goto label_1d735c;
        case 0x1d7360u: goto label_1d7360;
        case 0x1d7364u: goto label_1d7364;
        case 0x1d7368u: goto label_1d7368;
        case 0x1d736cu: goto label_1d736c;
        case 0x1d7370u: goto label_1d7370;
        case 0x1d7374u: goto label_1d7374;
        case 0x1d7378u: goto label_1d7378;
        case 0x1d737cu: goto label_1d737c;
        case 0x1d7380u: goto label_1d7380;
        case 0x1d7384u: goto label_1d7384;
        case 0x1d7388u: goto label_1d7388;
        case 0x1d738cu: goto label_1d738c;
        case 0x1d7390u: goto label_1d7390;
        case 0x1d7394u: goto label_1d7394;
        case 0x1d7398u: goto label_1d7398;
        case 0x1d739cu: goto label_1d739c;
        case 0x1d73a0u: goto label_1d73a0;
        case 0x1d73a4u: goto label_1d73a4;
        case 0x1d73a8u: goto label_1d73a8;
        case 0x1d73acu: goto label_1d73ac;
        case 0x1d73b0u: goto label_1d73b0;
        case 0x1d73b4u: goto label_1d73b4;
        case 0x1d73b8u: goto label_1d73b8;
        case 0x1d73bcu: goto label_1d73bc;
        case 0x1d73c0u: goto label_1d73c0;
        case 0x1d73c4u: goto label_1d73c4;
        case 0x1d73c8u: goto label_1d73c8;
        case 0x1d73ccu: goto label_1d73cc;
        case 0x1d73d0u: goto label_1d73d0;
        case 0x1d73d4u: goto label_1d73d4;
        case 0x1d73d8u: goto label_1d73d8;
        case 0x1d73dcu: goto label_1d73dc;
        case 0x1d73e0u: goto label_1d73e0;
        case 0x1d73e4u: goto label_1d73e4;
        case 0x1d73e8u: goto label_1d73e8;
        case 0x1d73ecu: goto label_1d73ec;
        case 0x1d73f0u: goto label_1d73f0;
        case 0x1d73f4u: goto label_1d73f4;
        case 0x1d73f8u: goto label_1d73f8;
        case 0x1d73fcu: goto label_1d73fc;
        case 0x1d7400u: goto label_1d7400;
        case 0x1d7404u: goto label_1d7404;
        case 0x1d7408u: goto label_1d7408;
        case 0x1d740cu: goto label_1d740c;
        case 0x1d7410u: goto label_1d7410;
        case 0x1d7414u: goto label_1d7414;
        case 0x1d7418u: goto label_1d7418;
        case 0x1d741cu: goto label_1d741c;
        case 0x1d7420u: goto label_1d7420;
        case 0x1d7424u: goto label_1d7424;
        case 0x1d7428u: goto label_1d7428;
        case 0x1d742cu: goto label_1d742c;
        case 0x1d7430u: goto label_1d7430;
        case 0x1d7434u: goto label_1d7434;
        case 0x1d7438u: goto label_1d7438;
        case 0x1d743cu: goto label_1d743c;
        case 0x1d7440u: goto label_1d7440;
        case 0x1d7444u: goto label_1d7444;
        case 0x1d7448u: goto label_1d7448;
        case 0x1d744cu: goto label_1d744c;
        case 0x1d7450u: goto label_1d7450;
        case 0x1d7454u: goto label_1d7454;
        case 0x1d7458u: goto label_1d7458;
        case 0x1d745cu: goto label_1d745c;
        case 0x1d7460u: goto label_1d7460;
        case 0x1d7464u: goto label_1d7464;
        case 0x1d7468u: goto label_1d7468;
        case 0x1d746cu: goto label_1d746c;
        case 0x1d7470u: goto label_1d7470;
        case 0x1d7474u: goto label_1d7474;
        case 0x1d7478u: goto label_1d7478;
        case 0x1d747cu: goto label_1d747c;
        case 0x1d7480u: goto label_1d7480;
        case 0x1d7484u: goto label_1d7484;
        case 0x1d7488u: goto label_1d7488;
        case 0x1d748cu: goto label_1d748c;
        case 0x1d7490u: goto label_1d7490;
        case 0x1d7494u: goto label_1d7494;
        case 0x1d7498u: goto label_1d7498;
        case 0x1d749cu: goto label_1d749c;
        case 0x1d74a0u: goto label_1d74a0;
        case 0x1d74a4u: goto label_1d74a4;
        case 0x1d74a8u: goto label_1d74a8;
        case 0x1d74acu: goto label_1d74ac;
        case 0x1d74b0u: goto label_1d74b0;
        case 0x1d74b4u: goto label_1d74b4;
        case 0x1d74b8u: goto label_1d74b8;
        case 0x1d74bcu: goto label_1d74bc;
        case 0x1d74c0u: goto label_1d74c0;
        case 0x1d74c4u: goto label_1d74c4;
        case 0x1d74c8u: goto label_1d74c8;
        case 0x1d74ccu: goto label_1d74cc;
        case 0x1d74d0u: goto label_1d74d0;
        case 0x1d74d4u: goto label_1d74d4;
        case 0x1d74d8u: goto label_1d74d8;
        case 0x1d74dcu: goto label_1d74dc;
        case 0x1d74e0u: goto label_1d74e0;
        case 0x1d74e4u: goto label_1d74e4;
        case 0x1d74e8u: goto label_1d74e8;
        case 0x1d74ecu: goto label_1d74ec;
        case 0x1d74f0u: goto label_1d74f0;
        case 0x1d74f4u: goto label_1d74f4;
        case 0x1d74f8u: goto label_1d74f8;
        case 0x1d74fcu: goto label_1d74fc;
        case 0x1d7500u: goto label_1d7500;
        case 0x1d7504u: goto label_1d7504;
        case 0x1d7508u: goto label_1d7508;
        case 0x1d750cu: goto label_1d750c;
        case 0x1d7510u: goto label_1d7510;
        case 0x1d7514u: goto label_1d7514;
        case 0x1d7518u: goto label_1d7518;
        case 0x1d751cu: goto label_1d751c;
        case 0x1d7520u: goto label_1d7520;
        case 0x1d7524u: goto label_1d7524;
        case 0x1d7528u: goto label_1d7528;
        case 0x1d752cu: goto label_1d752c;
        case 0x1d7530u: goto label_1d7530;
        case 0x1d7534u: goto label_1d7534;
        case 0x1d7538u: goto label_1d7538;
        case 0x1d753cu: goto label_1d753c;
        case 0x1d7540u: goto label_1d7540;
        case 0x1d7544u: goto label_1d7544;
        case 0x1d7548u: goto label_1d7548;
        case 0x1d754cu: goto label_1d754c;
        case 0x1d7550u: goto label_1d7550;
        case 0x1d7554u: goto label_1d7554;
        case 0x1d7558u: goto label_1d7558;
        case 0x1d755cu: goto label_1d755c;
        case 0x1d7560u: goto label_1d7560;
        case 0x1d7564u: goto label_1d7564;
        case 0x1d7568u: goto label_1d7568;
        case 0x1d756cu: goto label_1d756c;
        case 0x1d7570u: goto label_1d7570;
        case 0x1d7574u: goto label_1d7574;
        case 0x1d7578u: goto label_1d7578;
        case 0x1d757cu: goto label_1d757c;
        case 0x1d7580u: goto label_1d7580;
        case 0x1d7584u: goto label_1d7584;
        case 0x1d7588u: goto label_1d7588;
        case 0x1d758cu: goto label_1d758c;
        case 0x1d7590u: goto label_1d7590;
        case 0x1d7594u: goto label_1d7594;
        case 0x1d7598u: goto label_1d7598;
        case 0x1d759cu: goto label_1d759c;
        case 0x1d75a0u: goto label_1d75a0;
        case 0x1d75a4u: goto label_1d75a4;
        case 0x1d75a8u: goto label_1d75a8;
        case 0x1d75acu: goto label_1d75ac;
        default: break;
    }

    ctx->pc = 0x1d6d40u;

label_1d6d40:
    // 0x1d6d40: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x1d6d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_1d6d44:
    // 0x1d6d44: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x1d6d44u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d48:
    // 0x1d6d48: 0xffb100d8  sd          $s1, 0xD8($sp)
    ctx->pc = 0x1d6d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 216), GPR_U64(ctx, 17));
label_1d6d4c:
    // 0x1d6d4c: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x1d6d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_1d6d50:
    // 0x1d6d50: 0xffb300e8  sd          $s3, 0xE8($sp)
    ctx->pc = 0x1d6d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 232), GPR_U64(ctx, 19));
label_1d6d54:
    // 0x1d6d54: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1d6d54u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d58:
    // 0x1d6d58: 0xffb400f0  sd          $s4, 0xF0($sp)
    ctx->pc = 0x1d6d58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 20));
label_1d6d5c:
    // 0x1d6d5c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x1d6d5cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1d6d60:
    // 0x1d6d60: 0xffb000d0  sd          $s0, 0xD0($sp)
    ctx->pc = 0x1d6d60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 16));
label_1d6d64:
    // 0x1d6d64: 0x25620004  addiu       $v0, $t3, 0x4
    ctx->pc = 0x1d6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), 4));
label_1d6d68:
    // 0x1d6d68: 0xffb200e0  sd          $s2, 0xE0($sp)
    ctx->pc = 0x1d6d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 18));
label_1d6d6c:
    // 0x1d6d6c: 0x434024  and         $t0, $v0, $v1
    ctx->pc = 0x1d6d6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_1d6d70:
    // 0x1d6d70: 0xffbf00f8  sd          $ra, 0xF8($sp)
    ctx->pc = 0x1d6d70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 248), GPR_U64(ctx, 31));
label_1d6d74:
    // 0x1d6d74: 0x1681823  subu        $v1, $t3, $t0
    ctx->pc = 0x1d6d74u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 8)));
label_1d6d78:
    // 0x1d6d78: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x1d6d78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_1d6d7c:
    // 0x1d6d7c: 0x26910028  addiu       $s1, $s4, 0x28
    ctx->pc = 0x1d6d7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 20), 40));
label_1d6d80:
    // 0x1d6d80: 0x81090000  lb          $t1, 0x0($t0)
    ctx->pc = 0x1d6d80u;
    SET_GPR_S32(ctx, 9, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6d84:
    // 0x1d6d84: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6d84u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6d88:
    // 0x1d6d88: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1d6d88u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6d8c:
    // 0x1d6d8c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6d8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6d90:
    // 0x1d6d90: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x1d6d90u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6d94:
    // 0x1d6d94: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6d94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6d98:
    // 0x1d6d98: 0x91060000  lbu         $a2, 0x0($t0)
    ctx->pc = 0x1d6d98u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6d9c:
    // 0x1d6d9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6d9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6da0:
    // 0x1d6da0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d6da0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6da4:
    // 0x1d6da4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6da4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6da8:
    // 0x1d6da8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d6da8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6dac:
    // 0x1d6dac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6dacu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6db0:
    // 0x1d6db0: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d6db0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1d6db4:
    // 0x1d6db4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6db4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6db8:
    // 0x1d6db8: 0x1244825  or          $t1, $t1, $a0
    ctx->pc = 0x1d6db8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 4));
label_1d6dbc:
    // 0x1d6dbc: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1d6dbcu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6dc0:
    // 0x1d6dc0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d6dc0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d6dc4:
    // 0x1d6dc4: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d6dc4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1d6dc8:
    // 0x1d6dc8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6dc8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6dcc:
    // 0x1d6dcc: 0x1254825  or          $t1, $t1, $a1
    ctx->pc = 0x1d6dccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 5));
label_1d6dd0:
    // 0x1d6dd0: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6dd0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6dd4:
    // 0x1d6dd4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d6dd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6dd8:
    // 0x1d6dd8: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x1d6dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_1d6ddc:
    // 0x1d6ddc: 0xe43825  or          $a3, $a3, $a0
    ctx->pc = 0x1d6ddcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_1d6de0:
    // 0x1d6de0: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d6de0u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1d6de4:
    // 0x1d6de4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6de4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6de8:
    // 0x1d6de8: 0x1264825  or          $t1, $t1, $a2
    ctx->pc = 0x1d6de8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 6));
label_1d6dec:
    // 0x1d6dec: 0x28a30010  slti        $v1, $a1, 0x10
    ctx->pc = 0x1d6decu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
label_1d6df0:
    // 0x1d6df0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d6df0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d6df4:
    // 0x1d6df4: 0xa94804  sllv        $t1, $t1, $a1
    ctx->pc = 0x1d6df4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 5) & 0x1F));
label_1d6df8:
    // 0x1d6df8: 0x1460001d  bnez        $v1, . + 4 + (0x1D << 2)
label_1d6dfc:
    if (ctx->pc == 0x1D6DFCu) {
        ctx->pc = 0x1D6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DF8u;
        // 0x1d6dfc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6E00u;
        goto label_1d6e00;
    }
    ctx->pc = 0x1D6DF8u;
    {
        const bool branch_taken_0x1d6df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6DF8u;
        // 0x1d6dfc: 0x25080001  addiu       $t0, $t0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6df8) {
            ctx->pc = 0x1D6E70u;
            goto label_1d6e70;
        }
    }
    ctx->pc = 0x1D6E00u;
label_1d6e00:
    // 0x1d6e00: 0x24a5fff0  addiu       $a1, $a1, -0x10
    ctx->pc = 0x1d6e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967280));
label_1d6e04:
    // 0x1d6e04: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1d6e08:
    if (ctx->pc == 0x1D6E08u) {
        ctx->pc = 0x1D6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E04u;
        // 0x1d6e08: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6E0Cu;
        goto label_1d6e0c;
    }
    ctx->pc = 0x1D6E04u;
    {
        const bool branch_taken_0x1d6e04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E04u;
        // 0x1d6e08: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e04) {
            ctx->pc = 0x1D6E28u;
            goto label_1d6e28;
        }
    }
    ctx->pc = 0x1D6E0Cu;
label_1d6e0c:
    // 0x1d6e0c: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d6e10:
    // 0x1d6e10: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d6e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1d6e14:
    // 0x1d6e14: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d6e14u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1d6e18:
    // 0x1d6e18: 0x91c02  srl         $v1, $t1, 16
    ctx->pc = 0x1d6e18u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1d6e1c:
    // 0x1d6e1c: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1d6e1cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1d6e20:
    // 0x1d6e20: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d6e24:
    if (ctx->pc == 0x1D6E24u) {
        ctx->pc = 0x1D6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E20u;
        // 0x1d6e24: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6E28u;
        goto label_1d6e28;
    }
    ctx->pc = 0x1D6E20u;
    {
        const bool branch_taken_0x1d6e20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E20u;
        // 0x1d6e24: 0xae230000  sw          $v1, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e20) {
            ctx->pc = 0x1D6E34u;
            goto label_1d6e34;
        }
    }
    ctx->pc = 0x1D6E28u;
label_1d6e28:
    // 0x1d6e28: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x1d6e28u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1d6e2c:
    // 0x1d6e2c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d6e2cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d6e30:
    // 0x1d6e30: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d6e30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d6e34:
    // 0x1d6e34: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d6e34u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6e38:
    // 0x1d6e38: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6e38u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6e3c:
    // 0x1d6e3c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d6e3cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6e40:
    // 0x1d6e40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6e40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6e44:
    // 0x1d6e44: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6e44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6e48:
    // 0x1d6e48: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d6e48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6e4c:
    // 0x1d6e4c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d6e4cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d6e50:
    // 0x1d6e50: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6e50u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6e54:
    // 0x1d6e54: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6e54u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6e58:
    // 0x1d6e58: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d6e58u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6e5c:
    // 0x1d6e5c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d6e5cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d6e60:
    // 0x1d6e60: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6e60u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6e64:
    // 0x1d6e64: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6e64u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6e68:
    // 0x1d6e68: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d6e6c:
    if (ctx->pc == 0x1D6E6Cu) {
        ctx->pc = 0x1D6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E68u;
        // 0x1d6e6c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6E70u;
        goto label_1d6e70;
    }
    ctx->pc = 0x1D6E68u;
    {
        const bool branch_taken_0x1d6e68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E68u;
        // 0x1d6e6c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6e68) {
            ctx->pc = 0x1D6E80u;
            goto label_1d6e80;
        }
    }
    ctx->pc = 0x1D6E70u;
label_1d6e70:
    // 0x1d6e70: 0x91402  srl         $v0, $t1, 16
    ctx->pc = 0x1d6e70u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 16));
label_1d6e74:
    // 0x1d6e74: 0x94c00  sll         $t1, $t1, 16
    ctx->pc = 0x1d6e74u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 16));
label_1d6e78:
    // 0x1d6e78: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d6e78u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_1d6e7c:
    // 0x1d6e7c: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x1d6e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_1d6e80:
    // 0x1d6e80: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d6e84:
    // 0x1d6e84: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1d6e84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1d6e88:
    // 0x1d6e88: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1d6e8c:
    if (ctx->pc == 0x1D6E8Cu) {
        ctx->pc = 0x1D6E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6E88u;
        // 0x1d6e8c: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6E90u;
        goto label_1d6e90;
    }
    ctx->pc = 0x1D6E88u;
    {
        const bool branch_taken_0x1d6e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6e88) {
            ctx->pc = 0x1D6E8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6E88u;
            // 0x1d6e8c: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6ED0u;
            goto label_1d6ed0;
        }
    }
    ctx->pc = 0x1D6E90u;
label_1d6e90:
    // 0x1d6e90: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1d6e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_1d6e94:
    // 0x1d6e94: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1d6e94u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1d6e98:
    // 0x1d6e98: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d6e98u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6e9c:
    // 0x1d6e9c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6e9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6ea0:
    // 0x1d6ea0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d6ea0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6ea4:
    // 0x1d6ea4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6ea4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6ea8:
    // 0x1d6ea8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6ea8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6eac:
    // 0x1d6eac: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d6eacu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6eb0:
    // 0x1d6eb0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d6eb0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d6eb4:
    // 0x1d6eb4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6eb4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6eb8:
    // 0x1d6eb8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6eb8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6ebc:
    // 0x1d6ebc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d6ebcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6ec0:
    // 0x1d6ec0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d6ec0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d6ec4:
    // 0x1d6ec4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6ec4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6ec8:
    // 0x1d6ec8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6ec8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6ecc:
    // 0x1d6ecc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d6eccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d6ed0:
    // 0x1d6ed0: 0x28a2000a  slti        $v0, $a1, 0xA
    ctx->pc = 0x1d6ed0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)10) ? 1 : 0);
label_1d6ed4:
    // 0x1d6ed4: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1d6ed8:
    if (ctx->pc == 0x1D6ED8u) {
        ctx->pc = 0x1D6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6ED4u;
        // 0x1d6ed8: 0x91282  srl         $v0, $t1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6EDCu;
        goto label_1d6edc;
    }
    ctx->pc = 0x1D6ED4u;
    {
        const bool branch_taken_0x1d6ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6ED4u;
        // 0x1d6ed8: 0x91282  srl         $v0, $t1, 10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ed4) {
            ctx->pc = 0x1D6F50u;
            goto label_1d6f50;
        }
    }
    ctx->pc = 0x1D6EDCu;
label_1d6edc:
    // 0x1d6edc: 0x24a5fff6  addiu       $a1, $a1, -0xA
    ctx->pc = 0x1d6edcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967286));
label_1d6ee0:
    // 0x1d6ee0: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1d6ee4:
    if (ctx->pc == 0x1D6EE4u) {
        ctx->pc = 0x1D6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EE0u;
        // 0x1d6ee4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6EE8u;
        goto label_1d6ee8;
    }
    ctx->pc = 0x1D6EE0u;
    {
        const bool branch_taken_0x1d6ee0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EE0u;
        // 0x1d6ee4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6ee0) {
            ctx->pc = 0x1D6F08u;
            goto label_1d6f08;
        }
    }
    ctx->pc = 0x1D6EE8u;
label_1d6ee8:
    // 0x1d6ee8: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d6ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d6eec:
    // 0x1d6eec: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d6eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1d6ef0:
    // 0x1d6ef0: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d6ef0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1d6ef4:
    // 0x1d6ef4: 0x91a82  srl         $v1, $t1, 10
    ctx->pc = 0x1d6ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
label_1d6ef8:
    // 0x1d6ef8: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1d6ef8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1d6efc:
    // 0x1d6efc: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d6f00:
    if (ctx->pc == 0x1D6F00u) {
        ctx->pc = 0x1D6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EFCu;
        // 0x1d6f00: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6F04u;
        goto label_1d6f04;
    }
    ctx->pc = 0x1D6EFCu;
    {
        const bool branch_taken_0x1d6efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6EFCu;
        // 0x1d6f00: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6efc) {
            ctx->pc = 0x1D6F14u;
            goto label_1d6f14;
        }
    }
    ctx->pc = 0x1D6F04u;
label_1d6f04:
    // 0x1d6f04: 0x0  nop
    ctx->pc = 0x1d6f04u;
    // NOP
label_1d6f08:
    // 0x1d6f08: 0x91282  srl         $v0, $t1, 10
    ctx->pc = 0x1d6f08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 10));
label_1d6f0c:
    // 0x1d6f0c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d6f0cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d6f10:
    // 0x1d6f10: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1d6f10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1d6f14:
    // 0x1d6f14: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d6f14u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6f18:
    // 0x1d6f18: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6f18u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6f1c:
    // 0x1d6f1c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d6f1cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6f20:
    // 0x1d6f20: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6f20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6f24:
    // 0x1d6f24: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6f24u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6f28:
    // 0x1d6f28: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d6f28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6f2c:
    // 0x1d6f2c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d6f2cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d6f30:
    // 0x1d6f30: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6f30u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6f34:
    // 0x1d6f34: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6f34u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6f38:
    // 0x1d6f38: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d6f38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6f3c:
    // 0x1d6f3c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d6f3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d6f40:
    // 0x1d6f40: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6f40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6f44:
    // 0x1d6f44: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6f44u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6f48:
    // 0x1d6f48: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d6f4c:
    if (ctx->pc == 0x1D6F4Cu) {
        ctx->pc = 0x1D6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F48u;
        // 0x1d6f4c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6F50u;
        goto label_1d6f50;
    }
    ctx->pc = 0x1D6F48u;
    {
        const bool branch_taken_0x1d6f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F48u;
        // 0x1d6f4c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6f48) {
            ctx->pc = 0x1D6F5Cu;
            goto label_1d6f5c;
        }
    }
    ctx->pc = 0x1D6F50u;
label_1d6f50:
    // 0x1d6f50: 0x94d80  sll         $t1, $t1, 22
    ctx->pc = 0x1d6f50u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 22));
label_1d6f54:
    // 0x1d6f54: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x1d6f54u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
label_1d6f58:
    // 0x1d6f58: 0x24a50016  addiu       $a1, $a1, 0x16
    ctx->pc = 0x1d6f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 22));
label_1d6f5c:
    // 0x1d6f5c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d6f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d6f60:
    // 0x1d6f60: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1d6f60u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1d6f64:
    // 0x1d6f64: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1d6f68:
    if (ctx->pc == 0x1D6F68u) {
        ctx->pc = 0x1D6F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6F64u;
        // 0x1d6f68: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6F6Cu;
        goto label_1d6f6c;
    }
    ctx->pc = 0x1D6F64u;
    {
        const bool branch_taken_0x1d6f64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d6f64) {
            ctx->pc = 0x1D6F68u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D6F64u;
            // 0x1d6f68: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D6FACu;
            goto label_1d6fac;
        }
    }
    ctx->pc = 0x1D6F6Cu;
label_1d6f6c:
    // 0x1d6f6c: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1d6f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_1d6f70:
    // 0x1d6f70: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1d6f70u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1d6f74:
    // 0x1d6f74: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d6f74u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6f78:
    // 0x1d6f78: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6f78u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6f7c:
    // 0x1d6f7c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d6f7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6f80:
    // 0x1d6f80: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6f80u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6f84:
    // 0x1d6f84: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6f84u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6f88:
    // 0x1d6f88: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d6f88u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6f8c:
    // 0x1d6f8c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d6f8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d6f90:
    // 0x1d6f90: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6f90u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6f94:
    // 0x1d6f94: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6f94u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6f98:
    // 0x1d6f98: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d6f98u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6f9c:
    // 0x1d6f9c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d6f9cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d6fa0:
    // 0x1d6fa0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6fa0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6fa4:
    // 0x1d6fa4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6fa4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d6fa8:
    // 0x1d6fa8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d6fa8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d6fac:
    // 0x1d6fac: 0x28a2001a  slti        $v0, $a1, 0x1A
    ctx->pc = 0x1d6facu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)26) ? 1 : 0);
label_1d6fb0:
    // 0x1d6fb0: 0x1440001d  bnez        $v0, . + 4 + (0x1D << 2)
label_1d6fb4:
    if (ctx->pc == 0x1D6FB4u) {
        ctx->pc = 0x1D6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FB0u;
        // 0x1d6fb4: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6FB8u;
        goto label_1d6fb8;
    }
    ctx->pc = 0x1D6FB0u;
    {
        const bool branch_taken_0x1d6fb0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FB0u;
        // 0x1d6fb4: 0x91682  srl         $v0, $t1, 26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fb0) {
            ctx->pc = 0x1D7028u;
            goto label_1d7028;
        }
    }
    ctx->pc = 0x1D6FB8u;
label_1d6fb8:
    // 0x1d6fb8: 0x24a5ffe6  addiu       $a1, $a1, -0x1A
    ctx->pc = 0x1d6fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967270));
label_1d6fbc:
    // 0x1d6fbc: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1d6fc0:
    if (ctx->pc == 0x1D6FC0u) {
        ctx->pc = 0x1D6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FBCu;
        // 0x1d6fc0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6FC4u;
        goto label_1d6fc4;
    }
    ctx->pc = 0x1D6FBCu;
    {
        const bool branch_taken_0x1d6fbc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FBCu;
        // 0x1d6fc0: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fbc) {
            ctx->pc = 0x1D6FE0u;
            goto label_1d6fe0;
        }
    }
    ctx->pc = 0x1D6FC4u;
label_1d6fc4:
    // 0x1d6fc4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d6fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d6fc8:
    // 0x1d6fc8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d6fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1d6fcc:
    // 0x1d6fcc: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d6fccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1d6fd0:
    // 0x1d6fd0: 0x91e82  srl         $v1, $t1, 26
    ctx->pc = 0x1d6fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
label_1d6fd4:
    // 0x1d6fd4: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1d6fd4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1d6fd8:
    // 0x1d6fd8: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d6fdc:
    if (ctx->pc == 0x1D6FDCu) {
        ctx->pc = 0x1D6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FD8u;
        // 0x1d6fdc: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D6FE0u;
        goto label_1d6fe0;
    }
    ctx->pc = 0x1D6FD8u;
    {
        const bool branch_taken_0x1d6fd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D6FD8u;
        // 0x1d6fdc: 0xae230008  sw          $v1, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d6fd8) {
            ctx->pc = 0x1D6FECu;
            goto label_1d6fec;
        }
    }
    ctx->pc = 0x1D6FE0u;
label_1d6fe0:
    // 0x1d6fe0: 0x91682  srl         $v0, $t1, 26
    ctx->pc = 0x1d6fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 26));
label_1d6fe4:
    // 0x1d6fe4: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d6fe4u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d6fe8:
    // 0x1d6fe8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1d6fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1d6fec:
    // 0x1d6fec: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d6fecu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6ff0:
    // 0x1d6ff0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6ff0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6ff4:
    // 0x1d6ff4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d6ff4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d6ff8:
    // 0x1d6ff8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d6ff8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d6ffc:
    // 0x1d6ffc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d6ffcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7000:
    // 0x1d7000: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d7000u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7004:
    // 0x1d7004: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d7004u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d7008:
    // 0x1d7008: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7008u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d700c:
    // 0x1d700c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d700cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7010:
    // 0x1d7010: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d7010u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7014:
    // 0x1d7014: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d7014u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d7018:
    // 0x1d7018: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d701c:
    // 0x1d701c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d701cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7020:
    // 0x1d7020: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d7024:
    if (ctx->pc == 0x1D7024u) {
        ctx->pc = 0x1D7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7020u;
        // 0x1d7024: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7028u;
        goto label_1d7028;
    }
    ctx->pc = 0x1D7020u;
    {
        const bool branch_taken_0x1d7020 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7020u;
        // 0x1d7024: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7020) {
            ctx->pc = 0x1D7034u;
            goto label_1d7034;
        }
    }
    ctx->pc = 0x1D7028u;
label_1d7028:
    // 0x1d7028: 0x94980  sll         $t1, $t1, 6
    ctx->pc = 0x1d7028u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
label_1d702c:
    // 0x1d702c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x1d702cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
label_1d7030:
    // 0x1d7030: 0x24a50006  addiu       $a1, $a1, 0x6
    ctx->pc = 0x1d7030u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 6));
label_1d7034:
    // 0x1d7034: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1d7034u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1d7038:
    // 0x1d7038: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1d7038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1d703c:
    // 0x1d703c: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
label_1d7040:
    if (ctx->pc == 0x1D7040u) {
        ctx->pc = 0x1D7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D703Cu;
        // 0x1d7040: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7044u;
        goto label_1d7044;
    }
    ctx->pc = 0x1D703Cu;
    {
        const bool branch_taken_0x1d703c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D703Cu;
        // 0x1d7040: 0xae220010  sw          $v0, 0x10($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d703c) {
            ctx->pc = 0x1D7088u;
            goto label_1d7088;
        }
    }
    ctx->pc = 0x1D7044u;
label_1d7044:
    // 0x1d7044: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d7044u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d7048:
    // 0x1d7048: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d7048u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d704c:
    // 0x1d704c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d704cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7050:
    // 0x1d7050: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d7050u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7054:
    // 0x1d7054: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d7054u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7058:
    // 0x1d7058: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7058u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d705c:
    // 0x1d705c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d705cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7060:
    // 0x1d7060: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d7060u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7064:
    // 0x1d7064: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d7064u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d7068:
    // 0x1d7068: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7068u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d706c:
    // 0x1d706c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d706cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7070:
    // 0x1d7070: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d7070u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7074:
    // 0x1d7074: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d7074u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d7078:
    // 0x1d7078: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7078u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d707c:
    // 0x1d707c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d707cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7080:
    // 0x1d7080: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d7084:
    if (ctx->pc == 0x1D7084u) {
        ctx->pc = 0x1D7084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7080u;
        // 0x1d7084: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7088u;
        goto label_1d7088;
    }
    ctx->pc = 0x1D7080u;
    {
        const bool branch_taken_0x1d7080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7080u;
        // 0x1d7084: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7080) {
            ctx->pc = 0x1D7090u;
            goto label_1d7090;
        }
    }
    ctx->pc = 0x1D7088u;
label_1d7088:
    // 0x1d7088: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d7088u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d708c:
    // 0x1d708c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d708cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1d7090:
    // 0x1d7090: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1d7090u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1d7094:
    // 0x1d7094: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1d7094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1d7098:
    // 0x1d7098: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1d709c:
    if (ctx->pc == 0x1D709Cu) {
        ctx->pc = 0x1D709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7098u;
        // 0x1d709c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70A0u;
        goto label_1d70a0;
    }
    ctx->pc = 0x1D7098u;
    {
        const bool branch_taken_0x1d7098 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7098u;
        // 0x1d709c: 0xae220014  sw          $v0, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7098) {
            ctx->pc = 0x1D70E8u;
            goto label_1d70e8;
        }
    }
    ctx->pc = 0x1D70A0u;
label_1d70a0:
    // 0x1d70a0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d70a0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d70a4:
    // 0x1d70a4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d70a4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d70a8:
    // 0x1d70a8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d70a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d70ac:
    // 0x1d70ac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d70acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d70b0:
    // 0x1d70b0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d70b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d70b4:
    // 0x1d70b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d70b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d70b8:
    // 0x1d70b8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d70b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d70bc:
    // 0x1d70bc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d70bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d70c0:
    // 0x1d70c0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d70c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d70c4:
    // 0x1d70c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d70c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d70c8:
    // 0x1d70c8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d70c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d70cc:
    // 0x1d70cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d70ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d70d0:
    // 0x1d70d0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d70d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d70d4:
    // 0x1d70d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d70d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d70d8:
    // 0x1d70d8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d70d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d70dc:
    // 0x1d70dc: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d70e0:
    if (ctx->pc == 0x1D70E0u) {
        ctx->pc = 0x1D70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70DCu;
        // 0x1d70e0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D70E4u;
        goto label_1d70e4;
    }
    ctx->pc = 0x1D70DCu;
    {
        const bool branch_taken_0x1d70dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D70E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70DCu;
        // 0x1d70e0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70dc) {
            ctx->pc = 0x1D70F0u;
            goto label_1d70f0;
        }
    }
    ctx->pc = 0x1D70E4u;
label_1d70e4:
    // 0x1d70e4: 0x0  nop
    ctx->pc = 0x1d70e4u;
    // NOP
label_1d70e8:
    // 0x1d70e8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d70e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d70ec:
    // 0x1d70ec: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d70ecu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1d70f0:
    // 0x1d70f0: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1d70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1d70f4:
    // 0x1d70f4: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1d70f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1d70f8:
    // 0x1d70f8: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1d70fc:
    if (ctx->pc == 0x1D70FCu) {
        ctx->pc = 0x1D70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70F8u;
        // 0x1d70fc: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7100u;
        goto label_1d7100;
    }
    ctx->pc = 0x1D70F8u;
    {
        const bool branch_taken_0x1d70f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D70FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D70F8u;
        // 0x1d70fc: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d70f8) {
            ctx->pc = 0x1D7148u;
            goto label_1d7148;
        }
    }
    ctx->pc = 0x1D7100u;
label_1d7100:
    // 0x1d7100: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d7100u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d7104:
    // 0x1d7104: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d7104u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7108:
    // 0x1d7108: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7108u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d710c:
    // 0x1d710c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d710cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7110:
    // 0x1d7110: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d7110u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7114:
    // 0x1d7114: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7114u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7118:
    // 0x1d7118: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7118u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d711c:
    // 0x1d711c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d711cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7120:
    // 0x1d7120: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d7120u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d7124:
    // 0x1d7124: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7124u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7128:
    // 0x1d7128: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7128u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d712c:
    // 0x1d712c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d712cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7130:
    // 0x1d7130: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d7130u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d7134:
    // 0x1d7134: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7134u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7138:
    // 0x1d7138: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7138u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d713c:
    // 0x1d713c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d7140:
    if (ctx->pc == 0x1D7140u) {
        ctx->pc = 0x1D7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D713Cu;
        // 0x1d7140: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7144u;
        goto label_1d7144;
    }
    ctx->pc = 0x1D713Cu;
    {
        const bool branch_taken_0x1d713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D713Cu;
        // 0x1d7140: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d713c) {
            ctx->pc = 0x1D7150u;
            goto label_1d7150;
        }
    }
    ctx->pc = 0x1D7144u;
label_1d7144:
    // 0x1d7144: 0x0  nop
    ctx->pc = 0x1d7144u;
    // NOP
label_1d7148:
    // 0x1d7148: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d7148u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d714c:
    // 0x1d714c: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d714cu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1d7150:
    // 0x1d7150: 0x917c2  srl         $v0, $t1, 31
    ctx->pc = 0x1d7150u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
label_1d7154:
    // 0x1d7154: 0x2403001f  addiu       $v1, $zero, 0x1F
    ctx->pc = 0x1d7154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1d7158:
    // 0x1d7158: 0x14a30013  bne         $a1, $v1, . + 4 + (0x13 << 2)
label_1d715c:
    if (ctx->pc == 0x1D715Cu) {
        ctx->pc = 0x1D715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7158u;
        // 0x1d715c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7160u;
        goto label_1d7160;
    }
    ctx->pc = 0x1D7158u;
    {
        const bool branch_taken_0x1d7158 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7158u;
        // 0x1d715c: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7158) {
            ctx->pc = 0x1D71A8u;
            goto label_1d71a8;
        }
    }
    ctx->pc = 0x1D7160u;
label_1d7160:
    // 0x1d7160: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d7160u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d7164:
    // 0x1d7164: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d7164u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7168:
    // 0x1d7168: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7168u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d716c:
    // 0x1d716c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d716cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d7170:
    // 0x1d7170: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d7170u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7174:
    // 0x1d7174: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7174u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7178:
    // 0x1d7178: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7178u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d717c:
    // 0x1d717c: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d717cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7180:
    // 0x1d7180: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d7180u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d7184:
    // 0x1d7184: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7184u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7188:
    // 0x1d7188: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7188u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d718c:
    // 0x1d718c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d718cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7190:
    // 0x1d7190: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d7190u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d7194:
    // 0x1d7194: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7194u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7198:
    // 0x1d7198: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7198u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d719c:
    // 0x1d719c: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d71a0:
    if (ctx->pc == 0x1D71A0u) {
        ctx->pc = 0x1D71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D719Cu;
        // 0x1d71a0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D71A4u;
        goto label_1d71a4;
    }
    ctx->pc = 0x1D719Cu;
    {
        const bool branch_taken_0x1d719c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D719Cu;
        // 0x1d71a0: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d719c) {
            ctx->pc = 0x1D71B0u;
            goto label_1d71b0;
        }
    }
    ctx->pc = 0x1D71A4u;
label_1d71a4:
    // 0x1d71a4: 0x0  nop
    ctx->pc = 0x1d71a4u;
    // NOP
label_1d71a8:
    // 0x1d71a8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d71a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d71ac:
    // 0x1d71ac: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d71acu;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1d71b0:
    // 0x1d71b0: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d71b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d71b4:
    // 0x1d71b4: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1d71b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1d71b8:
    // 0x1d71b8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1d71bc:
    if (ctx->pc == 0x1D71BCu) {
        ctx->pc = 0x1D71BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D71B8u;
        // 0x1d71bc: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D71C0u;
        goto label_1d71c0;
    }
    ctx->pc = 0x1D71B8u;
    {
        const bool branch_taken_0x1d71b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d71b8) {
            ctx->pc = 0x1D71BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D71B8u;
            // 0x1d71bc: 0x94840  sll         $t1, $t1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7200u;
            goto label_1d7200;
        }
    }
    ctx->pc = 0x1D71C0u;
label_1d71c0:
    // 0x1d71c0: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1d71c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_1d71c4:
    // 0x1d71c4: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1d71c4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1d71c8:
    // 0x1d71c8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d71c8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d71cc:
    // 0x1d71cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d71ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d71d0:
    // 0x1d71d0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d71d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d71d4:
    // 0x1d71d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d71d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d71d8:
    // 0x1d71d8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d71d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d71dc:
    // 0x1d71dc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d71dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d71e0:
    // 0x1d71e0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d71e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d71e4:
    // 0x1d71e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d71e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d71e8:
    // 0x1d71e8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d71e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d71ec:
    // 0x1d71ec: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d71ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d71f0:
    // 0x1d71f0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d71f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d71f4:
    // 0x1d71f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d71f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d71f8:
    // 0x1d71f8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d71f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d71fc:
    // 0x1d71fc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d71fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d7200:
    // 0x1d7200: 0x28a2001b  slti        $v0, $a1, 0x1B
    ctx->pc = 0x1d7200u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)27) ? 1 : 0);
label_1d7204:
    // 0x1d7204: 0x1440001e  bnez        $v0, . + 4 + (0x1E << 2)
label_1d7208:
    if (ctx->pc == 0x1D7208u) {
        ctx->pc = 0x1D7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7204u;
        // 0x1d7208: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D720Cu;
        goto label_1d720c;
    }
    ctx->pc = 0x1D7204u;
    {
        const bool branch_taken_0x1d7204 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7204u;
        // 0x1d7208: 0x916c2  srl         $v0, $t1, 27 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7204) {
            ctx->pc = 0x1D7280u;
            goto label_1d7280;
        }
    }
    ctx->pc = 0x1D720Cu;
label_1d720c:
    // 0x1d720c: 0x24a5ffe5  addiu       $a1, $a1, -0x1B
    ctx->pc = 0x1d720cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967269));
label_1d7210:
    // 0x1d7210: 0x10a00009  beqz        $a1, . + 4 + (0x9 << 2)
label_1d7214:
    if (ctx->pc == 0x1D7214u) {
        ctx->pc = 0x1D7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7210u;
        // 0x1d7214: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7218u;
        goto label_1d7218;
    }
    ctx->pc = 0x1D7210u;
    {
        const bool branch_taken_0x1d7210 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7210u;
        // 0x1d7214: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7210) {
            ctx->pc = 0x1D7238u;
            goto label_1d7238;
        }
    }
    ctx->pc = 0x1D7218u;
label_1d7218:
    // 0x1d7218: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d7218u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d721c:
    // 0x1d721c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d721cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1d7220:
    // 0x1d7220: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d7220u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1d7224:
    // 0x1d7224: 0x91ec2  srl         $v1, $t1, 27
    ctx->pc = 0x1d7224u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
label_1d7228:
    // 0x1d7228: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1d7228u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1d722c:
    // 0x1d722c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1d7230:
    if (ctx->pc == 0x1D7230u) {
        ctx->pc = 0x1D7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D722Cu;
        // 0x1d7230: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7234u;
        goto label_1d7234;
    }
    ctx->pc = 0x1D722Cu;
    {
        const bool branch_taken_0x1d722c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D722Cu;
        // 0x1d7230: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d722c) {
            ctx->pc = 0x1D7244u;
            goto label_1d7244;
        }
    }
    ctx->pc = 0x1D7234u;
label_1d7234:
    // 0x1d7234: 0x0  nop
    ctx->pc = 0x1d7234u;
    // NOP
label_1d7238:
    // 0x1d7238: 0x916c2  srl         $v0, $t1, 27
    ctx->pc = 0x1d7238u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 9), 27));
label_1d723c:
    // 0x1d723c: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d723cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d7240:
    // 0x1d7240: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1d7240u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1d7244:
    // 0x1d7244: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d7244u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7248:
    // 0x1d7248: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7248u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d724c:
    // 0x1d724c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d724cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7250:
    // 0x1d7250: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7250u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7254:
    // 0x1d7254: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7254u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7258:
    // 0x1d7258: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d7258u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d725c:
    // 0x1d725c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d725cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d7260:
    // 0x1d7260: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7264:
    // 0x1d7264: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7264u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7268:
    // 0x1d7268: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d7268u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d726c:
    // 0x1d726c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d726cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d7270:
    // 0x1d7270: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7270u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7274:
    // 0x1d7274: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7274u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7278:
    // 0x1d7278: 0x10000004  b           . + 4 + (0x4 << 2)
label_1d727c:
    if (ctx->pc == 0x1D727Cu) {
        ctx->pc = 0x1D727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7278u;
        // 0x1d727c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7280u;
        goto label_1d7280;
    }
    ctx->pc = 0x1D7278u;
    {
        const bool branch_taken_0x1d7278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7278u;
        // 0x1d727c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7278) {
            ctx->pc = 0x1D728Cu;
            goto label_1d728c;
        }
    }
    ctx->pc = 0x1D7280u;
label_1d7280:
    // 0x1d7280: 0x94940  sll         $t1, $t1, 5
    ctx->pc = 0x1d7280u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 5));
label_1d7284:
    // 0x1d7284: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x1d7284u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
label_1d7288:
    // 0x1d7288: 0x24a50005  addiu       $a1, $a1, 0x5
    ctx->pc = 0x1d7288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 5));
label_1d728c:
    // 0x1d728c: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x1d728cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
label_1d7290:
    // 0x1d7290: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_1d7294:
    if (ctx->pc == 0x1D7294u) {
        ctx->pc = 0x1D7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7290u;
        // 0x1d7294: 0x99602  srl         $s2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7298u;
        goto label_1d7298;
    }
    ctx->pc = 0x1D7290u;
    {
        const bool branch_taken_0x1d7290 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7290u;
        // 0x1d7294: 0x99602  srl         $s2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7290) {
            ctx->pc = 0x1D7300u;
            goto label_1d7300;
        }
    }
    ctx->pc = 0x1D7298u;
label_1d7298:
    // 0x1d7298: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x1d7298u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
label_1d729c:
    // 0x1d729c: 0x10a00008  beqz        $a1, . + 4 + (0x8 << 2)
label_1d72a0:
    if (ctx->pc == 0x1D72A0u) {
        ctx->pc = 0x1D72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D729Cu;
        // 0x1d72a0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D72A4u;
        goto label_1d72a4;
    }
    ctx->pc = 0x1D729Cu;
    {
        const bool branch_taken_0x1d729c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D72A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D729Cu;
        // 0x1d72a0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d729c) {
            ctx->pc = 0x1D72C0u;
            goto label_1d72c0;
        }
    }
    ctx->pc = 0x1D72A4u;
label_1d72a4:
    // 0x1d72a4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d72a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d72a8:
    // 0x1d72a8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d72a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1d72ac:
    // 0x1d72ac: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d72acu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1d72b0:
    // 0x1d72b0: 0x99602  srl         $s2, $t1, 24
    ctx->pc = 0x1d72b0u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
label_1d72b4:
    // 0x1d72b4: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d72b8:
    if (ctx->pc == 0x1D72B8u) {
        ctx->pc = 0x1D72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72B4u;
        // 0x1d72b8: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D72BCu;
        goto label_1d72bc;
    }
    ctx->pc = 0x1D72B4u;
    {
        const bool branch_taken_0x1d72b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D72B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72B4u;
        // 0x1d72b8: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72b4) {
            ctx->pc = 0x1D72C4u;
            goto label_1d72c4;
        }
    }
    ctx->pc = 0x1D72BCu;
label_1d72bc:
    // 0x1d72bc: 0x0  nop
    ctx->pc = 0x1d72bcu;
    // NOP
label_1d72c0:
    // 0x1d72c0: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d72c0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d72c4:
    // 0x1d72c4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d72c4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d72c8:
    // 0x1d72c8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d72c8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d72cc:
    // 0x1d72cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d72ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d72d0:
    // 0x1d72d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d72d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d72d4:
    // 0x1d72d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d72d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d72d8:
    // 0x1d72d8: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d72d8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d72dc:
    // 0x1d72dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d72dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d72e0:
    // 0x1d72e0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d72e0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d72e4:
    // 0x1d72e4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d72e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d72e8:
    // 0x1d72e8: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d72e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d72ec:
    // 0x1d72ec: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d72ecu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d72f0:
    // 0x1d72f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d72f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d72f4:
    // 0x1d72f4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d72f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d72f8:
    // 0x1d72f8: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d72fc:
    if (ctx->pc == 0x1D72FCu) {
        ctx->pc = 0x1D72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72F8u;
        // 0x1d72fc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7300u;
        goto label_1d7300;
    }
    ctx->pc = 0x1D72F8u;
    {
        const bool branch_taken_0x1d72f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D72FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D72F8u;
        // 0x1d72fc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d72f8) {
            ctx->pc = 0x1D7308u;
            goto label_1d7308;
        }
    }
    ctx->pc = 0x1D7300u;
label_1d7300:
    // 0x1d7300: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d7300u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1d7304:
    // 0x1d7304: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d7304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1d7308:
    // 0x1d7308: 0x5210078  bgez        $t1, . + 4 + (0x78 << 2)
label_1d730c:
    if (ctx->pc == 0x1D730Cu) {
        ctx->pc = 0x1D730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7308u;
        // 0x1d730c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7310u;
        goto label_1d7310;
    }
    ctx->pc = 0x1D7308u;
    {
        const bool branch_taken_0x1d7308 = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x1D730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7308u;
        // 0x1d730c: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7308) {
            ctx->pc = 0x1D74ECu;
            goto label_1d74ec;
        }
    }
    ctx->pc = 0x1D7310u;
label_1d7310:
    // 0x1d7310: 0x27ac0002  addiu       $t4, $sp, 0x2
    ctx->pc = 0x1d7310u;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
label_1d7314:
    // 0x1d7314: 0x0  nop
    ctx->pc = 0x1d7314u;
    // NOP
label_1d7318:
    // 0x1d7318: 0x28a20018  slti        $v0, $a1, 0x18
    ctx->pc = 0x1d7318u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)24) ? 1 : 0);
label_1d731c:
    // 0x1d731c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d7320:
    if (ctx->pc == 0x1D7320u) {
        ctx->pc = 0x1D7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D731Cu;
        // 0x1d7320: 0x93602  srl         $a2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7324u;
        goto label_1d7324;
    }
    ctx->pc = 0x1D731Cu;
    {
        const bool branch_taken_0x1d731c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D731Cu;
        // 0x1d7320: 0x93602  srl         $a2, $t1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d731c) {
            ctx->pc = 0x1D7388u;
            goto label_1d7388;
        }
    }
    ctx->pc = 0x1D7324u;
label_1d7324:
    // 0x1d7324: 0x24a5ffe8  addiu       $a1, $a1, -0x18
    ctx->pc = 0x1d7324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967272));
label_1d7328:
    // 0x1d7328: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1d732c:
    if (ctx->pc == 0x1D732Cu) {
        ctx->pc = 0x1D732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7328u;
        // 0x1d732c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7330u;
        goto label_1d7330;
    }
    ctx->pc = 0x1D7328u;
    {
        const bool branch_taken_0x1d7328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7328u;
        // 0x1d732c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7328) {
            ctx->pc = 0x1D7348u;
            goto label_1d7348;
        }
    }
    ctx->pc = 0x1D7330u;
label_1d7330:
    // 0x1d7330: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d7330u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d7334:
    // 0x1d7334: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d7334u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1d7338:
    // 0x1d7338: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d7338u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1d733c:
    // 0x1d733c: 0x93602  srl         $a2, $t1, 24
    ctx->pc = 0x1d733cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 24));
label_1d7340:
    // 0x1d7340: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d7344:
    if (ctx->pc == 0x1D7344u) {
        ctx->pc = 0x1D7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7340u;
        // 0x1d7344: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7348u;
        goto label_1d7348;
    }
    ctx->pc = 0x1D7340u;
    {
        const bool branch_taken_0x1d7340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7340u;
        // 0x1d7344: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7340) {
            ctx->pc = 0x1D734Cu;
            goto label_1d734c;
        }
    }
    ctx->pc = 0x1D7348u;
label_1d7348:
    // 0x1d7348: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d7348u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d734c:
    // 0x1d734c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d734cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7350:
    // 0x1d7350: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7350u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7354:
    // 0x1d7354: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d7354u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7358:
    // 0x1d7358: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7358u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d735c:
    // 0x1d735c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d735cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7360:
    // 0x1d7360: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d7360u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7364:
    // 0x1d7364: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d7364u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d7368:
    // 0x1d7368: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7368u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d736c:
    // 0x1d736c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d736cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7370:
    // 0x1d7370: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d7370u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7374:
    // 0x1d7374: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d7374u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d7378:
    // 0x1d7378: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7378u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d737c:
    // 0x1d737c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d737cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7380:
    // 0x1d7380: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d7384:
    if (ctx->pc == 0x1D7384u) {
        ctx->pc = 0x1D7384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7380u;
        // 0x1d7384: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7388u;
        goto label_1d7388;
    }
    ctx->pc = 0x1D7380u;
    {
        const bool branch_taken_0x1d7380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7380u;
        // 0x1d7384: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7380) {
            ctx->pc = 0x1D7390u;
            goto label_1d7390;
        }
    }
    ctx->pc = 0x1D7388u;
label_1d7388:
    // 0x1d7388: 0x94a00  sll         $t1, $t1, 8
    ctx->pc = 0x1d7388u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 8));
label_1d738c:
    // 0x1d738c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x1d738cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_1d7390:
    // 0x1d7390: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x1d7390u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
label_1d7394:
    // 0x1d7394: 0x28a20020  slti        $v0, $a1, 0x20
    ctx->pc = 0x1d7394u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)32) ? 1 : 0);
label_1d7398:
    // 0x1d7398: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_1d739c:
    if (ctx->pc == 0x1D739Cu) {
        ctx->pc = 0x1D739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7398u;
        // 0x1d739c: 0x94880  sll         $t1, $t1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73A0u;
        goto label_1d73a0;
    }
    ctx->pc = 0x1D7398u;
    {
        const bool branch_taken_0x1d7398 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7398) {
            ctx->pc = 0x1D739Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7398u;
            // 0x1d739c: 0x94880  sll         $t1, $t1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D73E0u;
            goto label_1d73e0;
        }
    }
    ctx->pc = 0x1D73A0u;
label_1d73a0:
    // 0x1d73a0: 0x24a5ffe0  addiu       $a1, $a1, -0x20
    ctx->pc = 0x1d73a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967264));
label_1d73a4:
    // 0x1d73a4: 0xa74804  sllv        $t1, $a3, $a1
    ctx->pc = 0x1d73a4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
label_1d73a8:
    // 0x1d73a8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d73a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d73ac:
    // 0x1d73ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d73acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d73b0:
    // 0x1d73b0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d73b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d73b4:
    // 0x1d73b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d73b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d73b8:
    // 0x1d73b8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d73b8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d73bc:
    // 0x1d73bc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d73bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d73c0:
    // 0x1d73c0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d73c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d73c4:
    // 0x1d73c4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d73c4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d73c8:
    // 0x1d73c8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d73c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d73cc:
    // 0x1d73cc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d73ccu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d73d0:
    // 0x1d73d0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d73d0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d73d4:
    // 0x1d73d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d73d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d73d8:
    // 0x1d73d8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d73d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d73dc:
    // 0x1d73dc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d73dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d73e0:
    // 0x1d73e0: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1d73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
label_1d73e4:
    // 0x1d73e4: 0x14a20012  bne         $a1, $v0, . + 4 + (0x12 << 2)
label_1d73e8:
    if (ctx->pc == 0x1D73E8u) {
        ctx->pc = 0x1D73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73E4u;
        // 0x1d73e8: 0x957c2  srl         $t2, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D73ECu;
        goto label_1d73ec;
    }
    ctx->pc = 0x1D73E4u;
    {
        const bool branch_taken_0x1d73e4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D73E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D73E4u;
        // 0x1d73e8: 0x957c2  srl         $t2, $t1, 31 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SRL32(GPR_U32(ctx, 9), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d73e4) {
            ctx->pc = 0x1D7430u;
            goto label_1d7430;
        }
    }
    ctx->pc = 0x1D73ECu;
label_1d73ec:
    // 0x1d73ec: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d73ecu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d73f0:
    // 0x1d73f0: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d73f0u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d73f4:
    // 0x1d73f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d73f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d73f8:
    // 0x1d73f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1d73f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1d73fc:
    // 0x1d73fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d73fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7400:
    // 0x1d7400: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7400u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7404:
    // 0x1d7404: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7404u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7408:
    // 0x1d7408: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d7408u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d740c:
    // 0x1d740c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d740cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d7410:
    // 0x1d7410: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7410u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7414:
    // 0x1d7414: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7414u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7418:
    // 0x1d7418: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d7418u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d741c:
    // 0x1d741c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d741cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d7420:
    // 0x1d7420: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7420u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7424:
    // 0x1d7424: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d7424u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7428:
    // 0x1d7428: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d742c:
    if (ctx->pc == 0x1D742Cu) {
        ctx->pc = 0x1D742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7428u;
        // 0x1d742c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7430u;
        goto label_1d7430;
    }
    ctx->pc = 0x1D7428u;
    {
        const bool branch_taken_0x1d7428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D742Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7428u;
        // 0x1d742c: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7428) {
            ctx->pc = 0x1D7438u;
            goto label_1d7438;
        }
    }
    ctx->pc = 0x1D7430u;
label_1d7430:
    // 0x1d7430: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1d7430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_1d7434:
    // 0x1d7434: 0x94840  sll         $t1, $t1, 1
    ctx->pc = 0x1d7434u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 1));
label_1d7438:
    // 0x1d7438: 0x28a20013  slti        $v0, $a1, 0x13
    ctx->pc = 0x1d7438u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)19) ? 1 : 0);
label_1d743c:
    // 0x1d743c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_1d7440:
    if (ctx->pc == 0x1D7440u) {
        ctx->pc = 0x1D7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D743Cu;
        // 0x1d7440: 0x924c2  srl         $a0, $t1, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7444u;
        goto label_1d7444;
    }
    ctx->pc = 0x1D743Cu;
    {
        const bool branch_taken_0x1d743c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D7440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D743Cu;
        // 0x1d7440: 0x924c2  srl         $a0, $t1, 19 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d743c) {
            ctx->pc = 0x1D74A8u;
            goto label_1d74a8;
        }
    }
    ctx->pc = 0x1D7444u;
label_1d7444:
    // 0x1d7444: 0x24a5ffed  addiu       $a1, $a1, -0x13
    ctx->pc = 0x1d7444u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967277));
label_1d7448:
    // 0x1d7448: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
label_1d744c:
    if (ctx->pc == 0x1D744Cu) {
        ctx->pc = 0x1D744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7448u;
        // 0x1d744c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7450u;
        goto label_1d7450;
    }
    ctx->pc = 0x1D7448u;
    {
        const bool branch_taken_0x1d7448 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D744Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7448u;
        // 0x1d744c: 0x2402000d  addiu       $v0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7448) {
            ctx->pc = 0x1D7468u;
            goto label_1d7468;
        }
    }
    ctx->pc = 0x1D7450u;
label_1d7450:
    // 0x1d7450: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x1d7450u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_1d7454:
    // 0x1d7454: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d7454u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
label_1d7458:
    // 0x1d7458: 0x1224825  or          $t1, $t1, $v0
    ctx->pc = 0x1d7458u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | GPR_U64(ctx, 2));
label_1d745c:
    // 0x1d745c: 0x924c2  srl         $a0, $t1, 19
    ctx->pc = 0x1d745cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 9), 19));
label_1d7460:
    // 0x1d7460: 0x10000002  b           . + 4 + (0x2 << 2)
label_1d7464:
    if (ctx->pc == 0x1D7464u) {
        ctx->pc = 0x1D7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7460u;
        // 0x1d7464: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7468u;
        goto label_1d7468;
    }
    ctx->pc = 0x1D7460u;
    {
        const bool branch_taken_0x1d7460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7460u;
        // 0x1d7464: 0xa74804  sllv        $t1, $a3, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 5) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7460) {
            ctx->pc = 0x1D746Cu;
            goto label_1d746c;
        }
    }
    ctx->pc = 0x1D7468u;
label_1d7468:
    // 0x1d7468: 0xe0482d  daddu       $t1, $a3, $zero
    ctx->pc = 0x1d7468u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d746c:
    // 0x1d746c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d746cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7470:
    // 0x1d7470: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7470u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d7474:
    // 0x1d7474: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d7474u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7478:
    // 0x1d7478: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7478u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d747c:
    // 0x1d747c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d747cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7480:
    // 0x1d7480: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d7480u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7484:
    // 0x1d7484: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d7484u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d7488:
    // 0x1d7488: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7488u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d748c:
    // 0x1d748c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d748cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d7490:
    // 0x1d7490: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d7490u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
label_1d7494:
    // 0x1d7494: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d7494u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
label_1d7498:
    // 0x1d7498: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d7498u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_1d749c:
    // 0x1d749c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d749cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
label_1d74a0:
    // 0x1d74a0: 0x10000003  b           . + 4 + (0x3 << 2)
label_1d74a4:
    if (ctx->pc == 0x1D74A4u) {
        ctx->pc = 0x1D74A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74A0u;
        // 0x1d74a4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74A8u;
        goto label_1d74a8;
    }
    ctx->pc = 0x1D74A0u;
    {
        const bool branch_taken_0x1d74a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D74A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74A0u;
        // 0x1d74a4: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74a0) {
            ctx->pc = 0x1D74B0u;
            goto label_1d74b0;
        }
    }
    ctx->pc = 0x1D74A8u;
label_1d74a8:
    // 0x1d74a8: 0x94b40  sll         $t1, $t1, 13
    ctx->pc = 0x1d74a8u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 9), 13));
label_1d74ac:
    // 0x1d74ac: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x1d74acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
label_1d74b0:
    // 0x1d74b0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1d74b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1d74b4:
    // 0x1d74b4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1d74b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d74b8:
    // 0x1d74b8: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x1d74b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
label_1d74bc:
    // 0x1d74bc: 0xa0460010  sb          $a2, 0x10($v0)
    ctx->pc = 0x1d74bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 16), (uint8_t)GPR_U32(ctx, 6));
label_1d74c0:
    // 0x1d74c0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1d74c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1d74c4:
    // 0x1d74c4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1d74c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1d74c8:
    // 0x1d74c8: 0x7d1821  addu        $v1, $v1, $sp
    ctx->pc = 0x1d74c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 29)));
label_1d74cc:
    // 0x1d74cc: 0xa06a0011  sb          $t2, 0x11($v1)
    ctx->pc = 0x1d74ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 17), (uint8_t)GPR_U32(ctx, 10));
label_1d74d0:
    // 0x1d74d0: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1d74d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_1d74d4:
    // 0x1d74d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x1d74d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1d74d8:
    // 0x1d74d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d74d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d74dc:
    // 0x1d74dc: 0x6c1821  addu        $v1, $v1, $t4
    ctx->pc = 0x1d74dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 12)));
label_1d74e0:
    // 0x1d74e0: 0xafa2000c  sw          $v0, 0xC($sp)
    ctx->pc = 0x1d74e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
label_1d74e4:
    // 0x1d74e4: 0x520ff8c  bltz        $t1, . + 4 + (-0x74 << 2)
label_1d74e8:
    if (ctx->pc == 0x1D74E8u) {
        ctx->pc = 0x1D74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74E4u;
        // 0x1d74e8: 0xa4640010  sh          $a0, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D74ECu;
        goto label_1d74ec;
    }
    ctx->pc = 0x1D74E4u;
    {
        const bool branch_taken_0x1d74e4 = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x1D74E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D74E4u;
        // 0x1d74e8: 0xa4640010  sh          $a0, 0x10($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 16), (uint16_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d74e4) {
            ctx->pc = 0x1D7318u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d7318;
        }
    }
    ctx->pc = 0x1D74ECu;
label_1d74ec:
    // 0x1d74ec: 0x24a20007  addiu       $v0, $a1, 0x7
    ctx->pc = 0x1d74ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 7));
label_1d74f0:
    // 0x1d74f0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d74f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
label_1d74f4:
    // 0x1d74f4: 0x1028021  addu        $s0, $t0, $v0
    ctx->pc = 0x1d74f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
label_1d74f8:
    // 0x1d74f8: 0x2604fff8  addiu       $a0, $s0, -0x8
    ctx->pc = 0x1d74f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967288));
label_1d74fc:
    // 0x1d74fc: 0x8b1023  subu        $v0, $a0, $t3
    ctx->pc = 0x1d74fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 11)));
label_1d7500:
    // 0x1d7500: 0xc076086  jal         func_1D8218
label_1d7504:
    if (ctx->pc == 0x1D7504u) {
        ctx->pc = 0x1D7504u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7500u;
        // 0x1d7504: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7508u;
        goto label_1d7508;
    }
    ctx->pc = 0x1D7500u;
    SET_GPR_U32(ctx, 31, 0x1D7508u);
    ctx->pc = 0x1D7504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7500u;
    // 0x1d7504: 0xae620000  sw          $v0, 0x0($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8218u, 0x1D7500u, 0x1D7508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7508u;
label_1d7508:
    // 0x1d7508: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
label_1d750c:
    if (ctx->pc == 0x1D750Cu) {
        ctx->pc = 0x1D750Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7508u;
        // 0x1d750c: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7510u;
        goto label_1d7510;
    }
    ctx->pc = 0x1D7508u;
    {
        const bool branch_taken_0x1d7508 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d7508) {
            ctx->pc = 0x1D750Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7508u;
            // 0x1d750c: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7534u;
            goto label_1d7534;
        }
    }
    ctx->pc = 0x1D7510u;
label_1d7510:
    // 0x1d7510: 0xc076086  jal         func_1D8218
label_1d7514:
    if (ctx->pc == 0x1D7514u) {
        ctx->pc = 0x1D7514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7510u;
        // 0x1d7514: 0x2604fff9  addiu       $a0, $s0, -0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7518u;
        goto label_1d7518;
    }
    ctx->pc = 0x1D7510u;
    SET_GPR_U32(ctx, 31, 0x1D7518u);
    ctx->pc = 0x1D7514u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7510u;
    // 0x1d7514: 0x2604fff9  addiu       $a0, $s0, -0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967289));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8218u, 0x1D7510u, 0x1D7518u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D7518u;
label_1d7518:
    // 0x1d7518: 0x3c030004  lui         $v1, 0x4
    ctx->pc = 0x1d7518u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4 << 16));
label_1d751c:
    // 0x1d751c: 0x54430005  bnel        $v0, $v1, . + 4 + (0x5 << 2)
label_1d7520:
    if (ctx->pc == 0x1D7520u) {
        ctx->pc = 0x1D7520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D751Cu;
        // 0x1d7520: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D7524u;
        goto label_1d7524;
    }
    ctx->pc = 0x1D751Cu;
    {
        const bool branch_taken_0x1d751c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1d751c) {
            ctx->pc = 0x1D7520u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D751Cu;
            // 0x1d7520: 0x8e8c00e4  lw          $t4, 0xE4($s4) (Delay Slot)
            SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7534u;
            goto label_1d7534;
        }
    }
    ctx->pc = 0x1D7524u;
label_1d7524:
    // 0x1d7524: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x1d7524u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1d7528:
    // 0x1d7528: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1d7528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_1d752c:
    // 0x1d752c: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x1d752cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_1d7530:
    // 0x1d7530: 0x8e8c00e4  lw          $t4, 0xE4($s4)
    ctx->pc = 0x1d7530u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 228)));
label_1d7534:
    // 0x1d7534: 0x11800015  beqz        $t4, . + 4 + (0x15 << 2)
label_1d7538:
    if (ctx->pc == 0x1D7538u) {
        ctx->pc = 0x1D7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7534u;
        // 0x1d7538: 0x324b007f  andi        $t3, $s2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D753Cu;
        goto label_1d753c;
    }
    ctx->pc = 0x1D7534u;
    {
        const bool branch_taken_0x1d7534 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7534u;
        // 0x1d7538: 0x324b007f  andi        $t3, $s2, 0x7F (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)127);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7534) {
            ctx->pc = 0x1D758Cu;
            goto label_1d758c;
        }
    }
    ctx->pc = 0x1D753Cu;
label_1d753c:
    // 0x1d753c: 0x92240018  lbu         $a0, 0x18($s1)
    ctx->pc = 0x1d753cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
label_1d7540:
    // 0x1d7540: 0x922a000c  lbu         $t2, 0xC($s1)
    ctx->pc = 0x1d7540u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
label_1d7544:
    // 0x1d7544: 0x1249c2  srl         $t1, $s2, 7
    ctx->pc = 0x1d7544u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 18), 7));
label_1d7548:
    // 0x1d7548: 0x92270008  lbu         $a3, 0x8($s1)
    ctx->pc = 0x1d7548u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 8)));
label_1d754c:
    // 0x1d754c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1d754cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_1d7550:
    // 0x1d7550: 0x92220010  lbu         $v0, 0x10($s1)
    ctx->pc = 0x1d7550u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 16)));
label_1d7554:
    // 0x1d7554: 0x92230014  lbu         $v1, 0x14($s1)
    ctx->pc = 0x1d7554u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 20)));
label_1d7558:
    // 0x1d7558: 0x9226001c  lbu         $a2, 0x1C($s1)
    ctx->pc = 0x1d7558u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 28)));
label_1d755c:
    // 0x1d755c: 0x8e280004  lw          $t0, 0x4($s1)
    ctx->pc = 0x1d755cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_1d7560:
    // 0x1d7560: 0xa3a70004  sb          $a3, 0x4($sp)
    ctx->pc = 0x1d7560u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 7));
label_1d7564:
    // 0x1d7564: 0xa3a20005  sb          $v0, 0x5($sp)
    ctx->pc = 0x1d7564u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 2));
label_1d7568:
    // 0x1d7568: 0xa3a30006  sb          $v1, 0x6($sp)
    ctx->pc = 0x1d7568u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 6), (uint8_t)GPR_U32(ctx, 3));
label_1d756c:
    // 0x1d756c: 0xa3a40007  sb          $a0, 0x7($sp)
    ctx->pc = 0x1d756cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 7), (uint8_t)GPR_U32(ctx, 4));
label_1d7570:
    // 0x1d7570: 0xa3a60008  sb          $a2, 0x8($sp)
    ctx->pc = 0x1d7570u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 6));
label_1d7574:
    // 0x1d7574: 0xa3aa0009  sb          $t2, 0x9($sp)
    ctx->pc = 0x1d7574u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 9), (uint8_t)GPR_U32(ctx, 10));
label_1d7578:
    // 0x1d7578: 0xa3a9000a  sb          $t1, 0xA($sp)
    ctx->pc = 0x1d7578u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 9));
label_1d757c:
    // 0x1d757c: 0xa3ab000b  sb          $t3, 0xB($sp)
    ctx->pc = 0x1d757cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 11), (uint8_t)GPR_U32(ctx, 11));
label_1d7580:
    // 0x1d7580: 0xafa80000  sw          $t0, 0x0($sp)
    ctx->pc = 0x1d7580u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 8));
label_1d7584:
    // 0x1d7584: 0x180f809  jalr        $t4
label_1d7588:
    if (ctx->pc == 0x1D7588u) {
        ctx->pc = 0x1D7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7584u;
        // 0x1d7588: 0x8e8400e8  lw          $a0, 0xE8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D758Cu;
        goto label_1d758c;
    }
    ctx->pc = 0x1D7584u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 12);
        SET_GPR_U32(ctx, 31, 0x1D758Cu);
        ctx->pc = 0x1D7588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7584u;
        // 0x1d7588: 0x8e8400e8  lw          $a0, 0xE8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 232)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7584u, 0x1D758Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1D758Cu;
label_1d758c:
    // 0x1d758c: 0xdfb000d0  ld          $s0, 0xD0($sp)
    ctx->pc = 0x1d758cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_1d7590:
    // 0x1d7590: 0xdfb100d8  ld          $s1, 0xD8($sp)
    ctx->pc = 0x1d7590u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 216)));
label_1d7594:
    // 0x1d7594: 0xdfb200e0  ld          $s2, 0xE0($sp)
    ctx->pc = 0x1d7594u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_1d7598:
    // 0x1d7598: 0xdfb300e8  ld          $s3, 0xE8($sp)
    ctx->pc = 0x1d7598u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 232)));
label_1d759c:
    // 0x1d759c: 0xdfb400f0  ld          $s4, 0xF0($sp)
    ctx->pc = 0x1d759cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_1d75a0:
    // 0x1d75a0: 0xdfbf00f8  ld          $ra, 0xF8($sp)
    ctx->pc = 0x1d75a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 248)));
label_1d75a4:
    // 0x1d75a4: 0x3e00008  jr          $ra
label_1d75a8:
    if (ctx->pc == 0x1D75A8u) {
        ctx->pc = 0x1D75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75A4u;
        // 0x1d75a8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1D75ACu;
        goto label_1d75ac;
    }
    ctx->pc = 0x1D75A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D75A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D75A4u;
        // 0x1d75a8: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D75A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D75ACu;
label_1d75ac:
    // 0x1d75ac: 0x0  nop
    ctx->pc = 0x1d75acu;
    // NOP
    if (ctx->pc == 0x1d75acu) { ctx->pc = 0x1d75b0u; }
}
