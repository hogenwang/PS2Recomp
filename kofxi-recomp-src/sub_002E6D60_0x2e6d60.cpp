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

// Function: sub_002E6D60
// Address: 0x2e6d60 - 0x2e7438
void sub_002E6D60_0x2e6d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6D60_0x2e6d60");
#endif

    switch (ctx->pc) {
        case 0x2e6d60u: goto label_2e6d60;
        case 0x2e6d64u: goto label_2e6d64;
        case 0x2e6d68u: goto label_2e6d68;
        case 0x2e6d6cu: goto label_2e6d6c;
        case 0x2e6d70u: goto label_2e6d70;
        case 0x2e6d74u: goto label_2e6d74;
        case 0x2e6d78u: goto label_2e6d78;
        case 0x2e6d7cu: goto label_2e6d7c;
        case 0x2e6d80u: goto label_2e6d80;
        case 0x2e6d84u: goto label_2e6d84;
        case 0x2e6d88u: goto label_2e6d88;
        case 0x2e6d8cu: goto label_2e6d8c;
        case 0x2e6d90u: goto label_2e6d90;
        case 0x2e6d94u: goto label_2e6d94;
        case 0x2e6d98u: goto label_2e6d98;
        case 0x2e6d9cu: goto label_2e6d9c;
        case 0x2e6da0u: goto label_2e6da0;
        case 0x2e6da4u: goto label_2e6da4;
        case 0x2e6da8u: goto label_2e6da8;
        case 0x2e6dacu: goto label_2e6dac;
        case 0x2e6db0u: goto label_2e6db0;
        case 0x2e6db4u: goto label_2e6db4;
        case 0x2e6db8u: goto label_2e6db8;
        case 0x2e6dbcu: goto label_2e6dbc;
        case 0x2e6dc0u: goto label_2e6dc0;
        case 0x2e6dc4u: goto label_2e6dc4;
        case 0x2e6dc8u: goto label_2e6dc8;
        case 0x2e6dccu: goto label_2e6dcc;
        case 0x2e6dd0u: goto label_2e6dd0;
        case 0x2e6dd4u: goto label_2e6dd4;
        case 0x2e6dd8u: goto label_2e6dd8;
        case 0x2e6ddcu: goto label_2e6ddc;
        case 0x2e6de0u: goto label_2e6de0;
        case 0x2e6de4u: goto label_2e6de4;
        case 0x2e6de8u: goto label_2e6de8;
        case 0x2e6decu: goto label_2e6dec;
        case 0x2e6df0u: goto label_2e6df0;
        case 0x2e6df4u: goto label_2e6df4;
        case 0x2e6df8u: goto label_2e6df8;
        case 0x2e6dfcu: goto label_2e6dfc;
        case 0x2e6e00u: goto label_2e6e00;
        case 0x2e6e04u: goto label_2e6e04;
        case 0x2e6e08u: goto label_2e6e08;
        case 0x2e6e0cu: goto label_2e6e0c;
        case 0x2e6e10u: goto label_2e6e10;
        case 0x2e6e14u: goto label_2e6e14;
        case 0x2e6e18u: goto label_2e6e18;
        case 0x2e6e1cu: goto label_2e6e1c;
        case 0x2e6e20u: goto label_2e6e20;
        case 0x2e6e24u: goto label_2e6e24;
        case 0x2e6e28u: goto label_2e6e28;
        case 0x2e6e2cu: goto label_2e6e2c;
        case 0x2e6e30u: goto label_2e6e30;
        case 0x2e6e34u: goto label_2e6e34;
        case 0x2e6e38u: goto label_2e6e38;
        case 0x2e6e3cu: goto label_2e6e3c;
        case 0x2e6e40u: goto label_2e6e40;
        case 0x2e6e44u: goto label_2e6e44;
        case 0x2e6e48u: goto label_2e6e48;
        case 0x2e6e4cu: goto label_2e6e4c;
        case 0x2e6e50u: goto label_2e6e50;
        case 0x2e6e54u: goto label_2e6e54;
        case 0x2e6e58u: goto label_2e6e58;
        case 0x2e6e5cu: goto label_2e6e5c;
        case 0x2e6e60u: goto label_2e6e60;
        case 0x2e6e64u: goto label_2e6e64;
        case 0x2e6e68u: goto label_2e6e68;
        case 0x2e6e6cu: goto label_2e6e6c;
        case 0x2e6e70u: goto label_2e6e70;
        case 0x2e6e74u: goto label_2e6e74;
        case 0x2e6e78u: goto label_2e6e78;
        case 0x2e6e7cu: goto label_2e6e7c;
        case 0x2e6e80u: goto label_2e6e80;
        case 0x2e6e84u: goto label_2e6e84;
        case 0x2e6e88u: goto label_2e6e88;
        case 0x2e6e8cu: goto label_2e6e8c;
        case 0x2e6e90u: goto label_2e6e90;
        case 0x2e6e94u: goto label_2e6e94;
        case 0x2e6e98u: goto label_2e6e98;
        case 0x2e6e9cu: goto label_2e6e9c;
        case 0x2e6ea0u: goto label_2e6ea0;
        case 0x2e6ea4u: goto label_2e6ea4;
        case 0x2e6ea8u: goto label_2e6ea8;
        case 0x2e6eacu: goto label_2e6eac;
        case 0x2e6eb0u: goto label_2e6eb0;
        case 0x2e6eb4u: goto label_2e6eb4;
        case 0x2e6eb8u: goto label_2e6eb8;
        case 0x2e6ebcu: goto label_2e6ebc;
        case 0x2e6ec0u: goto label_2e6ec0;
        case 0x2e6ec4u: goto label_2e6ec4;
        case 0x2e6ec8u: goto label_2e6ec8;
        case 0x2e6eccu: goto label_2e6ecc;
        case 0x2e6ed0u: goto label_2e6ed0;
        case 0x2e6ed4u: goto label_2e6ed4;
        case 0x2e6ed8u: goto label_2e6ed8;
        case 0x2e6edcu: goto label_2e6edc;
        case 0x2e6ee0u: goto label_2e6ee0;
        case 0x2e6ee4u: goto label_2e6ee4;
        case 0x2e6ee8u: goto label_2e6ee8;
        case 0x2e6eecu: goto label_2e6eec;
        case 0x2e6ef0u: goto label_2e6ef0;
        case 0x2e6ef4u: goto label_2e6ef4;
        case 0x2e6ef8u: goto label_2e6ef8;
        case 0x2e6efcu: goto label_2e6efc;
        case 0x2e6f00u: goto label_2e6f00;
        case 0x2e6f04u: goto label_2e6f04;
        case 0x2e6f08u: goto label_2e6f08;
        case 0x2e6f0cu: goto label_2e6f0c;
        case 0x2e6f10u: goto label_2e6f10;
        case 0x2e6f14u: goto label_2e6f14;
        case 0x2e6f18u: goto label_2e6f18;
        case 0x2e6f1cu: goto label_2e6f1c;
        case 0x2e6f20u: goto label_2e6f20;
        case 0x2e6f24u: goto label_2e6f24;
        case 0x2e6f28u: goto label_2e6f28;
        case 0x2e6f2cu: goto label_2e6f2c;
        case 0x2e6f30u: goto label_2e6f30;
        case 0x2e6f34u: goto label_2e6f34;
        case 0x2e6f38u: goto label_2e6f38;
        case 0x2e6f3cu: goto label_2e6f3c;
        case 0x2e6f40u: goto label_2e6f40;
        case 0x2e6f44u: goto label_2e6f44;
        case 0x2e6f48u: goto label_2e6f48;
        case 0x2e6f4cu: goto label_2e6f4c;
        case 0x2e6f50u: goto label_2e6f50;
        case 0x2e6f54u: goto label_2e6f54;
        case 0x2e6f58u: goto label_2e6f58;
        case 0x2e6f5cu: goto label_2e6f5c;
        case 0x2e6f60u: goto label_2e6f60;
        case 0x2e6f64u: goto label_2e6f64;
        case 0x2e6f68u: goto label_2e6f68;
        case 0x2e6f6cu: goto label_2e6f6c;
        case 0x2e6f70u: goto label_2e6f70;
        case 0x2e6f74u: goto label_2e6f74;
        case 0x2e6f78u: goto label_2e6f78;
        case 0x2e6f7cu: goto label_2e6f7c;
        case 0x2e6f80u: goto label_2e6f80;
        case 0x2e6f84u: goto label_2e6f84;
        case 0x2e6f88u: goto label_2e6f88;
        case 0x2e6f8cu: goto label_2e6f8c;
        case 0x2e6f90u: goto label_2e6f90;
        case 0x2e6f94u: goto label_2e6f94;
        case 0x2e6f98u: goto label_2e6f98;
        case 0x2e6f9cu: goto label_2e6f9c;
        case 0x2e6fa0u: goto label_2e6fa0;
        case 0x2e6fa4u: goto label_2e6fa4;
        case 0x2e6fa8u: goto label_2e6fa8;
        case 0x2e6facu: goto label_2e6fac;
        case 0x2e6fb0u: goto label_2e6fb0;
        case 0x2e6fb4u: goto label_2e6fb4;
        case 0x2e6fb8u: goto label_2e6fb8;
        case 0x2e6fbcu: goto label_2e6fbc;
        case 0x2e6fc0u: goto label_2e6fc0;
        case 0x2e6fc4u: goto label_2e6fc4;
        case 0x2e6fc8u: goto label_2e6fc8;
        case 0x2e6fccu: goto label_2e6fcc;
        case 0x2e6fd0u: goto label_2e6fd0;
        case 0x2e6fd4u: goto label_2e6fd4;
        case 0x2e6fd8u: goto label_2e6fd8;
        case 0x2e6fdcu: goto label_2e6fdc;
        case 0x2e6fe0u: goto label_2e6fe0;
        case 0x2e6fe4u: goto label_2e6fe4;
        case 0x2e6fe8u: goto label_2e6fe8;
        case 0x2e6fecu: goto label_2e6fec;
        case 0x2e6ff0u: goto label_2e6ff0;
        case 0x2e6ff4u: goto label_2e6ff4;
        case 0x2e6ff8u: goto label_2e6ff8;
        case 0x2e6ffcu: goto label_2e6ffc;
        case 0x2e7000u: goto label_2e7000;
        case 0x2e7004u: goto label_2e7004;
        case 0x2e7008u: goto label_2e7008;
        case 0x2e700cu: goto label_2e700c;
        case 0x2e7010u: goto label_2e7010;
        case 0x2e7014u: goto label_2e7014;
        case 0x2e7018u: goto label_2e7018;
        case 0x2e701cu: goto label_2e701c;
        case 0x2e7020u: goto label_2e7020;
        case 0x2e7024u: goto label_2e7024;
        case 0x2e7028u: goto label_2e7028;
        case 0x2e702cu: goto label_2e702c;
        case 0x2e7030u: goto label_2e7030;
        case 0x2e7034u: goto label_2e7034;
        case 0x2e7038u: goto label_2e7038;
        case 0x2e703cu: goto label_2e703c;
        case 0x2e7040u: goto label_2e7040;
        case 0x2e7044u: goto label_2e7044;
        case 0x2e7048u: goto label_2e7048;
        case 0x2e704cu: goto label_2e704c;
        case 0x2e7050u: goto label_2e7050;
        case 0x2e7054u: goto label_2e7054;
        case 0x2e7058u: goto label_2e7058;
        case 0x2e705cu: goto label_2e705c;
        case 0x2e7060u: goto label_2e7060;
        case 0x2e7064u: goto label_2e7064;
        case 0x2e7068u: goto label_2e7068;
        case 0x2e706cu: goto label_2e706c;
        case 0x2e7070u: goto label_2e7070;
        case 0x2e7074u: goto label_2e7074;
        case 0x2e7078u: goto label_2e7078;
        case 0x2e707cu: goto label_2e707c;
        case 0x2e7080u: goto label_2e7080;
        case 0x2e7084u: goto label_2e7084;
        case 0x2e7088u: goto label_2e7088;
        case 0x2e708cu: goto label_2e708c;
        case 0x2e7090u: goto label_2e7090;
        case 0x2e7094u: goto label_2e7094;
        case 0x2e7098u: goto label_2e7098;
        case 0x2e709cu: goto label_2e709c;
        case 0x2e70a0u: goto label_2e70a0;
        case 0x2e70a4u: goto label_2e70a4;
        case 0x2e70a8u: goto label_2e70a8;
        case 0x2e70acu: goto label_2e70ac;
        case 0x2e70b0u: goto label_2e70b0;
        case 0x2e70b4u: goto label_2e70b4;
        case 0x2e70b8u: goto label_2e70b8;
        case 0x2e70bcu: goto label_2e70bc;
        case 0x2e70c0u: goto label_2e70c0;
        case 0x2e70c4u: goto label_2e70c4;
        case 0x2e70c8u: goto label_2e70c8;
        case 0x2e70ccu: goto label_2e70cc;
        case 0x2e70d0u: goto label_2e70d0;
        case 0x2e70d4u: goto label_2e70d4;
        case 0x2e70d8u: goto label_2e70d8;
        case 0x2e70dcu: goto label_2e70dc;
        case 0x2e70e0u: goto label_2e70e0;
        case 0x2e70e4u: goto label_2e70e4;
        case 0x2e70e8u: goto label_2e70e8;
        case 0x2e70ecu: goto label_2e70ec;
        case 0x2e70f0u: goto label_2e70f0;
        case 0x2e70f4u: goto label_2e70f4;
        case 0x2e70f8u: goto label_2e70f8;
        case 0x2e70fcu: goto label_2e70fc;
        case 0x2e7100u: goto label_2e7100;
        case 0x2e7104u: goto label_2e7104;
        case 0x2e7108u: goto label_2e7108;
        case 0x2e710cu: goto label_2e710c;
        case 0x2e7110u: goto label_2e7110;
        case 0x2e7114u: goto label_2e7114;
        case 0x2e7118u: goto label_2e7118;
        case 0x2e711cu: goto label_2e711c;
        case 0x2e7120u: goto label_2e7120;
        case 0x2e7124u: goto label_2e7124;
        case 0x2e7128u: goto label_2e7128;
        case 0x2e712cu: goto label_2e712c;
        case 0x2e7130u: goto label_2e7130;
        case 0x2e7134u: goto label_2e7134;
        case 0x2e7138u: goto label_2e7138;
        case 0x2e713cu: goto label_2e713c;
        case 0x2e7140u: goto label_2e7140;
        case 0x2e7144u: goto label_2e7144;
        case 0x2e7148u: goto label_2e7148;
        case 0x2e714cu: goto label_2e714c;
        case 0x2e7150u: goto label_2e7150;
        case 0x2e7154u: goto label_2e7154;
        case 0x2e7158u: goto label_2e7158;
        case 0x2e715cu: goto label_2e715c;
        case 0x2e7160u: goto label_2e7160;
        case 0x2e7164u: goto label_2e7164;
        case 0x2e7168u: goto label_2e7168;
        case 0x2e716cu: goto label_2e716c;
        case 0x2e7170u: goto label_2e7170;
        case 0x2e7174u: goto label_2e7174;
        case 0x2e7178u: goto label_2e7178;
        case 0x2e717cu: goto label_2e717c;
        case 0x2e7180u: goto label_2e7180;
        case 0x2e7184u: goto label_2e7184;
        case 0x2e7188u: goto label_2e7188;
        case 0x2e718cu: goto label_2e718c;
        case 0x2e7190u: goto label_2e7190;
        case 0x2e7194u: goto label_2e7194;
        case 0x2e7198u: goto label_2e7198;
        case 0x2e719cu: goto label_2e719c;
        case 0x2e71a0u: goto label_2e71a0;
        case 0x2e71a4u: goto label_2e71a4;
        case 0x2e71a8u: goto label_2e71a8;
        case 0x2e71acu: goto label_2e71ac;
        case 0x2e71b0u: goto label_2e71b0;
        case 0x2e71b4u: goto label_2e71b4;
        case 0x2e71b8u: goto label_2e71b8;
        case 0x2e71bcu: goto label_2e71bc;
        case 0x2e71c0u: goto label_2e71c0;
        case 0x2e71c4u: goto label_2e71c4;
        case 0x2e71c8u: goto label_2e71c8;
        case 0x2e71ccu: goto label_2e71cc;
        case 0x2e71d0u: goto label_2e71d0;
        case 0x2e71d4u: goto label_2e71d4;
        case 0x2e71d8u: goto label_2e71d8;
        case 0x2e71dcu: goto label_2e71dc;
        case 0x2e71e0u: goto label_2e71e0;
        case 0x2e71e4u: goto label_2e71e4;
        case 0x2e71e8u: goto label_2e71e8;
        case 0x2e71ecu: goto label_2e71ec;
        case 0x2e71f0u: goto label_2e71f0;
        case 0x2e71f4u: goto label_2e71f4;
        case 0x2e71f8u: goto label_2e71f8;
        case 0x2e71fcu: goto label_2e71fc;
        case 0x2e7200u: goto label_2e7200;
        case 0x2e7204u: goto label_2e7204;
        case 0x2e7208u: goto label_2e7208;
        case 0x2e720cu: goto label_2e720c;
        case 0x2e7210u: goto label_2e7210;
        case 0x2e7214u: goto label_2e7214;
        case 0x2e7218u: goto label_2e7218;
        case 0x2e721cu: goto label_2e721c;
        case 0x2e7220u: goto label_2e7220;
        case 0x2e7224u: goto label_2e7224;
        case 0x2e7228u: goto label_2e7228;
        case 0x2e722cu: goto label_2e722c;
        case 0x2e7230u: goto label_2e7230;
        case 0x2e7234u: goto label_2e7234;
        case 0x2e7238u: goto label_2e7238;
        case 0x2e723cu: goto label_2e723c;
        case 0x2e7240u: goto label_2e7240;
        case 0x2e7244u: goto label_2e7244;
        case 0x2e7248u: goto label_2e7248;
        case 0x2e724cu: goto label_2e724c;
        case 0x2e7250u: goto label_2e7250;
        case 0x2e7254u: goto label_2e7254;
        case 0x2e7258u: goto label_2e7258;
        case 0x2e725cu: goto label_2e725c;
        case 0x2e7260u: goto label_2e7260;
        case 0x2e7264u: goto label_2e7264;
        case 0x2e7268u: goto label_2e7268;
        case 0x2e726cu: goto label_2e726c;
        case 0x2e7270u: goto label_2e7270;
        case 0x2e7274u: goto label_2e7274;
        case 0x2e7278u: goto label_2e7278;
        case 0x2e727cu: goto label_2e727c;
        case 0x2e7280u: goto label_2e7280;
        case 0x2e7284u: goto label_2e7284;
        case 0x2e7288u: goto label_2e7288;
        case 0x2e728cu: goto label_2e728c;
        case 0x2e7290u: goto label_2e7290;
        case 0x2e7294u: goto label_2e7294;
        case 0x2e7298u: goto label_2e7298;
        case 0x2e729cu: goto label_2e729c;
        case 0x2e72a0u: goto label_2e72a0;
        case 0x2e72a4u: goto label_2e72a4;
        case 0x2e72a8u: goto label_2e72a8;
        case 0x2e72acu: goto label_2e72ac;
        case 0x2e72b0u: goto label_2e72b0;
        case 0x2e72b4u: goto label_2e72b4;
        case 0x2e72b8u: goto label_2e72b8;
        case 0x2e72bcu: goto label_2e72bc;
        case 0x2e72c0u: goto label_2e72c0;
        case 0x2e72c4u: goto label_2e72c4;
        case 0x2e72c8u: goto label_2e72c8;
        case 0x2e72ccu: goto label_2e72cc;
        case 0x2e72d0u: goto label_2e72d0;
        case 0x2e72d4u: goto label_2e72d4;
        case 0x2e72d8u: goto label_2e72d8;
        case 0x2e72dcu: goto label_2e72dc;
        case 0x2e72e0u: goto label_2e72e0;
        case 0x2e72e4u: goto label_2e72e4;
        case 0x2e72e8u: goto label_2e72e8;
        case 0x2e72ecu: goto label_2e72ec;
        case 0x2e72f0u: goto label_2e72f0;
        case 0x2e72f4u: goto label_2e72f4;
        case 0x2e72f8u: goto label_2e72f8;
        case 0x2e72fcu: goto label_2e72fc;
        case 0x2e7300u: goto label_2e7300;
        case 0x2e7304u: goto label_2e7304;
        case 0x2e7308u: goto label_2e7308;
        case 0x2e730cu: goto label_2e730c;
        case 0x2e7310u: goto label_2e7310;
        case 0x2e7314u: goto label_2e7314;
        case 0x2e7318u: goto label_2e7318;
        case 0x2e731cu: goto label_2e731c;
        case 0x2e7320u: goto label_2e7320;
        case 0x2e7324u: goto label_2e7324;
        case 0x2e7328u: goto label_2e7328;
        case 0x2e732cu: goto label_2e732c;
        case 0x2e7330u: goto label_2e7330;
        case 0x2e7334u: goto label_2e7334;
        case 0x2e7338u: goto label_2e7338;
        case 0x2e733cu: goto label_2e733c;
        case 0x2e7340u: goto label_2e7340;
        case 0x2e7344u: goto label_2e7344;
        case 0x2e7348u: goto label_2e7348;
        case 0x2e734cu: goto label_2e734c;
        case 0x2e7350u: goto label_2e7350;
        case 0x2e7354u: goto label_2e7354;
        case 0x2e7358u: goto label_2e7358;
        case 0x2e735cu: goto label_2e735c;
        case 0x2e7360u: goto label_2e7360;
        case 0x2e7364u: goto label_2e7364;
        case 0x2e7368u: goto label_2e7368;
        case 0x2e736cu: goto label_2e736c;
        case 0x2e7370u: goto label_2e7370;
        case 0x2e7374u: goto label_2e7374;
        case 0x2e7378u: goto label_2e7378;
        case 0x2e737cu: goto label_2e737c;
        case 0x2e7380u: goto label_2e7380;
        case 0x2e7384u: goto label_2e7384;
        case 0x2e7388u: goto label_2e7388;
        case 0x2e738cu: goto label_2e738c;
        case 0x2e7390u: goto label_2e7390;
        case 0x2e7394u: goto label_2e7394;
        case 0x2e7398u: goto label_2e7398;
        case 0x2e739cu: goto label_2e739c;
        case 0x2e73a0u: goto label_2e73a0;
        case 0x2e73a4u: goto label_2e73a4;
        case 0x2e73a8u: goto label_2e73a8;
        case 0x2e73acu: goto label_2e73ac;
        case 0x2e73b0u: goto label_2e73b0;
        case 0x2e73b4u: goto label_2e73b4;
        case 0x2e73b8u: goto label_2e73b8;
        case 0x2e73bcu: goto label_2e73bc;
        case 0x2e73c0u: goto label_2e73c0;
        case 0x2e73c4u: goto label_2e73c4;
        case 0x2e73c8u: goto label_2e73c8;
        case 0x2e73ccu: goto label_2e73cc;
        case 0x2e73d0u: goto label_2e73d0;
        case 0x2e73d4u: goto label_2e73d4;
        case 0x2e73d8u: goto label_2e73d8;
        case 0x2e73dcu: goto label_2e73dc;
        case 0x2e73e0u: goto label_2e73e0;
        case 0x2e73e4u: goto label_2e73e4;
        case 0x2e73e8u: goto label_2e73e8;
        case 0x2e73ecu: goto label_2e73ec;
        case 0x2e73f0u: goto label_2e73f0;
        case 0x2e73f4u: goto label_2e73f4;
        case 0x2e73f8u: goto label_2e73f8;
        case 0x2e73fcu: goto label_2e73fc;
        case 0x2e7400u: goto label_2e7400;
        case 0x2e7404u: goto label_2e7404;
        case 0x2e7408u: goto label_2e7408;
        case 0x2e740cu: goto label_2e740c;
        case 0x2e7410u: goto label_2e7410;
        case 0x2e7414u: goto label_2e7414;
        case 0x2e7418u: goto label_2e7418;
        case 0x2e741cu: goto label_2e741c;
        case 0x2e7420u: goto label_2e7420;
        case 0x2e7424u: goto label_2e7424;
        case 0x2e7428u: goto label_2e7428;
        case 0x2e742cu: goto label_2e742c;
        case 0x2e7430u: goto label_2e7430;
        case 0x2e7434u: goto label_2e7434;
        default: break;
    }

    ctx->pc = 0x2e6d60u;

label_2e6d60:
    // 0x2e6d60: 0x27bdfe30  addiu       $sp, $sp, -0x1D0
    ctx->pc = 0x2e6d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966832));
label_2e6d64:
    // 0x2e6d64: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2e6d64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2e6d68:
    // 0x2e6d68: 0xffb40170  sd          $s4, 0x170($sp)
    ctx->pc = 0x2e6d68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 20));
label_2e6d6c:
    // 0x2e6d6c: 0xffb60190  sd          $s6, 0x190($sp)
    ctx->pc = 0x2e6d6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 400), GPR_U64(ctx, 22));
label_2e6d70:
    // 0x2e6d70: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2e6d70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d74:
    // 0x2e6d74: 0xffbe01b0  sd          $fp, 0x1B0($sp)
    ctx->pc = 0x2e6d74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 432), GPR_U64(ctx, 30));
label_2e6d78:
    // 0x2e6d78: 0x282b018  mult        $s6, $s4, $v0
    ctx->pc = 0x2e6d78u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_2e6d7c:
    // 0x2e6d7c: 0xffb701a0  sd          $s7, 0x1A0($sp)
    ctx->pc = 0x2e6d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 416), GPR_U64(ctx, 23));
label_2e6d80:
    // 0x2e6d80: 0xffb50180  sd          $s5, 0x180($sp)
    ctx->pc = 0x2e6d80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 384), GPR_U64(ctx, 21));
label_2e6d84:
    // 0x2e6d84: 0xffb30160  sd          $s3, 0x160($sp)
    ctx->pc = 0x2e6d84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 19));
label_2e6d88:
    // 0x2e6d88: 0xffb10140  sd          $s1, 0x140($sp)
    ctx->pc = 0x2e6d88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 17));
label_2e6d8c:
    // 0x2e6d8c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2e6d8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d90:
    // 0x2e6d90: 0xffb00130  sd          $s0, 0x130($sp)
    ctx->pc = 0x2e6d90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 16));
label_2e6d94:
    // 0x2e6d94: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2e6d94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2e6d98:
    // 0x2e6d98: 0xffbf01c0  sd          $ra, 0x1C0($sp)
    ctx->pc = 0x2e6d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 448), GPR_U64(ctx, 31));
label_2e6d9c:
    // 0x2e6d9c: 0x26370038  addiu       $s7, $s1, 0x38
    ctx->pc = 0x2e6d9cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_2e6da0:
    // 0x2e6da0: 0xffb20150  sd          $s2, 0x150($sp)
    ctx->pc = 0x2e6da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 18));
label_2e6da4:
    // 0x2e6da4: 0x2f68021  addu        $s0, $s7, $s6
    ctx->pc = 0x2e6da4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
label_2e6da8:
    // 0x2e6da8: 0x8e320014  lw          $s2, 0x14($s1)
    ctx->pc = 0x2e6da8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_2e6dac:
    // 0x2e6dac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2e6dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e6db0:
    // 0x2e6db0: 0xafb70124  sw          $s7, 0x124($sp)
    ctx->pc = 0x2e6db0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 23));
label_2e6db4:
    // 0x2e6db4: 0x26350004  addiu       $s5, $s1, 0x4
    ctx->pc = 0x2e6db4u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_2e6db8:
    // 0x2e6db8: 0xafa70118  sw          $a3, 0x118($sp)
    ctx->pc = 0x2e6db8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 7));
label_2e6dbc:
    // 0x2e6dbc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e6dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6dc0:
    // 0x2e6dc0: 0xc0b9906  jal         func_2E6418
label_2e6dc4:
    if (ctx->pc == 0x2E6DC4u) {
        ctx->pc = 0x2E6DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DC0u;
        // 0x2e6dc4: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DC8u;
        goto label_2e6dc8;
    }
    ctx->pc = 0x2E6DC0u;
    SET_GPR_U32(ctx, 31, 0x2E6DC8u);
    ctx->pc = 0x2E6DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6DC0u;
    // 0x2e6dc4: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6418u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6418u, 0x2E6DC0u, 0x2E6DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6DC8u;
label_2e6dc8:
    // 0x2e6dc8: 0x40f02d  daddu       $fp, $v0, $zero
    ctx->pc = 0x2e6dc8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6dcc:
    // 0x2e6dcc: 0x7c0018e  bltz        $fp, . + 4 + (0x18E << 2)
label_2e6dd0:
    if (ctx->pc == 0x2E6DD0u) {
        ctx->pc = 0x2E6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DCCu;
        // 0x2e6dd0: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DD4u;
        goto label_2e6dd4;
    }
    ctx->pc = 0x2E6DCCu;
    {
        const bool branch_taken_0x2e6dcc = (GPR_S32(ctx, 30) < 0);
        ctx->pc = 0x2E6DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DCCu;
        // 0x2e6dd0: 0x2402ffe3  addiu       $v0, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6dcc) {
            ctx->pc = 0x2E7408u;
            goto label_2e7408;
        }
    }
    ctx->pc = 0x2E6DD4u;
label_2e6dd4:
    // 0x2e6dd4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2e6dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e6dd8:
    // 0x2e6dd8: 0x1262000c  beq         $s3, $v0, . + 4 + (0xC << 2)
label_2e6ddc:
    if (ctx->pc == 0x2E6DDCu) {
        ctx->pc = 0x2E6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DD8u;
        // 0x2e6ddc: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DE0u;
        goto label_2e6de0;
    }
    ctx->pc = 0x2E6DD8u;
    {
        const bool branch_taken_0x2e6dd8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DD8u;
        // 0x2e6ddc: 0x2a620004  slti        $v0, $s3, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)4) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6dd8) {
            ctx->pc = 0x2E6E0Cu;
            goto label_2e6e0c;
        }
    }
    ctx->pc = 0x2E6DE0u;
label_2e6de0:
    // 0x2e6de0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2e6de4:
    if (ctx->pc == 0x2E6DE4u) {
        ctx->pc = 0x2E6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DE0u;
        // 0x2e6de4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DE8u;
        goto label_2e6de8;
    }
    ctx->pc = 0x2E6DE0u;
    {
        const bool branch_taken_0x2e6de0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DE0u;
        // 0x2e6de4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6de0) {
            ctx->pc = 0x2E6DF8u;
            goto label_2e6df8;
        }
    }
    ctx->pc = 0x2E6DE8u;
label_2e6de8:
    // 0x2e6de8: 0x12620034  beq         $s3, $v0, . + 4 + (0x34 << 2)
label_2e6dec:
    if (ctx->pc == 0x2E6DECu) {
        ctx->pc = 0x2E6DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DE8u;
        // 0x2e6dec: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DF0u;
        goto label_2e6df0;
    }
    ctx->pc = 0x2E6DE8u;
    {
        const bool branch_taken_0x2e6de8 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DE8u;
        // 0x2e6dec: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6de8) {
            ctx->pc = 0x2E6EBCu;
            goto label_2e6ebc;
        }
    }
    ctx->pc = 0x2E6DF0u;
label_2e6df0:
    // 0x2e6df0: 0x10000076  b           . + 4 + (0x76 << 2)
label_2e6df4:
    if (ctx->pc == 0x2E6DF4u) {
        ctx->pc = 0x2E6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DF0u;
        // 0x2e6df4: 0x2821818  mult        $v1, $s4, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6DF8u;
        goto label_2e6df8;
    }
    ctx->pc = 0x2E6DF0u;
    {
        const bool branch_taken_0x2e6df0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DF0u;
        // 0x2e6df4: 0x2821818  mult        $v1, $s4, $v0 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6df0) {
            ctx->pc = 0x2E6FCCu;
            goto label_2e6fcc;
        }
    }
    ctx->pc = 0x2E6DF8u;
label_2e6df8:
    // 0x2e6df8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e6df8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e6dfc:
    // 0x2e6dfc: 0x12620041  beq         $s3, $v0, . + 4 + (0x41 << 2)
label_2e6e00:
    if (ctx->pc == 0x2E6E00u) {
        ctx->pc = 0x2E6E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DFCu;
        // 0x2e6e00: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E04u;
        goto label_2e6e04;
    }
    ctx->pc = 0x2E6DFCu;
    {
        const bool branch_taken_0x2e6dfc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E6E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6DFCu;
        // 0x2e6e00: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6dfc) {
            ctx->pc = 0x2E6F04u;
            goto label_2e6f04;
        }
    }
    ctx->pc = 0x2E6E04u;
label_2e6e04:
    // 0x2e6e04: 0x16620070  bne         $s3, $v0, . + 4 + (0x70 << 2)
label_2e6e08:
    if (ctx->pc == 0x2E6E08u) {
        ctx->pc = 0x2E6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E04u;
        // 0x2e6e08: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E0Cu;
        goto label_2e6e0c;
    }
    ctx->pc = 0x2E6E04u;
    {
        const bool branch_taken_0x2e6e04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E6E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E04u;
        // 0x2e6e08: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e04) {
            ctx->pc = 0x2E6FC8u;
            goto label_2e6fc8;
        }
    }
    ctx->pc = 0x2E6E0Cu;
label_2e6e0c:
    // 0x2e6e0c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e6e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e6e10:
    // 0x2e6e10: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e6e10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e14:
    // 0x2e6e14: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x2e6e14u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
label_2e6e18:
    // 0x2e6e18: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x2e6e18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2e6e1c:
    // 0x2e6e1c: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2e6e1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e20:
    // 0x2e6e20: 0xc098202  jal         func_260808
label_2e6e24:
    if (ctx->pc == 0x2E6E24u) {
        ctx->pc = 0x2E6E24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E20u;
        // 0x2e6e24: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E28u;
        goto label_2e6e28;
    }
    ctx->pc = 0x2E6E20u;
    SET_GPR_U32(ctx, 31, 0x2E6E28u);
    ctx->pc = 0x2E6E24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E20u;
    // 0x2e6e24: 0x27a70110  addiu       $a3, $sp, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x260808u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x260808u, 0x2E6E20u, 0x2E6E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E28u;
label_2e6e28:
    // 0x2e6e28: 0x4430008  bgezl       $v0, . + 4 + (0x8 << 2)
label_2e6e2c:
    if (ctx->pc == 0x2E6E2Cu) {
        ctx->pc = 0x2E6E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E28u;
        // 0x2e6e2c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E30u;
        goto label_2e6e30;
    }
    ctx->pc = 0x2E6E28u;
    {
        const bool branch_taken_0x2e6e28 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2e6e28) {
            ctx->pc = 0x2E6E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6E28u;
            // 0x2e6e2c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6E4Cu;
            goto label_2e6e4c;
        }
    }
    ctx->pc = 0x2E6E30u;
label_2e6e30:
    // 0x2e6e30: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6e30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e6e34:
    // 0x2e6e34: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x2e6e34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e38:
    // 0x2e6e38: 0x24a5f7c0  addiu       $a1, $a1, -0x840
    ctx->pc = 0x2e6e38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965184));
label_2e6e3c:
    // 0x2e6e3c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e6e3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e6e40:
    // 0x2e6e40: 0xc08b5ac  jal         func_22D6B0
label_2e6e44:
    if (ctx->pc == 0x2E6E44u) {
        ctx->pc = 0x2E6E44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E40u;
        // 0x2e6e44: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E48u;
        goto label_2e6e48;
    }
    ctx->pc = 0x2E6E40u;
    SET_GPR_U32(ctx, 31, 0x2E6E48u);
    ctx->pc = 0x2E6E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E40u;
    // 0x2e6e44: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6E40u, 0x2E6E48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E48u;
label_2e6e48:
    // 0x2e6e48: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2e6e48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2e6e4c:
    // 0x2e6e4c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2e6e50:
    if (ctx->pc == 0x2E6E50u) {
        ctx->pc = 0x2E6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E4Cu;
        // 0x2e6e50: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E54u;
        goto label_2e6e54;
    }
    ctx->pc = 0x2E6E4Cu;
    {
        const bool branch_taken_0x2e6e4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E4Cu;
        // 0x2e6e50: 0x27b00010  addiu       $s0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e4c) {
            ctx->pc = 0x2E6E78u;
            goto label_2e6e78;
        }
    }
    ctx->pc = 0x2E6E54u;
label_2e6e54:
    // 0x2e6e54: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2e6e54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e58:
    // 0x2e6e58: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2e6e58u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e5c:
    // 0x2e6e5c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e6e5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e60:
    // 0x2e6e60: 0xc0990f0  jal         func_2643C0
label_2e6e64:
    if (ctx->pc == 0x2E6E64u) {
        ctx->pc = 0x2E6E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E60u;
        // 0x2e6e64: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E68u;
        goto label_2e6e68;
    }
    ctx->pc = 0x2E6E60u;
    SET_GPR_U32(ctx, 31, 0x2E6E68u);
    ctx->pc = 0x2E6E64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E60u;
    // 0x2e6e64: 0x24070100  addiu       $a3, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2643C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2643C0u, 0x2E6E60u, 0x2E6E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E68u;
label_2e6e68:
    // 0x2e6e68: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2e6e6c:
    if (ctx->pc == 0x2E6E6Cu) {
        ctx->pc = 0x2E6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E68u;
        // 0x2e6e6c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E70u;
        goto label_2e6e70;
    }
    ctx->pc = 0x2E6E68u;
    {
        const bool branch_taken_0x2e6e68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E68u;
        // 0x2e6e6c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e68) {
            ctx->pc = 0x2E6E90u;
            goto label_2e6e90;
        }
    }
    ctx->pc = 0x2E6E70u;
label_2e6e70:
    // 0x2e6e70: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e6e74:
    if (ctx->pc == 0x2E6E74u) {
        ctx->pc = 0x2E6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E70u;
        // 0x2e6e74: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E78u;
        goto label_2e6e78;
    }
    ctx->pc = 0x2E6E70u;
    {
        const bool branch_taken_0x2e6e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E70u;
        // 0x2e6e74: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6e70) {
            ctx->pc = 0x2E6E7Cu;
            goto label_2e6e7c;
        }
    }
    ctx->pc = 0x2E6E78u;
label_2e6e78:
    // 0x2e6e78: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6e78u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e6e7c:
    // 0x2e6e7c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e6e7cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e80:
    // 0x2e6e80: 0x24a5f7e8  addiu       $a1, $a1, -0x818
    ctx->pc = 0x2e6e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965224));
label_2e6e84:
    // 0x2e6e84: 0xc04a966  jal         func_12A598
label_2e6e88:
    if (ctx->pc == 0x2E6E88u) {
        ctx->pc = 0x2E6E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E84u;
        // 0x2e6e88: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6E8Cu;
        goto label_2e6e8c;
    }
    ctx->pc = 0x2E6E84u;
    SET_GPR_U32(ctx, 31, 0x2E6E8Cu);
    ctx->pc = 0x2E6E88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E84u;
    // 0x2e6e88: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A598u, 0x2E6E84u, 0x2E6E8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6E8Cu;
label_2e6e8c:
    // 0x2e6e8c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e6e90:
    // 0x2e6e90: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2e6e90u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2e6e94:
    // 0x2e6e94: 0x24a5f7f0  addiu       $a1, $a1, -0x810
    ctx->pc = 0x2e6e94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965232));
label_2e6e98:
    // 0x2e6e98: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e6e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e6e9c:
    // 0x2e6e9c: 0xc08b5ac  jal         func_22D6B0
label_2e6ea0:
    if (ctx->pc == 0x2E6EA0u) {
        ctx->pc = 0x2E6EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6E9Cu;
        // 0x2e6ea0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EA4u;
        goto label_2e6ea4;
    }
    ctx->pc = 0x2E6E9Cu;
    SET_GPR_U32(ctx, 31, 0x2E6EA4u);
    ctx->pc = 0x2E6EA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6E9Cu;
    // 0x2e6ea0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6E9Cu, 0x2E6EA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6EA4u;
label_2e6ea4:
    // 0x2e6ea4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2e6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2e6ea8:
    // 0x2e6ea8: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2e6ea8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2e6eac:
    // 0x2e6eac: 0x2822018  mult        $a0, $s4, $v0
    ctx->pc = 0x2e6eacu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2e6eb0:
    // 0x2e6eb0: 0x971021  addu        $v0, $a0, $s7
    ctx->pc = 0x2e6eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_2e6eb4:
    // 0x2e6eb4: 0x100000f9  b           . + 4 + (0xF9 << 2)
label_2e6eb8:
    if (ctx->pc == 0x2E6EB8u) {
        ctx->pc = 0x2E6EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EB4u;
        // 0x2e6eb8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EBCu;
        goto label_2e6ebc;
    }
    ctx->pc = 0x2E6EB4u;
    {
        const bool branch_taken_0x2e6eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6EB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EB4u;
        // 0x2e6eb8: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6eb4) {
            ctx->pc = 0x2E729Cu;
            goto label_2e729c;
        }
    }
    ctx->pc = 0x2E6EBCu;
label_2e6ebc:
    // 0x2e6ebc: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e6ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6ec0:
    // 0x2e6ec0: 0x24120006  addiu       $s2, $zero, 0x6
    ctx->pc = 0x2e6ec0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e6ec4:
    // 0x2e6ec4: 0x1052000e  beq         $v0, $s2, . + 4 + (0xE << 2)
label_2e6ec8:
    if (ctx->pc == 0x2E6EC8u) {
        ctx->pc = 0x2E6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EC4u;
        // 0x2e6ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6ECCu;
        goto label_2e6ecc;
    }
    ctx->pc = 0x2E6EC4u;
    {
        const bool branch_taken_0x2e6ec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E6EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EC4u;
        // 0x2e6ec8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ec4) {
            ctx->pc = 0x2E6F00u;
            goto label_2e6f00;
        }
    }
    ctx->pc = 0x2E6ECCu;
label_2e6ecc:
    // 0x2e6ecc: 0xc0b9aba  jal         func_2E6AE8
label_2e6ed0:
    if (ctx->pc == 0x2E6ED0u) {
        ctx->pc = 0x2E6ED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6ECCu;
        // 0x2e6ed0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6ED4u;
        goto label_2e6ed4;
    }
    ctx->pc = 0x2E6ECCu;
    SET_GPR_U32(ctx, 31, 0x2E6ED4u);
    ctx->pc = 0x2E6ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6ECCu;
    // 0x2e6ed0: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6AE8u, 0x2E6ECCu, 0x2E6ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6ED4u;
label_2e6ed4:
    // 0x2e6ed4: 0x44300f1  bgezl       $v0, . + 4 + (0xF1 << 2)
label_2e6ed8:
    if (ctx->pc == 0x2E6ED8u) {
        ctx->pc = 0x2E6ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6ED4u;
        // 0x2e6ed8: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EDCu;
        goto label_2e6edc;
    }
    ctx->pc = 0x2E6ED4u;
    {
        const bool branch_taken_0x2e6ed4 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x2e6ed4) {
            ctx->pc = 0x2E6ED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6ED4u;
            // 0x2e6ed8: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E729Cu;
            goto label_2e729c;
        }
    }
    ctx->pc = 0x2E6EDCu;
label_2e6edc:
    // 0x2e6edc: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x2e6edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2e6ee0:
    // 0x2e6ee0: 0x3c042000  lui         $a0, 0x2000
    ctx->pc = 0x2e6ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)8192 << 16));
label_2e6ee4:
    // 0x2e6ee4: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x2e6ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_2e6ee8:
    // 0x2e6ee8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2e6ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e6eec:
    // 0x2e6eec: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2e6eecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2e6ef0:
    // 0x2e6ef0: 0xc0ba15a  jal         func_2E8568
label_2e6ef4:
    if (ctx->pc == 0x2E6EF4u) {
        ctx->pc = 0x2E6EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EF0u;
        // 0x2e6ef4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6EF8u;
        goto label_2e6ef8;
    }
    ctx->pc = 0x2E6EF0u;
    SET_GPR_U32(ctx, 31, 0x2E6EF8u);
    ctx->pc = 0x2E6EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6EF0u;
    // 0x2e6ef4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E8568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8568u, 0x2E6EF0u, 0x2E6EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6EF8u;
label_2e6ef8:
    // 0x2e6ef8: 0x100000e8  b           . + 4 + (0xE8 << 2)
label_2e6efc:
    if (ctx->pc == 0x2E6EFCu) {
        ctx->pc = 0x2E6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EF8u;
        // 0x2e6efc: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F00u;
        goto label_2e6f00;
    }
    ctx->pc = 0x2E6EF8u;
    {
        const bool branch_taken_0x2e6ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6EF8u;
        // 0x2e6efc: 0xae120000  sw          $s2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6ef8) {
            ctx->pc = 0x2E729Cu;
            goto label_2e729c;
        }
    }
    ctx->pc = 0x2E6F00u;
label_2e6f00:
    // 0x2e6f00: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x2e6f00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e6f04:
    // 0x2e6f04: 0xc09a330  jal         func_268CC0
label_2e6f08:
    if (ctx->pc == 0x2E6F08u) {
        ctx->pc = 0x2E6F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F04u;
        // 0x2e6f08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F0Cu;
        goto label_2e6f0c;
    }
    ctx->pc = 0x2E6F04u;
    SET_GPR_U32(ctx, 31, 0x2E6F0Cu);
    ctx->pc = 0x2E6F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F04u;
    // 0x2e6f08: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x268CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x268CC0u, 0x2E6F04u, 0x2E6F0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F0Cu;
label_2e6f0c:
    // 0x2e6f0c: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2e6f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2e6f10:
    // 0x2e6f10: 0x26220044  addiu       $v0, $s1, 0x44
    ctx->pc = 0x2e6f10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
label_2e6f14:
    // 0x2e6f14: 0x2838018  mult        $s0, $s4, $v1
    ctx->pc = 0x2e6f14u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2e6f18:
    // 0x2e6f18: 0x509021  addu        $s2, $v0, $s0
    ctx->pc = 0x2e6f18u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_2e6f1c:
    // 0x2e6f1c: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x2e6f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2e6f20:
    // 0x2e6f20: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2e6f24:
    if (ctx->pc == 0x2E6F24u) {
        ctx->pc = 0x2E6F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F20u;
        // 0x2e6f24: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F28u;
        goto label_2e6f28;
    }
    ctx->pc = 0x2E6F20u;
    {
        const bool branch_taken_0x2e6f20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e6f20) {
            ctx->pc = 0x2E6F24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2E6F20u;
            // 0x2e6f24: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2E6F40u;
            goto label_2e6f40;
        }
    }
    ctx->pc = 0x2E6F28u;
label_2e6f28:
    // 0x2e6f28: 0xc098560  jal         func_261580
label_2e6f2c:
    if (ctx->pc == 0x2E6F2Cu) {
        ctx->pc = 0x2E6F30u;
        goto label_2e6f30;
    }
    ctx->pc = 0x2E6F28u;
    SET_GPR_U32(ctx, 31, 0x2E6F30u);
    ctx->pc = 0x261580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261580u, 0x2E6F28u, 0x2E6F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F30u;
label_2e6f30:
    // 0x2e6f30: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x2e6f30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
label_2e6f34:
    // 0x2e6f34: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2e6f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2e6f38:
    // 0x2e6f38: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x2e6f38u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
label_2e6f3c:
    // 0x2e6f3c: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x2e6f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
label_2e6f40:
    // 0x2e6f40: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2e6f40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2e6f44:
    // 0x2e6f44: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x2e6f44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
label_2e6f48:
    // 0x2e6f48: 0x3c02dfff  lui         $v0, 0xDFFF
    ctx->pc = 0x2e6f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57343 << 16));
label_2e6f4c:
    // 0x2e6f4c: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2e6f4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e6f50:
    // 0x2e6f50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2e6f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2e6f54:
    // 0x2e6f54: 0x2f08021  addu        $s0, $s7, $s0
    ctx->pc = 0x2e6f54u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
label_2e6f58:
    // 0x2e6f58: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2e6f58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e6f5c:
    // 0x2e6f5c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x2e6f5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_2e6f60:
    // 0x2e6f60: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2e6f60u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_2e6f64:
    // 0x2e6f64: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2e6f64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2e6f68:
    // 0x2e6f68: 0x14450003  bne         $v0, $a1, . + 4 + (0x3 << 2)
label_2e6f6c:
    if (ctx->pc == 0x2E6F6Cu) {
        ctx->pc = 0x2E6F70u;
        goto label_2e6f70;
    }
    ctx->pc = 0x2E6F68u;
    {
        const bool branch_taken_0x2e6f68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2e6f68) {
            ctx->pc = 0x2E6F78u;
            goto label_2e6f78;
        }
    }
    ctx->pc = 0x2E6F70u;
label_2e6f70:
    // 0x2e6f70: 0x100000ca  b           . + 4 + (0xCA << 2)
label_2e6f74:
    if (ctx->pc == 0x2E6F74u) {
        ctx->pc = 0x2E6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F70u;
        // 0x2e6f74: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F78u;
        goto label_2e6f78;
    }
    ctx->pc = 0x2E6F70u;
    {
        const bool branch_taken_0x2e6f70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F70u;
        // 0x2e6f74: 0xae000000  sw          $zero, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f70) {
            ctx->pc = 0x2E729Cu;
            goto label_2e729c;
        }
    }
    ctx->pc = 0x2E6F78u;
label_2e6f78:
    // 0x2e6f78: 0xc0ba15a  jal         func_2E8568
label_2e6f7c:
    if (ctx->pc == 0x2E6F7Cu) {
        ctx->pc = 0x2E6F80u;
        goto label_2e6f80;
    }
    ctx->pc = 0x2E6F78u;
    SET_GPR_U32(ctx, 31, 0x2E6F80u);
    ctx->pc = 0x2E8568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E8568u, 0x2E6F78u, 0x2E6F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F80u;
label_2e6f80:
    // 0x2e6f80: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2e6f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e6f84:
    // 0x2e6f84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e6f84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e6f88:
    // 0x2e6f88: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2e6f88u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2e6f8c:
    // 0x2e6f8c: 0xc0b990a  jal         func_2E6428
label_2e6f90:
    if (ctx->pc == 0x2E6F90u) {
        ctx->pc = 0x2E6F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F8Cu;
        // 0x2e6f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F94u;
        goto label_2e6f94;
    }
    ctx->pc = 0x2E6F8Cu;
    SET_GPR_U32(ctx, 31, 0x2E6F94u);
    ctx->pc = 0x2E6F90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6F8Cu;
    // 0x2e6f90: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6428u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6428u, 0x2E6F8Cu, 0x2E6F94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6F94u;
label_2e6f94:
    // 0x2e6f94: 0x144000c2  bnez        $v0, . + 4 + (0xC2 << 2)
label_2e6f98:
    if (ctx->pc == 0x2E6F98u) {
        ctx->pc = 0x2E6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F94u;
        // 0x2e6f98: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6F9Cu;
        goto label_2e6f9c;
    }
    ctx->pc = 0x2E6F94u;
    {
        const bool branch_taken_0x2e6f94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E6F98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6F94u;
        // 0x2e6f98: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6f94) {
            ctx->pc = 0x2E72A0u;
            goto label_2e72a0;
        }
    }
    ctx->pc = 0x2E6F9Cu;
label_2e6f9c:
    // 0x2e6f9c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e6f9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e6fa0:
    // 0x2e6fa0: 0xc099f30  jal         func_267CC0
label_2e6fa4:
    if (ctx->pc == 0x2E6FA4u) {
        ctx->pc = 0x2E6FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FA0u;
        // 0x2e6fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FA8u;
        goto label_2e6fa8;
    }
    ctx->pc = 0x2E6FA0u;
    SET_GPR_U32(ctx, 31, 0x2E6FA8u);
    ctx->pc = 0x2E6FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FA0u;
    // 0x2e6fa4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x267CC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x267CC0u, 0x2E6FA0u, 0x2E6FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FA8u;
label_2e6fa8:
    // 0x2e6fa8: 0x44100bd  bgez        $v0, . + 4 + (0xBD << 2)
label_2e6fac:
    if (ctx->pc == 0x2E6FACu) {
        ctx->pc = 0x2E6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FA8u;
        // 0x2e6fac: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FB0u;
        goto label_2e6fb0;
    }
    ctx->pc = 0x2E6FA8u;
    {
        const bool branch_taken_0x2e6fa8 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E6FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FA8u;
        // 0x2e6fac: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fa8) {
            ctx->pc = 0x2E72A0u;
            goto label_2e72a0;
        }
    }
    ctx->pc = 0x2E6FB0u;
label_2e6fb0:
    // 0x2e6fb0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e6fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e6fb4:
    // 0x2e6fb4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e6fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e6fb8:
    // 0x2e6fb8: 0xc08b5ac  jal         func_22D6B0
label_2e6fbc:
    if (ctx->pc == 0x2E6FBCu) {
        ctx->pc = 0x2E6FBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FB8u;
        // 0x2e6fbc: 0x24a5f810  addiu       $a1, $a1, -0x7F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965264));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FC0u;
        goto label_2e6fc0;
    }
    ctx->pc = 0x2E6FB8u;
    SET_GPR_U32(ctx, 31, 0x2E6FC0u);
    ctx->pc = 0x2E6FBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E6FB8u;
    // 0x2e6fbc: 0x24a5f810  addiu       $a1, $a1, -0x7F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965264));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E6FB8u, 0x2E6FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E6FC0u;
label_2e6fc0:
    // 0x2e6fc0: 0x100000b7  b           . + 4 + (0xB7 << 2)
label_2e6fc4:
    if (ctx->pc == 0x2E6FC4u) {
        ctx->pc = 0x2E6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FC0u;
        // 0x2e6fc4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FC8u;
        goto label_2e6fc8;
    }
    ctx->pc = 0x2E6FC0u;
    {
        const bool branch_taken_0x2e6fc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FC0u;
        // 0x2e6fc4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fc0) {
            ctx->pc = 0x2E72A0u;
            goto label_2e72a0;
        }
    }
    ctx->pc = 0x2E6FC8u;
label_2e6fc8:
    // 0x2e6fc8: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x2e6fc8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2e6fcc:
    // 0x2e6fcc: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2e6fccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_2e6fd0:
    // 0x2e6fd0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e6fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2e6fd4:
    // 0x2e6fd4: 0x2c430006  sltiu       $v1, $v0, 0x6
    ctx->pc = 0x2e6fd4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2e6fd8:
    // 0x2e6fd8: 0x106000b0  beqz        $v1, . + 4 + (0xB0 << 2)
label_2e6fdc:
    if (ctx->pc == 0x2E6FDCu) {
        ctx->pc = 0x2E6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FD8u;
        // 0x2e6fdc: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E6FE0u;
        goto label_2e6fe0;
    }
    ctx->pc = 0x2E6FD8u;
    {
        const bool branch_taken_0x2e6fd8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E6FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E6FD8u;
        // 0x2e6fdc: 0xafa20120  sw          $v0, 0x120($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e6fd8) {
            ctx->pc = 0x2E729Cu;
            goto label_2e729c;
        }
    }
    ctx->pc = 0x2E6FE0u;
label_2e6fe0:
    // 0x2e6fe0: 0x8fa40120  lw          $a0, 0x120($sp)
    ctx->pc = 0x2e6fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
label_2e6fe4:
    // 0x2e6fe4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2e6fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2e6fe8:
    // 0x2e6fe8: 0x2442f960  addiu       $v0, $v0, -0x6A0
    ctx->pc = 0x2e6fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965600));
label_2e6fec:
    // 0x2e6fec: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x2e6fecu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_2e6ff0:
    // 0x2e6ff0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e6ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e6ff4:
    // 0x2e6ff4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e6ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e6ff8:
    // 0x2e6ff8: 0x800008  jr          $a0
label_2e6ffc:
    if (ctx->pc == 0x2E6FFCu) {
        ctx->pc = 0x2E7000u;
        goto label_2e7000;
    }
    ctx->pc = 0x2E6FF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E6FF8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E7000u;
label_2e7000:
    // 0x2e7000: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2e7000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7004:
    // 0x2e7004: 0x166200a6  bne         $s3, $v0, . + 4 + (0xA6 << 2)
label_2e7008:
    if (ctx->pc == 0x2E7008u) {
        ctx->pc = 0x2E7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7004u;
        // 0x2e7008: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E700Cu;
        goto label_2e700c;
    }
    ctx->pc = 0x2E7004u;
    {
        const bool branch_taken_0x2e7004 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7004u;
        // 0x2e7008: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7004) {
            ctx->pc = 0x2E72A0u;
            goto label_2e72a0;
        }
    }
    ctx->pc = 0x2E700Cu;
label_2e700c:
    // 0x2e700c: 0x24100028  addiu       $s0, $zero, 0x28
    ctx->pc = 0x2e700cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2e7010:
    // 0x2e7010: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e7010u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e7014:
    // 0x2e7014: 0x2902018  mult        $a0, $s4, $s0
    ctx->pc = 0x2e7014u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2e7018:
    // 0x2e7018: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x2e7018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_2e701c:
    // 0x2e701c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x2e701cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7020:
    // 0x2e7020: 0x272200b  movn        $a0, $s3, $s2
    ctx->pc = 0x2e7020u;
    if (GPR_U64(ctx, 18) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 19));
label_2e7024:
    // 0x2e7024: 0x14800011  bnez        $a0, . + 4 + (0x11 << 2)
label_2e7028:
    if (ctx->pc == 0x2E7028u) {
        ctx->pc = 0x2E7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7024u;
        // 0x2e7028: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E702Cu;
        goto label_2e702c;
    }
    ctx->pc = 0x2E7024u;
    {
        const bool branch_taken_0x2e7024 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E7028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7024u;
        // 0x2e7028: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7024) {
            ctx->pc = 0x2E706Cu;
            goto label_2e706c;
        }
    }
    ctx->pc = 0x2E702Cu;
label_2e702c:
    // 0x2e702c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e702cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e7030:
    // 0x2e7030: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e7030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7034:
    // 0x2e7034: 0x24a5f848  addiu       $a1, $a1, -0x7B8
    ctx->pc = 0x2e7034u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965320));
label_2e7038:
    // 0x2e7038: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e7038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e703c:
    // 0x2e703c: 0xc08b5ac  jal         func_22D6B0
label_2e7040:
    if (ctx->pc == 0x2E7040u) {
        ctx->pc = 0x2E7040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E703Cu;
        // 0x2e7040: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7044u;
        goto label_2e7044;
    }
    ctx->pc = 0x2E703Cu;
    SET_GPR_U32(ctx, 31, 0x2E7044u);
    ctx->pc = 0x2E7040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E703Cu;
    // 0x2e7040: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E703Cu, 0x2E7044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7044u;
label_2e7044:
    // 0x2e7044: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7044u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e7048:
    // 0x2e7048: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e7048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e704c:
    // 0x2e704c: 0xc08b5ac  jal         func_22D6B0
label_2e7050:
    if (ctx->pc == 0x2E7050u) {
        ctx->pc = 0x2E7050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E704Cu;
        // 0x2e7050: 0x24a5f868  addiu       $a1, $a1, -0x798 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7054u;
        goto label_2e7054;
    }
    ctx->pc = 0x2E704Cu;
    SET_GPR_U32(ctx, 31, 0x2E7054u);
    ctx->pc = 0x2E7050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E704Cu;
    // 0x2e7050: 0x24a5f868  addiu       $a1, $a1, -0x798 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E704Cu, 0x2E7054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7054u;
label_2e7054:
    // 0x2e7054: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e7054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e7058:
    // 0x2e7058: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e7058u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e705c:
    // 0x2e705c: 0xc0b9a58  jal         func_2E6960
label_2e7060:
    if (ctx->pc == 0x2E7060u) {
        ctx->pc = 0x2E7060u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E705Cu;
        // 0x2e7060: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7064u;
        goto label_2e7064;
    }
    ctx->pc = 0x2E705Cu;
    SET_GPR_U32(ctx, 31, 0x2E7064u);
    ctx->pc = 0x2E7060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E705Cu;
    // 0x2e7060: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6960u, 0x2E705Cu, 0x2E7064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7064u;
label_2e7064:
    // 0x2e7064: 0x1000008e  b           . + 4 + (0x8E << 2)
label_2e7068:
    if (ctx->pc == 0x2E7068u) {
        ctx->pc = 0x2E7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7064u;
        // 0x2e7068: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E706Cu;
        goto label_2e706c;
    }
    ctx->pc = 0x2E7064u;
    {
        const bool branch_taken_0x2e7064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7064u;
        // 0x2e7068: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7064) {
            ctx->pc = 0x2E72A0u;
            goto label_2e72a0;
        }
    }
    ctx->pc = 0x2E706Cu;
label_2e706c:
    // 0x2e706c: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e706cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e7070:
    // 0x2e7070: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e7070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7074:
    // 0x2e7074: 0x24a5f848  addiu       $a1, $a1, -0x7B8
    ctx->pc = 0x2e7074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965320));
label_2e7078:
    // 0x2e7078: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2e7078u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e707c:
    // 0x2e707c: 0xc08b5ac  jal         func_22D6B0
label_2e7080:
    if (ctx->pc == 0x2E7080u) {
        ctx->pc = 0x2E7080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E707Cu;
        // 0x2e7080: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7084u;
        goto label_2e7084;
    }
    ctx->pc = 0x2E707Cu;
    SET_GPR_U32(ctx, 31, 0x2E7084u);
    ctx->pc = 0x2E7080u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E707Cu;
    // 0x2e7080: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E707Cu, 0x2E7084u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7084u;
label_2e7084:
    // 0x2e7084: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7084u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e7088:
    // 0x2e7088: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x2e7088u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_2e708c:
    // 0x2e708c: 0x24a5f898  addiu       $a1, $a1, -0x768
    ctx->pc = 0x2e708cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965400));
label_2e7090:
    // 0x2e7090: 0xc08b5ac  jal         func_22D6B0
label_2e7094:
    if (ctx->pc == 0x2E7094u) {
        ctx->pc = 0x2E7094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7090u;
        // 0x2e7094: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7098u;
        goto label_2e7098;
    }
    ctx->pc = 0x2E7090u;
    SET_GPR_U32(ctx, 31, 0x2E7098u);
    ctx->pc = 0x2E7094u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7090u;
    // 0x2e7094: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E7090u, 0x2E7098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7098u;
label_2e7098:
    // 0x2e7098: 0xc0b995c  jal         func_2E6570
label_2e709c:
    if (ctx->pc == 0x2E709Cu) {
        ctx->pc = 0x2E709Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7098u;
        // 0x2e709c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70A0u;
        goto label_2e70a0;
    }
    ctx->pc = 0x2E7098u;
    SET_GPR_U32(ctx, 31, 0x2E70A0u);
    ctx->pc = 0x2E709Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7098u;
    // 0x2e709c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6570u, 0x2E7098u, 0x2E70A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70A0u;
label_2e70a0:
    // 0x2e70a0: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_2e70a4:
    if (ctx->pc == 0x2E70A4u) {
        ctx->pc = 0x2E70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70A0u;
        // 0x2e70a4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70A8u;
        goto label_2e70a8;
    }
    ctx->pc = 0x2E70A0u;
    {
        const bool branch_taken_0x2e70a0 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E70A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70A0u;
        // 0x2e70a4: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70a0) {
            ctx->pc = 0x2E70BCu;
            goto label_2e70bc;
        }
    }
    ctx->pc = 0x2E70A8u;
label_2e70a8:
    // 0x2e70a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e70ac:
    // 0x2e70ac: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e70acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e70b0:
    // 0x2e70b0: 0xc08b5ac  jal         func_22D6B0
label_2e70b4:
    if (ctx->pc == 0x2E70B4u) {
        ctx->pc = 0x2E70B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70B0u;
        // 0x2e70b4: 0x24a5f8b0  addiu       $a1, $a1, -0x750 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70B8u;
        goto label_2e70b8;
    }
    ctx->pc = 0x2E70B0u;
    SET_GPR_U32(ctx, 31, 0x2E70B8u);
    ctx->pc = 0x2E70B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E70B0u;
    // 0x2e70b4: 0x24a5f8b0  addiu       $a1, $a1, -0x750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E70B0u, 0x2E70B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70B8u;
label_2e70b8:
    // 0x2e70b8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2e70bc:
    // 0x2e70bc: 0x8c43ea34  lw          $v1, -0x15CC($v0)
    ctx->pc = 0x2e70bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961716)));
label_2e70c0:
    // 0x2e70c0: 0x1460001b  bnez        $v1, . + 4 + (0x1B << 2)
label_2e70c4:
    if (ctx->pc == 0x2E70C4u) {
        ctx->pc = 0x2E70C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70C0u;
        // 0x2e70c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70C8u;
        goto label_2e70c8;
    }
    ctx->pc = 0x2E70C0u;
    {
        const bool branch_taken_0x2e70c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2E70C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70C0u;
        // 0x2e70c4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70c0) {
            ctx->pc = 0x2E7130u;
            goto label_2e7130;
        }
    }
    ctx->pc = 0x2E70C8u;
label_2e70c8:
    // 0x2e70c8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e70c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e70cc:
    // 0x2e70cc: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e70ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e70d0:
    // 0x2e70d0: 0x27a60114  addiu       $a2, $sp, 0x114
    ctx->pc = 0x2e70d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
label_2e70d4:
    // 0x2e70d4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e70d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e70d8:
    // 0x2e70d8: 0xc0b99fc  jal         func_2E67F0
label_2e70dc:
    if (ctx->pc == 0x2E70DCu) {
        ctx->pc = 0x2E70DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70D8u;
        // 0x2e70dc: 0x27a80118  addiu       $t0, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70E0u;
        goto label_2e70e0;
    }
    ctx->pc = 0x2E70D8u;
    SET_GPR_U32(ctx, 31, 0x2E70E0u);
    ctx->pc = 0x2E70DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E70D8u;
    // 0x2e70dc: 0x27a80118  addiu       $t0, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E67F0u, 0x2E70D8u, 0x2E70E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70E0u;
label_2e70e0:
    // 0x2e70e0: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
label_2e70e4:
    if (ctx->pc == 0x2E70E4u) {
        ctx->pc = 0x2E70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70E0u;
        // 0x2e70e4: 0x8fa50114  lw          $a1, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E70E8u;
        goto label_2e70e8;
    }
    ctx->pc = 0x2E70E0u;
    {
        const bool branch_taken_0x2e70e0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2E70E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E70E0u;
        // 0x2e70e4: 0x8fa50114  lw          $a1, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e70e0) {
            ctx->pc = 0x2E712Cu;
            goto label_2e712c;
        }
    }
    ctx->pc = 0x2E70E8u;
label_2e70e8:
    // 0x2e70e8: 0x26270034  addiu       $a3, $s1, 0x34
    ctx->pc = 0x2e70e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
label_2e70ec:
    // 0x2e70ec: 0x3c090400  lui         $t1, 0x400
    ctx->pc = 0x2e70ecu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)1024 << 16));
label_2e70f0:
    // 0x2e70f0: 0x8fa20124  lw          $v0, 0x124($sp)
    ctx->pc = 0x2e70f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 292)));
label_2e70f4:
    // 0x2e70f4: 0xb03018  mult        $a2, $a1, $s0
    ctx->pc = 0x2e70f4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 16); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_2e70f8:
    // 0x2e70f8: 0x26280030  addiu       $t0, $s1, 0x30
    ctx->pc = 0x2e70f8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2e70fc:
    // 0x2e70fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e70fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7100:
    // 0x2e7100: 0xe63821  addu        $a3, $a3, $a2
    ctx->pc = 0x2e7100u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 6)));
label_2e7104:
    // 0x2e7104: 0x1064021  addu        $t0, $t0, $a2
    ctx->pc = 0x2e7104u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 6)));
label_2e7108:
    // 0x2e7108: 0x8ce30000  lw          $v1, 0x0($a3)
    ctx->pc = 0x2e7108u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2e710c:
    // 0x2e710c: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x2e710cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
label_2e7110:
    // 0x2e7110: 0x691825  or          $v1, $v1, $t1
    ctx->pc = 0x2e7110u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 9));
label_2e7114:
    // 0x2e7114: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x2e7114u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_2e7118:
    // 0x2e7118: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x2e7118u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
label_2e711c:
    // 0x2e711c: 0x491025  or          $v0, $v0, $t1
    ctx->pc = 0x2e711cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 9));
label_2e7120:
    // 0x2e7120: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2e7120u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_2e7124:
    // 0x2e7124: 0xc0b9ab0  jal         func_2E6AC0
label_2e7128:
    if (ctx->pc == 0x2E7128u) {
        ctx->pc = 0x2E7128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7124u;
        // 0x2e7128: 0xacd30000  sw          $s3, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E712Cu;
        goto label_2e712c;
    }
    ctx->pc = 0x2E7124u;
    SET_GPR_U32(ctx, 31, 0x2E712Cu);
    ctx->pc = 0x2E7128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7124u;
    // 0x2e7128: 0xacd30000  sw          $s3, 0x0($a2) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 19));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6AC0u, 0x2E7124u, 0x2E712Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E712Cu;
label_2e712c:
    // 0x2e712c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x2e712cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2e7130:
    // 0x2e7130: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e7130u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e7134:
    // 0x2e7134: 0xc0b9a58  jal         func_2E6960
label_2e7138:
    if (ctx->pc == 0x2E7138u) {
        ctx->pc = 0x2E7138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7134u;
        // 0x2e7138: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E713Cu;
        goto label_2e713c;
    }
    ctx->pc = 0x2E7134u;
    SET_GPR_U32(ctx, 31, 0x2E713Cu);
    ctx->pc = 0x2E7138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7134u;
    // 0x2e7138: 0x24060006  addiu       $a2, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6960u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6960u, 0x2E7134u, 0x2E713Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E713Cu;
label_2e713c:
    // 0x2e713c: 0x10000058  b           . + 4 + (0x58 << 2)
label_2e7140:
    if (ctx->pc == 0x2E7140u) {
        ctx->pc = 0x2E7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E713Cu;
        // 0x2e7140: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7144u;
        goto label_2e7144;
    }
    ctx->pc = 0x2E713Cu;
    {
        const bool branch_taken_0x2e713c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E713Cu;
        // 0x2e7140: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e713c) {
            ctx->pc = 0x2E72A0u;
            goto label_2e72a0;
        }
    }
    ctx->pc = 0x2E7144u;
label_2e7144:
    // 0x2e7144: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2e7144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2e7148:
    // 0x2e7148: 0x12620019  beq         $s3, $v0, . + 4 + (0x19 << 2)
label_2e714c:
    if (ctx->pc == 0x2E714Cu) {
        ctx->pc = 0x2E714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7148u;
        // 0x2e714c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7150u;
        goto label_2e7150;
    }
    ctx->pc = 0x2E7148u;
    {
        const bool branch_taken_0x2e7148 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2E714Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7148u;
        // 0x2e714c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7148) {
            ctx->pc = 0x2E71B0u;
            goto label_2e71b0;
        }
    }
    ctx->pc = 0x2E7150u;
label_2e7150:
    // 0x2e7150: 0xc0b9aba  jal         func_2E6AE8
label_2e7154:
    if (ctx->pc == 0x2E7154u) {
        ctx->pc = 0x2E7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7150u;
        // 0x2e7154: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7158u;
        goto label_2e7158;
    }
    ctx->pc = 0x2E7150u;
    SET_GPR_U32(ctx, 31, 0x2E7158u);
    ctx->pc = 0x2E7154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7150u;
    // 0x2e7154: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6AE8u, 0x2E7150u, 0x2E7158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7158u;
label_2e7158:
    // 0x2e7158: 0x24030028  addiu       $v1, $zero, 0x28
    ctx->pc = 0x2e7158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2e715c:
    // 0x2e715c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2e715cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e7160:
    // 0x2e7160: 0x2832018  mult        $a0, $s4, $v1
    ctx->pc = 0x2e7160u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2e7164:
    // 0x2e7164: 0x971821  addu        $v1, $a0, $s7
    ctx->pc = 0x2e7164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_2e7168:
    // 0x2e7168: 0x1000004c  b           . + 4 + (0x4C << 2)
label_2e716c:
    if (ctx->pc == 0x2E716Cu) {
        ctx->pc = 0x2E716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7168u;
        // 0x2e716c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7170u;
        goto label_2e7170;
    }
    ctx->pc = 0x2E7168u;
    {
        const bool branch_taken_0x2e7168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E716Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7168u;
        // 0x2e716c: 0xac620000  sw          $v0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7168) {
            ctx->pc = 0x2E729Cu;
            goto label_2e729c;
        }
    }
    ctx->pc = 0x2E7170u;
label_2e7170:
    // 0x2e7170: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x2e7170u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2e7174:
    // 0x2e7174: 0x16620006  bne         $s3, $v0, . + 4 + (0x6 << 2)
label_2e7178:
    if (ctx->pc == 0x2E7178u) {
        ctx->pc = 0x2E7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7174u;
        // 0x2e7178: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E717Cu;
        goto label_2e717c;
    }
    ctx->pc = 0x2E7174u;
    {
        const bool branch_taken_0x2e7174 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7178u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7174u;
        // 0x2e7178: 0x24020005  addiu       $v0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7174) {
            ctx->pc = 0x2E7190u;
            goto label_2e7190;
        }
    }
    ctx->pc = 0x2E717Cu;
label_2e717c:
    // 0x2e717c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e717cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7180:
    // 0x2e7180: 0xc0b9aba  jal         func_2E6AE8
label_2e7184:
    if (ctx->pc == 0x2E7184u) {
        ctx->pc = 0x2E7184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7180u;
        // 0x2e7184: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7188u;
        goto label_2e7188;
    }
    ctx->pc = 0x2E7180u;
    SET_GPR_U32(ctx, 31, 0x2E7188u);
    ctx->pc = 0x2E7184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7180u;
    // 0x2e7184: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6AE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6AE8u, 0x2E7180u, 0x2E7188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7188u;
label_2e7188:
    // 0x2e7188: 0x10000045  b           . + 4 + (0x45 << 2)
label_2e718c:
    if (ctx->pc == 0x2E718Cu) {
        ctx->pc = 0x2E718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7188u;
        // 0x2e718c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7190u;
        goto label_2e7190;
    }
    ctx->pc = 0x2E7188u;
    {
        const bool branch_taken_0x2e7188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7188u;
        // 0x2e718c: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7188) {
            ctx->pc = 0x2E72A0u;
            goto label_2e72a0;
        }
    }
    ctx->pc = 0x2E7190u;
label_2e7190:
    // 0x2e7190: 0x16620043  bne         $s3, $v0, . + 4 + (0x43 << 2)
label_2e7194:
    if (ctx->pc == 0x2E7194u) {
        ctx->pc = 0x2E7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7190u;
        // 0x2e7194: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7198u;
        goto label_2e7198;
    }
    ctx->pc = 0x2E7190u;
    {
        const bool branch_taken_0x2e7190 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E7194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7190u;
        // 0x2e7194: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7190) {
            ctx->pc = 0x2E72A0u;
            goto label_2e72a0;
        }
    }
    ctx->pc = 0x2E7198u;
label_2e7198:
    // 0x2e7198: 0x8e230028  lw          $v1, 0x28($s1)
    ctx->pc = 0x2e7198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 40)));
label_2e719c:
    // 0x2e719c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2e71a0:
    if (ctx->pc == 0x2E71A0u) {
        ctx->pc = 0x2E71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E719Cu;
        // 0x2e71a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71A4u;
        goto label_2e71a4;
    }
    ctx->pc = 0x2E719Cu;
    {
        const bool branch_taken_0x2e719c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E71A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E719Cu;
        // 0x2e71a0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e719c) {
            ctx->pc = 0x2E71ACu;
            goto label_2e71ac;
        }
    }
    ctx->pc = 0x2E71A4u;
label_2e71a4:
    // 0x2e71a4: 0x10000002  b           . + 4 + (0x2 << 2)
label_2e71a8:
    if (ctx->pc == 0x2E71A8u) {
        ctx->pc = 0x2E71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71A4u;
        // 0x2e71a8: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71ACu;
        goto label_2e71ac;
    }
    ctx->pc = 0x2E71A4u;
    {
        const bool branch_taken_0x2e71a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E71A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71A4u;
        // 0x2e71a8: 0xac620058  sw          $v0, 0x58($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71a4) {
            ctx->pc = 0x2E71B0u;
            goto label_2e71b0;
        }
    }
    ctx->pc = 0x2E71ACu;
label_2e71ac:
    // 0x2e71ac: 0xae220058  sw          $v0, 0x58($s1)
    ctx->pc = 0x2e71acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 2));
label_2e71b0:
    // 0x2e71b0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2e71b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2e71b4:
    // 0x2e71b4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x2e71b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2e71b8:
    // 0x2e71b8: 0x2821018  mult        $v0, $s4, $v0
    ctx->pc = 0x2e71b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2e71bc:
    // 0x2e71bc: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2e71bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2e71c0:
    // 0x2e71c0: 0x3c03fbff  lui         $v1, 0xFBFF
    ctx->pc = 0x2e71c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64511 << 16));
label_2e71c4:
    // 0x2e71c4: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x2e71c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
label_2e71c8:
    // 0x2e71c8: 0x2e22821  addu        $a1, $s7, $v0
    ctx->pc = 0x2e71c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
label_2e71cc:
    // 0x2e71cc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x2e71ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
label_2e71d0:
    // 0x2e71d0: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2e71d0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2e71d4:
    // 0x2e71d4: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e71d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e71d8:
    // 0x2e71d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2e71d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_2e71dc:
    // 0x2e71dc: 0x1000002f  b           . + 4 + (0x2F << 2)
label_2e71e0:
    if (ctx->pc == 0x2E71E0u) {
        ctx->pc = 0x2E71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71DCu;
        // 0x2e71e0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71E4u;
        goto label_2e71e4;
    }
    ctx->pc = 0x2E71DCu;
    {
        const bool branch_taken_0x2e71dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E71E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71DCu;
        // 0x2e71e0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71dc) {
            ctx->pc = 0x2E729Cu;
            goto label_2e729c;
        }
    }
    ctx->pc = 0x2E71E4u;
label_2e71e4:
    // 0x2e71e4: 0x1240002d  beqz        $s2, . + 4 + (0x2D << 2)
label_2e71e8:
    if (ctx->pc == 0x2E71E8u) {
        ctx->pc = 0x2E71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71E4u;
        // 0x2e71e8: 0x2412000d  addiu       $s2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71ECu;
        goto label_2e71ec;
    }
    ctx->pc = 0x2E71E4u;
    {
        const bool branch_taken_0x2e71e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E71E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71E4u;
        // 0x2e71e8: 0x2412000d  addiu       $s2, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71e4) {
            ctx->pc = 0x2E729Cu;
            goto label_2e729c;
        }
    }
    ctx->pc = 0x2E71ECu;
label_2e71ec:
    // 0x2e71ec: 0x12720003  beq         $s3, $s2, . + 4 + (0x3 << 2)
label_2e71f0:
    if (ctx->pc == 0x2E71F0u) {
        ctx->pc = 0x2E71F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71ECu;
        // 0x2e71f0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71F4u;
        goto label_2e71f4;
    }
    ctx->pc = 0x2E71ECu;
    {
        const bool branch_taken_0x2e71ec = (GPR_U64(ctx, 19) == GPR_U64(ctx, 18));
        ctx->pc = 0x2E71F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71ECu;
        // 0x2e71f0: 0x2402000f  addiu       $v0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71ec) {
            ctx->pc = 0x2E71FCu;
            goto label_2e71fc;
        }
    }
    ctx->pc = 0x2E71F4u;
label_2e71f4:
    // 0x2e71f4: 0x1662002a  bne         $s3, $v0, . + 4 + (0x2A << 2)
label_2e71f8:
    if (ctx->pc == 0x2E71F8u) {
        ctx->pc = 0x2E71F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71F4u;
        // 0x2e71f8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E71FCu;
        goto label_2e71fc;
    }
    ctx->pc = 0x2E71F4u;
    {
        const bool branch_taken_0x2e71f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2E71F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E71F4u;
        // 0x2e71f8: 0x3c02003c  lui         $v0, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e71f4) {
            ctx->pc = 0x2E72A0u;
            goto label_2e72a0;
        }
    }
    ctx->pc = 0x2E71FCu;
label_2e71fc:
    // 0x2e71fc: 0x2410000f  addiu       $s0, $zero, 0xF
    ctx->pc = 0x2e71fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2e7200:
    // 0x2e7200: 0x16700008  bne         $s3, $s0, . + 4 + (0x8 << 2)
label_2e7204:
    if (ctx->pc == 0x2E7204u) {
        ctx->pc = 0x2E7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7200u;
        // 0x2e7204: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7208u;
        goto label_2e7208;
    }
    ctx->pc = 0x2E7200u;
    {
        const bool branch_taken_0x2e7200 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E7204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7200u;
        // 0x2e7204: 0x24030028  addiu       $v1, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7200) {
            ctx->pc = 0x2E7224u;
            goto label_2e7224;
        }
    }
    ctx->pc = 0x2E7208u;
label_2e7208:
    // 0x2e7208: 0x26240030  addiu       $a0, $s1, 0x30
    ctx->pc = 0x2e7208u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
label_2e720c:
    // 0x2e720c: 0x2831818  mult        $v1, $s4, $v1
    ctx->pc = 0x2e720cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2e7210:
    // 0x2e7210: 0x3c050400  lui         $a1, 0x400
    ctx->pc = 0x2e7210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1024 << 16));
label_2e7214:
    // 0x2e7214: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2e7214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
label_2e7218:
    // 0x2e7218: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x2e7218u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2e721c:
    // 0x2e721c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2e721cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2e7220:
    // 0x2e7220: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2e7220u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2e7224:
    // 0x2e7224: 0xc0b995c  jal         func_2E6570
label_2e7228:
    if (ctx->pc == 0x2E7228u) {
        ctx->pc = 0x2E7228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7224u;
        // 0x2e7228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E722Cu;
        goto label_2e722c;
    }
    ctx->pc = 0x2E7224u;
    SET_GPR_U32(ctx, 31, 0x2E722Cu);
    ctx->pc = 0x2E7228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7224u;
    // 0x2e7228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6570u, 0x2E7224u, 0x2E722Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E722Cu;
label_2e722c:
    // 0x2e722c: 0x4410006  bgez        $v0, . + 4 + (0x6 << 2)
label_2e7230:
    if (ctx->pc == 0x2E7230u) {
        ctx->pc = 0x2E7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E722Cu;
        // 0x2e7230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7234u;
        goto label_2e7234;
    }
    ctx->pc = 0x2E722Cu;
    {
        const bool branch_taken_0x2e722c = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x2E7230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E722Cu;
        // 0x2e7230: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e722c) {
            ctx->pc = 0x2E7248u;
            goto label_2e7248;
        }
    }
    ctx->pc = 0x2E7234u;
label_2e7234:
    // 0x2e7234: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7234u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e7238:
    // 0x2e7238: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2e7238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2e723c:
    // 0x2e723c: 0xc08b5ac  jal         func_22D6B0
label_2e7240:
    if (ctx->pc == 0x2E7240u) {
        ctx->pc = 0x2E7240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E723Cu;
        // 0x2e7240: 0x24a5f8b0  addiu       $a1, $a1, -0x750 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7244u;
        goto label_2e7244;
    }
    ctx->pc = 0x2E723Cu;
    SET_GPR_U32(ctx, 31, 0x2E7244u);
    ctx->pc = 0x2E7240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E723Cu;
    // 0x2e7240: 0x24a5f8b0  addiu       $a1, $a1, -0x750 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E723Cu, 0x2E7244u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7244u;
label_2e7244:
    // 0x2e7244: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2e7244u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2e7248:
    // 0x2e7248: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2e7248u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2e724c:
    // 0x2e724c: 0x27a6011c  addiu       $a2, $sp, 0x11C
    ctx->pc = 0x2e724cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
label_2e7250:
    // 0x2e7250: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2e7250u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2e7254:
    // 0x2e7254: 0xc0b99fc  jal         func_2E67F0
label_2e7258:
    if (ctx->pc == 0x2E7258u) {
        ctx->pc = 0x2E7258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7254u;
        // 0x2e7258: 0x27a80118  addiu       $t0, $sp, 0x118 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E725Cu;
        goto label_2e725c;
    }
    ctx->pc = 0x2E7254u;
    SET_GPR_U32(ctx, 31, 0x2E725Cu);
    ctx->pc = 0x2E7258u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7254u;
    // 0x2e7258: 0x27a80118  addiu       $t0, $sp, 0x118 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E67F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E67F0u, 0x2E7254u, 0x2E725Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E725Cu;
label_2e725c:
    // 0x2e725c: 0x1040006a  beqz        $v0, . + 4 + (0x6A << 2)
label_2e7260:
    if (ctx->pc == 0x2E7260u) {
        ctx->pc = 0x2E7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E725Cu;
        // 0x2e7260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7264u;
        goto label_2e7264;
    }
    ctx->pc = 0x2E725Cu;
    {
        const bool branch_taken_0x2e725c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E725Cu;
        // 0x2e7260: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e725c) {
            ctx->pc = 0x2E7408u;
            goto label_2e7408;
        }
    }
    ctx->pc = 0x2E7264u;
label_2e7264:
    // 0x2e7264: 0x16720004  bne         $s3, $s2, . + 4 + (0x4 << 2)
label_2e7268:
    if (ctx->pc == 0x2E7268u) {
        ctx->pc = 0x2E7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7264u;
        // 0x2e7268: 0x8fa5011c  lw          $a1, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E726Cu;
        goto label_2e726c;
    }
    ctx->pc = 0x2E7264u;
    {
        const bool branch_taken_0x2e7264 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x2E7268u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7264u;
        // 0x2e7268: 0x8fa5011c  lw          $a1, 0x11C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7264) {
            ctx->pc = 0x2E7278u;
            goto label_2e7278;
        }
    }
    ctx->pc = 0x2E726Cu;
label_2e726c:
    // 0x2e726c: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2e726cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2e7270:
    // 0x2e7270: 0x10000005  b           . + 4 + (0x5 << 2)
label_2e7274:
    if (ctx->pc == 0x2E7274u) {
        ctx->pc = 0x2E7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7270u;
        // 0x2e7274: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7278u;
        goto label_2e7278;
    }
    ctx->pc = 0x2E7270u;
    {
        const bool branch_taken_0x2e7270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7270u;
        // 0x2e7274: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7270) {
            ctx->pc = 0x2E7288u;
            goto label_2e7288;
        }
    }
    ctx->pc = 0x2E7278u;
label_2e7278:
    // 0x2e7278: 0x16700006  bne         $s3, $s0, . + 4 + (0x6 << 2)
label_2e727c:
    if (ctx->pc == 0x2E727Cu) {
        ctx->pc = 0x2E727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7278u;
        // 0x2e727c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7280u;
        goto label_2e7280;
    }
    ctx->pc = 0x2E7278u;
    {
        const bool branch_taken_0x2e7278 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 16));
        ctx->pc = 0x2E727Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7278u;
        // 0x2e727c: 0x24020028  addiu       $v0, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7278) {
            ctx->pc = 0x2E7294u;
            goto label_2e7294;
        }
    }
    ctx->pc = 0x2E7280u;
label_2e7280:
    // 0x2e7280: 0x8fa5011c  lw          $a1, 0x11C($sp)
    ctx->pc = 0x2e7280u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 284)));
label_2e7284:
    // 0x2e7284: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2e7284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2e7288:
    // 0x2e7288: 0xa22018  mult        $a0, $a1, $v0
    ctx->pc = 0x2e7288u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2e728c:
    // 0x2e728c: 0x971021  addu        $v0, $a0, $s7
    ctx->pc = 0x2e728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 23)));
label_2e7290:
    // 0x2e7290: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2e7290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2e7294:
    // 0x2e7294: 0xc0b9ab0  jal         func_2E6AC0
label_2e7298:
    if (ctx->pc == 0x2E7298u) {
        ctx->pc = 0x2E7298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7294u;
        // 0x2e7298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E729Cu;
        goto label_2e729c;
    }
    ctx->pc = 0x2E7294u;
    SET_GPR_U32(ctx, 31, 0x2E729Cu);
    ctx->pc = 0x2E7298u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7294u;
    // 0x2e7298: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6AC0u, 0x2E7294u, 0x2E729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E729Cu;
label_2e729c:
    // 0x2e729c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2e729cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2e72a0:
    // 0x2e72a0: 0x8c43ea30  lw          $v1, -0x15D0($v0)
    ctx->pc = 0x2e72a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961712)));
label_2e72a4:
    // 0x2e72a4: 0x10600057  beqz        $v1, . + 4 + (0x57 << 2)
label_2e72a8:
    if (ctx->pc == 0x2E72A8u) {
        ctx->pc = 0x2E72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72A4u;
        // 0x2e72a8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72ACu;
        goto label_2e72ac;
    }
    ctx->pc = 0x2E72A4u;
    {
        const bool branch_taken_0x2e72a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E72A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72A4u;
        // 0x2e72a8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72a4) {
            ctx->pc = 0x2E7404u;
            goto label_2e7404;
        }
    }
    ctx->pc = 0x2E72ACu;
label_2e72ac:
    // 0x2e72ac: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e72acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e72b0:
    // 0x2e72b0: 0x24a5f8e8  addiu       $a1, $a1, -0x718
    ctx->pc = 0x2e72b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965480));
label_2e72b4:
    // 0x2e72b4: 0x3c0382d  daddu       $a3, $fp, $zero
    ctx->pc = 0x2e72b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2e72b8:
    // 0x2e72b8: 0xc08b5ac  jal         func_22D6B0
label_2e72bc:
    if (ctx->pc == 0x2E72BCu) {
        ctx->pc = 0x2E72BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72B8u;
        // 0x2e72bc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72C0u;
        goto label_2e72c0;
    }
    ctx->pc = 0x2E72B8u;
    SET_GPR_U32(ctx, 31, 0x2E72C0u);
    ctx->pc = 0x2E72BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E72B8u;
    // 0x2e72bc: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E72B8u, 0x2E72C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72C0u;
label_2e72c0:
    // 0x2e72c0: 0xc0b9a86  jal         func_2E6A18
label_2e72c4:
    if (ctx->pc == 0x2E72C4u) {
        ctx->pc = 0x2E72C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72C0u;
        // 0x2e72c4: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72C8u;
        goto label_2e72c8;
    }
    ctx->pc = 0x2E72C0u;
    SET_GPR_U32(ctx, 31, 0x2E72C8u);
    ctx->pc = 0x2E72C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E72C0u;
    // 0x2e72c4: 0x8fa40120  lw          $a0, 0x120($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 288)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6A18u, 0x2E72C0u, 0x2E72C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72C8u;
label_2e72c8:
    // 0x2e72c8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e72c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e72cc:
    // 0x2e72cc: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e72ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e72d0:
    // 0x2e72d0: 0xc08b5ac  jal         func_22D6B0
label_2e72d4:
    if (ctx->pc == 0x2E72D4u) {
        ctx->pc = 0x2E72D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72D0u;
        // 0x2e72d4: 0x24a5f908  addiu       $a1, $a1, -0x6F8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72D8u;
        goto label_2e72d8;
    }
    ctx->pc = 0x2E72D0u;
    SET_GPR_U32(ctx, 31, 0x2E72D8u);
    ctx->pc = 0x2E72D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E72D0u;
    // 0x2e72d4: 0x24a5f908  addiu       $a1, $a1, -0x6F8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E72D0u, 0x2E72D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E72D8u;
label_2e72d8:
    // 0x2e72d8: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x2e72d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
label_2e72dc:
    // 0x2e72dc: 0x2c62000f  sltiu       $v0, $v1, 0xF
    ctx->pc = 0x2e72dcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)15) ? 1 : 0);
label_2e72e0:
    // 0x2e72e0: 0x10400037  beqz        $v0, . + 4 + (0x37 << 2)
label_2e72e4:
    if (ctx->pc == 0x2E72E4u) {
        ctx->pc = 0x2E72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72E0u;
        // 0x2e72e4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E72E8u;
        goto label_2e72e8;
    }
    ctx->pc = 0x2E72E0u;
    {
        const bool branch_taken_0x2e72e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E72E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E72E0u;
        // 0x2e72e4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e72e0) {
            ctx->pc = 0x2E73C0u;
            goto label_2e73c0;
        }
    }
    ctx->pc = 0x2E72E8u;
label_2e72e8:
    // 0x2e72e8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2e72e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2e72ec:
    // 0x2e72ec: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x2e72ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
label_2e72f0:
    // 0x2e72f0: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2e72f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2e72f4:
    // 0x2e72f4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2e72f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2e72f8:
    // 0x2e72f8: 0x800008  jr          $a0
label_2e72fc:
    if (ctx->pc == 0x2E72FCu) {
        ctx->pc = 0x2E7300u;
        goto label_2e7300;
    }
    ctx->pc = 0x2E72F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2E7300u: goto label_2e7300;
            case 0x2E7318u: goto label_2e7318;
            case 0x2E7330u: goto label_2e7330;
            case 0x2E7348u: goto label_2e7348;
            case 0x2E7360u: goto label_2e7360;
            case 0x2E7378u: goto label_2e7378;
            case 0x2E7390u: goto label_2e7390;
            case 0x2E73A8u: goto label_2e73a8;
            case 0x2E73C0u: goto label_2e73c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E72F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2E7300u;
label_2e7300:
    // 0x2e7300: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7300u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e7304:
    // 0x2e7304: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e7304u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7308:
    // 0x2e7308: 0xc08b5ac  jal         func_22D6B0
label_2e730c:
    if (ctx->pc == 0x2E730Cu) {
        ctx->pc = 0x2E730Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7308u;
        // 0x2e730c: 0x24a5f910  addiu       $a1, $a1, -0x6F0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7310u;
        goto label_2e7310;
    }
    ctx->pc = 0x2E7308u;
    SET_GPR_U32(ctx, 31, 0x2E7310u);
    ctx->pc = 0x2E730Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7308u;
    // 0x2e730c: 0x24a5f910  addiu       $a1, $a1, -0x6F0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965520));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E7308u, 0x2E7310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7310u;
label_2e7310:
    // 0x2e7310: 0x10000030  b           . + 4 + (0x30 << 2)
label_2e7314:
    if (ctx->pc == 0x2E7314u) {
        ctx->pc = 0x2E7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7310u;
        // 0x2e7314: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7318u;
        goto label_2e7318;
    }
    ctx->pc = 0x2E7310u;
    {
        const bool branch_taken_0x2e7310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7314u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7310u;
        // 0x2e7314: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7310) {
            ctx->pc = 0x2E73D4u;
            goto label_2e73d4;
        }
    }
    ctx->pc = 0x2E7318u;
label_2e7318:
    // 0x2e7318: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7318u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e731c:
    // 0x2e731c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e731cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7320:
    // 0x2e7320: 0xc08b5ac  jal         func_22D6B0
label_2e7324:
    if (ctx->pc == 0x2E7324u) {
        ctx->pc = 0x2E7324u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7320u;
        // 0x2e7324: 0x24a5f918  addiu       $a1, $a1, -0x6E8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7328u;
        goto label_2e7328;
    }
    ctx->pc = 0x2E7320u;
    SET_GPR_U32(ctx, 31, 0x2E7328u);
    ctx->pc = 0x2E7324u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7320u;
    // 0x2e7324: 0x24a5f918  addiu       $a1, $a1, -0x6E8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E7320u, 0x2E7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7328u;
label_2e7328:
    // 0x2e7328: 0x1000002a  b           . + 4 + (0x2A << 2)
label_2e732c:
    if (ctx->pc == 0x2E732Cu) {
        ctx->pc = 0x2E732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7328u;
        // 0x2e732c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7330u;
        goto label_2e7330;
    }
    ctx->pc = 0x2E7328u;
    {
        const bool branch_taken_0x2e7328 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E732Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7328u;
        // 0x2e732c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7328) {
            ctx->pc = 0x2E73D4u;
            goto label_2e73d4;
        }
    }
    ctx->pc = 0x2E7330u;
label_2e7330:
    // 0x2e7330: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7330u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e7334:
    // 0x2e7334: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e7334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7338:
    // 0x2e7338: 0xc08b5ac  jal         func_22D6B0
label_2e733c:
    if (ctx->pc == 0x2E733Cu) {
        ctx->pc = 0x2E733Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7338u;
        // 0x2e733c: 0x24a5f920  addiu       $a1, $a1, -0x6E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7340u;
        goto label_2e7340;
    }
    ctx->pc = 0x2E7338u;
    SET_GPR_U32(ctx, 31, 0x2E7340u);
    ctx->pc = 0x2E733Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7338u;
    // 0x2e733c: 0x24a5f920  addiu       $a1, $a1, -0x6E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E7338u, 0x2E7340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7340u;
label_2e7340:
    // 0x2e7340: 0x10000024  b           . + 4 + (0x24 << 2)
label_2e7344:
    if (ctx->pc == 0x2E7344u) {
        ctx->pc = 0x2E7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7340u;
        // 0x2e7344: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7348u;
        goto label_2e7348;
    }
    ctx->pc = 0x2E7340u;
    {
        const bool branch_taken_0x2e7340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7340u;
        // 0x2e7344: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7340) {
            ctx->pc = 0x2E73D4u;
            goto label_2e73d4;
        }
    }
    ctx->pc = 0x2E7348u;
label_2e7348:
    // 0x2e7348: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7348u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e734c:
    // 0x2e734c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e734cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7350:
    // 0x2e7350: 0xc08b5ac  jal         func_22D6B0
label_2e7354:
    if (ctx->pc == 0x2E7354u) {
        ctx->pc = 0x2E7354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7350u;
        // 0x2e7354: 0x24a5f928  addiu       $a1, $a1, -0x6D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965544));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7358u;
        goto label_2e7358;
    }
    ctx->pc = 0x2E7350u;
    SET_GPR_U32(ctx, 31, 0x2E7358u);
    ctx->pc = 0x2E7354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7350u;
    // 0x2e7354: 0x24a5f928  addiu       $a1, $a1, -0x6D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965544));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E7350u, 0x2E7358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7358u;
label_2e7358:
    // 0x2e7358: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2e735c:
    if (ctx->pc == 0x2E735Cu) {
        ctx->pc = 0x2E735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7358u;
        // 0x2e735c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7360u;
        goto label_2e7360;
    }
    ctx->pc = 0x2E7358u;
    {
        const bool branch_taken_0x2e7358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7358u;
        // 0x2e735c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7358) {
            ctx->pc = 0x2E73D4u;
            goto label_2e73d4;
        }
    }
    ctx->pc = 0x2E7360u;
label_2e7360:
    // 0x2e7360: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7360u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e7364:
    // 0x2e7364: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e7364u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7368:
    // 0x2e7368: 0xc08b5ac  jal         func_22D6B0
label_2e736c:
    if (ctx->pc == 0x2E736Cu) {
        ctx->pc = 0x2E736Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7368u;
        // 0x2e736c: 0x24a5f930  addiu       $a1, $a1, -0x6D0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965552));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7370u;
        goto label_2e7370;
    }
    ctx->pc = 0x2E7368u;
    SET_GPR_U32(ctx, 31, 0x2E7370u);
    ctx->pc = 0x2E736Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7368u;
    // 0x2e736c: 0x24a5f930  addiu       $a1, $a1, -0x6D0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965552));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E7368u, 0x2E7370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7370u;
label_2e7370:
    // 0x2e7370: 0x10000018  b           . + 4 + (0x18 << 2)
label_2e7374:
    if (ctx->pc == 0x2E7374u) {
        ctx->pc = 0x2E7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7370u;
        // 0x2e7374: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7378u;
        goto label_2e7378;
    }
    ctx->pc = 0x2E7370u;
    {
        const bool branch_taken_0x2e7370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E7374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7370u;
        // 0x2e7374: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7370) {
            ctx->pc = 0x2E73D4u;
            goto label_2e73d4;
        }
    }
    ctx->pc = 0x2E7378u;
label_2e7378:
    // 0x2e7378: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7378u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e737c:
    // 0x2e737c: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e737cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7380:
    // 0x2e7380: 0xc08b5ac  jal         func_22D6B0
label_2e7384:
    if (ctx->pc == 0x2E7384u) {
        ctx->pc = 0x2E7384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7380u;
        // 0x2e7384: 0x24a5f938  addiu       $a1, $a1, -0x6C8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7388u;
        goto label_2e7388;
    }
    ctx->pc = 0x2E7380u;
    SET_GPR_U32(ctx, 31, 0x2E7388u);
    ctx->pc = 0x2E7384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7380u;
    // 0x2e7384: 0x24a5f938  addiu       $a1, $a1, -0x6C8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E7380u, 0x2E7388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7388u;
label_2e7388:
    // 0x2e7388: 0x10000012  b           . + 4 + (0x12 << 2)
label_2e738c:
    if (ctx->pc == 0x2E738Cu) {
        ctx->pc = 0x2E738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7388u;
        // 0x2e738c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7390u;
        goto label_2e7390;
    }
    ctx->pc = 0x2E7388u;
    {
        const bool branch_taken_0x2e7388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E738Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7388u;
        // 0x2e738c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e7388) {
            ctx->pc = 0x2E73D4u;
            goto label_2e73d4;
        }
    }
    ctx->pc = 0x2E7390u;
label_2e7390:
    // 0x2e7390: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e7390u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e7394:
    // 0x2e7394: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e7394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e7398:
    // 0x2e7398: 0xc08b5ac  jal         func_22D6B0
label_2e739c:
    if (ctx->pc == 0x2E739Cu) {
        ctx->pc = 0x2E739Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7398u;
        // 0x2e739c: 0x24a5f940  addiu       $a1, $a1, -0x6C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965568));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73A0u;
        goto label_2e73a0;
    }
    ctx->pc = 0x2E7398u;
    SET_GPR_U32(ctx, 31, 0x2E73A0u);
    ctx->pc = 0x2E739Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E7398u;
    // 0x2e739c: 0x24a5f940  addiu       $a1, $a1, -0x6C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965568));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E7398u, 0x2E73A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73A0u;
label_2e73a0:
    // 0x2e73a0: 0x1000000c  b           . + 4 + (0xC << 2)
label_2e73a4:
    if (ctx->pc == 0x2E73A4u) {
        ctx->pc = 0x2E73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73A0u;
        // 0x2e73a4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73A8u;
        goto label_2e73a8;
    }
    ctx->pc = 0x2E73A0u;
    {
        const bool branch_taken_0x2e73a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73A0u;
        // 0x2e73a4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73a0) {
            ctx->pc = 0x2E73D4u;
            goto label_2e73d4;
        }
    }
    ctx->pc = 0x2E73A8u;
label_2e73a8:
    // 0x2e73a8: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e73a8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e73ac:
    // 0x2e73ac: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e73acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e73b0:
    // 0x2e73b0: 0xc08b5ac  jal         func_22D6B0
label_2e73b4:
    if (ctx->pc == 0x2E73B4u) {
        ctx->pc = 0x2E73B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73B0u;
        // 0x2e73b4: 0x24a5f948  addiu       $a1, $a1, -0x6B8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73B8u;
        goto label_2e73b8;
    }
    ctx->pc = 0x2E73B0u;
    SET_GPR_U32(ctx, 31, 0x2E73B8u);
    ctx->pc = 0x2E73B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73B0u;
    // 0x2e73b4: 0x24a5f948  addiu       $a1, $a1, -0x6B8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E73B0u, 0x2E73B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73B8u;
label_2e73b8:
    // 0x2e73b8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2e73bc:
    if (ctx->pc == 0x2E73BCu) {
        ctx->pc = 0x2E73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73B8u;
        // 0x2e73bc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73C0u;
        goto label_2e73c0;
    }
    ctx->pc = 0x2E73B8u;
    {
        const bool branch_taken_0x2e73b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2E73BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73B8u;
        // 0x2e73bc: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2e73b8) {
            ctx->pc = 0x2E73D4u;
            goto label_2e73d4;
        }
    }
    ctx->pc = 0x2E73C0u;
label_2e73c0:
    // 0x2e73c0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e73c0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e73c4:
    // 0x2e73c4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e73c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e73c8:
    // 0x2e73c8: 0xc08b5ac  jal         func_22D6B0
label_2e73cc:
    if (ctx->pc == 0x2E73CCu) {
        ctx->pc = 0x2E73CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73C8u;
        // 0x2e73cc: 0x24a5f790  addiu       $a1, $a1, -0x870 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73D0u;
        goto label_2e73d0;
    }
    ctx->pc = 0x2E73C8u;
    SET_GPR_U32(ctx, 31, 0x2E73D0u);
    ctx->pc = 0x2E73CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73C8u;
    // 0x2e73cc: 0x24a5f790  addiu       $a1, $a1, -0x870 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E73C8u, 0x2E73D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73D0u;
label_2e73d0:
    // 0x2e73d0: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e73d0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e73d4:
    // 0x2e73d4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e73d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e73d8:
    // 0x2e73d8: 0xc08b5ac  jal         func_22D6B0
label_2e73dc:
    if (ctx->pc == 0x2E73DCu) {
        ctx->pc = 0x2E73DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73D8u;
        // 0x2e73dc: 0x24a5f950  addiu       $a1, $a1, -0x6B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965584));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73E0u;
        goto label_2e73e0;
    }
    ctx->pc = 0x2E73D8u;
    SET_GPR_U32(ctx, 31, 0x2E73E0u);
    ctx->pc = 0x2E73DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73D8u;
    // 0x2e73dc: 0x24a5f950  addiu       $a1, $a1, -0x6B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965584));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E73D8u, 0x2E73E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73E0u;
label_2e73e0:
    // 0x2e73e0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2e73e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2e73e4:
    // 0x2e73e4: 0x2821818  mult        $v1, $s4, $v0
    ctx->pc = 0x2e73e4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_2e73e8:
    // 0x2e73e8: 0x771021  addu        $v0, $v1, $s7
    ctx->pc = 0x2e73e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
label_2e73ec:
    // 0x2e73ec: 0xc0b9a86  jal         func_2E6A18
label_2e73f0:
    if (ctx->pc == 0x2E73F0u) {
        ctx->pc = 0x2E73F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73ECu;
        // 0x2e73f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E73F4u;
        goto label_2e73f4;
    }
    ctx->pc = 0x2E73ECu;
    SET_GPR_U32(ctx, 31, 0x2E73F4u);
    ctx->pc = 0x2E73F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73ECu;
    // 0x2e73f0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E6A18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6A18u, 0x2E73ECu, 0x2E73F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E73F4u;
label_2e73f4:
    // 0x2e73f4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2e73f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2e73f8:
    // 0x2e73f8: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2e73f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2e73fc:
    // 0x2e73fc: 0xc08b5ac  jal         func_22D6B0
label_2e7400:
    if (ctx->pc == 0x2E7400u) {
        ctx->pc = 0x2E7400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E73FCu;
        // 0x2e7400: 0x24a5f958  addiu       $a1, $a1, -0x6A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965592));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7404u;
        goto label_2e7404;
    }
    ctx->pc = 0x2E73FCu;
    SET_GPR_U32(ctx, 31, 0x2E7404u);
    ctx->pc = 0x2E7400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2E73FCu;
    // 0x2e7400: 0x24a5f958  addiu       $a1, $a1, -0x6A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965592));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D6B0u, 0x2E73FCu, 0x2E7404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7404u;
label_2e7404:
    // 0x2e7404: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2e7404u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2e7408:
    // 0x2e7408: 0xdfbf01c0  ld          $ra, 0x1C0($sp)
    ctx->pc = 0x2e7408u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 448)));
label_2e740c:
    // 0x2e740c: 0xdfbe01b0  ld          $fp, 0x1B0($sp)
    ctx->pc = 0x2e740cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 432)));
label_2e7410:
    // 0x2e7410: 0xdfb701a0  ld          $s7, 0x1A0($sp)
    ctx->pc = 0x2e7410u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 416)));
label_2e7414:
    // 0x2e7414: 0xdfb60190  ld          $s6, 0x190($sp)
    ctx->pc = 0x2e7414u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 400)));
label_2e7418:
    // 0x2e7418: 0xdfb50180  ld          $s5, 0x180($sp)
    ctx->pc = 0x2e7418u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 384)));
label_2e741c:
    // 0x2e741c: 0xdfb40170  ld          $s4, 0x170($sp)
    ctx->pc = 0x2e741cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2e7420:
    // 0x2e7420: 0xdfb30160  ld          $s3, 0x160($sp)
    ctx->pc = 0x2e7420u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2e7424:
    // 0x2e7424: 0xdfb20150  ld          $s2, 0x150($sp)
    ctx->pc = 0x2e7424u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_2e7428:
    // 0x2e7428: 0xdfb10140  ld          $s1, 0x140($sp)
    ctx->pc = 0x2e7428u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2e742c:
    // 0x2e742c: 0xdfb00130  ld          $s0, 0x130($sp)
    ctx->pc = 0x2e742cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_2e7430:
    // 0x2e7430: 0x3e00008  jr          $ra
label_2e7434:
    if (ctx->pc == 0x2E7434u) {
        ctx->pc = 0x2E7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7430u;
        // 0x2e7434: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2E7438u;
        goto label_fallthrough_0x2e7430;
    }
    ctx->pc = 0x2E7430u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2E7434u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2E7430u;
        // 0x2e7434: 0x27bd01d0  addiu       $sp, $sp, 0x1D0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 464));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E7430u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2e7430:
    ctx->pc = 0x2E7438u;
}
