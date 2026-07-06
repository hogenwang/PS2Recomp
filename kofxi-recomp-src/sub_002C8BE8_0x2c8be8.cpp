#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C8BE8
// Address: 0x2c8be8 - 0x2c99b8
void sub_002C8BE8_0x2c8be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C8BE8_0x2c8be8");
#endif

    switch (ctx->pc) {
        case 0x2c8be8u: goto label_2c8be8;
        case 0x2c8becu: goto label_2c8bec;
        case 0x2c8bf0u: goto label_2c8bf0;
        case 0x2c8bf4u: goto label_2c8bf4;
        case 0x2c8bf8u: goto label_2c8bf8;
        case 0x2c8bfcu: goto label_2c8bfc;
        case 0x2c8c00u: goto label_2c8c00;
        case 0x2c8c04u: goto label_2c8c04;
        case 0x2c8c08u: goto label_2c8c08;
        case 0x2c8c0cu: goto label_2c8c0c;
        case 0x2c8c10u: goto label_2c8c10;
        case 0x2c8c14u: goto label_2c8c14;
        case 0x2c8c18u: goto label_2c8c18;
        case 0x2c8c1cu: goto label_2c8c1c;
        case 0x2c8c20u: goto label_2c8c20;
        case 0x2c8c24u: goto label_2c8c24;
        case 0x2c8c28u: goto label_2c8c28;
        case 0x2c8c2cu: goto label_2c8c2c;
        case 0x2c8c30u: goto label_2c8c30;
        case 0x2c8c34u: goto label_2c8c34;
        case 0x2c8c38u: goto label_2c8c38;
        case 0x2c8c3cu: goto label_2c8c3c;
        case 0x2c8c40u: goto label_2c8c40;
        case 0x2c8c44u: goto label_2c8c44;
        case 0x2c8c48u: goto label_2c8c48;
        case 0x2c8c4cu: goto label_2c8c4c;
        case 0x2c8c50u: goto label_2c8c50;
        case 0x2c8c54u: goto label_2c8c54;
        case 0x2c8c58u: goto label_2c8c58;
        case 0x2c8c5cu: goto label_2c8c5c;
        case 0x2c8c60u: goto label_2c8c60;
        case 0x2c8c64u: goto label_2c8c64;
        case 0x2c8c68u: goto label_2c8c68;
        case 0x2c8c6cu: goto label_2c8c6c;
        case 0x2c8c70u: goto label_2c8c70;
        case 0x2c8c74u: goto label_2c8c74;
        case 0x2c8c78u: goto label_2c8c78;
        case 0x2c8c7cu: goto label_2c8c7c;
        case 0x2c8c80u: goto label_2c8c80;
        case 0x2c8c84u: goto label_2c8c84;
        case 0x2c8c88u: goto label_2c8c88;
        case 0x2c8c8cu: goto label_2c8c8c;
        case 0x2c8c90u: goto label_2c8c90;
        case 0x2c8c94u: goto label_2c8c94;
        case 0x2c8c98u: goto label_2c8c98;
        case 0x2c8c9cu: goto label_2c8c9c;
        case 0x2c8ca0u: goto label_2c8ca0;
        case 0x2c8ca4u: goto label_2c8ca4;
        case 0x2c8ca8u: goto label_2c8ca8;
        case 0x2c8cacu: goto label_2c8cac;
        case 0x2c8cb0u: goto label_2c8cb0;
        case 0x2c8cb4u: goto label_2c8cb4;
        case 0x2c8cb8u: goto label_2c8cb8;
        case 0x2c8cbcu: goto label_2c8cbc;
        case 0x2c8cc0u: goto label_2c8cc0;
        case 0x2c8cc4u: goto label_2c8cc4;
        case 0x2c8cc8u: goto label_2c8cc8;
        case 0x2c8cccu: goto label_2c8ccc;
        case 0x2c8cd0u: goto label_2c8cd0;
        case 0x2c8cd4u: goto label_2c8cd4;
        case 0x2c8cd8u: goto label_2c8cd8;
        case 0x2c8cdcu: goto label_2c8cdc;
        case 0x2c8ce0u: goto label_2c8ce0;
        case 0x2c8ce4u: goto label_2c8ce4;
        case 0x2c8ce8u: goto label_2c8ce8;
        case 0x2c8cecu: goto label_2c8cec;
        case 0x2c8cf0u: goto label_2c8cf0;
        case 0x2c8cf4u: goto label_2c8cf4;
        case 0x2c8cf8u: goto label_2c8cf8;
        case 0x2c8cfcu: goto label_2c8cfc;
        case 0x2c8d00u: goto label_2c8d00;
        case 0x2c8d04u: goto label_2c8d04;
        case 0x2c8d08u: goto label_2c8d08;
        case 0x2c8d0cu: goto label_2c8d0c;
        case 0x2c8d10u: goto label_2c8d10;
        case 0x2c8d14u: goto label_2c8d14;
        case 0x2c8d18u: goto label_2c8d18;
        case 0x2c8d1cu: goto label_2c8d1c;
        case 0x2c8d20u: goto label_2c8d20;
        case 0x2c8d24u: goto label_2c8d24;
        case 0x2c8d28u: goto label_2c8d28;
        case 0x2c8d2cu: goto label_2c8d2c;
        case 0x2c8d30u: goto label_2c8d30;
        case 0x2c8d34u: goto label_2c8d34;
        case 0x2c8d38u: goto label_2c8d38;
        case 0x2c8d3cu: goto label_2c8d3c;
        case 0x2c8d40u: goto label_2c8d40;
        case 0x2c8d44u: goto label_2c8d44;
        case 0x2c8d48u: goto label_2c8d48;
        case 0x2c8d4cu: goto label_2c8d4c;
        case 0x2c8d50u: goto label_2c8d50;
        case 0x2c8d54u: goto label_2c8d54;
        case 0x2c8d58u: goto label_2c8d58;
        case 0x2c8d5cu: goto label_2c8d5c;
        case 0x2c8d60u: goto label_2c8d60;
        case 0x2c8d64u: goto label_2c8d64;
        case 0x2c8d68u: goto label_2c8d68;
        case 0x2c8d6cu: goto label_2c8d6c;
        case 0x2c8d70u: goto label_2c8d70;
        case 0x2c8d74u: goto label_2c8d74;
        case 0x2c8d78u: goto label_2c8d78;
        case 0x2c8d7cu: goto label_2c8d7c;
        case 0x2c8d80u: goto label_2c8d80;
        case 0x2c8d84u: goto label_2c8d84;
        case 0x2c8d88u: goto label_2c8d88;
        case 0x2c8d8cu: goto label_2c8d8c;
        case 0x2c8d90u: goto label_2c8d90;
        case 0x2c8d94u: goto label_2c8d94;
        case 0x2c8d98u: goto label_2c8d98;
        case 0x2c8d9cu: goto label_2c8d9c;
        case 0x2c8da0u: goto label_2c8da0;
        case 0x2c8da4u: goto label_2c8da4;
        case 0x2c8da8u: goto label_2c8da8;
        case 0x2c8dacu: goto label_2c8dac;
        case 0x2c8db0u: goto label_2c8db0;
        case 0x2c8db4u: goto label_2c8db4;
        case 0x2c8db8u: goto label_2c8db8;
        case 0x2c8dbcu: goto label_2c8dbc;
        case 0x2c8dc0u: goto label_2c8dc0;
        case 0x2c8dc4u: goto label_2c8dc4;
        case 0x2c8dc8u: goto label_2c8dc8;
        case 0x2c8dccu: goto label_2c8dcc;
        case 0x2c8dd0u: goto label_2c8dd0;
        case 0x2c8dd4u: goto label_2c8dd4;
        case 0x2c8dd8u: goto label_2c8dd8;
        case 0x2c8ddcu: goto label_2c8ddc;
        case 0x2c8de0u: goto label_2c8de0;
        case 0x2c8de4u: goto label_2c8de4;
        case 0x2c8de8u: goto label_2c8de8;
        case 0x2c8decu: goto label_2c8dec;
        case 0x2c8df0u: goto label_2c8df0;
        case 0x2c8df4u: goto label_2c8df4;
        case 0x2c8df8u: goto label_2c8df8;
        case 0x2c8dfcu: goto label_2c8dfc;
        case 0x2c8e00u: goto label_2c8e00;
        case 0x2c8e04u: goto label_2c8e04;
        case 0x2c8e08u: goto label_2c8e08;
        case 0x2c8e0cu: goto label_2c8e0c;
        case 0x2c8e10u: goto label_2c8e10;
        case 0x2c8e14u: goto label_2c8e14;
        case 0x2c8e18u: goto label_2c8e18;
        case 0x2c8e1cu: goto label_2c8e1c;
        case 0x2c8e20u: goto label_2c8e20;
        case 0x2c8e24u: goto label_2c8e24;
        case 0x2c8e28u: goto label_2c8e28;
        case 0x2c8e2cu: goto label_2c8e2c;
        case 0x2c8e30u: goto label_2c8e30;
        case 0x2c8e34u: goto label_2c8e34;
        case 0x2c8e38u: goto label_2c8e38;
        case 0x2c8e3cu: goto label_2c8e3c;
        case 0x2c8e40u: goto label_2c8e40;
        case 0x2c8e44u: goto label_2c8e44;
        case 0x2c8e48u: goto label_2c8e48;
        case 0x2c8e4cu: goto label_2c8e4c;
        case 0x2c8e50u: goto label_2c8e50;
        case 0x2c8e54u: goto label_2c8e54;
        case 0x2c8e58u: goto label_2c8e58;
        case 0x2c8e5cu: goto label_2c8e5c;
        case 0x2c8e60u: goto label_2c8e60;
        case 0x2c8e64u: goto label_2c8e64;
        case 0x2c8e68u: goto label_2c8e68;
        case 0x2c8e6cu: goto label_2c8e6c;
        case 0x2c8e70u: goto label_2c8e70;
        case 0x2c8e74u: goto label_2c8e74;
        case 0x2c8e78u: goto label_2c8e78;
        case 0x2c8e7cu: goto label_2c8e7c;
        case 0x2c8e80u: goto label_2c8e80;
        case 0x2c8e84u: goto label_2c8e84;
        case 0x2c8e88u: goto label_2c8e88;
        case 0x2c8e8cu: goto label_2c8e8c;
        case 0x2c8e90u: goto label_2c8e90;
        case 0x2c8e94u: goto label_2c8e94;
        case 0x2c8e98u: goto label_2c8e98;
        case 0x2c8e9cu: goto label_2c8e9c;
        case 0x2c8ea0u: goto label_2c8ea0;
        case 0x2c8ea4u: goto label_2c8ea4;
        case 0x2c8ea8u: goto label_2c8ea8;
        case 0x2c8eacu: goto label_2c8eac;
        case 0x2c8eb0u: goto label_2c8eb0;
        case 0x2c8eb4u: goto label_2c8eb4;
        case 0x2c8eb8u: goto label_2c8eb8;
        case 0x2c8ebcu: goto label_2c8ebc;
        case 0x2c8ec0u: goto label_2c8ec0;
        case 0x2c8ec4u: goto label_2c8ec4;
        case 0x2c8ec8u: goto label_2c8ec8;
        case 0x2c8eccu: goto label_2c8ecc;
        case 0x2c8ed0u: goto label_2c8ed0;
        case 0x2c8ed4u: goto label_2c8ed4;
        case 0x2c8ed8u: goto label_2c8ed8;
        case 0x2c8edcu: goto label_2c8edc;
        case 0x2c8ee0u: goto label_2c8ee0;
        case 0x2c8ee4u: goto label_2c8ee4;
        case 0x2c8ee8u: goto label_2c8ee8;
        case 0x2c8eecu: goto label_2c8eec;
        case 0x2c8ef0u: goto label_2c8ef0;
        case 0x2c8ef4u: goto label_2c8ef4;
        case 0x2c8ef8u: goto label_2c8ef8;
        case 0x2c8efcu: goto label_2c8efc;
        case 0x2c8f00u: goto label_2c8f00;
        case 0x2c8f04u: goto label_2c8f04;
        case 0x2c8f08u: goto label_2c8f08;
        case 0x2c8f0cu: goto label_2c8f0c;
        case 0x2c8f10u: goto label_2c8f10;
        case 0x2c8f14u: goto label_2c8f14;
        case 0x2c8f18u: goto label_2c8f18;
        case 0x2c8f1cu: goto label_2c8f1c;
        case 0x2c8f20u: goto label_2c8f20;
        case 0x2c8f24u: goto label_2c8f24;
        case 0x2c8f28u: goto label_2c8f28;
        case 0x2c8f2cu: goto label_2c8f2c;
        case 0x2c8f30u: goto label_2c8f30;
        case 0x2c8f34u: goto label_2c8f34;
        case 0x2c8f38u: goto label_2c8f38;
        case 0x2c8f3cu: goto label_2c8f3c;
        case 0x2c8f40u: goto label_2c8f40;
        case 0x2c8f44u: goto label_2c8f44;
        case 0x2c8f48u: goto label_2c8f48;
        case 0x2c8f4cu: goto label_2c8f4c;
        case 0x2c8f50u: goto label_2c8f50;
        case 0x2c8f54u: goto label_2c8f54;
        case 0x2c8f58u: goto label_2c8f58;
        case 0x2c8f5cu: goto label_2c8f5c;
        case 0x2c8f60u: goto label_2c8f60;
        case 0x2c8f64u: goto label_2c8f64;
        case 0x2c8f68u: goto label_2c8f68;
        case 0x2c8f6cu: goto label_2c8f6c;
        case 0x2c8f70u: goto label_2c8f70;
        case 0x2c8f74u: goto label_2c8f74;
        case 0x2c8f78u: goto label_2c8f78;
        case 0x2c8f7cu: goto label_2c8f7c;
        case 0x2c8f80u: goto label_2c8f80;
        case 0x2c8f84u: goto label_2c8f84;
        case 0x2c8f88u: goto label_2c8f88;
        case 0x2c8f8cu: goto label_2c8f8c;
        case 0x2c8f90u: goto label_2c8f90;
        case 0x2c8f94u: goto label_2c8f94;
        case 0x2c8f98u: goto label_2c8f98;
        case 0x2c8f9cu: goto label_2c8f9c;
        case 0x2c8fa0u: goto label_2c8fa0;
        case 0x2c8fa4u: goto label_2c8fa4;
        case 0x2c8fa8u: goto label_2c8fa8;
        case 0x2c8facu: goto label_2c8fac;
        case 0x2c8fb0u: goto label_2c8fb0;
        case 0x2c8fb4u: goto label_2c8fb4;
        case 0x2c8fb8u: goto label_2c8fb8;
        case 0x2c8fbcu: goto label_2c8fbc;
        case 0x2c8fc0u: goto label_2c8fc0;
        case 0x2c8fc4u: goto label_2c8fc4;
        case 0x2c8fc8u: goto label_2c8fc8;
        case 0x2c8fccu: goto label_2c8fcc;
        case 0x2c8fd0u: goto label_2c8fd0;
        case 0x2c8fd4u: goto label_2c8fd4;
        case 0x2c8fd8u: goto label_2c8fd8;
        case 0x2c8fdcu: goto label_2c8fdc;
        case 0x2c8fe0u: goto label_2c8fe0;
        case 0x2c8fe4u: goto label_2c8fe4;
        case 0x2c8fe8u: goto label_2c8fe8;
        case 0x2c8fecu: goto label_2c8fec;
        case 0x2c8ff0u: goto label_2c8ff0;
        case 0x2c8ff4u: goto label_2c8ff4;
        case 0x2c8ff8u: goto label_2c8ff8;
        case 0x2c8ffcu: goto label_2c8ffc;
        case 0x2c9000u: goto label_2c9000;
        case 0x2c9004u: goto label_2c9004;
        case 0x2c9008u: goto label_2c9008;
        case 0x2c900cu: goto label_2c900c;
        case 0x2c9010u: goto label_2c9010;
        case 0x2c9014u: goto label_2c9014;
        case 0x2c9018u: goto label_2c9018;
        case 0x2c901cu: goto label_2c901c;
        case 0x2c9020u: goto label_2c9020;
        case 0x2c9024u: goto label_2c9024;
        case 0x2c9028u: goto label_2c9028;
        case 0x2c902cu: goto label_2c902c;
        case 0x2c9030u: goto label_2c9030;
        case 0x2c9034u: goto label_2c9034;
        case 0x2c9038u: goto label_2c9038;
        case 0x2c903cu: goto label_2c903c;
        case 0x2c9040u: goto label_2c9040;
        case 0x2c9044u: goto label_2c9044;
        case 0x2c9048u: goto label_2c9048;
        case 0x2c904cu: goto label_2c904c;
        case 0x2c9050u: goto label_2c9050;
        case 0x2c9054u: goto label_2c9054;
        case 0x2c9058u: goto label_2c9058;
        case 0x2c905cu: goto label_2c905c;
        case 0x2c9060u: goto label_2c9060;
        case 0x2c9064u: goto label_2c9064;
        case 0x2c9068u: goto label_2c9068;
        case 0x2c906cu: goto label_2c906c;
        case 0x2c9070u: goto label_2c9070;
        case 0x2c9074u: goto label_2c9074;
        case 0x2c9078u: goto label_2c9078;
        case 0x2c907cu: goto label_2c907c;
        case 0x2c9080u: goto label_2c9080;
        case 0x2c9084u: goto label_2c9084;
        case 0x2c9088u: goto label_2c9088;
        case 0x2c908cu: goto label_2c908c;
        case 0x2c9090u: goto label_2c9090;
        case 0x2c9094u: goto label_2c9094;
        case 0x2c9098u: goto label_2c9098;
        case 0x2c909cu: goto label_2c909c;
        case 0x2c90a0u: goto label_2c90a0;
        case 0x2c90a4u: goto label_2c90a4;
        case 0x2c90a8u: goto label_2c90a8;
        case 0x2c90acu: goto label_2c90ac;
        case 0x2c90b0u: goto label_2c90b0;
        case 0x2c90b4u: goto label_2c90b4;
        case 0x2c90b8u: goto label_2c90b8;
        case 0x2c90bcu: goto label_2c90bc;
        case 0x2c90c0u: goto label_2c90c0;
        case 0x2c90c4u: goto label_2c90c4;
        case 0x2c90c8u: goto label_2c90c8;
        case 0x2c90ccu: goto label_2c90cc;
        case 0x2c90d0u: goto label_2c90d0;
        case 0x2c90d4u: goto label_2c90d4;
        case 0x2c90d8u: goto label_2c90d8;
        case 0x2c90dcu: goto label_2c90dc;
        case 0x2c90e0u: goto label_2c90e0;
        case 0x2c90e4u: goto label_2c90e4;
        case 0x2c90e8u: goto label_2c90e8;
        case 0x2c90ecu: goto label_2c90ec;
        case 0x2c90f0u: goto label_2c90f0;
        case 0x2c90f4u: goto label_2c90f4;
        case 0x2c90f8u: goto label_2c90f8;
        case 0x2c90fcu: goto label_2c90fc;
        case 0x2c9100u: goto label_2c9100;
        case 0x2c9104u: goto label_2c9104;
        case 0x2c9108u: goto label_2c9108;
        case 0x2c910cu: goto label_2c910c;
        case 0x2c9110u: goto label_2c9110;
        case 0x2c9114u: goto label_2c9114;
        case 0x2c9118u: goto label_2c9118;
        case 0x2c911cu: goto label_2c911c;
        case 0x2c9120u: goto label_2c9120;
        case 0x2c9124u: goto label_2c9124;
        case 0x2c9128u: goto label_2c9128;
        case 0x2c912cu: goto label_2c912c;
        case 0x2c9130u: goto label_2c9130;
        case 0x2c9134u: goto label_2c9134;
        case 0x2c9138u: goto label_2c9138;
        case 0x2c913cu: goto label_2c913c;
        case 0x2c9140u: goto label_2c9140;
        case 0x2c9144u: goto label_2c9144;
        case 0x2c9148u: goto label_2c9148;
        case 0x2c914cu: goto label_2c914c;
        case 0x2c9150u: goto label_2c9150;
        case 0x2c9154u: goto label_2c9154;
        case 0x2c9158u: goto label_2c9158;
        case 0x2c915cu: goto label_2c915c;
        case 0x2c9160u: goto label_2c9160;
        case 0x2c9164u: goto label_2c9164;
        case 0x2c9168u: goto label_2c9168;
        case 0x2c916cu: goto label_2c916c;
        case 0x2c9170u: goto label_2c9170;
        case 0x2c9174u: goto label_2c9174;
        case 0x2c9178u: goto label_2c9178;
        case 0x2c917cu: goto label_2c917c;
        case 0x2c9180u: goto label_2c9180;
        case 0x2c9184u: goto label_2c9184;
        case 0x2c9188u: goto label_2c9188;
        case 0x2c918cu: goto label_2c918c;
        case 0x2c9190u: goto label_2c9190;
        case 0x2c9194u: goto label_2c9194;
        case 0x2c9198u: goto label_2c9198;
        case 0x2c919cu: goto label_2c919c;
        case 0x2c91a0u: goto label_2c91a0;
        case 0x2c91a4u: goto label_2c91a4;
        case 0x2c91a8u: goto label_2c91a8;
        case 0x2c91acu: goto label_2c91ac;
        case 0x2c91b0u: goto label_2c91b0;
        case 0x2c91b4u: goto label_2c91b4;
        case 0x2c91b8u: goto label_2c91b8;
        case 0x2c91bcu: goto label_2c91bc;
        case 0x2c91c0u: goto label_2c91c0;
        case 0x2c91c4u: goto label_2c91c4;
        case 0x2c91c8u: goto label_2c91c8;
        case 0x2c91ccu: goto label_2c91cc;
        case 0x2c91d0u: goto label_2c91d0;
        case 0x2c91d4u: goto label_2c91d4;
        case 0x2c91d8u: goto label_2c91d8;
        case 0x2c91dcu: goto label_2c91dc;
        case 0x2c91e0u: goto label_2c91e0;
        case 0x2c91e4u: goto label_2c91e4;
        case 0x2c91e8u: goto label_2c91e8;
        case 0x2c91ecu: goto label_2c91ec;
        case 0x2c91f0u: goto label_2c91f0;
        case 0x2c91f4u: goto label_2c91f4;
        case 0x2c91f8u: goto label_2c91f8;
        case 0x2c91fcu: goto label_2c91fc;
        case 0x2c9200u: goto label_2c9200;
        case 0x2c9204u: goto label_2c9204;
        case 0x2c9208u: goto label_2c9208;
        case 0x2c920cu: goto label_2c920c;
        case 0x2c9210u: goto label_2c9210;
        case 0x2c9214u: goto label_2c9214;
        case 0x2c9218u: goto label_2c9218;
        case 0x2c921cu: goto label_2c921c;
        case 0x2c9220u: goto label_2c9220;
        case 0x2c9224u: goto label_2c9224;
        case 0x2c9228u: goto label_2c9228;
        case 0x2c922cu: goto label_2c922c;
        case 0x2c9230u: goto label_2c9230;
        case 0x2c9234u: goto label_2c9234;
        case 0x2c9238u: goto label_2c9238;
        case 0x2c923cu: goto label_2c923c;
        case 0x2c9240u: goto label_2c9240;
        case 0x2c9244u: goto label_2c9244;
        case 0x2c9248u: goto label_2c9248;
        case 0x2c924cu: goto label_2c924c;
        case 0x2c9250u: goto label_2c9250;
        case 0x2c9254u: goto label_2c9254;
        case 0x2c9258u: goto label_2c9258;
        case 0x2c925cu: goto label_2c925c;
        case 0x2c9260u: goto label_2c9260;
        case 0x2c9264u: goto label_2c9264;
        case 0x2c9268u: goto label_2c9268;
        case 0x2c926cu: goto label_2c926c;
        case 0x2c9270u: goto label_2c9270;
        case 0x2c9274u: goto label_2c9274;
        case 0x2c9278u: goto label_2c9278;
        case 0x2c927cu: goto label_2c927c;
        case 0x2c9280u: goto label_2c9280;
        case 0x2c9284u: goto label_2c9284;
        case 0x2c9288u: goto label_2c9288;
        case 0x2c928cu: goto label_2c928c;
        case 0x2c9290u: goto label_2c9290;
        case 0x2c9294u: goto label_2c9294;
        case 0x2c9298u: goto label_2c9298;
        case 0x2c929cu: goto label_2c929c;
        case 0x2c92a0u: goto label_2c92a0;
        case 0x2c92a4u: goto label_2c92a4;
        case 0x2c92a8u: goto label_2c92a8;
        case 0x2c92acu: goto label_2c92ac;
        case 0x2c92b0u: goto label_2c92b0;
        case 0x2c92b4u: goto label_2c92b4;
        case 0x2c92b8u: goto label_2c92b8;
        case 0x2c92bcu: goto label_2c92bc;
        case 0x2c92c0u: goto label_2c92c0;
        case 0x2c92c4u: goto label_2c92c4;
        case 0x2c92c8u: goto label_2c92c8;
        case 0x2c92ccu: goto label_2c92cc;
        case 0x2c92d0u: goto label_2c92d0;
        case 0x2c92d4u: goto label_2c92d4;
        case 0x2c92d8u: goto label_2c92d8;
        case 0x2c92dcu: goto label_2c92dc;
        case 0x2c92e0u: goto label_2c92e0;
        case 0x2c92e4u: goto label_2c92e4;
        case 0x2c92e8u: goto label_2c92e8;
        case 0x2c92ecu: goto label_2c92ec;
        case 0x2c92f0u: goto label_2c92f0;
        case 0x2c92f4u: goto label_2c92f4;
        case 0x2c92f8u: goto label_2c92f8;
        case 0x2c92fcu: goto label_2c92fc;
        case 0x2c9300u: goto label_2c9300;
        case 0x2c9304u: goto label_2c9304;
        case 0x2c9308u: goto label_2c9308;
        case 0x2c930cu: goto label_2c930c;
        case 0x2c9310u: goto label_2c9310;
        case 0x2c9314u: goto label_2c9314;
        case 0x2c9318u: goto label_2c9318;
        case 0x2c931cu: goto label_2c931c;
        case 0x2c9320u: goto label_2c9320;
        case 0x2c9324u: goto label_2c9324;
        case 0x2c9328u: goto label_2c9328;
        case 0x2c932cu: goto label_2c932c;
        case 0x2c9330u: goto label_2c9330;
        case 0x2c9334u: goto label_2c9334;
        case 0x2c9338u: goto label_2c9338;
        case 0x2c933cu: goto label_2c933c;
        case 0x2c9340u: goto label_2c9340;
        case 0x2c9344u: goto label_2c9344;
        case 0x2c9348u: goto label_2c9348;
        case 0x2c934cu: goto label_2c934c;
        case 0x2c9350u: goto label_2c9350;
        case 0x2c9354u: goto label_2c9354;
        case 0x2c9358u: goto label_2c9358;
        case 0x2c935cu: goto label_2c935c;
        case 0x2c9360u: goto label_2c9360;
        case 0x2c9364u: goto label_2c9364;
        case 0x2c9368u: goto label_2c9368;
        case 0x2c936cu: goto label_2c936c;
        case 0x2c9370u: goto label_2c9370;
        case 0x2c9374u: goto label_2c9374;
        case 0x2c9378u: goto label_2c9378;
        case 0x2c937cu: goto label_2c937c;
        case 0x2c9380u: goto label_2c9380;
        case 0x2c9384u: goto label_2c9384;
        case 0x2c9388u: goto label_2c9388;
        case 0x2c938cu: goto label_2c938c;
        case 0x2c9390u: goto label_2c9390;
        case 0x2c9394u: goto label_2c9394;
        case 0x2c9398u: goto label_2c9398;
        case 0x2c939cu: goto label_2c939c;
        case 0x2c93a0u: goto label_2c93a0;
        case 0x2c93a4u: goto label_2c93a4;
        case 0x2c93a8u: goto label_2c93a8;
        case 0x2c93acu: goto label_2c93ac;
        case 0x2c93b0u: goto label_2c93b0;
        case 0x2c93b4u: goto label_2c93b4;
        case 0x2c93b8u: goto label_2c93b8;
        case 0x2c93bcu: goto label_2c93bc;
        case 0x2c93c0u: goto label_2c93c0;
        case 0x2c93c4u: goto label_2c93c4;
        case 0x2c93c8u: goto label_2c93c8;
        case 0x2c93ccu: goto label_2c93cc;
        case 0x2c93d0u: goto label_2c93d0;
        case 0x2c93d4u: goto label_2c93d4;
        case 0x2c93d8u: goto label_2c93d8;
        case 0x2c93dcu: goto label_2c93dc;
        case 0x2c93e0u: goto label_2c93e0;
        case 0x2c93e4u: goto label_2c93e4;
        case 0x2c93e8u: goto label_2c93e8;
        case 0x2c93ecu: goto label_2c93ec;
        case 0x2c93f0u: goto label_2c93f0;
        case 0x2c93f4u: goto label_2c93f4;
        case 0x2c93f8u: goto label_2c93f8;
        case 0x2c93fcu: goto label_2c93fc;
        case 0x2c9400u: goto label_2c9400;
        case 0x2c9404u: goto label_2c9404;
        case 0x2c9408u: goto label_2c9408;
        case 0x2c940cu: goto label_2c940c;
        case 0x2c9410u: goto label_2c9410;
        case 0x2c9414u: goto label_2c9414;
        case 0x2c9418u: goto label_2c9418;
        case 0x2c941cu: goto label_2c941c;
        case 0x2c9420u: goto label_2c9420;
        case 0x2c9424u: goto label_2c9424;
        case 0x2c9428u: goto label_2c9428;
        case 0x2c942cu: goto label_2c942c;
        case 0x2c9430u: goto label_2c9430;
        case 0x2c9434u: goto label_2c9434;
        case 0x2c9438u: goto label_2c9438;
        case 0x2c943cu: goto label_2c943c;
        case 0x2c9440u: goto label_2c9440;
        case 0x2c9444u: goto label_2c9444;
        case 0x2c9448u: goto label_2c9448;
        case 0x2c944cu: goto label_2c944c;
        case 0x2c9450u: goto label_2c9450;
        case 0x2c9454u: goto label_2c9454;
        case 0x2c9458u: goto label_2c9458;
        case 0x2c945cu: goto label_2c945c;
        case 0x2c9460u: goto label_2c9460;
        case 0x2c9464u: goto label_2c9464;
        case 0x2c9468u: goto label_2c9468;
        case 0x2c946cu: goto label_2c946c;
        case 0x2c9470u: goto label_2c9470;
        case 0x2c9474u: goto label_2c9474;
        case 0x2c9478u: goto label_2c9478;
        case 0x2c947cu: goto label_2c947c;
        case 0x2c9480u: goto label_2c9480;
        case 0x2c9484u: goto label_2c9484;
        case 0x2c9488u: goto label_2c9488;
        case 0x2c948cu: goto label_2c948c;
        case 0x2c9490u: goto label_2c9490;
        case 0x2c9494u: goto label_2c9494;
        case 0x2c9498u: goto label_2c9498;
        case 0x2c949cu: goto label_2c949c;
        case 0x2c94a0u: goto label_2c94a0;
        case 0x2c94a4u: goto label_2c94a4;
        case 0x2c94a8u: goto label_2c94a8;
        case 0x2c94acu: goto label_2c94ac;
        case 0x2c94b0u: goto label_2c94b0;
        case 0x2c94b4u: goto label_2c94b4;
        case 0x2c94b8u: goto label_2c94b8;
        case 0x2c94bcu: goto label_2c94bc;
        case 0x2c94c0u: goto label_2c94c0;
        case 0x2c94c4u: goto label_2c94c4;
        case 0x2c94c8u: goto label_2c94c8;
        case 0x2c94ccu: goto label_2c94cc;
        case 0x2c94d0u: goto label_2c94d0;
        case 0x2c94d4u: goto label_2c94d4;
        case 0x2c94d8u: goto label_2c94d8;
        case 0x2c94dcu: goto label_2c94dc;
        case 0x2c94e0u: goto label_2c94e0;
        case 0x2c94e4u: goto label_2c94e4;
        case 0x2c94e8u: goto label_2c94e8;
        case 0x2c94ecu: goto label_2c94ec;
        case 0x2c94f0u: goto label_2c94f0;
        case 0x2c94f4u: goto label_2c94f4;
        case 0x2c94f8u: goto label_2c94f8;
        case 0x2c94fcu: goto label_2c94fc;
        case 0x2c9500u: goto label_2c9500;
        case 0x2c9504u: goto label_2c9504;
        case 0x2c9508u: goto label_2c9508;
        case 0x2c950cu: goto label_2c950c;
        case 0x2c9510u: goto label_2c9510;
        case 0x2c9514u: goto label_2c9514;
        case 0x2c9518u: goto label_2c9518;
        case 0x2c951cu: goto label_2c951c;
        case 0x2c9520u: goto label_2c9520;
        case 0x2c9524u: goto label_2c9524;
        case 0x2c9528u: goto label_2c9528;
        case 0x2c952cu: goto label_2c952c;
        case 0x2c9530u: goto label_2c9530;
        case 0x2c9534u: goto label_2c9534;
        case 0x2c9538u: goto label_2c9538;
        case 0x2c953cu: goto label_2c953c;
        case 0x2c9540u: goto label_2c9540;
        case 0x2c9544u: goto label_2c9544;
        case 0x2c9548u: goto label_2c9548;
        case 0x2c954cu: goto label_2c954c;
        case 0x2c9550u: goto label_2c9550;
        case 0x2c9554u: goto label_2c9554;
        case 0x2c9558u: goto label_2c9558;
        case 0x2c955cu: goto label_2c955c;
        case 0x2c9560u: goto label_2c9560;
        case 0x2c9564u: goto label_2c9564;
        case 0x2c9568u: goto label_2c9568;
        case 0x2c956cu: goto label_2c956c;
        case 0x2c9570u: goto label_2c9570;
        case 0x2c9574u: goto label_2c9574;
        case 0x2c9578u: goto label_2c9578;
        case 0x2c957cu: goto label_2c957c;
        case 0x2c9580u: goto label_2c9580;
        case 0x2c9584u: goto label_2c9584;
        case 0x2c9588u: goto label_2c9588;
        case 0x2c958cu: goto label_2c958c;
        case 0x2c9590u: goto label_2c9590;
        case 0x2c9594u: goto label_2c9594;
        case 0x2c9598u: goto label_2c9598;
        case 0x2c959cu: goto label_2c959c;
        case 0x2c95a0u: goto label_2c95a0;
        case 0x2c95a4u: goto label_2c95a4;
        case 0x2c95a8u: goto label_2c95a8;
        case 0x2c95acu: goto label_2c95ac;
        case 0x2c95b0u: goto label_2c95b0;
        case 0x2c95b4u: goto label_2c95b4;
        case 0x2c95b8u: goto label_2c95b8;
        case 0x2c95bcu: goto label_2c95bc;
        case 0x2c95c0u: goto label_2c95c0;
        case 0x2c95c4u: goto label_2c95c4;
        case 0x2c95c8u: goto label_2c95c8;
        case 0x2c95ccu: goto label_2c95cc;
        case 0x2c95d0u: goto label_2c95d0;
        case 0x2c95d4u: goto label_2c95d4;
        case 0x2c95d8u: goto label_2c95d8;
        case 0x2c95dcu: goto label_2c95dc;
        case 0x2c95e0u: goto label_2c95e0;
        case 0x2c95e4u: goto label_2c95e4;
        case 0x2c95e8u: goto label_2c95e8;
        case 0x2c95ecu: goto label_2c95ec;
        case 0x2c95f0u: goto label_2c95f0;
        case 0x2c95f4u: goto label_2c95f4;
        case 0x2c95f8u: goto label_2c95f8;
        case 0x2c95fcu: goto label_2c95fc;
        case 0x2c9600u: goto label_2c9600;
        case 0x2c9604u: goto label_2c9604;
        case 0x2c9608u: goto label_2c9608;
        case 0x2c960cu: goto label_2c960c;
        case 0x2c9610u: goto label_2c9610;
        case 0x2c9614u: goto label_2c9614;
        case 0x2c9618u: goto label_2c9618;
        case 0x2c961cu: goto label_2c961c;
        case 0x2c9620u: goto label_2c9620;
        case 0x2c9624u: goto label_2c9624;
        case 0x2c9628u: goto label_2c9628;
        case 0x2c962cu: goto label_2c962c;
        case 0x2c9630u: goto label_2c9630;
        case 0x2c9634u: goto label_2c9634;
        case 0x2c9638u: goto label_2c9638;
        case 0x2c963cu: goto label_2c963c;
        case 0x2c9640u: goto label_2c9640;
        case 0x2c9644u: goto label_2c9644;
        case 0x2c9648u: goto label_2c9648;
        case 0x2c964cu: goto label_2c964c;
        case 0x2c9650u: goto label_2c9650;
        case 0x2c9654u: goto label_2c9654;
        case 0x2c9658u: goto label_2c9658;
        case 0x2c965cu: goto label_2c965c;
        case 0x2c9660u: goto label_2c9660;
        case 0x2c9664u: goto label_2c9664;
        case 0x2c9668u: goto label_2c9668;
        case 0x2c966cu: goto label_2c966c;
        case 0x2c9670u: goto label_2c9670;
        case 0x2c9674u: goto label_2c9674;
        case 0x2c9678u: goto label_2c9678;
        case 0x2c967cu: goto label_2c967c;
        case 0x2c9680u: goto label_2c9680;
        case 0x2c9684u: goto label_2c9684;
        case 0x2c9688u: goto label_2c9688;
        case 0x2c968cu: goto label_2c968c;
        case 0x2c9690u: goto label_2c9690;
        case 0x2c9694u: goto label_2c9694;
        case 0x2c9698u: goto label_2c9698;
        case 0x2c969cu: goto label_2c969c;
        case 0x2c96a0u: goto label_2c96a0;
        case 0x2c96a4u: goto label_2c96a4;
        case 0x2c96a8u: goto label_2c96a8;
        case 0x2c96acu: goto label_2c96ac;
        case 0x2c96b0u: goto label_2c96b0;
        case 0x2c96b4u: goto label_2c96b4;
        case 0x2c96b8u: goto label_2c96b8;
        case 0x2c96bcu: goto label_2c96bc;
        case 0x2c96c0u: goto label_2c96c0;
        case 0x2c96c4u: goto label_2c96c4;
        case 0x2c96c8u: goto label_2c96c8;
        case 0x2c96ccu: goto label_2c96cc;
        case 0x2c96d0u: goto label_2c96d0;
        case 0x2c96d4u: goto label_2c96d4;
        case 0x2c96d8u: goto label_2c96d8;
        case 0x2c96dcu: goto label_2c96dc;
        case 0x2c96e0u: goto label_2c96e0;
        case 0x2c96e4u: goto label_2c96e4;
        case 0x2c96e8u: goto label_2c96e8;
        case 0x2c96ecu: goto label_2c96ec;
        case 0x2c96f0u: goto label_2c96f0;
        case 0x2c96f4u: goto label_2c96f4;
        case 0x2c96f8u: goto label_2c96f8;
        case 0x2c96fcu: goto label_2c96fc;
        case 0x2c9700u: goto label_2c9700;
        case 0x2c9704u: goto label_2c9704;
        case 0x2c9708u: goto label_2c9708;
        case 0x2c970cu: goto label_2c970c;
        case 0x2c9710u: goto label_2c9710;
        case 0x2c9714u: goto label_2c9714;
        case 0x2c9718u: goto label_2c9718;
        case 0x2c971cu: goto label_2c971c;
        case 0x2c9720u: goto label_2c9720;
        case 0x2c9724u: goto label_2c9724;
        case 0x2c9728u: goto label_2c9728;
        case 0x2c972cu: goto label_2c972c;
        case 0x2c9730u: goto label_2c9730;
        case 0x2c9734u: goto label_2c9734;
        case 0x2c9738u: goto label_2c9738;
        case 0x2c973cu: goto label_2c973c;
        case 0x2c9740u: goto label_2c9740;
        case 0x2c9744u: goto label_2c9744;
        case 0x2c9748u: goto label_2c9748;
        case 0x2c974cu: goto label_2c974c;
        case 0x2c9750u: goto label_2c9750;
        case 0x2c9754u: goto label_2c9754;
        case 0x2c9758u: goto label_2c9758;
        case 0x2c975cu: goto label_2c975c;
        case 0x2c9760u: goto label_2c9760;
        case 0x2c9764u: goto label_2c9764;
        case 0x2c9768u: goto label_2c9768;
        case 0x2c976cu: goto label_2c976c;
        case 0x2c9770u: goto label_2c9770;
        case 0x2c9774u: goto label_2c9774;
        case 0x2c9778u: goto label_2c9778;
        case 0x2c977cu: goto label_2c977c;
        case 0x2c9780u: goto label_2c9780;
        case 0x2c9784u: goto label_2c9784;
        case 0x2c9788u: goto label_2c9788;
        case 0x2c978cu: goto label_2c978c;
        case 0x2c9790u: goto label_2c9790;
        case 0x2c9794u: goto label_2c9794;
        case 0x2c9798u: goto label_2c9798;
        case 0x2c979cu: goto label_2c979c;
        case 0x2c97a0u: goto label_2c97a0;
        case 0x2c97a4u: goto label_2c97a4;
        case 0x2c97a8u: goto label_2c97a8;
        case 0x2c97acu: goto label_2c97ac;
        case 0x2c97b0u: goto label_2c97b0;
        case 0x2c97b4u: goto label_2c97b4;
        case 0x2c97b8u: goto label_2c97b8;
        case 0x2c97bcu: goto label_2c97bc;
        case 0x2c97c0u: goto label_2c97c0;
        case 0x2c97c4u: goto label_2c97c4;
        case 0x2c97c8u: goto label_2c97c8;
        case 0x2c97ccu: goto label_2c97cc;
        case 0x2c97d0u: goto label_2c97d0;
        case 0x2c97d4u: goto label_2c97d4;
        case 0x2c97d8u: goto label_2c97d8;
        case 0x2c97dcu: goto label_2c97dc;
        case 0x2c97e0u: goto label_2c97e0;
        case 0x2c97e4u: goto label_2c97e4;
        case 0x2c97e8u: goto label_2c97e8;
        case 0x2c97ecu: goto label_2c97ec;
        case 0x2c97f0u: goto label_2c97f0;
        case 0x2c97f4u: goto label_2c97f4;
        case 0x2c97f8u: goto label_2c97f8;
        case 0x2c97fcu: goto label_2c97fc;
        case 0x2c9800u: goto label_2c9800;
        case 0x2c9804u: goto label_2c9804;
        case 0x2c9808u: goto label_2c9808;
        case 0x2c980cu: goto label_2c980c;
        case 0x2c9810u: goto label_2c9810;
        case 0x2c9814u: goto label_2c9814;
        case 0x2c9818u: goto label_2c9818;
        case 0x2c981cu: goto label_2c981c;
        case 0x2c9820u: goto label_2c9820;
        case 0x2c9824u: goto label_2c9824;
        case 0x2c9828u: goto label_2c9828;
        case 0x2c982cu: goto label_2c982c;
        case 0x2c9830u: goto label_2c9830;
        case 0x2c9834u: goto label_2c9834;
        case 0x2c9838u: goto label_2c9838;
        case 0x2c983cu: goto label_2c983c;
        case 0x2c9840u: goto label_2c9840;
        case 0x2c9844u: goto label_2c9844;
        case 0x2c9848u: goto label_2c9848;
        case 0x2c984cu: goto label_2c984c;
        case 0x2c9850u: goto label_2c9850;
        case 0x2c9854u: goto label_2c9854;
        case 0x2c9858u: goto label_2c9858;
        case 0x2c985cu: goto label_2c985c;
        case 0x2c9860u: goto label_2c9860;
        case 0x2c9864u: goto label_2c9864;
        case 0x2c9868u: goto label_2c9868;
        case 0x2c986cu: goto label_2c986c;
        case 0x2c9870u: goto label_2c9870;
        case 0x2c9874u: goto label_2c9874;
        case 0x2c9878u: goto label_2c9878;
        case 0x2c987cu: goto label_2c987c;
        case 0x2c9880u: goto label_2c9880;
        case 0x2c9884u: goto label_2c9884;
        case 0x2c9888u: goto label_2c9888;
        case 0x2c988cu: goto label_2c988c;
        case 0x2c9890u: goto label_2c9890;
        case 0x2c9894u: goto label_2c9894;
        case 0x2c9898u: goto label_2c9898;
        case 0x2c989cu: goto label_2c989c;
        case 0x2c98a0u: goto label_2c98a0;
        case 0x2c98a4u: goto label_2c98a4;
        case 0x2c98a8u: goto label_2c98a8;
        case 0x2c98acu: goto label_2c98ac;
        case 0x2c98b0u: goto label_2c98b0;
        case 0x2c98b4u: goto label_2c98b4;
        case 0x2c98b8u: goto label_2c98b8;
        case 0x2c98bcu: goto label_2c98bc;
        case 0x2c98c0u: goto label_2c98c0;
        case 0x2c98c4u: goto label_2c98c4;
        case 0x2c98c8u: goto label_2c98c8;
        case 0x2c98ccu: goto label_2c98cc;
        case 0x2c98d0u: goto label_2c98d0;
        case 0x2c98d4u: goto label_2c98d4;
        case 0x2c98d8u: goto label_2c98d8;
        case 0x2c98dcu: goto label_2c98dc;
        case 0x2c98e0u: goto label_2c98e0;
        case 0x2c98e4u: goto label_2c98e4;
        case 0x2c98e8u: goto label_2c98e8;
        case 0x2c98ecu: goto label_2c98ec;
        case 0x2c98f0u: goto label_2c98f0;
        case 0x2c98f4u: goto label_2c98f4;
        case 0x2c98f8u: goto label_2c98f8;
        case 0x2c98fcu: goto label_2c98fc;
        case 0x2c9900u: goto label_2c9900;
        case 0x2c9904u: goto label_2c9904;
        case 0x2c9908u: goto label_2c9908;
        case 0x2c990cu: goto label_2c990c;
        case 0x2c9910u: goto label_2c9910;
        case 0x2c9914u: goto label_2c9914;
        case 0x2c9918u: goto label_2c9918;
        case 0x2c991cu: goto label_2c991c;
        case 0x2c9920u: goto label_2c9920;
        case 0x2c9924u: goto label_2c9924;
        case 0x2c9928u: goto label_2c9928;
        case 0x2c992cu: goto label_2c992c;
        case 0x2c9930u: goto label_2c9930;
        case 0x2c9934u: goto label_2c9934;
        case 0x2c9938u: goto label_2c9938;
        case 0x2c993cu: goto label_2c993c;
        case 0x2c9940u: goto label_2c9940;
        case 0x2c9944u: goto label_2c9944;
        case 0x2c9948u: goto label_2c9948;
        case 0x2c994cu: goto label_2c994c;
        case 0x2c9950u: goto label_2c9950;
        case 0x2c9954u: goto label_2c9954;
        case 0x2c9958u: goto label_2c9958;
        case 0x2c995cu: goto label_2c995c;
        case 0x2c9960u: goto label_2c9960;
        case 0x2c9964u: goto label_2c9964;
        case 0x2c9968u: goto label_2c9968;
        case 0x2c996cu: goto label_2c996c;
        case 0x2c9970u: goto label_2c9970;
        case 0x2c9974u: goto label_2c9974;
        case 0x2c9978u: goto label_2c9978;
        case 0x2c997cu: goto label_2c997c;
        case 0x2c9980u: goto label_2c9980;
        case 0x2c9984u: goto label_2c9984;
        case 0x2c9988u: goto label_2c9988;
        case 0x2c998cu: goto label_2c998c;
        case 0x2c9990u: goto label_2c9990;
        case 0x2c9994u: goto label_2c9994;
        case 0x2c9998u: goto label_2c9998;
        case 0x2c999cu: goto label_2c999c;
        case 0x2c99a0u: goto label_2c99a0;
        case 0x2c99a4u: goto label_2c99a4;
        case 0x2c99a8u: goto label_2c99a8;
        case 0x2c99acu: goto label_2c99ac;
        case 0x2c99b0u: goto label_2c99b0;
        case 0x2c99b4u: goto label_2c99b4;
        default: break;
    }

    ctx->pc = 0x2c8be8u;

label_2c8be8:
    // 0x2c8be8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c8be8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c8bec:
    // 0x2c8bec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8becu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8bf0:
    // 0x2c8bf0: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2c8bf4:
    if (ctx->pc == 0x2C8BF4u) {
        ctx->pc = 0x2C8BF4u;
            // 0x2c8bf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->pc = 0x2C8BF8u;
        goto label_2c8bf8;
    }
    ctx->pc = 0x2C8BF0u;
    {
        const bool branch_taken_0x2c8bf0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8BF0u;
            // 0x2c8bf4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8bf0) {
            ctx->pc = 0x2C8C0Cu;
            goto label_2c8c0c;
        }
    }
    ctx->pc = 0x2C8BF8u;
label_2c8bf8:
    // 0x2c8bf8: 0xc0b22ec  jal         func_2C8BB0
label_2c8bfc:
    if (ctx->pc == 0x2C8BFCu) {
        ctx->pc = 0x2C8C00u;
        goto label_2c8c00;
    }
    ctx->pc = 0x2C8BF8u;
    SET_GPR_U32(ctx, 31, 0x2C8C00u);
    ctx->pc = 0x2C8BB0u;
    if (runtime->hasFunction(0x2C8BB0u)) {
        auto targetFn = runtime->lookupFunction(0x2C8BB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C00u; }
        if (ctx->pc != 0x2C8C00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002C8BB0_0x2c8bb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C00u; }
        if (ctx->pc != 0x2C8C00u) { return; }
    }
    ctx->pc = 0x2C8C00u;
label_2c8c00:
    // 0x2c8c00: 0x2403021b  addiu       $v1, $zero, 0x21B
    ctx->pc = 0x2c8c00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 539));
label_2c8c04:
    // 0x2c8c04: 0x2180a  movz        $v1, $zero, $v0
    ctx->pc = 0x2c8c04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
label_2c8c08:
    // 0x2c8c08: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2c8c08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c0c:
    // 0x2c8c0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c8c0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8c10:
    // 0x2c8c10: 0x3e00008  jr          $ra
label_2c8c14:
    if (ctx->pc == 0x2C8C14u) {
        ctx->pc = 0x2C8C14u;
            // 0x2c8c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C8C18u;
        goto label_2c8c18;
    }
    ctx->pc = 0x2C8C10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C10u;
            // 0x2c8c14: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8C18u;
label_2c8c18:
    // 0x2c8c18: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2c8c18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c8c1c:
    // 0x2c8c1c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8c1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c20:
    // 0x2c8c20: 0x3e00008  jr          $ra
label_2c8c24:
    if (ctx->pc == 0x2C8C24u) {
        ctx->pc = 0x2C8C24u;
            // 0x2c8c24: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C8C28u;
        goto label_2c8c28;
    }
    ctx->pc = 0x2C8C20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C20u;
            // 0x2c8c24: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8C28u;
label_2c8c28:
    // 0x2c8c28: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c8c28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c8c2c:
    // 0x2c8c2c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c8c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c8c30:
    // 0x2c8c30: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c8c30u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c34:
    // 0x2c8c34: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c8c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c8c38:
    // 0x2c8c38: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x2c8c38u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c3c:
    // 0x2c8c3c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c8c3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c8c40:
    // 0x2c8c40: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x2c8c40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
label_2c8c44:
    // 0x2c8c44: 0x8e510004  lw          $s1, 0x4($s2)
    ctx->pc = 0x2c8c44u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2c8c48:
    // 0x2c8c48: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x2c8c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_2c8c4c:
    // 0x2c8c4c: 0xc0b60b8  jal         func_2D82E0
label_2c8c50:
    if (ctx->pc == 0x2C8C50u) {
        ctx->pc = 0x2C8C50u;
            // 0x2c8c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C54u;
        goto label_2c8c54;
    }
    ctx->pc = 0x2C8C4Cu;
    SET_GPR_U32(ctx, 31, 0x2C8C54u);
    ctx->pc = 0x2C8C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C4Cu;
            // 0x2c8c50: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C54u; }
        if (ctx->pc != 0x2C8C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C54u; }
        if (ctx->pc != 0x2C8C54u) { return; }
    }
    ctx->pc = 0x2C8C54u;
label_2c8c54:
    // 0x2c8c54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8c54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c58:
    // 0x2c8c58: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8c58u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c5c:
    // 0x2c8c5c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2c8c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c8c60:
    // 0x2c8c60: 0x10600017  beqz        $v1, . + 4 + (0x17 << 2)
label_2c8c64:
    if (ctx->pc == 0x2C8C64u) {
        ctx->pc = 0x2C8C64u;
            // 0x2c8c64: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C8C68u;
        goto label_2c8c68;
    }
    ctx->pc = 0x2C8C60u;
    {
        const bool branch_taken_0x2c8c60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C60u;
            // 0x2c8c64: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c60) {
            ctx->pc = 0x2C8CC0u;
            goto label_2c8cc0;
        }
    }
    ctx->pc = 0x2C8C68u;
label_2c8c68:
    // 0x2c8c68: 0xc0b60b8  jal         func_2D82E0
label_2c8c6c:
    if (ctx->pc == 0x2C8C6Cu) {
        ctx->pc = 0x2C8C70u;
        goto label_2c8c70;
    }
    ctx->pc = 0x2C8C68u;
    SET_GPR_U32(ctx, 31, 0x2C8C70u);
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C70u; }
        if (ctx->pc != 0x2C8C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C70u; }
        if (ctx->pc != 0x2C8C70u) { return; }
    }
    ctx->pc = 0x2C8C70u;
label_2c8c70:
    // 0x2c8c70: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c8c70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c74:
    // 0x2c8c74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8c74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c78:
    // 0x2c8c78: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2c8c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c8c7c:
    // 0x2c8c7c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_2c8c80:
    if (ctx->pc == 0x2C8C80u) {
        ctx->pc = 0x2C8C80u;
            // 0x2c8c80: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->pc = 0x2C8C84u;
        goto label_2c8c84;
    }
    ctx->pc = 0x2C8C7Cu;
    {
        const bool branch_taken_0x2c8c7c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C7Cu;
            // 0x2c8c80: 0xae030004  sw          $v1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c7c) {
            ctx->pc = 0x2C8CC0u;
            goto label_2c8cc0;
        }
    }
    ctx->pc = 0x2C8C84u;
label_2c8c84:
    // 0x2c8c84: 0xc0b60b8  jal         func_2D82E0
label_2c8c88:
    if (ctx->pc == 0x2C8C88u) {
        ctx->pc = 0x2C8C8Cu;
        goto label_2c8c8c;
    }
    ctx->pc = 0x2C8C84u;
    SET_GPR_U32(ctx, 31, 0x2C8C8Cu);
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C8Cu; }
        if (ctx->pc != 0x2C8C8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8C8Cu; }
        if (ctx->pc != 0x2C8C8Cu) { return; }
    }
    ctx->pc = 0x2C8C8Cu;
label_2c8c8c:
    // 0x2c8c8c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c8c8cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c90:
    // 0x2c8c90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c8c90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c8c94:
    // 0x2c8c94: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2c8c94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c8c98:
    // 0x2c8c98: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
label_2c8c9c:
    if (ctx->pc == 0x2C8C9Cu) {
        ctx->pc = 0x2C8C9Cu;
            // 0x2c8c9c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x2C8CA0u;
        goto label_2c8ca0;
    }
    ctx->pc = 0x2C8C98u;
    {
        const bool branch_taken_0x2c8c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8C98u;
            // 0x2c8c9c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8c98) {
            ctx->pc = 0x2C8CC0u;
            goto label_2c8cc0;
        }
    }
    ctx->pc = 0x2C8CA0u;
label_2c8ca0:
    // 0x2c8ca0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c8ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c8ca4:
    // 0x2c8ca4: 0xc0b6098  jal         func_2D8260
label_2c8ca8:
    if (ctx->pc == 0x2C8CA8u) {
        ctx->pc = 0x2C8CA8u;
            // 0x2c8ca8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x2C8CACu;
        goto label_2c8cac;
    }
    ctx->pc = 0x2C8CA4u;
    SET_GPR_U32(ctx, 31, 0x2C8CACu);
    ctx->pc = 0x2C8CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CA4u;
            // 0x2c8ca8: 0x8e450000  lw          $a1, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CACu; }
        if (ctx->pc != 0x2C8CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CACu; }
        if (ctx->pc != 0x2C8CACu) { return; }
    }
    ctx->pc = 0x2C8CACu;
label_2c8cac:
    // 0x2c8cac: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c8cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c8cb0:
    // 0x2c8cb0: 0x8e450000  lw          $a1, 0x0($s2)
    ctx->pc = 0x2c8cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2c8cb4:
    // 0x2c8cb4: 0xc0b6098  jal         func_2D8260
label_2c8cb8:
    if (ctx->pc == 0x2C8CB8u) {
        ctx->pc = 0x2C8CB8u;
            // 0x2c8cb8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8CBCu;
        goto label_2c8cbc;
    }
    ctx->pc = 0x2C8CB4u;
    SET_GPR_U32(ctx, 31, 0x2C8CBCu);
    ctx->pc = 0x2C8CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CB4u;
            // 0x2c8cb8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CBCu; }
        if (ctx->pc != 0x2C8CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C8CBCu; }
        if (ctx->pc != 0x2C8CBCu) { return; }
    }
    ctx->pc = 0x2C8CBCu;
label_2c8cbc:
    // 0x2c8cbc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8cbcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8cc0:
    // 0x2c8cc0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c8cc0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8cc4:
    // 0x2c8cc4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c8cc4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c8cc8:
    // 0x2c8cc8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c8cc8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8ccc:
    // 0x2c8ccc: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x2c8cccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c8cd0:
    // 0x2c8cd0: 0x3e00008  jr          $ra
label_2c8cd4:
    if (ctx->pc == 0x2C8CD4u) {
        ctx->pc = 0x2C8CD4u;
            // 0x2c8cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C8CD8u;
        goto label_2c8cd8;
    }
    ctx->pc = 0x2C8CD0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8CD0u;
            // 0x2c8cd4: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8CD8u;
label_2c8cd8:
    // 0x2c8cd8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c8cd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c8cdc:
    // 0x2c8cdc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c8cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c8ce0:
    // 0x2c8ce0: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c8ce0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2c8ce4:
    // 0x2c8ce4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x2c8ce4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8ce8:
    // 0x2c8ce8: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c8ce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2c8cec:
    // 0x2c8cec: 0x140a02d  daddu       $s4, $t2, $zero
    ctx->pc = 0x2c8cecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c8cf0:
    // 0x2c8cf0: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2c8cf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2c8cf4:
    // 0x2c8cf4: 0x120a82d  daddu       $s5, $t1, $zero
    ctx->pc = 0x2c8cf4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c8cf8:
    // 0x2c8cf8: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2c8cf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2c8cfc:
    // 0x2c8cfc: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2c8cfcu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d00:
    // 0x2c8d00: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2c8d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_2c8d04:
    // 0x2c8d04: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c8d04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d08:
    // 0x2c8d08: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2c8d08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_2c8d0c:
    // 0x2c8d0c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2c8d0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d10:
    // 0x2c8d10: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c8d10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c8d14:
    // 0x2c8d14: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c8d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c8d18:
    // 0x2c8d18: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2c8d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_2c8d1c:
    // 0x2c8d1c: 0x8e70000c  lw          $s0, 0xC($s3)
    ctx->pc = 0x2c8d1cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_2c8d20:
    // 0x2c8d20: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2c8d20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2c8d24:
    // 0x2c8d24: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x2c8d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
label_2c8d28:
    // 0x2c8d28: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x2c8d28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c8d2c:
    // 0x2c8d2c: 0x109082  srl         $s2, $s0, 2
    ctx->pc = 0x2c8d2cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
label_2c8d30:
    // 0x2c8d30: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_2c8d34:
    if (ctx->pc == 0x2C8D34u) {
        ctx->pc = 0x2C8D34u;
            // 0x2c8d34: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->pc = 0x2C8D38u;
        goto label_2c8d38;
    }
    ctx->pc = 0x2C8D30u;
    {
        const bool branch_taken_0x2c8d30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D30u;
            // 0x2c8d34: 0x8e710008  lw          $s1, 0x8($s3) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d30) {
            ctx->pc = 0x2C8EBCu;
            goto label_2c8ebc;
        }
    }
    ctx->pc = 0x2C8D38u;
label_2c8d38:
    // 0x2c8d38: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_2c8d3c:
    if (ctx->pc == 0x2C8D3Cu) {
        ctx->pc = 0x2C8D3Cu;
            // 0x2c8d3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D40u;
        goto label_2c8d40;
    }
    ctx->pc = 0x2C8D38u;
    {
        const bool branch_taken_0x2c8d38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8D38u;
            // 0x2c8d3c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8d38) {
            ctx->pc = 0x2C8DB4u;
            goto label_2c8db4;
        }
    }
    ctx->pc = 0x2C8D40u;
label_2c8d40:
    // 0x2c8d40: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2c8d40u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d44:
    // 0x2c8d44: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x2c8d44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2c8d48:
    // 0x2c8d48: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x2c8d48u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_2c8d4c:
    // 0x2c8d4c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2c8d4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_2c8d50:
    // 0x2c8d50: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x2c8d50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_2c8d54:
    // 0x2c8d54: 0x130302b  sltu        $a2, $t1, $s0
    ctx->pc = 0x2c8d54u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c8d58:
    // 0x2c8d58: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x2c8d58u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_2c8d5c:
    // 0x2c8d5c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2c8d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2c8d60:
    // 0x2c8d60: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2c8d60u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2c8d64:
    // 0x2c8d64: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c8d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2c8d68:
    // 0x2c8d68: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2c8d68u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2c8d6c:
    // 0x2c8d6c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c8d70:
    // 0x2c8d70: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c8d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2c8d74:
    // 0x2c8d74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c8d78:
    // 0x2c8d78: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2c8d78u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_2c8d7c:
    // 0x2c8d7c: 0x90e50007  lbu         $a1, 0x7($a3)
    ctx->pc = 0x2c8d7cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_2c8d80:
    // 0x2c8d80: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x2c8d80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_2c8d84:
    // 0x2c8d84: 0x90e40005  lbu         $a0, 0x5($a3)
    ctx->pc = 0x2c8d84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_2c8d88:
    // 0x2c8d88: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2c8d88u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2c8d8c:
    // 0x2c8d8c: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x2c8d8cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_2c8d90:
    // 0x2c8d90: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2c8d90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_2c8d94:
    // 0x2c8d94: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c8d94u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2c8d98:
    // 0x2c8d98: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2c8d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2c8d9c:
    // 0x2c8d9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c8d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2c8da0:
    // 0x2c8da0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8da0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c8da4:
    // 0x2c8da4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c8da8:
    // 0x2c8da8: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2c8da8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_2c8dac:
    // 0x2c8dac: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
label_2c8db0:
    if (ctx->pc == 0x2C8DB0u) {
        ctx->pc = 0x2C8DB0u;
            // 0x2c8db0: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x2C8DB4u;
        goto label_2c8db4;
    }
    ctx->pc = 0x2C8DACu;
    {
        const bool branch_taken_0x2c8dac = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8DACu;
            // 0x2c8db0: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8dac) {
            ctx->pc = 0x2C8D48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8d48;
        }
    }
    ctx->pc = 0x2C8DB4u;
label_2c8db4:
    // 0x2c8db4: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2c8db8:
    if (ctx->pc == 0x2C8DB8u) {
        ctx->pc = 0x2C8DB8u;
            // 0x2c8db8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DBCu;
        goto label_2c8dbc;
    }
    ctx->pc = 0x2C8DB4u;
    {
        const bool branch_taken_0x2c8db4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8DB4u;
            // 0x2c8db8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8db4) {
            ctx->pc = 0x2C8DECu;
            goto label_2c8dec;
        }
    }
    ctx->pc = 0x2C8DBCu;
label_2c8dbc:
    // 0x2c8dbc: 0x0  nop
    ctx->pc = 0x2c8dbcu;
    // NOP
label_2c8dc0:
    // 0x2c8dc0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2c8dc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2c8dc4:
    // 0x2c8dc4: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2c8dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2c8dc8:
    // 0x2c8dc8: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x2c8dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2c8dcc:
    // 0x2c8dcc: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c8dccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c8dd0:
    // 0x2c8dd0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c8dd4:
    // 0x2c8dd4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c8dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c8dd8:
    // 0x2c8dd8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c8dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c8ddc:
    // 0x2c8ddc: 0xf2282b  sltu        $a1, $a3, $s2
    ctx->pc = 0x2c8ddcu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2c8de0:
    // 0x2c8de0: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2c8de0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_2c8de4:
    // 0x2c8de4: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
label_2c8de8:
    if (ctx->pc == 0x2C8DE8u) {
        ctx->pc = 0x2C8DE8u;
            // 0x2c8de8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C8DECu;
        goto label_2c8dec;
    }
    ctx->pc = 0x2C8DE4u;
    {
        const bool branch_taken_0x2c8de4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8DE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8DE4u;
            // 0x2c8de8: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8de4) {
            ctx->pc = 0x2C8DC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8dc0;
        }
    }
    ctx->pc = 0x2C8DECu;
label_2c8dec:
    // 0x2c8dec: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c8decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8df0:
    // 0x2c8df0: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c8df0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c8df4:
    // 0x2c8df4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c8df4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8df8:
    // 0x2c8df8: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x2c8df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
label_2c8dfc:
    // 0x2c8dfc: 0x40f809  jalr        $v0
label_2c8e00:
    if (ctx->pc == 0x2C8E00u) {
        ctx->pc = 0x2C8E00u;
            // 0x2c8e00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E04u;
        goto label_2c8e04;
    }
    ctx->pc = 0x2C8DFCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C8E04u);
        ctx->pc = 0x2C8E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8DFCu;
            // 0x2c8e00: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8E04u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8E04u; }
            if (ctx->pc != 0x2C8E04u) { return; }
        }
        }
    }
    ctx->pc = 0x2C8E04u;
label_2c8e04:
    // 0x2c8e04: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_2c8e08:
    if (ctx->pc == 0x2C8E08u) {
        ctx->pc = 0x2C8E08u;
            // 0x2c8e08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E0Cu;
        goto label_2c8e0c;
    }
    ctx->pc = 0x2C8E04u;
    {
        const bool branch_taken_0x2c8e04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E04u;
            // 0x2c8e08: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e04) {
            ctx->pc = 0x2C8E34u;
            goto label_2c8e34;
        }
    }
    ctx->pc = 0x2C8E0Cu;
label_2c8e0c:
    // 0x2c8e0c: 0x0  nop
    ctx->pc = 0x2c8e0cu;
    // NOP
label_2c8e10:
    // 0x2c8e10: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2c8e10u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2c8e14:
    // 0x2c8e14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c8e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c8e18:
    // 0x2c8e18: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x2c8e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2c8e1c:
    // 0x2c8e1c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x2c8e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_2c8e20:
    // 0x2c8e20: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2c8e20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c8e24:
    // 0x2c8e24: 0xf2302b  sltu        $a2, $a3, $s2
    ctx->pc = 0x2c8e24u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2c8e28:
    // 0x2c8e28: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c8e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c8e2c:
    // 0x2c8e2c: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_2c8e30:
    if (ctx->pc == 0x2C8E30u) {
        ctx->pc = 0x2C8E30u;
            // 0x2c8e30: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x2C8E34u;
        goto label_2c8e34;
    }
    ctx->pc = 0x2C8E2Cu;
    {
        const bool branch_taken_0x2c8e2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E2Cu;
            // 0x2c8e30: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e2c) {
            ctx->pc = 0x2C8E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8e10;
        }
    }
    ctx->pc = 0x2C8E34u;
label_2c8e34:
    // 0x2c8e34: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_2c8e38:
    if (ctx->pc == 0x2C8E38u) {
        ctx->pc = 0x2C8E38u;
            // 0x2c8e38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E3Cu;
        goto label_2c8e3c;
    }
    ctx->pc = 0x2C8E34u;
    {
        const bool branch_taken_0x2c8e34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E34u;
            // 0x2c8e38: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e34) {
            ctx->pc = 0x2C8EA4u;
            goto label_2c8ea4;
        }
    }
    ctx->pc = 0x2C8E3Cu;
label_2c8e3c:
    // 0x2c8e3c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c8e3cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e40:
    // 0x2c8e40: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c8e40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c8e44:
    // 0x2c8e44: 0x0  nop
    ctx->pc = 0x2c8e44u;
    // NOP
label_2c8e48:
    // 0x2c8e48: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2c8e48u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2c8e4c:
    // 0x2c8e4c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2c8e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_2c8e50:
    // 0x2c8e50: 0x130202b  sltu        $a0, $t1, $s0
    ctx->pc = 0x2c8e50u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c8e54:
    // 0x2c8e54: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2c8e54u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2c8e58:
    // 0x2c8e58: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c8e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c8e5c:
    // 0x2c8e5c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c8e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2c8e60:
    // 0x2c8e60: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2c8e60u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_2c8e64:
    // 0x2c8e64: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2c8e64u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2c8e68:
    // 0x2c8e68: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x2c8e68u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_2c8e6c:
    // 0x2c8e6c: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x2c8e6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_2c8e70:
    // 0x2c8e70: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x2c8e70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_2c8e74:
    // 0x2c8e74: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x2c8e74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_2c8e78:
    // 0x2c8e78: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x2c8e78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
label_2c8e7c:
    // 0x2c8e7c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c8e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2c8e80:
    // 0x2c8e80: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c8e80u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2c8e84:
    // 0x2c8e84: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x2c8e84u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
label_2c8e88:
    // 0x2c8e88: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x2c8e88u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_2c8e8c:
    // 0x2c8e8c: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x2c8e8cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
label_2c8e90:
    // 0x2c8e90: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x2c8e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
label_2c8e94:
    // 0x2c8e94: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2c8e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2c8e98:
    // 0x2c8e98: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x2c8e98u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_2c8e9c:
    // 0x2c8e9c: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
label_2c8ea0:
    if (ctx->pc == 0x2C8EA0u) {
        ctx->pc = 0x2C8EA0u;
            // 0x2c8ea0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x2C8EA4u;
        goto label_2c8ea4;
    }
    ctx->pc = 0x2C8E9Cu;
    {
        const bool branch_taken_0x2c8e9c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8E9Cu;
            // 0x2c8ea0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8e9c) {
            ctx->pc = 0x2C8E48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8e48;
        }
    }
    ctx->pc = 0x2C8EA4u;
label_2c8ea4:
    // 0x2c8ea4: 0x290a023  subu        $s4, $s4, $s0
    ctx->pc = 0x2c8ea4u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2c8ea8:
    // 0x2c8ea8: 0x2b0a821  addu        $s5, $s5, $s0
    ctx->pc = 0x2c8ea8u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_2c8eac:
    // 0x2c8eac: 0x290102b  sltu        $v0, $s4, $s0
    ctx->pc = 0x2c8eacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c8eb0:
    // 0x2c8eb0: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x2c8eb0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2c8eb4:
    // 0x2c8eb4: 0x1040ffa0  beqz        $v0, . + 4 + (-0x60 << 2)
label_2c8eb8:
    if (ctx->pc == 0x2C8EB8u) {
        ctx->pc = 0x2C8EB8u;
            // 0x2c8eb8: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->pc = 0x2C8EBCu;
        goto label_2c8ebc;
    }
    ctx->pc = 0x2C8EB4u;
    {
        const bool branch_taken_0x2c8eb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8EB4u;
            // 0x2c8eb8: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8eb4) {
            ctx->pc = 0x2C8D38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8d38;
        }
    }
    ctx->pc = 0x2C8EBCu;
label_2c8ebc:
    // 0x2c8ebc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c8ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c8ec0:
    // 0x2c8ec0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c8ec0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c8ec4:
    // 0x2c8ec4: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x2c8ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
label_2c8ec8:
    // 0x2c8ec8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c8ec8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8ecc:
    // 0x2c8ecc: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c8eccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c8ed0:
    // 0x2c8ed0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c8ed0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c8ed4:
    // 0x2c8ed4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c8ed4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c8ed8:
    // 0x2c8ed8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c8ed8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c8edc:
    // 0x2c8edc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2c8edcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c8ee0:
    // 0x2c8ee0: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2c8ee0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c8ee4:
    // 0x2c8ee4: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2c8ee4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2c8ee8:
    // 0x2c8ee8: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2c8ee8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c8eec:
    // 0x2c8eec: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2c8eecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2c8ef0:
    // 0x2c8ef0: 0x3e00008  jr          $ra
label_2c8ef4:
    if (ctx->pc == 0x2C8EF4u) {
        ctx->pc = 0x2C8EF4u;
            // 0x2c8ef4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2C8EF8u;
        goto label_2c8ef8;
    }
    ctx->pc = 0x2C8EF0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C8EF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8EF0u;
            // 0x2c8ef4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C8EF8u;
label_2c8ef8:
    // 0x2c8ef8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x2c8ef8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_2c8efc:
    // 0x2c8efc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2c8efcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2c8f00:
    // 0x2c8f00: 0xffb30028  sd          $s3, 0x28($sp)
    ctx->pc = 0x2c8f00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 19));
label_2c8f04:
    // 0x2c8f04: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2c8f04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f08:
    // 0x2c8f08: 0xffb40030  sd          $s4, 0x30($sp)
    ctx->pc = 0x2c8f08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 20));
label_2c8f0c:
    // 0x2c8f0c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x2c8f0cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f10:
    // 0x2c8f10: 0xffb50038  sd          $s5, 0x38($sp)
    ctx->pc = 0x2c8f10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 21));
label_2c8f14:
    // 0x2c8f14: 0x140a82d  daddu       $s5, $t2, $zero
    ctx->pc = 0x2c8f14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f18:
    // 0x2c8f18: 0xffb60040  sd          $s6, 0x40($sp)
    ctx->pc = 0x2c8f18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 22));
label_2c8f1c:
    // 0x2c8f1c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2c8f1cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f20:
    // 0x2c8f20: 0xffb70048  sd          $s7, 0x48($sp)
    ctx->pc = 0x2c8f20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 23));
label_2c8f24:
    // 0x2c8f24: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x2c8f24u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f28:
    // 0x2c8f28: 0xffbe0050  sd          $fp, 0x50($sp)
    ctx->pc = 0x2c8f28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 30));
label_2c8f2c:
    // 0x2c8f2c: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2c8f2cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f30:
    // 0x2c8f30: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2c8f30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2c8f34:
    // 0x2c8f34: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2c8f34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
label_2c8f38:
    // 0x2c8f38: 0xffbf0058  sd          $ra, 0x58($sp)
    ctx->pc = 0x2c8f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 88), GPR_U64(ctx, 31));
label_2c8f3c:
    // 0x2c8f3c: 0x8e90000c  lw          $s0, 0xC($s4)
    ctx->pc = 0x2c8f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 12)));
label_2c8f40:
    // 0x2c8f40: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x2c8f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_2c8f44:
    // 0x2c8f44: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x2c8f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
label_2c8f48:
    // 0x2c8f48: 0x2b0102b  sltu        $v0, $s5, $s0
    ctx->pc = 0x2c8f48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c8f4c:
    // 0x2c8f4c: 0x109082  srl         $s2, $s0, 2
    ctx->pc = 0x2c8f4cu;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
label_2c8f50:
    // 0x2c8f50: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_2c8f54:
    if (ctx->pc == 0x2C8F54u) {
        ctx->pc = 0x2C8F54u;
            // 0x2c8f54: 0x8e910008  lw          $s1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->pc = 0x2C8F58u;
        goto label_2c8f58;
    }
    ctx->pc = 0x2C8F50u;
    {
        const bool branch_taken_0x2c8f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8F50u;
            // 0x2c8f54: 0x8e910008  lw          $s1, 0x8($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f50) {
            ctx->pc = 0x2C90DCu;
            goto label_2c90dc;
        }
    }
    ctx->pc = 0x2C8F58u;
label_2c8f58:
    // 0x2c8f58: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_2c8f5c:
    if (ctx->pc == 0x2C8F5Cu) {
        ctx->pc = 0x2C8F5Cu;
            // 0x2c8f5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F60u;
        goto label_2c8f60;
    }
    ctx->pc = 0x2C8F58u;
    {
        const bool branch_taken_0x2c8f58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8F58u;
            // 0x2c8f5c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8f58) {
            ctx->pc = 0x2C8FD4u;
            goto label_2c8fd4;
        }
    }
    ctx->pc = 0x2C8F60u;
label_2c8f60:
    // 0x2c8f60: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2c8f60u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f64:
    // 0x2c8f64: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c8f64u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c8f68:
    // 0x2c8f68: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x2c8f68u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_2c8f6c:
    // 0x2c8f6c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2c8f6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_2c8f70:
    // 0x2c8f70: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x2c8f70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_2c8f74:
    // 0x2c8f74: 0x130302b  sltu        $a2, $t1, $s0
    ctx->pc = 0x2c8f74u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c8f78:
    // 0x2c8f78: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x2c8f78u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_2c8f7c:
    // 0x2c8f7c: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2c8f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2c8f80:
    // 0x2c8f80: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2c8f80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2c8f84:
    // 0x2c8f84: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c8f84u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2c8f88:
    // 0x2c8f88: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2c8f88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2c8f8c:
    // 0x2c8f8c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c8f90:
    // 0x2c8f90: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c8f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2c8f94:
    // 0x2c8f94: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c8f98:
    // 0x2c8f98: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2c8f98u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_2c8f9c:
    // 0x2c8f9c: 0x90e50007  lbu         $a1, 0x7($a3)
    ctx->pc = 0x2c8f9cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_2c8fa0:
    // 0x2c8fa0: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x2c8fa0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_2c8fa4:
    // 0x2c8fa4: 0x90e40005  lbu         $a0, 0x5($a3)
    ctx->pc = 0x2c8fa4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_2c8fa8:
    // 0x2c8fa8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2c8fa8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2c8fac:
    // 0x2c8fac: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x2c8facu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_2c8fb0:
    // 0x2c8fb0: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2c8fb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_2c8fb4:
    // 0x2c8fb4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c8fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2c8fb8:
    // 0x2c8fb8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2c8fb8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2c8fbc:
    // 0x2c8fbc: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c8fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2c8fc0:
    // 0x2c8fc0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c8fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c8fc4:
    // 0x2c8fc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c8fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c8fc8:
    // 0x2c8fc8: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2c8fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_2c8fcc:
    // 0x2c8fcc: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
label_2c8fd0:
    if (ctx->pc == 0x2C8FD0u) {
        ctx->pc = 0x2C8FD0u;
            // 0x2c8fd0: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x2C8FD4u;
        goto label_2c8fd4;
    }
    ctx->pc = 0x2C8FCCu;
    {
        const bool branch_taken_0x2c8fcc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8FCCu;
            // 0x2c8fd0: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fcc) {
            ctx->pc = 0x2C8F68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8f68;
        }
    }
    ctx->pc = 0x2C8FD4u;
label_2c8fd4:
    // 0x2c8fd4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2c8fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2c8fd8:
    // 0x2c8fd8: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x2c8fd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2c8fdc:
    // 0x2c8fdc: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c8fdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c8fe0:
    // 0x2c8fe0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x2c8fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
label_2c8fe4:
    // 0x2c8fe4: 0x40f809  jalr        $v0
label_2c8fe8:
    if (ctx->pc == 0x2C8FE8u) {
        ctx->pc = 0x2C8FE8u;
            // 0x2c8fe8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FECu;
        goto label_2c8fec;
    }
    ctx->pc = 0x2C8FE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C8FECu);
        ctx->pc = 0x2C8FE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8FE4u;
            // 0x2c8fe8: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C8FECu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C8FECu; }
            if (ctx->pc != 0x2C8FECu) { return; }
        }
        }
    }
    ctx->pc = 0x2C8FECu;
label_2c8fec:
    // 0x2c8fec: 0x1240000d  beqz        $s2, . + 4 + (0xD << 2)
label_2c8ff0:
    if (ctx->pc == 0x2C8FF0u) {
        ctx->pc = 0x2C8FF0u;
            // 0x2c8ff0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FF4u;
        goto label_2c8ff4;
    }
    ctx->pc = 0x2C8FECu;
    {
        const bool branch_taken_0x2c8fec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C8FF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C8FECu;
            // 0x2c8ff0: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c8fec) {
            ctx->pc = 0x2C9024u;
            goto label_2c9024;
        }
    }
    ctx->pc = 0x2C8FF4u;
label_2c8ff4:
    // 0x2c8ff4: 0x0  nop
    ctx->pc = 0x2c8ff4u;
    // NOP
label_2c8ff8:
    // 0x2c8ff8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2c8ff8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2c8ffc:
    // 0x2c8ffc: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2c8ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2c9000:
    // 0x2c9000: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x2c9000u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2c9004:
    // 0x2c9004: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c9004u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c9008:
    // 0x2c9008: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c9008u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c900c:
    // 0x2c900c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2c900cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c9010:
    // 0x2c9010: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2c9010u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2c9014:
    // 0x2c9014: 0xf2282b  sltu        $a1, $a3, $s2
    ctx->pc = 0x2c9014u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2c9018:
    // 0x2c9018: 0x641826  xor         $v1, $v1, $a0
    ctx->pc = 0x2c9018u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 4));
label_2c901c:
    // 0x2c901c: 0x14a0fff6  bnez        $a1, . + 4 + (-0xA << 2)
label_2c9020:
    if (ctx->pc == 0x2C9020u) {
        ctx->pc = 0x2C9020u;
            // 0x2c9020: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C9024u;
        goto label_2c9024;
    }
    ctx->pc = 0x2C901Cu;
    {
        const bool branch_taken_0x2c901c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C901Cu;
            // 0x2c9020: 0xacc30000  sw          $v1, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c901c) {
            ctx->pc = 0x2C8FF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8ff8;
        }
    }
    ctx->pc = 0x2C9024u;
label_2c9024:
    // 0x2c9024: 0x1240000b  beqz        $s2, . + 4 + (0xB << 2)
label_2c9028:
    if (ctx->pc == 0x2C9028u) {
        ctx->pc = 0x2C9028u;
            // 0x2c9028: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C902Cu;
        goto label_2c902c;
    }
    ctx->pc = 0x2C9024u;
    {
        const bool branch_taken_0x2c9024 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9028u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9024u;
            // 0x2c9028: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9024) {
            ctx->pc = 0x2C9054u;
            goto label_2c9054;
        }
    }
    ctx->pc = 0x2C902Cu;
label_2c902c:
    // 0x2c902c: 0x0  nop
    ctx->pc = 0x2c902cu;
    // NOP
label_2c9030:
    // 0x2c9030: 0x71080  sll         $v0, $a3, 2
    ctx->pc = 0x2c9030u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_2c9034:
    // 0x2c9034: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x2c9034u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
label_2c9038:
    // 0x2c9038: 0x531821  addu        $v1, $v0, $s3
    ctx->pc = 0x2c9038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2c903c:
    // 0x2c903c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x2c903cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
label_2c9040:
    // 0x2c9040: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x2c9040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2c9044:
    // 0x2c9044: 0xf2302b  sltu        $a2, $a3, $s2
    ctx->pc = 0x2c9044u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 18)) ? 1 : 0);
label_2c9048:
    // 0x2c9048: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2c9048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2c904c:
    // 0x2c904c: 0x14c0fff8  bnez        $a2, . + 4 + (-0x8 << 2)
label_2c9050:
    if (ctx->pc == 0x2C9050u) {
        ctx->pc = 0x2C9050u;
            // 0x2c9050: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->pc = 0x2C9054u;
        goto label_2c9054;
    }
    ctx->pc = 0x2C904Cu;
    {
        const bool branch_taken_0x2c904c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C904Cu;
            // 0x2c9050: 0xac450000  sw          $a1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c904c) {
            ctx->pc = 0x2C9030u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9030;
        }
    }
    ctx->pc = 0x2C9054u;
label_2c9054:
    // 0x2c9054: 0x1200001b  beqz        $s0, . + 4 + (0x1B << 2)
label_2c9058:
    if (ctx->pc == 0x2C9058u) {
        ctx->pc = 0x2C9058u;
            // 0x2c9058: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C905Cu;
        goto label_2c905c;
    }
    ctx->pc = 0x2C9054u;
    {
        const bool branch_taken_0x2c9054 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9058u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9054u;
            // 0x2c9058: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9054) {
            ctx->pc = 0x2C90C4u;
            goto label_2c90c4;
        }
    }
    ctx->pc = 0x2C905Cu;
label_2c905c:
    // 0x2c905c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c905cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9060:
    // 0x2c9060: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2c9060u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c9064:
    // 0x2c9064: 0x0  nop
    ctx->pc = 0x2c9064u;
    // NOP
label_2c9068:
    // 0x2c9068: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2c9068u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2c906c:
    // 0x2c906c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2c906cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_2c9070:
    // 0x2c9070: 0x130202b  sltu        $a0, $t1, $s0
    ctx->pc = 0x2c9070u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c9074:
    // 0x2c9074: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2c9074u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2c9078:
    // 0x2c9078: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c9078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c907c:
    // 0x2c907c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c907cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2c9080:
    // 0x2c9080: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2c9080u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_2c9084:
    // 0x2c9084: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2c9084u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2c9088:
    // 0x2c9088: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x2c9088u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_2c908c:
    // 0x2c908c: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x2c908cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_2c9090:
    // 0x2c9090: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x2c9090u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_2c9094:
    // 0x2c9094: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x2c9094u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_2c9098:
    // 0x2c9098: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x2c9098u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
label_2c909c:
    // 0x2c909c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c909cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2c90a0:
    // 0x2c90a0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c90a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2c90a4:
    // 0x2c90a4: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x2c90a4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
label_2c90a8:
    // 0x2c90a8: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x2c90a8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_2c90ac:
    // 0x2c90ac: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x2c90acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
label_2c90b0:
    // 0x2c90b0: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x2c90b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
label_2c90b4:
    // 0x2c90b4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2c90b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2c90b8:
    // 0x2c90b8: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x2c90b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_2c90bc:
    // 0x2c90bc: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
label_2c90c0:
    if (ctx->pc == 0x2C90C0u) {
        ctx->pc = 0x2C90C0u;
            // 0x2c90c0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x2C90C4u;
        goto label_2c90c4;
    }
    ctx->pc = 0x2C90BCu;
    {
        const bool branch_taken_0x2c90bc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C90C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C90BCu;
            // 0x2c90c0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90bc) {
            ctx->pc = 0x2C9068u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9068;
        }
    }
    ctx->pc = 0x2C90C4u;
label_2c90c4:
    // 0x2c90c4: 0x2b0a823  subu        $s5, $s5, $s0
    ctx->pc = 0x2c90c4u;
    SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
label_2c90c8:
    // 0x2c90c8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2c90c8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2c90cc:
    // 0x2c90cc: 0x2b0102b  sltu        $v0, $s5, $s0
    ctx->pc = 0x2c90ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c90d0:
    // 0x2c90d0: 0x2d0b021  addu        $s6, $s6, $s0
    ctx->pc = 0x2c90d0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 16)));
label_2c90d4:
    // 0x2c90d4: 0x1040ffa0  beqz        $v0, . + 4 + (-0x60 << 2)
label_2c90d8:
    if (ctx->pc == 0x2C90D8u) {
        ctx->pc = 0x2C90D8u;
            // 0x2c90d8: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->pc = 0x2C90DCu;
        goto label_2c90dc;
    }
    ctx->pc = 0x2C90D4u;
    {
        const bool branch_taken_0x2c90d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C90D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C90D4u;
            // 0x2c90d8: 0x2f0b821  addu        $s7, $s7, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c90d4) {
            ctx->pc = 0x2C8F58u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c8f58;
        }
    }
    ctx->pc = 0x2C90DCu;
label_2c90dc:
    // 0x2c90dc: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2c90dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2c90e0:
    // 0x2c90e0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2c90e0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c90e4:
    // 0x2c90e4: 0xac570000  sw          $s7, 0x0($v0)
    ctx->pc = 0x2c90e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 23));
label_2c90e8:
    // 0x2c90e8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c90e8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c90ec:
    // 0x2c90ec: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2c90ecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c90f0:
    // 0x2c90f0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2c90f0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c90f4:
    // 0x2c90f4: 0xdfb30028  ld          $s3, 0x28($sp)
    ctx->pc = 0x2c90f4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c90f8:
    // 0x2c90f8: 0xdfb40030  ld          $s4, 0x30($sp)
    ctx->pc = 0x2c90f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c90fc:
    // 0x2c90fc: 0xdfb50038  ld          $s5, 0x38($sp)
    ctx->pc = 0x2c90fcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c9100:
    // 0x2c9100: 0xdfb60040  ld          $s6, 0x40($sp)
    ctx->pc = 0x2c9100u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c9104:
    // 0x2c9104: 0xdfb70048  ld          $s7, 0x48($sp)
    ctx->pc = 0x2c9104u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2c9108:
    // 0x2c9108: 0xdfbe0050  ld          $fp, 0x50($sp)
    ctx->pc = 0x2c9108u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2c910c:
    // 0x2c910c: 0xdfbf0058  ld          $ra, 0x58($sp)
    ctx->pc = 0x2c910cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 88)));
label_2c9110:
    // 0x2c9110: 0x3e00008  jr          $ra
label_2c9114:
    if (ctx->pc == 0x2C9114u) {
        ctx->pc = 0x2C9114u;
            // 0x2c9114: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x2C9118u;
        goto label_2c9118;
    }
    ctx->pc = 0x2C9110u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9114u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9110u;
            // 0x2c9114: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9118u;
label_2c9118:
    // 0x2c9118: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9118u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c911c:
    // 0x2c911c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x2c911cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9120:
    // 0x2c9120: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9120u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c9124:
    // 0x2c9124: 0x8c46000c  lw          $a2, 0xC($v0)
    ctx->pc = 0x2c9124u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2c9128:
    // 0x2c9128: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x2c9128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c912c:
    // 0x2c912c: 0xc0b6098  jal         func_2D8260
label_2c9130:
    if (ctx->pc == 0x2C9130u) {
        ctx->pc = 0x2C9130u;
            // 0x2c9130: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2C9134u;
        goto label_2c9134;
    }
    ctx->pc = 0x2C912Cu;
    SET_GPR_U32(ctx, 31, 0x2C9134u);
    ctx->pc = 0x2C9130u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C912Cu;
            // 0x2c9130: 0x8c450000  lw          $a1, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9134u; }
        if (ctx->pc != 0x2C9134u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9134u; }
        if (ctx->pc != 0x2C9134u) { return; }
    }
    ctx->pc = 0x2C9134u;
label_2c9134:
    // 0x2c9134: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9134u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9138:
    // 0x2c9138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c913c:
    // 0x2c913c: 0x3e00008  jr          $ra
label_2c9140:
    if (ctx->pc == 0x2C9140u) {
        ctx->pc = 0x2C9140u;
            // 0x2c9140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C9144u;
        goto label_2c9144;
    }
    ctx->pc = 0x2C913Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C913Cu;
            // 0x2c9140: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9144u;
label_2c9144:
    // 0x2c9144: 0x0  nop
    ctx->pc = 0x2c9144u;
    // NOP
label_2c9148:
    // 0x2c9148: 0x8c83000c  lw          $v1, 0xC($a0)
    ctx->pc = 0x2c9148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2c914c:
    // 0x2c914c: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2c914cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c9150:
    // 0x2c9150: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2c9150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2c9154:
    // 0x2c9154: 0x3e00008  jr          $ra
label_2c9158:
    if (ctx->pc == 0x2C9158u) {
        ctx->pc = 0x2C9158u;
            // 0x2c9158: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->pc = 0x2C915Cu;
        goto label_2c915c;
    }
    ctx->pc = 0x2C9154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9154u;
            // 0x2c9158: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C915Cu;
label_2c915c:
    // 0x2c915c: 0x0  nop
    ctx->pc = 0x2c915cu;
    // NOP
label_2c9160:
    // 0x2c9160: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x2c9160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_2c9164:
    // 0x2c9164: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9164u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9168:
    // 0x2c9168: 0x24639178  addiu       $v1, $v1, -0x6E88
    ctx->pc = 0x2c9168u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939000));
label_2c916c:
    // 0x2c916c: 0x3e00008  jr          $ra
label_2c9170:
    if (ctx->pc == 0x2C9170u) {
        ctx->pc = 0x2C9170u;
            // 0x2c9170: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x2C9174u;
        goto label_2c9174;
    }
    ctx->pc = 0x2C916Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C916Cu;
            // 0x2c9170: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9174u;
label_2c9174:
    // 0x2c9174: 0x0  nop
    ctx->pc = 0x2c9174u;
    // NOP
label_2c9178:
    // 0x2c9178: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9178u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c917c:
    // 0x2c917c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c917cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9180:
    // 0x2c9180: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9180u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c9184:
    // 0x2c9184: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9188:
    // 0x2c9188: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2c918c:
    if (ctx->pc == 0x2C918Cu) {
        ctx->pc = 0x2C918Cu;
            // 0x2c918c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x2C9190u;
        goto label_2c9190;
    }
    ctx->pc = 0x2C9188u;
    {
        const bool branch_taken_0x2c9188 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C918Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9188u;
            // 0x2c918c: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9188) {
            ctx->pc = 0x2C91F4u;
            goto label_2c91f4;
        }
    }
    ctx->pc = 0x2C9190u;
label_2c9190:
    // 0x2c9190: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x2c9190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_2c9194:
    // 0x2c9194: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c9198:
    if (ctx->pc == 0x2C9198u) {
        ctx->pc = 0x2C9198u;
            // 0x2c9198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C919Cu;
        goto label_2c919c;
    }
    ctx->pc = 0x2C9194u;
    {
        const bool branch_taken_0x2c9194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9194u;
            // 0x2c9198: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9194) {
            ctx->pc = 0x2C91B0u;
            goto label_2c91b0;
        }
    }
    ctx->pc = 0x2C919Cu;
label_2c919c:
    // 0x2c919c: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2c919cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c91a0:
    // 0x2c91a0: 0xc0b608e  jal         func_2D8238
label_2c91a4:
    if (ctx->pc == 0x2C91A4u) {
        ctx->pc = 0x2C91A4u;
            // 0x2c91a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C91A8u;
        goto label_2c91a8;
    }
    ctx->pc = 0x2C91A0u;
    SET_GPR_U32(ctx, 31, 0x2C91A8u);
    ctx->pc = 0x2C91A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91A0u;
            // 0x2c91a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91A8u; }
        if (ctx->pc != 0x2C91A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91A8u; }
        if (ctx->pc != 0x2C91A8u) { return; }
    }
    ctx->pc = 0x2C91A8u;
label_2c91a8:
    // 0x2c91a8: 0xc0b60dc  jal         func_2D8370
label_2c91ac:
    if (ctx->pc == 0x2C91ACu) {
        ctx->pc = 0x2C91ACu;
            // 0x2c91ac: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x2C91B0u;
        goto label_2c91b0;
    }
    ctx->pc = 0x2C91A8u;
    SET_GPR_U32(ctx, 31, 0x2C91B0u);
    ctx->pc = 0x2C91ACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91A8u;
            // 0x2c91ac: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91B0u; }
        if (ctx->pc != 0x2C91B0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91B0u; }
        if (ctx->pc != 0x2C91B0u) { return; }
    }
    ctx->pc = 0x2C91B0u;
label_2c91b0:
    // 0x2c91b0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2c91b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c91b4:
    // 0x2c91b4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_2c91b8:
    if (ctx->pc == 0x2C91B8u) {
        ctx->pc = 0x2C91B8u;
            // 0x2c91b8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2C91BCu;
        goto label_2c91bc;
    }
    ctx->pc = 0x2C91B4u;
    {
        const bool branch_taken_0x2c91b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c91b4) {
            ctx->pc = 0x2C91B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91B4u;
            // 0x2c91b8: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C91D4u;
            goto label_2c91d4;
        }
    }
    ctx->pc = 0x2C91BCu;
label_2c91bc:
    // 0x2c91bc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2c91bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c91c0:
    // 0x2c91c0: 0xc0b608e  jal         func_2D8238
label_2c91c4:
    if (ctx->pc == 0x2C91C4u) {
        ctx->pc = 0x2C91C4u;
            // 0x2c91c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C91C8u;
        goto label_2c91c8;
    }
    ctx->pc = 0x2C91C0u;
    SET_GPR_U32(ctx, 31, 0x2C91C8u);
    ctx->pc = 0x2C91C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91C0u;
            // 0x2c91c4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91C8u; }
        if (ctx->pc != 0x2C91C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91C8u; }
        if (ctx->pc != 0x2C91C8u) { return; }
    }
    ctx->pc = 0x2C91C8u;
label_2c91c8:
    // 0x2c91c8: 0xc0b60dc  jal         func_2D8370
label_2c91cc:
    if (ctx->pc == 0x2C91CCu) {
        ctx->pc = 0x2C91CCu;
            // 0x2c91cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2C91D0u;
        goto label_2c91d0;
    }
    ctx->pc = 0x2C91C8u;
    SET_GPR_U32(ctx, 31, 0x2C91D0u);
    ctx->pc = 0x2C91CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91C8u;
            // 0x2c91cc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91D0u; }
        if (ctx->pc != 0x2C91D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91D0u; }
        if (ctx->pc != 0x2C91D0u) { return; }
    }
    ctx->pc = 0x2C91D0u;
label_2c91d0:
    // 0x2c91d0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x2c91d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c91d4:
    // 0x2c91d4: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
label_2c91d8:
    if (ctx->pc == 0x2C91D8u) {
        ctx->pc = 0x2C91D8u;
            // 0x2c91d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C91DCu;
        goto label_2c91dc;
    }
    ctx->pc = 0x2C91D4u;
    {
        const bool branch_taken_0x2c91d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C91D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91D4u;
            // 0x2c91d8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c91d4) {
            ctx->pc = 0x2C91F4u;
            goto label_2c91f4;
        }
    }
    ctx->pc = 0x2C91DCu;
label_2c91dc:
    // 0x2c91dc: 0x8e06000c  lw          $a2, 0xC($s0)
    ctx->pc = 0x2c91dcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2c91e0:
    // 0x2c91e0: 0xc0b608e  jal         func_2D8238
label_2c91e4:
    if (ctx->pc == 0x2C91E4u) {
        ctx->pc = 0x2C91E4u;
            // 0x2c91e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C91E8u;
        goto label_2c91e8;
    }
    ctx->pc = 0x2C91E0u;
    SET_GPR_U32(ctx, 31, 0x2C91E8u);
    ctx->pc = 0x2C91E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91E0u;
            // 0x2c91e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91E8u; }
        if (ctx->pc != 0x2C91E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91E8u; }
        if (ctx->pc != 0x2C91E8u) { return; }
    }
    ctx->pc = 0x2C91E8u;
label_2c91e8:
    // 0x2c91e8: 0xc0b60dc  jal         func_2D8370
label_2c91ec:
    if (ctx->pc == 0x2C91ECu) {
        ctx->pc = 0x2C91ECu;
            // 0x2c91ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x2C91F0u;
        goto label_2c91f0;
    }
    ctx->pc = 0x2C91E8u;
    SET_GPR_U32(ctx, 31, 0x2C91F0u);
    ctx->pc = 0x2C91ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91E8u;
            // 0x2c91ec: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91F0u; }
        if (ctx->pc != 0x2C91F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C91F0u; }
        if (ctx->pc != 0x2C91F0u) { return; }
    }
    ctx->pc = 0x2C91F0u;
label_2c91f0:
    // 0x2c91f0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c91f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c91f4:
    // 0x2c91f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c91f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c91f8:
    // 0x2c91f8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c91f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c91fc:
    // 0x2c91fc: 0x3e00008  jr          $ra
label_2c9200:
    if (ctx->pc == 0x2C9200u) {
        ctx->pc = 0x2C9200u;
            // 0x2c9200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C9204u;
        goto label_2c9204;
    }
    ctx->pc = 0x2C91FCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C91FCu;
            // 0x2c9200: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9204u;
label_2c9204:
    // 0x2c9204: 0x0  nop
    ctx->pc = 0x2c9204u;
    // NOP
label_2c9208:
    // 0x2c9208: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9208u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c920c:
    // 0x2c920c: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x2c920cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9210:
    // 0x2c9210: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9210u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c9214:
    // 0x2c9214: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x2c9214u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2c9218:
    // 0x2c9218: 0x8ce4000c  lw          $a0, 0xC($a3)
    ctx->pc = 0x2c9218u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 12)));
label_2c921c:
    // 0x2c921c: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x2c921cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_2c9220:
    // 0x2c9220: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
label_2c9224:
    if (ctx->pc == 0x2C9224u) {
        ctx->pc = 0x2C9224u;
            // 0x2c9224: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9228u;
        goto label_2c9228;
    }
    ctx->pc = 0x2C9220u;
    {
        const bool branch_taken_0x2c9220 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x2C9224u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9220u;
            // 0x2c9224: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9220) {
            ctx->pc = 0x2C9238u;
            goto label_2c9238;
        }
    }
    ctx->pc = 0x2C9228u;
label_2c9228:
    // 0x2c9228: 0x8ce40000  lw          $a0, 0x0($a3)
    ctx->pc = 0x2c9228u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2c922c:
    // 0x2c922c: 0xc0b6098  jal         func_2D8260
label_2c9230:
    if (ctx->pc == 0x2C9230u) {
        ctx->pc = 0x2C9230u;
            // 0x2c9230: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->pc = 0x2C9234u;
        goto label_2c9234;
    }
    ctx->pc = 0x2C922Cu;
    SET_GPR_U32(ctx, 31, 0x2C9234u);
    ctx->pc = 0x2C9230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C922Cu;
            // 0x2c9230: 0x8ca50000  lw          $a1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8260u;
    if (runtime->hasFunction(0x2D8260u)) {
        auto targetFn = runtime->lookupFunction(0x2D8260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9234u; }
        if (ctx->pc != 0x2C9234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8260_0x2d8260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9234u; }
        if (ctx->pc != 0x2C9234u) { return; }
    }
    ctx->pc = 0x2C9234u;
label_2c9234:
    // 0x2c9234: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9234u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9238:
    // 0x2c9238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c923c:
    // 0x2c923c: 0x3e00008  jr          $ra
label_2c9240:
    if (ctx->pc == 0x2C9240u) {
        ctx->pc = 0x2C9240u;
            // 0x2c9240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C9244u;
        goto label_2c9244;
    }
    ctx->pc = 0x2C923Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C923Cu;
            // 0x2c9240: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9244u;
label_2c9244:
    // 0x2c9244: 0x0  nop
    ctx->pc = 0x2c9244u;
    // NOP
label_2c9248:
    // 0x2c9248: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2c9248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2c924c:
    // 0x2c924c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c924cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9250:
    // 0x2c9250: 0x3e00008  jr          $ra
label_2c9254:
    if (ctx->pc == 0x2C9254u) {
        ctx->pc = 0x2C9254u;
            // 0x2c9254: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C9258u;
        goto label_2c9258;
    }
    ctx->pc = 0x2C9250u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9254u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9250u;
            // 0x2c9254: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9258u;
label_2c9258:
    // 0x2c9258: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9258u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c925c:
    // 0x2c925c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c925cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c9260:
    // 0x2c9260: 0xc0b5348  jal         func_2D4D20
label_2c9264:
    if (ctx->pc == 0x2C9264u) {
        ctx->pc = 0x2C9268u;
        goto label_2c9268;
    }
    ctx->pc = 0x2C9260u;
    SET_GPR_U32(ctx, 31, 0x2C9268u);
    ctx->pc = 0x2D4D20u;
    if (runtime->hasFunction(0x2D4D20u)) {
        auto targetFn = runtime->lookupFunction(0x2D4D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9268u; }
        if (ctx->pc != 0x2C9268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4D20_0x2d4d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9268u; }
        if (ctx->pc != 0x2C9268u) { return; }
    }
    ctx->pc = 0x2C9268u;
label_2c9268:
    // 0x2c9268: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9268u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c926c:
    // 0x2c926c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c926cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9270:
    // 0x2c9270: 0x3e00008  jr          $ra
label_2c9274:
    if (ctx->pc == 0x2C9274u) {
        ctx->pc = 0x2C9274u;
            // 0x2c9274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C9278u;
        goto label_2c9278;
    }
    ctx->pc = 0x2C9270u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9274u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9270u;
            // 0x2c9274: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9278u;
label_2c9278:
    // 0x2c9278: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9278u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c927c:
    // 0x2c927c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c927cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c9280:
    // 0x2c9280: 0xc0b5414  jal         func_2D5050
label_2c9284:
    if (ctx->pc == 0x2C9284u) {
        ctx->pc = 0x2C9288u;
        goto label_2c9288;
    }
    ctx->pc = 0x2C9280u;
    SET_GPR_U32(ctx, 31, 0x2C9288u);
    ctx->pc = 0x2D5050u;
    if (runtime->hasFunction(0x2D5050u)) {
        auto targetFn = runtime->lookupFunction(0x2D5050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9288u; }
        if (ctx->pc != 0x2C9288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D5050_0x2d5050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9288u; }
        if (ctx->pc != 0x2C9288u) { return; }
    }
    ctx->pc = 0x2C9288u;
label_2c9288:
    // 0x2c9288: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9288u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c928c:
    // 0x2c928c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c928cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9290:
    // 0x2c9290: 0x3e00008  jr          $ra
label_2c9294:
    if (ctx->pc == 0x2C9294u) {
        ctx->pc = 0x2C9294u;
            // 0x2c9294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C9298u;
        goto label_2c9298;
    }
    ctx->pc = 0x2C9290u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9290u;
            // 0x2c9294: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9298u;
label_2c9298:
    // 0x2c9298: 0x3e00008  jr          $ra
label_2c929c:
    if (ctx->pc == 0x2C929Cu) {
        ctx->pc = 0x2C929Cu;
            // 0x2c929c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2C92A0u;
        goto label_2c92a0;
    }
    ctx->pc = 0x2C9298u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C929Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9298u;
            // 0x2c929c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C92A0u;
label_2c92a0:
    // 0x2c92a0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c92a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c92a4:
    // 0x2c92a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c92a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c92a8:
    // 0x2c92a8: 0x3e00008  jr          $ra
label_2c92ac:
    if (ctx->pc == 0x2C92ACu) {
        ctx->pc = 0x2C92ACu;
            // 0x2c92ac: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C92B0u;
        goto label_2c92b0;
    }
    ctx->pc = 0x2C92A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C92ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C92A8u;
            // 0x2c92ac: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C92B0u;
label_2c92b0:
    // 0x2c92b0: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x2c92b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2c92b4:
    // 0x2c92b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c92b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c92b8:
    // 0x2c92b8: 0x3e00008  jr          $ra
label_2c92bc:
    if (ctx->pc == 0x2C92BCu) {
        ctx->pc = 0x2C92BCu;
            // 0x2c92bc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C92C0u;
        goto label_2c92c0;
    }
    ctx->pc = 0x2C92B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C92BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C92B8u;
            // 0x2c92bc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C92C0u;
label_2c92c0:
    // 0x2c92c0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c92c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c92c4:
    // 0x2c92c4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c92c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c92c8:
    // 0x2c92c8: 0xc0b5362  jal         func_2D4D88
label_2c92cc:
    if (ctx->pc == 0x2C92CCu) {
        ctx->pc = 0x2C92D0u;
        goto label_2c92d0;
    }
    ctx->pc = 0x2C92C8u;
    SET_GPR_U32(ctx, 31, 0x2C92D0u);
    ctx->pc = 0x2D4D88u;
    if (runtime->hasFunction(0x2D4D88u)) {
        auto targetFn = runtime->lookupFunction(0x2D4D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92D0u; }
        if (ctx->pc != 0x2C92D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4D88_0x2d4d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92D0u; }
        if (ctx->pc != 0x2C92D0u) { return; }
    }
    ctx->pc = 0x2C92D0u;
label_2c92d0:
    // 0x2c92d0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c92d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c92d4:
    // 0x2c92d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c92d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c92d8:
    // 0x2c92d8: 0x3e00008  jr          $ra
label_2c92dc:
    if (ctx->pc == 0x2C92DCu) {
        ctx->pc = 0x2C92DCu;
            // 0x2c92dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C92E0u;
        goto label_2c92e0;
    }
    ctx->pc = 0x2C92D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C92DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C92D8u;
            // 0x2c92dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C92E0u;
label_2c92e0:
    // 0x2c92e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c92e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c92e4:
    // 0x2c92e4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c92e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c92e8:
    // 0x2c92e8: 0xc0b5414  jal         func_2D5050
label_2c92ec:
    if (ctx->pc == 0x2C92ECu) {
        ctx->pc = 0x2C92F0u;
        goto label_2c92f0;
    }
    ctx->pc = 0x2C92E8u;
    SET_GPR_U32(ctx, 31, 0x2C92F0u);
    ctx->pc = 0x2D5050u;
    if (runtime->hasFunction(0x2D5050u)) {
        auto targetFn = runtime->lookupFunction(0x2D5050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92F0u; }
        if (ctx->pc != 0x2C92F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D5050_0x2d5050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C92F0u; }
        if (ctx->pc != 0x2C92F0u) { return; }
    }
    ctx->pc = 0x2C92F0u;
label_2c92f0:
    // 0x2c92f0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c92f0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c92f4:
    // 0x2c92f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c92f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c92f8:
    // 0x2c92f8: 0x3e00008  jr          $ra
label_2c92fc:
    if (ctx->pc == 0x2C92FCu) {
        ctx->pc = 0x2C92FCu;
            // 0x2c92fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C9300u;
        goto label_2c9300;
    }
    ctx->pc = 0x2C92F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C92FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C92F8u;
            // 0x2c92fc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9300u;
label_2c9300:
    // 0x2c9300: 0x3e00008  jr          $ra
label_2c9304:
    if (ctx->pc == 0x2C9304u) {
        ctx->pc = 0x2C9304u;
            // 0x2c9304: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2C9308u;
        goto label_2c9308;
    }
    ctx->pc = 0x2C9300u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9304u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9300u;
            // 0x2c9304: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9308u;
label_2c9308:
    // 0x2c9308: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c9308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c930c:
    // 0x2c930c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c930cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9310:
    // 0x2c9310: 0x3e00008  jr          $ra
label_2c9314:
    if (ctx->pc == 0x2C9314u) {
        ctx->pc = 0x2C9314u;
            // 0x2c9314: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C9318u;
        goto label_2c9318;
    }
    ctx->pc = 0x2C9310u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9314u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9310u;
            // 0x2c9314: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9318u;
label_2c9318:
    // 0x2c9318: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x2c9318u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_2c931c:
    // 0x2c931c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c931cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9320:
    // 0x2c9320: 0x3e00008  jr          $ra
label_2c9324:
    if (ctx->pc == 0x2C9324u) {
        ctx->pc = 0x2C9324u;
            // 0x2c9324: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C9328u;
        goto label_2c9328;
    }
    ctx->pc = 0x2C9320u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9324u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9320u;
            // 0x2c9324: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9328u;
label_2c9328:
    // 0x2c9328: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9328u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c932c:
    // 0x2c932c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c932cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c9330:
    // 0x2c9330: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9330u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9334:
    // 0x2c9334: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c9334u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c9338:
    // 0x2c9338: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c9338u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c933c:
    // 0x2c933c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c933cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c9340:
    // 0x2c9340: 0xc0b5348  jal         func_2D4D20
label_2c9344:
    if (ctx->pc == 0x2C9344u) {
        ctx->pc = 0x2C9344u;
            // 0x2c9344: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->pc = 0x2C9348u;
        goto label_2c9348;
    }
    ctx->pc = 0x2C9340u;
    SET_GPR_U32(ctx, 31, 0x2C9348u);
    ctx->pc = 0x2C9344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9340u;
            // 0x2c9344: 0x26040100  addiu       $a0, $s0, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4D20u;
    if (runtime->hasFunction(0x2D4D20u)) {
        auto targetFn = runtime->lookupFunction(0x2D4D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9348u; }
        if (ctx->pc != 0x2C9348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4D20_0x2d4d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9348u; }
        if (ctx->pc != 0x2C9348u) { return; }
    }
    ctx->pc = 0x2C9348u;
label_2c9348:
    // 0x2c9348: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2c9348u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2c934c:
    // 0x2c934c: 0xc0b5362  jal         func_2D4D88
label_2c9350:
    if (ctx->pc == 0x2C9350u) {
        ctx->pc = 0x2C9350u;
            // 0x2c9350: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x2C9354u;
        goto label_2c9354;
    }
    ctx->pc = 0x2C934Cu;
    SET_GPR_U32(ctx, 31, 0x2C9354u);
    ctx->pc = 0x2C9350u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C934Cu;
            // 0x2c9350: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4D88u;
    if (runtime->hasFunction(0x2D4D88u)) {
        auto targetFn = runtime->lookupFunction(0x2D4D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9354u; }
        if (ctx->pc != 0x2C9354u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4D88_0x2d4d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9354u; }
        if (ctx->pc != 0x2C9354u) { return; }
    }
    ctx->pc = 0x2C9354u;
label_2c9354:
    // 0x2c9354: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c9354u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9358:
    // 0x2c9358: 0xc0b5348  jal         func_2D4D20
label_2c935c:
    if (ctx->pc == 0x2C935Cu) {
        ctx->pc = 0x2C935Cu;
            // 0x2c935c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x2C9360u;
        goto label_2c9360;
    }
    ctx->pc = 0x2C9358u;
    SET_GPR_U32(ctx, 31, 0x2C9360u);
    ctx->pc = 0x2C935Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9358u;
            // 0x2c935c: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4D20u;
    if (runtime->hasFunction(0x2D4D20u)) {
        auto targetFn = runtime->lookupFunction(0x2D4D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9360u; }
        if (ctx->pc != 0x2C9360u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4D20_0x2d4d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9360u; }
        if (ctx->pc != 0x2C9360u) { return; }
    }
    ctx->pc = 0x2C9360u;
label_2c9360:
    // 0x2c9360: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9360u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9364:
    // 0x2c9364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9368:
    // 0x2c9368: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9368u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c936c:
    // 0x2c936c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c936cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9370:
    // 0x2c9370: 0x3e00008  jr          $ra
label_2c9374:
    if (ctx->pc == 0x2C9374u) {
        ctx->pc = 0x2C9374u;
            // 0x2c9374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C9378u;
        goto label_2c9378;
    }
    ctx->pc = 0x2C9370u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9374u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9370u;
            // 0x2c9374: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9378u;
label_2c9378:
    // 0x2c9378: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9378u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c937c:
    // 0x2c937c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c937cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c9380:
    // 0x2c9380: 0xc0b54e6  jal         func_2D5398
label_2c9384:
    if (ctx->pc == 0x2C9384u) {
        ctx->pc = 0x2C9388u;
        goto label_2c9388;
    }
    ctx->pc = 0x2C9380u;
    SET_GPR_U32(ctx, 31, 0x2C9388u);
    ctx->pc = 0x2D5398u;
    if (runtime->hasFunction(0x2D5398u)) {
        auto targetFn = runtime->lookupFunction(0x2D5398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9388u; }
        if (ctx->pc != 0x2C9388u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D5398_0x2d5398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9388u; }
        if (ctx->pc != 0x2C9388u) { return; }
    }
    ctx->pc = 0x2C9388u;
label_2c9388:
    // 0x2c9388: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9388u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c938c:
    // 0x2c938c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c938cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9390:
    // 0x2c9390: 0x3e00008  jr          $ra
label_2c9394:
    if (ctx->pc == 0x2C9394u) {
        ctx->pc = 0x2C9394u;
            // 0x2c9394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C9398u;
        goto label_2c9398;
    }
    ctx->pc = 0x2C9390u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9394u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9390u;
            // 0x2c9394: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9398u;
label_2c9398:
    // 0x2c9398: 0x3e00008  jr          $ra
label_2c939c:
    if (ctx->pc == 0x2C939Cu) {
        ctx->pc = 0x2C939Cu;
            // 0x2c939c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2C93A0u;
        goto label_2c93a0;
    }
    ctx->pc = 0x2C9398u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C939Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9398u;
            // 0x2c939c: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C93A0u;
label_2c93a0:
    // 0x2c93a0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c93a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c93a4:
    // 0x2c93a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c93a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c93a8:
    // 0x2c93a8: 0x3e00008  jr          $ra
label_2c93ac:
    if (ctx->pc == 0x2C93ACu) {
        ctx->pc = 0x2C93ACu;
            // 0x2c93ac: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C93B0u;
        goto label_2c93b0;
    }
    ctx->pc = 0x2C93A8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C93ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93A8u;
            // 0x2c93ac: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C93B0u;
label_2c93b0:
    // 0x2c93b0: 0x24030180  addiu       $v1, $zero, 0x180
    ctx->pc = 0x2c93b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 384));
label_2c93b4:
    // 0x2c93b4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c93b4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c93b8:
    // 0x2c93b8: 0x3e00008  jr          $ra
label_2c93bc:
    if (ctx->pc == 0x2C93BCu) {
        ctx->pc = 0x2C93BCu;
            // 0x2c93bc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C93C0u;
        goto label_2c93c0;
    }
    ctx->pc = 0x2C93B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C93BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93B8u;
            // 0x2c93bc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C93C0u;
label_2c93c0:
    // 0x2c93c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c93c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c93c4:
    // 0x2c93c4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c93c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c93c8:
    // 0x2c93c8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c93c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c93cc:
    // 0x2c93cc: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c93ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c93d0:
    // 0x2c93d0: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c93d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c93d4:
    // 0x2c93d4: 0xc0b5362  jal         func_2D4D88
label_2c93d8:
    if (ctx->pc == 0x2C93D8u) {
        ctx->pc = 0x2C93D8u;
            // 0x2c93d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C93DCu;
        goto label_2c93dc;
    }
    ctx->pc = 0x2C93D4u;
    SET_GPR_U32(ctx, 31, 0x2C93DCu);
    ctx->pc = 0x2C93D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93D4u;
            // 0x2c93d8: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4D88u;
    if (runtime->hasFunction(0x2D4D88u)) {
        auto targetFn = runtime->lookupFunction(0x2D4D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C93DCu; }
        if (ctx->pc != 0x2C93DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4D88_0x2d4d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C93DCu; }
        if (ctx->pc != 0x2C93DCu) { return; }
    }
    ctx->pc = 0x2C93DCu;
label_2c93dc:
    // 0x2c93dc: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x2c93dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
label_2c93e0:
    // 0x2c93e0: 0xc0b5348  jal         func_2D4D20
label_2c93e4:
    if (ctx->pc == 0x2C93E4u) {
        ctx->pc = 0x2C93E4u;
            // 0x2c93e4: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->pc = 0x2C93E8u;
        goto label_2c93e8;
    }
    ctx->pc = 0x2C93E0u;
    SET_GPR_U32(ctx, 31, 0x2C93E8u);
    ctx->pc = 0x2C93E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93E0u;
            // 0x2c93e4: 0x26250008  addiu       $a1, $s1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4D20u;
    if (runtime->hasFunction(0x2D4D20u)) {
        auto targetFn = runtime->lookupFunction(0x2D4D20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C93E8u; }
        if (ctx->pc != 0x2C93E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4D20_0x2d4d20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C93E8u; }
        if (ctx->pc != 0x2C93E8u) { return; }
    }
    ctx->pc = 0x2C93E8u;
label_2c93e8:
    // 0x2c93e8: 0x26040100  addiu       $a0, $s0, 0x100
    ctx->pc = 0x2c93e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 256));
label_2c93ec:
    // 0x2c93ec: 0xc0b5362  jal         func_2D4D88
label_2c93f0:
    if (ctx->pc == 0x2C93F0u) {
        ctx->pc = 0x2C93F0u;
            // 0x2c93f0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->pc = 0x2C93F4u;
        goto label_2c93f4;
    }
    ctx->pc = 0x2C93ECu;
    SET_GPR_U32(ctx, 31, 0x2C93F4u);
    ctx->pc = 0x2C93F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C93ECu;
            // 0x2c93f0: 0x26250010  addiu       $a1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D4D88u;
    if (runtime->hasFunction(0x2D4D88u)) {
        auto targetFn = runtime->lookupFunction(0x2D4D88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C93F4u; }
        if (ctx->pc != 0x2C93F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D4D88_0x2d4d88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C93F4u; }
        if (ctx->pc != 0x2C93F4u) { return; }
    }
    ctx->pc = 0x2C93F4u;
label_2c93f4:
    // 0x2c93f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c93f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c93f8:
    // 0x2c93f8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c93f8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c93fc:
    // 0x2c93fc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c93fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c9400:
    // 0x2c9400: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c9400u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9404:
    // 0x2c9404: 0x3e00008  jr          $ra
label_2c9408:
    if (ctx->pc == 0x2C9408u) {
        ctx->pc = 0x2C9408u;
            // 0x2c9408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C940Cu;
        goto label_2c940c;
    }
    ctx->pc = 0x2C9404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9404u;
            // 0x2c9408: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C940Cu;
label_2c940c:
    // 0x2c940c: 0x0  nop
    ctx->pc = 0x2c940cu;
    // NOP
label_2c9410:
    // 0x2c9410: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c9414:
    // 0x2c9414: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c9418:
    // 0x2c9418: 0xc0b54e6  jal         func_2D5398
label_2c941c:
    if (ctx->pc == 0x2C941Cu) {
        ctx->pc = 0x2C9420u;
        goto label_2c9420;
    }
    ctx->pc = 0x2C9418u;
    SET_GPR_U32(ctx, 31, 0x2C9420u);
    ctx->pc = 0x2D5398u;
    if (runtime->hasFunction(0x2D5398u)) {
        auto targetFn = runtime->lookupFunction(0x2D5398u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9420u; }
        if (ctx->pc != 0x2C9420u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D5398_0x2d5398(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9420u; }
        if (ctx->pc != 0x2C9420u) { return; }
    }
    ctx->pc = 0x2C9420u;
label_2c9420:
    // 0x2c9420: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9420u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9424:
    // 0x2c9424: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9424u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9428:
    // 0x2c9428: 0x3e00008  jr          $ra
label_2c942c:
    if (ctx->pc == 0x2C942Cu) {
        ctx->pc = 0x2C942Cu;
            // 0x2c942c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C9430u;
        goto label_2c9430;
    }
    ctx->pc = 0x2C9428u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C942Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9428u;
            // 0x2c942c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9430u;
label_2c9430:
    // 0x2c9430: 0x3e00008  jr          $ra
label_2c9434:
    if (ctx->pc == 0x2C9434u) {
        ctx->pc = 0x2C9434u;
            // 0x2c9434: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2C9438u;
        goto label_2c9438;
    }
    ctx->pc = 0x2C9430u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9434u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9430u;
            // 0x2c9434: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9438u;
label_2c9438:
    // 0x2c9438: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c9438u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c943c:
    // 0x2c943c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c943cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9440:
    // 0x2c9440: 0x3e00008  jr          $ra
label_2c9444:
    if (ctx->pc == 0x2C9444u) {
        ctx->pc = 0x2C9444u;
            // 0x2c9444: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C9448u;
        goto label_2c9448;
    }
    ctx->pc = 0x2C9440u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9444u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9440u;
            // 0x2c9444: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9448u;
label_2c9448:
    // 0x2c9448: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x2c9448u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2c944c:
    // 0x2c944c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c944cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9450:
    // 0x2c9450: 0x3e00008  jr          $ra
label_2c9454:
    if (ctx->pc == 0x2C9454u) {
        ctx->pc = 0x2C9454u;
            // 0x2c9454: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C9458u;
        goto label_2c9458;
    }
    ctx->pc = 0x2C9450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9450u;
            // 0x2c9454: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9458u;
label_2c9458:
    // 0x2c9458: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c9458u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c945c:
    // 0x2c945c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c945cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c9460:
    // 0x2c9460: 0x90d10000  lbu         $s1, 0x0($a2)
    ctx->pc = 0x2c9460u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2c9464:
    // 0x2c9464: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9464u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c9468:
    // 0x2c9468: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9468u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c946c:
    // 0x2c946c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c946cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c9470:
    // 0x2c9470: 0xc0b60b8  jal         func_2D82E0
label_2c9474:
    if (ctx->pc == 0x2C9474u) {
        ctx->pc = 0x2C9474u;
            // 0x2c9474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9478u;
        goto label_2c9478;
    }
    ctx->pc = 0x2C9470u;
    SET_GPR_U32(ctx, 31, 0x2C9478u);
    ctx->pc = 0x2C9474u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9470u;
            // 0x2c9474: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D82E0u;
    if (runtime->hasFunction(0x2D82E0u)) {
        auto targetFn = runtime->lookupFunction(0x2D82E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9478u; }
        if (ctx->pc != 0x2C9478u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D82E0_0x2d82e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9478u; }
        if (ctx->pc != 0x2C9478u) { return; }
    }
    ctx->pc = 0x2C9478u;
label_2c9478:
    // 0x2c9478: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2c9478u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c947c:
    // 0x2c947c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2c947cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2c9480:
    // 0x2c9480: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2c9484:
    if (ctx->pc == 0x2C9484u) {
        ctx->pc = 0x2C9484u;
            // 0x2c9484: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C9488u;
        goto label_2c9488;
    }
    ctx->pc = 0x2C9480u;
    {
        const bool branch_taken_0x2c9480 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9480u;
            // 0x2c9484: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9480) {
            ctx->pc = 0x2C9490u;
            goto label_2c9490;
        }
    }
    ctx->pc = 0x2C9488u;
label_2c9488:
    // 0x2c9488: 0xae110004  sw          $s1, 0x4($s0)
    ctx->pc = 0x2c9488u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 17));
label_2c948c:
    // 0x2c948c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c948cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9490:
    // 0x2c9490: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9490u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9494:
    // 0x2c9494: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9494u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c9498:
    // 0x2c9498: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c9498u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c949c:
    // 0x2c949c: 0x3e00008  jr          $ra
label_2c94a0:
    if (ctx->pc == 0x2C94A0u) {
        ctx->pc = 0x2C94A0u;
            // 0x2c94a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C94A4u;
        goto label_2c94a4;
    }
    ctx->pc = 0x2C949Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C94A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C949Cu;
            // 0x2c94a0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C94A4u;
label_2c94a4:
    // 0x2c94a4: 0x0  nop
    ctx->pc = 0x2c94a4u;
    // NOP
label_2c94a8:
    // 0x2c94a8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c94a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c94ac:
    // 0x2c94ac: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c94acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c94b0:
    // 0x2c94b0: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2c94b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c94b4:
    // 0x2c94b4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c94b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c94b8:
    // 0x2c94b8: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2c94b8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c94bc:
    // 0x2c94bc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c94bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2c94c0:
    // 0x2c94c0: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c94c0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c94c4:
    // 0x2c94c4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c94c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2c94c8:
    // 0x2c94c8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c94c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c94cc:
    // 0x2c94cc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2c94ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2c94d0:
    // 0x2c94d0: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2c94d0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c94d4:
    // 0x2c94d4: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2c94d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2c94d8:
    // 0x2c94d8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2c94d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c94dc:
    // 0x2c94dc: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2c94dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2c94e0:
    // 0x2c94e0: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2c94e0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c94e4:
    // 0x2c94e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c94e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c94e8:
    // 0x2c94e8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c94e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c94ec:
    // 0x2c94ec: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2c94ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2c94f0:
    // 0x2c94f0: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x2c94f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c94f4:
    // 0x2c94f4: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2c94f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c94f8:
    // 0x2c94f8: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_2c94fc:
    if (ctx->pc == 0x2C94FCu) {
        ctx->pc = 0x2C94FCu;
            // 0x2c94fc: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x2C9500u;
        goto label_2c9500;
    }
    ctx->pc = 0x2C94F8u;
    {
        const bool branch_taken_0x2c94f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C94FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C94F8u;
            // 0x2c94fc: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c94f8) {
            ctx->pc = 0x2C9614u;
            goto label_2c9614;
        }
    }
    ctx->pc = 0x2C9500u;
label_2c9500:
    // 0x2c9500: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_2c9504:
    if (ctx->pc == 0x2C9504u) {
        ctx->pc = 0x2C9504u;
            // 0x2c9504: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9508u;
        goto label_2c9508;
    }
    ctx->pc = 0x2C9500u;
    {
        const bool branch_taken_0x2c9500 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9504u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9500u;
            // 0x2c9504: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9500) {
            ctx->pc = 0x2C957Cu;
            goto label_2c957c;
        }
    }
    ctx->pc = 0x2C9508u;
label_2c9508:
    // 0x2c9508: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2c9508u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c950c:
    // 0x2c950c: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c950cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c9510:
    // 0x2c9510: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x2c9510u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_2c9514:
    // 0x2c9514: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2c9514u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_2c9518:
    // 0x2c9518: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x2c9518u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_2c951c:
    // 0x2c951c: 0x130302b  sltu        $a2, $t1, $s0
    ctx->pc = 0x2c951cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c9520:
    // 0x2c9520: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x2c9520u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_2c9524:
    // 0x2c9524: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2c9524u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2c9528:
    // 0x2c9528: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2c9528u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2c952c:
    // 0x2c952c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c952cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2c9530:
    // 0x2c9530: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2c9530u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2c9534:
    // 0x2c9534: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9534u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c9538:
    // 0x2c9538: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c9538u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2c953c:
    // 0x2c953c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c953cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c9540:
    // 0x2c9540: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2c9540u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_2c9544:
    // 0x2c9544: 0x90e50007  lbu         $a1, 0x7($a3)
    ctx->pc = 0x2c9544u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_2c9548:
    // 0x2c9548: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x2c9548u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_2c954c:
    // 0x2c954c: 0x90e40005  lbu         $a0, 0x5($a3)
    ctx->pc = 0x2c954cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_2c9550:
    // 0x2c9550: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2c9550u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2c9554:
    // 0x2c9554: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x2c9554u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_2c9558:
    // 0x2c9558: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2c9558u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_2c955c:
    // 0x2c955c: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c955cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2c9560:
    // 0x2c9560: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2c9560u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2c9564:
    // 0x2c9564: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c9564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2c9568:
    // 0x2c9568: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9568u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c956c:
    // 0x2c956c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c956cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c9570:
    // 0x2c9570: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2c9570u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_2c9574:
    // 0x2c9574: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
label_2c9578:
    if (ctx->pc == 0x2C9578u) {
        ctx->pc = 0x2C9578u;
            // 0x2c9578: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x2C957Cu;
        goto label_2c957c;
    }
    ctx->pc = 0x2C9574u;
    {
        const bool branch_taken_0x2c9574 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9578u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9574u;
            // 0x2c9578: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9574) {
            ctx->pc = 0x2C9510u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9510;
        }
    }
    ctx->pc = 0x2C957Cu;
label_2c957c:
    // 0x2c957c: 0x8ee20008  lw          $v0, 0x8($s7)
    ctx->pc = 0x2c957cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 8)));
label_2c9580:
    // 0x2c9580: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c9580u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c9584:
    // 0x2c9584: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c9584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9588:
    // 0x2c9588: 0x40f809  jalr        $v0
label_2c958c:
    if (ctx->pc == 0x2C958Cu) {
        ctx->pc = 0x2C958Cu;
            // 0x2c958c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9590u;
        goto label_2c9590;
    }
    ctx->pc = 0x2C9588u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C9590u);
        ctx->pc = 0x2C958Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9588u;
            // 0x2c958c: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9590u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9590u; }
            if (ctx->pc != 0x2C9590u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9590u;
label_2c9590:
    // 0x2c9590: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2c9594:
    if (ctx->pc == 0x2C9594u) {
        ctx->pc = 0x2C9594u;
            // 0x2c9594: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9598u;
        goto label_2c9598;
    }
    ctx->pc = 0x2C9590u;
    {
        const bool branch_taken_0x2c9590 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9594u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9590u;
            // 0x2c9594: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9590) {
            ctx->pc = 0x2C95FCu;
            goto label_2c95fc;
        }
    }
    ctx->pc = 0x2C9598u;
label_2c9598:
    // 0x2c9598: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c9598u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c959c:
    // 0x2c959c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c959cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c95a0:
    // 0x2c95a0: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2c95a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2c95a4:
    // 0x2c95a4: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2c95a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_2c95a8:
    // 0x2c95a8: 0x130202b  sltu        $a0, $t1, $s0
    ctx->pc = 0x2c95a8u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c95ac:
    // 0x2c95ac: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2c95acu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2c95b0:
    // 0x2c95b0: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c95b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c95b4:
    // 0x2c95b4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c95b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2c95b8:
    // 0x2c95b8: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2c95b8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_2c95bc:
    // 0x2c95bc: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2c95bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2c95c0:
    // 0x2c95c0: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x2c95c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_2c95c4:
    // 0x2c95c4: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x2c95c4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_2c95c8:
    // 0x2c95c8: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x2c95c8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_2c95cc:
    // 0x2c95cc: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x2c95ccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_2c95d0:
    // 0x2c95d0: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x2c95d0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
label_2c95d4:
    // 0x2c95d4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2c95d8:
    // 0x2c95d8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c95d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2c95dc:
    // 0x2c95dc: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x2c95dcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
label_2c95e0:
    // 0x2c95e0: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x2c95e0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_2c95e4:
    // 0x2c95e4: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x2c95e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
label_2c95e8:
    // 0x2c95e8: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x2c95e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
label_2c95ec:
    // 0x2c95ec: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2c95ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2c95f0:
    // 0x2c95f0: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x2c95f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_2c95f4:
    // 0x2c95f4: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
label_2c95f8:
    if (ctx->pc == 0x2C95F8u) {
        ctx->pc = 0x2C95F8u;
            // 0x2c95f8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x2C95FCu;
        goto label_2c95fc;
    }
    ctx->pc = 0x2C95F4u;
    {
        const bool branch_taken_0x2c95f4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C95F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C95F4u;
            // 0x2c95f8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c95f4) {
            ctx->pc = 0x2C95A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c95a0;
        }
    }
    ctx->pc = 0x2C95FCu;
label_2c95fc:
    // 0x2c95fc: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2c95fcu;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2c9600:
    // 0x2c9600: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2c9600u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2c9604:
    // 0x2c9604: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2c9604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c9608:
    // 0x2c9608: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x2c9608u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2c960c:
    // 0x2c960c: 0x1040ffbc  beqz        $v0, . + 4 + (-0x44 << 2)
label_2c9610:
    if (ctx->pc == 0x2C9610u) {
        ctx->pc = 0x2C9610u;
            // 0x2c9610: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->pc = 0x2C9614u;
        goto label_2c9614;
    }
    ctx->pc = 0x2C960Cu;
    {
        const bool branch_taken_0x2c960c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C960Cu;
            // 0x2c9610: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c960c) {
            ctx->pc = 0x2C9500u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9500;
        }
    }
    ctx->pc = 0x2C9614u;
label_2c9614:
    // 0x2c9614: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x2c9614u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_2c9618:
    // 0x2c9618: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9618u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c961c:
    // 0x2c961c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c961cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9620:
    // 0x2c9620: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9620u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c9624:
    // 0x2c9624: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c9624u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9628:
    // 0x2c9628: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c9628u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c962c:
    // 0x2c962c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c962cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c9630:
    // 0x2c9630: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c9630u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c9634:
    // 0x2c9634: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2c9634u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c9638:
    // 0x2c9638: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2c9638u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c963c:
    // 0x2c963c: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2c963cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c9640:
    // 0x2c9640: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c9640u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2c9644:
    // 0x2c9644: 0x3e00008  jr          $ra
label_2c9648:
    if (ctx->pc == 0x2C9648u) {
        ctx->pc = 0x2C9648u;
            // 0x2c9648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2C964Cu;
        goto label_2c964c;
    }
    ctx->pc = 0x2C9644u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9648u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9644u;
            // 0x2c9648: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C964Cu;
label_2c964c:
    // 0x2c964c: 0x0  nop
    ctx->pc = 0x2c964cu;
    // NOP
label_2c9650:
    // 0x2c9650: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2c9650u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2c9654:
    // 0x2c9654: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2c9654u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2c9658:
    // 0x2c9658: 0x140902d  daddu       $s2, $t2, $zero
    ctx->pc = 0x2c9658u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
label_2c965c:
    // 0x2c965c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2c965cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2c9660:
    // 0x2c9660: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2c9660u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2c9664:
    // 0x2c9664: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2c9664u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2c9668:
    // 0x2c9668: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2c9668u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2c966c:
    // 0x2c966c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2c966cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2c9670:
    // 0x2c9670: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2c9670u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9674:
    // 0x2c9674: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2c9674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2c9678:
    // 0x2c9678: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2c9678u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2c967c:
    // 0x2c967c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2c967cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2c9680:
    // 0x2c9680: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x2c9680u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c9684:
    // 0x2c9684: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2c9684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2c9688:
    // 0x2c9688: 0x100f02d  daddu       $fp, $t0, $zero
    ctx->pc = 0x2c9688u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2c968c:
    // 0x2c968c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c968cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c9690:
    // 0x2c9690: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c9690u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c9694:
    // 0x2c9694: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2c9694u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2c9698:
    // 0x2c9698: 0x8c900004  lw          $s0, 0x4($a0)
    ctx->pc = 0x2c9698u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c969c:
    // 0x2c969c: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2c969cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c96a0:
    // 0x2c96a0: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
label_2c96a4:
    if (ctx->pc == 0x2C96A4u) {
        ctx->pc = 0x2C96A4u;
            // 0x2c96a4: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x2C96A8u;
        goto label_2c96a8;
    }
    ctx->pc = 0x2C96A0u;
    {
        const bool branch_taken_0x2c96a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C96A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C96A0u;
            // 0x2c96a4: 0x8c910000  lw          $s1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96a0) {
            ctx->pc = 0x2C97BCu;
            goto label_2c97bc;
        }
    }
    ctx->pc = 0x2C96A8u;
label_2c96a8:
    // 0x2c96a8: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_2c96ac:
    if (ctx->pc == 0x2C96ACu) {
        ctx->pc = 0x2C96ACu;
            // 0x2c96ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C96B0u;
        goto label_2c96b0;
    }
    ctx->pc = 0x2C96A8u;
    {
        const bool branch_taken_0x2c96a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C96ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C96A8u;
            // 0x2c96ac: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c96a8) {
            ctx->pc = 0x2C9724u;
            goto label_2c9724;
        }
    }
    ctx->pc = 0x2C96B0u;
label_2c96b0:
    // 0x2c96b0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x2c96b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c96b4:
    // 0x2c96b4: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2c96b4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2c96b8:
    // 0x2c96b8: 0x90e50003  lbu         $a1, 0x3($a3)
    ctx->pc = 0x2c96b8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 3)));
label_2c96bc:
    // 0x2c96bc: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2c96bcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_2c96c0:
    // 0x2c96c0: 0x90e30002  lbu         $v1, 0x2($a3)
    ctx->pc = 0x2c96c0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
label_2c96c4:
    // 0x2c96c4: 0x130302b  sltu        $a2, $t1, $s0
    ctx->pc = 0x2c96c4u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c96c8:
    // 0x2c96c8: 0x90e40001  lbu         $a0, 0x1($a3)
    ctx->pc = 0x2c96c8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
label_2c96cc:
    // 0x2c96cc: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2c96ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2c96d0:
    // 0x2c96d0: 0x90e20000  lbu         $v0, 0x0($a3)
    ctx->pc = 0x2c96d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
label_2c96d4:
    // 0x2c96d4: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c96d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2c96d8:
    // 0x2c96d8: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2c96d8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2c96dc:
    // 0x2c96dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c96dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c96e0:
    // 0x2c96e0: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c96e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2c96e4:
    // 0x2c96e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c96e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c96e8:
    // 0x2c96e8: 0xad020000  sw          $v0, 0x0($t0)
    ctx->pc = 0x2c96e8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 2));
label_2c96ec:
    // 0x2c96ec: 0x90e50007  lbu         $a1, 0x7($a3)
    ctx->pc = 0x2c96ecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 7)));
label_2c96f0:
    // 0x2c96f0: 0x90e30006  lbu         $v1, 0x6($a3)
    ctx->pc = 0x2c96f0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 6)));
label_2c96f4:
    // 0x2c96f4: 0x90e40005  lbu         $a0, 0x5($a3)
    ctx->pc = 0x2c96f4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 5)));
label_2c96f8:
    // 0x2c96f8: 0x52e00  sll         $a1, $a1, 24
    ctx->pc = 0x2c96f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 24));
label_2c96fc:
    // 0x2c96fc: 0x90e20004  lbu         $v0, 0x4($a3)
    ctx->pc = 0x2c96fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 4)));
label_2c9700:
    // 0x2c9700: 0x24e70008  addiu       $a3, $a3, 0x8
    ctx->pc = 0x2c9700u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 8));
label_2c9704:
    // 0x2c9704: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x2c9704u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2c9708:
    // 0x2c9708: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x2c9708u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
label_2c970c:
    // 0x2c970c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x2c970cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2c9710:
    // 0x2c9710: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2c9710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2c9714:
    // 0x2c9714: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2c9714u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2c9718:
    // 0x2c9718: 0xad020004  sw          $v0, 0x4($t0)
    ctx->pc = 0x2c9718u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 2));
label_2c971c:
    // 0x2c971c: 0x14c0ffe6  bnez        $a2, . + 4 + (-0x1A << 2)
label_2c9720:
    if (ctx->pc == 0x2C9720u) {
        ctx->pc = 0x2C9720u;
            // 0x2c9720: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->pc = 0x2C9724u;
        goto label_2c9724;
    }
    ctx->pc = 0x2C971Cu;
    {
        const bool branch_taken_0x2c971c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C9720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C971Cu;
            // 0x2c9720: 0x25080008  addiu       $t0, $t0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c971c) {
            ctx->pc = 0x2C96B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c96b8;
        }
    }
    ctx->pc = 0x2C9724u;
label_2c9724:
    // 0x2c9724: 0x8ee2000c  lw          $v0, 0xC($s7)
    ctx->pc = 0x2c9724u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 12)));
label_2c9728:
    // 0x2c9728: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2c9728u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2c972c:
    // 0x2c972c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c972cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9730:
    // 0x2c9730: 0x40f809  jalr        $v0
label_2c9734:
    if (ctx->pc == 0x2C9734u) {
        ctx->pc = 0x2C9734u;
            // 0x2c9734: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9738u;
        goto label_2c9738;
    }
    ctx->pc = 0x2C9730u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2C9738u);
        ctx->pc = 0x2C9734u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9730u;
            // 0x2c9734: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2C9738u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2C9738u; }
            if (ctx->pc != 0x2C9738u) { return; }
        }
        }
    }
    ctx->pc = 0x2C9738u;
label_2c9738:
    // 0x2c9738: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_2c973c:
    if (ctx->pc == 0x2C973Cu) {
        ctx->pc = 0x2C973Cu;
            // 0x2c973c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9740u;
        goto label_2c9740;
    }
    ctx->pc = 0x2C9738u;
    {
        const bool branch_taken_0x2c9738 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C973Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9738u;
            // 0x2c973c: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9738) {
            ctx->pc = 0x2C97A4u;
            goto label_2c97a4;
        }
    }
    ctx->pc = 0x2C9740u;
label_2c9740:
    // 0x2c9740: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2c9740u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9744:
    // 0x2c9744: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2c9744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2c9748:
    // 0x2c9748: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2c9748u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2c974c:
    // 0x2c974c: 0x25290008  addiu       $t1, $t1, 0x8
    ctx->pc = 0x2c974cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 8));
label_2c9750:
    // 0x2c9750: 0x130202b  sltu        $a0, $t1, $s0
    ctx->pc = 0x2c9750u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c9754:
    // 0x2c9754: 0xa0a30000  sb          $v1, 0x0($a1)
    ctx->pc = 0x2c9754u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 3));
label_2c9758:
    // 0x2c9758: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2c9758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2c975c:
    // 0x2c975c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c975cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2c9760:
    // 0x2c9760: 0xa0a20001  sb          $v0, 0x1($a1)
    ctx->pc = 0x2c9760u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 2));
label_2c9764:
    // 0x2c9764: 0x94c30002  lhu         $v1, 0x2($a2)
    ctx->pc = 0x2c9764u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 2)));
label_2c9768:
    // 0x2c9768: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x2c9768u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
label_2c976c:
    // 0x2c976c: 0x90c20003  lbu         $v0, 0x3($a2)
    ctx->pc = 0x2c976cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 3)));
label_2c9770:
    // 0x2c9770: 0xa0a20003  sb          $v0, 0x3($a1)
    ctx->pc = 0x2c9770u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 3), (uint8_t)GPR_U32(ctx, 2));
label_2c9774:
    // 0x2c9774: 0x90c30004  lbu         $v1, 0x4($a2)
    ctx->pc = 0x2c9774u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 4)));
label_2c9778:
    // 0x2c9778: 0xa0a30004  sb          $v1, 0x4($a1)
    ctx->pc = 0x2c9778u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 4), (uint8_t)GPR_U32(ctx, 3));
label_2c977c:
    // 0x2c977c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2c977cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
label_2c9780:
    // 0x2c9780: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x2c9780u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
label_2c9784:
    // 0x2c9784: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x2c9784u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
label_2c9788:
    // 0x2c9788: 0x94c30006  lhu         $v1, 0x6($a2)
    ctx->pc = 0x2c9788u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 6)));
label_2c978c:
    // 0x2c978c: 0xa0a30006  sb          $v1, 0x6($a1)
    ctx->pc = 0x2c978cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
label_2c9790:
    // 0x2c9790: 0x90c20007  lbu         $v0, 0x7($a2)
    ctx->pc = 0x2c9790u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 7)));
label_2c9794:
    // 0x2c9794: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2c9794u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
label_2c9798:
    // 0x2c9798: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x2c9798u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_2c979c:
    // 0x2c979c: 0x1480ffea  bnez        $a0, . + 4 + (-0x16 << 2)
label_2c97a0:
    if (ctx->pc == 0x2C97A0u) {
        ctx->pc = 0x2C97A0u;
            // 0x2c97a0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->pc = 0x2C97A4u;
        goto label_2c97a4;
    }
    ctx->pc = 0x2C979Cu;
    {
        const bool branch_taken_0x2c979c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x2C97A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C979Cu;
            // 0x2c97a0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c979c) {
            ctx->pc = 0x2C9748u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c9748;
        }
    }
    ctx->pc = 0x2C97A4u;
label_2c97a4:
    // 0x2c97a4: 0x2509023  subu        $s2, $s2, $s0
    ctx->pc = 0x2c97a4u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 16)));
label_2c97a8:
    // 0x2c97a8: 0x2709821  addu        $s3, $s3, $s0
    ctx->pc = 0x2c97a8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
label_2c97ac:
    // 0x2c97ac: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x2c97acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_2c97b0:
    // 0x2c97b0: 0x290a021  addu        $s4, $s4, $s0
    ctx->pc = 0x2c97b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
label_2c97b4:
    // 0x2c97b4: 0x1040ffbc  beqz        $v0, . + 4 + (-0x44 << 2)
label_2c97b8:
    if (ctx->pc == 0x2C97B8u) {
        ctx->pc = 0x2C97B8u;
            // 0x2c97b8: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->pc = 0x2C97BCu;
        goto label_2c97bc;
    }
    ctx->pc = 0x2C97B4u;
    {
        const bool branch_taken_0x2c97b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C97B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C97B4u;
            // 0x2c97b8: 0x2b0a821  addu        $s5, $s5, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c97b4) {
            ctx->pc = 0x2C96A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2c96a8;
        }
    }
    ctx->pc = 0x2C97BCu;
label_2c97bc:
    // 0x2c97bc: 0xafd50000  sw          $s5, 0x0($fp)
    ctx->pc = 0x2c97bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 21));
label_2c97c0:
    // 0x2c97c0: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c97c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c97c4:
    // 0x2c97c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c97c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c97c8:
    // 0x2c97c8: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c97c8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c97cc:
    // 0x2c97cc: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2c97ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c97d0:
    // 0x2c97d0: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2c97d0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2c97d4:
    // 0x2c97d4: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2c97d4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2c97d8:
    // 0x2c97d8: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2c97d8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2c97dc:
    // 0x2c97dc: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2c97dcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2c97e0:
    // 0x2c97e0: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2c97e0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2c97e4:
    // 0x2c97e4: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2c97e4u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2c97e8:
    // 0x2c97e8: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2c97e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2c97ec:
    // 0x2c97ec: 0x3e00008  jr          $ra
label_2c97f0:
    if (ctx->pc == 0x2C97F0u) {
        ctx->pc = 0x2C97F0u;
            // 0x2c97f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2C97F4u;
        goto label_2c97f4;
    }
    ctx->pc = 0x2C97ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C97F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C97ECu;
            // 0x2c97f0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C97F4u;
label_2c97f4:
    // 0x2c97f4: 0x0  nop
    ctx->pc = 0x2c97f4u;
    // NOP
label_2c97f8:
    // 0x2c97f8: 0x3e00008  jr          $ra
label_2c97fc:
    if (ctx->pc == 0x2C97FCu) {
        ctx->pc = 0x2C97FCu;
            // 0x2c97fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9800u;
        goto label_2c9800;
    }
    ctx->pc = 0x2C97F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C97FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C97F8u;
            // 0x2c97fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9800u;
label_2c9800:
    // 0x2c9800: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x2c9800u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2c9804:
    // 0x2c9804: 0x2402000b  addiu       $v0, $zero, 0xB
    ctx->pc = 0x2c9804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
label_2c9808:
    // 0x2c9808: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2c9808u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
label_2c980c:
    // 0x2c980c: 0x3e00008  jr          $ra
label_2c9810:
    if (ctx->pc == 0x2C9810u) {
        ctx->pc = 0x2C9810u;
            // 0x2c9810: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->pc = 0x2C9814u;
        goto label_2c9814;
    }
    ctx->pc = 0x2C980Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9810u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C980Cu;
            // 0x2c9810: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9814u;
label_2c9814:
    // 0x2c9814: 0x0  nop
    ctx->pc = 0x2c9814u;
    // NOP
label_2c9818:
    // 0x2c9818: 0x3c03002d  lui         $v1, 0x2D
    ctx->pc = 0x2c9818u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)45 << 16));
label_2c981c:
    // 0x2c981c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c981cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9820:
    // 0x2c9820: 0x24639830  addiu       $v1, $v1, -0x67D0
    ctx->pc = 0x2c9820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940720));
label_2c9824:
    // 0x2c9824: 0x3e00008  jr          $ra
label_2c9828:
    if (ctx->pc == 0x2C9828u) {
        ctx->pc = 0x2C9828u;
            // 0x2c9828: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x2C982Cu;
        goto label_2c982c;
    }
    ctx->pc = 0x2C9824u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9824u;
            // 0x2c9828: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C982Cu;
label_2c982c:
    // 0x2c982c: 0x0  nop
    ctx->pc = 0x2c982cu;
    // NOP
label_2c9830:
    // 0x2c9830: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c9834:
    // 0x2c9834: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9834u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9838:
    // 0x2c9838: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c983c:
    // 0x2c983c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c983cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9840:
    // 0x2c9840: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
label_2c9844:
    if (ctx->pc == 0x2C9844u) {
        ctx->pc = 0x2C9844u;
            // 0x2c9844: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->pc = 0x2C9848u;
        goto label_2c9848;
    }
    ctx->pc = 0x2C9840u;
    {
        const bool branch_taken_0x2c9840 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9844u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9840u;
            // 0x2c9844: 0xffbf0008  sd          $ra, 0x8($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c9840) {
            ctx->pc = 0x2C986Cu;
            goto label_2c986c;
        }
    }
    ctx->pc = 0x2C9848u;
label_2c9848:
    // 0x2c9848: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2c9848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2c984c:
    // 0x2c984c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2c9850:
    if (ctx->pc == 0x2C9850u) {
        ctx->pc = 0x2C9850u;
            // 0x2c9850: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9854u;
        goto label_2c9854;
    }
    ctx->pc = 0x2C984Cu;
    {
        const bool branch_taken_0x2c984c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C984Cu;
            // 0x2c9850: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c984c) {
            ctx->pc = 0x2C9868u;
            goto label_2c9868;
        }
    }
    ctx->pc = 0x2C9854u;
label_2c9854:
    // 0x2c9854: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x2c9854u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2c9858:
    // 0x2c9858: 0xc0b608e  jal         func_2D8238
label_2c985c:
    if (ctx->pc == 0x2C985Cu) {
        ctx->pc = 0x2C985Cu;
            // 0x2c985c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C9860u;
        goto label_2c9860;
    }
    ctx->pc = 0x2C9858u;
    SET_GPR_U32(ctx, 31, 0x2C9860u);
    ctx->pc = 0x2C985Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9858u;
            // 0x2c985c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8238u;
    if (runtime->hasFunction(0x2D8238u)) {
        auto targetFn = runtime->lookupFunction(0x2D8238u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9860u; }
        if (ctx->pc != 0x2C9860u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8238_0x2d8238(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9860u; }
        if (ctx->pc != 0x2C9860u) { return; }
    }
    ctx->pc = 0x2C9860u;
label_2c9860:
    // 0x2c9860: 0xc0b60dc  jal         func_2D8370
label_2c9864:
    if (ctx->pc == 0x2C9864u) {
        ctx->pc = 0x2C9864u;
            // 0x2c9864: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x2C9868u;
        goto label_2c9868;
    }
    ctx->pc = 0x2C9860u;
    SET_GPR_U32(ctx, 31, 0x2C9868u);
    ctx->pc = 0x2C9864u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9860u;
            // 0x2c9864: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8370u;
    if (runtime->hasFunction(0x2D8370u)) {
        auto targetFn = runtime->lookupFunction(0x2D8370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9868u; }
        if (ctx->pc != 0x2C9868u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D8370_0x2d8370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C9868u; }
        if (ctx->pc != 0x2C9868u) { return; }
    }
    ctx->pc = 0x2C9868u;
label_2c9868:
    // 0x2c9868: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9868u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c986c:
    // 0x2c986c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c986cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9870:
    // 0x2c9870: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c9870u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c9874:
    // 0x2c9874: 0x3e00008  jr          $ra
label_2c9878:
    if (ctx->pc == 0x2C9878u) {
        ctx->pc = 0x2C9878u;
            // 0x2c9878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C987Cu;
        goto label_2c987c;
    }
    ctx->pc = 0x2C9874u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9878u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9874u;
            // 0x2c9878: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C987Cu;
label_2c987c:
    // 0x2c987c: 0x0  nop
    ctx->pc = 0x2c987cu;
    // NOP
label_2c9880:
    // 0x2c9880: 0x3e00008  jr          $ra
label_2c9884:
    if (ctx->pc == 0x2C9884u) {
        ctx->pc = 0x2C9884u;
            // 0x2c9884: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x2C9888u;
        goto label_2c9888;
    }
    ctx->pc = 0x2C9880u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9880u;
            // 0x2c9884: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C9888u;
label_2c9888:
    // 0x2c9888: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9888u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c988c:
    // 0x2c988c: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x2c988cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c9890:
    // 0x2c9890: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c9890u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c9894:
    // 0x2c9894: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c9894u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c9898:
    // 0x2c9898: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x2c9898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_2c989c:
    // 0x2c989c: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2c989cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2c98a0:
    // 0x2c98a0: 0xc0b58d6  jal         func_2D6358
label_2c98a4:
    if (ctx->pc == 0x2C98A4u) {
        ctx->pc = 0x2C98A4u;
            // 0x2c98a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2C98A8u;
        goto label_2c98a8;
    }
    ctx->pc = 0x2C98A0u;
    SET_GPR_U32(ctx, 31, 0x2C98A8u);
    ctx->pc = 0x2C98A4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98A0u;
            // 0x2c98a4: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D6358u;
    if (runtime->hasFunction(0x2D6358u)) {
        auto targetFn = runtime->lookupFunction(0x2D6358u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98A8u; }
        if (ctx->pc != 0x2C98A8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D6358_0x2d6358(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C98A8u; }
        if (ctx->pc != 0x2C98A8u) { return; }
    }
    ctx->pc = 0x2C98A8u;
label_2c98a8:
    // 0x2c98a8: 0x2c430801  sltiu       $v1, $v0, 0x801
    ctx->pc = 0x2c98a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
label_2c98ac:
    // 0x2c98ac: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2c98b0:
    if (ctx->pc == 0x2C98B0u) {
        ctx->pc = 0x2C98B0u;
            // 0x2c98b0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x2C98B4u;
        goto label_2c98b4;
    }
    ctx->pc = 0x2C98ACu;
    {
        const bool branch_taken_0x2c98ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C98B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98ACu;
            // 0x2c98b0: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c98ac) {
            ctx->pc = 0x2C98C0u;
            goto label_2c98c0;
        }
    }
    ctx->pc = 0x2C98B4u;
label_2c98b4:
    // 0x2c98b4: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x2c98b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_2c98b8:
    // 0x2c98b8: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c98b8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c98bc:
    // 0x2c98bc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c98bcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c98c0:
    // 0x2c98c0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c98c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c98c4:
    // 0x2c98c4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x2c98c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c98c8:
    // 0x2c98c8: 0x3e00008  jr          $ra
label_2c98cc:
    if (ctx->pc == 0x2C98CCu) {
        ctx->pc = 0x2C98CCu;
            // 0x2c98cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C98D0u;
        goto label_2c98d0;
    }
    ctx->pc = 0x2C98C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C98CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C98C8u;
            // 0x2c98cc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C98D0u;
label_2c98d0:
    // 0x2c98d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c98d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2c98d4:
    // 0x2c98d4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2c98d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c98d8:
    // 0x2c98d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2c98d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2c98dc:
    // 0x2c98dc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c98dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2c98e0:
    // 0x2c98e0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2c98e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2c98e4:
    // 0x2c98e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2c98e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2c98e8:
    // 0x2c98e8: 0x26040024  addiu       $a0, $s0, 0x24
    ctx->pc = 0x2c98e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2c98ec:
    // 0x2c98ec: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2c98ecu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c98f0:
    // 0x2c98f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2c98f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c98f4:
    // 0x2c98f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2c98f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c98f8:
    // 0x2c98f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x2c98f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c98fc:
    // 0x2c98fc: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x2c98fcu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9900:
    // 0x2c9900: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c9900u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2c9904:
    // 0x2c9904: 0xc0b5e16  jal         func_2D7858
label_2c9908:
    if (ctx->pc == 0x2C9908u) {
        ctx->pc = 0x2C9908u;
            // 0x2c9908: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C990Cu;
        goto label_2c990c;
    }
    ctx->pc = 0x2C9904u;
    SET_GPR_U32(ctx, 31, 0x2C990Cu);
    ctx->pc = 0x2C9908u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9904u;
            // 0x2c9908: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7858u;
    if (runtime->hasFunction(0x2D7858u)) {
        auto targetFn = runtime->lookupFunction(0x2D7858u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C990Cu; }
        if (ctx->pc != 0x2C990Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D7858_0x2d7858(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C990Cu; }
        if (ctx->pc != 0x2C990Cu) { return; }
    }
    ctx->pc = 0x2C990Cu;
label_2c990c:
    // 0x2c990c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c990cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c9910:
    // 0x2c9910: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2c9910u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2c9914:
    // 0x2c9914: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2c9914u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2c9918:
    // 0x2c9918: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2c9918u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c991c:
    // 0x2c991c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c991cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2c9920:
    // 0x2c9920: 0x80b5f66  j           func_2D7D98
label_2c9924:
    if (ctx->pc == 0x2C9924u) {
        ctx->pc = 0x2C9924u;
            // 0x2c9924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2C9928u;
        goto label_2c9928;
    }
    ctx->pc = 0x2C9920u;
    ctx->pc = 0x2C9924u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9920u;
            // 0x2c9924: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7D98u;
    {
        auto targetFn = runtime->lookupFunction(0x2D7D98u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2C9928u;
label_2c9928:
    // 0x2c9928: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9928u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c992c:
    // 0x2c992c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c992cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c9930:
    // 0x2c9930: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c9930u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9934:
    // 0x2c9934: 0x80b5fb2  j           func_2D7EC8
label_2c9938:
    if (ctx->pc == 0x2C9938u) {
        ctx->pc = 0x2C9938u;
            // 0x2c9938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C993Cu;
        goto label_2c993c;
    }
    ctx->pc = 0x2C9934u;
    ctx->pc = 0x2C9938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9934u;
            // 0x2c9938: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D7EC8u;
    {
        auto targetFn = runtime->lookupFunction(0x2D7EC8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2C993Cu;
label_2c993c:
    // 0x2c993c: 0x0  nop
    ctx->pc = 0x2c993cu;
    // NOP
label_2c9940:
    // 0x2c9940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2c9940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_2c9944:
    // 0x2c9944: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2c9944u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2c9948:
    // 0x2c9948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2c9948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2c994c:
    // 0x2c994c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2c994cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2c9950:
    // 0x2c9950: 0x80b601a  j           func_2D8068
label_2c9954:
    if (ctx->pc == 0x2C9954u) {
        ctx->pc = 0x2C9954u;
            // 0x2c9954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x2C9958u;
        goto label_2c9958;
    }
    ctx->pc = 0x2C9950u;
    ctx->pc = 0x2C9954u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9950u;
            // 0x2c9954: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D8068u;
    {
        auto targetFn = runtime->lookupFunction(0x2D8068u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2C9958u;
label_2c9958:
    // 0x2c9958: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x2c9958u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c995c:
    // 0x2c995c: 0xc4001b  divu        $zero, $a2, $a0
    ctx->pc = 0x2c995cu;
    { uint32_t divisor = GPR_U32(ctx, 4); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 6) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,6); } }
label_2c9960:
    // 0x2c9960: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2c9964:
    if (ctx->pc == 0x2C9964u) {
        ctx->pc = 0x2C9964u;
            // 0x2c9964: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2C9968u;
        goto label_2c9968;
    }
    ctx->pc = 0x2C9960u;
    {
        const bool branch_taken_0x2c9960 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9960) {
            ctx->pc = 0x2C9964u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9960u;
            // 0x2c9964: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C9968u;
            goto label_2c9968;
        }
    }
    ctx->pc = 0x2C9968u;
label_2c9968:
    // 0x2c9968: 0x1010  mfhi        $v0
    ctx->pc = 0x2c9968u;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_2c996c:
    // 0x2c996c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2c9970:
    if (ctx->pc == 0x2C9970u) {
        ctx->pc = 0x2C9970u;
            // 0x2c9970: 0x821823  subu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->pc = 0x2C9974u;
        goto label_2c9974;
    }
    ctx->pc = 0x2C996Cu;
    {
        const bool branch_taken_0x2c996c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C9970u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C996Cu;
            // 0x2c9970: 0x821823  subu        $v1, $a0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c996c) {
            ctx->pc = 0x2C9980u;
            goto label_2c9980;
        }
    }
    ctx->pc = 0x2C9974u;
label_2c9974:
    // 0x2c9974: 0x50800001  beql        $a0, $zero, . + 4 + (0x1 << 2)
label_2c9978:
    if (ctx->pc == 0x2C9978u) {
        ctx->pc = 0x2C9978u;
            // 0x2c9978: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->pc = 0x2C997Cu;
        goto label_2c997c;
    }
    ctx->pc = 0x2C9974u;
    {
        const bool branch_taken_0x2c9974 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c9974) {
            ctx->pc = 0x2C9978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9974u;
            // 0x2c9978: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C997Cu;
            goto label_2c997c;
        }
    }
    ctx->pc = 0x2C997Cu;
label_2c997c:
    // 0x2c997c: 0xc33021  addu        $a2, $a2, $v1
    ctx->pc = 0x2c997cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
label_2c9980:
    // 0x2c9980: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2c9980u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
label_2c9984:
    // 0x2c9984: 0x3e00008  jr          $ra
label_2c9988:
    if (ctx->pc == 0x2C9988u) {
        ctx->pc = 0x2C9988u;
            // 0x2c9988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2C998Cu;
        goto label_2c998c;
    }
    ctx->pc = 0x2C9984u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C9988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9984u;
            // 0x2c9988: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C998Cu;
label_2c998c:
    // 0x2c998c: 0x0  nop
    ctx->pc = 0x2c998cu;
    // NOP
label_2c9990:
    // 0x2c9990: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2c9990u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2c9994:
    // 0x2c9994: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c9994u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c9998:
    // 0x2c9998: 0x3e00008  jr          $ra
label_2c999c:
    if (ctx->pc == 0x2C999Cu) {
        ctx->pc = 0x2C999Cu;
            // 0x2c999c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2C99A0u;
        goto label_2c99a0;
    }
    ctx->pc = 0x2C9998u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C999Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C9998u;
            // 0x2c999c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C99A0u;
label_2c99a0:
    // 0x2c99a0: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2c99a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
label_2c99a4:
    // 0x2c99a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2c99a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2c99a8:
    // 0x2c99a8: 0x246381d8  addiu       $v1, $v1, -0x7E28
    ctx->pc = 0x2c99a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294935000));
label_2c99ac:
    // 0x2c99ac: 0x3e00008  jr          $ra
label_2c99b0:
    if (ctx->pc == 0x2C99B0u) {
        ctx->pc = 0x2C99B0u;
            // 0x2c99b0: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x2C99B4u;
        goto label_2c99b4;
    }
    ctx->pc = 0x2C99ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C99B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C99ACu;
            // 0x2c99b0: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C99B4u;
label_2c99b4:
    // 0x2c99b4: 0x0  nop
    ctx->pc = 0x2c99b4u;
    // NOP
    ctx->pc = 0x2c99b8u;
}
