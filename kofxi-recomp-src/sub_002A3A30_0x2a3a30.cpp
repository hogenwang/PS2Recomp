#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A3A30
// Address: 0x2a3a30 - 0x2a47c0
void sub_002A3A30_0x2a3a30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A3A30_0x2a3a30");
#endif

    switch (ctx->pc) {
        case 0x2a3a30u: goto label_2a3a30;
        case 0x2a3a34u: goto label_2a3a34;
        case 0x2a3a38u: goto label_2a3a38;
        case 0x2a3a3cu: goto label_2a3a3c;
        case 0x2a3a40u: goto label_2a3a40;
        case 0x2a3a44u: goto label_2a3a44;
        case 0x2a3a48u: goto label_2a3a48;
        case 0x2a3a4cu: goto label_2a3a4c;
        case 0x2a3a50u: goto label_2a3a50;
        case 0x2a3a54u: goto label_2a3a54;
        case 0x2a3a58u: goto label_2a3a58;
        case 0x2a3a5cu: goto label_2a3a5c;
        case 0x2a3a60u: goto label_2a3a60;
        case 0x2a3a64u: goto label_2a3a64;
        case 0x2a3a68u: goto label_2a3a68;
        case 0x2a3a6cu: goto label_2a3a6c;
        case 0x2a3a70u: goto label_2a3a70;
        case 0x2a3a74u: goto label_2a3a74;
        case 0x2a3a78u: goto label_2a3a78;
        case 0x2a3a7cu: goto label_2a3a7c;
        case 0x2a3a80u: goto label_2a3a80;
        case 0x2a3a84u: goto label_2a3a84;
        case 0x2a3a88u: goto label_2a3a88;
        case 0x2a3a8cu: goto label_2a3a8c;
        case 0x2a3a90u: goto label_2a3a90;
        case 0x2a3a94u: goto label_2a3a94;
        case 0x2a3a98u: goto label_2a3a98;
        case 0x2a3a9cu: goto label_2a3a9c;
        case 0x2a3aa0u: goto label_2a3aa0;
        case 0x2a3aa4u: goto label_2a3aa4;
        case 0x2a3aa8u: goto label_2a3aa8;
        case 0x2a3aacu: goto label_2a3aac;
        case 0x2a3ab0u: goto label_2a3ab0;
        case 0x2a3ab4u: goto label_2a3ab4;
        case 0x2a3ab8u: goto label_2a3ab8;
        case 0x2a3abcu: goto label_2a3abc;
        case 0x2a3ac0u: goto label_2a3ac0;
        case 0x2a3ac4u: goto label_2a3ac4;
        case 0x2a3ac8u: goto label_2a3ac8;
        case 0x2a3accu: goto label_2a3acc;
        case 0x2a3ad0u: goto label_2a3ad0;
        case 0x2a3ad4u: goto label_2a3ad4;
        case 0x2a3ad8u: goto label_2a3ad8;
        case 0x2a3adcu: goto label_2a3adc;
        case 0x2a3ae0u: goto label_2a3ae0;
        case 0x2a3ae4u: goto label_2a3ae4;
        case 0x2a3ae8u: goto label_2a3ae8;
        case 0x2a3aecu: goto label_2a3aec;
        case 0x2a3af0u: goto label_2a3af0;
        case 0x2a3af4u: goto label_2a3af4;
        case 0x2a3af8u: goto label_2a3af8;
        case 0x2a3afcu: goto label_2a3afc;
        case 0x2a3b00u: goto label_2a3b00;
        case 0x2a3b04u: goto label_2a3b04;
        case 0x2a3b08u: goto label_2a3b08;
        case 0x2a3b0cu: goto label_2a3b0c;
        case 0x2a3b10u: goto label_2a3b10;
        case 0x2a3b14u: goto label_2a3b14;
        case 0x2a3b18u: goto label_2a3b18;
        case 0x2a3b1cu: goto label_2a3b1c;
        case 0x2a3b20u: goto label_2a3b20;
        case 0x2a3b24u: goto label_2a3b24;
        case 0x2a3b28u: goto label_2a3b28;
        case 0x2a3b2cu: goto label_2a3b2c;
        case 0x2a3b30u: goto label_2a3b30;
        case 0x2a3b34u: goto label_2a3b34;
        case 0x2a3b38u: goto label_2a3b38;
        case 0x2a3b3cu: goto label_2a3b3c;
        case 0x2a3b40u: goto label_2a3b40;
        case 0x2a3b44u: goto label_2a3b44;
        case 0x2a3b48u: goto label_2a3b48;
        case 0x2a3b4cu: goto label_2a3b4c;
        case 0x2a3b50u: goto label_2a3b50;
        case 0x2a3b54u: goto label_2a3b54;
        case 0x2a3b58u: goto label_2a3b58;
        case 0x2a3b5cu: goto label_2a3b5c;
        case 0x2a3b60u: goto label_2a3b60;
        case 0x2a3b64u: goto label_2a3b64;
        case 0x2a3b68u: goto label_2a3b68;
        case 0x2a3b6cu: goto label_2a3b6c;
        case 0x2a3b70u: goto label_2a3b70;
        case 0x2a3b74u: goto label_2a3b74;
        case 0x2a3b78u: goto label_2a3b78;
        case 0x2a3b7cu: goto label_2a3b7c;
        case 0x2a3b80u: goto label_2a3b80;
        case 0x2a3b84u: goto label_2a3b84;
        case 0x2a3b88u: goto label_2a3b88;
        case 0x2a3b8cu: goto label_2a3b8c;
        case 0x2a3b90u: goto label_2a3b90;
        case 0x2a3b94u: goto label_2a3b94;
        case 0x2a3b98u: goto label_2a3b98;
        case 0x2a3b9cu: goto label_2a3b9c;
        case 0x2a3ba0u: goto label_2a3ba0;
        case 0x2a3ba4u: goto label_2a3ba4;
        case 0x2a3ba8u: goto label_2a3ba8;
        case 0x2a3bacu: goto label_2a3bac;
        case 0x2a3bb0u: goto label_2a3bb0;
        case 0x2a3bb4u: goto label_2a3bb4;
        case 0x2a3bb8u: goto label_2a3bb8;
        case 0x2a3bbcu: goto label_2a3bbc;
        case 0x2a3bc0u: goto label_2a3bc0;
        case 0x2a3bc4u: goto label_2a3bc4;
        case 0x2a3bc8u: goto label_2a3bc8;
        case 0x2a3bccu: goto label_2a3bcc;
        case 0x2a3bd0u: goto label_2a3bd0;
        case 0x2a3bd4u: goto label_2a3bd4;
        case 0x2a3bd8u: goto label_2a3bd8;
        case 0x2a3bdcu: goto label_2a3bdc;
        case 0x2a3be0u: goto label_2a3be0;
        case 0x2a3be4u: goto label_2a3be4;
        case 0x2a3be8u: goto label_2a3be8;
        case 0x2a3becu: goto label_2a3bec;
        case 0x2a3bf0u: goto label_2a3bf0;
        case 0x2a3bf4u: goto label_2a3bf4;
        case 0x2a3bf8u: goto label_2a3bf8;
        case 0x2a3bfcu: goto label_2a3bfc;
        case 0x2a3c00u: goto label_2a3c00;
        case 0x2a3c04u: goto label_2a3c04;
        case 0x2a3c08u: goto label_2a3c08;
        case 0x2a3c0cu: goto label_2a3c0c;
        case 0x2a3c10u: goto label_2a3c10;
        case 0x2a3c14u: goto label_2a3c14;
        case 0x2a3c18u: goto label_2a3c18;
        case 0x2a3c1cu: goto label_2a3c1c;
        case 0x2a3c20u: goto label_2a3c20;
        case 0x2a3c24u: goto label_2a3c24;
        case 0x2a3c28u: goto label_2a3c28;
        case 0x2a3c2cu: goto label_2a3c2c;
        case 0x2a3c30u: goto label_2a3c30;
        case 0x2a3c34u: goto label_2a3c34;
        case 0x2a3c38u: goto label_2a3c38;
        case 0x2a3c3cu: goto label_2a3c3c;
        case 0x2a3c40u: goto label_2a3c40;
        case 0x2a3c44u: goto label_2a3c44;
        case 0x2a3c48u: goto label_2a3c48;
        case 0x2a3c4cu: goto label_2a3c4c;
        case 0x2a3c50u: goto label_2a3c50;
        case 0x2a3c54u: goto label_2a3c54;
        case 0x2a3c58u: goto label_2a3c58;
        case 0x2a3c5cu: goto label_2a3c5c;
        case 0x2a3c60u: goto label_2a3c60;
        case 0x2a3c64u: goto label_2a3c64;
        case 0x2a3c68u: goto label_2a3c68;
        case 0x2a3c6cu: goto label_2a3c6c;
        case 0x2a3c70u: goto label_2a3c70;
        case 0x2a3c74u: goto label_2a3c74;
        case 0x2a3c78u: goto label_2a3c78;
        case 0x2a3c7cu: goto label_2a3c7c;
        case 0x2a3c80u: goto label_2a3c80;
        case 0x2a3c84u: goto label_2a3c84;
        case 0x2a3c88u: goto label_2a3c88;
        case 0x2a3c8cu: goto label_2a3c8c;
        case 0x2a3c90u: goto label_2a3c90;
        case 0x2a3c94u: goto label_2a3c94;
        case 0x2a3c98u: goto label_2a3c98;
        case 0x2a3c9cu: goto label_2a3c9c;
        case 0x2a3ca0u: goto label_2a3ca0;
        case 0x2a3ca4u: goto label_2a3ca4;
        case 0x2a3ca8u: goto label_2a3ca8;
        case 0x2a3cacu: goto label_2a3cac;
        case 0x2a3cb0u: goto label_2a3cb0;
        case 0x2a3cb4u: goto label_2a3cb4;
        case 0x2a3cb8u: goto label_2a3cb8;
        case 0x2a3cbcu: goto label_2a3cbc;
        case 0x2a3cc0u: goto label_2a3cc0;
        case 0x2a3cc4u: goto label_2a3cc4;
        case 0x2a3cc8u: goto label_2a3cc8;
        case 0x2a3cccu: goto label_2a3ccc;
        case 0x2a3cd0u: goto label_2a3cd0;
        case 0x2a3cd4u: goto label_2a3cd4;
        case 0x2a3cd8u: goto label_2a3cd8;
        case 0x2a3cdcu: goto label_2a3cdc;
        case 0x2a3ce0u: goto label_2a3ce0;
        case 0x2a3ce4u: goto label_2a3ce4;
        case 0x2a3ce8u: goto label_2a3ce8;
        case 0x2a3cecu: goto label_2a3cec;
        case 0x2a3cf0u: goto label_2a3cf0;
        case 0x2a3cf4u: goto label_2a3cf4;
        case 0x2a3cf8u: goto label_2a3cf8;
        case 0x2a3cfcu: goto label_2a3cfc;
        case 0x2a3d00u: goto label_2a3d00;
        case 0x2a3d04u: goto label_2a3d04;
        case 0x2a3d08u: goto label_2a3d08;
        case 0x2a3d0cu: goto label_2a3d0c;
        case 0x2a3d10u: goto label_2a3d10;
        case 0x2a3d14u: goto label_2a3d14;
        case 0x2a3d18u: goto label_2a3d18;
        case 0x2a3d1cu: goto label_2a3d1c;
        case 0x2a3d20u: goto label_2a3d20;
        case 0x2a3d24u: goto label_2a3d24;
        case 0x2a3d28u: goto label_2a3d28;
        case 0x2a3d2cu: goto label_2a3d2c;
        case 0x2a3d30u: goto label_2a3d30;
        case 0x2a3d34u: goto label_2a3d34;
        case 0x2a3d38u: goto label_2a3d38;
        case 0x2a3d3cu: goto label_2a3d3c;
        case 0x2a3d40u: goto label_2a3d40;
        case 0x2a3d44u: goto label_2a3d44;
        case 0x2a3d48u: goto label_2a3d48;
        case 0x2a3d4cu: goto label_2a3d4c;
        case 0x2a3d50u: goto label_2a3d50;
        case 0x2a3d54u: goto label_2a3d54;
        case 0x2a3d58u: goto label_2a3d58;
        case 0x2a3d5cu: goto label_2a3d5c;
        case 0x2a3d60u: goto label_2a3d60;
        case 0x2a3d64u: goto label_2a3d64;
        case 0x2a3d68u: goto label_2a3d68;
        case 0x2a3d6cu: goto label_2a3d6c;
        case 0x2a3d70u: goto label_2a3d70;
        case 0x2a3d74u: goto label_2a3d74;
        case 0x2a3d78u: goto label_2a3d78;
        case 0x2a3d7cu: goto label_2a3d7c;
        case 0x2a3d80u: goto label_2a3d80;
        case 0x2a3d84u: goto label_2a3d84;
        case 0x2a3d88u: goto label_2a3d88;
        case 0x2a3d8cu: goto label_2a3d8c;
        case 0x2a3d90u: goto label_2a3d90;
        case 0x2a3d94u: goto label_2a3d94;
        case 0x2a3d98u: goto label_2a3d98;
        case 0x2a3d9cu: goto label_2a3d9c;
        case 0x2a3da0u: goto label_2a3da0;
        case 0x2a3da4u: goto label_2a3da4;
        case 0x2a3da8u: goto label_2a3da8;
        case 0x2a3dacu: goto label_2a3dac;
        case 0x2a3db0u: goto label_2a3db0;
        case 0x2a3db4u: goto label_2a3db4;
        case 0x2a3db8u: goto label_2a3db8;
        case 0x2a3dbcu: goto label_2a3dbc;
        case 0x2a3dc0u: goto label_2a3dc0;
        case 0x2a3dc4u: goto label_2a3dc4;
        case 0x2a3dc8u: goto label_2a3dc8;
        case 0x2a3dccu: goto label_2a3dcc;
        case 0x2a3dd0u: goto label_2a3dd0;
        case 0x2a3dd4u: goto label_2a3dd4;
        case 0x2a3dd8u: goto label_2a3dd8;
        case 0x2a3ddcu: goto label_2a3ddc;
        case 0x2a3de0u: goto label_2a3de0;
        case 0x2a3de4u: goto label_2a3de4;
        case 0x2a3de8u: goto label_2a3de8;
        case 0x2a3decu: goto label_2a3dec;
        case 0x2a3df0u: goto label_2a3df0;
        case 0x2a3df4u: goto label_2a3df4;
        case 0x2a3df8u: goto label_2a3df8;
        case 0x2a3dfcu: goto label_2a3dfc;
        case 0x2a3e00u: goto label_2a3e00;
        case 0x2a3e04u: goto label_2a3e04;
        case 0x2a3e08u: goto label_2a3e08;
        case 0x2a3e0cu: goto label_2a3e0c;
        case 0x2a3e10u: goto label_2a3e10;
        case 0x2a3e14u: goto label_2a3e14;
        case 0x2a3e18u: goto label_2a3e18;
        case 0x2a3e1cu: goto label_2a3e1c;
        case 0x2a3e20u: goto label_2a3e20;
        case 0x2a3e24u: goto label_2a3e24;
        case 0x2a3e28u: goto label_2a3e28;
        case 0x2a3e2cu: goto label_2a3e2c;
        case 0x2a3e30u: goto label_2a3e30;
        case 0x2a3e34u: goto label_2a3e34;
        case 0x2a3e38u: goto label_2a3e38;
        case 0x2a3e3cu: goto label_2a3e3c;
        case 0x2a3e40u: goto label_2a3e40;
        case 0x2a3e44u: goto label_2a3e44;
        case 0x2a3e48u: goto label_2a3e48;
        case 0x2a3e4cu: goto label_2a3e4c;
        case 0x2a3e50u: goto label_2a3e50;
        case 0x2a3e54u: goto label_2a3e54;
        case 0x2a3e58u: goto label_2a3e58;
        case 0x2a3e5cu: goto label_2a3e5c;
        case 0x2a3e60u: goto label_2a3e60;
        case 0x2a3e64u: goto label_2a3e64;
        case 0x2a3e68u: goto label_2a3e68;
        case 0x2a3e6cu: goto label_2a3e6c;
        case 0x2a3e70u: goto label_2a3e70;
        case 0x2a3e74u: goto label_2a3e74;
        case 0x2a3e78u: goto label_2a3e78;
        case 0x2a3e7cu: goto label_2a3e7c;
        case 0x2a3e80u: goto label_2a3e80;
        case 0x2a3e84u: goto label_2a3e84;
        case 0x2a3e88u: goto label_2a3e88;
        case 0x2a3e8cu: goto label_2a3e8c;
        case 0x2a3e90u: goto label_2a3e90;
        case 0x2a3e94u: goto label_2a3e94;
        case 0x2a3e98u: goto label_2a3e98;
        case 0x2a3e9cu: goto label_2a3e9c;
        case 0x2a3ea0u: goto label_2a3ea0;
        case 0x2a3ea4u: goto label_2a3ea4;
        case 0x2a3ea8u: goto label_2a3ea8;
        case 0x2a3eacu: goto label_2a3eac;
        case 0x2a3eb0u: goto label_2a3eb0;
        case 0x2a3eb4u: goto label_2a3eb4;
        case 0x2a3eb8u: goto label_2a3eb8;
        case 0x2a3ebcu: goto label_2a3ebc;
        case 0x2a3ec0u: goto label_2a3ec0;
        case 0x2a3ec4u: goto label_2a3ec4;
        case 0x2a3ec8u: goto label_2a3ec8;
        case 0x2a3eccu: goto label_2a3ecc;
        case 0x2a3ed0u: goto label_2a3ed0;
        case 0x2a3ed4u: goto label_2a3ed4;
        case 0x2a3ed8u: goto label_2a3ed8;
        case 0x2a3edcu: goto label_2a3edc;
        case 0x2a3ee0u: goto label_2a3ee0;
        case 0x2a3ee4u: goto label_2a3ee4;
        case 0x2a3ee8u: goto label_2a3ee8;
        case 0x2a3eecu: goto label_2a3eec;
        case 0x2a3ef0u: goto label_2a3ef0;
        case 0x2a3ef4u: goto label_2a3ef4;
        case 0x2a3ef8u: goto label_2a3ef8;
        case 0x2a3efcu: goto label_2a3efc;
        case 0x2a3f00u: goto label_2a3f00;
        case 0x2a3f04u: goto label_2a3f04;
        case 0x2a3f08u: goto label_2a3f08;
        case 0x2a3f0cu: goto label_2a3f0c;
        case 0x2a3f10u: goto label_2a3f10;
        case 0x2a3f14u: goto label_2a3f14;
        case 0x2a3f18u: goto label_2a3f18;
        case 0x2a3f1cu: goto label_2a3f1c;
        case 0x2a3f20u: goto label_2a3f20;
        case 0x2a3f24u: goto label_2a3f24;
        case 0x2a3f28u: goto label_2a3f28;
        case 0x2a3f2cu: goto label_2a3f2c;
        case 0x2a3f30u: goto label_2a3f30;
        case 0x2a3f34u: goto label_2a3f34;
        case 0x2a3f38u: goto label_2a3f38;
        case 0x2a3f3cu: goto label_2a3f3c;
        case 0x2a3f40u: goto label_2a3f40;
        case 0x2a3f44u: goto label_2a3f44;
        case 0x2a3f48u: goto label_2a3f48;
        case 0x2a3f4cu: goto label_2a3f4c;
        case 0x2a3f50u: goto label_2a3f50;
        case 0x2a3f54u: goto label_2a3f54;
        case 0x2a3f58u: goto label_2a3f58;
        case 0x2a3f5cu: goto label_2a3f5c;
        case 0x2a3f60u: goto label_2a3f60;
        case 0x2a3f64u: goto label_2a3f64;
        case 0x2a3f68u: goto label_2a3f68;
        case 0x2a3f6cu: goto label_2a3f6c;
        case 0x2a3f70u: goto label_2a3f70;
        case 0x2a3f74u: goto label_2a3f74;
        case 0x2a3f78u: goto label_2a3f78;
        case 0x2a3f7cu: goto label_2a3f7c;
        case 0x2a3f80u: goto label_2a3f80;
        case 0x2a3f84u: goto label_2a3f84;
        case 0x2a3f88u: goto label_2a3f88;
        case 0x2a3f8cu: goto label_2a3f8c;
        case 0x2a3f90u: goto label_2a3f90;
        case 0x2a3f94u: goto label_2a3f94;
        case 0x2a3f98u: goto label_2a3f98;
        case 0x2a3f9cu: goto label_2a3f9c;
        case 0x2a3fa0u: goto label_2a3fa0;
        case 0x2a3fa4u: goto label_2a3fa4;
        case 0x2a3fa8u: goto label_2a3fa8;
        case 0x2a3facu: goto label_2a3fac;
        case 0x2a3fb0u: goto label_2a3fb0;
        case 0x2a3fb4u: goto label_2a3fb4;
        case 0x2a3fb8u: goto label_2a3fb8;
        case 0x2a3fbcu: goto label_2a3fbc;
        case 0x2a3fc0u: goto label_2a3fc0;
        case 0x2a3fc4u: goto label_2a3fc4;
        case 0x2a3fc8u: goto label_2a3fc8;
        case 0x2a3fccu: goto label_2a3fcc;
        case 0x2a3fd0u: goto label_2a3fd0;
        case 0x2a3fd4u: goto label_2a3fd4;
        case 0x2a3fd8u: goto label_2a3fd8;
        case 0x2a3fdcu: goto label_2a3fdc;
        case 0x2a3fe0u: goto label_2a3fe0;
        case 0x2a3fe4u: goto label_2a3fe4;
        case 0x2a3fe8u: goto label_2a3fe8;
        case 0x2a3fecu: goto label_2a3fec;
        case 0x2a3ff0u: goto label_2a3ff0;
        case 0x2a3ff4u: goto label_2a3ff4;
        case 0x2a3ff8u: goto label_2a3ff8;
        case 0x2a3ffcu: goto label_2a3ffc;
        case 0x2a4000u: goto label_2a4000;
        case 0x2a4004u: goto label_2a4004;
        case 0x2a4008u: goto label_2a4008;
        case 0x2a400cu: goto label_2a400c;
        case 0x2a4010u: goto label_2a4010;
        case 0x2a4014u: goto label_2a4014;
        case 0x2a4018u: goto label_2a4018;
        case 0x2a401cu: goto label_2a401c;
        case 0x2a4020u: goto label_2a4020;
        case 0x2a4024u: goto label_2a4024;
        case 0x2a4028u: goto label_2a4028;
        case 0x2a402cu: goto label_2a402c;
        case 0x2a4030u: goto label_2a4030;
        case 0x2a4034u: goto label_2a4034;
        case 0x2a4038u: goto label_2a4038;
        case 0x2a403cu: goto label_2a403c;
        case 0x2a4040u: goto label_2a4040;
        case 0x2a4044u: goto label_2a4044;
        case 0x2a4048u: goto label_2a4048;
        case 0x2a404cu: goto label_2a404c;
        case 0x2a4050u: goto label_2a4050;
        case 0x2a4054u: goto label_2a4054;
        case 0x2a4058u: goto label_2a4058;
        case 0x2a405cu: goto label_2a405c;
        case 0x2a4060u: goto label_2a4060;
        case 0x2a4064u: goto label_2a4064;
        case 0x2a4068u: goto label_2a4068;
        case 0x2a406cu: goto label_2a406c;
        case 0x2a4070u: goto label_2a4070;
        case 0x2a4074u: goto label_2a4074;
        case 0x2a4078u: goto label_2a4078;
        case 0x2a407cu: goto label_2a407c;
        case 0x2a4080u: goto label_2a4080;
        case 0x2a4084u: goto label_2a4084;
        case 0x2a4088u: goto label_2a4088;
        case 0x2a408cu: goto label_2a408c;
        case 0x2a4090u: goto label_2a4090;
        case 0x2a4094u: goto label_2a4094;
        case 0x2a4098u: goto label_2a4098;
        case 0x2a409cu: goto label_2a409c;
        case 0x2a40a0u: goto label_2a40a0;
        case 0x2a40a4u: goto label_2a40a4;
        case 0x2a40a8u: goto label_2a40a8;
        case 0x2a40acu: goto label_2a40ac;
        case 0x2a40b0u: goto label_2a40b0;
        case 0x2a40b4u: goto label_2a40b4;
        case 0x2a40b8u: goto label_2a40b8;
        case 0x2a40bcu: goto label_2a40bc;
        case 0x2a40c0u: goto label_2a40c0;
        case 0x2a40c4u: goto label_2a40c4;
        case 0x2a40c8u: goto label_2a40c8;
        case 0x2a40ccu: goto label_2a40cc;
        case 0x2a40d0u: goto label_2a40d0;
        case 0x2a40d4u: goto label_2a40d4;
        case 0x2a40d8u: goto label_2a40d8;
        case 0x2a40dcu: goto label_2a40dc;
        case 0x2a40e0u: goto label_2a40e0;
        case 0x2a40e4u: goto label_2a40e4;
        case 0x2a40e8u: goto label_2a40e8;
        case 0x2a40ecu: goto label_2a40ec;
        case 0x2a40f0u: goto label_2a40f0;
        case 0x2a40f4u: goto label_2a40f4;
        case 0x2a40f8u: goto label_2a40f8;
        case 0x2a40fcu: goto label_2a40fc;
        case 0x2a4100u: goto label_2a4100;
        case 0x2a4104u: goto label_2a4104;
        case 0x2a4108u: goto label_2a4108;
        case 0x2a410cu: goto label_2a410c;
        case 0x2a4110u: goto label_2a4110;
        case 0x2a4114u: goto label_2a4114;
        case 0x2a4118u: goto label_2a4118;
        case 0x2a411cu: goto label_2a411c;
        case 0x2a4120u: goto label_2a4120;
        case 0x2a4124u: goto label_2a4124;
        case 0x2a4128u: goto label_2a4128;
        case 0x2a412cu: goto label_2a412c;
        case 0x2a4130u: goto label_2a4130;
        case 0x2a4134u: goto label_2a4134;
        case 0x2a4138u: goto label_2a4138;
        case 0x2a413cu: goto label_2a413c;
        case 0x2a4140u: goto label_2a4140;
        case 0x2a4144u: goto label_2a4144;
        case 0x2a4148u: goto label_2a4148;
        case 0x2a414cu: goto label_2a414c;
        case 0x2a4150u: goto label_2a4150;
        case 0x2a4154u: goto label_2a4154;
        case 0x2a4158u: goto label_2a4158;
        case 0x2a415cu: goto label_2a415c;
        case 0x2a4160u: goto label_2a4160;
        case 0x2a4164u: goto label_2a4164;
        case 0x2a4168u: goto label_2a4168;
        case 0x2a416cu: goto label_2a416c;
        case 0x2a4170u: goto label_2a4170;
        case 0x2a4174u: goto label_2a4174;
        case 0x2a4178u: goto label_2a4178;
        case 0x2a417cu: goto label_2a417c;
        case 0x2a4180u: goto label_2a4180;
        case 0x2a4184u: goto label_2a4184;
        case 0x2a4188u: goto label_2a4188;
        case 0x2a418cu: goto label_2a418c;
        case 0x2a4190u: goto label_2a4190;
        case 0x2a4194u: goto label_2a4194;
        case 0x2a4198u: goto label_2a4198;
        case 0x2a419cu: goto label_2a419c;
        case 0x2a41a0u: goto label_2a41a0;
        case 0x2a41a4u: goto label_2a41a4;
        case 0x2a41a8u: goto label_2a41a8;
        case 0x2a41acu: goto label_2a41ac;
        case 0x2a41b0u: goto label_2a41b0;
        case 0x2a41b4u: goto label_2a41b4;
        case 0x2a41b8u: goto label_2a41b8;
        case 0x2a41bcu: goto label_2a41bc;
        case 0x2a41c0u: goto label_2a41c0;
        case 0x2a41c4u: goto label_2a41c4;
        case 0x2a41c8u: goto label_2a41c8;
        case 0x2a41ccu: goto label_2a41cc;
        case 0x2a41d0u: goto label_2a41d0;
        case 0x2a41d4u: goto label_2a41d4;
        case 0x2a41d8u: goto label_2a41d8;
        case 0x2a41dcu: goto label_2a41dc;
        case 0x2a41e0u: goto label_2a41e0;
        case 0x2a41e4u: goto label_2a41e4;
        case 0x2a41e8u: goto label_2a41e8;
        case 0x2a41ecu: goto label_2a41ec;
        case 0x2a41f0u: goto label_2a41f0;
        case 0x2a41f4u: goto label_2a41f4;
        case 0x2a41f8u: goto label_2a41f8;
        case 0x2a41fcu: goto label_2a41fc;
        case 0x2a4200u: goto label_2a4200;
        case 0x2a4204u: goto label_2a4204;
        case 0x2a4208u: goto label_2a4208;
        case 0x2a420cu: goto label_2a420c;
        case 0x2a4210u: goto label_2a4210;
        case 0x2a4214u: goto label_2a4214;
        case 0x2a4218u: goto label_2a4218;
        case 0x2a421cu: goto label_2a421c;
        case 0x2a4220u: goto label_2a4220;
        case 0x2a4224u: goto label_2a4224;
        case 0x2a4228u: goto label_2a4228;
        case 0x2a422cu: goto label_2a422c;
        case 0x2a4230u: goto label_2a4230;
        case 0x2a4234u: goto label_2a4234;
        case 0x2a4238u: goto label_2a4238;
        case 0x2a423cu: goto label_2a423c;
        case 0x2a4240u: goto label_2a4240;
        case 0x2a4244u: goto label_2a4244;
        case 0x2a4248u: goto label_2a4248;
        case 0x2a424cu: goto label_2a424c;
        case 0x2a4250u: goto label_2a4250;
        case 0x2a4254u: goto label_2a4254;
        case 0x2a4258u: goto label_2a4258;
        case 0x2a425cu: goto label_2a425c;
        case 0x2a4260u: goto label_2a4260;
        case 0x2a4264u: goto label_2a4264;
        case 0x2a4268u: goto label_2a4268;
        case 0x2a426cu: goto label_2a426c;
        case 0x2a4270u: goto label_2a4270;
        case 0x2a4274u: goto label_2a4274;
        case 0x2a4278u: goto label_2a4278;
        case 0x2a427cu: goto label_2a427c;
        case 0x2a4280u: goto label_2a4280;
        case 0x2a4284u: goto label_2a4284;
        case 0x2a4288u: goto label_2a4288;
        case 0x2a428cu: goto label_2a428c;
        case 0x2a4290u: goto label_2a4290;
        case 0x2a4294u: goto label_2a4294;
        case 0x2a4298u: goto label_2a4298;
        case 0x2a429cu: goto label_2a429c;
        case 0x2a42a0u: goto label_2a42a0;
        case 0x2a42a4u: goto label_2a42a4;
        case 0x2a42a8u: goto label_2a42a8;
        case 0x2a42acu: goto label_2a42ac;
        case 0x2a42b0u: goto label_2a42b0;
        case 0x2a42b4u: goto label_2a42b4;
        case 0x2a42b8u: goto label_2a42b8;
        case 0x2a42bcu: goto label_2a42bc;
        case 0x2a42c0u: goto label_2a42c0;
        case 0x2a42c4u: goto label_2a42c4;
        case 0x2a42c8u: goto label_2a42c8;
        case 0x2a42ccu: goto label_2a42cc;
        case 0x2a42d0u: goto label_2a42d0;
        case 0x2a42d4u: goto label_2a42d4;
        case 0x2a42d8u: goto label_2a42d8;
        case 0x2a42dcu: goto label_2a42dc;
        case 0x2a42e0u: goto label_2a42e0;
        case 0x2a42e4u: goto label_2a42e4;
        case 0x2a42e8u: goto label_2a42e8;
        case 0x2a42ecu: goto label_2a42ec;
        case 0x2a42f0u: goto label_2a42f0;
        case 0x2a42f4u: goto label_2a42f4;
        case 0x2a42f8u: goto label_2a42f8;
        case 0x2a42fcu: goto label_2a42fc;
        case 0x2a4300u: goto label_2a4300;
        case 0x2a4304u: goto label_2a4304;
        case 0x2a4308u: goto label_2a4308;
        case 0x2a430cu: goto label_2a430c;
        case 0x2a4310u: goto label_2a4310;
        case 0x2a4314u: goto label_2a4314;
        case 0x2a4318u: goto label_2a4318;
        case 0x2a431cu: goto label_2a431c;
        case 0x2a4320u: goto label_2a4320;
        case 0x2a4324u: goto label_2a4324;
        case 0x2a4328u: goto label_2a4328;
        case 0x2a432cu: goto label_2a432c;
        case 0x2a4330u: goto label_2a4330;
        case 0x2a4334u: goto label_2a4334;
        case 0x2a4338u: goto label_2a4338;
        case 0x2a433cu: goto label_2a433c;
        case 0x2a4340u: goto label_2a4340;
        case 0x2a4344u: goto label_2a4344;
        case 0x2a4348u: goto label_2a4348;
        case 0x2a434cu: goto label_2a434c;
        case 0x2a4350u: goto label_2a4350;
        case 0x2a4354u: goto label_2a4354;
        case 0x2a4358u: goto label_2a4358;
        case 0x2a435cu: goto label_2a435c;
        case 0x2a4360u: goto label_2a4360;
        case 0x2a4364u: goto label_2a4364;
        case 0x2a4368u: goto label_2a4368;
        case 0x2a436cu: goto label_2a436c;
        case 0x2a4370u: goto label_2a4370;
        case 0x2a4374u: goto label_2a4374;
        case 0x2a4378u: goto label_2a4378;
        case 0x2a437cu: goto label_2a437c;
        case 0x2a4380u: goto label_2a4380;
        case 0x2a4384u: goto label_2a4384;
        case 0x2a4388u: goto label_2a4388;
        case 0x2a438cu: goto label_2a438c;
        case 0x2a4390u: goto label_2a4390;
        case 0x2a4394u: goto label_2a4394;
        case 0x2a4398u: goto label_2a4398;
        case 0x2a439cu: goto label_2a439c;
        case 0x2a43a0u: goto label_2a43a0;
        case 0x2a43a4u: goto label_2a43a4;
        case 0x2a43a8u: goto label_2a43a8;
        case 0x2a43acu: goto label_2a43ac;
        case 0x2a43b0u: goto label_2a43b0;
        case 0x2a43b4u: goto label_2a43b4;
        case 0x2a43b8u: goto label_2a43b8;
        case 0x2a43bcu: goto label_2a43bc;
        case 0x2a43c0u: goto label_2a43c0;
        case 0x2a43c4u: goto label_2a43c4;
        case 0x2a43c8u: goto label_2a43c8;
        case 0x2a43ccu: goto label_2a43cc;
        case 0x2a43d0u: goto label_2a43d0;
        case 0x2a43d4u: goto label_2a43d4;
        case 0x2a43d8u: goto label_2a43d8;
        case 0x2a43dcu: goto label_2a43dc;
        case 0x2a43e0u: goto label_2a43e0;
        case 0x2a43e4u: goto label_2a43e4;
        case 0x2a43e8u: goto label_2a43e8;
        case 0x2a43ecu: goto label_2a43ec;
        case 0x2a43f0u: goto label_2a43f0;
        case 0x2a43f4u: goto label_2a43f4;
        case 0x2a43f8u: goto label_2a43f8;
        case 0x2a43fcu: goto label_2a43fc;
        case 0x2a4400u: goto label_2a4400;
        case 0x2a4404u: goto label_2a4404;
        case 0x2a4408u: goto label_2a4408;
        case 0x2a440cu: goto label_2a440c;
        case 0x2a4410u: goto label_2a4410;
        case 0x2a4414u: goto label_2a4414;
        case 0x2a4418u: goto label_2a4418;
        case 0x2a441cu: goto label_2a441c;
        case 0x2a4420u: goto label_2a4420;
        case 0x2a4424u: goto label_2a4424;
        case 0x2a4428u: goto label_2a4428;
        case 0x2a442cu: goto label_2a442c;
        case 0x2a4430u: goto label_2a4430;
        case 0x2a4434u: goto label_2a4434;
        case 0x2a4438u: goto label_2a4438;
        case 0x2a443cu: goto label_2a443c;
        case 0x2a4440u: goto label_2a4440;
        case 0x2a4444u: goto label_2a4444;
        case 0x2a4448u: goto label_2a4448;
        case 0x2a444cu: goto label_2a444c;
        case 0x2a4450u: goto label_2a4450;
        case 0x2a4454u: goto label_2a4454;
        case 0x2a4458u: goto label_2a4458;
        case 0x2a445cu: goto label_2a445c;
        case 0x2a4460u: goto label_2a4460;
        case 0x2a4464u: goto label_2a4464;
        case 0x2a4468u: goto label_2a4468;
        case 0x2a446cu: goto label_2a446c;
        case 0x2a4470u: goto label_2a4470;
        case 0x2a4474u: goto label_2a4474;
        case 0x2a4478u: goto label_2a4478;
        case 0x2a447cu: goto label_2a447c;
        case 0x2a4480u: goto label_2a4480;
        case 0x2a4484u: goto label_2a4484;
        case 0x2a4488u: goto label_2a4488;
        case 0x2a448cu: goto label_2a448c;
        case 0x2a4490u: goto label_2a4490;
        case 0x2a4494u: goto label_2a4494;
        case 0x2a4498u: goto label_2a4498;
        case 0x2a449cu: goto label_2a449c;
        case 0x2a44a0u: goto label_2a44a0;
        case 0x2a44a4u: goto label_2a44a4;
        case 0x2a44a8u: goto label_2a44a8;
        case 0x2a44acu: goto label_2a44ac;
        case 0x2a44b0u: goto label_2a44b0;
        case 0x2a44b4u: goto label_2a44b4;
        case 0x2a44b8u: goto label_2a44b8;
        case 0x2a44bcu: goto label_2a44bc;
        case 0x2a44c0u: goto label_2a44c0;
        case 0x2a44c4u: goto label_2a44c4;
        case 0x2a44c8u: goto label_2a44c8;
        case 0x2a44ccu: goto label_2a44cc;
        case 0x2a44d0u: goto label_2a44d0;
        case 0x2a44d4u: goto label_2a44d4;
        case 0x2a44d8u: goto label_2a44d8;
        case 0x2a44dcu: goto label_2a44dc;
        case 0x2a44e0u: goto label_2a44e0;
        case 0x2a44e4u: goto label_2a44e4;
        case 0x2a44e8u: goto label_2a44e8;
        case 0x2a44ecu: goto label_2a44ec;
        case 0x2a44f0u: goto label_2a44f0;
        case 0x2a44f4u: goto label_2a44f4;
        case 0x2a44f8u: goto label_2a44f8;
        case 0x2a44fcu: goto label_2a44fc;
        case 0x2a4500u: goto label_2a4500;
        case 0x2a4504u: goto label_2a4504;
        case 0x2a4508u: goto label_2a4508;
        case 0x2a450cu: goto label_2a450c;
        case 0x2a4510u: goto label_2a4510;
        case 0x2a4514u: goto label_2a4514;
        case 0x2a4518u: goto label_2a4518;
        case 0x2a451cu: goto label_2a451c;
        case 0x2a4520u: goto label_2a4520;
        case 0x2a4524u: goto label_2a4524;
        case 0x2a4528u: goto label_2a4528;
        case 0x2a452cu: goto label_2a452c;
        case 0x2a4530u: goto label_2a4530;
        case 0x2a4534u: goto label_2a4534;
        case 0x2a4538u: goto label_2a4538;
        case 0x2a453cu: goto label_2a453c;
        case 0x2a4540u: goto label_2a4540;
        case 0x2a4544u: goto label_2a4544;
        case 0x2a4548u: goto label_2a4548;
        case 0x2a454cu: goto label_2a454c;
        case 0x2a4550u: goto label_2a4550;
        case 0x2a4554u: goto label_2a4554;
        case 0x2a4558u: goto label_2a4558;
        case 0x2a455cu: goto label_2a455c;
        case 0x2a4560u: goto label_2a4560;
        case 0x2a4564u: goto label_2a4564;
        case 0x2a4568u: goto label_2a4568;
        case 0x2a456cu: goto label_2a456c;
        case 0x2a4570u: goto label_2a4570;
        case 0x2a4574u: goto label_2a4574;
        case 0x2a4578u: goto label_2a4578;
        case 0x2a457cu: goto label_2a457c;
        case 0x2a4580u: goto label_2a4580;
        case 0x2a4584u: goto label_2a4584;
        case 0x2a4588u: goto label_2a4588;
        case 0x2a458cu: goto label_2a458c;
        case 0x2a4590u: goto label_2a4590;
        case 0x2a4594u: goto label_2a4594;
        case 0x2a4598u: goto label_2a4598;
        case 0x2a459cu: goto label_2a459c;
        case 0x2a45a0u: goto label_2a45a0;
        case 0x2a45a4u: goto label_2a45a4;
        case 0x2a45a8u: goto label_2a45a8;
        case 0x2a45acu: goto label_2a45ac;
        case 0x2a45b0u: goto label_2a45b0;
        case 0x2a45b4u: goto label_2a45b4;
        case 0x2a45b8u: goto label_2a45b8;
        case 0x2a45bcu: goto label_2a45bc;
        case 0x2a45c0u: goto label_2a45c0;
        case 0x2a45c4u: goto label_2a45c4;
        case 0x2a45c8u: goto label_2a45c8;
        case 0x2a45ccu: goto label_2a45cc;
        case 0x2a45d0u: goto label_2a45d0;
        case 0x2a45d4u: goto label_2a45d4;
        case 0x2a45d8u: goto label_2a45d8;
        case 0x2a45dcu: goto label_2a45dc;
        case 0x2a45e0u: goto label_2a45e0;
        case 0x2a45e4u: goto label_2a45e4;
        case 0x2a45e8u: goto label_2a45e8;
        case 0x2a45ecu: goto label_2a45ec;
        case 0x2a45f0u: goto label_2a45f0;
        case 0x2a45f4u: goto label_2a45f4;
        case 0x2a45f8u: goto label_2a45f8;
        case 0x2a45fcu: goto label_2a45fc;
        case 0x2a4600u: goto label_2a4600;
        case 0x2a4604u: goto label_2a4604;
        case 0x2a4608u: goto label_2a4608;
        case 0x2a460cu: goto label_2a460c;
        case 0x2a4610u: goto label_2a4610;
        case 0x2a4614u: goto label_2a4614;
        case 0x2a4618u: goto label_2a4618;
        case 0x2a461cu: goto label_2a461c;
        case 0x2a4620u: goto label_2a4620;
        case 0x2a4624u: goto label_2a4624;
        case 0x2a4628u: goto label_2a4628;
        case 0x2a462cu: goto label_2a462c;
        case 0x2a4630u: goto label_2a4630;
        case 0x2a4634u: goto label_2a4634;
        case 0x2a4638u: goto label_2a4638;
        case 0x2a463cu: goto label_2a463c;
        case 0x2a4640u: goto label_2a4640;
        case 0x2a4644u: goto label_2a4644;
        case 0x2a4648u: goto label_2a4648;
        case 0x2a464cu: goto label_2a464c;
        case 0x2a4650u: goto label_2a4650;
        case 0x2a4654u: goto label_2a4654;
        case 0x2a4658u: goto label_2a4658;
        case 0x2a465cu: goto label_2a465c;
        case 0x2a4660u: goto label_2a4660;
        case 0x2a4664u: goto label_2a4664;
        case 0x2a4668u: goto label_2a4668;
        case 0x2a466cu: goto label_2a466c;
        case 0x2a4670u: goto label_2a4670;
        case 0x2a4674u: goto label_2a4674;
        case 0x2a4678u: goto label_2a4678;
        case 0x2a467cu: goto label_2a467c;
        case 0x2a4680u: goto label_2a4680;
        case 0x2a4684u: goto label_2a4684;
        case 0x2a4688u: goto label_2a4688;
        case 0x2a468cu: goto label_2a468c;
        case 0x2a4690u: goto label_2a4690;
        case 0x2a4694u: goto label_2a4694;
        case 0x2a4698u: goto label_2a4698;
        case 0x2a469cu: goto label_2a469c;
        case 0x2a46a0u: goto label_2a46a0;
        case 0x2a46a4u: goto label_2a46a4;
        case 0x2a46a8u: goto label_2a46a8;
        case 0x2a46acu: goto label_2a46ac;
        case 0x2a46b0u: goto label_2a46b0;
        case 0x2a46b4u: goto label_2a46b4;
        case 0x2a46b8u: goto label_2a46b8;
        case 0x2a46bcu: goto label_2a46bc;
        case 0x2a46c0u: goto label_2a46c0;
        case 0x2a46c4u: goto label_2a46c4;
        case 0x2a46c8u: goto label_2a46c8;
        case 0x2a46ccu: goto label_2a46cc;
        case 0x2a46d0u: goto label_2a46d0;
        case 0x2a46d4u: goto label_2a46d4;
        case 0x2a46d8u: goto label_2a46d8;
        case 0x2a46dcu: goto label_2a46dc;
        case 0x2a46e0u: goto label_2a46e0;
        case 0x2a46e4u: goto label_2a46e4;
        case 0x2a46e8u: goto label_2a46e8;
        case 0x2a46ecu: goto label_2a46ec;
        case 0x2a46f0u: goto label_2a46f0;
        case 0x2a46f4u: goto label_2a46f4;
        case 0x2a46f8u: goto label_2a46f8;
        case 0x2a46fcu: goto label_2a46fc;
        case 0x2a4700u: goto label_2a4700;
        case 0x2a4704u: goto label_2a4704;
        case 0x2a4708u: goto label_2a4708;
        case 0x2a470cu: goto label_2a470c;
        case 0x2a4710u: goto label_2a4710;
        case 0x2a4714u: goto label_2a4714;
        case 0x2a4718u: goto label_2a4718;
        case 0x2a471cu: goto label_2a471c;
        case 0x2a4720u: goto label_2a4720;
        case 0x2a4724u: goto label_2a4724;
        case 0x2a4728u: goto label_2a4728;
        case 0x2a472cu: goto label_2a472c;
        case 0x2a4730u: goto label_2a4730;
        case 0x2a4734u: goto label_2a4734;
        case 0x2a4738u: goto label_2a4738;
        case 0x2a473cu: goto label_2a473c;
        case 0x2a4740u: goto label_2a4740;
        case 0x2a4744u: goto label_2a4744;
        case 0x2a4748u: goto label_2a4748;
        case 0x2a474cu: goto label_2a474c;
        case 0x2a4750u: goto label_2a4750;
        case 0x2a4754u: goto label_2a4754;
        case 0x2a4758u: goto label_2a4758;
        case 0x2a475cu: goto label_2a475c;
        case 0x2a4760u: goto label_2a4760;
        case 0x2a4764u: goto label_2a4764;
        case 0x2a4768u: goto label_2a4768;
        case 0x2a476cu: goto label_2a476c;
        case 0x2a4770u: goto label_2a4770;
        case 0x2a4774u: goto label_2a4774;
        case 0x2a4778u: goto label_2a4778;
        case 0x2a477cu: goto label_2a477c;
        case 0x2a4780u: goto label_2a4780;
        case 0x2a4784u: goto label_2a4784;
        case 0x2a4788u: goto label_2a4788;
        case 0x2a478cu: goto label_2a478c;
        case 0x2a4790u: goto label_2a4790;
        case 0x2a4794u: goto label_2a4794;
        case 0x2a4798u: goto label_2a4798;
        case 0x2a479cu: goto label_2a479c;
        case 0x2a47a0u: goto label_2a47a0;
        case 0x2a47a4u: goto label_2a47a4;
        case 0x2a47a8u: goto label_2a47a8;
        case 0x2a47acu: goto label_2a47ac;
        case 0x2a47b0u: goto label_2a47b0;
        case 0x2a47b4u: goto label_2a47b4;
        case 0x2a47b8u: goto label_2a47b8;
        case 0x2a47bcu: goto label_2a47bc;
        default: break;
    }

    ctx->pc = 0x2a3a30u;

label_2a3a30:
    // 0x2a3a30: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x2a3a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_2a3a34:
    // 0x2a3a34: 0x3e00008  jr          $ra
label_2a3a38:
    if (ctx->pc == 0x2A3A38u) {
        ctx->pc = 0x2A3A38u;
            // 0x2a3a38: 0xac446a4c  sw          $a0, 0x6A4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27212), GPR_U32(ctx, 4));
        ctx->pc = 0x2A3A3Cu;
        goto label_2a3a3c;
    }
    ctx->pc = 0x2A3A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A3A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3A34u;
            // 0x2a3a38: 0xac446a4c  sw          $a0, 0x6A4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 27212), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3A3Cu;
label_2a3a3c:
    // 0x2a3a3c: 0x0  nop
    ctx->pc = 0x2a3a3cu;
    // NOP
label_2a3a40:
    // 0x2a3a40: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x2a3a40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_2a3a44:
    // 0x2a3a44: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x2a3a44u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_2a3a48:
    // 0x2a3a48: 0xffbe00a0  sd          $fp, 0xA0($sp)
    ctx->pc = 0x2a3a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 30));
label_2a3a4c:
    // 0x2a3a4c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x2a3a4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_2a3a50:
    // 0x2a3a50: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x2a3a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_2a3a54:
    // 0x2a3a54: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x2a3a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_2a3a58:
    // 0x2a3a58: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x2a3a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_2a3a5c:
    // 0x2a3a5c: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x2a3a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_2a3a60:
    // 0x2a3a60: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x2a3a60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_2a3a64:
    // 0x2a3a64: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x2a3a64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_2a3a68:
    // 0x2a3a68: 0x3a0f02d  daddu       $fp, $sp, $zero
    ctx->pc = 0x2a3a68u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2a3a6c:
    // 0x2a3a6c: 0xafc40000  sw          $a0, 0x0($fp)
    ctx->pc = 0x2a3a6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 4));
label_2a3a70:
    // 0x2a3a70: 0xafc50004  sw          $a1, 0x4($fp)
    ctx->pc = 0x2a3a70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 5));
label_2a3a74:
    // 0x2a3a74: 0xffc60008  sd          $a2, 0x8($fp)
    ctx->pc = 0x2a3a74u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 8), GPR_U64(ctx, 6));
label_2a3a78:
    // 0x2a3a78: 0xafc70010  sw          $a3, 0x10($fp)
    ctx->pc = 0x2a3a78u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 16), GPR_U32(ctx, 7));
label_2a3a7c:
    // 0x2a3a7c: 0xafc80014  sw          $t0, 0x14($fp)
    ctx->pc = 0x2a3a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 8));
label_2a3a80:
    // 0x2a3a80: 0xafc90018  sw          $t1, 0x18($fp)
    ctx->pc = 0x2a3a80u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 24), GPR_U32(ctx, 9));
label_2a3a84:
    // 0x2a3a84: 0xdfd60008  ld          $s6, 0x8($fp)
    ctx->pc = 0x2a3a84u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 30), 8)));
label_2a3a88:
    // 0x2a3a88: 0x8fc20018  lw          $v0, 0x18($fp)
    ctx->pc = 0x2a3a88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24)));
label_2a3a8c:
    // 0x2a3a8c: 0x104001a0  beqz        $v0, . + 4 + (0x1A0 << 2)
label_2a3a90:
    if (ctx->pc == 0x2A3A90u) {
        ctx->pc = 0x2A3A94u;
        goto label_2a3a94;
    }
    ctx->pc = 0x2A3A8Cu;
    {
        const bool branch_taken_0x2a3a8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3a8c) {
            ctx->pc = 0x2A4110u;
            goto label_2a4110;
        }
    }
    ctx->pc = 0x2A3A94u;
label_2a3a94:
    // 0x2a3a94: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a3a94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a3a98:
    // 0x2a3a98: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3a9c:
    // 0x2a3a9c: 0x90720000  lbu         $s2, 0x0($v1)
    ctx->pc = 0x2a3a9cu;
    SET_GPR_U32(ctx, 18, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3aa0:
    // 0x2a3aa0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3aa4:
    // 0x2a3aa4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3aa8:
    // 0x2a3aa8: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a3aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a3aac:
    // 0x2a3aac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3aacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3ab0:
    // 0x2a3ab0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a3ab0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3ab4:
    // 0x2a3ab4: 0x42a38  dsll        $a1, $a0, 8
    ctx->pc = 0x2a3ab4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 8);
label_2a3ab8:
    // 0x2a3ab8: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x2a3ab8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
label_2a3abc:
    // 0x2a3abc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3abcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3ac0:
    // 0x2a3ac0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3ac0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3ac4:
    // 0x2a3ac4: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a3ac8:
    // 0x2a3ac8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3ac8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3acc:
    // 0x2a3acc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a3accu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3ad0:
    // 0x2a3ad0: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x2a3ad0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
label_2a3ad4:
    // 0x2a3ad4: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x2a3ad4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
label_2a3ad8:
    // 0x2a3ad8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3adc:
    // 0x2a3adc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3adcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3ae0:
    // 0x2a3ae0: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a3ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a3ae4:
    // 0x2a3ae4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3ae8:
    // 0x2a3ae8: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a3ae8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3aec:
    // 0x2a3aec: 0x42e38  dsll        $a1, $a0, 24
    ctx->pc = 0x2a3aecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 24);
label_2a3af0:
    // 0x2a3af0: 0x2459025  or          $s2, $s2, $a1
    ctx->pc = 0x2a3af0u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
label_2a3af4:
    // 0x2a3af4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3af4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3af8:
    // 0x2a3af8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3afc:
    // 0x2a3afc: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a3afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a3b00:
    // 0x2a3b00: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3b00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3b04:
    // 0x2a3b04: 0x90730000  lbu         $s3, 0x0($v1)
    ctx->pc = 0x2a3b04u;
    SET_GPR_U32(ctx, 19, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3b08:
    // 0x2a3b08: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3b0c:
    // 0x2a3b0c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3b0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3b10:
    // 0x2a3b10: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a3b10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a3b14:
    // 0x2a3b14: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3b18:
    // 0x2a3b18: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a3b18u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3b1c:
    // 0x2a3b1c: 0x42a38  dsll        $a1, $a0, 8
    ctx->pc = 0x2a3b1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 8);
label_2a3b20:
    // 0x2a3b20: 0x2659825  or          $s3, $s3, $a1
    ctx->pc = 0x2a3b20u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
label_2a3b24:
    // 0x2a3b24: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3b24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3b28:
    // 0x2a3b28: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3b28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3b2c:
    // 0x2a3b2c: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a3b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a3b30:
    // 0x2a3b30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3b34:
    // 0x2a3b34: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a3b34u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3b38:
    // 0x2a3b38: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x2a3b38u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
label_2a3b3c:
    // 0x2a3b3c: 0x2659825  or          $s3, $s3, $a1
    ctx->pc = 0x2a3b3cu;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
label_2a3b40:
    // 0x2a3b40: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3b40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3b44:
    // 0x2a3b44: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3b44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3b48:
    // 0x2a3b48: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a3b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a3b4c:
    // 0x2a3b4c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3b4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3b50:
    // 0x2a3b50: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a3b50u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3b54:
    // 0x2a3b54: 0x42e38  dsll        $a1, $a0, 24
    ctx->pc = 0x2a3b54u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 24);
label_2a3b58:
    // 0x2a3b58: 0x2659825  or          $s3, $s3, $a1
    ctx->pc = 0x2a3b58u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | GPR_U64(ctx, 5));
label_2a3b5c:
    // 0x2a3b5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3b60:
    // 0x2a3b60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3b64:
    // 0x2a3b64: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x2a3b64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_2a3b68:
    // 0x2a3b68: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x2a3b68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_2a3b6c:
    // 0x2a3b6c: 0xafc30014  sw          $v1, 0x14($fp)
    ctx->pc = 0x2a3b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 3));
label_2a3b70:
    // 0x2a3b70: 0x66d6fff8  daddiu      $s6, $s6, -0x8
    ctx->pc = 0x2a3b70u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)4294967288);
label_2a3b74:
    // 0x2a3b74: 0x0  nop
    ctx->pc = 0x2a3b74u;
    // NOP
label_2a3b78:
    // 0x2a3b78: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
label_2a3b7c:
    if (ctx->pc == 0x2A3B7Cu) {
        ctx->pc = 0x2A3B80u;
        goto label_2a3b80;
    }
    ctx->pc = 0x2A3B78u;
    {
        const bool branch_taken_0x2a3b78 = (GPR_S32(ctx, 22) >= 0);
        if (branch_taken_0x2a3b78) {
            ctx->pc = 0x2A3B88u;
            goto label_2a3b88;
        }
    }
    ctx->pc = 0x2A3B80u;
label_2a3b80:
    // 0x2a3b80: 0x1000007f  b           . + 4 + (0x7F << 2)
label_2a3b84:
    if (ctx->pc == 0x2A3B84u) {
        ctx->pc = 0x2A3B88u;
        goto label_2a3b88;
    }
    ctx->pc = 0x2A3B80u;
    {
        const bool branch_taken_0x2a3b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3b80) {
            ctx->pc = 0x2A3D80u;
            goto label_2a3d80;
        }
    }
    ctx->pc = 0x2A3B88u;
label_2a3b88:
    // 0x2a3b88: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a3b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3b8c:
    // 0x2a3b8c: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2a3b8cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3b90:
    // 0x2a3b90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3b94:
    // 0x2a3b94: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a3b94u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a3b98:
    // 0x2a3b98: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a3b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3b9c:
    // 0x2a3b9c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a3b9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3ba0:
    // 0x2a3ba0: 0x32238  dsll        $a0, $v1, 8
    ctx->pc = 0x2a3ba0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
label_2a3ba4:
    // 0x2a3ba4: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x2a3ba4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_2a3ba8:
    // 0x2a3ba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3bac:
    // 0x2a3bac: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a3bacu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a3bb0:
    // 0x2a3bb0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a3bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3bb4:
    // 0x2a3bb4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a3bb4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3bb8:
    // 0x2a3bb8: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2a3bb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_2a3bbc:
    // 0x2a3bbc: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x2a3bbcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_2a3bc0:
    // 0x2a3bc0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3bc4:
    // 0x2a3bc4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a3bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a3bc8:
    // 0x2a3bc8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a3bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3bcc:
    // 0x2a3bcc: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a3bccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3bd0:
    // 0x2a3bd0: 0x32638  dsll        $a0, $v1, 24
    ctx->pc = 0x2a3bd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 24);
label_2a3bd4:
    // 0x2a3bd4: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x2a3bd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_2a3bd8:
    // 0x2a3bd8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3bdc:
    // 0x2a3bdc: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a3bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a3be0:
    // 0x2a3be0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a3be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3be4:
    // 0x2a3be4: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x2a3be4u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3be8:
    // 0x2a3be8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3bec:
    // 0x2a3bec: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a3becu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a3bf0:
    // 0x2a3bf0: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a3bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3bf4:
    // 0x2a3bf4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a3bf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3bf8:
    // 0x2a3bf8: 0x32238  dsll        $a0, $v1, 8
    ctx->pc = 0x2a3bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
label_2a3bfc:
    // 0x2a3bfc: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x2a3bfcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_2a3c00:
    // 0x2a3c00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3c04:
    // 0x2a3c04: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a3c04u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a3c08:
    // 0x2a3c08: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a3c08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3c0c:
    // 0x2a3c0c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a3c0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3c10:
    // 0x2a3c10: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2a3c10u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_2a3c14:
    // 0x2a3c14: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x2a3c14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_2a3c18:
    // 0x2a3c18: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3c18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3c1c:
    // 0x2a3c1c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a3c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a3c20:
    // 0x2a3c20: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3c24:
    // 0x2a3c24: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a3c24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3c28:
    // 0x2a3c28: 0x32638  dsll        $a0, $v1, 24
    ctx->pc = 0x2a3c28u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 24);
label_2a3c2c:
    // 0x2a3c2c: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x2a3c2cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_2a3c30:
    // 0x2a3c30: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a3c30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a3c34:
    // 0x2a3c34: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a3c34u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a3c38:
    // 0x2a3c38: 0x2128026  xor         $s0, $s0, $s2
    ctx->pc = 0x2a3c38u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 18));
label_2a3c3c:
    // 0x2a3c3c: 0x2338826  xor         $s1, $s1, $s3
    ctx->pc = 0x2a3c3cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 19));
label_2a3c40:
    // 0x2a3c40: 0xffd00020  sd          $s0, 0x20($fp)
    ctx->pc = 0x2a3c40u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 32), GPR_U64(ctx, 16));
label_2a3c44:
    // 0x2a3c44: 0xffd10028  sd          $s1, 0x28($fp)
    ctx->pc = 0x2a3c44u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 40), GPR_U64(ctx, 17));
label_2a3c48:
    // 0x2a3c48: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x2a3c48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_2a3c4c:
    // 0x2a3c4c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3c4cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3c50:
    // 0x2a3c50: 0xc0a91f0  jal         func_2A47C0
label_2a3c54:
    if (ctx->pc == 0x2A3C54u) {
        ctx->pc = 0x2A3C54u;
            // 0x2a3c54: 0x8fc50010  lw          $a1, 0x10($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->pc = 0x2A3C58u;
        goto label_2a3c58;
    }
    ctx->pc = 0x2A3C50u;
    SET_GPR_U32(ctx, 31, 0x2A3C58u);
    ctx->pc = 0x2A3C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3C50u;
            // 0x2a3c54: 0x8fc50010  lw          $a1, 0x10($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A47C0u;
    if (runtime->hasFunction(0x2A47C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A47C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C58u; }
        if (ctx->pc != 0x2A3C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A47C0_0x2a47c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3C58u; }
        if (ctx->pc != 0x2A3C58u) { return; }
    }
    ctx->pc = 0x2A3C58u;
label_2a3c58:
    // 0x2a3c58: 0xdfd20020  ld          $s2, 0x20($fp)
    ctx->pc = 0x2a3c58u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 30), 32)));
label_2a3c5c:
    // 0x2a3c5c: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3c60:
    // 0x2a3c60: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3c60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3c64:
    // 0x2a3c64: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a3c64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3c68:
    // 0x2a3c68: 0x2442824  and         $a1, $s2, $a0
    ctx->pc = 0x2a3c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_2a3c6c:
    // 0x2a3c6c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3c6cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3c70:
    // 0x2a3c70: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3c70u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3c74:
    // 0x2a3c74: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3c74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3c78:
    // 0x2a3c78: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3c78u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3c7c:
    // 0x2a3c7c: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3c80:
    // 0x2a3c80: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3c80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3c84:
    // 0x2a3c84: 0x12223a  dsrl        $a0, $s2, 8
    ctx->pc = 0x2a3c84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 8);
label_2a3c88:
    // 0x2a3c88: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3c8c:
    // 0x2a3c8c: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3c8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3c90:
    // 0x2a3c90: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3c90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3c94:
    // 0x2a3c94: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3c94u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3c98:
    // 0x2a3c98: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3c9c:
    // 0x2a3c9c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3ca0:
    // 0x2a3ca0: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3ca4:
    // 0x2a3ca4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3ca8:
    // 0x2a3ca8: 0x12243a  dsrl        $a0, $s2, 16
    ctx->pc = 0x2a3ca8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 16);
label_2a3cac:
    // 0x2a3cac: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3cacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3cb0:
    // 0x2a3cb0: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3cb0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3cb4:
    // 0x2a3cb4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3cb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3cb8:
    // 0x2a3cb8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3cb8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3cbc:
    // 0x2a3cbc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3cc0:
    // 0x2a3cc0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3cc4:
    // 0x2a3cc4: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3cc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3cc8:
    // 0x2a3cc8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3ccc:
    // 0x2a3ccc: 0x12263a  dsrl        $a0, $s2, 24
    ctx->pc = 0x2a3cccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 24);
label_2a3cd0:
    // 0x2a3cd0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3cd4:
    // 0x2a3cd4: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3cd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3cd8:
    // 0x2a3cd8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3cd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3cdc:
    // 0x2a3cdc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3cdcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3ce0:
    // 0x2a3ce0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3ce4:
    // 0x2a3ce4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3ce8:
    // 0x2a3ce8: 0xdfd30028  ld          $s3, 0x28($fp)
    ctx->pc = 0x2a3ce8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 30), 40)));
label_2a3cec:
    // 0x2a3cec: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3cecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3cf0:
    // 0x2a3cf0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3cf4:
    // 0x2a3cf4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a3cf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3cf8:
    // 0x2a3cf8: 0x2642824  and         $a1, $s3, $a0
    ctx->pc = 0x2a3cf8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_2a3cfc:
    // 0x2a3cfc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3cfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3d00:
    // 0x2a3d00: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3d00u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3d04:
    // 0x2a3d04: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3d04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3d08:
    // 0x2a3d08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3d0c:
    // 0x2a3d0c: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3d10:
    // 0x2a3d10: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3d14:
    // 0x2a3d14: 0x13223a  dsrl        $a0, $s3, 8
    ctx->pc = 0x2a3d14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 8);
label_2a3d18:
    // 0x2a3d18: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3d1c:
    // 0x2a3d1c: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3d1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3d20:
    // 0x2a3d20: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3d20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3d24:
    // 0x2a3d24: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3d24u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3d28:
    // 0x2a3d28: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3d2c:
    // 0x2a3d2c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3d2cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3d30:
    // 0x2a3d30: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3d30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3d34:
    // 0x2a3d34: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3d34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3d38:
    // 0x2a3d38: 0x13243a  dsrl        $a0, $s3, 16
    ctx->pc = 0x2a3d38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 16);
label_2a3d3c:
    // 0x2a3d3c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3d40:
    // 0x2a3d40: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3d40u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3d44:
    // 0x2a3d44: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3d44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3d48:
    // 0x2a3d48: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3d48u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3d4c:
    // 0x2a3d4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3d50:
    // 0x2a3d50: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3d50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3d54:
    // 0x2a3d54: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3d58:
    // 0x2a3d58: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3d5c:
    // 0x2a3d5c: 0x13263a  dsrl        $a0, $s3, 24
    ctx->pc = 0x2a3d5cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 24);
label_2a3d60:
    // 0x2a3d60: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3d60u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3d64:
    // 0x2a3d64: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3d64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3d68:
    // 0x2a3d68: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3d68u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3d6c:
    // 0x2a3d6c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3d6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3d70:
    // 0x2a3d70: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3d70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3d74:
    // 0x2a3d74: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3d78:
    // 0x2a3d78: 0x1000ff7f  b           . + 4 + (-0x81 << 2)
label_2a3d7c:
    if (ctx->pc == 0x2A3D7Cu) {
        ctx->pc = 0x2A3D7Cu;
            // 0x2a3d7c: 0x66d6fff8  daddiu      $s6, $s6, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)4294967288);
        ctx->pc = 0x2A3D80u;
        goto label_2a3d80;
    }
    ctx->pc = 0x2A3D78u;
    {
        const bool branch_taken_0x2a3d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A3D7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3D78u;
            // 0x2a3d7c: 0x66d6fff8  daddiu      $s6, $s6, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a3d78) {
            ctx->pc = 0x2A3B78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a3b78;
        }
    }
    ctx->pc = 0x2A3D80u;
label_2a3d80:
    // 0x2a3d80: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x2a3d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_2a3d84:
    // 0x2a3d84: 0x12c2009b  beq         $s6, $v0, . + 4 + (0x9B << 2)
label_2a3d88:
    if (ctx->pc == 0x2A3D88u) {
        ctx->pc = 0x2A3D8Cu;
        goto label_2a3d8c;
    }
    ctx->pc = 0x2A3D84u;
    {
        const bool branch_taken_0x2a3d84 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a3d84) {
            ctx->pc = 0x2A3FF4u;
            goto label_2a3ff4;
        }
    }
    ctx->pc = 0x2A3D8Cu;
label_2a3d8c:
    // 0x2a3d8c: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x2a3d8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_2a3d90:
    // 0x2a3d90: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a3d90u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2a3d94:
    // 0x2a3d94: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2a3d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2a3d98:
    // 0x2a3d98: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a3d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3d9c:
    // 0x2a3d9c: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a3d9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a3da0:
    // 0x2a3da0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a3da0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_2a3da4:
    // 0x2a3da4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a3da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3da8:
    // 0x2a3da8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a3da8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a3dac:
    // 0x2a3dac: 0x66c20007  daddiu      $v0, $s6, 0x7
    ctx->pc = 0x2a3dacu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)7);
label_2a3db0:
    // 0x2a3db0: 0x2c430008  sltiu       $v1, $v0, 0x8
    ctx->pc = 0x2a3db0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2a3db4:
    // 0x2a3db4: 0x1060003f  beqz        $v1, . + 4 + (0x3F << 2)
label_2a3db8:
    if (ctx->pc == 0x2A3DB8u) {
        ctx->pc = 0x2A3DBCu;
        goto label_2a3dbc;
    }
    ctx->pc = 0x2A3DB4u;
    {
        const bool branch_taken_0x2a3db4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a3db4) {
            ctx->pc = 0x2A3EB4u;
            goto label_2a3eb4;
        }
    }
    ctx->pc = 0x2A3DBCu;
label_2a3dbc:
    // 0x2a3dbc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a3dbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2a3dc0:
    // 0x2a3dc0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a3dc0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2a3dc4:
    // 0x2a3dc4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3dc4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3dc8:
    // 0x2a3dc8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a3dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a3dcc:
    // 0x2a3dcc: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2a3dccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2a3dd0:
    // 0x2a3dd0: 0x2463c920  addiu       $v1, $v1, -0x36E0
    ctx->pc = 0x2a3dd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953248));
label_2a3dd4:
    // 0x2a3dd4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a3dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a3dd8:
    // 0x2a3dd8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3dd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3ddc:
    // 0x2a3ddc: 0x600008  jr          $v1
label_2a3de0:
    if (ctx->pc == 0x2A3DE0u) {
        ctx->pc = 0x2A3DE4u;
        goto label_2a3de4;
    }
    ctx->pc = 0x2A3DDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A3DE4u;
label_2a3de4:
    // 0x2a3de4: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a3de4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3de8:
    // 0x2a3de8: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2a3de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a3dec:
    // 0x2a3dec: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3decu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3df0:
    // 0x2a3df0: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a3df0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_2a3df4:
    // 0x2a3df4: 0x90710000  lbu         $s1, 0x0($v1)
    ctx->pc = 0x2a3df4u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3df8:
    // 0x2a3df8: 0x118e38  dsll        $s1, $s1, 24
    ctx->pc = 0x2a3df8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) << 24);
label_2a3dfc:
    // 0x2a3dfc: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a3dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3e00:
    // 0x2a3e00: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2a3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a3e04:
    // 0x2a3e04: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3e04u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3e08:
    // 0x2a3e08: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e08u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_2a3e0c:
    // 0x2a3e0c: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a3e0cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3e10:
    // 0x2a3e10: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2a3e10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_2a3e14:
    // 0x2a3e14: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2a3e14u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_2a3e18:
    // 0x2a3e18: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3e1c:
    // 0x2a3e1c: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2a3e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a3e20:
    // 0x2a3e20: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3e20u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3e24:
    // 0x2a3e24: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e24u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_2a3e28:
    // 0x2a3e28: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a3e28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3e2c:
    // 0x2a3e2c: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2a3e2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_2a3e30:
    // 0x2a3e30: 0x2238825  or          $s1, $s1, $v1
    ctx->pc = 0x2a3e30u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 3));
label_2a3e34:
    // 0x2a3e34: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3e38:
    // 0x2a3e38: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2a3e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a3e3c:
    // 0x2a3e3c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3e3cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3e40:
    // 0x2a3e40: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e40u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_2a3e44:
    // 0x2a3e44: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a3e44u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3e48:
    // 0x2a3e48: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x2a3e48u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
label_2a3e4c:
    // 0x2a3e4c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3e50:
    // 0x2a3e50: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2a3e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a3e54:
    // 0x2a3e54: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3e54u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3e58:
    // 0x2a3e58: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e58u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_2a3e5c:
    // 0x2a3e5c: 0x90700000  lbu         $s0, 0x0($v1)
    ctx->pc = 0x2a3e5cu;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3e60:
    // 0x2a3e60: 0x108638  dsll        $s0, $s0, 24
    ctx->pc = 0x2a3e60u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 24);
label_2a3e64:
    // 0x2a3e64: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3e68:
    // 0x2a3e68: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2a3e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a3e6c:
    // 0x2a3e6c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3e6cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3e70:
    // 0x2a3e70: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e70u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_2a3e74:
    // 0x2a3e74: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a3e74u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3e78:
    // 0x2a3e78: 0x21c38  dsll        $v1, $v0, 16
    ctx->pc = 0x2a3e78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 16);
label_2a3e7c:
    // 0x2a3e7c: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x2a3e7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_2a3e80:
    // 0x2a3e80: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3e84:
    // 0x2a3e84: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2a3e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a3e88:
    // 0x2a3e88: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3e88u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3e8c:
    // 0x2a3e8c: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_2a3e90:
    // 0x2a3e90: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a3e90u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3e94:
    // 0x2a3e94: 0x21a38  dsll        $v1, $v0, 8
    ctx->pc = 0x2a3e94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << 8);
label_2a3e98:
    // 0x2a3e98: 0x2038025  or          $s0, $s0, $v1
    ctx->pc = 0x2a3e98u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
label_2a3e9c:
    // 0x2a3e9c: 0x8fc30000  lw          $v1, 0x0($fp)
    ctx->pc = 0x2a3e9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a3ea0:
    // 0x2a3ea0: 0x2462ffff  addiu       $v0, $v1, -0x1
    ctx->pc = 0x2a3ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_2a3ea4:
    // 0x2a3ea4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a3ea4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3ea8:
    // 0x2a3ea8: 0xafc30000  sw          $v1, 0x0($fp)
    ctx->pc = 0x2a3ea8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 3));
label_2a3eac:
    // 0x2a3eac: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2a3eacu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a3eb0:
    // 0x2a3eb0: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x2a3eb0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
label_2a3eb4:
    // 0x2a3eb4: 0x2128026  xor         $s0, $s0, $s2
    ctx->pc = 0x2a3eb4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 18));
label_2a3eb8:
    // 0x2a3eb8: 0x2338826  xor         $s1, $s1, $s3
    ctx->pc = 0x2a3eb8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) ^ GPR_U64(ctx, 19));
label_2a3ebc:
    // 0x2a3ebc: 0xffd00020  sd          $s0, 0x20($fp)
    ctx->pc = 0x2a3ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 30), 32), GPR_U64(ctx, 16));
label_2a3ec0:
    // 0x2a3ec0: 0xffd10028  sd          $s1, 0x28($fp)
    ctx->pc = 0x2a3ec0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 40), GPR_U64(ctx, 17));
label_2a3ec4:
    // 0x2a3ec4: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x2a3ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_2a3ec8:
    // 0x2a3ec8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a3ec8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a3ecc:
    // 0x2a3ecc: 0xc0a91f0  jal         func_2A47C0
label_2a3ed0:
    if (ctx->pc == 0x2A3ED0u) {
        ctx->pc = 0x2A3ED0u;
            // 0x2a3ed0: 0x8fc50010  lw          $a1, 0x10($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->pc = 0x2A3ED4u;
        goto label_2a3ed4;
    }
    ctx->pc = 0x2A3ECCu;
    SET_GPR_U32(ctx, 31, 0x2A3ED4u);
    ctx->pc = 0x2A3ED0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A3ECCu;
            // 0x2a3ed0: 0x8fc50010  lw          $a1, 0x10($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A47C0u;
    if (runtime->hasFunction(0x2A47C0u)) {
        auto targetFn = runtime->lookupFunction(0x2A47C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3ED4u; }
        if (ctx->pc != 0x2A3ED4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A47C0_0x2a47c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A3ED4u; }
        if (ctx->pc != 0x2A3ED4u) { return; }
    }
    ctx->pc = 0x2A3ED4u;
label_2a3ed4:
    // 0x2a3ed4: 0xdfd20020  ld          $s2, 0x20($fp)
    ctx->pc = 0x2a3ed4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 30), 32)));
label_2a3ed8:
    // 0x2a3ed8: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3edc:
    // 0x2a3edc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3edcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3ee0:
    // 0x2a3ee0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3ee4:
    // 0x2a3ee4: 0x2442824  and         $a1, $s2, $a0
    ctx->pc = 0x2a3ee4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_2a3ee8:
    // 0x2a3ee8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3ee8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3eec:
    // 0x2a3eec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3eecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3ef0:
    // 0x2a3ef0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3ef4:
    // 0x2a3ef4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3ef8:
    // 0x2a3ef8: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3efc:
    // 0x2a3efc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3f00:
    // 0x2a3f00: 0x12223a  dsrl        $a0, $s2, 8
    ctx->pc = 0x2a3f00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 8);
label_2a3f04:
    // 0x2a3f04: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3f04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3f08:
    // 0x2a3f08: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3f08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3f0c:
    // 0x2a3f0c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3f0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3f10:
    // 0x2a3f10: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3f10u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3f14:
    // 0x2a3f14: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3f14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3f18:
    // 0x2a3f18: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3f18u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3f1c:
    // 0x2a3f1c: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3f20:
    // 0x2a3f20: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3f20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3f24:
    // 0x2a3f24: 0x12243a  dsrl        $a0, $s2, 16
    ctx->pc = 0x2a3f24u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 16);
label_2a3f28:
    // 0x2a3f28: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3f28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3f2c:
    // 0x2a3f2c: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3f2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3f30:
    // 0x2a3f30: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3f30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3f34:
    // 0x2a3f34: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3f34u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3f38:
    // 0x2a3f38: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3f38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3f3c:
    // 0x2a3f3c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3f40:
    // 0x2a3f40: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3f40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3f44:
    // 0x2a3f44: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3f48:
    // 0x2a3f48: 0x12263a  dsrl        $a0, $s2, 24
    ctx->pc = 0x2a3f48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 24);
label_2a3f4c:
    // 0x2a3f4c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3f50:
    // 0x2a3f50: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3f50u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3f54:
    // 0x2a3f54: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3f54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3f58:
    // 0x2a3f58: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3f58u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3f5c:
    // 0x2a3f5c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3f60:
    // 0x2a3f60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3f60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3f64:
    // 0x2a3f64: 0xdfd30028  ld          $s3, 0x28($fp)
    ctx->pc = 0x2a3f64u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 30), 40)));
label_2a3f68:
    // 0x2a3f68: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3f68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3f6c:
    // 0x2a3f6c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3f70:
    // 0x2a3f70: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a3f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3f74:
    // 0x2a3f74: 0x2642824  and         $a1, $s3, $a0
    ctx->pc = 0x2a3f74u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_2a3f78:
    // 0x2a3f78: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3f78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3f7c:
    // 0x2a3f7c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3f7cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3f80:
    // 0x2a3f80: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3f80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3f84:
    // 0x2a3f84: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3f84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3f88:
    // 0x2a3f88: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3f88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3f8c:
    // 0x2a3f8c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3f90:
    // 0x2a3f90: 0x13223a  dsrl        $a0, $s3, 8
    ctx->pc = 0x2a3f90u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 8);
label_2a3f94:
    // 0x2a3f94: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3f98:
    // 0x2a3f98: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3f98u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3f9c:
    // 0x2a3f9c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3f9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3fa0:
    // 0x2a3fa0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3fa0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3fa4:
    // 0x2a3fa4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3fa8:
    // 0x2a3fa8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3fa8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3fac:
    // 0x2a3fac: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3fb0:
    // 0x2a3fb0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3fb4:
    // 0x2a3fb4: 0x13243a  dsrl        $a0, $s3, 16
    ctx->pc = 0x2a3fb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 16);
label_2a3fb8:
    // 0x2a3fb8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3fb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3fbc:
    // 0x2a3fbc: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3fbcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3fc0:
    // 0x2a3fc0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3fc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3fc4:
    // 0x2a3fc4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3fc4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3fc8:
    // 0x2a3fc8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3fcc:
    // 0x2a3fcc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3fccu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3fd0:
    // 0x2a3fd0: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a3fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a3fd4:
    // 0x2a3fd4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3fd8:
    // 0x2a3fd8: 0x13263a  dsrl        $a0, $s3, 24
    ctx->pc = 0x2a3fd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 24);
label_2a3fdc:
    // 0x2a3fdc: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a3fdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a3fe0:
    // 0x2a3fe0: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a3fe0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a3fe4:
    // 0x2a3fe4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a3fe4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a3fe8:
    // 0x2a3fe8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a3fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a3fec:
    // 0x2a3fec: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a3fecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a3ff0:
    // 0x2a3ff0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a3ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a3ff4:
    // 0x2a3ff4: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a3ff4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a3ff8:
    // 0x2a3ff8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a3ff8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a3ffc:
    // 0x2a3ffc: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a3ffcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4000:
    // 0x2a4000: 0x2442824  and         $a1, $s2, $a0
    ctx->pc = 0x2a4000u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_2a4004:
    // 0x2a4004: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4004u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4008:
    // 0x2a4008: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4008u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a400c:
    // 0x2a400c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a400cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4010:
    // 0x2a4010: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4014:
    // 0x2a4014: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4018:
    // 0x2a4018: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4018u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a401c:
    // 0x2a401c: 0x12223a  dsrl        $a0, $s2, 8
    ctx->pc = 0x2a401cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 8);
label_2a4020:
    // 0x2a4020: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4020u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4024:
    // 0x2a4024: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a4024u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a4028:
    // 0x2a4028: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4028u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a402c:
    // 0x2a402c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a402cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4030:
    // 0x2a4030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4034:
    // 0x2a4034: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4034u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4038:
    // 0x2a4038: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a403c:
    // 0x2a403c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a403cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4040:
    // 0x2a4040: 0x12243a  dsrl        $a0, $s2, 16
    ctx->pc = 0x2a4040u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 16);
label_2a4044:
    // 0x2a4044: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4044u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4048:
    // 0x2a4048: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a4048u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a404c:
    // 0x2a404c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a404cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4050:
    // 0x2a4050: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4050u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4054:
    // 0x2a4054: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4058:
    // 0x2a4058: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4058u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a405c:
    // 0x2a405c: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a405cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4060:
    // 0x2a4060: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4060u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4064:
    // 0x2a4064: 0x12263a  dsrl        $a0, $s2, 24
    ctx->pc = 0x2a4064u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 24);
label_2a4068:
    // 0x2a4068: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4068u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a406c:
    // 0x2a406c: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a406cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a4070:
    // 0x2a4070: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4070u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4074:
    // 0x2a4074: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4074u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4078:
    // 0x2a4078: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4078u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a407c:
    // 0x2a407c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a407cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4080:
    // 0x2a4080: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4080u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4084:
    // 0x2a4084: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4088:
    // 0x2a4088: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a4088u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a408c:
    // 0x2a408c: 0x2642824  and         $a1, $s3, $a0
    ctx->pc = 0x2a408cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_2a4090:
    // 0x2a4090: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4090u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4094:
    // 0x2a4094: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4094u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4098:
    // 0x2a4098: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4098u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a409c:
    // 0x2a409c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a409cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a40a0:
    // 0x2a40a0: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a40a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a40a4:
    // 0x2a40a4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a40a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a40a8:
    // 0x2a40a8: 0x13223a  dsrl        $a0, $s3, 8
    ctx->pc = 0x2a40a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 8);
label_2a40ac:
    // 0x2a40ac: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a40acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a40b0:
    // 0x2a40b0: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a40b0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a40b4:
    // 0x2a40b4: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a40b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a40b8:
    // 0x2a40b8: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a40b8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a40bc:
    // 0x2a40bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a40bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a40c0:
    // 0x2a40c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a40c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a40c4:
    // 0x2a40c4: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a40c8:
    // 0x2a40c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a40c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a40cc:
    // 0x2a40cc: 0x13243a  dsrl        $a0, $s3, 16
    ctx->pc = 0x2a40ccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 16);
label_2a40d0:
    // 0x2a40d0: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a40d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a40d4:
    // 0x2a40d4: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a40d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a40d8:
    // 0x2a40d8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a40d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a40dc:
    // 0x2a40dc: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a40dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a40e0:
    // 0x2a40e0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a40e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a40e4:
    // 0x2a40e4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a40e4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a40e8:
    // 0x2a40e8: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a40e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a40ec:
    // 0x2a40ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a40ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a40f0:
    // 0x2a40f0: 0x13263a  dsrl        $a0, $s3, 24
    ctx->pc = 0x2a40f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 24);
label_2a40f4:
    // 0x2a40f4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a40f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a40f8:
    // 0x2a40f8: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a40f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a40fc:
    // 0x2a40fc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a40fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4100:
    // 0x2a4100: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4100u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4104:
    // 0x2a4104: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4104u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4108:
    // 0x2a4108: 0x10000198  b           . + 4 + (0x198 << 2)
label_2a410c:
    if (ctx->pc == 0x2A410Cu) {
        ctx->pc = 0x2A410Cu;
            // 0x2a410c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->pc = 0x2A4110u;
        goto label_2a4110;
    }
    ctx->pc = 0x2A4108u;
    {
        const bool branch_taken_0x2a4108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A410Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4108u;
            // 0x2a410c: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4108) {
            ctx->pc = 0x2A476Cu;
            goto label_2a476c;
        }
    }
    ctx->pc = 0x2A4110u;
label_2a4110:
    // 0x2a4110: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4110u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4114:
    // 0x2a4114: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4118:
    // 0x2a4118: 0x90740000  lbu         $s4, 0x0($v1)
    ctx->pc = 0x2a4118u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a411c:
    // 0x2a411c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a411cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4120:
    // 0x2a4120: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4120u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4124:
    // 0x2a4124: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4124u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4128:
    // 0x2a4128: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4128u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a412c:
    // 0x2a412c: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a412cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a4130:
    // 0x2a4130: 0x42a38  dsll        $a1, $a0, 8
    ctx->pc = 0x2a4130u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 8);
label_2a4134:
    // 0x2a4134: 0x285a025  or          $s4, $s4, $a1
    ctx->pc = 0x2a4134u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
label_2a4138:
    // 0x2a4138: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a413c:
    // 0x2a413c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a413cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4140:
    // 0x2a4140: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4140u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4144:
    // 0x2a4144: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4148:
    // 0x2a4148: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a4148u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a414c:
    // 0x2a414c: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x2a414cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
label_2a4150:
    // 0x2a4150: 0x285a025  or          $s4, $s4, $a1
    ctx->pc = 0x2a4150u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
label_2a4154:
    // 0x2a4154: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4154u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4158:
    // 0x2a4158: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4158u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a415c:
    // 0x2a415c: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a415cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4160:
    // 0x2a4160: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4164:
    // 0x2a4164: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a4164u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a4168:
    // 0x2a4168: 0x42e38  dsll        $a1, $a0, 24
    ctx->pc = 0x2a4168u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 24);
label_2a416c:
    // 0x2a416c: 0x285a025  or          $s4, $s4, $a1
    ctx->pc = 0x2a416cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 5));
label_2a4170:
    // 0x2a4170: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4174:
    // 0x2a4174: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4174u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4178:
    // 0x2a4178: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a417c:
    // 0x2a417c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a417cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4180:
    // 0x2a4180: 0x90750000  lbu         $s5, 0x0($v1)
    ctx->pc = 0x2a4180u;
    SET_GPR_U32(ctx, 21, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a4184:
    // 0x2a4184: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4188:
    // 0x2a4188: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4188u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a418c:
    // 0x2a418c: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a418cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4190:
    // 0x2a4190: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4194:
    // 0x2a4194: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a4194u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a4198:
    // 0x2a4198: 0x42a38  dsll        $a1, $a0, 8
    ctx->pc = 0x2a4198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 8);
label_2a419c:
    // 0x2a419c: 0x2a5a825  or          $s5, $s5, $a1
    ctx->pc = 0x2a419cu;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 5));
label_2a41a0:
    // 0x2a41a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a41a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a41a4:
    // 0x2a41a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a41a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a41a8:
    // 0x2a41a8: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a41a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a41ac:
    // 0x2a41ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a41acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a41b0:
    // 0x2a41b0: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a41b0u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a41b4:
    // 0x2a41b4: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x2a41b4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
label_2a41b8:
    // 0x2a41b8: 0x2a5a825  or          $s5, $s5, $a1
    ctx->pc = 0x2a41b8u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 5));
label_2a41bc:
    // 0x2a41bc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a41bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a41c0:
    // 0x2a41c0: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a41c0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a41c4:
    // 0x2a41c4: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a41c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a41c8:
    // 0x2a41c8: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a41c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a41cc:
    // 0x2a41cc: 0x90640000  lbu         $a0, 0x0($v1)
    ctx->pc = 0x2a41ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
label_2a41d0:
    // 0x2a41d0: 0x42e38  dsll        $a1, $a0, 24
    ctx->pc = 0x2a41d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 24);
label_2a41d4:
    // 0x2a41d4: 0x2a5a825  or          $s5, $s5, $a1
    ctx->pc = 0x2a41d4u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 21) | GPR_U64(ctx, 5));
label_2a41d8:
    // 0x2a41d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a41d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a41dc:
    // 0x2a41dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a41dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a41e0:
    // 0x2a41e0: 0x8fc20014  lw          $v0, 0x14($fp)
    ctx->pc = 0x2a41e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 20)));
label_2a41e4:
    // 0x2a41e4: 0x2443fff8  addiu       $v1, $v0, -0x8
    ctx->pc = 0x2a41e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
label_2a41e8:
    // 0x2a41e8: 0xafc30014  sw          $v1, 0x14($fp)
    ctx->pc = 0x2a41e8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 20), GPR_U32(ctx, 3));
label_2a41ec:
    // 0x2a41ec: 0x66d6fff8  daddiu      $s6, $s6, -0x8
    ctx->pc = 0x2a41ecu;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)4294967288);
label_2a41f0:
    // 0x2a41f0: 0x6c10003  bgez        $s6, . + 4 + (0x3 << 2)
label_2a41f4:
    if (ctx->pc == 0x2A41F4u) {
        ctx->pc = 0x2A41F8u;
        goto label_2a41f8;
    }
    ctx->pc = 0x2A41F0u;
    {
        const bool branch_taken_0x2a41f0 = (GPR_S32(ctx, 22) >= 0);
        if (branch_taken_0x2a41f0) {
            ctx->pc = 0x2A4200u;
            goto label_2a4200;
        }
    }
    ctx->pc = 0x2A41F8u;
label_2a41f8:
    // 0x2a41f8: 0x10000081  b           . + 4 + (0x81 << 2)
label_2a41fc:
    if (ctx->pc == 0x2A41FCu) {
        ctx->pc = 0x2A4200u;
        goto label_2a4200;
    }
    ctx->pc = 0x2A41F8u;
    {
        const bool branch_taken_0x2a41f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a41f8) {
            ctx->pc = 0x2A4400u;
            goto label_2a4400;
        }
    }
    ctx->pc = 0x2A4200u;
label_2a4200:
    // 0x2a4200: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a4200u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a4204:
    // 0x2a4204: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2a4204u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4208:
    // 0x2a4208: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a420c:
    // 0x2a420c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a420cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a4210:
    // 0x2a4210: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a4210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a4214:
    // 0x2a4214: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a4214u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4218:
    // 0x2a4218: 0x32238  dsll        $a0, $v1, 8
    ctx->pc = 0x2a4218u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
label_2a421c:
    // 0x2a421c: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x2a421cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_2a4220:
    // 0x2a4220: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4220u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a4224:
    // 0x2a4224: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a4224u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a4228:
    // 0x2a4228: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a4228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a422c:
    // 0x2a422c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a422cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4230:
    // 0x2a4230: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2a4230u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_2a4234:
    // 0x2a4234: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x2a4234u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_2a4238:
    // 0x2a4238: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4238u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a423c:
    // 0x2a423c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a423cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a4240:
    // 0x2a4240: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a4240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a4244:
    // 0x2a4244: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a4244u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4248:
    // 0x2a4248: 0x32638  dsll        $a0, $v1, 24
    ctx->pc = 0x2a4248u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 24);
label_2a424c:
    // 0x2a424c: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x2a424cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_2a4250:
    // 0x2a4250: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a4254:
    // 0x2a4254: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a4254u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a4258:
    // 0x2a4258: 0xffd00020  sd          $s0, 0x20($fp)
    ctx->pc = 0x2a4258u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 32), GPR_U64(ctx, 16));
label_2a425c:
    // 0x2a425c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a425cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a4260:
    // 0x2a4260: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x2a4260u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4264:
    // 0x2a4264: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4264u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a4268:
    // 0x2a4268: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a4268u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a426c:
    // 0x2a426c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a426cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a4270:
    // 0x2a4270: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a4270u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4274:
    // 0x2a4274: 0x32238  dsll        $a0, $v1, 8
    ctx->pc = 0x2a4274u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
label_2a4278:
    // 0x2a4278: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x2a4278u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_2a427c:
    // 0x2a427c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a427cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a4280:
    // 0x2a4280: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a4280u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a4284:
    // 0x2a4284: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a4284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a4288:
    // 0x2a4288: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a4288u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a428c:
    // 0x2a428c: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2a428cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_2a4290:
    // 0x2a4290: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x2a4290u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_2a4294:
    // 0x2a4294: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a4298:
    // 0x2a4298: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a4298u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a429c:
    // 0x2a429c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a42a0:
    // 0x2a42a0: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a42a0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a42a4:
    // 0x2a42a4: 0x32638  dsll        $a0, $v1, 24
    ctx->pc = 0x2a42a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 24);
label_2a42a8:
    // 0x2a42a8: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x2a42a8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_2a42ac:
    // 0x2a42ac: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a42acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a42b0:
    // 0x2a42b0: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a42b0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a42b4:
    // 0x2a42b4: 0xffd10028  sd          $s1, 0x28($fp)
    ctx->pc = 0x2a42b4u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 40), GPR_U64(ctx, 17));
label_2a42b8:
    // 0x2a42b8: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x2a42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_2a42bc:
    // 0x2a42bc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a42bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a42c0:
    // 0x2a42c0: 0xc0a997a  jal         func_2A65E8
label_2a42c4:
    if (ctx->pc == 0x2A42C4u) {
        ctx->pc = 0x2A42C4u;
            // 0x2a42c4: 0x8fc50010  lw          $a1, 0x10($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->pc = 0x2A42C8u;
        goto label_2a42c8;
    }
    ctx->pc = 0x2A42C0u;
    SET_GPR_U32(ctx, 31, 0x2A42C8u);
    ctx->pc = 0x2A42C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A42C0u;
            // 0x2a42c4: 0x8fc50010  lw          $a1, 0x10($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65E8u;
    if (runtime->hasFunction(0x2A65E8u)) {
        auto targetFn = runtime->lookupFunction(0x2A65E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A42C8u; }
        if (ctx->pc != 0x2A42C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65E8_0x2a65e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A42C8u; }
        if (ctx->pc != 0x2A42C8u) { return; }
    }
    ctx->pc = 0x2A42C8u;
label_2a42c8:
    // 0x2a42c8: 0xdfc20020  ld          $v0, 0x20($fp)
    ctx->pc = 0x2a42c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 32)));
label_2a42cc:
    // 0x2a42cc: 0x2829026  xor         $s2, $s4, $v0
    ctx->pc = 0x2a42ccu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
label_2a42d0:
    // 0x2a42d0: 0xdfc20028  ld          $v0, 0x28($fp)
    ctx->pc = 0x2a42d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 40)));
label_2a42d4:
    // 0x2a42d4: 0x2a29826  xor         $s3, $s5, $v0
    ctx->pc = 0x2a42d4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
label_2a42d8:
    // 0x2a42d8: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a42d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a42dc:
    // 0x2a42dc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a42dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a42e0:
    // 0x2a42e0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a42e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a42e4:
    // 0x2a42e4: 0x2442824  and         $a1, $s2, $a0
    ctx->pc = 0x2a42e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_2a42e8:
    // 0x2a42e8: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a42e8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a42ec:
    // 0x2a42ec: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a42ecu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a42f0:
    // 0x2a42f0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a42f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a42f4:
    // 0x2a42f4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a42f4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a42f8:
    // 0x2a42f8: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a42fc:
    // 0x2a42fc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a42fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4300:
    // 0x2a4300: 0x12223a  dsrl        $a0, $s2, 8
    ctx->pc = 0x2a4300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 8);
label_2a4304:
    // 0x2a4304: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4308:
    // 0x2a4308: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a4308u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a430c:
    // 0x2a430c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a430cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4310:
    // 0x2a4310: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4310u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4314:
    // 0x2a4314: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4314u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4318:
    // 0x2a4318: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4318u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a431c:
    // 0x2a431c: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a431cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a4320:
    // 0x2a4320: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4324:
    // 0x2a4324: 0x12243a  dsrl        $a0, $s2, 16
    ctx->pc = 0x2a4324u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 16);
label_2a4328:
    // 0x2a4328: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a432c:
    // 0x2a432c: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a432cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a4330:
    // 0x2a4330: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4330u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4334:
    // 0x2a4334: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4334u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4338:
    // 0x2a4338: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a433c:
    // 0x2a433c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a433cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4340:
    // 0x2a4340: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a4340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a4344:
    // 0x2a4344: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4348:
    // 0x2a4348: 0x12263a  dsrl        $a0, $s2, 24
    ctx->pc = 0x2a4348u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) >> 24);
label_2a434c:
    // 0x2a434c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a434cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4350:
    // 0x2a4350: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a4350u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a4354:
    // 0x2a4354: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4354u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4358:
    // 0x2a4358: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4358u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a435c:
    // 0x2a435c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a435cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4360:
    // 0x2a4360: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4360u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4364:
    // 0x2a4364: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a4364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a4368:
    // 0x2a4368: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a436c:
    // 0x2a436c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a436cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4370:
    // 0x2a4370: 0x2642824  and         $a1, $s3, $a0
    ctx->pc = 0x2a4370u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_2a4374:
    // 0x2a4374: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4374u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4378:
    // 0x2a4378: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4378u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a437c:
    // 0x2a437c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a437cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4380:
    // 0x2a4380: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4380u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4384:
    // 0x2a4384: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a4384u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a4388:
    // 0x2a4388: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a438c:
    // 0x2a438c: 0x13223a  dsrl        $a0, $s3, 8
    ctx->pc = 0x2a438cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 8);
label_2a4390:
    // 0x2a4390: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4390u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4394:
    // 0x2a4394: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a4394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a4398:
    // 0x2a4398: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4398u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a439c:
    // 0x2a439c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a439cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a43a0:
    // 0x2a43a0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a43a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a43a4:
    // 0x2a43a4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a43a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a43a8:
    // 0x2a43a8: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a43a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a43ac:
    // 0x2a43ac: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a43acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a43b0:
    // 0x2a43b0: 0x13243a  dsrl        $a0, $s3, 16
    ctx->pc = 0x2a43b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 16);
label_2a43b4:
    // 0x2a43b4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a43b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a43b8:
    // 0x2a43b8: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a43b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a43bc:
    // 0x2a43bc: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a43bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a43c0:
    // 0x2a43c0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a43c0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a43c4:
    // 0x2a43c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a43c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a43c8:
    // 0x2a43c8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a43c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a43cc:
    // 0x2a43cc: 0x27c20004  addiu       $v0, $fp, 0x4
    ctx->pc = 0x2a43ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4));
label_2a43d0:
    // 0x2a43d0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a43d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a43d4:
    // 0x2a43d4: 0x13263a  dsrl        $a0, $s3, 24
    ctx->pc = 0x2a43d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) >> 24);
label_2a43d8:
    // 0x2a43d8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a43d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a43dc:
    // 0x2a43dc: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a43dcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a43e0:
    // 0x2a43e0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a43e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a43e4:
    // 0x2a43e4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a43e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a43e8:
    // 0x2a43e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a43ec:
    // 0x2a43ec: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a43ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a43f0:
    // 0x2a43f0: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2a43f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a43f4:
    // 0x2a43f4: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2a43f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a43f8:
    // 0x2a43f8: 0x1000ff7d  b           . + 4 + (-0x83 << 2)
label_2a43fc:
    if (ctx->pc == 0x2A43FCu) {
        ctx->pc = 0x2A43FCu;
            // 0x2a43fc: 0x66d6fff8  daddiu      $s6, $s6, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)4294967288);
        ctx->pc = 0x2A4400u;
        goto label_2a4400;
    }
    ctx->pc = 0x2A43F8u;
    {
        const bool branch_taken_0x2a43f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A43FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A43F8u;
            // 0x2a43fc: 0x66d6fff8  daddiu      $s6, $s6, -0x8 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)4294967288);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a43f8) {
            ctx->pc = 0x2A41F0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a41f0;
        }
    }
    ctx->pc = 0x2A4400u;
label_2a4400:
    // 0x2a4400: 0x2402fff8  addiu       $v0, $zero, -0x8
    ctx->pc = 0x2a4400u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967288));
label_2a4404:
    // 0x2a4404: 0x12c20093  beq         $s6, $v0, . + 4 + (0x93 << 2)
label_2a4408:
    if (ctx->pc == 0x2A4408u) {
        ctx->pc = 0x2A440Cu;
        goto label_2a440c;
    }
    ctx->pc = 0x2A4404u;
    {
        const bool branch_taken_0x2a4404 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        if (branch_taken_0x2a4404) {
            ctx->pc = 0x2A4654u;
            goto label_2a4654;
        }
    }
    ctx->pc = 0x2A440Cu;
label_2a440c:
    // 0x2a440c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a440cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a4410:
    // 0x2a4410: 0x90500000  lbu         $s0, 0x0($v0)
    ctx->pc = 0x2a4410u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4414:
    // 0x2a4414: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a4418:
    // 0x2a4418: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a4418u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a441c:
    // 0x2a441c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a441cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a4420:
    // 0x2a4420: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a4420u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4424:
    // 0x2a4424: 0x32238  dsll        $a0, $v1, 8
    ctx->pc = 0x2a4424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
label_2a4428:
    // 0x2a4428: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x2a4428u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_2a442c:
    // 0x2a442c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a442cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a4430:
    // 0x2a4430: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a4430u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a4434:
    // 0x2a4434: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a4434u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a4438:
    // 0x2a4438: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a4438u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a443c:
    // 0x2a443c: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2a443cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_2a4440:
    // 0x2a4440: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x2a4440u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_2a4444:
    // 0x2a4444: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4444u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a4448:
    // 0x2a4448: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a4448u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a444c:
    // 0x2a444c: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a444cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a4450:
    // 0x2a4450: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a4450u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4454:
    // 0x2a4454: 0x32638  dsll        $a0, $v1, 24
    ctx->pc = 0x2a4454u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 24);
label_2a4458:
    // 0x2a4458: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x2a4458u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_2a445c:
    // 0x2a445c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a445cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a4460:
    // 0x2a4460: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a4460u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a4464:
    // 0x2a4464: 0xffd00020  sd          $s0, 0x20($fp)
    ctx->pc = 0x2a4464u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 32), GPR_U64(ctx, 16));
label_2a4468:
    // 0x2a4468: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a4468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a446c:
    // 0x2a446c: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x2a446cu;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4470:
    // 0x2a4470: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4470u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a4474:
    // 0x2a4474: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a4474u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a4478:
    // 0x2a4478: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a4478u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a447c:
    // 0x2a447c: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a447cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4480:
    // 0x2a4480: 0x32238  dsll        $a0, $v1, 8
    ctx->pc = 0x2a4480u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 8);
label_2a4484:
    // 0x2a4484: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x2a4484u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_2a4488:
    // 0x2a4488: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a4488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a448c:
    // 0x2a448c: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a448cu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a4490:
    // 0x2a4490: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a4490u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a4494:
    // 0x2a4494: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a4494u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4498:
    // 0x2a4498: 0x32438  dsll        $a0, $v1, 16
    ctx->pc = 0x2a4498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 16);
label_2a449c:
    // 0x2a449c: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x2a449cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_2a44a0:
    // 0x2a44a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a44a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a44a4:
    // 0x2a44a4: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a44a4u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a44a8:
    // 0x2a44a8: 0x8fc20000  lw          $v0, 0x0($fp)
    ctx->pc = 0x2a44a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 0)));
label_2a44ac:
    // 0x2a44ac: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x2a44acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2a44b0:
    // 0x2a44b0: 0x32638  dsll        $a0, $v1, 24
    ctx->pc = 0x2a44b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << 24);
label_2a44b4:
    // 0x2a44b4: 0x2248825  or          $s1, $s1, $a0
    ctx->pc = 0x2a44b4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
label_2a44b8:
    // 0x2a44b8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a44b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a44bc:
    // 0x2a44bc: 0xafc20000  sw          $v0, 0x0($fp)
    ctx->pc = 0x2a44bcu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 2));
label_2a44c0:
    // 0x2a44c0: 0xffd10028  sd          $s1, 0x28($fp)
    ctx->pc = 0x2a44c0u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 40), GPR_U64(ctx, 17));
label_2a44c4:
    // 0x2a44c4: 0x27c20020  addiu       $v0, $fp, 0x20
    ctx->pc = 0x2a44c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
label_2a44c8:
    // 0x2a44c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a44c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a44cc:
    // 0x2a44cc: 0xc0a997a  jal         func_2A65E8
label_2a44d0:
    if (ctx->pc == 0x2A44D0u) {
        ctx->pc = 0x2A44D0u;
            // 0x2a44d0: 0x8fc50010  lw          $a1, 0x10($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->pc = 0x2A44D4u;
        goto label_2a44d4;
    }
    ctx->pc = 0x2A44CCu;
    SET_GPR_U32(ctx, 31, 0x2A44D4u);
    ctx->pc = 0x2A44D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A44CCu;
            // 0x2a44d0: 0x8fc50010  lw          $a1, 0x10($fp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 16)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65E8u;
    if (runtime->hasFunction(0x2A65E8u)) {
        auto targetFn = runtime->lookupFunction(0x2A65E8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44D4u; }
        if (ctx->pc != 0x2A44D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65E8_0x2a65e8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A44D4u; }
        if (ctx->pc != 0x2A44D4u) { return; }
    }
    ctx->pc = 0x2A44D4u;
label_2a44d4:
    // 0x2a44d4: 0xdfc20020  ld          $v0, 0x20($fp)
    ctx->pc = 0x2a44d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 32)));
label_2a44d8:
    // 0x2a44d8: 0x2829026  xor         $s2, $s4, $v0
    ctx->pc = 0x2a44d8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 20) ^ GPR_U64(ctx, 2));
label_2a44dc:
    // 0x2a44dc: 0xdfc20028  ld          $v0, 0x28($fp)
    ctx->pc = 0x2a44dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 30), 40)));
label_2a44e0:
    // 0x2a44e0: 0x2a29826  xor         $s3, $s5, $v0
    ctx->pc = 0x2a44e0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 21) ^ GPR_U64(ctx, 2));
label_2a44e4:
    // 0x2a44e4: 0x16103c  dsll32      $v0, $s6, 0
    ctx->pc = 0x2a44e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) << (32 + 0));
label_2a44e8:
    // 0x2a44e8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a44e8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2a44ec:
    // 0x2a44ec: 0x24430008  addiu       $v1, $v0, 0x8
    ctx->pc = 0x2a44ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_2a44f0:
    // 0x2a44f0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2a44f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2a44f4:
    // 0x2a44f4: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x2a44f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a44f8:
    // 0x2a44f8: 0xafc30004  sw          $v1, 0x4($fp)
    ctx->pc = 0x2a44f8u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 3));
label_2a44fc:
    // 0x2a44fc: 0x66c20007  daddiu      $v0, $s6, 0x7
    ctx->pc = 0x2a44fcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 22) + (int64_t)(int32_t)7);
label_2a4500:
    // 0x2a4500: 0x2c430008  sltiu       $v1, $v0, 0x8
    ctx->pc = 0x2a4500u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
label_2a4504:
    // 0x2a4504: 0x10600051  beqz        $v1, . + 4 + (0x51 << 2)
label_2a4508:
    if (ctx->pc == 0x2A4508u) {
        ctx->pc = 0x2A450Cu;
        goto label_2a450c;
    }
    ctx->pc = 0x2A4504u;
    {
        const bool branch_taken_0x2a4504 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a4504) {
            ctx->pc = 0x2A464Cu;
            goto label_2a464c;
        }
    }
    ctx->pc = 0x2A450Cu;
label_2a450c:
    // 0x2a450c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a450cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2a4510:
    // 0x2a4510: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a4510u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2a4514:
    // 0x2a4514: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2a4514u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a4518:
    // 0x2a4518: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x2a4518u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2a451c:
    // 0x2a451c: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x2a451cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
label_2a4520:
    // 0x2a4520: 0x2463c940  addiu       $v1, $v1, -0x36C0
    ctx->pc = 0x2a4520u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953280));
label_2a4524:
    // 0x2a4524: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2a4524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2a4528:
    // 0x2a4528: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a452c:
    // 0x2a452c: 0x600008  jr          $v1
label_2a4530:
    if (ctx->pc == 0x2A4530u) {
        ctx->pc = 0x2A4534u;
        goto label_2a4534;
    }
    ctx->pc = 0x2A452Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4534u;
label_2a4534:
    // 0x2a4534: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2a4534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2a4538:
    // 0x2a4538: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a4538u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a453c:
    // 0x2a453c: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a453cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a4540:
    // 0x2a4540: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2a4540u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a4544:
    // 0x2a4544: 0x131e3a  dsrl        $v1, $s3, 24
    ctx->pc = 0x2a4544u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> 24);
label_2a4548:
    // 0x2a4548: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a4548u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a454c:
    // 0x2a454c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a454cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2a4550:
    // 0x2a4550: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a4550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a4554:
    // 0x2a4554: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2a4554u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4558:
    // 0x2a4558: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2a4558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2a455c:
    // 0x2a455c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a455cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a4560:
    // 0x2a4560: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a4560u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a4564:
    // 0x2a4564: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2a4564u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a4568:
    // 0x2a4568: 0x131c3a  dsrl        $v1, $s3, 16
    ctx->pc = 0x2a4568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> 16);
label_2a456c:
    // 0x2a456c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a456cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4570:
    // 0x2a4570: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4570u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2a4574:
    // 0x2a4574: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a4574u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a4578:
    // 0x2a4578: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2a4578u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a457c:
    // 0x2a457c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2a457cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2a4580:
    // 0x2a4580: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a4580u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a4584:
    // 0x2a4584: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a4584u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a4588:
    // 0x2a4588: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2a4588u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a458c:
    // 0x2a458c: 0x131a3a  dsrl        $v1, $s3, 8
    ctx->pc = 0x2a458cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) >> 8);
label_2a4590:
    // 0x2a4590: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a4590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4594:
    // 0x2a4594: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4594u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2a4598:
    // 0x2a4598: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a4598u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a459c:
    // 0x2a459c: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2a459cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a45a0:
    // 0x2a45a0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2a45a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2a45a4:
    // 0x2a45a4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a45a8:
    // 0x2a45a8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a45a8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a45ac:
    // 0x2a45ac: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2a45acu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a45b0:
    // 0x2a45b0: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a45b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a45b4:
    // 0x2a45b4: 0x2641824  and         $v1, $s3, $a0
    ctx->pc = 0x2a45b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) & GPR_U64(ctx, 4));
label_2a45b8:
    // 0x2a45b8: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a45b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a45bc:
    // 0x2a45bc: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2a45bcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a45c0:
    // 0x2a45c0: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2a45c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2a45c4:
    // 0x2a45c4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a45c8:
    // 0x2a45c8: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a45c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a45cc:
    // 0x2a45cc: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2a45ccu;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a45d0:
    // 0x2a45d0: 0x121e3a  dsrl        $v1, $s2, 24
    ctx->pc = 0x2a45d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) >> 24);
label_2a45d4:
    // 0x2a45d4: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a45d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a45d8:
    // 0x2a45d8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a45d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2a45dc:
    // 0x2a45dc: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a45dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a45e0:
    // 0x2a45e0: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2a45e0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a45e4:
    // 0x2a45e4: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2a45e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2a45e8:
    // 0x2a45e8: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a45e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a45ec:
    // 0x2a45ec: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a45ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a45f0:
    // 0x2a45f0: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2a45f0u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a45f4:
    // 0x2a45f4: 0x121c3a  dsrl        $v1, $s2, 16
    ctx->pc = 0x2a45f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) >> 16);
label_2a45f8:
    // 0x2a45f8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a45f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a45fc:
    // 0x2a45fc: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a45fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2a4600:
    // 0x2a4600: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a4600u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a4604:
    // 0x2a4604: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2a4604u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4608:
    // 0x2a4608: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2a4608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2a460c:
    // 0x2a460c: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a460cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a4610:
    // 0x2a4610: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a4610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a4614:
    // 0x2a4614: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2a4614u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a4618:
    // 0x2a4618: 0x121a3a  dsrl        $v1, $s2, 8
    ctx->pc = 0x2a4618u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) >> 8);
label_2a461c:
    // 0x2a461c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a461cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4620:
    // 0x2a4620: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2a4620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
label_2a4624:
    // 0x2a4624: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a4624u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a4628:
    // 0x2a4628: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2a4628u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a462c:
    // 0x2a462c: 0x8fc20004  lw          $v0, 0x4($fp)
    ctx->pc = 0x2a462cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
label_2a4630:
    // 0x2a4630: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x2a4630u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a4634:
    // 0x2a4634: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x2a4634u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a4638:
    // 0x2a4638: 0xafc20004  sw          $v0, 0x4($fp)
    ctx->pc = 0x2a4638u;
    WRITE32(ADD32(GPR_U32(ctx, 30), 4), GPR_U32(ctx, 2));
label_2a463c:
    // 0x2a463c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a463cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4640:
    // 0x2a4640: 0x2441824  and         $v1, $s2, $a0
    ctx->pc = 0x2a4640u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
label_2a4644:
    // 0x2a4644: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x2a4644u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2a4648:
    // 0x2a4648: 0xa0440000  sb          $a0, 0x0($v0)
    ctx->pc = 0x2a4648u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a464c:
    // 0x2a464c: 0x200a02d  daddu       $s4, $s0, $zero
    ctx->pc = 0x2a464cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a4650:
    // 0x2a4650: 0x220a82d  daddu       $s5, $s1, $zero
    ctx->pc = 0x2a4650u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a4654:
    // 0x2a4654: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4658:
    // 0x2a4658: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4658u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a465c:
    // 0x2a465c: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a465cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4660:
    // 0x2a4660: 0x2842824  and         $a1, $s4, $a0
    ctx->pc = 0x2a4660u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 20) & GPR_U64(ctx, 4));
label_2a4664:
    // 0x2a4664: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4664u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4668:
    // 0x2a4668: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4668u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a466c:
    // 0x2a466c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a466cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4670:
    // 0x2a4670: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4670u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4674:
    // 0x2a4674: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4678:
    // 0x2a4678: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a467c:
    // 0x2a467c: 0x14223a  dsrl        $a0, $s4, 8
    ctx->pc = 0x2a467cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) >> 8);
label_2a4680:
    // 0x2a4680: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4680u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4684:
    // 0x2a4684: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a4684u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a4688:
    // 0x2a4688: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4688u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a468c:
    // 0x2a468c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a468cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4690:
    // 0x2a4690: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4690u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4694:
    // 0x2a4694: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4694u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4698:
    // 0x2a4698: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4698u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a469c:
    // 0x2a469c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a469cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a46a0:
    // 0x2a46a0: 0x14243a  dsrl        $a0, $s4, 16
    ctx->pc = 0x2a46a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) >> 16);
label_2a46a4:
    // 0x2a46a4: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a46a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a46a8:
    // 0x2a46a8: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a46a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a46ac:
    // 0x2a46ac: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a46acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a46b0:
    // 0x2a46b0: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a46b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a46b4:
    // 0x2a46b4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a46b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a46b8:
    // 0x2a46b8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a46b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a46bc:
    // 0x2a46bc: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a46bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a46c0:
    // 0x2a46c0: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a46c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a46c4:
    // 0x2a46c4: 0x14263a  dsrl        $a0, $s4, 24
    ctx->pc = 0x2a46c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 20) >> 24);
label_2a46c8:
    // 0x2a46c8: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a46c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a46cc:
    // 0x2a46cc: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a46ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a46d0:
    // 0x2a46d0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a46d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a46d4:
    // 0x2a46d4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a46d4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a46d8:
    // 0x2a46d8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a46d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a46dc:
    // 0x2a46dc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a46dcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a46e0:
    // 0x2a46e0: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a46e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a46e4:
    // 0x2a46e4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a46e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a46e8:
    // 0x2a46e8: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x2a46e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a46ec:
    // 0x2a46ec: 0x2a42824  and         $a1, $s5, $a0
    ctx->pc = 0x2a46ecu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 21) & GPR_U64(ctx, 4));
label_2a46f0:
    // 0x2a46f0: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a46f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a46f4:
    // 0x2a46f4: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a46f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a46f8:
    // 0x2a46f8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a46fc:
    // 0x2a46fc: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a46fcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4700:
    // 0x2a4700: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4700u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4704:
    // 0x2a4704: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4708:
    // 0x2a4708: 0x15223a  dsrl        $a0, $s5, 8
    ctx->pc = 0x2a4708u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) >> 8);
label_2a470c:
    // 0x2a470c: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a470cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4710:
    // 0x2a4710: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a4710u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a4714:
    // 0x2a4714: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4714u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4718:
    // 0x2a4718: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4718u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a471c:
    // 0x2a471c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a471cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4720:
    // 0x2a4720: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4720u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4724:
    // 0x2a4724: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4724u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a4728:
    // 0x2a4728: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a4728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a472c:
    // 0x2a472c: 0x15243a  dsrl        $a0, $s5, 16
    ctx->pc = 0x2a472cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) >> 16);
label_2a4730:
    // 0x2a4730: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4730u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4734:
    // 0x2a4734: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a4734u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a4738:
    // 0x2a4738: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a4738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a473c:
    // 0x2a473c: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a473cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4740:
    // 0x2a4740: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4744:
    // 0x2a4744: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4744u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a4748:
    // 0x2a4748: 0x27c20014  addiu       $v0, $fp, 0x14
    ctx->pc = 0x2a4748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 20));
label_2a474c:
    // 0x2a474c: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2a474cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2a4750:
    // 0x2a4750: 0x15263a  dsrl        $a0, $s5, 24
    ctx->pc = 0x2a4750u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 21) >> 24);
label_2a4754:
    // 0x2a4754: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a4754u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a4758:
    // 0x2a4758: 0x862824  and         $a1, $a0, $a2
    ctx->pc = 0x2a4758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
label_2a475c:
    // 0x2a475c: 0x30a400ff  andi        $a0, $a1, 0xFF
    ctx->pc = 0x2a475cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
label_2a4760:
    // 0x2a4760: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x2a4760u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_2a4764:
    // 0x2a4764: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a4764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a4768:
    // 0x2a4768: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2a4768u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_2a476c:
    // 0x2a476c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2a476cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4770:
    // 0x2a4770: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x2a4770u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4774:
    // 0x2a4774: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2a4774u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4778:
    // 0x2a4778: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x2a4778u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a477c:
    // 0x2a477c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2a477cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4780:
    // 0x2a4780: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2a4780u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a4784:
    // 0x2a4784: 0xffc00028  sd          $zero, 0x28($fp)
    ctx->pc = 0x2a4784u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 40), GPR_U64(ctx, 0));
label_2a4788:
    // 0x2a4788: 0xffc00020  sd          $zero, 0x20($fp)
    ctx->pc = 0x2a4788u;
    WRITE64(ADD32(GPR_U32(ctx, 30), 32), GPR_U64(ctx, 0));
label_2a478c:
    // 0x2a478c: 0x3c0e82d  daddu       $sp, $fp, $zero
    ctx->pc = 0x2a478cu;
    SET_GPR_U64(ctx, 29, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_2a4790:
    // 0x2a4790: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x2a4790u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2a4794:
    // 0x2a4794: 0xdfbe00a0  ld          $fp, 0xA0($sp)
    ctx->pc = 0x2a4794u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2a4798:
    // 0x2a4798: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x2a4798u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2a479c:
    // 0x2a479c: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x2a479cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2a47a0:
    // 0x2a47a0: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x2a47a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2a47a4:
    // 0x2a47a4: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x2a47a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2a47a8:
    // 0x2a47a8: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x2a47a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2a47ac:
    // 0x2a47ac: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x2a47acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a47b0:
    // 0x2a47b0: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x2a47b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a47b4:
    // 0x2a47b4: 0x3e00008  jr          $ra
label_2a47b8:
    if (ctx->pc == 0x2A47B8u) {
        ctx->pc = 0x2A47B8u;
            // 0x2a47b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x2A47BCu;
        goto label_2a47bc;
    }
    ctx->pc = 0x2A47B4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A47B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A47B4u;
            // 0x2a47b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A47BCu;
label_2a47bc:
    // 0x2a47bc: 0x0  nop
    ctx->pc = 0x2a47bcu;
    // NOP
    ctx->pc = 0x2a47c0u;
}
