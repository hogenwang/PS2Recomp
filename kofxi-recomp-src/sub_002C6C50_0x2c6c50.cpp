#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C6C50
// Address: 0x2c6c50 - 0x2c71d0
void sub_002C6C50_0x2c6c50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C6C50_0x2c6c50");
#endif

    switch (ctx->pc) {
        case 0x2c6c50u: goto label_2c6c50;
        case 0x2c6c54u: goto label_2c6c54;
        case 0x2c6c58u: goto label_2c6c58;
        case 0x2c6c5cu: goto label_2c6c5c;
        case 0x2c6c60u: goto label_2c6c60;
        case 0x2c6c64u: goto label_2c6c64;
        case 0x2c6c68u: goto label_2c6c68;
        case 0x2c6c6cu: goto label_2c6c6c;
        case 0x2c6c70u: goto label_2c6c70;
        case 0x2c6c74u: goto label_2c6c74;
        case 0x2c6c78u: goto label_2c6c78;
        case 0x2c6c7cu: goto label_2c6c7c;
        case 0x2c6c80u: goto label_2c6c80;
        case 0x2c6c84u: goto label_2c6c84;
        case 0x2c6c88u: goto label_2c6c88;
        case 0x2c6c8cu: goto label_2c6c8c;
        case 0x2c6c90u: goto label_2c6c90;
        case 0x2c6c94u: goto label_2c6c94;
        case 0x2c6c98u: goto label_2c6c98;
        case 0x2c6c9cu: goto label_2c6c9c;
        case 0x2c6ca0u: goto label_2c6ca0;
        case 0x2c6ca4u: goto label_2c6ca4;
        case 0x2c6ca8u: goto label_2c6ca8;
        case 0x2c6cacu: goto label_2c6cac;
        case 0x2c6cb0u: goto label_2c6cb0;
        case 0x2c6cb4u: goto label_2c6cb4;
        case 0x2c6cb8u: goto label_2c6cb8;
        case 0x2c6cbcu: goto label_2c6cbc;
        case 0x2c6cc0u: goto label_2c6cc0;
        case 0x2c6cc4u: goto label_2c6cc4;
        case 0x2c6cc8u: goto label_2c6cc8;
        case 0x2c6cccu: goto label_2c6ccc;
        case 0x2c6cd0u: goto label_2c6cd0;
        case 0x2c6cd4u: goto label_2c6cd4;
        case 0x2c6cd8u: goto label_2c6cd8;
        case 0x2c6cdcu: goto label_2c6cdc;
        case 0x2c6ce0u: goto label_2c6ce0;
        case 0x2c6ce4u: goto label_2c6ce4;
        case 0x2c6ce8u: goto label_2c6ce8;
        case 0x2c6cecu: goto label_2c6cec;
        case 0x2c6cf0u: goto label_2c6cf0;
        case 0x2c6cf4u: goto label_2c6cf4;
        case 0x2c6cf8u: goto label_2c6cf8;
        case 0x2c6cfcu: goto label_2c6cfc;
        case 0x2c6d00u: goto label_2c6d00;
        case 0x2c6d04u: goto label_2c6d04;
        case 0x2c6d08u: goto label_2c6d08;
        case 0x2c6d0cu: goto label_2c6d0c;
        case 0x2c6d10u: goto label_2c6d10;
        case 0x2c6d14u: goto label_2c6d14;
        case 0x2c6d18u: goto label_2c6d18;
        case 0x2c6d1cu: goto label_2c6d1c;
        case 0x2c6d20u: goto label_2c6d20;
        case 0x2c6d24u: goto label_2c6d24;
        case 0x2c6d28u: goto label_2c6d28;
        case 0x2c6d2cu: goto label_2c6d2c;
        case 0x2c6d30u: goto label_2c6d30;
        case 0x2c6d34u: goto label_2c6d34;
        case 0x2c6d38u: goto label_2c6d38;
        case 0x2c6d3cu: goto label_2c6d3c;
        case 0x2c6d40u: goto label_2c6d40;
        case 0x2c6d44u: goto label_2c6d44;
        case 0x2c6d48u: goto label_2c6d48;
        case 0x2c6d4cu: goto label_2c6d4c;
        case 0x2c6d50u: goto label_2c6d50;
        case 0x2c6d54u: goto label_2c6d54;
        case 0x2c6d58u: goto label_2c6d58;
        case 0x2c6d5cu: goto label_2c6d5c;
        case 0x2c6d60u: goto label_2c6d60;
        case 0x2c6d64u: goto label_2c6d64;
        case 0x2c6d68u: goto label_2c6d68;
        case 0x2c6d6cu: goto label_2c6d6c;
        case 0x2c6d70u: goto label_2c6d70;
        case 0x2c6d74u: goto label_2c6d74;
        case 0x2c6d78u: goto label_2c6d78;
        case 0x2c6d7cu: goto label_2c6d7c;
        case 0x2c6d80u: goto label_2c6d80;
        case 0x2c6d84u: goto label_2c6d84;
        case 0x2c6d88u: goto label_2c6d88;
        case 0x2c6d8cu: goto label_2c6d8c;
        case 0x2c6d90u: goto label_2c6d90;
        case 0x2c6d94u: goto label_2c6d94;
        case 0x2c6d98u: goto label_2c6d98;
        case 0x2c6d9cu: goto label_2c6d9c;
        case 0x2c6da0u: goto label_2c6da0;
        case 0x2c6da4u: goto label_2c6da4;
        case 0x2c6da8u: goto label_2c6da8;
        case 0x2c6dacu: goto label_2c6dac;
        case 0x2c6db0u: goto label_2c6db0;
        case 0x2c6db4u: goto label_2c6db4;
        case 0x2c6db8u: goto label_2c6db8;
        case 0x2c6dbcu: goto label_2c6dbc;
        case 0x2c6dc0u: goto label_2c6dc0;
        case 0x2c6dc4u: goto label_2c6dc4;
        case 0x2c6dc8u: goto label_2c6dc8;
        case 0x2c6dccu: goto label_2c6dcc;
        case 0x2c6dd0u: goto label_2c6dd0;
        case 0x2c6dd4u: goto label_2c6dd4;
        case 0x2c6dd8u: goto label_2c6dd8;
        case 0x2c6ddcu: goto label_2c6ddc;
        case 0x2c6de0u: goto label_2c6de0;
        case 0x2c6de4u: goto label_2c6de4;
        case 0x2c6de8u: goto label_2c6de8;
        case 0x2c6decu: goto label_2c6dec;
        case 0x2c6df0u: goto label_2c6df0;
        case 0x2c6df4u: goto label_2c6df4;
        case 0x2c6df8u: goto label_2c6df8;
        case 0x2c6dfcu: goto label_2c6dfc;
        case 0x2c6e00u: goto label_2c6e00;
        case 0x2c6e04u: goto label_2c6e04;
        case 0x2c6e08u: goto label_2c6e08;
        case 0x2c6e0cu: goto label_2c6e0c;
        case 0x2c6e10u: goto label_2c6e10;
        case 0x2c6e14u: goto label_2c6e14;
        case 0x2c6e18u: goto label_2c6e18;
        case 0x2c6e1cu: goto label_2c6e1c;
        case 0x2c6e20u: goto label_2c6e20;
        case 0x2c6e24u: goto label_2c6e24;
        case 0x2c6e28u: goto label_2c6e28;
        case 0x2c6e2cu: goto label_2c6e2c;
        case 0x2c6e30u: goto label_2c6e30;
        case 0x2c6e34u: goto label_2c6e34;
        case 0x2c6e38u: goto label_2c6e38;
        case 0x2c6e3cu: goto label_2c6e3c;
        case 0x2c6e40u: goto label_2c6e40;
        case 0x2c6e44u: goto label_2c6e44;
        case 0x2c6e48u: goto label_2c6e48;
        case 0x2c6e4cu: goto label_2c6e4c;
        case 0x2c6e50u: goto label_2c6e50;
        case 0x2c6e54u: goto label_2c6e54;
        case 0x2c6e58u: goto label_2c6e58;
        case 0x2c6e5cu: goto label_2c6e5c;
        case 0x2c6e60u: goto label_2c6e60;
        case 0x2c6e64u: goto label_2c6e64;
        case 0x2c6e68u: goto label_2c6e68;
        case 0x2c6e6cu: goto label_2c6e6c;
        case 0x2c6e70u: goto label_2c6e70;
        case 0x2c6e74u: goto label_2c6e74;
        case 0x2c6e78u: goto label_2c6e78;
        case 0x2c6e7cu: goto label_2c6e7c;
        case 0x2c6e80u: goto label_2c6e80;
        case 0x2c6e84u: goto label_2c6e84;
        case 0x2c6e88u: goto label_2c6e88;
        case 0x2c6e8cu: goto label_2c6e8c;
        case 0x2c6e90u: goto label_2c6e90;
        case 0x2c6e94u: goto label_2c6e94;
        case 0x2c6e98u: goto label_2c6e98;
        case 0x2c6e9cu: goto label_2c6e9c;
        case 0x2c6ea0u: goto label_2c6ea0;
        case 0x2c6ea4u: goto label_2c6ea4;
        case 0x2c6ea8u: goto label_2c6ea8;
        case 0x2c6eacu: goto label_2c6eac;
        case 0x2c6eb0u: goto label_2c6eb0;
        case 0x2c6eb4u: goto label_2c6eb4;
        case 0x2c6eb8u: goto label_2c6eb8;
        case 0x2c6ebcu: goto label_2c6ebc;
        case 0x2c6ec0u: goto label_2c6ec0;
        case 0x2c6ec4u: goto label_2c6ec4;
        case 0x2c6ec8u: goto label_2c6ec8;
        case 0x2c6eccu: goto label_2c6ecc;
        case 0x2c6ed0u: goto label_2c6ed0;
        case 0x2c6ed4u: goto label_2c6ed4;
        case 0x2c6ed8u: goto label_2c6ed8;
        case 0x2c6edcu: goto label_2c6edc;
        case 0x2c6ee0u: goto label_2c6ee0;
        case 0x2c6ee4u: goto label_2c6ee4;
        case 0x2c6ee8u: goto label_2c6ee8;
        case 0x2c6eecu: goto label_2c6eec;
        case 0x2c6ef0u: goto label_2c6ef0;
        case 0x2c6ef4u: goto label_2c6ef4;
        case 0x2c6ef8u: goto label_2c6ef8;
        case 0x2c6efcu: goto label_2c6efc;
        case 0x2c6f00u: goto label_2c6f00;
        case 0x2c6f04u: goto label_2c6f04;
        case 0x2c6f08u: goto label_2c6f08;
        case 0x2c6f0cu: goto label_2c6f0c;
        case 0x2c6f10u: goto label_2c6f10;
        case 0x2c6f14u: goto label_2c6f14;
        case 0x2c6f18u: goto label_2c6f18;
        case 0x2c6f1cu: goto label_2c6f1c;
        case 0x2c6f20u: goto label_2c6f20;
        case 0x2c6f24u: goto label_2c6f24;
        case 0x2c6f28u: goto label_2c6f28;
        case 0x2c6f2cu: goto label_2c6f2c;
        case 0x2c6f30u: goto label_2c6f30;
        case 0x2c6f34u: goto label_2c6f34;
        case 0x2c6f38u: goto label_2c6f38;
        case 0x2c6f3cu: goto label_2c6f3c;
        case 0x2c6f40u: goto label_2c6f40;
        case 0x2c6f44u: goto label_2c6f44;
        case 0x2c6f48u: goto label_2c6f48;
        case 0x2c6f4cu: goto label_2c6f4c;
        case 0x2c6f50u: goto label_2c6f50;
        case 0x2c6f54u: goto label_2c6f54;
        case 0x2c6f58u: goto label_2c6f58;
        case 0x2c6f5cu: goto label_2c6f5c;
        case 0x2c6f60u: goto label_2c6f60;
        case 0x2c6f64u: goto label_2c6f64;
        case 0x2c6f68u: goto label_2c6f68;
        case 0x2c6f6cu: goto label_2c6f6c;
        case 0x2c6f70u: goto label_2c6f70;
        case 0x2c6f74u: goto label_2c6f74;
        case 0x2c6f78u: goto label_2c6f78;
        case 0x2c6f7cu: goto label_2c6f7c;
        case 0x2c6f80u: goto label_2c6f80;
        case 0x2c6f84u: goto label_2c6f84;
        case 0x2c6f88u: goto label_2c6f88;
        case 0x2c6f8cu: goto label_2c6f8c;
        case 0x2c6f90u: goto label_2c6f90;
        case 0x2c6f94u: goto label_2c6f94;
        case 0x2c6f98u: goto label_2c6f98;
        case 0x2c6f9cu: goto label_2c6f9c;
        case 0x2c6fa0u: goto label_2c6fa0;
        case 0x2c6fa4u: goto label_2c6fa4;
        case 0x2c6fa8u: goto label_2c6fa8;
        case 0x2c6facu: goto label_2c6fac;
        case 0x2c6fb0u: goto label_2c6fb0;
        case 0x2c6fb4u: goto label_2c6fb4;
        case 0x2c6fb8u: goto label_2c6fb8;
        case 0x2c6fbcu: goto label_2c6fbc;
        case 0x2c6fc0u: goto label_2c6fc0;
        case 0x2c6fc4u: goto label_2c6fc4;
        case 0x2c6fc8u: goto label_2c6fc8;
        case 0x2c6fccu: goto label_2c6fcc;
        case 0x2c6fd0u: goto label_2c6fd0;
        case 0x2c6fd4u: goto label_2c6fd4;
        case 0x2c6fd8u: goto label_2c6fd8;
        case 0x2c6fdcu: goto label_2c6fdc;
        case 0x2c6fe0u: goto label_2c6fe0;
        case 0x2c6fe4u: goto label_2c6fe4;
        case 0x2c6fe8u: goto label_2c6fe8;
        case 0x2c6fecu: goto label_2c6fec;
        case 0x2c6ff0u: goto label_2c6ff0;
        case 0x2c6ff4u: goto label_2c6ff4;
        case 0x2c6ff8u: goto label_2c6ff8;
        case 0x2c6ffcu: goto label_2c6ffc;
        case 0x2c7000u: goto label_2c7000;
        case 0x2c7004u: goto label_2c7004;
        case 0x2c7008u: goto label_2c7008;
        case 0x2c700cu: goto label_2c700c;
        case 0x2c7010u: goto label_2c7010;
        case 0x2c7014u: goto label_2c7014;
        case 0x2c7018u: goto label_2c7018;
        case 0x2c701cu: goto label_2c701c;
        case 0x2c7020u: goto label_2c7020;
        case 0x2c7024u: goto label_2c7024;
        case 0x2c7028u: goto label_2c7028;
        case 0x2c702cu: goto label_2c702c;
        case 0x2c7030u: goto label_2c7030;
        case 0x2c7034u: goto label_2c7034;
        case 0x2c7038u: goto label_2c7038;
        case 0x2c703cu: goto label_2c703c;
        case 0x2c7040u: goto label_2c7040;
        case 0x2c7044u: goto label_2c7044;
        case 0x2c7048u: goto label_2c7048;
        case 0x2c704cu: goto label_2c704c;
        case 0x2c7050u: goto label_2c7050;
        case 0x2c7054u: goto label_2c7054;
        case 0x2c7058u: goto label_2c7058;
        case 0x2c705cu: goto label_2c705c;
        case 0x2c7060u: goto label_2c7060;
        case 0x2c7064u: goto label_2c7064;
        case 0x2c7068u: goto label_2c7068;
        case 0x2c706cu: goto label_2c706c;
        case 0x2c7070u: goto label_2c7070;
        case 0x2c7074u: goto label_2c7074;
        case 0x2c7078u: goto label_2c7078;
        case 0x2c707cu: goto label_2c707c;
        case 0x2c7080u: goto label_2c7080;
        case 0x2c7084u: goto label_2c7084;
        case 0x2c7088u: goto label_2c7088;
        case 0x2c708cu: goto label_2c708c;
        case 0x2c7090u: goto label_2c7090;
        case 0x2c7094u: goto label_2c7094;
        case 0x2c7098u: goto label_2c7098;
        case 0x2c709cu: goto label_2c709c;
        case 0x2c70a0u: goto label_2c70a0;
        case 0x2c70a4u: goto label_2c70a4;
        case 0x2c70a8u: goto label_2c70a8;
        case 0x2c70acu: goto label_2c70ac;
        case 0x2c70b0u: goto label_2c70b0;
        case 0x2c70b4u: goto label_2c70b4;
        case 0x2c70b8u: goto label_2c70b8;
        case 0x2c70bcu: goto label_2c70bc;
        case 0x2c70c0u: goto label_2c70c0;
        case 0x2c70c4u: goto label_2c70c4;
        case 0x2c70c8u: goto label_2c70c8;
        case 0x2c70ccu: goto label_2c70cc;
        case 0x2c70d0u: goto label_2c70d0;
        case 0x2c70d4u: goto label_2c70d4;
        case 0x2c70d8u: goto label_2c70d8;
        case 0x2c70dcu: goto label_2c70dc;
        case 0x2c70e0u: goto label_2c70e0;
        case 0x2c70e4u: goto label_2c70e4;
        case 0x2c70e8u: goto label_2c70e8;
        case 0x2c70ecu: goto label_2c70ec;
        case 0x2c70f0u: goto label_2c70f0;
        case 0x2c70f4u: goto label_2c70f4;
        case 0x2c70f8u: goto label_2c70f8;
        case 0x2c70fcu: goto label_2c70fc;
        case 0x2c7100u: goto label_2c7100;
        case 0x2c7104u: goto label_2c7104;
        case 0x2c7108u: goto label_2c7108;
        case 0x2c710cu: goto label_2c710c;
        case 0x2c7110u: goto label_2c7110;
        case 0x2c7114u: goto label_2c7114;
        case 0x2c7118u: goto label_2c7118;
        case 0x2c711cu: goto label_2c711c;
        case 0x2c7120u: goto label_2c7120;
        case 0x2c7124u: goto label_2c7124;
        case 0x2c7128u: goto label_2c7128;
        case 0x2c712cu: goto label_2c712c;
        case 0x2c7130u: goto label_2c7130;
        case 0x2c7134u: goto label_2c7134;
        case 0x2c7138u: goto label_2c7138;
        case 0x2c713cu: goto label_2c713c;
        case 0x2c7140u: goto label_2c7140;
        case 0x2c7144u: goto label_2c7144;
        case 0x2c7148u: goto label_2c7148;
        case 0x2c714cu: goto label_2c714c;
        case 0x2c7150u: goto label_2c7150;
        case 0x2c7154u: goto label_2c7154;
        case 0x2c7158u: goto label_2c7158;
        case 0x2c715cu: goto label_2c715c;
        case 0x2c7160u: goto label_2c7160;
        case 0x2c7164u: goto label_2c7164;
        case 0x2c7168u: goto label_2c7168;
        case 0x2c716cu: goto label_2c716c;
        case 0x2c7170u: goto label_2c7170;
        case 0x2c7174u: goto label_2c7174;
        case 0x2c7178u: goto label_2c7178;
        case 0x2c717cu: goto label_2c717c;
        case 0x2c7180u: goto label_2c7180;
        case 0x2c7184u: goto label_2c7184;
        case 0x2c7188u: goto label_2c7188;
        case 0x2c718cu: goto label_2c718c;
        case 0x2c7190u: goto label_2c7190;
        case 0x2c7194u: goto label_2c7194;
        case 0x2c7198u: goto label_2c7198;
        case 0x2c719cu: goto label_2c719c;
        case 0x2c71a0u: goto label_2c71a0;
        case 0x2c71a4u: goto label_2c71a4;
        case 0x2c71a8u: goto label_2c71a8;
        case 0x2c71acu: goto label_2c71ac;
        case 0x2c71b0u: goto label_2c71b0;
        case 0x2c71b4u: goto label_2c71b4;
        case 0x2c71b8u: goto label_2c71b8;
        case 0x2c71bcu: goto label_2c71bc;
        case 0x2c71c0u: goto label_2c71c0;
        case 0x2c71c4u: goto label_2c71c4;
        case 0x2c71c8u: goto label_2c71c8;
        case 0x2c71ccu: goto label_2c71cc;
        default: break;
    }

    ctx->pc = 0x2c6c50u;

label_2c6c50:
    // 0x2c6c50: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c6c50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c6c54:
    // 0x2c6c54: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2c6c54u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_2c6c58:
    // 0x2c6c58: 0x24427088  addiu       $v0, $v0, 0x7088
    ctx->pc = 0x2c6c58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28808));
label_2c6c5c:
    // 0x2c6c5c: 0x3e00008  jr          $ra
label_2c6c60:
    if (ctx->pc == 0x2C6C60u) {
        ctx->pc = 0x2C6C60u;
            // 0x2c6c60: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C6C64u;
        goto label_2c6c64;
    }
    ctx->pc = 0x2C6C5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C5Cu;
            // 0x2c6c60: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6C64u;
label_2c6c64:
    // 0x2c6c64: 0x0  nop
    ctx->pc = 0x2c6c64u;
    // NOP
label_2c6c68:
    // 0x2c6c68: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c6c6c:
    // 0x2c6c6c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c6c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c6c70:
    // 0x2c6c70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c6c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c6c74:
    // 0x2c6c74: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c6c74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c6c78:
    // 0x2c6c78: 0x24457088  addiu       $a1, $v0, 0x7088
    ctx->pc = 0x2c6c78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28808));
label_2c6c7c:
    // 0x2c6c7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6c7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c6c80:
    // 0x2c6c80: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c6c80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c6c84:
    // 0x2c6c84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c6c84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6c88:
    // 0x2c6c88: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c6c88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c6c8c:
    // 0x2c6c8c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c6c8cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c6c90:
    // 0x2c6c90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c6c90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c6c94:
    // 0x2c6c94: 0xc0b3c88  jal         func_2CF220
label_2c6c98:
    if (ctx->pc == 0x2C6C98u) {
        ctx->pc = 0x2C6C98u;
            // 0x2c6c98: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6C9Cu;
        goto label_2c6c9c;
    }
    ctx->pc = 0x2C6C94u;
    SET_GPR_U32(ctx, 31, 0x2C6C9Cu);
    ctx->pc = 0x2C6C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6C94u;
            // 0x2c6c98: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF220u;
    if (runtime->hasFunction(0x2CF220u)) {
        auto targetFn = runtime->lookupFunction(0x2CF220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C9Cu; }
        if (ctx->pc != 0x2C6C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF220_0x2cf220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6C9Cu; }
        if (ctx->pc != 0x2C6C9Cu) { return; }
    }
    ctx->pc = 0x2C6C9Cu;
label_2c6c9c:
    // 0x2c6c9c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c6c9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ca0:
    // 0x2c6ca0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2c6ca0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ca4:
    // 0x2c6ca4: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2c6ca8:
    if (ctx->pc == 0x2C6CA8u) {
        ctx->pc = 0x2C6CA8u;
            // 0x2c6ca8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CACu;
        goto label_2c6cac;
    }
    ctx->pc = 0x2C6CA4u;
    {
        const bool branch_taken_0x2c6ca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6CA4u;
            // 0x2c6ca8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6ca4) {
            ctx->pc = 0x2C6D0Cu;
            goto label_2c6d0c;
        }
    }
    ctx->pc = 0x2C6CACu;
label_2c6cac:
    // 0x2c6cac: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2c6cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2c6cb0:
    // 0x2c6cb0: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2c6cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2c6cb4:
    // 0x2c6cb4: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x2c6cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2c6cb8:
    // 0x2c6cb8: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c6cb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c6cbc:
    // 0x2c6cbc: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c6cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2c6cc0:
    // 0x2c6cc0: 0x40f809  jalr        $v0
label_2c6cc4:
    if (ctx->pc == 0x2C6CC4u) {
        ctx->pc = 0x2C6CC8u;
        goto label_2c6cc8;
    }
    ctx->pc = 0x2C6CC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6CC8u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6CC8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6CC8u; }
            if (ctx->pc != 0x2C6CC8u) { return; }
        }
        }
    }
    ctx->pc = 0x2C6CC8u;
label_2c6cc8:
    // 0x2c6cc8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2c6ccc:
    if (ctx->pc == 0x2C6CCCu) {
        ctx->pc = 0x2C6CCCu;
            // 0x2c6ccc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2C6CD0u;
        goto label_2c6cd0;
    }
    ctx->pc = 0x2C6CC8u;
    {
        const bool branch_taken_0x2c6cc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6cc8) {
            ctx->pc = 0x2C6CCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6CC8u;
            // 0x2c6ccc: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6D10u;
            goto label_2c6d10;
        }
    }
    ctx->pc = 0x2C6CD0u;
label_2c6cd0:
    // 0x2c6cd0: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2c6cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2c6cd4:
    // 0x2c6cd4: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c6cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2c6cd8:
    // 0x2c6cd8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c6cdc:
    if (ctx->pc == 0x2C6CDCu) {
        ctx->pc = 0x2C6CDCu;
            // 0x2c6cdc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CE0u;
        goto label_2c6ce0;
    }
    ctx->pc = 0x2C6CD8u;
    {
        const bool branch_taken_0x2c6cd8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6CD8u;
            // 0x2c6cdc: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6cd8) {
            ctx->pc = 0x2C6CFCu;
            goto label_2c6cfc;
        }
    }
    ctx->pc = 0x2C6CE0u;
label_2c6ce0:
    // 0x2c6ce0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2c6ce0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c6ce4:
    // 0x2c6ce4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c6ce4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c6ce8:
    // 0x2c6ce8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c6ce8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c6cec:
    // 0x2c6cec: 0xc0b5882  jal         func_2D6208
label_2c6cf0:
    if (ctx->pc == 0x2C6CF0u) {
        ctx->pc = 0x2C6CF0u;
            // 0x2c6cf0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2C6CF4u;
        goto label_2c6cf4;
    }
    ctx->pc = 0x2C6CECu;
    SET_GPR_U32(ctx, 31, 0x2C6CF4u);
    ctx->pc = 0x2C6CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6CECu;
            // 0x2c6cf0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D6208u;
    if (runtime->hasFunction(0x2D6208u)) {
        auto targetFn = runtime->lookupFunction(0x2D6208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6CF4u; }
        if (ctx->pc != 0x2C6CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D6208_0x2d6208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6CF4u; }
        if (ctx->pc != 0x2C6CF4u) { return; }
    }
    ctx->pc = 0x2C6CF4u;
label_2c6cf4:
    // 0x2c6cf4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2c6cf8:
    if (ctx->pc == 0x2C6CF8u) {
        ctx->pc = 0x2C6CF8u;
            // 0x2c6cf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2C6CFCu;
        goto label_2c6cfc;
    }
    ctx->pc = 0x2C6CF4u;
    {
        const bool branch_taken_0x2c6cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6CF4u;
            // 0x2c6cf8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6cf4) {
            ctx->pc = 0x2C6D10u;
            goto label_2c6d10;
        }
    }
    ctx->pc = 0x2C6CFCu;
label_2c6cfc:
    // 0x2c6cfc: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x2c6cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2c6d00:
    // 0x2c6d00: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6d00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6d04:
    // 0x2c6d04: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2c6d04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2c6d08:
    // 0x2c6d08: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x2c6d08u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_2c6d0c:
    // 0x2c6d0c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6d0cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6d10:
    // 0x2c6d10: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c6d10u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c6d14:
    // 0x2c6d14: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c6d14u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6d18:
    // 0x2c6d18: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c6d18u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c6d1c:
    // 0x2c6d1c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6d20:
    // 0x2c6d20: 0x3e00008  jr          $ra
label_2c6d24:
    if (ctx->pc == 0x2C6D24u) {
        ctx->pc = 0x2C6D24u;
            // 0x2c6d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C6D28u;
        goto label_2c6d28;
    }
    ctx->pc = 0x2C6D20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D20u;
            // 0x2c6d24: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6D28u;
label_2c6d28:
    // 0x2c6d28: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c6d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c6d2c:
    // 0x2c6d2c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c6d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c6d30:
    // 0x2c6d30: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c6d30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c6d34:
    // 0x2c6d34: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c6d34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c6d38:
    // 0x2c6d38: 0x24457088  addiu       $a1, $v0, 0x7088
    ctx->pc = 0x2c6d38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28808));
label_2c6d3c:
    // 0x2c6d3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6d3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c6d40:
    // 0x2c6d40: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c6d40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c6d44:
    // 0x2c6d44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c6d44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6d48:
    // 0x2c6d48: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c6d48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c6d4c:
    // 0x2c6d4c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2c6d4cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c6d50:
    // 0x2c6d50: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c6d50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c6d54:
    // 0x2c6d54: 0xc0b3c88  jal         func_2CF220
label_2c6d58:
    if (ctx->pc == 0x2C6D58u) {
        ctx->pc = 0x2C6D58u;
            // 0x2c6d58: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D5Cu;
        goto label_2c6d5c;
    }
    ctx->pc = 0x2C6D54u;
    SET_GPR_U32(ctx, 31, 0x2C6D5Cu);
    ctx->pc = 0x2C6D58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D54u;
            // 0x2c6d58: 0xe0802d  daddu       $s0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF220u;
    if (runtime->hasFunction(0x2CF220u)) {
        auto targetFn = runtime->lookupFunction(0x2CF220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D5Cu; }
        if (ctx->pc != 0x2C6D5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF220_0x2cf220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D5Cu; }
        if (ctx->pc != 0x2C6D5Cu) { return; }
    }
    ctx->pc = 0x2C6D5Cu;
label_2c6d5c:
    // 0x2c6d5c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c6d5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6d60:
    // 0x2c6d60: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2c6d60u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6d64:
    // 0x2c6d64: 0x14400019  bnez        $v0, . + 4 + (0x19 << 2)
label_2c6d68:
    if (ctx->pc == 0x2C6D68u) {
        ctx->pc = 0x2C6D68u;
            // 0x2c6d68: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D6Cu;
        goto label_2c6d6c;
    }
    ctx->pc = 0x2C6D64u;
    {
        const bool branch_taken_0x2c6d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D64u;
            // 0x2c6d68: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d64) {
            ctx->pc = 0x2C6DCCu;
            goto label_2c6dcc;
        }
    }
    ctx->pc = 0x2C6D6Cu;
label_2c6d6c:
    // 0x2c6d6c: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2c6d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2c6d70:
    // 0x2c6d70: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x2c6d70u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_2c6d74:
    // 0x2c6d74: 0x8e440028  lw          $a0, 0x28($s2)
    ctx->pc = 0x2c6d74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2c6d78:
    // 0x2c6d78: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c6d78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c6d7c:
    // 0x2c6d7c: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c6d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c6d80:
    // 0x2c6d80: 0x40f809  jalr        $v0
label_2c6d84:
    if (ctx->pc == 0x2C6D84u) {
        ctx->pc = 0x2C6D88u;
        goto label_2c6d88;
    }
    ctx->pc = 0x2C6D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6D88u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6D88u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6D88u; }
            if (ctx->pc != 0x2C6D88u) { return; }
        }
        }
    }
    ctx->pc = 0x2C6D88u;
label_2c6d88:
    // 0x2c6d88: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2c6d8c:
    if (ctx->pc == 0x2C6D8Cu) {
        ctx->pc = 0x2C6D8Cu;
            // 0x2c6d8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2C6D90u;
        goto label_2c6d90;
    }
    ctx->pc = 0x2C6D88u;
    {
        const bool branch_taken_0x2c6d88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2c6d88) {
            ctx->pc = 0x2C6D8Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D88u;
            // 0x2c6d8c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C6DD0u;
            goto label_2c6dd0;
        }
    }
    ctx->pc = 0x2C6D90u;
label_2c6d90:
    // 0x2c6d90: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2c6d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2c6d94:
    // 0x2c6d94: 0x8c420008  lw          $v0, 0x8($v0)
    ctx->pc = 0x2c6d94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2c6d98:
    // 0x2c6d98: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2c6d9c:
    if (ctx->pc == 0x2C6D9Cu) {
        ctx->pc = 0x2C6D9Cu;
            // 0x2c6d9c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6DA0u;
        goto label_2c6da0;
    }
    ctx->pc = 0x2C6D98u;
    {
        const bool branch_taken_0x2c6d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C6D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6D98u;
            // 0x2c6d9c: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6d98) {
            ctx->pc = 0x2C6DBCu;
            goto label_2c6dbc;
        }
    }
    ctx->pc = 0x2C6DA0u;
label_2c6da0:
    // 0x2c6da0: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2c6da0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c6da4:
    // 0x2c6da4: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c6da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c6da8:
    // 0x2c6da8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c6da8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c6dac:
    // 0x2c6dac: 0xc0b5882  jal         func_2D6208
label_2c6db0:
    if (ctx->pc == 0x2C6DB0u) {
        ctx->pc = 0x2C6DB0u;
            // 0x2c6db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6DB4u;
        goto label_2c6db4;
    }
    ctx->pc = 0x2C6DACu;
    SET_GPR_U32(ctx, 31, 0x2C6DB4u);
    ctx->pc = 0x2C6DB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6DACu;
            // 0x2c6db0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D6208u;
    if (runtime->hasFunction(0x2D6208u)) {
        auto targetFn = runtime->lookupFunction(0x2D6208u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DB4u; }
        if (ctx->pc != 0x2C6DB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D6208_0x2d6208(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6DB4u; }
        if (ctx->pc != 0x2C6DB4u) { return; }
    }
    ctx->pc = 0x2C6DB4u;
label_2c6db4:
    // 0x2c6db4: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2c6db8:
    if (ctx->pc == 0x2C6DB8u) {
        ctx->pc = 0x2C6DB8u;
            // 0x2c6db8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2C6DBCu;
        goto label_2c6dbc;
    }
    ctx->pc = 0x2C6DB4u;
    {
        const bool branch_taken_0x2c6db4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6DB4u;
            // 0x2c6db8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6db4) {
            ctx->pc = 0x2C6DD0u;
            goto label_2c6dd0;
        }
    }
    ctx->pc = 0x2C6DBCu;
label_2c6dbc:
    // 0x2c6dbc: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x2c6dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2c6dc0:
    // 0x2c6dc0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c6dc0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c6dc4:
    // 0x2c6dc4: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2c6dc4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2c6dc8:
    // 0x2c6dc8: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x2c6dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_2c6dcc:
    // 0x2c6dcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6dccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6dd0:
    // 0x2c6dd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c6dd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c6dd4:
    // 0x2c6dd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c6dd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6dd8:
    // 0x2c6dd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c6dd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c6ddc:
    // 0x2c6ddc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c6ddcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6de0:
    // 0x2c6de0: 0x3e00008  jr          $ra
label_2c6de4:
    if (ctx->pc == 0x2C6DE4u) {
        ctx->pc = 0x2C6DE4u;
            // 0x2c6de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C6DE8u;
        goto label_2c6de8;
    }
    ctx->pc = 0x2C6DE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6DE0u;
            // 0x2c6de4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6DE8u;
label_2c6de8:
    // 0x2c6de8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c6de8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c6dec:
    // 0x2c6dec: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c6decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c6df0:
    // 0x2c6df0: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2c6df0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2c6df4:
    // 0x2c6df4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2c6df4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c6df8:
    // 0x2c6df8: 0x24457088  addiu       $a1, $v0, 0x7088
    ctx->pc = 0x2c6df8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28808));
label_2c6dfc:
    // 0x2c6dfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6dfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c6e00:
    // 0x2c6e00: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c6e00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c6e04:
    // 0x2c6e04: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c6e04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e08:
    // 0x2c6e08: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c6e08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c6e0c:
    // 0x2c6e0c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2c6e0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e10:
    // 0x2c6e10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c6e10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c6e14:
    // 0x2c6e14: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2c6e14u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e18:
    // 0x2c6e18: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c6e18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2c6e1c:
    // 0x2c6e1c: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2c6e1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e20:
    // 0x2c6e20: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c6e20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2c6e24:
    // 0x2c6e24: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x2c6e24u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e28:
    // 0x2c6e28: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2c6e28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2c6e2c:
    // 0x2c6e2c: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2c6e2cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e30:
    // 0x2c6e30: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c6e30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c6e34:
    // 0x2c6e34: 0xc0b3c92  jal         func_2CF248
label_2c6e38:
    if (ctx->pc == 0x2C6E38u) {
        ctx->pc = 0x2C6E38u;
            // 0x2c6e38: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E3Cu;
        goto label_2c6e3c;
    }
    ctx->pc = 0x2C6E34u;
    SET_GPR_U32(ctx, 31, 0x2C6E3Cu);
    ctx->pc = 0x2C6E38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E34u;
            // 0x2c6e38: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF248u;
    if (runtime->hasFunction(0x2CF248u)) {
        auto targetFn = runtime->lookupFunction(0x2CF248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E3Cu; }
        if (ctx->pc != 0x2C6E3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF248_0x2cf248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E3Cu; }
        if (ctx->pc != 0x2C6E3Cu) { return; }
    }
    ctx->pc = 0x2C6E3Cu;
label_2c6e3c:
    // 0x2c6e3c: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c6e3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e40:
    // 0x2c6e40: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c6e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e44:
    // 0x2c6e44: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c6e44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e48:
    // 0x2c6e48: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2c6e48u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e4c:
    // 0x2c6e4c: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2c6e4cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e50:
    // 0x2c6e50: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2c6e50u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e54:
    // 0x2c6e54: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2c6e58:
    if (ctx->pc == 0x2C6E58u) {
        ctx->pc = 0x2C6E58u;
            // 0x2c6e58: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E5Cu;
        goto label_2c6e5c;
    }
    ctx->pc = 0x2C6E54u;
    {
        const bool branch_taken_0x2c6e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E54u;
            // 0x2c6e58: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6e54) {
            ctx->pc = 0x2C6E74u;
            goto label_2c6e74;
        }
    }
    ctx->pc = 0x2C6E5Cu;
label_2c6e5c:
    // 0x2c6e5c: 0x8ee20028  lw          $v0, 0x28($s7)
    ctx->pc = 0x2c6e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
label_2c6e60:
    // 0x2c6e60: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c6e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c6e64:
    // 0x2c6e64: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6e64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6e68:
    // 0x2c6e68: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x2c6e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_2c6e6c:
    // 0x2c6e6c: 0x40f809  jalr        $v0
label_2c6e70:
    if (ctx->pc == 0x2C6E70u) {
        ctx->pc = 0x2C6E74u;
        goto label_2c6e74;
    }
    ctx->pc = 0x2C6E6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6E74u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6E74u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6E74u; }
            if (ctx->pc != 0x2C6E74u) { return; }
        }
        }
    }
    ctx->pc = 0x2C6E74u;
label_2c6e74:
    // 0x2c6e74: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6e74u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6e78:
    // 0x2c6e78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c6e78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c6e7c:
    // 0x2c6e7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c6e7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6e80:
    // 0x2c6e80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c6e80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c6e84:
    // 0x2c6e84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c6e84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6e88:
    // 0x2c6e88: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c6e88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c6e8c:
    // 0x2c6e8c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2c6e8cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c6e90:
    // 0x2c6e90: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2c6e90u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c6e94:
    // 0x2c6e94: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c6e94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c6e98:
    // 0x2c6e98: 0x3e00008  jr          $ra
label_2c6e9c:
    if (ctx->pc == 0x2C6E9Cu) {
        ctx->pc = 0x2C6E9Cu;
            // 0x2c6e9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2C6EA0u;
        goto label_2c6ea0;
    }
    ctx->pc = 0x2C6E98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6E9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6E98u;
            // 0x2c6e9c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6EA0u;
label_2c6ea0:
    // 0x2c6ea0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c6ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c6ea4:
    // 0x2c6ea4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c6ea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c6ea8:
    // 0x2c6ea8: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2c6ea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2c6eac:
    // 0x2c6eac: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x2c6eacu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c6eb0:
    // 0x2c6eb0: 0x24457088  addiu       $a1, $v0, 0x7088
    ctx->pc = 0x2c6eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28808));
label_2c6eb4:
    // 0x2c6eb4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6eb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c6eb8:
    // 0x2c6eb8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c6eb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c6ebc:
    // 0x2c6ebc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c6ebcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ec0:
    // 0x2c6ec0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c6ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c6ec4:
    // 0x2c6ec4: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2c6ec4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ec8:
    // 0x2c6ec8: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c6ec8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c6ecc:
    // 0x2c6ecc: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2c6eccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ed0:
    // 0x2c6ed0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c6ed0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2c6ed4:
    // 0x2c6ed4: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2c6ed4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ed8:
    // 0x2c6ed8: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c6ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2c6edc:
    // 0x2c6edc: 0x160a82d  daddu       $s5, $t3, $zero
    ctx->pc = 0x2c6edcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 11) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ee0:
    // 0x2c6ee0: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2c6ee0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2c6ee4:
    // 0x2c6ee4: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2c6ee4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ee8:
    // 0x2c6ee8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c6ee8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2c6eec:
    // 0x2c6eec: 0xc0b3c92  jal         func_2CF248
label_2c6ef0:
    if (ctx->pc == 0x2C6EF0u) {
        ctx->pc = 0x2C6EF0u;
            // 0x2c6ef0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6EF4u;
        goto label_2c6ef4;
    }
    ctx->pc = 0x2C6EECu;
    SET_GPR_U32(ctx, 31, 0x2C6EF4u);
    ctx->pc = 0x2C6EF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6EECu;
            // 0x2c6ef0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF248u;
    if (runtime->hasFunction(0x2CF248u)) {
        auto targetFn = runtime->lookupFunction(0x2CF248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EF4u; }
        if (ctx->pc != 0x2C6EF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF248_0x2cf248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6EF4u; }
        if (ctx->pc != 0x2C6EF4u) { return; }
    }
    ctx->pc = 0x2C6EF4u;
label_2c6ef4:
    // 0x2c6ef4: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c6ef4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c6ef8:
    // 0x2c6ef8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c6ef8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6efc:
    // 0x2c6efc: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c6efcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f00:
    // 0x2c6f00: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2c6f00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f04:
    // 0x2c6f04: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x2c6f04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f08:
    // 0x2c6f08: 0x280502d  daddu       $t2, $s4, $zero
    ctx->pc = 0x2c6f08u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f0c:
    // 0x2c6f0c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2c6f10:
    if (ctx->pc == 0x2C6F10u) {
        ctx->pc = 0x2C6F10u;
            // 0x2c6f10: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F14u;
        goto label_2c6f14;
    }
    ctx->pc = 0x2C6F0Cu;
    {
        const bool branch_taken_0x2c6f0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F0Cu;
            // 0x2c6f10: 0x2a0582d  daddu       $t3, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6f0c) {
            ctx->pc = 0x2C6F2Cu;
            goto label_2c6f2c;
        }
    }
    ctx->pc = 0x2C6F14u;
label_2c6f14:
    // 0x2c6f14: 0x8ee20028  lw          $v0, 0x28($s7)
    ctx->pc = 0x2c6f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 40)));
label_2c6f18:
    // 0x2c6f18: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c6f18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c6f1c:
    // 0x2c6f1c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6f1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f20:
    // 0x2c6f20: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x2c6f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2c6f24:
    // 0x2c6f24: 0x40f809  jalr        $v0
label_2c6f28:
    if (ctx->pc == 0x2C6F28u) {
        ctx->pc = 0x2C6F2Cu;
        goto label_2c6f2c;
    }
    ctx->pc = 0x2C6F24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6F2Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6F2Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F2Cu; }
            if (ctx->pc != 0x2C6F2Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2C6F2Cu;
label_2c6f2c:
    // 0x2c6f2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6f2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6f30:
    // 0x2c6f30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c6f30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c6f34:
    // 0x2c6f34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c6f34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6f38:
    // 0x2c6f38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c6f38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c6f3c:
    // 0x2c6f3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c6f3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6f40:
    // 0x2c6f40: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c6f40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c6f44:
    // 0x2c6f44: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2c6f44u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c6f48:
    // 0x2c6f48: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2c6f48u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c6f4c:
    // 0x2c6f4c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c6f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c6f50:
    // 0x2c6f50: 0x3e00008  jr          $ra
label_2c6f54:
    if (ctx->pc == 0x2C6F54u) {
        ctx->pc = 0x2C6F54u;
            // 0x2c6f54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2C6F58u;
        goto label_2c6f58;
    }
    ctx->pc = 0x2C6F50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F50u;
            // 0x2c6f54: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6F58u;
label_2c6f58:
    // 0x2c6f58: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c6f58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2c6f5c:
    // 0x2c6f5c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c6f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c6f60:
    // 0x2c6f60: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c6f60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2c6f64:
    // 0x2c6f64: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c6f64u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f68:
    // 0x2c6f68: 0x24457088  addiu       $a1, $v0, 0x7088
    ctx->pc = 0x2c6f68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28808));
label_2c6f6c:
    // 0x2c6f6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c6f6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c6f70:
    // 0x2c6f70: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c6f70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c6f74:
    // 0x2c6f74: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c6f74u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f78:
    // 0x2c6f78: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c6f78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c6f7c:
    // 0x2c6f7c: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2c6f7cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f80:
    // 0x2c6f80: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c6f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c6f84:
    // 0x2c6f84: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2c6f84u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f88:
    // 0x2c6f88: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c6f88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2c6f8c:
    // 0x2c6f8c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c6f8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c6f90:
    // 0x2c6f90: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c6f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c6f94:
    // 0x2c6f94: 0xc0b3c92  jal         func_2CF248
label_2c6f98:
    if (ctx->pc == 0x2C6F98u) {
        ctx->pc = 0x2C6F98u;
            // 0x2c6f98: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6F9Cu;
        goto label_2c6f9c;
    }
    ctx->pc = 0x2C6F94u;
    SET_GPR_U32(ctx, 31, 0x2C6F9Cu);
    ctx->pc = 0x2C6F98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6F94u;
            // 0x2c6f98: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF248u;
    if (runtime->hasFunction(0x2CF248u)) {
        auto targetFn = runtime->lookupFunction(0x2CF248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F9Cu; }
        if (ctx->pc != 0x2C6F9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF248_0x2cf248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C6F9Cu; }
        if (ctx->pc != 0x2C6F9Cu) { return; }
    }
    ctx->pc = 0x2C6F9Cu;
label_2c6f9c:
    // 0x2c6f9c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c6f9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fa0:
    // 0x2c6fa0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c6fa0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fa4:
    // 0x2c6fa4: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c6fa4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fa8:
    // 0x2c6fa8: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2c6fa8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fac:
    // 0x2c6fac: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2c6fb0:
    if (ctx->pc == 0x2C6FB0u) {
        ctx->pc = 0x2C6FB0u;
            // 0x2c6fb0: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FB4u;
        goto label_2c6fb4;
    }
    ctx->pc = 0x2C6FACu;
    {
        const bool branch_taken_0x2c6fac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C6FB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6FACu;
            // 0x2c6fb0: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c6fac) {
            ctx->pc = 0x2C6FCCu;
            goto label_2c6fcc;
        }
    }
    ctx->pc = 0x2C6FB4u;
label_2c6fb4:
    // 0x2c6fb4: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x2c6fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_2c6fb8:
    // 0x2c6fb8: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c6fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c6fbc:
    // 0x2c6fbc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c6fbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c6fc0:
    // 0x2c6fc0: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x2c6fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_2c6fc4:
    // 0x2c6fc4: 0x40f809  jalr        $v0
label_2c6fc8:
    if (ctx->pc == 0x2C6FC8u) {
        ctx->pc = 0x2C6FCCu;
        goto label_2c6fcc;
    }
    ctx->pc = 0x2C6FC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C6FCCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C6FCCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C6FCCu; }
            if (ctx->pc != 0x2C6FCCu) { return; }
        }
        }
    }
    ctx->pc = 0x2C6FCCu;
label_2c6fcc:
    // 0x2c6fcc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c6fccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c6fd0:
    // 0x2c6fd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c6fd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c6fd4:
    // 0x2c6fd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c6fd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c6fd8:
    // 0x2c6fd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c6fd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c6fdc:
    // 0x2c6fdc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c6fdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c6fe0:
    // 0x2c6fe0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c6fe0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c6fe4:
    // 0x2c6fe4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c6fe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c6fe8:
    // 0x2c6fe8: 0x3e00008  jr          $ra
label_2c6fec:
    if (ctx->pc == 0x2C6FECu) {
        ctx->pc = 0x2C6FECu;
            // 0x2c6fec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2C6FF0u;
        goto label_2c6ff0;
    }
    ctx->pc = 0x2C6FE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C6FECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C6FE8u;
            // 0x2c6fec: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C6FF0u;
label_2c6ff0:
    // 0x2c6ff0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2c6ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2c6ff4:
    // 0x2c6ff4: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c6ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c6ff8:
    // 0x2c6ff8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c6ff8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2c6ffc:
    // 0x2c6ffc: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2c6ffcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7000:
    // 0x2c7000: 0x24457088  addiu       $a1, $v0, 0x7088
    ctx->pc = 0x2c7000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 28808));
label_2c7004:
    // 0x2c7004: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c7004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c7008:
    // 0x2c7008: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c7008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c700c:
    // 0x2c700c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c700cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c7010:
    // 0x2c7010: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c7010u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c7014:
    // 0x2c7014: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2c7014u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c7018:
    // 0x2c7018: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c7018u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c701c:
    // 0x2c701c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2c701cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c7020:
    // 0x2c7020: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c7020u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2c7024:
    // 0x2c7024: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x2c7024u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7028:
    // 0x2c7028: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2c7028u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2c702c:
    // 0x2c702c: 0xc0b3c92  jal         func_2CF248
label_2c7030:
    if (ctx->pc == 0x2C7030u) {
        ctx->pc = 0x2C7030u;
            // 0x2c7030: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7034u;
        goto label_2c7034;
    }
    ctx->pc = 0x2C702Cu;
    SET_GPR_U32(ctx, 31, 0x2C7034u);
    ctx->pc = 0x2C7030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C702Cu;
            // 0x2c7030: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF248u;
    if (runtime->hasFunction(0x2CF248u)) {
        auto targetFn = runtime->lookupFunction(0x2CF248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7034u; }
        if (ctx->pc != 0x2C7034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF248_0x2cf248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C7034u; }
        if (ctx->pc != 0x2C7034u) { return; }
    }
    ctx->pc = 0x2C7034u;
label_2c7034:
    // 0x2c7034: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c7034u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c7038:
    // 0x2c7038: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c7038u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c703c:
    // 0x2c703c: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c703cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7040:
    // 0x2c7040: 0x240402d  daddu       $t0, $s2, $zero
    ctx->pc = 0x2c7040u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c7044:
    // 0x2c7044: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2c7048:
    if (ctx->pc == 0x2C7048u) {
        ctx->pc = 0x2C7048u;
            // 0x2c7048: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C704Cu;
        goto label_2c704c;
    }
    ctx->pc = 0x2C7044u;
    {
        const bool branch_taken_0x2c7044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7044u;
            // 0x2c7048: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7044) {
            ctx->pc = 0x2C7064u;
            goto label_2c7064;
        }
    }
    ctx->pc = 0x2C704Cu;
label_2c704c:
    // 0x2c704c: 0x8ea20028  lw          $v0, 0x28($s5)
    ctx->pc = 0x2c704cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 40)));
label_2c7050:
    // 0x2c7050: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c7050u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c7054:
    // 0x2c7054: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7054u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7058:
    // 0x2c7058: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x2c7058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_2c705c:
    // 0x2c705c: 0x40f809  jalr        $v0
label_2c7060:
    if (ctx->pc == 0x2C7060u) {
        ctx->pc = 0x2C7064u;
        goto label_2c7064;
    }
    ctx->pc = 0x2C705Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C7064u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C7064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C7064u; }
            if (ctx->pc != 0x2C7064u) { return; }
        }
        }
    }
    ctx->pc = 0x2C7064u;
label_2c7064:
    // 0x2c7064: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c7064u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7068:
    // 0x2c7068: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c7068u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c706c:
    // 0x2c706c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c706cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7070:
    // 0x2c7070: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c7070u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c7074:
    // 0x2c7074: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c7074u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c7078:
    // 0x2c7078: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c7078u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c707c:
    // 0x2c707c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2c707cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c7080:
    // 0x2c7080: 0x3e00008  jr          $ra
label_2c7084:
    if (ctx->pc == 0x2C7084u) {
        ctx->pc = 0x2C7084u;
            // 0x2c7084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2C7088u;
        goto label_2c7088;
    }
    ctx->pc = 0x2C7080u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7084u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7080u;
            // 0x2c7084: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7088u;
label_2c7088:
    // 0x2c7088: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c7088u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c708c:
    // 0x2c708c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c708cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c7090:
    // 0x2c7090: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2c7090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c7094:
    // 0x2c7094: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2c7094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c7098:
    // 0x2c7098: 0x60f809  jalr        $v1
label_2c709c:
    if (ctx->pc == 0x2C709Cu) {
        ctx->pc = 0x2C70A0u;
        goto label_2c70a0;
    }
    ctx->pc = 0x2C7098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2C70A0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C70A0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C70A0u; }
            if (ctx->pc != 0x2C70A0u) { return; }
        }
        }
    }
    ctx->pc = 0x2C70A0u;
label_2c70a0:
    // 0x2c70a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c70a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c70a4:
    // 0x2c70a4: 0x3e00008  jr          $ra
label_2c70a8:
    if (ctx->pc == 0x2C70A8u) {
        ctx->pc = 0x2C70A8u;
            // 0x2c70a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C70ACu;
        goto label_2c70ac;
    }
    ctx->pc = 0x2C70A4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C70A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C70A4u;
            // 0x2c70a8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C70ACu;
label_2c70ac:
    // 0x2c70ac: 0x0  nop
    ctx->pc = 0x2c70acu;
    // NOP
label_2c70b0:
    // 0x2c70b0: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c70b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c70b4:
    // 0x2c70b4: 0xac850004  sw          $a1, 0x4($a0)
    ctx->pc = 0x2c70b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 5));
label_2c70b8:
    // 0x2c70b8: 0x24427260  addiu       $v0, $v0, 0x7260
    ctx->pc = 0x2c70b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29280));
label_2c70bc:
    // 0x2c70bc: 0x3e00008  jr          $ra
label_2c70c0:
    if (ctx->pc == 0x2C70C0u) {
        ctx->pc = 0x2C70C0u;
            // 0x2c70c0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2C70C4u;
        goto label_2c70c4;
    }
    ctx->pc = 0x2C70BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C70C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C70BCu;
            // 0x2c70c0: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C70C4u;
label_2c70c4:
    // 0x2c70c4: 0x0  nop
    ctx->pc = 0x2c70c4u;
    // NOP
label_2c70c8:
    // 0x2c70c8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c70c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c70cc:
    // 0x2c70cc: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c70ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c70d0:
    // 0x2c70d0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c70d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c70d4:
    // 0x2c70d4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c70d4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c70d8:
    // 0x2c70d8: 0x24457260  addiu       $a1, $v0, 0x7260
    ctx->pc = 0x2c70d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29280));
label_2c70dc:
    // 0x2c70dc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c70dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c70e0:
    // 0x2c70e0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c70e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c70e4:
    // 0x2c70e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2c70e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c70e8:
    // 0x2c70e8: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2c70e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2c70ec:
    // 0x2c70ec: 0xc0b3c88  jal         func_2CF220
label_2c70f0:
    if (ctx->pc == 0x2C70F0u) {
        ctx->pc = 0x2C70F0u;
            // 0x2c70f0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C70F4u;
        goto label_2c70f4;
    }
    ctx->pc = 0x2C70ECu;
    SET_GPR_U32(ctx, 31, 0x2C70F4u);
    ctx->pc = 0x2C70F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C70ECu;
            // 0x2c70f0: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF220u;
    if (runtime->hasFunction(0x2CF220u)) {
        auto targetFn = runtime->lookupFunction(0x2CF220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70F4u; }
        if (ctx->pc != 0x2C70F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF220_0x2cf220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C70F4u; }
        if (ctx->pc != 0x2C70F4u) { return; }
    }
    ctx->pc = 0x2C70F4u;
label_2c70f4:
    // 0x2c70f4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c70f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c70f8:
    // 0x2c70f8: 0x1440000c  bnez        $v0, . + 4 + (0xC << 2)
label_2c70fc:
    if (ctx->pc == 0x2C70FCu) {
        ctx->pc = 0x2C70FCu;
            // 0x2c70fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C7100u;
        goto label_2c7100;
    }
    ctx->pc = 0x2C70F8u;
    {
        const bool branch_taken_0x2c70f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C70FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C70F8u;
            // 0x2c70fc: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c70f8) {
            ctx->pc = 0x2C712Cu;
            goto label_2c712c;
        }
    }
    ctx->pc = 0x2C7100u;
label_2c7100:
    // 0x2c7100: 0x8e420028  lw          $v0, 0x28($s2)
    ctx->pc = 0x2c7100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_2c7104:
    // 0x2c7104: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c7104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c7108:
    // 0x2c7108: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c710c:
    // 0x2c710c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x2c710cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_2c7110:
    // 0x2c7110: 0x40f809  jalr        $v0
label_2c7114:
    if (ctx->pc == 0x2C7114u) {
        ctx->pc = 0x2C7118u;
        goto label_2c7118;
    }
    ctx->pc = 0x2C7110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C7118u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C7118u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C7118u; }
            if (ctx->pc != 0x2C7118u) { return; }
        }
        }
    }
    ctx->pc = 0x2C7118u;
label_2c7118:
    // 0x2c7118: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2c711c:
    if (ctx->pc == 0x2C711Cu) {
        ctx->pc = 0x2C711Cu;
            // 0x2c711c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2C7120u;
        goto label_2c7120;
    }
    ctx->pc = 0x2C7118u;
    {
        const bool branch_taken_0x2c7118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C711Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7118u;
            // 0x2c711c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7118) {
            ctx->pc = 0x2C7130u;
            goto label_2c7130;
        }
    }
    ctx->pc = 0x2C7120u;
label_2c7120:
    // 0x2c7120: 0x8e43002c  lw          $v1, 0x2C($s2)
    ctx->pc = 0x2c7120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 44)));
label_2c7124:
    // 0x2c7124: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x2c7124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
label_2c7128:
    // 0x2c7128: 0xae43002c  sw          $v1, 0x2C($s2)
    ctx->pc = 0x2c7128u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 3));
label_2c712c:
    // 0x2c712c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c712cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c7130:
    // 0x2c7130: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c7130u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c7134:
    // 0x2c7134: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c7134u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c7138:
    // 0x2c7138: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c7138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c713c:
    // 0x2c713c: 0x3e00008  jr          $ra
label_2c7140:
    if (ctx->pc == 0x2C7140u) {
        ctx->pc = 0x2C7140u;
            // 0x2c7140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C7144u;
        goto label_2c7144;
    }
    ctx->pc = 0x2C713Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C7140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C713Cu;
            // 0x2c7140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C7144u;
label_2c7144:
    // 0x2c7144: 0x0  nop
    ctx->pc = 0x2c7144u;
    // NOP
label_2c7148:
    // 0x2c7148: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2c7148u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2c714c:
    // 0x2c714c: 0x3c02002c  lui         $v0, 0x2C
    ctx->pc = 0x2c714cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)44 << 16));
label_2c7150:
    // 0x2c7150: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c7150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c7154:
    // 0x2c7154: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2c7154u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c7158:
    // 0x2c7158: 0x24457260  addiu       $a1, $v0, 0x7260
    ctx->pc = 0x2c7158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 29280));
label_2c715c:
    // 0x2c715c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c715cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c7160:
    // 0x2c7160: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c7160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c7164:
    // 0x2c7164: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2c7164u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c7168:
    // 0x2c7168: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c7168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c716c:
    // 0x2c716c: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c716cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c7170:
    // 0x2c7170: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2c7170u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2c7174:
    // 0x2c7174: 0xc0b3c92  jal         func_2CF248
label_2c7178:
    if (ctx->pc == 0x2C7178u) {
        ctx->pc = 0x2C7178u;
            // 0x2c7178: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C717Cu;
        goto label_2c717c;
    }
    ctx->pc = 0x2C7174u;
    SET_GPR_U32(ctx, 31, 0x2C717Cu);
    ctx->pc = 0x2C7178u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7174u;
            // 0x2c7178: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CF248u;
    if (runtime->hasFunction(0x2CF248u)) {
        auto targetFn = runtime->lookupFunction(0x2CF248u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C717Cu; }
        if (ctx->pc != 0x2C717Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CF248_0x2cf248(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C717Cu; }
        if (ctx->pc != 0x2C717Cu) { return; }
    }
    ctx->pc = 0x2C717Cu;
label_2c717c:
    // 0x2c717c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2c717cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2c7180:
    // 0x2c7180: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c7180u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7184:
    // 0x2c7184: 0x2402021a  addiu       $v0, $zero, 0x21A
    ctx->pc = 0x2c7184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 538));
label_2c7188:
    // 0x2c7188: 0x38830202  xori        $v1, $a0, 0x202
    ctx->pc = 0x2c7188u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)514);
label_2c718c:
    // 0x2c718c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2c718cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c7190:
    // 0x2c7190: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x2c7190u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c7194:
    // 0x2c7194: 0x14800007  bnez        $a0, . + 4 + (0x7 << 2)
label_2c7198:
    if (ctx->pc == 0x2C7198u) {
        ctx->pc = 0x2C7198u;
            // 0x2c7198: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->pc = 0x2C719Cu;
        goto label_2c719c;
    }
    ctx->pc = 0x2C7194u;
    {
        const bool branch_taken_0x2c7194 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C7198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C7194u;
            // 0x2c7198: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c7194) {
            ctx->pc = 0x2C71B4u;
            goto label_2c71b4;
        }
    }
    ctx->pc = 0x2C719Cu;
label_2c719c:
    // 0x2c719c: 0x8e620028  lw          $v0, 0x28($s3)
    ctx->pc = 0x2c719cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 40)));
label_2c71a0:
    // 0x2c71a0: 0x8c43000c  lw          $v1, 0xC($v0)
    ctx->pc = 0x2c71a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c71a4:
    // 0x2c71a4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2c71a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c71a8:
    // 0x2c71a8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c71a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2c71ac:
    // 0x2c71ac: 0x40f809  jalr        $v0
label_2c71b0:
    if (ctx->pc == 0x2C71B0u) {
        ctx->pc = 0x2C71B4u;
        goto label_2c71b4;
    }
    ctx->pc = 0x2C71ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C71B4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C71B4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C71B4u; }
            if (ctx->pc != 0x2C71B4u) { return; }
        }
        }
    }
    ctx->pc = 0x2C71B4u;
label_2c71b4:
    // 0x2c71b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c71b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c71b8:
    // 0x2c71b8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c71b8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c71bc:
    // 0x2c71bc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c71bcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c71c0:
    // 0x2c71c0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c71c0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c71c4:
    // 0x2c71c4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2c71c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c71c8:
    // 0x2c71c8: 0x3e00008  jr          $ra
label_2c71cc:
    if (ctx->pc == 0x2C71CCu) {
        ctx->pc = 0x2C71CCu;
            // 0x2c71cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2C71D0u;
        goto label_fallthrough_0x2c71c8;
    }
    ctx->pc = 0x2C71C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C71CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C71C8u;
            // 0x2c71cc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2c71c8:
    ctx->pc = 0x2C71D0u;
    ctx->pc = 0x2c71d0u;
}
