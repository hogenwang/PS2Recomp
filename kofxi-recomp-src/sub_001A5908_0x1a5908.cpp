#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A5908
// Address: 0x1a5908 - 0x1a5ed8
void sub_001A5908_0x1a5908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A5908_0x1a5908");
#endif

    switch (ctx->pc) {
        case 0x1a5908u: goto label_1a5908;
        case 0x1a590cu: goto label_1a590c;
        case 0x1a5910u: goto label_1a5910;
        case 0x1a5914u: goto label_1a5914;
        case 0x1a5918u: goto label_1a5918;
        case 0x1a591cu: goto label_1a591c;
        case 0x1a5920u: goto label_1a5920;
        case 0x1a5924u: goto label_1a5924;
        case 0x1a5928u: goto label_1a5928;
        case 0x1a592cu: goto label_1a592c;
        case 0x1a5930u: goto label_1a5930;
        case 0x1a5934u: goto label_1a5934;
        case 0x1a5938u: goto label_1a5938;
        case 0x1a593cu: goto label_1a593c;
        case 0x1a5940u: goto label_1a5940;
        case 0x1a5944u: goto label_1a5944;
        case 0x1a5948u: goto label_1a5948;
        case 0x1a594cu: goto label_1a594c;
        case 0x1a5950u: goto label_1a5950;
        case 0x1a5954u: goto label_1a5954;
        case 0x1a5958u: goto label_1a5958;
        case 0x1a595cu: goto label_1a595c;
        case 0x1a5960u: goto label_1a5960;
        case 0x1a5964u: goto label_1a5964;
        case 0x1a5968u: goto label_1a5968;
        case 0x1a596cu: goto label_1a596c;
        case 0x1a5970u: goto label_1a5970;
        case 0x1a5974u: goto label_1a5974;
        case 0x1a5978u: goto label_1a5978;
        case 0x1a597cu: goto label_1a597c;
        case 0x1a5980u: goto label_1a5980;
        case 0x1a5984u: goto label_1a5984;
        case 0x1a5988u: goto label_1a5988;
        case 0x1a598cu: goto label_1a598c;
        case 0x1a5990u: goto label_1a5990;
        case 0x1a5994u: goto label_1a5994;
        case 0x1a5998u: goto label_1a5998;
        case 0x1a599cu: goto label_1a599c;
        case 0x1a59a0u: goto label_1a59a0;
        case 0x1a59a4u: goto label_1a59a4;
        case 0x1a59a8u: goto label_1a59a8;
        case 0x1a59acu: goto label_1a59ac;
        case 0x1a59b0u: goto label_1a59b0;
        case 0x1a59b4u: goto label_1a59b4;
        case 0x1a59b8u: goto label_1a59b8;
        case 0x1a59bcu: goto label_1a59bc;
        case 0x1a59c0u: goto label_1a59c0;
        case 0x1a59c4u: goto label_1a59c4;
        case 0x1a59c8u: goto label_1a59c8;
        case 0x1a59ccu: goto label_1a59cc;
        case 0x1a59d0u: goto label_1a59d0;
        case 0x1a59d4u: goto label_1a59d4;
        case 0x1a59d8u: goto label_1a59d8;
        case 0x1a59dcu: goto label_1a59dc;
        case 0x1a59e0u: goto label_1a59e0;
        case 0x1a59e4u: goto label_1a59e4;
        case 0x1a59e8u: goto label_1a59e8;
        case 0x1a59ecu: goto label_1a59ec;
        case 0x1a59f0u: goto label_1a59f0;
        case 0x1a59f4u: goto label_1a59f4;
        case 0x1a59f8u: goto label_1a59f8;
        case 0x1a59fcu: goto label_1a59fc;
        case 0x1a5a00u: goto label_1a5a00;
        case 0x1a5a04u: goto label_1a5a04;
        case 0x1a5a08u: goto label_1a5a08;
        case 0x1a5a0cu: goto label_1a5a0c;
        case 0x1a5a10u: goto label_1a5a10;
        case 0x1a5a14u: goto label_1a5a14;
        case 0x1a5a18u: goto label_1a5a18;
        case 0x1a5a1cu: goto label_1a5a1c;
        case 0x1a5a20u: goto label_1a5a20;
        case 0x1a5a24u: goto label_1a5a24;
        case 0x1a5a28u: goto label_1a5a28;
        case 0x1a5a2cu: goto label_1a5a2c;
        case 0x1a5a30u: goto label_1a5a30;
        case 0x1a5a34u: goto label_1a5a34;
        case 0x1a5a38u: goto label_1a5a38;
        case 0x1a5a3cu: goto label_1a5a3c;
        case 0x1a5a40u: goto label_1a5a40;
        case 0x1a5a44u: goto label_1a5a44;
        case 0x1a5a48u: goto label_1a5a48;
        case 0x1a5a4cu: goto label_1a5a4c;
        case 0x1a5a50u: goto label_1a5a50;
        case 0x1a5a54u: goto label_1a5a54;
        case 0x1a5a58u: goto label_1a5a58;
        case 0x1a5a5cu: goto label_1a5a5c;
        case 0x1a5a60u: goto label_1a5a60;
        case 0x1a5a64u: goto label_1a5a64;
        case 0x1a5a68u: goto label_1a5a68;
        case 0x1a5a6cu: goto label_1a5a6c;
        case 0x1a5a70u: goto label_1a5a70;
        case 0x1a5a74u: goto label_1a5a74;
        case 0x1a5a78u: goto label_1a5a78;
        case 0x1a5a7cu: goto label_1a5a7c;
        case 0x1a5a80u: goto label_1a5a80;
        case 0x1a5a84u: goto label_1a5a84;
        case 0x1a5a88u: goto label_1a5a88;
        case 0x1a5a8cu: goto label_1a5a8c;
        case 0x1a5a90u: goto label_1a5a90;
        case 0x1a5a94u: goto label_1a5a94;
        case 0x1a5a98u: goto label_1a5a98;
        case 0x1a5a9cu: goto label_1a5a9c;
        case 0x1a5aa0u: goto label_1a5aa0;
        case 0x1a5aa4u: goto label_1a5aa4;
        case 0x1a5aa8u: goto label_1a5aa8;
        case 0x1a5aacu: goto label_1a5aac;
        case 0x1a5ab0u: goto label_1a5ab0;
        case 0x1a5ab4u: goto label_1a5ab4;
        case 0x1a5ab8u: goto label_1a5ab8;
        case 0x1a5abcu: goto label_1a5abc;
        case 0x1a5ac0u: goto label_1a5ac0;
        case 0x1a5ac4u: goto label_1a5ac4;
        case 0x1a5ac8u: goto label_1a5ac8;
        case 0x1a5accu: goto label_1a5acc;
        case 0x1a5ad0u: goto label_1a5ad0;
        case 0x1a5ad4u: goto label_1a5ad4;
        case 0x1a5ad8u: goto label_1a5ad8;
        case 0x1a5adcu: goto label_1a5adc;
        case 0x1a5ae0u: goto label_1a5ae0;
        case 0x1a5ae4u: goto label_1a5ae4;
        case 0x1a5ae8u: goto label_1a5ae8;
        case 0x1a5aecu: goto label_1a5aec;
        case 0x1a5af0u: goto label_1a5af0;
        case 0x1a5af4u: goto label_1a5af4;
        case 0x1a5af8u: goto label_1a5af8;
        case 0x1a5afcu: goto label_1a5afc;
        case 0x1a5b00u: goto label_1a5b00;
        case 0x1a5b04u: goto label_1a5b04;
        case 0x1a5b08u: goto label_1a5b08;
        case 0x1a5b0cu: goto label_1a5b0c;
        case 0x1a5b10u: goto label_1a5b10;
        case 0x1a5b14u: goto label_1a5b14;
        case 0x1a5b18u: goto label_1a5b18;
        case 0x1a5b1cu: goto label_1a5b1c;
        case 0x1a5b20u: goto label_1a5b20;
        case 0x1a5b24u: goto label_1a5b24;
        case 0x1a5b28u: goto label_1a5b28;
        case 0x1a5b2cu: goto label_1a5b2c;
        case 0x1a5b30u: goto label_1a5b30;
        case 0x1a5b34u: goto label_1a5b34;
        case 0x1a5b38u: goto label_1a5b38;
        case 0x1a5b3cu: goto label_1a5b3c;
        case 0x1a5b40u: goto label_1a5b40;
        case 0x1a5b44u: goto label_1a5b44;
        case 0x1a5b48u: goto label_1a5b48;
        case 0x1a5b4cu: goto label_1a5b4c;
        case 0x1a5b50u: goto label_1a5b50;
        case 0x1a5b54u: goto label_1a5b54;
        case 0x1a5b58u: goto label_1a5b58;
        case 0x1a5b5cu: goto label_1a5b5c;
        case 0x1a5b60u: goto label_1a5b60;
        case 0x1a5b64u: goto label_1a5b64;
        case 0x1a5b68u: goto label_1a5b68;
        case 0x1a5b6cu: goto label_1a5b6c;
        case 0x1a5b70u: goto label_1a5b70;
        case 0x1a5b74u: goto label_1a5b74;
        case 0x1a5b78u: goto label_1a5b78;
        case 0x1a5b7cu: goto label_1a5b7c;
        case 0x1a5b80u: goto label_1a5b80;
        case 0x1a5b84u: goto label_1a5b84;
        case 0x1a5b88u: goto label_1a5b88;
        case 0x1a5b8cu: goto label_1a5b8c;
        case 0x1a5b90u: goto label_1a5b90;
        case 0x1a5b94u: goto label_1a5b94;
        case 0x1a5b98u: goto label_1a5b98;
        case 0x1a5b9cu: goto label_1a5b9c;
        case 0x1a5ba0u: goto label_1a5ba0;
        case 0x1a5ba4u: goto label_1a5ba4;
        case 0x1a5ba8u: goto label_1a5ba8;
        case 0x1a5bacu: goto label_1a5bac;
        case 0x1a5bb0u: goto label_1a5bb0;
        case 0x1a5bb4u: goto label_1a5bb4;
        case 0x1a5bb8u: goto label_1a5bb8;
        case 0x1a5bbcu: goto label_1a5bbc;
        case 0x1a5bc0u: goto label_1a5bc0;
        case 0x1a5bc4u: goto label_1a5bc4;
        case 0x1a5bc8u: goto label_1a5bc8;
        case 0x1a5bccu: goto label_1a5bcc;
        case 0x1a5bd0u: goto label_1a5bd0;
        case 0x1a5bd4u: goto label_1a5bd4;
        case 0x1a5bd8u: goto label_1a5bd8;
        case 0x1a5bdcu: goto label_1a5bdc;
        case 0x1a5be0u: goto label_1a5be0;
        case 0x1a5be4u: goto label_1a5be4;
        case 0x1a5be8u: goto label_1a5be8;
        case 0x1a5becu: goto label_1a5bec;
        case 0x1a5bf0u: goto label_1a5bf0;
        case 0x1a5bf4u: goto label_1a5bf4;
        case 0x1a5bf8u: goto label_1a5bf8;
        case 0x1a5bfcu: goto label_1a5bfc;
        case 0x1a5c00u: goto label_1a5c00;
        case 0x1a5c04u: goto label_1a5c04;
        case 0x1a5c08u: goto label_1a5c08;
        case 0x1a5c0cu: goto label_1a5c0c;
        case 0x1a5c10u: goto label_1a5c10;
        case 0x1a5c14u: goto label_1a5c14;
        case 0x1a5c18u: goto label_1a5c18;
        case 0x1a5c1cu: goto label_1a5c1c;
        case 0x1a5c20u: goto label_1a5c20;
        case 0x1a5c24u: goto label_1a5c24;
        case 0x1a5c28u: goto label_1a5c28;
        case 0x1a5c2cu: goto label_1a5c2c;
        case 0x1a5c30u: goto label_1a5c30;
        case 0x1a5c34u: goto label_1a5c34;
        case 0x1a5c38u: goto label_1a5c38;
        case 0x1a5c3cu: goto label_1a5c3c;
        case 0x1a5c40u: goto label_1a5c40;
        case 0x1a5c44u: goto label_1a5c44;
        case 0x1a5c48u: goto label_1a5c48;
        case 0x1a5c4cu: goto label_1a5c4c;
        case 0x1a5c50u: goto label_1a5c50;
        case 0x1a5c54u: goto label_1a5c54;
        case 0x1a5c58u: goto label_1a5c58;
        case 0x1a5c5cu: goto label_1a5c5c;
        case 0x1a5c60u: goto label_1a5c60;
        case 0x1a5c64u: goto label_1a5c64;
        case 0x1a5c68u: goto label_1a5c68;
        case 0x1a5c6cu: goto label_1a5c6c;
        case 0x1a5c70u: goto label_1a5c70;
        case 0x1a5c74u: goto label_1a5c74;
        case 0x1a5c78u: goto label_1a5c78;
        case 0x1a5c7cu: goto label_1a5c7c;
        case 0x1a5c80u: goto label_1a5c80;
        case 0x1a5c84u: goto label_1a5c84;
        case 0x1a5c88u: goto label_1a5c88;
        case 0x1a5c8cu: goto label_1a5c8c;
        case 0x1a5c90u: goto label_1a5c90;
        case 0x1a5c94u: goto label_1a5c94;
        case 0x1a5c98u: goto label_1a5c98;
        case 0x1a5c9cu: goto label_1a5c9c;
        case 0x1a5ca0u: goto label_1a5ca0;
        case 0x1a5ca4u: goto label_1a5ca4;
        case 0x1a5ca8u: goto label_1a5ca8;
        case 0x1a5cacu: goto label_1a5cac;
        case 0x1a5cb0u: goto label_1a5cb0;
        case 0x1a5cb4u: goto label_1a5cb4;
        case 0x1a5cb8u: goto label_1a5cb8;
        case 0x1a5cbcu: goto label_1a5cbc;
        case 0x1a5cc0u: goto label_1a5cc0;
        case 0x1a5cc4u: goto label_1a5cc4;
        case 0x1a5cc8u: goto label_1a5cc8;
        case 0x1a5cccu: goto label_1a5ccc;
        case 0x1a5cd0u: goto label_1a5cd0;
        case 0x1a5cd4u: goto label_1a5cd4;
        case 0x1a5cd8u: goto label_1a5cd8;
        case 0x1a5cdcu: goto label_1a5cdc;
        case 0x1a5ce0u: goto label_1a5ce0;
        case 0x1a5ce4u: goto label_1a5ce4;
        case 0x1a5ce8u: goto label_1a5ce8;
        case 0x1a5cecu: goto label_1a5cec;
        case 0x1a5cf0u: goto label_1a5cf0;
        case 0x1a5cf4u: goto label_1a5cf4;
        case 0x1a5cf8u: goto label_1a5cf8;
        case 0x1a5cfcu: goto label_1a5cfc;
        case 0x1a5d00u: goto label_1a5d00;
        case 0x1a5d04u: goto label_1a5d04;
        case 0x1a5d08u: goto label_1a5d08;
        case 0x1a5d0cu: goto label_1a5d0c;
        case 0x1a5d10u: goto label_1a5d10;
        case 0x1a5d14u: goto label_1a5d14;
        case 0x1a5d18u: goto label_1a5d18;
        case 0x1a5d1cu: goto label_1a5d1c;
        case 0x1a5d20u: goto label_1a5d20;
        case 0x1a5d24u: goto label_1a5d24;
        case 0x1a5d28u: goto label_1a5d28;
        case 0x1a5d2cu: goto label_1a5d2c;
        case 0x1a5d30u: goto label_1a5d30;
        case 0x1a5d34u: goto label_1a5d34;
        case 0x1a5d38u: goto label_1a5d38;
        case 0x1a5d3cu: goto label_1a5d3c;
        case 0x1a5d40u: goto label_1a5d40;
        case 0x1a5d44u: goto label_1a5d44;
        case 0x1a5d48u: goto label_1a5d48;
        case 0x1a5d4cu: goto label_1a5d4c;
        case 0x1a5d50u: goto label_1a5d50;
        case 0x1a5d54u: goto label_1a5d54;
        case 0x1a5d58u: goto label_1a5d58;
        case 0x1a5d5cu: goto label_1a5d5c;
        case 0x1a5d60u: goto label_1a5d60;
        case 0x1a5d64u: goto label_1a5d64;
        case 0x1a5d68u: goto label_1a5d68;
        case 0x1a5d6cu: goto label_1a5d6c;
        case 0x1a5d70u: goto label_1a5d70;
        case 0x1a5d74u: goto label_1a5d74;
        case 0x1a5d78u: goto label_1a5d78;
        case 0x1a5d7cu: goto label_1a5d7c;
        case 0x1a5d80u: goto label_1a5d80;
        case 0x1a5d84u: goto label_1a5d84;
        case 0x1a5d88u: goto label_1a5d88;
        case 0x1a5d8cu: goto label_1a5d8c;
        case 0x1a5d90u: goto label_1a5d90;
        case 0x1a5d94u: goto label_1a5d94;
        case 0x1a5d98u: goto label_1a5d98;
        case 0x1a5d9cu: goto label_1a5d9c;
        case 0x1a5da0u: goto label_1a5da0;
        case 0x1a5da4u: goto label_1a5da4;
        case 0x1a5da8u: goto label_1a5da8;
        case 0x1a5dacu: goto label_1a5dac;
        case 0x1a5db0u: goto label_1a5db0;
        case 0x1a5db4u: goto label_1a5db4;
        case 0x1a5db8u: goto label_1a5db8;
        case 0x1a5dbcu: goto label_1a5dbc;
        case 0x1a5dc0u: goto label_1a5dc0;
        case 0x1a5dc4u: goto label_1a5dc4;
        case 0x1a5dc8u: goto label_1a5dc8;
        case 0x1a5dccu: goto label_1a5dcc;
        case 0x1a5dd0u: goto label_1a5dd0;
        case 0x1a5dd4u: goto label_1a5dd4;
        case 0x1a5dd8u: goto label_1a5dd8;
        case 0x1a5ddcu: goto label_1a5ddc;
        case 0x1a5de0u: goto label_1a5de0;
        case 0x1a5de4u: goto label_1a5de4;
        case 0x1a5de8u: goto label_1a5de8;
        case 0x1a5decu: goto label_1a5dec;
        case 0x1a5df0u: goto label_1a5df0;
        case 0x1a5df4u: goto label_1a5df4;
        case 0x1a5df8u: goto label_1a5df8;
        case 0x1a5dfcu: goto label_1a5dfc;
        case 0x1a5e00u: goto label_1a5e00;
        case 0x1a5e04u: goto label_1a5e04;
        case 0x1a5e08u: goto label_1a5e08;
        case 0x1a5e0cu: goto label_1a5e0c;
        case 0x1a5e10u: goto label_1a5e10;
        case 0x1a5e14u: goto label_1a5e14;
        case 0x1a5e18u: goto label_1a5e18;
        case 0x1a5e1cu: goto label_1a5e1c;
        case 0x1a5e20u: goto label_1a5e20;
        case 0x1a5e24u: goto label_1a5e24;
        case 0x1a5e28u: goto label_1a5e28;
        case 0x1a5e2cu: goto label_1a5e2c;
        case 0x1a5e30u: goto label_1a5e30;
        case 0x1a5e34u: goto label_1a5e34;
        case 0x1a5e38u: goto label_1a5e38;
        case 0x1a5e3cu: goto label_1a5e3c;
        case 0x1a5e40u: goto label_1a5e40;
        case 0x1a5e44u: goto label_1a5e44;
        case 0x1a5e48u: goto label_1a5e48;
        case 0x1a5e4cu: goto label_1a5e4c;
        case 0x1a5e50u: goto label_1a5e50;
        case 0x1a5e54u: goto label_1a5e54;
        case 0x1a5e58u: goto label_1a5e58;
        case 0x1a5e5cu: goto label_1a5e5c;
        case 0x1a5e60u: goto label_1a5e60;
        case 0x1a5e64u: goto label_1a5e64;
        case 0x1a5e68u: goto label_1a5e68;
        case 0x1a5e6cu: goto label_1a5e6c;
        case 0x1a5e70u: goto label_1a5e70;
        case 0x1a5e74u: goto label_1a5e74;
        case 0x1a5e78u: goto label_1a5e78;
        case 0x1a5e7cu: goto label_1a5e7c;
        case 0x1a5e80u: goto label_1a5e80;
        case 0x1a5e84u: goto label_1a5e84;
        case 0x1a5e88u: goto label_1a5e88;
        case 0x1a5e8cu: goto label_1a5e8c;
        case 0x1a5e90u: goto label_1a5e90;
        case 0x1a5e94u: goto label_1a5e94;
        case 0x1a5e98u: goto label_1a5e98;
        case 0x1a5e9cu: goto label_1a5e9c;
        case 0x1a5ea0u: goto label_1a5ea0;
        case 0x1a5ea4u: goto label_1a5ea4;
        case 0x1a5ea8u: goto label_1a5ea8;
        case 0x1a5eacu: goto label_1a5eac;
        case 0x1a5eb0u: goto label_1a5eb0;
        case 0x1a5eb4u: goto label_1a5eb4;
        case 0x1a5eb8u: goto label_1a5eb8;
        case 0x1a5ebcu: goto label_1a5ebc;
        case 0x1a5ec0u: goto label_1a5ec0;
        case 0x1a5ec4u: goto label_1a5ec4;
        case 0x1a5ec8u: goto label_1a5ec8;
        case 0x1a5eccu: goto label_1a5ecc;
        case 0x1a5ed0u: goto label_1a5ed0;
        case 0x1a5ed4u: goto label_1a5ed4;
        default: break;
    }

    ctx->pc = 0x1a5908u;

label_1a5908:
    // 0x1a5908: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a5908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_1a590c:
    // 0x1a590c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a590cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a5910:
    // 0x1a5910: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a5910u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a5914:
    // 0x1a5914: 0x3c120037  lui         $s2, 0x37
    ctx->pc = 0x1a5914u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)55 << 16));
label_1a5918:
    // 0x1a5918: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a591c:
    // 0x1a591c: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x1a591cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_1a5920:
    // 0x1a5920: 0x2651e118  addiu       $s1, $s2, -0x1EE8
    ctx->pc = 0x1a5920u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959384));
label_1a5924:
    // 0x1a5924: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a5924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a5928:
    // 0x1a5928: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a592c:
    // 0x1a592c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a592cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_1a5930:
    // 0x1a5930: 0x4400004  bltz        $v0, . + 4 + (0x4 << 2)
label_1a5934:
    if (ctx->pc == 0x1A5934u) {
        ctx->pc = 0x1A5934u;
            // 0x1a5934: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5938u;
        goto label_1a5938;
    }
    ctx->pc = 0x1A5930u;
    {
        const bool branch_taken_0x1a5930 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1A5934u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5930u;
            // 0x1a5934: 0x80a02d  daddu       $s4, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5930) {
            ctx->pc = 0x1A5944u;
            goto label_1a5944;
        }
    }
    ctx->pc = 0x1A5938u;
label_1a5938:
    // 0x1a5938: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a5938u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
label_1a593c:
    // 0x1a593c: 0x10000042  b           . + 4 + (0x42 << 2)
label_1a5940:
    if (ctx->pc == 0x1A5940u) {
        ctx->pc = 0x1A5940u;
            // 0x1a5940: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->pc = 0x1A5944u;
        goto label_1a5944;
    }
    ctx->pc = 0x1A593Cu;
    {
        const bool branch_taken_0x1a593c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5940u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A593Cu;
            // 0x1a5940: 0x34428001  ori         $v0, $v0, 0x8001 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32769);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a593c) {
            ctx->pc = 0x1A5A48u;
            goto label_1a5a48;
        }
    }
    ctx->pc = 0x1A5944u;
label_1a5944:
    // 0x1a5944: 0x3c1301bf  lui         $s3, 0x1BF
    ctx->pc = 0x1a5944u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)447 << 16));
label_1a5948:
    // 0x1a5948: 0xfe40e118  sd          $zero, -0x1EE8($s2)
    ctx->pc = 0x1a5948u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 4294959384), GPR_U64(ctx, 0));
label_1a594c:
    // 0x1a594c: 0x2670d840  addiu       $s0, $s3, -0x27C0
    ctx->pc = 0x1a594cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957120));
label_1a5950:
    // 0x1a5950: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1a5950u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
label_1a5954:
    // 0x1a5954: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1a5954u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1a5958:
    // 0x1a5958: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a5958u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a595c:
    // 0x1a595c: 0xc049cb6  jal         func_1272D8
label_1a5960:
    if (ctx->pc == 0x1A5960u) {
        ctx->pc = 0x1A5960u;
            // 0x1a5960: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->pc = 0x1A5964u;
        goto label_1a5964;
    }
    ctx->pc = 0x1A595Cu;
    SET_GPR_U32(ctx, 31, 0x1A5964u);
    ctx->pc = 0x1A5960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A595Cu;
            // 0x1a5960: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5964u; }
        if (ctx->pc != 0x1A5964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5964u; }
        if (ctx->pc != 0x1A5964u) { return; }
    }
    ctx->pc = 0x1A5964u;
label_1a5964:
    // 0x1a5964: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x1a5964u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_1a5968:
    // 0x1a5968: 0x26032000  addiu       $v1, $s0, 0x2000
    ctx->pc = 0x1a5968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 8192));
label_1a596c:
    // 0x1a596c: 0x2402007f  addiu       $v0, $zero, 0x7F
    ctx->pc = 0x1a596cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
label_1a5970:
    // 0x1a5970: 0x26101fc0  addiu       $s0, $s0, 0x1FC0
    ctx->pc = 0x1a5970u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8128));
label_1a5974:
    // 0x1a5974: 0x0  nop
    ctx->pc = 0x1a5974u;
    // NOP
label_1a5978:
    // 0x1a5978: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a5978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1a597c:
    // 0x1a597c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a597cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a5980:
    // 0x1a5980: 0x2610ffc0  addiu       $s0, $s0, -0x40
    ctx->pc = 0x1a5980u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967232));
label_1a5984:
    // 0x1a5984: 0x2463ffc0  addiu       $v1, $v1, -0x40
    ctx->pc = 0x1a5984u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967232));
label_1a5988:
    // 0x1a5988: 0x0  nop
    ctx->pc = 0x1a5988u;
    // NOP
label_1a598c:
    // 0x1a598c: 0x441fffa  bgez        $v0, . + 4 + (-0x6 << 2)
label_1a5990:
    if (ctx->pc == 0x1A5990u) {
        ctx->pc = 0x1A5994u;
        goto label_1a5994;
    }
    ctx->pc = 0x1A598Cu;
    {
        const bool branch_taken_0x1a598c = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x1a598c) {
            ctx->pc = 0x1A5978u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a5978;
        }
    }
    ctx->pc = 0x1A5994u;
label_1a5994:
    // 0x1a5994: 0x2662d840  addiu       $v0, $s3, -0x27C0
    ctx->pc = 0x1a5994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294957120));
label_1a5998:
    // 0x1a5998: 0xc069dd0  jal         func_1A7740
label_1a599c:
    if (ctx->pc == 0x1A599Cu) {
        ctx->pc = 0x1A599Cu;
            // 0x1a599c: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
        ctx->pc = 0x1A59A0u;
        goto label_1a59a0;
    }
    ctx->pc = 0x1A5998u;
    SET_GPR_U32(ctx, 31, 0x1A59A0u);
    ctx->pc = 0x1A599Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5998u;
            // 0x1a599c: 0xac401fc0  sw          $zero, 0x1FC0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A7740u;
    if (runtime->hasFunction(0x1A7740u)) {
        auto targetFn = runtime->lookupFunction(0x1A7740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59A0u; }
        if (ctx->pc != 0x1A59A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A7740_0x1a7740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59A0u; }
        if (ctx->pc != 0x1A59A0u) { return; }
    }
    ctx->pc = 0x1A59A0u;
label_1a59a0:
    // 0x1a59a0: 0x3c05001a  lui         $a1, 0x1A
    ctx->pc = 0x1a59a0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)26 << 16));
label_1a59a4:
    // 0x1a59a4: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1a59a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1a59a8:
    // 0x1a59a8: 0x24a55a68  addiu       $a1, $a1, 0x5A68
    ctx->pc = 0x1a59a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23144));
label_1a59ac:
    // 0x1a59ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1a59acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a59b0:
    // 0x1a59b0: 0xc043254  jal         func_10C950
label_1a59b4:
    if (ctx->pc == 0x1A59B4u) {
        ctx->pc = 0x1A59B4u;
            // 0x1a59b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A59B8u;
        goto label_1a59b8;
    }
    ctx->pc = 0x1A59B0u;
    SET_GPR_U32(ctx, 31, 0x1A59B8u);
    ctx->pc = 0x1A59B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59B0u;
            // 0x1a59b4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C950u;
    if (runtime->hasFunction(0x10C950u)) {
        auto targetFn = runtime->lookupFunction(0x10C950u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59B8u; }
        if (ctx->pc != 0x1A59B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C950_0x10c950(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59B8u; }
        if (ctx->pc != 0x1A59B8u) { return; }
    }
    ctx->pc = 0x1A59B8u;
label_1a59b8:
    // 0x1a59b8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a59b8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a59bc:
    // 0x1a59bc: 0x4630004  bgezl       $v1, . + 4 + (0x4 << 2)
label_1a59c0:
    if (ctx->pc == 0x1A59C0u) {
        ctx->pc = 0x1A59C0u;
            // 0x1a59c0: 0x2642e118  addiu       $v0, $s2, -0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959384));
        ctx->pc = 0x1A59C4u;
        goto label_1a59c4;
    }
    ctx->pc = 0x1A59BCu;
    {
        const bool branch_taken_0x1a59bc = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a59bc) {
            ctx->pc = 0x1A59C0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59BCu;
            // 0x1a59c0: 0x2642e118  addiu       $v0, $s2, -0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294959384));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A59D0u;
            goto label_1a59d0;
        }
    }
    ctx->pc = 0x1A59C4u;
label_1a59c4:
    // 0x1a59c4: 0x3c028106  lui         $v0, 0x8106
    ctx->pc = 0x1a59c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33030 << 16));
label_1a59c8:
    // 0x1a59c8: 0x1000001f  b           . + 4 + (0x1F << 2)
label_1a59cc:
    if (ctx->pc == 0x1A59CCu) {
        ctx->pc = 0x1A59CCu;
            // 0x1a59cc: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->pc = 0x1A59D0u;
        goto label_1a59d0;
    }
    ctx->pc = 0x1A59C8u;
    {
        const bool branch_taken_0x1a59c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A59CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59C8u;
            // 0x1a59cc: 0x34429021  ori         $v0, $v0, 0x9021 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36897);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a59c8) {
            ctx->pc = 0x1A5A48u;
            goto label_1a5a48;
        }
    }
    ctx->pc = 0x1A59D0u;
label_1a59d0:
    // 0x1a59d0: 0xc045ba8  jal         func_116EA0
label_1a59d4:
    if (ctx->pc == 0x1A59D4u) {
        ctx->pc = 0x1A59D4u;
            // 0x1a59d4: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->pc = 0x1A59D8u;
        goto label_1a59d8;
    }
    ctx->pc = 0x1A59D0u;
    SET_GPR_U32(ctx, 31, 0x1A59D8u);
    ctx->pc = 0x1A59D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A59D0u;
            // 0x1a59d4: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59D8u; }
        if (ctx->pc != 0x1A59D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A59D8u; }
        if (ctx->pc != 0x1A59D8u) { return; }
    }
    ctx->pc = 0x1A59D8u;
label_1a59d8:
    // 0x1a59d8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a59d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a59dc:
    // 0x1a59dc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a59dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a59e0:
    // 0x1a59e0: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x1a59e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
label_1a59e4:
    // 0x1a59e4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a59e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a59e8:
    // 0x1a59e8: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a59e8u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_1a59ec:
    // 0x1a59ec: 0x3442fffc  ori         $v0, $v0, 0xFFFC
    ctx->pc = 0x1a59ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65532);
label_1a59f0:
    // 0x1a59f0: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x1a59f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_1a59f4:
    // 0x1a59f4: 0x542825  or          $a1, $v0, $s4
    ctx->pc = 0x1a59f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 20));
label_1a59f8:
    // 0x1a59f8: 0x34a50300  ori         $a1, $a1, 0x300
    ctx->pc = 0x1a59f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)768);
label_1a59fc:
    // 0x1a59fc: 0x30a20080  andi        $v0, $a1, 0x80
    ctx->pc = 0x1a59fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)128);
label_1a5a00:
    // 0x1a5a00: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_1a5a04:
    if (ctx->pc == 0x1A5A04u) {
        ctx->pc = 0x1A5A04u;
            // 0x1a5a04: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x1A5A08u;
        goto label_1a5a08;
    }
    ctx->pc = 0x1A5A00u;
    {
        const bool branch_taken_0x1a5a00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A00u;
            // 0x1a5a04: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a00) {
            ctx->pc = 0x1A5A24u;
            goto label_1a5a24;
        }
    }
    ctx->pc = 0x1A5A08u;
label_1a5a08:
    // 0x1a5a08: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a5a08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a5a0c:
    // 0x1a5a0c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1a5a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_1a5a10:
    // 0x1a5a10: 0x34840820  ori         $a0, $a0, 0x820
    ctx->pc = 0x1a5a10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2080);
label_1a5a14:
    // 0x1a5a14: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1a5a14u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
label_1a5a18:
    // 0x1a5a18: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a5a18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
label_1a5a1c:
    // 0x1a5a1c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a5a1cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
label_1a5a20:
    // 0x1a5a20: 0x34a50c80  ori         $a1, $a1, 0xC80
    ctx->pc = 0x1a5a20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3200);
label_1a5a24:
    // 0x1a5a24: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1a5a24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_1a5a28:
    // 0x1a5a28: 0xac250810  sw          $a1, 0x810($at)
    ctx->pc = 0x1a5a28u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 5)); // MMIO: 0x10000810
label_1a5a2c:
    // 0x1a5a2c: 0xc0435ea  jal         func_10D7A8
label_1a5a30:
    if (ctx->pc == 0x1A5A30u) {
        ctx->pc = 0x1A5A30u;
            // 0x1a5a30: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x1A5A34u;
        goto label_1a5a34;
    }
    ctx->pc = 0x1A5A2Cu;
    SET_GPR_U32(ctx, 31, 0x1A5A34u);
    ctx->pc = 0x1A5A30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A2Cu;
            // 0x1a5a30: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10D7A8u;
    if (runtime->hasFunction(0x10D7A8u)) {
        auto targetFn = runtime->lookupFunction(0x10D7A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A34u; }
        if (ctx->pc != 0x1A5A34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010D7A8_0x10d7a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A5A34u; }
        if (ctx->pc != 0x1A5A34u) { return; }
    }
    ctx->pc = 0x1A5A34u;
label_1a5a34:
    // 0x1a5a34: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_1a5a38:
    if (ctx->pc == 0x1A5A38u) {
        ctx->pc = 0x1A5A38u;
            // 0x1a5a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A3Cu;
        goto label_1a5a3c;
    }
    ctx->pc = 0x1A5A34u;
    {
        const bool branch_taken_0x1a5a34 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A34u;
            // 0x1a5a38: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5a34) {
            ctx->pc = 0x1A5A48u;
            goto label_1a5a48;
        }
    }
    ctx->pc = 0x1A5A3Cu;
label_1a5a3c:
    // 0x1a5a3c: 0xf  sync
    ctx->pc = 0x1a5a3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5a40:
    // 0x1a5a40: 0x42000038  ei
    ctx->pc = 0x1a5a40u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
label_1a5a44:
    // 0x1a5a44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5a44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a48:
    // 0x1a5a48: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1a5a48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5a4c:
    // 0x1a5a4c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a5a4cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5a50:
    // 0x1a5a50: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a5a50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5a54:
    // 0x1a5a54: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5a54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5a58:
    // 0x1a5a58: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5a58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5a5c:
    // 0x1a5a5c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5a5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5a60:
    // 0x1a5a60: 0x3e00008  jr          $ra
label_1a5a64:
    if (ctx->pc == 0x1A5A64u) {
        ctx->pc = 0x1A5A64u;
            // 0x1a5a64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x1A5A68u;
        goto label_1a5a68;
    }
    ctx->pc = 0x1A5A60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5A64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5A60u;
            // 0x1a5a64: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A5A68u;
label_1a5a68:
    // 0x1a5a68: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x1a5a68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_1a5a6c:
    // 0x1a5a6c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a5a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a5a70:
    // 0x1a5a70: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x1a5a70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
label_1a5a74:
    // 0x1a5a74: 0x34630810  ori         $v1, $v1, 0x810
    ctx->pc = 0x1a5a74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2064);
label_1a5a78:
    // 0x1a5a78: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a5a78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a5a7c:
    // 0x1a5a7c: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x1a5a7cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_1a5a80:
    // 0x1a5a80: 0xffbe0080  sd          $fp, 0x80($sp)
    ctx->pc = 0x1a5a80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 30));
label_1a5a84:
    // 0x1a5a84: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x1a5a84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
label_1a5a88:
    // 0x1a5a88: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1a5a88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
label_1a5a8c:
    // 0x1a5a8c: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x1a5a8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_1a5a90:
    // 0x1a5a90: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x1a5a90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_1a5a94:
    // 0x1a5a94: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1a5a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_1a5a98:
    // 0x1a5a98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1a5a98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_1a5a9c:
    // 0x1a5a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1a5a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1a5aa0:
    // 0x1a5aa0: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1a5aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_1a5aa4:
    // 0x1a5aa4: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x1a5aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
label_1a5aa8:
    // 0x1a5aa8: 0x1040007b  beqz        $v0, . + 4 + (0x7B << 2)
label_1a5aac:
    if (ctx->pc == 0x1A5AACu) {
        ctx->pc = 0x1A5AACu;
            // 0x1a5aac: 0x3c160037  lui         $s6, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
        ctx->pc = 0x1A5AB0u;
        goto label_1a5ab0;
    }
    ctx->pc = 0x1A5AA8u;
    {
        const bool branch_taken_0x1a5aa8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5AA8u;
            // 0x1a5aac: 0x3c160037  lui         $s6, 0x37 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)55 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5aa8) {
            ctx->pc = 0x1A5C98u;
            goto label_1a5c98;
        }
    }
    ctx->pc = 0x1A5AB0u;
label_1a5ab0:
    // 0x1a5ab0: 0x3c131000  lui         $s3, 0x1000
    ctx->pc = 0x1a5ab0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4096 << 16));
label_1a5ab4:
    // 0x1a5ab4: 0x26c2e118  addiu       $v0, $s6, -0x1EE8
    ctx->pc = 0x1a5ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959384));
label_1a5ab8:
    // 0x1a5ab8: 0x2c0a82d  daddu       $s5, $s6, $zero
    ctx->pc = 0x1a5ab8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a5abc:
    // 0x1a5abc: 0x8c500018  lw          $s0, 0x18($v0)
    ctx->pc = 0x1a5abcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1a5ac0:
    // 0x1a5ac0: 0x2c0a02d  daddu       $s4, $s6, $zero
    ctx->pc = 0x1a5ac0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_1a5ac4:
    // 0x1a5ac4: 0x36730800  ori         $s3, $s3, 0x800
    ctx->pc = 0x1a5ac4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2048);
label_1a5ac8:
    // 0x1a5ac8: 0x10000054  b           . + 4 + (0x54 << 2)
label_1a5acc:
    if (ctx->pc == 0x1A5ACCu) {
        ctx->pc = 0x1A5ACCu;
            // 0x1a5acc: 0x241e3999  addiu       $fp, $zero, 0x3999 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
        ctx->pc = 0x1A5AD0u;
        goto label_1a5ad0;
    }
    ctx->pc = 0x1A5AC8u;
    {
        const bool branch_taken_0x1a5ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5AC8u;
            // 0x1a5acc: 0x241e3999  addiu       $fp, $zero, 0x3999 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 14745));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ac8) {
            ctx->pc = 0x1A5C1Cu;
            goto label_1a5c1c;
        }
    }
    ctx->pc = 0x1A5AD0u;
label_1a5ad0:
    // 0x1a5ad0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a5ad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a5ad4:
    // 0x1a5ad4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1a5ad8:
    if (ctx->pc == 0x1A5AD8u) {
        ctx->pc = 0x1A5AD8u;
            // 0x1a5ad8: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x1A5ADCu;
        goto label_1a5adc;
    }
    ctx->pc = 0x1A5AD4u;
    {
        const bool branch_taken_0x1a5ad4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5AD4u;
            // 0x1a5ad8: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5ad4) {
            ctx->pc = 0x1A5AE4u;
            goto label_1a5ae4;
        }
    }
    ctx->pc = 0x1A5ADCu;
label_1a5adc:
    // 0x1a5adc: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a5ae0:
    if (ctx->pc == 0x1A5AE0u) {
        ctx->pc = 0x1A5AE0u;
            // 0x1a5ae0: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->pc = 0x1A5AE4u;
        goto label_1a5ae4;
    }
    ctx->pc = 0x1A5ADCu;
    {
        const bool branch_taken_0x1a5adc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5AE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5ADCu;
            // 0x1a5ae0: 0xac520000  sw          $s2, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5adc) {
            ctx->pc = 0x1A5AE8u;
            goto label_1a5ae8;
        }
    }
    ctx->pc = 0x1A5AE4u;
label_1a5ae4:
    // 0x1a5ae4: 0xacb20018  sw          $s2, 0x18($a1)
    ctx->pc = 0x1a5ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 18));
label_1a5ae8:
    // 0x1a5ae8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
label_1a5aec:
    if (ctx->pc == 0x1A5AECu) {
        ctx->pc = 0x1A5AF0u;
        goto label_1a5af0;
    }
    ctx->pc = 0x1A5AE8u;
    {
        const bool branch_taken_0x1a5ae8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5ae8) {
            ctx->pc = 0x1A5AF8u;
            goto label_1a5af8;
        }
    }
    ctx->pc = 0x1A5AF0u;
label_1a5af0:
    // 0x1a5af0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1a5af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1a5af4:
    // 0x1a5af4: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x1a5af4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
label_1a5af8:
    // 0x1a5af8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x1a5af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a5afc:
    // 0x1a5afc: 0x103900  sll         $a3, $s0, 4
    ctx->pc = 0x1a5afcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_1a5b00:
    // 0x1a5b00: 0xde060018  ld          $a2, 0x18($s0)
    ctx->pc = 0x1a5b00u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_1a5b04:
    // 0x1a5b04: 0x26b1e118  addiu       $s1, $s5, -0x1EE8
    ctx->pc = 0x1a5b04u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959384));
label_1a5b08:
    // 0x1a5b08: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x1a5b08u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_1a5b0c:
    // 0x1a5b0c: 0xe21025  or          $v0, $a3, $v0
    ctx->pc = 0x1a5b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1a5b10:
    // 0x1a5b10: 0x86302d  daddu       $a2, $a0, $a2
    ctx->pc = 0x1a5b10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 6));
label_1a5b14:
    // 0x1a5b14: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x1a5b14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
label_1a5b18:
    // 0x1a5b18: 0xc3302f  dsubu       $a2, $a2, $v1
    ctx->pc = 0x1a5b18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) - GPR_U64(ctx, 3));
label_1a5b1c:
    // 0x1a5b1c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1a5b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_1a5b20:
    // 0x1a5b20: 0x8e1c002c  lw          $gp, 0x2C($s0)
    ctx->pc = 0x1a5b20u;
    SET_GPR_S32(ctx, 28, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_1a5b24:
    // 0x1a5b24: 0x8e040008  lw          $a0, 0x8($s0)
    ctx->pc = 0x1a5b24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1a5b28:
    // 0x1a5b28: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x1a5b28u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b2c:
    // 0x1a5b2c: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x1a5b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_1a5b30:
    // 0x1a5b30: 0xe42025  or          $a0, $a3, $a0
    ctx->pc = 0x1a5b30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) | GPR_U64(ctx, 4));
label_1a5b34:
    // 0x1a5b34: 0xde050020  ld          $a1, 0x20($s0)
    ctx->pc = 0x1a5b34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1a5b38:
    // 0x1a5b38: 0x40f809  jalr        $v0
label_1a5b3c:
    if (ctx->pc == 0x1A5B3Cu) {
        ctx->pc = 0x1A5B3Cu;
            // 0x1a5b3c: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->pc = 0x1A5B40u;
        goto label_1a5b40;
    }
    ctx->pc = 0x1A5B38u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1A5B40u);
        ctx->pc = 0x1A5B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B38u;
            // 0x1a5b3c: 0x8e070030  lw          $a3, 0x30($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1A5B40u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1A5B40u; }
            if (ctx->pc != 0x1A5B40u) { return; }
        }
        }
    }
    ctx->pc = 0x1A5B40u;
label_1a5b40:
    // 0x1a5b40: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1a5b40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5b44:
    // 0x1a5b44: 0x14c00007  bnez        $a2, . + 4 + (0x7 << 2)
label_1a5b48:
    if (ctx->pc == 0x1A5B48u) {
        ctx->pc = 0x1A5B48u;
            // 0x1a5b48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A5B4Cu;
        goto label_1a5b4c;
    }
    ctx->pc = 0x1A5B44u;
    {
        const bool branch_taken_0x1a5b44 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B44u;
            // 0x1a5b48: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b44) {
            ctx->pc = 0x1A5B64u;
            goto label_1a5b64;
        }
    }
    ctx->pc = 0x1A5B4Cu;
label_1a5b4c:
    // 0x1a5b4c: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x1a5b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1a5b50:
    // 0x1a5b50: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a5b50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a5b54:
    // 0x1a5b54: 0x3442fffd  ori         $v0, $v0, 0xFFFD
    ctx->pc = 0x1a5b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65533);
label_1a5b58:
    // 0x1a5b58: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x1a5b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_1a5b5c:
    // 0x1a5b5c: 0x1000002e  b           . + 4 + (0x2E << 2)
label_1a5b60:
    if (ctx->pc == 0x1A5B60u) {
        ctx->pc = 0x1A5B60u;
            // 0x1a5b60: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->pc = 0x1A5B64u;
        goto label_1a5b64;
    }
    ctx->pc = 0x1A5B5Cu;
    {
        const bool branch_taken_0x1a5b5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B5Cu;
            // 0x1a5b60: 0xae03000c  sw          $v1, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b5c) {
            ctx->pc = 0x1A5C18u;
            goto label_1a5c18;
        }
    }
    ctx->pc = 0x1A5B64u;
label_1a5b64:
    // 0x1a5b64: 0x14c2000b  bne         $a2, $v0, . + 4 + (0xB << 2)
label_1a5b68:
    if (ctx->pc == 0x1A5B68u) {
        ctx->pc = 0x1A5B68u;
            // 0x1a5b68: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->pc = 0x1A5B6Cu;
        goto label_1a5b6c;
    }
    ctx->pc = 0x1A5B64u;
    {
        const bool branch_taken_0x1a5b64 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A5B68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B64u;
            // 0x1a5b68: 0x24023998  addiu       $v0, $zero, 0x3998 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b64) {
            ctx->pc = 0x1A5B94u;
            goto label_1a5b94;
        }
    }
    ctx->pc = 0x1A5B6Cu;
label_1a5b6c:
    // 0x1a5b6c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1a5b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1a5b70:
    // 0x1a5b70: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x1a5b70u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_1a5b74:
    // 0x1a5b74: 0x8e230014  lw          $v1, 0x14($s1)
    ctx->pc = 0x1a5b74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_1a5b78:
    // 0x1a5b78: 0x8e220010  lw          $v0, 0x10($s1)
    ctx->pc = 0x1a5b78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_1a5b7c:
    // 0x1a5b7c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x1a5b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_1a5b80:
    // 0x1a5b80: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a5b80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1a5b84:
    // 0x1a5b84: 0xae300014  sw          $s0, 0x14($s1)
    ctx->pc = 0x1a5b84u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 16));
label_1a5b88:
    // 0x1a5b88: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x1a5b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
label_1a5b8c:
    // 0x1a5b8c: 0x10000023  b           . + 4 + (0x23 << 2)
label_1a5b90:
    if (ctx->pc == 0x1A5B90u) {
        ctx->pc = 0x1A5B90u;
            // 0x1a5b90: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B94u;
        goto label_1a5b94;
    }
    ctx->pc = 0x1A5B8Cu;
    {
        const bool branch_taken_0x1a5b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5B8Cu;
            // 0x1a5b90: 0x240802d  daddu       $s0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5b8c) {
            ctx->pc = 0x1A5C1Cu;
            goto label_1a5c1c;
        }
    }
    ctx->pc = 0x1A5B94u;
label_1a5b94:
    // 0x1a5b94: 0xde030020  ld          $v1, 0x20($s0)
    ctx->pc = 0x1a5b94u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1a5b98:
    // 0x1a5b98: 0x46102b  sltu        $v0, $v0, $a2
    ctx->pc = 0x1a5b98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
label_1a5b9c:
    // 0x1a5b9c: 0xde040010  ld          $a0, 0x10($s0)
    ctx->pc = 0x1a5b9cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_1a5ba0:
    // 0x1a5ba0: 0x3c2300a  movz        $a2, $fp, $v0
    ctx->pc = 0x1a5ba0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 30));
label_1a5ba4:
    // 0x1a5ba4: 0xde050018  ld          $a1, 0x18($s0)
    ctx->pc = 0x1a5ba4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_1a5ba8:
    // 0x1a5ba8: 0x66182d  daddu       $v1, $v1, $a2
    ctx->pc = 0x1a5ba8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 6));
label_1a5bac:
    // 0x1a5bac: 0x64202d  daddu       $a0, $v1, $a0
    ctx->pc = 0x1a5bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
label_1a5bb0:
    // 0x1a5bb0: 0x8e260018  lw          $a2, 0x18($s1)
    ctx->pc = 0x1a5bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_1a5bb4:
    // 0x1a5bb4: 0x85382f  dsubu       $a3, $a0, $a1
    ctx->pc = 0x1a5bb4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 4) - GPR_U64(ctx, 5));
label_1a5bb8:
    // 0x1a5bb8: 0xfe030020  sd          $v1, 0x20($s0)
    ctx->pc = 0x1a5bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 32), GPR_U64(ctx, 3));
label_1a5bbc:
    // 0x1a5bbc: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a5bc0:
    if (ctx->pc == 0x1A5BC0u) {
        ctx->pc = 0x1A5BC0u;
            // 0x1a5bc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BC4u;
        goto label_1a5bc4;
    }
    ctx->pc = 0x1A5BBCu;
    {
        const bool branch_taken_0x1a5bbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BBCu;
            // 0x1a5bc0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bbc) {
            ctx->pc = 0x1A5BCCu;
            goto label_1a5bcc;
        }
    }
    ctx->pc = 0x1A5BC4u;
label_1a5bc4:
    // 0x1a5bc4: 0x0  nop
    ctx->pc = 0x1a5bc4u;
    // NOP
label_1a5bc8:
    // 0x1a5bc8: 0x8ca60000  lw          $a2, 0x0($a1)
    ctx->pc = 0x1a5bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_1a5bcc:
    // 0x1a5bcc: 0x50c0000a  beql        $a2, $zero, . + 4 + (0xA << 2)
label_1a5bd0:
    if (ctx->pc == 0x1A5BD0u) {
        ctx->pc = 0x1A5BD0u;
            // 0x1a5bd0: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->pc = 0x1A5BD4u;
        goto label_1a5bd4;
    }
    ctx->pc = 0x1A5BCCu;
    {
        const bool branch_taken_0x1a5bcc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5bcc) {
            ctx->pc = 0x1A5BD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BCCu;
            // 0x1a5bd0: 0xae050004  sw          $a1, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BF8u;
            goto label_1a5bf8;
        }
    }
    ctx->pc = 0x1A5BD4u;
label_1a5bd4:
    // 0x1a5bd4: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a5bd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
label_1a5bd8:
    // 0x1a5bd8: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x1a5bd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_1a5bdc:
    // 0x1a5bdc: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x1a5bdcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_1a5be0:
    // 0x1a5be0: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a5be0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1a5be4:
    // 0x1a5be4: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x1a5be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_1a5be8:
    // 0x1a5be8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x1a5be8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a5bec:
    // 0x1a5bec: 0x5040fff6  beql        $v0, $zero, . + 4 + (-0xA << 2)
label_1a5bf0:
    if (ctx->pc == 0x1A5BF0u) {
        ctx->pc = 0x1A5BF0u;
            // 0x1a5bf0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BF4u;
        goto label_1a5bf4;
    }
    ctx->pc = 0x1A5BECu;
    {
        const bool branch_taken_0x1a5bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5bec) {
            ctx->pc = 0x1A5BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BECu;
            // 0x1a5bf0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5BC8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a5bc8;
        }
    }
    ctx->pc = 0x1A5BF4u;
label_1a5bf4:
    // 0x1a5bf4: 0xae050004  sw          $a1, 0x4($s0)
    ctx->pc = 0x1a5bf4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 5));
label_1a5bf8:
    // 0x1a5bf8: 0x10c00002  beqz        $a2, . + 4 + (0x2 << 2)
label_1a5bfc:
    if (ctx->pc == 0x1A5BFCu) {
        ctx->pc = 0x1A5BFCu;
            // 0x1a5bfc: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->pc = 0x1A5C00u;
        goto label_1a5c00;
    }
    ctx->pc = 0x1A5BF8u;
    {
        const bool branch_taken_0x1a5bf8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5BF8u;
            // 0x1a5bfc: 0xae060000  sw          $a2, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5bf8) {
            ctx->pc = 0x1A5C04u;
            goto label_1a5c04;
        }
    }
    ctx->pc = 0x1A5C00u;
label_1a5c00:
    // 0x1a5c00: 0xacd00004  sw          $s0, 0x4($a2)
    ctx->pc = 0x1a5c00u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 16));
label_1a5c04:
    // 0x1a5c04: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_1a5c08:
    if (ctx->pc == 0x1A5C08u) {
        ctx->pc = 0x1A5C08u;
            // 0x1a5c08: 0x26a2e118  addiu       $v0, $s5, -0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959384));
        ctx->pc = 0x1A5C0Cu;
        goto label_1a5c0c;
    }
    ctx->pc = 0x1A5C04u;
    {
        const bool branch_taken_0x1a5c04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C04u;
            // 0x1a5c08: 0x26a2e118  addiu       $v0, $s5, -0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 21), 4294959384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c04) {
            ctx->pc = 0x1A5C14u;
            goto label_1a5c14;
        }
    }
    ctx->pc = 0x1A5C0Cu;
label_1a5c0c:
    // 0x1a5c0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_1a5c10:
    if (ctx->pc == 0x1A5C10u) {
        ctx->pc = 0x1A5C10u;
            // 0x1a5c10: 0xacb00000  sw          $s0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
        ctx->pc = 0x1A5C14u;
        goto label_1a5c14;
    }
    ctx->pc = 0x1A5C0Cu;
    {
        const bool branch_taken_0x1a5c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C0Cu;
            // 0x1a5c10: 0xacb00000  sw          $s0, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c0c) {
            ctx->pc = 0x1A5C18u;
            goto label_1a5c18;
        }
    }
    ctx->pc = 0x1A5C14u;
label_1a5c14:
    // 0x1a5c14: 0xac500018  sw          $s0, 0x18($v0)
    ctx->pc = 0x1a5c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 16));
label_1a5c18:
    // 0x1a5c18: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x1a5c18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a5c1c:
    // 0x1a5c1c: 0x1200001e  beqz        $s0, . + 4 + (0x1E << 2)
label_1a5c20:
    if (ctx->pc == 0x1A5C20u) {
        ctx->pc = 0x1A5C20u;
            // 0x1a5c20: 0x2685e118  addiu       $a1, $s4, -0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959384));
        ctx->pc = 0x1A5C24u;
        goto label_1a5c24;
    }
    ctx->pc = 0x1A5C1Cu;
    {
        const bool branch_taken_0x1a5c1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C1Cu;
            // 0x1a5c20: 0x2685e118  addiu       $a1, $s4, -0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c1c) {
            ctx->pc = 0x1A5C98u;
            goto label_1a5c98;
        }
    }
    ctx->pc = 0x1A5C24u;
label_1a5c24:
    // 0x1a5c24: 0xde020020  ld          $v0, 0x20($s0)
    ctx->pc = 0x1a5c24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 32)));
label_1a5c28:
    // 0x1a5c28: 0xde030010  ld          $v1, 0x10($s0)
    ctx->pc = 0x1a5c28u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_1a5c2c:
    // 0x1a5c2c: 0xde040018  ld          $a0, 0x18($s0)
    ctx->pc = 0x1a5c2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_1a5c30:
    // 0x1a5c30: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a5c30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1a5c34:
    // 0x1a5c34: 0x44102f  dsubu       $v0, $v0, $a0
    ctx->pc = 0x1a5c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
label_1a5c38:
    // 0x1a5c38: 0x9e640000  lwu         $a0, 0x0($s3)
    ctx->pc = 0x1a5c38u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5c3c:
    // 0x1a5c3c: 0x8e680010  lw          $t0, 0x10($s3)
    ctx->pc = 0x1a5c3cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
label_1a5c40:
    // 0x1a5c40: 0xde8ae118  ld          $t2, -0x1EE8($s4)
    ctx->pc = 0x1a5c40u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 20), 4294959384)));
label_1a5c44:
    // 0x1a5c44: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x1a5c44u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_1a5c48:
    // 0x1a5c48: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_1a5c4c:
    if (ctx->pc == 0x1A5C4Cu) {
        ctx->pc = 0x1A5C4Cu;
            // 0x1a5c4c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1A5C50u;
        goto label_1a5c50;
    }
    ctx->pc = 0x1A5C48u;
    {
        const bool branch_taken_0x1a5c48 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C48u;
            // 0x1a5c4c: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c48) {
            ctx->pc = 0x1A5C6Cu;
            goto label_1a5c6c;
        }
    }
    ctx->pc = 0x1A5C50u;
label_1a5c50:
    // 0x1a5c50: 0x9e640000  lwu         $a0, 0x0($s3)
    ctx->pc = 0x1a5c50u;
    SET_GPR_U32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_1a5c54:
    // 0x1a5c54: 0x2409fbff  addiu       $t1, $zero, -0x401
    ctx->pc = 0x1a5c54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_1a5c58:
    // 0x1a5c58: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x1a5c58u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_1a5c5c:
    // 0x1a5c5c: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x1a5c5cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_1a5c60:
    // 0x1a5c60: 0xfe8ae118  sd          $t2, -0x1EE8($s4)
    ctx->pc = 0x1a5c60u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 4294959384), GPR_U64(ctx, 10));
label_1a5c64:
    // 0x1a5c64: 0xae680010  sw          $t0, 0x10($s3)
    ctx->pc = 0x1a5c64u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 8));
label_1a5c68:
    // 0x1a5c68: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1a5c68u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5c6c:
    // 0x1a5c6c: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a5c6cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_1a5c70:
    // 0x1a5c70: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1a5c70u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_1a5c74:
    // 0x1a5c74: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1a5c74u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_1a5c78:
    // 0x1a5c78: 0x8a2025  or          $a0, $a0, $t2
    ctx->pc = 0x1a5c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 10));
label_1a5c7c:
    // 0x1a5c7c: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1a5c7cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
label_1a5c80:
    // 0x1a5c80: 0x1242014  dsllv       $a0, $a0, $t1
    ctx->pc = 0x1a5c80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (GPR_U32(ctx, 9) & 0x3F));
label_1a5c84:
    // 0x1a5c84: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1a5c84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1a5c88:
    // 0x1a5c88: 0x1040ff91  beqz        $v0, . + 4 + (-0x6F << 2)
label_1a5c8c:
    if (ctx->pc == 0x1A5C8Cu) {
        ctx->pc = 0x1A5C8Cu;
            // 0x1a5c8c: 0x26c3e118  addiu       $v1, $s6, -0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959384));
        ctx->pc = 0x1A5C90u;
        goto label_1a5c90;
    }
    ctx->pc = 0x1A5C88u;
    {
        const bool branch_taken_0x1a5c88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C88u;
            // 0x1a5c8c: 0x26c3e118  addiu       $v1, $s6, -0x1EE8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c88) {
            ctx->pc = 0x1A5AD0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a5ad0;
        }
    }
    ctx->pc = 0x1A5C90u;
label_1a5c90:
    // 0x1a5c90: 0x10000003  b           . + 4 + (0x3 << 2)
label_1a5c94:
    if (ctx->pc == 0x1A5C94u) {
        ctx->pc = 0x1A5C94u;
            // 0x1a5c94: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x1A5C98u;
        goto label_1a5c98;
    }
    ctx->pc = 0x1A5C90u;
    {
        const bool branch_taken_0x1a5c90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5C90u;
            // 0x1a5c94: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5c90) {
            ctx->pc = 0x1A5CA0u;
            goto label_1a5ca0;
        }
    }
    ctx->pc = 0x1A5C98u;
label_1a5c98:
    // 0x1a5c98: 0x26c3e118  addiu       $v1, $s6, -0x1EE8
    ctx->pc = 0x1a5c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294959384));
label_1a5c9c:
    // 0x1a5c9c: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x1a5c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_1a5ca0:
    // 0x1a5ca0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a5ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a5ca4:
    // 0x1a5ca4: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x1a5ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_1a5ca8:
    // 0x1a5ca8: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1a5ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_1a5cac:
    // 0x1a5cac: 0x9c4b0000  lwu         $t3, 0x0($v0)
    ctx->pc = 0x1a5cacu;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5cb0:
    // 0x1a5cb0: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x1a5cb0u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16))); // MMIO: 0x10000010
label_1a5cb4:
    // 0x1a5cb4: 0xdecae118  ld          $t2, -0x1EE8($s6)
    ctx->pc = 0x1a5cb4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 22), 4294959384)));
label_1a5cb8:
    // 0x1a5cb8: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x1a5cb8u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_1a5cbc:
    // 0x1a5cbc: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_1a5cc0:
    if (ctx->pc == 0x1A5CC0u) {
        ctx->pc = 0x1A5CC0u;
            // 0x1a5cc0: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1A5CC4u;
        goto label_1a5cc4;
    }
    ctx->pc = 0x1A5CBCu;
    {
        const bool branch_taken_0x1a5cbc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CBCu;
            // 0x1a5cc0: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cbc) {
            ctx->pc = 0x1A5CE0u;
            goto label_1a5ce0;
        }
    }
    ctx->pc = 0x1A5CC4u;
label_1a5cc4:
    // 0x1a5cc4: 0x9c4b0000  lwu         $t3, 0x0($v0)
    ctx->pc = 0x1a5cc4u;
    SET_GPR_U32(ctx, 11, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5cc8:
    // 0x1a5cc8: 0x2409fbff  addiu       $t1, $zero, -0x401
    ctx->pc = 0x1a5cc8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_1a5ccc:
    // 0x1a5ccc: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x1a5cccu;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_1a5cd0:
    // 0x1a5cd0: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x1a5cd0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_1a5cd4:
    // 0x1a5cd4: 0xfecae118  sd          $t2, -0x1EE8($s6)
    ctx->pc = 0x1a5cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294959384), GPR_U64(ctx, 10));
label_1a5cd8:
    // 0x1a5cd8: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x1a5cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
label_1a5cdc:
    // 0x1a5cdc: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1a5cdcu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5ce0:
    // 0x1a5ce0: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a5ce0u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_1a5ce4:
    // 0x1a5ce4: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1a5ce4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_1a5ce8:
    // 0x1a5ce8: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1a5ce8u;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_1a5cec:
    // 0x1a5cec: 0x16a5825  or          $t3, $t3, $t2
    ctx->pc = 0x1a5cecu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) | GPR_U64(ctx, 10));
label_1a5cf0:
    // 0x1a5cf0: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1a5cf0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
label_1a5cf4:
    // 0x1a5cf4: 0x12b5814  dsllv       $t3, $t3, $t1
    ctx->pc = 0x1a5cf4u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 11) << (GPR_U32(ctx, 9) & 0x3F));
label_1a5cf8:
    // 0x1a5cf8: 0x8c64001c  lw          $a0, 0x1C($v1)
    ctx->pc = 0x1a5cf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1a5cfc:
    // 0x1a5cfc: 0x4810052  bgez        $a0, . + 4 + (0x52 << 2)
label_1a5d00:
    if (ctx->pc == 0x1A5D00u) {
        ctx->pc = 0x1A5D00u;
            // 0x1a5d00: 0x8c660018  lw          $a2, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->pc = 0x1A5D04u;
        goto label_1a5d04;
    }
    ctx->pc = 0x1A5CFCu;
    {
        const bool branch_taken_0x1a5cfc = (GPR_S32(ctx, 4) >= 0);
        ctx->pc = 0x1A5D00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5CFCu;
            // 0x1a5d00: 0x8c660018  lw          $a2, 0x18($v1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5cfc) {
            ctx->pc = 0x1A5E48u;
            goto label_1a5e48;
        }
    }
    ctx->pc = 0x1A5D04u;
label_1a5d04:
    // 0x1a5d04: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a5d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a5d08:
    // 0x1a5d08: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a5d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
label_1a5d0c:
    // 0x1a5d0c: 0x8c490000  lw          $t1, 0x0($v0)
    ctx->pc = 0x1a5d0cu;
    SET_GPR_S32(ctx, 9, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0))); // MMIO: 0x10000000
label_1a5d10:
    // 0x1a5d10: 0x54c0000b  bnel        $a2, $zero, . + 4 + (0xB << 2)
label_1a5d14:
    if (ctx->pc == 0x1A5D14u) {
        ctx->pc = 0x1A5D14u;
            // 0x1a5d14: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->pc = 0x1A5D18u;
        goto label_1a5d18;
    }
    ctx->pc = 0x1A5D10u;
    {
        const bool branch_taken_0x1a5d10 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a5d10) {
            ctx->pc = 0x1A5D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D10u;
            // 0x1a5d14: 0xdcc20020  ld          $v0, 0x20($a2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5D40u;
            goto label_1a5d40;
        }
    }
    ctx->pc = 0x1A5D18u;
label_1a5d18:
    // 0x1a5d18: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1a5d18u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
label_1a5d1c:
    // 0x1a5d1c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x1a5d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_1a5d20:
    // 0x1a5d20: 0x34630820  ori         $v1, $v1, 0x820
    ctx->pc = 0x1a5d20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2080);
label_1a5d24:
    // 0x1a5d24: 0x3442f7ff  ori         $v0, $v0, 0xF7FF
    ctx->pc = 0x1a5d24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63487);
label_1a5d28:
    // 0x1a5d28: 0x1221024  and         $v0, $t1, $v0
    ctx->pc = 0x1a5d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & GPR_U64(ctx, 2));
label_1a5d2c:
    // 0x1a5d2c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1a5d2cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
label_1a5d30:
    // 0x1a5d30: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1a5d30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
label_1a5d34:
    // 0x1a5d34: 0xac220810  sw          $v0, 0x810($at)
    ctx->pc = 0x1a5d34u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 1), 2064), GPR_U32(ctx, 2)); // MMIO: 0x10000810
label_1a5d38:
    // 0x1a5d38: 0x10000044  b           . + 4 + (0x44 << 2)
label_1a5d3c:
    if (ctx->pc == 0x1A5D3Cu) {
        ctx->pc = 0x1A5D3Cu;
            // 0x1a5d3c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x1A5D40u;
        goto label_1a5d40;
    }
    ctx->pc = 0x1A5D38u;
    {
        const bool branch_taken_0x1a5d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D38u;
            // 0x1a5d3c: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d38) {
            ctx->pc = 0x1A5E4Cu;
            goto label_1a5e4c;
        }
    }
    ctx->pc = 0x1A5D40u;
label_1a5d40:
    // 0x1a5d40: 0xdcc30010  ld          $v1, 0x10($a2)
    ctx->pc = 0x1a5d40u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_1a5d44:
    // 0x1a5d44: 0xdcc40018  ld          $a0, 0x18($a2)
    ctx->pc = 0x1a5d44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_1a5d48:
    // 0x1a5d48: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x1a5d48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
label_1a5d4c:
    // 0x1a5d4c: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a5d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a5d50:
    // 0x1a5d50: 0x10c00018  beqz        $a2, . + 4 + (0x18 << 2)
label_1a5d54:
    if (ctx->pc == 0x1A5D54u) {
        ctx->pc = 0x1A5D54u;
            // 0x1a5d54: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->pc = 0x1A5D58u;
        goto label_1a5d58;
    }
    ctx->pc = 0x1A5D50u;
    {
        const bool branch_taken_0x1a5d50 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D50u;
            // 0x1a5d54: 0x44382f  dsubu       $a3, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) - GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d50) {
            ctx->pc = 0x1A5DB4u;
            goto label_1a5db4;
        }
    }
    ctx->pc = 0x1A5D58u;
label_1a5d58:
    // 0x1a5d58: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a5d58u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
label_1a5d5c:
    // 0x1a5d5c: 0x64e37333  daddiu      $v1, $a3, 0x7333
    ctx->pc = 0x1a5d5cu;
    SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
label_1a5d60:
    // 0x1a5d60: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1a5d60u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_1a5d64:
    // 0x1a5d64: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1a5d64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_1a5d68:
    // 0x1a5d68: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1a5d68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_1a5d6c:
    // 0x1a5d6c: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1a5d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
label_1a5d70:
    // 0x1a5d70: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1a5d70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a5d74:
    // 0x1a5d74: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
label_1a5d78:
    if (ctx->pc == 0x1A5D78u) {
        ctx->pc = 0x1A5D78u;
            // 0x1a5d78: 0x31280003  andi        $t0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->pc = 0x1A5D7Cu;
        goto label_1a5d7c;
    }
    ctx->pc = 0x1A5D74u;
    {
        const bool branch_taken_0x1a5d74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D74u;
            // 0x1a5d78: 0x31280003  andi        $t0, $t1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d74) {
            ctx->pc = 0x1A5DB4u;
            goto label_1a5db4;
        }
    }
    ctx->pc = 0x1A5D7Cu;
label_1a5d7c:
    // 0x1a5d7c: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1a5d7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a5d80:
    // 0x1a5d80: 0x8cc60000  lw          $a2, 0x0($a2)
    ctx->pc = 0x1a5d80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_1a5d84:
    // 0x1a5d84: 0x10c0000c  beqz        $a2, . + 4 + (0xC << 2)
label_1a5d88:
    if (ctx->pc == 0x1A5D88u) {
        ctx->pc = 0x1A5D88u;
            // 0x1a5d88: 0x64e37333  daddiu      $v1, $a3, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
        ctx->pc = 0x1A5D8Cu;
        goto label_1a5d8c;
    }
    ctx->pc = 0x1A5D84u;
    {
        const bool branch_taken_0x1a5d84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5D84u;
            // 0x1a5d88: 0x64e37333  daddiu      $v1, $a3, 0x7333 (Delay Slot)
        SET_GPR_S64(ctx, 3, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)29491);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5d84) {
            ctx->pc = 0x1A5DB8u;
            goto label_1a5db8;
        }
    }
    ctx->pc = 0x1A5D8Cu;
label_1a5d8c:
    // 0x1a5d8c: 0xdcc20020  ld          $v0, 0x20($a2)
    ctx->pc = 0x1a5d8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 6), 32)));
label_1a5d90:
    // 0x1a5d90: 0xdcc40010  ld          $a0, 0x10($a2)
    ctx->pc = 0x1a5d90u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 6), 16)));
label_1a5d94:
    // 0x1a5d94: 0xdcc50018  ld          $a1, 0x18($a2)
    ctx->pc = 0x1a5d94u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 6), 24)));
label_1a5d98:
    // 0x1a5d98: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1a5d98u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
label_1a5d9c:
    // 0x1a5d9c: 0x45102f  dsubu       $v0, $v0, $a1
    ctx->pc = 0x1a5d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 5));
label_1a5da0:
    // 0x1a5da0: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x1a5da0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_1a5da4:
    // 0x1a5da4: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
label_1a5da8:
    if (ctx->pc == 0x1A5DA8u) {
        ctx->pc = 0x1A5DA8u;
            // 0x1a5da8: 0xeb102f  dsubu       $v0, $a3, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 11));
        ctx->pc = 0x1A5DACu;
        goto label_1a5dac;
    }
    ctx->pc = 0x1A5DA4u;
    {
        const bool branch_taken_0x1a5da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a5da4) {
            ctx->pc = 0x1A5DA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DA4u;
            // 0x1a5da8: 0xeb102f  dsubu       $v0, $a3, $t3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 11));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A5DBCu;
            goto label_1a5dbc;
        }
    }
    ctx->pc = 0x1A5DACu;
label_1a5dac:
    // 0x1a5dac: 0x1000fff4  b           . + 4 + (-0xC << 2)
label_1a5db0:
    if (ctx->pc == 0x1A5DB0u) {
        ctx->pc = 0x1A5DB0u;
            // 0x1a5db0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DB4u;
        goto label_1a5db4;
    }
    ctx->pc = 0x1A5DACu;
    {
        const bool branch_taken_0x1a5dac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DACu;
            // 0x1a5db0: 0x40382d  daddu       $a3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5dac) {
            ctx->pc = 0x1A5D80u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a5d80;
        }
    }
    ctx->pc = 0x1A5DB4u;
label_1a5db4:
    // 0x1a5db4: 0x31280003  andi        $t0, $t1, 0x3
    ctx->pc = 0x1a5db4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)3);
label_1a5db8:
    // 0x1a5db8: 0xeb102f  dsubu       $v0, $a3, $t3
    ctx->pc = 0x1a5db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) - GPR_U64(ctx, 11));
label_1a5dbc:
    // 0x1a5dbc: 0x28427333  slti        $v0, $v0, 0x7333
    ctx->pc = 0x1a5dbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)29491) ? 1 : 0);
label_1a5dc0:
    // 0x1a5dc0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_1a5dc4:
    if (ctx->pc == 0x1A5DC4u) {
        ctx->pc = 0x1A5DC4u;
            // 0x1a5dc4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x1A5DC8u;
        goto label_1a5dc8;
    }
    ctx->pc = 0x1A5DC0u;
    {
        const bool branch_taken_0x1a5dc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5DC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5DC0u;
            // 0x1a5dc4: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5dc0) {
            ctx->pc = 0x1A5E14u;
            goto label_1a5e14;
        }
    }
    ctx->pc = 0x1A5DC8u;
label_1a5dc8:
    // 0x1a5dc8: 0x82080  sll         $a0, $t0, 2
    ctx->pc = 0x1a5dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1a5dcc:
    // 0x1a5dcc: 0x34630800  ori         $v1, $v1, 0x800
    ctx->pc = 0x1a5dccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2048);
label_1a5dd0:
    // 0x1a5dd0: 0x24027333  addiu       $v0, $zero, 0x7333
    ctx->pc = 0x1a5dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29491));
label_1a5dd4:
    // 0x1a5dd4: 0x8c650000  lw          $a1, 0x0($v1)
    ctx->pc = 0x1a5dd4u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0))); // MMIO: 0x10000000
label_1a5dd8:
    // 0x1a5dd8: 0x821016  dsrlv       $v0, $v0, $a0
    ctx->pc = 0x1a5dd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 4) & 0x3F));
label_1a5ddc:
    // 0x1a5ddc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1a5ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_1a5de0:
    // 0x1a5de0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1a5de0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_1a5de4:
    // 0x1a5de4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a5de4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a5de8:
    // 0x1a5de8: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x1a5de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_1a5dec:
    // 0x1a5dec: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a5decu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1a5df0:
    // 0x1a5df0: 0x34840820  ori         $a0, $a0, 0x820
    ctx->pc = 0x1a5df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2080);
label_1a5df4:
    // 0x1a5df4: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a5df4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a5df8:
    // 0x1a5df8: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x1a5df8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
label_1a5dfc:
    // 0x1a5dfc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x1a5dfcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
label_1a5e00:
    // 0x1a5e00: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x1a5e00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_1a5e04:
    // 0x1a5e04: 0x34420810  ori         $v0, $v0, 0x810
    ctx->pc = 0x1a5e04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2064);
label_1a5e08:
    // 0x1a5e08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a5e08u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
label_1a5e0c:
    // 0x1a5e0c: 0x1000000f  b           . + 4 + (0xF << 2)
label_1a5e10:
    if (ctx->pc == 0x1A5E10u) {
        ctx->pc = 0x1A5E10u;
            // 0x1a5e10: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->pc = 0x1A5E14u;
        goto label_1a5e14;
    }
    ctx->pc = 0x1A5E0Cu;
    {
        const bool branch_taken_0x1a5e0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E0Cu;
            // 0x1a5e10: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e0c) {
            ctx->pc = 0x1A5E4Cu;
            goto label_1a5e4c;
        }
    }
    ctx->pc = 0x1A5E14u;
label_1a5e14:
    // 0x1a5e14: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a5e14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
label_1a5e18:
    // 0x1a5e18: 0x82880  sll         $a1, $t0, 2
    ctx->pc = 0x1a5e18u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_1a5e1c:
    // 0x1a5e1c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x1a5e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
label_1a5e20:
    // 0x1a5e20: 0x3463f7ff  ori         $v1, $v1, 0xF7FF
    ctx->pc = 0x1a5e20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)63487);
label_1a5e24:
    // 0x1a5e24: 0x1231824  and         $v1, $t1, $v1
    ctx->pc = 0x1a5e24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 9) & GPR_U64(ctx, 3));
label_1a5e28:
    // 0x1a5e28: 0xa72816  dsrlv       $a1, $a3, $a1
    ctx->pc = 0x1a5e28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) >> (GPR_U32(ctx, 5) & 0x3F));
label_1a5e2c:
    // 0x1a5e2c: 0x34840810  ori         $a0, $a0, 0x810
    ctx->pc = 0x1a5e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2064);
label_1a5e30:
    // 0x1a5e30: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a5e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a5e34:
    // 0x1a5e34: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x1a5e34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_1a5e38:
    // 0x1a5e38: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x1a5e38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
label_1a5e3c:
    // 0x1a5e3c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x1a5e3cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
label_1a5e40:
    // 0x1a5e40: 0x34420820  ori         $v0, $v0, 0x820
    ctx->pc = 0x1a5e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2080);
label_1a5e44:
    // 0x1a5e44: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x1a5e44u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 5)); // MMIO: 0x10000000
label_1a5e48:
    // 0x1a5e48: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1a5e48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_1a5e4c:
    // 0x1a5e4c: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x1a5e4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_1a5e50:
    // 0x1a5e50: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x1a5e50u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5e54:
    // 0x1a5e54: 0x8c480010  lw          $t0, 0x10($v0)
    ctx->pc = 0x1a5e54u;
    SET_GPR_S32(ctx, 8, (int32_t)runtime->Load32(rdram, ctx, ADD32(GPR_U32(ctx, 2), 16))); // MMIO: 0x10000010
label_1a5e58:
    // 0x1a5e58: 0xdecae118  ld          $t2, -0x1EE8($s6)
    ctx->pc = 0x1a5e58u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 22), 4294959384)));
label_1a5e5c:
    // 0x1a5e5c: 0x31090800  andi        $t1, $t0, 0x800
    ctx->pc = 0x1a5e5cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)2048);
label_1a5e60:
    // 0x1a5e60: 0x11200008  beqz        $t1, . + 4 + (0x8 << 2)
label_1a5e64:
    if (ctx->pc == 0x1A5E64u) {
        ctx->pc = 0x1A5E64u;
            // 0x1a5e64: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x1A5E68u;
        goto label_1a5e68;
    }
    ctx->pc = 0x1A5E60u;
    {
        const bool branch_taken_0x1a5e60 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A5E64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5E60u;
            // 0x1a5e64: 0x24090002  addiu       $t1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a5e60) {
            ctx->pc = 0x1A5E84u;
            goto label_1a5e84;
        }
    }
    ctx->pc = 0x1A5E68u;
label_1a5e68:
    // 0x1a5e68: 0x9c430000  lwu         $v1, 0x0($v0)
    ctx->pc = 0x1a5e68u;
    SET_GPR_U32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_1a5e6c:
    // 0x1a5e6c: 0x2409fbff  addiu       $t1, $zero, -0x401
    ctx->pc = 0x1a5e6cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966271));
label_1a5e70:
    // 0x1a5e70: 0x654a0001  daddiu      $t2, $t2, 0x1
    ctx->pc = 0x1a5e70u;
    SET_GPR_S64(ctx, 10, (int64_t)GPR_S64(ctx, 10) + (int64_t)(int32_t)1);
label_1a5e74:
    // 0x1a5e74: 0x1094024  and         $t0, $t0, $t1
    ctx->pc = 0x1a5e74u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & GPR_U64(ctx, 9));
label_1a5e78:
    // 0x1a5e78: 0xfecae118  sd          $t2, -0x1EE8($s6)
    ctx->pc = 0x1a5e78u;
    WRITE64(ADD32(GPR_U32(ctx, 22), 4294959384), GPR_U64(ctx, 10));
label_1a5e7c:
    // 0x1a5e7c: 0xac480010  sw          $t0, 0x10($v0)
    ctx->pc = 0x1a5e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 8));
label_1a5e80:
    // 0x1a5e80: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1a5e80u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_1a5e84:
    // 0x1a5e84: 0x31080003  andi        $t0, $t0, 0x3
    ctx->pc = 0x1a5e84u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)3);
label_1a5e88:
    // 0x1a5e88: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x1a5e88u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
label_1a5e8c:
    // 0x1a5e8c: 0x8480a  movz        $t1, $zero, $t0
    ctx->pc = 0x1a5e8cu;
    if (GPR_U64(ctx, 8) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 0));
label_1a5e90:
    // 0x1a5e90: 0x6a1825  or          $v1, $v1, $t2
    ctx->pc = 0x1a5e90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 10));
label_1a5e94:
    // 0x1a5e94: 0x1094814  dsllv       $t1, $t1, $t0
    ctx->pc = 0x1a5e94u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (GPR_U32(ctx, 8) & 0x3F));
label_1a5e98:
    // 0x1a5e98: 0x1231814  dsllv       $v1, $v1, $t1
    ctx->pc = 0x1a5e98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (GPR_U32(ctx, 9) & 0x3F));
label_1a5e9c:
    // 0x1a5e9c: 0xf  sync
    ctx->pc = 0x1a5e9cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_1a5ea0:
    // 0x1a5ea0: 0x42000038  ei
    ctx->pc = 0x1a5ea0u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
label_1a5ea4:
    // 0x1a5ea4: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a5ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a5ea8:
    // 0x1a5ea8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a5ea8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a5eac:
    // 0x1a5eac: 0xdfbe0080  ld          $fp, 0x80($sp)
    ctx->pc = 0x1a5eacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_1a5eb0:
    // 0x1a5eb0: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x1a5eb0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_1a5eb4:
    // 0x1a5eb4: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x1a5eb4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_1a5eb8:
    // 0x1a5eb8: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x1a5eb8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_1a5ebc:
    // 0x1a5ebc: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1a5ebcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1a5ec0:
    // 0x1a5ec0: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1a5ec0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_1a5ec4:
    // 0x1a5ec4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1a5ec4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1a5ec8:
    // 0x1a5ec8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1a5ec8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1a5ecc:
    // 0x1a5ecc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1a5eccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1a5ed0:
    // 0x1a5ed0: 0x3e00008  jr          $ra
label_1a5ed4:
    if (ctx->pc == 0x1A5ED4u) {
        ctx->pc = 0x1A5ED4u;
            // 0x1a5ed4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x1A5ED8u;
        goto label_fallthrough_0x1a5ed0;
    }
    ctx->pc = 0x1A5ED0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A5ED4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A5ED0u;
            // 0x1a5ed4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a5ed0:
    ctx->pc = 0x1A5ED8u;
    ctx->pc = 0x1a5ed8u;
}
