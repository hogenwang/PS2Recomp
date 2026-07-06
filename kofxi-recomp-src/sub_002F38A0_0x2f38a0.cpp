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

// Function: sub_002F38A0
// Address: 0x2f38a0 - 0x2f4818
void sub_002F38A0_0x2f38a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F38A0_0x2f38a0");
#endif

    switch (ctx->pc) {
        case 0x2f38a0u: goto label_2f38a0;
        case 0x2f38a4u: goto label_2f38a4;
        case 0x2f38a8u: goto label_2f38a8;
        case 0x2f38acu: goto label_2f38ac;
        case 0x2f38b0u: goto label_2f38b0;
        case 0x2f38b4u: goto label_2f38b4;
        case 0x2f38b8u: goto label_2f38b8;
        case 0x2f38bcu: goto label_2f38bc;
        case 0x2f38c0u: goto label_2f38c0;
        case 0x2f38c4u: goto label_2f38c4;
        case 0x2f38c8u: goto label_2f38c8;
        case 0x2f38ccu: goto label_2f38cc;
        case 0x2f38d0u: goto label_2f38d0;
        case 0x2f38d4u: goto label_2f38d4;
        case 0x2f38d8u: goto label_2f38d8;
        case 0x2f38dcu: goto label_2f38dc;
        case 0x2f38e0u: goto label_2f38e0;
        case 0x2f38e4u: goto label_2f38e4;
        case 0x2f38e8u: goto label_2f38e8;
        case 0x2f38ecu: goto label_2f38ec;
        case 0x2f38f0u: goto label_2f38f0;
        case 0x2f38f4u: goto label_2f38f4;
        case 0x2f38f8u: goto label_2f38f8;
        case 0x2f38fcu: goto label_2f38fc;
        case 0x2f3900u: goto label_2f3900;
        case 0x2f3904u: goto label_2f3904;
        case 0x2f3908u: goto label_2f3908;
        case 0x2f390cu: goto label_2f390c;
        case 0x2f3910u: goto label_2f3910;
        case 0x2f3914u: goto label_2f3914;
        case 0x2f3918u: goto label_2f3918;
        case 0x2f391cu: goto label_2f391c;
        case 0x2f3920u: goto label_2f3920;
        case 0x2f3924u: goto label_2f3924;
        case 0x2f3928u: goto label_2f3928;
        case 0x2f392cu: goto label_2f392c;
        case 0x2f3930u: goto label_2f3930;
        case 0x2f3934u: goto label_2f3934;
        case 0x2f3938u: goto label_2f3938;
        case 0x2f393cu: goto label_2f393c;
        case 0x2f3940u: goto label_2f3940;
        case 0x2f3944u: goto label_2f3944;
        case 0x2f3948u: goto label_2f3948;
        case 0x2f394cu: goto label_2f394c;
        case 0x2f3950u: goto label_2f3950;
        case 0x2f3954u: goto label_2f3954;
        case 0x2f3958u: goto label_2f3958;
        case 0x2f395cu: goto label_2f395c;
        case 0x2f3960u: goto label_2f3960;
        case 0x2f3964u: goto label_2f3964;
        case 0x2f3968u: goto label_2f3968;
        case 0x2f396cu: goto label_2f396c;
        case 0x2f3970u: goto label_2f3970;
        case 0x2f3974u: goto label_2f3974;
        case 0x2f3978u: goto label_2f3978;
        case 0x2f397cu: goto label_2f397c;
        case 0x2f3980u: goto label_2f3980;
        case 0x2f3984u: goto label_2f3984;
        case 0x2f3988u: goto label_2f3988;
        case 0x2f398cu: goto label_2f398c;
        case 0x2f3990u: goto label_2f3990;
        case 0x2f3994u: goto label_2f3994;
        case 0x2f3998u: goto label_2f3998;
        case 0x2f399cu: goto label_2f399c;
        case 0x2f39a0u: goto label_2f39a0;
        case 0x2f39a4u: goto label_2f39a4;
        case 0x2f39a8u: goto label_2f39a8;
        case 0x2f39acu: goto label_2f39ac;
        case 0x2f39b0u: goto label_2f39b0;
        case 0x2f39b4u: goto label_2f39b4;
        case 0x2f39b8u: goto label_2f39b8;
        case 0x2f39bcu: goto label_2f39bc;
        case 0x2f39c0u: goto label_2f39c0;
        case 0x2f39c4u: goto label_2f39c4;
        case 0x2f39c8u: goto label_2f39c8;
        case 0x2f39ccu: goto label_2f39cc;
        case 0x2f39d0u: goto label_2f39d0;
        case 0x2f39d4u: goto label_2f39d4;
        case 0x2f39d8u: goto label_2f39d8;
        case 0x2f39dcu: goto label_2f39dc;
        case 0x2f39e0u: goto label_2f39e0;
        case 0x2f39e4u: goto label_2f39e4;
        case 0x2f39e8u: goto label_2f39e8;
        case 0x2f39ecu: goto label_2f39ec;
        case 0x2f39f0u: goto label_2f39f0;
        case 0x2f39f4u: goto label_2f39f4;
        case 0x2f39f8u: goto label_2f39f8;
        case 0x2f39fcu: goto label_2f39fc;
        case 0x2f3a00u: goto label_2f3a00;
        case 0x2f3a04u: goto label_2f3a04;
        case 0x2f3a08u: goto label_2f3a08;
        case 0x2f3a0cu: goto label_2f3a0c;
        case 0x2f3a10u: goto label_2f3a10;
        case 0x2f3a14u: goto label_2f3a14;
        case 0x2f3a18u: goto label_2f3a18;
        case 0x2f3a1cu: goto label_2f3a1c;
        case 0x2f3a20u: goto label_2f3a20;
        case 0x2f3a24u: goto label_2f3a24;
        case 0x2f3a28u: goto label_2f3a28;
        case 0x2f3a2cu: goto label_2f3a2c;
        case 0x2f3a30u: goto label_2f3a30;
        case 0x2f3a34u: goto label_2f3a34;
        case 0x2f3a38u: goto label_2f3a38;
        case 0x2f3a3cu: goto label_2f3a3c;
        case 0x2f3a40u: goto label_2f3a40;
        case 0x2f3a44u: goto label_2f3a44;
        case 0x2f3a48u: goto label_2f3a48;
        case 0x2f3a4cu: goto label_2f3a4c;
        case 0x2f3a50u: goto label_2f3a50;
        case 0x2f3a54u: goto label_2f3a54;
        case 0x2f3a58u: goto label_2f3a58;
        case 0x2f3a5cu: goto label_2f3a5c;
        case 0x2f3a60u: goto label_2f3a60;
        case 0x2f3a64u: goto label_2f3a64;
        case 0x2f3a68u: goto label_2f3a68;
        case 0x2f3a6cu: goto label_2f3a6c;
        case 0x2f3a70u: goto label_2f3a70;
        case 0x2f3a74u: goto label_2f3a74;
        case 0x2f3a78u: goto label_2f3a78;
        case 0x2f3a7cu: goto label_2f3a7c;
        case 0x2f3a80u: goto label_2f3a80;
        case 0x2f3a84u: goto label_2f3a84;
        case 0x2f3a88u: goto label_2f3a88;
        case 0x2f3a8cu: goto label_2f3a8c;
        case 0x2f3a90u: goto label_2f3a90;
        case 0x2f3a94u: goto label_2f3a94;
        case 0x2f3a98u: goto label_2f3a98;
        case 0x2f3a9cu: goto label_2f3a9c;
        case 0x2f3aa0u: goto label_2f3aa0;
        case 0x2f3aa4u: goto label_2f3aa4;
        case 0x2f3aa8u: goto label_2f3aa8;
        case 0x2f3aacu: goto label_2f3aac;
        case 0x2f3ab0u: goto label_2f3ab0;
        case 0x2f3ab4u: goto label_2f3ab4;
        case 0x2f3ab8u: goto label_2f3ab8;
        case 0x2f3abcu: goto label_2f3abc;
        case 0x2f3ac0u: goto label_2f3ac0;
        case 0x2f3ac4u: goto label_2f3ac4;
        case 0x2f3ac8u: goto label_2f3ac8;
        case 0x2f3accu: goto label_2f3acc;
        case 0x2f3ad0u: goto label_2f3ad0;
        case 0x2f3ad4u: goto label_2f3ad4;
        case 0x2f3ad8u: goto label_2f3ad8;
        case 0x2f3adcu: goto label_2f3adc;
        case 0x2f3ae0u: goto label_2f3ae0;
        case 0x2f3ae4u: goto label_2f3ae4;
        case 0x2f3ae8u: goto label_2f3ae8;
        case 0x2f3aecu: goto label_2f3aec;
        case 0x2f3af0u: goto label_2f3af0;
        case 0x2f3af4u: goto label_2f3af4;
        case 0x2f3af8u: goto label_2f3af8;
        case 0x2f3afcu: goto label_2f3afc;
        case 0x2f3b00u: goto label_2f3b00;
        case 0x2f3b04u: goto label_2f3b04;
        case 0x2f3b08u: goto label_2f3b08;
        case 0x2f3b0cu: goto label_2f3b0c;
        case 0x2f3b10u: goto label_2f3b10;
        case 0x2f3b14u: goto label_2f3b14;
        case 0x2f3b18u: goto label_2f3b18;
        case 0x2f3b1cu: goto label_2f3b1c;
        case 0x2f3b20u: goto label_2f3b20;
        case 0x2f3b24u: goto label_2f3b24;
        case 0x2f3b28u: goto label_2f3b28;
        case 0x2f3b2cu: goto label_2f3b2c;
        case 0x2f3b30u: goto label_2f3b30;
        case 0x2f3b34u: goto label_2f3b34;
        case 0x2f3b38u: goto label_2f3b38;
        case 0x2f3b3cu: goto label_2f3b3c;
        case 0x2f3b40u: goto label_2f3b40;
        case 0x2f3b44u: goto label_2f3b44;
        case 0x2f3b48u: goto label_2f3b48;
        case 0x2f3b4cu: goto label_2f3b4c;
        case 0x2f3b50u: goto label_2f3b50;
        case 0x2f3b54u: goto label_2f3b54;
        case 0x2f3b58u: goto label_2f3b58;
        case 0x2f3b5cu: goto label_2f3b5c;
        case 0x2f3b60u: goto label_2f3b60;
        case 0x2f3b64u: goto label_2f3b64;
        case 0x2f3b68u: goto label_2f3b68;
        case 0x2f3b6cu: goto label_2f3b6c;
        case 0x2f3b70u: goto label_2f3b70;
        case 0x2f3b74u: goto label_2f3b74;
        case 0x2f3b78u: goto label_2f3b78;
        case 0x2f3b7cu: goto label_2f3b7c;
        case 0x2f3b80u: goto label_2f3b80;
        case 0x2f3b84u: goto label_2f3b84;
        case 0x2f3b88u: goto label_2f3b88;
        case 0x2f3b8cu: goto label_2f3b8c;
        case 0x2f3b90u: goto label_2f3b90;
        case 0x2f3b94u: goto label_2f3b94;
        case 0x2f3b98u: goto label_2f3b98;
        case 0x2f3b9cu: goto label_2f3b9c;
        case 0x2f3ba0u: goto label_2f3ba0;
        case 0x2f3ba4u: goto label_2f3ba4;
        case 0x2f3ba8u: goto label_2f3ba8;
        case 0x2f3bacu: goto label_2f3bac;
        case 0x2f3bb0u: goto label_2f3bb0;
        case 0x2f3bb4u: goto label_2f3bb4;
        case 0x2f3bb8u: goto label_2f3bb8;
        case 0x2f3bbcu: goto label_2f3bbc;
        case 0x2f3bc0u: goto label_2f3bc0;
        case 0x2f3bc4u: goto label_2f3bc4;
        case 0x2f3bc8u: goto label_2f3bc8;
        case 0x2f3bccu: goto label_2f3bcc;
        case 0x2f3bd0u: goto label_2f3bd0;
        case 0x2f3bd4u: goto label_2f3bd4;
        case 0x2f3bd8u: goto label_2f3bd8;
        case 0x2f3bdcu: goto label_2f3bdc;
        case 0x2f3be0u: goto label_2f3be0;
        case 0x2f3be4u: goto label_2f3be4;
        case 0x2f3be8u: goto label_2f3be8;
        case 0x2f3becu: goto label_2f3bec;
        case 0x2f3bf0u: goto label_2f3bf0;
        case 0x2f3bf4u: goto label_2f3bf4;
        case 0x2f3bf8u: goto label_2f3bf8;
        case 0x2f3bfcu: goto label_2f3bfc;
        case 0x2f3c00u: goto label_2f3c00;
        case 0x2f3c04u: goto label_2f3c04;
        case 0x2f3c08u: goto label_2f3c08;
        case 0x2f3c0cu: goto label_2f3c0c;
        case 0x2f3c10u: goto label_2f3c10;
        case 0x2f3c14u: goto label_2f3c14;
        case 0x2f3c18u: goto label_2f3c18;
        case 0x2f3c1cu: goto label_2f3c1c;
        case 0x2f3c20u: goto label_2f3c20;
        case 0x2f3c24u: goto label_2f3c24;
        case 0x2f3c28u: goto label_2f3c28;
        case 0x2f3c2cu: goto label_2f3c2c;
        case 0x2f3c30u: goto label_2f3c30;
        case 0x2f3c34u: goto label_2f3c34;
        case 0x2f3c38u: goto label_2f3c38;
        case 0x2f3c3cu: goto label_2f3c3c;
        case 0x2f3c40u: goto label_2f3c40;
        case 0x2f3c44u: goto label_2f3c44;
        case 0x2f3c48u: goto label_2f3c48;
        case 0x2f3c4cu: goto label_2f3c4c;
        case 0x2f3c50u: goto label_2f3c50;
        case 0x2f3c54u: goto label_2f3c54;
        case 0x2f3c58u: goto label_2f3c58;
        case 0x2f3c5cu: goto label_2f3c5c;
        case 0x2f3c60u: goto label_2f3c60;
        case 0x2f3c64u: goto label_2f3c64;
        case 0x2f3c68u: goto label_2f3c68;
        case 0x2f3c6cu: goto label_2f3c6c;
        case 0x2f3c70u: goto label_2f3c70;
        case 0x2f3c74u: goto label_2f3c74;
        case 0x2f3c78u: goto label_2f3c78;
        case 0x2f3c7cu: goto label_2f3c7c;
        case 0x2f3c80u: goto label_2f3c80;
        case 0x2f3c84u: goto label_2f3c84;
        case 0x2f3c88u: goto label_2f3c88;
        case 0x2f3c8cu: goto label_2f3c8c;
        case 0x2f3c90u: goto label_2f3c90;
        case 0x2f3c94u: goto label_2f3c94;
        case 0x2f3c98u: goto label_2f3c98;
        case 0x2f3c9cu: goto label_2f3c9c;
        case 0x2f3ca0u: goto label_2f3ca0;
        case 0x2f3ca4u: goto label_2f3ca4;
        case 0x2f3ca8u: goto label_2f3ca8;
        case 0x2f3cacu: goto label_2f3cac;
        case 0x2f3cb0u: goto label_2f3cb0;
        case 0x2f3cb4u: goto label_2f3cb4;
        case 0x2f3cb8u: goto label_2f3cb8;
        case 0x2f3cbcu: goto label_2f3cbc;
        case 0x2f3cc0u: goto label_2f3cc0;
        case 0x2f3cc4u: goto label_2f3cc4;
        case 0x2f3cc8u: goto label_2f3cc8;
        case 0x2f3cccu: goto label_2f3ccc;
        case 0x2f3cd0u: goto label_2f3cd0;
        case 0x2f3cd4u: goto label_2f3cd4;
        case 0x2f3cd8u: goto label_2f3cd8;
        case 0x2f3cdcu: goto label_2f3cdc;
        case 0x2f3ce0u: goto label_2f3ce0;
        case 0x2f3ce4u: goto label_2f3ce4;
        case 0x2f3ce8u: goto label_2f3ce8;
        case 0x2f3cecu: goto label_2f3cec;
        case 0x2f3cf0u: goto label_2f3cf0;
        case 0x2f3cf4u: goto label_2f3cf4;
        case 0x2f3cf8u: goto label_2f3cf8;
        case 0x2f3cfcu: goto label_2f3cfc;
        case 0x2f3d00u: goto label_2f3d00;
        case 0x2f3d04u: goto label_2f3d04;
        case 0x2f3d08u: goto label_2f3d08;
        case 0x2f3d0cu: goto label_2f3d0c;
        case 0x2f3d10u: goto label_2f3d10;
        case 0x2f3d14u: goto label_2f3d14;
        case 0x2f3d18u: goto label_2f3d18;
        case 0x2f3d1cu: goto label_2f3d1c;
        case 0x2f3d20u: goto label_2f3d20;
        case 0x2f3d24u: goto label_2f3d24;
        case 0x2f3d28u: goto label_2f3d28;
        case 0x2f3d2cu: goto label_2f3d2c;
        case 0x2f3d30u: goto label_2f3d30;
        case 0x2f3d34u: goto label_2f3d34;
        case 0x2f3d38u: goto label_2f3d38;
        case 0x2f3d3cu: goto label_2f3d3c;
        case 0x2f3d40u: goto label_2f3d40;
        case 0x2f3d44u: goto label_2f3d44;
        case 0x2f3d48u: goto label_2f3d48;
        case 0x2f3d4cu: goto label_2f3d4c;
        case 0x2f3d50u: goto label_2f3d50;
        case 0x2f3d54u: goto label_2f3d54;
        case 0x2f3d58u: goto label_2f3d58;
        case 0x2f3d5cu: goto label_2f3d5c;
        case 0x2f3d60u: goto label_2f3d60;
        case 0x2f3d64u: goto label_2f3d64;
        case 0x2f3d68u: goto label_2f3d68;
        case 0x2f3d6cu: goto label_2f3d6c;
        case 0x2f3d70u: goto label_2f3d70;
        case 0x2f3d74u: goto label_2f3d74;
        case 0x2f3d78u: goto label_2f3d78;
        case 0x2f3d7cu: goto label_2f3d7c;
        case 0x2f3d80u: goto label_2f3d80;
        case 0x2f3d84u: goto label_2f3d84;
        case 0x2f3d88u: goto label_2f3d88;
        case 0x2f3d8cu: goto label_2f3d8c;
        case 0x2f3d90u: goto label_2f3d90;
        case 0x2f3d94u: goto label_2f3d94;
        case 0x2f3d98u: goto label_2f3d98;
        case 0x2f3d9cu: goto label_2f3d9c;
        case 0x2f3da0u: goto label_2f3da0;
        case 0x2f3da4u: goto label_2f3da4;
        case 0x2f3da8u: goto label_2f3da8;
        case 0x2f3dacu: goto label_2f3dac;
        case 0x2f3db0u: goto label_2f3db0;
        case 0x2f3db4u: goto label_2f3db4;
        case 0x2f3db8u: goto label_2f3db8;
        case 0x2f3dbcu: goto label_2f3dbc;
        case 0x2f3dc0u: goto label_2f3dc0;
        case 0x2f3dc4u: goto label_2f3dc4;
        case 0x2f3dc8u: goto label_2f3dc8;
        case 0x2f3dccu: goto label_2f3dcc;
        case 0x2f3dd0u: goto label_2f3dd0;
        case 0x2f3dd4u: goto label_2f3dd4;
        case 0x2f3dd8u: goto label_2f3dd8;
        case 0x2f3ddcu: goto label_2f3ddc;
        case 0x2f3de0u: goto label_2f3de0;
        case 0x2f3de4u: goto label_2f3de4;
        case 0x2f3de8u: goto label_2f3de8;
        case 0x2f3decu: goto label_2f3dec;
        case 0x2f3df0u: goto label_2f3df0;
        case 0x2f3df4u: goto label_2f3df4;
        case 0x2f3df8u: goto label_2f3df8;
        case 0x2f3dfcu: goto label_2f3dfc;
        case 0x2f3e00u: goto label_2f3e00;
        case 0x2f3e04u: goto label_2f3e04;
        case 0x2f3e08u: goto label_2f3e08;
        case 0x2f3e0cu: goto label_2f3e0c;
        case 0x2f3e10u: goto label_2f3e10;
        case 0x2f3e14u: goto label_2f3e14;
        case 0x2f3e18u: goto label_2f3e18;
        case 0x2f3e1cu: goto label_2f3e1c;
        case 0x2f3e20u: goto label_2f3e20;
        case 0x2f3e24u: goto label_2f3e24;
        case 0x2f3e28u: goto label_2f3e28;
        case 0x2f3e2cu: goto label_2f3e2c;
        case 0x2f3e30u: goto label_2f3e30;
        case 0x2f3e34u: goto label_2f3e34;
        case 0x2f3e38u: goto label_2f3e38;
        case 0x2f3e3cu: goto label_2f3e3c;
        case 0x2f3e40u: goto label_2f3e40;
        case 0x2f3e44u: goto label_2f3e44;
        case 0x2f3e48u: goto label_2f3e48;
        case 0x2f3e4cu: goto label_2f3e4c;
        case 0x2f3e50u: goto label_2f3e50;
        case 0x2f3e54u: goto label_2f3e54;
        case 0x2f3e58u: goto label_2f3e58;
        case 0x2f3e5cu: goto label_2f3e5c;
        case 0x2f3e60u: goto label_2f3e60;
        case 0x2f3e64u: goto label_2f3e64;
        case 0x2f3e68u: goto label_2f3e68;
        case 0x2f3e6cu: goto label_2f3e6c;
        case 0x2f3e70u: goto label_2f3e70;
        case 0x2f3e74u: goto label_2f3e74;
        case 0x2f3e78u: goto label_2f3e78;
        case 0x2f3e7cu: goto label_2f3e7c;
        case 0x2f3e80u: goto label_2f3e80;
        case 0x2f3e84u: goto label_2f3e84;
        case 0x2f3e88u: goto label_2f3e88;
        case 0x2f3e8cu: goto label_2f3e8c;
        case 0x2f3e90u: goto label_2f3e90;
        case 0x2f3e94u: goto label_2f3e94;
        case 0x2f3e98u: goto label_2f3e98;
        case 0x2f3e9cu: goto label_2f3e9c;
        case 0x2f3ea0u: goto label_2f3ea0;
        case 0x2f3ea4u: goto label_2f3ea4;
        case 0x2f3ea8u: goto label_2f3ea8;
        case 0x2f3eacu: goto label_2f3eac;
        case 0x2f3eb0u: goto label_2f3eb0;
        case 0x2f3eb4u: goto label_2f3eb4;
        case 0x2f3eb8u: goto label_2f3eb8;
        case 0x2f3ebcu: goto label_2f3ebc;
        case 0x2f3ec0u: goto label_2f3ec0;
        case 0x2f3ec4u: goto label_2f3ec4;
        case 0x2f3ec8u: goto label_2f3ec8;
        case 0x2f3eccu: goto label_2f3ecc;
        case 0x2f3ed0u: goto label_2f3ed0;
        case 0x2f3ed4u: goto label_2f3ed4;
        case 0x2f3ed8u: goto label_2f3ed8;
        case 0x2f3edcu: goto label_2f3edc;
        case 0x2f3ee0u: goto label_2f3ee0;
        case 0x2f3ee4u: goto label_2f3ee4;
        case 0x2f3ee8u: goto label_2f3ee8;
        case 0x2f3eecu: goto label_2f3eec;
        case 0x2f3ef0u: goto label_2f3ef0;
        case 0x2f3ef4u: goto label_2f3ef4;
        case 0x2f3ef8u: goto label_2f3ef8;
        case 0x2f3efcu: goto label_2f3efc;
        case 0x2f3f00u: goto label_2f3f00;
        case 0x2f3f04u: goto label_2f3f04;
        case 0x2f3f08u: goto label_2f3f08;
        case 0x2f3f0cu: goto label_2f3f0c;
        case 0x2f3f10u: goto label_2f3f10;
        case 0x2f3f14u: goto label_2f3f14;
        case 0x2f3f18u: goto label_2f3f18;
        case 0x2f3f1cu: goto label_2f3f1c;
        case 0x2f3f20u: goto label_2f3f20;
        case 0x2f3f24u: goto label_2f3f24;
        case 0x2f3f28u: goto label_2f3f28;
        case 0x2f3f2cu: goto label_2f3f2c;
        case 0x2f3f30u: goto label_2f3f30;
        case 0x2f3f34u: goto label_2f3f34;
        case 0x2f3f38u: goto label_2f3f38;
        case 0x2f3f3cu: goto label_2f3f3c;
        case 0x2f3f40u: goto label_2f3f40;
        case 0x2f3f44u: goto label_2f3f44;
        case 0x2f3f48u: goto label_2f3f48;
        case 0x2f3f4cu: goto label_2f3f4c;
        case 0x2f3f50u: goto label_2f3f50;
        case 0x2f3f54u: goto label_2f3f54;
        case 0x2f3f58u: goto label_2f3f58;
        case 0x2f3f5cu: goto label_2f3f5c;
        case 0x2f3f60u: goto label_2f3f60;
        case 0x2f3f64u: goto label_2f3f64;
        case 0x2f3f68u: goto label_2f3f68;
        case 0x2f3f6cu: goto label_2f3f6c;
        case 0x2f3f70u: goto label_2f3f70;
        case 0x2f3f74u: goto label_2f3f74;
        case 0x2f3f78u: goto label_2f3f78;
        case 0x2f3f7cu: goto label_2f3f7c;
        case 0x2f3f80u: goto label_2f3f80;
        case 0x2f3f84u: goto label_2f3f84;
        case 0x2f3f88u: goto label_2f3f88;
        case 0x2f3f8cu: goto label_2f3f8c;
        case 0x2f3f90u: goto label_2f3f90;
        case 0x2f3f94u: goto label_2f3f94;
        case 0x2f3f98u: goto label_2f3f98;
        case 0x2f3f9cu: goto label_2f3f9c;
        case 0x2f3fa0u: goto label_2f3fa0;
        case 0x2f3fa4u: goto label_2f3fa4;
        case 0x2f3fa8u: goto label_2f3fa8;
        case 0x2f3facu: goto label_2f3fac;
        case 0x2f3fb0u: goto label_2f3fb0;
        case 0x2f3fb4u: goto label_2f3fb4;
        case 0x2f3fb8u: goto label_2f3fb8;
        case 0x2f3fbcu: goto label_2f3fbc;
        case 0x2f3fc0u: goto label_2f3fc0;
        case 0x2f3fc4u: goto label_2f3fc4;
        case 0x2f3fc8u: goto label_2f3fc8;
        case 0x2f3fccu: goto label_2f3fcc;
        case 0x2f3fd0u: goto label_2f3fd0;
        case 0x2f3fd4u: goto label_2f3fd4;
        case 0x2f3fd8u: goto label_2f3fd8;
        case 0x2f3fdcu: goto label_2f3fdc;
        case 0x2f3fe0u: goto label_2f3fe0;
        case 0x2f3fe4u: goto label_2f3fe4;
        case 0x2f3fe8u: goto label_2f3fe8;
        case 0x2f3fecu: goto label_2f3fec;
        case 0x2f3ff0u: goto label_2f3ff0;
        case 0x2f3ff4u: goto label_2f3ff4;
        case 0x2f3ff8u: goto label_2f3ff8;
        case 0x2f3ffcu: goto label_2f3ffc;
        case 0x2f4000u: goto label_2f4000;
        case 0x2f4004u: goto label_2f4004;
        case 0x2f4008u: goto label_2f4008;
        case 0x2f400cu: goto label_2f400c;
        case 0x2f4010u: goto label_2f4010;
        case 0x2f4014u: goto label_2f4014;
        case 0x2f4018u: goto label_2f4018;
        case 0x2f401cu: goto label_2f401c;
        case 0x2f4020u: goto label_2f4020;
        case 0x2f4024u: goto label_2f4024;
        case 0x2f4028u: goto label_2f4028;
        case 0x2f402cu: goto label_2f402c;
        case 0x2f4030u: goto label_2f4030;
        case 0x2f4034u: goto label_2f4034;
        case 0x2f4038u: goto label_2f4038;
        case 0x2f403cu: goto label_2f403c;
        case 0x2f4040u: goto label_2f4040;
        case 0x2f4044u: goto label_2f4044;
        case 0x2f4048u: goto label_2f4048;
        case 0x2f404cu: goto label_2f404c;
        case 0x2f4050u: goto label_2f4050;
        case 0x2f4054u: goto label_2f4054;
        case 0x2f4058u: goto label_2f4058;
        case 0x2f405cu: goto label_2f405c;
        case 0x2f4060u: goto label_2f4060;
        case 0x2f4064u: goto label_2f4064;
        case 0x2f4068u: goto label_2f4068;
        case 0x2f406cu: goto label_2f406c;
        case 0x2f4070u: goto label_2f4070;
        case 0x2f4074u: goto label_2f4074;
        case 0x2f4078u: goto label_2f4078;
        case 0x2f407cu: goto label_2f407c;
        case 0x2f4080u: goto label_2f4080;
        case 0x2f4084u: goto label_2f4084;
        case 0x2f4088u: goto label_2f4088;
        case 0x2f408cu: goto label_2f408c;
        case 0x2f4090u: goto label_2f4090;
        case 0x2f4094u: goto label_2f4094;
        case 0x2f4098u: goto label_2f4098;
        case 0x2f409cu: goto label_2f409c;
        case 0x2f40a0u: goto label_2f40a0;
        case 0x2f40a4u: goto label_2f40a4;
        case 0x2f40a8u: goto label_2f40a8;
        case 0x2f40acu: goto label_2f40ac;
        case 0x2f40b0u: goto label_2f40b0;
        case 0x2f40b4u: goto label_2f40b4;
        case 0x2f40b8u: goto label_2f40b8;
        case 0x2f40bcu: goto label_2f40bc;
        case 0x2f40c0u: goto label_2f40c0;
        case 0x2f40c4u: goto label_2f40c4;
        case 0x2f40c8u: goto label_2f40c8;
        case 0x2f40ccu: goto label_2f40cc;
        case 0x2f40d0u: goto label_2f40d0;
        case 0x2f40d4u: goto label_2f40d4;
        case 0x2f40d8u: goto label_2f40d8;
        case 0x2f40dcu: goto label_2f40dc;
        case 0x2f40e0u: goto label_2f40e0;
        case 0x2f40e4u: goto label_2f40e4;
        case 0x2f40e8u: goto label_2f40e8;
        case 0x2f40ecu: goto label_2f40ec;
        case 0x2f40f0u: goto label_2f40f0;
        case 0x2f40f4u: goto label_2f40f4;
        case 0x2f40f8u: goto label_2f40f8;
        case 0x2f40fcu: goto label_2f40fc;
        case 0x2f4100u: goto label_2f4100;
        case 0x2f4104u: goto label_2f4104;
        case 0x2f4108u: goto label_2f4108;
        case 0x2f410cu: goto label_2f410c;
        case 0x2f4110u: goto label_2f4110;
        case 0x2f4114u: goto label_2f4114;
        case 0x2f4118u: goto label_2f4118;
        case 0x2f411cu: goto label_2f411c;
        case 0x2f4120u: goto label_2f4120;
        case 0x2f4124u: goto label_2f4124;
        case 0x2f4128u: goto label_2f4128;
        case 0x2f412cu: goto label_2f412c;
        case 0x2f4130u: goto label_2f4130;
        case 0x2f4134u: goto label_2f4134;
        case 0x2f4138u: goto label_2f4138;
        case 0x2f413cu: goto label_2f413c;
        case 0x2f4140u: goto label_2f4140;
        case 0x2f4144u: goto label_2f4144;
        case 0x2f4148u: goto label_2f4148;
        case 0x2f414cu: goto label_2f414c;
        case 0x2f4150u: goto label_2f4150;
        case 0x2f4154u: goto label_2f4154;
        case 0x2f4158u: goto label_2f4158;
        case 0x2f415cu: goto label_2f415c;
        case 0x2f4160u: goto label_2f4160;
        case 0x2f4164u: goto label_2f4164;
        case 0x2f4168u: goto label_2f4168;
        case 0x2f416cu: goto label_2f416c;
        case 0x2f4170u: goto label_2f4170;
        case 0x2f4174u: goto label_2f4174;
        case 0x2f4178u: goto label_2f4178;
        case 0x2f417cu: goto label_2f417c;
        case 0x2f4180u: goto label_2f4180;
        case 0x2f4184u: goto label_2f4184;
        case 0x2f4188u: goto label_2f4188;
        case 0x2f418cu: goto label_2f418c;
        case 0x2f4190u: goto label_2f4190;
        case 0x2f4194u: goto label_2f4194;
        case 0x2f4198u: goto label_2f4198;
        case 0x2f419cu: goto label_2f419c;
        case 0x2f41a0u: goto label_2f41a0;
        case 0x2f41a4u: goto label_2f41a4;
        case 0x2f41a8u: goto label_2f41a8;
        case 0x2f41acu: goto label_2f41ac;
        case 0x2f41b0u: goto label_2f41b0;
        case 0x2f41b4u: goto label_2f41b4;
        case 0x2f41b8u: goto label_2f41b8;
        case 0x2f41bcu: goto label_2f41bc;
        case 0x2f41c0u: goto label_2f41c0;
        case 0x2f41c4u: goto label_2f41c4;
        case 0x2f41c8u: goto label_2f41c8;
        case 0x2f41ccu: goto label_2f41cc;
        case 0x2f41d0u: goto label_2f41d0;
        case 0x2f41d4u: goto label_2f41d4;
        case 0x2f41d8u: goto label_2f41d8;
        case 0x2f41dcu: goto label_2f41dc;
        case 0x2f41e0u: goto label_2f41e0;
        case 0x2f41e4u: goto label_2f41e4;
        case 0x2f41e8u: goto label_2f41e8;
        case 0x2f41ecu: goto label_2f41ec;
        case 0x2f41f0u: goto label_2f41f0;
        case 0x2f41f4u: goto label_2f41f4;
        case 0x2f41f8u: goto label_2f41f8;
        case 0x2f41fcu: goto label_2f41fc;
        case 0x2f4200u: goto label_2f4200;
        case 0x2f4204u: goto label_2f4204;
        case 0x2f4208u: goto label_2f4208;
        case 0x2f420cu: goto label_2f420c;
        case 0x2f4210u: goto label_2f4210;
        case 0x2f4214u: goto label_2f4214;
        case 0x2f4218u: goto label_2f4218;
        case 0x2f421cu: goto label_2f421c;
        case 0x2f4220u: goto label_2f4220;
        case 0x2f4224u: goto label_2f4224;
        case 0x2f4228u: goto label_2f4228;
        case 0x2f422cu: goto label_2f422c;
        case 0x2f4230u: goto label_2f4230;
        case 0x2f4234u: goto label_2f4234;
        case 0x2f4238u: goto label_2f4238;
        case 0x2f423cu: goto label_2f423c;
        case 0x2f4240u: goto label_2f4240;
        case 0x2f4244u: goto label_2f4244;
        case 0x2f4248u: goto label_2f4248;
        case 0x2f424cu: goto label_2f424c;
        case 0x2f4250u: goto label_2f4250;
        case 0x2f4254u: goto label_2f4254;
        case 0x2f4258u: goto label_2f4258;
        case 0x2f425cu: goto label_2f425c;
        case 0x2f4260u: goto label_2f4260;
        case 0x2f4264u: goto label_2f4264;
        case 0x2f4268u: goto label_2f4268;
        case 0x2f426cu: goto label_2f426c;
        case 0x2f4270u: goto label_2f4270;
        case 0x2f4274u: goto label_2f4274;
        case 0x2f4278u: goto label_2f4278;
        case 0x2f427cu: goto label_2f427c;
        case 0x2f4280u: goto label_2f4280;
        case 0x2f4284u: goto label_2f4284;
        case 0x2f4288u: goto label_2f4288;
        case 0x2f428cu: goto label_2f428c;
        case 0x2f4290u: goto label_2f4290;
        case 0x2f4294u: goto label_2f4294;
        case 0x2f4298u: goto label_2f4298;
        case 0x2f429cu: goto label_2f429c;
        case 0x2f42a0u: goto label_2f42a0;
        case 0x2f42a4u: goto label_2f42a4;
        case 0x2f42a8u: goto label_2f42a8;
        case 0x2f42acu: goto label_2f42ac;
        case 0x2f42b0u: goto label_2f42b0;
        case 0x2f42b4u: goto label_2f42b4;
        case 0x2f42b8u: goto label_2f42b8;
        case 0x2f42bcu: goto label_2f42bc;
        case 0x2f42c0u: goto label_2f42c0;
        case 0x2f42c4u: goto label_2f42c4;
        case 0x2f42c8u: goto label_2f42c8;
        case 0x2f42ccu: goto label_2f42cc;
        case 0x2f42d0u: goto label_2f42d0;
        case 0x2f42d4u: goto label_2f42d4;
        case 0x2f42d8u: goto label_2f42d8;
        case 0x2f42dcu: goto label_2f42dc;
        case 0x2f42e0u: goto label_2f42e0;
        case 0x2f42e4u: goto label_2f42e4;
        case 0x2f42e8u: goto label_2f42e8;
        case 0x2f42ecu: goto label_2f42ec;
        case 0x2f42f0u: goto label_2f42f0;
        case 0x2f42f4u: goto label_2f42f4;
        case 0x2f42f8u: goto label_2f42f8;
        case 0x2f42fcu: goto label_2f42fc;
        case 0x2f4300u: goto label_2f4300;
        case 0x2f4304u: goto label_2f4304;
        case 0x2f4308u: goto label_2f4308;
        case 0x2f430cu: goto label_2f430c;
        case 0x2f4310u: goto label_2f4310;
        case 0x2f4314u: goto label_2f4314;
        case 0x2f4318u: goto label_2f4318;
        case 0x2f431cu: goto label_2f431c;
        case 0x2f4320u: goto label_2f4320;
        case 0x2f4324u: goto label_2f4324;
        case 0x2f4328u: goto label_2f4328;
        case 0x2f432cu: goto label_2f432c;
        case 0x2f4330u: goto label_2f4330;
        case 0x2f4334u: goto label_2f4334;
        case 0x2f4338u: goto label_2f4338;
        case 0x2f433cu: goto label_2f433c;
        case 0x2f4340u: goto label_2f4340;
        case 0x2f4344u: goto label_2f4344;
        case 0x2f4348u: goto label_2f4348;
        case 0x2f434cu: goto label_2f434c;
        case 0x2f4350u: goto label_2f4350;
        case 0x2f4354u: goto label_2f4354;
        case 0x2f4358u: goto label_2f4358;
        case 0x2f435cu: goto label_2f435c;
        case 0x2f4360u: goto label_2f4360;
        case 0x2f4364u: goto label_2f4364;
        case 0x2f4368u: goto label_2f4368;
        case 0x2f436cu: goto label_2f436c;
        case 0x2f4370u: goto label_2f4370;
        case 0x2f4374u: goto label_2f4374;
        case 0x2f4378u: goto label_2f4378;
        case 0x2f437cu: goto label_2f437c;
        case 0x2f4380u: goto label_2f4380;
        case 0x2f4384u: goto label_2f4384;
        case 0x2f4388u: goto label_2f4388;
        case 0x2f438cu: goto label_2f438c;
        case 0x2f4390u: goto label_2f4390;
        case 0x2f4394u: goto label_2f4394;
        case 0x2f4398u: goto label_2f4398;
        case 0x2f439cu: goto label_2f439c;
        case 0x2f43a0u: goto label_2f43a0;
        case 0x2f43a4u: goto label_2f43a4;
        case 0x2f43a8u: goto label_2f43a8;
        case 0x2f43acu: goto label_2f43ac;
        case 0x2f43b0u: goto label_2f43b0;
        case 0x2f43b4u: goto label_2f43b4;
        case 0x2f43b8u: goto label_2f43b8;
        case 0x2f43bcu: goto label_2f43bc;
        case 0x2f43c0u: goto label_2f43c0;
        case 0x2f43c4u: goto label_2f43c4;
        case 0x2f43c8u: goto label_2f43c8;
        case 0x2f43ccu: goto label_2f43cc;
        case 0x2f43d0u: goto label_2f43d0;
        case 0x2f43d4u: goto label_2f43d4;
        case 0x2f43d8u: goto label_2f43d8;
        case 0x2f43dcu: goto label_2f43dc;
        case 0x2f43e0u: goto label_2f43e0;
        case 0x2f43e4u: goto label_2f43e4;
        case 0x2f43e8u: goto label_2f43e8;
        case 0x2f43ecu: goto label_2f43ec;
        case 0x2f43f0u: goto label_2f43f0;
        case 0x2f43f4u: goto label_2f43f4;
        case 0x2f43f8u: goto label_2f43f8;
        case 0x2f43fcu: goto label_2f43fc;
        case 0x2f4400u: goto label_2f4400;
        case 0x2f4404u: goto label_2f4404;
        case 0x2f4408u: goto label_2f4408;
        case 0x2f440cu: goto label_2f440c;
        case 0x2f4410u: goto label_2f4410;
        case 0x2f4414u: goto label_2f4414;
        case 0x2f4418u: goto label_2f4418;
        case 0x2f441cu: goto label_2f441c;
        case 0x2f4420u: goto label_2f4420;
        case 0x2f4424u: goto label_2f4424;
        case 0x2f4428u: goto label_2f4428;
        case 0x2f442cu: goto label_2f442c;
        case 0x2f4430u: goto label_2f4430;
        case 0x2f4434u: goto label_2f4434;
        case 0x2f4438u: goto label_2f4438;
        case 0x2f443cu: goto label_2f443c;
        case 0x2f4440u: goto label_2f4440;
        case 0x2f4444u: goto label_2f4444;
        case 0x2f4448u: goto label_2f4448;
        case 0x2f444cu: goto label_2f444c;
        case 0x2f4450u: goto label_2f4450;
        case 0x2f4454u: goto label_2f4454;
        case 0x2f4458u: goto label_2f4458;
        case 0x2f445cu: goto label_2f445c;
        case 0x2f4460u: goto label_2f4460;
        case 0x2f4464u: goto label_2f4464;
        case 0x2f4468u: goto label_2f4468;
        case 0x2f446cu: goto label_2f446c;
        case 0x2f4470u: goto label_2f4470;
        case 0x2f4474u: goto label_2f4474;
        case 0x2f4478u: goto label_2f4478;
        case 0x2f447cu: goto label_2f447c;
        case 0x2f4480u: goto label_2f4480;
        case 0x2f4484u: goto label_2f4484;
        case 0x2f4488u: goto label_2f4488;
        case 0x2f448cu: goto label_2f448c;
        case 0x2f4490u: goto label_2f4490;
        case 0x2f4494u: goto label_2f4494;
        case 0x2f4498u: goto label_2f4498;
        case 0x2f449cu: goto label_2f449c;
        case 0x2f44a0u: goto label_2f44a0;
        case 0x2f44a4u: goto label_2f44a4;
        case 0x2f44a8u: goto label_2f44a8;
        case 0x2f44acu: goto label_2f44ac;
        case 0x2f44b0u: goto label_2f44b0;
        case 0x2f44b4u: goto label_2f44b4;
        case 0x2f44b8u: goto label_2f44b8;
        case 0x2f44bcu: goto label_2f44bc;
        case 0x2f44c0u: goto label_2f44c0;
        case 0x2f44c4u: goto label_2f44c4;
        case 0x2f44c8u: goto label_2f44c8;
        case 0x2f44ccu: goto label_2f44cc;
        case 0x2f44d0u: goto label_2f44d0;
        case 0x2f44d4u: goto label_2f44d4;
        case 0x2f44d8u: goto label_2f44d8;
        case 0x2f44dcu: goto label_2f44dc;
        case 0x2f44e0u: goto label_2f44e0;
        case 0x2f44e4u: goto label_2f44e4;
        case 0x2f44e8u: goto label_2f44e8;
        case 0x2f44ecu: goto label_2f44ec;
        case 0x2f44f0u: goto label_2f44f0;
        case 0x2f44f4u: goto label_2f44f4;
        case 0x2f44f8u: goto label_2f44f8;
        case 0x2f44fcu: goto label_2f44fc;
        case 0x2f4500u: goto label_2f4500;
        case 0x2f4504u: goto label_2f4504;
        case 0x2f4508u: goto label_2f4508;
        case 0x2f450cu: goto label_2f450c;
        case 0x2f4510u: goto label_2f4510;
        case 0x2f4514u: goto label_2f4514;
        case 0x2f4518u: goto label_2f4518;
        case 0x2f451cu: goto label_2f451c;
        case 0x2f4520u: goto label_2f4520;
        case 0x2f4524u: goto label_2f4524;
        case 0x2f4528u: goto label_2f4528;
        case 0x2f452cu: goto label_2f452c;
        case 0x2f4530u: goto label_2f4530;
        case 0x2f4534u: goto label_2f4534;
        case 0x2f4538u: goto label_2f4538;
        case 0x2f453cu: goto label_2f453c;
        case 0x2f4540u: goto label_2f4540;
        case 0x2f4544u: goto label_2f4544;
        case 0x2f4548u: goto label_2f4548;
        case 0x2f454cu: goto label_2f454c;
        case 0x2f4550u: goto label_2f4550;
        case 0x2f4554u: goto label_2f4554;
        case 0x2f4558u: goto label_2f4558;
        case 0x2f455cu: goto label_2f455c;
        case 0x2f4560u: goto label_2f4560;
        case 0x2f4564u: goto label_2f4564;
        case 0x2f4568u: goto label_2f4568;
        case 0x2f456cu: goto label_2f456c;
        case 0x2f4570u: goto label_2f4570;
        case 0x2f4574u: goto label_2f4574;
        case 0x2f4578u: goto label_2f4578;
        case 0x2f457cu: goto label_2f457c;
        case 0x2f4580u: goto label_2f4580;
        case 0x2f4584u: goto label_2f4584;
        case 0x2f4588u: goto label_2f4588;
        case 0x2f458cu: goto label_2f458c;
        case 0x2f4590u: goto label_2f4590;
        case 0x2f4594u: goto label_2f4594;
        case 0x2f4598u: goto label_2f4598;
        case 0x2f459cu: goto label_2f459c;
        case 0x2f45a0u: goto label_2f45a0;
        case 0x2f45a4u: goto label_2f45a4;
        case 0x2f45a8u: goto label_2f45a8;
        case 0x2f45acu: goto label_2f45ac;
        case 0x2f45b0u: goto label_2f45b0;
        case 0x2f45b4u: goto label_2f45b4;
        case 0x2f45b8u: goto label_2f45b8;
        case 0x2f45bcu: goto label_2f45bc;
        case 0x2f45c0u: goto label_2f45c0;
        case 0x2f45c4u: goto label_2f45c4;
        case 0x2f45c8u: goto label_2f45c8;
        case 0x2f45ccu: goto label_2f45cc;
        case 0x2f45d0u: goto label_2f45d0;
        case 0x2f45d4u: goto label_2f45d4;
        case 0x2f45d8u: goto label_2f45d8;
        case 0x2f45dcu: goto label_2f45dc;
        case 0x2f45e0u: goto label_2f45e0;
        case 0x2f45e4u: goto label_2f45e4;
        case 0x2f45e8u: goto label_2f45e8;
        case 0x2f45ecu: goto label_2f45ec;
        case 0x2f45f0u: goto label_2f45f0;
        case 0x2f45f4u: goto label_2f45f4;
        case 0x2f45f8u: goto label_2f45f8;
        case 0x2f45fcu: goto label_2f45fc;
        case 0x2f4600u: goto label_2f4600;
        case 0x2f4604u: goto label_2f4604;
        case 0x2f4608u: goto label_2f4608;
        case 0x2f460cu: goto label_2f460c;
        case 0x2f4610u: goto label_2f4610;
        case 0x2f4614u: goto label_2f4614;
        case 0x2f4618u: goto label_2f4618;
        case 0x2f461cu: goto label_2f461c;
        case 0x2f4620u: goto label_2f4620;
        case 0x2f4624u: goto label_2f4624;
        case 0x2f4628u: goto label_2f4628;
        case 0x2f462cu: goto label_2f462c;
        case 0x2f4630u: goto label_2f4630;
        case 0x2f4634u: goto label_2f4634;
        case 0x2f4638u: goto label_2f4638;
        case 0x2f463cu: goto label_2f463c;
        case 0x2f4640u: goto label_2f4640;
        case 0x2f4644u: goto label_2f4644;
        case 0x2f4648u: goto label_2f4648;
        case 0x2f464cu: goto label_2f464c;
        case 0x2f4650u: goto label_2f4650;
        case 0x2f4654u: goto label_2f4654;
        case 0x2f4658u: goto label_2f4658;
        case 0x2f465cu: goto label_2f465c;
        case 0x2f4660u: goto label_2f4660;
        case 0x2f4664u: goto label_2f4664;
        case 0x2f4668u: goto label_2f4668;
        case 0x2f466cu: goto label_2f466c;
        case 0x2f4670u: goto label_2f4670;
        case 0x2f4674u: goto label_2f4674;
        case 0x2f4678u: goto label_2f4678;
        case 0x2f467cu: goto label_2f467c;
        case 0x2f4680u: goto label_2f4680;
        case 0x2f4684u: goto label_2f4684;
        case 0x2f4688u: goto label_2f4688;
        case 0x2f468cu: goto label_2f468c;
        case 0x2f4690u: goto label_2f4690;
        case 0x2f4694u: goto label_2f4694;
        case 0x2f4698u: goto label_2f4698;
        case 0x2f469cu: goto label_2f469c;
        case 0x2f46a0u: goto label_2f46a0;
        case 0x2f46a4u: goto label_2f46a4;
        case 0x2f46a8u: goto label_2f46a8;
        case 0x2f46acu: goto label_2f46ac;
        case 0x2f46b0u: goto label_2f46b0;
        case 0x2f46b4u: goto label_2f46b4;
        case 0x2f46b8u: goto label_2f46b8;
        case 0x2f46bcu: goto label_2f46bc;
        case 0x2f46c0u: goto label_2f46c0;
        case 0x2f46c4u: goto label_2f46c4;
        case 0x2f46c8u: goto label_2f46c8;
        case 0x2f46ccu: goto label_2f46cc;
        case 0x2f46d0u: goto label_2f46d0;
        case 0x2f46d4u: goto label_2f46d4;
        case 0x2f46d8u: goto label_2f46d8;
        case 0x2f46dcu: goto label_2f46dc;
        case 0x2f46e0u: goto label_2f46e0;
        case 0x2f46e4u: goto label_2f46e4;
        case 0x2f46e8u: goto label_2f46e8;
        case 0x2f46ecu: goto label_2f46ec;
        case 0x2f46f0u: goto label_2f46f0;
        case 0x2f46f4u: goto label_2f46f4;
        case 0x2f46f8u: goto label_2f46f8;
        case 0x2f46fcu: goto label_2f46fc;
        case 0x2f4700u: goto label_2f4700;
        case 0x2f4704u: goto label_2f4704;
        case 0x2f4708u: goto label_2f4708;
        case 0x2f470cu: goto label_2f470c;
        case 0x2f4710u: goto label_2f4710;
        case 0x2f4714u: goto label_2f4714;
        case 0x2f4718u: goto label_2f4718;
        case 0x2f471cu: goto label_2f471c;
        case 0x2f4720u: goto label_2f4720;
        case 0x2f4724u: goto label_2f4724;
        case 0x2f4728u: goto label_2f4728;
        case 0x2f472cu: goto label_2f472c;
        case 0x2f4730u: goto label_2f4730;
        case 0x2f4734u: goto label_2f4734;
        case 0x2f4738u: goto label_2f4738;
        case 0x2f473cu: goto label_2f473c;
        case 0x2f4740u: goto label_2f4740;
        case 0x2f4744u: goto label_2f4744;
        case 0x2f4748u: goto label_2f4748;
        case 0x2f474cu: goto label_2f474c;
        case 0x2f4750u: goto label_2f4750;
        case 0x2f4754u: goto label_2f4754;
        case 0x2f4758u: goto label_2f4758;
        case 0x2f475cu: goto label_2f475c;
        case 0x2f4760u: goto label_2f4760;
        case 0x2f4764u: goto label_2f4764;
        case 0x2f4768u: goto label_2f4768;
        case 0x2f476cu: goto label_2f476c;
        case 0x2f4770u: goto label_2f4770;
        case 0x2f4774u: goto label_2f4774;
        case 0x2f4778u: goto label_2f4778;
        case 0x2f477cu: goto label_2f477c;
        case 0x2f4780u: goto label_2f4780;
        case 0x2f4784u: goto label_2f4784;
        case 0x2f4788u: goto label_2f4788;
        case 0x2f478cu: goto label_2f478c;
        case 0x2f4790u: goto label_2f4790;
        case 0x2f4794u: goto label_2f4794;
        case 0x2f4798u: goto label_2f4798;
        case 0x2f479cu: goto label_2f479c;
        case 0x2f47a0u: goto label_2f47a0;
        case 0x2f47a4u: goto label_2f47a4;
        case 0x2f47a8u: goto label_2f47a8;
        case 0x2f47acu: goto label_2f47ac;
        case 0x2f47b0u: goto label_2f47b0;
        case 0x2f47b4u: goto label_2f47b4;
        case 0x2f47b8u: goto label_2f47b8;
        case 0x2f47bcu: goto label_2f47bc;
        case 0x2f47c0u: goto label_2f47c0;
        case 0x2f47c4u: goto label_2f47c4;
        case 0x2f47c8u: goto label_2f47c8;
        case 0x2f47ccu: goto label_2f47cc;
        case 0x2f47d0u: goto label_2f47d0;
        case 0x2f47d4u: goto label_2f47d4;
        case 0x2f47d8u: goto label_2f47d8;
        case 0x2f47dcu: goto label_2f47dc;
        case 0x2f47e0u: goto label_2f47e0;
        case 0x2f47e4u: goto label_2f47e4;
        case 0x2f47e8u: goto label_2f47e8;
        case 0x2f47ecu: goto label_2f47ec;
        case 0x2f47f0u: goto label_2f47f0;
        case 0x2f47f4u: goto label_2f47f4;
        case 0x2f47f8u: goto label_2f47f8;
        case 0x2f47fcu: goto label_2f47fc;
        case 0x2f4800u: goto label_2f4800;
        case 0x2f4804u: goto label_2f4804;
        case 0x2f4808u: goto label_2f4808;
        case 0x2f480cu: goto label_2f480c;
        case 0x2f4810u: goto label_2f4810;
        case 0x2f4814u: goto label_2f4814;
        default: break;
    }

    ctx->pc = 0x2f38a0u;

label_2f38a0:
    // 0x2f38a0: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x2f38a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_2f38a4:
    // 0x2f38a4: 0x240201ff  addiu       $v0, $zero, 0x1FF
    ctx->pc = 0x2f38a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 511));
label_2f38a8:
    // 0x2f38a8: 0xffb20090  sd          $s2, 0x90($sp)
    ctx->pc = 0x2f38a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 18));
label_2f38ac:
    // 0x2f38ac: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2f38acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2f38b0:
    // 0x2f38b0: 0xffb500c0  sd          $s5, 0xC0($sp)
    ctx->pc = 0x2f38b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 21));
label_2f38b4:
    // 0x2f38b4: 0x264300e0  addiu       $v1, $s2, 0xE0
    ctx->pc = 0x2f38b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 224));
label_2f38b8:
    // 0x2f38b8: 0xffbf0100  sd          $ra, 0x100($sp)
    ctx->pc = 0x2f38b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 256), GPR_U64(ctx, 31));
label_2f38bc:
    // 0x2f38bc: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x2f38bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
label_2f38c0:
    // 0x2f38c0: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x2f38c0u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f38c4:
    // 0x2f38c4: 0xffbe00f0  sd          $fp, 0xF0($sp)
    ctx->pc = 0x2f38c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 30));
label_2f38c8:
    // 0x2f38c8: 0xffb700e0  sd          $s7, 0xE0($sp)
    ctx->pc = 0x2f38c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 224), GPR_U64(ctx, 23));
label_2f38cc:
    // 0x2f38cc: 0xffb600d0  sd          $s6, 0xD0($sp)
    ctx->pc = 0x2f38ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 22));
label_2f38d0:
    // 0x2f38d0: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x2f38d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
label_2f38d4:
    // 0x2f38d4: 0xffb300a0  sd          $s3, 0xA0($sp)
    ctx->pc = 0x2f38d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 19));
label_2f38d8:
    // 0x2f38d8: 0xffb10080  sd          $s1, 0x80($sp)
    ctx->pc = 0x2f38d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 17));
label_2f38dc:
    // 0x2f38dc: 0xffb00070  sd          $s0, 0x70($sp)
    ctx->pc = 0x2f38dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 16));
label_2f38e0:
    // 0x2f38e0: 0x8e4400cc  lw          $a0, 0xCC($s2)
    ctx->pc = 0x2f38e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 204)));
label_2f38e4:
    // 0x2f38e4: 0xafa30064  sw          $v1, 0x64($sp)
    ctx->pc = 0x2f38e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 3));
label_2f38e8:
    // 0x2f38e8: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x2f38e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_2f38ec:
    // 0x2f38ec: 0x24030200  addiu       $v1, $zero, 0x200
    ctx->pc = 0x2f38ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_2f38f0:
    // 0x2f38f0: 0x34048000  ori         $a0, $zero, 0x8000
    ctx->pc = 0x2f38f0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
label_2f38f4:
    // 0x2f38f4: 0x8e450084  lw          $a1, 0x84($s2)
    ctx->pc = 0x2f38f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f38f8:
    // 0x2f38f8: 0xffa00018  sd          $zero, 0x18($sp)
    ctx->pc = 0x2f38f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 0));
label_2f38fc:
    // 0x2f38fc: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2f38fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_2f3900:
    // 0x2f3900: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2f3900u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2f3904:
    // 0x2f3904: 0x62280a  movz        $a1, $v1, $v0
    ctx->pc = 0x2f3904u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 3));
label_2f3908:
    // 0x2f3908: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2f3908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_2f390c:
    // 0x2f390c: 0x85102a  slt         $v0, $a0, $a1
    ctx->pc = 0x2f390cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2f3910:
    // 0x2f3910: 0x82280b  movn        $a1, $a0, $v0
    ctx->pc = 0x2f3910u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_2f3914:
    // 0x2f3914: 0xafa50030  sw          $a1, 0x30($sp)
    ctx->pc = 0x2f3914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 5));
label_2f3918:
    // 0x2f3918: 0xc0be450  jal         func_2F9140
label_2f391c:
    if (ctx->pc == 0x2F391Cu) {
        ctx->pc = 0x2F391Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3918u;
        // 0x2f391c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3920u;
        goto label_2f3920;
    }
    ctx->pc = 0x2F3918u;
    SET_GPR_U32(ctx, 31, 0x2F3920u);
    ctx->pc = 0x2F391Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3918u;
    // 0x2f391c: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F3918u, 0x2F3920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3920u;
label_2f3920:
    // 0x2f3920: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f3924:
    if (ctx->pc == 0x2F3924u) {
        ctx->pc = 0x2F3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3920u;
        // 0x2f3924: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3928u;
        goto label_2f3928;
    }
    ctx->pc = 0x2F3920u;
    {
        const bool branch_taken_0x2f3920 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3920u;
        // 0x2f3924: 0xafa20024  sw          $v0, 0x24($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3920) {
            ctx->pc = 0x2F3938u;
            goto label_2f3938;
        }
    }
    ctx->pc = 0x2F3928u;
label_2f3928:
    // 0x2f3928: 0x2402fc16  addiu       $v0, $zero, -0x3EA
    ctx->pc = 0x2f3928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
label_2f392c:
    // 0x2f392c: 0x100003ad  b           . + 4 + (0x3AD << 2)
label_2f3930:
    if (ctx->pc == 0x2F3930u) {
        ctx->pc = 0x2F3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F392Cu;
        // 0x2f3930: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3934u;
        goto label_2f3934;
    }
    ctx->pc = 0x2F392Cu;
    {
        const bool branch_taken_0x2f392c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F392Cu;
        // 0x2f3930: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f392c) {
            ctx->pc = 0x2F47E4u;
            goto label_2f47e4;
        }
    }
    ctx->pc = 0x2F3934u;
label_2f3934:
    // 0x2f3934: 0x0  nop
    ctx->pc = 0x2f3934u;
    // NOP
label_2f3938:
    // 0x2f3938: 0x27a20004  addiu       $v0, $sp, 0x4
    ctx->pc = 0x2f3938u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 4));
label_2f393c:
    // 0x2f393c: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x2f393cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
label_2f3940:
    // 0x2f3940: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2f3940u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2f3944:
    // 0x2f3944: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f3948:
    // 0x2f3948: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2f3948u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2f394c:
    // 0x2f394c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f394cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3950:
    // 0x2f3950: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x2f3950u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
label_2f3954:
    // 0x2f3954: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2f3954u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f3958:
    // 0x2f3958: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x2f3958u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
label_2f395c:
    // 0x2f395c: 0x40482d  daddu       $t1, $v0, $zero
    ctx->pc = 0x2f395cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3960:
    // 0x2f3960: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x2f3960u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f3964:
    // 0x2f3964: 0xc0bcc3a  jal         func_2F30E8
label_2f3968:
    if (ctx->pc == 0x2F3968u) {
        ctx->pc = 0x2F3968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3964u;
        // 0x2f3968: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F396Cu;
        goto label_2f396c;
    }
    ctx->pc = 0x2F3964u;
    SET_GPR_U32(ctx, 31, 0x2F396Cu);
    ctx->pc = 0x2F3968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3964u;
    // 0x2f3968: 0x240b0001  addiu       $t3, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F30E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F30E8u, 0x2F3964u, 0x2F396Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F396Cu;
label_2f396c:
    // 0x2f396c: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2f396cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3970:
    // 0x2f3970: 0x6c00398  bltz        $s6, . + 4 + (0x398 << 2)
label_2f3974:
    if (ctx->pc == 0x2F3974u) {
        ctx->pc = 0x2F3978u;
        goto label_2f3978;
    }
    ctx->pc = 0x2F3970u;
    {
        const bool branch_taken_0x2f3970 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x2f3970) {
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F3978u;
label_2f3978:
    // 0x2f3978: 0xc0bc780  jal         func_2F1E00
label_2f397c:
    if (ctx->pc == 0x2F397Cu) {
        ctx->pc = 0x2F397Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3978u;
        // 0x2f397c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3980u;
        goto label_2f3980;
    }
    ctx->pc = 0x2F3978u;
    SET_GPR_U32(ctx, 31, 0x2F3980u);
    ctx->pc = 0x2F397Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3978u;
    // 0x2f397c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E00u, 0x2F3978u, 0x2F3980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3980u;
label_2f3980:
    // 0x2f3980: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2f3984:
    if (ctx->pc == 0x2F3984u) {
        ctx->pc = 0x2F3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3980u;
        // 0x2f3984: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3988u;
        goto label_2f3988;
    }
    ctx->pc = 0x2F3980u;
    {
        const bool branch_taken_0x2f3980 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3980u;
        // 0x2f3984: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3980) {
            ctx->pc = 0x2F39B0u;
            goto label_2f39b0;
        }
    }
    ctx->pc = 0x2F3988u;
label_2f3988:
    // 0x2f3988: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2f398c:
    if (ctx->pc == 0x2F398Cu) {
        ctx->pc = 0x2F3990u;
        goto label_2f3990;
    }
    ctx->pc = 0x2F3988u;
    {
        const bool branch_taken_0x2f3988 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3988) {
            ctx->pc = 0x2F3998u;
            goto label_2f3998;
        }
    }
    ctx->pc = 0x2F3990u;
label_2f3990:
    // 0x2f3990: 0xc0be45e  jal         func_2F9178
label_2f3994:
    if (ctx->pc == 0x2F3994u) {
        ctx->pc = 0x2F3998u;
        goto label_2f3998;
    }
    ctx->pc = 0x2F3990u;
    SET_GPR_U32(ctx, 31, 0x2F3998u);
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F3990u, 0x2F3998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3998u;
label_2f3998:
    // 0x2f3998: 0xc0be45e  jal         func_2F9178
label_2f399c:
    if (ctx->pc == 0x2F399Cu) {
        ctx->pc = 0x2F399Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3998u;
        // 0x2f399c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39A0u;
        goto label_2f39a0;
    }
    ctx->pc = 0x2F3998u;
    SET_GPR_U32(ctx, 31, 0x2F39A0u);
    ctx->pc = 0x2F399Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3998u;
    // 0x2f399c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F3998u, 0x2F39A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39A0u;
label_2f39a0:
    // 0x2f39a0: 0x2402fc0d  addiu       $v0, $zero, -0x3F3
    ctx->pc = 0x2f39a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
label_2f39a4:
    // 0x2f39a4: 0x1000038f  b           . + 4 + (0x38F << 2)
label_2f39a8:
    if (ctx->pc == 0x2F39A8u) {
        ctx->pc = 0x2F39A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39A4u;
        // 0x2f39a8: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39ACu;
        goto label_2f39ac;
    }
    ctx->pc = 0x2F39A4u;
    {
        const bool branch_taken_0x2f39a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39A4u;
        // 0x2f39a8: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39a4) {
            ctx->pc = 0x2F47E4u;
            goto label_2f47e4;
        }
    }
    ctx->pc = 0x2F39ACu;
label_2f39ac:
    // 0x2f39ac: 0x0  nop
    ctx->pc = 0x2f39acu;
    // NOP
label_2f39b0:
    // 0x2f39b0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x2f39b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f39b4:
    // 0x2f39b4: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f39b8:
    if (ctx->pc == 0x2F39B8u) {
        ctx->pc = 0x2F39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39B4u;
        // 0x2f39b8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39BCu;
        goto label_2f39bc;
    }
    ctx->pc = 0x2F39B4u;
    {
        const bool branch_taken_0x2f39b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39B4u;
        // 0x2f39b8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39b4) {
            ctx->pc = 0x2F39D8u;
            goto label_2f39d8;
        }
    }
    ctx->pc = 0x2F39BCu;
label_2f39bc:
    // 0x2f39bc: 0x27a50018  addiu       $a1, $sp, 0x18
    ctx->pc = 0x2f39bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2f39c0:
    // 0x2f39c0: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x2f39c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_2f39c4:
    // 0x2f39c4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f39c4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f39c8:
    // 0x2f39c8: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x2f39c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_2f39cc:
    // 0x2f39cc: 0xffa00050  sd          $zero, 0x50($sp)
    ctx->pc = 0x2f39ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
label_2f39d0:
    // 0x2f39d0: 0x10000331  b           . + 4 + (0x331 << 2)
label_2f39d4:
    if (ctx->pc == 0x2F39D4u) {
        ctx->pc = 0x2F39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39D0u;
        // 0x2f39d4: 0xafa50068  sw          $a1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F39D8u;
        goto label_2f39d8;
    }
    ctx->pc = 0x2F39D0u;
    {
        const bool branch_taken_0x2f39d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F39D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39D0u;
        // 0x2f39d4: 0xafa50068  sw          $a1, 0x68($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f39d0) {
            ctx->pc = 0x2F4698u;
            goto label_2f4698;
        }
    }
    ctx->pc = 0x2F39D8u;
label_2f39d8:
    // 0x2f39d8: 0xc0be37a  jal         func_2F8DE8
label_2f39dc:
    if (ctx->pc == 0x2F39DCu) {
        ctx->pc = 0x2F39E0u;
        goto label_2f39e0;
    }
    ctx->pc = 0x2F39D8u;
    SET_GPR_U32(ctx, 31, 0x2F39E0u);
    ctx->pc = 0x2F8DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F8DE8u, 0x2F39D8u, 0x2F39E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F39E0u;
label_2f39e0:
    // 0x2f39e0: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2f39e0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_2f39e4:
    // 0x2f39e4: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f39e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2f39e8:
    // 0x2f39e8: 0xae400034  sw          $zero, 0x34($s2)
    ctx->pc = 0x2f39e8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 0));
label_2f39ec:
    // 0x2f39ec: 0x24a51ce0  addiu       $a1, $a1, 0x1CE0
    ctx->pc = 0x2f39ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7392));
label_2f39f0:
    // 0x2f39f0: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2f39f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f39f4:
    // 0x2f39f4: 0x8c640014  lw          $a0, 0x14($v1)
    ctx->pc = 0x2f39f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
label_2f39f8:
    // 0x2f39f8: 0xc0bc7c2  jal         func_2F1F08
label_2f39fc:
    if (ctx->pc == 0x2F39FCu) {
        ctx->pc = 0x2F39FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F39F8u;
        // 0x2f39fc: 0xfc620030  sd          $v0, 0x30($v1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A00u;
        goto label_2f3a00;
    }
    ctx->pc = 0x2F39F8u;
    SET_GPR_U32(ctx, 31, 0x2F3A00u);
    ctx->pc = 0x2F39FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F39F8u;
    // 0x2f39fc: 0xfc620030  sd          $v0, 0x30($v1) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 3), 48), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1F08u, 0x2F39F8u, 0x2F3A00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A00u;
label_2f3a00:
    // 0x2f3a00: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3a00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3a04:
    // 0x2f3a04: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
label_2f3a08:
    if (ctx->pc == 0x2F3A08u) {
        ctx->pc = 0x2F3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A04u;
        // 0x2f3a08: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A0Cu;
        goto label_2f3a0c;
    }
    ctx->pc = 0x2F3A04u;
    {
        const bool branch_taken_0x2f3a04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A04u;
        // 0x2f3a08: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a04) {
            ctx->pc = 0x2F3A8Cu;
            goto label_2f3a8c;
        }
    }
    ctx->pc = 0x2F3A0Cu;
label_2f3a0c:
    // 0x2f3a0c: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2f3a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f3a10:
    // 0x2f3a10: 0xc0bd9e4  jal         func_2F6790
label_2f3a14:
    if (ctx->pc == 0x2F3A14u) {
        ctx->pc = 0x2F3A14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A10u;
        // 0x2f3a14: 0x24a51de0  addiu       $a1, $a1, 0x1DE0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7648));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A18u;
        goto label_2f3a18;
    }
    ctx->pc = 0x2F3A10u;
    SET_GPR_U32(ctx, 31, 0x2F3A18u);
    ctx->pc = 0x2F3A14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A10u;
    // 0x2f3a14: 0x24a51de0  addiu       $a1, $a1, 0x1DE0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7648));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6790u, 0x2F3A10u, 0x2F3A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A18u;
label_2f3a18:
    // 0x2f3a18: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f3a1c:
    if (ctx->pc == 0x2F3A1Cu) {
        ctx->pc = 0x2F3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A18u;
        // 0x2f3a1c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A20u;
        goto label_2f3a20;
    }
    ctx->pc = 0x2F3A18u;
    {
        const bool branch_taken_0x2f3a18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A18u;
        // 0x2f3a1c: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a18) {
            ctx->pc = 0x2F3A30u;
            goto label_2f3a30;
        }
    }
    ctx->pc = 0x2F3A20u;
label_2f3a20:
    // 0x2f3a20: 0x8e420160  lw          $v0, 0x160($s2)
    ctx->pc = 0x2f3a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 352)));
label_2f3a24:
    // 0x2f3a24: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x2f3a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_2f3a28:
    // 0x2f3a28: 0x10000025  b           . + 4 + (0x25 << 2)
label_2f3a2c:
    if (ctx->pc == 0x2F3A2Cu) {
        ctx->pc = 0x2F3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A28u;
        // 0x2f3a2c: 0xae420160  sw          $v0, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A30u;
        goto label_2f3a30;
    }
    ctx->pc = 0x2F3A28u;
    {
        const bool branch_taken_0x2f3a28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A28u;
        // 0x2f3a2c: 0xae420160  sw          $v0, 0x160($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 352), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a28) {
            ctx->pc = 0x2F3AC0u;
            goto label_2f3ac0;
        }
    }
    ctx->pc = 0x2F3A30u;
label_2f3a30:
    // 0x2f3a30: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2f3a30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f3a34:
    // 0x2f3a34: 0xc0bd9e4  jal         func_2F6790
label_2f3a38:
    if (ctx->pc == 0x2F3A38u) {
        ctx->pc = 0x2F3A38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A34u;
        // 0x2f3a38: 0x24a51de8  addiu       $a1, $a1, 0x1DE8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7656));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A3Cu;
        goto label_2f3a3c;
    }
    ctx->pc = 0x2F3A34u;
    SET_GPR_U32(ctx, 31, 0x2F3A3Cu);
    ctx->pc = 0x2F3A38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A34u;
    // 0x2f3a38: 0x24a51de8  addiu       $a1, $a1, 0x1DE8 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7656));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6790u, 0x2F3A34u, 0x2F3A3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A3Cu;
label_2f3a3c:
    // 0x2f3a3c: 0x54400021  bnel        $v0, $zero, . + 4 + (0x21 << 2)
label_2f3a40:
    if (ctx->pc == 0x2F3A40u) {
        ctx->pc = 0x2F3A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A3Cu;
        // 0x2f3a40: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A44u;
        goto label_2f3a44;
    }
    ctx->pc = 0x2F3A3Cu;
    {
        const bool branch_taken_0x2f3a3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3a3c) {
            ctx->pc = 0x2F3A40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3A3Cu;
            // 0x2f3a40: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3AC4u;
            goto label_2f3ac4;
        }
    }
    ctx->pc = 0x2F3A44u;
label_2f3a44:
    // 0x2f3a44: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x2f3a44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f3a48:
    // 0x2f3a48: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x2f3a48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
label_2f3a4c:
    // 0x2f3a4c: 0x24a51cf0  addiu       $a1, $a1, 0x1CF0
    ctx->pc = 0x2f3a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 7408));
label_2f3a50:
    // 0x2f3a50: 0xc0bc7c2  jal         func_2F1F08
label_2f3a54:
    if (ctx->pc == 0x2F3A54u) {
        ctx->pc = 0x2F3A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A50u;
        // 0x2f3a54: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A58u;
        goto label_2f3a58;
    }
    ctx->pc = 0x2F3A50u;
    SET_GPR_U32(ctx, 31, 0x2F3A58u);
    ctx->pc = 0x2F3A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A50u;
    // 0x2f3a54: 0x8c440014  lw          $a0, 0x14($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1F08u, 0x2F3A50u, 0x2F3A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A58u;
label_2f3a58:
    // 0x2f3a58: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3a58u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3a5c:
    // 0x2f3a5c: 0x12000015  beqz        $s0, . + 4 + (0x15 << 2)
label_2f3a60:
    if (ctx->pc == 0x2F3A60u) {
        ctx->pc = 0x2F3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A5Cu;
        // 0x2f3a60: 0x37a5000c  ori         $a1, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A64u;
        goto label_2f3a64;
    }
    ctx->pc = 0x2F3A5Cu;
    {
        const bool branch_taken_0x2f3a5c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A5Cu;
        // 0x2f3a60: 0x37a5000c  ori         $a1, $sp, 0xC (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a5c) {
            ctx->pc = 0x2F3AB4u;
            goto label_2f3ab4;
        }
    }
    ctx->pc = 0x2F3A64u;
label_2f3a64:
    // 0x2f3a64: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2f3a64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f3a68:
    // 0x2f3a68: 0xc0bcd12  jal         func_2F3448
label_2f3a6c:
    if (ctx->pc == 0x2F3A6Cu) {
        ctx->pc = 0x2F3A6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A68u;
        // 0x2f3a6c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A70u;
        goto label_2f3a70;
    }
    ctx->pc = 0x2F3A68u;
    SET_GPR_U32(ctx, 31, 0x2F3A70u);
    ctx->pc = 0x2F3A6Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3A68u;
    // 0x2f3a6c: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3448u, 0x2F3A68u, 0x2F3A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3A70u;
label_2f3a70:
    // 0x2f3a70: 0x54400014  bnel        $v0, $zero, . + 4 + (0x14 << 2)
label_2f3a74:
    if (ctx->pc == 0x2F3A74u) {
        ctx->pc = 0x2F3A74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A70u;
        // 0x2f3a74: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A78u;
        goto label_2f3a78;
    }
    ctx->pc = 0x2F3A70u;
    {
        const bool branch_taken_0x2f3a70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3a70) {
            ctx->pc = 0x2F3A74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3A70u;
            // 0x2f3a74: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3AC4u;
            goto label_2f3ac4;
        }
    }
    ctx->pc = 0x2F3A78u;
label_2f3a78:
    // 0x2f3a78: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x2f3a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_2f3a7c:
    // 0x2f3a7c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x2f3a7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_2f3a80:
    // 0x2f3a80: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2f3a80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2f3a84:
    // 0x2f3a84: 0x1000000e  b           . + 4 + (0xE << 2)
label_2f3a88:
    if (ctx->pc == 0x2F3A88u) {
        ctx->pc = 0x2F3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A84u;
        // 0x2f3a88: 0xae430034  sw          $v1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A8Cu;
        goto label_2f3a8c;
    }
    ctx->pc = 0x2F3A84u;
    {
        const bool branch_taken_0x2f3a84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A84u;
        // 0x2f3a88: 0xae430034  sw          $v1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3a84) {
            ctx->pc = 0x2F3AC0u;
            goto label_2f3ac0;
        }
    }
    ctx->pc = 0x2F3A8Cu;
label_2f3a8c:
    // 0x2f3a8c: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x2f3a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
label_2f3a90:
    // 0x2f3a90: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3a94:
    // 0x2f3a94: 0x5462000b  bnel        $v1, $v0, . + 4 + (0xB << 2)
label_2f3a98:
    if (ctx->pc == 0x2F3A98u) {
        ctx->pc = 0x2F3A98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3A94u;
        // 0x2f3a98: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3A9Cu;
        goto label_2f3a9c;
    }
    ctx->pc = 0x2F3A94u;
    {
        const bool branch_taken_0x2f3a94 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3a94) {
            ctx->pc = 0x2F3A98u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3A94u;
            // 0x2f3a98: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3AC4u;
            goto label_2f3ac4;
        }
    }
    ctx->pc = 0x2F3A9Cu;
label_2f3a9c:
    // 0x2f3a9c: 0xde4300e0  ld          $v1, 0xE0($s2)
    ctx->pc = 0x2f3a9cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 224)));
label_2f3aa0:
    // 0x2f3aa0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3aa4:
    // 0x2f3aa4: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2f3aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
label_2f3aa8:
    // 0x2f3aa8: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x2f3aa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
label_2f3aac:
    // 0x2f3aac: 0x54620005  bnel        $v1, $v0, . + 4 + (0x5 << 2)
label_2f3ab0:
    if (ctx->pc == 0x2F3AB0u) {
        ctx->pc = 0x2F3AB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AACu;
        // 0x2f3ab0: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3AB4u;
        goto label_2f3ab4;
    }
    ctx->pc = 0x2F3AACu;
    {
        const bool branch_taken_0x2f3aac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x2f3aac) {
            ctx->pc = 0x2F3AB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3AACu;
            // 0x2f3ab0: 0x8e4300b4  lw          $v1, 0xB4($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3AC4u;
            goto label_2f3ac4;
        }
    }
    ctx->pc = 0x2F3AB4u;
label_2f3ab4:
    // 0x2f3ab4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f3ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3ab8:
    // 0x2f3ab8: 0xae420034  sw          $v0, 0x34($s2)
    ctx->pc = 0x2f3ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 2));
label_2f3abc:
    // 0x2f3abc: 0xae420030  sw          $v0, 0x30($s2)
    ctx->pc = 0x2f3abcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 2));
label_2f3ac0:
    // 0x2f3ac0: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2f3ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_2f3ac4:
    // 0x2f3ac4: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2f3ac4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2f3ac8:
    // 0x2f3ac8: 0x10620330  beq         $v1, $v0, . + 4 + (0x330 << 2)
label_2f3acc:
    if (ctx->pc == 0x2F3ACCu) {
        ctx->pc = 0x2F3AD0u;
        goto label_2f3ad0;
    }
    ctx->pc = 0x2F3AC8u;
    {
        const bool branch_taken_0x2f3ac8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f3ac8) {
            ctx->pc = 0x2F478Cu;
            goto label_2f478c;
        }
    }
    ctx->pc = 0x2F3AD0u;
label_2f3ad0:
    // 0x2f3ad0: 0xc0bcbea  jal         func_2F2FA8
label_2f3ad4:
    if (ctx->pc == 0x2F3AD4u) {
        ctx->pc = 0x2F3AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AD0u;
        // 0x2f3ad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3AD8u;
        goto label_2f3ad8;
    }
    ctx->pc = 0x2F3AD0u;
    SET_GPR_U32(ctx, 31, 0x2F3AD8u);
    ctx->pc = 0x2F3AD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3AD0u;
    // 0x2f3ad4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2FA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2FA8u, 0x2F3AD0u, 0x2F3AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AD8u;
label_2f3ad8:
    // 0x2f3ad8: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2f3adc:
    if (ctx->pc == 0x2F3ADCu) {
        ctx->pc = 0x2F3ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AD8u;
        // 0x2f3adc: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3AE0u;
        goto label_2f3ae0;
    }
    ctx->pc = 0x2F3AD8u;
    {
        const bool branch_taken_0x2f3ad8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3ad8) {
            ctx->pc = 0x2F3ADCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3AD8u;
            // 0x2f3adc: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3AF4u;
            goto label_2f3af4;
        }
    }
    ctx->pc = 0x2F3AE0u;
label_2f3ae0:
    // 0x2f3ae0: 0xc0bcc12  jal         func_2F3048
label_2f3ae4:
    if (ctx->pc == 0x2F3AE4u) {
        ctx->pc = 0x2F3AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AE0u;
        // 0x2f3ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3AE8u;
        goto label_2f3ae8;
    }
    ctx->pc = 0x2F3AE0u;
    SET_GPR_U32(ctx, 31, 0x2F3AE8u);
    ctx->pc = 0x2F3AE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3AE0u;
    // 0x2f3ae4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3048u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3048u, 0x2F3AE0u, 0x2F3AE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3AE8u;
label_2f3ae8:
    // 0x2f3ae8: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
label_2f3aec:
    if (ctx->pc == 0x2F3AECu) {
        ctx->pc = 0x2F3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AE8u;
        // 0x2f3aec: 0xffa20050  sd          $v0, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3AF0u;
        goto label_2f3af0;
    }
    ctx->pc = 0x2F3AE8u;
    {
        const bool branch_taken_0x2f3ae8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3AECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3AE8u;
        // 0x2f3aec: 0xffa20050  sd          $v0, 0x50($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ae8) {
            ctx->pc = 0x2F3B28u;
            goto label_2f3b28;
        }
    }
    ctx->pc = 0x2F3AF0u;
label_2f3af0:
    // 0x2f3af0: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2f3af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f3af4:
    // 0x2f3af4: 0x10400325  beqz        $v0, . + 4 + (0x325 << 2)
label_2f3af8:
    if (ctx->pc == 0x2F3AF8u) {
        ctx->pc = 0x2F3AFCu;
        goto label_2f3afc;
    }
    ctx->pc = 0x2F3AF4u;
    {
        const bool branch_taken_0x2f3af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3af4) {
            ctx->pc = 0x2F478Cu;
            goto label_2f478c;
        }
    }
    ctx->pc = 0x2F3AFCu;
label_2f3afc:
    // 0x2f3afc: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f3afcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b00:
    // 0x2f3b00: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2f3b00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2f3b04:
    // 0x2f3b04: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f3b04u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b08:
    // 0x2f3b08: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x2f3b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f3b0c:
    // 0x2f3b0c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3b0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b10:
    // 0x2f3b10: 0x8e46007c  lw          $a2, 0x7C($s2)
    ctx->pc = 0x2f3b10u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
label_2f3b14:
    // 0x2f3b14: 0x60f809  jalr        $v1
label_2f3b18:
    if (ctx->pc == 0x2F3B18u) {
        ctx->pc = 0x2F3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B14u;
        // 0x2f3b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B1Cu;
        goto label_2f3b1c;
    }
    ctx->pc = 0x2F3B14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3B1Cu);
        ctx->pc = 0x2F3B18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B14u;
        // 0x2f3b18: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3B14u, 0x2F3B1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3B1Cu;
label_2f3b1c:
    // 0x2f3b1c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f3b1cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b20:
    // 0x2f3b20: 0x1000031a  b           . + 4 + (0x31A << 2)
label_2f3b24:
    if (ctx->pc == 0x2F3B24u) {
        ctx->pc = 0x2F3B28u;
        goto label_2f3b28;
    }
    ctx->pc = 0x2F3B20u;
    {
        const bool branch_taken_0x2f3b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3b20) {
            ctx->pc = 0x2F478Cu;
            goto label_2f478c;
        }
    }
    ctx->pc = 0x2F3B28u;
label_2f3b28:
    // 0x2f3b28: 0x3c130040  lui         $s3, 0x40
    ctx->pc = 0x2f3b28u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)64 << 16));
label_2f3b2c:
    // 0x2f3b2c: 0x3c110040  lui         $s1, 0x40
    ctx->pc = 0x2f3b2cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)64 << 16));
label_2f3b30:
    // 0x2f3b30: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2f3b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f3b34:
    // 0x2f3b34: 0x0  nop
    ctx->pc = 0x2f3b34u;
    // NOP
label_2f3b38:
    // 0x2f3b38: 0x26651df8  addiu       $a1, $s3, 0x1DF8
    ctx->pc = 0x2f3b38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 7672));
label_2f3b3c:
    // 0x2f3b3c: 0xc0bc7c2  jal         func_2F1F08
label_2f3b40:
    if (ctx->pc == 0x2F3B40u) {
        ctx->pc = 0x2F3B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B3Cu;
        // 0x2f3b40: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B44u;
        goto label_2f3b44;
    }
    ctx->pc = 0x2F3B3Cu;
    SET_GPR_U32(ctx, 31, 0x2F3B44u);
    ctx->pc = 0x2F3B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B3Cu;
    // 0x2f3b40: 0x8c640014  lw          $a0, 0x14($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1F08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1F08u, 0x2F3B3Cu, 0x2F3B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B44u;
label_2f3b44:
    // 0x2f3b44: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2f3b44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b48:
    // 0x2f3b48: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_2f3b4c:
    if (ctx->pc == 0x2F3B4Cu) {
        ctx->pc = 0x2F3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B48u;
        // 0x2f3b4c: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B50u;
        goto label_2f3b50;
    }
    ctx->pc = 0x2F3B48u;
    {
        const bool branch_taken_0x2f3b48 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B48u;
        // 0x2f3b4c: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b48) {
            ctx->pc = 0x2F3B70u;
            goto label_2f3b70;
        }
    }
    ctx->pc = 0x2F3B50u;
label_2f3b50:
    // 0x2f3b50: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x2f3b50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_2f3b54:
    // 0x2f3b54: 0xc0bd9e4  jal         func_2F6790
label_2f3b58:
    if (ctx->pc == 0x2F3B58u) {
        ctx->pc = 0x2F3B58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B54u;
        // 0x2f3b58: 0x26251e10  addiu       $a1, $s1, 0x1E10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 7696));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B5Cu;
        goto label_2f3b5c;
    }
    ctx->pc = 0x2F3B54u;
    SET_GPR_U32(ctx, 31, 0x2F3B5Cu);
    ctx->pc = 0x2F3B58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B54u;
    // 0x2f3b58: 0x26251e10  addiu       $a1, $s1, 0x1E10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 7696));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F6790u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F6790u, 0x2F3B54u, 0x2F3B5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3B5Cu;
label_2f3b5c:
    // 0x2f3b5c: 0x1440fff6  bnez        $v0, . + 4 + (-0xA << 2)
label_2f3b60:
    if (ctx->pc == 0x2F3B60u) {
        ctx->pc = 0x2F3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B5Cu;
        // 0x2f3b60: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B64u;
        goto label_2f3b64;
    }
    ctx->pc = 0x2F3B5Cu;
    {
        const bool branch_taken_0x2f3b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B5Cu;
        // 0x2f3b60: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b5c) {
            ctx->pc = 0x2F3B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3b38;
        }
    }
    ctx->pc = 0x2F3B64u;
label_2f3b64:
    // 0x2f3b64: 0xffa00050  sd          $zero, 0x50($sp)
    ctx->pc = 0x2f3b64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 0));
label_2f3b68:
    // 0x2f3b68: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x2f3b68u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3b6c:
    // 0x2f3b6c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2f3b6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2f3b70:
    // 0x2f3b70: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f3b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3b74:
    // 0x2f3b74: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_2f3b78:
    if (ctx->pc == 0x2F3B78u) {
        ctx->pc = 0x2F3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B74u;
        // 0x2f3b78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B7Cu;
        goto label_2f3b7c;
    }
    ctx->pc = 0x2F3B74u;
    {
        const bool branch_taken_0x2f3b74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B74u;
        // 0x2f3b78: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b74) {
            ctx->pc = 0x2F3B98u;
            goto label_2f3b98;
        }
    }
    ctx->pc = 0x2F3B7Cu;
label_2f3b7c:
    // 0x2f3b7c: 0x9e42008c  lwu         $v0, 0x8C($s2)
    ctx->pc = 0x2f3b7cu;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2f3b80:
    // 0x2f3b80: 0xdfa50050  ld          $a1, 0x50($sp)
    ctx->pc = 0x2f3b80u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3b84:
    // 0x2f3b84: 0x45102a  slt         $v0, $v0, $a1
    ctx->pc = 0x2f3b84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
label_2f3b88:
    // 0x2f3b88: 0x14400172  bnez        $v0, . + 4 + (0x172 << 2)
label_2f3b8c:
    if (ctx->pc == 0x2F3B8Cu) {
        ctx->pc = 0x2F3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B88u;
        // 0x2f3b8c: 0x2402fc16  addiu       $v0, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3B90u;
        goto label_2f3b90;
    }
    ctx->pc = 0x2F3B88u;
    {
        const bool branch_taken_0x2f3b88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3B8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B88u;
        // 0x2f3b8c: 0x2402fc16  addiu       $v0, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3b88) {
            ctx->pc = 0x2F4154u;
            goto label_2f4154;
        }
    }
    ctx->pc = 0x2F3B90u;
label_2f3b90:
    // 0x2f3b90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3b90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f3b94:
    // 0x2f3b94: 0x0  nop
    ctx->pc = 0x2f3b94u;
    // NOP
label_2f3b98:
    // 0x2f3b98: 0xc0bc77c  jal         func_2F1DF0
label_2f3b9c:
    if (ctx->pc == 0x2F3B9Cu) {
        ctx->pc = 0x2F3B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3B98u;
        // 0x2f3b9c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3BA0u;
        goto label_2f3ba0;
    }
    ctx->pc = 0x2F3B98u;
    SET_GPR_U32(ctx, 31, 0x2F3BA0u);
    ctx->pc = 0x2F3B9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3B98u;
    // 0x2f3b9c: 0xafa00040  sw          $zero, 0x40($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF0u, 0x2F3B98u, 0x2F3BA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3BA0u;
label_2f3ba0:
    // 0x2f3ba0: 0xdfa40050  ld          $a0, 0x50($sp)
    ctx->pc = 0x2f3ba0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3ba4:
    // 0x2f3ba4: 0x27a30018  addiu       $v1, $sp, 0x18
    ctx->pc = 0x2f3ba4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
label_2f3ba8:
    // 0x2f3ba8: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x2f3ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f3bac:
    // 0x2f3bac: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f3bacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3bb0:
    // 0x2f3bb0: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x2f3bb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
label_2f3bb4:
    // 0x2f3bb4: 0x95100a  movz        $v0, $a0, $s5
    ctx->pc = 0x2f3bb4u;
    if (GPR_U64(ctx, 21) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_2f3bb8:
    // 0x2f3bb8: 0xfca20038  sd          $v0, 0x38($a1)
    ctx->pc = 0x2f3bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 56), GPR_U64(ctx, 2));
label_2f3bbc:
    // 0x2f3bbc: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f3bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3bc0:
    // 0x2f3bc0: 0xfca00020  sd          $zero, 0x20($a1)
    ctx->pc = 0x2f3bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 0));
label_2f3bc4:
    // 0x2f3bc4: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x2f3bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f3bc8:
    // 0x2f3bc8: 0x1083002b  beq         $a0, $v1, . + 4 + (0x2B << 2)
label_2f3bcc:
    if (ctx->pc == 0x2F3BCCu) {
        ctx->pc = 0x2F3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BC8u;
        // 0x2f3bcc: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3BD0u;
        goto label_2f3bd0;
    }
    ctx->pc = 0x2F3BC8u;
    {
        const bool branch_taken_0x2f3bc8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F3BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BC8u;
        // 0x2f3bcc: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3bc8) {
            ctx->pc = 0x2F3C78u;
            goto label_2f3c78;
        }
    }
    ctx->pc = 0x2F3BD0u;
label_2f3bd0:
    // 0x2f3bd0: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2f3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f3bd4:
    // 0x2f3bd4: 0xdc460020  ld          $a2, 0x20($v0)
    ctx->pc = 0x2f3bd4u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_2f3bd8:
    // 0x2f3bd8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f3bd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f3bdc:
    // 0x2f3bdc: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f3bdcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f3be0:
    // 0x2f3be0: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_2f3be4:
    if (ctx->pc == 0x2F3BE4u) {
        ctx->pc = 0x2F3BE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3BE0u;
        // 0x2f3be4: 0xdfa50050  ld          $a1, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3BE8u;
        goto label_2f3be8;
    }
    ctx->pc = 0x2F3BE0u;
    {
        const bool branch_taken_0x2f3be0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3be0) {
            ctx->pc = 0x2F3BE4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3BE0u;
            // 0x2f3be4: 0xdfa50050  ld          $a1, 0x50($sp) (Delay Slot)
            SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 80)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3C64u;
            goto label_2f3c64;
        }
    }
    ctx->pc = 0x2F3BE8u;
label_2f3be8:
    // 0x2f3be8: 0xdfa30050  ld          $v1, 0x50($sp)
    ctx->pc = 0x2f3be8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3bec:
    // 0x2f3bec: 0x3a03c  dsll32      $s4, $v1, 0
    ctx->pc = 0x2f3becu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 3) << (32 + 0));
label_2f3bf0:
    // 0x2f3bf0: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x2f3bf0u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_2f3bf4:
    // 0x2f3bf4: 0x28730001  slti        $s3, $v1, 0x1
    ctx->pc = 0x2f3bf4u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)1) ? 1 : 0);
label_2f3bf8:
    // 0x2f3bf8: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2f3bf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f3bfc:
    // 0x2f3bfc: 0x0  nop
    ctx->pc = 0x2f3bfcu;
    // NOP
label_2f3c00:
    // 0x2f3c00: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2f3c04:
    if (ctx->pc == 0x2F3C04u) {
        ctx->pc = 0x2F3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C00u;
        // 0x2f3c04: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C08u;
        goto label_2f3c08;
    }
    ctx->pc = 0x2F3C00u;
    {
        const bool branch_taken_0x2f3c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C00u;
        // 0x2f3c04: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c00) {
            ctx->pc = 0x2F3C48u;
            goto label_2f3c48;
        }
    }
    ctx->pc = 0x2F3C08u;
label_2f3c08:
    // 0x2f3c08: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2f3c08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_2f3c0c:
    // 0x2f3c0c: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_2f3c10:
    if (ctx->pc == 0x2F3C10u) {
        ctx->pc = 0x2F3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C0Cu;
        // 0x2f3c10: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C14u;
        goto label_2f3c14;
    }
    ctx->pc = 0x2F3C0Cu;
    {
        const bool branch_taken_0x2f3c0c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3C10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C0Cu;
        // 0x2f3c10: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c0c) {
            ctx->pc = 0x2F3C48u;
            goto label_2f3c48;
        }
    }
    ctx->pc = 0x2F3C14u;
label_2f3c14:
    // 0x2f3c14: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f3c14u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f3c18:
    // 0x2f3c18: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x2f3c18u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_2f3c1c:
    // 0x2f3c1c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f3c1cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c20:
    // 0x2f3c20: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2f3c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2f3c24:
    // 0x2f3c24: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f3c24u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c28:
    // 0x2f3c28: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x2f3c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f3c2c:
    // 0x2f3c2c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3c2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c30:
    // 0x2f3c30: 0x60f809  jalr        $v1
label_2f3c34:
    if (ctx->pc == 0x2F3C34u) {
        ctx->pc = 0x2F3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C30u;
        // 0x2f3c34: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C38u;
        goto label_2f3c38;
    }
    ctx->pc = 0x2F3C30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3C38u);
        ctx->pc = 0x2F3C34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C30u;
        // 0x2f3c34: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3C30u, 0x2F3C38u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3C38u;
label_2f3c38:
    // 0x2f3c38: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f3c38u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c3c:
    // 0x2f3c3c: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2f3c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f3c40:
    // 0x2f3c40: 0xdc860020  ld          $a2, 0x20($a0)
    ctx->pc = 0x2f3c40u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 32)));
label_2f3c44:
    // 0x2f3c44: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x2f3c44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f3c48:
    // 0x2f3c48: 0x224882d  daddu       $s1, $s1, $a0
    ctx->pc = 0x2f3c48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
label_2f3c4c:
    // 0x2f3c4c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f3c4cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c50:
    // 0x2f3c50: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f3c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f3c54:
    // 0x2f3c54: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
label_2f3c58:
    if (ctx->pc == 0x2F3C58u) {
        ctx->pc = 0x2F3C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C54u;
        // 0x2f3c58: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C5Cu;
        goto label_2f3c5c;
    }
    ctx->pc = 0x2F3C54u;
    {
        const bool branch_taken_0x2f3c54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3c54) {
            ctx->pc = 0x2F3C58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3C54u;
            // 0x2f3c58: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3c00;
        }
    }
    ctx->pc = 0x2F3C5Cu;
label_2f3c5c:
    // 0x2f3c5c: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f3c60:
    if (ctx->pc == 0x2F3C60u) {
        ctx->pc = 0x2F3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C5Cu;
        // 0x2f3c60: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C64u;
        goto label_2f3c64;
    }
    ctx->pc = 0x2F3C5Cu;
    {
        const bool branch_taken_0x2f3c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C5Cu;
        // 0x2f3c60: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c5c) {
            ctx->pc = 0x2F3C88u;
            goto label_2f3c88;
        }
    }
    ctx->pc = 0x2F3C64u;
label_2f3c64:
    // 0x2f3c64: 0x5a03c  dsll32      $s4, $a1, 0
    ctx->pc = 0x2f3c64u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 5) << (32 + 0));
label_2f3c68:
    // 0x2f3c68: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x2f3c68u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_2f3c6c:
    // 0x2f3c6c: 0x28b30001  slti        $s3, $a1, 0x1
    ctx->pc = 0x2f3c6cu;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)1) ? 1 : 0);
label_2f3c70:
    // 0x2f3c70: 0x10000005  b           . + 4 + (0x5 << 2)
label_2f3c74:
    if (ctx->pc == 0x2F3C74u) {
        ctx->pc = 0x2F3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C70u;
        // 0x2f3c74: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3C78u;
        goto label_2f3c78;
    }
    ctx->pc = 0x2F3C70u;
    {
        const bool branch_taken_0x2f3c70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3C70u;
        // 0x2f3c74: 0xffb10018  sd          $s1, 0x18($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3c70) {
            ctx->pc = 0x2F3C88u;
            goto label_2f3c88;
        }
    }
    ctx->pc = 0x2F3C78u;
label_2f3c78:
    // 0x2f3c78: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x2f3c78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3c7c:
    // 0x2f3c7c: 0x2a03c  dsll32      $s4, $v0, 0
    ctx->pc = 0x2f3c7cu;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 2) << (32 + 0));
label_2f3c80:
    // 0x2f3c80: 0x14a03f  dsra32      $s4, $s4, 0
    ctx->pc = 0x2f3c80u;
    SET_GPR_S64(ctx, 20, GPR_S64(ctx, 20) >> (32 + 0));
label_2f3c84:
    // 0x2f3c84: 0x28530001  slti        $s3, $v0, 0x1
    ctx->pc = 0x2f3c84u;
    SET_GPR_U64(ctx, 19, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)1) ? 1 : 0);
label_2f3c88:
    // 0x2f3c88: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2f3c88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3c8c:
    // 0x2f3c8c: 0x280b82d  daddu       $s7, $s4, $zero
    ctx->pc = 0x2f3c8cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f3c90:
    // 0x2f3c90: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x2f3c90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3c94:
    // 0x2f3c94: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2f3c94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2f3c98:
    // 0x2f3c98: 0x73b80b  movn        $s7, $v1, $s3
    ctx->pc = 0x2f3c98u;
    if (GPR_U64(ctx, 19) != 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
label_2f3c9c:
    // 0x2f3c9c: 0xafa00028  sw          $zero, 0x28($sp)
    ctx->pc = 0x2f3c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 0));
label_2f3ca0:
    // 0x2f3ca0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x2f3ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2f3ca4:
    // 0x2f3ca4: 0x16a00079  bnez        $s5, . + 4 + (0x79 << 2)
label_2f3ca8:
    if (ctx->pc == 0x2F3CA8u) {
        ctx->pc = 0x2F3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CA4u;
        // 0x2f3ca8: 0x2c29823  subu        $s3, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3CACu;
        goto label_2f3cac;
    }
    ctx->pc = 0x2F3CA4u;
    {
        const bool branch_taken_0x2f3ca4 = (GPR_U64(ctx, 21) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CA4u;
        // 0x2f3ca8: 0x2c29823  subu        $s3, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ca4) {
            ctx->pc = 0x2F3E8Cu;
            goto label_2f3e8c;
        }
    }
    ctx->pc = 0x2F3CACu;
label_2f3cac:
    // 0x2f3cac: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2f3cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2f3cb0:
    // 0x2f3cb0: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f3cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3cb4:
    // 0x2f3cb4: 0x14a20006  bne         $a1, $v0, . + 4 + (0x6 << 2)
label_2f3cb8:
    if (ctx->pc == 0x2F3CB8u) {
        ctx->pc = 0x2F3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CB4u;
        // 0x2f3cb8: 0xdfa20050  ld          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3CBCu;
        goto label_2f3cbc;
    }
    ctx->pc = 0x2F3CB4u;
    {
        const bool branch_taken_0x2f3cb4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3CB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CB4u;
        // 0x2f3cb8: 0xdfa20050  ld          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cb4) {
            ctx->pc = 0x2F3CD0u;
            goto label_2f3cd0;
        }
    }
    ctx->pc = 0x2F3CBCu;
label_2f3cbc:
    // 0x2f3cbc: 0xc0be450  jal         func_2F9140
label_2f3cc0:
    if (ctx->pc == 0x2F3CC0u) {
        ctx->pc = 0x2F3CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CBCu;
        // 0x2f3cc0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3CC4u;
        goto label_2f3cc4;
    }
    ctx->pc = 0x2F3CBCu;
    SET_GPR_U32(ctx, 31, 0x2F3CC4u);
    ctx->pc = 0x2F3CC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3CBCu;
    // 0x2f3cc0: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F3CBCu, 0x2F3CC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3CC4u;
label_2f3cc4:
    // 0x2f3cc4: 0x10400122  beqz        $v0, . + 4 + (0x122 << 2)
label_2f3cc8:
    if (ctx->pc == 0x2F3CC8u) {
        ctx->pc = 0x2F3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CC4u;
        // 0x2f3cc8: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3CCCu;
        goto label_2f3ccc;
    }
    ctx->pc = 0x2F3CC4u;
    {
        const bool branch_taken_0x2f3cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CC4u;
        // 0x2f3cc8: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cc4) {
            ctx->pc = 0x2F4150u;
            goto label_2f4150;
        }
    }
    ctx->pc = 0x2F3CCCu;
label_2f3ccc:
    // 0x2f3ccc: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x2f3cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3cd0:
    // 0x2f3cd0: 0x1840001e  blez        $v0, . + 4 + (0x1E << 2)
label_2f3cd4:
    if (ctx->pc == 0x2F3CD4u) {
        ctx->pc = 0x2F3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CD0u;
        // 0x2f3cd4: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3CD8u;
        goto label_2f3cd8;
    }
    ctx->pc = 0x2F3CD0u;
    {
        const bool branch_taken_0x2f3cd0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F3CD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CD0u;
        // 0x2f3cd4: 0x260882d  daddu       $s1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cd0) {
            ctx->pc = 0x2F3D4Cu;
            goto label_2f3d4c;
        }
    }
    ctx->pc = 0x2F3CD8u;
label_2f3cd8:
    // 0x2f3cd8: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x2f3cd8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f3cdc:
    // 0x2f3cdc: 0x1440001b  bnez        $v0, . + 4 + (0x1B << 2)
label_2f3ce0:
    if (ctx->pc == 0x2F3CE0u) {
        ctx->pc = 0x2F3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CDCu;
        // 0x2f3ce0: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3CE4u;
        goto label_2f3ce4;
    }
    ctx->pc = 0x2F3CDCu;
    {
        const bool branch_taken_0x2f3cdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CDCu;
        // 0x2f3ce0: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3cdc) {
            ctx->pc = 0x2F3D4Cu;
            goto label_2f3d4c;
        }
    }
    ctx->pc = 0x2F3CE4u;
label_2f3ce4:
    // 0x2f3ce4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f3ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3ce8:
    // 0x2f3ce8: 0x10620011  beq         $v1, $v0, . + 4 + (0x11 << 2)
label_2f3cec:
    if (ctx->pc == 0x2F3CECu) {
        ctx->pc = 0x2F3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CE8u;
        // 0x2f3cec: 0xafb40040  sw          $s4, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3CF0u;
        goto label_2f3cf0;
    }
    ctx->pc = 0x2F3CE8u;
    {
        const bool branch_taken_0x2f3ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3CE8u;
        // 0x2f3cec: 0xafb40040  sw          $s4, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ce8) {
            ctx->pc = 0x2F3D30u;
            goto label_2f3d30;
        }
    }
    ctx->pc = 0x2F3CF0u;
label_2f3cf0:
    // 0x2f3cf0: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2f3cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3cf4:
    // 0x2f3cf4: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x2f3cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_2f3cf8:
    // 0x2f3cf8: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f3cf8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f3cfc:
    // 0x2f3cfc: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2f3cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2f3d00:
    // 0x2f3d00: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f3d00u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f3d04:
    // 0x2f3d04: 0x8e47017c  lw          $a3, 0x17C($s2)
    ctx->pc = 0x2f3d04u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
label_2f3d08:
    // 0x2f3d08: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2f3d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2f3d0c:
    // 0x2f3d0c: 0x40f809  jalr        $v0
label_2f3d10:
    if (ctx->pc == 0x2F3D10u) {
        ctx->pc = 0x2F3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D0Cu;
        // 0x2f3d10: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D14u;
        goto label_2f3d14;
    }
    ctx->pc = 0x2F3D0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F3D14u);
        ctx->pc = 0x2F3D10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D0Cu;
        // 0x2f3d10: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3D0Cu, 0x2F3D14u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3D14u;
label_2f3d14:
    // 0x2f3d14: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f3d14u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3d18:
    // 0x2f3d18: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2f3d18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f3d1c:
    // 0x2f3d1c: 0x10820008  beq         $a0, $v0, . + 4 + (0x8 << 2)
label_2f3d20:
    if (ctx->pc == 0x2F3D20u) {
        ctx->pc = 0x2F3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D1Cu;
        // 0x2f3d20: 0x2402fc0a  addiu       $v0, $zero, -0x3F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966282));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D24u;
        goto label_2f3d24;
    }
    ctx->pc = 0x2F3D1Cu;
    {
        const bool branch_taken_0x2f3d1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3D20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D1Cu;
        // 0x2f3d20: 0x2402fc0a  addiu       $v0, $zero, -0x3F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d1c) {
            ctx->pc = 0x2F3D40u;
            goto label_2f3d40;
        }
    }
    ctx->pc = 0x2F3D24u;
label_2f3d24:
    // 0x2f3d24: 0x100002ab  b           . + 4 + (0x2AB << 2)
label_2f3d28:
    if (ctx->pc == 0x2F3D28u) {
        ctx->pc = 0x2F3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D24u;
        // 0x2f3d28: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D2Cu;
        goto label_2f3d2c;
    }
    ctx->pc = 0x2F3D24u;
    {
        const bool branch_taken_0x2f3d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D24u;
        // 0x2f3d28: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d24) {
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F3D2Cu;
label_2f3d2c:
    // 0x2f3d2c: 0x0  nop
    ctx->pc = 0x2f3d2cu;
    // NOP
label_2f3d30:
    // 0x2f3d30: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2f3d30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3d34:
    // 0x2f3d34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2f3d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2f3d38:
    // 0x2f3d38: 0xc049c48  jal         func_127120
label_2f3d3c:
    if (ctx->pc == 0x2F3D3Cu) {
        ctx->pc = 0x2F3D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D38u;
        // 0x2f3d3c: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D40u;
        goto label_2f3d40;
    }
    ctx->pc = 0x2F3D38u;
    SET_GPR_U32(ctx, 31, 0x2F3D40u);
    ctx->pc = 0x2F3D3Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3D38u;
    // 0x2f3d3c: 0x8fa60040  lw          $a2, 0x40($sp) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F3D38u, 0x2F3D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3D40u;
label_2f3d40:
    // 0x2f3d40: 0xdfa50050  ld          $a1, 0x50($sp)
    ctx->pc = 0x2f3d40u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3d44:
    // 0x2f3d44: 0x10000254  b           . + 4 + (0x254 << 2)
label_2f3d48:
    if (ctx->pc == 0x2F3D48u) {
        ctx->pc = 0x2F3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D44u;
        // 0x2f3d48: 0xb1f02f  dsubu       $fp, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D4Cu;
        goto label_2f3d4c;
    }
    ctx->pc = 0x2F3D44u;
    {
        const bool branch_taken_0x2f3d44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D44u;
        // 0x2f3d48: 0xb1f02f  dsubu       $fp, $a1, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) - GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d44) {
            ctx->pc = 0x2F4698u;
            goto label_2f4698;
        }
    }
    ctx->pc = 0x2F3D4Cu;
label_2f3d4c:
    // 0x2f3d4c: 0x1a60003f  blez        $s3, . + 4 + (0x3F << 2)
label_2f3d50:
    if (ctx->pc == 0x2F3D50u) {
        ctx->pc = 0x2F3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D4Cu;
        // 0x2f3d50: 0x13183c  dsll32      $v1, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D54u;
        goto label_2f3d54;
    }
    ctx->pc = 0x2F3D4Cu;
    {
        const bool branch_taken_0x2f3d4c = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2F3D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D4Cu;
        // 0x2f3d50: 0x13183c  dsll32      $v1, $s3, 0 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 19) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d4c) {
            ctx->pc = 0x2F3E4Cu;
            goto label_2f3e4c;
        }
    }
    ctx->pc = 0x2F3D54u;
label_2f3d54:
    // 0x2f3d54: 0xafb30040  sw          $s3, 0x40($sp)
    ctx->pc = 0x2f3d54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 19));
label_2f3d58:
    // 0x2f3d58: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x2f3d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3d5c:
    // 0x2f3d5c: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x2f3d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f3d60:
    // 0x2f3d60: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f3d60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f3d64:
    // 0x2f3d64: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f3d64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f3d68:
    // 0x2f3d68: 0x8e420084  lw          $v0, 0x84($s2)
    ctx->pc = 0x2f3d68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f3d6c:
    // 0x2f3d6c: 0x10440023  beq         $v0, $a0, . + 4 + (0x23 << 2)
label_2f3d70:
    if (ctx->pc == 0x2F3D70u) {
        ctx->pc = 0x2F3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D6Cu;
        // 0x2f3d70: 0xfca30020  sd          $v1, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D74u;
        goto label_2f3d74;
    }
    ctx->pc = 0x2F3D6Cu;
    {
        const bool branch_taken_0x2f3d6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x2F3D70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D6Cu;
        // 0x2f3d70: 0xfca30020  sd          $v1, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d6c) {
            ctx->pc = 0x2F3DFCu;
            goto label_2f3dfc;
        }
    }
    ctx->pc = 0x2F3D74u;
label_2f3d74:
    // 0x2f3d74: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2f3d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f3d78:
    // 0x2f3d78: 0xdc460020  ld          $a2, 0x20($v0)
    ctx->pc = 0x2f3d78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_2f3d7c:
    // 0x2f3d7c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f3d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f3d80:
    // 0x2f3d80: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f3d80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f3d84:
    // 0x2f3d84: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2f3d88:
    if (ctx->pc == 0x2F3D88u) {
        ctx->pc = 0x2F3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D84u;
        // 0x2f3d88: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3D8Cu;
        goto label_2f3d8c;
    }
    ctx->pc = 0x2F3D84u;
    {
        const bool branch_taken_0x2f3d84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D84u;
        // 0x2f3d88: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d84) {
            ctx->pc = 0x2F3DF8u;
            goto label_2f3df8;
        }
    }
    ctx->pc = 0x2F3D8Cu;
label_2f3d8c:
    // 0x2f3d8c: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x2f3d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f3d90:
    // 0x2f3d90: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2f3d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f3d94:
    // 0x2f3d94: 0x0  nop
    ctx->pc = 0x2f3d94u;
    // NOP
label_2f3d98:
    // 0x2f3d98: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2f3d9c:
    if (ctx->pc == 0x2F3D9Cu) {
        ctx->pc = 0x2F3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D98u;
        // 0x2f3d9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3DA0u;
        goto label_2f3da0;
    }
    ctx->pc = 0x2F3D98u;
    {
        const bool branch_taken_0x2f3d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3D9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3D98u;
        // 0x2f3d9c: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3d98) {
            ctx->pc = 0x2F3DE0u;
            goto label_2f3de0;
        }
    }
    ctx->pc = 0x2F3DA0u;
label_2f3da0:
    // 0x2f3da0: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2f3da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_2f3da4:
    // 0x2f3da4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_2f3da8:
    if (ctx->pc == 0x2F3DA8u) {
        ctx->pc = 0x2F3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DA4u;
        // 0x2f3da8: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3DACu;
        goto label_2f3dac;
    }
    ctx->pc = 0x2F3DA4u;
    {
        const bool branch_taken_0x2f3da4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3DA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DA4u;
        // 0x2f3da8: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3da4) {
            ctx->pc = 0x2F3DE0u;
            goto label_2f3de0;
        }
    }
    ctx->pc = 0x2F3DACu;
label_2f3dac:
    // 0x2f3dac: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f3dacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f3db0:
    // 0x2f3db0: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x2f3db0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_2f3db4:
    // 0x2f3db4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f3db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f3db8:
    // 0x2f3db8: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2f3db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2f3dbc:
    // 0x2f3dbc: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f3dbcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3dc0:
    // 0x2f3dc0: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x2f3dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f3dc4:
    // 0x2f3dc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3dc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f3dc8:
    // 0x2f3dc8: 0x60f809  jalr        $v1
label_2f3dcc:
    if (ctx->pc == 0x2F3DCCu) {
        ctx->pc = 0x2F3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DC8u;
        // 0x2f3dcc: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3DD0u;
        goto label_2f3dd0;
    }
    ctx->pc = 0x2F3DC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F3DD0u);
        ctx->pc = 0x2F3DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DC8u;
        // 0x2f3dcc: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3DC8u, 0x2F3DD0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3DD0u;
label_2f3dd0:
    // 0x2f3dd0: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f3dd0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3dd4:
    // 0x2f3dd4: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x2f3dd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f3dd8:
    // 0x2f3dd8: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x2f3dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f3ddc:
    // 0x2f3ddc: 0xdc660020  ld          $a2, 0x20($v1)
    ctx->pc = 0x2f3ddcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 32)));
label_2f3de0:
    // 0x2f3de0: 0x224882d  daddu       $s1, $s1, $a0
    ctx->pc = 0x2f3de0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
label_2f3de4:
    // 0x2f3de4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f3de4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f3de8:
    // 0x2f3de8: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f3de8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f3dec:
    // 0x2f3dec: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
label_2f3df0:
    if (ctx->pc == 0x2F3DF0u) {
        ctx->pc = 0x2F3DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3DECu;
        // 0x2f3df0: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3DF4u;
        goto label_2f3df4;
    }
    ctx->pc = 0x2F3DECu;
    {
        const bool branch_taken_0x2f3dec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3dec) {
            ctx->pc = 0x2F3DF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3DECu;
            // 0x2f3df0: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3D98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3d98;
        }
    }
    ctx->pc = 0x2F3DF4u;
label_2f3df4:
    // 0x2f3df4: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2f3df4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2f3df8:
    // 0x2f3df8: 0xfc910000  sd          $s1, 0x0($a0)
    ctx->pc = 0x2f3df8u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 17));
label_2f3dfc:
    // 0x2f3dfc: 0x8fa50058  lw          $a1, 0x58($sp)
    ctx->pc = 0x2f3dfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2f3e00:
    // 0x2f3e00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f3e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3e04:
    // 0x2f3e04: 0x10a2000e  beq         $a1, $v0, . + 4 + (0xE << 2)
label_2f3e08:
    if (ctx->pc == 0x2F3E08u) {
        ctx->pc = 0x2F3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E04u;
        // 0x2f3e08: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E0Cu;
        goto label_2f3e0c;
    }
    ctx->pc = 0x2F3E04u;
    {
        const bool branch_taken_0x2f3e04 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E04u;
        // 0x2f3e08: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e04) {
            ctx->pc = 0x2F3E40u;
            goto label_2f3e40;
        }
    }
    ctx->pc = 0x2F3E0Cu;
label_2f3e0c:
    // 0x2f3e0c: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x2f3e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_2f3e10:
    // 0x2f3e10: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f3e10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f3e14:
    // 0x2f3e14: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2f3e14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2f3e18:
    // 0x2f3e18: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f3e18u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f3e1c:
    // 0x2f3e1c: 0x8e47017c  lw          $a3, 0x17C($s2)
    ctx->pc = 0x2f3e1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
label_2f3e20:
    // 0x2f3e20: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f3e20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f3e24:
    // 0x2f3e24: 0x40f809  jalr        $v0
label_2f3e28:
    if (ctx->pc == 0x2F3E28u) {
        ctx->pc = 0x2F3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E24u;
        // 0x2f3e28: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E2Cu;
        goto label_2f3e2c;
    }
    ctx->pc = 0x2F3E24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F3E2Cu);
        ctx->pc = 0x2F3E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E24u;
        // 0x2f3e28: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F3E24u, 0x2F3E2Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F3E2Cu;
label_2f3e2c:
    // 0x2f3e2c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f3e2cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3e30:
    // 0x2f3e30: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
label_2f3e34:
    if (ctx->pc == 0x2F3E34u) {
        ctx->pc = 0x2F3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E30u;
        // 0x2f3e34: 0x2402fc0a  addiu       $v0, $zero, -0x3F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966282));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E38u;
        goto label_2f3e38;
    }
    ctx->pc = 0x2F3E30u;
    {
        const bool branch_taken_0x2f3e30 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E30u;
        // 0x2f3e34: 0x2402fc0a  addiu       $v0, $zero, -0x3F6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e30) {
            ctx->pc = 0x2F3E4Cu;
            goto label_2f3e4c;
        }
    }
    ctx->pc = 0x2F3E38u;
label_2f3e38:
    // 0x2f3e38: 0x10000266  b           . + 4 + (0x266 << 2)
label_2f3e3c:
    if (ctx->pc == 0x2F3E3Cu) {
        ctx->pc = 0x2F3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E38u;
        // 0x2f3e3c: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E40u;
        goto label_2f3e40;
    }
    ctx->pc = 0x2F3E38u;
    {
        const bool branch_taken_0x2f3e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E38u;
        // 0x2f3e3c: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e38) {
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F3E40u;
label_2f3e40:
    // 0x2f3e40: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x2f3e40u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f3e44:
    // 0x2f3e44: 0xc049c48  jal         func_127120
label_2f3e48:
    if (ctx->pc == 0x2F3E48u) {
        ctx->pc = 0x2F3E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E44u;
        // 0x2f3e48: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E4Cu;
        goto label_2f3e4c;
    }
    ctx->pc = 0x2F3E44u;
    SET_GPR_U32(ctx, 31, 0x2F3E4Cu);
    ctx->pc = 0x2F3E48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3E44u;
    // 0x2f3e48: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F3E44u, 0x2F3E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3E4Cu;
label_2f3e4c:
    // 0x2f3e4c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f3e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2f3e50:
    // 0x2f3e50: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x2f3e50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2f3e54:
    // 0x2f3e54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f3e54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f3e58:
    // 0x2f3e58: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
label_2f3e5c:
    if (ctx->pc == 0x2F3E5Cu) {
        ctx->pc = 0x2F3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E58u;
        // 0x2f3e5c: 0xdfbe0050  ld          $fp, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E60u;
        goto label_2f3e60;
    }
    ctx->pc = 0x2F3E58u;
    {
        const bool branch_taken_0x2f3e58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E58u;
        // 0x2f3e5c: 0xdfbe0050  ld          $fp, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e58) {
            ctx->pc = 0x2F3E78u;
            goto label_2f3e78;
        }
    }
    ctx->pc = 0x2F3E60u;
label_2f3e60:
    // 0x2f3e60: 0x5fc00175  bgtzl       $fp, . + 4 + (0x175 << 2)
label_2f3e64:
    if (ctx->pc == 0x2F3E64u) {
        ctx->pc = 0x2F3E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E60u;
        // 0x2f3e64: 0x3d3f02f  dsubu       $fp, $fp, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) - GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E68u;
        goto label_2f3e68;
    }
    ctx->pc = 0x2F3E60u;
    {
        const bool branch_taken_0x2f3e60 = (GPR_S32(ctx, 30) > 0);
        if (branch_taken_0x2f3e60) {
            ctx->pc = 0x2F3E64u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3E60u;
            // 0x2f3e64: 0x3d3f02f  dsubu       $fp, $fp, $s3 (Delay Slot)
            SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) - GPR_U64(ctx, 19));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4438u;
            goto label_2f4438;
        }
    }
    ctx->pc = 0x2F3E68u;
label_2f3e68:
    // 0x2f3e68: 0x3103c  dsll32      $v0, $v1, 0
    ctx->pc = 0x2f3e68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << (32 + 0));
label_2f3e6c:
    // 0x2f3e6c: 0x2f03e  dsrl32      $fp, $v0, 0
    ctx->pc = 0x2f3e6cu;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) >> (32 + 0));
label_2f3e70:
    // 0x2f3e70: 0x10000170  b           . + 4 + (0x170 << 2)
label_2f3e74:
    if (ctx->pc == 0x2F3E74u) {
        ctx->pc = 0x2F3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E70u;
        // 0x2f3e74: 0x3d3f02f  dsubu       $fp, $fp, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) - GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E78u;
        goto label_2f3e78;
    }
    ctx->pc = 0x2F3E70u;
    {
        const bool branch_taken_0x2f3e70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E70u;
        // 0x2f3e74: 0x3d3f02f  dsubu       $fp, $fp, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) - GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e70) {
            ctx->pc = 0x2F4434u;
            goto label_2f4434;
        }
    }
    ctx->pc = 0x2F3E78u;
label_2f3e78:
    // 0x2f3e78: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x2f3e78u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f3e7c:
    // 0x2f3e7c: 0x1840016d  blez        $v0, . + 4 + (0x16D << 2)
label_2f3e80:
    if (ctx->pc == 0x2F3E80u) {
        ctx->pc = 0x2F3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E7Cu;
        // 0x2f3e80: 0x241effff  addiu       $fp, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E84u;
        goto label_2f3e84;
    }
    ctx->pc = 0x2F3E7Cu;
    {
        const bool branch_taken_0x2f3e7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F3E80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E7Cu;
        // 0x2f3e80: 0x241effff  addiu       $fp, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e7c) {
            ctx->pc = 0x2F4434u;
            goto label_2f4434;
        }
    }
    ctx->pc = 0x2F3E84u;
label_2f3e84:
    // 0x2f3e84: 0x1000016b  b           . + 4 + (0x16B << 2)
label_2f3e88:
    if (ctx->pc == 0x2F3E88u) {
        ctx->pc = 0x2F3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E84u;
        // 0x2f3e88: 0x53f02f  dsubu       $fp, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) - GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3E8Cu;
        goto label_2f3e8c;
    }
    ctx->pc = 0x2F3E84u;
    {
        const bool branch_taken_0x2f3e84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3E84u;
        // 0x2f3e88: 0x53f02f  dsubu       $fp, $v0, $s3 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 2) - GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3e84) {
            ctx->pc = 0x2F4434u;
            goto label_2f4434;
        }
    }
    ctx->pc = 0x2F3E8Cu;
label_2f3e8c:
    // 0x2f3e8c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x2f3e8cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3e90:
    // 0x2f3e90: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x2f3e90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_2f3e94:
    // 0x2f3e94: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2f3e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2f3e98:
    // 0x2f3e98: 0x80511bc8  lb          $s1, 0x1BC8($v0)
    ctx->pc = 0x2f3e98u;
    SET_GPR_S32(ctx, 17, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 7112)));
label_2f3e9c:
    // 0x2f3e9c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2f3e9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f3ea0:
    // 0x2f3ea0: 0x10000033  b           . + 4 + (0x33 << 2)
label_2f3ea4:
    if (ctx->pc == 0x2F3EA4u) {
        ctx->pc = 0x2F3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EA0u;
        // 0x2f3ea4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3EA8u;
        goto label_2f3ea8;
    }
    ctx->pc = 0x2F3EA0u;
    {
        const bool branch_taken_0x2f3ea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EA0u;
        // 0x2f3ea4: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ea0) {
            ctx->pc = 0x2F3F70u;
            goto label_2f3f70;
        }
    }
    ctx->pc = 0x2F3EA8u;
label_2f3ea8:
    // 0x2f3ea8: 0x10620248  beq         $v1, $v0, . + 4 + (0x248 << 2)
label_2f3eac:
    if (ctx->pc == 0x2F3EACu) {
        ctx->pc = 0x2F3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EA8u;
        // 0x2f3eac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3EB0u;
        goto label_2f3eb0;
    }
    ctx->pc = 0x2F3EA8u;
    {
        const bool branch_taken_0x2f3ea8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EA8u;
        // 0x2f3eac: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3ea8) {
            ctx->pc = 0x2F47CCu;
            goto label_2f47cc;
        }
    }
    ctx->pc = 0x2F3EB0u;
label_2f3eb0:
    // 0x2f3eb0: 0x146200a8  bne         $v1, $v0, . + 4 + (0xA8 << 2)
label_2f3eb4:
    if (ctx->pc == 0x2F3EB4u) {
        ctx->pc = 0x2F3EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EB0u;
        // 0x2f3eb4: 0x2402fc16  addiu       $v0, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3EB8u;
        goto label_2f3eb8;
    }
    ctx->pc = 0x2F3EB0u;
    {
        const bool branch_taken_0x2f3eb0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EB0u;
        // 0x2f3eb4: 0x2402fc16  addiu       $v0, $zero, -0x3EA (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3eb0) {
            ctx->pc = 0x2F4154u;
            goto label_2f4154;
        }
    }
    ctx->pc = 0x2F3EB8u;
label_2f3eb8:
    // 0x2f3eb8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2f3eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3ebc:
    // 0x2f3ebc: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x2f3ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3ec0:
    // 0x2f3ec0: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x2f3ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
label_2f3ec4:
    // 0x2f3ec4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x2f3ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2f3ec8:
    // 0x2f3ec8: 0x80430000  lb          $v1, 0x0($v0)
    ctx->pc = 0x2f3ec8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_2f3ecc:
    // 0x2f3ecc: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2f3eccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_2f3ed0:
    // 0x2f3ed0: 0x711826  xor         $v1, $v1, $s1
    ctx->pc = 0x2f3ed0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 17));
label_2f3ed4:
    // 0x2f3ed4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x2f3ed4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
label_2f3ed8:
    // 0x2f3ed8: 0x2c700001  sltiu       $s0, $v1, 0x1
    ctx->pc = 0x2f3ed8u;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2f3edc:
    // 0x2f3edc: 0x0  nop
    ctx->pc = 0x2f3edcu;
    // NOP
label_2f3ee0:
    // 0x2f3ee0: 0x8fa40024  lw          $a0, 0x24($sp)
    ctx->pc = 0x2f3ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2f3ee4:
    // 0x2f3ee4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f3ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3ee8:
    // 0x2f3ee8: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2f3ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2f3eec:
    // 0x2f3eec: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_2f3ef0:
    if (ctx->pc == 0x2F3EF0u) {
        ctx->pc = 0x2F3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EECu;
        // 0x2f3ef0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3EF4u;
        goto label_2f3ef4;
    }
    ctx->pc = 0x2F3EECu;
    {
        const bool branch_taken_0x2f3eec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F3EF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EECu;
        // 0x2f3ef0: 0xafa40000  sw          $a0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3eec) {
            ctx->pc = 0x2F3F30u;
            goto label_2f3f30;
        }
    }
    ctx->pc = 0x2F3EF4u;
label_2f3ef4:
    // 0x2f3ef4: 0xc0bc77e  jal         func_2F1DF8
label_2f3ef8:
    if (ctx->pc == 0x2F3EF8u) {
        ctx->pc = 0x2F3EF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3EF4u;
        // 0x2f3ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3EFCu;
        goto label_2f3efc;
    }
    ctx->pc = 0x2F3EF4u;
    SET_GPR_U32(ctx, 31, 0x2F3EFCu);
    ctx->pc = 0x2F3EF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3EF4u;
    // 0x2f3ef8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1DF8u, 0x2F3EF4u, 0x2F3EFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3EFCu;
label_2f3efc:
    // 0x2f3efc: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x2f3efcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_2f3f00:
    // 0x2f3f00: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x2f3f00u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2f3f04:
    // 0x2f3f04: 0x1ce0000c  bgtz        $a3, . + 4 + (0xC << 2)
label_2f3f08:
    if (ctx->pc == 0x2F3F08u) {
        ctx->pc = 0x2F3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F04u;
        // 0x2f3f08: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F0Cu;
        goto label_2f3f0c;
    }
    ctx->pc = 0x2F3F04u;
    {
        const bool branch_taken_0x2f3f04 = (GPR_S32(ctx, 7) > 0);
        ctx->pc = 0x2F3F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F04u;
        // 0x2f3f08: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f04) {
            ctx->pc = 0x2F3F38u;
            goto label_2f3f38;
        }
    }
    ctx->pc = 0x2F3F0Cu;
label_2f3f0c:
    // 0x2f3f0c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f3f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3f10:
    // 0x2f3f10: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2f3f14:
    if (ctx->pc == 0x2F3F14u) {
        ctx->pc = 0x2F3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F10u;
        // 0x2f3f14: 0x2402fc13  addiu       $v0, $zero, -0x3ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966291));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F18u;
        goto label_2f3f18;
    }
    ctx->pc = 0x2F3F10u;
    {
        const bool branch_taken_0x2f3f10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F10u;
        // 0x2f3f14: 0x2402fc13  addiu       $v0, $zero, -0x3ED (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966291));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f10) {
            ctx->pc = 0x2F3F28u;
            goto label_2f3f28;
        }
    }
    ctx->pc = 0x2F3F18u;
label_2f3f18:
    // 0x2f3f18: 0xc0be45e  jal         func_2F9178
label_2f3f1c:
    if (ctx->pc == 0x2F3F1Cu) {
        ctx->pc = 0x2F3F20u;
        goto label_2f3f20;
    }
    ctx->pc = 0x2F3F18u;
    SET_GPR_U32(ctx, 31, 0x2F3F20u);
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F3F18u, 0x2F3F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F20u;
label_2f3f20:
    // 0x2f3f20: 0x2402fc13  addiu       $v0, $zero, -0x3ED
    ctx->pc = 0x2f3f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966291));
label_2f3f24:
    // 0x2f3f24: 0x0  nop
    ctx->pc = 0x2f3f24u;
    // NOP
label_2f3f28:
    // 0x2f3f28: 0x1000022a  b           . + 4 + (0x22A << 2)
label_2f3f2c:
    if (ctx->pc == 0x2F3F2Cu) {
        ctx->pc = 0x2F3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F28u;
        // 0x2f3f2c: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F30u;
        goto label_2f3f30;
    }
    ctx->pc = 0x2F3F28u;
    {
        const bool branch_taken_0x2f3f28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F3F2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F28u;
        // 0x2f3f2c: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f28) {
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F3F30u;
label_2f3f30:
    // 0x2f3f30: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x2f3f30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f3f34:
    // 0x2f3f34: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2f3f34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2f3f38:
    // 0x2f3f38: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f3f38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f3f3c:
    // 0x2f3f3c: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2f3f3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2f3f40:
    // 0x2f3f40: 0xc0bdf1e  jal         func_2F7C78
label_2f3f44:
    if (ctx->pc == 0x2F3F44u) {
        ctx->pc = 0x2F3F44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F40u;
        // 0x2f3f44: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F48u;
        goto label_2f3f48;
    }
    ctx->pc = 0x2F3F40u;
    SET_GPR_U32(ctx, 31, 0x2F3F48u);
    ctx->pc = 0x2F3F44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F40u;
    // 0x2f3f44: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F7C78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F7C78u, 0x2F3F40u, 0x2F3F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F48u;
label_2f3f48:
    // 0x2f3f48: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2f3f48u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3f4c:
    // 0x2f3f4c: 0x1ec00008  bgtz        $s6, . + 4 + (0x8 << 2)
label_2f3f50:
    if (ctx->pc == 0x2F3F50u) {
        ctx->pc = 0x2F3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F4Cu;
        // 0x2f3f50: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F54u;
        goto label_2f3f54;
    }
    ctx->pc = 0x2F3F4Cu;
    {
        const bool branch_taken_0x2f3f4c = (GPR_S32(ctx, 22) > 0);
        ctx->pc = 0x2F3F50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F4Cu;
        // 0x2f3f50: 0x2c0982d  daddu       $s3, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f4c) {
            ctx->pc = 0x2F3F70u;
            goto label_2f3f70;
        }
    }
    ctx->pc = 0x2F3F54u;
label_2f3f54:
    // 0x2f3f54: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f3f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3f58:
    // 0x2f3f58: 0x1080021e  beqz        $a0, . + 4 + (0x21E << 2)
label_2f3f5c:
    if (ctx->pc == 0x2F3F5Cu) {
        ctx->pc = 0x2F3F60u;
        goto label_2f3f60;
    }
    ctx->pc = 0x2F3F58u;
    {
        const bool branch_taken_0x2f3f58 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3f58) {
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F3F60u;
label_2f3f60:
    // 0x2f3f60: 0xc0be45e  jal         func_2F9178
label_2f3f64:
    if (ctx->pc == 0x2F3F64u) {
        ctx->pc = 0x2F3F68u;
        goto label_2f3f68;
    }
    ctx->pc = 0x2F3F60u;
    SET_GPR_U32(ctx, 31, 0x2F3F68u);
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F3F60u, 0x2F3F68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F68u;
label_2f3f68:
    // 0x2f3f68: 0x1000021a  b           . + 4 + (0x21A << 2)
label_2f3f6c:
    if (ctx->pc == 0x2F3F6Cu) {
        ctx->pc = 0x2F3F70u;
        goto label_2f3f70;
    }
    ctx->pc = 0x2F3F68u;
    {
        const bool branch_taken_0x2f3f68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f3f68) {
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F3F70u;
label_2f3f70:
    // 0x2f3f70: 0x1a60ffdb  blez        $s3, . + 4 + (-0x25 << 2)
label_2f3f74:
    if (ctx->pc == 0x2F3F74u) {
        ctx->pc = 0x2F3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F70u;
        // 0x2f3f74: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F78u;
        goto label_2f3f78;
    }
    ctx->pc = 0x2F3F70u;
    {
        const bool branch_taken_0x2f3f70 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2F3F74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F70u;
        // 0x2f3f74: 0x8fa50008  lw          $a1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f70) {
            ctx->pc = 0x2F3EE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3ee0;
        }
    }
    ctx->pc = 0x2F3F78u;
label_2f3f78:
    // 0x2f3f78: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x2f3f78u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f3f7c:
    // 0x2f3f7c: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x2f3f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3f80:
    // 0x2f3f80: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2f3f80u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f3f84:
    // 0x2f3f84: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x2f3f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2f3f88:
    // 0x2f3f88: 0xc0bcb16  jal         func_2F2C58
label_2f3f8c:
    if (ctx->pc == 0x2F3F8Cu) {
        ctx->pc = 0x2F3F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F88u;
        // 0x2f3f8c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3F90u;
        goto label_2f3f90;
    }
    ctx->pc = 0x2F3F88u;
    SET_GPR_U32(ctx, 31, 0x2F3F90u);
    ctx->pc = 0x2F3F8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3F88u;
    // 0x2f3f8c: 0x27a80020  addiu       $t0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2C58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F2C58u, 0x2F3F88u, 0x2F3F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3F90u;
label_2f3f90:
    // 0x2f3f90: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x2f3f90u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3f94:
    // 0x2f3f94: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f3f94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f3f98:
    // 0x2f3f98: 0x1462ffc3  bne         $v1, $v0, . + 4 + (-0x3D << 2)
label_2f3f9c:
    if (ctx->pc == 0x2F3F9Cu) {
        ctx->pc = 0x2F3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F98u;
        // 0x2f3f9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3FA0u;
        goto label_2f3fa0;
    }
    ctx->pc = 0x2F3F98u;
    {
        const bool branch_taken_0x2f3f98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F3F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3F98u;
        // 0x2f3f9c: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f3f98) {
            ctx->pc = 0x2F3EA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3ea8;
        }
    }
    ctx->pc = 0x2F3FA0u;
label_2f3fa0:
    // 0x2f3fa0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x2f3fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_2f3fa4:
    // 0x2f3fa4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x2f3fa4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_2f3fa8:
    // 0x2f3fa8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2f3fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f3fac:
    // 0x2f3fac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x2f3facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_2f3fb0:
    // 0x2f3fb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2f3fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_2f3fb4:
    // 0x2f3fb4: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x2f3fb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_2f3fb8:
    // 0x2f3fb8: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x2f3fb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_2f3fbc:
    // 0x2f3fbc: 0x2649823  subu        $s3, $s3, $a0
    ctx->pc = 0x2f3fbcu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 4)));
label_2f3fc0:
    // 0x2f3fc0: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x2f3fc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2f3fc4:
    // 0x2f3fc4: 0xc04a726  jal         func_129C98
label_2f3fc8:
    if (ctx->pc == 0x2F3FC8u) {
        ctx->pc = 0x2F3FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FC4u;
        // 0x2f3fc8: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3FCCu;
        goto label_2f3fcc;
    }
    ctx->pc = 0x2F3FC4u;
    SET_GPR_U32(ctx, 31, 0x2F3FCCu);
    ctx->pc = 0x2F3FC8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3FC4u;
    // 0x2f3fc8: 0x2405003b  addiu       $a1, $zero, 0x3B (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129C98u, 0x2F3FC4u, 0x2F3FCCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3FCCu;
label_2f3fcc:
    // 0x2f3fcc: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f3fccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3fd0:
    // 0x2f3fd0: 0x54c00001  bnel        $a2, $zero, . + 4 + (0x1 << 2)
label_2f3fd4:
    if (ctx->pc == 0x2F3FD4u) {
        ctx->pc = 0x2F3FD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FD0u;
        // 0x2f3fd4: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3FD8u;
        goto label_2f3fd8;
    }
    ctx->pc = 0x2F3FD0u;
    {
        const bool branch_taken_0x2f3fd0 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f3fd0) {
            ctx->pc = 0x2F3FD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3FD0u;
            // 0x2f3fd4: 0xa0c00000  sb          $zero, 0x0($a2) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F3FD8u;
            goto label_2f3fd8;
        }
    }
    ctx->pc = 0x2F3FD8u;
label_2f3fd8:
    // 0x2f3fd8: 0xc0bc7b2  jal         func_2F1EC8
label_2f3fdc:
    if (ctx->pc == 0x2F3FDCu) {
        ctx->pc = 0x2F3FDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FD8u;
        // 0x2f3fdc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3FE0u;
        goto label_2f3fe0;
    }
    ctx->pc = 0x2F3FD8u;
    SET_GPR_U32(ctx, 31, 0x2F3FE0u);
    ctx->pc = 0x2F3FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3FD8u;
    // 0x2f3fdc: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1EC8u, 0x2F3FD8u, 0x2F3FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3FE0u;
label_2f3fe0:
    // 0x2f3fe0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x2f3fe0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f3fe4:
    // 0x2f3fe4: 0x24030030  addiu       $v1, $zero, 0x30
    ctx->pc = 0x2f3fe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
label_2f3fe8:
    // 0x2f3fe8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x2f3fe8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2f3fec:
    // 0x2f3fec: 0x5443001e  bnel        $v0, $v1, . + 4 + (0x1E << 2)
label_2f3ff0:
    if (ctx->pc == 0x2F3FF0u) {
        ctx->pc = 0x2F3FF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FECu;
        // 0x2f3ff0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3FF4u;
        goto label_2f3ff4;
    }
    ctx->pc = 0x2F3FECu;
    {
        const bool branch_taken_0x2f3fec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x2f3fec) {
            ctx->pc = 0x2F3FF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F3FECu;
            // 0x2f3ff0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4068u;
            goto label_2f4068;
        }
    }
    ctx->pc = 0x2F3FF4u;
label_2f3ff4:
    // 0x2f3ff4: 0xc0be45e  jal         func_2F9178
label_2f3ff8:
    if (ctx->pc == 0x2F3FF8u) {
        ctx->pc = 0x2F3FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F3FF4u;
        // 0x2f3ff8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F3FFCu;
        goto label_2f3ffc;
    }
    ctx->pc = 0x2F3FF4u;
    SET_GPR_U32(ctx, 31, 0x2F3FFCu);
    ctx->pc = 0x2F3FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F3FF4u;
    // 0x2f3ff8: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F3FF4u, 0x2F3FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F3FFCu;
label_2f3ffc:
    // 0x2f3ffc: 0x8fa60030  lw          $a2, 0x30($sp)
    ctx->pc = 0x2f3ffcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2f4000:
    // 0x2f4000: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x2f4000u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2f4004:
    // 0x2f4004: 0x8fa9005c  lw          $t1, 0x5C($sp)
    ctx->pc = 0x2f4004u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
label_2f4008:
    // 0x2f4008: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4008u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f400c:
    // 0x2f400c: 0x8faa0060  lw          $t2, 0x60($sp)
    ctx->pc = 0x2f400cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_2f4010:
    // 0x2f4010: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x2f4010u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2f4014:
    // 0x2f4014: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2f4014u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2f4018:
    // 0x2f4018: 0xc0bcc3a  jal         func_2F30E8
label_2f401c:
    if (ctx->pc == 0x2F401Cu) {
        ctx->pc = 0x2F401Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4018u;
        // 0x2f401c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4020u;
        goto label_2f4020;
    }
    ctx->pc = 0x2F4018u;
    SET_GPR_U32(ctx, 31, 0x2F4020u);
    ctx->pc = 0x2F401Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4018u;
    // 0x2f401c: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F30E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F30E8u, 0x2F4018u, 0x2F4020u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4020u;
label_2f4020:
    // 0x2f4020: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2f4020u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4024:
    // 0x2f4024: 0x6c001eb  bltz        $s6, . + 4 + (0x1EB << 2)
label_2f4028:
    if (ctx->pc == 0x2F4028u) {
        ctx->pc = 0x2F402Cu;
        goto label_2f402c;
    }
    ctx->pc = 0x2F4024u;
    {
        const bool branch_taken_0x2f4024 = (GPR_S32(ctx, 22) < 0);
        if (branch_taken_0x2f4024) {
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F402Cu;
label_2f402c:
    // 0x2f402c: 0xc0bc780  jal         func_2F1E00
label_2f4030:
    if (ctx->pc == 0x2F4030u) {
        ctx->pc = 0x2F4030u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F402Cu;
        // 0x2f4030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4034u;
        goto label_2f4034;
    }
    ctx->pc = 0x2F402Cu;
    SET_GPR_U32(ctx, 31, 0x2F4034u);
    ctx->pc = 0x2F4030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F402Cu;
    // 0x2f4030: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E00u, 0x2F402Cu, 0x2F4034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4034u;
label_2f4034:
    // 0x2f4034: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2f4038:
    if (ctx->pc == 0x2F4038u) {
        ctx->pc = 0x2F4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4034u;
        // 0x2f4038: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F403Cu;
        goto label_2f403c;
    }
    ctx->pc = 0x2F4034u;
    {
        const bool branch_taken_0x2f4034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4034u;
        // 0x2f4038: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4034) {
            ctx->pc = 0x2F4060u;
            goto label_2f4060;
        }
    }
    ctx->pc = 0x2F403Cu;
label_2f403c:
    // 0x2f403c: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_2f4040:
    if (ctx->pc == 0x2F4040u) {
        ctx->pc = 0x2F4044u;
        goto label_2f4044;
    }
    ctx->pc = 0x2F403Cu;
    {
        const bool branch_taken_0x2f403c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f403c) {
            ctx->pc = 0x2F404Cu;
            goto label_2f404c;
        }
    }
    ctx->pc = 0x2F4044u;
label_2f4044:
    // 0x2f4044: 0xc0be45e  jal         func_2F9178
label_2f4048:
    if (ctx->pc == 0x2F4048u) {
        ctx->pc = 0x2F404Cu;
        goto label_2f404c;
    }
    ctx->pc = 0x2F4044u;
    SET_GPR_U32(ctx, 31, 0x2F404Cu);
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F4044u, 0x2F404Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F404Cu;
label_2f404c:
    // 0x2f404c: 0xc0be45e  jal         func_2F9178
label_2f4050:
    if (ctx->pc == 0x2F4050u) {
        ctx->pc = 0x2F4050u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F404Cu;
        // 0x2f4050: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4054u;
        goto label_2f4054;
    }
    ctx->pc = 0x2F404Cu;
    SET_GPR_U32(ctx, 31, 0x2F4054u);
    ctx->pc = 0x2F4050u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F404Cu;
    // 0x2f4050: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F404Cu, 0x2F4054u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4054u;
label_2f4054:
    // 0x2f4054: 0x2402fc0d  addiu       $v0, $zero, -0x3F3
    ctx->pc = 0x2f4054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
label_2f4058:
    // 0x2f4058: 0x100001e2  b           . + 4 + (0x1E2 << 2)
label_2f405c:
    if (ctx->pc == 0x2F405Cu) {
        ctx->pc = 0x2F405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4058u;
        // 0x2f405c: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4060u;
        goto label_2f4060;
    }
    ctx->pc = 0x2F4058u;
    {
        const bool branch_taken_0x2f4058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F405Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4058u;
        // 0x2f405c: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4058) {
            ctx->pc = 0x2F47E4u;
            goto label_2f47e4;
        }
    }
    ctx->pc = 0x2F4060u;
label_2f4060:
    // 0x2f4060: 0x1000018d  b           . + 4 + (0x18D << 2)
label_2f4064:
    if (ctx->pc == 0x2F4064u) {
        ctx->pc = 0x2F4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4060u;
        // 0x2f4064: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4068u;
        goto label_2f4068;
    }
    ctx->pc = 0x2F4060u;
    {
        const bool branch_taken_0x2f4060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4060u;
        // 0x2f4064: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4060) {
            ctx->pc = 0x2F4698u;
            goto label_2f4698;
        }
    }
    ctx->pc = 0x2F4068u;
label_2f4068:
    // 0x2f4068: 0x10000014  b           . + 4 + (0x14 << 2)
label_2f406c:
    if (ctx->pc == 0x2F406Cu) {
        ctx->pc = 0x2F406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4068u;
        // 0x2f406c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4070u;
        goto label_2f4070;
    }
    ctx->pc = 0x2F4068u;
    {
        const bool branch_taken_0x2f4068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F406Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4068u;
        // 0x2f406c: 0x8fa70004  lw          $a3, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4068) {
            ctx->pc = 0x2F40BCu;
            goto label_2f40bc;
        }
    }
    ctx->pc = 0x2F4070u;
label_2f4070:
    // 0x2f4070: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x2f4070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_2f4074:
    // 0x2f4074: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f4074u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2f4078:
    // 0x2f4078: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f407c:
    if (ctx->pc == 0x2F407Cu) {
        ctx->pc = 0x2F407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4078u;
        // 0x2f407c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4080u;
        goto label_2f4080;
    }
    ctx->pc = 0x2F4078u;
    {
        const bool branch_taken_0x2f4078 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F407Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4078u;
        // 0x2f407c: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4078) {
            ctx->pc = 0x2F4088u;
            goto label_2f4088;
        }
    }
    ctx->pc = 0x2F4080u;
label_2f4080:
    // 0x2f4080: 0x1000000c  b           . + 4 + (0xC << 2)
label_2f4084:
    if (ctx->pc == 0x2F4084u) {
        ctx->pc = 0x2F4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4080u;
        // 0x2f4084: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4088u;
        goto label_2f4088;
    }
    ctx->pc = 0x2F4080u;
    {
        const bool branch_taken_0x2f4080 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4080u;
        // 0x2f4084: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4080) {
            ctx->pc = 0x2F40B4u;
            goto label_2f40b4;
        }
    }
    ctx->pc = 0x2F4088u;
label_2f4088:
    // 0x2f4088: 0x2482ffbf  addiu       $v0, $a0, -0x41
    ctx->pc = 0x2f4088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967231));
label_2f408c:
    // 0x2f408c: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2f408cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2f4090:
    // 0x2f4090: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2f4094:
    if (ctx->pc == 0x2F4094u) {
        ctx->pc = 0x2F4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4090u;
        // 0x2f4094: 0x2485ffc9  addiu       $a1, $a0, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967241));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4098u;
        goto label_2f4098;
    }
    ctx->pc = 0x2F4090u;
    {
        const bool branch_taken_0x2f4090 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4094u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4090u;
        // 0x2f4094: 0x2485ffc9  addiu       $a1, $a0, -0x37 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967241));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4090) {
            ctx->pc = 0x2F40B4u;
            goto label_2f40b4;
        }
    }
    ctx->pc = 0x2F4098u;
label_2f4098:
    // 0x2f4098: 0x2482ff9f  addiu       $v0, $a0, -0x61
    ctx->pc = 0x2f4098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967199));
label_2f409c:
    // 0x2f409c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2f409cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2f40a0:
    // 0x2f40a0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x2f40a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_2f40a4:
    // 0x2f40a4: 0x2484ffa9  addiu       $a0, $a0, -0x57
    ctx->pc = 0x2f40a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967209));
label_2f40a8:
    // 0x2f40a8: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x2f40a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_2f40ac:
    // 0x2f40ac: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x2f40acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f40b0:
    // 0x2f40b0: 0x83280a  movz        $a1, $a0, $v1
    ctx->pc = 0x2f40b0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 4));
label_2f40b4:
    // 0x2f40b4: 0x111100  sll         $v0, $s1, 4
    ctx->pc = 0x2f40b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_2f40b8:
    // 0x2f40b8: 0x458821  addu        $s1, $v0, $a1
    ctx->pc = 0x2f40b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
label_2f40bc:
    // 0x2f40bc: 0x90c30000  lbu         $v1, 0x0($a2)
    ctx->pc = 0x2f40bcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
label_2f40c0:
    // 0x2f40c0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2f40c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f40c4:
    // 0x2f40c4: 0x2462ffd0  addiu       $v0, $v1, -0x30
    ctx->pc = 0x2f40c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
label_2f40c8:
    // 0x2f40c8: 0x2c42000a  sltiu       $v0, $v0, 0xA
    ctx->pc = 0x2f40c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2f40cc:
    // 0x2f40cc: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_2f40d0:
    if (ctx->pc == 0x2F40D0u) {
        ctx->pc = 0x2F40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40CCu;
        // 0x2f40d0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F40D4u;
        goto label_2f40d4;
    }
    ctx->pc = 0x2F40CCu;
    {
        const bool branch_taken_0x2f40cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F40D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40CCu;
        // 0x2f40d0: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40cc) {
            ctx->pc = 0x2F40F4u;
            goto label_2f40f4;
        }
    }
    ctx->pc = 0x2F40D4u;
label_2f40d4:
    // 0x2f40d4: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x2f40d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
label_2f40d8:
    // 0x2f40d8: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2f40d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2f40dc:
    // 0x2f40dc: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_2f40e0:
    if (ctx->pc == 0x2F40E0u) {
        ctx->pc = 0x2F40E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40DCu;
        // 0x2f40e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F40E4u;
        goto label_2f40e4;
    }
    ctx->pc = 0x2F40DCu;
    {
        const bool branch_taken_0x2f40dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f40dc) {
            ctx->pc = 0x2F40E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F40DCu;
            // 0x2f40e0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F40F8u;
            goto label_2f40f8;
        }
    }
    ctx->pc = 0x2F40E4u;
label_2f40e4:
    // 0x2f40e4: 0x2462ff9f  addiu       $v0, $v1, -0x61
    ctx->pc = 0x2f40e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967199));
label_2f40e8:
    // 0x2f40e8: 0x2c420006  sltiu       $v0, $v0, 0x6
    ctx->pc = 0x2f40e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
label_2f40ec:
    // 0x2f40ec: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
label_2f40f0:
    if (ctx->pc == 0x2F40F0u) {
        ctx->pc = 0x2F40F4u;
        goto label_2f40f4;
    }
    ctx->pc = 0x2F40ECu;
    {
        const bool branch_taken_0x2f40ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f40ec) {
            ctx->pc = 0x2F40F8u;
            goto label_2f40f8;
        }
    }
    ctx->pc = 0x2F40F4u;
label_2f40f4:
    // 0x2f40f4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x2f40f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f40f8:
    // 0x2f40f8: 0x14a0ffdd  bnez        $a1, . + 4 + (-0x23 << 2)
label_2f40fc:
    if (ctx->pc == 0x2F40FCu) {
        ctx->pc = 0x2F40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40F8u;
        // 0x2f40fc: 0x2463ffd0  addiu       $v1, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4100u;
        goto label_2f4100;
    }
    ctx->pc = 0x2F40F8u;
    {
        const bool branch_taken_0x2f40f8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F40FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F40F8u;
        // 0x2f40fc: 0x2463ffd0  addiu       $v1, $v1, -0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967248));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f40f8) {
            ctx->pc = 0x2F4070u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f4070;
        }
    }
    ctx->pc = 0x2F4100u;
label_2f4100:
    // 0x2f4100: 0xc0be45e  jal         func_2F9178
label_2f4104:
    if (ctx->pc == 0x2F4104u) {
        ctx->pc = 0x2F4104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4100u;
        // 0x2f4104: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4108u;
        goto label_2f4108;
    }
    ctx->pc = 0x2F4100u;
    SET_GPR_U32(ctx, 31, 0x2F4108u);
    ctx->pc = 0x2F4104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4100u;
    // 0x2f4104: 0xe0202d  daddu       $a0, $a3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F4100u, 0x2F4108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4108u;
label_2f4108:
    // 0x2f4108: 0x12200160  beqz        $s1, . + 4 + (0x160 << 2)
label_2f410c:
    if (ctx->pc == 0x2F410Cu) {
        ctx->pc = 0x2F410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4108u;
        // 0x2f410c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4110u;
        goto label_2f4110;
    }
    ctx->pc = 0x2F4108u;
    {
        const bool branch_taken_0x2f4108 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F410Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4108u;
        // 0x2f410c: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4108) {
            ctx->pc = 0x2F468Cu;
            goto label_2f468c;
        }
    }
    ctx->pc = 0x2F4110u;
label_2f4110:
    // 0x2f4110: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2f4110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4114:
    // 0x2f4114: 0x8e43008c  lw          $v1, 0x8C($s2)
    ctx->pc = 0x2f4114u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 140)));
label_2f4118:
    // 0x2f4118: 0x51a821  addu        $s5, $v0, $s1
    ctx->pc = 0x2f4118u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f411c:
    // 0x2f411c: 0x75102b  sltu        $v0, $v1, $s5
    ctx->pc = 0x2f411cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
label_2f4120:
    // 0x2f4120: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2f4124:
    if (ctx->pc == 0x2F4124u) {
        ctx->pc = 0x2F4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4120u;
        // 0x2f4124: 0x26300002  addiu       $s0, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4128u;
        goto label_2f4128;
    }
    ctx->pc = 0x2F4120u;
    {
        const bool branch_taken_0x2f4120 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4120u;
        // 0x2f4124: 0x26300002  addiu       $s0, $s1, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4120) {
            ctx->pc = 0x2F413Cu;
            goto label_2f413c;
        }
    }
    ctx->pc = 0x2F4128u;
label_2f4128:
    // 0x2f4128: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f4128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_2f412c:
    // 0x2f412c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f412cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
label_2f4130:
    // 0x2f4130: 0x1462004e  bne         $v1, $v0, . + 4 + (0x4E << 2)
label_2f4134:
    if (ctx->pc == 0x2F4134u) {
        ctx->pc = 0x2F4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4130u;
        // 0x2f4134: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4138u;
        goto label_2f4138;
    }
    ctx->pc = 0x2F4130u;
    {
        const bool branch_taken_0x2f4130 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F4134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4130u;
        // 0x2f4134: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4130) {
            ctx->pc = 0x2F426Cu;
            goto label_2f426c;
        }
    }
    ctx->pc = 0x2F4138u;
label_2f4138:
    // 0x2f4138: 0x26300002  addiu       $s0, $s1, 0x2
    ctx->pc = 0x2f4138u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
label_2f413c:
    // 0x2f413c: 0xc0be450  jal         func_2F9140
label_2f4140:
    if (ctx->pc == 0x2F4140u) {
        ctx->pc = 0x2F4140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F413Cu;
        // 0x2f4140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4144u;
        goto label_2f4144;
    }
    ctx->pc = 0x2F413Cu;
    SET_GPR_U32(ctx, 31, 0x2F4144u);
    ctx->pc = 0x2F4140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F413Cu;
    // 0x2f4140: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F413Cu, 0x2F4144u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4144u;
label_2f4144:
    // 0x2f4144: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x2f4144u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4148:
    // 0x2f4148: 0x16800004  bnez        $s4, . + 4 + (0x4 << 2)
label_2f414c:
    if (ctx->pc == 0x2F414Cu) {
        ctx->pc = 0x2F414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4148u;
        // 0x2f414c: 0x270102b  sltu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4150u;
        goto label_2f4150;
    }
    ctx->pc = 0x2F4148u;
    {
        const bool branch_taken_0x2f4148 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4148u;
        // 0x2f414c: 0x270102b  sltu        $v0, $s3, $s0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4148) {
            ctx->pc = 0x2F415Cu;
            goto label_2f415c;
        }
    }
    ctx->pc = 0x2F4150u;
label_2f4150:
    // 0x2f4150: 0x2402fc16  addiu       $v0, $zero, -0x3EA
    ctx->pc = 0x2f4150u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966294));
label_2f4154:
    // 0x2f4154: 0x1000019f  b           . + 4 + (0x19F << 2)
label_2f4158:
    if (ctx->pc == 0x2F4158u) {
        ctx->pc = 0x2F4158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4154u;
        // 0x2f4158: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F415Cu;
        goto label_2f415c;
    }
    ctx->pc = 0x2F4154u;
    {
        const bool branch_taken_0x2f4154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4154u;
        // 0x2f4158: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4154) {
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F415Cu;
label_2f415c:
    // 0x2f415c: 0x1040001d  beqz        $v0, . + 4 + (0x1D << 2)
label_2f4160:
    if (ctx->pc == 0x2F4160u) {
        ctx->pc = 0x2F4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F415Cu;
        // 0x2f4160: 0x2662fffe  addiu       $v0, $s3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4164u;
        goto label_2f4164;
    }
    ctx->pc = 0x2F415Cu;
    {
        const bool branch_taken_0x2f415c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F415Cu;
        // 0x2f4160: 0x2662fffe  addiu       $v0, $s3, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f415c) {
            ctx->pc = 0x2F41D4u;
            goto label_2f41d4;
        }
    }
    ctx->pc = 0x2F4164u;
label_2f4164:
    // 0x2f4164: 0x1a600004  blez        $s3, . + 4 + (0x4 << 2)
label_2f4168:
    if (ctx->pc == 0x2F4168u) {
        ctx->pc = 0x2F4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4164u;
        // 0x2f4168: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F416Cu;
        goto label_2f416c;
    }
    ctx->pc = 0x2F4164u;
    {
        const bool branch_taken_0x2f4164 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x2F4168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4164u;
        // 0x2f4168: 0x8fa50000  lw          $a1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4164) {
            ctx->pc = 0x2F4178u;
            goto label_2f4178;
        }
    }
    ctx->pc = 0x2F416Cu;
label_2f416c:
    // 0x2f416c: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f416cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f4170:
    // 0x2f4170: 0xc049c48  jal         func_127120
label_2f4174:
    if (ctx->pc == 0x2F4174u) {
        ctx->pc = 0x2F4174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4170u;
        // 0x2f4174: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4178u;
        goto label_2f4178;
    }
    ctx->pc = 0x2F4170u;
    SET_GPR_U32(ctx, 31, 0x2F4178u);
    ctx->pc = 0x2F4174u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4170u;
    // 0x2f4174: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F4170u, 0x2F4178u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4178u;
label_2f4178:
    // 0x2f4178: 0x2666fffe  addiu       $a2, $s3, -0x2
    ctx->pc = 0x2f4178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967294));
label_2f417c:
    // 0x2f417c: 0x2932821  addu        $a1, $s4, $s3
    ctx->pc = 0x2f417cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 19)));
label_2f4180:
    // 0x2f4180: 0x2263023  subu        $a2, $s1, $a2
    ctx->pc = 0x2f4180u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 6)));
label_2f4184:
    // 0x2f4184: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4184u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4188:
    // 0x2f4188: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2f4188u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f418c:
    // 0x2f418c: 0xc0bcdc2  jal         func_2F3708
label_2f4190:
    if (ctx->pc == 0x2F4190u) {
        ctx->pc = 0x2F4190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F418Cu;
        // 0x2f4190: 0x27a80018  addiu       $t0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4194u;
        goto label_2f4194;
    }
    ctx->pc = 0x2F418Cu;
    SET_GPR_U32(ctx, 31, 0x2F4194u);
    ctx->pc = 0x2F4190u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F418Cu;
    // 0x2f4190: 0x27a80018  addiu       $t0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3708u, 0x2F418Cu, 0x2F4194u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4194u;
label_2f4194:
    // 0x2f4194: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2f4194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f4198:
    // 0x2f4198: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2f4198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2f419c:
    // 0x2f419c: 0x1460013e  bnez        $v1, . + 4 + (0x13E << 2)
label_2f41a0:
    if (ctx->pc == 0x2F41A0u) {
        ctx->pc = 0x2F41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F419Cu;
        // 0x2f41a0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F41A4u;
        goto label_2f41a4;
    }
    ctx->pc = 0x2F419Cu;
    {
        const bool branch_taken_0x2f419c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F41A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F419Cu;
        // 0x2f41a0: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f419c) {
            ctx->pc = 0x2F4698u;
            goto label_2f4698;
        }
    }
    ctx->pc = 0x2F41A4u;
label_2f41a4:
    // 0x2f41a4: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2f41a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2f41a8:
    // 0x2f41a8: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x2f41a8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2f41ac:
    // 0x2f41ac: 0x1ec00011  bgtz        $s6, . + 4 + (0x11 << 2)
label_2f41b0:
    if (ctx->pc == 0x2F41B0u) {
        ctx->pc = 0x2F41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41ACu;
        // 0x2f41b0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F41B4u;
        goto label_2f41b4;
    }
    ctx->pc = 0x2F41ACu;
    {
        const bool branch_taken_0x2f41ac = (GPR_S32(ctx, 22) > 0);
        ctx->pc = 0x2F41B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41ACu;
        // 0x2f41b0: 0xafa50000  sw          $a1, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41ac) {
            ctx->pc = 0x2F41F4u;
            goto label_2f41f4;
        }
    }
    ctx->pc = 0x2F41B4u;
label_2f41b4:
    // 0x2f41b4: 0xc0be45e  jal         func_2F9178
label_2f41b8:
    if (ctx->pc == 0x2F41B8u) {
        ctx->pc = 0x2F41B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41B4u;
        // 0x2f41b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F41BCu;
        goto label_2f41bc;
    }
    ctx->pc = 0x2F41B4u;
    SET_GPR_U32(ctx, 31, 0x2F41BCu);
    ctx->pc = 0x2F41B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F41B4u;
    // 0x2f41b8: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F41B4u, 0x2F41BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F41BCu;
label_2f41bc:
    // 0x2f41bc: 0xc0bc780  jal         func_2F1E00
label_2f41c0:
    if (ctx->pc == 0x2F41C0u) {
        ctx->pc = 0x2F41C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41BCu;
        // 0x2f41c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F41C4u;
        goto label_2f41c4;
    }
    ctx->pc = 0x2F41BCu;
    SET_GPR_U32(ctx, 31, 0x2F41C4u);
    ctx->pc = 0x2F41C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F41BCu;
    // 0x2f41c0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E00u, 0x2F41BCu, 0x2F41C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F41C4u;
label_2f41c4:
    // 0x2f41c4: 0x10400134  beqz        $v0, . + 4 + (0x134 << 2)
label_2f41c8:
    if (ctx->pc == 0x2F41C8u) {
        ctx->pc = 0x2F41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41C4u;
        // 0x2f41c8: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F41CCu;
        goto label_2f41cc;
    }
    ctx->pc = 0x2F41C4u;
    {
        const bool branch_taken_0x2f41c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41C4u;
        // 0x2f41c8: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41c4) {
            ctx->pc = 0x2F4698u;
            goto label_2f4698;
        }
    }
    ctx->pc = 0x2F41CCu;
label_2f41cc:
    // 0x2f41cc: 0x10000028  b           . + 4 + (0x28 << 2)
label_2f41d0:
    if (ctx->pc == 0x2F41D0u) {
        ctx->pc = 0x2F41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41CCu;
        // 0x2f41d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F41D4u;
        goto label_2f41d4;
    }
    ctx->pc = 0x2F41CCu;
    {
        const bool branch_taken_0x2f41cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41CCu;
        // 0x2f41d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41cc) {
            ctx->pc = 0x2F4270u;
            goto label_2f4270;
        }
    }
    ctx->pc = 0x2F41D4u;
label_2f41d4:
    // 0x2f41d4: 0x8fa50000  lw          $a1, 0x0($sp)
    ctx->pc = 0x2f41d4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f41d8:
    // 0x2f41d8: 0x519823  subu        $s3, $v0, $s1
    ctx->pc = 0x2f41d8u;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_2f41dc:
    // 0x2f41dc: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x2f41dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f41e0:
    // 0x2f41e0: 0xc049c48  jal         func_127120
label_2f41e4:
    if (ctx->pc == 0x2F41E4u) {
        ctx->pc = 0x2F41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41E0u;
        // 0x2f41e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F41E8u;
        goto label_2f41e8;
    }
    ctx->pc = 0x2F41E0u;
    SET_GPR_U32(ctx, 31, 0x2F41E8u);
    ctx->pc = 0x2F41E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F41E0u;
    // 0x2f41e4: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F41E0u, 0x2F41E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F41E8u;
label_2f41e8:
    // 0x2f41e8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f41e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2f41ec:
    // 0x2f41ec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x2f41ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2f41f0:
    // 0x2f41f0: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2f41f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_2f41f4:
    // 0x2f41f4: 0x8e420120  lw          $v0, 0x120($s2)
    ctx->pc = 0x2f41f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_2f41f8:
    // 0x2f41f8: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_2f41fc:
    if (ctx->pc == 0x2F41FCu) {
        ctx->pc = 0x2F41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41F8u;
        // 0x2f41fc: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4200u;
        goto label_2f4200;
    }
    ctx->pc = 0x2F41F8u;
    {
        const bool branch_taken_0x2f41f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F41FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F41F8u;
        // 0x2f41fc: 0x8fa40058  lw          $a0, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f41f8) {
            ctx->pc = 0x2F4230u;
            goto label_2f4230;
        }
    }
    ctx->pc = 0x2F4200u;
label_2f4200:
    // 0x2f4200: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f4200u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f4204:
    // 0x2f4204: 0x8e420128  lw          $v0, 0x128($s2)
    ctx->pc = 0x2f4204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 296)));
label_2f4208:
    // 0x2f4208: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f4208u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f420c:
    // 0x2f420c: 0x8e430120  lw          $v1, 0x120($s2)
    ctx->pc = 0x2f420cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 288)));
label_2f4210:
    // 0x2f4210: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f4210u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f4214:
    // 0x2f4214: 0x8e470124  lw          $a3, 0x124($s2)
    ctx->pc = 0x2f4214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
label_2f4218:
    // 0x2f4218: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f4218u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f421c:
    // 0x2f421c: 0x60f809  jalr        $v1
label_2f4220:
    if (ctx->pc == 0x2F4220u) {
        ctx->pc = 0x2F4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F421Cu;
        // 0x2f4220: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4224u;
        goto label_2f4224;
    }
    ctx->pc = 0x2F421Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4224u);
        ctx->pc = 0x2F4220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F421Cu;
        // 0x2f4220: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F421Cu, 0x2F4224u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4224u;
label_2f4224:
    // 0x2f4224: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f4224u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4228:
    // 0x2f4228: 0x1000ff1a  b           . + 4 + (-0xE6 << 2)
label_2f422c:
    if (ctx->pc == 0x2F422Cu) {
        ctx->pc = 0x2F422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4228u;
        // 0x2f422c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4230u;
        goto label_2f4230;
    }
    ctx->pc = 0x2F4228u;
    {
        const bool branch_taken_0x2f4228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F422Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4228u;
        // 0x2f422c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4228) {
            ctx->pc = 0x2F3E94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3e94;
        }
    }
    ctx->pc = 0x2F4230u;
label_2f4230:
    // 0x2f4230: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x2f4230u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f4234:
    // 0x2f4234: 0x54970041  bnel        $a0, $s7, . + 4 + (0x41 << 2)
label_2f4238:
    if (ctx->pc == 0x2F4238u) {
        ctx->pc = 0x2F4238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4234u;
        // 0x2f4238: 0x8e4200d0  lw          $v0, 0xD0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F423Cu;
        goto label_2f423c;
    }
    ctx->pc = 0x2F4234u;
    {
        const bool branch_taken_0x2f4234 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 23));
        if (branch_taken_0x2f4234) {
            ctx->pc = 0x2F4238u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4234u;
            // 0x2f4238: 0x8e4200d0  lw          $v0, 0xD0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F433Cu;
            goto label_2f433c;
        }
    }
    ctx->pc = 0x2F423Cu;
label_2f423c:
    // 0x2f423c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2f423cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4240:
    // 0x2f4240: 0x14a00005  bnez        $a1, . + 4 + (0x5 << 2)
label_2f4244:
    if (ctx->pc == 0x2F4244u) {
        ctx->pc = 0x2F4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4240u;
        // 0x2f4244: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4248u;
        goto label_2f4248;
    }
    ctx->pc = 0x2F4240u;
    {
        const bool branch_taken_0x2f4240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4244u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4240u;
        // 0x2f4244: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4240) {
            ctx->pc = 0x2F4258u;
            goto label_2f4258;
        }
    }
    ctx->pc = 0x2F4248u;
label_2f4248:
    // 0x2f4248: 0xc0be450  jal         func_2F9140
label_2f424c:
    if (ctx->pc == 0x2F424Cu) {
        ctx->pc = 0x2F424Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4248u;
        // 0x2f424c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4250u;
        goto label_2f4250;
    }
    ctx->pc = 0x2F4248u;
    SET_GPR_U32(ctx, 31, 0x2F4250u);
    ctx->pc = 0x2F424Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4248u;
    // 0x2f424c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9140u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9140u, 0x2F4248u, 0x2F4250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4250u;
label_2f4250:
    // 0x2f4250: 0x10000009  b           . + 4 + (0x9 << 2)
label_2f4254:
    if (ctx->pc == 0x2F4254u) {
        ctx->pc = 0x2F4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4250u;
        // 0x2f4254: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4258u;
        goto label_2f4258;
    }
    ctx->pc = 0x2F4250u;
    {
        const bool branch_taken_0x2f4250 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4250u;
        // 0x2f4254: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4250) {
            ctx->pc = 0x2F4278u;
            goto label_2f4278;
        }
    }
    ctx->pc = 0x2F4258u;
label_2f4258:
    // 0x2f4258: 0xc0be46c  jal         func_2F91B0
label_2f425c:
    if (ctx->pc == 0x2F425Cu) {
        ctx->pc = 0x2F425Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4258u;
        // 0x2f425c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4260u;
        goto label_2f4260;
    }
    ctx->pc = 0x2F4258u;
    SET_GPR_U32(ctx, 31, 0x2F4260u);
    ctx->pc = 0x2F425Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4258u;
    // 0x2f425c: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F91B0u, 0x2F4258u, 0x2F4260u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4260u;
label_2f4260:
    // 0x2f4260: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
label_2f4264:
    if (ctx->pc == 0x2F4264u) {
        ctx->pc = 0x2F4264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4260u;
        // 0x2f4264: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4268u;
        goto label_2f4268;
    }
    ctx->pc = 0x2F4260u;
    {
        const bool branch_taken_0x2f4260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f4260) {
            ctx->pc = 0x2F4264u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4260u;
            // 0x2f4264: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4278u;
            goto label_2f4278;
        }
    }
    ctx->pc = 0x2F4268u;
label_2f4268:
    // 0x2f4268: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2f4268u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f426c:
    // 0x2f426c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f426cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4270:
    // 0x2f4270: 0x10000109  b           . + 4 + (0x109 << 2)
label_2f4274:
    if (ctx->pc == 0x2F4274u) {
        ctx->pc = 0x2F4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4270u;
        // 0x2f4274: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4278u;
        goto label_2f4278;
    }
    ctx->pc = 0x2F4270u;
    {
        const bool branch_taken_0x2f4270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4274u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4270u;
        // 0x2f4274: 0xac620028  sw          $v0, 0x28($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4270) {
            ctx->pc = 0x2F4698u;
            goto label_2f4698;
        }
    }
    ctx->pc = 0x2F4278u;
label_2f4278:
    // 0x2f4278: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2f4278u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2f427c:
    // 0x2f427c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f427cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4280:
    // 0x2f4280: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2f4280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4284:
    // 0x2f4284: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2f4284u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f4288:
    // 0x2f4288: 0xafb50040  sw          $s5, 0x40($sp)
    ctx->pc = 0x2f4288u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
label_2f428c:
    // 0x2f428c: 0xc049c48  jal         func_127120
label_2f4290:
    if (ctx->pc == 0x2F4290u) {
        ctx->pc = 0x2F4290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F428Cu;
        // 0x2f4290: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4294u;
        goto label_2f4294;
    }
    ctx->pc = 0x2F428Cu;
    SET_GPR_U32(ctx, 31, 0x2F4294u);
    ctx->pc = 0x2F4290u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F428Cu;
    // 0x2f4290: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F428Cu, 0x2F4294u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4294u;
label_2f4294:
    // 0x2f4294: 0x8fb50040  lw          $s5, 0x40($sp)
    ctx->pc = 0x2f4294u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4298:
    // 0x2f4298: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f4298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f429c:
    // 0x2f429c: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x2f429cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f42a0:
    // 0x2f42a0: 0x15183c  dsll32      $v1, $s5, 0
    ctx->pc = 0x2f42a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 21) << (32 + 0));
label_2f42a4:
    // 0x2f42a4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f42a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f42a8:
    // 0x2f42a8: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x2f42a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
label_2f42ac:
    // 0x2f42ac: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x2f42acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f42b0:
    // 0x2f42b0: 0x1082005c  beq         $a0, $v0, . + 4 + (0x5C << 2)
label_2f42b4:
    if (ctx->pc == 0x2F42B4u) {
        ctx->pc = 0x2F42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42B0u;
        // 0x2f42b4: 0xfca30020  sd          $v1, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F42B8u;
        goto label_2f42b8;
    }
    ctx->pc = 0x2F42B0u;
    {
        const bool branch_taken_0x2f42b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F42B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42B0u;
        // 0x2f42b4: 0xfca30020  sd          $v1, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42b0) {
            ctx->pc = 0x2F4424u;
            goto label_2f4424;
        }
    }
    ctx->pc = 0x2F42B8u;
label_2f42b8:
    // 0x2f42b8: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2f42b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f42bc:
    // 0x2f42bc: 0xdc460020  ld          $a2, 0x20($v0)
    ctx->pc = 0x2f42bcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_2f42c0:
    // 0x2f42c0: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f42c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f42c4:
    // 0x2f42c4: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f42c4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f42c8:
    // 0x2f42c8: 0x54400055  bnel        $v0, $zero, . + 4 + (0x55 << 2)
label_2f42cc:
    if (ctx->pc == 0x2F42CCu) {
        ctx->pc = 0x2F42CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42C8u;
        // 0x2f42cc: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F42D0u;
        goto label_2f42d0;
    }
    ctx->pc = 0x2F42C8u;
    {
        const bool branch_taken_0x2f42c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f42c8) {
            ctx->pc = 0x2F42CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F42C8u;
            // 0x2f42cc: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4420u;
            goto label_2f4420;
        }
    }
    ctx->pc = 0x2F42D0u;
label_2f42d0:
    // 0x2f42d0: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2f42d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f42d4:
    // 0x2f42d4: 0x0  nop
    ctx->pc = 0x2f42d4u;
    // NOP
label_2f42d8:
    // 0x2f42d8: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2f42dc:
    if (ctx->pc == 0x2F42DCu) {
        ctx->pc = 0x2F42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42D8u;
        // 0x2f42dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F42E0u;
        goto label_2f42e0;
    }
    ctx->pc = 0x2F42D8u;
    {
        const bool branch_taken_0x2f42d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F42DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42D8u;
        // 0x2f42dc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42d8) {
            ctx->pc = 0x2F4320u;
            goto label_2f4320;
        }
    }
    ctx->pc = 0x2F42E0u;
label_2f42e0:
    // 0x2f42e0: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2f42e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_2f42e4:
    // 0x2f42e4: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_2f42e8:
    if (ctx->pc == 0x2F42E8u) {
        ctx->pc = 0x2F42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42E4u;
        // 0x2f42e8: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F42ECu;
        goto label_2f42ec;
    }
    ctx->pc = 0x2F42E4u;
    {
        const bool branch_taken_0x2f42e4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F42E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F42E4u;
        // 0x2f42e8: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f42e4) {
            ctx->pc = 0x2F4320u;
            goto label_2f4320;
        }
    }
    ctx->pc = 0x2F42ECu;
label_2f42ec:
    // 0x2f42ec: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f42ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f42f0:
    // 0x2f42f0: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x2f42f0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_2f42f4:
    // 0x2f42f4: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f42f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f42f8:
    // 0x2f42f8: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2f42f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2f42fc:
    // 0x2f42fc: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f42fcu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4300:
    // 0x2f4300: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x2f4300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f4304:
    // 0x2f4304: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4304u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4308:
    // 0x2f4308: 0x60f809  jalr        $v1
label_2f430c:
    if (ctx->pc == 0x2F430Cu) {
        ctx->pc = 0x2F430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4308u;
        // 0x2f430c: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4310u;
        goto label_2f4310;
    }
    ctx->pc = 0x2F4308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4310u);
        ctx->pc = 0x2F430Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4308u;
        // 0x2f430c: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4308u, 0x2F4310u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4310u;
label_2f4310:
    // 0x2f4310: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f4310u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4314:
    // 0x2f4314: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x2f4314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f4318:
    // 0x2f4318: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x2f4318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f431c:
    // 0x2f431c: 0xdc660020  ld          $a2, 0x20($v1)
    ctx->pc = 0x2f431cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 32)));
label_2f4320:
    // 0x2f4320: 0x224882d  daddu       $s1, $s1, $a0
    ctx->pc = 0x2f4320u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
label_2f4324:
    // 0x2f4324: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f4324u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f4328:
    // 0x2f4328: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f4328u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f432c:
    // 0x2f432c: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
label_2f4330:
    if (ctx->pc == 0x2F4330u) {
        ctx->pc = 0x2F4330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F432Cu;
        // 0x2f4330: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4334u;
        goto label_2f4334;
    }
    ctx->pc = 0x2F432Cu;
    {
        const bool branch_taken_0x2f432c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f432c) {
            ctx->pc = 0x2F4330u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F432Cu;
            // 0x2f4330: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F42D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f42d8;
        }
    }
    ctx->pc = 0x2F4334u;
label_2f4334:
    // 0x2f4334: 0x1000003a  b           . + 4 + (0x3A << 2)
label_2f4338:
    if (ctx->pc == 0x2F4338u) {
        ctx->pc = 0x2F4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4334u;
        // 0x2f4338: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F433Cu;
        goto label_2f433c;
    }
    ctx->pc = 0x2F4334u;
    {
        const bool branch_taken_0x2f4334 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4334u;
        // 0x2f4338: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4334) {
            ctx->pc = 0x2F4420u;
            goto label_2f4420;
        }
    }
    ctx->pc = 0x2F433Cu;
label_2f433c:
    // 0x2f433c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f433cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f4340:
    // 0x2f4340: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2f4340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2f4344:
    // 0x2f4344: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f4344u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f4348:
    // 0x2f4348: 0x8e47017c  lw          $a3, 0x17C($s2)
    ctx->pc = 0x2f4348u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
label_2f434c:
    // 0x2f434c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x2f434cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_2f4350:
    // 0x2f4350: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2f4350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2f4354:
    // 0x2f4354: 0x40f809  jalr        $v0
label_2f4358:
    if (ctx->pc == 0x2F4358u) {
        ctx->pc = 0x2F4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4354u;
        // 0x2f4358: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F435Cu;
        goto label_2f435c;
    }
    ctx->pc = 0x2F4354u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F435Cu);
        ctx->pc = 0x2F4358u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4354u;
        // 0x2f4358: 0x220302d  daddu       $a2, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4354u, 0x2F435Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F435Cu;
label_2f435c:
    // 0x2f435c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f435cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4360:
    // 0x2f4360: 0x52220007  beql        $s1, $v0, . + 4 + (0x7 << 2)
label_2f4364:
    if (ctx->pc == 0x2F4364u) {
        ctx->pc = 0x2F4364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4360u;
        // 0x2f4364: 0xafb50040  sw          $s5, 0x40($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4368u;
        goto label_2f4368;
    }
    ctx->pc = 0x2F4360u;
    {
        const bool branch_taken_0x2f4360 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        if (branch_taken_0x2f4360) {
            ctx->pc = 0x2F4364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4360u;
            // 0x2f4364: 0xafb50040  sw          $s5, 0x40($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4380u;
            goto label_2f4380;
        }
    }
    ctx->pc = 0x2F4368u;
label_2f4368:
    // 0x2f4368: 0xc0be45e  jal         func_2F9178
label_2f436c:
    if (ctx->pc == 0x2F436Cu) {
        ctx->pc = 0x2F436Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4368u;
        // 0x2f436c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4370u;
        goto label_2f4370;
    }
    ctx->pc = 0x2F4368u;
    SET_GPR_U32(ctx, 31, 0x2F4370u);
    ctx->pc = 0x2F436Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4368u;
    // 0x2f436c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F4368u, 0x2F4370u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4370u;
label_2f4370:
    // 0x2f4370: 0x2402fc0a  addiu       $v0, $zero, -0x3F6
    ctx->pc = 0x2f4370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966282));
label_2f4374:
    // 0x2f4374: 0x10000117  b           . + 4 + (0x117 << 2)
label_2f4378:
    if (ctx->pc == 0x2F4378u) {
        ctx->pc = 0x2F4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4374u;
        // 0x2f4378: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F437Cu;
        goto label_2f437c;
    }
    ctx->pc = 0x2F4374u;
    {
        const bool branch_taken_0x2f4374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4374u;
        // 0x2f4378: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4374) {
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F437Cu;
label_2f437c:
    // 0x2f437c: 0x0  nop
    ctx->pc = 0x2f437cu;
    // NOP
label_2f4380:
    // 0x2f4380: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x2f4380u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f4384:
    // 0x2f4384: 0x15103c  dsll32      $v0, $s5, 0
    ctx->pc = 0x2f4384u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 21) << (32 + 0));
label_2f4388:
    // 0x2f4388: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f4388u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f438c:
    // 0x2f438c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f438cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2f4390:
    // 0x2f4390: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x2f4390u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f4394:
    // 0x2f4394: 0x10770023  beq         $v1, $s7, . + 4 + (0x23 << 2)
label_2f4398:
    if (ctx->pc == 0x2F4398u) {
        ctx->pc = 0x2F4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4394u;
        // 0x2f4398: 0xfca20020  sd          $v0, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F439Cu;
        goto label_2f439c;
    }
    ctx->pc = 0x2F4394u;
    {
        const bool branch_taken_0x2f4394 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 23));
        ctx->pc = 0x2F4398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4394u;
        // 0x2f4398: 0xfca20020  sd          $v0, 0x20($a1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4394) {
            ctx->pc = 0x2F4424u;
            goto label_2f4424;
        }
    }
    ctx->pc = 0x2F439Cu;
label_2f439c:
    // 0x2f439c: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2f439cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f43a0:
    // 0x2f43a0: 0xdc460020  ld          $a2, 0x20($v0)
    ctx->pc = 0x2f43a0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_2f43a4:
    // 0x2f43a4: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f43a4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f43a8:
    // 0x2f43a8: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f43a8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f43ac:
    // 0x2f43ac: 0x1440001c  bnez        $v0, . + 4 + (0x1C << 2)
label_2f43b0:
    if (ctx->pc == 0x2F43B0u) {
        ctx->pc = 0x2F43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43ACu;
        // 0x2f43b0: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43B4u;
        goto label_2f43b4;
    }
    ctx->pc = 0x2F43ACu;
    {
        const bool branch_taken_0x2f43ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F43B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43ACu;
        // 0x2f43b0: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43ac) {
            ctx->pc = 0x2F4420u;
            goto label_2f4420;
        }
    }
    ctx->pc = 0x2F43B4u;
label_2f43b4:
    // 0x2f43b4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2f43b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f43b8:
    // 0x2f43b8: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2f43b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f43bc:
    // 0x2f43bc: 0x0  nop
    ctx->pc = 0x2f43bcu;
    // NOP
label_2f43c0:
    // 0x2f43c0: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2f43c4:
    if (ctx->pc == 0x2F43C4u) {
        ctx->pc = 0x2F43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43C0u;
        // 0x2f43c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43C8u;
        goto label_2f43c8;
    }
    ctx->pc = 0x2F43C0u;
    {
        const bool branch_taken_0x2f43c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F43C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43C0u;
        // 0x2f43c4: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43c0) {
            ctx->pc = 0x2F4408u;
            goto label_2f4408;
        }
    }
    ctx->pc = 0x2F43C8u;
label_2f43c8:
    // 0x2f43c8: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2f43c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_2f43cc:
    // 0x2f43cc: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_2f43d0:
    if (ctx->pc == 0x2F43D0u) {
        ctx->pc = 0x2F43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43CCu;
        // 0x2f43d0: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43D4u;
        goto label_2f43d4;
    }
    ctx->pc = 0x2F43CCu;
    {
        const bool branch_taken_0x2f43cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F43D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43CCu;
        // 0x2f43d0: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f43cc) {
            ctx->pc = 0x2F4408u;
            goto label_2f4408;
        }
    }
    ctx->pc = 0x2F43D4u;
label_2f43d4:
    // 0x2f43d4: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f43d4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f43d8:
    // 0x2f43d8: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x2f43d8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_2f43dc:
    // 0x2f43dc: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f43dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f43e0:
    // 0x2f43e0: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2f43e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2f43e4:
    // 0x2f43e4: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f43e4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f43e8:
    // 0x2f43e8: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x2f43e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f43ec:
    // 0x2f43ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f43ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f43f0:
    // 0x2f43f0: 0x60f809  jalr        $v1
label_2f43f4:
    if (ctx->pc == 0x2F43F4u) {
        ctx->pc = 0x2F43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43F0u;
        // 0x2f43f4: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F43F8u;
        goto label_2f43f8;
    }
    ctx->pc = 0x2F43F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F43F8u);
        ctx->pc = 0x2F43F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F43F0u;
        // 0x2f43f4: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F43F0u, 0x2F43F8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F43F8u;
label_2f43f8:
    // 0x2f43f8: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f43f8u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f43fc:
    // 0x2f43fc: 0x8fa30064  lw          $v1, 0x64($sp)
    ctx->pc = 0x2f43fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f4400:
    // 0x2f4400: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x2f4400u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f4404:
    // 0x2f4404: 0xdc660020  ld          $a2, 0x20($v1)
    ctx->pc = 0x2f4404u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 32)));
label_2f4408:
    // 0x2f4408: 0x224882d  daddu       $s1, $s1, $a0
    ctx->pc = 0x2f4408u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
label_2f440c:
    // 0x2f440c: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f440cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f4410:
    // 0x2f4410: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f4410u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f4414:
    // 0x2f4414: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
label_2f4418:
    if (ctx->pc == 0x2F4418u) {
        ctx->pc = 0x2F4418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4414u;
        // 0x2f4418: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F441Cu;
        goto label_2f441c;
    }
    ctx->pc = 0x2F4414u;
    {
        const bool branch_taken_0x2f4414 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f4414) {
            ctx->pc = 0x2F4418u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F4414u;
            // 0x2f4418: 0x8e420078  lw          $v0, 0x78($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F43C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f43c0;
        }
    }
    ctx->pc = 0x2F441Cu;
label_2f441c:
    // 0x2f441c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x2f441cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_2f4420:
    // 0x2f4420: 0xfc910000  sd          $s1, 0x0($a0)
    ctx->pc = 0x2f4420u;
    WRITE64(ADD32(GPR_U32(ctx, 4), 0), GPR_U64(ctx, 17));
label_2f4424:
    // 0x2f4424: 0xc0be45e  jal         func_2F9178
label_2f4428:
    if (ctx->pc == 0x2F4428u) {
        ctx->pc = 0x2F4428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4424u;
        // 0x2f4428: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F442Cu;
        goto label_2f442c;
    }
    ctx->pc = 0x2F4424u;
    SET_GPR_U32(ctx, 31, 0x2F442Cu);
    ctx->pc = 0x2F4428u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4424u;
    // 0x2f4428: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F4424u, 0x2F442Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F442Cu;
label_2f442c:
    // 0x2f442c: 0x1000fe99  b           . + 4 + (-0x167 << 2)
label_2f4430:
    if (ctx->pc == 0x2F4430u) {
        ctx->pc = 0x2F4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F442Cu;
        // 0x2f4430: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4434u;
        goto label_2f4434;
    }
    ctx->pc = 0x2F442Cu;
    {
        const bool branch_taken_0x2f442c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F442Cu;
        // 0x2f4430: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f442c) {
            ctx->pc = 0x2F3E94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f3e94;
        }
    }
    ctx->pc = 0x2F4434u;
label_2f4434:
    // 0x2f4434: 0x0  nop
    ctx->pc = 0x2f4434u;
    // NOP
label_2f4438:
    // 0x2f4438: 0x10000072  b           . + 4 + (0x72 << 2)
label_2f443c:
    if (ctx->pc == 0x2F443Cu) {
        ctx->pc = 0x2F443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4438u;
        // 0x2f443c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4440u;
        goto label_2f4440;
    }
    ctx->pc = 0x2F4438u;
    {
        const bool branch_taken_0x2f4438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F443Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4438u;
        // 0x2f443c: 0x2415ffff  addiu       $s5, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4438) {
            ctx->pc = 0x2F4604u;
            goto label_2f4604;
        }
    }
    ctx->pc = 0x2F4440u;
label_2f4440:
    // 0x2f4440: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x2f4440u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4444:
    // 0x2f4444: 0xb6a021  addu        $s4, $a1, $s6
    ctx->pc = 0x2f4444u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 22)));
label_2f4448:
    // 0x2f4448: 0x2f4102b  sltu        $v0, $s7, $s4
    ctx->pc = 0x2f4448u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
label_2f444c:
    // 0x2f444c: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
label_2f4450:
    if (ctx->pc == 0x2F4450u) {
        ctx->pc = 0x2F4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F444Cu;
        // 0x2f4450: 0xdfa20050  ld          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4454u;
        goto label_2f4454;
    }
    ctx->pc = 0x2F444Cu;
    {
        const bool branch_taken_0x2f444c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F444Cu;
        // 0x2f4450: 0xdfa20050  ld          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f444c) {
            ctx->pc = 0x2F4504u;
            goto label_2f4504;
        }
    }
    ctx->pc = 0x2F4454u;
label_2f4454:
    // 0x2f4454: 0x18400019  blez        $v0, . + 4 + (0x19 << 2)
label_2f4458:
    if (ctx->pc == 0x2F4458u) {
        ctx->pc = 0x2F4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4454u;
        // 0x2f4458: 0x2e58823  subu        $s1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F445Cu;
        goto label_2f445c;
    }
    ctx->pc = 0x2F4454u;
    {
        const bool branch_taken_0x2f4454 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F4458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4454u;
        // 0x2f4458: 0x2e58823  subu        $s1, $s7, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)SUB32(GPR_U32(ctx, 23), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4454) {
            ctx->pc = 0x2F44BCu;
            goto label_2f44bc;
        }
    }
    ctx->pc = 0x2F445Cu;
label_2f445c:
    // 0x2f445c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f445cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2f4460:
    // 0x2f4460: 0x1075000f  beq         $v1, $s5, . + 4 + (0xF << 2)
label_2f4464:
    if (ctx->pc == 0x2F4464u) {
        ctx->pc = 0x2F4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4460u;
        // 0x2f4464: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4468u;
        goto label_2f4468;
    }
    ctx->pc = 0x2F4460u;
    {
        const bool branch_taken_0x2f4460 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x2F4464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4460u;
        // 0x2f4464: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4460) {
            ctx->pc = 0x2F44A0u;
            goto label_2f44a0;
        }
    }
    ctx->pc = 0x2F4468u;
label_2f4468:
    // 0x2f4468: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x2f4468u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_2f446c:
    // 0x2f446c: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f446cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f4470:
    // 0x2f4470: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2f4470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2f4474:
    // 0x2f4474: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f4474u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f4478:
    // 0x2f4478: 0x8e47017c  lw          $a3, 0x17C($s2)
    ctx->pc = 0x2f4478u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
label_2f447c:
    // 0x2f447c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f447cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4480:
    // 0x2f4480: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2f4480u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2f4484:
    // 0x2f4484: 0x40f809  jalr        $v0
label_2f4488:
    if (ctx->pc == 0x2F4488u) {
        ctx->pc = 0x2F4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4484u;
        // 0x2f4488: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F448Cu;
        goto label_2f448c;
    }
    ctx->pc = 0x2F4484u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F448Cu);
        ctx->pc = 0x2F4488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4484u;
        // 0x2f4488: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4484u, 0x2F448Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F448Cu;
label_2f448c:
    // 0x2f448c: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f448cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4490:
    // 0x2f4490: 0x12220018  beq         $s1, $v0, . + 4 + (0x18 << 2)
label_2f4494:
    if (ctx->pc == 0x2F4494u) {
        ctx->pc = 0x2F4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4490u;
        // 0x2f4494: 0x2404fc0a  addiu       $a0, $zero, -0x3F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966282));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4498u;
        goto label_2f4498;
    }
    ctx->pc = 0x2F4490u;
    {
        const bool branch_taken_0x2f4490 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F4494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4490u;
        // 0x2f4494: 0x2404fc0a  addiu       $a0, $zero, -0x3F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4490) {
            ctx->pc = 0x2F44F4u;
            goto label_2f44f4;
        }
    }
    ctx->pc = 0x2F4498u;
label_2f4498:
    // 0x2f4498: 0x100000ce  b           . + 4 + (0xCE << 2)
label_2f449c:
    if (ctx->pc == 0x2F449Cu) {
        ctx->pc = 0x2F449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4498u;
        // 0x2f449c: 0xae440020  sw          $a0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44A0u;
        goto label_2f44a0;
    }
    ctx->pc = 0x2F4498u;
    {
        const bool branch_taken_0x2f4498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F449Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4498u;
        // 0x2f449c: 0xae440020  sw          $a0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4498) {
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F44A0u;
label_2f44a0:
    // 0x2f44a0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f44a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f44a4:
    // 0x2f44a4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2f44a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f44a8:
    // 0x2f44a8: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2f44a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f44ac:
    // 0x2f44ac: 0xc049c48  jal         func_127120
label_2f44b0:
    if (ctx->pc == 0x2F44B0u) {
        ctx->pc = 0x2F44B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44ACu;
        // 0x2f44b0: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44B4u;
        goto label_2f44b4;
    }
    ctx->pc = 0x2F44ACu;
    SET_GPR_U32(ctx, 31, 0x2F44B4u);
    ctx->pc = 0x2F44B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F44ACu;
    // 0x2f44b0: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F44ACu, 0x2F44B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F44B4u;
label_2f44b4:
    // 0x2f44b4: 0x1000000f  b           . + 4 + (0xF << 2)
label_2f44b8:
    if (ctx->pc == 0x2F44B8u) {
        ctx->pc = 0x2F44BCu;
        goto label_2f44bc;
    }
    ctx->pc = 0x2F44B4u;
    {
        const bool branch_taken_0x2f44b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f44b4) {
            ctx->pc = 0x2F44F4u;
            goto label_2f44f4;
        }
    }
    ctx->pc = 0x2F44BCu;
label_2f44bc:
    // 0x2f44bc: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f44bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2f44c0:
    // 0x2f44c0: 0x14750013  bne         $v1, $s5, . + 4 + (0x13 << 2)
label_2f44c4:
    if (ctx->pc == 0x2F44C4u) {
        ctx->pc = 0x2F44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44C0u;
        // 0x2f44c4: 0x17b840  sll         $s7, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44C8u;
        goto label_2f44c8;
    }
    ctx->pc = 0x2F44C0u;
    {
        const bool branch_taken_0x2f44c0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 21));
        ctx->pc = 0x2F44C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44C0u;
        // 0x2f44c4: 0x17b840  sll         $s7, $s7, 1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)SLL32(GPR_U32(ctx, 23), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f44c0) {
            ctx->pc = 0x2F4510u;
            goto label_2f4510;
        }
    }
    ctx->pc = 0x2F44C8u;
label_2f44c8:
    // 0x2f44c8: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2f44c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2f44cc:
    // 0x2f44cc: 0xc0be46c  jal         func_2F91B0
label_2f44d0:
    if (ctx->pc == 0x2F44D0u) {
        ctx->pc = 0x2F44D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44CCu;
        // 0x2f44d0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44D4u;
        goto label_2f44d4;
    }
    ctx->pc = 0x2F44CCu;
    SET_GPR_U32(ctx, 31, 0x2F44D4u);
    ctx->pc = 0x2F44D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F44CCu;
    // 0x2f44d0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F91B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F91B0u, 0x2F44CCu, 0x2F44D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F44D4u;
label_2f44d4:
    // 0x2f44d4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
label_2f44d8:
    if (ctx->pc == 0x2F44D8u) {
        ctx->pc = 0x2F44D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44D4u;
        // 0x2f44d8: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44DCu;
        goto label_2f44dc;
    }
    ctx->pc = 0x2F44D4u;
    {
        const bool branch_taken_0x2f44d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f44d4) {
            ctx->pc = 0x2F44D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F44D4u;
            // 0x2f44d8: 0xafa20028  sw          $v0, 0x28($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4504u;
            goto label_2f4504;
        }
    }
    ctx->pc = 0x2F44DCu;
label_2f44dc:
    // 0x2f44dc: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x2f44dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2f44e0:
    // 0x2f44e0: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f44e0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f44e4:
    // 0x2f44e4: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2f44e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f44e8:
    // 0x2f44e8: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2f44e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f44ec:
    // 0x2f44ec: 0xc049c48  jal         func_127120
label_2f44f0:
    if (ctx->pc == 0x2F44F0u) {
        ctx->pc = 0x2F44F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44ECu;
        // 0x2f44f0: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44F4u;
        goto label_2f44f4;
    }
    ctx->pc = 0x2F44ECu;
    SET_GPR_U32(ctx, 31, 0x2F44F4u);
    ctx->pc = 0x2F44F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F44ECu;
    // 0x2f44f0: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F44ECu, 0x2F44F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F44F4u;
label_2f44f4:
    // 0x2f44f4: 0x57d50061  bnel        $fp, $s5, . + 4 + (0x61 << 2)
label_2f44f8:
    if (ctx->pc == 0x2F44F8u) {
        ctx->pc = 0x2F44F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F44F4u;
        // 0x2f44f8: 0x3d6f02f  dsubu       $fp, $fp, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) - GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F44FCu;
        goto label_2f44fc;
    }
    ctx->pc = 0x2F44F4u;
    {
        const bool branch_taken_0x2f44f4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        if (branch_taken_0x2f44f4) {
            ctx->pc = 0x2F44F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F44F4u;
            // 0x2f44f8: 0x3d6f02f  dsubu       $fp, $fp, $s6 (Delay Slot)
            SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) - GPR_U64(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F467Cu;
            goto label_2f467c;
        }
    }
    ctx->pc = 0x2F44FCu;
label_2f44fc:
    // 0x2f44fc: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2f4500:
    if (ctx->pc == 0x2F4500u) {
        ctx->pc = 0x2F4504u;
        goto label_2f4504;
    }
    ctx->pc = 0x2F44FCu;
    {
        const bool branch_taken_0x2f44fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2f44fc) {
            ctx->pc = 0x2F467Cu;
            goto label_2f467c;
        }
    }
    ctx->pc = 0x2F4504u;
label_2f4504:
    // 0x2f4504: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2f4504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2f4508:
    // 0x2f4508: 0x1075000f  beq         $v1, $s5, . + 4 + (0xF << 2)
label_2f450c:
    if (ctx->pc == 0x2F450Cu) {
        ctx->pc = 0x2F450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4508u;
        // 0x2f450c: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4510u;
        goto label_2f4510;
    }
    ctx->pc = 0x2F4508u;
    {
        const bool branch_taken_0x2f4508 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x2F450Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4508u;
        // 0x2f450c: 0x8fa50028  lw          $a1, 0x28($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4508) {
            ctx->pc = 0x2F4548u;
            goto label_2f4548;
        }
    }
    ctx->pc = 0x2F4510u;
label_2f4510:
    // 0x2f4510: 0x8e4200d0  lw          $v0, 0xD0($s2)
    ctx->pc = 0x2f4510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 208)));
label_2f4514:
    // 0x2f4514: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f4514u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f4518:
    // 0x2f4518: 0x8e4300d4  lw          $v1, 0xD4($s2)
    ctx->pc = 0x2f4518u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 212)));
label_2f451c:
    // 0x2f451c: 0x60e02d  daddu       $gp, $v1, $zero
    ctx->pc = 0x2f451cu;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f4520:
    // 0x2f4520: 0x8e47017c  lw          $a3, 0x17C($s2)
    ctx->pc = 0x2f4520u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 380)));
label_2f4524:
    // 0x2f4524: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f4524u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f4528:
    // 0x2f4528: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x2f4528u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_2f452c:
    // 0x2f452c: 0x40f809  jalr        $v0
label_2f4530:
    if (ctx->pc == 0x2F4530u) {
        ctx->pc = 0x2F4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F452Cu;
        // 0x2f4530: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4534u;
        goto label_2f4534;
    }
    ctx->pc = 0x2F452Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2F4534u);
        ctx->pc = 0x2F4530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F452Cu;
        // 0x2f4530: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F452Cu, 0x2F4534u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4534u;
label_2f4534:
    // 0x2f4534: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f4534u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4538:
    // 0x2f4538: 0x12c20008  beq         $s6, $v0, . + 4 + (0x8 << 2)
label_2f453c:
    if (ctx->pc == 0x2F453Cu) {
        ctx->pc = 0x2F453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4538u;
        // 0x2f453c: 0x2404fc0a  addiu       $a0, $zero, -0x3F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966282));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4540u;
        goto label_2f4540;
    }
    ctx->pc = 0x2F4538u;
    {
        const bool branch_taken_0x2f4538 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F453Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4538u;
        // 0x2f453c: 0x2404fc0a  addiu       $a0, $zero, -0x3F6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966282));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4538) {
            ctx->pc = 0x2F455Cu;
            goto label_2f455c;
        }
    }
    ctx->pc = 0x2F4540u;
label_2f4540:
    // 0x2f4540: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2f4544:
    if (ctx->pc == 0x2F4544u) {
        ctx->pc = 0x2F4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4540u;
        // 0x2f4544: 0xae440020  sw          $a0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4548u;
        goto label_2f4548;
    }
    ctx->pc = 0x2F4540u;
    {
        const bool branch_taken_0x2f4540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4540u;
        // 0x2f4544: 0xae440020  sw          $a0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4540) {
            ctx->pc = 0x2F47D4u;
            goto label_2f47d4;
        }
    }
    ctx->pc = 0x2F4548u;
label_2f4548:
    // 0x2f4548: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x2f4548u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_2f454c:
    // 0x2f454c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x2f454cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f4550:
    // 0x2f4550: 0xa22021  addu        $a0, $a1, $v0
    ctx->pc = 0x2f4550u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_2f4554:
    // 0x2f4554: 0xc049c48  jal         func_127120
label_2f4558:
    if (ctx->pc == 0x2F4558u) {
        ctx->pc = 0x2F4558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4554u;
        // 0x2f4558: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F455Cu;
        goto label_2f455c;
    }
    ctx->pc = 0x2F4554u;
    SET_GPR_U32(ctx, 31, 0x2F455Cu);
    ctx->pc = 0x2F4558u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F4554u;
    // 0x2f4558: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F4554u, 0x2F455Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F455Cu;
label_2f455c:
    // 0x2f455c: 0xafb40040  sw          $s4, 0x40($sp)
    ctx->pc = 0x2f455cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 20));
label_2f4560:
    // 0x2f4560: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2f4560u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f4564:
    // 0x2f4564: 0x14103c  dsll32      $v0, $s4, 0
    ctx->pc = 0x2f4564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 20) << (32 + 0));
label_2f4568:
    // 0x2f4568: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2f4568u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_2f456c:
    // 0x2f456c: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f456cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2f4570:
    // 0x2f4570: 0x8e430084  lw          $v1, 0x84($s2)
    ctx->pc = 0x2f4570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f4574:
    // 0x2f4574: 0x10750021  beq         $v1, $s5, . + 4 + (0x21 << 2)
label_2f4578:
    if (ctx->pc == 0x2F4578u) {
        ctx->pc = 0x2F4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4574u;
        // 0x2f4578: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F457Cu;
        goto label_2f457c;
    }
    ctx->pc = 0x2F4574u;
    {
        const bool branch_taken_0x2f4574 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 21));
        ctx->pc = 0x2F4578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4574u;
        // 0x2f4578: 0xfc820020  sd          $v0, 0x20($a0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 4), 32), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4574) {
            ctx->pc = 0x2F45FCu;
            goto label_2f45fc;
        }
    }
    ctx->pc = 0x2F457Cu;
label_2f457c:
    // 0x2f457c: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2f457cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f4580:
    // 0x2f4580: 0xdca60020  ld          $a2, 0x20($a1)
    ctx->pc = 0x2f4580u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 32)));
label_2f4584:
    // 0x2f4584: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f4584u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f4588:
    // 0x2f4588: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f4588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f458c:
    // 0x2f458c: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
label_2f4590:
    if (ctx->pc == 0x2F4590u) {
        ctx->pc = 0x2F4590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F458Cu;
        // 0x2f4590: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4594u;
        goto label_2f4594;
    }
    ctx->pc = 0x2F458Cu;
    {
        const bool branch_taken_0x2f458c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2f458c) {
            ctx->pc = 0x2F4590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F458Cu;
            // 0x2f4590: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F45F8u;
            goto label_2f45f8;
        }
    }
    ctx->pc = 0x2F4594u;
label_2f4594:
    // 0x2f4594: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x2f4594u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2f4598:
    // 0x2f4598: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2f4598u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f459c:
    // 0x2f459c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2f45a0:
    if (ctx->pc == 0x2F45A0u) {
        ctx->pc = 0x2F45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F459Cu;
        // 0x2f45a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45A4u;
        goto label_2f45a4;
    }
    ctx->pc = 0x2F459Cu;
    {
        const bool branch_taken_0x2f459c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F459Cu;
        // 0x2f45a0: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f459c) {
            ctx->pc = 0x2F45E4u;
            goto label_2f45e4;
        }
    }
    ctx->pc = 0x2F45A4u;
label_2f45a4:
    // 0x2f45a4: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2f45a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_2f45a8:
    // 0x2f45a8: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_2f45ac:
    if (ctx->pc == 0x2F45ACu) {
        ctx->pc = 0x2F45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45A8u;
        // 0x2f45ac: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45B0u;
        goto label_2f45b0;
    }
    ctx->pc = 0x2F45A8u;
    {
        const bool branch_taken_0x2f45a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F45ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45A8u;
        // 0x2f45ac: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45a8) {
            ctx->pc = 0x2F45E4u;
            goto label_2f45e4;
        }
    }
    ctx->pc = 0x2F45B0u;
label_2f45b0:
    // 0x2f45b0: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f45b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f45b4:
    // 0x2f45b4: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x2f45b4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_2f45b8:
    // 0x2f45b8: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f45b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f45bc:
    // 0x2f45bc: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2f45bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2f45c0:
    // 0x2f45c0: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f45c0u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f45c4:
    // 0x2f45c4: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x2f45c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f45c8:
    // 0x2f45c8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f45c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f45cc:
    // 0x2f45cc: 0x60f809  jalr        $v1
label_2f45d0:
    if (ctx->pc == 0x2F45D0u) {
        ctx->pc = 0x2F45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45CCu;
        // 0x2f45d0: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45D4u;
        goto label_2f45d4;
    }
    ctx->pc = 0x2F45CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F45D4u);
        ctx->pc = 0x2F45D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45CCu;
        // 0x2f45d0: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F45CCu, 0x2F45D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F45D4u;
label_2f45d4:
    // 0x2f45d4: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f45d4u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f45d8:
    // 0x2f45d8: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x2f45d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f45dc:
    // 0x2f45dc: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x2f45dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f45e0:
    // 0x2f45e0: 0xdc460020  ld          $a2, 0x20($v0)
    ctx->pc = 0x2f45e0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 2), 32)));
label_2f45e4:
    // 0x2f45e4: 0x224882d  daddu       $s1, $s1, $a0
    ctx->pc = 0x2f45e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
label_2f45e8:
    // 0x2f45e8: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f45e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f45ec:
    // 0x2f45ec: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f45ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f45f0:
    // 0x2f45f0: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_2f45f4:
    if (ctx->pc == 0x2F45F4u) {
        ctx->pc = 0x2F45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45F0u;
        // 0x2f45f4: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F45F8u;
        goto label_2f45f8;
    }
    ctx->pc = 0x2F45F0u;
    {
        const bool branch_taken_0x2f45f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F45F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45F0u;
        // 0x2f45f4: 0x8fa30068  lw          $v1, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f45f0) {
            ctx->pc = 0x2F4598u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f4598;
        }
    }
    ctx->pc = 0x2F45F8u;
label_2f45f8:
    // 0x2f45f8: 0xfc710000  sd          $s1, 0x0($v1)
    ctx->pc = 0x2f45f8u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 17));
label_2f45fc:
    // 0x2f45fc: 0x57d50001  bnel        $fp, $s5, . + 4 + (0x1 << 2)
label_2f4600:
    if (ctx->pc == 0x2F4600u) {
        ctx->pc = 0x2F4600u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F45FCu;
        // 0x2f4600: 0x3d6f02f  dsubu       $fp, $fp, $s6 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) - GPR_U64(ctx, 22));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4604u;
        goto label_2f4604;
    }
    ctx->pc = 0x2F45FCu;
    {
        const bool branch_taken_0x2f45fc = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        if (branch_taken_0x2f45fc) {
            ctx->pc = 0x2F4600u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F45FCu;
            // 0x2f4600: 0x3d6f02f  dsubu       $fp, $fp, $s6 (Delay Slot)
            SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) - GPR_U64(ctx, 22));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F4604u;
            goto label_2f4604;
        }
    }
    ctx->pc = 0x2F4604u;
label_2f4604:
    // 0x2f4604: 0x1fc00003  bgtz        $fp, . + 4 + (0x3 << 2)
label_2f4608:
    if (ctx->pc == 0x2F4608u) {
        ctx->pc = 0x2F460Cu;
        goto label_2f460c;
    }
    ctx->pc = 0x2F4604u;
    {
        const bool branch_taken_0x2f4604 = (GPR_S32(ctx, 30) > 0);
        if (branch_taken_0x2f4604) {
            ctx->pc = 0x2F4614u;
            goto label_2f4614;
        }
    }
    ctx->pc = 0x2F460Cu;
label_2f460c:
    // 0x2f460c: 0x17d5001b  bne         $fp, $s5, . + 4 + (0x1B << 2)
label_2f4610:
    if (ctx->pc == 0x2F4610u) {
        ctx->pc = 0x2F4614u;
        goto label_2f4614;
    }
    ctx->pc = 0x2F460Cu;
    {
        const bool branch_taken_0x2f460c = (GPR_U64(ctx, 30) != GPR_U64(ctx, 21));
        if (branch_taken_0x2f460c) {
            ctx->pc = 0x2F467Cu;
            goto label_2f467c;
        }
    }
    ctx->pc = 0x2F4614u;
label_2f4614:
    // 0x2f4614: 0x13d50007  beq         $fp, $s5, . + 4 + (0x7 << 2)
label_2f4618:
    if (ctx->pc == 0x2F4618u) {
        ctx->pc = 0x2F4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4614u;
        // 0x2f4618: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F461Cu;
        goto label_2f461c;
    }
    ctx->pc = 0x2F4614u;
    {
        const bool branch_taken_0x2f4614 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 21));
        ctx->pc = 0x2F4618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4614u;
        // 0x2f4618: 0x8fa40030  lw          $a0, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4614) {
            ctx->pc = 0x2F4634u;
            goto label_2f4634;
        }
    }
    ctx->pc = 0x2F461Cu;
label_2f461c:
    // 0x2f461c: 0x933023  subu        $a2, $a0, $s3
    ctx->pc = 0x2f461cu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 19)));
label_2f4620:
    // 0x2f4620: 0x3c6102a  slt         $v0, $fp, $a2
    ctx->pc = 0x2f4620u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
label_2f4624:
    // 0x2f4624: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_2f4628:
    if (ctx->pc == 0x2F4628u) {
        ctx->pc = 0x2F4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4624u;
        // 0x2f4628: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F462Cu;
        goto label_2f462c;
    }
    ctx->pc = 0x2F4624u;
    {
        const bool branch_taken_0x2f4624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4624u;
        // 0x2f4628: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4624) {
            ctx->pc = 0x2F4644u;
            goto label_2f4644;
        }
    }
    ctx->pc = 0x2F462Cu;
label_2f462c:
    // 0x2f462c: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f4630:
    if (ctx->pc == 0x2F4630u) {
        ctx->pc = 0x2F4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F462Cu;
        // 0x2f4630: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4634u;
        goto label_2f4634;
    }
    ctx->pc = 0x2F462Cu;
    {
        const bool branch_taken_0x2f462c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F462Cu;
        // 0x2f4630: 0x8fa50024  lw          $a1, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f462c) {
            ctx->pc = 0x2F4650u;
            goto label_2f4650;
        }
    }
    ctx->pc = 0x2F4634u;
label_2f4634:
    // 0x2f4634: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x2f4634u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_2f4638:
    // 0x2f4638: 0xb33023  subu        $a2, $a1, $s3
    ctx->pc = 0x2f4638u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
label_2f463c:
    // 0x2f463c: 0x10000003  b           . + 4 + (0x3 << 2)
label_2f4640:
    if (ctx->pc == 0x2F4640u) {
        ctx->pc = 0x2F4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F463Cu;
        // 0x2f4640: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4644u;
        goto label_2f4644;
    }
    ctx->pc = 0x2F463Cu;
    {
        const bool branch_taken_0x2f463c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4640u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F463Cu;
        // 0x2f4640: 0xc0882d  daddu       $s1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f463c) {
            ctx->pc = 0x2F464Cu;
            goto label_2f464c;
        }
    }
    ctx->pc = 0x2F4644u;
label_2f4644:
    // 0x2f4644: 0x1e883c  dsll32      $s1, $fp, 0
    ctx->pc = 0x2f4644u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 30) << (32 + 0));
label_2f4648:
    // 0x2f4648: 0x11883f  dsra32      $s1, $s1, 0
    ctx->pc = 0x2f4648u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 0));
label_2f464c:
    // 0x2f464c: 0x8fa50024  lw          $a1, 0x24($sp)
    ctx->pc = 0x2f464cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
label_2f4650:
    // 0x2f4650: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2f4650u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2f4654:
    // 0x2f4654: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4654u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f4658:
    // 0x2f4658: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2f4658u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f465c:
    // 0x2f465c: 0xc0bcdc2  jal         func_2F3708
label_2f4660:
    if (ctx->pc == 0x2F4660u) {
        ctx->pc = 0x2F4660u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F465Cu;
        // 0x2f4660: 0x27a80018  addiu       $t0, $sp, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4664u;
        goto label_2f4664;
    }
    ctx->pc = 0x2F465Cu;
    SET_GPR_U32(ctx, 31, 0x2F4664u);
    ctx->pc = 0x2F4660u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F465Cu;
    // 0x2f4660: 0x27a80018  addiu       $t0, $sp, 0x18 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F3708u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3708u, 0x2F465Cu, 0x2F4664u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4664u;
label_2f4664:
    // 0x2f4664: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x2f4664u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f4668:
    // 0x2f4668: 0x8c830028  lw          $v1, 0x28($a0)
    ctx->pc = 0x2f4668u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_2f466c:
    // 0x2f466c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
label_2f4670:
    if (ctx->pc == 0x2F4670u) {
        ctx->pc = 0x2F4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F466Cu;
        // 0x2f4670: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4674u;
        goto label_2f4674;
    }
    ctx->pc = 0x2F466Cu;
    {
        const bool branch_taken_0x2f466c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F466Cu;
        // 0x2f4670: 0x40b02d  daddu       $s6, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f466c) {
            ctx->pc = 0x2F467Cu;
            goto label_2f467c;
        }
    }
    ctx->pc = 0x2F4674u;
label_2f4674:
    // 0x2f4674: 0x1ec0ff72  bgtz        $s6, . + 4 + (-0x8E << 2)
label_2f4678:
    if (ctx->pc == 0x2F4678u) {
        ctx->pc = 0x2F4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4674u;
        // 0x2f4678: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F467Cu;
        goto label_2f467c;
    }
    ctx->pc = 0x2F4674u;
    {
        const bool branch_taken_0x2f4674 = (GPR_S32(ctx, 22) > 0);
        ctx->pc = 0x2F4678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4674u;
        // 0x2f4678: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4674) {
            ctx->pc = 0x2F4440u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f4440;
        }
    }
    ctx->pc = 0x2F467Cu;
label_2f467c:
    // 0x2f467c: 0xc0bc780  jal         func_2F1E00
label_2f4680:
    if (ctx->pc == 0x2F4680u) {
        ctx->pc = 0x2F4680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F467Cu;
        // 0x2f4680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4684u;
        goto label_2f4684;
    }
    ctx->pc = 0x2F467Cu;
    SET_GPR_U32(ctx, 31, 0x2F4684u);
    ctx->pc = 0x2F4680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F467Cu;
    // 0x2f4680: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E00u, 0x2F467Cu, 0x2F4684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4684u;
label_2f4684:
    // 0x2f4684: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2f4688:
    if (ctx->pc == 0x2F4688u) {
        ctx->pc = 0x2F4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4684u;
        // 0x2f4688: 0xdfa20050  ld          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F468Cu;
        goto label_2f468c;
    }
    ctx->pc = 0x2F4684u;
    {
        const bool branch_taken_0x2f4684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4684u;
        // 0x2f4688: 0xdfa20050  ld          $v0, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4684) {
            ctx->pc = 0x2F469Cu;
            goto label_2f469c;
        }
    }
    ctx->pc = 0x2F468Cu;
label_2f468c:
    // 0x2f468c: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x2f468cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f4690:
    // 0x2f4690: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2f4690u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2f4694:
    // 0x2f4694: 0xaca20028  sw          $v0, 0x28($a1)
    ctx->pc = 0x2f4694u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
label_2f4698:
    // 0x2f4698: 0xdfa20050  ld          $v0, 0x50($sp)
    ctx->pc = 0x2f4698u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2f469c:
    // 0x2f469c: 0x1840000c  blez        $v0, . + 4 + (0xC << 2)
label_2f46a0:
    if (ctx->pc == 0x2F46A0u) {
        ctx->pc = 0x2F46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F469Cu;
        // 0x2f46a0: 0x2bc2ffff  slti        $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46A4u;
        goto label_2f46a4;
    }
    ctx->pc = 0x2F469Cu;
    {
        const bool branch_taken_0x2f469c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x2F46A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F469Cu;
        // 0x2f46a0: 0x2bc2ffff  slti        $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f469c) {
            ctx->pc = 0x2F46D0u;
            goto label_2f46d0;
        }
    }
    ctx->pc = 0x2F46A4u;
label_2f46a4:
    // 0x2f46a4: 0x1bc0000a  blez        $fp, . + 4 + (0xA << 2)
label_2f46a8:
    if (ctx->pc == 0x2F46A8u) {
        ctx->pc = 0x2F46ACu;
        goto label_2f46ac;
    }
    ctx->pc = 0x2F46A4u;
    {
        const bool branch_taken_0x2f46a4 = (GPR_S32(ctx, 30) <= 0);
        if (branch_taken_0x2f46a4) {
            ctx->pc = 0x2F46D0u;
            goto label_2f46d0;
        }
    }
    ctx->pc = 0x2F46ACu;
label_2f46ac:
    // 0x2f46ac: 0x6c00008  bltz        $s6, . + 4 + (0x8 << 2)
label_2f46b0:
    if (ctx->pc == 0x2F46B0u) {
        ctx->pc = 0x2F46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46ACu;
        // 0x2f46b0: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46B4u;
        goto label_2f46b4;
    }
    ctx->pc = 0x2F46ACu;
    {
        const bool branch_taken_0x2f46ac = (GPR_S32(ctx, 22) < 0);
        ctx->pc = 0x2F46B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46ACu;
        // 0x2f46b0: 0x8fa3002c  lw          $v1, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46ac) {
            ctx->pc = 0x2F46D0u;
            goto label_2f46d0;
        }
    }
    ctx->pc = 0x2F46B4u;
label_2f46b4:
    // 0x2f46b4: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2f46b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2f46b8:
    // 0x2f46b8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
label_2f46bc:
    if (ctx->pc == 0x2F46BCu) {
        ctx->pc = 0x2F46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46B8u;
        // 0x2f46bc: 0x2bc2ffff  slti        $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46C0u;
        goto label_2f46c0;
    }
    ctx->pc = 0x2F46B8u;
    {
        const bool branch_taken_0x2f46b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46B8u;
        // 0x2f46bc: 0x2bc2ffff  slti        $v0, $fp, -0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4294967295) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46b8) {
            ctx->pc = 0x2F46D0u;
            goto label_2f46d0;
        }
    }
    ctx->pc = 0x2F46C0u;
label_2f46c0:
    // 0x2f46c0: 0x2402fc09  addiu       $v0, $zero, -0x3F7
    ctx->pc = 0x2f46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966281));
label_2f46c4:
    // 0x2f46c4: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x2f46c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_2f46c8:
    // 0x2f46c8: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2f46c8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f46cc:
    // 0x2f46cc: 0x2bc2ffff  slti        $v0, $fp, -0x1
    ctx->pc = 0x2f46ccu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 30) < (int64_t)(int32_t)4294967295) ? 1 : 0);
label_2f46d0:
    // 0x2f46d0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2f46d4:
    if (ctx->pc == 0x2F46D4u) {
        ctx->pc = 0x2F46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46D0u;
        // 0x2f46d4: 0x2402fc09  addiu       $v0, $zero, -0x3F7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966281));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F46D8u;
        goto label_2f46d8;
    }
    ctx->pc = 0x2F46D0u;
    {
        const bool branch_taken_0x2f46d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F46D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F46D0u;
        // 0x2f46d4: 0x2402fc09  addiu       $v0, $zero, -0x3F7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966281));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f46d0) {
            ctx->pc = 0x2F46E0u;
            goto label_2f46e0;
        }
    }
    ctx->pc = 0x2F46D8u;
label_2f46d8:
    // 0x2f46d8: 0xae420020  sw          $v0, 0x20($s2)
    ctx->pc = 0x2f46d8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
label_2f46dc:
    // 0x2f46dc: 0x2416ffff  addiu       $s6, $zero, -0x1
    ctx->pc = 0x2f46dcu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f46e0:
    // 0x2f46e0: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x2f46e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_2f46e4:
    // 0x2f46e4: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2f46e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
label_2f46e8:
    // 0x2f46e8: 0x4103c  dsll32      $v0, $a0, 0
    ctx->pc = 0x2f46e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
label_2f46ec:
    // 0x2f46ec: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x2f46ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f46f0:
    // 0x2f46f0: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x2f46f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
label_2f46f4:
    // 0x2f46f4: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x2f46f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f46f8:
    // 0x2f46f8: 0xaca30018  sw          $v1, 0x18($a1)
    ctx->pc = 0x2f46f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 3));
label_2f46fc:
    // 0x2f46fc: 0xfca20020  sd          $v0, 0x20($a1)
    ctx->pc = 0x2f46fcu;
    WRITE64(ADD32(GPR_U32(ctx, 5), 32), GPR_U64(ctx, 2));
label_2f4700:
    // 0x2f4700: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x2f4700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f4704:
    // 0x2f4704: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_2f4708:
    if (ctx->pc == 0x2F4708u) {
        ctx->pc = 0x2F4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4704u;
        // 0x2f4708: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F470Cu;
        goto label_2f470c;
    }
    ctx->pc = 0x2F4704u;
    {
        const bool branch_taken_0x2f4704 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x2F4708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4704u;
        // 0x2f4708: 0xdfb10018  ld          $s1, 0x18($sp) (Delay Slot)
        SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4704) {
            ctx->pc = 0x2F478Cu;
            goto label_2f478c;
        }
    }
    ctx->pc = 0x2F470Cu;
label_2f470c:
    // 0x2f470c: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x2f470cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f4710:
    // 0x2f4710: 0xdc860020  ld          $a2, 0x20($a0)
    ctx->pc = 0x2f4710u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 4), 32)));
label_2f4714:
    // 0x2f4714: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f4714u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f4718:
    // 0x2f4718: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f4718u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f471c:
    // 0x2f471c: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
label_2f4720:
    if (ctx->pc == 0x2F4720u) {
        ctx->pc = 0x2F4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F471Cu;
        // 0x2f4720: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4724u;
        goto label_2f4724;
    }
    ctx->pc = 0x2F471Cu;
    {
        const bool branch_taken_0x2f471c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F4720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F471Cu;
        // 0x2f4720: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f471c) {
            ctx->pc = 0x2F4788u;
            goto label_2f4788;
        }
    }
    ctx->pc = 0x2F4724u;
label_2f4724:
    // 0x2f4724: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x2f4724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f4728:
    // 0x2f4728: 0x8e420078  lw          $v0, 0x78($s2)
    ctx->pc = 0x2f4728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f472c:
    // 0x2f472c: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_2f4730:
    if (ctx->pc == 0x2F4730u) {
        ctx->pc = 0x2F4730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F472Cu;
        // 0x2f4730: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4734u;
        goto label_2f4734;
    }
    ctx->pc = 0x2F472Cu;
    {
        const bool branch_taken_0x2f472c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F472Cu;
        // 0x2f4730: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f472c) {
            ctx->pc = 0x2F4774u;
            goto label_2f4774;
        }
    }
    ctx->pc = 0x2F4734u;
label_2f4734:
    // 0x2f4734: 0x8e4300b4  lw          $v1, 0xB4($s2)
    ctx->pc = 0x2f4734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_2f4738:
    // 0x2f4738: 0x1062000e  beq         $v1, $v0, . + 4 + (0xE << 2)
label_2f473c:
    if (ctx->pc == 0x2F473Cu) {
        ctx->pc = 0x2F473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4738u;
        // 0x2f473c: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4740u;
        goto label_2f4740;
    }
    ctx->pc = 0x2F4738u;
    {
        const bool branch_taken_0x2f4738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F473Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4738u;
        // 0x2f473c: 0x224102d  daddu       $v0, $s1, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4738) {
            ctx->pc = 0x2F4774u;
            goto label_2f4774;
        }
    }
    ctx->pc = 0x2F4740u;
label_2f4740:
    // 0x2f4740: 0xa2102a  slt         $v0, $a1, $v0
    ctx->pc = 0x2f4740u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2f4744:
    // 0x2f4744: 0x222280a  movz        $a1, $s1, $v0
    ctx->pc = 0x2f4744u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
label_2f4748:
    // 0x2f4748: 0x380802d  daddu       $s0, $gp, $zero
    ctx->pc = 0x2f4748u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 28) + (uint64_t)GPR_U64(ctx, 0));
label_2f474c:
    // 0x2f474c: 0x8e420080  lw          $v0, 0x80($s2)
    ctx->pc = 0x2f474cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 128)));
label_2f4750:
    // 0x2f4750: 0x40e02d  daddu       $gp, $v0, $zero
    ctx->pc = 0x2f4750u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2f4754:
    // 0x2f4754: 0x8e430078  lw          $v1, 0x78($s2)
    ctx->pc = 0x2f4754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 120)));
label_2f4758:
    // 0x2f4758: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2f4758u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2f475c:
    // 0x2f475c: 0x60f809  jalr        $v1
label_2f4760:
    if (ctx->pc == 0x2F4760u) {
        ctx->pc = 0x2F4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F475Cu;
        // 0x2f4760: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4764u;
        goto label_2f4764;
    }
    ctx->pc = 0x2F475Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2F4764u);
        ctx->pc = 0x2F4760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F475Cu;
        // 0x2f4760: 0x8e46007c  lw          $a2, 0x7C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 124)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F475Cu, 0x2F4764u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2F4764u;
label_2f4764:
    // 0x2f4764: 0x200e02d  daddu       $gp, $s0, $zero
    ctx->pc = 0x2f4764u;
    SET_GPR_U64(ctx, 28, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2f4768:
    // 0x2f4768: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x2f4768u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
label_2f476c:
    // 0x2f476c: 0x8e440084  lw          $a0, 0x84($s2)
    ctx->pc = 0x2f476cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 132)));
label_2f4770:
    // 0x2f4770: 0xdca60020  ld          $a2, 0x20($a1)
    ctx->pc = 0x2f4770u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 5), 32)));
label_2f4774:
    // 0x2f4774: 0x224882d  daddu       $s1, $s1, $a0
    ctx->pc = 0x2f4774u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 4));
label_2f4778:
    // 0x2f4778: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x2f4778u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_2f477c:
    // 0x2f477c: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x2f477cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_2f4780:
    // 0x2f4780: 0x1040ffe9  beqz        $v0, . + 4 + (-0x17 << 2)
label_2f4784:
    if (ctx->pc == 0x2F4784u) {
        ctx->pc = 0x2F4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4780u;
        // 0x2f4784: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4788u;
        goto label_2f4788;
    }
    ctx->pc = 0x2F4780u;
    {
        const bool branch_taken_0x2f4780 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F4784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4780u;
        // 0x2f4784: 0x8fa20068  lw          $v0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f4780) {
            ctx->pc = 0x2F4728u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f4728;
        }
    }
    ctx->pc = 0x2F4788u;
label_2f4788:
    // 0x2f4788: 0xfc510000  sd          $s1, 0x0($v0)
    ctx->pc = 0x2f4788u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 17));
label_2f478c:
    // 0x2f478c: 0xc0be45e  jal         func_2F9178
label_2f4790:
    if (ctx->pc == 0x2F4790u) {
        ctx->pc = 0x2F4790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F478Cu;
        // 0x2f4790: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4794u;
        goto label_2f4794;
    }
    ctx->pc = 0x2F478Cu;
    SET_GPR_U32(ctx, 31, 0x2F4794u);
    ctx->pc = 0x2F4790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F478Cu;
    // 0x2f4790: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F478Cu, 0x2F4794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F4794u;
label_2f4794:
    // 0x2f4794: 0x8fa3002c  lw          $v1, 0x2C($sp)
    ctx->pc = 0x2f4794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_2f4798:
    // 0x2f4798: 0x8c620028  lw          $v0, 0x28($v1)
    ctx->pc = 0x2f4798u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_2f479c:
    // 0x2f479c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2f47a0:
    if (ctx->pc == 0x2F47A0u) {
        ctx->pc = 0x2F47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F479Cu;
        // 0x2f47a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47A4u;
        goto label_2f47a4;
    }
    ctx->pc = 0x2F479Cu;
    {
        const bool branch_taken_0x2f479c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F479Cu;
        // 0x2f47a0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f479c) {
            ctx->pc = 0x2F47C0u;
            goto label_2f47c0;
        }
    }
    ctx->pc = 0x2F47A4u;
label_2f47a4:
    // 0x2f47a4: 0xc0bc784  jal         func_2F1E10
label_2f47a8:
    if (ctx->pc == 0x2F47A8u) {
        ctx->pc = 0x2F47A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47A4u;
        // 0x2f47a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47ACu;
        goto label_2f47ac;
    }
    ctx->pc = 0x2F47A4u;
    SET_GPR_U32(ctx, 31, 0x2F47ACu);
    ctx->pc = 0x2F47A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F47A4u;
    // 0x2f47a8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1E10u, 0x2F47A4u, 0x2F47ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F47ACu;
label_2f47ac:
    // 0x2f47ac: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
label_2f47b0:
    if (ctx->pc == 0x2F47B0u) {
        ctx->pc = 0x2F47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47ACu;
        // 0x2f47b0: 0x2402fc0d  addiu       $v0, $zero, -0x3F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47B4u;
        goto label_2f47b4;
    }
    ctx->pc = 0x2F47ACu;
    {
        const bool branch_taken_0x2f47ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F47B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47ACu;
        // 0x2f47b0: 0x2402fc0d  addiu       $v0, $zero, -0x3F3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47ac) {
            ctx->pc = 0x2F47B8u;
            goto label_2f47b8;
        }
    }
    ctx->pc = 0x2F47B4u;
label_2f47b4:
    // 0x2f47b4: 0x2402fc13  addiu       $v0, $zero, -0x3ED
    ctx->pc = 0x2f47b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966291));
label_2f47b8:
    // 0x2f47b8: 0x1000000a  b           . + 4 + (0xA << 2)
label_2f47bc:
    if (ctx->pc == 0x2F47BCu) {
        ctx->pc = 0x2F47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47B8u;
        // 0x2f47bc: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47C0u;
        goto label_2f47c0;
    }
    ctx->pc = 0x2F47B8u;
    {
        const bool branch_taken_0x2f47b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47B8u;
        // 0x2f47bc: 0xae420020  sw          $v0, 0x20($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47b8) {
            ctx->pc = 0x2F47E4u;
            goto label_2f47e4;
        }
    }
    ctx->pc = 0x2F47C0u;
label_2f47c0:
    // 0x2f47c0: 0x56182a  slt         $v1, $v0, $s6
    ctx->pc = 0x2f47c0u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 22)) ? 1 : 0);
label_2f47c4:
    // 0x2f47c4: 0x10000008  b           . + 4 + (0x8 << 2)
label_2f47c8:
    if (ctx->pc == 0x2F47C8u) {
        ctx->pc = 0x2F47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47C4u;
        // 0x2f47c8: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47CCu;
        goto label_2f47cc;
    }
    ctx->pc = 0x2F47C4u;
    {
        const bool branch_taken_0x2f47c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47C4u;
        // 0x2f47c8: 0x3100b  movn        $v0, $zero, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f47c4) {
            ctx->pc = 0x2F47E8u;
            goto label_2f47e8;
        }
    }
    ctx->pc = 0x2F47CCu;
label_2f47cc:
    // 0x2f47cc: 0xc0be45e  jal         func_2F9178
label_2f47d0:
    if (ctx->pc == 0x2F47D0u) {
        ctx->pc = 0x2F47D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47CCu;
        // 0x2f47d0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47D4u;
        goto label_2f47d4;
    }
    ctx->pc = 0x2F47CCu;
    SET_GPR_U32(ctx, 31, 0x2F47D4u);
    ctx->pc = 0x2F47D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F47CCu;
    // 0x2f47d0: 0x8fa40004  lw          $a0, 0x4($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F47CCu, 0x2F47D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F47D4u;
label_2f47d4:
    // 0x2f47d4: 0xc0be45e  jal         func_2F9178
label_2f47d8:
    if (ctx->pc == 0x2F47D8u) {
        ctx->pc = 0x2F47D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47D4u;
        // 0x2f47d8: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47DCu;
        goto label_2f47dc;
    }
    ctx->pc = 0x2F47D4u;
    SET_GPR_U32(ctx, 31, 0x2F47DCu);
    ctx->pc = 0x2F47D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F47D4u;
    // 0x2f47d8: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F9178u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F9178u, 0x2F47D4u, 0x2F47DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F47DCu;
label_2f47dc:
    // 0x2f47dc: 0xc0bc82e  jal         func_2F20B8
label_2f47e0:
    if (ctx->pc == 0x2F47E0u) {
        ctx->pc = 0x2F47E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F47DCu;
        // 0x2f47e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F47E4u;
        goto label_2f47e4;
    }
    ctx->pc = 0x2F47DCu;
    SET_GPR_U32(ctx, 31, 0x2F47E4u);
    ctx->pc = 0x2F47E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F47DCu;
    // 0x2f47e0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F20B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F20B8u, 0x2F47DCu, 0x2F47E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F47E4u;
label_2f47e4:
    // 0x2f47e4: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x2f47e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_2f47e8:
    // 0x2f47e8: 0xdfbf0100  ld          $ra, 0x100($sp)
    ctx->pc = 0x2f47e8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 256)));
label_2f47ec:
    // 0x2f47ec: 0xdfbe00f0  ld          $fp, 0xF0($sp)
    ctx->pc = 0x2f47ecu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 240)));
label_2f47f0:
    // 0x2f47f0: 0xdfb700e0  ld          $s7, 0xE0($sp)
    ctx->pc = 0x2f47f0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 224)));
label_2f47f4:
    // 0x2f47f4: 0xdfb600d0  ld          $s6, 0xD0($sp)
    ctx->pc = 0x2f47f4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 208)));
label_2f47f8:
    // 0x2f47f8: 0xdfb500c0  ld          $s5, 0xC0($sp)
    ctx->pc = 0x2f47f8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 192)));
label_2f47fc:
    // 0x2f47fc: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2f47fcu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_2f4800:
    // 0x2f4800: 0xdfb300a0  ld          $s3, 0xA0($sp)
    ctx->pc = 0x2f4800u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2f4804:
    // 0x2f4804: 0xdfb20090  ld          $s2, 0x90($sp)
    ctx->pc = 0x2f4804u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2f4808:
    // 0x2f4808: 0xdfb10080  ld          $s1, 0x80($sp)
    ctx->pc = 0x2f4808u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2f480c:
    // 0x2f480c: 0xdfb00070  ld          $s0, 0x70($sp)
    ctx->pc = 0x2f480cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2f4810:
    // 0x2f4810: 0x3e00008  jr          $ra
label_2f4814:
    if (ctx->pc == 0x2F4814u) {
        ctx->pc = 0x2F4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4810u;
        // 0x2f4814: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2F4818u;
        goto label_fallthrough_0x2f4810;
    }
    ctx->pc = 0x2F4810u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F4814u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F4810u;
        // 0x2f4814: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F4810u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2f4810:
    ctx->pc = 0x2F4818u;
}
