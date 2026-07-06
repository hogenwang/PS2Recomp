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

// Function: sub_002B9B48
// Address: 0x2b9b48 - 0x2bad18
void sub_002B9B48_0x2b9b48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B9B48_0x2b9b48");
#endif

    switch (ctx->pc) {
        case 0x2b9b48u: goto label_2b9b48;
        case 0x2b9b4cu: goto label_2b9b4c;
        case 0x2b9b50u: goto label_2b9b50;
        case 0x2b9b54u: goto label_2b9b54;
        case 0x2b9b58u: goto label_2b9b58;
        case 0x2b9b5cu: goto label_2b9b5c;
        case 0x2b9b60u: goto label_2b9b60;
        case 0x2b9b64u: goto label_2b9b64;
        case 0x2b9b68u: goto label_2b9b68;
        case 0x2b9b6cu: goto label_2b9b6c;
        case 0x2b9b70u: goto label_2b9b70;
        case 0x2b9b74u: goto label_2b9b74;
        case 0x2b9b78u: goto label_2b9b78;
        case 0x2b9b7cu: goto label_2b9b7c;
        case 0x2b9b80u: goto label_2b9b80;
        case 0x2b9b84u: goto label_2b9b84;
        case 0x2b9b88u: goto label_2b9b88;
        case 0x2b9b8cu: goto label_2b9b8c;
        case 0x2b9b90u: goto label_2b9b90;
        case 0x2b9b94u: goto label_2b9b94;
        case 0x2b9b98u: goto label_2b9b98;
        case 0x2b9b9cu: goto label_2b9b9c;
        case 0x2b9ba0u: goto label_2b9ba0;
        case 0x2b9ba4u: goto label_2b9ba4;
        case 0x2b9ba8u: goto label_2b9ba8;
        case 0x2b9bacu: goto label_2b9bac;
        case 0x2b9bb0u: goto label_2b9bb0;
        case 0x2b9bb4u: goto label_2b9bb4;
        case 0x2b9bb8u: goto label_2b9bb8;
        case 0x2b9bbcu: goto label_2b9bbc;
        case 0x2b9bc0u: goto label_2b9bc0;
        case 0x2b9bc4u: goto label_2b9bc4;
        case 0x2b9bc8u: goto label_2b9bc8;
        case 0x2b9bccu: goto label_2b9bcc;
        case 0x2b9bd0u: goto label_2b9bd0;
        case 0x2b9bd4u: goto label_2b9bd4;
        case 0x2b9bd8u: goto label_2b9bd8;
        case 0x2b9bdcu: goto label_2b9bdc;
        case 0x2b9be0u: goto label_2b9be0;
        case 0x2b9be4u: goto label_2b9be4;
        case 0x2b9be8u: goto label_2b9be8;
        case 0x2b9becu: goto label_2b9bec;
        case 0x2b9bf0u: goto label_2b9bf0;
        case 0x2b9bf4u: goto label_2b9bf4;
        case 0x2b9bf8u: goto label_2b9bf8;
        case 0x2b9bfcu: goto label_2b9bfc;
        case 0x2b9c00u: goto label_2b9c00;
        case 0x2b9c04u: goto label_2b9c04;
        case 0x2b9c08u: goto label_2b9c08;
        case 0x2b9c0cu: goto label_2b9c0c;
        case 0x2b9c10u: goto label_2b9c10;
        case 0x2b9c14u: goto label_2b9c14;
        case 0x2b9c18u: goto label_2b9c18;
        case 0x2b9c1cu: goto label_2b9c1c;
        case 0x2b9c20u: goto label_2b9c20;
        case 0x2b9c24u: goto label_2b9c24;
        case 0x2b9c28u: goto label_2b9c28;
        case 0x2b9c2cu: goto label_2b9c2c;
        case 0x2b9c30u: goto label_2b9c30;
        case 0x2b9c34u: goto label_2b9c34;
        case 0x2b9c38u: goto label_2b9c38;
        case 0x2b9c3cu: goto label_2b9c3c;
        case 0x2b9c40u: goto label_2b9c40;
        case 0x2b9c44u: goto label_2b9c44;
        case 0x2b9c48u: goto label_2b9c48;
        case 0x2b9c4cu: goto label_2b9c4c;
        case 0x2b9c50u: goto label_2b9c50;
        case 0x2b9c54u: goto label_2b9c54;
        case 0x2b9c58u: goto label_2b9c58;
        case 0x2b9c5cu: goto label_2b9c5c;
        case 0x2b9c60u: goto label_2b9c60;
        case 0x2b9c64u: goto label_2b9c64;
        case 0x2b9c68u: goto label_2b9c68;
        case 0x2b9c6cu: goto label_2b9c6c;
        case 0x2b9c70u: goto label_2b9c70;
        case 0x2b9c74u: goto label_2b9c74;
        case 0x2b9c78u: goto label_2b9c78;
        case 0x2b9c7cu: goto label_2b9c7c;
        case 0x2b9c80u: goto label_2b9c80;
        case 0x2b9c84u: goto label_2b9c84;
        case 0x2b9c88u: goto label_2b9c88;
        case 0x2b9c8cu: goto label_2b9c8c;
        case 0x2b9c90u: goto label_2b9c90;
        case 0x2b9c94u: goto label_2b9c94;
        case 0x2b9c98u: goto label_2b9c98;
        case 0x2b9c9cu: goto label_2b9c9c;
        case 0x2b9ca0u: goto label_2b9ca0;
        case 0x2b9ca4u: goto label_2b9ca4;
        case 0x2b9ca8u: goto label_2b9ca8;
        case 0x2b9cacu: goto label_2b9cac;
        case 0x2b9cb0u: goto label_2b9cb0;
        case 0x2b9cb4u: goto label_2b9cb4;
        case 0x2b9cb8u: goto label_2b9cb8;
        case 0x2b9cbcu: goto label_2b9cbc;
        case 0x2b9cc0u: goto label_2b9cc0;
        case 0x2b9cc4u: goto label_2b9cc4;
        case 0x2b9cc8u: goto label_2b9cc8;
        case 0x2b9cccu: goto label_2b9ccc;
        case 0x2b9cd0u: goto label_2b9cd0;
        case 0x2b9cd4u: goto label_2b9cd4;
        case 0x2b9cd8u: goto label_2b9cd8;
        case 0x2b9cdcu: goto label_2b9cdc;
        case 0x2b9ce0u: goto label_2b9ce0;
        case 0x2b9ce4u: goto label_2b9ce4;
        case 0x2b9ce8u: goto label_2b9ce8;
        case 0x2b9cecu: goto label_2b9cec;
        case 0x2b9cf0u: goto label_2b9cf0;
        case 0x2b9cf4u: goto label_2b9cf4;
        case 0x2b9cf8u: goto label_2b9cf8;
        case 0x2b9cfcu: goto label_2b9cfc;
        case 0x2b9d00u: goto label_2b9d00;
        case 0x2b9d04u: goto label_2b9d04;
        case 0x2b9d08u: goto label_2b9d08;
        case 0x2b9d0cu: goto label_2b9d0c;
        case 0x2b9d10u: goto label_2b9d10;
        case 0x2b9d14u: goto label_2b9d14;
        case 0x2b9d18u: goto label_2b9d18;
        case 0x2b9d1cu: goto label_2b9d1c;
        case 0x2b9d20u: goto label_2b9d20;
        case 0x2b9d24u: goto label_2b9d24;
        case 0x2b9d28u: goto label_2b9d28;
        case 0x2b9d2cu: goto label_2b9d2c;
        case 0x2b9d30u: goto label_2b9d30;
        case 0x2b9d34u: goto label_2b9d34;
        case 0x2b9d38u: goto label_2b9d38;
        case 0x2b9d3cu: goto label_2b9d3c;
        case 0x2b9d40u: goto label_2b9d40;
        case 0x2b9d44u: goto label_2b9d44;
        case 0x2b9d48u: goto label_2b9d48;
        case 0x2b9d4cu: goto label_2b9d4c;
        case 0x2b9d50u: goto label_2b9d50;
        case 0x2b9d54u: goto label_2b9d54;
        case 0x2b9d58u: goto label_2b9d58;
        case 0x2b9d5cu: goto label_2b9d5c;
        case 0x2b9d60u: goto label_2b9d60;
        case 0x2b9d64u: goto label_2b9d64;
        case 0x2b9d68u: goto label_2b9d68;
        case 0x2b9d6cu: goto label_2b9d6c;
        case 0x2b9d70u: goto label_2b9d70;
        case 0x2b9d74u: goto label_2b9d74;
        case 0x2b9d78u: goto label_2b9d78;
        case 0x2b9d7cu: goto label_2b9d7c;
        case 0x2b9d80u: goto label_2b9d80;
        case 0x2b9d84u: goto label_2b9d84;
        case 0x2b9d88u: goto label_2b9d88;
        case 0x2b9d8cu: goto label_2b9d8c;
        case 0x2b9d90u: goto label_2b9d90;
        case 0x2b9d94u: goto label_2b9d94;
        case 0x2b9d98u: goto label_2b9d98;
        case 0x2b9d9cu: goto label_2b9d9c;
        case 0x2b9da0u: goto label_2b9da0;
        case 0x2b9da4u: goto label_2b9da4;
        case 0x2b9da8u: goto label_2b9da8;
        case 0x2b9dacu: goto label_2b9dac;
        case 0x2b9db0u: goto label_2b9db0;
        case 0x2b9db4u: goto label_2b9db4;
        case 0x2b9db8u: goto label_2b9db8;
        case 0x2b9dbcu: goto label_2b9dbc;
        case 0x2b9dc0u: goto label_2b9dc0;
        case 0x2b9dc4u: goto label_2b9dc4;
        case 0x2b9dc8u: goto label_2b9dc8;
        case 0x2b9dccu: goto label_2b9dcc;
        case 0x2b9dd0u: goto label_2b9dd0;
        case 0x2b9dd4u: goto label_2b9dd4;
        case 0x2b9dd8u: goto label_2b9dd8;
        case 0x2b9ddcu: goto label_2b9ddc;
        case 0x2b9de0u: goto label_2b9de0;
        case 0x2b9de4u: goto label_2b9de4;
        case 0x2b9de8u: goto label_2b9de8;
        case 0x2b9decu: goto label_2b9dec;
        case 0x2b9df0u: goto label_2b9df0;
        case 0x2b9df4u: goto label_2b9df4;
        case 0x2b9df8u: goto label_2b9df8;
        case 0x2b9dfcu: goto label_2b9dfc;
        case 0x2b9e00u: goto label_2b9e00;
        case 0x2b9e04u: goto label_2b9e04;
        case 0x2b9e08u: goto label_2b9e08;
        case 0x2b9e0cu: goto label_2b9e0c;
        case 0x2b9e10u: goto label_2b9e10;
        case 0x2b9e14u: goto label_2b9e14;
        case 0x2b9e18u: goto label_2b9e18;
        case 0x2b9e1cu: goto label_2b9e1c;
        case 0x2b9e20u: goto label_2b9e20;
        case 0x2b9e24u: goto label_2b9e24;
        case 0x2b9e28u: goto label_2b9e28;
        case 0x2b9e2cu: goto label_2b9e2c;
        case 0x2b9e30u: goto label_2b9e30;
        case 0x2b9e34u: goto label_2b9e34;
        case 0x2b9e38u: goto label_2b9e38;
        case 0x2b9e3cu: goto label_2b9e3c;
        case 0x2b9e40u: goto label_2b9e40;
        case 0x2b9e44u: goto label_2b9e44;
        case 0x2b9e48u: goto label_2b9e48;
        case 0x2b9e4cu: goto label_2b9e4c;
        case 0x2b9e50u: goto label_2b9e50;
        case 0x2b9e54u: goto label_2b9e54;
        case 0x2b9e58u: goto label_2b9e58;
        case 0x2b9e5cu: goto label_2b9e5c;
        case 0x2b9e60u: goto label_2b9e60;
        case 0x2b9e64u: goto label_2b9e64;
        case 0x2b9e68u: goto label_2b9e68;
        case 0x2b9e6cu: goto label_2b9e6c;
        case 0x2b9e70u: goto label_2b9e70;
        case 0x2b9e74u: goto label_2b9e74;
        case 0x2b9e78u: goto label_2b9e78;
        case 0x2b9e7cu: goto label_2b9e7c;
        case 0x2b9e80u: goto label_2b9e80;
        case 0x2b9e84u: goto label_2b9e84;
        case 0x2b9e88u: goto label_2b9e88;
        case 0x2b9e8cu: goto label_2b9e8c;
        case 0x2b9e90u: goto label_2b9e90;
        case 0x2b9e94u: goto label_2b9e94;
        case 0x2b9e98u: goto label_2b9e98;
        case 0x2b9e9cu: goto label_2b9e9c;
        case 0x2b9ea0u: goto label_2b9ea0;
        case 0x2b9ea4u: goto label_2b9ea4;
        case 0x2b9ea8u: goto label_2b9ea8;
        case 0x2b9eacu: goto label_2b9eac;
        case 0x2b9eb0u: goto label_2b9eb0;
        case 0x2b9eb4u: goto label_2b9eb4;
        case 0x2b9eb8u: goto label_2b9eb8;
        case 0x2b9ebcu: goto label_2b9ebc;
        case 0x2b9ec0u: goto label_2b9ec0;
        case 0x2b9ec4u: goto label_2b9ec4;
        case 0x2b9ec8u: goto label_2b9ec8;
        case 0x2b9eccu: goto label_2b9ecc;
        case 0x2b9ed0u: goto label_2b9ed0;
        case 0x2b9ed4u: goto label_2b9ed4;
        case 0x2b9ed8u: goto label_2b9ed8;
        case 0x2b9edcu: goto label_2b9edc;
        case 0x2b9ee0u: goto label_2b9ee0;
        case 0x2b9ee4u: goto label_2b9ee4;
        case 0x2b9ee8u: goto label_2b9ee8;
        case 0x2b9eecu: goto label_2b9eec;
        case 0x2b9ef0u: goto label_2b9ef0;
        case 0x2b9ef4u: goto label_2b9ef4;
        case 0x2b9ef8u: goto label_2b9ef8;
        case 0x2b9efcu: goto label_2b9efc;
        case 0x2b9f00u: goto label_2b9f00;
        case 0x2b9f04u: goto label_2b9f04;
        case 0x2b9f08u: goto label_2b9f08;
        case 0x2b9f0cu: goto label_2b9f0c;
        case 0x2b9f10u: goto label_2b9f10;
        case 0x2b9f14u: goto label_2b9f14;
        case 0x2b9f18u: goto label_2b9f18;
        case 0x2b9f1cu: goto label_2b9f1c;
        case 0x2b9f20u: goto label_2b9f20;
        case 0x2b9f24u: goto label_2b9f24;
        case 0x2b9f28u: goto label_2b9f28;
        case 0x2b9f2cu: goto label_2b9f2c;
        case 0x2b9f30u: goto label_2b9f30;
        case 0x2b9f34u: goto label_2b9f34;
        case 0x2b9f38u: goto label_2b9f38;
        case 0x2b9f3cu: goto label_2b9f3c;
        case 0x2b9f40u: goto label_2b9f40;
        case 0x2b9f44u: goto label_2b9f44;
        case 0x2b9f48u: goto label_2b9f48;
        case 0x2b9f4cu: goto label_2b9f4c;
        case 0x2b9f50u: goto label_2b9f50;
        case 0x2b9f54u: goto label_2b9f54;
        case 0x2b9f58u: goto label_2b9f58;
        case 0x2b9f5cu: goto label_2b9f5c;
        case 0x2b9f60u: goto label_2b9f60;
        case 0x2b9f64u: goto label_2b9f64;
        case 0x2b9f68u: goto label_2b9f68;
        case 0x2b9f6cu: goto label_2b9f6c;
        case 0x2b9f70u: goto label_2b9f70;
        case 0x2b9f74u: goto label_2b9f74;
        case 0x2b9f78u: goto label_2b9f78;
        case 0x2b9f7cu: goto label_2b9f7c;
        case 0x2b9f80u: goto label_2b9f80;
        case 0x2b9f84u: goto label_2b9f84;
        case 0x2b9f88u: goto label_2b9f88;
        case 0x2b9f8cu: goto label_2b9f8c;
        case 0x2b9f90u: goto label_2b9f90;
        case 0x2b9f94u: goto label_2b9f94;
        case 0x2b9f98u: goto label_2b9f98;
        case 0x2b9f9cu: goto label_2b9f9c;
        case 0x2b9fa0u: goto label_2b9fa0;
        case 0x2b9fa4u: goto label_2b9fa4;
        case 0x2b9fa8u: goto label_2b9fa8;
        case 0x2b9facu: goto label_2b9fac;
        case 0x2b9fb0u: goto label_2b9fb0;
        case 0x2b9fb4u: goto label_2b9fb4;
        case 0x2b9fb8u: goto label_2b9fb8;
        case 0x2b9fbcu: goto label_2b9fbc;
        case 0x2b9fc0u: goto label_2b9fc0;
        case 0x2b9fc4u: goto label_2b9fc4;
        case 0x2b9fc8u: goto label_2b9fc8;
        case 0x2b9fccu: goto label_2b9fcc;
        case 0x2b9fd0u: goto label_2b9fd0;
        case 0x2b9fd4u: goto label_2b9fd4;
        case 0x2b9fd8u: goto label_2b9fd8;
        case 0x2b9fdcu: goto label_2b9fdc;
        case 0x2b9fe0u: goto label_2b9fe0;
        case 0x2b9fe4u: goto label_2b9fe4;
        case 0x2b9fe8u: goto label_2b9fe8;
        case 0x2b9fecu: goto label_2b9fec;
        case 0x2b9ff0u: goto label_2b9ff0;
        case 0x2b9ff4u: goto label_2b9ff4;
        case 0x2b9ff8u: goto label_2b9ff8;
        case 0x2b9ffcu: goto label_2b9ffc;
        case 0x2ba000u: goto label_2ba000;
        case 0x2ba004u: goto label_2ba004;
        case 0x2ba008u: goto label_2ba008;
        case 0x2ba00cu: goto label_2ba00c;
        case 0x2ba010u: goto label_2ba010;
        case 0x2ba014u: goto label_2ba014;
        case 0x2ba018u: goto label_2ba018;
        case 0x2ba01cu: goto label_2ba01c;
        case 0x2ba020u: goto label_2ba020;
        case 0x2ba024u: goto label_2ba024;
        case 0x2ba028u: goto label_2ba028;
        case 0x2ba02cu: goto label_2ba02c;
        case 0x2ba030u: goto label_2ba030;
        case 0x2ba034u: goto label_2ba034;
        case 0x2ba038u: goto label_2ba038;
        case 0x2ba03cu: goto label_2ba03c;
        case 0x2ba040u: goto label_2ba040;
        case 0x2ba044u: goto label_2ba044;
        case 0x2ba048u: goto label_2ba048;
        case 0x2ba04cu: goto label_2ba04c;
        case 0x2ba050u: goto label_2ba050;
        case 0x2ba054u: goto label_2ba054;
        case 0x2ba058u: goto label_2ba058;
        case 0x2ba05cu: goto label_2ba05c;
        case 0x2ba060u: goto label_2ba060;
        case 0x2ba064u: goto label_2ba064;
        case 0x2ba068u: goto label_2ba068;
        case 0x2ba06cu: goto label_2ba06c;
        case 0x2ba070u: goto label_2ba070;
        case 0x2ba074u: goto label_2ba074;
        case 0x2ba078u: goto label_2ba078;
        case 0x2ba07cu: goto label_2ba07c;
        case 0x2ba080u: goto label_2ba080;
        case 0x2ba084u: goto label_2ba084;
        case 0x2ba088u: goto label_2ba088;
        case 0x2ba08cu: goto label_2ba08c;
        case 0x2ba090u: goto label_2ba090;
        case 0x2ba094u: goto label_2ba094;
        case 0x2ba098u: goto label_2ba098;
        case 0x2ba09cu: goto label_2ba09c;
        case 0x2ba0a0u: goto label_2ba0a0;
        case 0x2ba0a4u: goto label_2ba0a4;
        case 0x2ba0a8u: goto label_2ba0a8;
        case 0x2ba0acu: goto label_2ba0ac;
        case 0x2ba0b0u: goto label_2ba0b0;
        case 0x2ba0b4u: goto label_2ba0b4;
        case 0x2ba0b8u: goto label_2ba0b8;
        case 0x2ba0bcu: goto label_2ba0bc;
        case 0x2ba0c0u: goto label_2ba0c0;
        case 0x2ba0c4u: goto label_2ba0c4;
        case 0x2ba0c8u: goto label_2ba0c8;
        case 0x2ba0ccu: goto label_2ba0cc;
        case 0x2ba0d0u: goto label_2ba0d0;
        case 0x2ba0d4u: goto label_2ba0d4;
        case 0x2ba0d8u: goto label_2ba0d8;
        case 0x2ba0dcu: goto label_2ba0dc;
        case 0x2ba0e0u: goto label_2ba0e0;
        case 0x2ba0e4u: goto label_2ba0e4;
        case 0x2ba0e8u: goto label_2ba0e8;
        case 0x2ba0ecu: goto label_2ba0ec;
        case 0x2ba0f0u: goto label_2ba0f0;
        case 0x2ba0f4u: goto label_2ba0f4;
        case 0x2ba0f8u: goto label_2ba0f8;
        case 0x2ba0fcu: goto label_2ba0fc;
        case 0x2ba100u: goto label_2ba100;
        case 0x2ba104u: goto label_2ba104;
        case 0x2ba108u: goto label_2ba108;
        case 0x2ba10cu: goto label_2ba10c;
        case 0x2ba110u: goto label_2ba110;
        case 0x2ba114u: goto label_2ba114;
        case 0x2ba118u: goto label_2ba118;
        case 0x2ba11cu: goto label_2ba11c;
        case 0x2ba120u: goto label_2ba120;
        case 0x2ba124u: goto label_2ba124;
        case 0x2ba128u: goto label_2ba128;
        case 0x2ba12cu: goto label_2ba12c;
        case 0x2ba130u: goto label_2ba130;
        case 0x2ba134u: goto label_2ba134;
        case 0x2ba138u: goto label_2ba138;
        case 0x2ba13cu: goto label_2ba13c;
        case 0x2ba140u: goto label_2ba140;
        case 0x2ba144u: goto label_2ba144;
        case 0x2ba148u: goto label_2ba148;
        case 0x2ba14cu: goto label_2ba14c;
        case 0x2ba150u: goto label_2ba150;
        case 0x2ba154u: goto label_2ba154;
        case 0x2ba158u: goto label_2ba158;
        case 0x2ba15cu: goto label_2ba15c;
        case 0x2ba160u: goto label_2ba160;
        case 0x2ba164u: goto label_2ba164;
        case 0x2ba168u: goto label_2ba168;
        case 0x2ba16cu: goto label_2ba16c;
        case 0x2ba170u: goto label_2ba170;
        case 0x2ba174u: goto label_2ba174;
        case 0x2ba178u: goto label_2ba178;
        case 0x2ba17cu: goto label_2ba17c;
        case 0x2ba180u: goto label_2ba180;
        case 0x2ba184u: goto label_2ba184;
        case 0x2ba188u: goto label_2ba188;
        case 0x2ba18cu: goto label_2ba18c;
        case 0x2ba190u: goto label_2ba190;
        case 0x2ba194u: goto label_2ba194;
        case 0x2ba198u: goto label_2ba198;
        case 0x2ba19cu: goto label_2ba19c;
        case 0x2ba1a0u: goto label_2ba1a0;
        case 0x2ba1a4u: goto label_2ba1a4;
        case 0x2ba1a8u: goto label_2ba1a8;
        case 0x2ba1acu: goto label_2ba1ac;
        case 0x2ba1b0u: goto label_2ba1b0;
        case 0x2ba1b4u: goto label_2ba1b4;
        case 0x2ba1b8u: goto label_2ba1b8;
        case 0x2ba1bcu: goto label_2ba1bc;
        case 0x2ba1c0u: goto label_2ba1c0;
        case 0x2ba1c4u: goto label_2ba1c4;
        case 0x2ba1c8u: goto label_2ba1c8;
        case 0x2ba1ccu: goto label_2ba1cc;
        case 0x2ba1d0u: goto label_2ba1d0;
        case 0x2ba1d4u: goto label_2ba1d4;
        case 0x2ba1d8u: goto label_2ba1d8;
        case 0x2ba1dcu: goto label_2ba1dc;
        case 0x2ba1e0u: goto label_2ba1e0;
        case 0x2ba1e4u: goto label_2ba1e4;
        case 0x2ba1e8u: goto label_2ba1e8;
        case 0x2ba1ecu: goto label_2ba1ec;
        case 0x2ba1f0u: goto label_2ba1f0;
        case 0x2ba1f4u: goto label_2ba1f4;
        case 0x2ba1f8u: goto label_2ba1f8;
        case 0x2ba1fcu: goto label_2ba1fc;
        case 0x2ba200u: goto label_2ba200;
        case 0x2ba204u: goto label_2ba204;
        case 0x2ba208u: goto label_2ba208;
        case 0x2ba20cu: goto label_2ba20c;
        case 0x2ba210u: goto label_2ba210;
        case 0x2ba214u: goto label_2ba214;
        case 0x2ba218u: goto label_2ba218;
        case 0x2ba21cu: goto label_2ba21c;
        case 0x2ba220u: goto label_2ba220;
        case 0x2ba224u: goto label_2ba224;
        case 0x2ba228u: goto label_2ba228;
        case 0x2ba22cu: goto label_2ba22c;
        case 0x2ba230u: goto label_2ba230;
        case 0x2ba234u: goto label_2ba234;
        case 0x2ba238u: goto label_2ba238;
        case 0x2ba23cu: goto label_2ba23c;
        case 0x2ba240u: goto label_2ba240;
        case 0x2ba244u: goto label_2ba244;
        case 0x2ba248u: goto label_2ba248;
        case 0x2ba24cu: goto label_2ba24c;
        case 0x2ba250u: goto label_2ba250;
        case 0x2ba254u: goto label_2ba254;
        case 0x2ba258u: goto label_2ba258;
        case 0x2ba25cu: goto label_2ba25c;
        case 0x2ba260u: goto label_2ba260;
        case 0x2ba264u: goto label_2ba264;
        case 0x2ba268u: goto label_2ba268;
        case 0x2ba26cu: goto label_2ba26c;
        case 0x2ba270u: goto label_2ba270;
        case 0x2ba274u: goto label_2ba274;
        case 0x2ba278u: goto label_2ba278;
        case 0x2ba27cu: goto label_2ba27c;
        case 0x2ba280u: goto label_2ba280;
        case 0x2ba284u: goto label_2ba284;
        case 0x2ba288u: goto label_2ba288;
        case 0x2ba28cu: goto label_2ba28c;
        case 0x2ba290u: goto label_2ba290;
        case 0x2ba294u: goto label_2ba294;
        case 0x2ba298u: goto label_2ba298;
        case 0x2ba29cu: goto label_2ba29c;
        case 0x2ba2a0u: goto label_2ba2a0;
        case 0x2ba2a4u: goto label_2ba2a4;
        case 0x2ba2a8u: goto label_2ba2a8;
        case 0x2ba2acu: goto label_2ba2ac;
        case 0x2ba2b0u: goto label_2ba2b0;
        case 0x2ba2b4u: goto label_2ba2b4;
        case 0x2ba2b8u: goto label_2ba2b8;
        case 0x2ba2bcu: goto label_2ba2bc;
        case 0x2ba2c0u: goto label_2ba2c0;
        case 0x2ba2c4u: goto label_2ba2c4;
        case 0x2ba2c8u: goto label_2ba2c8;
        case 0x2ba2ccu: goto label_2ba2cc;
        case 0x2ba2d0u: goto label_2ba2d0;
        case 0x2ba2d4u: goto label_2ba2d4;
        case 0x2ba2d8u: goto label_2ba2d8;
        case 0x2ba2dcu: goto label_2ba2dc;
        case 0x2ba2e0u: goto label_2ba2e0;
        case 0x2ba2e4u: goto label_2ba2e4;
        case 0x2ba2e8u: goto label_2ba2e8;
        case 0x2ba2ecu: goto label_2ba2ec;
        case 0x2ba2f0u: goto label_2ba2f0;
        case 0x2ba2f4u: goto label_2ba2f4;
        case 0x2ba2f8u: goto label_2ba2f8;
        case 0x2ba2fcu: goto label_2ba2fc;
        case 0x2ba300u: goto label_2ba300;
        case 0x2ba304u: goto label_2ba304;
        case 0x2ba308u: goto label_2ba308;
        case 0x2ba30cu: goto label_2ba30c;
        case 0x2ba310u: goto label_2ba310;
        case 0x2ba314u: goto label_2ba314;
        case 0x2ba318u: goto label_2ba318;
        case 0x2ba31cu: goto label_2ba31c;
        case 0x2ba320u: goto label_2ba320;
        case 0x2ba324u: goto label_2ba324;
        case 0x2ba328u: goto label_2ba328;
        case 0x2ba32cu: goto label_2ba32c;
        case 0x2ba330u: goto label_2ba330;
        case 0x2ba334u: goto label_2ba334;
        case 0x2ba338u: goto label_2ba338;
        case 0x2ba33cu: goto label_2ba33c;
        case 0x2ba340u: goto label_2ba340;
        case 0x2ba344u: goto label_2ba344;
        case 0x2ba348u: goto label_2ba348;
        case 0x2ba34cu: goto label_2ba34c;
        case 0x2ba350u: goto label_2ba350;
        case 0x2ba354u: goto label_2ba354;
        case 0x2ba358u: goto label_2ba358;
        case 0x2ba35cu: goto label_2ba35c;
        case 0x2ba360u: goto label_2ba360;
        case 0x2ba364u: goto label_2ba364;
        case 0x2ba368u: goto label_2ba368;
        case 0x2ba36cu: goto label_2ba36c;
        case 0x2ba370u: goto label_2ba370;
        case 0x2ba374u: goto label_2ba374;
        case 0x2ba378u: goto label_2ba378;
        case 0x2ba37cu: goto label_2ba37c;
        case 0x2ba380u: goto label_2ba380;
        case 0x2ba384u: goto label_2ba384;
        case 0x2ba388u: goto label_2ba388;
        case 0x2ba38cu: goto label_2ba38c;
        case 0x2ba390u: goto label_2ba390;
        case 0x2ba394u: goto label_2ba394;
        case 0x2ba398u: goto label_2ba398;
        case 0x2ba39cu: goto label_2ba39c;
        case 0x2ba3a0u: goto label_2ba3a0;
        case 0x2ba3a4u: goto label_2ba3a4;
        case 0x2ba3a8u: goto label_2ba3a8;
        case 0x2ba3acu: goto label_2ba3ac;
        case 0x2ba3b0u: goto label_2ba3b0;
        case 0x2ba3b4u: goto label_2ba3b4;
        case 0x2ba3b8u: goto label_2ba3b8;
        case 0x2ba3bcu: goto label_2ba3bc;
        case 0x2ba3c0u: goto label_2ba3c0;
        case 0x2ba3c4u: goto label_2ba3c4;
        case 0x2ba3c8u: goto label_2ba3c8;
        case 0x2ba3ccu: goto label_2ba3cc;
        case 0x2ba3d0u: goto label_2ba3d0;
        case 0x2ba3d4u: goto label_2ba3d4;
        case 0x2ba3d8u: goto label_2ba3d8;
        case 0x2ba3dcu: goto label_2ba3dc;
        case 0x2ba3e0u: goto label_2ba3e0;
        case 0x2ba3e4u: goto label_2ba3e4;
        case 0x2ba3e8u: goto label_2ba3e8;
        case 0x2ba3ecu: goto label_2ba3ec;
        case 0x2ba3f0u: goto label_2ba3f0;
        case 0x2ba3f4u: goto label_2ba3f4;
        case 0x2ba3f8u: goto label_2ba3f8;
        case 0x2ba3fcu: goto label_2ba3fc;
        case 0x2ba400u: goto label_2ba400;
        case 0x2ba404u: goto label_2ba404;
        case 0x2ba408u: goto label_2ba408;
        case 0x2ba40cu: goto label_2ba40c;
        case 0x2ba410u: goto label_2ba410;
        case 0x2ba414u: goto label_2ba414;
        case 0x2ba418u: goto label_2ba418;
        case 0x2ba41cu: goto label_2ba41c;
        case 0x2ba420u: goto label_2ba420;
        case 0x2ba424u: goto label_2ba424;
        case 0x2ba428u: goto label_2ba428;
        case 0x2ba42cu: goto label_2ba42c;
        case 0x2ba430u: goto label_2ba430;
        case 0x2ba434u: goto label_2ba434;
        case 0x2ba438u: goto label_2ba438;
        case 0x2ba43cu: goto label_2ba43c;
        case 0x2ba440u: goto label_2ba440;
        case 0x2ba444u: goto label_2ba444;
        case 0x2ba448u: goto label_2ba448;
        case 0x2ba44cu: goto label_2ba44c;
        case 0x2ba450u: goto label_2ba450;
        case 0x2ba454u: goto label_2ba454;
        case 0x2ba458u: goto label_2ba458;
        case 0x2ba45cu: goto label_2ba45c;
        case 0x2ba460u: goto label_2ba460;
        case 0x2ba464u: goto label_2ba464;
        case 0x2ba468u: goto label_2ba468;
        case 0x2ba46cu: goto label_2ba46c;
        case 0x2ba470u: goto label_2ba470;
        case 0x2ba474u: goto label_2ba474;
        case 0x2ba478u: goto label_2ba478;
        case 0x2ba47cu: goto label_2ba47c;
        case 0x2ba480u: goto label_2ba480;
        case 0x2ba484u: goto label_2ba484;
        case 0x2ba488u: goto label_2ba488;
        case 0x2ba48cu: goto label_2ba48c;
        case 0x2ba490u: goto label_2ba490;
        case 0x2ba494u: goto label_2ba494;
        case 0x2ba498u: goto label_2ba498;
        case 0x2ba49cu: goto label_2ba49c;
        case 0x2ba4a0u: goto label_2ba4a0;
        case 0x2ba4a4u: goto label_2ba4a4;
        case 0x2ba4a8u: goto label_2ba4a8;
        case 0x2ba4acu: goto label_2ba4ac;
        case 0x2ba4b0u: goto label_2ba4b0;
        case 0x2ba4b4u: goto label_2ba4b4;
        case 0x2ba4b8u: goto label_2ba4b8;
        case 0x2ba4bcu: goto label_2ba4bc;
        case 0x2ba4c0u: goto label_2ba4c0;
        case 0x2ba4c4u: goto label_2ba4c4;
        case 0x2ba4c8u: goto label_2ba4c8;
        case 0x2ba4ccu: goto label_2ba4cc;
        case 0x2ba4d0u: goto label_2ba4d0;
        case 0x2ba4d4u: goto label_2ba4d4;
        case 0x2ba4d8u: goto label_2ba4d8;
        case 0x2ba4dcu: goto label_2ba4dc;
        case 0x2ba4e0u: goto label_2ba4e0;
        case 0x2ba4e4u: goto label_2ba4e4;
        case 0x2ba4e8u: goto label_2ba4e8;
        case 0x2ba4ecu: goto label_2ba4ec;
        case 0x2ba4f0u: goto label_2ba4f0;
        case 0x2ba4f4u: goto label_2ba4f4;
        case 0x2ba4f8u: goto label_2ba4f8;
        case 0x2ba4fcu: goto label_2ba4fc;
        case 0x2ba500u: goto label_2ba500;
        case 0x2ba504u: goto label_2ba504;
        case 0x2ba508u: goto label_2ba508;
        case 0x2ba50cu: goto label_2ba50c;
        case 0x2ba510u: goto label_2ba510;
        case 0x2ba514u: goto label_2ba514;
        case 0x2ba518u: goto label_2ba518;
        case 0x2ba51cu: goto label_2ba51c;
        case 0x2ba520u: goto label_2ba520;
        case 0x2ba524u: goto label_2ba524;
        case 0x2ba528u: goto label_2ba528;
        case 0x2ba52cu: goto label_2ba52c;
        case 0x2ba530u: goto label_2ba530;
        case 0x2ba534u: goto label_2ba534;
        case 0x2ba538u: goto label_2ba538;
        case 0x2ba53cu: goto label_2ba53c;
        case 0x2ba540u: goto label_2ba540;
        case 0x2ba544u: goto label_2ba544;
        case 0x2ba548u: goto label_2ba548;
        case 0x2ba54cu: goto label_2ba54c;
        case 0x2ba550u: goto label_2ba550;
        case 0x2ba554u: goto label_2ba554;
        case 0x2ba558u: goto label_2ba558;
        case 0x2ba55cu: goto label_2ba55c;
        case 0x2ba560u: goto label_2ba560;
        case 0x2ba564u: goto label_2ba564;
        case 0x2ba568u: goto label_2ba568;
        case 0x2ba56cu: goto label_2ba56c;
        case 0x2ba570u: goto label_2ba570;
        case 0x2ba574u: goto label_2ba574;
        case 0x2ba578u: goto label_2ba578;
        case 0x2ba57cu: goto label_2ba57c;
        case 0x2ba580u: goto label_2ba580;
        case 0x2ba584u: goto label_2ba584;
        case 0x2ba588u: goto label_2ba588;
        case 0x2ba58cu: goto label_2ba58c;
        case 0x2ba590u: goto label_2ba590;
        case 0x2ba594u: goto label_2ba594;
        case 0x2ba598u: goto label_2ba598;
        case 0x2ba59cu: goto label_2ba59c;
        case 0x2ba5a0u: goto label_2ba5a0;
        case 0x2ba5a4u: goto label_2ba5a4;
        case 0x2ba5a8u: goto label_2ba5a8;
        case 0x2ba5acu: goto label_2ba5ac;
        case 0x2ba5b0u: goto label_2ba5b0;
        case 0x2ba5b4u: goto label_2ba5b4;
        case 0x2ba5b8u: goto label_2ba5b8;
        case 0x2ba5bcu: goto label_2ba5bc;
        case 0x2ba5c0u: goto label_2ba5c0;
        case 0x2ba5c4u: goto label_2ba5c4;
        case 0x2ba5c8u: goto label_2ba5c8;
        case 0x2ba5ccu: goto label_2ba5cc;
        case 0x2ba5d0u: goto label_2ba5d0;
        case 0x2ba5d4u: goto label_2ba5d4;
        case 0x2ba5d8u: goto label_2ba5d8;
        case 0x2ba5dcu: goto label_2ba5dc;
        case 0x2ba5e0u: goto label_2ba5e0;
        case 0x2ba5e4u: goto label_2ba5e4;
        case 0x2ba5e8u: goto label_2ba5e8;
        case 0x2ba5ecu: goto label_2ba5ec;
        case 0x2ba5f0u: goto label_2ba5f0;
        case 0x2ba5f4u: goto label_2ba5f4;
        case 0x2ba5f8u: goto label_2ba5f8;
        case 0x2ba5fcu: goto label_2ba5fc;
        case 0x2ba600u: goto label_2ba600;
        case 0x2ba604u: goto label_2ba604;
        case 0x2ba608u: goto label_2ba608;
        case 0x2ba60cu: goto label_2ba60c;
        case 0x2ba610u: goto label_2ba610;
        case 0x2ba614u: goto label_2ba614;
        case 0x2ba618u: goto label_2ba618;
        case 0x2ba61cu: goto label_2ba61c;
        case 0x2ba620u: goto label_2ba620;
        case 0x2ba624u: goto label_2ba624;
        case 0x2ba628u: goto label_2ba628;
        case 0x2ba62cu: goto label_2ba62c;
        case 0x2ba630u: goto label_2ba630;
        case 0x2ba634u: goto label_2ba634;
        case 0x2ba638u: goto label_2ba638;
        case 0x2ba63cu: goto label_2ba63c;
        case 0x2ba640u: goto label_2ba640;
        case 0x2ba644u: goto label_2ba644;
        case 0x2ba648u: goto label_2ba648;
        case 0x2ba64cu: goto label_2ba64c;
        case 0x2ba650u: goto label_2ba650;
        case 0x2ba654u: goto label_2ba654;
        case 0x2ba658u: goto label_2ba658;
        case 0x2ba65cu: goto label_2ba65c;
        case 0x2ba660u: goto label_2ba660;
        case 0x2ba664u: goto label_2ba664;
        case 0x2ba668u: goto label_2ba668;
        case 0x2ba66cu: goto label_2ba66c;
        case 0x2ba670u: goto label_2ba670;
        case 0x2ba674u: goto label_2ba674;
        case 0x2ba678u: goto label_2ba678;
        case 0x2ba67cu: goto label_2ba67c;
        case 0x2ba680u: goto label_2ba680;
        case 0x2ba684u: goto label_2ba684;
        case 0x2ba688u: goto label_2ba688;
        case 0x2ba68cu: goto label_2ba68c;
        case 0x2ba690u: goto label_2ba690;
        case 0x2ba694u: goto label_2ba694;
        case 0x2ba698u: goto label_2ba698;
        case 0x2ba69cu: goto label_2ba69c;
        case 0x2ba6a0u: goto label_2ba6a0;
        case 0x2ba6a4u: goto label_2ba6a4;
        case 0x2ba6a8u: goto label_2ba6a8;
        case 0x2ba6acu: goto label_2ba6ac;
        case 0x2ba6b0u: goto label_2ba6b0;
        case 0x2ba6b4u: goto label_2ba6b4;
        case 0x2ba6b8u: goto label_2ba6b8;
        case 0x2ba6bcu: goto label_2ba6bc;
        case 0x2ba6c0u: goto label_2ba6c0;
        case 0x2ba6c4u: goto label_2ba6c4;
        case 0x2ba6c8u: goto label_2ba6c8;
        case 0x2ba6ccu: goto label_2ba6cc;
        case 0x2ba6d0u: goto label_2ba6d0;
        case 0x2ba6d4u: goto label_2ba6d4;
        case 0x2ba6d8u: goto label_2ba6d8;
        case 0x2ba6dcu: goto label_2ba6dc;
        case 0x2ba6e0u: goto label_2ba6e0;
        case 0x2ba6e4u: goto label_2ba6e4;
        case 0x2ba6e8u: goto label_2ba6e8;
        case 0x2ba6ecu: goto label_2ba6ec;
        case 0x2ba6f0u: goto label_2ba6f0;
        case 0x2ba6f4u: goto label_2ba6f4;
        case 0x2ba6f8u: goto label_2ba6f8;
        case 0x2ba6fcu: goto label_2ba6fc;
        case 0x2ba700u: goto label_2ba700;
        case 0x2ba704u: goto label_2ba704;
        case 0x2ba708u: goto label_2ba708;
        case 0x2ba70cu: goto label_2ba70c;
        case 0x2ba710u: goto label_2ba710;
        case 0x2ba714u: goto label_2ba714;
        case 0x2ba718u: goto label_2ba718;
        case 0x2ba71cu: goto label_2ba71c;
        case 0x2ba720u: goto label_2ba720;
        case 0x2ba724u: goto label_2ba724;
        case 0x2ba728u: goto label_2ba728;
        case 0x2ba72cu: goto label_2ba72c;
        case 0x2ba730u: goto label_2ba730;
        case 0x2ba734u: goto label_2ba734;
        case 0x2ba738u: goto label_2ba738;
        case 0x2ba73cu: goto label_2ba73c;
        case 0x2ba740u: goto label_2ba740;
        case 0x2ba744u: goto label_2ba744;
        case 0x2ba748u: goto label_2ba748;
        case 0x2ba74cu: goto label_2ba74c;
        case 0x2ba750u: goto label_2ba750;
        case 0x2ba754u: goto label_2ba754;
        case 0x2ba758u: goto label_2ba758;
        case 0x2ba75cu: goto label_2ba75c;
        case 0x2ba760u: goto label_2ba760;
        case 0x2ba764u: goto label_2ba764;
        case 0x2ba768u: goto label_2ba768;
        case 0x2ba76cu: goto label_2ba76c;
        case 0x2ba770u: goto label_2ba770;
        case 0x2ba774u: goto label_2ba774;
        case 0x2ba778u: goto label_2ba778;
        case 0x2ba77cu: goto label_2ba77c;
        case 0x2ba780u: goto label_2ba780;
        case 0x2ba784u: goto label_2ba784;
        case 0x2ba788u: goto label_2ba788;
        case 0x2ba78cu: goto label_2ba78c;
        case 0x2ba790u: goto label_2ba790;
        case 0x2ba794u: goto label_2ba794;
        case 0x2ba798u: goto label_2ba798;
        case 0x2ba79cu: goto label_2ba79c;
        case 0x2ba7a0u: goto label_2ba7a0;
        case 0x2ba7a4u: goto label_2ba7a4;
        case 0x2ba7a8u: goto label_2ba7a8;
        case 0x2ba7acu: goto label_2ba7ac;
        case 0x2ba7b0u: goto label_2ba7b0;
        case 0x2ba7b4u: goto label_2ba7b4;
        case 0x2ba7b8u: goto label_2ba7b8;
        case 0x2ba7bcu: goto label_2ba7bc;
        case 0x2ba7c0u: goto label_2ba7c0;
        case 0x2ba7c4u: goto label_2ba7c4;
        case 0x2ba7c8u: goto label_2ba7c8;
        case 0x2ba7ccu: goto label_2ba7cc;
        case 0x2ba7d0u: goto label_2ba7d0;
        case 0x2ba7d4u: goto label_2ba7d4;
        case 0x2ba7d8u: goto label_2ba7d8;
        case 0x2ba7dcu: goto label_2ba7dc;
        case 0x2ba7e0u: goto label_2ba7e0;
        case 0x2ba7e4u: goto label_2ba7e4;
        case 0x2ba7e8u: goto label_2ba7e8;
        case 0x2ba7ecu: goto label_2ba7ec;
        case 0x2ba7f0u: goto label_2ba7f0;
        case 0x2ba7f4u: goto label_2ba7f4;
        case 0x2ba7f8u: goto label_2ba7f8;
        case 0x2ba7fcu: goto label_2ba7fc;
        case 0x2ba800u: goto label_2ba800;
        case 0x2ba804u: goto label_2ba804;
        case 0x2ba808u: goto label_2ba808;
        case 0x2ba80cu: goto label_2ba80c;
        case 0x2ba810u: goto label_2ba810;
        case 0x2ba814u: goto label_2ba814;
        case 0x2ba818u: goto label_2ba818;
        case 0x2ba81cu: goto label_2ba81c;
        case 0x2ba820u: goto label_2ba820;
        case 0x2ba824u: goto label_2ba824;
        case 0x2ba828u: goto label_2ba828;
        case 0x2ba82cu: goto label_2ba82c;
        case 0x2ba830u: goto label_2ba830;
        case 0x2ba834u: goto label_2ba834;
        case 0x2ba838u: goto label_2ba838;
        case 0x2ba83cu: goto label_2ba83c;
        case 0x2ba840u: goto label_2ba840;
        case 0x2ba844u: goto label_2ba844;
        case 0x2ba848u: goto label_2ba848;
        case 0x2ba84cu: goto label_2ba84c;
        case 0x2ba850u: goto label_2ba850;
        case 0x2ba854u: goto label_2ba854;
        case 0x2ba858u: goto label_2ba858;
        case 0x2ba85cu: goto label_2ba85c;
        case 0x2ba860u: goto label_2ba860;
        case 0x2ba864u: goto label_2ba864;
        case 0x2ba868u: goto label_2ba868;
        case 0x2ba86cu: goto label_2ba86c;
        case 0x2ba870u: goto label_2ba870;
        case 0x2ba874u: goto label_2ba874;
        case 0x2ba878u: goto label_2ba878;
        case 0x2ba87cu: goto label_2ba87c;
        case 0x2ba880u: goto label_2ba880;
        case 0x2ba884u: goto label_2ba884;
        case 0x2ba888u: goto label_2ba888;
        case 0x2ba88cu: goto label_2ba88c;
        case 0x2ba890u: goto label_2ba890;
        case 0x2ba894u: goto label_2ba894;
        case 0x2ba898u: goto label_2ba898;
        case 0x2ba89cu: goto label_2ba89c;
        case 0x2ba8a0u: goto label_2ba8a0;
        case 0x2ba8a4u: goto label_2ba8a4;
        case 0x2ba8a8u: goto label_2ba8a8;
        case 0x2ba8acu: goto label_2ba8ac;
        case 0x2ba8b0u: goto label_2ba8b0;
        case 0x2ba8b4u: goto label_2ba8b4;
        case 0x2ba8b8u: goto label_2ba8b8;
        case 0x2ba8bcu: goto label_2ba8bc;
        case 0x2ba8c0u: goto label_2ba8c0;
        case 0x2ba8c4u: goto label_2ba8c4;
        case 0x2ba8c8u: goto label_2ba8c8;
        case 0x2ba8ccu: goto label_2ba8cc;
        case 0x2ba8d0u: goto label_2ba8d0;
        case 0x2ba8d4u: goto label_2ba8d4;
        case 0x2ba8d8u: goto label_2ba8d8;
        case 0x2ba8dcu: goto label_2ba8dc;
        case 0x2ba8e0u: goto label_2ba8e0;
        case 0x2ba8e4u: goto label_2ba8e4;
        case 0x2ba8e8u: goto label_2ba8e8;
        case 0x2ba8ecu: goto label_2ba8ec;
        case 0x2ba8f0u: goto label_2ba8f0;
        case 0x2ba8f4u: goto label_2ba8f4;
        case 0x2ba8f8u: goto label_2ba8f8;
        case 0x2ba8fcu: goto label_2ba8fc;
        case 0x2ba900u: goto label_2ba900;
        case 0x2ba904u: goto label_2ba904;
        case 0x2ba908u: goto label_2ba908;
        case 0x2ba90cu: goto label_2ba90c;
        case 0x2ba910u: goto label_2ba910;
        case 0x2ba914u: goto label_2ba914;
        case 0x2ba918u: goto label_2ba918;
        case 0x2ba91cu: goto label_2ba91c;
        case 0x2ba920u: goto label_2ba920;
        case 0x2ba924u: goto label_2ba924;
        case 0x2ba928u: goto label_2ba928;
        case 0x2ba92cu: goto label_2ba92c;
        case 0x2ba930u: goto label_2ba930;
        case 0x2ba934u: goto label_2ba934;
        case 0x2ba938u: goto label_2ba938;
        case 0x2ba93cu: goto label_2ba93c;
        case 0x2ba940u: goto label_2ba940;
        case 0x2ba944u: goto label_2ba944;
        case 0x2ba948u: goto label_2ba948;
        case 0x2ba94cu: goto label_2ba94c;
        case 0x2ba950u: goto label_2ba950;
        case 0x2ba954u: goto label_2ba954;
        case 0x2ba958u: goto label_2ba958;
        case 0x2ba95cu: goto label_2ba95c;
        case 0x2ba960u: goto label_2ba960;
        case 0x2ba964u: goto label_2ba964;
        case 0x2ba968u: goto label_2ba968;
        case 0x2ba96cu: goto label_2ba96c;
        case 0x2ba970u: goto label_2ba970;
        case 0x2ba974u: goto label_2ba974;
        case 0x2ba978u: goto label_2ba978;
        case 0x2ba97cu: goto label_2ba97c;
        case 0x2ba980u: goto label_2ba980;
        case 0x2ba984u: goto label_2ba984;
        case 0x2ba988u: goto label_2ba988;
        case 0x2ba98cu: goto label_2ba98c;
        case 0x2ba990u: goto label_2ba990;
        case 0x2ba994u: goto label_2ba994;
        case 0x2ba998u: goto label_2ba998;
        case 0x2ba99cu: goto label_2ba99c;
        case 0x2ba9a0u: goto label_2ba9a0;
        case 0x2ba9a4u: goto label_2ba9a4;
        case 0x2ba9a8u: goto label_2ba9a8;
        case 0x2ba9acu: goto label_2ba9ac;
        case 0x2ba9b0u: goto label_2ba9b0;
        case 0x2ba9b4u: goto label_2ba9b4;
        case 0x2ba9b8u: goto label_2ba9b8;
        case 0x2ba9bcu: goto label_2ba9bc;
        case 0x2ba9c0u: goto label_2ba9c0;
        case 0x2ba9c4u: goto label_2ba9c4;
        case 0x2ba9c8u: goto label_2ba9c8;
        case 0x2ba9ccu: goto label_2ba9cc;
        case 0x2ba9d0u: goto label_2ba9d0;
        case 0x2ba9d4u: goto label_2ba9d4;
        case 0x2ba9d8u: goto label_2ba9d8;
        case 0x2ba9dcu: goto label_2ba9dc;
        case 0x2ba9e0u: goto label_2ba9e0;
        case 0x2ba9e4u: goto label_2ba9e4;
        case 0x2ba9e8u: goto label_2ba9e8;
        case 0x2ba9ecu: goto label_2ba9ec;
        case 0x2ba9f0u: goto label_2ba9f0;
        case 0x2ba9f4u: goto label_2ba9f4;
        case 0x2ba9f8u: goto label_2ba9f8;
        case 0x2ba9fcu: goto label_2ba9fc;
        case 0x2baa00u: goto label_2baa00;
        case 0x2baa04u: goto label_2baa04;
        case 0x2baa08u: goto label_2baa08;
        case 0x2baa0cu: goto label_2baa0c;
        case 0x2baa10u: goto label_2baa10;
        case 0x2baa14u: goto label_2baa14;
        case 0x2baa18u: goto label_2baa18;
        case 0x2baa1cu: goto label_2baa1c;
        case 0x2baa20u: goto label_2baa20;
        case 0x2baa24u: goto label_2baa24;
        case 0x2baa28u: goto label_2baa28;
        case 0x2baa2cu: goto label_2baa2c;
        case 0x2baa30u: goto label_2baa30;
        case 0x2baa34u: goto label_2baa34;
        case 0x2baa38u: goto label_2baa38;
        case 0x2baa3cu: goto label_2baa3c;
        case 0x2baa40u: goto label_2baa40;
        case 0x2baa44u: goto label_2baa44;
        case 0x2baa48u: goto label_2baa48;
        case 0x2baa4cu: goto label_2baa4c;
        case 0x2baa50u: goto label_2baa50;
        case 0x2baa54u: goto label_2baa54;
        case 0x2baa58u: goto label_2baa58;
        case 0x2baa5cu: goto label_2baa5c;
        case 0x2baa60u: goto label_2baa60;
        case 0x2baa64u: goto label_2baa64;
        case 0x2baa68u: goto label_2baa68;
        case 0x2baa6cu: goto label_2baa6c;
        case 0x2baa70u: goto label_2baa70;
        case 0x2baa74u: goto label_2baa74;
        case 0x2baa78u: goto label_2baa78;
        case 0x2baa7cu: goto label_2baa7c;
        case 0x2baa80u: goto label_2baa80;
        case 0x2baa84u: goto label_2baa84;
        case 0x2baa88u: goto label_2baa88;
        case 0x2baa8cu: goto label_2baa8c;
        case 0x2baa90u: goto label_2baa90;
        case 0x2baa94u: goto label_2baa94;
        case 0x2baa98u: goto label_2baa98;
        case 0x2baa9cu: goto label_2baa9c;
        case 0x2baaa0u: goto label_2baaa0;
        case 0x2baaa4u: goto label_2baaa4;
        case 0x2baaa8u: goto label_2baaa8;
        case 0x2baaacu: goto label_2baaac;
        case 0x2baab0u: goto label_2baab0;
        case 0x2baab4u: goto label_2baab4;
        case 0x2baab8u: goto label_2baab8;
        case 0x2baabcu: goto label_2baabc;
        case 0x2baac0u: goto label_2baac0;
        case 0x2baac4u: goto label_2baac4;
        case 0x2baac8u: goto label_2baac8;
        case 0x2baaccu: goto label_2baacc;
        case 0x2baad0u: goto label_2baad0;
        case 0x2baad4u: goto label_2baad4;
        case 0x2baad8u: goto label_2baad8;
        case 0x2baadcu: goto label_2baadc;
        case 0x2baae0u: goto label_2baae0;
        case 0x2baae4u: goto label_2baae4;
        case 0x2baae8u: goto label_2baae8;
        case 0x2baaecu: goto label_2baaec;
        case 0x2baaf0u: goto label_2baaf0;
        case 0x2baaf4u: goto label_2baaf4;
        case 0x2baaf8u: goto label_2baaf8;
        case 0x2baafcu: goto label_2baafc;
        case 0x2bab00u: goto label_2bab00;
        case 0x2bab04u: goto label_2bab04;
        case 0x2bab08u: goto label_2bab08;
        case 0x2bab0cu: goto label_2bab0c;
        case 0x2bab10u: goto label_2bab10;
        case 0x2bab14u: goto label_2bab14;
        case 0x2bab18u: goto label_2bab18;
        case 0x2bab1cu: goto label_2bab1c;
        case 0x2bab20u: goto label_2bab20;
        case 0x2bab24u: goto label_2bab24;
        case 0x2bab28u: goto label_2bab28;
        case 0x2bab2cu: goto label_2bab2c;
        case 0x2bab30u: goto label_2bab30;
        case 0x2bab34u: goto label_2bab34;
        case 0x2bab38u: goto label_2bab38;
        case 0x2bab3cu: goto label_2bab3c;
        case 0x2bab40u: goto label_2bab40;
        case 0x2bab44u: goto label_2bab44;
        case 0x2bab48u: goto label_2bab48;
        case 0x2bab4cu: goto label_2bab4c;
        case 0x2bab50u: goto label_2bab50;
        case 0x2bab54u: goto label_2bab54;
        case 0x2bab58u: goto label_2bab58;
        case 0x2bab5cu: goto label_2bab5c;
        case 0x2bab60u: goto label_2bab60;
        case 0x2bab64u: goto label_2bab64;
        case 0x2bab68u: goto label_2bab68;
        case 0x2bab6cu: goto label_2bab6c;
        case 0x2bab70u: goto label_2bab70;
        case 0x2bab74u: goto label_2bab74;
        case 0x2bab78u: goto label_2bab78;
        case 0x2bab7cu: goto label_2bab7c;
        case 0x2bab80u: goto label_2bab80;
        case 0x2bab84u: goto label_2bab84;
        case 0x2bab88u: goto label_2bab88;
        case 0x2bab8cu: goto label_2bab8c;
        case 0x2bab90u: goto label_2bab90;
        case 0x2bab94u: goto label_2bab94;
        case 0x2bab98u: goto label_2bab98;
        case 0x2bab9cu: goto label_2bab9c;
        case 0x2baba0u: goto label_2baba0;
        case 0x2baba4u: goto label_2baba4;
        case 0x2baba8u: goto label_2baba8;
        case 0x2babacu: goto label_2babac;
        case 0x2babb0u: goto label_2babb0;
        case 0x2babb4u: goto label_2babb4;
        case 0x2babb8u: goto label_2babb8;
        case 0x2babbcu: goto label_2babbc;
        case 0x2babc0u: goto label_2babc0;
        case 0x2babc4u: goto label_2babc4;
        case 0x2babc8u: goto label_2babc8;
        case 0x2babccu: goto label_2babcc;
        case 0x2babd0u: goto label_2babd0;
        case 0x2babd4u: goto label_2babd4;
        case 0x2babd8u: goto label_2babd8;
        case 0x2babdcu: goto label_2babdc;
        case 0x2babe0u: goto label_2babe0;
        case 0x2babe4u: goto label_2babe4;
        case 0x2babe8u: goto label_2babe8;
        case 0x2babecu: goto label_2babec;
        case 0x2babf0u: goto label_2babf0;
        case 0x2babf4u: goto label_2babf4;
        case 0x2babf8u: goto label_2babf8;
        case 0x2babfcu: goto label_2babfc;
        case 0x2bac00u: goto label_2bac00;
        case 0x2bac04u: goto label_2bac04;
        case 0x2bac08u: goto label_2bac08;
        case 0x2bac0cu: goto label_2bac0c;
        case 0x2bac10u: goto label_2bac10;
        case 0x2bac14u: goto label_2bac14;
        case 0x2bac18u: goto label_2bac18;
        case 0x2bac1cu: goto label_2bac1c;
        case 0x2bac20u: goto label_2bac20;
        case 0x2bac24u: goto label_2bac24;
        case 0x2bac28u: goto label_2bac28;
        case 0x2bac2cu: goto label_2bac2c;
        case 0x2bac30u: goto label_2bac30;
        case 0x2bac34u: goto label_2bac34;
        case 0x2bac38u: goto label_2bac38;
        case 0x2bac3cu: goto label_2bac3c;
        case 0x2bac40u: goto label_2bac40;
        case 0x2bac44u: goto label_2bac44;
        case 0x2bac48u: goto label_2bac48;
        case 0x2bac4cu: goto label_2bac4c;
        case 0x2bac50u: goto label_2bac50;
        case 0x2bac54u: goto label_2bac54;
        case 0x2bac58u: goto label_2bac58;
        case 0x2bac5cu: goto label_2bac5c;
        case 0x2bac60u: goto label_2bac60;
        case 0x2bac64u: goto label_2bac64;
        case 0x2bac68u: goto label_2bac68;
        case 0x2bac6cu: goto label_2bac6c;
        case 0x2bac70u: goto label_2bac70;
        case 0x2bac74u: goto label_2bac74;
        case 0x2bac78u: goto label_2bac78;
        case 0x2bac7cu: goto label_2bac7c;
        case 0x2bac80u: goto label_2bac80;
        case 0x2bac84u: goto label_2bac84;
        case 0x2bac88u: goto label_2bac88;
        case 0x2bac8cu: goto label_2bac8c;
        case 0x2bac90u: goto label_2bac90;
        case 0x2bac94u: goto label_2bac94;
        case 0x2bac98u: goto label_2bac98;
        case 0x2bac9cu: goto label_2bac9c;
        case 0x2baca0u: goto label_2baca0;
        case 0x2baca4u: goto label_2baca4;
        case 0x2baca8u: goto label_2baca8;
        case 0x2bacacu: goto label_2bacac;
        case 0x2bacb0u: goto label_2bacb0;
        case 0x2bacb4u: goto label_2bacb4;
        case 0x2bacb8u: goto label_2bacb8;
        case 0x2bacbcu: goto label_2bacbc;
        case 0x2bacc0u: goto label_2bacc0;
        case 0x2bacc4u: goto label_2bacc4;
        case 0x2bacc8u: goto label_2bacc8;
        case 0x2bacccu: goto label_2baccc;
        case 0x2bacd0u: goto label_2bacd0;
        case 0x2bacd4u: goto label_2bacd4;
        case 0x2bacd8u: goto label_2bacd8;
        case 0x2bacdcu: goto label_2bacdc;
        case 0x2bace0u: goto label_2bace0;
        case 0x2bace4u: goto label_2bace4;
        case 0x2bace8u: goto label_2bace8;
        case 0x2bacecu: goto label_2bacec;
        case 0x2bacf0u: goto label_2bacf0;
        case 0x2bacf4u: goto label_2bacf4;
        case 0x2bacf8u: goto label_2bacf8;
        case 0x2bacfcu: goto label_2bacfc;
        case 0x2bad00u: goto label_2bad00;
        case 0x2bad04u: goto label_2bad04;
        case 0x2bad08u: goto label_2bad08;
        case 0x2bad0cu: goto label_2bad0c;
        case 0x2bad10u: goto label_2bad10;
        case 0x2bad14u: goto label_2bad14;
        default: break;
    }

    ctx->pc = 0x2b9b48u;

label_2b9b48:
    // 0x2b9b48: 0x27bdfe80  addiu       $sp, $sp, -0x180
    ctx->pc = 0x2b9b48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966912));
label_2b9b4c:
    // 0x2b9b4c: 0xffb70150  sd          $s7, 0x150($sp)
    ctx->pc = 0x2b9b4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 336), GPR_U64(ctx, 23));
label_2b9b50:
    // 0x2b9b50: 0xffb60140  sd          $s6, 0x140($sp)
    ctx->pc = 0x2b9b50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 320), GPR_U64(ctx, 22));
label_2b9b54:
    // 0x2b9b54: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x2b9b54u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b58:
    // 0x2b9b58: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x2b9b58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
label_2b9b5c:
    // 0x2b9b5c: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x2b9b5cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2b9b60:
    // 0x2b9b60: 0xffbe0160  sd          $fp, 0x160($sp)
    ctx->pc = 0x2b9b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 352), GPR_U64(ctx, 30));
label_2b9b64:
    // 0x2b9b64: 0xffb50130  sd          $s5, 0x130($sp)
    ctx->pc = 0x2b9b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 21));
label_2b9b68:
    // 0x2b9b68: 0xffb40120  sd          $s4, 0x120($sp)
    ctx->pc = 0x2b9b68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 288), GPR_U64(ctx, 20));
label_2b9b6c:
    // 0x2b9b6c: 0xffb30110  sd          $s3, 0x110($sp)
    ctx->pc = 0x2b9b6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 272), GPR_U64(ctx, 19));
label_2b9b70:
    // 0x2b9b70: 0xffb20100  sd          $s2, 0x100($sp)
    ctx->pc = 0x2b9b70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 18));
label_2b9b74:
    // 0x2b9b74: 0xffb100f0  sd          $s1, 0xF0($sp)
    ctx->pc = 0x2b9b74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 17));
label_2b9b78:
    // 0x2b9b78: 0xffb000e0  sd          $s0, 0xE0($sp)
    ctx->pc = 0x2b9b78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 16));
label_2b9b7c:
    // 0x2b9b7c: 0xafa50068  sw          $a1, 0x68($sp)
    ctx->pc = 0x2b9b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
label_2b9b80:
    // 0x2b9b80: 0xafa6006c  sw          $a2, 0x6C($sp)
    ctx->pc = 0x2b9b80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 6));
label_2b9b84:
    // 0x2b9b84: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2b9b84u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_2b9b88:
    // 0x2b9b88: 0xafa00074  sw          $zero, 0x74($sp)
    ctx->pc = 0x2b9b88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 0));
label_2b9b8c:
    // 0x2b9b8c: 0xafa00078  sw          $zero, 0x78($sp)
    ctx->pc = 0x2b9b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 0));
label_2b9b90:
    // 0x2b9b90: 0xafa00088  sw          $zero, 0x88($sp)
    ctx->pc = 0x2b9b90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 0));
label_2b9b94:
    // 0x2b9b94: 0xafa0008c  sw          $zero, 0x8C($sp)
    ctx->pc = 0x2b9b94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 0));
label_2b9b98:
    // 0x2b9b98: 0xafa00098  sw          $zero, 0x98($sp)
    ctx->pc = 0x2b9b98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 0));
label_2b9b9c:
    // 0x2b9b9c: 0xafa0009c  sw          $zero, 0x9C($sp)
    ctx->pc = 0x2b9b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 0));
label_2b9ba0:
    // 0x2b9ba0: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x2b9ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
label_2b9ba4:
    // 0x2b9ba4: 0x16c00003  bnez        $s6, . + 4 + (0x3 << 2)
label_2b9ba8:
    if (ctx->pc == 0x2B9BA8u) {
        ctx->pc = 0x2B9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BA4u;
        // 0x2b9ba8: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9BACu;
        goto label_2b9bac;
    }
    ctx->pc = 0x2B9BA4u;
    {
        const bool branch_taken_0x2b9ba4 = (GPR_U64(ctx, 22) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BA4u;
        // 0x2b9ba8: 0xafa00064  sw          $zero, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ba4) {
            ctx->pc = 0x2B9BB4u;
            goto label_2b9bb4;
        }
    }
    ctx->pc = 0x2B9BACu;
label_2b9bac:
    // 0x2b9bac: 0x100002fb  b           . + 4 + (0x2FB << 2)
label_2b9bb0:
    if (ctx->pc == 0x2B9BB0u) {
        ctx->pc = 0x2B9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BACu;
        // 0x2b9bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9BB4u;
        goto label_2b9bb4;
    }
    ctx->pc = 0x2B9BACu;
    {
        const bool branch_taken_0x2b9bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BACu;
        // 0x2b9bb0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9bac) {
            ctx->pc = 0x2BA79Cu;
            goto label_2ba79c;
        }
    }
    ctx->pc = 0x2B9BB4u;
label_2b9bb4:
    // 0x2b9bb4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2b9bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2b9bb8:
    // 0x2b9bb8: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x2b9bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b9bbc:
    // 0x2b9bbc: 0x24a5e720  addiu       $a1, $a1, -0x18E0
    ctx->pc = 0x2b9bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960928));
label_2b9bc0:
    // 0x2b9bc0: 0xc04a8f8  jal         func_12A3E0
label_2b9bc4:
    if (ctx->pc == 0x2B9BC4u) {
        ctx->pc = 0x2B9BC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BC0u;
        // 0x2b9bc4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9BC8u;
        goto label_2b9bc8;
    }
    ctx->pc = 0x2B9BC0u;
    SET_GPR_U32(ctx, 31, 0x2B9BC8u);
    ctx->pc = 0x2B9BC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BC0u;
    // 0x2b9bc4: 0x24060007  addiu       $a2, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A3E0u, 0x2B9BC0u, 0x2B9BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BC8u;
label_2b9bc8:
    // 0x2b9bc8: 0x14400032  bnez        $v0, . + 4 + (0x32 << 2)
label_2b9bcc:
    if (ctx->pc == 0x2B9BCCu) {
        ctx->pc = 0x2B9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BC8u;
        // 0x2b9bcc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9BD0u;
        goto label_2b9bd0;
    }
    ctx->pc = 0x2B9BC8u;
    {
        const bool branch_taken_0x2b9bc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BC8u;
        // 0x2b9bcc: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9bc8) {
            ctx->pc = 0x2B9C94u;
            goto label_2b9c94;
        }
    }
    ctx->pc = 0x2B9BD0u;
label_2b9bd0:
    // 0x2b9bd0: 0xc04a83e  jal         func_12A0F8
label_2b9bd4:
    if (ctx->pc == 0x2B9BD4u) {
        ctx->pc = 0x2B9BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BD0u;
        // 0x2b9bd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9BD8u;
        goto label_2b9bd8;
    }
    ctx->pc = 0x2B9BD0u;
    SET_GPR_U32(ctx, 31, 0x2B9BD8u);
    ctx->pc = 0x2B9BD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BD0u;
    // 0x2b9bd4: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12A0F8u, 0x2B9BD0u, 0x2B9BD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BD8u;
label_2b9bd8:
    // 0x2b9bd8: 0xc0a8bf6  jal         func_2A2FD8
label_2b9bdc:
    if (ctx->pc == 0x2B9BDCu) {
        ctx->pc = 0x2B9BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BD8u;
        // 0x2b9bdc: 0x24440031  addiu       $a0, $v0, 0x31 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 49));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9BE0u;
        goto label_2b9be0;
    }
    ctx->pc = 0x2B9BD8u;
    SET_GPR_U32(ctx, 31, 0x2B9BE0u);
    ctx->pc = 0x2B9BDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BD8u;
    // 0x2b9bdc: 0x24440031  addiu       $a0, $v0, 0x31 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 49));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2B9BD8u, 0x2B9BE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9BE0u;
label_2b9be0:
    // 0x2b9be0: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2b9be4:
    if (ctx->pc == 0x2B9BE4u) {
        ctx->pc = 0x2B9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BE0u;
        // 0x2b9be4: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9BE8u;
        goto label_2b9be8;
    }
    ctx->pc = 0x2B9BE0u;
    {
        const bool branch_taken_0x2b9be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BE0u;
        // 0x2b9be4: 0xafa20078  sw          $v0, 0x78($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9be0) {
            ctx->pc = 0x2B9C08u;
            goto label_2b9c08;
        }
    }
    ctx->pc = 0x2B9BE8u;
label_2b9be8:
    // 0x2b9be8: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b9be8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b9bec:
    // 0x2b9bec: 0x240500a6  addiu       $a1, $zero, 0xA6
    ctx->pc = 0x2b9becu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 166));
label_2b9bf0:
    // 0x2b9bf0: 0x24060021  addiu       $a2, $zero, 0x21
    ctx->pc = 0x2b9bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
label_2b9bf4:
    // 0x2b9bf4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2b9bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9bf8:
    // 0x2b9bf8: 0xc0a5648  jal         func_295920
label_2b9bfc:
    if (ctx->pc == 0x2B9BFCu) {
        ctx->pc = 0x2B9BFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9BF8u;
        // 0x2b9bfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9C00u;
        goto label_2b9c00;
    }
    ctx->pc = 0x2B9BF8u;
    SET_GPR_U32(ctx, 31, 0x2B9C00u);
    ctx->pc = 0x2B9BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9BF8u;
    // 0x2b9bfc: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2B9BF8u, 0x2B9C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C00u;
label_2b9c00:
    // 0x2b9c00: 0x100002c8  b           . + 4 + (0x2C8 << 2)
label_2b9c04:
    if (ctx->pc == 0x2B9C04u) {
        ctx->pc = 0x2B9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C00u;
        // 0x2b9c04: 0x8fa90078  lw          $t1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9C08u;
        goto label_2b9c08;
    }
    ctx->pc = 0x2B9C00u;
    {
        const bool branch_taken_0x2b9c00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C00u;
        // 0x2b9c04: 0x8fa90078  lw          $t1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c00) {
            ctx->pc = 0x2BA724u;
            goto label_2ba724;
        }
    }
    ctx->pc = 0x2B9C08u;
label_2b9c08:
    // 0x2b9c08: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2b9c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b9c0c:
    // 0x2b9c0c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2b9c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2b9c10:
    // 0x2b9c10: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2b9c10u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2b9c14:
    // 0x2b9c14: 0x2448e728  addiu       $t0, $v0, -0x18D8
    ctx->pc = 0x2b9c14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960936));
label_2b9c18:
    // 0x2b9c18: 0x69030007  ldl         $v1, 0x7($t0)
    ctx->pc = 0x2b9c18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2b9c1c:
    // 0x2b9c1c: 0x6d030000  ldr         $v1, 0x0($t0)
    ctx->pc = 0x2b9c1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2b9c20:
    // 0x2b9c20: 0x6906000f  ldl         $a2, 0xF($t0)
    ctx->pc = 0x2b9c20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2b9c24:
    // 0x2b9c24: 0x6d060008  ldr         $a2, 0x8($t0)
    ctx->pc = 0x2b9c24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2b9c28:
    // 0x2b9c28: 0x69070017  ldl         $a3, 0x17($t0)
    ctx->pc = 0x2b9c28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2b9c2c:
    // 0x2b9c2c: 0x6d070010  ldr         $a3, 0x10($t0)
    ctx->pc = 0x2b9c2cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2b9c30:
    // 0x2b9c30: 0xb0830007  sdl         $v1, 0x7($a0)
    ctx->pc = 0x2b9c30u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c34:
    // 0x2b9c34: 0xb4830000  sdr         $v1, 0x0($a0)
    ctx->pc = 0x2b9c34u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c38:
    // 0x2b9c38: 0xb086000f  sdl         $a2, 0xF($a0)
    ctx->pc = 0x2b9c38u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c3c:
    // 0x2b9c3c: 0xb4860008  sdr         $a2, 0x8($a0)
    ctx->pc = 0x2b9c3cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c40:
    // 0x2b9c40: 0xb0870017  sdl         $a3, 0x17($a0)
    ctx->pc = 0x2b9c40u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c44:
    // 0x2b9c44: 0xb4870010  sdr         $a3, 0x10($a0)
    ctx->pc = 0x2b9c44u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c48:
    // 0x2b9c48: 0x6903001f  ldl         $v1, 0x1F($t0)
    ctx->pc = 0x2b9c48u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_2b9c4c:
    // 0x2b9c4c: 0x6d030018  ldr         $v1, 0x18($t0)
    ctx->pc = 0x2b9c4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_2b9c50:
    // 0x2b9c50: 0x69060027  ldl         $a2, 0x27($t0)
    ctx->pc = 0x2b9c50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_2b9c54:
    // 0x2b9c54: 0x6d060020  ldr         $a2, 0x20($t0)
    ctx->pc = 0x2b9c54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_2b9c58:
    // 0x2b9c58: 0x6907002f  ldl         $a3, 0x2F($t0)
    ctx->pc = 0x2b9c58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2b9c5c:
    // 0x2b9c5c: 0x6d070028  ldr         $a3, 0x28($t0)
    ctx->pc = 0x2b9c5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2b9c60:
    // 0x2b9c60: 0xb083001f  sdl         $v1, 0x1F($a0)
    ctx->pc = 0x2b9c60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c64:
    // 0x2b9c64: 0xb4830018  sdr         $v1, 0x18($a0)
    ctx->pc = 0x2b9c64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c68:
    // 0x2b9c68: 0xb0860027  sdl         $a2, 0x27($a0)
    ctx->pc = 0x2b9c68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c6c:
    // 0x2b9c6c: 0xb4860020  sdr         $a2, 0x20($a0)
    ctx->pc = 0x2b9c6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c70:
    // 0x2b9c70: 0xb087002f  sdl         $a3, 0x2F($a0)
    ctx->pc = 0x2b9c70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c74:
    // 0x2b9c74: 0xb4870028  sdr         $a3, 0x28($a0)
    ctx->pc = 0x2b9c74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2b9c78:
    // 0x2b9c78: 0xc04a6da  jal         func_129B68
label_2b9c7c:
    if (ctx->pc == 0x2B9C7Cu) {
        ctx->pc = 0x2B9C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C78u;
        // 0x2b9c7c: 0x24a5e758  addiu       $a1, $a1, -0x18A8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960984));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9C80u;
        goto label_2b9c80;
    }
    ctx->pc = 0x2B9C78u;
    SET_GPR_U32(ctx, 31, 0x2B9C80u);
    ctx->pc = 0x2B9C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C78u;
    // 0x2b9c7c: 0x24a5e758  addiu       $a1, $a1, -0x18A8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294960984));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129B68u, 0x2B9C78u, 0x2B9C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C80u;
label_2b9c80:
    // 0x2b9c80: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x2b9c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b9c84:
    // 0x2b9c84: 0xc04a6da  jal         func_129B68
label_2b9c88:
    if (ctx->pc == 0x2B9C88u) {
        ctx->pc = 0x2B9C88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C84u;
        // 0x2b9c88: 0x26c50007  addiu       $a1, $s6, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 7));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9C8Cu;
        goto label_2b9c8c;
    }
    ctx->pc = 0x2B9C84u;
    SET_GPR_U32(ctx, 31, 0x2B9C8Cu);
    ctx->pc = 0x2B9C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9C84u;
    // 0x2b9c88: 0x26c50007  addiu       $a1, $s6, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129B68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129B68u, 0x2B9C84u, 0x2B9C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9C8Cu;
label_2b9c8c:
    // 0x2b9c8c: 0x8fb60078  lw          $s6, 0x78($sp)
    ctx->pc = 0x2b9c8cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2b9c90:
    // 0x2b9c90: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2b9c90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2b9c94:
    // 0x2b9c94: 0x8c437cc8  lw          $v1, 0x7CC8($v0)
    ctx->pc = 0x2b9c94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31944)));
label_2b9c98:
    // 0x2b9c98: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2b9c9c:
    if (ctx->pc == 0x2B9C9Cu) {
        ctx->pc = 0x2B9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C98u;
        // 0x2b9c9c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CA0u;
        goto label_2b9ca0;
    }
    ctx->pc = 0x2B9C98u;
    {
        const bool branch_taken_0x2b9c98 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9C9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9C98u;
        // 0x2b9c9c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9c98) {
            ctx->pc = 0x2B9CACu;
            goto label_2b9cac;
        }
    }
    ctx->pc = 0x2B9CA0u;
label_2b9ca0:
    // 0x2b9ca0: 0xc0ae628  jal         func_2B98A0
label_2b9ca4:
    if (ctx->pc == 0x2B9CA4u) {
        ctx->pc = 0x2B9CA8u;
        goto label_2b9ca8;
    }
    ctx->pc = 0x2B9CA0u;
    SET_GPR_U32(ctx, 31, 0x2B9CA8u);
    ctx->pc = 0x2B98A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B98A0u, 0x2B9CA0u, 0x2B9CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CA8u;
label_2b9ca8:
    // 0x2b9ca8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x2b9ca8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2b9cac:
    // 0x2b9cac: 0xc0ac626  jal         func_2B1898
label_2b9cb0:
    if (ctx->pc == 0x2B9CB0u) {
        ctx->pc = 0x2B9CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CACu;
        // 0x2b9cb0: 0x24140008  addiu       $s4, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CB4u;
        goto label_2b9cb4;
    }
    ctx->pc = 0x2B9CACu;
    SET_GPR_U32(ctx, 31, 0x2B9CB4u);
    ctx->pc = 0x2B9CB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CACu;
    // 0x2b9cb0: 0x24140008  addiu       $s4, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1898u, 0x2B9CACu, 0x2B9CB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CB4u;
label_2b9cb4:
    // 0x2b9cb4: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x2b9cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
label_2b9cb8:
    // 0x2b9cb8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2b9cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9cbc:
    // 0x2b9cbc: 0xc0ac626  jal         func_2B1898
label_2b9cc0:
    if (ctx->pc == 0x2B9CC0u) {
        ctx->pc = 0x2B9CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CBCu;
        // 0x2b9cc0: 0x62a00a  movz        $s4, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CC4u;
        goto label_2b9cc4;
    }
    ctx->pc = 0x2B9CBCu;
    SET_GPR_U32(ctx, 31, 0x2B9CC4u);
    ctx->pc = 0x2B9CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CBCu;
    // 0x2b9cc0: 0x62a00a  movz        $s4, $v1, $v0 (Delay Slot)
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1898u, 0x2B9CBCu, 0x2B9CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CC4u;
label_2b9cc4:
    // 0x2b9cc4: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2b9cc8:
    if (ctx->pc == 0x2B9CC8u) {
        ctx->pc = 0x2B9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CC4u;
        // 0x2b9cc8: 0x24020216  addiu       $v0, $zero, 0x216 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CCCu;
        goto label_2b9ccc;
    }
    ctx->pc = 0x2B9CC4u;
    {
        const bool branch_taken_0x2b9cc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CC4u;
        // 0x2b9cc8: 0x24020216  addiu       $v0, $zero, 0x216 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 534));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cc4) {
            ctx->pc = 0x2B9CD0u;
            goto label_2b9cd0;
        }
    }
    ctx->pc = 0x2B9CCCu;
label_2b9ccc:
    // 0x2b9ccc: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2b9cccu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2b9cd0:
    // 0x2b9cd0: 0xc0ac626  jal         func_2B1898
label_2b9cd4:
    if (ctx->pc == 0x2B9CD4u) {
        ctx->pc = 0x2B9CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CD0u;
        // 0x2b9cd4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CD8u;
        goto label_2b9cd8;
    }
    ctx->pc = 0x2B9CD0u;
    SET_GPR_U32(ctx, 31, 0x2B9CD8u);
    ctx->pc = 0x2B9CD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CD0u;
    // 0x2b9cd4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1898u, 0x2B9CD0u, 0x2B9CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CD8u;
label_2b9cd8:
    // 0x2b9cd8: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2b9cdc:
    if (ctx->pc == 0x2B9CDCu) {
        ctx->pc = 0x2B9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CD8u;
        // 0x2b9cdc: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CE0u;
        goto label_2b9ce0;
    }
    ctx->pc = 0x2B9CD8u;
    {
        const bool branch_taken_0x2b9cd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CD8u;
        // 0x2b9cdc: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cd8) {
            ctx->pc = 0x2B9CE4u;
            goto label_2b9ce4;
        }
    }
    ctx->pc = 0x2B9CE0u;
label_2b9ce0:
    // 0x2b9ce0: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2b9ce0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2b9ce4:
    // 0x2b9ce4: 0xc0ac626  jal         func_2B1898
label_2b9ce8:
    if (ctx->pc == 0x2B9CE8u) {
        ctx->pc = 0x2B9CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CE4u;
        // 0x2b9ce8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CECu;
        goto label_2b9cec;
    }
    ctx->pc = 0x2B9CE4u;
    SET_GPR_U32(ctx, 31, 0x2B9CECu);
    ctx->pc = 0x2B9CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9CE4u;
    // 0x2b9ce8: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B1898u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B1898u, 0x2B9CE4u, 0x2B9CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9CECu;
label_2b9cec:
    // 0x2b9cec: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b9cf0:
    if (ctx->pc == 0x2B9CF0u) {
        ctx->pc = 0x2B9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CECu;
        // 0x2b9cf0: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9CF4u;
        goto label_2b9cf4;
    }
    ctx->pc = 0x2B9CECu;
    {
        const bool branch_taken_0x2b9cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9CECu;
        // 0x2b9cf0: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9cec) {
            ctx->pc = 0x2B9CFCu;
            goto label_2b9cfc;
        }
    }
    ctx->pc = 0x2B9CF4u;
label_2b9cf4:
    // 0x2b9cf4: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2b9cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2b9cf8:
    // 0x2b9cf8: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2b9cf8u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2b9cfc:
    // 0x2b9cfc: 0x8c6276d8  lw          $v0, 0x76D8($v1)
    ctx->pc = 0x2b9cfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30424)));
label_2b9d00:
    // 0x2b9d00: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b9d04:
    if (ctx->pc == 0x2B9D04u) {
        ctx->pc = 0x2B9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D00u;
        // 0x2b9d04: 0x246476d8  addiu       $a0, $v1, 0x76D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30424));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D08u;
        goto label_2b9d08;
    }
    ctx->pc = 0x2B9D00u;
    {
        const bool branch_taken_0x2b9d00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D00u;
        // 0x2b9d04: 0x246476d8  addiu       $a0, $v1, 0x76D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30424));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d00) {
            ctx->pc = 0x2B9D10u;
            goto label_2b9d10;
        }
    }
    ctx->pc = 0x2B9D08u;
label_2b9d08:
    // 0x2b9d08: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x2b9d08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
label_2b9d0c:
    // 0x2b9d0c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2b9d0cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2b9d10:
    // 0x2b9d10: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b9d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2b9d14:
    // 0x2b9d14: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b9d18:
    if (ctx->pc == 0x2B9D18u) {
        ctx->pc = 0x2B9D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D14u;
        // 0x2b9d18: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D1Cu;
        goto label_2b9d1c;
    }
    ctx->pc = 0x2B9D14u;
    {
        const bool branch_taken_0x2b9d14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d14) {
            ctx->pc = 0x2B9D18u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D14u;
            // 0x2b9d18: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D28u;
            goto label_2b9d28;
        }
    }
    ctx->pc = 0x2B9D1Cu;
label_2b9d1c:
    // 0x2b9d1c: 0x24020800  addiu       $v0, $zero, 0x800
    ctx->pc = 0x2b9d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2b9d20:
    // 0x2b9d20: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2b9d20u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2b9d24:
    // 0x2b9d24: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2b9d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_2b9d28:
    // 0x2b9d28: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b9d2c:
    if (ctx->pc == 0x2B9D2Cu) {
        ctx->pc = 0x2B9D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D28u;
        // 0x2b9d2c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D30u;
        goto label_2b9d30;
    }
    ctx->pc = 0x2B9D28u;
    {
        const bool branch_taken_0x2b9d28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d28) {
            ctx->pc = 0x2B9D2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D28u;
            // 0x2b9d2c: 0x8c82000c  lw          $v0, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D3Cu;
            goto label_2b9d3c;
        }
    }
    ctx->pc = 0x2B9D30u;
label_2b9d30:
    // 0x2b9d30: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x2b9d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2b9d34:
    // 0x2b9d34: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2b9d34u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2b9d38:
    // 0x2b9d38: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x2b9d38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
label_2b9d3c:
    // 0x2b9d3c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b9d40:
    if (ctx->pc == 0x2B9D40u) {
        ctx->pc = 0x2B9D40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D3Cu;
        // 0x2b9d40: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D44u;
        goto label_2b9d44;
    }
    ctx->pc = 0x2B9D3Cu;
    {
        const bool branch_taken_0x2b9d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d3c) {
            ctx->pc = 0x2B9D40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D3Cu;
            // 0x2b9d40: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D50u;
            goto label_2b9d50;
        }
    }
    ctx->pc = 0x2B9D44u;
label_2b9d44:
    // 0x2b9d44: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x2b9d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2b9d48:
    // 0x2b9d48: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2b9d48u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2b9d4c:
    // 0x2b9d4c: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x2b9d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
label_2b9d50:
    // 0x2b9d50: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b9d54:
    if (ctx->pc == 0x2B9D54u) {
        ctx->pc = 0x2B9D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D50u;
        // 0x2b9d54: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D58u;
        goto label_2b9d58;
    }
    ctx->pc = 0x2B9D50u;
    {
        const bool branch_taken_0x2b9d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d50) {
            ctx->pc = 0x2B9D54u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D50u;
            // 0x2b9d54: 0x8c820014  lw          $v0, 0x14($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9D64u;
            goto label_2b9d64;
        }
    }
    ctx->pc = 0x2B9D58u;
label_2b9d58:
    // 0x2b9d58: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2b9d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2b9d5c:
    // 0x2b9d5c: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2b9d5cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2b9d60:
    // 0x2b9d60: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2b9d60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
label_2b9d64:
    // 0x2b9d64: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b9d68:
    if (ctx->pc == 0x2B9D68u) {
        ctx->pc = 0x2B9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D64u;
        // 0x2b9d68: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D6Cu;
        goto label_2b9d6c;
    }
    ctx->pc = 0x2B9D64u;
    {
        const bool branch_taken_0x2b9d64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D64u;
        // 0x2b9d68: 0x3c03003b  lui         $v1, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d64) {
            ctx->pc = 0x2B9D74u;
            goto label_2b9d74;
        }
    }
    ctx->pc = 0x2B9D6Cu;
label_2b9d6c:
    // 0x2b9d6c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2b9d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2b9d70:
    // 0x2b9d70: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2b9d70u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2b9d74:
    // 0x2b9d74: 0x8c6276f8  lw          $v0, 0x76F8($v1)
    ctx->pc = 0x2b9d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 30456)));
label_2b9d78:
    // 0x2b9d78: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2b9d7c:
    if (ctx->pc == 0x2B9D7Cu) {
        ctx->pc = 0x2B9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D78u;
        // 0x2b9d7c: 0x246476f8  addiu       $a0, $v1, 0x76F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30456));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D80u;
        goto label_2b9d80;
    }
    ctx->pc = 0x2B9D78u;
    {
        const bool branch_taken_0x2b9d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D78u;
        // 0x2b9d7c: 0x246476f8  addiu       $a0, $v1, 0x76F8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 30456));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9d78) {
            ctx->pc = 0x2B9D88u;
            goto label_2b9d88;
        }
    }
    ctx->pc = 0x2B9D80u;
label_2b9d80:
    // 0x2b9d80: 0x3c020002  lui         $v0, 0x2
    ctx->pc = 0x2b9d80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2 << 16));
label_2b9d84:
    // 0x2b9d84: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2b9d84u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2b9d88:
    // 0x2b9d88: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2b9d88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2b9d8c:
    // 0x2b9d8c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
label_2b9d90:
    if (ctx->pc == 0x2B9D90u) {
        ctx->pc = 0x2B9D90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9D8Cu;
        // 0x2b9d90: 0x8ee20044  lw          $v0, 0x44($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9D94u;
        goto label_2b9d94;
    }
    ctx->pc = 0x2B9D8Cu;
    {
        const bool branch_taken_0x2b9d8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9d8c) {
            ctx->pc = 0x2B9D90u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9D8Cu;
            // 0x2b9d90: 0x8ee20044  lw          $v0, 0x44($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9DA0u;
            goto label_2b9da0;
        }
    }
    ctx->pc = 0x2B9D94u;
label_2b9d94:
    // 0x2b9d94: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x2b9d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
label_2b9d98:
    // 0x2b9d98: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x2b9d98u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_2b9d9c:
    // 0x2b9d9c: 0x8ee20044  lw          $v0, 0x44($s7)
    ctx->pc = 0x2b9d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 68)));
label_2b9da0:
    // 0x2b9da0: 0x40f809  jalr        $v0
label_2b9da4:
    if (ctx->pc == 0x2B9DA4u) {
        ctx->pc = 0x2B9DA8u;
        goto label_2b9da8;
    }
    ctx->pc = 0x2B9DA0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B9DA8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9DA0u, 0x2B9DA8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9DA8u;
label_2b9da8:
    // 0x2b9da8: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x2b9da8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9dac:
    // 0x2b9dac: 0xc0af004  jal         func_2BC010
label_2b9db0:
    if (ctx->pc == 0x2B9DB0u) {
        ctx->pc = 0x2B9DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DACu;
        // 0x2b9db0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DB4u;
        goto label_2b9db4;
    }
    ctx->pc = 0x2B9DACu;
    SET_GPR_U32(ctx, 31, 0x2B9DB4u);
    ctx->pc = 0x2B9DB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DACu;
    // 0x2b9db0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2B9DACu, 0x2B9DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DB4u;
label_2b9db4:
    // 0x2b9db4: 0x1040025a  beqz        $v0, . + 4 + (0x25A << 2)
label_2b9db8:
    if (ctx->pc == 0x2B9DB8u) {
        ctx->pc = 0x2B9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DB4u;
        // 0x2b9db8: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DBCu;
        goto label_2b9dbc;
    }
    ctx->pc = 0x2B9DB4u;
    {
        const bool branch_taken_0x2b9db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DB4u;
        // 0x2b9db8: 0xafa20070  sw          $v0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9db4) {
            ctx->pc = 0x2BA720u;
            goto label_2ba720;
        }
    }
    ctx->pc = 0x2B9DBCu;
label_2b9dbc:
    // 0x2b9dbc: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2b9dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
label_2b9dc0:
    // 0x2b9dc0: 0xc0af004  jal         func_2BC010
label_2b9dc4:
    if (ctx->pc == 0x2B9DC4u) {
        ctx->pc = 0x2B9DC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DC0u;
        // 0x2b9dc4: 0x24849838  addiu       $a0, $a0, -0x67C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DC8u;
        goto label_2b9dc8;
    }
    ctx->pc = 0x2B9DC0u;
    SET_GPR_U32(ctx, 31, 0x2B9DC8u);
    ctx->pc = 0x2B9DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DC0u;
    // 0x2b9dc4: 0x24849838  addiu       $a0, $a0, -0x67C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2B9DC0u, 0x2B9DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DC8u;
label_2b9dc8:
    // 0x2b9dc8: 0x10400255  beqz        $v0, . + 4 + (0x255 << 2)
label_2b9dcc:
    if (ctx->pc == 0x2B9DCCu) {
        ctx->pc = 0x2B9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DC8u;
        // 0x2b9dcc: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DD0u;
        goto label_2b9dd0;
    }
    ctx->pc = 0x2B9DC8u;
    {
        const bool branch_taken_0x2b9dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DC8u;
        // 0x2b9dcc: 0xafa20088  sw          $v0, 0x88($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9dc8) {
            ctx->pc = 0x2BA720u;
            goto label_2ba720;
        }
    }
    ctx->pc = 0x2B9DD0u;
label_2b9dd0:
    // 0x2b9dd0: 0x3c04002c  lui         $a0, 0x2C
    ctx->pc = 0x2b9dd0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)44 << 16));
label_2b9dd4:
    // 0x2b9dd4: 0xc0af004  jal         func_2BC010
label_2b9dd8:
    if (ctx->pc == 0x2B9DD8u) {
        ctx->pc = 0x2B9DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DD4u;
        // 0x2b9dd8: 0x24849860  addiu       $a0, $a0, -0x67A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DDCu;
        goto label_2b9ddc;
    }
    ctx->pc = 0x2B9DD4u;
    SET_GPR_U32(ctx, 31, 0x2B9DDCu);
    ctx->pc = 0x2B9DD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DD4u;
    // 0x2b9dd8: 0x24849860  addiu       $a0, $a0, -0x67A0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC010u, 0x2B9DD4u, 0x2B9DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DDCu;
label_2b9ddc:
    // 0x2b9ddc: 0x10400250  beqz        $v0, . + 4 + (0x250 << 2)
label_2b9de0:
    if (ctx->pc == 0x2B9DE0u) {
        ctx->pc = 0x2B9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DDCu;
        // 0x2b9de0: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DE4u;
        goto label_2b9de4;
    }
    ctx->pc = 0x2B9DDCu;
    {
        const bool branch_taken_0x2b9ddc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DDCu;
        // 0x2b9de0: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ddc) {
            ctx->pc = 0x2BA720u;
            goto label_2ba720;
        }
    }
    ctx->pc = 0x2B9DE4u;
label_2b9de4:
    // 0x2b9de4: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2b9de4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b9de8:
    // 0x2b9de8: 0x2642018  mult        $a0, $s3, $a0
    ctx->pc = 0x2b9de8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_2b9dec:
    // 0x2b9dec: 0xc0a8bf6  jal         func_2A2FD8
label_2b9df0:
    if (ctx->pc == 0x2B9DF0u) {
        ctx->pc = 0x2B9DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DECu;
        // 0x2b9df0: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DF4u;
        goto label_2b9df4;
    }
    ctx->pc = 0x2B9DECu;
    SET_GPR_U32(ctx, 31, 0x2B9DF4u);
    ctx->pc = 0x2B9DF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9DECu;
    // 0x2b9df0: 0x34840001  ori         $a0, $a0, 0x1 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2B9DECu, 0x2B9DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9DF4u;
label_2b9df4:
    // 0x2b9df4: 0x1040024a  beqz        $v0, . + 4 + (0x24A << 2)
label_2b9df8:
    if (ctx->pc == 0x2B9DF8u) {
        ctx->pc = 0x2B9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DF4u;
        // 0x2b9df8: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9DFCu;
        goto label_2b9dfc;
    }
    ctx->pc = 0x2B9DF4u;
    {
        const bool branch_taken_0x2b9df4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9DF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9DF4u;
        // 0x2b9df8: 0xafa2009c  sw          $v0, 0x9C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 156), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9df4) {
            ctx->pc = 0x2BA720u;
            goto label_2ba720;
        }
    }
    ctx->pc = 0x2B9DFCu;
label_2b9dfc:
    // 0x2b9dfc: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2b9dfcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e00:
    // 0x2b9e00: 0x1a600022  blez        $s3, . + 4 + (0x22 << 2)
label_2b9e04:
    if (ctx->pc == 0x2B9E04u) {
        ctx->pc = 0x2B9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E00u;
        // 0x2b9e04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E08u;
        goto label_2b9e08;
    }
    ctx->pc = 0x2B9E00u;
    {
        const bool branch_taken_0x2b9e00 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2B9E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E00u;
        // 0x2b9e04: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e00) {
            ctx->pc = 0x2B9E8Cu;
            goto label_2b9e8c;
        }
    }
    ctx->pc = 0x2B9E08u;
label_2b9e08:
    // 0x2b9e08: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2b9e08u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e0c:
    // 0x2b9e0c: 0x8ee20048  lw          $v0, 0x48($s7)
    ctx->pc = 0x2b9e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
label_2b9e10:
    // 0x2b9e10: 0x40f809  jalr        $v0
label_2b9e14:
    if (ctx->pc == 0x2B9E14u) {
        ctx->pc = 0x2B9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E10u;
        // 0x2b9e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E18u;
        goto label_2b9e18;
    }
    ctx->pc = 0x2B9E10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2B9E18u);
        ctx->pc = 0x2B9E14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E10u;
        // 0x2b9e14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B9E10u, 0x2B9E18u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2B9E18u;
label_2b9e18:
    // 0x2b9e18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2b9e18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e1c:
    // 0x2b9e1c: 0x52200018  beql        $s1, $zero, . + 4 + (0x18 << 2)
label_2b9e20:
    if (ctx->pc == 0x2B9E20u) {
        ctx->pc = 0x2B9E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E1Cu;
        // 0x2b9e20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E24u;
        goto label_2b9e24;
    }
    ctx->pc = 0x2B9E1Cu;
    {
        const bool branch_taken_0x2b9e1c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e1c) {
            ctx->pc = 0x2B9E20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9E1Cu;
            // 0x2b9e20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E80u;
            goto label_2b9e80;
        }
    }
    ctx->pc = 0x2B9E24u;
label_2b9e24:
    // 0x2b9e24: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2b9e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2b9e28:
    // 0x2b9e28: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
label_2b9e2c:
    if (ctx->pc == 0x2B9E2Cu) {
        ctx->pc = 0x2B9E2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E28u;
        // 0x2b9e2c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E30u;
        goto label_2b9e30;
    }
    ctx->pc = 0x2B9E28u;
    {
        const bool branch_taken_0x2b9e28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e28) {
            ctx->pc = 0x2B9E2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9E28u;
            // 0x2b9e2c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E80u;
            goto label_2b9e80;
        }
    }
    ctx->pc = 0x2B9E30u;
label_2b9e30:
    // 0x2b9e30: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x2b9e30u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_2b9e34:
    // 0x2b9e34: 0x541024  and         $v0, $v0, $s4
    ctx->pc = 0x2b9e34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 20));
label_2b9e38:
    // 0x2b9e38: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
label_2b9e3c:
    if (ctx->pc == 0x2B9E3Cu) {
        ctx->pc = 0x2B9E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E38u;
        // 0x2b9e3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E40u;
        goto label_2b9e40;
    }
    ctx->pc = 0x2B9E38u;
    {
        const bool branch_taken_0x2b9e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e38) {
            ctx->pc = 0x2B9E3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9E38u;
            // 0x2b9e3c: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E80u;
            goto label_2b9e80;
        }
    }
    ctx->pc = 0x2B9E40u;
label_2b9e40:
    // 0x2b9e40: 0xae510000  sw          $s1, 0x0($s2)
    ctx->pc = 0x2b9e40u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 17));
label_2b9e44:
    // 0x2b9e44: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x2b9e44u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
label_2b9e48:
    // 0x2b9e48: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x2b9e48u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
label_2b9e4c:
    // 0x2b9e4c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2b9e4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b9e50:
    // 0x2b9e50: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2b9e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2b9e54:
    // 0x2b9e54: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2b9e54u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2b9e58:
    // 0x2b9e58: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x2b9e58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
label_2b9e5c:
    // 0x2b9e5c: 0xc0af10e  jal         func_2BC438
label_2b9e60:
    if (ctx->pc == 0x2B9E60u) {
        ctx->pc = 0x2B9E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E5Cu;
        // 0x2b9e60: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E64u;
        goto label_2b9e64;
    }
    ctx->pc = 0x2B9E5Cu;
    SET_GPR_U32(ctx, 31, 0x2B9E64u);
    ctx->pc = 0x2B9E60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E5Cu;
    // 0x2b9e60: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC438u, 0x2B9E5Cu, 0x2B9E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E64u;
label_2b9e64:
    // 0x2b9e64: 0x1040022e  beqz        $v0, . + 4 + (0x22E << 2)
label_2b9e68:
    if (ctx->pc == 0x2B9E68u) {
        ctx->pc = 0x2B9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E64u;
        // 0x2b9e68: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E6Cu;
        goto label_2b9e6c;
    }
    ctx->pc = 0x2B9E64u;
    {
        const bool branch_taken_0x2b9e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E64u;
        // 0x2b9e68: 0x8fa4008c  lw          $a0, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e64) {
            ctx->pc = 0x2BA720u;
            goto label_2ba720;
        }
    }
    ctx->pc = 0x2B9E6Cu;
label_2b9e6c:
    // 0x2b9e6c: 0xc0af10e  jal         func_2BC438
label_2b9e70:
    if (ctx->pc == 0x2B9E70u) {
        ctx->pc = 0x2B9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E6Cu;
        // 0x2b9e70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E74u;
        goto label_2b9e74;
    }
    ctx->pc = 0x2B9E6Cu;
    SET_GPR_U32(ctx, 31, 0x2B9E74u);
    ctx->pc = 0x2B9E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9E6Cu;
    // 0x2b9e70: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC438u, 0x2B9E6Cu, 0x2B9E74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9E74u;
label_2b9e74:
    // 0x2b9e74: 0x1040022b  beqz        $v0, . + 4 + (0x22B << 2)
label_2b9e78:
    if (ctx->pc == 0x2B9E78u) {
        ctx->pc = 0x2B9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E74u;
        // 0x2b9e78: 0x8fa90078  lw          $t1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E7Cu;
        goto label_2b9e7c;
    }
    ctx->pc = 0x2B9E74u;
    {
        const bool branch_taken_0x2b9e74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E74u;
        // 0x2b9e78: 0x8fa90078  lw          $t1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e74) {
            ctx->pc = 0x2BA724u;
            goto label_2ba724;
        }
    }
    ctx->pc = 0x2B9E7Cu;
label_2b9e7c:
    // 0x2b9e7c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b9e7cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b9e80:
    // 0x2b9e80: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x2b9e80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
label_2b9e84:
    // 0x2b9e84: 0x5440ffe2  bnel        $v0, $zero, . + 4 + (-0x1E << 2)
label_2b9e88:
    if (ctx->pc == 0x2B9E88u) {
        ctx->pc = 0x2B9E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E84u;
        // 0x2b9e88: 0x8ee20048  lw          $v0, 0x48($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9E8Cu;
        goto label_2b9e8c;
    }
    ctx->pc = 0x2B9E84u;
    {
        const bool branch_taken_0x2b9e84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2b9e84) {
            ctx->pc = 0x2B9E88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9E84u;
            // 0x2b9e88: 0x8ee20048  lw          $v0, 0x48($s7) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 72)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9E10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b9e10;
        }
    }
    ctx->pc = 0x2B9E8Cu;
label_2b9e8c:
    // 0x2b9e8c: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x2b9e8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9e90:
    // 0x2b9e90: 0x26a6ffff  addiu       $a2, $s5, -0x1
    ctx->pc = 0x2b9e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 21), 4294967295));
label_2b9e94:
    // 0x2b9e94: 0x206102a  slt         $v0, $s0, $a2
    ctx->pc = 0x2b9e94u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2b9e98:
    // 0x2b9e98: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2b9e9c:
    if (ctx->pc == 0x2B9E9Cu) {
        ctx->pc = 0x2B9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E98u;
        // 0x2b9e9c: 0x3c08003b  lui         $t0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EA0u;
        goto label_2b9ea0;
    }
    ctx->pc = 0x2B9E98u;
    {
        const bool branch_taken_0x2b9e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9E9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9E98u;
        // 0x2b9e9c: 0x3c08003b  lui         $t0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9e98) {
            ctx->pc = 0x2B9EE4u;
            goto label_2b9ee4;
        }
    }
    ctx->pc = 0x2B9EA0u;
label_2b9ea0:
    // 0x2b9ea0: 0x143827  nor         $a3, $zero, $s4
    ctx->pc = 0x2b9ea0u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_2b9ea4:
    // 0x2b9ea4: 0x0  nop
    ctx->pc = 0x2b9ea4u;
    // NOP
label_2b9ea8:
    // 0x2b9ea8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x2b9ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b9eac:
    // 0x2b9eac: 0x8fa9009c  lw          $t1, 0x9C($sp)
    ctx->pc = 0x2b9eacu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2b9eb0:
    // 0x2b9eb0: 0x2021018  mult        $v0, $s0, $v0
    ctx->pc = 0x2b9eb0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2b9eb4:
    // 0x2b9eb4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2b9eb4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2b9eb8:
    // 0x2b9eb8: 0x206282a  slt         $a1, $s0, $a2
    ctx->pc = 0x2b9eb8u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2b9ebc:
    // 0x2b9ebc: 0x24430014  addiu       $v1, $v0, 0x14
    ctx->pc = 0x2b9ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
label_2b9ec0:
    // 0x2b9ec0: 0x2444ffec  addiu       $a0, $v0, -0x14
    ctx->pc = 0x2b9ec0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
label_2b9ec4:
    // 0x2b9ec4: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x2b9ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
label_2b9ec8:
    // 0x2b9ec8: 0x1242021  addu        $a0, $t1, $a0
    ctx->pc = 0x2b9ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_2b9ecc:
    // 0x2b9ecc: 0x1231821  addu        $v1, $t1, $v1
    ctx->pc = 0x2b9eccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_2b9ed0:
    // 0x2b9ed0: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x2b9ed0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_2b9ed4:
    // 0x2b9ed4: 0x14a0fff4  bnez        $a1, . + 4 + (-0xC << 2)
label_2b9ed8:
    if (ctx->pc == 0x2B9ED8u) {
        ctx->pc = 0x2B9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9ED4u;
        // 0x2b9ed8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EDCu;
        goto label_2b9edc;
    }
    ctx->pc = 0x2B9ED4u;
    {
        const bool branch_taken_0x2b9ed4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9ED4u;
        // 0x2b9ed8: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ed4) {
            ctx->pc = 0x2B9EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b9ea8;
        }
    }
    ctx->pc = 0x2B9EDCu;
label_2b9edc:
    // 0x2b9edc: 0x10000002  b           . + 4 + (0x2 << 2)
label_2b9ee0:
    if (ctx->pc == 0x2B9EE0u) {
        ctx->pc = 0x2B9EE4u;
        goto label_2b9ee4;
    }
    ctx->pc = 0x2B9EDCu;
    {
        const bool branch_taken_0x2b9edc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b9edc) {
            ctx->pc = 0x2B9EE8u;
            goto label_2b9ee8;
        }
    }
    ctx->pc = 0x2B9EE4u;
label_2b9ee4:
    // 0x2b9ee4: 0x143827  nor         $a3, $zero, $s4
    ctx->pc = 0x2b9ee4u;
    SET_GPR_U64(ctx, 7, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 20)));
label_2b9ee8:
    // 0x2b9ee8: 0x1aa00017  blez        $s5, . + 4 + (0x17 << 2)
label_2b9eec:
    if (ctx->pc == 0x2B9EECu) {
        ctx->pc = 0x2B9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EE8u;
        // 0x2b9eec: 0x8fa2009c  lw          $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9EF0u;
        goto label_2b9ef0;
    }
    ctx->pc = 0x2B9EE8u;
    {
        const bool branch_taken_0x2b9ee8 = (GPR_S32(ctx, 21) <= 0);
        ctx->pc = 0x2B9EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9EE8u;
        // 0x2b9eec: 0x8fa2009c  lw          $v0, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9ee8) {
            ctx->pc = 0x2B9F48u;
            goto label_2b9f48;
        }
    }
    ctx->pc = 0x2B9EF0u;
label_2b9ef0:
    // 0x2b9ef0: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x2b9ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2b9ef4:
    // 0x2b9ef4: 0x2a32818  mult        $a1, $s5, $v1
    ctx->pc = 0x2b9ef4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_2b9ef8:
    // 0x2b9ef8: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x2b9ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
label_2b9efc:
    // 0x2b9efc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2b9efcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f00:
    // 0x2b9f00: 0x24620014  addiu       $v0, $v1, 0x14
    ctx->pc = 0x2b9f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
label_2b9f04:
    // 0x2b9f04: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2b9f04u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2b9f08:
    // 0x2b9f08: 0x24a2ffec  addiu       $v0, $a1, -0x14
    ctx->pc = 0x2b9f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967276));
label_2b9f0c:
    // 0x2b9f0c: 0x2aa30002  slti        $v1, $s5, 0x2
    ctx->pc = 0x2b9f0cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)2) ? 1 : 0);
label_2b9f10:
    // 0x2b9f10: 0x8fa4009c  lw          $a0, 0x9C($sp)
    ctx->pc = 0x2b9f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2b9f14:
    // 0x2b9f14: 0xac800010  sw          $zero, 0x10($a0)
    ctx->pc = 0x2b9f14u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
label_2b9f18:
    // 0x2b9f18: 0x8fa6009c  lw          $a2, 0x9C($sp)
    ctx->pc = 0x2b9f18u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2b9f1c:
    // 0x2b9f1c: 0xc22021  addu        $a0, $a2, $v0
    ctx->pc = 0x2b9f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_2b9f20:
    // 0x2b9f20: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2b9f24:
    if (ctx->pc == 0x2B9F24u) {
        ctx->pc = 0x2B9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F20u;
        // 0x2b9f24: 0xafa40064  sw          $a0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F28u;
        goto label_2b9f28;
    }
    ctx->pc = 0x2B9F20u;
    {
        const bool branch_taken_0x2b9f20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F20u;
        // 0x2b9f24: 0xafa40064  sw          $a0, 0x64($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f20) {
            ctx->pc = 0x2B9F30u;
            goto label_2b9f30;
        }
    }
    ctx->pc = 0x2B9F28u;
label_2b9f28:
    // 0x2b9f28: 0x10000005  b           . + 4 + (0x5 << 2)
label_2b9f2c:
    if (ctx->pc == 0x2B9F2Cu) {
        ctx->pc = 0x2B9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F28u;
        // 0x2b9f2c: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F30u;
        goto label_2b9f30;
    }
    ctx->pc = 0x2B9F28u;
    {
        const bool branch_taken_0x2b9f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F28u;
        // 0x2b9f2c: 0xac800010  sw          $zero, 0x10($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f28) {
            ctx->pc = 0x2B9F40u;
            goto label_2b9f40;
        }
    }
    ctx->pc = 0x2B9F30u;
label_2b9f30:
    // 0x2b9f30: 0x8fa9009c  lw          $t1, 0x9C($sp)
    ctx->pc = 0x2b9f30u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2b9f34:
    // 0x2b9f34: 0x24a2ffd8  addiu       $v0, $a1, -0x28
    ctx->pc = 0x2b9f34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967256));
label_2b9f38:
    // 0x2b9f38: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x2b9f38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_2b9f3c:
    // 0x2b9f3c: 0xac820010  sw          $v0, 0x10($a0)
    ctx->pc = 0x2b9f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 16), GPR_U32(ctx, 2));
label_2b9f40:
    // 0x2b9f40: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2b9f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2b9f44:
    // 0x2b9f44: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2b9f44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_2b9f48:
    // 0x2b9f48: 0x25027700  addiu       $v0, $t0, 0x7700
    ctx->pc = 0x2b9f48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 30464));
label_2b9f4c:
    // 0x2b9f4c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2b9f4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f50:
    // 0x2b9f50: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2b9f50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f54:
    // 0x2b9f54: 0xfc470010  sd          $a3, 0x10($v0)
    ctx->pc = 0x2b9f54u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 16), GPR_U64(ctx, 7));
label_2b9f58:
    // 0x2b9f58: 0x26120010  addiu       $s2, $s0, 0x10
    ctx->pc = 0x2b9f58u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_2b9f5c:
    // 0x2b9f5c: 0x0  nop
    ctx->pc = 0x2b9f5cu;
    // NOP
label_2b9f60:
    // 0x2b9f60: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x2b9f60u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9f64:
    // 0x2b9f64: 0x741024  and         $v0, $v1, $s4
    ctx->pc = 0x2b9f64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 20));
label_2b9f68:
    // 0x2b9f68: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
label_2b9f6c:
    if (ctx->pc == 0x2B9F6Cu) {
        ctx->pc = 0x2B9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F68u;
        // 0x2b9f6c: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F70u;
        goto label_2b9f70;
    }
    ctx->pc = 0x2B9F68u;
    {
        const bool branch_taken_0x2b9f68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x2B9F6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F68u;
        // 0x2b9f6c: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f68) {
            ctx->pc = 0x2B9F80u;
            goto label_2b9f80;
        }
    }
    ctx->pc = 0x2B9F70u;
label_2b9f70:
    // 0x2b9f70: 0xc0af10e  jal         func_2BC438
label_2b9f74:
    if (ctx->pc == 0x2B9F74u) {
        ctx->pc = 0x2B9F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F70u;
        // 0x2b9f74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F78u;
        goto label_2b9f78;
    }
    ctx->pc = 0x2B9F70u;
    SET_GPR_U32(ctx, 31, 0x2B9F78u);
    ctx->pc = 0x2B9F74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9F70u;
    // 0x2b9f74: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC438u, 0x2B9F70u, 0x2B9F78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B9F78u;
label_2b9f78:
    // 0x2b9f78: 0x104001ea  beqz        $v0, . + 4 + (0x1EA << 2)
label_2b9f7c:
    if (ctx->pc == 0x2B9F7Cu) {
        ctx->pc = 0x2B9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F78u;
        // 0x2b9f7c: 0x8fa90078  lw          $t1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F80u;
        goto label_2b9f80;
    }
    ctx->pc = 0x2B9F78u;
    {
        const bool branch_taken_0x2b9f78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F78u;
        // 0x2b9f7c: 0x8fa90078  lw          $t1, 0x78($sp) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f78) {
            ctx->pc = 0x2BA724u;
            goto label_2ba724;
        }
    }
    ctx->pc = 0x2B9F80u;
label_2b9f80:
    // 0x2b9f80: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x2b9f80u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2b9f84:
    // 0x2b9f84: 0x26100028  addiu       $s0, $s0, 0x28
    ctx->pc = 0x2b9f84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 40));
label_2b9f88:
    // 0x2b9f88: 0x2a220025  slti        $v0, $s1, 0x25
    ctx->pc = 0x2b9f88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)37) ? 1 : 0);
label_2b9f8c:
    // 0x2b9f8c: 0x1440fff4  bnez        $v0, . + 4 + (-0xC << 2)
label_2b9f90:
    if (ctx->pc == 0x2B9F90u) {
        ctx->pc = 0x2B9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F8Cu;
        // 0x2b9f90: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9F94u;
        goto label_2b9f94;
    }
    ctx->pc = 0x2B9F8Cu;
    {
        const bool branch_taken_0x2b9f8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9F90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9F8Cu;
        // 0x2b9f90: 0x26520028  addiu       $s2, $s2, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9f8c) {
            ctx->pc = 0x2B9F60u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b9f60;
        }
    }
    ctx->pc = 0x2B9F94u;
label_2b9f94:
    // 0x2b9f94: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x2b9f94u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2b9f98:
    // 0x2b9f98: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2b9f98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2b9f9c:
    // 0x2b9f9c: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2b9f9cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9fa0:
    // 0x2b9fa0: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
label_2b9fa4:
    if (ctx->pc == 0x2B9FA4u) {
        ctx->pc = 0x2B9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA0u;
        // 0x2b9fa4: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FA8u;
        goto label_2b9fa8;
    }
    ctx->pc = 0x2B9FA0u;
    {
        const bool branch_taken_0x2b9fa0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B9FA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FA0u;
        // 0x2b9fa4: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fa0) {
            ctx->pc = 0x2B9FF4u;
            goto label_2b9ff4;
        }
    }
    ctx->pc = 0x2B9FA8u;
label_2b9fa8:
    // 0x2b9fa8: 0x2407003a  addiu       $a3, $zero, 0x3A
    ctx->pc = 0x2b9fa8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2b9fac:
    // 0x2b9fac: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2b9facu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2b9fb0:
    // 0x2b9fb0: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2b9fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2b9fb4:
    // 0x2b9fb4: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2b9fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2b9fb8:
    // 0x2b9fb8: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2b9fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2b9fbc:
    // 0x2b9fbc: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2b9fbcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2b9fc0:
    // 0x2b9fc0: 0x50470008  beql        $v0, $a3, . + 4 + (0x8 << 2)
label_2b9fc4:
    if (ctx->pc == 0x2B9FC4u) {
        ctx->pc = 0x2B9FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FC0u;
        // 0x2b9fc4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FC8u;
        goto label_2b9fc8;
    }
    ctx->pc = 0x2B9FC0u;
    {
        const bool branch_taken_0x2b9fc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2b9fc0) {
            ctx->pc = 0x2B9FC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9FC0u;
            // 0x2b9fc4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9FE4u;
            goto label_2b9fe4;
        }
    }
    ctx->pc = 0x2B9FC8u;
label_2b9fc8:
    // 0x2b9fc8: 0x50460006  beql        $v0, $a2, . + 4 + (0x6 << 2)
label_2b9fcc:
    if (ctx->pc == 0x2B9FCCu) {
        ctx->pc = 0x2B9FCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FC8u;
        // 0x2b9fcc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FD0u;
        goto label_2b9fd0;
    }
    ctx->pc = 0x2B9FC8u;
    {
        const bool branch_taken_0x2b9fc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2b9fc8) {
            ctx->pc = 0x2B9FCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9FC8u;
            // 0x2b9fcc: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9FE4u;
            goto label_2b9fe4;
        }
    }
    ctx->pc = 0x2B9FD0u;
label_2b9fd0:
    // 0x2b9fd0: 0x50450004  beql        $v0, $a1, . + 4 + (0x4 << 2)
label_2b9fd4:
    if (ctx->pc == 0x2B9FD4u) {
        ctx->pc = 0x2B9FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FD0u;
        // 0x2b9fd4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FD8u;
        goto label_2b9fd8;
    }
    ctx->pc = 0x2B9FD0u;
    {
        const bool branch_taken_0x2b9fd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2b9fd0) {
            ctx->pc = 0x2B9FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9FD0u;
            // 0x2b9fd4: 0x26730001  addiu       $s3, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9FE4u;
            goto label_2b9fe4;
        }
    }
    ctx->pc = 0x2B9FD8u;
label_2b9fd8:
    // 0x2b9fd8: 0x54440003  bnel        $v0, $a0, . + 4 + (0x3 << 2)
label_2b9fdc:
    if (ctx->pc == 0x2B9FDCu) {
        ctx->pc = 0x2B9FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FD8u;
        // 0x2b9fdc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FE0u;
        goto label_2b9fe0;
    }
    ctx->pc = 0x2B9FD8u;
    {
        const bool branch_taken_0x2b9fd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x2b9fd8) {
            ctx->pc = 0x2B9FDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2B9FD8u;
            // 0x2b9fdc: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2B9FE8u;
            goto label_2b9fe8;
        }
    }
    ctx->pc = 0x2B9FE0u;
label_2b9fe0:
    // 0x2b9fe0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x2b9fe0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_2b9fe4:
    // 0x2b9fe4: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2b9fe4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2b9fe8:
    // 0x2b9fe8: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2b9fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2b9fec:
    // 0x2b9fec: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
label_2b9ff0:
    if (ctx->pc == 0x2B9FF0u) {
        ctx->pc = 0x2B9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FECu;
        // 0x2b9ff0: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2B9FF4u;
        goto label_2b9ff4;
    }
    ctx->pc = 0x2B9FECu;
    {
        const bool branch_taken_0x2b9fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2B9FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FECu;
        // 0x2b9ff0: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b9fec) {
            ctx->pc = 0x2B9FB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2b9fb8;
        }
    }
    ctx->pc = 0x2B9FF4u;
label_2b9ff4:
    // 0x2b9ff4: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2b9ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2b9ff8:
    // 0x2b9ff8: 0x2628018  mult        $s0, $s3, $v0
    ctx->pc = 0x2b9ff8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 19) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
label_2b9ffc:
    // 0x2b9ffc: 0xc0a8bf6  jal         func_2A2FD8
label_2ba000:
    if (ctx->pc == 0x2BA000u) {
        ctx->pc = 0x2BA000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2B9FFCu;
        // 0x2ba000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA004u;
        goto label_2ba004;
    }
    ctx->pc = 0x2B9FFCu;
    SET_GPR_U32(ctx, 31, 0x2BA004u);
    ctx->pc = 0x2BA000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2B9FFCu;
    // 0x2ba000: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2B9FFCu, 0x2BA004u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA004u;
label_2ba004:
    // 0x2ba004: 0x104001c6  beqz        $v0, . + 4 + (0x1C6 << 2)
label_2ba008:
    if (ctx->pc == 0x2BA008u) {
        ctx->pc = 0x2BA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA004u;
        // 0x2ba008: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA00Cu;
        goto label_2ba00c;
    }
    ctx->pc = 0x2BA004u;
    {
        const bool branch_taken_0x2ba004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA004u;
        // 0x2ba008: 0xafa20098  sw          $v0, 0x98($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 152), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba004) {
            ctx->pc = 0x2BA720u;
            goto label_2ba720;
        }
    }
    ctx->pc = 0x2BA00Cu;
label_2ba00c:
    // 0x2ba00c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2ba00cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba010:
    // 0x2ba010: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba010u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba014:
    // 0x2ba014: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2ba014u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba018:
    // 0x2ba018: 0xc049cb6  jal         func_1272D8
label_2ba01c:
    if (ctx->pc == 0x2BA01Cu) {
        ctx->pc = 0x2BA01Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA018u;
        // 0x2ba01c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA020u;
        goto label_2ba020;
    }
    ctx->pc = 0x2BA018u;
    SET_GPR_U32(ctx, 31, 0x2BA020u);
    ctx->pc = 0x2BA01Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA018u;
    // 0x2ba01c: 0x2c0902d  daddu       $s2, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1272D8u, 0x2BA018u, 0x2BA020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA020u;
label_2ba020:
    // 0x2ba020: 0xafa00090  sw          $zero, 0x90($sp)
    ctx->pc = 0x2ba020u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 0));
label_2ba024:
    // 0x2ba024: 0x82530000  lb          $s3, 0x0($s2)
    ctx->pc = 0x2ba024u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba028:
    // 0x2ba028: 0x12600125  beqz        $s3, . + 4 + (0x125 << 2)
label_2ba02c:
    if (ctx->pc == 0x2BA02Cu) {
        ctx->pc = 0x2BA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA028u;
        // 0x2ba02c: 0x8fa80090  lw          $t0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA030u;
        goto label_2ba030;
    }
    ctx->pc = 0x2BA028u;
    {
        const bool branch_taken_0x2ba028 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA028u;
        // 0x2ba02c: 0x8fa80090  lw          $t0, 0x90($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba028) {
            ctx->pc = 0x2BA4C0u;
            goto label_2ba4c0;
        }
    }
    ctx->pc = 0x2BA030u;
label_2ba030:
    // 0x2ba030: 0x2402002d  addiu       $v0, $zero, 0x2D
    ctx->pc = 0x2ba030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2ba034:
    // 0x2ba034: 0x0  nop
    ctx->pc = 0x2ba034u;
    // NOP
label_2ba038:
    // 0x2ba038: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_2ba03c:
    if (ctx->pc == 0x2BA03Cu) {
        ctx->pc = 0x2BA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA038u;
        // 0x2ba03c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA040u;
        goto label_2ba040;
    }
    ctx->pc = 0x2BA038u;
    {
        const bool branch_taken_0x2ba038 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA038u;
        // 0x2ba03c: 0x2402002b  addiu       $v0, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba038) {
            ctx->pc = 0x2BA04Cu;
            goto label_2ba04c;
        }
    }
    ctx->pc = 0x2BA040u;
label_2ba040:
    // 0x2ba040: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x2ba040u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2ba044:
    // 0x2ba044: 0x1000000a  b           . + 4 + (0xA << 2)
label_2ba048:
    if (ctx->pc == 0x2BA048u) {
        ctx->pc = 0x2BA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA044u;
        // 0x2ba048: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA04Cu;
        goto label_2ba04c;
    }
    ctx->pc = 0x2BA044u;
    {
        const bool branch_taken_0x2ba044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA044u;
        // 0x2ba048: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba044) {
            ctx->pc = 0x2BA070u;
            goto label_2ba070;
        }
    }
    ctx->pc = 0x2BA04Cu;
label_2ba04c:
    // 0x2ba04c: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
label_2ba050:
    if (ctx->pc == 0x2BA050u) {
        ctx->pc = 0x2BA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA04Cu;
        // 0x2ba050: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA054u;
        goto label_2ba054;
    }
    ctx->pc = 0x2BA04Cu;
    {
        const bool branch_taken_0x2ba04c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA04Cu;
        // 0x2ba050: 0x24020021  addiu       $v0, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba04c) {
            ctx->pc = 0x2BA060u;
            goto label_2ba060;
        }
    }
    ctx->pc = 0x2BA054u;
label_2ba054:
    // 0x2ba054: 0x24070004  addiu       $a3, $zero, 0x4
    ctx->pc = 0x2ba054u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2ba058:
    // 0x2ba058: 0x10000005  b           . + 4 + (0x5 << 2)
label_2ba05c:
    if (ctx->pc == 0x2BA05Cu) {
        ctx->pc = 0x2BA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA058u;
        // 0x2ba05c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA060u;
        goto label_2ba060;
    }
    ctx->pc = 0x2BA058u;
    {
        const bool branch_taken_0x2ba058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA05Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA058u;
        // 0x2ba05c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba058) {
            ctx->pc = 0x2BA070u;
            goto label_2ba070;
        }
    }
    ctx->pc = 0x2BA060u;
label_2ba060:
    // 0x2ba060: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
label_2ba064:
    if (ctx->pc == 0x2BA064u) {
        ctx->pc = 0x2BA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA060u;
        // 0x2ba064: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA068u;
        goto label_2ba068;
    }
    ctx->pc = 0x2BA060u;
    {
        const bool branch_taken_0x2ba060 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA060u;
        // 0x2ba064: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba060) {
            ctx->pc = 0x2BA070u;
            goto label_2ba070;
        }
    }
    ctx->pc = 0x2BA068u;
label_2ba068:
    // 0x2ba068: 0x24070002  addiu       $a3, $zero, 0x2
    ctx->pc = 0x2ba068u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ba06c:
    // 0x2ba06c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ba06cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ba070:
    // 0x2ba070: 0x2402003a  addiu       $v0, $zero, 0x3A
    ctx->pc = 0x2ba070u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2ba074:
    // 0x2ba074: 0x12620007  beq         $s3, $v0, . + 4 + (0x7 << 2)
label_2ba078:
    if (ctx->pc == 0x2BA078u) {
        ctx->pc = 0x2BA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA074u;
        // 0x2ba078: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA07Cu;
        goto label_2ba07c;
    }
    ctx->pc = 0x2BA074u;
    {
        const bool branch_taken_0x2ba074 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA074u;
        // 0x2ba078: 0x24030020  addiu       $v1, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba074) {
            ctx->pc = 0x2BA094u;
            goto label_2ba094;
        }
    }
    ctx->pc = 0x2BA07Cu;
label_2ba07c:
    // 0x2ba07c: 0x12630005  beq         $s3, $v1, . + 4 + (0x5 << 2)
label_2ba080:
    if (ctx->pc == 0x2BA080u) {
        ctx->pc = 0x2BA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA07Cu;
        // 0x2ba080: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA084u;
        goto label_2ba084;
    }
    ctx->pc = 0x2BA07Cu;
    {
        const bool branch_taken_0x2ba07c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BA080u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA07Cu;
        // 0x2ba080: 0x2404003b  addiu       $a0, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba07c) {
            ctx->pc = 0x2BA094u;
            goto label_2ba094;
        }
    }
    ctx->pc = 0x2BA084u;
label_2ba084:
    // 0x2ba084: 0x12640003  beq         $s3, $a0, . + 4 + (0x3 << 2)
label_2ba088:
    if (ctx->pc == 0x2BA088u) {
        ctx->pc = 0x2BA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA084u;
        // 0x2ba088: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA08Cu;
        goto label_2ba08c;
    }
    ctx->pc = 0x2BA084u;
    {
        const bool branch_taken_0x2ba084 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 4));
        ctx->pc = 0x2BA088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA084u;
        // 0x2ba088: 0x2406002c  addiu       $a2, $zero, 0x2C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba084) {
            ctx->pc = 0x2BA094u;
            goto label_2ba094;
        }
    }
    ctx->pc = 0x2BA08Cu;
label_2ba08c:
    // 0x2ba08c: 0x16660004  bne         $s3, $a2, . + 4 + (0x4 << 2)
label_2ba090:
    if (ctx->pc == 0x2BA090u) {
        ctx->pc = 0x2BA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA08Cu;
        // 0x2ba090: 0x8fa30098  lw          $v1, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA094u;
        goto label_2ba094;
    }
    ctx->pc = 0x2BA08Cu;
    {
        const bool branch_taken_0x2ba08c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 6));
        ctx->pc = 0x2BA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA08Cu;
        // 0x2ba090: 0x8fa30098  lw          $v1, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba08c) {
            ctx->pc = 0x2BA0A0u;
            goto label_2ba0a0;
        }
    }
    ctx->pc = 0x2BA094u;
label_2ba094:
    // 0x2ba094: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ba094u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ba098:
    // 0x2ba098: 0x10000104  b           . + 4 + (0x104 << 2)
label_2ba09c:
    if (ctx->pc == 0x2BA09Cu) {
        ctx->pc = 0x2BA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA098u;
        // 0x2ba09c: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0A0u;
        goto label_2ba0a0;
    }
    ctx->pc = 0x2BA098u;
    {
        const bool branch_taken_0x2ba098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA09Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA098u;
        // 0x2ba09c: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba098) {
            ctx->pc = 0x2BA4ACu;
            goto label_2ba4ac;
        }
    }
    ctx->pc = 0x2BA0A0u;
label_2ba0a0:
    // 0x2ba0a0: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2ba0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2ba0a4:
    // 0x2ba0a4: 0x2408002d  addiu       $t0, $zero, 0x2D
    ctx->pc = 0x2ba0a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
label_2ba0a8:
    // 0x2ba0a8: 0x2416003a  addiu       $s6, $zero, 0x3A
    ctx->pc = 0x2ba0a8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2ba0ac:
    // 0x2ba0ac: 0x600013  mtlo        $v1
    ctx->pc = 0x2ba0acu;
    ctx->lo = GPR_U64(ctx, 3);
label_2ba0b0:
    // 0x2ba0b0: 0x24170020  addiu       $s7, $zero, 0x20
    ctx->pc = 0x2ba0b0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ba0b4:
    // 0x2ba0b4: 0x8fa30090  lw          $v1, 0x90($sp)
    ctx->pc = 0x2ba0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2ba0b8:
    // 0x2ba0b8: 0x241e003b  addiu       $fp, $zero, 0x3B
    ctx->pc = 0x2ba0b8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2ba0bc:
    // 0x2ba0bc: 0x2406002c  addiu       $a2, $zero, 0x2C
    ctx->pc = 0x2ba0bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2ba0c0:
    // 0x2ba0c0: 0x7062a000  madd        $s4, $v1, $v0
    ctx->pc = 0x2ba0c0u;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 20, (int32_t)result); }
label_2ba0c4:
    // 0x2ba0c4: 0x82530000  lb          $s3, 0x0($s2)
    ctx->pc = 0x2ba0c4u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba0c8:
    // 0x2ba0c8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2ba0c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba0cc:
    // 0x2ba0cc: 0x0  nop
    ctx->pc = 0x2ba0ccu;
    // NOP
label_2ba0d0:
    // 0x2ba0d0: 0x2662ffbf  addiu       $v0, $s3, -0x41
    ctx->pc = 0x2ba0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967231));
label_2ba0d4:
    // 0x2ba0d4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2ba0d4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_2ba0d8:
    // 0x2ba0d8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
label_2ba0dc:
    if (ctx->pc == 0x2BA0DCu) {
        ctx->pc = 0x2BA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0D8u;
        // 0x2ba0dc: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0E0u;
        goto label_2ba0e0;
    }
    ctx->pc = 0x2BA0D8u;
    {
        const bool branch_taken_0x2ba0d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0D8u;
        // 0x2ba0dc: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0d8) {
            ctx->pc = 0x2BA108u;
            goto label_2ba108;
        }
    }
    ctx->pc = 0x2BA0E0u;
label_2ba0e0:
    // 0x2ba0e0: 0x2662ffd0  addiu       $v0, $s3, -0x30
    ctx->pc = 0x2ba0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967248));
label_2ba0e4:
    // 0x2ba0e4: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ba0e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2ba0e8:
    // 0x2ba0e8: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2ba0ec:
    if (ctx->pc == 0x2BA0ECu) {
        ctx->pc = 0x2BA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0E8u;
        // 0x2ba0ec: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA0F0u;
        goto label_2ba0f0;
    }
    ctx->pc = 0x2BA0E8u;
    {
        const bool branch_taken_0x2ba0e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0E8u;
        // 0x2ba0ec: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0e8) {
            ctx->pc = 0x2BA108u;
            goto label_2ba108;
        }
    }
    ctx->pc = 0x2BA0F0u;
label_2ba0f0:
    // 0x2ba0f0: 0x2662ff9f  addiu       $v0, $s3, -0x61
    ctx->pc = 0x2ba0f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967199));
label_2ba0f4:
    // 0x2ba0f4: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2ba0f4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_2ba0f8:
    // 0x2ba0f8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2ba0fc:
    if (ctx->pc == 0x2BA0FCu) {
        ctx->pc = 0x2BA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0F8u;
        // 0x2ba0fc: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA100u;
        goto label_2ba100;
    }
    ctx->pc = 0x2BA0F8u;
    {
        const bool branch_taken_0x2ba0f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA0FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA0F8u;
        // 0x2ba0fc: 0x3b01021  addu        $v0, $sp, $s0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba0f8) {
            ctx->pc = 0x2BA108u;
            goto label_2ba108;
        }
    }
    ctx->pc = 0x2BA100u;
label_2ba100:
    // 0x2ba100: 0x16680009  bne         $s3, $t0, . + 4 + (0x9 << 2)
label_2ba104:
    if (ctx->pc == 0x2BA104u) {
        ctx->pc = 0x2BA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA100u;
        // 0x2ba104: 0x2403002b  addiu       $v1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA108u;
        goto label_2ba108;
    }
    ctx->pc = 0x2BA100u;
    {
        const bool branch_taken_0x2ba100 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 8));
        ctx->pc = 0x2BA104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA100u;
        // 0x2ba104: 0x2403002b  addiu       $v1, $zero, 0x2B (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba100) {
            ctx->pc = 0x2BA128u;
            goto label_2ba128;
        }
    }
    ctx->pc = 0x2BA108u;
label_2ba108:
    // 0x2ba108: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ba108u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ba10c:
    // 0x2ba10c: 0xa0530000  sb          $s3, 0x0($v0)
    ctx->pc = 0x2ba10cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 19));
label_2ba110:
    // 0x2ba110: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2ba110u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2ba114:
    // 0x2ba114: 0x2a020026  slti        $v0, $s0, 0x26
    ctx->pc = 0x2ba114u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)38) ? 1 : 0);
label_2ba118:
    // 0x2ba118: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
label_2ba11c:
    if (ctx->pc == 0x2BA11Cu) {
        ctx->pc = 0x2BA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA118u;
        // 0x2ba11c: 0x82530000  lb          $s3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA120u;
        goto label_2ba120;
    }
    ctx->pc = 0x2BA118u;
    {
        const bool branch_taken_0x2ba118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA11Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA118u;
        // 0x2ba11c: 0x82530000  lb          $s3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba118) {
            ctx->pc = 0x2BA0D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba0d0;
        }
    }
    ctx->pc = 0x2BA120u;
label_2ba120:
    // 0x2ba120: 0x3b01021  addu        $v0, $sp, $s0
    ctx->pc = 0x2ba120u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 16)));
label_2ba124:
    // 0x2ba124: 0x2403002b  addiu       $v1, $zero, 0x2B
    ctx->pc = 0x2ba124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
label_2ba128:
    // 0x2ba128: 0x1663002e  bne         $s3, $v1, . + 4 + (0x2E << 2)
label_2ba12c:
    if (ctx->pc == 0x2BA12Cu) {
        ctx->pc = 0x2BA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA128u;
        // 0x2ba12c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA130u;
        goto label_2ba130;
    }
    ctx->pc = 0x2BA128u;
    {
        const bool branch_taken_0x2ba128 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BA12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA128u;
        // 0x2ba12c: 0xa0400000  sb          $zero, 0x0($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba128) {
            ctx->pc = 0x2BA1E4u;
            goto label_2ba1e4;
        }
    }
    ctx->pc = 0x2BA130u;
label_2ba130:
    // 0x2ba130: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ba130u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ba134:
    // 0x2ba134: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2ba134u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba138:
    // 0x2ba138: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x2ba138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
label_2ba13c:
    // 0x2ba13c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2ba13cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_2ba140:
    // 0x2ba140: 0x14400056  bnez        $v0, . + 4 + (0x56 << 2)
label_2ba144:
    if (ctx->pc == 0x2BA144u) {
        ctx->pc = 0x2BA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA140u;
        // 0x2ba144: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA148u;
        goto label_2ba148;
    }
    ctx->pc = 0x2BA140u;
    {
        const bool branch_taken_0x2ba140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA140u;
        // 0x2ba144: 0x24150001  addiu       $s5, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba140) {
            ctx->pc = 0x2BA29Cu;
            goto label_2ba29c;
        }
    }
    ctx->pc = 0x2BA148u;
label_2ba148:
    // 0x2ba148: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x2ba148u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_2ba14c:
    // 0x2ba14c: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ba14cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2ba150:
    // 0x2ba150: 0x54400053  bnel        $v0, $zero, . + 4 + (0x53 << 2)
label_2ba154:
    if (ctx->pc == 0x2BA154u) {
        ctx->pc = 0x2BA154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA150u;
        // 0x2ba154: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA158u;
        goto label_2ba158;
    }
    ctx->pc = 0x2BA150u;
    {
        const bool branch_taken_0x2ba150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba150) {
            ctx->pc = 0x2BA154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA150u;
            // 0x2ba154: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA2A0u;
            goto label_2ba2a0;
        }
    }
    ctx->pc = 0x2BA158u;
label_2ba158:
    // 0x2ba158: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x2ba158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
label_2ba15c:
    // 0x2ba15c: 0x2c42001a  sltiu       $v0, $v0, 0x1A
    ctx->pc = 0x2ba15cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)26) ? 1 : 0);
label_2ba160:
    // 0x2ba160: 0x5440004f  bnel        $v0, $zero, . + 4 + (0x4F << 2)
label_2ba164:
    if (ctx->pc == 0x2BA164u) {
        ctx->pc = 0x2BA164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA160u;
        // 0x2ba164: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA168u;
        goto label_2ba168;
    }
    ctx->pc = 0x2BA160u;
    {
        const bool branch_taken_0x2ba160 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba160) {
            ctx->pc = 0x2BA164u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA160u;
            // 0x2ba164: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA2A0u;
            goto label_2ba2a0;
        }
    }
    ctx->pc = 0x2BA168u;
label_2ba168:
    // 0x2ba168: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2ba168u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2ba16c:
    // 0x2ba16c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ba16cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2ba170:
    // 0x2ba170: 0x5048004b  beql        $v0, $t0, . + 4 + (0x4B << 2)
label_2ba174:
    if (ctx->pc == 0x2BA174u) {
        ctx->pc = 0x2BA174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA170u;
        // 0x2ba174: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA178u;
        goto label_2ba178;
    }
    ctx->pc = 0x2BA170u;
    {
        const bool branch_taken_0x2ba170 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 8));
        if (branch_taken_0x2ba170) {
            ctx->pc = 0x2BA174u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA170u;
            // 0x2ba174: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA2A0u;
            goto label_2ba2a0;
        }
    }
    ctx->pc = 0x2BA178u;
label_2ba178:
    // 0x2ba178: 0x505600ad  beql        $v0, $s6, . + 4 + (0xAD << 2)
label_2ba17c:
    if (ctx->pc == 0x2BA17Cu) {
        ctx->pc = 0x2BA17Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA178u;
        // 0x2ba17c: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA180u;
        goto label_2ba180;
    }
    ctx->pc = 0x2BA178u;
    {
        const bool branch_taken_0x2ba178 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ba178) {
            ctx->pc = 0x2BA17Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA178u;
            // 0x2ba17c: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA180u;
label_2ba180:
    // 0x2ba180: 0x505700ab  beql        $v0, $s7, . + 4 + (0xAB << 2)
label_2ba184:
    if (ctx->pc == 0x2BA184u) {
        ctx->pc = 0x2BA184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA180u;
        // 0x2ba184: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA188u;
        goto label_2ba188;
    }
    ctx->pc = 0x2BA180u;
    {
        const bool branch_taken_0x2ba180 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x2ba180) {
            ctx->pc = 0x2BA184u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA180u;
            // 0x2ba184: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA188u;
label_2ba188:
    // 0x2ba188: 0x505e00a9  beql        $v0, $fp, . + 4 + (0xA9 << 2)
label_2ba18c:
    if (ctx->pc == 0x2BA18Cu) {
        ctx->pc = 0x2BA18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA188u;
        // 0x2ba18c: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA190u;
        goto label_2ba190;
    }
    ctx->pc = 0x2BA188u;
    {
        const bool branch_taken_0x2ba188 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x2ba188) {
            ctx->pc = 0x2BA18Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA188u;
            // 0x2ba18c: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA190u;
label_2ba190:
    // 0x2ba190: 0x504600a7  beql        $v0, $a2, . + 4 + (0xA7 << 2)
label_2ba194:
    if (ctx->pc == 0x2BA194u) {
        ctx->pc = 0x2BA194u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA190u;
        // 0x2ba194: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA198u;
        goto label_2ba198;
    }
    ctx->pc = 0x2BA190u;
    {
        const bool branch_taken_0x2ba190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ba190) {
            ctx->pc = 0x2BA194u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA190u;
            // 0x2ba194: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA198u;
label_2ba198:
    // 0x2ba198: 0x104000c4  beqz        $v0, . + 4 + (0xC4 << 2)
label_2ba19c:
    if (ctx->pc == 0x2BA19Cu) {
        ctx->pc = 0x2BA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA198u;
        // 0x2ba19c: 0x2407003a  addiu       $a3, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1A0u;
        goto label_2ba1a0;
    }
    ctx->pc = 0x2BA198u;
    {
        const bool branch_taken_0x2ba198 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA198u;
        // 0x2ba19c: 0x2407003a  addiu       $a3, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba198) {
            ctx->pc = 0x2BA4ACu;
            goto label_2ba4ac;
        }
    }
    ctx->pc = 0x2BA1A0u;
label_2ba1a0:
    // 0x2ba1a0: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2ba1a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ba1a4:
    // 0x2ba1a4: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2ba1a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2ba1a8:
    // 0x2ba1a8: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2ba1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2ba1ac:
    // 0x2ba1ac: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ba1acu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ba1b0:
    // 0x2ba1b0: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2ba1b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba1b4:
    // 0x2ba1b4: 0x1047009d  beq         $v0, $a3, . + 4 + (0x9D << 2)
label_2ba1b8:
    if (ctx->pc == 0x2BA1B8u) {
        ctx->pc = 0x2BA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1B4u;
        // 0x2ba1b8: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1BCu;
        goto label_2ba1bc;
    }
    ctx->pc = 0x2BA1B4u;
    {
        const bool branch_taken_0x2ba1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA1B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1B4u;
        // 0x2ba1b8: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1b4) {
            ctx->pc = 0x2BA42Cu;
            goto label_2ba42c;
        }
    }
    ctx->pc = 0x2BA1BCu;
label_2ba1bc:
    // 0x2ba1bc: 0x5046009c  beql        $v0, $a2, . + 4 + (0x9C << 2)
label_2ba1c0:
    if (ctx->pc == 0x2BA1C0u) {
        ctx->pc = 0x2BA1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1BCu;
        // 0x2ba1c0: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1C4u;
        goto label_2ba1c4;
    }
    ctx->pc = 0x2BA1BCu;
    {
        const bool branch_taken_0x2ba1bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ba1bc) {
            ctx->pc = 0x2BA1C0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA1BCu;
            // 0x2ba1c0: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA1C4u;
label_2ba1c4:
    // 0x2ba1c4: 0x5045009a  beql        $v0, $a1, . + 4 + (0x9A << 2)
label_2ba1c8:
    if (ctx->pc == 0x2BA1C8u) {
        ctx->pc = 0x2BA1C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1C4u;
        // 0x2ba1c8: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1CCu;
        goto label_2ba1cc;
    }
    ctx->pc = 0x2BA1C4u;
    {
        const bool branch_taken_0x2ba1c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ba1c4) {
            ctx->pc = 0x2BA1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA1C4u;
            // 0x2ba1c8: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA1CCu;
label_2ba1cc:
    // 0x2ba1cc: 0x50440098  beql        $v0, $a0, . + 4 + (0x98 << 2)
label_2ba1d0:
    if (ctx->pc == 0x2BA1D0u) {
        ctx->pc = 0x2BA1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1CCu;
        // 0x2ba1d0: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1D4u;
        goto label_2ba1d4;
    }
    ctx->pc = 0x2BA1CCu;
    {
        const bool branch_taken_0x2ba1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ba1cc) {
            ctx->pc = 0x2BA1D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA1CCu;
            // 0x2ba1d0: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA1D4u;
label_2ba1d4:
    // 0x2ba1d4: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_2ba1d8:
    if (ctx->pc == 0x2BA1D8u) {
        ctx->pc = 0x2BA1D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1D4u;
        // 0x2ba1d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1DCu;
        goto label_2ba1dc;
    }
    ctx->pc = 0x2BA1D4u;
    {
        const bool branch_taken_0x2ba1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba1d4) {
            ctx->pc = 0x2BA1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA1D4u;
            // 0x2ba1d8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA1B0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba1b0;
        }
    }
    ctx->pc = 0x2BA1DCu;
label_2ba1dc:
    // 0x2ba1dc: 0x10000094  b           . + 4 + (0x94 << 2)
label_2ba1e0:
    if (ctx->pc == 0x2BA1E0u) {
        ctx->pc = 0x2BA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1DCu;
        // 0x2ba1e0: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1E4u;
        goto label_2ba1e4;
    }
    ctx->pc = 0x2BA1DCu;
    {
        const bool branch_taken_0x2ba1dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA1E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1DCu;
        // 0x2ba1e0: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1dc) {
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA1E4u;
label_2ba1e4:
    // 0x2ba1e4: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2ba1e4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba1e8:
    // 0x2ba1e8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2ba1e8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba1ec:
    // 0x2ba1ec: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2ba1ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2ba1f0:
    // 0x2ba1f0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ba1f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2ba1f4:
    // 0x2ba1f4: 0x10560009  beq         $v0, $s6, . + 4 + (0x9 << 2)
label_2ba1f8:
    if (ctx->pc == 0x2BA1F8u) {
        ctx->pc = 0x2BA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1F4u;
        // 0x2ba1f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA1FCu;
        goto label_2ba1fc;
    }
    ctx->pc = 0x2BA1F4u;
    {
        const bool branch_taken_0x2ba1f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        ctx->pc = 0x2BA1F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA1F4u;
        // 0x2ba1f8: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba1f4) {
            ctx->pc = 0x2BA21Cu;
            goto label_2ba21c;
        }
    }
    ctx->pc = 0x2BA1FCu;
label_2ba1fc:
    // 0x2ba1fc: 0x10570007  beq         $v0, $s7, . + 4 + (0x7 << 2)
label_2ba200:
    if (ctx->pc == 0x2BA200u) {
        ctx->pc = 0x2BA204u;
        goto label_2ba204;
    }
    ctx->pc = 0x2BA1FCu;
    {
        const bool branch_taken_0x2ba1fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x2ba1fc) {
            ctx->pc = 0x2BA21Cu;
            goto label_2ba21c;
        }
    }
    ctx->pc = 0x2BA204u;
label_2ba204:
    // 0x2ba204: 0x105e0005  beq         $v0, $fp, . + 4 + (0x5 << 2)
label_2ba208:
    if (ctx->pc == 0x2BA208u) {
        ctx->pc = 0x2BA20Cu;
        goto label_2ba20c;
    }
    ctx->pc = 0x2BA204u;
    {
        const bool branch_taken_0x2ba204 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x2ba204) {
            ctx->pc = 0x2BA21Cu;
            goto label_2ba21c;
        }
    }
    ctx->pc = 0x2BA20Cu;
label_2ba20c:
    // 0x2ba20c: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
label_2ba210:
    if (ctx->pc == 0x2BA210u) {
        ctx->pc = 0x2BA214u;
        goto label_2ba214;
    }
    ctx->pc = 0x2BA20Cu;
    {
        const bool branch_taken_0x2ba20c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ba20c) {
            ctx->pc = 0x2BA21Cu;
            goto label_2ba21c;
        }
    }
    ctx->pc = 0x2BA214u;
label_2ba214:
    // 0x2ba214: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
label_2ba218:
    if (ctx->pc == 0x2BA218u) {
        ctx->pc = 0x2BA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA214u;
        // 0x2ba218: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA21Cu;
        goto label_2ba21c;
    }
    ctx->pc = 0x2BA214u;
    {
        const bool branch_taken_0x2ba214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA214u;
        // 0x2ba218: 0x41600  sll         $v0, $a0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba214) {
            ctx->pc = 0x2BA228u;
            goto label_2ba228;
        }
    }
    ctx->pc = 0x2BA21Cu;
label_2ba21c:
    // 0x2ba21c: 0x16000020  bnez        $s0, . + 4 + (0x20 << 2)
label_2ba220:
    if (ctx->pc == 0x2BA220u) {
        ctx->pc = 0x2BA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA21Cu;
        // 0x2ba220: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA224u;
        goto label_2ba224;
    }
    ctx->pc = 0x2BA21Cu;
    {
        const bool branch_taken_0x2ba21c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA21Cu;
        // 0x2ba220: 0x27b00030  addiu       $s0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba21c) {
            ctx->pc = 0x2BA2A0u;
            goto label_2ba2a0;
        }
    }
    ctx->pc = 0x2BA224u;
label_2ba224:
    // 0x2ba224: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x2ba224u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
label_2ba228:
    // 0x2ba228: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ba228u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2ba22c:
    // 0x2ba22c: 0x50560080  beql        $v0, $s6, . + 4 + (0x80 << 2)
label_2ba230:
    if (ctx->pc == 0x2BA230u) {
        ctx->pc = 0x2BA230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA22Cu;
        // 0x2ba230: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA234u;
        goto label_2ba234;
    }
    ctx->pc = 0x2BA22Cu;
    {
        const bool branch_taken_0x2ba22c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 22));
        if (branch_taken_0x2ba22c) {
            ctx->pc = 0x2BA230u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA22Cu;
            // 0x2ba230: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA234u;
label_2ba234:
    // 0x2ba234: 0x5057007e  beql        $v0, $s7, . + 4 + (0x7E << 2)
label_2ba238:
    if (ctx->pc == 0x2BA238u) {
        ctx->pc = 0x2BA238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA234u;
        // 0x2ba238: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA23Cu;
        goto label_2ba23c;
    }
    ctx->pc = 0x2BA234u;
    {
        const bool branch_taken_0x2ba234 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 23));
        if (branch_taken_0x2ba234) {
            ctx->pc = 0x2BA238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA234u;
            // 0x2ba238: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA23Cu;
label_2ba23c:
    // 0x2ba23c: 0x505e007c  beql        $v0, $fp, . + 4 + (0x7C << 2)
label_2ba240:
    if (ctx->pc == 0x2BA240u) {
        ctx->pc = 0x2BA240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA23Cu;
        // 0x2ba240: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA244u;
        goto label_2ba244;
    }
    ctx->pc = 0x2BA23Cu;
    {
        const bool branch_taken_0x2ba23c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 30));
        if (branch_taken_0x2ba23c) {
            ctx->pc = 0x2BA240u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA23Cu;
            // 0x2ba240: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA244u;
label_2ba244:
    // 0x2ba244: 0x5046007a  beql        $v0, $a2, . + 4 + (0x7A << 2)
label_2ba248:
    if (ctx->pc == 0x2BA248u) {
        ctx->pc = 0x2BA248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA244u;
        // 0x2ba248: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA24Cu;
        goto label_2ba24c;
    }
    ctx->pc = 0x2BA244u;
    {
        const bool branch_taken_0x2ba244 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ba244) {
            ctx->pc = 0x2BA248u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA244u;
            // 0x2ba248: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA24Cu;
label_2ba24c:
    // 0x2ba24c: 0x10400097  beqz        $v0, . + 4 + (0x97 << 2)
label_2ba250:
    if (ctx->pc == 0x2BA250u) {
        ctx->pc = 0x2BA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA24Cu;
        // 0x2ba250: 0x2407003a  addiu       $a3, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA254u;
        goto label_2ba254;
    }
    ctx->pc = 0x2BA24Cu;
    {
        const bool branch_taken_0x2ba24c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA24Cu;
        // 0x2ba250: 0x2407003a  addiu       $a3, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba24c) {
            ctx->pc = 0x2BA4ACu;
            goto label_2ba4ac;
        }
    }
    ctx->pc = 0x2BA254u;
label_2ba254:
    // 0x2ba254: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2ba254u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ba258:
    // 0x2ba258: 0x2405003b  addiu       $a1, $zero, 0x3B
    ctx->pc = 0x2ba258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2ba25c:
    // 0x2ba25c: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x2ba25cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2ba260:
    // 0x2ba260: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ba260u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ba264:
    // 0x2ba264: 0x0  nop
    ctx->pc = 0x2ba264u;
    // NOP
label_2ba268:
    // 0x2ba268: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2ba268u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba26c:
    // 0x2ba26c: 0x1047006f  beq         $v0, $a3, . + 4 + (0x6F << 2)
label_2ba270:
    if (ctx->pc == 0x2BA270u) {
        ctx->pc = 0x2BA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA26Cu;
        // 0x2ba270: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA274u;
        goto label_2ba274;
    }
    ctx->pc = 0x2BA26Cu;
    {
        const bool branch_taken_0x2ba26c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        ctx->pc = 0x2BA270u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA26Cu;
        // 0x2ba270: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba26c) {
            ctx->pc = 0x2BA42Cu;
            goto label_2ba42c;
        }
    }
    ctx->pc = 0x2BA274u;
label_2ba274:
    // 0x2ba274: 0x5046006e  beql        $v0, $a2, . + 4 + (0x6E << 2)
label_2ba278:
    if (ctx->pc == 0x2BA278u) {
        ctx->pc = 0x2BA278u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA274u;
        // 0x2ba278: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA27Cu;
        goto label_2ba27c;
    }
    ctx->pc = 0x2BA274u;
    {
        const bool branch_taken_0x2ba274 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ba274) {
            ctx->pc = 0x2BA278u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA274u;
            // 0x2ba278: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA27Cu;
label_2ba27c:
    // 0x2ba27c: 0x5045006c  beql        $v0, $a1, . + 4 + (0x6C << 2)
label_2ba280:
    if (ctx->pc == 0x2BA280u) {
        ctx->pc = 0x2BA280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA27Cu;
        // 0x2ba280: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA284u;
        goto label_2ba284;
    }
    ctx->pc = 0x2BA27Cu;
    {
        const bool branch_taken_0x2ba27c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        if (branch_taken_0x2ba27c) {
            ctx->pc = 0x2BA280u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA27Cu;
            // 0x2ba280: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA284u;
label_2ba284:
    // 0x2ba284: 0x5044006a  beql        $v0, $a0, . + 4 + (0x6A << 2)
label_2ba288:
    if (ctx->pc == 0x2BA288u) {
        ctx->pc = 0x2BA288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA284u;
        // 0x2ba288: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA28Cu;
        goto label_2ba28c;
    }
    ctx->pc = 0x2BA284u;
    {
        const bool branch_taken_0x2ba284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ba284) {
            ctx->pc = 0x2BA288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA284u;
            // 0x2ba288: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA28Cu;
label_2ba28c:
    // 0x2ba28c: 0x5440fff6  bnel        $v0, $zero, . + 4 + (-0xA << 2)
label_2ba290:
    if (ctx->pc == 0x2BA290u) {
        ctx->pc = 0x2BA290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA28Cu;
        // 0x2ba290: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA294u;
        goto label_2ba294;
    }
    ctx->pc = 0x2BA28Cu;
    {
        const bool branch_taken_0x2ba28c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba28c) {
            ctx->pc = 0x2BA290u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA28Cu;
            // 0x2ba290: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA268u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba268;
        }
    }
    ctx->pc = 0x2BA294u;
label_2ba294:
    // 0x2ba294: 0x10000066  b           . + 4 + (0x66 << 2)
label_2ba298:
    if (ctx->pc == 0x2BA298u) {
        ctx->pc = 0x2BA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA294u;
        // 0x2ba298: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA29Cu;
        goto label_2ba29c;
    }
    ctx->pc = 0x2BA294u;
    {
        const bool branch_taken_0x2ba294 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA294u;
        // 0x2ba298: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba294) {
            ctx->pc = 0x2BA430u;
            goto label_2ba430;
        }
    }
    ctx->pc = 0x2BA29Cu;
label_2ba29c:
    // 0x2ba29c: 0x27b00030  addiu       $s0, $sp, 0x30
    ctx->pc = 0x2ba29cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_2ba2a0:
    // 0x2ba2a0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2ba2a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2ba2a4:
    // 0x2ba2a4: 0xafbd0034  sw          $sp, 0x34($sp)
    ctx->pc = 0x2ba2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 29));
label_2ba2a8:
    // 0x2ba2a8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ba2a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2ac:
    // 0x2ba2ac: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x2ba2acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_2ba2b0:
    // 0x2ba2b0: 0x7fa700c0  sq          $a3, 0xC0($sp)
    ctx->pc = 0x2ba2b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 7));
label_2ba2b4:
    // 0x2ba2b4: 0xc0af0a6  jal         func_2BC298
label_2ba2b8:
    if (ctx->pc == 0x2BA2B8u) {
        ctx->pc = 0x2BA2B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2B4u;
        // 0x2ba2b8: 0x7fa800d0  sq          $t0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2BCu;
        goto label_2ba2bc;
    }
    ctx->pc = 0x2BA2B4u;
    SET_GPR_U32(ctx, 31, 0x2BA2BCu);
    ctx->pc = 0x2BA2B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA2B4u;
    // 0x2ba2b8: 0x7fa800d0  sq          $t0, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC298u, 0x2BA2B4u, 0x2BA2BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA2BCu;
label_2ba2bc:
    // 0x2ba2bc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ba2bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2c0:
    // 0x2ba2c0: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x2ba2c0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ba2c4:
    // 0x2ba2c4: 0x7ba700c0  lq          $a3, 0xC0($sp)
    ctx->pc = 0x2ba2c4u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ba2c8:
    // 0x2ba2c8: 0x621003b  bgez        $s1, . + 4 + (0x3B << 2)
label_2ba2cc:
    if (ctx->pc == 0x2BA2CCu) {
        ctx->pc = 0x2BA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2C8u;
        // 0x2ba2cc: 0x7ba800d0  lq          $t0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2D0u;
        goto label_2ba2d0;
    }
    ctx->pc = 0x2BA2C8u;
    {
        const bool branch_taken_0x2ba2c8 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x2BA2CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2C8u;
        // 0x2ba2cc: 0x7ba800d0  lq          $t0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2c8) {
            ctx->pc = 0x2BA3B8u;
            goto label_2ba3b8;
        }
    }
    ctx->pc = 0x2BA2D0u;
label_2ba2d0:
    // 0x2ba2d0: 0x83a30000  lb          $v1, 0x0($sp)
    ctx->pc = 0x2ba2d0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 0)));
label_2ba2d4:
    // 0x2ba2d4: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x2ba2d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2ba2d8:
    // 0x2ba2d8: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x2ba2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2ba2dc:
    // 0x2ba2dc: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
label_2ba2e0:
    if (ctx->pc == 0x2BA2E0u) {
        ctx->pc = 0x2BA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2DCu;
        // 0x2ba2e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA2E4u;
        goto label_2ba2e4;
    }
    ctx->pc = 0x2BA2DCu;
    {
        const bool branch_taken_0x2ba2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2DCu;
        // 0x2ba2e0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2dc) {
            ctx->pc = 0x2BA35Cu;
            goto label_2ba35c;
        }
    }
    ctx->pc = 0x2BA2E4u;
label_2ba2e4:
    // 0x2ba2e4: 0x93a20001  lbu         $v0, 0x1($sp)
    ctx->pc = 0x2ba2e4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 1)));
label_2ba2e8:
    // 0x2ba2e8: 0x27a40002  addiu       $a0, $sp, 0x2
    ctx->pc = 0x2ba2e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 2));
label_2ba2ec:
    // 0x2ba2ec: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x2ba2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
label_2ba2f0:
    // 0x2ba2f0: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ba2f0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2ba2f4:
    // 0x2ba2f4: 0x38420078  xori        $v0, $v0, 0x78
    ctx->pc = 0x2ba2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)120);
label_2ba2f8:
    // 0x2ba2f8: 0x10000018  b           . + 4 + (0x18 << 2)
label_2ba2fc:
    if (ctx->pc == 0x2BA2FCu) {
        ctx->pc = 0x2BA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2F8u;
        // 0x2ba2fc: 0x3a2200b  movn        $a0, $sp, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 29));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA300u;
        goto label_2ba300;
    }
    ctx->pc = 0x2BA2F8u;
    {
        const bool branch_taken_0x2ba2f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA2F8u;
        // 0x2ba2fc: 0x3a2200b  movn        $a0, $sp, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 4, GPR_VEC(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba2f8) {
            ctx->pc = 0x2BA35Cu;
            goto label_2ba35c;
        }
    }
    ctx->pc = 0x2BA300u;
label_2ba300:
    // 0x2ba300: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x2ba300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_2ba304:
    // 0x2ba304: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2ba304u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2ba308:
    // 0x2ba308: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ba30c:
    if (ctx->pc == 0x2BA30Cu) {
        ctx->pc = 0x2BA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA308u;
        // 0x2ba30c: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA310u;
        goto label_2ba310;
    }
    ctx->pc = 0x2BA308u;
    {
        const bool branch_taken_0x2ba308 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA30Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA308u;
        // 0x2ba30c: 0x52938  dsll        $a1, $a1, 4 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba308) {
            ctx->pc = 0x2BA320u;
            goto label_2ba320;
        }
    }
    ctx->pc = 0x2BA310u;
label_2ba310:
    // 0x2ba310: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2ba310u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2ba314:
    // 0x2ba314: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ba314u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2ba318:
    // 0x2ba318: 0x1000000e  b           . + 4 + (0xE << 2)
label_2ba31c:
    if (ctx->pc == 0x2BA31Cu) {
        ctx->pc = 0x2BA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA318u;
        // 0x2ba31c: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA320u;
        goto label_2ba320;
    }
    ctx->pc = 0x2BA318u;
    {
        const bool branch_taken_0x2ba318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA318u;
        // 0x2ba31c: 0x2442ffd0  addiu       $v0, $v0, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba318) {
            ctx->pc = 0x2BA354u;
            goto label_2ba354;
        }
    }
    ctx->pc = 0x2BA320u;
label_2ba320:
    // 0x2ba320: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x2ba320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
label_2ba324:
    // 0x2ba324: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2ba324u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2ba328:
    // 0x2ba328: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ba32c:
    if (ctx->pc == 0x2BA32Cu) {
        ctx->pc = 0x2BA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA328u;
        // 0x2ba32c: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA330u;
        goto label_2ba330;
    }
    ctx->pc = 0x2BA328u;
    {
        const bool branch_taken_0x2ba328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA328u;
        // 0x2ba32c: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba328) {
            ctx->pc = 0x2BA33Cu;
            goto label_2ba33c;
        }
    }
    ctx->pc = 0x2BA330u;
label_2ba330:
    // 0x2ba330: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ba330u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2ba334:
    // 0x2ba334: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ba338:
    if (ctx->pc == 0x2BA338u) {
        ctx->pc = 0x2BA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA334u;
        // 0x2ba338: 0x2442ffc9  addiu       $v0, $v0, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA33Cu;
        goto label_2ba33c;
    }
    ctx->pc = 0x2BA334u;
    {
        const bool branch_taken_0x2ba334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA334u;
        // 0x2ba338: 0x2442ffc9  addiu       $v0, $v0, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba334) {
            ctx->pc = 0x2BA354u;
            goto label_2ba354;
        }
    }
    ctx->pc = 0x2BA33Cu;
label_2ba33c:
    // 0x2ba33c: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x2ba33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
label_2ba340:
    // 0x2ba340: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2ba340u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2ba344:
    // 0x2ba344: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_2ba348:
    if (ctx->pc == 0x2BA348u) {
        ctx->pc = 0x2BA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA344u;
        // 0x2ba348: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA34Cu;
        goto label_2ba34c;
    }
    ctx->pc = 0x2BA344u;
    {
        const bool branch_taken_0x2ba344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA344u;
        // 0x2ba348: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba344) {
            ctx->pc = 0x2BA428u;
            goto label_2ba428;
        }
    }
    ctx->pc = 0x2BA34Cu;
label_2ba34c:
    // 0x2ba34c: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ba34cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2ba350:
    // 0x2ba350: 0x2442ffa9  addiu       $v0, $v0, -0x57
    ctx->pc = 0x2ba350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967209));
label_2ba354:
    // 0x2ba354: 0xa2282d  daddu       $a1, $a1, $v0
    ctx->pc = 0x2ba354u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 2));
label_2ba358:
    // 0x2ba358: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x2ba358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_2ba35c:
    // 0x2ba35c: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x2ba35cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_2ba360:
    // 0x2ba360: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
label_2ba364:
    if (ctx->pc == 0x2BA364u) {
        ctx->pc = 0x2BA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA360u;
        // 0x2ba364: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA368u;
        goto label_2ba368;
    }
    ctx->pc = 0x2BA360u;
    {
        const bool branch_taken_0x2ba360 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA360u;
        // 0x2ba364: 0x90830000  lbu         $v1, 0x0($a0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba360) {
            ctx->pc = 0x2BA300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba300;
        }
    }
    ctx->pc = 0x2BA368u;
label_2ba368:
    // 0x2ba368: 0xffa50038  sd          $a1, 0x38($sp)
    ctx->pc = 0x2ba368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 5));
label_2ba36c:
    // 0x2ba36c: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x2ba36cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2ba370:
    // 0x2ba370: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ba370u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba374:
    // 0x2ba374: 0x7fa600b0  sq          $a2, 0xB0($sp)
    ctx->pc = 0x2ba374u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 6));
label_2ba378:
    // 0x2ba378: 0x7fa700c0  sq          $a3, 0xC0($sp)
    ctx->pc = 0x2ba378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 7));
label_2ba37c:
    // 0x2ba37c: 0xc0af0a6  jal         func_2BC298
label_2ba380:
    if (ctx->pc == 0x2BA380u) {
        ctx->pc = 0x2BA380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA37Cu;
        // 0x2ba380: 0x7fa800d0  sq          $t0, 0xD0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA384u;
        goto label_2ba384;
    }
    ctx->pc = 0x2BA37Cu;
    SET_GPR_U32(ctx, 31, 0x2BA384u);
    ctx->pc = 0x2BA380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA37Cu;
    // 0x2ba380: 0x7fa800d0  sq          $t0, 0xD0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC298u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC298u, 0x2BA37Cu, 0x2BA384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA384u;
label_2ba384:
    // 0x2ba384: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2ba384u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba388:
    // 0x2ba388: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x2ba388u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_2ba38c:
    // 0x2ba38c: 0x7ba700c0  lq          $a3, 0xC0($sp)
    ctx->pc = 0x2ba38cu;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_2ba390:
    // 0x2ba390: 0x6200025  bltz        $s1, . + 4 + (0x25 << 2)
label_2ba394:
    if (ctx->pc == 0x2BA394u) {
        ctx->pc = 0x2BA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA390u;
        // 0x2ba394: 0x7ba800d0  lq          $t0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA398u;
        goto label_2ba398;
    }
    ctx->pc = 0x2BA390u;
    {
        const bool branch_taken_0x2ba390 = (GPR_S32(ctx, 17) < 0);
        ctx->pc = 0x2BA394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA390u;
        // 0x2ba394: 0x7ba800d0  lq          $t0, 0xD0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba390) {
            ctx->pc = 0x2BA428u;
            goto label_2ba428;
        }
    }
    ctx->pc = 0x2BA398u;
label_2ba398:
    // 0x2ba398: 0x8fa4008c  lw          $a0, 0x8C($sp)
    ctx->pc = 0x2ba398u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2ba39c:
    // 0x2ba39c: 0x111880  sll         $v1, $s1, 2
    ctx->pc = 0x2ba39cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2ba3a0:
    // 0x2ba3a0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x2ba3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_2ba3a4:
    // 0x2ba3a4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2ba3a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2ba3a8:
    // 0x2ba3a8: 0x8c710000  lw          $s1, 0x0($v1)
    ctx->pc = 0x2ba3a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2ba3ac:
    // 0x2ba3ac: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x2ba3acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
label_2ba3b0:
    // 0x2ba3b0: 0x10000007  b           . + 4 + (0x7 << 2)
label_2ba3b4:
    if (ctx->pc == 0x2BA3B4u) {
        ctx->pc = 0x2BA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3B0u;
        // 0x2ba3b4: 0xfe820020  sd          $v0, 0x20($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA3B8u;
        goto label_2ba3b8;
    }
    ctx->pc = 0x2BA3B0u;
    {
        const bool branch_taken_0x2ba3b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA3B0u;
        // 0x2ba3b4: 0xfe820020  sd          $v0, 0x20($s4) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba3b0) {
            ctx->pc = 0x2BA3D0u;
            goto label_2ba3d0;
        }
    }
    ctx->pc = 0x2BA3B8u;
label_2ba3b8:
    // 0x2ba3b8: 0x8fa90088  lw          $t1, 0x88($sp)
    ctx->pc = 0x2ba3b8u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2ba3bc:
    // 0x2ba3bc: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x2ba3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_2ba3c0:
    // 0x2ba3c0: 0x8d230004  lw          $v1, 0x4($t1)
    ctx->pc = 0x2ba3c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
label_2ba3c4:
    // 0x2ba3c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba3c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ba3c8:
    // 0x2ba3c8: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x2ba3c8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ba3cc:
    // 0x2ba3cc: 0xfe800020  sd          $zero, 0x20($s4)
    ctx->pc = 0x2ba3ccu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 32), GPR_U64(ctx, 0));
label_2ba3d0:
    // 0x2ba3d0: 0xae870004  sw          $a3, 0x4($s4)
    ctx->pc = 0x2ba3d0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 7));
label_2ba3d4:
    // 0x2ba3d4: 0xde830008  ld          $v1, 0x8($s4)
    ctx->pc = 0x2ba3d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 20), 8)));
label_2ba3d8:
    // 0x2ba3d8: 0x8e240004  lw          $a0, 0x4($s1)
    ctx->pc = 0x2ba3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ba3dc:
    // 0x2ba3dc: 0xde850010  ld          $a1, 0x10($s4)
    ctx->pc = 0x2ba3dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 20), 16)));
label_2ba3e0:
    // 0x2ba3e0: 0xae840000  sw          $a0, 0x0($s4)
    ctx->pc = 0x2ba3e0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 4));
label_2ba3e4:
    // 0x2ba3e4: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x2ba3e4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_2ba3e8:
    // 0x2ba3e8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2ba3e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
label_2ba3ec:
    // 0x2ba3ec: 0xfe830008  sd          $v1, 0x8($s4)
    ctx->pc = 0x2ba3ecu;
    WRITE64(ADD32(GPR_U32(ctx, 20), 8), GPR_U64(ctx, 3));
label_2ba3f0:
    // 0x2ba3f0: 0xde220020  ld          $v0, 0x20($s1)
    ctx->pc = 0x2ba3f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 32)));
label_2ba3f4:
    // 0x2ba3f4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x2ba3f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_2ba3f8:
    // 0x2ba3f8: 0xfe850010  sd          $a1, 0x10($s4)
    ctx->pc = 0x2ba3f8u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 16), GPR_U64(ctx, 5));
label_2ba3fc:
    // 0x2ba3fc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x2ba3fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_2ba400:
    // 0x2ba400: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2ba400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2ba404:
    // 0x2ba404: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2ba404u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2ba408:
    // 0x2ba408: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_2ba40c:
    if (ctx->pc == 0x2BA40Cu) {
        ctx->pc = 0x2BA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA408u;
        // 0x2ba40c: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA410u;
        goto label_2ba410;
    }
    ctx->pc = 0x2BA408u;
    {
        const bool branch_taken_0x2ba408 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA40Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA408u;
        // 0x2ba40c: 0xae820018  sw          $v0, 0x18($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba408) {
            ctx->pc = 0x2BA418u;
            goto label_2ba418;
        }
    }
    ctx->pc = 0x2BA410u;
label_2ba410:
    // 0x2ba410: 0x5040ff2d  beql        $v0, $zero, . + 4 + (-0xD3 << 2)
label_2ba414:
    if (ctx->pc == 0x2BA414u) {
        ctx->pc = 0x2BA414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA410u;
        // 0x2ba414: 0x82530000  lb          $s3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA418u;
        goto label_2ba418;
    }
    ctx->pc = 0x2BA410u;
    {
        const bool branch_taken_0x2ba410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba410) {
            ctx->pc = 0x2BA414u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA410u;
            // 0x2ba414: 0x82530000  lb          $s3, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA0C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba0c8;
        }
    }
    ctx->pc = 0x2BA418u;
label_2ba418:
    // 0x2ba418: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x2ba418u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2ba41c:
    // 0x2ba41c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2ba41cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2ba420:
    // 0x2ba420: 0x12600026  beqz        $s3, . + 4 + (0x26 << 2)
label_2ba424:
    if (ctx->pc == 0x2BA424u) {
        ctx->pc = 0x2BA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA420u;
        // 0x2ba424: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA428u;
        goto label_2ba428;
    }
    ctx->pc = 0x2BA420u;
    {
        const bool branch_taken_0x2ba420 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA420u;
        // 0x2ba424: 0xafa20090  sw          $v0, 0x90($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba420) {
            ctx->pc = 0x2BA4BCu;
            goto label_2ba4bc;
        }
    }
    ctx->pc = 0x2BA428u;
label_2ba428:
    // 0x2ba428: 0x92430000  lbu         $v1, 0x0($s2)
    ctx->pc = 0x2ba428u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba42c:
    // 0x2ba42c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2ba42cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2ba430:
    // 0x2ba430: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x2ba430u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_2ba434:
    // 0x2ba434: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2ba438:
    if (ctx->pc == 0x2BA438u) {
        ctx->pc = 0x2BA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA434u;
        // 0x2ba438: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA43Cu;
        goto label_2ba43c;
    }
    ctx->pc = 0x2BA434u;
    {
        const bool branch_taken_0x2ba434 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA434u;
        // 0x2ba438: 0x2404003a  addiu       $a0, $zero, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba434) {
            ctx->pc = 0x2BA4ACu;
            goto label_2ba4ac;
        }
    }
    ctx->pc = 0x2BA43Cu;
label_2ba43c:
    // 0x2ba43c: 0x5044000c  beql        $v0, $a0, . + 4 + (0xC << 2)
label_2ba440:
    if (ctx->pc == 0x2BA440u) {
        ctx->pc = 0x2BA440u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA43Cu;
        // 0x2ba440: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA444u;
        goto label_2ba444;
    }
    ctx->pc = 0x2BA43Cu;
    {
        const bool branch_taken_0x2ba43c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ba43c) {
            ctx->pc = 0x2BA440u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA43Cu;
            // 0x2ba440: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA470u;
            goto label_2ba470;
        }
    }
    ctx->pc = 0x2BA444u;
label_2ba444:
    // 0x2ba444: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x2ba444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ba448:
    // 0x2ba448: 0x50460009  beql        $v0, $a2, . + 4 + (0x9 << 2)
label_2ba44c:
    if (ctx->pc == 0x2BA44Cu) {
        ctx->pc = 0x2BA44Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA448u;
        // 0x2ba44c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA450u;
        goto label_2ba450;
    }
    ctx->pc = 0x2BA448u;
    {
        const bool branch_taken_0x2ba448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ba448) {
            ctx->pc = 0x2BA44Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA448u;
            // 0x2ba44c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA470u;
            goto label_2ba470;
        }
    }
    ctx->pc = 0x2BA450u;
label_2ba450:
    // 0x2ba450: 0x2407003b  addiu       $a3, $zero, 0x3B
    ctx->pc = 0x2ba450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2ba454:
    // 0x2ba454: 0x50470006  beql        $v0, $a3, . + 4 + (0x6 << 2)
label_2ba458:
    if (ctx->pc == 0x2BA458u) {
        ctx->pc = 0x2BA458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA454u;
        // 0x2ba458: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA45Cu;
        goto label_2ba45c;
    }
    ctx->pc = 0x2BA454u;
    {
        const bool branch_taken_0x2ba454 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2ba454) {
            ctx->pc = 0x2BA458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA454u;
            // 0x2ba458: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA470u;
            goto label_2ba470;
        }
    }
    ctx->pc = 0x2BA45Cu;
label_2ba45c:
    // 0x2ba45c: 0x2408002c  addiu       $t0, $zero, 0x2C
    ctx->pc = 0x2ba45cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2ba460:
    // 0x2ba460: 0x14480013  bne         $v0, $t0, . + 4 + (0x13 << 2)
label_2ba464:
    if (ctx->pc == 0x2BA464u) {
        ctx->pc = 0x2BA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA460u;
        // 0x2ba464: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA468u;
        goto label_2ba468;
    }
    ctx->pc = 0x2BA460u;
    {
        const bool branch_taken_0x2ba460 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        ctx->pc = 0x2BA464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA460u;
        // 0x2ba464: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba460) {
            ctx->pc = 0x2BA4B0u;
            goto label_2ba4b0;
        }
    }
    ctx->pc = 0x2BA468u;
label_2ba468:
    // 0x2ba468: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x2ba468u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_2ba46c:
    // 0x2ba46c: 0x0  nop
    ctx->pc = 0x2ba46cu;
    // NOP
label_2ba470:
    // 0x2ba470: 0x82420000  lb          $v0, 0x0($s2)
    ctx->pc = 0x2ba470u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
label_2ba474:
    // 0x2ba474: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2ba478:
    if (ctx->pc == 0x2BA478u) {
        ctx->pc = 0x2BA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA474u;
        // 0x2ba478: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA47Cu;
        goto label_2ba47c;
    }
    ctx->pc = 0x2BA474u;
    {
        const bool branch_taken_0x2ba474 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA474u;
        // 0x2ba478: 0x92430000  lbu         $v1, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba474) {
            ctx->pc = 0x2BA4ACu;
            goto label_2ba4ac;
        }
    }
    ctx->pc = 0x2BA47Cu;
label_2ba47c:
    // 0x2ba47c: 0x2409003a  addiu       $t1, $zero, 0x3A
    ctx->pc = 0x2ba47cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 58));
label_2ba480:
    // 0x2ba480: 0x5049fffb  beql        $v0, $t1, . + 4 + (-0x5 << 2)
label_2ba484:
    if (ctx->pc == 0x2BA484u) {
        ctx->pc = 0x2BA484u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA480u;
        // 0x2ba484: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA488u;
        goto label_2ba488;
    }
    ctx->pc = 0x2BA480u;
    {
        const bool branch_taken_0x2ba480 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x2ba480) {
            ctx->pc = 0x2BA484u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA480u;
            // 0x2ba484: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba470;
        }
    }
    ctx->pc = 0x2BA488u;
label_2ba488:
    // 0x2ba488: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x2ba488u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_2ba48c:
    // 0x2ba48c: 0x5044fff8  beql        $v0, $a0, . + 4 + (-0x8 << 2)
label_2ba490:
    if (ctx->pc == 0x2BA490u) {
        ctx->pc = 0x2BA490u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA48Cu;
        // 0x2ba490: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA494u;
        goto label_2ba494;
    }
    ctx->pc = 0x2BA48Cu;
    {
        const bool branch_taken_0x2ba48c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        if (branch_taken_0x2ba48c) {
            ctx->pc = 0x2BA490u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA48Cu;
            // 0x2ba490: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba470;
        }
    }
    ctx->pc = 0x2BA494u;
label_2ba494:
    // 0x2ba494: 0x2406003b  addiu       $a2, $zero, 0x3B
    ctx->pc = 0x2ba494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2ba498:
    // 0x2ba498: 0x5046fff5  beql        $v0, $a2, . + 4 + (-0xB << 2)
label_2ba49c:
    if (ctx->pc == 0x2BA49Cu) {
        ctx->pc = 0x2BA49Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA498u;
        // 0x2ba49c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4A0u;
        goto label_2ba4a0;
    }
    ctx->pc = 0x2BA498u;
    {
        const bool branch_taken_0x2ba498 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        if (branch_taken_0x2ba498) {
            ctx->pc = 0x2BA49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA498u;
            // 0x2ba49c: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba470;
        }
    }
    ctx->pc = 0x2BA4A0u;
label_2ba4a0:
    // 0x2ba4a0: 0x2407002c  addiu       $a3, $zero, 0x2C
    ctx->pc = 0x2ba4a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
label_2ba4a4:
    // 0x2ba4a4: 0x5047fff2  beql        $v0, $a3, . + 4 + (-0xE << 2)
label_2ba4a8:
    if (ctx->pc == 0x2BA4A8u) {
        ctx->pc = 0x2BA4A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4A4u;
        // 0x2ba4a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4ACu;
        goto label_2ba4ac;
    }
    ctx->pc = 0x2BA4A4u;
    {
        const bool branch_taken_0x2ba4a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x2ba4a4) {
            ctx->pc = 0x2BA4A8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA4A4u;
            // 0x2ba4a8: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA470u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba470;
        }
    }
    ctx->pc = 0x2BA4ACu;
label_2ba4ac:
    // 0x2ba4ac: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x2ba4acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_2ba4b0:
    // 0x2ba4b0: 0x29e03  sra         $s3, $v0, 24
    ctx->pc = 0x2ba4b0u;
    SET_GPR_S32(ctx, 19, SRA32(GPR_S32(ctx, 2), 24));
label_2ba4b4:
    // 0x2ba4b4: 0x1660fee0  bnez        $s3, . + 4 + (-0x120 << 2)
label_2ba4b8:
    if (ctx->pc == 0x2BA4B8u) {
        ctx->pc = 0x2BA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4B4u;
        // 0x2ba4b8: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4BCu;
        goto label_2ba4bc;
    }
    ctx->pc = 0x2BA4B4u;
    {
        const bool branch_taken_0x2ba4b4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4B4u;
        // 0x2ba4b8: 0x2402002d  addiu       $v0, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4b4) {
            ctx->pc = 0x2BA038u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba038;
        }
    }
    ctx->pc = 0x2BA4BCu;
label_2ba4bc:
    // 0x2ba4bc: 0x8fa80090  lw          $t0, 0x90($sp)
    ctx->pc = 0x2ba4bcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
label_2ba4c0:
    // 0x2ba4c0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2ba4c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4c4:
    // 0x2ba4c4: 0x19000068  blez        $t0, . + 4 + (0x68 << 2)
label_2ba4c8:
    if (ctx->pc == 0x2BA4C8u) {
        ctx->pc = 0x2BA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4C4u;
        // 0x2ba4c8: 0xafa80094  sw          $t0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA4CCu;
        goto label_2ba4cc;
    }
    ctx->pc = 0x2BA4C4u;
    {
        const bool branch_taken_0x2ba4c4 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x2BA4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA4C4u;
        // 0x2ba4c8: 0xafa80094  sw          $t0, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba4c4) {
            ctx->pc = 0x2BA668u;
            goto label_2ba668;
        }
    }
    ctx->pc = 0x2BA4CCu;
label_2ba4cc:
    // 0x2ba4cc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2ba4ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ba4d0:
    // 0x2ba4d0: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x2ba4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2ba4d4:
    // 0x2ba4d4: 0x0  nop
    ctx->pc = 0x2ba4d4u;
    // NOP
label_2ba4d8:
    // 0x2ba4d8: 0x24020028  addiu       $v0, $zero, 0x28
    ctx->pc = 0x2ba4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_2ba4dc:
    // 0x2ba4dc: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2ba4dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4e0:
    // 0x2ba4e0: 0x8fb70064  lw          $s7, 0x64($sp)
    ctx->pc = 0x2ba4e0u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2ba4e4:
    // 0x2ba4e4: 0x800013  mtlo        $a0
    ctx->pc = 0x2ba4e4u;
    ctx->lo = GPR_U64(ctx, 4);
label_2ba4e8:
    // 0x2ba4e8: 0x200b02d  daddu       $s6, $s0, $zero
    ctx->pc = 0x2ba4e8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba4ec:
    // 0x2ba4ec: 0x72221000  madd        $v0, $s1, $v0
    ctx->pc = 0x2ba4ecu;
    { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 2); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 2, (int32_t)result); }
label_2ba4f0:
    // 0x2ba4f0: 0xdc460008  ld          $a2, 0x8($v0)
    ctx->pc = 0x2ba4f0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 8)));
label_2ba4f4:
    // 0x2ba4f4: 0xdc550020  ld          $s5, 0x20($v0)
    ctx->pc = 0x2ba4f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_2ba4f8:
    // 0x2ba4f8: 0xffa60080  sd          $a2, 0x80($sp)
    ctx->pc = 0x2ba4f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
label_2ba4fc:
    // 0x2ba4fc: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x2ba4fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ba500:
    // 0x2ba500: 0x8c520004  lw          $s2, 0x4($v0)
    ctx->pc = 0x2ba500u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_2ba504:
    // 0x2ba504: 0xafa700a0  sw          $a3, 0xA0($sp)
    ctx->pc = 0x2ba504u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 7));
label_2ba508:
    // 0x2ba508: 0x8c5e0018  lw          $fp, 0x18($v0)
    ctx->pc = 0x2ba508u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_2ba50c:
    // 0x2ba50c: 0x1200004e  beqz        $s0, . + 4 + (0x4E << 2)
label_2ba510:
    if (ctx->pc == 0x2BA510u) {
        ctx->pc = 0x2BA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA50Cu;
        // 0x2ba510: 0xdc540010  ld          $s4, 0x10($v0) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA514u;
        goto label_2ba514;
    }
    ctx->pc = 0x2BA50Cu;
    {
        const bool branch_taken_0x2ba50c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA50Cu;
        // 0x2ba510: 0xdc540010  ld          $s4, 0x10($v0) (Delay Slot)
        SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 2), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba50c) {
            ctx->pc = 0x2BA648u;
            goto label_2ba648;
        }
    }
    ctx->pc = 0x2BA514u;
label_2ba514:
    // 0x2ba514: 0x1217004c  beq         $s0, $s7, . + 4 + (0x4C << 2)
label_2ba518:
    if (ctx->pc == 0x2BA518u) {
        ctx->pc = 0x2BA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA514u;
        // 0x2ba518: 0x26330001  addiu       $s3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA51Cu;
        goto label_2ba51c;
    }
    ctx->pc = 0x2BA514u;
    {
        const bool branch_taken_0x2ba514 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 23));
        ctx->pc = 0x2BA518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA514u;
        // 0x2ba518: 0x26330001  addiu       $s3, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba514) {
            ctx->pc = 0x2BA648u;
            goto label_2ba648;
        }
    }
    ctx->pc = 0x2BA51Cu;
label_2ba51c:
    // 0x2ba51c: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x2ba51cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2ba520:
    // 0x2ba520: 0x8e16000c  lw          $s6, 0xC($s0)
    ctx->pc = 0x2ba520u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ba524:
    // 0x2ba524: 0x13c00006  beqz        $fp, . + 4 + (0x6 << 2)
label_2ba528:
    if (ctx->pc == 0x2BA528u) {
        ctx->pc = 0x2BA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA524u;
        // 0x2ba528: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA52Cu;
        goto label_2ba52c;
    }
    ctx->pc = 0x2BA524u;
    {
        const bool branch_taken_0x2ba524 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA524u;
        // 0x2ba528: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba524) {
            ctx->pc = 0x2BA540u;
            goto label_2ba540;
        }
    }
    ctx->pc = 0x2BA52Cu;
label_2ba52c:
    // 0x2ba52c: 0x8e250004  lw          $a1, 0x4($s1)
    ctx->pc = 0x2ba52cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_2ba530:
    // 0x2ba530: 0xc04a78a  jal         func_129E28
label_2ba534:
    if (ctx->pc == 0x2BA534u) {
        ctx->pc = 0x2BA534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA530u;
        // 0x2ba534: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA538u;
        goto label_2ba538;
    }
    ctx->pc = 0x2BA530u;
    SET_GPR_U32(ctx, 31, 0x2BA538u);
    ctx->pc = 0x2BA534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA530u;
    // 0x2ba534: 0x8fa400a0  lw          $a0, 0xA0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129E28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129E28u, 0x2BA530u, 0x2BA538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA538u;
label_2ba538:
    // 0x2ba538: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
label_2ba53c:
    if (ctx->pc == 0x2BA53Cu) {
        ctx->pc = 0x2BA540u;
        goto label_2ba540;
    }
    ctx->pc = 0x2BA538u;
    {
        const bool branch_taken_0x2ba538 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba538) {
            ctx->pc = 0x2BA638u;
            goto label_2ba638;
        }
    }
    ctx->pc = 0x2BA540u;
label_2ba540:
    // 0x2ba540: 0x52a00005  beql        $s5, $zero, . + 4 + (0x5 << 2)
label_2ba544:
    if (ctx->pc == 0x2BA544u) {
        ctx->pc = 0x2BA544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA540u;
        // 0x2ba544: 0xde220010  ld          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA548u;
        goto label_2ba548;
    }
    ctx->pc = 0x2BA540u;
    {
        const bool branch_taken_0x2ba540 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba540) {
            ctx->pc = 0x2BA544u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA540u;
            // 0x2ba544: 0xde220010  ld          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA558u;
            goto label_2ba558;
        }
    }
    ctx->pc = 0x2BA548u;
label_2ba548:
    // 0x2ba548: 0xde220008  ld          $v0, 0x8($s1)
    ctx->pc = 0x2ba548u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 8)));
label_2ba54c:
    // 0x2ba54c: 0x1455003a  bne         $v0, $s5, . + 4 + (0x3A << 2)
label_2ba550:
    if (ctx->pc == 0x2BA550u) {
        ctx->pc = 0x2BA554u;
        goto label_2ba554;
    }
    ctx->pc = 0x2BA54Cu;
    {
        const bool branch_taken_0x2ba54c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 21));
        if (branch_taken_0x2ba54c) {
            ctx->pc = 0x2BA638u;
            goto label_2ba638;
        }
    }
    ctx->pc = 0x2BA554u;
label_2ba554:
    // 0x2ba554: 0xde220010  ld          $v0, 0x10($s1)
    ctx->pc = 0x2ba554u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 16)));
label_2ba558:
    // 0x2ba558: 0x2821824  and         $v1, $s4, $v0
    ctx->pc = 0x2ba558u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
label_2ba55c:
    // 0x2ba55c: 0x10600036  beqz        $v1, . + 4 + (0x36 << 2)
label_2ba560:
    if (ctx->pc == 0x2BA560u) {
        ctx->pc = 0x2BA560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA55Cu;
        // 0x2ba560: 0xdfa80080  ld          $t0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA564u;
        goto label_2ba564;
    }
    ctx->pc = 0x2BA55Cu;
    {
        const bool branch_taken_0x2ba55c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA55Cu;
        // 0x2ba560: 0xdfa80080  ld          $t0, 0x80($sp) (Delay Slot)
        SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba55c) {
            ctx->pc = 0x2BA638u;
            goto label_2ba638;
        }
    }
    ctx->pc = 0x2BA564u;
label_2ba564:
    // 0x2ba564: 0x681024  and         $v0, $v1, $t0
    ctx->pc = 0x2ba564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
label_2ba568:
    // 0x2ba568: 0x14430033  bne         $v0, $v1, . + 4 + (0x33 << 2)
label_2ba56c:
    if (ctx->pc == 0x2BA56Cu) {
        ctx->pc = 0x2BA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA568u;
        // 0x2ba56c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA570u;
        goto label_2ba570;
    }
    ctx->pc = 0x2BA568u;
    {
        const bool branch_taken_0x2ba568 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x2BA56Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA568u;
        // 0x2ba56c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba568) {
            ctx->pc = 0x2BA638u;
            goto label_2ba638;
        }
    }
    ctx->pc = 0x2BA570u;
label_2ba570:
    // 0x2ba570: 0x1642000a  bne         $s2, $v0, . + 4 + (0xA << 2)
label_2ba574:
    if (ctx->pc == 0x2BA574u) {
        ctx->pc = 0x2BA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA570u;
        // 0x2ba574: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA578u;
        goto label_2ba578;
    }
    ctx->pc = 0x2BA570u;
    {
        const bool branch_taken_0x2ba570 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA570u;
        // 0x2ba574: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba570) {
            ctx->pc = 0x2BA59Cu;
            goto label_2ba59c;
        }
    }
    ctx->pc = 0x2BA578u;
label_2ba578:
    // 0x2ba578: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ba578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ba57c:
    // 0x2ba57c: 0x14400014  bnez        $v0, . + 4 + (0x14 << 2)
label_2ba580:
    if (ctx->pc == 0x2BA580u) {
        ctx->pc = 0x2BA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA57Cu;
        // 0x2ba580: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA584u;
        goto label_2ba584;
    }
    ctx->pc = 0x2BA57Cu;
    {
        const bool branch_taken_0x2ba57c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA57Cu;
        // 0x2ba580: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba57c) {
            ctx->pc = 0x2BA5D0u;
            goto label_2ba5d0;
        }
    }
    ctx->pc = 0x2BA584u;
label_2ba584:
    // 0x2ba584: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x2ba584u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_2ba588:
    // 0x2ba588: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ba588u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba58c:
    // 0x2ba58c: 0xc0ae6b8  jal         func_2B9AE0
label_2ba590:
    if (ctx->pc == 0x2BA590u) {
        ctx->pc = 0x2BA590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA58Cu;
        // 0x2ba590: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA594u;
        goto label_2ba594;
    }
    ctx->pc = 0x2BA58Cu;
    SET_GPR_U32(ctx, 31, 0x2BA594u);
    ctx->pc = 0x2BA590u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA58Cu;
    // 0x2ba590: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x2BA58Cu, 0x2BA594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA594u;
label_2ba594:
    // 0x2ba594: 0x1000000d  b           . + 4 + (0xD << 2)
label_2ba598:
    if (ctx->pc == 0x2BA598u) {
        ctx->pc = 0x2BA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA594u;
        // 0x2ba598: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA59Cu;
        goto label_2ba59c;
    }
    ctx->pc = 0x2BA594u;
    {
        const bool branch_taken_0x2ba594 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA598u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA594u;
        // 0x2ba598: 0xae120004  sw          $s2, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba594) {
            ctx->pc = 0x2BA5CCu;
            goto label_2ba5cc;
        }
    }
    ctx->pc = 0x2BA59Cu;
label_2ba59c:
    // 0x2ba59c: 0x16420009  bne         $s2, $v0, . + 4 + (0x9 << 2)
label_2ba5a0:
    if (ctx->pc == 0x2BA5A0u) {
        ctx->pc = 0x2BA5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA59Cu;
        // 0x2ba5a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5A4u;
        goto label_2ba5a4;
    }
    ctx->pc = 0x2BA59Cu;
    {
        const bool branch_taken_0x2ba59c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA59Cu;
        // 0x2ba5a0: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba59c) {
            ctx->pc = 0x2BA5C4u;
            goto label_2ba5c4;
        }
    }
    ctx->pc = 0x2BA5A4u;
label_2ba5a4:
    // 0x2ba5a4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ba5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ba5a8:
    // 0x2ba5a8: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ba5ac:
    if (ctx->pc == 0x2BA5ACu) {
        ctx->pc = 0x2BA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5A8u;
        // 0x2ba5ac: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5B0u;
        goto label_2ba5b0;
    }
    ctx->pc = 0x2BA5A8u;
    {
        const bool branch_taken_0x2ba5a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5A8u;
        // 0x2ba5ac: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5a8) {
            ctx->pc = 0x2BA5CCu;
            goto label_2ba5cc;
        }
    }
    ctx->pc = 0x2BA5B0u;
label_2ba5b0:
    // 0x2ba5b0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x2ba5b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2ba5b4:
    // 0x2ba5b4: 0xc0ae6b8  jal         func_2B9AE0
label_2ba5b8:
    if (ctx->pc == 0x2BA5B8u) {
        ctx->pc = 0x2BA5B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5B4u;
        // 0x2ba5b8: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5BCu;
        goto label_2ba5bc;
    }
    ctx->pc = 0x2BA5B4u;
    SET_GPR_U32(ctx, 31, 0x2BA5BCu);
    ctx->pc = 0x2BA5B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA5B4u;
    // 0x2ba5b8: 0x27a60064  addiu       $a2, $sp, 0x64 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 100));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9AE0u, 0x2BA5B4u, 0x2BA5BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA5BCu;
label_2ba5bc:
    // 0x2ba5bc: 0x10000004  b           . + 4 + (0x4 << 2)
label_2ba5c0:
    if (ctx->pc == 0x2BA5C0u) {
        ctx->pc = 0x2BA5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5BCu;
        // 0x2ba5c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5C4u;
        goto label_2ba5c4;
    }
    ctx->pc = 0x2BA5BCu;
    {
        const bool branch_taken_0x2ba5bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5BCu;
        // 0x2ba5c0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5bc) {
            ctx->pc = 0x2BA5D0u;
            goto label_2ba5d0;
        }
    }
    ctx->pc = 0x2BA5C4u;
label_2ba5c4:
    // 0x2ba5c4: 0x52420001  beql        $s2, $v0, . + 4 + (0x1 << 2)
label_2ba5c8:
    if (ctx->pc == 0x2BA5C8u) {
        ctx->pc = 0x2BA5C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5C4u;
        // 0x2ba5c8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5CCu;
        goto label_2ba5cc;
    }
    ctx->pc = 0x2BA5C4u;
    {
        const bool branch_taken_0x2ba5c4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2ba5c4) {
            ctx->pc = 0x2BA5C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA5C4u;
            // 0x2ba5c8: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA5CCu;
            goto label_2ba5cc;
        }
    }
    ctx->pc = 0x2BA5CCu;
label_2ba5cc:
    // 0x2ba5cc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2ba5ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2ba5d0:
    // 0x2ba5d0: 0x16420019  bne         $s2, $v0, . + 4 + (0x19 << 2)
label_2ba5d4:
    if (ctx->pc == 0x2BA5D4u) {
        ctx->pc = 0x2BA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5D0u;
        // 0x2ba5d4: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5D8u;
        goto label_2ba5d8;
    }
    ctx->pc = 0x2BA5D0u;
    {
        const bool branch_taken_0x2ba5d0 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x2BA5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5D0u;
        // 0x2ba5d4: 0x8fa20060  lw          $v0, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5d0) {
            ctx->pc = 0x2BA638u;
            goto label_2ba638;
        }
    }
    ctx->pc = 0x2BA5D8u;
label_2ba5d8:
    // 0x2ba5d8: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_2ba5dc:
    if (ctx->pc == 0x2BA5DCu) {
        ctx->pc = 0x2BA5DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5D8u;
        // 0x2ba5dc: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5E0u;
        goto label_2ba5e0;
    }
    ctx->pc = 0x2BA5D8u;
    {
        const bool branch_taken_0x2ba5d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ba5d8) {
            ctx->pc = 0x2BA5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA5D8u;
            // 0x2ba5dc: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA5ECu;
            goto label_2ba5ec;
        }
    }
    ctx->pc = 0x2BA5E0u;
label_2ba5e0:
    // 0x2ba5e0: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ba5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ba5e4:
    // 0x2ba5e4: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ba5e8:
    if (ctx->pc == 0x2BA5E8u) {
        ctx->pc = 0x2BA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5E4u;
        // 0x2ba5e8: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA5ECu;
        goto label_2ba5ec;
    }
    ctx->pc = 0x2BA5E4u;
    {
        const bool branch_taken_0x2ba5e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA5E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5E4u;
        // 0x2ba5e8: 0xafa20060  sw          $v0, 0x60($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba5e4) {
            ctx->pc = 0x2BA5F4u;
            goto label_2ba5f4;
        }
    }
    ctx->pc = 0x2BA5ECu;
label_2ba5ec:
    // 0x2ba5ec: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ba5ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ba5f0:
    // 0x2ba5f0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2ba5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2ba5f4:
    // 0x2ba5f4: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2ba5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2ba5f8:
    // 0x2ba5f8: 0x54500004  bnel        $v0, $s0, . + 4 + (0x4 << 2)
label_2ba5fc:
    if (ctx->pc == 0x2BA5FCu) {
        ctx->pc = 0x2BA5FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA5F8u;
        // 0x2ba5fc: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA600u;
        goto label_2ba600;
    }
    ctx->pc = 0x2BA5F8u;
    {
        const bool branch_taken_0x2ba5f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        if (branch_taken_0x2ba5f8) {
            ctx->pc = 0x2BA5FCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA5F8u;
            // 0x2ba5fc: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA60Cu;
            goto label_2ba60c;
        }
    }
    ctx->pc = 0x2BA600u;
label_2ba600:
    // 0x2ba600: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2ba600u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ba604:
    // 0x2ba604: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x2ba604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
label_2ba608:
    // 0x2ba608: 0x8e03000c  lw          $v1, 0xC($s0)
    ctx->pc = 0x2ba608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ba60c:
    // 0x2ba60c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
label_2ba610:
    if (ctx->pc == 0x2BA610u) {
        ctx->pc = 0x2BA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA60Cu;
        // 0x2ba610: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA614u;
        goto label_2ba614;
    }
    ctx->pc = 0x2BA60Cu;
    {
        const bool branch_taken_0x2ba60c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA60Cu;
        // 0x2ba610: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba60c) {
            ctx->pc = 0x2BA61Cu;
            goto label_2ba61c;
        }
    }
    ctx->pc = 0x2BA614u;
label_2ba614:
    // 0x2ba614: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x2ba614u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ba618:
    // 0x2ba618: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x2ba618u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
label_2ba61c:
    // 0x2ba61c: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x2ba61cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2ba620:
    // 0x2ba620: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
label_2ba624:
    if (ctx->pc == 0x2BA624u) {
        ctx->pc = 0x2BA624u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA620u;
        // 0x2ba624: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA628u;
        goto label_2ba628;
    }
    ctx->pc = 0x2BA620u;
    {
        const bool branch_taken_0x2ba620 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba620) {
            ctx->pc = 0x2BA624u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA620u;
            // 0x2ba624: 0xae00000c  sw          $zero, 0xC($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA634u;
            goto label_2ba634;
        }
    }
    ctx->pc = 0x2BA628u;
label_2ba628:
    // 0x2ba628: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x2ba628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ba62c:
    // 0x2ba62c: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x2ba62cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
label_2ba630:
    // 0x2ba630: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x2ba630u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_2ba634:
    // 0x2ba634: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x2ba634u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
label_2ba638:
    // 0x2ba638: 0x1617ffb9  bne         $s0, $s7, . + 4 + (-0x47 << 2)
label_2ba63c:
    if (ctx->pc == 0x2BA63Cu) {
        ctx->pc = 0x2BA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA638u;
        // 0x2ba63c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA640u;
        goto label_2ba640;
    }
    ctx->pc = 0x2BA638u;
    {
        const bool branch_taken_0x2ba638 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 23));
        ctx->pc = 0x2BA63Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA638u;
        // 0x2ba63c: 0x2c0802d  daddu       $s0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba638) {
            ctx->pc = 0x2BA520u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba520;
        }
    }
    ctx->pc = 0x2BA640u;
label_2ba640:
    // 0x2ba640: 0x10000002  b           . + 4 + (0x2 << 2)
label_2ba644:
    if (ctx->pc == 0x2BA644u) {
        ctx->pc = 0x2BA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA640u;
        // 0x2ba644: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA648u;
        goto label_2ba648;
    }
    ctx->pc = 0x2BA640u;
    {
        const bool branch_taken_0x2ba640 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA640u;
        // 0x2ba644: 0x8fa30060  lw          $v1, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba640) {
            ctx->pc = 0x2BA64Cu;
            goto label_2ba64c;
        }
    }
    ctx->pc = 0x2BA648u;
label_2ba648:
    // 0x2ba648: 0x26330001  addiu       $s3, $s1, 0x1
    ctx->pc = 0x2ba648u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_2ba64c:
    // 0x2ba64c: 0x8fa90094  lw          $t1, 0x94($sp)
    ctx->pc = 0x2ba64cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 148)));
label_2ba650:
    // 0x2ba650: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2ba650u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2ba654:
    // 0x2ba654: 0x229102a  slt         $v0, $s1, $t1
    ctx->pc = 0x2ba654u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
label_2ba658:
    // 0x2ba658: 0x1440ff9f  bnez        $v0, . + 4 + (-0x61 << 2)
label_2ba65c:
    if (ctx->pc == 0x2BA65Cu) {
        ctx->pc = 0x2BA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA658u;
        // 0x2ba65c: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA660u;
        goto label_2ba660;
    }
    ctx->pc = 0x2BA658u;
    {
        const bool branch_taken_0x2ba658 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BA65Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA658u;
        // 0x2ba65c: 0x8fa40098  lw          $a0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba658) {
            ctx->pc = 0x2BA4D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba4d8;
        }
    }
    ctx->pc = 0x2BA660u;
label_2ba660:
    // 0x2ba660: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ba664:
    if (ctx->pc == 0x2BA664u) {
        ctx->pc = 0x2BA664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA660u;
        // 0x2ba664: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA668u;
        goto label_2ba668;
    }
    ctx->pc = 0x2BA660u;
    {
        const bool branch_taken_0x2ba660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA660u;
        // 0x2ba664: 0x60802d  daddu       $s0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba660) {
            ctx->pc = 0x2BA670u;
            goto label_2ba670;
        }
    }
    ctx->pc = 0x2BA668u;
label_2ba668:
    // 0x2ba668: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2ba668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2ba66c:
    // 0x2ba66c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x2ba66cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2ba670:
    // 0x2ba670: 0x1200000c  beqz        $s0, . + 4 + (0xC << 2)
label_2ba674:
    if (ctx->pc == 0x2BA674u) {
        ctx->pc = 0x2BA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA670u;
        // 0x2ba674: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA678u;
        goto label_2ba678;
    }
    ctx->pc = 0x2BA670u;
    {
        const bool branch_taken_0x2ba670 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA670u;
        // 0x2ba674: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba670) {
            ctx->pc = 0x2BA6A4u;
            goto label_2ba6a4;
        }
    }
    ctx->pc = 0x2BA678u;
label_2ba678:
    // 0x2ba678: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2ba678u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2ba67c:
    // 0x2ba67c: 0x0  nop
    ctx->pc = 0x2ba67cu;
    // NOP
label_2ba680:
    // 0x2ba680: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_2ba684:
    if (ctx->pc == 0x2BA684u) {
        ctx->pc = 0x2BA684u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA680u;
        // 0x2ba684: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA688u;
        goto label_2ba688;
    }
    ctx->pc = 0x2BA680u;
    {
        const bool branch_taken_0x2ba680 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba680) {
            ctx->pc = 0x2BA684u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA680u;
            // 0x2ba684: 0x8e10000c  lw          $s0, 0xC($s0) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA698u;
            goto label_2ba698;
        }
    }
    ctx->pc = 0x2BA688u;
label_2ba688:
    // 0x2ba688: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2ba688u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2ba68c:
    // 0x2ba68c: 0xc0af10e  jal         func_2BC438
label_2ba690:
    if (ctx->pc == 0x2BA690u) {
        ctx->pc = 0x2BA690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA68Cu;
        // 0x2ba690: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA694u;
        goto label_2ba694;
    }
    ctx->pc = 0x2BA68Cu;
    SET_GPR_U32(ctx, 31, 0x2BA694u);
    ctx->pc = 0x2BA690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA68Cu;
    // 0x2ba690: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC438u, 0x2BA68Cu, 0x2BA694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA694u;
label_2ba694:
    // 0x2ba694: 0x8e10000c  lw          $s0, 0xC($s0)
    ctx->pc = 0x2ba694u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2ba698:
    // 0x2ba698: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
label_2ba69c:
    if (ctx->pc == 0x2BA69Cu) {
        ctx->pc = 0x2BA69Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA698u;
        // 0x2ba69c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA6A0u;
        goto label_2ba6a0;
    }
    ctx->pc = 0x2BA698u;
    {
        const bool branch_taken_0x2ba698 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ba698) {
            ctx->pc = 0x2BA69Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA698u;
            // 0x2ba69c: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA680u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2ba680;
        }
    }
    ctx->pc = 0x2BA6A0u;
label_2ba6a0:
    // 0x2ba6a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2ba6a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2ba6a4:
    // 0x2ba6a4: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2ba6a8:
    if (ctx->pc == 0x2BA6A8u) {
        ctx->pc = 0x2BA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6A4u;
        // 0x2ba6a8: 0x8fa6006c  lw          $a2, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA6ACu;
        goto label_2ba6ac;
    }
    ctx->pc = 0x2BA6A4u;
    {
        const bool branch_taken_0x2ba6a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA6A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6A4u;
        // 0x2ba6a8: 0x8fa6006c  lw          $a2, 0x6C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba6a4) {
            ctx->pc = 0x2BA6D4u;
            goto label_2ba6d4;
        }
    }
    ctx->pc = 0x2BA6ACu;
label_2ba6ac:
    // 0x2ba6ac: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ba6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ba6b0:
    // 0x2ba6b0: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2ba6b4:
    if (ctx->pc == 0x2BA6B4u) {
        ctx->pc = 0x2BA6B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6B0u;
        // 0x2ba6b4: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA6B8u;
        goto label_2ba6b8;
    }
    ctx->pc = 0x2BA6B0u;
    {
        const bool branch_taken_0x2ba6b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba6b0) {
            ctx->pc = 0x2BA6B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BA6B0u;
            // 0x2ba6b4: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BA6C4u;
            goto label_2ba6c4;
        }
    }
    ctx->pc = 0x2BA6B8u;
label_2ba6b8:
    // 0x2ba6b8: 0xc0af176  jal         func_2BC5D8
label_2ba6bc:
    if (ctx->pc == 0x2BA6BCu) {
        ctx->pc = 0x2BA6C0u;
        goto label_2ba6c0;
    }
    ctx->pc = 0x2BA6B8u;
    SET_GPR_U32(ctx, 31, 0x2BA6C0u);
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2BA6B8u, 0x2BA6C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6C0u;
label_2ba6c0:
    // 0x2ba6c0: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x2ba6c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2ba6c4:
    // 0x2ba6c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x2ba6c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2ba6c8:
    // 0x2ba6c8: 0x10800015  beqz        $a0, . + 4 + (0x15 << 2)
label_2ba6cc:
    if (ctx->pc == 0x2BA6CCu) {
        ctx->pc = 0x2BA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6C8u;
        // 0x2ba6cc: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA6D0u;
        goto label_2ba6d0;
    }
    ctx->pc = 0x2BA6C8u;
    {
        const bool branch_taken_0x2ba6c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA6CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6C8u;
        // 0x2ba6cc: 0xac640000  sw          $a0, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba6c8) {
            ctx->pc = 0x2BA720u;
            goto label_2ba720;
        }
    }
    ctx->pc = 0x2BA6D0u;
label_2ba6d0:
    // 0x2ba6d0: 0x8fa6006c  lw          $a2, 0x6C($sp)
    ctx->pc = 0x2ba6d0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2ba6d4:
    // 0x2ba6d4: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_2ba6d8:
    if (ctx->pc == 0x2BA6D8u) {
        ctx->pc = 0x2BA6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6D4u;
        // 0x2ba6d8: 0x8fa80070  lw          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA6DCu;
        goto label_2ba6dc;
    }
    ctx->pc = 0x2BA6D4u;
    {
        const bool branch_taken_0x2ba6d4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA6D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6D4u;
        // 0x2ba6d8: 0x8fa80070  lw          $t0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba6d4) {
            ctx->pc = 0x2BA718u;
            goto label_2ba718;
        }
    }
    ctx->pc = 0x2BA6DCu;
label_2ba6dc:
    // 0x2ba6dc: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2ba6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_2ba6e0:
    // 0x2ba6e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2ba6e4:
    if (ctx->pc == 0x2BA6E4u) {
        ctx->pc = 0x2BA6E8u;
        goto label_2ba6e8;
    }
    ctx->pc = 0x2BA6E0u;
    {
        const bool branch_taken_0x2ba6e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ba6e0) {
            ctx->pc = 0x2BA6F0u;
            goto label_2ba6f0;
        }
    }
    ctx->pc = 0x2BA6E8u;
label_2ba6e8:
    // 0x2ba6e8: 0xc0af176  jal         func_2BC5D8
label_2ba6ec:
    if (ctx->pc == 0x2BA6ECu) {
        ctx->pc = 0x2BA6F0u;
        goto label_2ba6f0;
    }
    ctx->pc = 0x2BA6E8u;
    SET_GPR_U32(ctx, 31, 0x2BA6F0u);
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2BA6E8u, 0x2BA6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6F0u;
label_2ba6f0:
    // 0x2ba6f0: 0xc0aefde  jal         func_2BBF78
label_2ba6f4:
    if (ctx->pc == 0x2BA6F4u) {
        ctx->pc = 0x2BA6F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6F0u;
        // 0x2ba6f4: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA6F8u;
        goto label_2ba6f8;
    }
    ctx->pc = 0x2BA6F0u;
    SET_GPR_U32(ctx, 31, 0x2BA6F8u);
    ctx->pc = 0x2BA6F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA6F0u;
    // 0x2ba6f4: 0x8fa40070  lw          $a0, 0x70($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBF78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBF78u, 0x2BA6F0u, 0x2BA6F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA6F8u;
label_2ba6f8:
    // 0x2ba6f8: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x2ba6f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
label_2ba6fc:
    // 0x2ba6fc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2ba700:
    if (ctx->pc == 0x2BA700u) {
        ctx->pc = 0x2BA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6FCu;
        // 0x2ba700: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA704u;
        goto label_2ba704;
    }
    ctx->pc = 0x2BA6FCu;
    {
        const bool branch_taken_0x2ba6fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA6FCu;
        // 0x2ba700: 0xace20000  sw          $v0, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba6fc) {
            ctx->pc = 0x2BA720u;
            goto label_2ba720;
        }
    }
    ctx->pc = 0x2BA704u;
label_2ba704:
    // 0x2ba704: 0x3c05002b  lui         $a1, 0x2B
    ctx->pc = 0x2ba704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)43 << 16));
label_2ba708:
    // 0x2ba708: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2ba708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2ba70c:
    // 0x2ba70c: 0xc0aefd8  jal         func_2BBF60
label_2ba710:
    if (ctx->pc == 0x2BA710u) {
        ctx->pc = 0x2BA710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA70Cu;
        // 0x2ba710: 0x24a506d8  addiu       $a1, $a1, 0x6D8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA714u;
        goto label_2ba714;
    }
    ctx->pc = 0x2BA70Cu;
    SET_GPR_U32(ctx, 31, 0x2BA714u);
    ctx->pc = 0x2BA710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA70Cu;
    // 0x2ba710: 0x24a506d8  addiu       $a1, $a1, 0x6D8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1752));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BBF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BBF60u, 0x2BA70Cu, 0x2BA714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA714u;
label_2ba714:
    // 0x2ba714: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x2ba714u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2ba718:
    // 0x2ba718: 0xafa80074  sw          $t0, 0x74($sp)
    ctx->pc = 0x2ba718u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 8));
label_2ba71c:
    // 0x2ba71c: 0xafa00070  sw          $zero, 0x70($sp)
    ctx->pc = 0x2ba71cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 0));
label_2ba720:
    // 0x2ba720: 0x8fa90078  lw          $t1, 0x78($sp)
    ctx->pc = 0x2ba720u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
label_2ba724:
    // 0x2ba724: 0x11200004  beqz        $t1, . + 4 + (0x4 << 2)
label_2ba728:
    if (ctx->pc == 0x2BA728u) {
        ctx->pc = 0x2BA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA724u;
        // 0x2ba728: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA72Cu;
        goto label_2ba72c;
    }
    ctx->pc = 0x2BA724u;
    {
        const bool branch_taken_0x2ba724 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA724u;
        // 0x2ba728: 0x8fa20098  lw          $v0, 0x98($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba724) {
            ctx->pc = 0x2BA738u;
            goto label_2ba738;
        }
    }
    ctx->pc = 0x2BA72Cu;
label_2ba72c:
    // 0x2ba72c: 0xc0a8c0a  jal         func_2A3028
label_2ba730:
    if (ctx->pc == 0x2BA730u) {
        ctx->pc = 0x2BA730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA72Cu;
        // 0x2ba730: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA734u;
        goto label_2ba734;
    }
    ctx->pc = 0x2BA72Cu;
    SET_GPR_U32(ctx, 31, 0x2BA734u);
    ctx->pc = 0x2BA730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA72Cu;
    // 0x2ba730: 0x120202d  daddu       $a0, $t1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2BA72Cu, 0x2BA734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA734u;
label_2ba734:
    // 0x2ba734: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x2ba734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
label_2ba738:
    // 0x2ba738: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2ba73c:
    if (ctx->pc == 0x2BA73Cu) {
        ctx->pc = 0x2BA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA738u;
        // 0x2ba73c: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA740u;
        goto label_2ba740;
    }
    ctx->pc = 0x2BA738u;
    {
        const bool branch_taken_0x2ba738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA73Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA738u;
        // 0x2ba73c: 0x8fa30070  lw          $v1, 0x70($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba738) {
            ctx->pc = 0x2BA74Cu;
            goto label_2ba74c;
        }
    }
    ctx->pc = 0x2BA740u;
label_2ba740:
    // 0x2ba740: 0xc0a8c0a  jal         func_2A3028
label_2ba744:
    if (ctx->pc == 0x2BA744u) {
        ctx->pc = 0x2BA744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA740u;
        // 0x2ba744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA748u;
        goto label_2ba748;
    }
    ctx->pc = 0x2BA740u;
    SET_GPR_U32(ctx, 31, 0x2BA748u);
    ctx->pc = 0x2BA744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA740u;
    // 0x2ba744: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2BA740u, 0x2BA748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA748u;
label_2ba748:
    // 0x2ba748: 0x8fa30070  lw          $v1, 0x70($sp)
    ctx->pc = 0x2ba748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
label_2ba74c:
    // 0x2ba74c: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_2ba750:
    if (ctx->pc == 0x2BA750u) {
        ctx->pc = 0x2BA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA74Cu;
        // 0x2ba750: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA754u;
        goto label_2ba754;
    }
    ctx->pc = 0x2BA74Cu;
    {
        const bool branch_taken_0x2ba74c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA74Cu;
        // 0x2ba750: 0x8fa40088  lw          $a0, 0x88($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba74c) {
            ctx->pc = 0x2BA760u;
            goto label_2ba760;
        }
    }
    ctx->pc = 0x2BA754u;
label_2ba754:
    // 0x2ba754: 0xc0af176  jal         func_2BC5D8
label_2ba758:
    if (ctx->pc == 0x2BA758u) {
        ctx->pc = 0x2BA758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA754u;
        // 0x2ba758: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA75Cu;
        goto label_2ba75c;
    }
    ctx->pc = 0x2BA754u;
    SET_GPR_U32(ctx, 31, 0x2BA75Cu);
    ctx->pc = 0x2BA758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA754u;
    // 0x2ba758: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2BA754u, 0x2BA75Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA75Cu;
label_2ba75c:
    // 0x2ba75c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x2ba75cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
label_2ba760:
    // 0x2ba760: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
label_2ba764:
    if (ctx->pc == 0x2BA764u) {
        ctx->pc = 0x2BA764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA760u;
        // 0x2ba764: 0x8fa6008c  lw          $a2, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA768u;
        goto label_2ba768;
    }
    ctx->pc = 0x2BA760u;
    {
        const bool branch_taken_0x2ba760 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA760u;
        // 0x2ba764: 0x8fa6008c  lw          $a2, 0x8C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba760) {
            ctx->pc = 0x2BA774u;
            goto label_2ba774;
        }
    }
    ctx->pc = 0x2BA768u;
label_2ba768:
    // 0x2ba768: 0xc0af176  jal         func_2BC5D8
label_2ba76c:
    if (ctx->pc == 0x2BA76Cu) {
        ctx->pc = 0x2BA770u;
        goto label_2ba770;
    }
    ctx->pc = 0x2BA768u;
    SET_GPR_U32(ctx, 31, 0x2BA770u);
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2BA768u, 0x2BA770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA770u;
label_2ba770:
    // 0x2ba770: 0x8fa6008c  lw          $a2, 0x8C($sp)
    ctx->pc = 0x2ba770u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
label_2ba774:
    // 0x2ba774: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
label_2ba778:
    if (ctx->pc == 0x2BA778u) {
        ctx->pc = 0x2BA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA774u;
        // 0x2ba778: 0x8fa7009c  lw          $a3, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA77Cu;
        goto label_2ba77c;
    }
    ctx->pc = 0x2BA774u;
    {
        const bool branch_taken_0x2ba774 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA774u;
        // 0x2ba778: 0x8fa7009c  lw          $a3, 0x9C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba774) {
            ctx->pc = 0x2BA788u;
            goto label_2ba788;
        }
    }
    ctx->pc = 0x2BA77Cu;
label_2ba77c:
    // 0x2ba77c: 0xc0af176  jal         func_2BC5D8
label_2ba780:
    if (ctx->pc == 0x2BA780u) {
        ctx->pc = 0x2BA780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA77Cu;
        // 0x2ba780: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA784u;
        goto label_2ba784;
    }
    ctx->pc = 0x2BA77Cu;
    SET_GPR_U32(ctx, 31, 0x2BA784u);
    ctx->pc = 0x2BA780u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA77Cu;
    // 0x2ba780: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2BC5D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2BC5D8u, 0x2BA77Cu, 0x2BA784u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA784u;
label_2ba784:
    // 0x2ba784: 0x8fa7009c  lw          $a3, 0x9C($sp)
    ctx->pc = 0x2ba784u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 156)));
label_2ba788:
    // 0x2ba788: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
label_2ba78c:
    if (ctx->pc == 0x2BA78Cu) {
        ctx->pc = 0x2BA78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA788u;
        // 0x2ba78c: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA790u;
        goto label_2ba790;
    }
    ctx->pc = 0x2BA788u;
    {
        const bool branch_taken_0x2ba788 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA78Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA788u;
        // 0x2ba78c: 0x8fa20074  lw          $v0, 0x74($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba788) {
            ctx->pc = 0x2BA79Cu;
            goto label_2ba79c;
        }
    }
    ctx->pc = 0x2BA790u;
label_2ba790:
    // 0x2ba790: 0xc0a8c0a  jal         func_2A3028
label_2ba794:
    if (ctx->pc == 0x2BA794u) {
        ctx->pc = 0x2BA794u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA790u;
        // 0x2ba794: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA798u;
        goto label_2ba798;
    }
    ctx->pc = 0x2BA790u;
    SET_GPR_U32(ctx, 31, 0x2BA798u);
    ctx->pc = 0x2BA794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA790u;
    // 0x2ba794: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A3028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3028u, 0x2BA790u, 0x2BA798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA798u;
label_2ba798:
    // 0x2ba798: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x2ba798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
label_2ba79c:
    // 0x2ba79c: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x2ba79cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
label_2ba7a0:
    // 0x2ba7a0: 0xdfbe0160  ld          $fp, 0x160($sp)
    ctx->pc = 0x2ba7a0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 352)));
label_2ba7a4:
    // 0x2ba7a4: 0xdfb70150  ld          $s7, 0x150($sp)
    ctx->pc = 0x2ba7a4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 336)));
label_2ba7a8:
    // 0x2ba7a8: 0xdfb60140  ld          $s6, 0x140($sp)
    ctx->pc = 0x2ba7a8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 320)));
label_2ba7ac:
    // 0x2ba7ac: 0xdfb50130  ld          $s5, 0x130($sp)
    ctx->pc = 0x2ba7acu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 304)));
label_2ba7b0:
    // 0x2ba7b0: 0xdfb40120  ld          $s4, 0x120($sp)
    ctx->pc = 0x2ba7b0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 288)));
label_2ba7b4:
    // 0x2ba7b4: 0xdfb30110  ld          $s3, 0x110($sp)
    ctx->pc = 0x2ba7b4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 272)));
label_2ba7b8:
    // 0x2ba7b8: 0xdfb20100  ld          $s2, 0x100($sp)
    ctx->pc = 0x2ba7b8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2ba7bc:
    // 0x2ba7bc: 0xdfb100f0  ld          $s1, 0xF0($sp)
    ctx->pc = 0x2ba7bcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2ba7c0:
    // 0x2ba7c0: 0xdfb000e0  ld          $s0, 0xE0($sp)
    ctx->pc = 0x2ba7c0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2ba7c4:
    // 0x2ba7c4: 0x3e00008  jr          $ra
label_2ba7c8:
    if (ctx->pc == 0x2BA7C8u) {
        ctx->pc = 0x2BA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7C4u;
        // 0x2ba7c8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA7CCu;
        goto label_2ba7cc;
    }
    ctx->pc = 0x2BA7C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BA7C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA7C4u;
        // 0x2ba7c8: 0x27bd0180  addiu       $sp, $sp, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA7C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BA7CCu;
label_2ba7cc:
    // 0x2ba7cc: 0x0  nop
    ctx->pc = 0x2ba7ccu;
    // NOP
label_2ba7d0:
    // 0x2ba7d0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x2ba7d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_2ba7d4:
    // 0x2ba7d4: 0xffbe00d0  sd          $fp, 0xD0($sp)
    ctx->pc = 0x2ba7d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 30));
label_2ba7d8:
    // 0x2ba7d8: 0xffb600b0  sd          $s6, 0xB0($sp)
    ctx->pc = 0x2ba7d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 22));
label_2ba7dc:
    // 0x2ba7dc: 0xc0f02d  daddu       $fp, $a2, $zero
    ctx->pc = 0x2ba7dcu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2ba7e0:
    // 0x2ba7e0: 0xffb40090  sd          $s4, 0x90($sp)
    ctx->pc = 0x2ba7e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 20));
label_2ba7e4:
    // 0x2ba7e4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x2ba7e4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2ba7e8:
    // 0x2ba7e8: 0xffbf00e0  sd          $ra, 0xE0($sp)
    ctx->pc = 0x2ba7e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 31));
label_2ba7ec:
    // 0x2ba7ec: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x2ba7ecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2ba7f0:
    // 0x2ba7f0: 0xffb700c0  sd          $s7, 0xC0($sp)
    ctx->pc = 0x2ba7f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 23));
label_2ba7f4:
    // 0x2ba7f4: 0xffb500a0  sd          $s5, 0xA0($sp)
    ctx->pc = 0x2ba7f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 21));
label_2ba7f8:
    // 0x2ba7f8: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x2ba7f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
label_2ba7fc:
    // 0x2ba7fc: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x2ba7fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
label_2ba800:
    // 0x2ba800: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x2ba800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
label_2ba804:
    // 0x2ba804: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x2ba804u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
label_2ba808:
    // 0x2ba808: 0xded20010  ld          $s2, 0x10($s6)
    ctx->pc = 0x2ba808u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 22), 16)));
label_2ba80c:
    // 0x2ba80c: 0x121338  dsll        $v0, $s2, 12
    ctx->pc = 0x2ba80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) << 12);
label_2ba810:
    // 0x2ba810: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ba810u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ba814:
    // 0x2ba814: 0x30450001  andi        $a1, $v0, 0x1
    ctx->pc = 0x2ba814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_2ba818:
    // 0x2ba818: 0x10a00004  beqz        $a1, . + 4 + (0x4 << 2)
label_2ba81c:
    if (ctx->pc == 0x2BA81Cu) {
        ctx->pc = 0x2BA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA818u;
        // 0x2ba81c: 0xded10018  ld          $s1, 0x18($s6) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA820u;
        goto label_2ba820;
    }
    ctx->pc = 0x2BA818u;
    {
        const bool branch_taken_0x2ba818 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA81Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA818u;
        // 0x2ba81c: 0xded10018  ld          $s1, 0x18($s6) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 22), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba818) {
            ctx->pc = 0x2BA82Cu;
            goto label_2ba82c;
        }
    }
    ctx->pc = 0x2BA820u;
label_2ba820:
    // 0x2ba820: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba820u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba824:
    // 0x2ba824: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ba828:
    if (ctx->pc == 0x2BA828u) {
        ctx->pc = 0x2BA828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA824u;
        // 0x2ba828: 0x2442e790  addiu       $v0, $v0, -0x1870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA82Cu;
        goto label_2ba82c;
    }
    ctx->pc = 0x2BA824u;
    {
        const bool branch_taken_0x2ba824 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA828u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA824u;
        // 0x2ba828: 0x2442e790  addiu       $v0, $v0, -0x1870 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961040));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba824) {
            ctx->pc = 0x2BA834u;
            goto label_2ba834;
        }
    }
    ctx->pc = 0x2BA82Cu;
label_2ba82c:
    // 0x2ba82c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba82cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba830:
    // 0x2ba830: 0x2442e798  addiu       $v0, $v0, -0x1868
    ctx->pc = 0x2ba830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961048));
label_2ba834:
    // 0x2ba834: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x2ba834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_2ba838:
    // 0x2ba838: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba838u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba83c:
    // 0x2ba83c: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2ba83cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_2ba840:
    // 0x2ba840: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ba844:
    if (ctx->pc == 0x2BA844u) {
        ctx->pc = 0x2BA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA840u;
        // 0x2ba844: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA848u;
        goto label_2ba848;
    }
    ctx->pc = 0x2BA840u;
    {
        const bool branch_taken_0x2ba840 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA840u;
        // 0x2ba844: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba840) {
            ctx->pc = 0x2BA850u;
            goto label_2ba850;
        }
    }
    ctx->pc = 0x2BA848u;
label_2ba848:
    // 0x2ba848: 0x10000009  b           . + 4 + (0x9 << 2)
label_2ba84c:
    if (ctx->pc == 0x2BA84Cu) {
        ctx->pc = 0x2BA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA848u;
        // 0x2ba84c: 0x2457e5f8  addiu       $s7, $v0, -0x1A08 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA850u;
        goto label_2ba850;
    }
    ctx->pc = 0x2BA848u;
    {
        const bool branch_taken_0x2ba848 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA84Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA848u;
        // 0x2ba84c: 0x2457e5f8  addiu       $s7, $v0, -0x1A08 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960632));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba848) {
            ctx->pc = 0x2BA870u;
            goto label_2ba870;
        }
    }
    ctx->pc = 0x2BA850u;
label_2ba850:
    // 0x2ba850: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x2ba850u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
label_2ba854:
    // 0x2ba854: 0x2421024  and         $v0, $s2, $v0
    ctx->pc = 0x2ba854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_2ba858:
    // 0x2ba858: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2ba85c:
    if (ctx->pc == 0x2BA85Cu) {
        ctx->pc = 0x2BA85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA858u;
        // 0x2ba85c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA860u;
        goto label_2ba860;
    }
    ctx->pc = 0x2BA858u;
    {
        const bool branch_taken_0x2ba858 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA85Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA858u;
        // 0x2ba85c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba858) {
            ctx->pc = 0x2BA868u;
            goto label_2ba868;
        }
    }
    ctx->pc = 0x2BA860u;
label_2ba860:
    // 0x2ba860: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ba864:
    if (ctx->pc == 0x2BA864u) {
        ctx->pc = 0x2BA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA860u;
        // 0x2ba864: 0x2457e5f0  addiu       $s7, $v0, -0x1A10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960624));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA868u;
        goto label_2ba868;
    }
    ctx->pc = 0x2BA860u;
    {
        const bool branch_taken_0x2ba860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA860u;
        // 0x2ba864: 0x2457e5f0  addiu       $s7, $v0, -0x1A10 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba860) {
            ctx->pc = 0x2BA870u;
            goto label_2ba870;
        }
    }
    ctx->pc = 0x2BA868u;
label_2ba868:
    // 0x2ba868: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba868u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba86c:
    // 0x2ba86c: 0x2457e7a0  addiu       $s7, $v0, -0x1860
    ctx->pc = 0x2ba86cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
label_2ba870:
    // 0x2ba870: 0x3242001f  andi        $v0, $s2, 0x1F
    ctx->pc = 0x2ba870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)31);
label_2ba874:
    // 0x2ba874: 0x6442ffff  daddiu      $v0, $v0, -0x1
    ctx->pc = 0x2ba874u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)4294967295);
label_2ba878:
    // 0x2ba878: 0x2c430010  sltiu       $v1, $v0, 0x10
    ctx->pc = 0x2ba878u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
label_2ba87c:
    // 0x2ba87c: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
label_2ba880:
    if (ctx->pc == 0x2BA880u) {
        ctx->pc = 0x2BA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA87Cu;
        // 0x2ba880: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA884u;
        goto label_2ba884;
    }
    ctx->pc = 0x2BA87Cu;
    {
        const bool branch_taken_0x2ba87c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA87Cu;
        // 0x2ba880: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba87c) {
            ctx->pc = 0x2BA924u;
            goto label_2ba924;
        }
    }
    ctx->pc = 0x2BA884u;
label_2ba884:
    // 0x2ba884: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ba884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ba888:
    // 0x2ba888: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ba888u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ba88c:
    // 0x2ba88c: 0x2463e7f0  addiu       $v1, $v1, -0x1810
    ctx->pc = 0x2ba88cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961136));
label_2ba890:
    // 0x2ba890: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x2ba890u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2ba894:
    // 0x2ba894: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2ba894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2ba898:
    // 0x2ba898: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2ba898u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2ba89c:
    // 0x2ba89c: 0x800008  jr          $a0
label_2ba8a0:
    if (ctx->pc == 0x2BA8A0u) {
        ctx->pc = 0x2BA8A4u;
        goto label_2ba8a4;
    }
    ctx->pc = 0x2BA89Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2BA8A4u: goto label_2ba8a4;
            case 0x2BA8C8u: goto label_2ba8c8;
            case 0x2BA8D4u: goto label_2ba8d4;
            case 0x2BA8E0u: goto label_2ba8e0;
            case 0x2BA8ECu: goto label_2ba8ec;
            case 0x2BA924u: goto label_2ba924;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BA89Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2BA8A4u;
label_2ba8a4:
    // 0x2ba8a4: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2ba8a8:
    if (ctx->pc == 0x2BA8A8u) {
        ctx->pc = 0x2BA8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8A4u;
        // 0x2ba8a8: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8ACu;
        goto label_2ba8ac;
    }
    ctx->pc = 0x2BA8A4u;
    {
        const bool branch_taken_0x2ba8a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8A4u;
        // 0x2ba8a8: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8a4) {
            ctx->pc = 0x2BA8BCu;
            goto label_2ba8bc;
        }
    }
    ctx->pc = 0x2BA8ACu;
label_2ba8ac:
    // 0x2ba8ac: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ba8acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2ba8b0:
    // 0x2ba8b0: 0x3226ff00  andi        $a2, $s1, 0xFF00
    ctx->pc = 0x2ba8b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
label_2ba8b4:
    // 0x2ba8b4: 0x10000012  b           . + 4 + (0x12 << 2)
label_2ba8b8:
    if (ctx->pc == 0x2BA8B8u) {
        ctx->pc = 0x2BA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8B4u;
        // 0x2ba8b8: 0x24a5e7a8  addiu       $a1, $a1, -0x1858 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961064));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8BCu;
        goto label_2ba8bc;
    }
    ctx->pc = 0x2BA8B4u;
    {
        const bool branch_taken_0x2ba8b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8B4u;
        // 0x2ba8b8: 0x24a5e7a8  addiu       $a1, $a1, -0x1858 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961064));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8b4) {
            ctx->pc = 0x2BA900u;
            goto label_2ba900;
        }
    }
    ctx->pc = 0x2BA8BCu;
label_2ba8bc:
    // 0x2ba8bc: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba8c0:
    // 0x2ba8c0: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2ba8c4:
    if (ctx->pc == 0x2BA8C4u) {
        ctx->pc = 0x2BA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8C0u;
        // 0x2ba8c4: 0x2453e620  addiu       $s3, $v0, -0x19E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8C8u;
        goto label_2ba8c8;
    }
    ctx->pc = 0x2BA8C0u;
    {
        const bool branch_taken_0x2ba8c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8C0u;
        // 0x2ba8c4: 0x2453e620  addiu       $s3, $v0, -0x19E0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8c0) {
            ctx->pc = 0x2BA92Cu;
            goto label_2ba92c;
        }
    }
    ctx->pc = 0x2BA8C8u;
label_2ba8c8:
    // 0x2ba8c8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba8cc:
    // 0x2ba8cc: 0x10000017  b           . + 4 + (0x17 << 2)
label_2ba8d0:
    if (ctx->pc == 0x2BA8D0u) {
        ctx->pc = 0x2BA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8CCu;
        // 0x2ba8d0: 0x2453e7b0  addiu       $s3, $v0, -0x1850 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8D4u;
        goto label_2ba8d4;
    }
    ctx->pc = 0x2BA8CCu;
    {
        const bool branch_taken_0x2ba8cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8CCu;
        // 0x2ba8d0: 0x2453e7b0  addiu       $s3, $v0, -0x1850 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961072));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8cc) {
            ctx->pc = 0x2BA92Cu;
            goto label_2ba92c;
        }
    }
    ctx->pc = 0x2BA8D4u;
label_2ba8d4:
    // 0x2ba8d4: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba8d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba8d8:
    // 0x2ba8d8: 0x10000014  b           . + 4 + (0x14 << 2)
label_2ba8dc:
    if (ctx->pc == 0x2BA8DCu) {
        ctx->pc = 0x2BA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8D8u;
        // 0x2ba8dc: 0x2453e7b8  addiu       $s3, $v0, -0x1848 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961080));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8E0u;
        goto label_2ba8e0;
    }
    ctx->pc = 0x2BA8D8u;
    {
        const bool branch_taken_0x2ba8d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8D8u;
        // 0x2ba8dc: 0x2453e7b8  addiu       $s3, $v0, -0x1848 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961080));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8d8) {
            ctx->pc = 0x2BA92Cu;
            goto label_2ba92c;
        }
    }
    ctx->pc = 0x2BA8E0u;
label_2ba8e0:
    // 0x2ba8e0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba8e4:
    // 0x2ba8e4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2ba8e8:
    if (ctx->pc == 0x2BA8E8u) {
        ctx->pc = 0x2BA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8E4u;
        // 0x2ba8e8: 0x2453e7c0  addiu       $s3, $v0, -0x1840 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8ECu;
        goto label_2ba8ec;
    }
    ctx->pc = 0x2BA8E4u;
    {
        const bool branch_taken_0x2ba8e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8E4u;
        // 0x2ba8e8: 0x2453e7c0  addiu       $s3, $v0, -0x1840 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8e4) {
            ctx->pc = 0x2BA92Cu;
            goto label_2ba92c;
        }
    }
    ctx->pc = 0x2BA8ECu;
label_2ba8ec:
    // 0x2ba8ec: 0x10a0000a  beqz        $a1, . + 4 + (0xA << 2)
label_2ba8f0:
    if (ctx->pc == 0x2BA8F0u) {
        ctx->pc = 0x2BA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8ECu;
        // 0x2ba8f0: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA8F4u;
        goto label_2ba8f4;
    }
    ctx->pc = 0x2BA8ECu;
    {
        const bool branch_taken_0x2ba8ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA8ECu;
        // 0x2ba8f0: 0x27b00020  addiu       $s0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba8ec) {
            ctx->pc = 0x2BA918u;
            goto label_2ba918;
        }
    }
    ctx->pc = 0x2BA8F4u;
label_2ba8f4:
    // 0x2ba8f4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2ba8f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2ba8f8:
    // 0x2ba8f8: 0x3226ff00  andi        $a2, $s1, 0xFF00
    ctx->pc = 0x2ba8f8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)65280);
label_2ba8fc:
    // 0x2ba8fc: 0x24a5e7d0  addiu       $a1, $a1, -0x1830
    ctx->pc = 0x2ba8fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961104));
label_2ba900:
    // 0x2ba900: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x2ba900u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
label_2ba904:
    // 0x2ba904: 0x6303f  dsra32      $a2, $a2, 0
    ctx->pc = 0x2ba904u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 0));
label_2ba908:
    // 0x2ba908: 0xc04a5f2  jal         func_1297C8
label_2ba90c:
    if (ctx->pc == 0x2BA90Cu) {
        ctx->pc = 0x2BA90Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA908u;
        // 0x2ba90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA910u;
        goto label_2ba910;
    }
    ctx->pc = 0x2BA908u;
    SET_GPR_U32(ctx, 31, 0x2BA910u);
    ctx->pc = 0x2BA90Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BA908u;
    // 0x2ba90c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2BA908u, 0x2BA910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BA910u;
label_2ba910:
    // 0x2ba910: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ba914:
    if (ctx->pc == 0x2BA914u) {
        ctx->pc = 0x2BA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA910u;
        // 0x2ba914: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA918u;
        goto label_2ba918;
    }
    ctx->pc = 0x2BA910u;
    {
        const bool branch_taken_0x2ba910 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA914u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA910u;
        // 0x2ba914: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba910) {
            ctx->pc = 0x2BA92Cu;
            goto label_2ba92c;
        }
    }
    ctx->pc = 0x2BA918u;
label_2ba918:
    // 0x2ba918: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba918u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba91c:
    // 0x2ba91c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ba920:
    if (ctx->pc == 0x2BA920u) {
        ctx->pc = 0x2BA920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA91Cu;
        // 0x2ba920: 0x2453e6b8  addiu       $s3, $v0, -0x1948 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA924u;
        goto label_2ba924;
    }
    ctx->pc = 0x2BA91Cu;
    {
        const bool branch_taken_0x2ba91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA91Cu;
        // 0x2ba920: 0x2453e6b8  addiu       $s3, $v0, -0x1948 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba91c) {
            ctx->pc = 0x2BA92Cu;
            goto label_2ba92c;
        }
    }
    ctx->pc = 0x2BA924u;
label_2ba924:
    // 0x2ba924: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba928:
    // 0x2ba928: 0x2453e7a0  addiu       $s3, $v0, -0x1860
    ctx->pc = 0x2ba928u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
label_2ba92c:
    // 0x2ba92c: 0x324303e0  andi        $v1, $s2, 0x3E0
    ctx->pc = 0x2ba92cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)992);
label_2ba930:
    // 0x2ba930: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2ba930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2ba934:
    // 0x2ba934: 0x10620019  beq         $v1, $v0, . + 4 + (0x19 << 2)
label_2ba938:
    if (ctx->pc == 0x2BA938u) {
        ctx->pc = 0x2BA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA934u;
        // 0x2ba938: 0x2c620081  sltiu       $v0, $v1, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA93Cu;
        goto label_2ba93c;
    }
    ctx->pc = 0x2BA934u;
    {
        const bool branch_taken_0x2ba934 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA934u;
        // 0x2ba938: 0x2c620081  sltiu       $v0, $v1, 0x81 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)129) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba934) {
            ctx->pc = 0x2BA99Cu;
            goto label_2ba99c;
        }
    }
    ctx->pc = 0x2BA93Cu;
label_2ba93c:
    // 0x2ba93c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_2ba940:
    if (ctx->pc == 0x2BA940u) {
        ctx->pc = 0x2BA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA93Cu;
        // 0x2ba940: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA944u;
        goto label_2ba944;
    }
    ctx->pc = 0x2BA93Cu;
    {
        const bool branch_taken_0x2ba93c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA93Cu;
        // 0x2ba940: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba93c) {
            ctx->pc = 0x2BA95Cu;
            goto label_2ba95c;
        }
    }
    ctx->pc = 0x2BA944u;
label_2ba944:
    // 0x2ba944: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
label_2ba948:
    if (ctx->pc == 0x2BA948u) {
        ctx->pc = 0x2BA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA944u;
        // 0x2ba948: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA94Cu;
        goto label_2ba94c;
    }
    ctx->pc = 0x2BA944u;
    {
        const bool branch_taken_0x2ba944 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA944u;
        // 0x2ba948: 0x24020040  addiu       $v0, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba944) {
            ctx->pc = 0x2BA978u;
            goto label_2ba978;
        }
    }
    ctx->pc = 0x2BA94Cu;
label_2ba94c:
    // 0x2ba94c: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
label_2ba950:
    if (ctx->pc == 0x2BA950u) {
        ctx->pc = 0x2BA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA94Cu;
        // 0x2ba950: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA954u;
        goto label_2ba954;
    }
    ctx->pc = 0x2BA94Cu;
    {
        const bool branch_taken_0x2ba94c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA94Cu;
        // 0x2ba950: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba94c) {
            ctx->pc = 0x2BA984u;
            goto label_2ba984;
        }
    }
    ctx->pc = 0x2BA954u;
label_2ba954:
    // 0x2ba954: 0x10000013  b           . + 4 + (0x13 << 2)
label_2ba958:
    if (ctx->pc == 0x2BA958u) {
        ctx->pc = 0x2BA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA954u;
        // 0x2ba958: 0x2455e7a0  addiu       $s5, $v0, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA95Cu;
        goto label_2ba95c;
    }
    ctx->pc = 0x2BA954u;
    {
        const bool branch_taken_0x2ba954 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA954u;
        // 0x2ba958: 0x2455e7a0  addiu       $s5, $v0, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba954) {
            ctx->pc = 0x2BA9A4u;
            goto label_2ba9a4;
        }
    }
    ctx->pc = 0x2BA95Cu;
label_2ba95c:
    // 0x2ba95c: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2ba95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_2ba960:
    // 0x2ba960: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_2ba964:
    if (ctx->pc == 0x2BA964u) {
        ctx->pc = 0x2BA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA960u;
        // 0x2ba964: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA968u;
        goto label_2ba968;
    }
    ctx->pc = 0x2BA960u;
    {
        const bool branch_taken_0x2ba960 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA964u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA960u;
        // 0x2ba964: 0x24020200  addiu       $v0, $zero, 0x200 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba960) {
            ctx->pc = 0x2BA99Cu;
            goto label_2ba99c;
        }
    }
    ctx->pc = 0x2BA968u;
label_2ba968:
    // 0x2ba968: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
label_2ba96c:
    if (ctx->pc == 0x2BA96Cu) {
        ctx->pc = 0x2BA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA968u;
        // 0x2ba96c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA970u;
        goto label_2ba970;
    }
    ctx->pc = 0x2BA968u;
    {
        const bool branch_taken_0x2ba968 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA968u;
        // 0x2ba96c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba968) {
            ctx->pc = 0x2BA990u;
            goto label_2ba990;
        }
    }
    ctx->pc = 0x2BA970u;
label_2ba970:
    // 0x2ba970: 0x1000000c  b           . + 4 + (0xC << 2)
label_2ba974:
    if (ctx->pc == 0x2BA974u) {
        ctx->pc = 0x2BA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA970u;
        // 0x2ba974: 0x2455e7a0  addiu       $s5, $v0, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA978u;
        goto label_2ba978;
    }
    ctx->pc = 0x2BA970u;
    {
        const bool branch_taken_0x2ba970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA970u;
        // 0x2ba974: 0x2455e7a0  addiu       $s5, $v0, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba970) {
            ctx->pc = 0x2BA9A4u;
            goto label_2ba9a4;
        }
    }
    ctx->pc = 0x2BA978u;
label_2ba978:
    // 0x2ba978: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba978u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba97c:
    // 0x2ba97c: 0x10000009  b           . + 4 + (0x9 << 2)
label_2ba980:
    if (ctx->pc == 0x2BA980u) {
        ctx->pc = 0x2BA980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA97Cu;
        // 0x2ba980: 0x2455e620  addiu       $s5, $v0, -0x19E0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960672));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA984u;
        goto label_2ba984;
    }
    ctx->pc = 0x2BA97Cu;
    {
        const bool branch_taken_0x2ba97c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA97Cu;
        // 0x2ba980: 0x2455e620  addiu       $s5, $v0, -0x19E0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba97c) {
            ctx->pc = 0x2BA9A4u;
            goto label_2ba9a4;
        }
    }
    ctx->pc = 0x2BA984u;
label_2ba984:
    // 0x2ba984: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba988:
    // 0x2ba988: 0x10000006  b           . + 4 + (0x6 << 2)
label_2ba98c:
    if (ctx->pc == 0x2BA98Cu) {
        ctx->pc = 0x2BA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA988u;
        // 0x2ba98c: 0x2455e680  addiu       $s5, $v0, -0x1980 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA990u;
        goto label_2ba990;
    }
    ctx->pc = 0x2BA988u;
    {
        const bool branch_taken_0x2ba988 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA98Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA988u;
        // 0x2ba98c: 0x2455e680  addiu       $s5, $v0, -0x1980 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960768));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba988) {
            ctx->pc = 0x2BA9A4u;
            goto label_2ba9a4;
        }
    }
    ctx->pc = 0x2BA990u;
label_2ba990:
    // 0x2ba990: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba990u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba994:
    // 0x2ba994: 0x10000003  b           . + 4 + (0x3 << 2)
label_2ba998:
    if (ctx->pc == 0x2BA998u) {
        ctx->pc = 0x2BA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA994u;
        // 0x2ba998: 0x2455e6b8  addiu       $s5, $v0, -0x1948 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960824));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA99Cu;
        goto label_2ba99c;
    }
    ctx->pc = 0x2BA994u;
    {
        const bool branch_taken_0x2ba994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA994u;
        // 0x2ba998: 0x2455e6b8  addiu       $s5, $v0, -0x1948 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960824));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba994) {
            ctx->pc = 0x2BA9A4u;
            goto label_2ba9a4;
        }
    }
    ctx->pc = 0x2BA99Cu;
label_2ba99c:
    // 0x2ba99c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2ba99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2ba9a0:
    // 0x2ba9a0: 0x2455e7d8  addiu       $s5, $v0, -0x1828
    ctx->pc = 0x2ba9a0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961112));
label_2ba9a4:
    // 0x2ba9a4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2ba9a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
label_2ba9a8:
    // 0x2ba9a8: 0x3463fc00  ori         $v1, $v1, 0xFC00
    ctx->pc = 0x2ba9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)64512);
label_2ba9ac:
    // 0x2ba9ac: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x2ba9acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_2ba9b0:
    // 0x2ba9b0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2ba9b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2ba9b4:
    // 0x2ba9b4: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2ba9b4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2ba9b8:
    // 0x2ba9b8: 0x2432024  and         $a0, $s2, $v1
    ctx->pc = 0x2ba9b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 3));
label_2ba9bc:
    // 0x2ba9bc: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x2ba9bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
label_2ba9c0:
    // 0x2ba9c0: 0x10830031  beq         $a0, $v1, . + 4 + (0x31 << 2)
label_2ba9c4:
    if (ctx->pc == 0x2BA9C4u) {
        ctx->pc = 0x2BA9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9C0u;
        // 0x2ba9c4: 0x280c0  sll         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9C8u;
        goto label_2ba9c8;
    }
    ctx->pc = 0x2BA9C0u;
    {
        const bool branch_taken_0x2ba9c0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BA9C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9C0u;
        // 0x2ba9c4: 0x280c0  sll         $s0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9c0) {
            ctx->pc = 0x2BAA88u;
            goto label_2baa88;
        }
    }
    ctx->pc = 0x2BA9C8u;
label_2ba9c8:
    // 0x2ba9c8: 0x2c822001  sltiu       $v0, $a0, 0x2001
    ctx->pc = 0x2ba9c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)8193) ? 1 : 0);
label_2ba9cc:
    // 0x2ba9cc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_2ba9d0:
    if (ctx->pc == 0x2BA9D0u) {
        ctx->pc = 0x2BA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9CCu;
        // 0x2ba9d0: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9D4u;
        goto label_2ba9d4;
    }
    ctx->pc = 0x2BA9CCu;
    {
        const bool branch_taken_0x2ba9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9CCu;
        // 0x2ba9d0: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9cc) {
            ctx->pc = 0x2BAA08u;
            goto label_2baa08;
        }
    }
    ctx->pc = 0x2BA9D4u;
label_2ba9d4:
    // 0x2ba9d4: 0x10820022  beq         $a0, $v0, . + 4 + (0x22 << 2)
label_2ba9d8:
    if (ctx->pc == 0x2BA9D8u) {
        ctx->pc = 0x2BA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9D4u;
        // 0x2ba9d8: 0x2c820801  sltiu       $v0, $a0, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9DCu;
        goto label_2ba9dc;
    }
    ctx->pc = 0x2BA9D4u;
    {
        const bool branch_taken_0x2ba9d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA9D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9D4u;
        // 0x2ba9d8: 0x2c820801  sltiu       $v0, $a0, 0x801 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)2049) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9d4) {
            ctx->pc = 0x2BAA60u;
            goto label_2baa60;
        }
    }
    ctx->pc = 0x2BA9DCu;
label_2ba9dc:
    // 0x2ba9dc: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2ba9e0:
    if (ctx->pc == 0x2BA9E0u) {
        ctx->pc = 0x2BA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9DCu;
        // 0x2ba9e0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9E4u;
        goto label_2ba9e4;
    }
    ctx->pc = 0x2BA9DCu;
    {
        const bool branch_taken_0x2ba9dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9DCu;
        // 0x2ba9e0: 0x24020400  addiu       $v0, $zero, 0x400 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9dc) {
            ctx->pc = 0x2BA9F4u;
            goto label_2ba9f4;
        }
    }
    ctx->pc = 0x2BA9E4u;
label_2ba9e4:
    // 0x2ba9e4: 0x10820016  beq         $a0, $v0, . + 4 + (0x16 << 2)
label_2ba9e8:
    if (ctx->pc == 0x2BA9E8u) {
        ctx->pc = 0x2BA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9E4u;
        // 0x2ba9e8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9ECu;
        goto label_2ba9ec;
    }
    ctx->pc = 0x2BA9E4u;
    {
        const bool branch_taken_0x2ba9e4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9E4u;
        // 0x2ba9e8: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9e4) {
            ctx->pc = 0x2BAA40u;
            goto label_2baa40;
        }
    }
    ctx->pc = 0x2BA9ECu;
label_2ba9ec:
    // 0x2ba9ec: 0x10000038  b           . + 4 + (0x38 << 2)
label_2ba9f0:
    if (ctx->pc == 0x2BA9F0u) {
        ctx->pc = 0x2BA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9ECu;
        // 0x2ba9f0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BA9F4u;
        goto label_2ba9f4;
    }
    ctx->pc = 0x2BA9ECu;
    {
        const bool branch_taken_0x2ba9ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BA9F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9ECu;
        // 0x2ba9f0: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9ec) {
            ctx->pc = 0x2BAAD0u;
            goto label_2baad0;
        }
    }
    ctx->pc = 0x2BA9F4u;
label_2ba9f4:
    // 0x2ba9f4: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x2ba9f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2ba9f8:
    // 0x2ba9f8: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
label_2ba9fc:
    if (ctx->pc == 0x2BA9FCu) {
        ctx->pc = 0x2BA9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9F8u;
        // 0x2ba9fc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA00u;
        goto label_2baa00;
    }
    ctx->pc = 0x2BA9F8u;
    {
        const bool branch_taken_0x2ba9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BA9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BA9F8u;
        // 0x2ba9fc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ba9f8) {
            ctx->pc = 0x2BAA74u;
            goto label_2baa74;
        }
    }
    ctx->pc = 0x2BAA00u;
label_2baa00:
    // 0x2baa00: 0x10000033  b           . + 4 + (0x33 << 2)
label_2baa04:
    if (ctx->pc == 0x2BAA04u) {
        ctx->pc = 0x2BAA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA00u;
        // 0x2baa04: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA08u;
        goto label_2baa08;
    }
    ctx->pc = 0x2BAA00u;
    {
        const bool branch_taken_0x2baa00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA00u;
        // 0x2baa04: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa00) {
            ctx->pc = 0x2BAAD0u;
            goto label_2baad0;
        }
    }
    ctx->pc = 0x2BAA08u;
label_2baa08:
    // 0x2baa08: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x2baa08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2baa0c:
    // 0x2baa0c: 0x10820028  beq         $a0, $v0, . + 4 + (0x28 << 2)
label_2baa10:
    if (ctx->pc == 0x2BAA10u) {
        ctx->pc = 0x2BAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA0Cu;
        // 0x2baa10: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA14u;
        goto label_2baa14;
    }
    ctx->pc = 0x2BAA0Cu;
    {
        const bool branch_taken_0x2baa0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAA10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA0Cu;
        // 0x2baa10: 0x44102b  sltu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa0c) {
            ctx->pc = 0x2BAAB0u;
            goto label_2baab0;
        }
    }
    ctx->pc = 0x2BAA14u;
label_2baa14:
    // 0x2baa14: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_2baa18:
    if (ctx->pc == 0x2BAA18u) {
        ctx->pc = 0x2BAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA14u;
        // 0x2baa18: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA1Cu;
        goto label_2baa1c;
    }
    ctx->pc = 0x2BAA14u;
    {
        const bool branch_taken_0x2baa14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA14u;
        // 0x2baa18: 0x3c020001  lui         $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa14) {
            ctx->pc = 0x2BAA30u;
            goto label_2baa30;
        }
    }
    ctx->pc = 0x2BAA1Cu;
label_2baa1c:
    // 0x2baa1c: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2baa1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2baa20:
    // 0x2baa20: 0x1082001e  beq         $a0, $v0, . + 4 + (0x1E << 2)
label_2baa24:
    if (ctx->pc == 0x2BAA24u) {
        ctx->pc = 0x2BAA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA20u;
        // 0x2baa24: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA28u;
        goto label_2baa28;
    }
    ctx->pc = 0x2BAA20u;
    {
        const bool branch_taken_0x2baa20 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA20u;
        // 0x2baa24: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa20) {
            ctx->pc = 0x2BAA9Cu;
            goto label_2baa9c;
        }
    }
    ctx->pc = 0x2BAA28u;
label_2baa28:
    // 0x2baa28: 0x10000029  b           . + 4 + (0x29 << 2)
label_2baa2c:
    if (ctx->pc == 0x2BAA2Cu) {
        ctx->pc = 0x2BAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA28u;
        // 0x2baa2c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA30u;
        goto label_2baa30;
    }
    ctx->pc = 0x2BAA28u;
    {
        const bool branch_taken_0x2baa28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA28u;
        // 0x2baa2c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa28) {
            ctx->pc = 0x2BAAD0u;
            goto label_2baad0;
        }
    }
    ctx->pc = 0x2BAA30u;
label_2baa30:
    // 0x2baa30: 0x10820023  beq         $a0, $v0, . + 4 + (0x23 << 2)
label_2baa34:
    if (ctx->pc == 0x2BAA34u) {
        ctx->pc = 0x2BAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA30u;
        // 0x2baa34: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA38u;
        goto label_2baa38;
    }
    ctx->pc = 0x2BAA30u;
    {
        const bool branch_taken_0x2baa30 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAA34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA30u;
        // 0x2baa34: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa30) {
            ctx->pc = 0x2BAAC0u;
            goto label_2baac0;
        }
    }
    ctx->pc = 0x2BAA38u;
label_2baa38:
    // 0x2baa38: 0x10000025  b           . + 4 + (0x25 << 2)
label_2baa3c:
    if (ctx->pc == 0x2BAA3Cu) {
        ctx->pc = 0x2BAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA38u;
        // 0x2baa3c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA40u;
        goto label_2baa40;
    }
    ctx->pc = 0x2BAA38u;
    {
        const bool branch_taken_0x2baa38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA38u;
        // 0x2baa3c: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa38) {
            ctx->pc = 0x2BAAD0u;
            goto label_2baad0;
        }
    }
    ctx->pc = 0x2BAA40u;
label_2baa40:
    // 0x2baa40: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_2baa44:
    if (ctx->pc == 0x2BAA44u) {
        ctx->pc = 0x2BAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA40u;
        // 0x2baa44: 0x2a020039  slti        $v0, $s0, 0x39 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)57) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA48u;
        goto label_2baa48;
    }
    ctx->pc = 0x2BAA40u;
    {
        const bool branch_taken_0x2baa40 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA40u;
        // 0x2baa44: 0x2a020039  slti        $v0, $s0, 0x39 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)57) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa40) {
            ctx->pc = 0x2BAA50u;
            goto label_2baa50;
        }
    }
    ctx->pc = 0x2BAA48u;
label_2baa48:
    // 0x2baa48: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2baa4c:
    if (ctx->pc == 0x2BAA4Cu) {
        ctx->pc = 0x2BAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA48u;
        // 0x2baa4c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA50u;
        goto label_2baa50;
    }
    ctx->pc = 0x2BAA48u;
    {
        const bool branch_taken_0x2baa48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA48u;
        // 0x2baa4c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa48) {
            ctx->pc = 0x2BAA58u;
            goto label_2baa58;
        }
    }
    ctx->pc = 0x2BAA50u;
label_2baa50:
    // 0x2baa50: 0x24100038  addiu       $s0, $zero, 0x38
    ctx->pc = 0x2baa50u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
label_2baa54:
    // 0x2baa54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2baa54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2baa58:
    // 0x2baa58: 0x1000001e  b           . + 4 + (0x1E << 2)
label_2baa5c:
    if (ctx->pc == 0x2BAA5Cu) {
        ctx->pc = 0x2BAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA58u;
        // 0x2baa5c: 0x2451e678  addiu       $s1, $v0, -0x1988 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960760));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA60u;
        goto label_2baa60;
    }
    ctx->pc = 0x2BAA58u;
    {
        const bool branch_taken_0x2baa58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA58u;
        // 0x2baa5c: 0x2451e678  addiu       $s1, $v0, -0x1988 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa58) {
            ctx->pc = 0x2BAAD4u;
            goto label_2baad4;
        }
    }
    ctx->pc = 0x2BAA60u;
label_2baa60:
    // 0x2baa60: 0x240200a8  addiu       $v0, $zero, 0xA8
    ctx->pc = 0x2baa60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 168));
label_2baa64:
    // 0x2baa64: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2baa64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2baa68:
    // 0x2baa68: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x2baa68u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2baa6c:
    // 0x2baa6c: 0x10000019  b           . + 4 + (0x19 << 2)
label_2baa70:
    if (ctx->pc == 0x2BAA70u) {
        ctx->pc = 0x2BAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA6Cu;
        // 0x2baa70: 0x2471e670  addiu       $s1, $v1, -0x1990 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960752));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA74u;
        goto label_2baa74;
    }
    ctx->pc = 0x2BAA6Cu;
    {
        const bool branch_taken_0x2baa6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA6Cu;
        // 0x2baa70: 0x2471e670  addiu       $s1, $v1, -0x1990 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960752));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa6c) {
            ctx->pc = 0x2BAAD4u;
            goto label_2baad4;
        }
    }
    ctx->pc = 0x2BAA74u;
label_2baa74:
    // 0x2baa74: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2baa74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2baa78:
    // 0x2baa78: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2baa78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2baa7c:
    // 0x2baa7c: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x2baa7cu;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2baa80:
    // 0x2baa80: 0x10000014  b           . + 4 + (0x14 << 2)
label_2baa84:
    if (ctx->pc == 0x2BAA84u) {
        ctx->pc = 0x2BAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA80u;
        // 0x2baa84: 0x2471e668  addiu       $s1, $v1, -0x1998 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA88u;
        goto label_2baa88;
    }
    ctx->pc = 0x2BAA80u;
    {
        const bool branch_taken_0x2baa80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA80u;
        // 0x2baa84: 0x2471e668  addiu       $s1, $v1, -0x1998 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960744));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa80) {
            ctx->pc = 0x2BAAD4u;
            goto label_2baad4;
        }
    }
    ctx->pc = 0x2BAA88u;
label_2baa88:
    // 0x2baa88: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2baa88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2baa8c:
    // 0x2baa8c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2baa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2baa90:
    // 0x2baa90: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x2baa90u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2baa94:
    // 0x2baa94: 0x1000000f  b           . + 4 + (0xF << 2)
label_2baa98:
    if (ctx->pc == 0x2BAA98u) {
        ctx->pc = 0x2BAA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA94u;
        // 0x2baa98: 0x2471e660  addiu       $s1, $v1, -0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960736));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAA9Cu;
        goto label_2baa9c;
    }
    ctx->pc = 0x2BAA94u;
    {
        const bool branch_taken_0x2baa94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAA94u;
        // 0x2baa98: 0x2471e660  addiu       $s1, $v1, -0x19A0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960736));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baa94) {
            ctx->pc = 0x2BAAD4u;
            goto label_2baad4;
        }
    }
    ctx->pc = 0x2BAA9Cu;
label_2baa9c:
    // 0x2baa9c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x2baa9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2baaa0:
    // 0x2baaa0: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2baaa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2baaa4:
    // 0x2baaa4: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x2baaa4u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_2baaa8:
    // 0x2baaa8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2baaac:
    if (ctx->pc == 0x2BAAACu) {
        ctx->pc = 0x2BAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAA8u;
        // 0x2baaac: 0x2471e658  addiu       $s1, $v1, -0x19A8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960728));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAB0u;
        goto label_2baab0;
    }
    ctx->pc = 0x2BAAA8u;
    {
        const bool branch_taken_0x2baaa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAA8u;
        // 0x2baaac: 0x2471e658  addiu       $s1, $v1, -0x19A8 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960728));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baaa8) {
            ctx->pc = 0x2BAAD4u;
            goto label_2baad4;
        }
    }
    ctx->pc = 0x2BAAB0u;
label_2baab0:
    // 0x2baab0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2baab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2baab4:
    // 0x2baab4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2baab4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2baab8:
    // 0x2baab8: 0x10000006  b           . + 4 + (0x6 << 2)
label_2baabc:
    if (ctx->pc == 0x2BAABCu) {
        ctx->pc = 0x2BAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAB8u;
        // 0x2baabc: 0x2451e7c0  addiu       $s1, $v0, -0x1840 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAC0u;
        goto label_2baac0;
    }
    ctx->pc = 0x2BAAB8u;
    {
        const bool branch_taken_0x2baab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAB8u;
        // 0x2baabc: 0x2451e7c0  addiu       $s1, $v0, -0x1840 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baab8) {
            ctx->pc = 0x2BAAD4u;
            goto label_2baad4;
        }
    }
    ctx->pc = 0x2BAAC0u;
label_2baac0:
    // 0x2baac0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2baac0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2baac4:
    // 0x2baac4: 0x2410ffff  addiu       $s0, $zero, -0x1
    ctx->pc = 0x2baac4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2baac8:
    // 0x2baac8: 0x10000002  b           . + 4 + (0x2 << 2)
label_2baacc:
    if (ctx->pc == 0x2BAACCu) {
        ctx->pc = 0x2BAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAC8u;
        // 0x2baacc: 0x2451e7d8  addiu       $s1, $v0, -0x1828 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAD0u;
        goto label_2baad0;
    }
    ctx->pc = 0x2BAAC8u;
    {
        const bool branch_taken_0x2baac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAC8u;
        // 0x2baacc: 0x2451e7d8  addiu       $s1, $v0, -0x1828 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baac8) {
            ctx->pc = 0x2BAAD4u;
            goto label_2baad4;
        }
    }
    ctx->pc = 0x2BAAD0u;
label_2baad0:
    // 0x2baad0: 0x2451e7a0  addiu       $s1, $v0, -0x1860
    ctx->pc = 0x2baad0u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
label_2baad4:
    // 0x2baad4: 0x3c020006  lui         $v0, 0x6
    ctx->pc = 0x2baad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)6 << 16));
label_2baad8:
    // 0x2baad8: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x2baad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_2baadc:
    // 0x2baadc: 0x2422024  and         $a0, $s2, $v0
    ctx->pc = 0x2baadcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 2));
label_2baae0:
    // 0x2baae0: 0x10830005  beq         $a0, $v1, . + 4 + (0x5 << 2)
label_2baae4:
    if (ctx->pc == 0x2BAAE4u) {
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAE8u;
        goto label_2baae8;
    }
    ctx->pc = 0x2BAAE0u;
    {
        const bool branch_taken_0x2baae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2BAAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE0u;
        // 0x2baae4: 0x3c020004  lui         $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baae0) {
            ctx->pc = 0x2BAAF8u;
            goto label_2baaf8;
        }
    }
    ctx->pc = 0x2BAAE8u;
label_2baae8:
    // 0x2baae8: 0x10820006  beq         $a0, $v0, . + 4 + (0x6 << 2)
label_2baaec:
    if (ctx->pc == 0x2BAAECu) {
        ctx->pc = 0x2BAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE8u;
        // 0x2baaec: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAF0u;
        goto label_2baaf0;
    }
    ctx->pc = 0x2BAAE8u;
    {
        const bool branch_taken_0x2baae8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2BAAECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAE8u;
        // 0x2baaec: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baae8) {
            ctx->pc = 0x2BAB04u;
            goto label_2bab04;
        }
    }
    ctx->pc = 0x2BAAF0u;
label_2baaf0:
    // 0x2baaf0: 0x10000006  b           . + 4 + (0x6 << 2)
label_2baaf4:
    if (ctx->pc == 0x2BAAF4u) {
        ctx->pc = 0x2BAAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAF0u;
        // 0x2baaf4: 0x2452e7a0  addiu       $s2, $v0, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAAF8u;
        goto label_2baaf8;
    }
    ctx->pc = 0x2BAAF0u;
    {
        const bool branch_taken_0x2baaf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAAF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAF0u;
        // 0x2baaf4: 0x2452e7a0  addiu       $s2, $v0, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baaf0) {
            ctx->pc = 0x2BAB0Cu;
            goto label_2bab0c;
        }
    }
    ctx->pc = 0x2BAAF8u;
label_2baaf8:
    // 0x2baaf8: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2baaf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2baafc:
    // 0x2baafc: 0x10000003  b           . + 4 + (0x3 << 2)
label_2bab00:
    if (ctx->pc == 0x2BAB00u) {
        ctx->pc = 0x2BAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAFCu;
        // 0x2bab00: 0x2452e640  addiu       $s2, $v0, -0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB04u;
        goto label_2bab04;
    }
    ctx->pc = 0x2BAAFCu;
    {
        const bool branch_taken_0x2baafc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAAFCu;
        // 0x2bab00: 0x2452e640  addiu       $s2, $v0, -0x19C0 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960704));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2baafc) {
            ctx->pc = 0x2BAB0Cu;
            goto label_2bab0c;
        }
    }
    ctx->pc = 0x2BAB04u;
label_2bab04:
    // 0x2bab04: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2bab04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2bab08:
    // 0x2bab08: 0x2452e638  addiu       $s2, $v0, -0x19C8
    ctx->pc = 0x2bab08u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960696));
label_2bab0c:
    // 0x2bab0c: 0x16800009  bnez        $s4, . + 4 + (0x9 << 2)
label_2bab10:
    if (ctx->pc == 0x2BAB10u) {
        ctx->pc = 0x2BAB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB0Cu;
        // 0x2bab10: 0x2bc20080  slti        $v0, $fp, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB14u;
        goto label_2bab14;
    }
    ctx->pc = 0x2BAB0Cu;
    {
        const bool branch_taken_0x2bab0c = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB0Cu;
        // 0x2bab10: 0x2bc20080  slti        $v0, $fp, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)128) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab0c) {
            ctx->pc = 0x2BAB34u;
            goto label_2bab34;
        }
    }
    ctx->pc = 0x2BAB14u;
label_2bab14:
    // 0x2bab14: 0xc0a8bf6  jal         func_2A2FD8
label_2bab18:
    if (ctx->pc == 0x2BAB18u) {
        ctx->pc = 0x2BAB18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB14u;
        // 0x2bab18: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB1Cu;
        goto label_2bab1c;
    }
    ctx->pc = 0x2BAB14u;
    SET_GPR_U32(ctx, 31, 0x2BAB1Cu);
    ctx->pc = 0x2BAB18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB14u;
    // 0x2bab18: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2A2FD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A2FD8u, 0x2BAB14u, 0x2BAB1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB1Cu;
label_2bab1c:
    // 0x2bab1c: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2bab1cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bab20:
    // 0x2bab20: 0x1680000d  bnez        $s4, . + 4 + (0xD << 2)
label_2bab24:
    if (ctx->pc == 0x2BAB24u) {
        ctx->pc = 0x2BAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB20u;
        // 0x2bab24: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB28u;
        goto label_2bab28;
    }
    ctx->pc = 0x2BAB20u;
    {
        const bool branch_taken_0x2bab20 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB20u;
        // 0x2bab24: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab20) {
            ctx->pc = 0x2BAB58u;
            goto label_2bab58;
        }
    }
    ctx->pc = 0x2BAB28u;
label_2bab28:
    // 0x2bab28: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x2bab28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_2bab2c:
    // 0x2bab2c: 0x10000005  b           . + 4 + (0x5 << 2)
label_2bab30:
    if (ctx->pc == 0x2BAB30u) {
        ctx->pc = 0x2BAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB2Cu;
        // 0x2bab30: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB34u;
        goto label_2bab34;
    }
    ctx->pc = 0x2BAB2Cu;
    {
        const bool branch_taken_0x2bab2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB2Cu;
        // 0x2bab30: 0x24060021  addiu       $a2, $zero, 0x21 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab2c) {
            ctx->pc = 0x2BAB44u;
            goto label_2bab44;
        }
    }
    ctx->pc = 0x2BAB34u;
label_2bab34:
    // 0x2bab34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2bab38:
    if (ctx->pc == 0x2BAB38u) {
        ctx->pc = 0x2BAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB34u;
        // 0x2bab38: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB3Cu;
        goto label_2bab3c;
    }
    ctx->pc = 0x2BAB34u;
    {
        const bool branch_taken_0x2bab34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB34u;
        // 0x2bab38: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab34) {
            ctx->pc = 0x2BAB58u;
            goto label_2bab58;
        }
    }
    ctx->pc = 0x2BAB3Cu;
label_2bab3c:
    // 0x2bab3c: 0x240500d8  addiu       $a1, $zero, 0xD8
    ctx->pc = 0x2bab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 216));
label_2bab40:
    // 0x2bab40: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x2bab40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2bab44:
    // 0x2bab44: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2bab44u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bab48:
    // 0x2bab48: 0xc0a5648  jal         func_295920
label_2bab4c:
    if (ctx->pc == 0x2BAB4Cu) {
        ctx->pc = 0x2BAB4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB48u;
        // 0x2bab4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB50u;
        goto label_2bab50;
    }
    ctx->pc = 0x2BAB48u;
    SET_GPR_U32(ctx, 31, 0x2BAB50u);
    ctx->pc = 0x2BAB4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB48u;
    // 0x2bab4c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x295920u, 0x2BAB48u, 0x2BAB50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB50u;
label_2bab50:
    // 0x2bab50: 0x1000001a  b           . + 4 + (0x1A << 2)
label_2bab54:
    if (ctx->pc == 0x2BAB54u) {
        ctx->pc = 0x2BAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB50u;
        // 0x2bab54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB58u;
        goto label_2bab58;
    }
    ctx->pc = 0x2BAB50u;
    {
        const bool branch_taken_0x2bab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB50u;
        // 0x2bab54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab50) {
            ctx->pc = 0x2BABBCu;
            goto label_2babbc;
        }
    }
    ctx->pc = 0x2BAB58u;
label_2bab58:
    // 0x2bab58: 0x1e000006  bgtz        $s0, . + 4 + (0x6 << 2)
label_2bab5c:
    if (ctx->pc == 0x2BAB5Cu) {
        ctx->pc = 0x2BAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB58u;
        // 0x2bab5c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB60u;
        goto label_2bab60;
    }
    ctx->pc = 0x2BAB58u;
    {
        const bool branch_taken_0x2bab58 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x2BAB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB58u;
        // 0x2bab5c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab58) {
            ctx->pc = 0x2BAB74u;
            goto label_2bab74;
        }
    }
    ctx->pc = 0x2BAB60u;
label_2bab60:
    // 0x2bab60: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2bab60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bab64:
    // 0x2bab64: 0xc04a7dc  jal         func_129F70
label_2bab68:
    if (ctx->pc == 0x2BAB68u) {
        ctx->pc = 0x2BAB68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB64u;
        // 0x2bab68: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB6Cu;
        goto label_2bab6c;
    }
    ctx->pc = 0x2BAB64u;
    SET_GPR_U32(ctx, 31, 0x2BAB6Cu);
    ctx->pc = 0x2BAB68u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB64u;
    // 0x2bab68: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x2BAB64u, 0x2BAB6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB6Cu;
label_2bab6c:
    // 0x2bab6c: 0x10000007  b           . + 4 + (0x7 << 2)
label_2bab70:
    if (ctx->pc == 0x2BAB70u) {
        ctx->pc = 0x2BAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB6Cu;
        // 0x2bab70: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB74u;
        goto label_2bab74;
    }
    ctx->pc = 0x2BAB6Cu;
    {
        const bool branch_taken_0x2bab6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAB70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB6Cu;
        // 0x2bab70: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bab6c) {
            ctx->pc = 0x2BAB8Cu;
            goto label_2bab8c;
        }
    }
    ctx->pc = 0x2BAB74u;
label_2bab74:
    // 0x2bab74: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2bab74u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2bab78:
    // 0x2bab78: 0x24a5e7e0  addiu       $a1, $a1, -0x1820
    ctx->pc = 0x2bab78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294961120));
label_2bab7c:
    // 0x2bab7c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x2bab7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2bab80:
    // 0x2bab80: 0xc04a5f2  jal         func_1297C8
label_2bab84:
    if (ctx->pc == 0x2BAB84u) {
        ctx->pc = 0x2BAB84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAB80u;
        // 0x2bab84: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAB88u;
        goto label_2bab88;
    }
    ctx->pc = 0x2BAB80u;
    SET_GPR_U32(ctx, 31, 0x2BAB88u);
    ctx->pc = 0x2BAB84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BAB80u;
    // 0x2bab84: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2BAB80u, 0x2BAB88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BAB88u;
label_2bab88:
    // 0x2bab88: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2bab88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2bab8c:
    // 0x2bab8c: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x2bab8cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_2bab90:
    // 0x2bab90: 0x8c457ccc  lw          $a1, 0x7CCC($v0)
    ctx->pc = 0x2bab90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 31948)));
label_2bab94:
    // 0x2bab94: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x2bab94u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_2bab98:
    // 0x2bab98: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2bab98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2bab9c:
    // 0x2bab9c: 0x260402d  daddu       $t0, $s3, $zero
    ctx->pc = 0x2bab9cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2baba0:
    // 0x2baba0: 0x2a0482d  daddu       $t1, $s5, $zero
    ctx->pc = 0x2baba0u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_2baba4:
    // 0x2baba4: 0x240582d  daddu       $t3, $s2, $zero
    ctx->pc = 0x2baba4u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2baba8:
    // 0x2baba8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2baba8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2babac:
    // 0x2babac: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2babacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2babb0:
    // 0x2babb0: 0xc04a5f2  jal         func_1297C8
label_2babb4:
    if (ctx->pc == 0x2BABB4u) {
        ctx->pc = 0x2BABB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABB0u;
        // 0x2babb4: 0x27aa0010  addiu       $t2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABB8u;
        goto label_2babb8;
    }
    ctx->pc = 0x2BABB0u;
    SET_GPR_U32(ctx, 31, 0x2BABB8u);
    ctx->pc = 0x2BABB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BABB0u;
    // 0x2babb4: 0x27aa0010  addiu       $t2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1297C8u, 0x2BABB0u, 0x2BABB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BABB8u;
label_2babb8:
    // 0x2babb8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2babb8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2babbc:
    // 0x2babbc: 0xdfbf00e0  ld          $ra, 0xE0($sp)
    ctx->pc = 0x2babbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2babc0:
    // 0x2babc0: 0xdfbe00d0  ld          $fp, 0xD0($sp)
    ctx->pc = 0x2babc0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2babc4:
    // 0x2babc4: 0xdfb700c0  ld          $s7, 0xC0($sp)
    ctx->pc = 0x2babc4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2babc8:
    // 0x2babc8: 0xdfb600b0  ld          $s6, 0xB0($sp)
    ctx->pc = 0x2babc8u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2babcc:
    // 0x2babcc: 0xdfb500a0  ld          $s5, 0xA0($sp)
    ctx->pc = 0x2babccu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2babd0:
    // 0x2babd0: 0xdfb40090  ld          $s4, 0x90($sp)
    ctx->pc = 0x2babd0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2babd4:
    // 0x2babd4: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x2babd4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2babd8:
    // 0x2babd8: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x2babd8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2babdc:
    // 0x2babdc: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x2babdcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2babe0:
    // 0x2babe0: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x2babe0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2babe4:
    // 0x2babe4: 0x3e00008  jr          $ra
label_2babe8:
    if (ctx->pc == 0x2BABE8u) {
        ctx->pc = 0x2BABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABE4u;
        // 0x2babe8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABECu;
        goto label_2babec;
    }
    ctx->pc = 0x2BABE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BABE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABE4u;
        // 0x2babe8: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BABE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BABECu;
label_2babec:
    // 0x2babec: 0x0  nop
    ctx->pc = 0x2babecu;
    // NOP
label_2babf0:
    // 0x2babf0: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
label_2babf4:
    if (ctx->pc == 0x2BABF4u) {
        ctx->pc = 0x2BABF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABF0u;
        // 0x2babf4: 0xdc830008  ld          $v1, 0x8($a0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BABF8u;
        goto label_2babf8;
    }
    ctx->pc = 0x2BABF0u;
    {
        const bool branch_taken_0x2babf0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2babf0) {
            ctx->pc = 0x2BABF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BABF0u;
            // 0x2babf4: 0xdc830008  ld          $v1, 0x8($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAC00u;
            goto label_2bac00;
        }
    }
    ctx->pc = 0x2BABF8u;
label_2babf8:
    // 0x2babf8: 0x3e00008  jr          $ra
label_2babfc:
    if (ctx->pc == 0x2BABFCu) {
        ctx->pc = 0x2BABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABF8u;
        // 0x2babfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC00u;
        goto label_2bac00;
    }
    ctx->pc = 0x2BABF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BABFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BABF8u;
        // 0x2babfc: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BABF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAC00u;
label_2bac00:
    // 0x2bac00: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x2bac00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
label_2bac04:
    // 0x2bac04: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2bac04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2bac08:
    // 0x2bac08: 0x3e00008  jr          $ra
label_2bac0c:
    if (ctx->pc == 0x2BAC0Cu) {
        ctx->pc = 0x2BAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC08u;
        // 0x2bac0c: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC10u;
        goto label_2bac10;
    }
    ctx->pc = 0x2BAC08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC08u;
        // 0x2bac0c: 0x621024  and         $v0, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAC10u;
label_2bac10:
    // 0x2bac10: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
label_2bac14:
    if (ctx->pc == 0x2BAC14u) {
        ctx->pc = 0x2BAC14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC10u;
        // 0x2bac14: 0xdc820008  ld          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC18u;
        goto label_2bac18;
    }
    ctx->pc = 0x2BAC10u;
    {
        const bool branch_taken_0x2bac10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bac10) {
            ctx->pc = 0x2BAC14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAC10u;
            // 0x2bac14: 0xdc820008  ld          $v0, 0x8($a0) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAC24u;
            goto label_2bac24;
        }
    }
    ctx->pc = 0x2BAC18u;
label_2bac18:
    // 0x2bac18: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2bac18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2bac1c:
    // 0x2bac1c: 0x3e00008  jr          $ra
label_2bac20:
    if (ctx->pc == 0x2BAC20u) {
        ctx->pc = 0x2BAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC1Cu;
        // 0x2bac20: 0x2442e830  addiu       $v0, $v0, -0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC24u;
        goto label_2bac24;
    }
    ctx->pc = 0x2BAC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC1Cu;
        // 0x2bac20: 0x2442e830  addiu       $v0, $v0, -0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAC24u;
label_2bac24:
    // 0x2bac24: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x2bac24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2bac28:
    // 0x2bac28: 0x22238  dsll        $a0, $v0, 8
    ctx->pc = 0x2bac28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 8);
label_2bac2c:
    // 0x2bac2c: 0x4203f  dsra32      $a0, $a0, 0
    ctx->pc = 0x2bac2cu;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
label_2bac30:
    // 0x2bac30: 0x54830004  bnel        $a0, $v1, . + 4 + (0x4 << 2)
label_2bac34:
    if (ctx->pc == 0x2BAC34u) {
        ctx->pc = 0x2BAC34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC30u;
        // 0x2bac34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC38u;
        goto label_2bac38;
    }
    ctx->pc = 0x2BAC30u;
    {
        const bool branch_taken_0x2bac30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2bac30) {
            ctx->pc = 0x2BAC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAC30u;
            // 0x2bac34: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAC44u;
            goto label_2bac44;
        }
    }
    ctx->pc = 0x2BAC38u;
label_2bac38:
    // 0x2bac38: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2bac38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2bac3c:
    // 0x2bac3c: 0x3e00008  jr          $ra
label_2bac40:
    if (ctx->pc == 0x2BAC40u) {
        ctx->pc = 0x2BAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC3Cu;
        // 0x2bac40: 0x2442e838  addiu       $v0, $v0, -0x17C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961208));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC44u;
        goto label_2bac44;
    }
    ctx->pc = 0x2BAC3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC3Cu;
        // 0x2bac40: 0x2442e838  addiu       $v0, $v0, -0x17C8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAC44u;
label_2bac44:
    // 0x2bac44: 0x54820004  bnel        $a0, $v0, . + 4 + (0x4 << 2)
label_2bac48:
    if (ctx->pc == 0x2BAC48u) {
        ctx->pc = 0x2BAC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC44u;
        // 0x2bac48: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC4Cu;
        goto label_2bac4c;
    }
    ctx->pc = 0x2BAC44u;
    {
        const bool branch_taken_0x2bac44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x2bac44) {
            ctx->pc = 0x2BAC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BAC44u;
            // 0x2bac48: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAC58u;
            goto label_2bac58;
        }
    }
    ctx->pc = 0x2BAC4Cu;
label_2bac4c:
    // 0x2bac4c: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2bac4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2bac50:
    // 0x2bac50: 0x3e00008  jr          $ra
label_2bac54:
    if (ctx->pc == 0x2BAC54u) {
        ctx->pc = 0x2BAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC50u;
        // 0x2bac54: 0x2442e5f8  addiu       $v0, $v0, -0x1A08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960632));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC58u;
        goto label_2bac58;
    }
    ctx->pc = 0x2BAC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC50u;
        // 0x2bac54: 0x2442e5f8  addiu       $v0, $v0, -0x1A08 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294960632));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAC58u;
label_2bac58:
    // 0x2bac58: 0x3e00008  jr          $ra
label_2bac5c:
    if (ctx->pc == 0x2BAC5Cu) {
        ctx->pc = 0x2BAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC58u;
        // 0x2bac5c: 0x2442e7a0  addiu       $v0, $v0, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC60u;
        goto label_2bac60;
    }
    ctx->pc = 0x2BAC58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC58u;
        // 0x2bac5c: 0x2442e7a0  addiu       $v0, $v0, -0x1860 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961056));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAC60u;
label_2bac60:
    // 0x2bac60: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2bac64:
    if (ctx->pc == 0x2BAC64u) {
        ctx->pc = 0x2BAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC60u;
        // 0x2bac64: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC68u;
        goto label_2bac68;
    }
    ctx->pc = 0x2BAC60u;
    {
        const bool branch_taken_0x2bac60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BAC64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC60u;
        // 0x2bac64: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac60) {
            ctx->pc = 0x2BAC70u;
            goto label_2bac70;
        }
    }
    ctx->pc = 0x2BAC68u;
label_2bac68:
    // 0x2bac68: 0x3e00008  jr          $ra
label_2bac6c:
    if (ctx->pc == 0x2BAC6Cu) {
        ctx->pc = 0x2BAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC68u;
        // 0x2bac6c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC70u;
        goto label_2bac70;
    }
    ctx->pc = 0x2BAC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC68u;
        // 0x2bac6c: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAC70u;
label_2bac70:
    // 0x2bac70: 0x3e00008  jr          $ra
label_2bac74:
    if (ctx->pc == 0x2BAC74u) {
        ctx->pc = 0x2BAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC70u;
        // 0x2bac74: 0x2442e830  addiu       $v0, $v0, -0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961200));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC78u;
        goto label_2bac78;
    }
    ctx->pc = 0x2BAC70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC70u;
        // 0x2bac74: 0x2442e830  addiu       $v0, $v0, -0x17D0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961200));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC70u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAC78u;
label_2bac78:
    // 0x2bac78: 0x3e00008  jr          $ra
label_2bac7c:
    if (ctx->pc == 0x2BAC7Cu) {
        ctx->pc = 0x2BAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC78u;
        // 0x2bac7c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAC80u;
        goto label_2bac80;
    }
    ctx->pc = 0x2BAC78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC78u;
        // 0x2bac7c: 0x8c820000  lw          $v0, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAC78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAC80u;
label_2bac80:
    // 0x2bac80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2bac80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2bac84:
    // 0x2bac84: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x2bac84u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2bac88:
    // 0x2bac88: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2bac88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_2bac8c:
    // 0x2bac8c: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2bac8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2bac90:
    // 0x2bac90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2bac90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2bac94:
    // 0x2bac94: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2bac94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2bac98:
    // 0x2bac98: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2bac98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2bac9c:
    // 0x2bac9c: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_2baca0:
    if (ctx->pc == 0x2BACA0u) {
        ctx->pc = 0x2BACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC9Cu;
        // 0x2baca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACA4u;
        goto label_2baca4;
    }
    ctx->pc = 0x2BAC9Cu;
    {
        const bool branch_taken_0x2bac9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BACA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAC9Cu;
        // 0x2baca0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bac9c) {
            ctx->pc = 0x2BACF8u;
            goto label_2bacf8;
        }
    }
    ctx->pc = 0x2BACA4u;
label_2baca4:
    // 0x2baca4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2baca4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2baca8:
    // 0x2baca8: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x2baca8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2bacac:
    // 0x2bacac: 0xc0ae652  jal         func_2B9948
label_2bacb0:
    if (ctx->pc == 0x2BACB0u) {
        ctx->pc = 0x2BACB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACACu;
        // 0x2bacb0: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACB4u;
        goto label_2bacb4;
    }
    ctx->pc = 0x2BACACu;
    SET_GPR_U32(ctx, 31, 0x2BACB4u);
    ctx->pc = 0x2BACB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACACu;
    // 0x2bacb0: 0x37a60004  ori         $a2, $sp, 0x4 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2B9948u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B9948u, 0x2BACACu, 0x2BACB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACB4u;
label_2bacb4:
    // 0x2bacb4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2bacb8:
    if (ctx->pc == 0x2BACB8u) {
        ctx->pc = 0x2BACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACB4u;
        // 0x2bacb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACBCu;
        goto label_2bacbc;
    }
    ctx->pc = 0x2BACB4u;
    {
        const bool branch_taken_0x2bacb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BACB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACB4u;
        // 0x2bacb8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacb4) {
            ctx->pc = 0x2BAD00u;
            goto label_2bad00;
        }
    }
    ctx->pc = 0x2BACBCu;
label_2bacbc:
    // 0x2bacbc: 0xc0a5b02  jal         func_296C08
label_2bacc0:
    if (ctx->pc == 0x2BACC0u) {
        ctx->pc = 0x2BACC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACBCu;
        // 0x2bacc0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACC4u;
        goto label_2bacc4;
    }
    ctx->pc = 0x2BACBCu;
    SET_GPR_U32(ctx, 31, 0x2BACC4u);
    ctx->pc = 0x2BACC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2BACBCu;
    // 0x2bacc0: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x296C08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x296C08u, 0x2BACBCu, 0x2BACC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2BACC4u;
label_2bacc4:
    // 0x2bacc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2bacc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2bacc8:
    // 0x2bacc8: 0xde020010  ld          $v0, 0x10($s0)
    ctx->pc = 0x2bacc8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_2baccc:
    // 0x2baccc: 0x30420c00  andi        $v0, $v0, 0xC00
    ctx->pc = 0x2bacccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3072);
label_2bacd0:
    // 0x2bacd0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_2bacd4:
    if (ctx->pc == 0x2BACD4u) {
        ctx->pc = 0x2BACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD0u;
        // 0x2bacd4: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BACD8u;
        goto label_2bacd8;
    }
    ctx->pc = 0x2BACD0u;
    {
        const bool branch_taken_0x2bacd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2BACD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACD0u;
        // 0x2bacd4: 0x320c0  sll         $a0, $v1, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2bacd0) {
            ctx->pc = 0x2BACE4u;
            goto label_2bace4;
        }
    }
    ctx->pc = 0x2BACD8u;
label_2bacd8:
    // 0x2bacd8: 0x31180  sll         $v0, $v1, 6
    ctx->pc = 0x2bacd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_2bacdc:
    // 0x2bacdc: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2bacdcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2bace0:
    // 0x2bace0: 0x220c3  sra         $a0, $v0, 3
    ctx->pc = 0x2bace0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 2), 3));
label_2bace4:
    // 0x2bace4: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x2bace4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
label_2bace8:
    // 0x2bace8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2bace8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2bacec:
    // 0x2bacec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2bacecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2bacf0:
    // 0x2bacf0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x2bacf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_2bacf4:
    // 0x2bacf4: 0x82100a  movz        $v0, $a0, $v0
    ctx->pc = 0x2bacf4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2bacf8:
    // 0x2bacf8: 0x56200001  bnel        $s1, $zero, . + 4 + (0x1 << 2)
label_2bacfc:
    if (ctx->pc == 0x2BACFCu) {
        ctx->pc = 0x2BACFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BACF8u;
        // 0x2bacfc: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD00u;
        goto label_2bad00;
    }
    ctx->pc = 0x2BACF8u;
    {
        const bool branch_taken_0x2bacf8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x2bacf8) {
            ctx->pc = 0x2BACFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2BACF8u;
            // 0x2bacfc: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2BAD00u;
            goto label_2bad00;
        }
    }
    ctx->pc = 0x2BAD00u;
label_2bad00:
    // 0x2bad00: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2bad00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2bad04:
    // 0x2bad04: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2bad04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2bad08:
    // 0x2bad08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2bad08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2bad0c:
    // 0x2bad0c: 0x3e00008  jr          $ra
label_2bad10:
    if (ctx->pc == 0x2BAD10u) {
        ctx->pc = 0x2BAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD0Cu;
        // 0x2bad10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2BAD14u;
        goto label_2bad14;
    }
    ctx->pc = 0x2BAD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2BAD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2BAD0Cu;
        // 0x2bad10: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2BAD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2BAD14u;
label_2bad14:
    // 0x2bad14: 0x0  nop
    ctx->pc = 0x2bad14u;
    // NOP
    if (ctx->pc == 0x2bad14u) { ctx->pc = 0x2bad18u; }
}
