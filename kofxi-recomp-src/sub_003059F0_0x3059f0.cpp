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

// Function: sub_003059F0
// Address: 0x3059f0 - 0x306fe0
void sub_003059F0_0x3059f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003059F0_0x3059f0");
#endif

    switch (ctx->pc) {
        case 0x3059f0u: goto label_3059f0;
        case 0x3059f4u: goto label_3059f4;
        case 0x3059f8u: goto label_3059f8;
        case 0x3059fcu: goto label_3059fc;
        case 0x305a00u: goto label_305a00;
        case 0x305a04u: goto label_305a04;
        case 0x305a08u: goto label_305a08;
        case 0x305a0cu: goto label_305a0c;
        case 0x305a10u: goto label_305a10;
        case 0x305a14u: goto label_305a14;
        case 0x305a18u: goto label_305a18;
        case 0x305a1cu: goto label_305a1c;
        case 0x305a20u: goto label_305a20;
        case 0x305a24u: goto label_305a24;
        case 0x305a28u: goto label_305a28;
        case 0x305a2cu: goto label_305a2c;
        case 0x305a30u: goto label_305a30;
        case 0x305a34u: goto label_305a34;
        case 0x305a38u: goto label_305a38;
        case 0x305a3cu: goto label_305a3c;
        case 0x305a40u: goto label_305a40;
        case 0x305a44u: goto label_305a44;
        case 0x305a48u: goto label_305a48;
        case 0x305a4cu: goto label_305a4c;
        case 0x305a50u: goto label_305a50;
        case 0x305a54u: goto label_305a54;
        case 0x305a58u: goto label_305a58;
        case 0x305a5cu: goto label_305a5c;
        case 0x305a60u: goto label_305a60;
        case 0x305a64u: goto label_305a64;
        case 0x305a68u: goto label_305a68;
        case 0x305a6cu: goto label_305a6c;
        case 0x305a70u: goto label_305a70;
        case 0x305a74u: goto label_305a74;
        case 0x305a78u: goto label_305a78;
        case 0x305a7cu: goto label_305a7c;
        case 0x305a80u: goto label_305a80;
        case 0x305a84u: goto label_305a84;
        case 0x305a88u: goto label_305a88;
        case 0x305a8cu: goto label_305a8c;
        case 0x305a90u: goto label_305a90;
        case 0x305a94u: goto label_305a94;
        case 0x305a98u: goto label_305a98;
        case 0x305a9cu: goto label_305a9c;
        case 0x305aa0u: goto label_305aa0;
        case 0x305aa4u: goto label_305aa4;
        case 0x305aa8u: goto label_305aa8;
        case 0x305aacu: goto label_305aac;
        case 0x305ab0u: goto label_305ab0;
        case 0x305ab4u: goto label_305ab4;
        case 0x305ab8u: goto label_305ab8;
        case 0x305abcu: goto label_305abc;
        case 0x305ac0u: goto label_305ac0;
        case 0x305ac4u: goto label_305ac4;
        case 0x305ac8u: goto label_305ac8;
        case 0x305accu: goto label_305acc;
        case 0x305ad0u: goto label_305ad0;
        case 0x305ad4u: goto label_305ad4;
        case 0x305ad8u: goto label_305ad8;
        case 0x305adcu: goto label_305adc;
        case 0x305ae0u: goto label_305ae0;
        case 0x305ae4u: goto label_305ae4;
        case 0x305ae8u: goto label_305ae8;
        case 0x305aecu: goto label_305aec;
        case 0x305af0u: goto label_305af0;
        case 0x305af4u: goto label_305af4;
        case 0x305af8u: goto label_305af8;
        case 0x305afcu: goto label_305afc;
        case 0x305b00u: goto label_305b00;
        case 0x305b04u: goto label_305b04;
        case 0x305b08u: goto label_305b08;
        case 0x305b0cu: goto label_305b0c;
        case 0x305b10u: goto label_305b10;
        case 0x305b14u: goto label_305b14;
        case 0x305b18u: goto label_305b18;
        case 0x305b1cu: goto label_305b1c;
        case 0x305b20u: goto label_305b20;
        case 0x305b24u: goto label_305b24;
        case 0x305b28u: goto label_305b28;
        case 0x305b2cu: goto label_305b2c;
        case 0x305b30u: goto label_305b30;
        case 0x305b34u: goto label_305b34;
        case 0x305b38u: goto label_305b38;
        case 0x305b3cu: goto label_305b3c;
        case 0x305b40u: goto label_305b40;
        case 0x305b44u: goto label_305b44;
        case 0x305b48u: goto label_305b48;
        case 0x305b4cu: goto label_305b4c;
        case 0x305b50u: goto label_305b50;
        case 0x305b54u: goto label_305b54;
        case 0x305b58u: goto label_305b58;
        case 0x305b5cu: goto label_305b5c;
        case 0x305b60u: goto label_305b60;
        case 0x305b64u: goto label_305b64;
        case 0x305b68u: goto label_305b68;
        case 0x305b6cu: goto label_305b6c;
        case 0x305b70u: goto label_305b70;
        case 0x305b74u: goto label_305b74;
        case 0x305b78u: goto label_305b78;
        case 0x305b7cu: goto label_305b7c;
        case 0x305b80u: goto label_305b80;
        case 0x305b84u: goto label_305b84;
        case 0x305b88u: goto label_305b88;
        case 0x305b8cu: goto label_305b8c;
        case 0x305b90u: goto label_305b90;
        case 0x305b94u: goto label_305b94;
        case 0x305b98u: goto label_305b98;
        case 0x305b9cu: goto label_305b9c;
        case 0x305ba0u: goto label_305ba0;
        case 0x305ba4u: goto label_305ba4;
        case 0x305ba8u: goto label_305ba8;
        case 0x305bacu: goto label_305bac;
        case 0x305bb0u: goto label_305bb0;
        case 0x305bb4u: goto label_305bb4;
        case 0x305bb8u: goto label_305bb8;
        case 0x305bbcu: goto label_305bbc;
        case 0x305bc0u: goto label_305bc0;
        case 0x305bc4u: goto label_305bc4;
        case 0x305bc8u: goto label_305bc8;
        case 0x305bccu: goto label_305bcc;
        case 0x305bd0u: goto label_305bd0;
        case 0x305bd4u: goto label_305bd4;
        case 0x305bd8u: goto label_305bd8;
        case 0x305bdcu: goto label_305bdc;
        case 0x305be0u: goto label_305be0;
        case 0x305be4u: goto label_305be4;
        case 0x305be8u: goto label_305be8;
        case 0x305becu: goto label_305bec;
        case 0x305bf0u: goto label_305bf0;
        case 0x305bf4u: goto label_305bf4;
        case 0x305bf8u: goto label_305bf8;
        case 0x305bfcu: goto label_305bfc;
        case 0x305c00u: goto label_305c00;
        case 0x305c04u: goto label_305c04;
        case 0x305c08u: goto label_305c08;
        case 0x305c0cu: goto label_305c0c;
        case 0x305c10u: goto label_305c10;
        case 0x305c14u: goto label_305c14;
        case 0x305c18u: goto label_305c18;
        case 0x305c1cu: goto label_305c1c;
        case 0x305c20u: goto label_305c20;
        case 0x305c24u: goto label_305c24;
        case 0x305c28u: goto label_305c28;
        case 0x305c2cu: goto label_305c2c;
        case 0x305c30u: goto label_305c30;
        case 0x305c34u: goto label_305c34;
        case 0x305c38u: goto label_305c38;
        case 0x305c3cu: goto label_305c3c;
        case 0x305c40u: goto label_305c40;
        case 0x305c44u: goto label_305c44;
        case 0x305c48u: goto label_305c48;
        case 0x305c4cu: goto label_305c4c;
        case 0x305c50u: goto label_305c50;
        case 0x305c54u: goto label_305c54;
        case 0x305c58u: goto label_305c58;
        case 0x305c5cu: goto label_305c5c;
        case 0x305c60u: goto label_305c60;
        case 0x305c64u: goto label_305c64;
        case 0x305c68u: goto label_305c68;
        case 0x305c6cu: goto label_305c6c;
        case 0x305c70u: goto label_305c70;
        case 0x305c74u: goto label_305c74;
        case 0x305c78u: goto label_305c78;
        case 0x305c7cu: goto label_305c7c;
        case 0x305c80u: goto label_305c80;
        case 0x305c84u: goto label_305c84;
        case 0x305c88u: goto label_305c88;
        case 0x305c8cu: goto label_305c8c;
        case 0x305c90u: goto label_305c90;
        case 0x305c94u: goto label_305c94;
        case 0x305c98u: goto label_305c98;
        case 0x305c9cu: goto label_305c9c;
        case 0x305ca0u: goto label_305ca0;
        case 0x305ca4u: goto label_305ca4;
        case 0x305ca8u: goto label_305ca8;
        case 0x305cacu: goto label_305cac;
        case 0x305cb0u: goto label_305cb0;
        case 0x305cb4u: goto label_305cb4;
        case 0x305cb8u: goto label_305cb8;
        case 0x305cbcu: goto label_305cbc;
        case 0x305cc0u: goto label_305cc0;
        case 0x305cc4u: goto label_305cc4;
        case 0x305cc8u: goto label_305cc8;
        case 0x305cccu: goto label_305ccc;
        case 0x305cd0u: goto label_305cd0;
        case 0x305cd4u: goto label_305cd4;
        case 0x305cd8u: goto label_305cd8;
        case 0x305cdcu: goto label_305cdc;
        case 0x305ce0u: goto label_305ce0;
        case 0x305ce4u: goto label_305ce4;
        case 0x305ce8u: goto label_305ce8;
        case 0x305cecu: goto label_305cec;
        case 0x305cf0u: goto label_305cf0;
        case 0x305cf4u: goto label_305cf4;
        case 0x305cf8u: goto label_305cf8;
        case 0x305cfcu: goto label_305cfc;
        case 0x305d00u: goto label_305d00;
        case 0x305d04u: goto label_305d04;
        case 0x305d08u: goto label_305d08;
        case 0x305d0cu: goto label_305d0c;
        case 0x305d10u: goto label_305d10;
        case 0x305d14u: goto label_305d14;
        case 0x305d18u: goto label_305d18;
        case 0x305d1cu: goto label_305d1c;
        case 0x305d20u: goto label_305d20;
        case 0x305d24u: goto label_305d24;
        case 0x305d28u: goto label_305d28;
        case 0x305d2cu: goto label_305d2c;
        case 0x305d30u: goto label_305d30;
        case 0x305d34u: goto label_305d34;
        case 0x305d38u: goto label_305d38;
        case 0x305d3cu: goto label_305d3c;
        case 0x305d40u: goto label_305d40;
        case 0x305d44u: goto label_305d44;
        case 0x305d48u: goto label_305d48;
        case 0x305d4cu: goto label_305d4c;
        case 0x305d50u: goto label_305d50;
        case 0x305d54u: goto label_305d54;
        case 0x305d58u: goto label_305d58;
        case 0x305d5cu: goto label_305d5c;
        case 0x305d60u: goto label_305d60;
        case 0x305d64u: goto label_305d64;
        case 0x305d68u: goto label_305d68;
        case 0x305d6cu: goto label_305d6c;
        case 0x305d70u: goto label_305d70;
        case 0x305d74u: goto label_305d74;
        case 0x305d78u: goto label_305d78;
        case 0x305d7cu: goto label_305d7c;
        case 0x305d80u: goto label_305d80;
        case 0x305d84u: goto label_305d84;
        case 0x305d88u: goto label_305d88;
        case 0x305d8cu: goto label_305d8c;
        case 0x305d90u: goto label_305d90;
        case 0x305d94u: goto label_305d94;
        case 0x305d98u: goto label_305d98;
        case 0x305d9cu: goto label_305d9c;
        case 0x305da0u: goto label_305da0;
        case 0x305da4u: goto label_305da4;
        case 0x305da8u: goto label_305da8;
        case 0x305dacu: goto label_305dac;
        case 0x305db0u: goto label_305db0;
        case 0x305db4u: goto label_305db4;
        case 0x305db8u: goto label_305db8;
        case 0x305dbcu: goto label_305dbc;
        case 0x305dc0u: goto label_305dc0;
        case 0x305dc4u: goto label_305dc4;
        case 0x305dc8u: goto label_305dc8;
        case 0x305dccu: goto label_305dcc;
        case 0x305dd0u: goto label_305dd0;
        case 0x305dd4u: goto label_305dd4;
        case 0x305dd8u: goto label_305dd8;
        case 0x305ddcu: goto label_305ddc;
        case 0x305de0u: goto label_305de0;
        case 0x305de4u: goto label_305de4;
        case 0x305de8u: goto label_305de8;
        case 0x305decu: goto label_305dec;
        case 0x305df0u: goto label_305df0;
        case 0x305df4u: goto label_305df4;
        case 0x305df8u: goto label_305df8;
        case 0x305dfcu: goto label_305dfc;
        case 0x305e00u: goto label_305e00;
        case 0x305e04u: goto label_305e04;
        case 0x305e08u: goto label_305e08;
        case 0x305e0cu: goto label_305e0c;
        case 0x305e10u: goto label_305e10;
        case 0x305e14u: goto label_305e14;
        case 0x305e18u: goto label_305e18;
        case 0x305e1cu: goto label_305e1c;
        case 0x305e20u: goto label_305e20;
        case 0x305e24u: goto label_305e24;
        case 0x305e28u: goto label_305e28;
        case 0x305e2cu: goto label_305e2c;
        case 0x305e30u: goto label_305e30;
        case 0x305e34u: goto label_305e34;
        case 0x305e38u: goto label_305e38;
        case 0x305e3cu: goto label_305e3c;
        case 0x305e40u: goto label_305e40;
        case 0x305e44u: goto label_305e44;
        case 0x305e48u: goto label_305e48;
        case 0x305e4cu: goto label_305e4c;
        case 0x305e50u: goto label_305e50;
        case 0x305e54u: goto label_305e54;
        case 0x305e58u: goto label_305e58;
        case 0x305e5cu: goto label_305e5c;
        case 0x305e60u: goto label_305e60;
        case 0x305e64u: goto label_305e64;
        case 0x305e68u: goto label_305e68;
        case 0x305e6cu: goto label_305e6c;
        case 0x305e70u: goto label_305e70;
        case 0x305e74u: goto label_305e74;
        case 0x305e78u: goto label_305e78;
        case 0x305e7cu: goto label_305e7c;
        case 0x305e80u: goto label_305e80;
        case 0x305e84u: goto label_305e84;
        case 0x305e88u: goto label_305e88;
        case 0x305e8cu: goto label_305e8c;
        case 0x305e90u: goto label_305e90;
        case 0x305e94u: goto label_305e94;
        case 0x305e98u: goto label_305e98;
        case 0x305e9cu: goto label_305e9c;
        case 0x305ea0u: goto label_305ea0;
        case 0x305ea4u: goto label_305ea4;
        case 0x305ea8u: goto label_305ea8;
        case 0x305eacu: goto label_305eac;
        case 0x305eb0u: goto label_305eb0;
        case 0x305eb4u: goto label_305eb4;
        case 0x305eb8u: goto label_305eb8;
        case 0x305ebcu: goto label_305ebc;
        case 0x305ec0u: goto label_305ec0;
        case 0x305ec4u: goto label_305ec4;
        case 0x305ec8u: goto label_305ec8;
        case 0x305eccu: goto label_305ecc;
        case 0x305ed0u: goto label_305ed0;
        case 0x305ed4u: goto label_305ed4;
        case 0x305ed8u: goto label_305ed8;
        case 0x305edcu: goto label_305edc;
        case 0x305ee0u: goto label_305ee0;
        case 0x305ee4u: goto label_305ee4;
        case 0x305ee8u: goto label_305ee8;
        case 0x305eecu: goto label_305eec;
        case 0x305ef0u: goto label_305ef0;
        case 0x305ef4u: goto label_305ef4;
        case 0x305ef8u: goto label_305ef8;
        case 0x305efcu: goto label_305efc;
        case 0x305f00u: goto label_305f00;
        case 0x305f04u: goto label_305f04;
        case 0x305f08u: goto label_305f08;
        case 0x305f0cu: goto label_305f0c;
        case 0x305f10u: goto label_305f10;
        case 0x305f14u: goto label_305f14;
        case 0x305f18u: goto label_305f18;
        case 0x305f1cu: goto label_305f1c;
        case 0x305f20u: goto label_305f20;
        case 0x305f24u: goto label_305f24;
        case 0x305f28u: goto label_305f28;
        case 0x305f2cu: goto label_305f2c;
        case 0x305f30u: goto label_305f30;
        case 0x305f34u: goto label_305f34;
        case 0x305f38u: goto label_305f38;
        case 0x305f3cu: goto label_305f3c;
        case 0x305f40u: goto label_305f40;
        case 0x305f44u: goto label_305f44;
        case 0x305f48u: goto label_305f48;
        case 0x305f4cu: goto label_305f4c;
        case 0x305f50u: goto label_305f50;
        case 0x305f54u: goto label_305f54;
        case 0x305f58u: goto label_305f58;
        case 0x305f5cu: goto label_305f5c;
        case 0x305f60u: goto label_305f60;
        case 0x305f64u: goto label_305f64;
        case 0x305f68u: goto label_305f68;
        case 0x305f6cu: goto label_305f6c;
        case 0x305f70u: goto label_305f70;
        case 0x305f74u: goto label_305f74;
        case 0x305f78u: goto label_305f78;
        case 0x305f7cu: goto label_305f7c;
        case 0x305f80u: goto label_305f80;
        case 0x305f84u: goto label_305f84;
        case 0x305f88u: goto label_305f88;
        case 0x305f8cu: goto label_305f8c;
        case 0x305f90u: goto label_305f90;
        case 0x305f94u: goto label_305f94;
        case 0x305f98u: goto label_305f98;
        case 0x305f9cu: goto label_305f9c;
        case 0x305fa0u: goto label_305fa0;
        case 0x305fa4u: goto label_305fa4;
        case 0x305fa8u: goto label_305fa8;
        case 0x305facu: goto label_305fac;
        case 0x305fb0u: goto label_305fb0;
        case 0x305fb4u: goto label_305fb4;
        case 0x305fb8u: goto label_305fb8;
        case 0x305fbcu: goto label_305fbc;
        case 0x305fc0u: goto label_305fc0;
        case 0x305fc4u: goto label_305fc4;
        case 0x305fc8u: goto label_305fc8;
        case 0x305fccu: goto label_305fcc;
        case 0x305fd0u: goto label_305fd0;
        case 0x305fd4u: goto label_305fd4;
        case 0x305fd8u: goto label_305fd8;
        case 0x305fdcu: goto label_305fdc;
        case 0x305fe0u: goto label_305fe0;
        case 0x305fe4u: goto label_305fe4;
        case 0x305fe8u: goto label_305fe8;
        case 0x305fecu: goto label_305fec;
        case 0x305ff0u: goto label_305ff0;
        case 0x305ff4u: goto label_305ff4;
        case 0x305ff8u: goto label_305ff8;
        case 0x305ffcu: goto label_305ffc;
        case 0x306000u: goto label_306000;
        case 0x306004u: goto label_306004;
        case 0x306008u: goto label_306008;
        case 0x30600cu: goto label_30600c;
        case 0x306010u: goto label_306010;
        case 0x306014u: goto label_306014;
        case 0x306018u: goto label_306018;
        case 0x30601cu: goto label_30601c;
        case 0x306020u: goto label_306020;
        case 0x306024u: goto label_306024;
        case 0x306028u: goto label_306028;
        case 0x30602cu: goto label_30602c;
        case 0x306030u: goto label_306030;
        case 0x306034u: goto label_306034;
        case 0x306038u: goto label_306038;
        case 0x30603cu: goto label_30603c;
        case 0x306040u: goto label_306040;
        case 0x306044u: goto label_306044;
        case 0x306048u: goto label_306048;
        case 0x30604cu: goto label_30604c;
        case 0x306050u: goto label_306050;
        case 0x306054u: goto label_306054;
        case 0x306058u: goto label_306058;
        case 0x30605cu: goto label_30605c;
        case 0x306060u: goto label_306060;
        case 0x306064u: goto label_306064;
        case 0x306068u: goto label_306068;
        case 0x30606cu: goto label_30606c;
        case 0x306070u: goto label_306070;
        case 0x306074u: goto label_306074;
        case 0x306078u: goto label_306078;
        case 0x30607cu: goto label_30607c;
        case 0x306080u: goto label_306080;
        case 0x306084u: goto label_306084;
        case 0x306088u: goto label_306088;
        case 0x30608cu: goto label_30608c;
        case 0x306090u: goto label_306090;
        case 0x306094u: goto label_306094;
        case 0x306098u: goto label_306098;
        case 0x30609cu: goto label_30609c;
        case 0x3060a0u: goto label_3060a0;
        case 0x3060a4u: goto label_3060a4;
        case 0x3060a8u: goto label_3060a8;
        case 0x3060acu: goto label_3060ac;
        case 0x3060b0u: goto label_3060b0;
        case 0x3060b4u: goto label_3060b4;
        case 0x3060b8u: goto label_3060b8;
        case 0x3060bcu: goto label_3060bc;
        case 0x3060c0u: goto label_3060c0;
        case 0x3060c4u: goto label_3060c4;
        case 0x3060c8u: goto label_3060c8;
        case 0x3060ccu: goto label_3060cc;
        case 0x3060d0u: goto label_3060d0;
        case 0x3060d4u: goto label_3060d4;
        case 0x3060d8u: goto label_3060d8;
        case 0x3060dcu: goto label_3060dc;
        case 0x3060e0u: goto label_3060e0;
        case 0x3060e4u: goto label_3060e4;
        case 0x3060e8u: goto label_3060e8;
        case 0x3060ecu: goto label_3060ec;
        case 0x3060f0u: goto label_3060f0;
        case 0x3060f4u: goto label_3060f4;
        case 0x3060f8u: goto label_3060f8;
        case 0x3060fcu: goto label_3060fc;
        case 0x306100u: goto label_306100;
        case 0x306104u: goto label_306104;
        case 0x306108u: goto label_306108;
        case 0x30610cu: goto label_30610c;
        case 0x306110u: goto label_306110;
        case 0x306114u: goto label_306114;
        case 0x306118u: goto label_306118;
        case 0x30611cu: goto label_30611c;
        case 0x306120u: goto label_306120;
        case 0x306124u: goto label_306124;
        case 0x306128u: goto label_306128;
        case 0x30612cu: goto label_30612c;
        case 0x306130u: goto label_306130;
        case 0x306134u: goto label_306134;
        case 0x306138u: goto label_306138;
        case 0x30613cu: goto label_30613c;
        case 0x306140u: goto label_306140;
        case 0x306144u: goto label_306144;
        case 0x306148u: goto label_306148;
        case 0x30614cu: goto label_30614c;
        case 0x306150u: goto label_306150;
        case 0x306154u: goto label_306154;
        case 0x306158u: goto label_306158;
        case 0x30615cu: goto label_30615c;
        case 0x306160u: goto label_306160;
        case 0x306164u: goto label_306164;
        case 0x306168u: goto label_306168;
        case 0x30616cu: goto label_30616c;
        case 0x306170u: goto label_306170;
        case 0x306174u: goto label_306174;
        case 0x306178u: goto label_306178;
        case 0x30617cu: goto label_30617c;
        case 0x306180u: goto label_306180;
        case 0x306184u: goto label_306184;
        case 0x306188u: goto label_306188;
        case 0x30618cu: goto label_30618c;
        case 0x306190u: goto label_306190;
        case 0x306194u: goto label_306194;
        case 0x306198u: goto label_306198;
        case 0x30619cu: goto label_30619c;
        case 0x3061a0u: goto label_3061a0;
        case 0x3061a4u: goto label_3061a4;
        case 0x3061a8u: goto label_3061a8;
        case 0x3061acu: goto label_3061ac;
        case 0x3061b0u: goto label_3061b0;
        case 0x3061b4u: goto label_3061b4;
        case 0x3061b8u: goto label_3061b8;
        case 0x3061bcu: goto label_3061bc;
        case 0x3061c0u: goto label_3061c0;
        case 0x3061c4u: goto label_3061c4;
        case 0x3061c8u: goto label_3061c8;
        case 0x3061ccu: goto label_3061cc;
        case 0x3061d0u: goto label_3061d0;
        case 0x3061d4u: goto label_3061d4;
        case 0x3061d8u: goto label_3061d8;
        case 0x3061dcu: goto label_3061dc;
        case 0x3061e0u: goto label_3061e0;
        case 0x3061e4u: goto label_3061e4;
        case 0x3061e8u: goto label_3061e8;
        case 0x3061ecu: goto label_3061ec;
        case 0x3061f0u: goto label_3061f0;
        case 0x3061f4u: goto label_3061f4;
        case 0x3061f8u: goto label_3061f8;
        case 0x3061fcu: goto label_3061fc;
        case 0x306200u: goto label_306200;
        case 0x306204u: goto label_306204;
        case 0x306208u: goto label_306208;
        case 0x30620cu: goto label_30620c;
        case 0x306210u: goto label_306210;
        case 0x306214u: goto label_306214;
        case 0x306218u: goto label_306218;
        case 0x30621cu: goto label_30621c;
        case 0x306220u: goto label_306220;
        case 0x306224u: goto label_306224;
        case 0x306228u: goto label_306228;
        case 0x30622cu: goto label_30622c;
        case 0x306230u: goto label_306230;
        case 0x306234u: goto label_306234;
        case 0x306238u: goto label_306238;
        case 0x30623cu: goto label_30623c;
        case 0x306240u: goto label_306240;
        case 0x306244u: goto label_306244;
        case 0x306248u: goto label_306248;
        case 0x30624cu: goto label_30624c;
        case 0x306250u: goto label_306250;
        case 0x306254u: goto label_306254;
        case 0x306258u: goto label_306258;
        case 0x30625cu: goto label_30625c;
        case 0x306260u: goto label_306260;
        case 0x306264u: goto label_306264;
        case 0x306268u: goto label_306268;
        case 0x30626cu: goto label_30626c;
        case 0x306270u: goto label_306270;
        case 0x306274u: goto label_306274;
        case 0x306278u: goto label_306278;
        case 0x30627cu: goto label_30627c;
        case 0x306280u: goto label_306280;
        case 0x306284u: goto label_306284;
        case 0x306288u: goto label_306288;
        case 0x30628cu: goto label_30628c;
        case 0x306290u: goto label_306290;
        case 0x306294u: goto label_306294;
        case 0x306298u: goto label_306298;
        case 0x30629cu: goto label_30629c;
        case 0x3062a0u: goto label_3062a0;
        case 0x3062a4u: goto label_3062a4;
        case 0x3062a8u: goto label_3062a8;
        case 0x3062acu: goto label_3062ac;
        case 0x3062b0u: goto label_3062b0;
        case 0x3062b4u: goto label_3062b4;
        case 0x3062b8u: goto label_3062b8;
        case 0x3062bcu: goto label_3062bc;
        case 0x3062c0u: goto label_3062c0;
        case 0x3062c4u: goto label_3062c4;
        case 0x3062c8u: goto label_3062c8;
        case 0x3062ccu: goto label_3062cc;
        case 0x3062d0u: goto label_3062d0;
        case 0x3062d4u: goto label_3062d4;
        case 0x3062d8u: goto label_3062d8;
        case 0x3062dcu: goto label_3062dc;
        case 0x3062e0u: goto label_3062e0;
        case 0x3062e4u: goto label_3062e4;
        case 0x3062e8u: goto label_3062e8;
        case 0x3062ecu: goto label_3062ec;
        case 0x3062f0u: goto label_3062f0;
        case 0x3062f4u: goto label_3062f4;
        case 0x3062f8u: goto label_3062f8;
        case 0x3062fcu: goto label_3062fc;
        case 0x306300u: goto label_306300;
        case 0x306304u: goto label_306304;
        case 0x306308u: goto label_306308;
        case 0x30630cu: goto label_30630c;
        case 0x306310u: goto label_306310;
        case 0x306314u: goto label_306314;
        case 0x306318u: goto label_306318;
        case 0x30631cu: goto label_30631c;
        case 0x306320u: goto label_306320;
        case 0x306324u: goto label_306324;
        case 0x306328u: goto label_306328;
        case 0x30632cu: goto label_30632c;
        case 0x306330u: goto label_306330;
        case 0x306334u: goto label_306334;
        case 0x306338u: goto label_306338;
        case 0x30633cu: goto label_30633c;
        case 0x306340u: goto label_306340;
        case 0x306344u: goto label_306344;
        case 0x306348u: goto label_306348;
        case 0x30634cu: goto label_30634c;
        case 0x306350u: goto label_306350;
        case 0x306354u: goto label_306354;
        case 0x306358u: goto label_306358;
        case 0x30635cu: goto label_30635c;
        case 0x306360u: goto label_306360;
        case 0x306364u: goto label_306364;
        case 0x306368u: goto label_306368;
        case 0x30636cu: goto label_30636c;
        case 0x306370u: goto label_306370;
        case 0x306374u: goto label_306374;
        case 0x306378u: goto label_306378;
        case 0x30637cu: goto label_30637c;
        case 0x306380u: goto label_306380;
        case 0x306384u: goto label_306384;
        case 0x306388u: goto label_306388;
        case 0x30638cu: goto label_30638c;
        case 0x306390u: goto label_306390;
        case 0x306394u: goto label_306394;
        case 0x306398u: goto label_306398;
        case 0x30639cu: goto label_30639c;
        case 0x3063a0u: goto label_3063a0;
        case 0x3063a4u: goto label_3063a4;
        case 0x3063a8u: goto label_3063a8;
        case 0x3063acu: goto label_3063ac;
        case 0x3063b0u: goto label_3063b0;
        case 0x3063b4u: goto label_3063b4;
        case 0x3063b8u: goto label_3063b8;
        case 0x3063bcu: goto label_3063bc;
        case 0x3063c0u: goto label_3063c0;
        case 0x3063c4u: goto label_3063c4;
        case 0x3063c8u: goto label_3063c8;
        case 0x3063ccu: goto label_3063cc;
        case 0x3063d0u: goto label_3063d0;
        case 0x3063d4u: goto label_3063d4;
        case 0x3063d8u: goto label_3063d8;
        case 0x3063dcu: goto label_3063dc;
        case 0x3063e0u: goto label_3063e0;
        case 0x3063e4u: goto label_3063e4;
        case 0x3063e8u: goto label_3063e8;
        case 0x3063ecu: goto label_3063ec;
        case 0x3063f0u: goto label_3063f0;
        case 0x3063f4u: goto label_3063f4;
        case 0x3063f8u: goto label_3063f8;
        case 0x3063fcu: goto label_3063fc;
        case 0x306400u: goto label_306400;
        case 0x306404u: goto label_306404;
        case 0x306408u: goto label_306408;
        case 0x30640cu: goto label_30640c;
        case 0x306410u: goto label_306410;
        case 0x306414u: goto label_306414;
        case 0x306418u: goto label_306418;
        case 0x30641cu: goto label_30641c;
        case 0x306420u: goto label_306420;
        case 0x306424u: goto label_306424;
        case 0x306428u: goto label_306428;
        case 0x30642cu: goto label_30642c;
        case 0x306430u: goto label_306430;
        case 0x306434u: goto label_306434;
        case 0x306438u: goto label_306438;
        case 0x30643cu: goto label_30643c;
        case 0x306440u: goto label_306440;
        case 0x306444u: goto label_306444;
        case 0x306448u: goto label_306448;
        case 0x30644cu: goto label_30644c;
        case 0x306450u: goto label_306450;
        case 0x306454u: goto label_306454;
        case 0x306458u: goto label_306458;
        case 0x30645cu: goto label_30645c;
        case 0x306460u: goto label_306460;
        case 0x306464u: goto label_306464;
        case 0x306468u: goto label_306468;
        case 0x30646cu: goto label_30646c;
        case 0x306470u: goto label_306470;
        case 0x306474u: goto label_306474;
        case 0x306478u: goto label_306478;
        case 0x30647cu: goto label_30647c;
        case 0x306480u: goto label_306480;
        case 0x306484u: goto label_306484;
        case 0x306488u: goto label_306488;
        case 0x30648cu: goto label_30648c;
        case 0x306490u: goto label_306490;
        case 0x306494u: goto label_306494;
        case 0x306498u: goto label_306498;
        case 0x30649cu: goto label_30649c;
        case 0x3064a0u: goto label_3064a0;
        case 0x3064a4u: goto label_3064a4;
        case 0x3064a8u: goto label_3064a8;
        case 0x3064acu: goto label_3064ac;
        case 0x3064b0u: goto label_3064b0;
        case 0x3064b4u: goto label_3064b4;
        case 0x3064b8u: goto label_3064b8;
        case 0x3064bcu: goto label_3064bc;
        case 0x3064c0u: goto label_3064c0;
        case 0x3064c4u: goto label_3064c4;
        case 0x3064c8u: goto label_3064c8;
        case 0x3064ccu: goto label_3064cc;
        case 0x3064d0u: goto label_3064d0;
        case 0x3064d4u: goto label_3064d4;
        case 0x3064d8u: goto label_3064d8;
        case 0x3064dcu: goto label_3064dc;
        case 0x3064e0u: goto label_3064e0;
        case 0x3064e4u: goto label_3064e4;
        case 0x3064e8u: goto label_3064e8;
        case 0x3064ecu: goto label_3064ec;
        case 0x3064f0u: goto label_3064f0;
        case 0x3064f4u: goto label_3064f4;
        case 0x3064f8u: goto label_3064f8;
        case 0x3064fcu: goto label_3064fc;
        case 0x306500u: goto label_306500;
        case 0x306504u: goto label_306504;
        case 0x306508u: goto label_306508;
        case 0x30650cu: goto label_30650c;
        case 0x306510u: goto label_306510;
        case 0x306514u: goto label_306514;
        case 0x306518u: goto label_306518;
        case 0x30651cu: goto label_30651c;
        case 0x306520u: goto label_306520;
        case 0x306524u: goto label_306524;
        case 0x306528u: goto label_306528;
        case 0x30652cu: goto label_30652c;
        case 0x306530u: goto label_306530;
        case 0x306534u: goto label_306534;
        case 0x306538u: goto label_306538;
        case 0x30653cu: goto label_30653c;
        case 0x306540u: goto label_306540;
        case 0x306544u: goto label_306544;
        case 0x306548u: goto label_306548;
        case 0x30654cu: goto label_30654c;
        case 0x306550u: goto label_306550;
        case 0x306554u: goto label_306554;
        case 0x306558u: goto label_306558;
        case 0x30655cu: goto label_30655c;
        case 0x306560u: goto label_306560;
        case 0x306564u: goto label_306564;
        case 0x306568u: goto label_306568;
        case 0x30656cu: goto label_30656c;
        case 0x306570u: goto label_306570;
        case 0x306574u: goto label_306574;
        case 0x306578u: goto label_306578;
        case 0x30657cu: goto label_30657c;
        case 0x306580u: goto label_306580;
        case 0x306584u: goto label_306584;
        case 0x306588u: goto label_306588;
        case 0x30658cu: goto label_30658c;
        case 0x306590u: goto label_306590;
        case 0x306594u: goto label_306594;
        case 0x306598u: goto label_306598;
        case 0x30659cu: goto label_30659c;
        case 0x3065a0u: goto label_3065a0;
        case 0x3065a4u: goto label_3065a4;
        case 0x3065a8u: goto label_3065a8;
        case 0x3065acu: goto label_3065ac;
        case 0x3065b0u: goto label_3065b0;
        case 0x3065b4u: goto label_3065b4;
        case 0x3065b8u: goto label_3065b8;
        case 0x3065bcu: goto label_3065bc;
        case 0x3065c0u: goto label_3065c0;
        case 0x3065c4u: goto label_3065c4;
        case 0x3065c8u: goto label_3065c8;
        case 0x3065ccu: goto label_3065cc;
        case 0x3065d0u: goto label_3065d0;
        case 0x3065d4u: goto label_3065d4;
        case 0x3065d8u: goto label_3065d8;
        case 0x3065dcu: goto label_3065dc;
        case 0x3065e0u: goto label_3065e0;
        case 0x3065e4u: goto label_3065e4;
        case 0x3065e8u: goto label_3065e8;
        case 0x3065ecu: goto label_3065ec;
        case 0x3065f0u: goto label_3065f0;
        case 0x3065f4u: goto label_3065f4;
        case 0x3065f8u: goto label_3065f8;
        case 0x3065fcu: goto label_3065fc;
        case 0x306600u: goto label_306600;
        case 0x306604u: goto label_306604;
        case 0x306608u: goto label_306608;
        case 0x30660cu: goto label_30660c;
        case 0x306610u: goto label_306610;
        case 0x306614u: goto label_306614;
        case 0x306618u: goto label_306618;
        case 0x30661cu: goto label_30661c;
        case 0x306620u: goto label_306620;
        case 0x306624u: goto label_306624;
        case 0x306628u: goto label_306628;
        case 0x30662cu: goto label_30662c;
        case 0x306630u: goto label_306630;
        case 0x306634u: goto label_306634;
        case 0x306638u: goto label_306638;
        case 0x30663cu: goto label_30663c;
        case 0x306640u: goto label_306640;
        case 0x306644u: goto label_306644;
        case 0x306648u: goto label_306648;
        case 0x30664cu: goto label_30664c;
        case 0x306650u: goto label_306650;
        case 0x306654u: goto label_306654;
        case 0x306658u: goto label_306658;
        case 0x30665cu: goto label_30665c;
        case 0x306660u: goto label_306660;
        case 0x306664u: goto label_306664;
        case 0x306668u: goto label_306668;
        case 0x30666cu: goto label_30666c;
        case 0x306670u: goto label_306670;
        case 0x306674u: goto label_306674;
        case 0x306678u: goto label_306678;
        case 0x30667cu: goto label_30667c;
        case 0x306680u: goto label_306680;
        case 0x306684u: goto label_306684;
        case 0x306688u: goto label_306688;
        case 0x30668cu: goto label_30668c;
        case 0x306690u: goto label_306690;
        case 0x306694u: goto label_306694;
        case 0x306698u: goto label_306698;
        case 0x30669cu: goto label_30669c;
        case 0x3066a0u: goto label_3066a0;
        case 0x3066a4u: goto label_3066a4;
        case 0x3066a8u: goto label_3066a8;
        case 0x3066acu: goto label_3066ac;
        case 0x3066b0u: goto label_3066b0;
        case 0x3066b4u: goto label_3066b4;
        case 0x3066b8u: goto label_3066b8;
        case 0x3066bcu: goto label_3066bc;
        case 0x3066c0u: goto label_3066c0;
        case 0x3066c4u: goto label_3066c4;
        case 0x3066c8u: goto label_3066c8;
        case 0x3066ccu: goto label_3066cc;
        case 0x3066d0u: goto label_3066d0;
        case 0x3066d4u: goto label_3066d4;
        case 0x3066d8u: goto label_3066d8;
        case 0x3066dcu: goto label_3066dc;
        case 0x3066e0u: goto label_3066e0;
        case 0x3066e4u: goto label_3066e4;
        case 0x3066e8u: goto label_3066e8;
        case 0x3066ecu: goto label_3066ec;
        case 0x3066f0u: goto label_3066f0;
        case 0x3066f4u: goto label_3066f4;
        case 0x3066f8u: goto label_3066f8;
        case 0x3066fcu: goto label_3066fc;
        case 0x306700u: goto label_306700;
        case 0x306704u: goto label_306704;
        case 0x306708u: goto label_306708;
        case 0x30670cu: goto label_30670c;
        case 0x306710u: goto label_306710;
        case 0x306714u: goto label_306714;
        case 0x306718u: goto label_306718;
        case 0x30671cu: goto label_30671c;
        case 0x306720u: goto label_306720;
        case 0x306724u: goto label_306724;
        case 0x306728u: goto label_306728;
        case 0x30672cu: goto label_30672c;
        case 0x306730u: goto label_306730;
        case 0x306734u: goto label_306734;
        case 0x306738u: goto label_306738;
        case 0x30673cu: goto label_30673c;
        case 0x306740u: goto label_306740;
        case 0x306744u: goto label_306744;
        case 0x306748u: goto label_306748;
        case 0x30674cu: goto label_30674c;
        case 0x306750u: goto label_306750;
        case 0x306754u: goto label_306754;
        case 0x306758u: goto label_306758;
        case 0x30675cu: goto label_30675c;
        case 0x306760u: goto label_306760;
        case 0x306764u: goto label_306764;
        case 0x306768u: goto label_306768;
        case 0x30676cu: goto label_30676c;
        case 0x306770u: goto label_306770;
        case 0x306774u: goto label_306774;
        case 0x306778u: goto label_306778;
        case 0x30677cu: goto label_30677c;
        case 0x306780u: goto label_306780;
        case 0x306784u: goto label_306784;
        case 0x306788u: goto label_306788;
        case 0x30678cu: goto label_30678c;
        case 0x306790u: goto label_306790;
        case 0x306794u: goto label_306794;
        case 0x306798u: goto label_306798;
        case 0x30679cu: goto label_30679c;
        case 0x3067a0u: goto label_3067a0;
        case 0x3067a4u: goto label_3067a4;
        case 0x3067a8u: goto label_3067a8;
        case 0x3067acu: goto label_3067ac;
        case 0x3067b0u: goto label_3067b0;
        case 0x3067b4u: goto label_3067b4;
        case 0x3067b8u: goto label_3067b8;
        case 0x3067bcu: goto label_3067bc;
        case 0x3067c0u: goto label_3067c0;
        case 0x3067c4u: goto label_3067c4;
        case 0x3067c8u: goto label_3067c8;
        case 0x3067ccu: goto label_3067cc;
        case 0x3067d0u: goto label_3067d0;
        case 0x3067d4u: goto label_3067d4;
        case 0x3067d8u: goto label_3067d8;
        case 0x3067dcu: goto label_3067dc;
        case 0x3067e0u: goto label_3067e0;
        case 0x3067e4u: goto label_3067e4;
        case 0x3067e8u: goto label_3067e8;
        case 0x3067ecu: goto label_3067ec;
        case 0x3067f0u: goto label_3067f0;
        case 0x3067f4u: goto label_3067f4;
        case 0x3067f8u: goto label_3067f8;
        case 0x3067fcu: goto label_3067fc;
        case 0x306800u: goto label_306800;
        case 0x306804u: goto label_306804;
        case 0x306808u: goto label_306808;
        case 0x30680cu: goto label_30680c;
        case 0x306810u: goto label_306810;
        case 0x306814u: goto label_306814;
        case 0x306818u: goto label_306818;
        case 0x30681cu: goto label_30681c;
        case 0x306820u: goto label_306820;
        case 0x306824u: goto label_306824;
        case 0x306828u: goto label_306828;
        case 0x30682cu: goto label_30682c;
        case 0x306830u: goto label_306830;
        case 0x306834u: goto label_306834;
        case 0x306838u: goto label_306838;
        case 0x30683cu: goto label_30683c;
        case 0x306840u: goto label_306840;
        case 0x306844u: goto label_306844;
        case 0x306848u: goto label_306848;
        case 0x30684cu: goto label_30684c;
        case 0x306850u: goto label_306850;
        case 0x306854u: goto label_306854;
        case 0x306858u: goto label_306858;
        case 0x30685cu: goto label_30685c;
        case 0x306860u: goto label_306860;
        case 0x306864u: goto label_306864;
        case 0x306868u: goto label_306868;
        case 0x30686cu: goto label_30686c;
        case 0x306870u: goto label_306870;
        case 0x306874u: goto label_306874;
        case 0x306878u: goto label_306878;
        case 0x30687cu: goto label_30687c;
        case 0x306880u: goto label_306880;
        case 0x306884u: goto label_306884;
        case 0x306888u: goto label_306888;
        case 0x30688cu: goto label_30688c;
        case 0x306890u: goto label_306890;
        case 0x306894u: goto label_306894;
        case 0x306898u: goto label_306898;
        case 0x30689cu: goto label_30689c;
        case 0x3068a0u: goto label_3068a0;
        case 0x3068a4u: goto label_3068a4;
        case 0x3068a8u: goto label_3068a8;
        case 0x3068acu: goto label_3068ac;
        case 0x3068b0u: goto label_3068b0;
        case 0x3068b4u: goto label_3068b4;
        case 0x3068b8u: goto label_3068b8;
        case 0x3068bcu: goto label_3068bc;
        case 0x3068c0u: goto label_3068c0;
        case 0x3068c4u: goto label_3068c4;
        case 0x3068c8u: goto label_3068c8;
        case 0x3068ccu: goto label_3068cc;
        case 0x3068d0u: goto label_3068d0;
        case 0x3068d4u: goto label_3068d4;
        case 0x3068d8u: goto label_3068d8;
        case 0x3068dcu: goto label_3068dc;
        case 0x3068e0u: goto label_3068e0;
        case 0x3068e4u: goto label_3068e4;
        case 0x3068e8u: goto label_3068e8;
        case 0x3068ecu: goto label_3068ec;
        case 0x3068f0u: goto label_3068f0;
        case 0x3068f4u: goto label_3068f4;
        case 0x3068f8u: goto label_3068f8;
        case 0x3068fcu: goto label_3068fc;
        case 0x306900u: goto label_306900;
        case 0x306904u: goto label_306904;
        case 0x306908u: goto label_306908;
        case 0x30690cu: goto label_30690c;
        case 0x306910u: goto label_306910;
        case 0x306914u: goto label_306914;
        case 0x306918u: goto label_306918;
        case 0x30691cu: goto label_30691c;
        case 0x306920u: goto label_306920;
        case 0x306924u: goto label_306924;
        case 0x306928u: goto label_306928;
        case 0x30692cu: goto label_30692c;
        case 0x306930u: goto label_306930;
        case 0x306934u: goto label_306934;
        case 0x306938u: goto label_306938;
        case 0x30693cu: goto label_30693c;
        case 0x306940u: goto label_306940;
        case 0x306944u: goto label_306944;
        case 0x306948u: goto label_306948;
        case 0x30694cu: goto label_30694c;
        case 0x306950u: goto label_306950;
        case 0x306954u: goto label_306954;
        case 0x306958u: goto label_306958;
        case 0x30695cu: goto label_30695c;
        case 0x306960u: goto label_306960;
        case 0x306964u: goto label_306964;
        case 0x306968u: goto label_306968;
        case 0x30696cu: goto label_30696c;
        case 0x306970u: goto label_306970;
        case 0x306974u: goto label_306974;
        case 0x306978u: goto label_306978;
        case 0x30697cu: goto label_30697c;
        case 0x306980u: goto label_306980;
        case 0x306984u: goto label_306984;
        case 0x306988u: goto label_306988;
        case 0x30698cu: goto label_30698c;
        case 0x306990u: goto label_306990;
        case 0x306994u: goto label_306994;
        case 0x306998u: goto label_306998;
        case 0x30699cu: goto label_30699c;
        case 0x3069a0u: goto label_3069a0;
        case 0x3069a4u: goto label_3069a4;
        case 0x3069a8u: goto label_3069a8;
        case 0x3069acu: goto label_3069ac;
        case 0x3069b0u: goto label_3069b0;
        case 0x3069b4u: goto label_3069b4;
        case 0x3069b8u: goto label_3069b8;
        case 0x3069bcu: goto label_3069bc;
        case 0x3069c0u: goto label_3069c0;
        case 0x3069c4u: goto label_3069c4;
        case 0x3069c8u: goto label_3069c8;
        case 0x3069ccu: goto label_3069cc;
        case 0x3069d0u: goto label_3069d0;
        case 0x3069d4u: goto label_3069d4;
        case 0x3069d8u: goto label_3069d8;
        case 0x3069dcu: goto label_3069dc;
        case 0x3069e0u: goto label_3069e0;
        case 0x3069e4u: goto label_3069e4;
        case 0x3069e8u: goto label_3069e8;
        case 0x3069ecu: goto label_3069ec;
        case 0x3069f0u: goto label_3069f0;
        case 0x3069f4u: goto label_3069f4;
        case 0x3069f8u: goto label_3069f8;
        case 0x3069fcu: goto label_3069fc;
        case 0x306a00u: goto label_306a00;
        case 0x306a04u: goto label_306a04;
        case 0x306a08u: goto label_306a08;
        case 0x306a0cu: goto label_306a0c;
        case 0x306a10u: goto label_306a10;
        case 0x306a14u: goto label_306a14;
        case 0x306a18u: goto label_306a18;
        case 0x306a1cu: goto label_306a1c;
        case 0x306a20u: goto label_306a20;
        case 0x306a24u: goto label_306a24;
        case 0x306a28u: goto label_306a28;
        case 0x306a2cu: goto label_306a2c;
        case 0x306a30u: goto label_306a30;
        case 0x306a34u: goto label_306a34;
        case 0x306a38u: goto label_306a38;
        case 0x306a3cu: goto label_306a3c;
        case 0x306a40u: goto label_306a40;
        case 0x306a44u: goto label_306a44;
        case 0x306a48u: goto label_306a48;
        case 0x306a4cu: goto label_306a4c;
        case 0x306a50u: goto label_306a50;
        case 0x306a54u: goto label_306a54;
        case 0x306a58u: goto label_306a58;
        case 0x306a5cu: goto label_306a5c;
        case 0x306a60u: goto label_306a60;
        case 0x306a64u: goto label_306a64;
        case 0x306a68u: goto label_306a68;
        case 0x306a6cu: goto label_306a6c;
        case 0x306a70u: goto label_306a70;
        case 0x306a74u: goto label_306a74;
        case 0x306a78u: goto label_306a78;
        case 0x306a7cu: goto label_306a7c;
        case 0x306a80u: goto label_306a80;
        case 0x306a84u: goto label_306a84;
        case 0x306a88u: goto label_306a88;
        case 0x306a8cu: goto label_306a8c;
        case 0x306a90u: goto label_306a90;
        case 0x306a94u: goto label_306a94;
        case 0x306a98u: goto label_306a98;
        case 0x306a9cu: goto label_306a9c;
        case 0x306aa0u: goto label_306aa0;
        case 0x306aa4u: goto label_306aa4;
        case 0x306aa8u: goto label_306aa8;
        case 0x306aacu: goto label_306aac;
        case 0x306ab0u: goto label_306ab0;
        case 0x306ab4u: goto label_306ab4;
        case 0x306ab8u: goto label_306ab8;
        case 0x306abcu: goto label_306abc;
        case 0x306ac0u: goto label_306ac0;
        case 0x306ac4u: goto label_306ac4;
        case 0x306ac8u: goto label_306ac8;
        case 0x306accu: goto label_306acc;
        case 0x306ad0u: goto label_306ad0;
        case 0x306ad4u: goto label_306ad4;
        case 0x306ad8u: goto label_306ad8;
        case 0x306adcu: goto label_306adc;
        case 0x306ae0u: goto label_306ae0;
        case 0x306ae4u: goto label_306ae4;
        case 0x306ae8u: goto label_306ae8;
        case 0x306aecu: goto label_306aec;
        case 0x306af0u: goto label_306af0;
        case 0x306af4u: goto label_306af4;
        case 0x306af8u: goto label_306af8;
        case 0x306afcu: goto label_306afc;
        case 0x306b00u: goto label_306b00;
        case 0x306b04u: goto label_306b04;
        case 0x306b08u: goto label_306b08;
        case 0x306b0cu: goto label_306b0c;
        case 0x306b10u: goto label_306b10;
        case 0x306b14u: goto label_306b14;
        case 0x306b18u: goto label_306b18;
        case 0x306b1cu: goto label_306b1c;
        case 0x306b20u: goto label_306b20;
        case 0x306b24u: goto label_306b24;
        case 0x306b28u: goto label_306b28;
        case 0x306b2cu: goto label_306b2c;
        case 0x306b30u: goto label_306b30;
        case 0x306b34u: goto label_306b34;
        case 0x306b38u: goto label_306b38;
        case 0x306b3cu: goto label_306b3c;
        case 0x306b40u: goto label_306b40;
        case 0x306b44u: goto label_306b44;
        case 0x306b48u: goto label_306b48;
        case 0x306b4cu: goto label_306b4c;
        case 0x306b50u: goto label_306b50;
        case 0x306b54u: goto label_306b54;
        case 0x306b58u: goto label_306b58;
        case 0x306b5cu: goto label_306b5c;
        case 0x306b60u: goto label_306b60;
        case 0x306b64u: goto label_306b64;
        case 0x306b68u: goto label_306b68;
        case 0x306b6cu: goto label_306b6c;
        case 0x306b70u: goto label_306b70;
        case 0x306b74u: goto label_306b74;
        case 0x306b78u: goto label_306b78;
        case 0x306b7cu: goto label_306b7c;
        case 0x306b80u: goto label_306b80;
        case 0x306b84u: goto label_306b84;
        case 0x306b88u: goto label_306b88;
        case 0x306b8cu: goto label_306b8c;
        case 0x306b90u: goto label_306b90;
        case 0x306b94u: goto label_306b94;
        case 0x306b98u: goto label_306b98;
        case 0x306b9cu: goto label_306b9c;
        case 0x306ba0u: goto label_306ba0;
        case 0x306ba4u: goto label_306ba4;
        case 0x306ba8u: goto label_306ba8;
        case 0x306bacu: goto label_306bac;
        case 0x306bb0u: goto label_306bb0;
        case 0x306bb4u: goto label_306bb4;
        case 0x306bb8u: goto label_306bb8;
        case 0x306bbcu: goto label_306bbc;
        case 0x306bc0u: goto label_306bc0;
        case 0x306bc4u: goto label_306bc4;
        case 0x306bc8u: goto label_306bc8;
        case 0x306bccu: goto label_306bcc;
        case 0x306bd0u: goto label_306bd0;
        case 0x306bd4u: goto label_306bd4;
        case 0x306bd8u: goto label_306bd8;
        case 0x306bdcu: goto label_306bdc;
        case 0x306be0u: goto label_306be0;
        case 0x306be4u: goto label_306be4;
        case 0x306be8u: goto label_306be8;
        case 0x306becu: goto label_306bec;
        case 0x306bf0u: goto label_306bf0;
        case 0x306bf4u: goto label_306bf4;
        case 0x306bf8u: goto label_306bf8;
        case 0x306bfcu: goto label_306bfc;
        case 0x306c00u: goto label_306c00;
        case 0x306c04u: goto label_306c04;
        case 0x306c08u: goto label_306c08;
        case 0x306c0cu: goto label_306c0c;
        case 0x306c10u: goto label_306c10;
        case 0x306c14u: goto label_306c14;
        case 0x306c18u: goto label_306c18;
        case 0x306c1cu: goto label_306c1c;
        case 0x306c20u: goto label_306c20;
        case 0x306c24u: goto label_306c24;
        case 0x306c28u: goto label_306c28;
        case 0x306c2cu: goto label_306c2c;
        case 0x306c30u: goto label_306c30;
        case 0x306c34u: goto label_306c34;
        case 0x306c38u: goto label_306c38;
        case 0x306c3cu: goto label_306c3c;
        case 0x306c40u: goto label_306c40;
        case 0x306c44u: goto label_306c44;
        case 0x306c48u: goto label_306c48;
        case 0x306c4cu: goto label_306c4c;
        case 0x306c50u: goto label_306c50;
        case 0x306c54u: goto label_306c54;
        case 0x306c58u: goto label_306c58;
        case 0x306c5cu: goto label_306c5c;
        case 0x306c60u: goto label_306c60;
        case 0x306c64u: goto label_306c64;
        case 0x306c68u: goto label_306c68;
        case 0x306c6cu: goto label_306c6c;
        case 0x306c70u: goto label_306c70;
        case 0x306c74u: goto label_306c74;
        case 0x306c78u: goto label_306c78;
        case 0x306c7cu: goto label_306c7c;
        case 0x306c80u: goto label_306c80;
        case 0x306c84u: goto label_306c84;
        case 0x306c88u: goto label_306c88;
        case 0x306c8cu: goto label_306c8c;
        case 0x306c90u: goto label_306c90;
        case 0x306c94u: goto label_306c94;
        case 0x306c98u: goto label_306c98;
        case 0x306c9cu: goto label_306c9c;
        case 0x306ca0u: goto label_306ca0;
        case 0x306ca4u: goto label_306ca4;
        case 0x306ca8u: goto label_306ca8;
        case 0x306cacu: goto label_306cac;
        case 0x306cb0u: goto label_306cb0;
        case 0x306cb4u: goto label_306cb4;
        case 0x306cb8u: goto label_306cb8;
        case 0x306cbcu: goto label_306cbc;
        case 0x306cc0u: goto label_306cc0;
        case 0x306cc4u: goto label_306cc4;
        case 0x306cc8u: goto label_306cc8;
        case 0x306cccu: goto label_306ccc;
        case 0x306cd0u: goto label_306cd0;
        case 0x306cd4u: goto label_306cd4;
        case 0x306cd8u: goto label_306cd8;
        case 0x306cdcu: goto label_306cdc;
        case 0x306ce0u: goto label_306ce0;
        case 0x306ce4u: goto label_306ce4;
        case 0x306ce8u: goto label_306ce8;
        case 0x306cecu: goto label_306cec;
        case 0x306cf0u: goto label_306cf0;
        case 0x306cf4u: goto label_306cf4;
        case 0x306cf8u: goto label_306cf8;
        case 0x306cfcu: goto label_306cfc;
        case 0x306d00u: goto label_306d00;
        case 0x306d04u: goto label_306d04;
        case 0x306d08u: goto label_306d08;
        case 0x306d0cu: goto label_306d0c;
        case 0x306d10u: goto label_306d10;
        case 0x306d14u: goto label_306d14;
        case 0x306d18u: goto label_306d18;
        case 0x306d1cu: goto label_306d1c;
        case 0x306d20u: goto label_306d20;
        case 0x306d24u: goto label_306d24;
        case 0x306d28u: goto label_306d28;
        case 0x306d2cu: goto label_306d2c;
        case 0x306d30u: goto label_306d30;
        case 0x306d34u: goto label_306d34;
        case 0x306d38u: goto label_306d38;
        case 0x306d3cu: goto label_306d3c;
        case 0x306d40u: goto label_306d40;
        case 0x306d44u: goto label_306d44;
        case 0x306d48u: goto label_306d48;
        case 0x306d4cu: goto label_306d4c;
        case 0x306d50u: goto label_306d50;
        case 0x306d54u: goto label_306d54;
        case 0x306d58u: goto label_306d58;
        case 0x306d5cu: goto label_306d5c;
        case 0x306d60u: goto label_306d60;
        case 0x306d64u: goto label_306d64;
        case 0x306d68u: goto label_306d68;
        case 0x306d6cu: goto label_306d6c;
        case 0x306d70u: goto label_306d70;
        case 0x306d74u: goto label_306d74;
        case 0x306d78u: goto label_306d78;
        case 0x306d7cu: goto label_306d7c;
        case 0x306d80u: goto label_306d80;
        case 0x306d84u: goto label_306d84;
        case 0x306d88u: goto label_306d88;
        case 0x306d8cu: goto label_306d8c;
        case 0x306d90u: goto label_306d90;
        case 0x306d94u: goto label_306d94;
        case 0x306d98u: goto label_306d98;
        case 0x306d9cu: goto label_306d9c;
        case 0x306da0u: goto label_306da0;
        case 0x306da4u: goto label_306da4;
        case 0x306da8u: goto label_306da8;
        case 0x306dacu: goto label_306dac;
        case 0x306db0u: goto label_306db0;
        case 0x306db4u: goto label_306db4;
        case 0x306db8u: goto label_306db8;
        case 0x306dbcu: goto label_306dbc;
        case 0x306dc0u: goto label_306dc0;
        case 0x306dc4u: goto label_306dc4;
        case 0x306dc8u: goto label_306dc8;
        case 0x306dccu: goto label_306dcc;
        case 0x306dd0u: goto label_306dd0;
        case 0x306dd4u: goto label_306dd4;
        case 0x306dd8u: goto label_306dd8;
        case 0x306ddcu: goto label_306ddc;
        case 0x306de0u: goto label_306de0;
        case 0x306de4u: goto label_306de4;
        case 0x306de8u: goto label_306de8;
        case 0x306decu: goto label_306dec;
        case 0x306df0u: goto label_306df0;
        case 0x306df4u: goto label_306df4;
        case 0x306df8u: goto label_306df8;
        case 0x306dfcu: goto label_306dfc;
        case 0x306e00u: goto label_306e00;
        case 0x306e04u: goto label_306e04;
        case 0x306e08u: goto label_306e08;
        case 0x306e0cu: goto label_306e0c;
        case 0x306e10u: goto label_306e10;
        case 0x306e14u: goto label_306e14;
        case 0x306e18u: goto label_306e18;
        case 0x306e1cu: goto label_306e1c;
        case 0x306e20u: goto label_306e20;
        case 0x306e24u: goto label_306e24;
        case 0x306e28u: goto label_306e28;
        case 0x306e2cu: goto label_306e2c;
        case 0x306e30u: goto label_306e30;
        case 0x306e34u: goto label_306e34;
        case 0x306e38u: goto label_306e38;
        case 0x306e3cu: goto label_306e3c;
        case 0x306e40u: goto label_306e40;
        case 0x306e44u: goto label_306e44;
        case 0x306e48u: goto label_306e48;
        case 0x306e4cu: goto label_306e4c;
        case 0x306e50u: goto label_306e50;
        case 0x306e54u: goto label_306e54;
        case 0x306e58u: goto label_306e58;
        case 0x306e5cu: goto label_306e5c;
        case 0x306e60u: goto label_306e60;
        case 0x306e64u: goto label_306e64;
        case 0x306e68u: goto label_306e68;
        case 0x306e6cu: goto label_306e6c;
        case 0x306e70u: goto label_306e70;
        case 0x306e74u: goto label_306e74;
        case 0x306e78u: goto label_306e78;
        case 0x306e7cu: goto label_306e7c;
        case 0x306e80u: goto label_306e80;
        case 0x306e84u: goto label_306e84;
        case 0x306e88u: goto label_306e88;
        case 0x306e8cu: goto label_306e8c;
        case 0x306e90u: goto label_306e90;
        case 0x306e94u: goto label_306e94;
        case 0x306e98u: goto label_306e98;
        case 0x306e9cu: goto label_306e9c;
        case 0x306ea0u: goto label_306ea0;
        case 0x306ea4u: goto label_306ea4;
        case 0x306ea8u: goto label_306ea8;
        case 0x306eacu: goto label_306eac;
        case 0x306eb0u: goto label_306eb0;
        case 0x306eb4u: goto label_306eb4;
        case 0x306eb8u: goto label_306eb8;
        case 0x306ebcu: goto label_306ebc;
        case 0x306ec0u: goto label_306ec0;
        case 0x306ec4u: goto label_306ec4;
        case 0x306ec8u: goto label_306ec8;
        case 0x306eccu: goto label_306ecc;
        case 0x306ed0u: goto label_306ed0;
        case 0x306ed4u: goto label_306ed4;
        case 0x306ed8u: goto label_306ed8;
        case 0x306edcu: goto label_306edc;
        case 0x306ee0u: goto label_306ee0;
        case 0x306ee4u: goto label_306ee4;
        case 0x306ee8u: goto label_306ee8;
        case 0x306eecu: goto label_306eec;
        case 0x306ef0u: goto label_306ef0;
        case 0x306ef4u: goto label_306ef4;
        case 0x306ef8u: goto label_306ef8;
        case 0x306efcu: goto label_306efc;
        case 0x306f00u: goto label_306f00;
        case 0x306f04u: goto label_306f04;
        case 0x306f08u: goto label_306f08;
        case 0x306f0cu: goto label_306f0c;
        case 0x306f10u: goto label_306f10;
        case 0x306f14u: goto label_306f14;
        case 0x306f18u: goto label_306f18;
        case 0x306f1cu: goto label_306f1c;
        case 0x306f20u: goto label_306f20;
        case 0x306f24u: goto label_306f24;
        case 0x306f28u: goto label_306f28;
        case 0x306f2cu: goto label_306f2c;
        case 0x306f30u: goto label_306f30;
        case 0x306f34u: goto label_306f34;
        case 0x306f38u: goto label_306f38;
        case 0x306f3cu: goto label_306f3c;
        case 0x306f40u: goto label_306f40;
        case 0x306f44u: goto label_306f44;
        case 0x306f48u: goto label_306f48;
        case 0x306f4cu: goto label_306f4c;
        case 0x306f50u: goto label_306f50;
        case 0x306f54u: goto label_306f54;
        case 0x306f58u: goto label_306f58;
        case 0x306f5cu: goto label_306f5c;
        case 0x306f60u: goto label_306f60;
        case 0x306f64u: goto label_306f64;
        case 0x306f68u: goto label_306f68;
        case 0x306f6cu: goto label_306f6c;
        case 0x306f70u: goto label_306f70;
        case 0x306f74u: goto label_306f74;
        case 0x306f78u: goto label_306f78;
        case 0x306f7cu: goto label_306f7c;
        case 0x306f80u: goto label_306f80;
        case 0x306f84u: goto label_306f84;
        case 0x306f88u: goto label_306f88;
        case 0x306f8cu: goto label_306f8c;
        case 0x306f90u: goto label_306f90;
        case 0x306f94u: goto label_306f94;
        case 0x306f98u: goto label_306f98;
        case 0x306f9cu: goto label_306f9c;
        case 0x306fa0u: goto label_306fa0;
        case 0x306fa4u: goto label_306fa4;
        case 0x306fa8u: goto label_306fa8;
        case 0x306facu: goto label_306fac;
        case 0x306fb0u: goto label_306fb0;
        case 0x306fb4u: goto label_306fb4;
        case 0x306fb8u: goto label_306fb8;
        case 0x306fbcu: goto label_306fbc;
        case 0x306fc0u: goto label_306fc0;
        case 0x306fc4u: goto label_306fc4;
        case 0x306fc8u: goto label_306fc8;
        case 0x306fccu: goto label_306fcc;
        case 0x306fd0u: goto label_306fd0;
        case 0x306fd4u: goto label_306fd4;
        case 0x306fd8u: goto label_306fd8;
        case 0x306fdcu: goto label_306fdc;
        default: break;
    }

    ctx->pc = 0x3059f0u;

label_3059f0:
    // 0x3059f0: 0x3c0201d1  lui         $v0, 0x1D1
    ctx->pc = 0x3059f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)465 << 16));
label_3059f4:
    // 0x3059f4: 0x8c421d40  lw          $v0, 0x1D40($v0)
    ctx->pc = 0x3059f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7488)));
label_3059f8:
    // 0x3059f8: 0x400008  jr          $v0
label_3059fc:
    if (ctx->pc == 0x3059FCu) {
        ctx->pc = 0x305A00u;
        goto label_305a00;
    }
    ctx->pc = 0x3059F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3059F8u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x305A00u;
label_305a00:
    // 0x305a00: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x305a00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_305a04:
    // 0x305a04: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x305a04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_305a08:
    // 0x305a08: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x305a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_305a0c:
    // 0x305a0c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x305a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_305a10:
    // 0x305a10: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x305a10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_305a14:
    // 0x305a14: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x305a14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_305a18:
    // 0x305a18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x305a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_305a1c:
    // 0x305a1c: 0x8c42da40  lw          $v0, -0x25C0($v0)
    ctx->pc = 0x305a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957632)));
label_305a20:
    // 0x305a20: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_305a24:
    if (ctx->pc == 0x305A24u) {
        ctx->pc = 0x305A28u;
        goto label_305a28;
    }
    ctx->pc = 0x305A20u;
    {
        const bool branch_taken_0x305a20 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x305a20) {
            ctx->pc = 0x305A34u;
            goto label_305a34;
        }
    }
    ctx->pc = 0x305A28u;
label_305a28:
    // 0x305a28: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x305a28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_305a2c:
    // 0x305a2c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x305a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_305a30:
    // 0x305a30: 0xac43da40  sw          $v1, -0x25C0($v0)
    ctx->pc = 0x305a30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957632), GPR_U32(ctx, 3));
label_305a34:
    // 0x305a34: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305a34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305a38:
    // 0x305a38: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305a38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305a3c:
    // 0x305a3c: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x305a3cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305a40:
    // 0x305a40: 0xc068d08  jal         func_1A3420
label_305a44:
    if (ctx->pc == 0x305A44u) {
        ctx->pc = 0x305A44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A40u;
        // 0x305a44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A48u;
        goto label_305a48;
    }
    ctx->pc = 0x305A40u;
    SET_GPR_U32(ctx, 31, 0x305A48u);
    ctx->pc = 0x305A44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A40u;
    // 0x305a44: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x305A40u, 0x305A48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A48u;
label_305a48:
    // 0x305a48: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_305a4c:
    if (ctx->pc == 0x305A4Cu) {
        ctx->pc = 0x305A50u;
        goto label_305a50;
    }
    ctx->pc = 0x305A48u;
    {
        const bool branch_taken_0x305a48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305a48) {
            ctx->pc = 0x305A60u;
            goto label_305a60;
        }
    }
    ctx->pc = 0x305A50u;
label_305a50:
    // 0x305a50: 0xc0c1650  jal         func_305940
label_305a54:
    if (ctx->pc == 0x305A54u) {
        ctx->pc = 0x305A58u;
        goto label_305a58;
    }
    ctx->pc = 0x305A50u;
    SET_GPR_U32(ctx, 31, 0x305A58u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x305A50u, 0x305A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305A58u;
label_305a58:
    // 0x305a58: 0x100000dc  b           . + 4 + (0xDC << 2)
label_305a5c:
    if (ctx->pc == 0x305A5Cu) {
        ctx->pc = 0x305A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A58u;
        // 0x305a5c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305A60u;
        goto label_305a60;
    }
    ctx->pc = 0x305A58u;
    {
        const bool branch_taken_0x305a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A58u;
        // 0x305a5c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305a58) {
            ctx->pc = 0x305DCCu;
            goto label_305dcc;
        }
    }
    ctx->pc = 0x305A60u;
label_305a60:
    // 0x305a60: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x305a60u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_305a64:
    // 0x305a64: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x305a64u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305a68:
    // 0x305a68: 0x26523350  addiu       $s2, $s2, 0x3350
    ctx->pc = 0x305a68u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 13136));
label_305a6c:
    // 0x305a6c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x305a6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_305a70:
    // 0x305a70: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305a74:
    // 0x305a74: 0x13843c  dsll32      $s0, $s3, 16
    ctx->pc = 0x305a74u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 16));
label_305a78:
    // 0x305a78: 0x8c43e8f0  lw          $v1, -0x1710($v0)
    ctx->pc = 0x305a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_305a7c:
    // 0x305a7c: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x305a7cu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_305a80:
    // 0x305a80: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x305a80u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_305a84:
    // 0x305a84: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x305a84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_305a88:
    // 0x305a88: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x305a88u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_305a8c:
    // 0x305a8c: 0x703826  xor         $a3, $v1, $s0
    ctx->pc = 0x305a8cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 16));
label_305a90:
    // 0x305a90: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305a90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305a94:
    // 0x305a94: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x305a94u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_305a98:
    // 0x305a98: 0xc0ce5bc  jal         func_3396F0
label_305a9c:
    if (ctx->pc == 0x305A9Cu) {
        ctx->pc = 0x305A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305A98u;
        // 0x305a9c: 0xac47e8e0  sw          $a3, -0x1720($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961376), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305AA0u;
        goto label_305aa0;
    }
    ctx->pc = 0x305A98u;
    SET_GPR_U32(ctx, 31, 0x305AA0u);
    ctx->pc = 0x305A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305A98u;
    // 0x305a9c: 0xac47e8e0  sw          $a3, -0x1720($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961376), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x305A98u, 0x305AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305AA0u;
label_305aa0:
    // 0x305aa0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305aa4:
    // 0x305aa4: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x305aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_305aa8:
    // 0x305aa8: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
label_305aac:
    if (ctx->pc == 0x305AACu) {
        ctx->pc = 0x305AB0u;
        goto label_305ab0;
    }
    ctx->pc = 0x305AA8u;
    {
        const bool branch_taken_0x305aa8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x305aa8) {
            ctx->pc = 0x305AD0u;
            goto label_305ad0;
        }
    }
    ctx->pc = 0x305AB0u;
label_305ab0:
    // 0x305ab0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x305ab0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_305ab4:
    // 0x305ab4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x305ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_305ab8:
    // 0x305ab8: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x305ab8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_305abc:
    // 0x305abc: 0x24c63598  addiu       $a2, $a2, 0x3598
    ctx->pc = 0x305abcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13720));
label_305ac0:
    // 0x305ac0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x305ac0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305ac4:
    // 0x305ac4: 0xc0ce5bc  jal         func_3396F0
label_305ac8:
    if (ctx->pc == 0x305AC8u) {
        ctx->pc = 0x305AC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AC4u;
        // 0x305ac8: 0x2444ffee  addiu       $a0, $v0, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305ACCu;
        goto label_305acc;
    }
    ctx->pc = 0x305AC4u;
    SET_GPR_U32(ctx, 31, 0x305ACCu);
    ctx->pc = 0x305AC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AC4u;
    // 0x305ac8: 0x2444ffee  addiu       $a0, $v0, -0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x305AC4u, 0x305ACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305ACCu;
label_305acc:
    // 0x305acc: 0x0  nop
    ctx->pc = 0x305accu;
    // NOP
label_305ad0:
    // 0x305ad0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x305ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_305ad4:
    // 0x305ad4: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x305ad4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
label_305ad8:
    // 0x305ad8: 0x2652002c  addiu       $s2, $s2, 0x2C
    ctx->pc = 0x305ad8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_305adc:
    // 0x305adc: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x305adcu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_305ae0:
    // 0x305ae0: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x305ae0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_305ae4:
    // 0x305ae4: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_305ae8:
    if (ctx->pc == 0x305AE8u) {
        ctx->pc = 0x305AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AE4u;
        // 0x305ae8: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305AECu;
        goto label_305aec;
    }
    ctx->pc = 0x305AE4u;
    {
        const bool branch_taken_0x305ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305AE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AE4u;
        // 0x305ae8: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ae4) {
            ctx->pc = 0x305A70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_305a70;
        }
    }
    ctx->pc = 0x305AECu;
label_305aec:
    // 0x305aec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305aecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305af0:
    // 0x305af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305af4:
    // 0x305af4: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x305af4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305af8:
    // 0x305af8: 0xc068d08  jal         func_1A3420
label_305afc:
    if (ctx->pc == 0x305AFCu) {
        ctx->pc = 0x305AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305AF8u;
        // 0x305afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B00u;
        goto label_305b00;
    }
    ctx->pc = 0x305AF8u;
    SET_GPR_U32(ctx, 31, 0x305B00u);
    ctx->pc = 0x305AFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305AF8u;
    // 0x305afc: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x305AF8u, 0x305B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B00u;
label_305b00:
    // 0x305b00: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x305b00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_305b04:
    // 0x305b04: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305b08:
    // 0x305b08: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x305b08u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
label_305b0c:
    // 0x305b0c: 0x14400076  bnez        $v0, . + 4 + (0x76 << 2)
label_305b10:
    if (ctx->pc == 0x305B10u) {
        ctx->pc = 0x305B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B0Cu;
        // 0x305b10: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B14u;
        goto label_305b14;
    }
    ctx->pc = 0x305B0Cu;
    {
        const bool branch_taken_0x305b0c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B0Cu;
        // 0x305b10: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305b0c) {
            ctx->pc = 0x305CE8u;
            goto label_305ce8;
        }
    }
    ctx->pc = 0x305B14u;
label_305b14:
    // 0x305b14: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305b18:
    // 0x305b18: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x305b18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305b1c:
    // 0x305b1c: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x305b1cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305b20:
    // 0x305b20: 0xc068d08  jal         func_1A3420
label_305b24:
    if (ctx->pc == 0x305B24u) {
        ctx->pc = 0x305B24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B20u;
        // 0x305b24: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B28u;
        goto label_305b28;
    }
    ctx->pc = 0x305B20u;
    SET_GPR_U32(ctx, 31, 0x305B28u);
    ctx->pc = 0x305B24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B20u;
    // 0x305b24: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x305B20u, 0x305B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B28u;
label_305b28:
    // 0x305b28: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_305b2c:
    if (ctx->pc == 0x305B2Cu) {
        ctx->pc = 0x305B30u;
        goto label_305b30;
    }
    ctx->pc = 0x305B28u;
    {
        const bool branch_taken_0x305b28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305b28) {
            ctx->pc = 0x305B64u;
            goto label_305b64;
        }
    }
    ctx->pc = 0x305B30u;
label_305b30:
    // 0x305b30: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305b30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305b34:
    // 0x305b34: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x305b34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_305b38:
    // 0x305b38: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x305b38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305b3c:
    // 0x305b3c: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x305b3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_305b40:
    // 0x305b40: 0x8064e8f0  lb          $a0, -0x1710($v1)
    ctx->pc = 0x305b40u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961392)));
label_305b44:
    // 0x305b44: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305b44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_305b48:
    // 0x305b48: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x305b48u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_305b4c:
    // 0x305b4c: 0xc0cd978  jal         func_3365E0
label_305b50:
    if (ctx->pc == 0x305B50u) {
        ctx->pc = 0x305B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B4Cu;
        // 0x305b50: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B54u;
        goto label_305b54;
    }
    ctx->pc = 0x305B4Cu;
    SET_GPR_U32(ctx, 31, 0x305B54u);
    ctx->pc = 0x305B50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B4Cu;
    // 0x305b50: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365E0u, 0x305B4Cu, 0x305B54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B54u;
label_305b54:
    // 0x305b54: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x305b54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_305b58:
    // 0x305b58: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x305b58u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_305b5c:
    // 0x305b5c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305b60:
    // 0x305b60: 0xac43e8f0  sw          $v1, -0x1710($v0)
    ctx->pc = 0x305b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961392), GPR_U32(ctx, 3));
label_305b64:
    // 0x305b64: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305b68:
    // 0x305b68: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x305b68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_305b6c:
    // 0x305b6c: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x305b6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305b70:
    // 0x305b70: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_305b74:
    // 0x305b74: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x305b74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_305b78:
    // 0x305b78: 0xc0cda84  jal         func_336A10
label_305b7c:
    if (ctx->pc == 0x305B7Cu) {
        ctx->pc = 0x305B7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305B78u;
        // 0x305b7c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305B80u;
        goto label_305b80;
    }
    ctx->pc = 0x305B78u;
    SET_GPR_U32(ctx, 31, 0x305B80u);
    ctx->pc = 0x305B7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305B78u;
    // 0x305b7c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x305B78u, 0x305B80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305B80u;
label_305b80:
    // 0x305b80: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_305b84:
    if (ctx->pc == 0x305B84u) {
        ctx->pc = 0x305B88u;
        goto label_305b88;
    }
    ctx->pc = 0x305B80u;
    {
        const bool branch_taken_0x305b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305b80) {
            ctx->pc = 0x305BA8u;
            goto label_305ba8;
        }
    }
    ctx->pc = 0x305B88u;
label_305b88:
    // 0x305b88: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305b8c:
    // 0x305b8c: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x305b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_305b90:
    // 0x305b90: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_305b94:
    if (ctx->pc == 0x305B94u) {
        ctx->pc = 0x305B98u;
        goto label_305b98;
    }
    ctx->pc = 0x305B90u;
    {
        const bool branch_taken_0x305b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305b90) {
            ctx->pc = 0x305BA8u;
            goto label_305ba8;
        }
    }
    ctx->pc = 0x305B98u;
label_305b98:
    // 0x305b98: 0xc0c1650  jal         func_305940
label_305b9c:
    if (ctx->pc == 0x305B9Cu) {
        ctx->pc = 0x305BA0u;
        goto label_305ba0;
    }
    ctx->pc = 0x305B98u;
    SET_GPR_U32(ctx, 31, 0x305BA0u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x305B98u, 0x305BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BA0u;
label_305ba0:
    // 0x305ba0: 0x10000089  b           . + 4 + (0x89 << 2)
label_305ba4:
    if (ctx->pc == 0x305BA4u) {
        ctx->pc = 0x305BA8u;
        goto label_305ba8;
    }
    ctx->pc = 0x305BA0u;
    {
        const bool branch_taken_0x305ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305ba0) {
            ctx->pc = 0x305DC8u;
            goto label_305dc8;
        }
    }
    ctx->pc = 0x305BA8u;
label_305ba8:
    // 0x305ba8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305bac:
    // 0x305bac: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x305bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_305bb0:
    // 0x305bb0: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x305bb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305bb4:
    // 0x305bb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_305bb8:
    // 0x305bb8: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x305bb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_305bbc:
    // 0x305bbc: 0xc0cda84  jal         func_336A10
label_305bc0:
    if (ctx->pc == 0x305BC0u) {
        ctx->pc = 0x305BC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BBCu;
        // 0x305bc0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305BC4u;
        goto label_305bc4;
    }
    ctx->pc = 0x305BBCu;
    SET_GPR_U32(ctx, 31, 0x305BC4u);
    ctx->pc = 0x305BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BBCu;
    // 0x305bc0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x305BBCu, 0x305BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BC4u;
label_305bc4:
    // 0x305bc4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_305bc8:
    if (ctx->pc == 0x305BC8u) {
        ctx->pc = 0x305BCCu;
        goto label_305bcc;
    }
    ctx->pc = 0x305BC4u;
    {
        const bool branch_taken_0x305bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305bc4) {
            ctx->pc = 0x305BE8u;
            goto label_305be8;
        }
    }
    ctx->pc = 0x305BCCu;
label_305bcc:
    // 0x305bcc: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x305bccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_305bd0:
    // 0x305bd0: 0xc0538fc  jal         func_14E3F0
label_305bd4:
    if (ctx->pc == 0x305BD4u) {
        ctx->pc = 0x305BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BD0u;
        // 0x305bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305BD8u;
        goto label_305bd8;
    }
    ctx->pc = 0x305BD0u;
    SET_GPR_U32(ctx, 31, 0x305BD8u);
    ctx->pc = 0x305BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BD0u;
    // 0x305bd4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x305BD0u, 0x305BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BD8u;
label_305bd8:
    // 0x305bd8: 0xc0c1650  jal         func_305940
label_305bdc:
    if (ctx->pc == 0x305BDCu) {
        ctx->pc = 0x305BE0u;
        goto label_305be0;
    }
    ctx->pc = 0x305BD8u;
    SET_GPR_U32(ctx, 31, 0x305BE0u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x305BD8u, 0x305BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305BE0u;
label_305be0:
    // 0x305be0: 0x10000079  b           . + 4 + (0x79 << 2)
label_305be4:
    if (ctx->pc == 0x305BE4u) {
        ctx->pc = 0x305BE8u;
        goto label_305be8;
    }
    ctx->pc = 0x305BE0u;
    {
        const bool branch_taken_0x305be0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305be0) {
            ctx->pc = 0x305DC8u;
            goto label_305dc8;
        }
    }
    ctx->pc = 0x305BE8u;
label_305be8:
    // 0x305be8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305be8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305bec:
    // 0x305bec: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x305becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_305bf0:
    // 0x305bf0: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x305bf0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305bf4:
    // 0x305bf4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_305bf8:
    // 0x305bf8: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x305bf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_305bfc:
    // 0x305bfc: 0xc0cda84  jal         func_336A10
label_305c00:
    if (ctx->pc == 0x305C00u) {
        ctx->pc = 0x305C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305BFCu;
        // 0x305c00: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C04u;
        goto label_305c04;
    }
    ctx->pc = 0x305BFCu;
    SET_GPR_U32(ctx, 31, 0x305C04u);
    ctx->pc = 0x305C00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305BFCu;
    // 0x305c00: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x305BFCu, 0x305C04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C04u;
label_305c04:
    // 0x305c04: 0x10400070  beqz        $v0, . + 4 + (0x70 << 2)
label_305c08:
    if (ctx->pc == 0x305C08u) {
        ctx->pc = 0x305C0Cu;
        goto label_305c0c;
    }
    ctx->pc = 0x305C04u;
    {
        const bool branch_taken_0x305c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305c04) {
            ctx->pc = 0x305DC8u;
            goto label_305dc8;
        }
    }
    ctx->pc = 0x305C0Cu;
label_305c0c:
    // 0x305c0c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x305c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_305c10:
    // 0x305c10: 0xc0538fc  jal         func_14E3F0
label_305c14:
    if (ctx->pc == 0x305C14u) {
        ctx->pc = 0x305C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C10u;
        // 0x305c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C18u;
        goto label_305c18;
    }
    ctx->pc = 0x305C10u;
    SET_GPR_U32(ctx, 31, 0x305C18u);
    ctx->pc = 0x305C14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C10u;
    // 0x305c14: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x305C10u, 0x305C18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C18u;
label_305c18:
    // 0x305c18: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x305c18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_305c1c:
    // 0x305c1c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x305c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_305c20:
    // 0x305c20: 0x8c65e8f0  lw          $a1, -0x1710($v1)
    ctx->pc = 0x305c20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961392)));
label_305c24:
    // 0x305c24: 0x50a4002b  beql        $a1, $a0, . + 4 + (0x2B << 2)
label_305c28:
    if (ctx->pc == 0x305C28u) {
        ctx->pc = 0x305C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C24u;
        // 0x305c28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C2Cu;
        goto label_305c2c;
    }
    ctx->pc = 0x305C24u;
    {
        const bool branch_taken_0x305c24 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x305c24) {
            ctx->pc = 0x305C28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x305C24u;
            // 0x305c28: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x305CD4u;
            goto label_305cd4;
        }
    }
    ctx->pc = 0x305C2Cu;
label_305c2c:
    // 0x305c2c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x305c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_305c30:
    // 0x305c30: 0x10a3001f  beq         $a1, $v1, . + 4 + (0x1F << 2)
label_305c34:
    if (ctx->pc == 0x305C34u) {
        ctx->pc = 0x305C38u;
        goto label_305c38;
    }
    ctx->pc = 0x305C30u;
    {
        const bool branch_taken_0x305c30 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x305c30) {
            ctx->pc = 0x305CB0u;
            goto label_305cb0;
        }
    }
    ctx->pc = 0x305C38u;
label_305c38:
    // 0x305c38: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x305c38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_305c3c:
    // 0x305c3c: 0x10a30017  beq         $a1, $v1, . + 4 + (0x17 << 2)
label_305c40:
    if (ctx->pc == 0x305C40u) {
        ctx->pc = 0x305C44u;
        goto label_305c44;
    }
    ctx->pc = 0x305C3Cu;
    {
        const bool branch_taken_0x305c3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x305c3c) {
            ctx->pc = 0x305C9Cu;
            goto label_305c9c;
        }
    }
    ctx->pc = 0x305C44u;
label_305c44:
    // 0x305c44: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305c48:
    // 0x305c48: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_305c4c:
    if (ctx->pc == 0x305C4Cu) {
        ctx->pc = 0x305C50u;
        goto label_305c50;
    }
    ctx->pc = 0x305C48u;
    {
        const bool branch_taken_0x305c48 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x305c48) {
            ctx->pc = 0x305C58u;
            goto label_305c58;
        }
    }
    ctx->pc = 0x305C50u;
label_305c50:
    // 0x305c50: 0x1000005d  b           . + 4 + (0x5D << 2)
label_305c54:
    if (ctx->pc == 0x305C54u) {
        ctx->pc = 0x305C58u;
        goto label_305c58;
    }
    ctx->pc = 0x305C50u;
    {
        const bool branch_taken_0x305c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305c50) {
            ctx->pc = 0x305DC8u;
            goto label_305dc8;
        }
    }
    ctx->pc = 0x305C58u;
label_305c58:
    // 0x305c58: 0xc0c1650  jal         func_305940
label_305c5c:
    if (ctx->pc == 0x305C5Cu) {
        ctx->pc = 0x305C60u;
        goto label_305c60;
    }
    ctx->pc = 0x305C58u;
    SET_GPR_U32(ctx, 31, 0x305C60u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x305C58u, 0x305C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C60u;
label_305c60:
    // 0x305c60: 0xc055684  jal         func_155A10
label_305c64:
    if (ctx->pc == 0x305C64u) {
        ctx->pc = 0x305C68u;
        goto label_305c68;
    }
    ctx->pc = 0x305C60u;
    SET_GPR_U32(ctx, 31, 0x305C68u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x305C60u, 0x305C68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C68u;
label_305c68:
    // 0x305c68: 0xc05347c  jal         func_14D1F0
label_305c6c:
    if (ctx->pc == 0x305C6Cu) {
        ctx->pc = 0x305C70u;
        goto label_305c70;
    }
    ctx->pc = 0x305C68u;
    SET_GPR_U32(ctx, 31, 0x305C70u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x305C68u, 0x305C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C70u;
label_305c70:
    // 0x305c70: 0xc067ff0  jal         func_19FFC0
label_305c74:
    if (ctx->pc == 0x305C74u) {
        ctx->pc = 0x305C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C70u;
        // 0x305c74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C78u;
        goto label_305c78;
    }
    ctx->pc = 0x305C70u;
    SET_GPR_U32(ctx, 31, 0x305C78u);
    ctx->pc = 0x305C74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C70u;
    // 0x305c74: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FFC0u, 0x305C70u, 0x305C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C78u;
label_305c78:
    // 0x305c78: 0xc067ff0  jal         func_19FFC0
label_305c7c:
    if (ctx->pc == 0x305C7Cu) {
        ctx->pc = 0x305C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C78u;
        // 0x305c7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C80u;
        goto label_305c80;
    }
    ctx->pc = 0x305C78u;
    SET_GPR_U32(ctx, 31, 0x305C80u);
    ctx->pc = 0x305C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C78u;
    // 0x305c7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x19FFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19FFC0u, 0x305C78u, 0x305C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C80u;
label_305c80:
    // 0x305c80: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x305c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_305c84:
    // 0x305c84: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x305c84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
label_305c88:
    // 0x305c88: 0x24840ee0  addiu       $a0, $a0, 0xEE0
    ctx->pc = 0x305c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3808));
label_305c8c:
    // 0x305c8c: 0xc0558e0  jal         func_156380
label_305c90:
    if (ctx->pc == 0x305C90u) {
        ctx->pc = 0x305C90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305C8Cu;
        // 0x305c90: 0xa040d9f8  sb          $zero, -0x2608($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957560), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305C94u;
        goto label_305c94;
    }
    ctx->pc = 0x305C8Cu;
    SET_GPR_U32(ctx, 31, 0x305C94u);
    ctx->pc = 0x305C90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305C8Cu;
    // 0x305c90: 0xa040d9f8  sb          $zero, -0x2608($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957560), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x305C8Cu, 0x305C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305C94u;
label_305c94:
    // 0x305c94: 0x1000004c  b           . + 4 + (0x4C << 2)
label_305c98:
    if (ctx->pc == 0x305C98u) {
        ctx->pc = 0x305C9Cu;
        goto label_305c9c;
    }
    ctx->pc = 0x305C94u;
    {
        const bool branch_taken_0x305c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305c94) {
            ctx->pc = 0x305DC8u;
            goto label_305dc8;
        }
    }
    ctx->pc = 0x305C9Cu;
label_305c9c:
    // 0x305c9c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x305c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_305ca0:
    // 0x305ca0: 0xc0c1678  jal         func_3059E0
label_305ca4:
    if (ctx->pc == 0x305CA4u) {
        ctx->pc = 0x305CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CA0u;
        // 0x305ca4: 0x24847110  addiu       $a0, $a0, 0x7110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CA8u;
        goto label_305ca8;
    }
    ctx->pc = 0x305CA0u;
    SET_GPR_U32(ctx, 31, 0x305CA8u);
    ctx->pc = 0x305CA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CA0u;
    // 0x305ca4: 0x24847110  addiu       $a0, $a0, 0x7110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x305CA0u, 0x305CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CA8u;
label_305ca8:
    // 0x305ca8: 0x10000047  b           . + 4 + (0x47 << 2)
label_305cac:
    if (ctx->pc == 0x305CACu) {
        ctx->pc = 0x305CB0u;
        goto label_305cb0;
    }
    ctx->pc = 0x305CA8u;
    {
        const bool branch_taken_0x305ca8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305ca8) {
            ctx->pc = 0x305DC8u;
            goto label_305dc8;
        }
    }
    ctx->pc = 0x305CB0u;
label_305cb0:
    // 0x305cb0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x305cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_305cb4:
    // 0x305cb4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305cb8:
    // 0x305cb8: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x305cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_305cbc:
    // 0x305cbc: 0xac60e808  sw          $zero, -0x17F8($v1)
    ctx->pc = 0x305cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 0));
label_305cc0:
    // 0x305cc0: 0x24843300  addiu       $a0, $a0, 0x3300
    ctx->pc = 0x305cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13056));
label_305cc4:
    // 0x305cc4: 0xc0c1678  jal         func_3059E0
label_305cc8:
    if (ctx->pc == 0x305CC8u) {
        ctx->pc = 0x305CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CC4u;
        // 0x305cc8: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CCCu;
        goto label_305ccc;
    }
    ctx->pc = 0x305CC4u;
    SET_GPR_U32(ctx, 31, 0x305CCCu);
    ctx->pc = 0x305CC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305CC4u;
    // 0x305cc8: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x305CC4u, 0x305CCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305CCCu;
label_305ccc:
    // 0x305ccc: 0x1000003e  b           . + 4 + (0x3E << 2)
label_305cd0:
    if (ctx->pc == 0x305CD0u) {
        ctx->pc = 0x305CD4u;
        goto label_305cd4;
    }
    ctx->pc = 0x305CCCu;
    {
        const bool branch_taken_0x305ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305ccc) {
            ctx->pc = 0x305DC8u;
            goto label_305dc8;
        }
    }
    ctx->pc = 0x305CD4u;
label_305cd4:
    // 0x305cd4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x305cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_305cd8:
    // 0x305cd8: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x305cd8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_305cdc:
    // 0x305cdc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x305cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_305ce0:
    // 0x305ce0: 0x10000039  b           . + 4 + (0x39 << 2)
label_305ce4:
    if (ctx->pc == 0x305CE4u) {
        ctx->pc = 0x305CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CE0u;
        // 0x305ce4: 0xac60e8e8  sw          $zero, -0x1718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305CE8u;
        goto label_305ce8;
    }
    ctx->pc = 0x305CE0u;
    {
        const bool branch_taken_0x305ce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305CE0u;
        // 0x305ce4: 0xac60e8e8  sw          $zero, -0x1718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ce0) {
            ctx->pc = 0x305DC8u;
            goto label_305dc8;
        }
    }
    ctx->pc = 0x305CE8u;
label_305ce8:
    // 0x305ce8: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x305ce8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_305cec:
    // 0x305cec: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x305cecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_305cf0:
    // 0x305cf0: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x305cf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
label_305cf4:
    // 0x305cf4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_305cf8:
    if (ctx->pc == 0x305CF8u) {
        ctx->pc = 0x305CFCu;
        goto label_305cfc;
    }
    ctx->pc = 0x305CF4u;
    {
        const bool branch_taken_0x305cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305cf4) {
            ctx->pc = 0x305D24u;
            goto label_305d24;
        }
    }
    ctx->pc = 0x305CFCu;
label_305cfc:
    // 0x305cfc: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x305cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
label_305d00:
    // 0x305d00: 0xc0538fc  jal         func_14E3F0
label_305d04:
    if (ctx->pc == 0x305D04u) {
        ctx->pc = 0x305D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D00u;
        // 0x305d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D08u;
        goto label_305d08;
    }
    ctx->pc = 0x305D00u;
    SET_GPR_U32(ctx, 31, 0x305D08u);
    ctx->pc = 0x305D04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D00u;
    // 0x305d04: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x305D00u, 0x305D08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D08u;
label_305d08:
    // 0x305d08: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x305d08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_305d0c:
    // 0x305d0c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305d10:
    // 0x305d10: 0x8c63e8e8  lw          $v1, -0x1718($v1)
    ctx->pc = 0x305d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961384)));
label_305d14:
    // 0x305d14: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x305d14u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_305d18:
    // 0x305d18: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x305d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_305d1c:
    // 0x305d1c: 0x10000028  b           . + 4 + (0x28 << 2)
label_305d20:
    if (ctx->pc == 0x305D20u) {
        ctx->pc = 0x305D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D1Cu;
        // 0x305d20: 0xac43e8e8  sw          $v1, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D24u;
        goto label_305d24;
    }
    ctx->pc = 0x305D1Cu;
    {
        const bool branch_taken_0x305d1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D1Cu;
        // 0x305d20: 0xac43e8e8  sw          $v1, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d1c) {
            ctx->pc = 0x305DC0u;
            goto label_305dc0;
        }
    }
    ctx->pc = 0x305D24u;
label_305d24:
    // 0x305d24: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305d24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305d28:
    // 0x305d28: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x305d28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_305d2c:
    // 0x305d2c: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x305d2cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305d30:
    // 0x305d30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_305d34:
    // 0x305d34: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x305d34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_305d38:
    // 0x305d38: 0xc0cda84  jal         func_336A10
label_305d3c:
    if (ctx->pc == 0x305D3Cu) {
        ctx->pc = 0x305D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D38u;
        // 0x305d3c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D40u;
        goto label_305d40;
    }
    ctx->pc = 0x305D38u;
    SET_GPR_U32(ctx, 31, 0x305D40u);
    ctx->pc = 0x305D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D38u;
    // 0x305d3c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x305D38u, 0x305D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D40u;
label_305d40:
    // 0x305d40: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_305d44:
    if (ctx->pc == 0x305D44u) {
        ctx->pc = 0x305D48u;
        goto label_305d48;
    }
    ctx->pc = 0x305D40u;
    {
        const bool branch_taken_0x305d40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305d40) {
            ctx->pc = 0x305D88u;
            goto label_305d88;
        }
    }
    ctx->pc = 0x305D48u;
label_305d48:
    // 0x305d48: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x305d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_305d4c:
    // 0x305d4c: 0xc0538fc  jal         func_14E3F0
label_305d50:
    if (ctx->pc == 0x305D50u) {
        ctx->pc = 0x305D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D4Cu;
        // 0x305d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D54u;
        goto label_305d54;
    }
    ctx->pc = 0x305D4Cu;
    SET_GPR_U32(ctx, 31, 0x305D54u);
    ctx->pc = 0x305D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D4Cu;
    // 0x305d50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x305D4Cu, 0x305D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D54u;
label_305d54:
    // 0x305d54: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305d54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305d58:
    // 0x305d58: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x305d58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305d5c:
    // 0x305d5c: 0x8c42e8e8  lw          $v0, -0x1718($v0)
    ctx->pc = 0x305d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
label_305d60:
    // 0x305d60: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_305d64:
    if (ctx->pc == 0x305D64u) {
        ctx->pc = 0x305D68u;
        goto label_305d68;
    }
    ctx->pc = 0x305D60u;
    {
        const bool branch_taken_0x305d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x305d60) {
            ctx->pc = 0x305D7Cu;
            goto label_305d7c;
        }
    }
    ctx->pc = 0x305D68u;
label_305d68:
    // 0x305d68: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x305d68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_305d6c:
    // 0x305d6c: 0xc0c1678  jal         func_3059E0
label_305d70:
    if (ctx->pc == 0x305D70u) {
        ctx->pc = 0x305D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D6Cu;
        // 0x305d70: 0x24846e50  addiu       $a0, $a0, 0x6E50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D74u;
        goto label_305d74;
    }
    ctx->pc = 0x305D6Cu;
    SET_GPR_U32(ctx, 31, 0x305D74u);
    ctx->pc = 0x305D70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D6Cu;
    // 0x305d70: 0x24846e50  addiu       $a0, $a0, 0x6E50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x305D6Cu, 0x305D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305D74u;
label_305d74:
    // 0x305d74: 0x10000012  b           . + 4 + (0x12 << 2)
label_305d78:
    if (ctx->pc == 0x305D78u) {
        ctx->pc = 0x305D7Cu;
        goto label_305d7c;
    }
    ctx->pc = 0x305D74u;
    {
        const bool branch_taken_0x305d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305d74) {
            ctx->pc = 0x305DC0u;
            goto label_305dc0;
        }
    }
    ctx->pc = 0x305D7Cu;
label_305d7c:
    // 0x305d7c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305d80:
    // 0x305d80: 0x1000000f  b           . + 4 + (0xF << 2)
label_305d84:
    if (ctx->pc == 0x305D84u) {
        ctx->pc = 0x305D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D80u;
        // 0x305d84: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305D88u;
        goto label_305d88;
    }
    ctx->pc = 0x305D80u;
    {
        const bool branch_taken_0x305d80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305D84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D80u;
        // 0x305d84: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305d80) {
            ctx->pc = 0x305DC0u;
            goto label_305dc0;
        }
    }
    ctx->pc = 0x305D88u;
label_305d88:
    // 0x305d88: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305d88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305d8c:
    // 0x305d8c: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x305d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_305d90:
    // 0x305d90: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x305d90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305d94:
    // 0x305d94: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_305d98:
    // 0x305d98: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x305d98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_305d9c:
    // 0x305d9c: 0xc0cda84  jal         func_336A10
label_305da0:
    if (ctx->pc == 0x305DA0u) {
        ctx->pc = 0x305DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305D9Cu;
        // 0x305da0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305DA4u;
        goto label_305da4;
    }
    ctx->pc = 0x305D9Cu;
    SET_GPR_U32(ctx, 31, 0x305DA4u);
    ctx->pc = 0x305DA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305D9Cu;
    // 0x305da0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x305D9Cu, 0x305DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305DA4u;
label_305da4:
    // 0x305da4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_305da8:
    if (ctx->pc == 0x305DA8u) {
        ctx->pc = 0x305DACu;
        goto label_305dac;
    }
    ctx->pc = 0x305DA4u;
    {
        const bool branch_taken_0x305da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305da4) {
            ctx->pc = 0x305DC0u;
            goto label_305dc0;
        }
    }
    ctx->pc = 0x305DACu;
label_305dac:
    // 0x305dac: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x305dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_305db0:
    // 0x305db0: 0xc0538fc  jal         func_14E3F0
label_305db4:
    if (ctx->pc == 0x305DB4u) {
        ctx->pc = 0x305DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DB0u;
        // 0x305db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305DB8u;
        goto label_305db8;
    }
    ctx->pc = 0x305DB0u;
    SET_GPR_U32(ctx, 31, 0x305DB8u);
    ctx->pc = 0x305DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305DB0u;
    // 0x305db4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x305DB0u, 0x305DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305DB8u;
label_305db8:
    // 0x305db8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305dbc:
    // 0x305dbc: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x305dbcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_305dc0:
    // 0x305dc0: 0xc0ce7ec  jal         func_339FB0
label_305dc4:
    if (ctx->pc == 0x305DC4u) {
        ctx->pc = 0x305DC8u;
        goto label_305dc8;
    }
    ctx->pc = 0x305DC0u;
    SET_GPR_U32(ctx, 31, 0x305DC8u);
    ctx->pc = 0x339FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339FB0u, 0x305DC0u, 0x305DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305DC8u;
label_305dc8:
    // 0x305dc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x305dc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_305dcc:
    // 0x305dcc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x305dccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_305dd0:
    // 0x305dd0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x305dd0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_305dd4:
    // 0x305dd4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x305dd4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_305dd8:
    // 0x305dd8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x305dd8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_305ddc:
    // 0x305ddc: 0x3e00008  jr          $ra
label_305de0:
    if (ctx->pc == 0x305DE0u) {
        ctx->pc = 0x305DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DDCu;
        // 0x305de0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305DE4u;
        goto label_305de4;
    }
    ctx->pc = 0x305DDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x305DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305DDCu;
        // 0x305de0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x305DDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x305DE4u;
label_305de4:
    // 0x305de4: 0x0  nop
    ctx->pc = 0x305de4u;
    // NOP
label_305de8:
    // 0x305de8: 0x0  nop
    ctx->pc = 0x305de8u;
    // NOP
label_305dec:
    // 0x305dec: 0x0  nop
    ctx->pc = 0x305decu;
    // NOP
label_305df0:
    // 0x305df0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x305df0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_305df4:
    // 0x305df4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x305df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_305df8:
    // 0x305df8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x305df8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_305dfc:
    // 0x305dfc: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x305dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_305e00:
    // 0x305e00: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x305e00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_305e04:
    // 0x305e04: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x305e04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_305e08:
    // 0x305e08: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x305e08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_305e0c:
    // 0x305e0c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x305e0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_305e10:
    // 0x305e10: 0x8c42da40  lw          $v0, -0x25C0($v0)
    ctx->pc = 0x305e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957632)));
label_305e14:
    // 0x305e14: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_305e18:
    if (ctx->pc == 0x305E18u) {
        ctx->pc = 0x305E1Cu;
        goto label_305e1c;
    }
    ctx->pc = 0x305E14u;
    {
        const bool branch_taken_0x305e14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x305e14) {
            ctx->pc = 0x305E28u;
            goto label_305e28;
        }
    }
    ctx->pc = 0x305E1Cu;
label_305e1c:
    // 0x305e1c: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x305e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_305e20:
    // 0x305e20: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x305e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_305e24:
    // 0x305e24: 0xac43da40  sw          $v1, -0x25C0($v0)
    ctx->pc = 0x305e24u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957632), GPR_U32(ctx, 3));
label_305e28:
    // 0x305e28: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305e28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305e2c:
    // 0x305e2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305e2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305e30:
    // 0x305e30: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x305e30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305e34:
    // 0x305e34: 0xc068d08  jal         func_1A3420
label_305e38:
    if (ctx->pc == 0x305E38u) {
        ctx->pc = 0x305E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E34u;
        // 0x305e38: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E3Cu;
        goto label_305e3c;
    }
    ctx->pc = 0x305E34u;
    SET_GPR_U32(ctx, 31, 0x305E3Cu);
    ctx->pc = 0x305E38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E34u;
    // 0x305e38: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x305E34u, 0x305E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E3Cu;
label_305e3c:
    // 0x305e3c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_305e40:
    if (ctx->pc == 0x305E40u) {
        ctx->pc = 0x305E44u;
        goto label_305e44;
    }
    ctx->pc = 0x305E3Cu;
    {
        const bool branch_taken_0x305e3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305e3c) {
            ctx->pc = 0x305E54u;
            goto label_305e54;
        }
    }
    ctx->pc = 0x305E44u;
label_305e44:
    // 0x305e44: 0xc0c1650  jal         func_305940
label_305e48:
    if (ctx->pc == 0x305E48u) {
        ctx->pc = 0x305E4Cu;
        goto label_305e4c;
    }
    ctx->pc = 0x305E44u;
    SET_GPR_U32(ctx, 31, 0x305E4Cu);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x305E44u, 0x305E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E4Cu;
label_305e4c:
    // 0x305e4c: 0x100000de  b           . + 4 + (0xDE << 2)
label_305e50:
    if (ctx->pc == 0x305E50u) {
        ctx->pc = 0x305E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E4Cu;
        // 0x305e50: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E54u;
        goto label_305e54;
    }
    ctx->pc = 0x305E4Cu;
    {
        const bool branch_taken_0x305e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x305E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E4Cu;
        // 0x305e50: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305e4c) {
            ctx->pc = 0x3061C8u;
            goto label_3061c8;
        }
    }
    ctx->pc = 0x305E54u;
label_305e54:
    // 0x305e54: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x305e54u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
label_305e58:
    // 0x305e58: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x305e58u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_305e5c:
    // 0x305e5c: 0x267332a0  addiu       $s3, $s3, 0x32A0
    ctx->pc = 0x305e5cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12960));
label_305e60:
    // 0x305e60: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x305e60u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305e64:
    // 0x305e64: 0x260902d  daddu       $s2, $s3, $zero
    ctx->pc = 0x305e64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_305e68:
    // 0x305e68: 0x26313350  addiu       $s1, $s1, 0x3350
    ctx->pc = 0x305e68u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 13136));
label_305e6c:
    // 0x305e6c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305e70:
    // 0x305e70: 0x14843c  dsll32      $s0, $s4, 16
    ctx->pc = 0x305e70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 20) << (32 + 16));
label_305e74:
    // 0x305e74: 0x8c43e8f0  lw          $v1, -0x1710($v0)
    ctx->pc = 0x305e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_305e78:
    // 0x305e78: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x305e78u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_305e7c:
    // 0x305e7c: 0x96440000  lhu         $a0, 0x0($s2)
    ctx->pc = 0x305e7cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_305e80:
    // 0x305e80: 0x26660004  addiu       $a2, $s3, 0x4
    ctx->pc = 0x305e80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_305e84:
    // 0x305e84: 0x96450002  lhu         $a1, 0x2($s2)
    ctx->pc = 0x305e84u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
label_305e88:
    // 0x305e88: 0x703826  xor         $a3, $v1, $s0
    ctx->pc = 0x305e88u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 16));
label_305e8c:
    // 0x305e8c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305e90:
    // 0x305e90: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x305e90u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_305e94:
    // 0x305e94: 0xc0ce5bc  jal         func_3396F0
label_305e98:
    if (ctx->pc == 0x305E98u) {
        ctx->pc = 0x305E98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305E94u;
        // 0x305e98: 0xac47e8e0  sw          $a3, -0x1720($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961376), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305E9Cu;
        goto label_305e9c;
    }
    ctx->pc = 0x305E94u;
    SET_GPR_U32(ctx, 31, 0x305E9Cu);
    ctx->pc = 0x305E98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305E94u;
    // 0x305e98: 0xac47e8e0  sw          $a3, -0x1720($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961376), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x305E94u, 0x305E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305E9Cu;
label_305e9c:
    // 0x305e9c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305e9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305ea0:
    // 0x305ea0: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x305ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_305ea4:
    // 0x305ea4: 0x14500008  bne         $v0, $s0, . + 4 + (0x8 << 2)
label_305ea8:
    if (ctx->pc == 0x305EA8u) {
        ctx->pc = 0x305EACu;
        goto label_305eac;
    }
    ctx->pc = 0x305EA4u;
    {
        const bool branch_taken_0x305ea4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x305ea4) {
            ctx->pc = 0x305EC8u;
            goto label_305ec8;
        }
    }
    ctx->pc = 0x305EACu;
label_305eac:
    // 0x305eac: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x305eacu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_305eb0:
    // 0x305eb0: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x305eb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_305eb4:
    // 0x305eb4: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x305eb4u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_305eb8:
    // 0x305eb8: 0x24c63598  addiu       $a2, $a2, 0x3598
    ctx->pc = 0x305eb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13720));
label_305ebc:
    // 0x305ebc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x305ebcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305ec0:
    // 0x305ec0: 0xc0ce5bc  jal         func_3396F0
label_305ec4:
    if (ctx->pc == 0x305EC4u) {
        ctx->pc = 0x305EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EC0u;
        // 0x305ec4: 0x2444ffee  addiu       $a0, $v0, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305EC8u;
        goto label_305ec8;
    }
    ctx->pc = 0x305EC0u;
    SET_GPR_U32(ctx, 31, 0x305EC8u);
    ctx->pc = 0x305EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305EC0u;
    // 0x305ec4: 0x2444ffee  addiu       $a0, $v0, -0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x305EC0u, 0x305EC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305EC8u;
label_305ec8:
    // 0x305ec8: 0x26820001  addiu       $v0, $s4, 0x1
    ctx->pc = 0x305ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
label_305ecc:
    // 0x305ecc: 0x2a43c  dsll32      $s4, $v0, 16
    ctx->pc = 0x305eccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 16));
label_305ed0:
    // 0x305ed0: 0x2673002c  addiu       $s3, $s3, 0x2C
    ctx->pc = 0x305ed0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
label_305ed4:
    // 0x305ed4: 0x14a43f  dsra32      $s4, $s4, 16
    ctx->pc = 0x305ed4u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 16));
label_305ed8:
    // 0x305ed8: 0x2652002c  addiu       $s2, $s2, 0x2C
    ctx->pc = 0x305ed8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_305edc:
    // 0x305edc: 0x2a820004  slti        $v0, $s4, 0x4
    ctx->pc = 0x305edcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)4) ? 1 : 0);
label_305ee0:
    // 0x305ee0: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_305ee4:
    if (ctx->pc == 0x305EE4u) {
        ctx->pc = 0x305EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EE0u;
        // 0x305ee4: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305EE8u;
        goto label_305ee8;
    }
    ctx->pc = 0x305EE0u;
    {
        const bool branch_taken_0x305ee0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305EE0u;
        // 0x305ee4: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305ee0) {
            ctx->pc = 0x305E6Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_305e6c;
        }
    }
    ctx->pc = 0x305EE8u;
label_305ee8:
    // 0x305ee8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305eec:
    // 0x305eec: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x305eecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_305ef0:
    // 0x305ef0: 0x90459730  lbu         $a1, -0x68D0($v0)
    ctx->pc = 0x305ef0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305ef4:
    // 0x305ef4: 0x24633540  addiu       $v1, $v1, 0x3540
    ctx->pc = 0x305ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13632));
label_305ef8:
    // 0x305ef8: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x305ef8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_305efc:
    // 0x305efc: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x305efcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_305f00:
    // 0x305f00: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x305f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_305f04:
    // 0x305f04: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x305f04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_305f08:
    // 0x305f08: 0x24423542  addiu       $v0, $v0, 0x3542
    ctx->pc = 0x305f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13634));
label_305f0c:
    // 0x305f0c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x305f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_305f10:
    // 0x305f10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x305f10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_305f14:
    // 0x305f14: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x305f14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_305f18:
    // 0x305f18: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x305f18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_305f1c:
    // 0x305f1c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x305f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_305f20:
    // 0x305f20: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x305f20u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_305f24:
    // 0x305f24: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x305f24u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_305f28:
    // 0x305f28: 0xc0ce5bc  jal         func_3396F0
label_305f2c:
    if (ctx->pc == 0x305F2Cu) {
        ctx->pc = 0x305F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F28u;
        // 0x305f2c: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F30u;
        goto label_305f30;
    }
    ctx->pc = 0x305F28u;
    SET_GPR_U32(ctx, 31, 0x305F30u);
    ctx->pc = 0x305F2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F28u;
    // 0x305f2c: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x305F28u, 0x305F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F30u;
label_305f30:
    // 0x305f30: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305f30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305f34:
    // 0x305f34: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x305f34u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_305f38:
    // 0x305f38: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x305f38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305f3c:
    // 0x305f3c: 0xc068d08  jal         func_1A3420
label_305f40:
    if (ctx->pc == 0x305F40u) {
        ctx->pc = 0x305F40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F3Cu;
        // 0x305f40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F44u;
        goto label_305f44;
    }
    ctx->pc = 0x305F3Cu;
    SET_GPR_U32(ctx, 31, 0x305F44u);
    ctx->pc = 0x305F40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F3Cu;
    // 0x305f40: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x305F3Cu, 0x305F44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F44u;
label_305f44:
    // 0x305f44: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x305f44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_305f48:
    // 0x305f48: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305f4c:
    // 0x305f4c: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x305f4cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
label_305f50:
    // 0x305f50: 0x14400062  bnez        $v0, . + 4 + (0x62 << 2)
label_305f54:
    if (ctx->pc == 0x305F54u) {
        ctx->pc = 0x305F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F50u;
        // 0x305f54: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F58u;
        goto label_305f58;
    }
    ctx->pc = 0x305F50u;
    {
        const bool branch_taken_0x305f50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x305F54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F50u;
        // 0x305f54: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x305f50) {
            ctx->pc = 0x3060DCu;
            goto label_3060dc;
        }
    }
    ctx->pc = 0x305F58u;
label_305f58:
    // 0x305f58: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305f58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305f5c:
    // 0x305f5c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x305f5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_305f60:
    // 0x305f60: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x305f60u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305f64:
    // 0x305f64: 0xc068d08  jal         func_1A3420
label_305f68:
    if (ctx->pc == 0x305F68u) {
        ctx->pc = 0x305F68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F64u;
        // 0x305f68: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F6Cu;
        goto label_305f6c;
    }
    ctx->pc = 0x305F64u;
    SET_GPR_U32(ctx, 31, 0x305F6Cu);
    ctx->pc = 0x305F68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F64u;
    // 0x305f68: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x305F64u, 0x305F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F6Cu;
label_305f6c:
    // 0x305f6c: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_305f70:
    if (ctx->pc == 0x305F70u) {
        ctx->pc = 0x305F74u;
        goto label_305f74;
    }
    ctx->pc = 0x305F6Cu;
    {
        const bool branch_taken_0x305f6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305f6c) {
            ctx->pc = 0x305FA8u;
            goto label_305fa8;
        }
    }
    ctx->pc = 0x305F74u;
label_305f74:
    // 0x305f74: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305f78:
    // 0x305f78: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x305f78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_305f7c:
    // 0x305f7c: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x305f7cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305f80:
    // 0x305f80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x305f80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_305f84:
    // 0x305f84: 0x8064e8f0  lb          $a0, -0x1710($v1)
    ctx->pc = 0x305f84u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961392)));
label_305f88:
    // 0x305f88: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_305f8c:
    // 0x305f8c: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x305f8cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_305f90:
    // 0x305f90: 0xc0cd978  jal         func_3365E0
label_305f94:
    if (ctx->pc == 0x305F94u) {
        ctx->pc = 0x305F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305F90u;
        // 0x305f94: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305F98u;
        goto label_305f98;
    }
    ctx->pc = 0x305F90u;
    SET_GPR_U32(ctx, 31, 0x305F98u);
    ctx->pc = 0x305F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305F90u;
    // 0x305f94: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365E0u, 0x305F90u, 0x305F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305F98u;
label_305f98:
    // 0x305f98: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x305f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_305f9c:
    // 0x305f9c: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x305f9cu;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_305fa0:
    // 0x305fa0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305fa4:
    // 0x305fa4: 0xac43e8f0  sw          $v1, -0x1710($v0)
    ctx->pc = 0x305fa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961392), GPR_U32(ctx, 3));
label_305fa8:
    // 0x305fa8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305fac:
    // 0x305fac: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x305facu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_305fb0:
    // 0x305fb0: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x305fb0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305fb4:
    // 0x305fb4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_305fb8:
    // 0x305fb8: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x305fb8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_305fbc:
    // 0x305fbc: 0xc0cda84  jal         func_336A10
label_305fc0:
    if (ctx->pc == 0x305FC0u) {
        ctx->pc = 0x305FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x305FBCu;
        // 0x305fc0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x305FC4u;
        goto label_305fc4;
    }
    ctx->pc = 0x305FBCu;
    SET_GPR_U32(ctx, 31, 0x305FC4u);
    ctx->pc = 0x305FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x305FBCu;
    // 0x305fc0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x305FBCu, 0x305FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FC4u;
label_305fc4:
    // 0x305fc4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_305fc8:
    if (ctx->pc == 0x305FC8u) {
        ctx->pc = 0x305FCCu;
        goto label_305fcc;
    }
    ctx->pc = 0x305FC4u;
    {
        const bool branch_taken_0x305fc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x305fc4) {
            ctx->pc = 0x305FECu;
            goto label_305fec;
        }
    }
    ctx->pc = 0x305FCCu;
label_305fcc:
    // 0x305fcc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x305fccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_305fd0:
    // 0x305fd0: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x305fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_305fd4:
    // 0x305fd4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_305fd8:
    if (ctx->pc == 0x305FD8u) {
        ctx->pc = 0x305FDCu;
        goto label_305fdc;
    }
    ctx->pc = 0x305FD4u;
    {
        const bool branch_taken_0x305fd4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x305fd4) {
            ctx->pc = 0x305FECu;
            goto label_305fec;
        }
    }
    ctx->pc = 0x305FDCu;
label_305fdc:
    // 0x305fdc: 0xc0c1650  jal         func_305940
label_305fe0:
    if (ctx->pc == 0x305FE0u) {
        ctx->pc = 0x305FE4u;
        goto label_305fe4;
    }
    ctx->pc = 0x305FDCu;
    SET_GPR_U32(ctx, 31, 0x305FE4u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x305FDCu, 0x305FE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x305FE4u;
label_305fe4:
    // 0x305fe4: 0x10000077  b           . + 4 + (0x77 << 2)
label_305fe8:
    if (ctx->pc == 0x305FE8u) {
        ctx->pc = 0x305FECu;
        goto label_305fec;
    }
    ctx->pc = 0x305FE4u;
    {
        const bool branch_taken_0x305fe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x305fe4) {
            ctx->pc = 0x3061C4u;
            goto label_3061c4;
        }
    }
    ctx->pc = 0x305FECu;
label_305fec:
    // 0x305fec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x305fecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_305ff0:
    // 0x305ff0: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x305ff0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_305ff4:
    // 0x305ff4: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x305ff4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_305ff8:
    // 0x305ff8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x305ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_305ffc:
    // 0x305ffc: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x305ffcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_306000:
    // 0x306000: 0xc0cda84  jal         func_336A10
label_306004:
    if (ctx->pc == 0x306004u) {
        ctx->pc = 0x306004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306000u;
        // 0x306004: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306008u;
        goto label_306008;
    }
    ctx->pc = 0x306000u;
    SET_GPR_U32(ctx, 31, 0x306008u);
    ctx->pc = 0x306004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306000u;
    // 0x306004: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x306000u, 0x306008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306008u;
label_306008:
    // 0x306008: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_30600c:
    if (ctx->pc == 0x30600Cu) {
        ctx->pc = 0x306010u;
        goto label_306010;
    }
    ctx->pc = 0x306008u;
    {
        const bool branch_taken_0x306008 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306008) {
            ctx->pc = 0x30602Cu;
            goto label_30602c;
        }
    }
    ctx->pc = 0x306010u;
label_306010:
    // 0x306010: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x306010u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_306014:
    // 0x306014: 0xc0538fc  jal         func_14E3F0
label_306018:
    if (ctx->pc == 0x306018u) {
        ctx->pc = 0x306018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306014u;
        // 0x306018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30601Cu;
        goto label_30601c;
    }
    ctx->pc = 0x306014u;
    SET_GPR_U32(ctx, 31, 0x30601Cu);
    ctx->pc = 0x306018u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306014u;
    // 0x306018: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306014u, 0x30601Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30601Cu;
label_30601c:
    // 0x30601c: 0xc0c1650  jal         func_305940
label_306020:
    if (ctx->pc == 0x306020u) {
        ctx->pc = 0x306024u;
        goto label_306024;
    }
    ctx->pc = 0x30601Cu;
    SET_GPR_U32(ctx, 31, 0x306024u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x30601Cu, 0x306024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306024u;
label_306024:
    // 0x306024: 0x10000067  b           . + 4 + (0x67 << 2)
label_306028:
    if (ctx->pc == 0x306028u) {
        ctx->pc = 0x30602Cu;
        goto label_30602c;
    }
    ctx->pc = 0x306024u;
    {
        const bool branch_taken_0x306024 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306024) {
            ctx->pc = 0x3061C4u;
            goto label_3061c4;
        }
    }
    ctx->pc = 0x30602Cu;
label_30602c:
    // 0x30602c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30602cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306030:
    // 0x306030: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x306030u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_306034:
    // 0x306034: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x306034u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306038:
    // 0x306038: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30603c:
    // 0x30603c: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x30603cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_306040:
    // 0x306040: 0xc0cda84  jal         func_336A10
label_306044:
    if (ctx->pc == 0x306044u) {
        ctx->pc = 0x306044u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306040u;
        // 0x306044: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306048u;
        goto label_306048;
    }
    ctx->pc = 0x306040u;
    SET_GPR_U32(ctx, 31, 0x306048u);
    ctx->pc = 0x306044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306040u;
    // 0x306044: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x306040u, 0x306048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306048u;
label_306048:
    // 0x306048: 0x1040005e  beqz        $v0, . + 4 + (0x5E << 2)
label_30604c:
    if (ctx->pc == 0x30604Cu) {
        ctx->pc = 0x306050u;
        goto label_306050;
    }
    ctx->pc = 0x306048u;
    {
        const bool branch_taken_0x306048 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306048) {
            ctx->pc = 0x3061C4u;
            goto label_3061c4;
        }
    }
    ctx->pc = 0x306050u;
label_306050:
    // 0x306050: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x306050u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_306054:
    // 0x306054: 0xc0538fc  jal         func_14E3F0
label_306058:
    if (ctx->pc == 0x306058u) {
        ctx->pc = 0x306058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306054u;
        // 0x306058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30605Cu;
        goto label_30605c;
    }
    ctx->pc = 0x306054u;
    SET_GPR_U32(ctx, 31, 0x30605Cu);
    ctx->pc = 0x306058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306054u;
    // 0x306058: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306054u, 0x30605Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30605Cu;
label_30605c:
    // 0x30605c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x30605cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306060:
    // 0x306060: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x306060u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_306064:
    // 0x306064: 0x8c65e8f0  lw          $a1, -0x1710($v1)
    ctx->pc = 0x306064u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961392)));
label_306068:
    // 0x306068: 0x50a40017  beql        $a1, $a0, . + 4 + (0x17 << 2)
label_30606c:
    if (ctx->pc == 0x30606Cu) {
        ctx->pc = 0x30606Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306068u;
        // 0x30606c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306070u;
        goto label_306070;
    }
    ctx->pc = 0x306068u;
    {
        const bool branch_taken_0x306068 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x306068) {
            ctx->pc = 0x30606Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306068u;
            // 0x30606c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3060C8u;
            goto label_3060c8;
        }
    }
    ctx->pc = 0x306070u;
label_306070:
    // 0x306070: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x306070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306074:
    // 0x306074: 0x10a3000b  beq         $a1, $v1, . + 4 + (0xB << 2)
label_306078:
    if (ctx->pc == 0x306078u) {
        ctx->pc = 0x30607Cu;
        goto label_30607c;
    }
    ctx->pc = 0x306074u;
    {
        const bool branch_taken_0x306074 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x306074) {
            ctx->pc = 0x3060A4u;
            goto label_3060a4;
        }
    }
    ctx->pc = 0x30607Cu;
label_30607c:
    // 0x30607c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x30607cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306080:
    // 0x306080: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_306084:
    if (ctx->pc == 0x306084u) {
        ctx->pc = 0x306088u;
        goto label_306088;
    }
    ctx->pc = 0x306080u;
    {
        const bool branch_taken_0x306080 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x306080) {
            ctx->pc = 0x306090u;
            goto label_306090;
        }
    }
    ctx->pc = 0x306088u;
label_306088:
    // 0x306088: 0x1000004e  b           . + 4 + (0x4E << 2)
label_30608c:
    if (ctx->pc == 0x30608Cu) {
        ctx->pc = 0x306090u;
        goto label_306090;
    }
    ctx->pc = 0x306088u;
    {
        const bool branch_taken_0x306088 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306088) {
            ctx->pc = 0x3061C4u;
            goto label_3061c4;
        }
    }
    ctx->pc = 0x306090u;
label_306090:
    // 0x306090: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x306090u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_306094:
    // 0x306094: 0xc0c1678  jal         func_3059E0
label_306098:
    if (ctx->pc == 0x306098u) {
        ctx->pc = 0x306098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306094u;
        // 0x306098: 0x24847110  addiu       $a0, $a0, 0x7110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30609Cu;
        goto label_30609c;
    }
    ctx->pc = 0x306094u;
    SET_GPR_U32(ctx, 31, 0x30609Cu);
    ctx->pc = 0x306098u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306094u;
    // 0x306098: 0x24847110  addiu       $a0, $a0, 0x7110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x306094u, 0x30609Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30609Cu;
label_30609c:
    // 0x30609c: 0x10000049  b           . + 4 + (0x49 << 2)
label_3060a0:
    if (ctx->pc == 0x3060A0u) {
        ctx->pc = 0x3060A4u;
        goto label_3060a4;
    }
    ctx->pc = 0x30609Cu;
    {
        const bool branch_taken_0x30609c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x30609c) {
            ctx->pc = 0x3061C4u;
            goto label_3061c4;
        }
    }
    ctx->pc = 0x3060A4u;
label_3060a4:
    // 0x3060a4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3060a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3060a8:
    // 0x3060a8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3060a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3060ac:
    // 0x3060ac: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3060acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_3060b0:
    // 0x3060b0: 0xac60e808  sw          $zero, -0x17F8($v1)
    ctx->pc = 0x3060b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 0));
label_3060b4:
    // 0x3060b4: 0x24843300  addiu       $a0, $a0, 0x3300
    ctx->pc = 0x3060b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13056));
label_3060b8:
    // 0x3060b8: 0xc0c1678  jal         func_3059E0
label_3060bc:
    if (ctx->pc == 0x3060BCu) {
        ctx->pc = 0x3060BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060B8u;
        // 0x3060bc: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060C0u;
        goto label_3060c0;
    }
    ctx->pc = 0x3060B8u;
    SET_GPR_U32(ctx, 31, 0x3060C0u);
    ctx->pc = 0x3060BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060B8u;
    // 0x3060bc: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3060B8u, 0x3060C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060C0u;
label_3060c0:
    // 0x3060c0: 0x10000040  b           . + 4 + (0x40 << 2)
label_3060c4:
    if (ctx->pc == 0x3060C4u) {
        ctx->pc = 0x3060C8u;
        goto label_3060c8;
    }
    ctx->pc = 0x3060C0u;
    {
        const bool branch_taken_0x3060c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3060c0) {
            ctx->pc = 0x3061C4u;
            goto label_3061c4;
        }
    }
    ctx->pc = 0x3060C8u;
label_3060c8:
    // 0x3060c8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3060c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3060cc:
    // 0x3060cc: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x3060ccu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_3060d0:
    // 0x3060d0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3060d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3060d4:
    // 0x3060d4: 0x1000003b  b           . + 4 + (0x3B << 2)
label_3060d8:
    if (ctx->pc == 0x3060D8u) {
        ctx->pc = 0x3060D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060D4u;
        // 0x3060d8: 0xac60e8e8  sw          $zero, -0x1718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060DCu;
        goto label_3060dc;
    }
    ctx->pc = 0x3060D4u;
    {
        const bool branch_taken_0x3060d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3060D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060D4u;
        // 0x3060d8: 0xac60e8e8  sw          $zero, -0x1718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3060d4) {
            ctx->pc = 0x3061C4u;
            goto label_3061c4;
        }
    }
    ctx->pc = 0x3060DCu;
label_3060dc:
    // 0x3060dc: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x3060dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_3060e0:
    // 0x3060e0: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3060e0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3060e4:
    // 0x3060e4: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x3060e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
label_3060e8:
    // 0x3060e8: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_3060ec:
    if (ctx->pc == 0x3060ECu) {
        ctx->pc = 0x3060F0u;
        goto label_3060f0;
    }
    ctx->pc = 0x3060E8u;
    {
        const bool branch_taken_0x3060e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3060e8) {
            ctx->pc = 0x306118u;
            goto label_306118;
        }
    }
    ctx->pc = 0x3060F0u;
label_3060f0:
    // 0x3060f0: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x3060f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
label_3060f4:
    // 0x3060f4: 0xc0538fc  jal         func_14E3F0
label_3060f8:
    if (ctx->pc == 0x3060F8u) {
        ctx->pc = 0x3060F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3060F4u;
        // 0x3060f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3060FCu;
        goto label_3060fc;
    }
    ctx->pc = 0x3060F4u;
    SET_GPR_U32(ctx, 31, 0x3060FCu);
    ctx->pc = 0x3060F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3060F4u;
    // 0x3060f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3060F4u, 0x3060FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3060FCu;
label_3060fc:
    // 0x3060fc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3060fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306100:
    // 0x306100: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306100u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306104:
    // 0x306104: 0x8c63e8e8  lw          $v1, -0x1718($v1)
    ctx->pc = 0x306104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961384)));
label_306108:
    // 0x306108: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x306108u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_30610c:
    // 0x30610c: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x30610cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_306110:
    // 0x306110: 0x1000002a  b           . + 4 + (0x2A << 2)
label_306114:
    if (ctx->pc == 0x306114u) {
        ctx->pc = 0x306114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306110u;
        // 0x306114: 0xac43e8e8  sw          $v1, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306118u;
        goto label_306118;
    }
    ctx->pc = 0x306110u;
    {
        const bool branch_taken_0x306110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306110u;
        // 0x306114: 0xac43e8e8  sw          $v1, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306110) {
            ctx->pc = 0x3061BCu;
            goto label_3061bc;
        }
    }
    ctx->pc = 0x306118u;
label_306118:
    // 0x306118: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306118u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_30611c:
    // 0x30611c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x30611cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_306120:
    // 0x306120: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x306120u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306124:
    // 0x306124: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306128:
    // 0x306128: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x306128u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_30612c:
    // 0x30612c: 0xc0cda84  jal         func_336A10
label_306130:
    if (ctx->pc == 0x306130u) {
        ctx->pc = 0x306130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30612Cu;
        // 0x306130: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306134u;
        goto label_306134;
    }
    ctx->pc = 0x30612Cu;
    SET_GPR_U32(ctx, 31, 0x306134u);
    ctx->pc = 0x306130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30612Cu;
    // 0x306130: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x30612Cu, 0x306134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306134u;
label_306134:
    // 0x306134: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_306138:
    if (ctx->pc == 0x306138u) {
        ctx->pc = 0x30613Cu;
        goto label_30613c;
    }
    ctx->pc = 0x306134u;
    {
        const bool branch_taken_0x306134 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306134) {
            ctx->pc = 0x306184u;
            goto label_306184;
        }
    }
    ctx->pc = 0x30613Cu;
label_30613c:
    // 0x30613c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x30613cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306140:
    // 0x306140: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306144:
    // 0x306144: 0x8c42e8e8  lw          $v0, -0x1718($v0)
    ctx->pc = 0x306144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
label_306148:
    // 0x306148: 0x54430009  bnel        $v0, $v1, . + 4 + (0x9 << 2)
label_30614c:
    if (ctx->pc == 0x30614Cu) {
        ctx->pc = 0x30614Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306148u;
        // 0x30614c: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306150u;
        goto label_306150;
    }
    ctx->pc = 0x306148u;
    {
        const bool branch_taken_0x306148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306148) {
            ctx->pc = 0x30614Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306148u;
            // 0x30614c: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306170u;
            goto label_306170;
        }
    }
    ctx->pc = 0x306150u;
label_306150:
    // 0x306150: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x306150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_306154:
    // 0x306154: 0xc0538fc  jal         func_14E3F0
label_306158:
    if (ctx->pc == 0x306158u) {
        ctx->pc = 0x306158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306154u;
        // 0x306158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30615Cu;
        goto label_30615c;
    }
    ctx->pc = 0x306154u;
    SET_GPR_U32(ctx, 31, 0x30615Cu);
    ctx->pc = 0x306158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306154u;
    // 0x306158: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306154u, 0x30615Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30615Cu;
label_30615c:
    // 0x30615c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x30615cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_306160:
    // 0x306160: 0xc0c1678  jal         func_3059E0
label_306164:
    if (ctx->pc == 0x306164u) {
        ctx->pc = 0x306164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306160u;
        // 0x306164: 0x24846d50  addiu       $a0, $a0, 0x6D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306168u;
        goto label_306168;
    }
    ctx->pc = 0x306160u;
    SET_GPR_U32(ctx, 31, 0x306168u);
    ctx->pc = 0x306164u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306160u;
    // 0x306164: 0x24846d50  addiu       $a0, $a0, 0x6D50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x306160u, 0x306168u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306168u;
label_306168:
    // 0x306168: 0x10000014  b           . + 4 + (0x14 << 2)
label_30616c:
    if (ctx->pc == 0x30616Cu) {
        ctx->pc = 0x306170u;
        goto label_306170;
    }
    ctx->pc = 0x306168u;
    {
        const bool branch_taken_0x306168 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306168) {
            ctx->pc = 0x3061BCu;
            goto label_3061bc;
        }
    }
    ctx->pc = 0x306170u;
label_306170:
    // 0x306170: 0xc0538fc  jal         func_14E3F0
label_306174:
    if (ctx->pc == 0x306174u) {
        ctx->pc = 0x306174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306170u;
        // 0x306174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306178u;
        goto label_306178;
    }
    ctx->pc = 0x306170u;
    SET_GPR_U32(ctx, 31, 0x306178u);
    ctx->pc = 0x306174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306170u;
    // 0x306174: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306170u, 0x306178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306178u;
label_306178:
    // 0x306178: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_30617c:
    // 0x30617c: 0x1000000f  b           . + 4 + (0xF << 2)
label_306180:
    if (ctx->pc == 0x306180u) {
        ctx->pc = 0x306180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30617Cu;
        // 0x306180: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306184u;
        goto label_306184;
    }
    ctx->pc = 0x30617Cu;
    {
        const bool branch_taken_0x30617c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30617Cu;
        // 0x306180: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30617c) {
            ctx->pc = 0x3061BCu;
            goto label_3061bc;
        }
    }
    ctx->pc = 0x306184u;
label_306184:
    // 0x306184: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306184u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306188:
    // 0x306188: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x306188u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_30618c:
    // 0x30618c: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x30618cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306190:
    // 0x306190: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306194:
    // 0x306194: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x306194u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_306198:
    // 0x306198: 0xc0cda84  jal         func_336A10
label_30619c:
    if (ctx->pc == 0x30619Cu) {
        ctx->pc = 0x30619Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306198u;
        // 0x30619c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061A0u;
        goto label_3061a0;
    }
    ctx->pc = 0x306198u;
    SET_GPR_U32(ctx, 31, 0x3061A0u);
    ctx->pc = 0x30619Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306198u;
    // 0x30619c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x306198u, 0x3061A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061A0u;
label_3061a0:
    // 0x3061a0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_3061a4:
    if (ctx->pc == 0x3061A4u) {
        ctx->pc = 0x3061A8u;
        goto label_3061a8;
    }
    ctx->pc = 0x3061A0u;
    {
        const bool branch_taken_0x3061a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3061a0) {
            ctx->pc = 0x3061BCu;
            goto label_3061bc;
        }
    }
    ctx->pc = 0x3061A8u;
label_3061a8:
    // 0x3061a8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x3061a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_3061ac:
    // 0x3061ac: 0xc0538fc  jal         func_14E3F0
label_3061b0:
    if (ctx->pc == 0x3061B0u) {
        ctx->pc = 0x3061B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061ACu;
        // 0x3061b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061B4u;
        goto label_3061b4;
    }
    ctx->pc = 0x3061ACu;
    SET_GPR_U32(ctx, 31, 0x3061B4u);
    ctx->pc = 0x3061B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3061ACu;
    // 0x3061b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3061ACu, 0x3061B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061B4u;
label_3061b4:
    // 0x3061b4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3061b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3061b8:
    // 0x3061b8: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x3061b8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_3061bc:
    // 0x3061bc: 0xc0ce7f4  jal         func_339FD0
label_3061c0:
    if (ctx->pc == 0x3061C0u) {
        ctx->pc = 0x3061C4u;
        goto label_3061c4;
    }
    ctx->pc = 0x3061BCu;
    SET_GPR_U32(ctx, 31, 0x3061C4u);
    ctx->pc = 0x339FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339FD0u, 0x3061BCu, 0x3061C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3061C4u;
label_3061c4:
    // 0x3061c4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x3061c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_3061c8:
    // 0x3061c8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x3061c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3061cc:
    // 0x3061cc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3061ccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3061d0:
    // 0x3061d0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3061d0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3061d4:
    // 0x3061d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3061d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3061d8:
    // 0x3061d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3061d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3061dc:
    // 0x3061dc: 0x3e00008  jr          $ra
label_3061e0:
    if (ctx->pc == 0x3061E0u) {
        ctx->pc = 0x3061E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061DCu;
        // 0x3061e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3061E4u;
        goto label_3061e4;
    }
    ctx->pc = 0x3061DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3061E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3061DCu;
        // 0x3061e0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3061DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3061E4u;
label_3061e4:
    // 0x3061e4: 0x0  nop
    ctx->pc = 0x3061e4u;
    // NOP
label_3061e8:
    // 0x3061e8: 0x0  nop
    ctx->pc = 0x3061e8u;
    // NOP
label_3061ec:
    // 0x3061ec: 0x0  nop
    ctx->pc = 0x3061ecu;
    // NOP
label_3061f0:
    // 0x3061f0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3061f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_3061f4:
    // 0x3061f4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3061f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_3061f8:
    // 0x3061f8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3061f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3061fc:
    // 0x3061fc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3061fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_306200:
    // 0x306200: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x306200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_306204:
    // 0x306204: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x306204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_306208:
    // 0x306208: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x306208u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30620c:
    // 0x30620c: 0x8c42da40  lw          $v0, -0x25C0($v0)
    ctx->pc = 0x30620cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957632)));
label_306210:
    // 0x306210: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_306214:
    if (ctx->pc == 0x306214u) {
        ctx->pc = 0x306218u;
        goto label_306218;
    }
    ctx->pc = 0x306210u;
    {
        const bool branch_taken_0x306210 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x306210) {
            ctx->pc = 0x306224u;
            goto label_306224;
        }
    }
    ctx->pc = 0x306218u;
label_306218:
    // 0x306218: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x306218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_30621c:
    // 0x30621c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30621cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_306220:
    // 0x306220: 0xac43da40  sw          $v1, -0x25C0($v0)
    ctx->pc = 0x306220u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957632), GPR_U32(ctx, 3));
label_306224:
    // 0x306224: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306224u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306228:
    // 0x306228: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306228u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30622c:
    // 0x30622c: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x30622cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306230:
    // 0x306230: 0xc068d08  jal         func_1A3420
label_306234:
    if (ctx->pc == 0x306234u) {
        ctx->pc = 0x306234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306230u;
        // 0x306234: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306238u;
        goto label_306238;
    }
    ctx->pc = 0x306230u;
    SET_GPR_U32(ctx, 31, 0x306238u);
    ctx->pc = 0x306234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306230u;
    // 0x306234: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x306230u, 0x306238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306238u;
label_306238:
    // 0x306238: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_30623c:
    if (ctx->pc == 0x30623Cu) {
        ctx->pc = 0x306240u;
        goto label_306240;
    }
    ctx->pc = 0x306238u;
    {
        const bool branch_taken_0x306238 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306238) {
            ctx->pc = 0x30625Cu;
            goto label_30625c;
        }
    }
    ctx->pc = 0x306240u;
label_306240:
    // 0x306240: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x306240u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306244:
    // 0x306244: 0xc0c06b8  jal         func_301AE0
label_306248:
    if (ctx->pc == 0x306248u) {
        ctx->pc = 0x306248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306244u;
        // 0x306248: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30624Cu;
        goto label_30624c;
    }
    ctx->pc = 0x306244u;
    SET_GPR_U32(ctx, 31, 0x30624Cu);
    ctx->pc = 0x306248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306244u;
    // 0x306248: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x306244u, 0x30624Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30624Cu;
label_30624c:
    // 0x30624c: 0xc0c1650  jal         func_305940
label_306250:
    if (ctx->pc == 0x306250u) {
        ctx->pc = 0x306254u;
        goto label_306254;
    }
    ctx->pc = 0x30624Cu;
    SET_GPR_U32(ctx, 31, 0x306254u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x30624Cu, 0x306254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306254u;
label_306254:
    // 0x306254: 0x1000011c  b           . + 4 + (0x11C << 2)
label_306258:
    if (ctx->pc == 0x306258u) {
        ctx->pc = 0x306258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306254u;
        // 0x306258: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30625Cu;
        goto label_30625c;
    }
    ctx->pc = 0x306254u;
    {
        const bool branch_taken_0x306254 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306258u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306254u;
        // 0x306258: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306254) {
            ctx->pc = 0x3066C8u;
            goto label_3066c8;
        }
    }
    ctx->pc = 0x30625Cu;
label_30625c:
    // 0x30625c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30625cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306260:
    // 0x306260: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306260u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306264:
    // 0x306264: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x306264u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306268:
    // 0x306268: 0xc068d08  jal         func_1A3420
label_30626c:
    if (ctx->pc == 0x30626Cu) {
        ctx->pc = 0x30626Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306268u;
        // 0x30626c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306270u;
        goto label_306270;
    }
    ctx->pc = 0x306268u;
    SET_GPR_U32(ctx, 31, 0x306270u);
    ctx->pc = 0x30626Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306268u;
    // 0x30626c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x306268u, 0x306270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306270u;
label_306270:
    // 0x306270: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306270u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306274:
    // 0x306274: 0x22c3c  dsll32      $a1, $v0, 16
    ctx->pc = 0x306274u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 16));
label_306278:
    // 0x306278: 0x9064e818  lbu         $a0, -0x17E8($v1)
    ctx->pc = 0x306278u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961176)));
label_30627c:
    // 0x30627c: 0x14800081  bnez        $a0, . + 4 + (0x81 << 2)
label_306280:
    if (ctx->pc == 0x306280u) {
        ctx->pc = 0x306280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30627Cu;
        // 0x306280: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306284u;
        goto label_306284;
    }
    ctx->pc = 0x30627Cu;
    {
        const bool branch_taken_0x30627c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x306280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30627Cu;
        // 0x306280: 0x52c3f  dsra32      $a1, $a1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30627c) {
            ctx->pc = 0x306484u;
            goto label_306484;
        }
    }
    ctx->pc = 0x306284u;
label_306284:
    // 0x306284: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306284u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306288:
    // 0x306288: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x306288u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30628c:
    // 0x30628c: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x30628cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306290:
    // 0x306290: 0xc068d08  jal         func_1A3420
label_306294:
    if (ctx->pc == 0x306294u) {
        ctx->pc = 0x306294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306290u;
        // 0x306294: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306298u;
        goto label_306298;
    }
    ctx->pc = 0x306290u;
    SET_GPR_U32(ctx, 31, 0x306298u);
    ctx->pc = 0x306294u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306290u;
    // 0x306294: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x306290u, 0x306298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306298u;
label_306298:
    // 0x306298: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_30629c:
    if (ctx->pc == 0x30629Cu) {
        ctx->pc = 0x3062A0u;
        goto label_3062a0;
    }
    ctx->pc = 0x306298u;
    {
        const bool branch_taken_0x306298 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306298) {
            ctx->pc = 0x3062D4u;
            goto label_3062d4;
        }
    }
    ctx->pc = 0x3062A0u;
label_3062a0:
    // 0x3062a0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3062a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_3062a4:
    // 0x3062a4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3062a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3062a8:
    // 0x3062a8: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x3062a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_3062ac:
    // 0x3062ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x3062acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_3062b0:
    // 0x3062b0: 0x8064e8f0  lb          $a0, -0x1710($v1)
    ctx->pc = 0x3062b0u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961392)));
label_3062b4:
    // 0x3062b4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3062b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3062b8:
    // 0x3062b8: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x3062b8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_3062bc:
    // 0x3062bc: 0xc0cd978  jal         func_3365E0
label_3062c0:
    if (ctx->pc == 0x3062C0u) {
        ctx->pc = 0x3062C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062BCu;
        // 0x3062c0: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3062C4u;
        goto label_3062c4;
    }
    ctx->pc = 0x3062BCu;
    SET_GPR_U32(ctx, 31, 0x3062C4u);
    ctx->pc = 0x3062C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3062BCu;
    // 0x3062c0: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365E0u, 0x3062BCu, 0x3062C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3062C4u;
label_3062c4:
    // 0x3062c4: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3062c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_3062c8:
    // 0x3062c8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3062c8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3062cc:
    // 0x3062cc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3062ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3062d0:
    // 0x3062d0: 0xac43e8f0  sw          $v1, -0x1710($v0)
    ctx->pc = 0x3062d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961392), GPR_U32(ctx, 3));
label_3062d4:
    // 0x3062d4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3062d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_3062d8:
    // 0x3062d8: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x3062d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_3062dc:
    // 0x3062dc: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x3062dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_3062e0:
    // 0x3062e0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3062e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3062e4:
    // 0x3062e4: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3062e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3062e8:
    // 0x3062e8: 0xc0cda84  jal         func_336A10
label_3062ec:
    if (ctx->pc == 0x3062ECu) {
        ctx->pc = 0x3062ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3062E8u;
        // 0x3062ec: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3062F0u;
        goto label_3062f0;
    }
    ctx->pc = 0x3062E8u;
    SET_GPR_U32(ctx, 31, 0x3062F0u);
    ctx->pc = 0x3062ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3062E8u;
    // 0x3062ec: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x3062E8u, 0x3062F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3062F0u;
label_3062f0:
    // 0x3062f0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3062f4:
    if (ctx->pc == 0x3062F4u) {
        ctx->pc = 0x3062F8u;
        goto label_3062f8;
    }
    ctx->pc = 0x3062F0u;
    {
        const bool branch_taken_0x3062f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3062f0) {
            ctx->pc = 0x306318u;
            goto label_306318;
        }
    }
    ctx->pc = 0x3062F8u;
label_3062f8:
    // 0x3062f8: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3062f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3062fc:
    // 0x3062fc: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x3062fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_306300:
    // 0x306300: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_306304:
    if (ctx->pc == 0x306304u) {
        ctx->pc = 0x306308u;
        goto label_306308;
    }
    ctx->pc = 0x306300u;
    {
        const bool branch_taken_0x306300 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306300) {
            ctx->pc = 0x306318u;
            goto label_306318;
        }
    }
    ctx->pc = 0x306308u;
label_306308:
    // 0x306308: 0xc0c1650  jal         func_305940
label_30630c:
    if (ctx->pc == 0x30630Cu) {
        ctx->pc = 0x306310u;
        goto label_306310;
    }
    ctx->pc = 0x306308u;
    SET_GPR_U32(ctx, 31, 0x306310u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x306308u, 0x306310u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306310u;
label_306310:
    // 0x306310: 0x100000ca  b           . + 4 + (0xCA << 2)
label_306314:
    if (ctx->pc == 0x306314u) {
        ctx->pc = 0x306318u;
        goto label_306318;
    }
    ctx->pc = 0x306310u;
    {
        const bool branch_taken_0x306310 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306310) {
            ctx->pc = 0x30663Cu;
            goto label_30663c;
        }
    }
    ctx->pc = 0x306318u;
label_306318:
    // 0x306318: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306318u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_30631c:
    // 0x30631c: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x30631cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_306320:
    // 0x306320: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x306320u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306324:
    // 0x306324: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306324u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306328:
    // 0x306328: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x306328u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_30632c:
    // 0x30632c: 0xc0cda84  jal         func_336A10
label_306330:
    if (ctx->pc == 0x306330u) {
        ctx->pc = 0x306330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30632Cu;
        // 0x306330: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306334u;
        goto label_306334;
    }
    ctx->pc = 0x30632Cu;
    SET_GPR_U32(ctx, 31, 0x306334u);
    ctx->pc = 0x306330u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30632Cu;
    // 0x306330: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x30632Cu, 0x306334u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306334u;
label_306334:
    // 0x306334: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_306338:
    if (ctx->pc == 0x306338u) {
        ctx->pc = 0x30633Cu;
        goto label_30633c;
    }
    ctx->pc = 0x306334u;
    {
        const bool branch_taken_0x306334 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306334) {
            ctx->pc = 0x306358u;
            goto label_306358;
        }
    }
    ctx->pc = 0x30633Cu;
label_30633c:
    // 0x30633c: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x30633cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_306340:
    // 0x306340: 0xc0538fc  jal         func_14E3F0
label_306344:
    if (ctx->pc == 0x306344u) {
        ctx->pc = 0x306344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306340u;
        // 0x306344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306348u;
        goto label_306348;
    }
    ctx->pc = 0x306340u;
    SET_GPR_U32(ctx, 31, 0x306348u);
    ctx->pc = 0x306344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306340u;
    // 0x306344: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306340u, 0x306348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306348u;
label_306348:
    // 0x306348: 0xc0c1650  jal         func_305940
label_30634c:
    if (ctx->pc == 0x30634Cu) {
        ctx->pc = 0x306350u;
        goto label_306350;
    }
    ctx->pc = 0x306348u;
    SET_GPR_U32(ctx, 31, 0x306350u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x306348u, 0x306350u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306350u;
label_306350:
    // 0x306350: 0x100000ba  b           . + 4 + (0xBA << 2)
label_306354:
    if (ctx->pc == 0x306354u) {
        ctx->pc = 0x306358u;
        goto label_306358;
    }
    ctx->pc = 0x306350u;
    {
        const bool branch_taken_0x306350 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306350) {
            ctx->pc = 0x30663Cu;
            goto label_30663c;
        }
    }
    ctx->pc = 0x306358u;
label_306358:
    // 0x306358: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_30635c:
    // 0x30635c: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x30635cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_306360:
    // 0x306360: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x306360u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306364:
    // 0x306364: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306368:
    // 0x306368: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x306368u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_30636c:
    // 0x30636c: 0xc0cda84  jal         func_336A10
label_306370:
    if (ctx->pc == 0x306370u) {
        ctx->pc = 0x306370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30636Cu;
        // 0x306370: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306374u;
        goto label_306374;
    }
    ctx->pc = 0x30636Cu;
    SET_GPR_U32(ctx, 31, 0x306374u);
    ctx->pc = 0x306370u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30636Cu;
    // 0x306370: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x30636Cu, 0x306374u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306374u;
label_306374:
    // 0x306374: 0x104000b1  beqz        $v0, . + 4 + (0xB1 << 2)
label_306378:
    if (ctx->pc == 0x306378u) {
        ctx->pc = 0x30637Cu;
        goto label_30637c;
    }
    ctx->pc = 0x306374u;
    {
        const bool branch_taken_0x306374 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306374) {
            ctx->pc = 0x30663Cu;
            goto label_30663c;
        }
    }
    ctx->pc = 0x30637Cu;
label_30637c:
    // 0x30637c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x30637cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_306380:
    // 0x306380: 0xc0538fc  jal         func_14E3F0
label_306384:
    if (ctx->pc == 0x306384u) {
        ctx->pc = 0x306384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306380u;
        // 0x306384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306388u;
        goto label_306388;
    }
    ctx->pc = 0x306380u;
    SET_GPR_U32(ctx, 31, 0x306388u);
    ctx->pc = 0x306384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306380u;
    // 0x306384: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306380u, 0x306388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306388u;
label_306388:
    // 0x306388: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306388u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_30638c:
    // 0x30638c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x30638cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_306390:
    // 0x306390: 0x8c44e8f0  lw          $a0, -0x1710($v0)
    ctx->pc = 0x306390u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_306394:
    // 0x306394: 0x50830036  beql        $a0, $v1, . + 4 + (0x36 << 2)
label_306398:
    if (ctx->pc == 0x306398u) {
        ctx->pc = 0x306398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306394u;
        // 0x306398: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30639Cu;
        goto label_30639c;
    }
    ctx->pc = 0x306394u;
    {
        const bool branch_taken_0x306394 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x306394) {
            ctx->pc = 0x306398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306394u;
            // 0x306398: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306470u;
            goto label_306470;
        }
    }
    ctx->pc = 0x30639Cu;
label_30639c:
    // 0x30639c: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x30639cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3063a0:
    // 0x3063a0: 0x10820032  beq         $a0, $v0, . + 4 + (0x32 << 2)
label_3063a4:
    if (ctx->pc == 0x3063A4u) {
        ctx->pc = 0x3063A8u;
        goto label_3063a8;
    }
    ctx->pc = 0x3063A0u;
    {
        const bool branch_taken_0x3063a0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3063a0) {
            ctx->pc = 0x30646Cu;
            goto label_30646c;
        }
    }
    ctx->pc = 0x3063A8u;
label_3063a8:
    // 0x3063a8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x3063a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3063ac:
    // 0x3063ac: 0x10820017  beq         $a0, $v0, . + 4 + (0x17 << 2)
label_3063b0:
    if (ctx->pc == 0x3063B0u) {
        ctx->pc = 0x3063B4u;
        goto label_3063b4;
    }
    ctx->pc = 0x3063ACu;
    {
        const bool branch_taken_0x3063ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3063ac) {
            ctx->pc = 0x30640Cu;
            goto label_30640c;
        }
    }
    ctx->pc = 0x3063B4u;
label_3063b4:
    // 0x3063b4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3063b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3063b8:
    // 0x3063b8: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_3063bc:
    if (ctx->pc == 0x3063BCu) {
        ctx->pc = 0x3063C0u;
        goto label_3063c0;
    }
    ctx->pc = 0x3063B8u;
    {
        const bool branch_taken_0x3063b8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3063b8) {
            ctx->pc = 0x3063E8u;
            goto label_3063e8;
        }
    }
    ctx->pc = 0x3063C0u;
label_3063c0:
    // 0x3063c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3063c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3063c4:
    // 0x3063c4: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_3063c8:
    if (ctx->pc == 0x3063C8u) {
        ctx->pc = 0x3063CCu;
        goto label_3063cc;
    }
    ctx->pc = 0x3063C4u;
    {
        const bool branch_taken_0x3063c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x3063c4) {
            ctx->pc = 0x3063D4u;
            goto label_3063d4;
        }
    }
    ctx->pc = 0x3063CCu;
label_3063cc:
    // 0x3063cc: 0x1000009b  b           . + 4 + (0x9B << 2)
label_3063d0:
    if (ctx->pc == 0x3063D0u) {
        ctx->pc = 0x3063D4u;
        goto label_3063d4;
    }
    ctx->pc = 0x3063CCu;
    {
        const bool branch_taken_0x3063cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3063cc) {
            ctx->pc = 0x30663Cu;
            goto label_30663c;
        }
    }
    ctx->pc = 0x3063D4u;
label_3063d4:
    // 0x3063d4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3063d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_3063d8:
    // 0x3063d8: 0xc0c1678  jal         func_3059E0
label_3063dc:
    if (ctx->pc == 0x3063DCu) {
        ctx->pc = 0x3063DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063D8u;
        // 0x3063dc: 0x24847110  addiu       $a0, $a0, 0x7110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3063E0u;
        goto label_3063e0;
    }
    ctx->pc = 0x3063D8u;
    SET_GPR_U32(ctx, 31, 0x3063E0u);
    ctx->pc = 0x3063DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063D8u;
    // 0x3063dc: 0x24847110  addiu       $a0, $a0, 0x7110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3063D8u, 0x3063E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3063E0u;
label_3063e0:
    // 0x3063e0: 0x10000096  b           . + 4 + (0x96 << 2)
label_3063e4:
    if (ctx->pc == 0x3063E4u) {
        ctx->pc = 0x3063E8u;
        goto label_3063e8;
    }
    ctx->pc = 0x3063E0u;
    {
        const bool branch_taken_0x3063e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3063e0) {
            ctx->pc = 0x30663Cu;
            goto label_30663c;
        }
    }
    ctx->pc = 0x3063E8u;
label_3063e8:
    // 0x3063e8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3063e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3063ec:
    // 0x3063ec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3063ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3063f0:
    // 0x3063f0: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x3063f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_3063f4:
    // 0x3063f4: 0xac60e808  sw          $zero, -0x17F8($v1)
    ctx->pc = 0x3063f4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 0));
label_3063f8:
    // 0x3063f8: 0x24843300  addiu       $a0, $a0, 0x3300
    ctx->pc = 0x3063f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13056));
label_3063fc:
    // 0x3063fc: 0xc0c1678  jal         func_3059E0
label_306400:
    if (ctx->pc == 0x306400u) {
        ctx->pc = 0x306400u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3063FCu;
        // 0x306400: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306404u;
        goto label_306404;
    }
    ctx->pc = 0x3063FCu;
    SET_GPR_U32(ctx, 31, 0x306404u);
    ctx->pc = 0x306400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3063FCu;
    // 0x306400: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3063FCu, 0x306404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306404u;
label_306404:
    // 0x306404: 0x1000008d  b           . + 4 + (0x8D << 2)
label_306408:
    if (ctx->pc == 0x306408u) {
        ctx->pc = 0x30640Cu;
        goto label_30640c;
    }
    ctx->pc = 0x306404u;
    {
        const bool branch_taken_0x306404 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306404) {
            ctx->pc = 0x30663Cu;
            goto label_30663c;
        }
    }
    ctx->pc = 0x30640Cu;
label_30640c:
    // 0x30640c: 0xc0c07f4  jal         func_301FD0
label_306410:
    if (ctx->pc == 0x306410u) {
        ctx->pc = 0x306414u;
        goto label_306414;
    }
    ctx->pc = 0x30640Cu;
    SET_GPR_U32(ctx, 31, 0x306414u);
    ctx->pc = 0x301FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301FD0u, 0x30640Cu, 0x306414u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306414u;
label_306414:
    // 0x306414: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x306414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
label_306418:
    // 0x306418: 0x8044bed0  lb          $a0, -0x4130($v0)
    ctx->pc = 0x306418u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294950608)));
label_30641c:
    // 0x30641c: 0xc0c06b8  jal         func_301AE0
label_306420:
    if (ctx->pc == 0x306420u) {
        ctx->pc = 0x306420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30641Cu;
        // 0x306420: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306424u;
        goto label_306424;
    }
    ctx->pc = 0x30641Cu;
    SET_GPR_U32(ctx, 31, 0x306424u);
    ctx->pc = 0x306420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30641Cu;
    // 0x306420: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x30641Cu, 0x306424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306424u;
label_306424:
    // 0x306424: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x306424u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_306428:
    // 0x306428: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x306428u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_30642c:
    // 0x30642c: 0x248430f0  addiu       $a0, $a0, 0x30F0
    ctx->pc = 0x30642cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12528));
label_306430:
    // 0x306430: 0x24a535a0  addiu       $a1, $a1, 0x35A0
    ctx->pc = 0x306430u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13728));
label_306434:
    // 0x306434: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x306434u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306438:
    // 0x306438: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x306438u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30643c:
    // 0x30643c: 0xc0556d4  jal         func_155B50
label_306440:
    if (ctx->pc == 0x306440u) {
        ctx->pc = 0x306440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30643Cu;
        // 0x306440: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306444u;
        goto label_306444;
    }
    ctx->pc = 0x30643Cu;
    SET_GPR_U32(ctx, 31, 0x306444u);
    ctx->pc = 0x306440u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30643Cu;
    // 0x306440: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x30643Cu, 0x306444u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306444u;
label_306444:
    // 0x306444: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306444u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306448:
    // 0x306448: 0x3c043f73  lui         $a0, 0x3F73
    ctx->pc = 0x306448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16243 << 16));
label_30644c:
    // 0x30644c: 0xa060e810  sb          $zero, -0x17F0($v1)
    ctx->pc = 0x30644cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961168), (uint8_t)GPR_U32(ctx, 0));
label_306450:
    // 0x306450: 0x34853333  ori         $a1, $a0, 0x3333
    ctx->pc = 0x306450u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13107);
label_306454:
    // 0x306454: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x306454u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
label_306458:
    // 0x306458: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x306458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30645c:
    // 0x30645c: 0xac65bf28  sw          $a1, -0x40D8($v1)
    ctx->pc = 0x30645cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294950696), GPR_U32(ctx, 5));
label_306460:
    // 0x306460: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306460u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306464:
    // 0x306464: 0x10000097  b           . + 4 + (0x97 << 2)
label_306468:
    if (ctx->pc == 0x306468u) {
        ctx->pc = 0x306468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306464u;
        // 0x306468: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30646Cu;
        goto label_30646c;
    }
    ctx->pc = 0x306464u;
    {
        const bool branch_taken_0x306464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306464u;
        // 0x306468: 0xa064e818  sb          $a0, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306464) {
            ctx->pc = 0x3066C4u;
            goto label_3066c4;
        }
    }
    ctx->pc = 0x30646Cu;
label_30646c:
    // 0x30646c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x30646cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306470:
    // 0x306470: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306470u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306474:
    // 0x306474: 0xa043e818  sb          $v1, -0x17E8($v0)
    ctx->pc = 0x306474u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
label_306478:
    // 0x306478: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306478u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_30647c:
    // 0x30647c: 0x1000006f  b           . + 4 + (0x6F << 2)
label_306480:
    if (ctx->pc == 0x306480u) {
        ctx->pc = 0x306480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30647Cu;
        // 0x306480: 0xac40e8e8  sw          $zero, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306484u;
        goto label_306484;
    }
    ctx->pc = 0x30647Cu;
    {
        const bool branch_taken_0x30647c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30647Cu;
        // 0x306480: 0xac40e8e8  sw          $zero, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30647c) {
            ctx->pc = 0x30663Cu;
            goto label_30663c;
        }
    }
    ctx->pc = 0x306484u;
label_306484:
    // 0x306484: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306484u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306488:
    // 0x306488: 0x54830022  bnel        $a0, $v1, . + 4 + (0x22 << 2)
label_30648c:
    if (ctx->pc == 0x30648Cu) {
        ctx->pc = 0x30648Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306488u;
        // 0x30648c: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306490u;
        goto label_306490;
    }
    ctx->pc = 0x306488u;
    {
        const bool branch_taken_0x306488 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x306488) {
            ctx->pc = 0x30648Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306488u;
            // 0x30648c: 0x5143c  dsll32      $v0, $a1, 16 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306514u;
            goto label_306514;
        }
    }
    ctx->pc = 0x306490u;
label_306490:
    // 0x306490: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306490u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306494:
    // 0x306494: 0x9063e810  lbu         $v1, -0x17F0($v1)
    ctx->pc = 0x306494u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961168)));
label_306498:
    // 0x306498: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x306498u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_30649c:
    // 0x30649c: 0x10600089  beqz        $v1, . + 4 + (0x89 << 2)
label_3064a0:
    if (ctx->pc == 0x3064A0u) {
        ctx->pc = 0x3064A4u;
        goto label_3064a4;
    }
    ctx->pc = 0x30649Cu;
    {
        const bool branch_taken_0x30649c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x30649c) {
            ctx->pc = 0x3066C4u;
            goto label_3066c4;
        }
    }
    ctx->pc = 0x3064A4u;
label_3064a4:
    // 0x3064a4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3064a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_3064a8:
    // 0x3064a8: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x3064a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_3064ac:
    // 0x3064ac: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x3064acu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_3064b0:
    // 0x3064b0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3064b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3064b4:
    // 0x3064b4: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3064b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3064b8:
    // 0x3064b8: 0xc0cda84  jal         func_336A10
label_3064bc:
    if (ctx->pc == 0x3064BCu) {
        ctx->pc = 0x3064BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064B8u;
        // 0x3064bc: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3064C0u;
        goto label_3064c0;
    }
    ctx->pc = 0x3064B8u;
    SET_GPR_U32(ctx, 31, 0x3064C0u);
    ctx->pc = 0x3064BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064B8u;
    // 0x3064bc: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x3064B8u, 0x3064C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064C0u;
label_3064c0:
    // 0x3064c0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
label_3064c4:
    if (ctx->pc == 0x3064C4u) {
        ctx->pc = 0x3064C8u;
        goto label_3064c8;
    }
    ctx->pc = 0x3064C0u;
    {
        const bool branch_taken_0x3064c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3064c0) {
            ctx->pc = 0x3064ECu;
            goto label_3064ec;
        }
    }
    ctx->pc = 0x3064C8u;
label_3064c8:
    // 0x3064c8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3064c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_3064cc:
    // 0x3064cc: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x3064ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_3064d0:
    // 0x3064d0: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x3064d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_3064d4:
    // 0x3064d4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3064d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3064d8:
    // 0x3064d8: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3064d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3064dc:
    // 0x3064dc: 0xc0cda84  jal         func_336A10
label_3064e0:
    if (ctx->pc == 0x3064E0u) {
        ctx->pc = 0x3064E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064DCu;
        // 0x3064e0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3064E4u;
        goto label_3064e4;
    }
    ctx->pc = 0x3064DCu;
    SET_GPR_U32(ctx, 31, 0x3064E4u);
    ctx->pc = 0x3064E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064DCu;
    // 0x3064e0: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x3064DCu, 0x3064E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064E4u;
label_3064e4:
    // 0x3064e4: 0x10400077  beqz        $v0, . + 4 + (0x77 << 2)
label_3064e8:
    if (ctx->pc == 0x3064E8u) {
        ctx->pc = 0x3064ECu;
        goto label_3064ec;
    }
    ctx->pc = 0x3064E4u;
    {
        const bool branch_taken_0x3064e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3064e4) {
            ctx->pc = 0x3066C4u;
            goto label_3066c4;
        }
    }
    ctx->pc = 0x3064ECu;
label_3064ec:
    // 0x3064ec: 0xc0c07f4  jal         func_301FD0
label_3064f0:
    if (ctx->pc == 0x3064F0u) {
        ctx->pc = 0x3064F4u;
        goto label_3064f4;
    }
    ctx->pc = 0x3064ECu;
    SET_GPR_U32(ctx, 31, 0x3064F4u);
    ctx->pc = 0x301FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301FD0u, 0x3064ECu, 0x3064F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3064F4u;
label_3064f4:
    // 0x3064f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3064f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3064f8:
    // 0x3064f8: 0xc0c06b8  jal         func_301AE0
label_3064fc:
    if (ctx->pc == 0x3064FCu) {
        ctx->pc = 0x3064FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3064F8u;
        // 0x3064fc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306500u;
        goto label_306500;
    }
    ctx->pc = 0x3064F8u;
    SET_GPR_U32(ctx, 31, 0x306500u);
    ctx->pc = 0x3064FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3064F8u;
    // 0x3064fc: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x3064F8u, 0x306500u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306500u;
label_306500:
    // 0x306500: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306500u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306504:
    // 0x306504: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x306504u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_306508:
    // 0x306508: 0x1000006e  b           . + 4 + (0x6E << 2)
label_30650c:
    if (ctx->pc == 0x30650Cu) {
        ctx->pc = 0x306510u;
        goto label_306510;
    }
    ctx->pc = 0x306508u;
    {
        const bool branch_taken_0x306508 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306508) {
            ctx->pc = 0x3066C4u;
            goto label_3066c4;
        }
    }
    ctx->pc = 0x306510u;
label_306510:
    // 0x306510: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x306510u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
label_306514:
    // 0x306514: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x306514u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_306518:
    // 0x306518: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x306518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
label_30651c:
    // 0x30651c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_306520:
    if (ctx->pc == 0x306520u) {
        ctx->pc = 0x306524u;
        goto label_306524;
    }
    ctx->pc = 0x30651Cu;
    {
        const bool branch_taken_0x30651c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30651c) {
            ctx->pc = 0x30654Cu;
            goto label_30654c;
        }
    }
    ctx->pc = 0x306524u;
label_306524:
    // 0x306524: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x306524u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
label_306528:
    // 0x306528: 0xc0538fc  jal         func_14E3F0
label_30652c:
    if (ctx->pc == 0x30652Cu) {
        ctx->pc = 0x30652Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306528u;
        // 0x30652c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306530u;
        goto label_306530;
    }
    ctx->pc = 0x306528u;
    SET_GPR_U32(ctx, 31, 0x306530u);
    ctx->pc = 0x30652Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306528u;
    // 0x30652c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306528u, 0x306530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306530u;
label_306530:
    // 0x306530: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306530u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306534:
    // 0x306534: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306538:
    // 0x306538: 0x8c63e8e8  lw          $v1, -0x1718($v1)
    ctx->pc = 0x306538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961384)));
label_30653c:
    // 0x30653c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x30653cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_306540:
    // 0x306540: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x306540u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_306544:
    // 0x306544: 0x10000038  b           . + 4 + (0x38 << 2)
label_306548:
    if (ctx->pc == 0x306548u) {
        ctx->pc = 0x306548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306544u;
        // 0x306548: 0xac43e8e8  sw          $v1, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30654Cu;
        goto label_30654c;
    }
    ctx->pc = 0x306544u;
    {
        const bool branch_taken_0x306544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306544u;
        // 0x306548: 0xac43e8e8  sw          $v1, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306544) {
            ctx->pc = 0x306628u;
            goto label_306628;
        }
    }
    ctx->pc = 0x30654Cu;
label_30654c:
    // 0x30654c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30654cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306550:
    // 0x306550: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x306550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_306554:
    // 0x306554: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x306554u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306558:
    // 0x306558: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_30655c:
    // 0x30655c: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x30655cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_306560:
    // 0x306560: 0xc0cda84  jal         func_336A10
label_306564:
    if (ctx->pc == 0x306564u) {
        ctx->pc = 0x306564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306560u;
        // 0x306564: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306568u;
        goto label_306568;
    }
    ctx->pc = 0x306560u;
    SET_GPR_U32(ctx, 31, 0x306568u);
    ctx->pc = 0x306564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306560u;
    // 0x306564: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x306560u, 0x306568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306568u;
label_306568:
    // 0x306568: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_30656c:
    if (ctx->pc == 0x30656Cu) {
        ctx->pc = 0x306570u;
        goto label_306570;
    }
    ctx->pc = 0x306568u;
    {
        const bool branch_taken_0x306568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306568) {
            ctx->pc = 0x3065F0u;
            goto label_3065f0;
        }
    }
    ctx->pc = 0x306570u;
label_306570:
    // 0x306570: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306570u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306574:
    // 0x306574: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306574u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306578:
    // 0x306578: 0x8c42e8e8  lw          $v0, -0x1718($v0)
    ctx->pc = 0x306578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
label_30657c:
    // 0x30657c: 0x54430017  bnel        $v0, $v1, . + 4 + (0x17 << 2)
label_306580:
    if (ctx->pc == 0x306580u) {
        ctx->pc = 0x306580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30657Cu;
        // 0x306580: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306584u;
        goto label_306584;
    }
    ctx->pc = 0x30657Cu;
    {
        const bool branch_taken_0x30657c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x30657c) {
            ctx->pc = 0x306580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x30657Cu;
            // 0x306580: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3065DCu;
            goto label_3065dc;
        }
    }
    ctx->pc = 0x306584u;
label_306584:
    // 0x306584: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306584u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306588:
    // 0x306588: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x306588u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_30658c:
    // 0x30658c: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x30658cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_306590:
    // 0x306590: 0x5443000a  bnel        $v0, $v1, . + 4 + (0xA << 2)
label_306594:
    if (ctx->pc == 0x306594u) {
        ctx->pc = 0x306594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306590u;
        // 0x306594: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306598u;
        goto label_306598;
    }
    ctx->pc = 0x306590u;
    {
        const bool branch_taken_0x306590 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306590) {
            ctx->pc = 0x306594u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306590u;
            // 0x306594: 0x24040126  addiu       $a0, $zero, 0x126 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3065BCu;
            goto label_3065bc;
        }
    }
    ctx->pc = 0x306598u;
label_306598:
    // 0x306598: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x306598u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_30659c:
    // 0x30659c: 0xc0538fc  jal         func_14E3F0
label_3065a0:
    if (ctx->pc == 0x3065A0u) {
        ctx->pc = 0x3065A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30659Cu;
        // 0x3065a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065A4u;
        goto label_3065a4;
    }
    ctx->pc = 0x30659Cu;
    SET_GPR_U32(ctx, 31, 0x3065A4u);
    ctx->pc = 0x3065A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30659Cu;
    // 0x3065a0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x30659Cu, 0x3065A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065A4u;
label_3065a4:
    // 0x3065a4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x3065a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_3065a8:
    // 0x3065a8: 0xc0c1678  jal         func_3059E0
label_3065ac:
    if (ctx->pc == 0x3065ACu) {
        ctx->pc = 0x3065ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065A8u;
        // 0x3065ac: 0x248442f0  addiu       $a0, $a0, 0x42F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17136));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065B0u;
        goto label_3065b0;
    }
    ctx->pc = 0x3065A8u;
    SET_GPR_U32(ctx, 31, 0x3065B0u);
    ctx->pc = 0x3065ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065A8u;
    // 0x3065ac: 0x248442f0  addiu       $a0, $a0, 0x42F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17136));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3065A8u, 0x3065B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065B0u;
label_3065b0:
    // 0x3065b0: 0x1000001d  b           . + 4 + (0x1D << 2)
label_3065b4:
    if (ctx->pc == 0x3065B4u) {
        ctx->pc = 0x3065B8u;
        goto label_3065b8;
    }
    ctx->pc = 0x3065B0u;
    {
        const bool branch_taken_0x3065b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3065b0) {
            ctx->pc = 0x306628u;
            goto label_306628;
        }
    }
    ctx->pc = 0x3065B8u;
label_3065b8:
    // 0x3065b8: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x3065b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_3065bc:
    // 0x3065bc: 0xc0538fc  jal         func_14E3F0
label_3065c0:
    if (ctx->pc == 0x3065C0u) {
        ctx->pc = 0x3065C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065BCu;
        // 0x3065c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065C4u;
        goto label_3065c4;
    }
    ctx->pc = 0x3065BCu;
    SET_GPR_U32(ctx, 31, 0x3065C4u);
    ctx->pc = 0x3065C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065BCu;
    // 0x3065c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3065BCu, 0x3065C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065C4u;
label_3065c4:
    // 0x3065c4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3065c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_3065c8:
    // 0x3065c8: 0xc0c1678  jal         func_3059E0
label_3065cc:
    if (ctx->pc == 0x3065CCu) {
        ctx->pc = 0x3065CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065C8u;
        // 0x3065cc: 0x24846ec0  addiu       $a0, $a0, 0x6EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065D0u;
        goto label_3065d0;
    }
    ctx->pc = 0x3065C8u;
    SET_GPR_U32(ctx, 31, 0x3065D0u);
    ctx->pc = 0x3065CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065C8u;
    // 0x3065cc: 0x24846ec0  addiu       $a0, $a0, 0x6EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3065C8u, 0x3065D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065D0u;
label_3065d0:
    // 0x3065d0: 0x10000015  b           . + 4 + (0x15 << 2)
label_3065d4:
    if (ctx->pc == 0x3065D4u) {
        ctx->pc = 0x3065D8u;
        goto label_3065d8;
    }
    ctx->pc = 0x3065D0u;
    {
        const bool branch_taken_0x3065d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3065d0) {
            ctx->pc = 0x306628u;
            goto label_306628;
        }
    }
    ctx->pc = 0x3065D8u;
label_3065d8:
    // 0x3065d8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x3065d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_3065dc:
    // 0x3065dc: 0xc0538fc  jal         func_14E3F0
label_3065e0:
    if (ctx->pc == 0x3065E0u) {
        ctx->pc = 0x3065E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065DCu;
        // 0x3065e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065E4u;
        goto label_3065e4;
    }
    ctx->pc = 0x3065DCu;
    SET_GPR_U32(ctx, 31, 0x3065E4u);
    ctx->pc = 0x3065E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3065DCu;
    // 0x3065e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x3065DCu, 0x3065E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3065E4u;
label_3065e4:
    // 0x3065e4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3065e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3065e8:
    // 0x3065e8: 0x1000000f  b           . + 4 + (0xF << 2)
label_3065ec:
    if (ctx->pc == 0x3065ECu) {
        ctx->pc = 0x3065ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065E8u;
        // 0x3065ec: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3065F0u;
        goto label_3065f0;
    }
    ctx->pc = 0x3065E8u;
    {
        const bool branch_taken_0x3065e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3065ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3065E8u;
        // 0x3065ec: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3065e8) {
            ctx->pc = 0x306628u;
            goto label_306628;
        }
    }
    ctx->pc = 0x3065F0u;
label_3065f0:
    // 0x3065f0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3065f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_3065f4:
    // 0x3065f4: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x3065f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_3065f8:
    // 0x3065f8: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x3065f8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_3065fc:
    // 0x3065fc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3065fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306600:
    // 0x306600: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x306600u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_306604:
    // 0x306604: 0xc0cda84  jal         func_336A10
label_306608:
    if (ctx->pc == 0x306608u) {
        ctx->pc = 0x306608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306604u;
        // 0x306608: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30660Cu;
        goto label_30660c;
    }
    ctx->pc = 0x306604u;
    SET_GPR_U32(ctx, 31, 0x30660Cu);
    ctx->pc = 0x306608u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306604u;
    // 0x306608: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x306604u, 0x30660Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30660Cu;
label_30660c:
    // 0x30660c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_306610:
    if (ctx->pc == 0x306610u) {
        ctx->pc = 0x306614u;
        goto label_306614;
    }
    ctx->pc = 0x30660Cu;
    {
        const bool branch_taken_0x30660c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x30660c) {
            ctx->pc = 0x306628u;
            goto label_306628;
        }
    }
    ctx->pc = 0x306614u;
label_306614:
    // 0x306614: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x306614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_306618:
    // 0x306618: 0xc0538fc  jal         func_14E3F0
label_30661c:
    if (ctx->pc == 0x30661Cu) {
        ctx->pc = 0x30661Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306618u;
        // 0x30661c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306620u;
        goto label_306620;
    }
    ctx->pc = 0x306618u;
    SET_GPR_U32(ctx, 31, 0x306620u);
    ctx->pc = 0x30661Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306618u;
    // 0x30661c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306618u, 0x306620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306620u;
label_306620:
    // 0x306620: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306624:
    // 0x306624: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x306624u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_306628:
    // 0x306628: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306628u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_30662c:
    // 0x30662c: 0x240400f8  addiu       $a0, $zero, 0xF8
    ctx->pc = 0x30662cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 248));
label_306630:
    // 0x306630: 0x8c46e8e8  lw          $a2, -0x1718($v0)
    ctx->pc = 0x306630u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
label_306634:
    // 0x306634: 0xc0ce7a4  jal         func_339E90
label_306638:
    if (ctx->pc == 0x306638u) {
        ctx->pc = 0x306638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306634u;
        // 0x306638: 0x24050110  addiu       $a1, $zero, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30663Cu;
        goto label_30663c;
    }
    ctx->pc = 0x306634u;
    SET_GPR_U32(ctx, 31, 0x30663Cu);
    ctx->pc = 0x306638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306634u;
    // 0x306638: 0x24050110  addiu       $a1, $zero, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339E90u, 0x306634u, 0x30663Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30663Cu;
label_30663c:
    // 0x30663c: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x30663cu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_306640:
    // 0x306640: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x306640u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306644:
    // 0x306644: 0x26523430  addiu       $s2, $s2, 0x3430
    ctx->pc = 0x306644u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 13360));
label_306648:
    // 0x306648: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x306648u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_30664c:
    // 0x30664c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x30664cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306650:
    // 0x306650: 0x13843c  dsll32      $s0, $s3, 16
    ctx->pc = 0x306650u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 16));
label_306654:
    // 0x306654: 0x8c43e8f0  lw          $v1, -0x1710($v0)
    ctx->pc = 0x306654u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_306658:
    // 0x306658: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x306658u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_30665c:
    // 0x30665c: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x30665cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_306660:
    // 0x306660: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x306660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_306664:
    // 0x306664: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x306664u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_306668:
    // 0x306668: 0x703826  xor         $a3, $v1, $s0
    ctx->pc = 0x306668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 16));
label_30666c:
    // 0x30666c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x30666cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306670:
    // 0x306670: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x306670u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_306674:
    // 0x306674: 0xc0ce5bc  jal         func_3396F0
label_306678:
    if (ctx->pc == 0x306678u) {
        ctx->pc = 0x306678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306674u;
        // 0x306678: 0xac47e8e0  sw          $a3, -0x1720($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961376), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30667Cu;
        goto label_30667c;
    }
    ctx->pc = 0x306674u;
    SET_GPR_U32(ctx, 31, 0x30667Cu);
    ctx->pc = 0x306678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306674u;
    // 0x306678: 0xac47e8e0  sw          $a3, -0x1720($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961376), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x306674u, 0x30667Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30667Cu;
label_30667c:
    // 0x30667c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x30667cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306680:
    // 0x306680: 0x8c63e8f0  lw          $v1, -0x1710($v1)
    ctx->pc = 0x306680u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961392)));
label_306684:
    // 0x306684: 0x14700008  bne         $v1, $s0, . + 4 + (0x8 << 2)
label_306688:
    if (ctx->pc == 0x306688u) {
        ctx->pc = 0x30668Cu;
        goto label_30668c;
    }
    ctx->pc = 0x306684u;
    {
        const bool branch_taken_0x306684 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 16));
        if (branch_taken_0x306684) {
            ctx->pc = 0x3066A8u;
            goto label_3066a8;
        }
    }
    ctx->pc = 0x30668Cu;
label_30668c:
    // 0x30668c: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x30668cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_306690:
    // 0x306690: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x306690u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_306694:
    // 0x306694: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x306694u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_306698:
    // 0x306698: 0x24c63598  addiu       $a2, $a2, 0x3598
    ctx->pc = 0x306698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13720));
label_30669c:
    // 0x30669c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x30669cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3066a0:
    // 0x3066a0: 0xc0ce5bc  jal         func_3396F0
label_3066a4:
    if (ctx->pc == 0x3066A4u) {
        ctx->pc = 0x3066A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066A0u;
        // 0x3066a4: 0x2444ffee  addiu       $a0, $v0, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3066A8u;
        goto label_3066a8;
    }
    ctx->pc = 0x3066A0u;
    SET_GPR_U32(ctx, 31, 0x3066A8u);
    ctx->pc = 0x3066A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3066A0u;
    // 0x3066a4: 0x2444ffee  addiu       $a0, $v0, -0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x3066A0u, 0x3066A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3066A8u;
label_3066a8:
    // 0x3066a8: 0x26630001  addiu       $v1, $s3, 0x1
    ctx->pc = 0x3066a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3066ac:
    // 0x3066ac: 0x39c3c  dsll32      $s3, $v1, 16
    ctx->pc = 0x3066acu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 3) << (32 + 16));
label_3066b0:
    // 0x3066b0: 0x2652002c  addiu       $s2, $s2, 0x2C
    ctx->pc = 0x3066b0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_3066b4:
    // 0x3066b4: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x3066b4u;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_3066b8:
    // 0x3066b8: 0x2a630006  slti        $v1, $s3, 0x6
    ctx->pc = 0x3066b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)6) ? 1 : 0);
label_3066bc:
    // 0x3066bc: 0x1460ffe3  bnez        $v1, . + 4 + (-0x1D << 2)
label_3066c0:
    if (ctx->pc == 0x3066C0u) {
        ctx->pc = 0x3066C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066BCu;
        // 0x3066c0: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3066C4u;
        goto label_3066c4;
    }
    ctx->pc = 0x3066BCu;
    {
        const bool branch_taken_0x3066bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3066C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066BCu;
        // 0x3066c0: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3066bc) {
            ctx->pc = 0x30664Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_30664c;
        }
    }
    ctx->pc = 0x3066C4u;
label_3066c4:
    // 0x3066c4: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3066c4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3066c8:
    // 0x3066c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3066c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3066cc:
    // 0x3066cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3066ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3066d0:
    // 0x3066d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3066d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3066d4:
    // 0x3066d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3066d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3066d8:
    // 0x3066d8: 0x3e00008  jr          $ra
label_3066dc:
    if (ctx->pc == 0x3066DCu) {
        ctx->pc = 0x3066DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066D8u;
        // 0x3066dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3066E0u;
        goto label_3066e0;
    }
    ctx->pc = 0x3066D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3066DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3066D8u;
        // 0x3066dc: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3066D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3066E0u;
label_3066e0:
    // 0x3066e0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3066e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3066e4:
    // 0x3066e4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3066e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_3066e8:
    // 0x3066e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3066e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3066ec:
    // 0x3066ec: 0x8c42da40  lw          $v0, -0x25C0($v0)
    ctx->pc = 0x3066ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957632)));
label_3066f0:
    // 0x3066f0: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_3066f4:
    if (ctx->pc == 0x3066F4u) {
        ctx->pc = 0x3066F8u;
        goto label_3066f8;
    }
    ctx->pc = 0x3066F0u;
    {
        const bool branch_taken_0x3066f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3066f0) {
            ctx->pc = 0x306704u;
            goto label_306704;
        }
    }
    ctx->pc = 0x3066F8u;
label_3066f8:
    // 0x3066f8: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x3066f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_3066fc:
    // 0x3066fc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x3066fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_306700:
    // 0x306700: 0xac43da40  sw          $v1, -0x25C0($v0)
    ctx->pc = 0x306700u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957632), GPR_U32(ctx, 3));
label_306704:
    // 0x306704: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306704u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306708:
    // 0x306708: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30670c:
    // 0x30670c: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x30670cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306710:
    // 0x306710: 0xc068d08  jal         func_1A3420
label_306714:
    if (ctx->pc == 0x306714u) {
        ctx->pc = 0x306714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306710u;
        // 0x306714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306718u;
        goto label_306718;
    }
    ctx->pc = 0x306710u;
    SET_GPR_U32(ctx, 31, 0x306718u);
    ctx->pc = 0x306714u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306710u;
    // 0x306714: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x306710u, 0x306718u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306718u;
label_306718:
    // 0x306718: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x306718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_30671c:
    // 0x30671c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x30671cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_306720:
    // 0x306720: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x306720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
label_306724:
    // 0x306724: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_306728:
    if (ctx->pc == 0x306728u) {
        ctx->pc = 0x30672Cu;
        goto label_30672c;
    }
    ctx->pc = 0x306724u;
    {
        const bool branch_taken_0x306724 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306724) {
            ctx->pc = 0x306754u;
            goto label_306754;
        }
    }
    ctx->pc = 0x30672Cu;
label_30672c:
    // 0x30672c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x30672cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
label_306730:
    // 0x306730: 0xc0538fc  jal         func_14E3F0
label_306734:
    if (ctx->pc == 0x306734u) {
        ctx->pc = 0x306734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306730u;
        // 0x306734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306738u;
        goto label_306738;
    }
    ctx->pc = 0x306730u;
    SET_GPR_U32(ctx, 31, 0x306738u);
    ctx->pc = 0x306734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306730u;
    // 0x306734: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306730u, 0x306738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306738u;
label_306738:
    // 0x306738: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306738u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_30673c:
    // 0x30673c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x30673cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306740:
    // 0x306740: 0x8c63e8e8  lw          $v1, -0x1718($v1)
    ctx->pc = 0x306740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961384)));
label_306744:
    // 0x306744: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x306744u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_306748:
    // 0x306748: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x306748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_30674c:
    // 0x30674c: 0x1000001a  b           . + 4 + (0x1A << 2)
label_306750:
    if (ctx->pc == 0x306750u) {
        ctx->pc = 0x306750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30674Cu;
        // 0x306750: 0xac43e8e8  sw          $v1, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306754u;
        goto label_306754;
    }
    ctx->pc = 0x30674Cu;
    {
        const bool branch_taken_0x30674c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30674Cu;
        // 0x306750: 0xac43e8e8  sw          $v1, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30674c) {
            ctx->pc = 0x3067B8u;
            goto label_3067b8;
        }
    }
    ctx->pc = 0x306754u;
label_306754:
    // 0x306754: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306758:
    // 0x306758: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x306758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_30675c:
    // 0x30675c: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x30675cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306760:
    // 0x306760: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306760u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306764:
    // 0x306764: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x306764u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_306768:
    // 0x306768: 0xc0cda84  jal         func_336A10
label_30676c:
    if (ctx->pc == 0x30676Cu) {
        ctx->pc = 0x30676Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306768u;
        // 0x30676c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306770u;
        goto label_306770;
    }
    ctx->pc = 0x306768u;
    SET_GPR_U32(ctx, 31, 0x306770u);
    ctx->pc = 0x30676Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306768u;
    // 0x30676c: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x306768u, 0x306770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306770u;
label_306770:
    // 0x306770: 0x50400012  beql        $v0, $zero, . + 4 + (0x12 << 2)
label_306774:
    if (ctx->pc == 0x306774u) {
        ctx->pc = 0x306774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306770u;
        // 0x306774: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306778u;
        goto label_306778;
    }
    ctx->pc = 0x306770u;
    {
        const bool branch_taken_0x306770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306770) {
            ctx->pc = 0x306774u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306770u;
            // 0x306774: 0x240b0020  addiu       $t3, $zero, 0x20 (Delay Slot)
            SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3067BCu;
            goto label_3067bc;
        }
    }
    ctx->pc = 0x306778u;
label_306778:
    // 0x306778: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x306778u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_30677c:
    // 0x30677c: 0xc0538fc  jal         func_14E3F0
label_306780:
    if (ctx->pc == 0x306780u) {
        ctx->pc = 0x306780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30677Cu;
        // 0x306780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306784u;
        goto label_306784;
    }
    ctx->pc = 0x30677Cu;
    SET_GPR_U32(ctx, 31, 0x306784u);
    ctx->pc = 0x306780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30677Cu;
    // 0x306780: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x30677Cu, 0x306784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306784u;
label_306784:
    // 0x306784: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306784u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306788:
    // 0x306788: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306788u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_30678c:
    // 0x30678c: 0x8c42e8e8  lw          $v0, -0x1718($v0)
    ctx->pc = 0x30678cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
label_306790:
    // 0x306790: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
label_306794:
    if (ctx->pc == 0x306794u) {
        ctx->pc = 0x306798u;
        goto label_306798;
    }
    ctx->pc = 0x306790u;
    {
        const bool branch_taken_0x306790 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306790) {
            ctx->pc = 0x3067ACu;
            goto label_3067ac;
        }
    }
    ctx->pc = 0x306798u;
label_306798:
    // 0x306798: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x306798u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_30679c:
    // 0x30679c: 0xc0c1678  jal         func_3059E0
label_3067a0:
    if (ctx->pc == 0x3067A0u) {
        ctx->pc = 0x3067A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30679Cu;
        // 0x3067a0: 0x24844360  addiu       $a0, $a0, 0x4360 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067A4u;
        goto label_3067a4;
    }
    ctx->pc = 0x30679Cu;
    SET_GPR_U32(ctx, 31, 0x3067A4u);
    ctx->pc = 0x3067A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30679Cu;
    // 0x3067a0: 0x24844360  addiu       $a0, $a0, 0x4360 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x30679Cu, 0x3067A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067A4u;
label_3067a4:
    // 0x3067a4: 0x10000004  b           . + 4 + (0x4 << 2)
label_3067a8:
    if (ctx->pc == 0x3067A8u) {
        ctx->pc = 0x3067ACu;
        goto label_3067ac;
    }
    ctx->pc = 0x3067A4u;
    {
        const bool branch_taken_0x3067a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3067a4) {
            ctx->pc = 0x3067B8u;
            goto label_3067b8;
        }
    }
    ctx->pc = 0x3067ACu;
label_3067ac:
    // 0x3067ac: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3067acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_3067b0:
    // 0x3067b0: 0xc0c1678  jal         func_3059E0
label_3067b4:
    if (ctx->pc == 0x3067B4u) {
        ctx->pc = 0x3067B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067B0u;
        // 0x3067b4: 0x24846ec0  addiu       $a0, $a0, 0x6EC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28352));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067B8u;
        goto label_3067b8;
    }
    ctx->pc = 0x3067B0u;
    SET_GPR_U32(ctx, 31, 0x3067B8u);
    ctx->pc = 0x3067B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3067B0u;
    // 0x3067b4: 0x24846ec0  addiu       $a0, $a0, 0x6EC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28352));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x3067B0u, 0x3067B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067B8u;
label_3067b8:
    // 0x3067b8: 0x240b0020  addiu       $t3, $zero, 0x20
    ctx->pc = 0x3067b8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_3067bc:
    // 0x3067bc: 0x2404ffa0  addiu       $a0, $zero, -0x60
    ctx->pc = 0x3067bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967200));
label_3067c0:
    // 0x3067c0: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x3067c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_3067c4:
    // 0x3067c4: 0xffab0000  sd          $t3, 0x0($sp)
    ctx->pc = 0x3067c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 11));
label_3067c8:
    // 0x3067c8: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x3067c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
label_3067cc:
    // 0x3067cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3067ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3067d0:
    // 0x3067d0: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x3067d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
label_3067d4:
    // 0x3067d4: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3067d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3067d8:
    // 0x3067d8: 0xffa20018  sd          $v0, 0x18($sp)
    ctx->pc = 0x3067d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 2));
label_3067dc:
    // 0x3067dc: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x3067dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_3067e0:
    // 0x3067e0: 0x24070300  addiu       $a3, $zero, 0x300
    ctx->pc = 0x3067e0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 768));
label_3067e4:
    // 0x3067e4: 0x24080240  addiu       $t0, $zero, 0x240
    ctx->pc = 0x3067e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
label_3067e8:
    // 0x3067e8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3067e8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3067ec:
    // 0x3067ec: 0xc0c0ba8  jal         func_302EA0
label_3067f0:
    if (ctx->pc == 0x3067F0u) {
        ctx->pc = 0x3067F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3067ECu;
        // 0x3067f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3067F4u;
        goto label_3067f4;
    }
    ctx->pc = 0x3067ECu;
    SET_GPR_U32(ctx, 31, 0x3067F4u);
    ctx->pc = 0x3067F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3067ECu;
    // 0x3067f0: 0x502d  daddu       $t2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x302EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x302EA0u, 0x3067ECu, 0x3067F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3067F4u;
label_3067f4:
    // 0x3067f4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3067f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_3067f8:
    // 0x3067f8: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x3067f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_3067fc:
    // 0x3067fc: 0x240500a4  addiu       $a1, $zero, 0xA4
    ctx->pc = 0x3067fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
label_306800:
    // 0x306800: 0x24c635a8  addiu       $a2, $a2, 0x35A8
    ctx->pc = 0x306800u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13736));
label_306804:
    // 0x306804: 0xc0ce5fc  jal         func_3397F0
label_306808:
    if (ctx->pc == 0x306808u) {
        ctx->pc = 0x306808u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306804u;
        // 0x306808: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30680Cu;
        goto label_30680c;
    }
    ctx->pc = 0x306804u;
    SET_GPR_U32(ctx, 31, 0x30680Cu);
    ctx->pc = 0x306808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306804u;
    // 0x306808: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3397F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3397F0u, 0x306804u, 0x30680Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x30680Cu;
label_30680c:
    // 0x30680c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x30680cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306810:
    // 0x306810: 0x24040140  addiu       $a0, $zero, 0x140
    ctx->pc = 0x306810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 320));
label_306814:
    // 0x306814: 0x8c46e8e8  lw          $a2, -0x1718($v0)
    ctx->pc = 0x306814u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
label_306818:
    // 0x306818: 0xc0ce7c8  jal         func_339F20
label_30681c:
    if (ctx->pc == 0x30681Cu) {
        ctx->pc = 0x30681Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306818u;
        // 0x30681c: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306820u;
        goto label_306820;
    }
    ctx->pc = 0x306818u;
    SET_GPR_U32(ctx, 31, 0x306820u);
    ctx->pc = 0x30681Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306818u;
    // 0x30681c: 0x240500c8  addiu       $a1, $zero, 0xC8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 200));
    ctx->in_delay_slot = false;
    ctx->pc = 0x339F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339F20u, 0x306818u, 0x306820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306820u;
label_306820:
    // 0x306820: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x306820u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_306824:
    // 0x306824: 0x3e00008  jr          $ra
label_306828:
    if (ctx->pc == 0x306828u) {
        ctx->pc = 0x306828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306824u;
        // 0x306828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30682Cu;
        goto label_30682c;
    }
    ctx->pc = 0x306824u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306824u;
        // 0x306828: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306824u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x30682Cu;
label_30682c:
    // 0x30682c: 0x0  nop
    ctx->pc = 0x30682cu;
    // NOP
label_306830:
    // 0x306830: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x306830u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_306834:
    // 0x306834: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x306834u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_306838:
    // 0x306838: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x306838u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_30683c:
    // 0x30683c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x30683cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_306840:
    // 0x306840: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x306840u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_306844:
    // 0x306844: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x306844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_306848:
    // 0x306848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x306848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_30684c:
    // 0x30684c: 0x8c42da40  lw          $v0, -0x25C0($v0)
    ctx->pc = 0x30684cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957632)));
label_306850:
    // 0x306850: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_306854:
    if (ctx->pc == 0x306854u) {
        ctx->pc = 0x306858u;
        goto label_306858;
    }
    ctx->pc = 0x306850u;
    {
        const bool branch_taken_0x306850 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x306850) {
            ctx->pc = 0x306864u;
            goto label_306864;
        }
    }
    ctx->pc = 0x306858u;
label_306858:
    // 0x306858: 0x2403012c  addiu       $v1, $zero, 0x12C
    ctx->pc = 0x306858u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 300));
label_30685c:
    // 0x30685c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x30685cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_306860:
    // 0x306860: 0xac43da40  sw          $v1, -0x25C0($v0)
    ctx->pc = 0x306860u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294957632), GPR_U32(ctx, 3));
label_306864:
    // 0x306864: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306864u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306868:
    // 0x306868: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306868u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30686c:
    // 0x30686c: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x30686cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306870:
    // 0x306870: 0xc068d08  jal         func_1A3420
label_306874:
    if (ctx->pc == 0x306874u) {
        ctx->pc = 0x306874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306870u;
        // 0x306874: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306878u;
        goto label_306878;
    }
    ctx->pc = 0x306870u;
    SET_GPR_U32(ctx, 31, 0x306878u);
    ctx->pc = 0x306874u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306870u;
    // 0x306874: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x306870u, 0x306878u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306878u;
label_306878:
    // 0x306878: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_30687c:
    if (ctx->pc == 0x30687Cu) {
        ctx->pc = 0x306880u;
        goto label_306880;
    }
    ctx->pc = 0x306878u;
    {
        const bool branch_taken_0x306878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306878) {
            ctx->pc = 0x306890u;
            goto label_306890;
        }
    }
    ctx->pc = 0x306880u;
label_306880:
    // 0x306880: 0xc0c1650  jal         func_305940
label_306884:
    if (ctx->pc == 0x306884u) {
        ctx->pc = 0x306888u;
        goto label_306888;
    }
    ctx->pc = 0x306880u;
    SET_GPR_U32(ctx, 31, 0x306888u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x306880u, 0x306888u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306888u;
label_306888:
    // 0x306888: 0x100000fa  b           . + 4 + (0xFA << 2)
label_30688c:
    if (ctx->pc == 0x30688Cu) {
        ctx->pc = 0x30688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306888u;
        // 0x30688c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306890u;
        goto label_306890;
    }
    ctx->pc = 0x306888u;
    {
        const bool branch_taken_0x306888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x30688Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306888u;
        // 0x30688c: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306888) {
            ctx->pc = 0x306C74u;
            goto label_306c74;
        }
    }
    ctx->pc = 0x306890u;
label_306890:
    // 0x306890: 0x3c120040  lui         $s2, 0x40
    ctx->pc = 0x306890u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)64 << 16));
label_306894:
    // 0x306894: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x306894u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306898:
    // 0x306898: 0x26523350  addiu       $s2, $s2, 0x3350
    ctx->pc = 0x306898u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 13136));
label_30689c:
    // 0x30689c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x30689cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3068a0:
    // 0x3068a0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3068a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3068a4:
    // 0x3068a4: 0x13843c  dsll32      $s0, $s3, 16
    ctx->pc = 0x3068a4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 19) << (32 + 16));
label_3068a8:
    // 0x3068a8: 0x8c43e8f0  lw          $v1, -0x1710($v0)
    ctx->pc = 0x3068a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_3068ac:
    // 0x3068ac: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x3068acu;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
label_3068b0:
    // 0x3068b0: 0x96240000  lhu         $a0, 0x0($s1)
    ctx->pc = 0x3068b0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3068b4:
    // 0x3068b4: 0x26460004  addiu       $a2, $s2, 0x4
    ctx->pc = 0x3068b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_3068b8:
    // 0x3068b8: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x3068b8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3068bc:
    // 0x3068bc: 0x703826  xor         $a3, $v1, $s0
    ctx->pc = 0x3068bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 16));
label_3068c0:
    // 0x3068c0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3068c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3068c4:
    // 0x3068c4: 0x7382b  sltu        $a3, $zero, $a3
    ctx->pc = 0x3068c4u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 7)) ? 1 : 0);
label_3068c8:
    // 0x3068c8: 0xc0ce5bc  jal         func_3396F0
label_3068cc:
    if (ctx->pc == 0x3068CCu) {
        ctx->pc = 0x3068CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068C8u;
        // 0x3068cc: 0xac47e8e0  sw          $a3, -0x1720($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961376), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068D0u;
        goto label_3068d0;
    }
    ctx->pc = 0x3068C8u;
    SET_GPR_U32(ctx, 31, 0x3068D0u);
    ctx->pc = 0x3068CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3068C8u;
    // 0x3068cc: 0xac47e8e0  sw          $a3, -0x1720($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961376), GPR_U32(ctx, 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x3068C8u, 0x3068D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068D0u;
label_3068d0:
    // 0x3068d0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3068d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3068d4:
    // 0x3068d4: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x3068d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_3068d8:
    // 0x3068d8: 0x14500009  bne         $v0, $s0, . + 4 + (0x9 << 2)
label_3068dc:
    if (ctx->pc == 0x3068DCu) {
        ctx->pc = 0x3068E0u;
        goto label_3068e0;
    }
    ctx->pc = 0x3068D8u;
    {
        const bool branch_taken_0x3068d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x3068d8) {
            ctx->pc = 0x306900u;
            goto label_306900;
        }
    }
    ctx->pc = 0x3068E0u;
label_3068e0:
    // 0x3068e0: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x3068e0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
label_3068e4:
    // 0x3068e4: 0x3c060040  lui         $a2, 0x40
    ctx->pc = 0x3068e4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64 << 16));
label_3068e8:
    // 0x3068e8: 0x96250002  lhu         $a1, 0x2($s1)
    ctx->pc = 0x3068e8u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
label_3068ec:
    // 0x3068ec: 0x24c63598  addiu       $a2, $a2, 0x3598
    ctx->pc = 0x3068ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 13720));
label_3068f0:
    // 0x3068f0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x3068f0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3068f4:
    // 0x3068f4: 0xc0ce5bc  jal         func_3396F0
label_3068f8:
    if (ctx->pc == 0x3068F8u) {
        ctx->pc = 0x3068F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3068F4u;
        // 0x3068f8: 0x2444ffee  addiu       $a0, $v0, -0x12 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3068FCu;
        goto label_3068fc;
    }
    ctx->pc = 0x3068F4u;
    SET_GPR_U32(ctx, 31, 0x3068FCu);
    ctx->pc = 0x3068F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3068F4u;
    // 0x3068f8: 0x2444ffee  addiu       $a0, $v0, -0x12 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967278));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x3068F4u, 0x3068FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3068FCu;
label_3068fc:
    // 0x3068fc: 0x0  nop
    ctx->pc = 0x3068fcu;
    // NOP
label_306900:
    // 0x306900: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x306900u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_306904:
    // 0x306904: 0x29c3c  dsll32      $s3, $v0, 16
    ctx->pc = 0x306904u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) << (32 + 16));
label_306908:
    // 0x306908: 0x2652002c  addiu       $s2, $s2, 0x2C
    ctx->pc = 0x306908u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
label_30690c:
    // 0x30690c: 0x139c3f  dsra32      $s3, $s3, 16
    ctx->pc = 0x30690cu;
    SET_GPR_S64(ctx, 19, GPR_S64(ctx, 19) >> (32 + 16));
label_306910:
    // 0x306910: 0x2a620005  slti        $v0, $s3, 0x5
    ctx->pc = 0x306910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)5) ? 1 : 0);
label_306914:
    // 0x306914: 0x1440ffe2  bnez        $v0, . + 4 + (-0x1E << 2)
label_306918:
    if (ctx->pc == 0x306918u) {
        ctx->pc = 0x306918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306914u;
        // 0x306918: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30691Cu;
        goto label_30691c;
    }
    ctx->pc = 0x306914u;
    {
        const bool branch_taken_0x306914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306914u;
        // 0x306918: 0x2631002c  addiu       $s1, $s1, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306914) {
            ctx->pc = 0x3068A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3068a0;
        }
    }
    ctx->pc = 0x30691Cu;
label_30691c:
    // 0x30691c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30691cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306920:
    // 0x306920: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x306920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_306924:
    // 0x306924: 0x90459730  lbu         $a1, -0x68D0($v0)
    ctx->pc = 0x306924u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306928:
    // 0x306928: 0x24633540  addiu       $v1, $v1, 0x3540
    ctx->pc = 0x306928u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13632));
label_30692c:
    // 0x30692c: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x30692cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306930:
    // 0x306930: 0x52080  sll         $a0, $a1, 2
    ctx->pc = 0x306930u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_306934:
    // 0x306934: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x306934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_306938:
    // 0x306938: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x306938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_30693c:
    // 0x30693c: 0x24423542  addiu       $v0, $v0, 0x3542
    ctx->pc = 0x30693cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13634));
label_306940:
    // 0x306940: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x306940u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_306944:
    // 0x306944: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x306944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_306948:
    // 0x306948: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x306948u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_30694c:
    // 0x30694c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x30694cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_306950:
    // 0x306950: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x306950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_306954:
    // 0x306954: 0x94450000  lhu         $a1, 0x0($v0)
    ctx->pc = 0x306954u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_306958:
    // 0x306958: 0x94640000  lhu         $a0, 0x0($v1)
    ctx->pc = 0x306958u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
label_30695c:
    // 0x30695c: 0xc0ce5bc  jal         func_3396F0
label_306960:
    if (ctx->pc == 0x306960u) {
        ctx->pc = 0x306960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x30695Cu;
        // 0x306960: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306964u;
        goto label_306964;
    }
    ctx->pc = 0x30695Cu;
    SET_GPR_U32(ctx, 31, 0x306964u);
    ctx->pc = 0x306960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x30695Cu;
    // 0x306960: 0x24660004  addiu       $a2, $v1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3396F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3396F0u, 0x30695Cu, 0x306964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306964u;
label_306964:
    // 0x306964: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306964u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306968:
    // 0x306968: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_30696c:
    // 0x30696c: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x30696cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306970:
    // 0x306970: 0xc068d08  jal         func_1A3420
label_306974:
    if (ctx->pc == 0x306974u) {
        ctx->pc = 0x306974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306970u;
        // 0x306974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306978u;
        goto label_306978;
    }
    ctx->pc = 0x306970u;
    SET_GPR_U32(ctx, 31, 0x306978u);
    ctx->pc = 0x306974u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306970u;
    // 0x306974: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x306970u, 0x306978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306978u;
label_306978:
    // 0x306978: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x306978u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
label_30697c:
    // 0x30697c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x30697cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306980:
    // 0x306980: 0x9042e818  lbu         $v0, -0x17E8($v0)
    ctx->pc = 0x306980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294961176)));
label_306984:
    // 0x306984: 0x1440006a  bnez        $v0, . + 4 + (0x6A << 2)
label_306988:
    if (ctx->pc == 0x306988u) {
        ctx->pc = 0x306988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306984u;
        // 0x306988: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x30698Cu;
        goto label_30698c;
    }
    ctx->pc = 0x306984u;
    {
        const bool branch_taken_0x306984 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x306988u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306984u;
        // 0x306988: 0x31c3f  dsra32      $v1, $v1, 16 (Delay Slot)
        SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306984) {
            ctx->pc = 0x306B30u;
            goto label_306b30;
        }
    }
    ctx->pc = 0x30698Cu;
label_30698c:
    // 0x30698c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x30698cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306990:
    // 0x306990: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x306990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306994:
    // 0x306994: 0x90449730  lbu         $a0, -0x68D0($v0)
    ctx->pc = 0x306994u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306998:
    // 0x306998: 0xc068d08  jal         func_1A3420
label_30699c:
    if (ctx->pc == 0x30699Cu) {
        ctx->pc = 0x30699Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306998u;
        // 0x30699c: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069A0u;
        goto label_3069a0;
    }
    ctx->pc = 0x306998u;
    SET_GPR_U32(ctx, 31, 0x3069A0u);
    ctx->pc = 0x30699Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306998u;
    // 0x30699c: 0x24066000  addiu       $a2, $zero, 0x6000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 24576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x306998u, 0x3069A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3069A0u;
label_3069a0:
    // 0x3069a0: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3069a4:
    if (ctx->pc == 0x3069A4u) {
        ctx->pc = 0x3069A8u;
        goto label_3069a8;
    }
    ctx->pc = 0x3069A0u;
    {
        const bool branch_taken_0x3069a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3069a0) {
            ctx->pc = 0x3069DCu;
            goto label_3069dc;
        }
    }
    ctx->pc = 0x3069A8u;
label_3069a8:
    // 0x3069a8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3069a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_3069ac:
    // 0x3069ac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x3069acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_3069b0:
    // 0x3069b0: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x3069b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_3069b4:
    // 0x3069b4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x3069b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_3069b8:
    // 0x3069b8: 0x8064e8f0  lb          $a0, -0x1710($v1)
    ctx->pc = 0x3069b8u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294961392)));
label_3069bc:
    // 0x3069bc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3069bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3069c0:
    // 0x3069c0: 0x2363c  dsll32      $a2, $v0, 24
    ctx->pc = 0x3069c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) << (32 + 24));
label_3069c4:
    // 0x3069c4: 0xc0cd978  jal         func_3365E0
label_3069c8:
    if (ctx->pc == 0x3069C8u) {
        ctx->pc = 0x3069C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069C4u;
        // 0x3069c8: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
        SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069CCu;
        goto label_3069cc;
    }
    ctx->pc = 0x3069C4u;
    SET_GPR_U32(ctx, 31, 0x3069CCu);
    ctx->pc = 0x3069C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3069C4u;
    // 0x3069c8: 0x6363f  dsra32      $a2, $a2, 24 (Delay Slot)
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3365E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3365E0u, 0x3069C4u, 0x3069CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3069CCu;
label_3069cc:
    // 0x3069cc: 0x21e3c  dsll32      $v1, $v0, 24
    ctx->pc = 0x3069ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 24));
label_3069d0:
    // 0x3069d0: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x3069d0u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_3069d4:
    // 0x3069d4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x3069d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_3069d8:
    // 0x3069d8: 0xac43e8f0  sw          $v1, -0x1710($v0)
    ctx->pc = 0x3069d8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961392), GPR_U32(ctx, 3));
label_3069dc:
    // 0x3069dc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x3069dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_3069e0:
    // 0x3069e0: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x3069e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_3069e4:
    // 0x3069e4: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x3069e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_3069e8:
    // 0x3069e8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3069e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_3069ec:
    // 0x3069ec: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x3069ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_3069f0:
    // 0x3069f0: 0xc0cda84  jal         func_336A10
label_3069f4:
    if (ctx->pc == 0x3069F4u) {
        ctx->pc = 0x3069F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3069F0u;
        // 0x3069f4: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3069F8u;
        goto label_3069f8;
    }
    ctx->pc = 0x3069F0u;
    SET_GPR_U32(ctx, 31, 0x3069F8u);
    ctx->pc = 0x3069F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3069F0u;
    // 0x3069f4: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x3069F0u, 0x3069F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3069F8u;
label_3069f8:
    // 0x3069f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_3069fc:
    if (ctx->pc == 0x3069FCu) {
        ctx->pc = 0x306A00u;
        goto label_306a00;
    }
    ctx->pc = 0x3069F8u;
    {
        const bool branch_taken_0x3069f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3069f8) {
            ctx->pc = 0x306A20u;
            goto label_306a20;
        }
    }
    ctx->pc = 0x306A00u;
label_306a00:
    // 0x306a00: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306a04:
    // 0x306a04: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x306a04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_306a08:
    // 0x306a08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_306a0c:
    if (ctx->pc == 0x306A0Cu) {
        ctx->pc = 0x306A10u;
        goto label_306a10;
    }
    ctx->pc = 0x306A08u;
    {
        const bool branch_taken_0x306a08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x306a08) {
            ctx->pc = 0x306A20u;
            goto label_306a20;
        }
    }
    ctx->pc = 0x306A10u;
label_306a10:
    // 0x306a10: 0xc0c1650  jal         func_305940
label_306a14:
    if (ctx->pc == 0x306A14u) {
        ctx->pc = 0x306A18u;
        goto label_306a18;
    }
    ctx->pc = 0x306A10u;
    SET_GPR_U32(ctx, 31, 0x306A18u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x306A10u, 0x306A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A18u;
label_306a18:
    // 0x306a18: 0x10000095  b           . + 4 + (0x95 << 2)
label_306a1c:
    if (ctx->pc == 0x306A1Cu) {
        ctx->pc = 0x306A20u;
        goto label_306a20;
    }
    ctx->pc = 0x306A18u;
    {
        const bool branch_taken_0x306a18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a18) {
            ctx->pc = 0x306C70u;
            goto label_306c70;
        }
    }
    ctx->pc = 0x306A20u;
label_306a20:
    // 0x306a20: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306a24:
    // 0x306a24: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x306a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_306a28:
    // 0x306a28: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x306a28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306a2c:
    // 0x306a2c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306a30:
    // 0x306a30: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x306a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_306a34:
    // 0x306a34: 0xc0cda84  jal         func_336A10
label_306a38:
    if (ctx->pc == 0x306A38u) {
        ctx->pc = 0x306A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A34u;
        // 0x306a38: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A3Cu;
        goto label_306a3c;
    }
    ctx->pc = 0x306A34u;
    SET_GPR_U32(ctx, 31, 0x306A3Cu);
    ctx->pc = 0x306A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A34u;
    // 0x306a38: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x306A34u, 0x306A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A3Cu;
label_306a3c:
    // 0x306a3c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_306a40:
    if (ctx->pc == 0x306A40u) {
        ctx->pc = 0x306A44u;
        goto label_306a44;
    }
    ctx->pc = 0x306A3Cu;
    {
        const bool branch_taken_0x306a3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a3c) {
            ctx->pc = 0x306A60u;
            goto label_306a60;
        }
    }
    ctx->pc = 0x306A44u;
label_306a44:
    // 0x306a44: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x306a44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_306a48:
    // 0x306a48: 0xc0538fc  jal         func_14E3F0
label_306a4c:
    if (ctx->pc == 0x306A4Cu) {
        ctx->pc = 0x306A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A48u;
        // 0x306a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A50u;
        goto label_306a50;
    }
    ctx->pc = 0x306A48u;
    SET_GPR_U32(ctx, 31, 0x306A50u);
    ctx->pc = 0x306A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A48u;
    // 0x306a4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306A48u, 0x306A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A50u;
label_306a50:
    // 0x306a50: 0xc0c1650  jal         func_305940
label_306a54:
    if (ctx->pc == 0x306A54u) {
        ctx->pc = 0x306A58u;
        goto label_306a58;
    }
    ctx->pc = 0x306A50u;
    SET_GPR_U32(ctx, 31, 0x306A58u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x306A50u, 0x306A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A58u;
label_306a58:
    // 0x306a58: 0x10000085  b           . + 4 + (0x85 << 2)
label_306a5c:
    if (ctx->pc == 0x306A5Cu) {
        ctx->pc = 0x306A60u;
        goto label_306a60;
    }
    ctx->pc = 0x306A58u;
    {
        const bool branch_taken_0x306a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a58) {
            ctx->pc = 0x306C70u;
            goto label_306c70;
        }
    }
    ctx->pc = 0x306A60u;
label_306a60:
    // 0x306a60: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306a60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306a64:
    // 0x306a64: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x306a64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_306a68:
    // 0x306a68: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x306a68u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306a6c:
    // 0x306a6c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306a70:
    // 0x306a70: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x306a70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_306a74:
    // 0x306a74: 0xc0cda84  jal         func_336A10
label_306a78:
    if (ctx->pc == 0x306A78u) {
        ctx->pc = 0x306A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A74u;
        // 0x306a78: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A7Cu;
        goto label_306a7c;
    }
    ctx->pc = 0x306A74u;
    SET_GPR_U32(ctx, 31, 0x306A7Cu);
    ctx->pc = 0x306A78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A74u;
    // 0x306a78: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x306A74u, 0x306A7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A7Cu;
label_306a7c:
    // 0x306a7c: 0x1040007c  beqz        $v0, . + 4 + (0x7C << 2)
label_306a80:
    if (ctx->pc == 0x306A80u) {
        ctx->pc = 0x306A84u;
        goto label_306a84;
    }
    ctx->pc = 0x306A7Cu;
    {
        const bool branch_taken_0x306a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306a7c) {
            ctx->pc = 0x306C70u;
            goto label_306c70;
        }
    }
    ctx->pc = 0x306A84u;
label_306a84:
    // 0x306a84: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x306a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_306a88:
    // 0x306a88: 0xc0538fc  jal         func_14E3F0
label_306a8c:
    if (ctx->pc == 0x306A8Cu) {
        ctx->pc = 0x306A8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A88u;
        // 0x306a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306A90u;
        goto label_306a90;
    }
    ctx->pc = 0x306A88u;
    SET_GPR_U32(ctx, 31, 0x306A90u);
    ctx->pc = 0x306A8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306A88u;
    // 0x306a8c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306A88u, 0x306A90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306A90u;
label_306a90:
    // 0x306a90: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306a90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306a94:
    // 0x306a94: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x306a94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_306a98:
    // 0x306a98: 0x8c66e8f0  lw          $a2, -0x1710($v1)
    ctx->pc = 0x306a98u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961392)));
label_306a9c:
    // 0x306a9c: 0x50c4001f  beql        $a2, $a0, . + 4 + (0x1F << 2)
label_306aa0:
    if (ctx->pc == 0x306AA0u) {
        ctx->pc = 0x306AA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306A9Cu;
        // 0x306aa0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306AA4u;
        goto label_306aa4;
    }
    ctx->pc = 0x306A9Cu;
    {
        const bool branch_taken_0x306a9c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x306a9c) {
            ctx->pc = 0x306AA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306A9Cu;
            // 0x306aa0: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306B1Cu;
            goto label_306b1c;
        }
    }
    ctx->pc = 0x306AA4u;
label_306aa4:
    // 0x306aa4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x306aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_306aa8:
    // 0x306aa8: 0x10c30013  beq         $a2, $v1, . + 4 + (0x13 << 2)
label_306aac:
    if (ctx->pc == 0x306AACu) {
        ctx->pc = 0x306AB0u;
        goto label_306ab0;
    }
    ctx->pc = 0x306AA8u;
    {
        const bool branch_taken_0x306aa8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x306aa8) {
            ctx->pc = 0x306AF8u;
            goto label_306af8;
        }
    }
    ctx->pc = 0x306AB0u;
label_306ab0:
    // 0x306ab0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x306ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_306ab4:
    // 0x306ab4: 0x10c3000b  beq         $a2, $v1, . + 4 + (0xB << 2)
label_306ab8:
    if (ctx->pc == 0x306AB8u) {
        ctx->pc = 0x306ABCu;
        goto label_306abc;
    }
    ctx->pc = 0x306AB4u;
    {
        const bool branch_taken_0x306ab4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x306ab4) {
            ctx->pc = 0x306AE4u;
            goto label_306ae4;
        }
    }
    ctx->pc = 0x306ABCu;
label_306abc:
    // 0x306abc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x306abcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306ac0:
    // 0x306ac0: 0x10c50003  beq         $a2, $a1, . + 4 + (0x3 << 2)
label_306ac4:
    if (ctx->pc == 0x306AC4u) {
        ctx->pc = 0x306AC8u;
        goto label_306ac8;
    }
    ctx->pc = 0x306AC0u;
    {
        const bool branch_taken_0x306ac0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x306ac0) {
            ctx->pc = 0x306AD0u;
            goto label_306ad0;
        }
    }
    ctx->pc = 0x306AC8u;
label_306ac8:
    // 0x306ac8: 0x10000069  b           . + 4 + (0x69 << 2)
label_306acc:
    if (ctx->pc == 0x306ACCu) {
        ctx->pc = 0x306AD0u;
        goto label_306ad0;
    }
    ctx->pc = 0x306AC8u;
    {
        const bool branch_taken_0x306ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306ac8) {
            ctx->pc = 0x306C70u;
            goto label_306c70;
        }
    }
    ctx->pc = 0x306AD0u;
label_306ad0:
    // 0x306ad0: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x306ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
label_306ad4:
    // 0x306ad4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306ad8:
    // 0x306ad8: 0xa065e818  sb          $a1, -0x17E8($v1)
    ctx->pc = 0x306ad8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 5));
label_306adc:
    // 0x306adc: 0x10000064  b           . + 4 + (0x64 << 2)
label_306ae0:
    if (ctx->pc == 0x306AE0u) {
        ctx->pc = 0x306AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306ADCu;
        // 0x306ae0: 0xac80e8e8  sw          $zero, -0x1718($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306AE4u;
        goto label_306ae4;
    }
    ctx->pc = 0x306ADCu;
    {
        const bool branch_taken_0x306adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306AE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306ADCu;
        // 0x306ae0: 0xac80e8e8  sw          $zero, -0x1718($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4294961384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306adc) {
            ctx->pc = 0x306C70u;
            goto label_306c70;
        }
    }
    ctx->pc = 0x306AE4u;
label_306ae4:
    // 0x306ae4: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x306ae4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_306ae8:
    // 0x306ae8: 0xc0c1678  jal         func_3059E0
label_306aec:
    if (ctx->pc == 0x306AECu) {
        ctx->pc = 0x306AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306AE8u;
        // 0x306aec: 0x24847110  addiu       $a0, $a0, 0x7110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28944));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306AF0u;
        goto label_306af0;
    }
    ctx->pc = 0x306AE8u;
    SET_GPR_U32(ctx, 31, 0x306AF0u);
    ctx->pc = 0x306AECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306AE8u;
    // 0x306aec: 0x24847110  addiu       $a0, $a0, 0x7110 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28944));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x306AE8u, 0x306AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306AF0u;
label_306af0:
    // 0x306af0: 0x1000005f  b           . + 4 + (0x5F << 2)
label_306af4:
    if (ctx->pc == 0x306AF4u) {
        ctx->pc = 0x306AF8u;
        goto label_306af8;
    }
    ctx->pc = 0x306AF0u;
    {
        const bool branch_taken_0x306af0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306af0) {
            ctx->pc = 0x306C70u;
            goto label_306c70;
        }
    }
    ctx->pc = 0x306AF8u;
label_306af8:
    // 0x306af8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306afc:
    // 0x306afc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306afcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306b00:
    // 0x306b00: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x306b00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
label_306b04:
    // 0x306b04: 0xac60e808  sw          $zero, -0x17F8($v1)
    ctx->pc = 0x306b04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961160), GPR_U32(ctx, 0));
label_306b08:
    // 0x306b08: 0x24843300  addiu       $a0, $a0, 0x3300
    ctx->pc = 0x306b08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13056));
label_306b0c:
    // 0x306b0c: 0xc0c1678  jal         func_3059E0
label_306b10:
    if (ctx->pc == 0x306B10u) {
        ctx->pc = 0x306B10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B0Cu;
        // 0x306b10: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B14u;
        goto label_306b14;
    }
    ctx->pc = 0x306B0Cu;
    SET_GPR_U32(ctx, 31, 0x306B14u);
    ctx->pc = 0x306B10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B0Cu;
    // 0x306b10: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x306B0Cu, 0x306B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B14u;
label_306b14:
    // 0x306b14: 0x10000056  b           . + 4 + (0x56 << 2)
label_306b18:
    if (ctx->pc == 0x306B18u) {
        ctx->pc = 0x306B1Cu;
        goto label_306b1c;
    }
    ctx->pc = 0x306B14u;
    {
        const bool branch_taken_0x306b14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306b14) {
            ctx->pc = 0x306C70u;
            goto label_306c70;
        }
    }
    ctx->pc = 0x306B1Cu;
label_306b1c:
    // 0x306b1c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306b20:
    // 0x306b20: 0xa064e818  sb          $a0, -0x17E8($v1)
    ctx->pc = 0x306b20u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 4));
label_306b24:
    // 0x306b24: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306b24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306b28:
    // 0x306b28: 0x10000051  b           . + 4 + (0x51 << 2)
label_306b2c:
    if (ctx->pc == 0x306B2Cu) {
        ctx->pc = 0x306B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B28u;
        // 0x306b2c: 0xac60e8e8  sw          $zero, -0x1718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B30u;
        goto label_306b30;
    }
    ctx->pc = 0x306B28u;
    {
        const bool branch_taken_0x306b28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B28u;
        // 0x306b2c: 0xac60e8e8  sw          $zero, -0x1718($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961384), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b28) {
            ctx->pc = 0x306C70u;
            goto label_306c70;
        }
    }
    ctx->pc = 0x306B30u;
label_306b30:
    // 0x306b30: 0x3143c  dsll32      $v0, $v1, 16
    ctx->pc = 0x306b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 16));
label_306b34:
    // 0x306b34: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x306b34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_306b38:
    // 0x306b38: 0x304200a0  andi        $v0, $v0, 0xA0
    ctx->pc = 0x306b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)160);
label_306b3c:
    // 0x306b3c: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_306b40:
    if (ctx->pc == 0x306B40u) {
        ctx->pc = 0x306B44u;
        goto label_306b44;
    }
    ctx->pc = 0x306B3Cu;
    {
        const bool branch_taken_0x306b3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306b3c) {
            ctx->pc = 0x306B6Cu;
            goto label_306b6c;
        }
    }
    ctx->pc = 0x306B44u;
label_306b44:
    // 0x306b44: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x306b44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
label_306b48:
    // 0x306b48: 0xc0538fc  jal         func_14E3F0
label_306b4c:
    if (ctx->pc == 0x306B4Cu) {
        ctx->pc = 0x306B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B48u;
        // 0x306b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B50u;
        goto label_306b50;
    }
    ctx->pc = 0x306B48u;
    SET_GPR_U32(ctx, 31, 0x306B50u);
    ctx->pc = 0x306B4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B48u;
    // 0x306b4c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306B48u, 0x306B50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B50u;
label_306b50:
    // 0x306b50: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306b50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306b54:
    // 0x306b54: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306b58:
    // 0x306b58: 0x8c63e8e8  lw          $v1, -0x1718($v1)
    ctx->pc = 0x306b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961384)));
label_306b5c:
    // 0x306b5c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x306b5cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_306b60:
    // 0x306b60: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x306b60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_306b64:
    // 0x306b64: 0x10000040  b           . + 4 + (0x40 << 2)
label_306b68:
    if (ctx->pc == 0x306B68u) {
        ctx->pc = 0x306B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B64u;
        // 0x306b68: 0xac43e8e8  sw          $v1, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B6Cu;
        goto label_306b6c;
    }
    ctx->pc = 0x306B64u;
    {
        const bool branch_taken_0x306b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B64u;
        // 0x306b68: 0xac43e8e8  sw          $v1, -0x1718($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306b64) {
            ctx->pc = 0x306C68u;
            goto label_306c68;
        }
    }
    ctx->pc = 0x306B6Cu;
label_306b6c:
    // 0x306b6c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306b70:
    // 0x306b70: 0x24042000  addiu       $a0, $zero, 0x2000
    ctx->pc = 0x306b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_306b74:
    // 0x306b74: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x306b74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306b78:
    // 0x306b78: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306b7c:
    // 0x306b7c: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x306b7cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_306b80:
    // 0x306b80: 0xc0cda84  jal         func_336A10
label_306b84:
    if (ctx->pc == 0x306B84u) {
        ctx->pc = 0x306B84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B80u;
        // 0x306b84: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306B88u;
        goto label_306b88;
    }
    ctx->pc = 0x306B80u;
    SET_GPR_U32(ctx, 31, 0x306B88u);
    ctx->pc = 0x306B84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306B80u;
    // 0x306b84: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x306B80u, 0x306B88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306B88u;
label_306b88:
    // 0x306b88: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
label_306b8c:
    if (ctx->pc == 0x306B8Cu) {
        ctx->pc = 0x306B90u;
        goto label_306b90;
    }
    ctx->pc = 0x306B88u;
    {
        const bool branch_taken_0x306b88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306b88) {
            ctx->pc = 0x306C30u;
            goto label_306c30;
        }
    }
    ctx->pc = 0x306B90u;
label_306b90:
    // 0x306b90: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306b90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306b94:
    // 0x306b94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306b98:
    // 0x306b98: 0x8c42e8e8  lw          $v0, -0x1718($v0)
    ctx->pc = 0x306b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961384)));
label_306b9c:
    // 0x306b9c: 0x5443001f  bnel        $v0, $v1, . + 4 + (0x1F << 2)
label_306ba0:
    if (ctx->pc == 0x306BA0u) {
        ctx->pc = 0x306BA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306B9Cu;
        // 0x306ba0: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BA4u;
        goto label_306ba4;
    }
    ctx->pc = 0x306B9Cu;
    {
        const bool branch_taken_0x306b9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306b9c) {
            ctx->pc = 0x306BA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x306B9Cu;
            // 0x306ba0: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x306C1Cu;
            goto label_306c1c;
        }
    }
    ctx->pc = 0x306BA4u;
label_306ba4:
    // 0x306ba4: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x306ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
label_306ba8:
    // 0x306ba8: 0xc0538fc  jal         func_14E3F0
label_306bac:
    if (ctx->pc == 0x306BACu) {
        ctx->pc = 0x306BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BA8u;
        // 0x306bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BB0u;
        goto label_306bb0;
    }
    ctx->pc = 0x306BA8u;
    SET_GPR_U32(ctx, 31, 0x306BB0u);
    ctx->pc = 0x306BACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306BA8u;
    // 0x306bac: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306BA8u, 0x306BB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BB0u;
label_306bb0:
    // 0x306bb0: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306bb4:
    // 0x306bb4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x306bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306bb8:
    // 0x306bb8: 0x8c42e8f0  lw          $v0, -0x1710($v0)
    ctx->pc = 0x306bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961392)));
label_306bbc:
    // 0x306bbc: 0x14430012  bne         $v0, $v1, . + 4 + (0x12 << 2)
label_306bc0:
    if (ctx->pc == 0x306BC0u) {
        ctx->pc = 0x306BC4u;
        goto label_306bc4;
    }
    ctx->pc = 0x306BBCu;
    {
        const bool branch_taken_0x306bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x306bbc) {
            ctx->pc = 0x306C08u;
            goto label_306c08;
        }
    }
    ctx->pc = 0x306BC4u;
label_306bc4:
    // 0x306bc4: 0xc0c1650  jal         func_305940
label_306bc8:
    if (ctx->pc == 0x306BC8u) {
        ctx->pc = 0x306BCCu;
        goto label_306bcc;
    }
    ctx->pc = 0x306BC4u;
    SET_GPR_U32(ctx, 31, 0x306BCCu);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x306BC4u, 0x306BCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BCCu;
label_306bcc:
    // 0x306bcc: 0xc055684  jal         func_155A10
label_306bd0:
    if (ctx->pc == 0x306BD0u) {
        ctx->pc = 0x306BD4u;
        goto label_306bd4;
    }
    ctx->pc = 0x306BCCu;
    SET_GPR_U32(ctx, 31, 0x306BD4u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x306BCCu, 0x306BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BD4u;
label_306bd4:
    // 0x306bd4: 0xc05347c  jal         func_14D1F0
label_306bd8:
    if (ctx->pc == 0x306BD8u) {
        ctx->pc = 0x306BDCu;
        goto label_306bdc;
    }
    ctx->pc = 0x306BD4u;
    SET_GPR_U32(ctx, 31, 0x306BDCu);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x306BD4u, 0x306BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BDCu;
label_306bdc:
    // 0x306bdc: 0xc068078  jal         func_1A01E0
label_306be0:
    if (ctx->pc == 0x306BE0u) {
        ctx->pc = 0x306BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BDCu;
        // 0x306be0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BE4u;
        goto label_306be4;
    }
    ctx->pc = 0x306BDCu;
    SET_GPR_U32(ctx, 31, 0x306BE4u);
    ctx->pc = 0x306BE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306BDCu;
    // 0x306be0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A01E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A01E0u, 0x306BDCu, 0x306BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BE4u;
label_306be4:
    // 0x306be4: 0xc068078  jal         func_1A01E0
label_306be8:
    if (ctx->pc == 0x306BE8u) {
        ctx->pc = 0x306BE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BE4u;
        // 0x306be8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306BECu;
        goto label_306bec;
    }
    ctx->pc = 0x306BE4u;
    SET_GPR_U32(ctx, 31, 0x306BECu);
    ctx->pc = 0x306BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306BE4u;
    // 0x306be8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A01E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A01E0u, 0x306BE4u, 0x306BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306BECu;
label_306bec:
    // 0x306bec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x306becu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_306bf0:
    // 0x306bf0: 0x3c040013  lui         $a0, 0x13
    ctx->pc = 0x306bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)19 << 16));
label_306bf4:
    // 0x306bf4: 0x24840ee0  addiu       $a0, $a0, 0xEE0
    ctx->pc = 0x306bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 3808));
label_306bf8:
    // 0x306bf8: 0xc0558e0  jal         func_156380
label_306bfc:
    if (ctx->pc == 0x306BFCu) {
        ctx->pc = 0x306BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306BF8u;
        // 0x306bfc: 0xa040d9f8  sb          $zero, -0x2608($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294957560), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C00u;
        goto label_306c00;
    }
    ctx->pc = 0x306BF8u;
    SET_GPR_U32(ctx, 31, 0x306C00u);
    ctx->pc = 0x306BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306BF8u;
    // 0x306bfc: 0xa040d9f8  sb          $zero, -0x2608($v0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957560), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x306BF8u, 0x306C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C00u;
label_306c00:
    // 0x306c00: 0x10000019  b           . + 4 + (0x19 << 2)
label_306c04:
    if (ctx->pc == 0x306C04u) {
        ctx->pc = 0x306C08u;
        goto label_306c08;
    }
    ctx->pc = 0x306C00u;
    {
        const bool branch_taken_0x306c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c00) {
            ctx->pc = 0x306C68u;
            goto label_306c68;
        }
    }
    ctx->pc = 0x306C08u;
label_306c08:
    // 0x306c08: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x306c08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_306c0c:
    // 0x306c0c: 0xc0c1678  jal         func_3059E0
label_306c10:
    if (ctx->pc == 0x306C10u) {
        ctx->pc = 0x306C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C0Cu;
        // 0x306c10: 0x24846d50  addiu       $a0, $a0, 0x6D50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C14u;
        goto label_306c14;
    }
    ctx->pc = 0x306C0Cu;
    SET_GPR_U32(ctx, 31, 0x306C14u);
    ctx->pc = 0x306C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306C0Cu;
    // 0x306c10: 0x24846d50  addiu       $a0, $a0, 0x6D50 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 27984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x306C0Cu, 0x306C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C14u;
label_306c14:
    // 0x306c14: 0x10000014  b           . + 4 + (0x14 << 2)
label_306c18:
    if (ctx->pc == 0x306C18u) {
        ctx->pc = 0x306C1Cu;
        goto label_306c1c;
    }
    ctx->pc = 0x306C14u;
    {
        const bool branch_taken_0x306c14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c14) {
            ctx->pc = 0x306C68u;
            goto label_306c68;
        }
    }
    ctx->pc = 0x306C1Cu;
label_306c1c:
    // 0x306c1c: 0xc0538fc  jal         func_14E3F0
label_306c20:
    if (ctx->pc == 0x306C20u) {
        ctx->pc = 0x306C20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C1Cu;
        // 0x306c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C24u;
        goto label_306c24;
    }
    ctx->pc = 0x306C1Cu;
    SET_GPR_U32(ctx, 31, 0x306C24u);
    ctx->pc = 0x306C20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306C1Cu;
    // 0x306c20: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306C1Cu, 0x306C24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C24u;
label_306c24:
    // 0x306c24: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306c24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306c28:
    // 0x306c28: 0x1000000f  b           . + 4 + (0xF << 2)
label_306c2c:
    if (ctx->pc == 0x306C2Cu) {
        ctx->pc = 0x306C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C28u;
        // 0x306c2c: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C30u;
        goto label_306c30;
    }
    ctx->pc = 0x306C28u;
    {
        const bool branch_taken_0x306c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C28u;
        // 0x306c2c: 0xa040e818  sb          $zero, -0x17E8($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306c28) {
            ctx->pc = 0x306C68u;
            goto label_306c68;
        }
    }
    ctx->pc = 0x306C30u;
label_306c30:
    // 0x306c30: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306c34:
    // 0x306c34: 0x24044000  addiu       $a0, $zero, 0x4000
    ctx->pc = 0x306c34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_306c38:
    // 0x306c38: 0x90429730  lbu         $v0, -0x68D0($v0)
    ctx->pc = 0x306c38u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_306c3c:
    // 0x306c3c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x306c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_306c40:
    // 0x306c40: 0x22e3c  dsll32      $a1, $v0, 24
    ctx->pc = 0x306c40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 24));
label_306c44:
    // 0x306c44: 0xc0cda84  jal         func_336A10
label_306c48:
    if (ctx->pc == 0x306C48u) {
        ctx->pc = 0x306C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C44u;
        // 0x306c48: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
        SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C4Cu;
        goto label_306c4c;
    }
    ctx->pc = 0x306C44u;
    SET_GPR_U32(ctx, 31, 0x306C4Cu);
    ctx->pc = 0x306C48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306C44u;
    // 0x306c48: 0x52e3f  dsra32      $a1, $a1, 24 (Delay Slot)
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x336A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x336A10u, 0x306C44u, 0x306C4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C4Cu;
label_306c4c:
    // 0x306c4c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_306c50:
    if (ctx->pc == 0x306C50u) {
        ctx->pc = 0x306C54u;
        goto label_306c54;
    }
    ctx->pc = 0x306C4Cu;
    {
        const bool branch_taken_0x306c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306c4c) {
            ctx->pc = 0x306C68u;
            goto label_306c68;
        }
    }
    ctx->pc = 0x306C54u;
label_306c54:
    // 0x306c54: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x306c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
label_306c58:
    // 0x306c58: 0xc0538fc  jal         func_14E3F0
label_306c5c:
    if (ctx->pc == 0x306C5Cu) {
        ctx->pc = 0x306C5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C58u;
        // 0x306c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C60u;
        goto label_306c60;
    }
    ctx->pc = 0x306C58u;
    SET_GPR_U32(ctx, 31, 0x306C60u);
    ctx->pc = 0x306C5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306C58u;
    // 0x306c5c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x306C58u, 0x306C60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C60u;
label_306c60:
    // 0x306c60: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x306c60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
label_306c64:
    // 0x306c64: 0xa040e818  sb          $zero, -0x17E8($v0)
    ctx->pc = 0x306c64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_306c68:
    // 0x306c68: 0xc0ce7ec  jal         func_339FB0
label_306c6c:
    if (ctx->pc == 0x306C6Cu) {
        ctx->pc = 0x306C70u;
        goto label_306c70;
    }
    ctx->pc = 0x306C68u;
    SET_GPR_U32(ctx, 31, 0x306C70u);
    ctx->pc = 0x339FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339FB0u, 0x306C68u, 0x306C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306C70u;
label_306c70:
    // 0x306c70: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x306c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_306c74:
    // 0x306c74: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x306c74u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_306c78:
    // 0x306c78: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x306c78u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_306c7c:
    // 0x306c7c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x306c7cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_306c80:
    // 0x306c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x306c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_306c84:
    // 0x306c84: 0x3e00008  jr          $ra
label_306c88:
    if (ctx->pc == 0x306C88u) {
        ctx->pc = 0x306C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C84u;
        // 0x306c88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306C8Cu;
        goto label_306c8c;
    }
    ctx->pc = 0x306C84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C84u;
        // 0x306c88: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306C84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306C8Cu;
label_306c8c:
    // 0x306c8c: 0x0  nop
    ctx->pc = 0x306c8cu;
    // NOP
label_306c90:
    // 0x306c90: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_306c94:
    // 0x306c94: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x306c94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306c98:
    // 0x306c98: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306c98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_306c9c:
    // 0x306c9c: 0xc0c06b8  jal         func_301AE0
label_306ca0:
    if (ctx->pc == 0x306CA0u) {
        ctx->pc = 0x306CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306C9Cu;
        // 0x306ca0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CA4u;
        goto label_306ca4;
    }
    ctx->pc = 0x306C9Cu;
    SET_GPR_U32(ctx, 31, 0x306CA4u);
    ctx->pc = 0x306CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306C9Cu;
    // 0x306ca0: 0x24050009  addiu       $a1, $zero, 0x9 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x301AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x301AE0u, 0x306C9Cu, 0x306CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306CA4u;
label_306ca4:
    // 0x306ca4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306ca8:
    // 0x306ca8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x306ca8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
label_306cac:
    // 0x306cac: 0x90449780  lbu         $a0, -0x6880($v0)
    ctx->pc = 0x306cacu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
label_306cb0:
    // 0x306cb0: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x306cb0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
label_306cb4:
    // 0x306cb4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x306cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_306cb8:
    // 0x306cb8: 0x10830019  beq         $a0, $v1, . + 4 + (0x19 << 2)
label_306cbc:
    if (ctx->pc == 0x306CBCu) {
        ctx->pc = 0x306CC0u;
        goto label_306cc0;
    }
    ctx->pc = 0x306CB8u;
    {
        const bool branch_taken_0x306cb8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x306cb8) {
            ctx->pc = 0x306D20u;
            goto label_306d20;
        }
    }
    ctx->pc = 0x306CC0u;
label_306cc0:
    // 0x306cc0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x306cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_306cc4:
    // 0x306cc4: 0x10820011  beq         $a0, $v0, . + 4 + (0x11 << 2)
label_306cc8:
    if (ctx->pc == 0x306CC8u) {
        ctx->pc = 0x306CCCu;
        goto label_306ccc;
    }
    ctx->pc = 0x306CC4u;
    {
        const bool branch_taken_0x306cc4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x306cc4) {
            ctx->pc = 0x306D0Cu;
            goto label_306d0c;
        }
    }
    ctx->pc = 0x306CCCu;
label_306ccc:
    // 0x306ccc: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x306cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_306cd0:
    // 0x306cd0: 0x1082000e  beq         $a0, $v0, . + 4 + (0xE << 2)
label_306cd4:
    if (ctx->pc == 0x306CD4u) {
        ctx->pc = 0x306CD8u;
        goto label_306cd8;
    }
    ctx->pc = 0x306CD0u;
    {
        const bool branch_taken_0x306cd0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x306cd0) {
            ctx->pc = 0x306D0Cu;
            goto label_306d0c;
        }
    }
    ctx->pc = 0x306CD8u;
label_306cd8:
    // 0x306cd8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x306cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_306cdc:
    // 0x306cdc: 0x1082000b  beq         $a0, $v0, . + 4 + (0xB << 2)
label_306ce0:
    if (ctx->pc == 0x306CE0u) {
        ctx->pc = 0x306CE4u;
        goto label_306ce4;
    }
    ctx->pc = 0x306CDCu;
    {
        const bool branch_taken_0x306cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x306cdc) {
            ctx->pc = 0x306D0Cu;
            goto label_306d0c;
        }
    }
    ctx->pc = 0x306CE4u;
label_306ce4:
    // 0x306ce4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x306ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_306ce8:
    // 0x306ce8: 0x10820003  beq         $a0, $v0, . + 4 + (0x3 << 2)
label_306cec:
    if (ctx->pc == 0x306CECu) {
        ctx->pc = 0x306CF0u;
        goto label_306cf0;
    }
    ctx->pc = 0x306CE8u;
    {
        const bool branch_taken_0x306ce8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x306ce8) {
            ctx->pc = 0x306CF8u;
            goto label_306cf8;
        }
    }
    ctx->pc = 0x306CF0u;
label_306cf0:
    // 0x306cf0: 0x10000010  b           . + 4 + (0x10 << 2)
label_306cf4:
    if (ctx->pc == 0x306CF4u) {
        ctx->pc = 0x306CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CF0u;
        // 0x306cf4: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306CF8u;
        goto label_306cf8;
    }
    ctx->pc = 0x306CF0u;
    {
        const bool branch_taken_0x306cf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CF0u;
        // 0x306cf4: 0x3c040030  lui         $a0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306cf0) {
            ctx->pc = 0x306D34u;
            goto label_306d34;
        }
    }
    ctx->pc = 0x306CF8u;
label_306cf8:
    // 0x306cf8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x306cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_306cfc:
    // 0x306cfc: 0xc0c1678  jal         func_3059E0
label_306d00:
    if (ctx->pc == 0x306D00u) {
        ctx->pc = 0x306D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306CFCu;
        // 0x306d00: 0x24845a00  addiu       $a0, $a0, 0x5A00 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D04u;
        goto label_306d04;
    }
    ctx->pc = 0x306CFCu;
    SET_GPR_U32(ctx, 31, 0x306D04u);
    ctx->pc = 0x306D00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306CFCu;
    // 0x306d00: 0x24845a00  addiu       $a0, $a0, 0x5A00 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x306CFCu, 0x306D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D04u;
label_306d04:
    // 0x306d04: 0x1000000e  b           . + 4 + (0xE << 2)
label_306d08:
    if (ctx->pc == 0x306D08u) {
        ctx->pc = 0x306D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D04u;
        // 0x306d08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D0Cu;
        goto label_306d0c;
    }
    ctx->pc = 0x306D04u;
    {
        const bool branch_taken_0x306d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D04u;
        // 0x306d08: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306d04) {
            ctx->pc = 0x306D40u;
            goto label_306d40;
        }
    }
    ctx->pc = 0x306D0Cu;
label_306d0c:
    // 0x306d0c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x306d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_306d10:
    // 0x306d10: 0xc0c1678  jal         func_3059E0
label_306d14:
    if (ctx->pc == 0x306D14u) {
        ctx->pc = 0x306D14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D10u;
        // 0x306d14: 0x24846830  addiu       $a0, $a0, 0x6830 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D18u;
        goto label_306d18;
    }
    ctx->pc = 0x306D10u;
    SET_GPR_U32(ctx, 31, 0x306D18u);
    ctx->pc = 0x306D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D10u;
    // 0x306d14: 0x24846830  addiu       $a0, $a0, 0x6830 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 26672));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x306D10u, 0x306D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D18u;
label_306d18:
    // 0x306d18: 0x10000008  b           . + 4 + (0x8 << 2)
label_306d1c:
    if (ctx->pc == 0x306D1Cu) {
        ctx->pc = 0x306D20u;
        goto label_306d20;
    }
    ctx->pc = 0x306D18u;
    {
        const bool branch_taken_0x306d18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306d18) {
            ctx->pc = 0x306D3Cu;
            goto label_306d3c;
        }
    }
    ctx->pc = 0x306D20u;
label_306d20:
    // 0x306d20: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x306d20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_306d24:
    // 0x306d24: 0xc0c1678  jal         func_3059E0
label_306d28:
    if (ctx->pc == 0x306D28u) {
        ctx->pc = 0x306D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D24u;
        // 0x306d28: 0x248461f0  addiu       $a0, $a0, 0x61F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D2Cu;
        goto label_306d2c;
    }
    ctx->pc = 0x306D24u;
    SET_GPR_U32(ctx, 31, 0x306D2Cu);
    ctx->pc = 0x306D28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D24u;
    // 0x306d28: 0x248461f0  addiu       $a0, $a0, 0x61F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 25072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x306D24u, 0x306D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D2Cu;
label_306d2c:
    // 0x306d2c: 0x10000003  b           . + 4 + (0x3 << 2)
label_306d30:
    if (ctx->pc == 0x306D30u) {
        ctx->pc = 0x306D34u;
        goto label_306d34;
    }
    ctx->pc = 0x306D2Cu;
    {
        const bool branch_taken_0x306d2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306d2c) {
            ctx->pc = 0x306D3Cu;
            goto label_306d3c;
        }
    }
    ctx->pc = 0x306D34u;
label_306d34:
    // 0x306d34: 0xc0c1678  jal         func_3059E0
label_306d38:
    if (ctx->pc == 0x306D38u) {
        ctx->pc = 0x306D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D34u;
        // 0x306d38: 0x24845df0  addiu       $a0, $a0, 0x5DF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D3Cu;
        goto label_306d3c;
    }
    ctx->pc = 0x306D34u;
    SET_GPR_U32(ctx, 31, 0x306D3Cu);
    ctx->pc = 0x306D38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306D34u;
    // 0x306d38: 0x24845df0  addiu       $a0, $a0, 0x5DF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3059E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3059E0u, 0x306D34u, 0x306D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D3Cu;
label_306d3c:
    // 0x306d3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306d3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306d40:
    // 0x306d40: 0x3e00008  jr          $ra
label_306d44:
    if (ctx->pc == 0x306D44u) {
        ctx->pc = 0x306D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D40u;
        // 0x306d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306D48u;
        goto label_306d48;
    }
    ctx->pc = 0x306D40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306D40u;
        // 0x306d44: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306D40u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306D48u;
label_306d48:
    // 0x306d48: 0x0  nop
    ctx->pc = 0x306d48u;
    // NOP
label_306d4c:
    // 0x306d4c: 0x0  nop
    ctx->pc = 0x306d4cu;
    // NOP
label_306d50:
    // 0x306d50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_306d54:
    // 0x306d54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_306d58:
    // 0x306d58: 0xc055684  jal         func_155A10
label_306d5c:
    if (ctx->pc == 0x306D5Cu) {
        ctx->pc = 0x306D60u;
        goto label_306d60;
    }
    ctx->pc = 0x306D58u;
    SET_GPR_U32(ctx, 31, 0x306D60u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x306D58u, 0x306D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D60u;
label_306d60:
    // 0x306d60: 0xc05347c  jal         func_14D1F0
label_306d64:
    if (ctx->pc == 0x306D64u) {
        ctx->pc = 0x306D68u;
        goto label_306d68;
    }
    ctx->pc = 0x306D60u;
    SET_GPR_U32(ctx, 31, 0x306D68u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x306D60u, 0x306D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D68u;
label_306d68:
    // 0x306d68: 0xc0692c0  jal         func_1A4B00
label_306d6c:
    if (ctx->pc == 0x306D6Cu) {
        ctx->pc = 0x306D70u;
        goto label_306d70;
    }
    ctx->pc = 0x306D68u;
    SET_GPR_U32(ctx, 31, 0x306D70u);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x306D68u, 0x306D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D70u;
label_306d70:
    // 0x306d70: 0xc0cb1f4  jal         func_32C7D0
label_306d74:
    if (ctx->pc == 0x306D74u) {
        ctx->pc = 0x306D78u;
        goto label_306d78;
    }
    ctx->pc = 0x306D70u;
    SET_GPR_U32(ctx, 31, 0x306D78u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x306D70u, 0x306D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D78u;
label_306d78:
    // 0x306d78: 0xc068244  jal         func_1A0910
label_306d7c:
    if (ctx->pc == 0x306D7Cu) {
        ctx->pc = 0x306D80u;
        goto label_306d80;
    }
    ctx->pc = 0x306D78u;
    SET_GPR_U32(ctx, 31, 0x306D80u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x306D78u, 0x306D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D80u;
label_306d80:
    // 0x306d80: 0xc06810c  jal         func_1A0430
label_306d84:
    if (ctx->pc == 0x306D84u) {
        ctx->pc = 0x306D88u;
        goto label_306d88;
    }
    ctx->pc = 0x306D80u;
    SET_GPR_U32(ctx, 31, 0x306D88u);
    ctx->pc = 0x1A0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0430u, 0x306D80u, 0x306D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D88u;
label_306d88:
    // 0x306d88: 0xc0ce97c  jal         func_33A5F0
label_306d8c:
    if (ctx->pc == 0x306D8Cu) {
        ctx->pc = 0x306D90u;
        goto label_306d90;
    }
    ctx->pc = 0x306D88u;
    SET_GPR_U32(ctx, 31, 0x306D90u);
    ctx->pc = 0x33A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A5F0u, 0x306D88u, 0x306D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306D90u;
label_306d90:
    // 0x306d90: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x306d90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_306d94:
    // 0x306d94: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x306d94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_306d98:
    // 0x306d98: 0x9044dae0  lbu         $a0, -0x2520($v0)
    ctx->pc = 0x306d98u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957792)));
label_306d9c:
    // 0x306d9c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x306d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_306da0:
    // 0x306da0: 0xa040da58  sb          $zero, -0x25A8($v0)
    ctx->pc = 0x306da0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957656), (uint8_t)GPR_U32(ctx, 0));
label_306da4:
    // 0x306da4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x306da4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_306da8:
    // 0x306da8: 0xa040da59  sb          $zero, -0x25A7($v0)
    ctx->pc = 0x306da8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957657), (uint8_t)GPR_U32(ctx, 0));
label_306dac:
    // 0x306dac: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x306dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_306db0:
    // 0x306db0: 0xc0692c0  jal         func_1A4B00
label_306db4:
    if (ctx->pc == 0x306DB4u) {
        ctx->pc = 0x306DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DB0u;
        // 0x306db4: 0xa062dae0  sb          $v0, -0x2520($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294957792), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306DB8u;
        goto label_306db8;
    }
    ctx->pc = 0x306DB0u;
    SET_GPR_U32(ctx, 31, 0x306DB8u);
    ctx->pc = 0x306DB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306DB0u;
    // 0x306db4: 0xa062dae0  sb          $v0, -0x2520($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957792), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x306DB0u, 0x306DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DB8u;
label_306db8:
    // 0x306db8: 0xc0cb1f4  jal         func_32C7D0
label_306dbc:
    if (ctx->pc == 0x306DBCu) {
        ctx->pc = 0x306DC0u;
        goto label_306dc0;
    }
    ctx->pc = 0x306DB8u;
    SET_GPR_U32(ctx, 31, 0x306DC0u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x306DB8u, 0x306DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DC0u;
label_306dc0:
    // 0x306dc0: 0xc0682e0  jal         func_1A0B80
label_306dc4:
    if (ctx->pc == 0x306DC4u) {
        ctx->pc = 0x306DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DC0u;
        // 0x306dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306DC8u;
        goto label_306dc8;
    }
    ctx->pc = 0x306DC0u;
    SET_GPR_U32(ctx, 31, 0x306DC8u);
    ctx->pc = 0x306DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306DC0u;
    // 0x306dc4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B80u, 0x306DC0u, 0x306DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DC8u;
label_306dc8:
    // 0x306dc8: 0xc0682e0  jal         func_1A0B80
label_306dcc:
    if (ctx->pc == 0x306DCCu) {
        ctx->pc = 0x306DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DC8u;
        // 0x306dcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306DD0u;
        goto label_306dd0;
    }
    ctx->pc = 0x306DC8u;
    SET_GPR_U32(ctx, 31, 0x306DD0u);
    ctx->pc = 0x306DCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306DC8u;
    // 0x306dcc: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B80u, 0x306DC8u, 0x306DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DD0u;
label_306dd0:
    // 0x306dd0: 0xc0c1650  jal         func_305940
label_306dd4:
    if (ctx->pc == 0x306DD4u) {
        ctx->pc = 0x306DD8u;
        goto label_306dd8;
    }
    ctx->pc = 0x306DD0u;
    SET_GPR_U32(ctx, 31, 0x306DD8u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x306DD0u, 0x306DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DD8u;
label_306dd8:
    // 0x306dd8: 0xc0ce7f4  jal         func_339FD0
label_306ddc:
    if (ctx->pc == 0x306DDCu) {
        ctx->pc = 0x306DE0u;
        goto label_306de0;
    }
    ctx->pc = 0x306DD8u;
    SET_GPR_U32(ctx, 31, 0x306DE0u);
    ctx->pc = 0x339FD0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x339FD0u, 0x306DD8u, 0x306DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DE0u;
label_306de0:
    // 0x306de0: 0xc068244  jal         func_1A0910
label_306de4:
    if (ctx->pc == 0x306DE4u) {
        ctx->pc = 0x306DE8u;
        goto label_306de8;
    }
    ctx->pc = 0x306DE0u;
    SET_GPR_U32(ctx, 31, 0x306DE8u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x306DE0u, 0x306DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DE8u;
label_306de8:
    // 0x306de8: 0xc06814c  jal         func_1A0530
label_306dec:
    if (ctx->pc == 0x306DECu) {
        ctx->pc = 0x306DECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306DE8u;
        // 0x306dec: 0x24040202  addiu       $a0, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306DF0u;
        goto label_306df0;
    }
    ctx->pc = 0x306DE8u;
    SET_GPR_U32(ctx, 31, 0x306DF0u);
    ctx->pc = 0x306DECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306DE8u;
    // 0x306dec: 0x24040202  addiu       $a0, $zero, 0x202 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x306DE8u, 0x306DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DF0u;
label_306df0:
    // 0x306df0: 0xc0c1bf8  jal         func_306FE0
label_306df4:
    if (ctx->pc == 0x306DF4u) {
        ctx->pc = 0x306DF8u;
        goto label_306df8;
    }
    ctx->pc = 0x306DF0u;
    SET_GPR_U32(ctx, 31, 0x306DF8u);
    ctx->pc = 0x306FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306FE0u, 0x306DF0u, 0x306DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306DF8u;
label_306df8:
    // 0x306df8: 0xc06871c  jal         func_1A1C70
label_306dfc:
    if (ctx->pc == 0x306DFCu) {
        ctx->pc = 0x306E00u;
        goto label_306e00;
    }
    ctx->pc = 0x306DF8u;
    SET_GPR_U32(ctx, 31, 0x306E00u);
    ctx->pc = 0x1A1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C70u, 0x306DF8u, 0x306E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E00u;
label_306e00:
    // 0x306e00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x306e00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306e04:
    // 0x306e04: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306e04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306e08:
    // 0x306e08: 0xc0c79fc  jal         func_31E7F0
label_306e0c:
    if (ctx->pc == 0x306E0Cu) {
        ctx->pc = 0x306E0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E08u;
        // 0x306e0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E10u;
        goto label_306e10;
    }
    ctx->pc = 0x306E08u;
    SET_GPR_U32(ctx, 31, 0x306E10u);
    ctx->pc = 0x306E0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E08u;
    // 0x306e0c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x306E08u, 0x306E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E10u;
label_306e10:
    // 0x306e10: 0xc0bf4a0  jal         func_2FD280
label_306e14:
    if (ctx->pc == 0x306E14u) {
        ctx->pc = 0x306E18u;
        goto label_306e18;
    }
    ctx->pc = 0x306E10u;
    SET_GPR_U32(ctx, 31, 0x306E18u);
    ctx->pc = 0x2FD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD280u, 0x306E10u, 0x306E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E18u;
label_306e18:
    // 0x306e18: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_306e1c:
    if (ctx->pc == 0x306E1Cu) {
        ctx->pc = 0x306E20u;
        goto label_306e20;
    }
    ctx->pc = 0x306E18u;
    {
        const bool branch_taken_0x306e18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306e18) {
            ctx->pc = 0x306E3Cu;
            goto label_306e3c;
        }
    }
    ctx->pc = 0x306E20u;
label_306e20:
    // 0x306e20: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x306e20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_306e24:
    // 0x306e24: 0x3c050033  lui         $a1, 0x33
    ctx->pc = 0x306e24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)51 << 16));
label_306e28:
    // 0x306e28: 0x2484f690  addiu       $a0, $a0, -0x970
    ctx->pc = 0x306e28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
label_306e2c:
    // 0x306e2c: 0xc0558d4  jal         func_156350
label_306e30:
    if (ctx->pc == 0x306E30u) {
        ctx->pc = 0x306E30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E2Cu;
        // 0x306e30: 0x24a5fc40  addiu       $a1, $a1, -0x3C0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966336));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E34u;
        goto label_306e34;
    }
    ctx->pc = 0x306E2Cu;
    SET_GPR_U32(ctx, 31, 0x306E34u);
    ctx->pc = 0x306E30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306E2Cu;
    // 0x306e30: 0x24a5fc40  addiu       $a1, $a1, -0x3C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x306E2Cu, 0x306E34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E34u;
label_306e34:
    // 0x306e34: 0x10000004  b           . + 4 + (0x4 << 2)
label_306e38:
    if (ctx->pc == 0x306E38u) {
        ctx->pc = 0x306E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E34u;
        // 0x306e38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E3Cu;
        goto label_306e3c;
    }
    ctx->pc = 0x306E34u;
    {
        const bool branch_taken_0x306e34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E34u;
        // 0x306e38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306e34) {
            ctx->pc = 0x306E48u;
            goto label_306e48;
        }
    }
    ctx->pc = 0x306E3Cu;
label_306e3c:
    // 0x306e3c: 0xc0cbf10  jal         func_32FC40
label_306e40:
    if (ctx->pc == 0x306E40u) {
        ctx->pc = 0x306E44u;
        goto label_306e44;
    }
    ctx->pc = 0x306E3Cu;
    SET_GPR_U32(ctx, 31, 0x306E44u);
    ctx->pc = 0x32FC40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FC40u, 0x306E3Cu, 0x306E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E44u;
label_306e44:
    // 0x306e44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306e44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306e48:
    // 0x306e48: 0x3e00008  jr          $ra
label_306e4c:
    if (ctx->pc == 0x306E4Cu) {
        ctx->pc = 0x306E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E48u;
        // 0x306e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306E50u;
        goto label_306e50;
    }
    ctx->pc = 0x306E48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306E48u;
        // 0x306e4c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306E48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306E50u;
label_306e50:
    // 0x306e50: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_306e54:
    // 0x306e54: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_306e58:
    // 0x306e58: 0xc055684  jal         func_155A10
label_306e5c:
    if (ctx->pc == 0x306E5Cu) {
        ctx->pc = 0x306E60u;
        goto label_306e60;
    }
    ctx->pc = 0x306E58u;
    SET_GPR_U32(ctx, 31, 0x306E60u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x306E58u, 0x306E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E60u;
label_306e60:
    // 0x306e60: 0xc05347c  jal         func_14D1F0
label_306e64:
    if (ctx->pc == 0x306E64u) {
        ctx->pc = 0x306E68u;
        goto label_306e68;
    }
    ctx->pc = 0x306E60u;
    SET_GPR_U32(ctx, 31, 0x306E68u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x306E60u, 0x306E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E68u;
label_306e68:
    // 0x306e68: 0xc06871c  jal         func_1A1C70
label_306e6c:
    if (ctx->pc == 0x306E6Cu) {
        ctx->pc = 0x306E70u;
        goto label_306e70;
    }
    ctx->pc = 0x306E68u;
    SET_GPR_U32(ctx, 31, 0x306E70u);
    ctx->pc = 0x1A1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C70u, 0x306E68u, 0x306E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E70u;
label_306e70:
    // 0x306e70: 0xc0692c0  jal         func_1A4B00
label_306e74:
    if (ctx->pc == 0x306E74u) {
        ctx->pc = 0x306E78u;
        goto label_306e78;
    }
    ctx->pc = 0x306E70u;
    SET_GPR_U32(ctx, 31, 0x306E78u);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x306E70u, 0x306E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E78u;
label_306e78:
    // 0x306e78: 0xc0cb1f4  jal         func_32C7D0
label_306e7c:
    if (ctx->pc == 0x306E7Cu) {
        ctx->pc = 0x306E80u;
        goto label_306e80;
    }
    ctx->pc = 0x306E78u;
    SET_GPR_U32(ctx, 31, 0x306E80u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x306E78u, 0x306E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E80u;
label_306e80:
    // 0x306e80: 0xc0cbebc  jal         func_32FAF0
label_306e84:
    if (ctx->pc == 0x306E84u) {
        ctx->pc = 0x306E88u;
        goto label_306e88;
    }
    ctx->pc = 0x306E80u;
    SET_GPR_U32(ctx, 31, 0x306E88u);
    ctx->pc = 0x32FAF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32FAF0u, 0x306E80u, 0x306E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E88u;
label_306e88:
    // 0x306e88: 0xc068244  jal         func_1A0910
label_306e8c:
    if (ctx->pc == 0x306E8Cu) {
        ctx->pc = 0x306E90u;
        goto label_306e90;
    }
    ctx->pc = 0x306E88u;
    SET_GPR_U32(ctx, 31, 0x306E90u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x306E88u, 0x306E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E90u;
label_306e90:
    // 0x306e90: 0xc06810c  jal         func_1A0430
label_306e94:
    if (ctx->pc == 0x306E94u) {
        ctx->pc = 0x306E98u;
        goto label_306e98;
    }
    ctx->pc = 0x306E90u;
    SET_GPR_U32(ctx, 31, 0x306E98u);
    ctx->pc = 0x1A0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0430u, 0x306E90u, 0x306E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306E98u;
label_306e98:
    // 0x306e98: 0xc0c1650  jal         func_305940
label_306e9c:
    if (ctx->pc == 0x306E9Cu) {
        ctx->pc = 0x306EA0u;
        goto label_306ea0;
    }
    ctx->pc = 0x306E98u;
    SET_GPR_U32(ctx, 31, 0x306EA0u);
    ctx->pc = 0x305940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x305940u, 0x306E98u, 0x306EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EA0u;
label_306ea0:
    // 0x306ea0: 0xc0d4170  jal         func_3505C0
label_306ea4:
    if (ctx->pc == 0x306EA4u) {
        ctx->pc = 0x306EA8u;
        goto label_306ea8;
    }
    ctx->pc = 0x306EA0u;
    SET_GPR_U32(ctx, 31, 0x306EA8u);
    ctx->pc = 0x3505C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3505C0u, 0x306EA0u, 0x306EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EA8u;
label_306ea8:
    // 0x306ea8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306eac:
    // 0x306eac: 0x3e00008  jr          $ra
label_306eb0:
    if (ctx->pc == 0x306EB0u) {
        ctx->pc = 0x306EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EACu;
        // 0x306eb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306EB4u;
        goto label_306eb4;
    }
    ctx->pc = 0x306EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306EACu;
        // 0x306eb0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306EB4u;
label_306eb4:
    // 0x306eb4: 0x0  nop
    ctx->pc = 0x306eb4u;
    // NOP
label_306eb8:
    // 0x306eb8: 0x0  nop
    ctx->pc = 0x306eb8u;
    // NOP
label_306ebc:
    // 0x306ebc: 0x0  nop
    ctx->pc = 0x306ebcu;
    // NOP
label_306ec0:
    // 0x306ec0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x306ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_306ec4:
    // 0x306ec4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x306ec4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_306ec8:
    // 0x306ec8: 0xc055684  jal         func_155A10
label_306ecc:
    if (ctx->pc == 0x306ECCu) {
        ctx->pc = 0x306ED0u;
        goto label_306ed0;
    }
    ctx->pc = 0x306EC8u;
    SET_GPR_U32(ctx, 31, 0x306ED0u);
    ctx->pc = 0x155A10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155A10u, 0x306EC8u, 0x306ED0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306ED0u;
label_306ed0:
    // 0x306ed0: 0xc05347c  jal         func_14D1F0
label_306ed4:
    if (ctx->pc == 0x306ED4u) {
        ctx->pc = 0x306ED8u;
        goto label_306ed8;
    }
    ctx->pc = 0x306ED0u;
    SET_GPR_U32(ctx, 31, 0x306ED8u);
    ctx->pc = 0x14D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14D1F0u, 0x306ED0u, 0x306ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306ED8u;
label_306ed8:
    // 0x306ed8: 0xc0692c0  jal         func_1A4B00
label_306edc:
    if (ctx->pc == 0x306EDCu) {
        ctx->pc = 0x306EE0u;
        goto label_306ee0;
    }
    ctx->pc = 0x306ED8u;
    SET_GPR_U32(ctx, 31, 0x306EE0u);
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x306ED8u, 0x306EE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EE0u;
label_306ee0:
    // 0x306ee0: 0xc0cb1f4  jal         func_32C7D0
label_306ee4:
    if (ctx->pc == 0x306EE4u) {
        ctx->pc = 0x306EE8u;
        goto label_306ee8;
    }
    ctx->pc = 0x306EE0u;
    SET_GPR_U32(ctx, 31, 0x306EE8u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x306EE0u, 0x306EE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EE8u;
label_306ee8:
    // 0x306ee8: 0xc068244  jal         func_1A0910
label_306eec:
    if (ctx->pc == 0x306EECu) {
        ctx->pc = 0x306EF0u;
        goto label_306ef0;
    }
    ctx->pc = 0x306EE8u;
    SET_GPR_U32(ctx, 31, 0x306EF0u);
    ctx->pc = 0x1A0910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0910u, 0x306EE8u, 0x306EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EF0u;
label_306ef0:
    // 0x306ef0: 0xc06810c  jal         func_1A0430
label_306ef4:
    if (ctx->pc == 0x306EF4u) {
        ctx->pc = 0x306EF8u;
        goto label_306ef8;
    }
    ctx->pc = 0x306EF0u;
    SET_GPR_U32(ctx, 31, 0x306EF8u);
    ctx->pc = 0x1A0430u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0430u, 0x306EF0u, 0x306EF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306EF8u;
label_306ef8:
    // 0x306ef8: 0xc0ce97c  jal         func_33A5F0
label_306efc:
    if (ctx->pc == 0x306EFCu) {
        ctx->pc = 0x306F00u;
        goto label_306f00;
    }
    ctx->pc = 0x306EF8u;
    SET_GPR_U32(ctx, 31, 0x306F00u);
    ctx->pc = 0x33A5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33A5F0u, 0x306EF8u, 0x306F00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F00u;
label_306f00:
    // 0x306f00: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x306f00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_306f04:
    // 0x306f04: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x306f04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_306f08:
    // 0x306f08: 0x9044dae0  lbu         $a0, -0x2520($v0)
    ctx->pc = 0x306f08u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957792)));
label_306f0c:
    // 0x306f0c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x306f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_306f10:
    // 0x306f10: 0xa040da58  sb          $zero, -0x25A8($v0)
    ctx->pc = 0x306f10u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957656), (uint8_t)GPR_U32(ctx, 0));
label_306f14:
    // 0x306f14: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x306f14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_306f18:
    // 0x306f18: 0xa040da59  sb          $zero, -0x25A7($v0)
    ctx->pc = 0x306f18u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294957657), (uint8_t)GPR_U32(ctx, 0));
label_306f1c:
    // 0x306f1c: 0x34820002  ori         $v0, $a0, 0x2
    ctx->pc = 0x306f1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
label_306f20:
    // 0x306f20: 0xc0692c0  jal         func_1A4B00
label_306f24:
    if (ctx->pc == 0x306F24u) {
        ctx->pc = 0x306F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F20u;
        // 0x306f24: 0xa062dae0  sb          $v0, -0x2520($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294957792), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F28u;
        goto label_306f28;
    }
    ctx->pc = 0x306F20u;
    SET_GPR_U32(ctx, 31, 0x306F28u);
    ctx->pc = 0x306F24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F20u;
    // 0x306f24: 0xa062dae0  sb          $v0, -0x2520($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294957792), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A4B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A4B00u, 0x306F20u, 0x306F28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F28u;
label_306f28:
    // 0x306f28: 0xc0cb1f4  jal         func_32C7D0
label_306f2c:
    if (ctx->pc == 0x306F2Cu) {
        ctx->pc = 0x306F30u;
        goto label_306f30;
    }
    ctx->pc = 0x306F28u;
    SET_GPR_U32(ctx, 31, 0x306F30u);
    ctx->pc = 0x32C7D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x32C7D0u, 0x306F28u, 0x306F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F30u;
label_306f30:
    // 0x306f30: 0xc0682e0  jal         func_1A0B80
label_306f34:
    if (ctx->pc == 0x306F34u) {
        ctx->pc = 0x306F34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F30u;
        // 0x306f34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F38u;
        goto label_306f38;
    }
    ctx->pc = 0x306F30u;
    SET_GPR_U32(ctx, 31, 0x306F38u);
    ctx->pc = 0x306F34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F30u;
    // 0x306f34: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B80u, 0x306F30u, 0x306F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F38u;
label_306f38:
    // 0x306f38: 0xc0682e0  jal         func_1A0B80
label_306f3c:
    if (ctx->pc == 0x306F3Cu) {
        ctx->pc = 0x306F3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F38u;
        // 0x306f3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F40u;
        goto label_306f40;
    }
    ctx->pc = 0x306F38u;
    SET_GPR_U32(ctx, 31, 0x306F40u);
    ctx->pc = 0x306F3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F38u;
    // 0x306f3c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0B80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0B80u, 0x306F38u, 0x306F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F40u;
label_306f40:
    // 0x306f40: 0xc06814c  jal         func_1A0530
label_306f44:
    if (ctx->pc == 0x306F44u) {
        ctx->pc = 0x306F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F40u;
        // 0x306f44: 0x24040202  addiu       $a0, $zero, 0x202 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F48u;
        goto label_306f48;
    }
    ctx->pc = 0x306F40u;
    SET_GPR_U32(ctx, 31, 0x306F48u);
    ctx->pc = 0x306F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F40u;
    // 0x306f44: 0x24040202  addiu       $a0, $zero, 0x202 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A0530u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A0530u, 0x306F40u, 0x306F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F48u;
label_306f48:
    // 0x306f48: 0xc0c1bf8  jal         func_306FE0
label_306f4c:
    if (ctx->pc == 0x306F4Cu) {
        ctx->pc = 0x306F50u;
        goto label_306f50;
    }
    ctx->pc = 0x306F48u;
    SET_GPR_U32(ctx, 31, 0x306F50u);
    ctx->pc = 0x306FE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x306FE0u, 0x306F48u, 0x306F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F50u;
label_306f50:
    // 0x306f50: 0xc06871c  jal         func_1A1C70
label_306f54:
    if (ctx->pc == 0x306F54u) {
        ctx->pc = 0x306F58u;
        goto label_306f58;
    }
    ctx->pc = 0x306F50u;
    SET_GPR_U32(ctx, 31, 0x306F58u);
    ctx->pc = 0x1A1C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A1C70u, 0x306F50u, 0x306F58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F58u;
label_306f58:
    // 0x306f58: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x306f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306f5c:
    // 0x306f5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x306f5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_306f60:
    // 0x306f60: 0xc0c79fc  jal         func_31E7F0
label_306f64:
    if (ctx->pc == 0x306F64u) {
        ctx->pc = 0x306F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F60u;
        // 0x306f64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F68u;
        goto label_306f68;
    }
    ctx->pc = 0x306F60u;
    SET_GPR_U32(ctx, 31, 0x306F68u);
    ctx->pc = 0x306F64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F60u;
    // 0x306f64: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7F0u, 0x306F60u, 0x306F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F68u;
label_306f68:
    // 0x306f68: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x306f68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_306f6c:
    // 0x306f6c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306f70:
    // 0x306f70: 0xa0439780  sb          $v1, -0x6880($v0)
    ctx->pc = 0x306f70u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940544), (uint8_t)GPR_U32(ctx, 3));
label_306f74:
    // 0x306f74: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x306f74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_306f78:
    // 0x306f78: 0x94429718  lhu         $v0, -0x68E8($v0)
    ctx->pc = 0x306f78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294940440)));
label_306f7c:
    // 0x306f7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_306f80:
    if (ctx->pc == 0x306F80u) {
        ctx->pc = 0x306F84u;
        goto label_306f84;
    }
    ctx->pc = 0x306F7Cu;
    {
        const bool branch_taken_0x306f7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306f7c) {
            ctx->pc = 0x306F98u;
            goto label_306f98;
        }
    }
    ctx->pc = 0x306F84u;
label_306f84:
    // 0x306f84: 0x3c040036  lui         $a0, 0x36
    ctx->pc = 0x306f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)54 << 16));
label_306f88:
    // 0x306f88: 0xc0558e0  jal         func_156380
label_306f8c:
    if (ctx->pc == 0x306F8Cu) {
        ctx->pc = 0x306F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F88u;
        // 0x306f8c: 0x24848030  addiu       $a0, $a0, -0x7FD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F90u;
        goto label_306f90;
    }
    ctx->pc = 0x306F88u;
    SET_GPR_U32(ctx, 31, 0x306F90u);
    ctx->pc = 0x306F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306F88u;
    // 0x306f8c: 0x24848030  addiu       $a0, $a0, -0x7FD0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294934576));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x306F88u, 0x306F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306F90u;
label_306f90:
    // 0x306f90: 0x10000010  b           . + 4 + (0x10 << 2)
label_306f94:
    if (ctx->pc == 0x306F94u) {
        ctx->pc = 0x306F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F90u;
        // 0x306f94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306F98u;
        goto label_306f98;
    }
    ctx->pc = 0x306F90u;
    {
        const bool branch_taken_0x306f90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x306F94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306F90u;
        // 0x306f94: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x306f90) {
            ctx->pc = 0x306FD4u;
            goto label_306fd4;
        }
    }
    ctx->pc = 0x306F98u;
label_306f98:
    // 0x306f98: 0xc0bf4a0  jal         func_2FD280
label_306f9c:
    if (ctx->pc == 0x306F9Cu) {
        ctx->pc = 0x306FA0u;
        goto label_306fa0;
    }
    ctx->pc = 0x306F98u;
    SET_GPR_U32(ctx, 31, 0x306FA0u);
    ctx->pc = 0x2FD280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FD280u, 0x306F98u, 0x306FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306FA0u;
label_306fa0:
    // 0x306fa0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_306fa4:
    if (ctx->pc == 0x306FA4u) {
        ctx->pc = 0x306FA8u;
        goto label_306fa8;
    }
    ctx->pc = 0x306FA0u;
    {
        const bool branch_taken_0x306fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x306fa0) {
            ctx->pc = 0x306FC4u;
            goto label_306fc4;
        }
    }
    ctx->pc = 0x306FA8u;
label_306fa8:
    // 0x306fa8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x306fa8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
label_306fac:
    // 0x306fac: 0x3c050035  lui         $a1, 0x35
    ctx->pc = 0x306facu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)53 << 16));
label_306fb0:
    // 0x306fb0: 0x2484f690  addiu       $a0, $a0, -0x970
    ctx->pc = 0x306fb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294964880));
label_306fb4:
    // 0x306fb4: 0xc0558d4  jal         func_156350
label_306fb8:
    if (ctx->pc == 0x306FB8u) {
        ctx->pc = 0x306FB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FB4u;
        // 0x306fb8: 0x24a540b0  addiu       $a1, $a1, 0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FBCu;
        goto label_306fbc;
    }
    ctx->pc = 0x306FB4u;
    SET_GPR_U32(ctx, 31, 0x306FBCu);
    ctx->pc = 0x306FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306FB4u;
    // 0x306fb8: 0x24a540b0  addiu       $a1, $a1, 0x40B0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x306FB4u, 0x306FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306FBCu;
label_306fbc:
    // 0x306fbc: 0x10000004  b           . + 4 + (0x4 << 2)
label_306fc0:
    if (ctx->pc == 0x306FC0u) {
        ctx->pc = 0x306FC4u;
        goto label_306fc4;
    }
    ctx->pc = 0x306FBCu;
    {
        const bool branch_taken_0x306fbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x306fbc) {
            ctx->pc = 0x306FD0u;
            goto label_306fd0;
        }
    }
    ctx->pc = 0x306FC4u;
label_306fc4:
    // 0x306fc4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x306fc4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
label_306fc8:
    // 0x306fc8: 0xc0558e0  jal         func_156380
label_306fcc:
    if (ctx->pc == 0x306FCCu) {
        ctx->pc = 0x306FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FC8u;
        // 0x306fcc: 0x248440b0  addiu       $a0, $a0, 0x40B0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FD0u;
        goto label_306fd0;
    }
    ctx->pc = 0x306FC8u;
    SET_GPR_U32(ctx, 31, 0x306FD0u);
    ctx->pc = 0x306FCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x306FC8u;
    // 0x306fcc: 0x248440b0  addiu       $a0, $a0, 0x40B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156380u, 0x306FC8u, 0x306FD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x306FD0u;
label_306fd0:
    // 0x306fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x306fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_306fd4:
    // 0x306fd4: 0x3e00008  jr          $ra
label_306fd8:
    if (ctx->pc == 0x306FD8u) {
        ctx->pc = 0x306FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FD4u;
        // 0x306fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x306FDCu;
        goto label_306fdc;
    }
    ctx->pc = 0x306FD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x306FD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x306FD4u;
        // 0x306fd8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x306FD4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x306FDCu;
label_306fdc:
    // 0x306fdc: 0x0  nop
    ctx->pc = 0x306fdcu;
    // NOP
}
