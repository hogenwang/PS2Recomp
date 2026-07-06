#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002D9920
// Address: 0x2d9920 - 0x2da0a0
void sub_002D9920_0x2d9920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9920_0x2d9920");
#endif

    switch (ctx->pc) {
        case 0x2d9920u: goto label_2d9920;
        case 0x2d9924u: goto label_2d9924;
        case 0x2d9928u: goto label_2d9928;
        case 0x2d992cu: goto label_2d992c;
        case 0x2d9930u: goto label_2d9930;
        case 0x2d9934u: goto label_2d9934;
        case 0x2d9938u: goto label_2d9938;
        case 0x2d993cu: goto label_2d993c;
        case 0x2d9940u: goto label_2d9940;
        case 0x2d9944u: goto label_2d9944;
        case 0x2d9948u: goto label_2d9948;
        case 0x2d994cu: goto label_2d994c;
        case 0x2d9950u: goto label_2d9950;
        case 0x2d9954u: goto label_2d9954;
        case 0x2d9958u: goto label_2d9958;
        case 0x2d995cu: goto label_2d995c;
        case 0x2d9960u: goto label_2d9960;
        case 0x2d9964u: goto label_2d9964;
        case 0x2d9968u: goto label_2d9968;
        case 0x2d996cu: goto label_2d996c;
        case 0x2d9970u: goto label_2d9970;
        case 0x2d9974u: goto label_2d9974;
        case 0x2d9978u: goto label_2d9978;
        case 0x2d997cu: goto label_2d997c;
        case 0x2d9980u: goto label_2d9980;
        case 0x2d9984u: goto label_2d9984;
        case 0x2d9988u: goto label_2d9988;
        case 0x2d998cu: goto label_2d998c;
        case 0x2d9990u: goto label_2d9990;
        case 0x2d9994u: goto label_2d9994;
        case 0x2d9998u: goto label_2d9998;
        case 0x2d999cu: goto label_2d999c;
        case 0x2d99a0u: goto label_2d99a0;
        case 0x2d99a4u: goto label_2d99a4;
        case 0x2d99a8u: goto label_2d99a8;
        case 0x2d99acu: goto label_2d99ac;
        case 0x2d99b0u: goto label_2d99b0;
        case 0x2d99b4u: goto label_2d99b4;
        case 0x2d99b8u: goto label_2d99b8;
        case 0x2d99bcu: goto label_2d99bc;
        case 0x2d99c0u: goto label_2d99c0;
        case 0x2d99c4u: goto label_2d99c4;
        case 0x2d99c8u: goto label_2d99c8;
        case 0x2d99ccu: goto label_2d99cc;
        case 0x2d99d0u: goto label_2d99d0;
        case 0x2d99d4u: goto label_2d99d4;
        case 0x2d99d8u: goto label_2d99d8;
        case 0x2d99dcu: goto label_2d99dc;
        case 0x2d99e0u: goto label_2d99e0;
        case 0x2d99e4u: goto label_2d99e4;
        case 0x2d99e8u: goto label_2d99e8;
        case 0x2d99ecu: goto label_2d99ec;
        case 0x2d99f0u: goto label_2d99f0;
        case 0x2d99f4u: goto label_2d99f4;
        case 0x2d99f8u: goto label_2d99f8;
        case 0x2d99fcu: goto label_2d99fc;
        case 0x2d9a00u: goto label_2d9a00;
        case 0x2d9a04u: goto label_2d9a04;
        case 0x2d9a08u: goto label_2d9a08;
        case 0x2d9a0cu: goto label_2d9a0c;
        case 0x2d9a10u: goto label_2d9a10;
        case 0x2d9a14u: goto label_2d9a14;
        case 0x2d9a18u: goto label_2d9a18;
        case 0x2d9a1cu: goto label_2d9a1c;
        case 0x2d9a20u: goto label_2d9a20;
        case 0x2d9a24u: goto label_2d9a24;
        case 0x2d9a28u: goto label_2d9a28;
        case 0x2d9a2cu: goto label_2d9a2c;
        case 0x2d9a30u: goto label_2d9a30;
        case 0x2d9a34u: goto label_2d9a34;
        case 0x2d9a38u: goto label_2d9a38;
        case 0x2d9a3cu: goto label_2d9a3c;
        case 0x2d9a40u: goto label_2d9a40;
        case 0x2d9a44u: goto label_2d9a44;
        case 0x2d9a48u: goto label_2d9a48;
        case 0x2d9a4cu: goto label_2d9a4c;
        case 0x2d9a50u: goto label_2d9a50;
        case 0x2d9a54u: goto label_2d9a54;
        case 0x2d9a58u: goto label_2d9a58;
        case 0x2d9a5cu: goto label_2d9a5c;
        case 0x2d9a60u: goto label_2d9a60;
        case 0x2d9a64u: goto label_2d9a64;
        case 0x2d9a68u: goto label_2d9a68;
        case 0x2d9a6cu: goto label_2d9a6c;
        case 0x2d9a70u: goto label_2d9a70;
        case 0x2d9a74u: goto label_2d9a74;
        case 0x2d9a78u: goto label_2d9a78;
        case 0x2d9a7cu: goto label_2d9a7c;
        case 0x2d9a80u: goto label_2d9a80;
        case 0x2d9a84u: goto label_2d9a84;
        case 0x2d9a88u: goto label_2d9a88;
        case 0x2d9a8cu: goto label_2d9a8c;
        case 0x2d9a90u: goto label_2d9a90;
        case 0x2d9a94u: goto label_2d9a94;
        case 0x2d9a98u: goto label_2d9a98;
        case 0x2d9a9cu: goto label_2d9a9c;
        case 0x2d9aa0u: goto label_2d9aa0;
        case 0x2d9aa4u: goto label_2d9aa4;
        case 0x2d9aa8u: goto label_2d9aa8;
        case 0x2d9aacu: goto label_2d9aac;
        case 0x2d9ab0u: goto label_2d9ab0;
        case 0x2d9ab4u: goto label_2d9ab4;
        case 0x2d9ab8u: goto label_2d9ab8;
        case 0x2d9abcu: goto label_2d9abc;
        case 0x2d9ac0u: goto label_2d9ac0;
        case 0x2d9ac4u: goto label_2d9ac4;
        case 0x2d9ac8u: goto label_2d9ac8;
        case 0x2d9accu: goto label_2d9acc;
        case 0x2d9ad0u: goto label_2d9ad0;
        case 0x2d9ad4u: goto label_2d9ad4;
        case 0x2d9ad8u: goto label_2d9ad8;
        case 0x2d9adcu: goto label_2d9adc;
        case 0x2d9ae0u: goto label_2d9ae0;
        case 0x2d9ae4u: goto label_2d9ae4;
        case 0x2d9ae8u: goto label_2d9ae8;
        case 0x2d9aecu: goto label_2d9aec;
        case 0x2d9af0u: goto label_2d9af0;
        case 0x2d9af4u: goto label_2d9af4;
        case 0x2d9af8u: goto label_2d9af8;
        case 0x2d9afcu: goto label_2d9afc;
        case 0x2d9b00u: goto label_2d9b00;
        case 0x2d9b04u: goto label_2d9b04;
        case 0x2d9b08u: goto label_2d9b08;
        case 0x2d9b0cu: goto label_2d9b0c;
        case 0x2d9b10u: goto label_2d9b10;
        case 0x2d9b14u: goto label_2d9b14;
        case 0x2d9b18u: goto label_2d9b18;
        case 0x2d9b1cu: goto label_2d9b1c;
        case 0x2d9b20u: goto label_2d9b20;
        case 0x2d9b24u: goto label_2d9b24;
        case 0x2d9b28u: goto label_2d9b28;
        case 0x2d9b2cu: goto label_2d9b2c;
        case 0x2d9b30u: goto label_2d9b30;
        case 0x2d9b34u: goto label_2d9b34;
        case 0x2d9b38u: goto label_2d9b38;
        case 0x2d9b3cu: goto label_2d9b3c;
        case 0x2d9b40u: goto label_2d9b40;
        case 0x2d9b44u: goto label_2d9b44;
        case 0x2d9b48u: goto label_2d9b48;
        case 0x2d9b4cu: goto label_2d9b4c;
        case 0x2d9b50u: goto label_2d9b50;
        case 0x2d9b54u: goto label_2d9b54;
        case 0x2d9b58u: goto label_2d9b58;
        case 0x2d9b5cu: goto label_2d9b5c;
        case 0x2d9b60u: goto label_2d9b60;
        case 0x2d9b64u: goto label_2d9b64;
        case 0x2d9b68u: goto label_2d9b68;
        case 0x2d9b6cu: goto label_2d9b6c;
        case 0x2d9b70u: goto label_2d9b70;
        case 0x2d9b74u: goto label_2d9b74;
        case 0x2d9b78u: goto label_2d9b78;
        case 0x2d9b7cu: goto label_2d9b7c;
        case 0x2d9b80u: goto label_2d9b80;
        case 0x2d9b84u: goto label_2d9b84;
        case 0x2d9b88u: goto label_2d9b88;
        case 0x2d9b8cu: goto label_2d9b8c;
        case 0x2d9b90u: goto label_2d9b90;
        case 0x2d9b94u: goto label_2d9b94;
        case 0x2d9b98u: goto label_2d9b98;
        case 0x2d9b9cu: goto label_2d9b9c;
        case 0x2d9ba0u: goto label_2d9ba0;
        case 0x2d9ba4u: goto label_2d9ba4;
        case 0x2d9ba8u: goto label_2d9ba8;
        case 0x2d9bacu: goto label_2d9bac;
        case 0x2d9bb0u: goto label_2d9bb0;
        case 0x2d9bb4u: goto label_2d9bb4;
        case 0x2d9bb8u: goto label_2d9bb8;
        case 0x2d9bbcu: goto label_2d9bbc;
        case 0x2d9bc0u: goto label_2d9bc0;
        case 0x2d9bc4u: goto label_2d9bc4;
        case 0x2d9bc8u: goto label_2d9bc8;
        case 0x2d9bccu: goto label_2d9bcc;
        case 0x2d9bd0u: goto label_2d9bd0;
        case 0x2d9bd4u: goto label_2d9bd4;
        case 0x2d9bd8u: goto label_2d9bd8;
        case 0x2d9bdcu: goto label_2d9bdc;
        case 0x2d9be0u: goto label_2d9be0;
        case 0x2d9be4u: goto label_2d9be4;
        case 0x2d9be8u: goto label_2d9be8;
        case 0x2d9becu: goto label_2d9bec;
        case 0x2d9bf0u: goto label_2d9bf0;
        case 0x2d9bf4u: goto label_2d9bf4;
        case 0x2d9bf8u: goto label_2d9bf8;
        case 0x2d9bfcu: goto label_2d9bfc;
        case 0x2d9c00u: goto label_2d9c00;
        case 0x2d9c04u: goto label_2d9c04;
        case 0x2d9c08u: goto label_2d9c08;
        case 0x2d9c0cu: goto label_2d9c0c;
        case 0x2d9c10u: goto label_2d9c10;
        case 0x2d9c14u: goto label_2d9c14;
        case 0x2d9c18u: goto label_2d9c18;
        case 0x2d9c1cu: goto label_2d9c1c;
        case 0x2d9c20u: goto label_2d9c20;
        case 0x2d9c24u: goto label_2d9c24;
        case 0x2d9c28u: goto label_2d9c28;
        case 0x2d9c2cu: goto label_2d9c2c;
        case 0x2d9c30u: goto label_2d9c30;
        case 0x2d9c34u: goto label_2d9c34;
        case 0x2d9c38u: goto label_2d9c38;
        case 0x2d9c3cu: goto label_2d9c3c;
        case 0x2d9c40u: goto label_2d9c40;
        case 0x2d9c44u: goto label_2d9c44;
        case 0x2d9c48u: goto label_2d9c48;
        case 0x2d9c4cu: goto label_2d9c4c;
        case 0x2d9c50u: goto label_2d9c50;
        case 0x2d9c54u: goto label_2d9c54;
        case 0x2d9c58u: goto label_2d9c58;
        case 0x2d9c5cu: goto label_2d9c5c;
        case 0x2d9c60u: goto label_2d9c60;
        case 0x2d9c64u: goto label_2d9c64;
        case 0x2d9c68u: goto label_2d9c68;
        case 0x2d9c6cu: goto label_2d9c6c;
        case 0x2d9c70u: goto label_2d9c70;
        case 0x2d9c74u: goto label_2d9c74;
        case 0x2d9c78u: goto label_2d9c78;
        case 0x2d9c7cu: goto label_2d9c7c;
        case 0x2d9c80u: goto label_2d9c80;
        case 0x2d9c84u: goto label_2d9c84;
        case 0x2d9c88u: goto label_2d9c88;
        case 0x2d9c8cu: goto label_2d9c8c;
        case 0x2d9c90u: goto label_2d9c90;
        case 0x2d9c94u: goto label_2d9c94;
        case 0x2d9c98u: goto label_2d9c98;
        case 0x2d9c9cu: goto label_2d9c9c;
        case 0x2d9ca0u: goto label_2d9ca0;
        case 0x2d9ca4u: goto label_2d9ca4;
        case 0x2d9ca8u: goto label_2d9ca8;
        case 0x2d9cacu: goto label_2d9cac;
        case 0x2d9cb0u: goto label_2d9cb0;
        case 0x2d9cb4u: goto label_2d9cb4;
        case 0x2d9cb8u: goto label_2d9cb8;
        case 0x2d9cbcu: goto label_2d9cbc;
        case 0x2d9cc0u: goto label_2d9cc0;
        case 0x2d9cc4u: goto label_2d9cc4;
        case 0x2d9cc8u: goto label_2d9cc8;
        case 0x2d9cccu: goto label_2d9ccc;
        case 0x2d9cd0u: goto label_2d9cd0;
        case 0x2d9cd4u: goto label_2d9cd4;
        case 0x2d9cd8u: goto label_2d9cd8;
        case 0x2d9cdcu: goto label_2d9cdc;
        case 0x2d9ce0u: goto label_2d9ce0;
        case 0x2d9ce4u: goto label_2d9ce4;
        case 0x2d9ce8u: goto label_2d9ce8;
        case 0x2d9cecu: goto label_2d9cec;
        case 0x2d9cf0u: goto label_2d9cf0;
        case 0x2d9cf4u: goto label_2d9cf4;
        case 0x2d9cf8u: goto label_2d9cf8;
        case 0x2d9cfcu: goto label_2d9cfc;
        case 0x2d9d00u: goto label_2d9d00;
        case 0x2d9d04u: goto label_2d9d04;
        case 0x2d9d08u: goto label_2d9d08;
        case 0x2d9d0cu: goto label_2d9d0c;
        case 0x2d9d10u: goto label_2d9d10;
        case 0x2d9d14u: goto label_2d9d14;
        case 0x2d9d18u: goto label_2d9d18;
        case 0x2d9d1cu: goto label_2d9d1c;
        case 0x2d9d20u: goto label_2d9d20;
        case 0x2d9d24u: goto label_2d9d24;
        case 0x2d9d28u: goto label_2d9d28;
        case 0x2d9d2cu: goto label_2d9d2c;
        case 0x2d9d30u: goto label_2d9d30;
        case 0x2d9d34u: goto label_2d9d34;
        case 0x2d9d38u: goto label_2d9d38;
        case 0x2d9d3cu: goto label_2d9d3c;
        case 0x2d9d40u: goto label_2d9d40;
        case 0x2d9d44u: goto label_2d9d44;
        case 0x2d9d48u: goto label_2d9d48;
        case 0x2d9d4cu: goto label_2d9d4c;
        case 0x2d9d50u: goto label_2d9d50;
        case 0x2d9d54u: goto label_2d9d54;
        case 0x2d9d58u: goto label_2d9d58;
        case 0x2d9d5cu: goto label_2d9d5c;
        case 0x2d9d60u: goto label_2d9d60;
        case 0x2d9d64u: goto label_2d9d64;
        case 0x2d9d68u: goto label_2d9d68;
        case 0x2d9d6cu: goto label_2d9d6c;
        case 0x2d9d70u: goto label_2d9d70;
        case 0x2d9d74u: goto label_2d9d74;
        case 0x2d9d78u: goto label_2d9d78;
        case 0x2d9d7cu: goto label_2d9d7c;
        case 0x2d9d80u: goto label_2d9d80;
        case 0x2d9d84u: goto label_2d9d84;
        case 0x2d9d88u: goto label_2d9d88;
        case 0x2d9d8cu: goto label_2d9d8c;
        case 0x2d9d90u: goto label_2d9d90;
        case 0x2d9d94u: goto label_2d9d94;
        case 0x2d9d98u: goto label_2d9d98;
        case 0x2d9d9cu: goto label_2d9d9c;
        case 0x2d9da0u: goto label_2d9da0;
        case 0x2d9da4u: goto label_2d9da4;
        case 0x2d9da8u: goto label_2d9da8;
        case 0x2d9dacu: goto label_2d9dac;
        case 0x2d9db0u: goto label_2d9db0;
        case 0x2d9db4u: goto label_2d9db4;
        case 0x2d9db8u: goto label_2d9db8;
        case 0x2d9dbcu: goto label_2d9dbc;
        case 0x2d9dc0u: goto label_2d9dc0;
        case 0x2d9dc4u: goto label_2d9dc4;
        case 0x2d9dc8u: goto label_2d9dc8;
        case 0x2d9dccu: goto label_2d9dcc;
        case 0x2d9dd0u: goto label_2d9dd0;
        case 0x2d9dd4u: goto label_2d9dd4;
        case 0x2d9dd8u: goto label_2d9dd8;
        case 0x2d9ddcu: goto label_2d9ddc;
        case 0x2d9de0u: goto label_2d9de0;
        case 0x2d9de4u: goto label_2d9de4;
        case 0x2d9de8u: goto label_2d9de8;
        case 0x2d9decu: goto label_2d9dec;
        case 0x2d9df0u: goto label_2d9df0;
        case 0x2d9df4u: goto label_2d9df4;
        case 0x2d9df8u: goto label_2d9df8;
        case 0x2d9dfcu: goto label_2d9dfc;
        case 0x2d9e00u: goto label_2d9e00;
        case 0x2d9e04u: goto label_2d9e04;
        case 0x2d9e08u: goto label_2d9e08;
        case 0x2d9e0cu: goto label_2d9e0c;
        case 0x2d9e10u: goto label_2d9e10;
        case 0x2d9e14u: goto label_2d9e14;
        case 0x2d9e18u: goto label_2d9e18;
        case 0x2d9e1cu: goto label_2d9e1c;
        case 0x2d9e20u: goto label_2d9e20;
        case 0x2d9e24u: goto label_2d9e24;
        case 0x2d9e28u: goto label_2d9e28;
        case 0x2d9e2cu: goto label_2d9e2c;
        case 0x2d9e30u: goto label_2d9e30;
        case 0x2d9e34u: goto label_2d9e34;
        case 0x2d9e38u: goto label_2d9e38;
        case 0x2d9e3cu: goto label_2d9e3c;
        case 0x2d9e40u: goto label_2d9e40;
        case 0x2d9e44u: goto label_2d9e44;
        case 0x2d9e48u: goto label_2d9e48;
        case 0x2d9e4cu: goto label_2d9e4c;
        case 0x2d9e50u: goto label_2d9e50;
        case 0x2d9e54u: goto label_2d9e54;
        case 0x2d9e58u: goto label_2d9e58;
        case 0x2d9e5cu: goto label_2d9e5c;
        case 0x2d9e60u: goto label_2d9e60;
        case 0x2d9e64u: goto label_2d9e64;
        case 0x2d9e68u: goto label_2d9e68;
        case 0x2d9e6cu: goto label_2d9e6c;
        case 0x2d9e70u: goto label_2d9e70;
        case 0x2d9e74u: goto label_2d9e74;
        case 0x2d9e78u: goto label_2d9e78;
        case 0x2d9e7cu: goto label_2d9e7c;
        case 0x2d9e80u: goto label_2d9e80;
        case 0x2d9e84u: goto label_2d9e84;
        case 0x2d9e88u: goto label_2d9e88;
        case 0x2d9e8cu: goto label_2d9e8c;
        case 0x2d9e90u: goto label_2d9e90;
        case 0x2d9e94u: goto label_2d9e94;
        case 0x2d9e98u: goto label_2d9e98;
        case 0x2d9e9cu: goto label_2d9e9c;
        case 0x2d9ea0u: goto label_2d9ea0;
        case 0x2d9ea4u: goto label_2d9ea4;
        case 0x2d9ea8u: goto label_2d9ea8;
        case 0x2d9eacu: goto label_2d9eac;
        case 0x2d9eb0u: goto label_2d9eb0;
        case 0x2d9eb4u: goto label_2d9eb4;
        case 0x2d9eb8u: goto label_2d9eb8;
        case 0x2d9ebcu: goto label_2d9ebc;
        case 0x2d9ec0u: goto label_2d9ec0;
        case 0x2d9ec4u: goto label_2d9ec4;
        case 0x2d9ec8u: goto label_2d9ec8;
        case 0x2d9eccu: goto label_2d9ecc;
        case 0x2d9ed0u: goto label_2d9ed0;
        case 0x2d9ed4u: goto label_2d9ed4;
        case 0x2d9ed8u: goto label_2d9ed8;
        case 0x2d9edcu: goto label_2d9edc;
        case 0x2d9ee0u: goto label_2d9ee0;
        case 0x2d9ee4u: goto label_2d9ee4;
        case 0x2d9ee8u: goto label_2d9ee8;
        case 0x2d9eecu: goto label_2d9eec;
        case 0x2d9ef0u: goto label_2d9ef0;
        case 0x2d9ef4u: goto label_2d9ef4;
        case 0x2d9ef8u: goto label_2d9ef8;
        case 0x2d9efcu: goto label_2d9efc;
        case 0x2d9f00u: goto label_2d9f00;
        case 0x2d9f04u: goto label_2d9f04;
        case 0x2d9f08u: goto label_2d9f08;
        case 0x2d9f0cu: goto label_2d9f0c;
        case 0x2d9f10u: goto label_2d9f10;
        case 0x2d9f14u: goto label_2d9f14;
        case 0x2d9f18u: goto label_2d9f18;
        case 0x2d9f1cu: goto label_2d9f1c;
        case 0x2d9f20u: goto label_2d9f20;
        case 0x2d9f24u: goto label_2d9f24;
        case 0x2d9f28u: goto label_2d9f28;
        case 0x2d9f2cu: goto label_2d9f2c;
        case 0x2d9f30u: goto label_2d9f30;
        case 0x2d9f34u: goto label_2d9f34;
        case 0x2d9f38u: goto label_2d9f38;
        case 0x2d9f3cu: goto label_2d9f3c;
        case 0x2d9f40u: goto label_2d9f40;
        case 0x2d9f44u: goto label_2d9f44;
        case 0x2d9f48u: goto label_2d9f48;
        case 0x2d9f4cu: goto label_2d9f4c;
        case 0x2d9f50u: goto label_2d9f50;
        case 0x2d9f54u: goto label_2d9f54;
        case 0x2d9f58u: goto label_2d9f58;
        case 0x2d9f5cu: goto label_2d9f5c;
        case 0x2d9f60u: goto label_2d9f60;
        case 0x2d9f64u: goto label_2d9f64;
        case 0x2d9f68u: goto label_2d9f68;
        case 0x2d9f6cu: goto label_2d9f6c;
        case 0x2d9f70u: goto label_2d9f70;
        case 0x2d9f74u: goto label_2d9f74;
        case 0x2d9f78u: goto label_2d9f78;
        case 0x2d9f7cu: goto label_2d9f7c;
        case 0x2d9f80u: goto label_2d9f80;
        case 0x2d9f84u: goto label_2d9f84;
        case 0x2d9f88u: goto label_2d9f88;
        case 0x2d9f8cu: goto label_2d9f8c;
        case 0x2d9f90u: goto label_2d9f90;
        case 0x2d9f94u: goto label_2d9f94;
        case 0x2d9f98u: goto label_2d9f98;
        case 0x2d9f9cu: goto label_2d9f9c;
        case 0x2d9fa0u: goto label_2d9fa0;
        case 0x2d9fa4u: goto label_2d9fa4;
        case 0x2d9fa8u: goto label_2d9fa8;
        case 0x2d9facu: goto label_2d9fac;
        case 0x2d9fb0u: goto label_2d9fb0;
        case 0x2d9fb4u: goto label_2d9fb4;
        case 0x2d9fb8u: goto label_2d9fb8;
        case 0x2d9fbcu: goto label_2d9fbc;
        case 0x2d9fc0u: goto label_2d9fc0;
        case 0x2d9fc4u: goto label_2d9fc4;
        case 0x2d9fc8u: goto label_2d9fc8;
        case 0x2d9fccu: goto label_2d9fcc;
        case 0x2d9fd0u: goto label_2d9fd0;
        case 0x2d9fd4u: goto label_2d9fd4;
        case 0x2d9fd8u: goto label_2d9fd8;
        case 0x2d9fdcu: goto label_2d9fdc;
        case 0x2d9fe0u: goto label_2d9fe0;
        case 0x2d9fe4u: goto label_2d9fe4;
        case 0x2d9fe8u: goto label_2d9fe8;
        case 0x2d9fecu: goto label_2d9fec;
        case 0x2d9ff0u: goto label_2d9ff0;
        case 0x2d9ff4u: goto label_2d9ff4;
        case 0x2d9ff8u: goto label_2d9ff8;
        case 0x2d9ffcu: goto label_2d9ffc;
        case 0x2da000u: goto label_2da000;
        case 0x2da004u: goto label_2da004;
        case 0x2da008u: goto label_2da008;
        case 0x2da00cu: goto label_2da00c;
        case 0x2da010u: goto label_2da010;
        case 0x2da014u: goto label_2da014;
        case 0x2da018u: goto label_2da018;
        case 0x2da01cu: goto label_2da01c;
        case 0x2da020u: goto label_2da020;
        case 0x2da024u: goto label_2da024;
        case 0x2da028u: goto label_2da028;
        case 0x2da02cu: goto label_2da02c;
        case 0x2da030u: goto label_2da030;
        case 0x2da034u: goto label_2da034;
        case 0x2da038u: goto label_2da038;
        case 0x2da03cu: goto label_2da03c;
        case 0x2da040u: goto label_2da040;
        case 0x2da044u: goto label_2da044;
        case 0x2da048u: goto label_2da048;
        case 0x2da04cu: goto label_2da04c;
        case 0x2da050u: goto label_2da050;
        case 0x2da054u: goto label_2da054;
        case 0x2da058u: goto label_2da058;
        case 0x2da05cu: goto label_2da05c;
        case 0x2da060u: goto label_2da060;
        case 0x2da064u: goto label_2da064;
        case 0x2da068u: goto label_2da068;
        case 0x2da06cu: goto label_2da06c;
        case 0x2da070u: goto label_2da070;
        case 0x2da074u: goto label_2da074;
        case 0x2da078u: goto label_2da078;
        case 0x2da07cu: goto label_2da07c;
        case 0x2da080u: goto label_2da080;
        case 0x2da084u: goto label_2da084;
        case 0x2da088u: goto label_2da088;
        case 0x2da08cu: goto label_2da08c;
        case 0x2da090u: goto label_2da090;
        case 0x2da094u: goto label_2da094;
        case 0x2da098u: goto label_2da098;
        case 0x2da09cu: goto label_2da09c;
        default: break;
    }

    ctx->pc = 0x2d9920u;

label_2d9920:
    // 0x2d9920: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d9920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d9924:
    // 0x2d9924: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d9924u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2d9928:
    // 0x2d9928: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2d9928u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d992c:
    // 0x2d992c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x2d992cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9930:
    // 0x2d9930: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9930u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9934:
    // 0x2d9934: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9934u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9938:
    // 0x2d9938: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2d9938u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d993c:
    // 0x2d993c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d993cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9940:
    // 0x2d9940: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9940u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9944:
    // 0x2d9944: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x2d9944u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
label_2d9948:
    // 0x2d9948: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d994c:
    // 0x2d994c: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2d994cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9950:
    // 0x2d9950: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d9950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9954:
    // 0x2d9954: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d9954u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9958:
    // 0x2d9958: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d9958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d995c:
    // 0x2d995c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d995cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2d9960:
    // 0x2d9960: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x2d9960u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
label_2d9964:
    // 0x2d9964: 0xc0b6464  jal         func_2D9190
label_2d9968:
    if (ctx->pc == 0x2D9968u) {
        ctx->pc = 0x2D9968u;
            // 0x2d9968: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D996Cu;
        goto label_2d996c;
    }
    ctx->pc = 0x2D9964u;
    SET_GPR_U32(ctx, 31, 0x2D996Cu);
    ctx->pc = 0x2D9968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9964u;
            // 0x2d9968: 0xa0b02d  daddu       $s6, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9190u;
    if (runtime->hasFunction(0x2D9190u)) {
        auto targetFn = runtime->lookupFunction(0x2D9190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D996Cu; }
        if (ctx->pc != 0x2D996Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9190_0x2d9190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D996Cu; }
        if (ctx->pc != 0x2D996Cu) { return; }
    }
    ctx->pc = 0x2D996Cu;
label_2d996c:
    // 0x2d996c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2d996cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2d9970:
    // 0x2d9970: 0x128f02  srl         $s1, $s2, 28
    ctx->pc = 0x2d9970u;
    SET_GPR_S32(ctx, 17, (int32_t)SRL32(GPR_U32(ctx, 18), 28));
label_2d9974:
    // 0x2d9974: 0x52200014  beql        $s1, $zero, . + 4 + (0x14 << 2)
label_2d9978:
    if (ctx->pc == 0x2D9978u) {
        ctx->pc = 0x2D9978u;
            // 0x2d9978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x2D997Cu;
        goto label_2d997c;
    }
    ctx->pc = 0x2D9974u;
    {
        const bool branch_taken_0x2d9974 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d9974) {
            ctx->pc = 0x2D9978u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9974u;
            // 0x2d9978: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D99C8u;
            goto label_2d99c8;
        }
    }
    ctx->pc = 0x2D997Cu;
label_2d997c:
    // 0x2d997c: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2d997cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_2d9980:
    // 0x2d9980: 0x245e9890  addiu       $fp, $v0, -0x6770
    ctx->pc = 0x2d9980u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940816));
label_2d9984:
    // 0x2d9984: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x2d9984u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_2d9988:
    // 0x2d9988: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2d9988u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2d998c:
    // 0x2d998c: 0x721807  srav        $v1, $s2, $v1
    ctx->pc = 0x2d998cu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 18), GPR_U32(ctx, 3) & 0x1F));
label_2d9990:
    // 0x2d9990: 0x2e0202d  daddu       $a0, $s7, $zero
    ctx->pc = 0x2d9990u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d9994:
    // 0x2d9994: 0x3063000f  andi        $v1, $v1, 0xF
    ctx->pc = 0x2d9994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_2d9998:
    // 0x2d9998: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d9998u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d999c:
    // 0x2d999c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2d999cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2d99a0:
    // 0x2d99a0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x2d99a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d99a4:
    // 0x2d99a4: 0x7e1821  addu        $v1, $v1, $fp
    ctx->pc = 0x2d99a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 30)));
label_2d99a8:
    // 0x2d99a8: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x2d99a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d99ac:
    // 0x2d99ac: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d99acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d99b0:
    // 0x2d99b0: 0x40f809  jalr        $v0
label_2d99b4:
    if (ctx->pc == 0x2D99B4u) {
        ctx->pc = 0x2D99B4u;
            // 0x2d99b4: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D99B8u;
        goto label_2d99b8;
    }
    ctx->pc = 0x2D99B0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D99B8u);
        ctx->pc = 0x2D99B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99B0u;
            // 0x2d99b4: 0x260402d  daddu       $t0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2D99B8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2D99B8u; }
            if (ctx->pc != 0x2D99B8u) { return; }
        }
        }
    }
    ctx->pc = 0x2D99B8u;
label_2d99b8:
    // 0x2d99b8: 0x211182a  slt         $v1, $s0, $s1
    ctx->pc = 0x2d99b8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d99bc:
    // 0x2d99bc: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
label_2d99c0:
    if (ctx->pc == 0x2D99C0u) {
        ctx->pc = 0x2D99C0u;
            // 0x2d99c0: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x2D99C4u;
        goto label_2d99c4;
    }
    ctx->pc = 0x2D99BCu;
    {
        const bool branch_taken_0x2d99bc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D99C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99BCu;
            // 0x2d99c0: 0x101880  sll         $v1, $s0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d99bc) {
            ctx->pc = 0x2D9988u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9988;
        }
    }
    ctx->pc = 0x2D99C4u;
label_2d99c4:
    // 0x2d99c4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d99c4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d99c8:
    // 0x2d99c8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d99c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d99cc:
    // 0x2d99cc: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d99ccu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d99d0:
    // 0x2d99d0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d99d0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d99d4:
    // 0x2d99d4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d99d4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d99d8:
    // 0x2d99d8: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d99d8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d99dc:
    // 0x2d99dc: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d99dcu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d99e0:
    // 0x2d99e0: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d99e0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d99e4:
    // 0x2d99e4: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d99e4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d99e8:
    // 0x2d99e8: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d99e8u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d99ec:
    // 0x2d99ec: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d99ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d99f0:
    // 0x2d99f0: 0x3e00008  jr          $ra
label_2d99f4:
    if (ctx->pc == 0x2D99F4u) {
        ctx->pc = 0x2D99F4u;
            // 0x2d99f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2D99F8u;
        goto label_2d99f8;
    }
    ctx->pc = 0x2D99F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D99F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D99F0u;
            // 0x2d99f4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D99F8u;
label_2d99f8:
    // 0x2d99f8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d99f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d99fc:
    // 0x2d99fc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d99fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9a00:
    // 0x2d9a00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a04:
    // 0x2d9a04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9a04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9a08:
    // 0x2d9a08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9a08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a0c:
    // 0x2d9a0c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9a0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9a10:
    // 0x2d9a10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9a10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9a14:
    // 0x2d9a14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9a18:
    // 0x2d9a18: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d9a18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a1c:
    // 0x2d9a1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d9a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9a20:
    // 0x2d9a20: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d9a20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a24:
    // 0x2d9a24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9a24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9a28:
    // 0x2d9a28: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d9a28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a2c:
    // 0x2d9a2c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2d9a30:
    if (ctx->pc == 0x2D9A30u) {
        ctx->pc = 0x2D9A30u;
            // 0x2d9a30: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->pc = 0x2D9A34u;
        goto label_2d9a34;
    }
    ctx->pc = 0x2D9A2Cu;
    {
        const bool branch_taken_0x2d9a2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A2Cu;
            // 0x2d9a30: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a2c) {
            ctx->pc = 0x2D9A70u;
            goto label_2d9a70;
        }
    }
    ctx->pc = 0x2D9A34u;
label_2d9a34:
    // 0x2d9a34: 0x3c1209f8  lui         $s2, 0x9F8
    ctx->pc = 0x2d9a34u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)2552 << 16));
label_2d9a38:
    // 0x2d9a38: 0x3652ed17  ori         $s2, $s2, 0xED17
    ctx->pc = 0x2d9a38u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)60695);
label_2d9a3c:
    // 0x2d9a3c: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x2d9a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2d9a40:
    // 0x2d9a40: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d9a40u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a44:
    // 0x2d9a44: 0xc0b6454  jal         func_2D9150
label_2d9a48:
    if (ctx->pc == 0x2D9A48u) {
        ctx->pc = 0x2D9A48u;
            // 0x2d9a48: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A4Cu;
        goto label_2d9a4c;
    }
    ctx->pc = 0x2D9A44u;
    SET_GPR_U32(ctx, 31, 0x2D9A4Cu);
    ctx->pc = 0x2D9A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A44u;
            // 0x2d9a48: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (runtime->hasFunction(0x2D9150u)) {
        auto targetFn = runtime->lookupFunction(0x2D9150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A4Cu; }
        if (ctx->pc != 0x2D9A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9150_0x2d9150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9A4Cu; }
        if (ctx->pc != 0x2D9A4Cu) { return; }
    }
    ctx->pc = 0x2D9A4Cu;
label_2d9a4c:
    // 0x2d9a4c: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_2d9a50:
    if (ctx->pc == 0x2D9A50u) {
        ctx->pc = 0x2D9A50u;
            // 0x2d9a50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2D9A54u;
        goto label_2d9a54;
    }
    ctx->pc = 0x2D9A4Cu;
    {
        const bool branch_taken_0x2d9a4c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9a4c) {
            ctx->pc = 0x2D9A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A4Cu;
            // 0x2d9a50: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9A64u;
            goto label_2d9a64;
        }
    }
    ctx->pc = 0x2D9A54u;
label_2d9a54:
    // 0x2d9a54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9a58:
    // 0x2d9a58: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x2d9a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_2d9a5c:
    // 0x2d9a5c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d9a60:
    // 0x2d9a60: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d9a64:
    // 0x2d9a64: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9a64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9a68:
    // 0x2d9a68: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2d9a6c:
    if (ctx->pc == 0x2D9A6Cu) {
        ctx->pc = 0x2D9A6Cu;
            // 0x2d9a6c: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->pc = 0x2D9A70u;
        goto label_2d9a70;
    }
    ctx->pc = 0x2D9A68u;
    {
        const bool branch_taken_0x2d9a68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A68u;
            // 0x2d9a6c: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9a68) {
            ctx->pc = 0x2D9A40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9a40;
        }
    }
    ctx->pc = 0x2D9A70u;
label_2d9a70:
    // 0x2d9a70: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9a70u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9a74:
    // 0x2d9a74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9a78:
    // 0x2d9a78: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9a78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9a7c:
    // 0x2d9a7c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9a7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9a80:
    // 0x2d9a80: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d9a80u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9a84:
    // 0x2d9a84: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d9a84u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9a88:
    // 0x2d9a88: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d9a88u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9a8c:
    // 0x2d9a8c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d9a8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9a90:
    // 0x2d9a90: 0x3e00008  jr          $ra
label_2d9a94:
    if (ctx->pc == 0x2D9A94u) {
        ctx->pc = 0x2D9A94u;
            // 0x2d9a94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2D9A98u;
        goto label_2d9a98;
    }
    ctx->pc = 0x2D9A90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9A90u;
            // 0x2d9a94: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9A98u;
label_2d9a98:
    // 0x2d9a98: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9a98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d9a9c:
    // 0x2d9a9c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9a9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9aa0:
    // 0x2d9aa0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9aa0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9aa4:
    // 0x2d9aa4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9aa8:
    // 0x2d9aa8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9aa8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9aac:
    // 0x2d9aac: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9aacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9ab0:
    // 0x2d9ab0: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9ab0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9ab4:
    // 0x2d9ab4: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9ab4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9ab8:
    // 0x2d9ab8: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d9ab8u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9abc:
    // 0x2d9abc: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d9abcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9ac0:
    // 0x2d9ac0: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d9ac0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ac4:
    // 0x2d9ac4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9ac4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9ac8:
    // 0x2d9ac8: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d9ac8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9acc:
    // 0x2d9acc: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
label_2d9ad0:
    if (ctx->pc == 0x2D9AD0u) {
        ctx->pc = 0x2D9AD0u;
            // 0x2d9ad0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->pc = 0x2D9AD4u;
        goto label_2d9ad4;
    }
    ctx->pc = 0x2D9ACCu;
    {
        const bool branch_taken_0x2d9acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9AD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9ACCu;
            // 0x2d9ad0: 0xffbf0030  sd          $ra, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9acc) {
            ctx->pc = 0x2D9B10u;
            goto label_2d9b10;
        }
    }
    ctx->pc = 0x2D9AD4u;
label_2d9ad4:
    // 0x2d9ad4: 0x3c12a951  lui         $s2, 0xA951
    ctx->pc = 0x2d9ad4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)43345 << 16));
label_2d9ad8:
    // 0x2d9ad8: 0x365228c3  ori         $s2, $s2, 0x28C3
    ctx->pc = 0x2d9ad8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)10435);
label_2d9adc:
    // 0x2d9adc: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x2d9adcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2d9ae0:
    // 0x2d9ae0: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d9ae0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ae4:
    // 0x2d9ae4: 0xc0b6454  jal         func_2D9150
label_2d9ae8:
    if (ctx->pc == 0x2D9AE8u) {
        ctx->pc = 0x2D9AE8u;
            // 0x2d9ae8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9AECu;
        goto label_2d9aec;
    }
    ctx->pc = 0x2D9AE4u;
    SET_GPR_U32(ctx, 31, 0x2D9AECu);
    ctx->pc = 0x2D9AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AE4u;
            // 0x2d9ae8: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (runtime->hasFunction(0x2D9150u)) {
        auto targetFn = runtime->lookupFunction(0x2D9150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9AECu; }
        if (ctx->pc != 0x2D9AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9150_0x2d9150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9AECu; }
        if (ctx->pc != 0x2D9AECu) { return; }
    }
    ctx->pc = 0x2D9AECu;
label_2d9aec:
    // 0x2d9aec: 0x58400005  blezl       $v0, . + 4 + (0x5 << 2)
label_2d9af0:
    if (ctx->pc == 0x2D9AF0u) {
        ctx->pc = 0x2D9AF0u;
            // 0x2d9af0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2D9AF4u;
        goto label_2d9af4;
    }
    ctx->pc = 0x2D9AECu;
    {
        const bool branch_taken_0x2d9aec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9aec) {
            ctx->pc = 0x2D9AF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9AECu;
            // 0x2d9af0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9B04u;
            goto label_2d9b04;
        }
    }
    ctx->pc = 0x2D9AF4u;
label_2d9af4:
    // 0x2d9af4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9af4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9af8:
    // 0x2d9af8: 0x521026  xor         $v0, $v0, $s2
    ctx->pc = 0x2d9af8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 18));
label_2d9afc:
    // 0x2d9afc: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9afcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d9b00:
    // 0x2d9b00: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d9b04:
    // 0x2d9b04: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9b04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9b08:
    // 0x2d9b08: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_2d9b0c:
    if (ctx->pc == 0x2D9B0Cu) {
        ctx->pc = 0x2D9B0Cu;
            // 0x2d9b0c: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->pc = 0x2D9B10u;
        goto label_2d9b10;
    }
    ctx->pc = 0x2D9B08u;
    {
        const bool branch_taken_0x2d9b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B08u;
            // 0x2d9b0c: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b08) {
            ctx->pc = 0x2D9AE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9ae0;
        }
    }
    ctx->pc = 0x2D9B10u;
label_2d9b10:
    // 0x2d9b10: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9b10u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9b14:
    // 0x2d9b14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9b14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9b18:
    // 0x2d9b18: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9b18u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9b1c:
    // 0x2d9b1c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9b1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9b20:
    // 0x2d9b20: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d9b20u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9b24:
    // 0x2d9b24: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d9b24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9b28:
    // 0x2d9b28: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d9b28u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9b2c:
    // 0x2d9b2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2d9b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9b30:
    // 0x2d9b30: 0x3e00008  jr          $ra
label_2d9b34:
    if (ctx->pc == 0x2D9B34u) {
        ctx->pc = 0x2D9B34u;
            // 0x2d9b34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2D9B38u;
        goto label_2d9b38;
    }
    ctx->pc = 0x2D9B30u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9B34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B30u;
            // 0x2d9b34: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9B38u;
label_2d9b38:
    // 0x2d9b38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9b38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d9b3c:
    // 0x2d9b3c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9b3cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9b40:
    // 0x2d9b40: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9b40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9b44:
    // 0x2d9b44: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9b44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9b48:
    // 0x2d9b48: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9b48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9b4c:
    // 0x2d9b4c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9b4cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9b50:
    // 0x2d9b50: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9b54:
    // 0x2d9b54: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9b54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9b58:
    // 0x2d9b58: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d9b58u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9b5c:
    // 0x2d9b5c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d9b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9b60:
    // 0x2d9b60: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d9b60u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9b64:
    // 0x2d9b64: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9b68:
    // 0x2d9b68: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d9b68u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9b6c:
    // 0x2d9b6c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d9b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d9b70:
    // 0x2d9b70: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2d9b74:
    if (ctx->pc == 0x2D9B74u) {
        ctx->pc = 0x2D9B74u;
            // 0x2d9b74: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->pc = 0x2D9B78u;
        goto label_2d9b78;
    }
    ctx->pc = 0x2D9B70u;
    {
        const bool branch_taken_0x2d9b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B70u;
            // 0x2d9b74: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9b70) {
            ctx->pc = 0x2D9BC8u;
            goto label_2d9bc8;
        }
    }
    ctx->pc = 0x2D9B78u;
label_2d9b78:
    // 0x2d9b78: 0x3c120007  lui         $s2, 0x7
    ctx->pc = 0x2d9b78u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)7 << 16));
label_2d9b7c:
    // 0x2d9b7c: 0x3c16fff8  lui         $s6, 0xFFF8
    ctx->pc = 0x2d9b7cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65528 << 16));
label_2d9b80:
    // 0x2d9b80: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2d9b80u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_2d9b84:
    // 0x2d9b84: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x2d9b84u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2d9b88:
    // 0x2d9b88: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d9b88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d9b8c:
    // 0x2d9b8c: 0xc0b6454  jal         func_2D9150
label_2d9b90:
    if (ctx->pc == 0x2D9B90u) {
        ctx->pc = 0x2D9B90u;
            // 0x2d9b90: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9B94u;
        goto label_2d9b94;
    }
    ctx->pc = 0x2D9B8Cu;
    SET_GPR_U32(ctx, 31, 0x2D9B94u);
    ctx->pc = 0x2D9B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B8Cu;
            // 0x2d9b90: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (runtime->hasFunction(0x2D9150u)) {
        auto targetFn = runtime->lookupFunction(0x2D9150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9B94u; }
        if (ctx->pc != 0x2D9B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9150_0x2d9150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9B94u; }
        if (ctx->pc != 0x2D9B94u) { return; }
    }
    ctx->pc = 0x2D9B94u;
label_2d9b94:
    // 0x2d9b94: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
label_2d9b98:
    if (ctx->pc == 0x2D9B98u) {
        ctx->pc = 0x2D9B98u;
            // 0x2d9b98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2D9B9Cu;
        goto label_2d9b9c;
    }
    ctx->pc = 0x2D9B94u;
    {
        const bool branch_taken_0x2d9b94 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9b94) {
            ctx->pc = 0x2D9B98u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9B94u;
            // 0x2d9b98: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9BBCu;
            goto label_2d9bbc;
        }
    }
    ctx->pc = 0x2D9B9Cu;
label_2d9b9c:
    // 0x2d9b9c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9ba0:
    // 0x2d9ba0: 0x21cc0  sll         $v1, $v0, 19
    ctx->pc = 0x2d9ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_2d9ba4:
    // 0x2d9ba4: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x2d9ba4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_2d9ba8:
    // 0x2d9ba8: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2d9ba8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2d9bac:
    // 0x2d9bac: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x2d9bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
label_2d9bb0:
    // 0x2d9bb0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d9bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2d9bb4:
    // 0x2d9bb4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d9bb8:
    // 0x2d9bb8: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d9bbc:
    // 0x2d9bbc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9bbcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9bc0:
    // 0x2d9bc0: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_2d9bc4:
    if (ctx->pc == 0x2D9BC4u) {
        ctx->pc = 0x2D9BC4u;
            // 0x2d9bc4: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->pc = 0x2D9BC8u;
        goto label_2d9bc8;
    }
    ctx->pc = 0x2D9BC0u;
    {
        const bool branch_taken_0x2d9bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BC0u;
            // 0x2d9bc4: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9bc0) {
            ctx->pc = 0x2D9B88u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9b88;
        }
    }
    ctx->pc = 0x2D9BC8u;
label_2d9bc8:
    // 0x2d9bc8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9bc8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9bcc:
    // 0x2d9bcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9bccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9bd0:
    // 0x2d9bd0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9bd0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9bd4:
    // 0x2d9bd4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9bd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9bd8:
    // 0x2d9bd8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d9bd8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9bdc:
    // 0x2d9bdc: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d9bdcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9be0:
    // 0x2d9be0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d9be0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9be4:
    // 0x2d9be4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d9be4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9be8:
    // 0x2d9be8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d9be8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d9bec:
    // 0x2d9bec: 0x3e00008  jr          $ra
label_2d9bf0:
    if (ctx->pc == 0x2D9BF0u) {
        ctx->pc = 0x2D9BF0u;
            // 0x2d9bf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2D9BF4u;
        goto label_2d9bf4;
    }
    ctx->pc = 0x2D9BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9BECu;
            // 0x2d9bf0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9BF4u;
label_2d9bf4:
    // 0x2d9bf4: 0x0  nop
    ctx->pc = 0x2d9bf4u;
    // NOP
label_2d9bf8:
    // 0x2d9bf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9bf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d9bfc:
    // 0x2d9bfc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9c00:
    // 0x2d9c00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9c00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c04:
    // 0x2d9c04: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9c08:
    // 0x2d9c08: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9c08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c0c:
    // 0x2d9c0c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9c0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9c10:
    // 0x2d9c10: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9c10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9c14:
    // 0x2d9c14: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9c14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9c18:
    // 0x2d9c18: 0xe0a02d  daddu       $s4, $a3, $zero
    ctx->pc = 0x2d9c18u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c1c:
    // 0x2d9c1c: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d9c1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9c20:
    // 0x2d9c20: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x2d9c20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c24:
    // 0x2d9c24: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9c28:
    // 0x2d9c28: 0x100982d  daddu       $s3, $t0, $zero
    ctx->pc = 0x2d9c28u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c2c:
    // 0x2d9c2c: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d9c2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d9c30:
    // 0x2d9c30: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
label_2d9c34:
    if (ctx->pc == 0x2D9C34u) {
        ctx->pc = 0x2D9C34u;
            // 0x2d9c34: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->pc = 0x2D9C38u;
        goto label_2d9c38;
    }
    ctx->pc = 0x2D9C30u;
    {
        const bool branch_taken_0x2d9c30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C30u;
            // 0x2d9c34: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c30) {
            ctx->pc = 0x2D9C88u;
            goto label_2d9c88;
        }
    }
    ctx->pc = 0x2D9C38u;
label_2d9c38:
    // 0x2d9c38: 0x3c1200ff  lui         $s2, 0xFF
    ctx->pc = 0x2d9c38u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)255 << 16));
label_2d9c3c:
    // 0x2d9c3c: 0x3c16ff00  lui         $s6, 0xFF00
    ctx->pc = 0x2d9c3cu;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)65280 << 16));
label_2d9c40:
    // 0x2d9c40: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2d9c40u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_2d9c44:
    // 0x2d9c44: 0x2152023  subu        $a0, $s0, $s5
    ctx->pc = 0x2d9c44u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
label_2d9c48:
    // 0x2d9c48: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2d9c48u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c4c:
    // 0x2d9c4c: 0xc0b6454  jal         func_2D9150
label_2d9c50:
    if (ctx->pc == 0x2D9C50u) {
        ctx->pc = 0x2D9C50u;
            // 0x2d9c50: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C54u;
        goto label_2d9c54;
    }
    ctx->pc = 0x2D9C4Cu;
    SET_GPR_U32(ctx, 31, 0x2D9C54u);
    ctx->pc = 0x2D9C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C4Cu;
            // 0x2d9c50: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (runtime->hasFunction(0x2D9150u)) {
        auto targetFn = runtime->lookupFunction(0x2D9150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9C54u; }
        if (ctx->pc != 0x2D9C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9150_0x2d9150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9C54u; }
        if (ctx->pc != 0x2D9C54u) { return; }
    }
    ctx->pc = 0x2D9C54u;
label_2d9c54:
    // 0x2d9c54: 0x58400009  blezl       $v0, . + 4 + (0x9 << 2)
label_2d9c58:
    if (ctx->pc == 0x2D9C58u) {
        ctx->pc = 0x2D9C58u;
            // 0x2d9c58: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2D9C5Cu;
        goto label_2d9c5c;
    }
    ctx->pc = 0x2D9C54u;
    {
        const bool branch_taken_0x2d9c54 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9c54) {
            ctx->pc = 0x2D9C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C54u;
            // 0x2d9c58: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9C7Cu;
            goto label_2d9c7c;
        }
    }
    ctx->pc = 0x2D9C5Cu;
label_2d9c5c:
    // 0x2d9c5c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9c60:
    // 0x2d9c60: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x2d9c60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2d9c64:
    // 0x2d9c64: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2d9c64u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2d9c68:
    // 0x2d9c68: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2d9c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2d9c6c:
    // 0x2d9c6c: 0x761824  and         $v1, $v1, $s6
    ctx->pc = 0x2d9c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 22));
label_2d9c70:
    // 0x2d9c70: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d9c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2d9c74:
    // 0x2d9c74: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9c74u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d9c78:
    // 0x2d9c78: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9c78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d9c7c:
    // 0x2d9c7c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9c7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9c80:
    // 0x2d9c80: 0x1440fff1  bnez        $v0, . + 4 + (-0xF << 2)
label_2d9c84:
    if (ctx->pc == 0x2D9C84u) {
        ctx->pc = 0x2D9C84u;
            // 0x2d9c84: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->pc = 0x2D9C88u;
        goto label_2d9c88;
    }
    ctx->pc = 0x2D9C80u;
    {
        const bool branch_taken_0x2d9c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9C80u;
            // 0x2d9c84: 0x2152023  subu        $a0, $s0, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9c80) {
            ctx->pc = 0x2D9C48u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9c48;
        }
    }
    ctx->pc = 0x2D9C88u;
label_2d9c88:
    // 0x2d9c88: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9c88u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9c8c:
    // 0x2d9c8c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9c8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9c90:
    // 0x2d9c90: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9c90u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9c94:
    // 0x2d9c94: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9c94u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9c98:
    // 0x2d9c98: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d9c98u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9c9c:
    // 0x2d9c9c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d9c9cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9ca0:
    // 0x2d9ca0: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d9ca0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9ca4:
    // 0x2d9ca4: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d9ca4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9ca8:
    // 0x2d9ca8: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d9ca8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d9cac:
    // 0x2d9cac: 0x3e00008  jr          $ra
label_2d9cb0:
    if (ctx->pc == 0x2D9CB0u) {
        ctx->pc = 0x2D9CB0u;
            // 0x2d9cb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2D9CB4u;
        goto label_2d9cb4;
    }
    ctx->pc = 0x2D9CACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9CB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9CACu;
            // 0x2d9cb0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9CB4u;
label_2d9cb4:
    // 0x2d9cb4: 0x0  nop
    ctx->pc = 0x2d9cb4u;
    // NOP
label_2d9cb8:
    // 0x2d9cb8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9cb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d9cbc:
    // 0x2d9cbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9cbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9cc0:
    // 0x2d9cc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9cc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9cc4:
    // 0x2d9cc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9cc8:
    // 0x2d9cc8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9cc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ccc:
    // 0x2d9ccc: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9cccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9cd0:
    // 0x2d9cd0: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9cd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9cd4:
    // 0x2d9cd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9cd8:
    // 0x2d9cd8: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x2d9cd8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9cdc:
    // 0x2d9cdc: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9ce0:
    // 0x2d9ce0: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x2d9ce0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ce4:
    // 0x2d9ce4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d9ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9ce8:
    // 0x2d9ce8: 0x100902d  daddu       $s2, $t0, $zero
    ctx->pc = 0x2d9ce8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9cec:
    // 0x2d9cec: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d9cecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d9cf0:
    // 0x2d9cf0: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2d9cf4:
    if (ctx->pc == 0x2D9CF4u) {
        ctx->pc = 0x2D9CF4u;
            // 0x2d9cf4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->pc = 0x2D9CF8u;
        goto label_2d9cf8;
    }
    ctx->pc = 0x2D9CF0u;
    {
        const bool branch_taken_0x2d9cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9CF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9CF0u;
            // 0x2d9cf4: 0xffbf0038  sd          $ra, 0x38($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9cf0) {
            ctx->pc = 0x2D9D60u;
            goto label_2d9d60;
        }
    }
    ctx->pc = 0x2D9CF8u;
label_2d9cf8:
    // 0x2d9cf8: 0x3c1600ff  lui         $s6, 0xFF
    ctx->pc = 0x2d9cf8u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)255 << 16));
label_2d9cfc:
    // 0x2d9cfc: 0x3c15ff00  lui         $s5, 0xFF00
    ctx->pc = 0x2d9cfcu;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)65280 << 16));
label_2d9d00:
    // 0x2d9d00: 0x2142023  subu        $a0, $s0, $s4
    ctx->pc = 0x2d9d00u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
label_2d9d04:
    // 0x2d9d04: 0x0  nop
    ctx->pc = 0x2d9d04u;
    // NOP
label_2d9d08:
    // 0x2d9d08: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2d9d08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2d9d0c:
    // 0x2d9d0c: 0xc0b6454  jal         func_2D9150
label_2d9d10:
    if (ctx->pc == 0x2D9D10u) {
        ctx->pc = 0x2D9D10u;
            // 0x2d9d10: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D14u;
        goto label_2d9d14;
    }
    ctx->pc = 0x2D9D0Cu;
    SET_GPR_U32(ctx, 31, 0x2D9D14u);
    ctx->pc = 0x2D9D10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D0Cu;
            // 0x2d9d10: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (runtime->hasFunction(0x2D9150u)) {
        auto targetFn = runtime->lookupFunction(0x2D9150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D14u; }
        if (ctx->pc != 0x2D9D14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9150_0x2d9150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9D14u; }
        if (ctx->pc != 0x2D9D14u) { return; }
    }
    ctx->pc = 0x2D9D14u;
label_2d9d14:
    // 0x2d9d14: 0x5840000f  blezl       $v0, . + 4 + (0xF << 2)
label_2d9d18:
    if (ctx->pc == 0x2D9D18u) {
        ctx->pc = 0x2D9D18u;
            // 0x2d9d18: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2D9D1Cu;
        goto label_2d9d1c;
    }
    ctx->pc = 0x2D9D14u;
    {
        const bool branch_taken_0x2d9d14 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9d14) {
            ctx->pc = 0x2D9D18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D14u;
            // 0x2d9d18: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9D54u;
            goto label_2d9d54;
        }
    }
    ctx->pc = 0x2D9D1Cu;
label_2d9d1c:
    // 0x2d9d1c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9d20:
    // 0x2d9d20: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x2d9d20u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2d9d24:
    // 0x2d9d24: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x2d9d24u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2d9d28:
    // 0x2d9d28: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x2d9d28u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
label_2d9d2c:
    // 0x2d9d2c: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2d9d2cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2d9d30:
    // 0x2d9d30: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2d9d30u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_2d9d34:
    // 0x2d9d34: 0x962024  and         $a0, $a0, $s6
    ctx->pc = 0x2d9d34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 22));
label_2d9d38:
    // 0x2d9d38: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2d9d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2d9d3c:
    // 0x2d9d3c: 0xb52824  and         $a1, $a1, $s5
    ctx->pc = 0x2d9d3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 21));
label_2d9d40:
    // 0x2d9d40: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2d9d40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2d9d44:
    // 0x2d9d44: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2d9d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2d9d48:
    // 0x2d9d48: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2d9d48u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2d9d4c:
    // 0x2d9d4c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2d9d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2d9d50:
    // 0x2d9d50: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9d50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d9d54:
    // 0x2d9d54: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9d54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9d58:
    // 0x2d9d58: 0x1440ffeb  bnez        $v0, . + 4 + (-0x15 << 2)
label_2d9d5c:
    if (ctx->pc == 0x2D9D5Cu) {
        ctx->pc = 0x2D9D5Cu;
            // 0x2d9d5c: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->pc = 0x2D9D60u;
        goto label_2d9d60;
    }
    ctx->pc = 0x2D9D58u;
    {
        const bool branch_taken_0x2d9d58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9D5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D58u;
            // 0x2d9d5c: 0x2142023  subu        $a0, $s0, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9d58) {
            ctx->pc = 0x2D9D08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9d08;
        }
    }
    ctx->pc = 0x2D9D60u;
label_2d9d60:
    // 0x2d9d60: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9d60u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9d64:
    // 0x2d9d64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9d68:
    // 0x2d9d68: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9d68u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9d6c:
    // 0x2d9d6c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9d6cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9d70:
    // 0x2d9d70: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d9d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9d74:
    // 0x2d9d74: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d9d74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9d78:
    // 0x2d9d78: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d9d78u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9d7c:
    // 0x2d9d7c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d9d7cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9d80:
    // 0x2d9d80: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2d9d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d9d84:
    // 0x2d9d84: 0x3e00008  jr          $ra
label_2d9d88:
    if (ctx->pc == 0x2D9D88u) {
        ctx->pc = 0x2D9D88u;
            // 0x2d9d88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2D9D8Cu;
        goto label_2d9d8c;
    }
    ctx->pc = 0x2D9D84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9D88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9D84u;
            // 0x2d9d88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9D8Cu;
label_2d9d8c:
    // 0x2d9d8c: 0x0  nop
    ctx->pc = 0x2d9d8cu;
    // NOP
label_2d9d90:
    // 0x2d9d90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d9d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d9d94:
    // 0x2d9d94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9d94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9d98:
    // 0x2d9d98: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9d98u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9d9c:
    // 0x2d9d9c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9d9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9da0:
    // 0x2d9da0: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9da0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9da4:
    // 0x2d9da4: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9da4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9da8:
    // 0x2d9da8: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9dac:
    // 0x2d9dac: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d9dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9db0:
    // 0x2d9db0: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x2d9db0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9db4:
    // 0x2d9db4: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d9db4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d9db8:
    // 0x2d9db8: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x2d9db8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9dbc:
    // 0x2d9dbc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9dc0:
    // 0x2d9dc0: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2d9dc0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9dc4:
    // 0x2d9dc4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9dc8:
    // 0x2d9dc8: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d9dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2d9dcc:
    // 0x2d9dcc: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_2d9dd0:
    if (ctx->pc == 0x2D9DD0u) {
        ctx->pc = 0x2D9DD0u;
            // 0x2d9dd0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->pc = 0x2D9DD4u;
        goto label_2d9dd4;
    }
    ctx->pc = 0x2D9DCCu;
    {
        const bool branch_taken_0x2d9dcc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9DD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DCCu;
            // 0x2d9dd0: 0xffbf0040  sd          $ra, 0x40($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9dcc) {
            ctx->pc = 0x2D9E34u;
            goto label_2d9e34;
        }
    }
    ctx->pc = 0x2D9DD4u;
label_2d9dd4:
    // 0x2d9dd4: 0x3c1309f8  lui         $s3, 0x9F8
    ctx->pc = 0x2d9dd4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)2552 << 16));
label_2d9dd8:
    // 0x2d9dd8: 0x3c120007  lui         $s2, 0x7
    ctx->pc = 0x2d9dd8u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)7 << 16));
label_2d9ddc:
    // 0x2d9ddc: 0x3673ed17  ori         $s3, $s3, 0xED17
    ctx->pc = 0x2d9ddcu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)60695);
label_2d9de0:
    // 0x2d9de0: 0x3652ffff  ori         $s2, $s2, 0xFFFF
    ctx->pc = 0x2d9de0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)65535);
label_2d9de4:
    // 0x2d9de4: 0x3c17fff8  lui         $s7, 0xFFF8
    ctx->pc = 0x2d9de4u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)65528 << 16));
label_2d9de8:
    // 0x2d9de8: 0x2162023  subu        $a0, $s0, $s6
    ctx->pc = 0x2d9de8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
label_2d9dec:
    // 0x2d9dec: 0x0  nop
    ctx->pc = 0x2d9decu;
    // NOP
label_2d9df0:
    // 0x2d9df0: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x2d9df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2d9df4:
    // 0x2d9df4: 0xc0b6454  jal         func_2D9150
label_2d9df8:
    if (ctx->pc == 0x2D9DF8u) {
        ctx->pc = 0x2D9DF8u;
            // 0x2d9df8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9DFCu;
        goto label_2d9dfc;
    }
    ctx->pc = 0x2D9DF4u;
    SET_GPR_U32(ctx, 31, 0x2D9DFCu);
    ctx->pc = 0x2D9DF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DF4u;
            // 0x2d9df8: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (runtime->hasFunction(0x2D9150u)) {
        auto targetFn = runtime->lookupFunction(0x2D9150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DFCu; }
        if (ctx->pc != 0x2D9DFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9150_0x2d9150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9DFCu; }
        if (ctx->pc != 0x2D9DFCu) { return; }
    }
    ctx->pc = 0x2D9DFCu;
label_2d9dfc:
    // 0x2d9dfc: 0x5840000a  blezl       $v0, . + 4 + (0xA << 2)
label_2d9e00:
    if (ctx->pc == 0x2D9E00u) {
        ctx->pc = 0x2D9E00u;
            // 0x2d9e00: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2D9E04u;
        goto label_2d9e04;
    }
    ctx->pc = 0x2D9DFCu;
    {
        const bool branch_taken_0x2d9dfc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9dfc) {
            ctx->pc = 0x2D9E00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9DFCu;
            // 0x2d9e00: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9E28u;
            goto label_2d9e28;
        }
    }
    ctx->pc = 0x2D9E04u;
label_2d9e04:
    // 0x2d9e04: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9e08:
    // 0x2d9e08: 0x531026  xor         $v0, $v0, $s3
    ctx->pc = 0x2d9e08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 19));
label_2d9e0c:
    // 0x2d9e0c: 0x21cc0  sll         $v1, $v0, 19
    ctx->pc = 0x2d9e0cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_2d9e10:
    // 0x2d9e10: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x2d9e10u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_2d9e14:
    // 0x2d9e14: 0x521024  and         $v0, $v0, $s2
    ctx->pc = 0x2d9e14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 18));
label_2d9e18:
    // 0x2d9e18: 0x771824  and         $v1, $v1, $s7
    ctx->pc = 0x2d9e18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 23));
label_2d9e1c:
    // 0x2d9e1c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d9e1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2d9e20:
    // 0x2d9e20: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9e20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d9e24:
    // 0x2d9e24: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9e24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d9e28:
    // 0x2d9e28: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9e28u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9e2c:
    // 0x2d9e2c: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
label_2d9e30:
    if (ctx->pc == 0x2D9E30u) {
        ctx->pc = 0x2D9E30u;
            // 0x2d9e30: 0x2162023  subu        $a0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->pc = 0x2D9E34u;
        goto label_2d9e34;
    }
    ctx->pc = 0x2D9E2Cu;
    {
        const bool branch_taken_0x2d9e2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E2Cu;
            // 0x2d9e30: 0x2162023  subu        $a0, $s0, $s6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 22)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e2c) {
            ctx->pc = 0x2D9DF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9df0;
        }
    }
    ctx->pc = 0x2D9E34u;
label_2d9e34:
    // 0x2d9e34: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9e34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9e38:
    // 0x2d9e38: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9e38u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9e3c:
    // 0x2d9e3c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9e3cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9e40:
    // 0x2d9e40: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9e40u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9e44:
    // 0x2d9e44: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d9e44u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9e48:
    // 0x2d9e48: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d9e48u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9e4c:
    // 0x2d9e4c: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d9e4cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9e50:
    // 0x2d9e50: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d9e50u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9e54:
    // 0x2d9e54: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d9e54u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d9e58:
    // 0x2d9e58: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2d9e58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d9e5c:
    // 0x2d9e5c: 0x3e00008  jr          $ra
label_2d9e60:
    if (ctx->pc == 0x2D9E60u) {
        ctx->pc = 0x2D9E60u;
            // 0x2d9e60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2D9E64u;
        goto label_2d9e64;
    }
    ctx->pc = 0x2D9E5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9E60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9E5Cu;
            // 0x2d9e60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9E64u;
label_2d9e64:
    // 0x2d9e64: 0x0  nop
    ctx->pc = 0x2d9e64u;
    // NOP
label_2d9e68:
    // 0x2d9e68: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d9e68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d9e6c:
    // 0x2d9e6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9e6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9e70:
    // 0x2d9e70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9e70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9e74:
    // 0x2d9e74: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9e74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9e78:
    // 0x2d9e78: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9e78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9e7c:
    // 0x2d9e7c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9e7cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9e80:
    // 0x2d9e80: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d9e80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9e84:
    // 0x2d9e84: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d9e84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d9e88:
    // 0x2d9e88: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2d9e88u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9e8c:
    // 0x2d9e8c: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d9e8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2d9e90:
    // 0x2d9e90: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x2d9e90u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9e94:
    // 0x2d9e94: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9e98:
    // 0x2d9e98: 0x100a82d  daddu       $s5, $t0, $zero
    ctx->pc = 0x2d9e98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9e9c:
    // 0x2d9e9c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9e9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9ea0:
    // 0x2d9ea0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9ea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9ea4:
    // 0x2d9ea4: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d9ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2d9ea8:
    // 0x2d9ea8: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
label_2d9eac:
    if (ctx->pc == 0x2D9EACu) {
        ctx->pc = 0x2D9EACu;
            // 0x2d9eac: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->pc = 0x2D9EB0u;
        goto label_2d9eb0;
    }
    ctx->pc = 0x2D9EA8u;
    {
        const bool branch_taken_0x2d9ea8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9EA8u;
            // 0x2d9eac: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9ea8) {
            ctx->pc = 0x2D9F40u;
            goto label_2d9f40;
        }
    }
    ctx->pc = 0x2D9EB0u;
label_2d9eb0:
    // 0x2d9eb0: 0x3c14a951  lui         $s4, 0xA951
    ctx->pc = 0x2d9eb0u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)43345 << 16));
label_2d9eb4:
    // 0x2d9eb4: 0x3c1300ff  lui         $s3, 0xFF
    ctx->pc = 0x2d9eb4u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)255 << 16));
label_2d9eb8:
    // 0x2d9eb8: 0x3c1e00ff  lui         $fp, 0xFF
    ctx->pc = 0x2d9eb8u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)255 << 16));
label_2d9ebc:
    // 0x2d9ebc: 0x3c12ff00  lui         $s2, 0xFF00
    ctx->pc = 0x2d9ebcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65280 << 16));
label_2d9ec0:
    // 0x2d9ec0: 0x369428c3  ori         $s4, $s4, 0x28C3
    ctx->pc = 0x2d9ec0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)10435);
label_2d9ec4:
    // 0x2d9ec4: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2d9ec4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_2d9ec8:
    // 0x2d9ec8: 0x2172023  subu        $a0, $s0, $s7
    ctx->pc = 0x2d9ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
label_2d9ecc:
    // 0x2d9ecc: 0x0  nop
    ctx->pc = 0x2d9eccu;
    // NOP
label_2d9ed0:
    // 0x2d9ed0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x2d9ed0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ed4:
    // 0x2d9ed4: 0xc0b6454  jal         func_2D9150
label_2d9ed8:
    if (ctx->pc == 0x2D9ED8u) {
        ctx->pc = 0x2D9ED8u;
            // 0x2d9ed8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9EDCu;
        goto label_2d9edc;
    }
    ctx->pc = 0x2D9ED4u;
    SET_GPR_U32(ctx, 31, 0x2D9EDCu);
    ctx->pc = 0x2D9ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9ED4u;
            // 0x2d9ed8: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (runtime->hasFunction(0x2D9150u)) {
        auto targetFn = runtime->lookupFunction(0x2D9150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9EDCu; }
        if (ctx->pc != 0x2D9EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9150_0x2d9150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9EDCu; }
        if (ctx->pc != 0x2D9EDCu) { return; }
    }
    ctx->pc = 0x2D9EDCu;
label_2d9edc:
    // 0x2d9edc: 0x58400015  blezl       $v0, . + 4 + (0x15 << 2)
label_2d9ee0:
    if (ctx->pc == 0x2D9EE0u) {
        ctx->pc = 0x2D9EE0u;
            // 0x2d9ee0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2D9EE4u;
        goto label_2d9ee4;
    }
    ctx->pc = 0x2D9EDCu;
    {
        const bool branch_taken_0x2d9edc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9edc) {
            ctx->pc = 0x2D9EE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9EDCu;
            // 0x2d9ee0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2D9F34u;
            goto label_2d9f34;
        }
    }
    ctx->pc = 0x2D9EE4u;
label_2d9ee4:
    // 0x2d9ee4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x2d9ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9ee8:
    // 0x2d9ee8: 0x32c00  sll         $a1, $v1, 16
    ctx->pc = 0x2d9ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
label_2d9eec:
    // 0x2d9eec: 0x31200  sll         $v0, $v1, 8
    ctx->pc = 0x2d9eecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_2d9ef0:
    // 0x2d9ef0: 0x32203  sra         $a0, $v1, 8
    ctx->pc = 0x2d9ef0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 3), 8));
label_2d9ef4:
    // 0x2d9ef4: 0x31c03  sra         $v1, $v1, 16
    ctx->pc = 0x2d9ef4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 16));
label_2d9ef8:
    // 0x2d9ef8: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x2d9ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
label_2d9efc:
    // 0x2d9efc: 0x9e2024  and         $a0, $a0, $fp
    ctx->pc = 0x2d9efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 30));
label_2d9f00:
    // 0x2d9f00: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x2d9f00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2d9f04:
    // 0x2d9f04: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x2d9f04u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
label_2d9f08:
    // 0x2d9f08: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2d9f08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
label_2d9f0c:
    // 0x2d9f0c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2d9f0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2d9f10:
    // 0x2d9f10: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d9f10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2d9f14:
    // 0x2d9f14: 0x541026  xor         $v0, $v0, $s4
    ctx->pc = 0x2d9f14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 20));
label_2d9f18:
    // 0x2d9f18: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x2d9f18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2d9f1c:
    // 0x2d9f1c: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2d9f1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2d9f20:
    // 0x2d9f20: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2d9f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_2d9f24:
    // 0x2d9f24: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2d9f24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_2d9f28:
    // 0x2d9f28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2d9f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2d9f2c:
    // 0x2d9f2c: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2d9f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2d9f30:
    // 0x2d9f30: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2d9f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2d9f34:
    // 0x2d9f34: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9f34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9f38:
    // 0x2d9f38: 0x1440ffe5  bnez        $v0, . + 4 + (-0x1B << 2)
label_2d9f3c:
    if (ctx->pc == 0x2D9F3Cu) {
        ctx->pc = 0x2D9F3Cu;
            // 0x2d9f3c: 0x2172023  subu        $a0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->pc = 0x2D9F40u;
        goto label_2d9f40;
    }
    ctx->pc = 0x2D9F38u;
    {
        const bool branch_taken_0x2d9f38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F38u;
            // 0x2d9f3c: 0x2172023  subu        $a0, $s0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f38) {
            ctx->pc = 0x2D9ED0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9ed0;
        }
    }
    ctx->pc = 0x2D9F40u;
label_2d9f40:
    // 0x2d9f40: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2d9f40u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9f44:
    // 0x2d9f44: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2d9f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2d9f48:
    // 0x2d9f48: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2d9f48u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2d9f4c:
    // 0x2d9f4c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2d9f4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9f50:
    // 0x2d9f50: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2d9f50u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2d9f54:
    // 0x2d9f54: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2d9f54u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9f58:
    // 0x2d9f58: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2d9f58u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2d9f5c:
    // 0x2d9f5c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2d9f5cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9f60:
    // 0x2d9f60: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2d9f60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2d9f64:
    // 0x2d9f64: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2d9f64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2d9f68:
    // 0x2d9f68: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2d9f68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2d9f6c:
    // 0x2d9f6c: 0x3e00008  jr          $ra
label_2d9f70:
    if (ctx->pc == 0x2D9F70u) {
        ctx->pc = 0x2D9F70u;
            // 0x2d9f70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2D9F74u;
        goto label_2d9f74;
    }
    ctx->pc = 0x2D9F6Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9F70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9F6Cu;
            // 0x2d9f70: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2D9F74u;
label_2d9f74:
    // 0x2d9f74: 0x0  nop
    ctx->pc = 0x2d9f74u;
    // NOP
label_2d9f78:
    // 0x2d9f78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2d9f78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2d9f7c:
    // 0x2d9f7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2d9f7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2d9f80:
    // 0x2d9f80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9f84:
    // 0x2d9f84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2d9f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_2d9f88:
    // 0x2d9f88: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2d9f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2d9f8c:
    // 0x2d9f8c: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2d9f8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2d9f90:
    // 0x2d9f90: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2d9f90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
label_2d9f94:
    // 0x2d9f94: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x2d9f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
label_2d9f98:
    // 0x2d9f98: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x2d9f98u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9f9c:
    // 0x2d9f9c: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x2d9f9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
label_2d9fa0:
    // 0x2d9fa0: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2d9fa0u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2d9fa4:
    // 0x2d9fa4: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2d9fa4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_2d9fa8:
    // 0x2d9fa8: 0x100b02d  daddu       $s6, $t0, $zero
    ctx->pc = 0x2d9fa8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
label_2d9fac:
    // 0x2d9fac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2d9facu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_2d9fb0:
    // 0x2d9fb0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2d9fb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_2d9fb4:
    // 0x2d9fb4: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2d9fb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
label_2d9fb8:
    // 0x2d9fb8: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
label_2d9fbc:
    if (ctx->pc == 0x2D9FBCu) {
        ctx->pc = 0x2D9FBCu;
            // 0x2d9fbc: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->pc = 0x2D9FC0u;
        goto label_2d9fc0;
    }
    ctx->pc = 0x2D9FB8u;
    {
        const bool branch_taken_0x2d9fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9FBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9FB8u;
            // 0x2d9fbc: 0xffbf0048  sd          $ra, 0x48($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9fb8) {
            ctx->pc = 0x2DA06Cu;
            goto label_2da06c;
        }
    }
    ctx->pc = 0x2D9FC0u;
label_2d9fc0:
    // 0x2d9fc0: 0x3c1509f8  lui         $s5, 0x9F8
    ctx->pc = 0x2d9fc0u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)2552 << 16));
label_2d9fc4:
    // 0x2d9fc4: 0x3c1400ff  lui         $s4, 0xFF
    ctx->pc = 0x2d9fc4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)255 << 16));
label_2d9fc8:
    // 0x2d9fc8: 0x3c130007  lui         $s3, 0x7
    ctx->pc = 0x2d9fc8u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)7 << 16));
label_2d9fcc:
    // 0x2d9fcc: 0x36b5ed17  ori         $s5, $s5, 0xED17
    ctx->pc = 0x2d9fccu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | (uint64_t)(uint16_t)60695);
label_2d9fd0:
    // 0x2d9fd0: 0x3694ffff  ori         $s4, $s4, 0xFFFF
    ctx->pc = 0x2d9fd0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | (uint64_t)(uint16_t)65535);
label_2d9fd4:
    // 0x2d9fd4: 0x3c12ff00  lui         $s2, 0xFF00
    ctx->pc = 0x2d9fd4u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)65280 << 16));
label_2d9fd8:
    // 0x2d9fd8: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2d9fd8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
label_2d9fdc:
    // 0x2d9fdc: 0x21e2023  subu        $a0, $s0, $fp
    ctx->pc = 0x2d9fdcu;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
label_2d9fe0:
    // 0x2d9fe0: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x2d9fe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2d9fe4:
    // 0x2d9fe4: 0xc0b6454  jal         func_2D9150
label_2d9fe8:
    if (ctx->pc == 0x2D9FE8u) {
        ctx->pc = 0x2D9FE8u;
            // 0x2d9fe8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2D9FECu;
        goto label_2d9fec;
    }
    ctx->pc = 0x2D9FE4u;
    SET_GPR_U32(ctx, 31, 0x2D9FECu);
    ctx->pc = 0x2D9FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9FE4u;
            // 0x2d9fe8: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2D9150u;
    if (runtime->hasFunction(0x2D9150u)) {
        auto targetFn = runtime->lookupFunction(0x2D9150u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9FECu; }
        if (ctx->pc != 0x2D9FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002D9150_0x2d9150(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2D9FECu; }
        if (ctx->pc != 0x2D9FECu) { return; }
    }
    ctx->pc = 0x2D9FECu;
label_2d9fec:
    // 0x2d9fec: 0x5840001c  blezl       $v0, . + 4 + (0x1C << 2)
label_2d9ff0:
    if (ctx->pc == 0x2D9FF0u) {
        ctx->pc = 0x2D9FF0u;
            // 0x2d9ff0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->pc = 0x2D9FF4u;
        goto label_2d9ff4;
    }
    ctx->pc = 0x2D9FECu;
    {
        const bool branch_taken_0x2d9fec = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2d9fec) {
            ctx->pc = 0x2D9FF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2D9FECu;
            // 0x2d9ff0: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DA060u;
            goto label_2da060;
        }
    }
    ctx->pc = 0x2D9FF4u;
label_2d9ff4:
    // 0x2d9ff4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2d9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9ff8:
    // 0x2d9ff8: 0x3c0600ff  lui         $a2, 0xFF
    ctx->pc = 0x2d9ff8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)255 << 16));
label_2d9ffc:
    // 0x2d9ffc: 0x551026  xor         $v0, $v0, $s5
    ctx->pc = 0x2d9ffcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 21));
label_2da000:
    // 0x2da000: 0x21e00  sll         $v1, $v0, 24
    ctx->pc = 0x2da000u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2da004:
    // 0x2da004: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x2da004u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
label_2da008:
    // 0x2da008: 0x721824  and         $v1, $v1, $s2
    ctx->pc = 0x2da008u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 18));
label_2da00c:
    // 0x2da00c: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2da00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_2da010:
    // 0x2da010: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2da010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2da014:
    // 0x2da014: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x2da014u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
label_2da018:
    // 0x2da018: 0x224c0  sll         $a0, $v0, 19
    ctx->pc = 0x2da018u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 19));
label_2da01c:
    // 0x2da01c: 0x21343  sra         $v0, $v0, 13
    ctx->pc = 0x2da01cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 13));
label_2da020:
    // 0x2da020: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x2da020u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_2da024:
    // 0x2da024: 0x531024  and         $v0, $v0, $s3
    ctx->pc = 0x2da024u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 19));
label_2da028:
    // 0x2da028: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x2da028u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_2da02c:
    // 0x2da02c: 0x22c00  sll         $a1, $v0, 16
    ctx->pc = 0x2da02cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
label_2da030:
    // 0x2da030: 0x21a00  sll         $v1, $v0, 8
    ctx->pc = 0x2da030u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_2da034:
    // 0x2da034: 0x22203  sra         $a0, $v0, 8
    ctx->pc = 0x2da034u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 8));
label_2da038:
    // 0x2da038: 0x21403  sra         $v0, $v0, 16
    ctx->pc = 0x2da038u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 16));
label_2da03c:
    // 0x2da03c: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x2da03cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
label_2da040:
    // 0x2da040: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x2da040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2da044:
    // 0x2da044: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2da044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2da048:
    // 0x2da048: 0xb22824  and         $a1, $a1, $s2
    ctx->pc = 0x2da048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 18));
label_2da04c:
    // 0x2da04c: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2da04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
label_2da050:
    // 0x2da050: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x2da050u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
label_2da054:
    // 0x2da054: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2da054u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2da058:
    // 0x2da058: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2da058u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_2da05c:
    // 0x2da05c: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x2da05cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_2da060:
    // 0x2da060: 0x211102a  slt         $v0, $s0, $s1
    ctx->pc = 0x2da060u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2da064:
    // 0x2da064: 0x1440ffde  bnez        $v0, . + 4 + (-0x22 << 2)
label_2da068:
    if (ctx->pc == 0x2DA068u) {
        ctx->pc = 0x2DA068u;
            // 0x2da068: 0x21e2023  subu        $a0, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->pc = 0x2DA06Cu;
        goto label_2da06c;
    }
    ctx->pc = 0x2DA064u;
    {
        const bool branch_taken_0x2da064 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2DA068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA064u;
            // 0x2da068: 0x21e2023  subu        $a0, $s0, $fp (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 30)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2da064) {
            ctx->pc = 0x2D9FE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2d9fe0;
        }
    }
    ctx->pc = 0x2DA06Cu;
label_2da06c:
    // 0x2da06c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2da06cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2da070:
    // 0x2da070: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2da070u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2da074:
    // 0x2da074: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2da074u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2da078:
    // 0x2da078: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2da078u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2da07c:
    // 0x2da07c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2da07cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2da080:
    // 0x2da080: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2da080u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2da084:
    // 0x2da084: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2da084u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_2da088:
    // 0x2da088: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2da088u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2da08c:
    // 0x2da08c: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x2da08cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
label_2da090:
    // 0x2da090: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x2da090u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2da094:
    // 0x2da094: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x2da094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
label_2da098:
    // 0x2da098: 0x3e00008  jr          $ra
label_2da09c:
    if (ctx->pc == 0x2DA09Cu) {
        ctx->pc = 0x2DA09Cu;
            // 0x2da09c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2DA0A0u;
        goto label_fallthrough_0x2da098;
    }
    ctx->pc = 0x2DA098u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DA09Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DA098u;
            // 0x2da09c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x2da098:
    ctx->pc = 0x2DA0A0u;
    ctx->pc = 0x2da0a0u;
}
