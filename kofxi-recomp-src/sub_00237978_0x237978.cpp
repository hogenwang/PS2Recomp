#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00237978
// Address: 0x237978 - 0x237f90
void sub_00237978_0x237978(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00237978_0x237978");
#endif

    switch (ctx->pc) {
        case 0x237978u: goto label_237978;
        case 0x23797cu: goto label_23797c;
        case 0x237980u: goto label_237980;
        case 0x237984u: goto label_237984;
        case 0x237988u: goto label_237988;
        case 0x23798cu: goto label_23798c;
        case 0x237990u: goto label_237990;
        case 0x237994u: goto label_237994;
        case 0x237998u: goto label_237998;
        case 0x23799cu: goto label_23799c;
        case 0x2379a0u: goto label_2379a0;
        case 0x2379a4u: goto label_2379a4;
        case 0x2379a8u: goto label_2379a8;
        case 0x2379acu: goto label_2379ac;
        case 0x2379b0u: goto label_2379b0;
        case 0x2379b4u: goto label_2379b4;
        case 0x2379b8u: goto label_2379b8;
        case 0x2379bcu: goto label_2379bc;
        case 0x2379c0u: goto label_2379c0;
        case 0x2379c4u: goto label_2379c4;
        case 0x2379c8u: goto label_2379c8;
        case 0x2379ccu: goto label_2379cc;
        case 0x2379d0u: goto label_2379d0;
        case 0x2379d4u: goto label_2379d4;
        case 0x2379d8u: goto label_2379d8;
        case 0x2379dcu: goto label_2379dc;
        case 0x2379e0u: goto label_2379e0;
        case 0x2379e4u: goto label_2379e4;
        case 0x2379e8u: goto label_2379e8;
        case 0x2379ecu: goto label_2379ec;
        case 0x2379f0u: goto label_2379f0;
        case 0x2379f4u: goto label_2379f4;
        case 0x2379f8u: goto label_2379f8;
        case 0x2379fcu: goto label_2379fc;
        case 0x237a00u: goto label_237a00;
        case 0x237a04u: goto label_237a04;
        case 0x237a08u: goto label_237a08;
        case 0x237a0cu: goto label_237a0c;
        case 0x237a10u: goto label_237a10;
        case 0x237a14u: goto label_237a14;
        case 0x237a18u: goto label_237a18;
        case 0x237a1cu: goto label_237a1c;
        case 0x237a20u: goto label_237a20;
        case 0x237a24u: goto label_237a24;
        case 0x237a28u: goto label_237a28;
        case 0x237a2cu: goto label_237a2c;
        case 0x237a30u: goto label_237a30;
        case 0x237a34u: goto label_237a34;
        case 0x237a38u: goto label_237a38;
        case 0x237a3cu: goto label_237a3c;
        case 0x237a40u: goto label_237a40;
        case 0x237a44u: goto label_237a44;
        case 0x237a48u: goto label_237a48;
        case 0x237a4cu: goto label_237a4c;
        case 0x237a50u: goto label_237a50;
        case 0x237a54u: goto label_237a54;
        case 0x237a58u: goto label_237a58;
        case 0x237a5cu: goto label_237a5c;
        case 0x237a60u: goto label_237a60;
        case 0x237a64u: goto label_237a64;
        case 0x237a68u: goto label_237a68;
        case 0x237a6cu: goto label_237a6c;
        case 0x237a70u: goto label_237a70;
        case 0x237a74u: goto label_237a74;
        case 0x237a78u: goto label_237a78;
        case 0x237a7cu: goto label_237a7c;
        case 0x237a80u: goto label_237a80;
        case 0x237a84u: goto label_237a84;
        case 0x237a88u: goto label_237a88;
        case 0x237a8cu: goto label_237a8c;
        case 0x237a90u: goto label_237a90;
        case 0x237a94u: goto label_237a94;
        case 0x237a98u: goto label_237a98;
        case 0x237a9cu: goto label_237a9c;
        case 0x237aa0u: goto label_237aa0;
        case 0x237aa4u: goto label_237aa4;
        case 0x237aa8u: goto label_237aa8;
        case 0x237aacu: goto label_237aac;
        case 0x237ab0u: goto label_237ab0;
        case 0x237ab4u: goto label_237ab4;
        case 0x237ab8u: goto label_237ab8;
        case 0x237abcu: goto label_237abc;
        case 0x237ac0u: goto label_237ac0;
        case 0x237ac4u: goto label_237ac4;
        case 0x237ac8u: goto label_237ac8;
        case 0x237accu: goto label_237acc;
        case 0x237ad0u: goto label_237ad0;
        case 0x237ad4u: goto label_237ad4;
        case 0x237ad8u: goto label_237ad8;
        case 0x237adcu: goto label_237adc;
        case 0x237ae0u: goto label_237ae0;
        case 0x237ae4u: goto label_237ae4;
        case 0x237ae8u: goto label_237ae8;
        case 0x237aecu: goto label_237aec;
        case 0x237af0u: goto label_237af0;
        case 0x237af4u: goto label_237af4;
        case 0x237af8u: goto label_237af8;
        case 0x237afcu: goto label_237afc;
        case 0x237b00u: goto label_237b00;
        case 0x237b04u: goto label_237b04;
        case 0x237b08u: goto label_237b08;
        case 0x237b0cu: goto label_237b0c;
        case 0x237b10u: goto label_237b10;
        case 0x237b14u: goto label_237b14;
        case 0x237b18u: goto label_237b18;
        case 0x237b1cu: goto label_237b1c;
        case 0x237b20u: goto label_237b20;
        case 0x237b24u: goto label_237b24;
        case 0x237b28u: goto label_237b28;
        case 0x237b2cu: goto label_237b2c;
        case 0x237b30u: goto label_237b30;
        case 0x237b34u: goto label_237b34;
        case 0x237b38u: goto label_237b38;
        case 0x237b3cu: goto label_237b3c;
        case 0x237b40u: goto label_237b40;
        case 0x237b44u: goto label_237b44;
        case 0x237b48u: goto label_237b48;
        case 0x237b4cu: goto label_237b4c;
        case 0x237b50u: goto label_237b50;
        case 0x237b54u: goto label_237b54;
        case 0x237b58u: goto label_237b58;
        case 0x237b5cu: goto label_237b5c;
        case 0x237b60u: goto label_237b60;
        case 0x237b64u: goto label_237b64;
        case 0x237b68u: goto label_237b68;
        case 0x237b6cu: goto label_237b6c;
        case 0x237b70u: goto label_237b70;
        case 0x237b74u: goto label_237b74;
        case 0x237b78u: goto label_237b78;
        case 0x237b7cu: goto label_237b7c;
        case 0x237b80u: goto label_237b80;
        case 0x237b84u: goto label_237b84;
        case 0x237b88u: goto label_237b88;
        case 0x237b8cu: goto label_237b8c;
        case 0x237b90u: goto label_237b90;
        case 0x237b94u: goto label_237b94;
        case 0x237b98u: goto label_237b98;
        case 0x237b9cu: goto label_237b9c;
        case 0x237ba0u: goto label_237ba0;
        case 0x237ba4u: goto label_237ba4;
        case 0x237ba8u: goto label_237ba8;
        case 0x237bacu: goto label_237bac;
        case 0x237bb0u: goto label_237bb0;
        case 0x237bb4u: goto label_237bb4;
        case 0x237bb8u: goto label_237bb8;
        case 0x237bbcu: goto label_237bbc;
        case 0x237bc0u: goto label_237bc0;
        case 0x237bc4u: goto label_237bc4;
        case 0x237bc8u: goto label_237bc8;
        case 0x237bccu: goto label_237bcc;
        case 0x237bd0u: goto label_237bd0;
        case 0x237bd4u: goto label_237bd4;
        case 0x237bd8u: goto label_237bd8;
        case 0x237bdcu: goto label_237bdc;
        case 0x237be0u: goto label_237be0;
        case 0x237be4u: goto label_237be4;
        case 0x237be8u: goto label_237be8;
        case 0x237becu: goto label_237bec;
        case 0x237bf0u: goto label_237bf0;
        case 0x237bf4u: goto label_237bf4;
        case 0x237bf8u: goto label_237bf8;
        case 0x237bfcu: goto label_237bfc;
        case 0x237c00u: goto label_237c00;
        case 0x237c04u: goto label_237c04;
        case 0x237c08u: goto label_237c08;
        case 0x237c0cu: goto label_237c0c;
        case 0x237c10u: goto label_237c10;
        case 0x237c14u: goto label_237c14;
        case 0x237c18u: goto label_237c18;
        case 0x237c1cu: goto label_237c1c;
        case 0x237c20u: goto label_237c20;
        case 0x237c24u: goto label_237c24;
        case 0x237c28u: goto label_237c28;
        case 0x237c2cu: goto label_237c2c;
        case 0x237c30u: goto label_237c30;
        case 0x237c34u: goto label_237c34;
        case 0x237c38u: goto label_237c38;
        case 0x237c3cu: goto label_237c3c;
        case 0x237c40u: goto label_237c40;
        case 0x237c44u: goto label_237c44;
        case 0x237c48u: goto label_237c48;
        case 0x237c4cu: goto label_237c4c;
        case 0x237c50u: goto label_237c50;
        case 0x237c54u: goto label_237c54;
        case 0x237c58u: goto label_237c58;
        case 0x237c5cu: goto label_237c5c;
        case 0x237c60u: goto label_237c60;
        case 0x237c64u: goto label_237c64;
        case 0x237c68u: goto label_237c68;
        case 0x237c6cu: goto label_237c6c;
        case 0x237c70u: goto label_237c70;
        case 0x237c74u: goto label_237c74;
        case 0x237c78u: goto label_237c78;
        case 0x237c7cu: goto label_237c7c;
        case 0x237c80u: goto label_237c80;
        case 0x237c84u: goto label_237c84;
        case 0x237c88u: goto label_237c88;
        case 0x237c8cu: goto label_237c8c;
        case 0x237c90u: goto label_237c90;
        case 0x237c94u: goto label_237c94;
        case 0x237c98u: goto label_237c98;
        case 0x237c9cu: goto label_237c9c;
        case 0x237ca0u: goto label_237ca0;
        case 0x237ca4u: goto label_237ca4;
        case 0x237ca8u: goto label_237ca8;
        case 0x237cacu: goto label_237cac;
        case 0x237cb0u: goto label_237cb0;
        case 0x237cb4u: goto label_237cb4;
        case 0x237cb8u: goto label_237cb8;
        case 0x237cbcu: goto label_237cbc;
        case 0x237cc0u: goto label_237cc0;
        case 0x237cc4u: goto label_237cc4;
        case 0x237cc8u: goto label_237cc8;
        case 0x237cccu: goto label_237ccc;
        case 0x237cd0u: goto label_237cd0;
        case 0x237cd4u: goto label_237cd4;
        case 0x237cd8u: goto label_237cd8;
        case 0x237cdcu: goto label_237cdc;
        case 0x237ce0u: goto label_237ce0;
        case 0x237ce4u: goto label_237ce4;
        case 0x237ce8u: goto label_237ce8;
        case 0x237cecu: goto label_237cec;
        case 0x237cf0u: goto label_237cf0;
        case 0x237cf4u: goto label_237cf4;
        case 0x237cf8u: goto label_237cf8;
        case 0x237cfcu: goto label_237cfc;
        case 0x237d00u: goto label_237d00;
        case 0x237d04u: goto label_237d04;
        case 0x237d08u: goto label_237d08;
        case 0x237d0cu: goto label_237d0c;
        case 0x237d10u: goto label_237d10;
        case 0x237d14u: goto label_237d14;
        case 0x237d18u: goto label_237d18;
        case 0x237d1cu: goto label_237d1c;
        case 0x237d20u: goto label_237d20;
        case 0x237d24u: goto label_237d24;
        case 0x237d28u: goto label_237d28;
        case 0x237d2cu: goto label_237d2c;
        case 0x237d30u: goto label_237d30;
        case 0x237d34u: goto label_237d34;
        case 0x237d38u: goto label_237d38;
        case 0x237d3cu: goto label_237d3c;
        case 0x237d40u: goto label_237d40;
        case 0x237d44u: goto label_237d44;
        case 0x237d48u: goto label_237d48;
        case 0x237d4cu: goto label_237d4c;
        case 0x237d50u: goto label_237d50;
        case 0x237d54u: goto label_237d54;
        case 0x237d58u: goto label_237d58;
        case 0x237d5cu: goto label_237d5c;
        case 0x237d60u: goto label_237d60;
        case 0x237d64u: goto label_237d64;
        case 0x237d68u: goto label_237d68;
        case 0x237d6cu: goto label_237d6c;
        case 0x237d70u: goto label_237d70;
        case 0x237d74u: goto label_237d74;
        case 0x237d78u: goto label_237d78;
        case 0x237d7cu: goto label_237d7c;
        case 0x237d80u: goto label_237d80;
        case 0x237d84u: goto label_237d84;
        case 0x237d88u: goto label_237d88;
        case 0x237d8cu: goto label_237d8c;
        case 0x237d90u: goto label_237d90;
        case 0x237d94u: goto label_237d94;
        case 0x237d98u: goto label_237d98;
        case 0x237d9cu: goto label_237d9c;
        case 0x237da0u: goto label_237da0;
        case 0x237da4u: goto label_237da4;
        case 0x237da8u: goto label_237da8;
        case 0x237dacu: goto label_237dac;
        case 0x237db0u: goto label_237db0;
        case 0x237db4u: goto label_237db4;
        case 0x237db8u: goto label_237db8;
        case 0x237dbcu: goto label_237dbc;
        case 0x237dc0u: goto label_237dc0;
        case 0x237dc4u: goto label_237dc4;
        case 0x237dc8u: goto label_237dc8;
        case 0x237dccu: goto label_237dcc;
        case 0x237dd0u: goto label_237dd0;
        case 0x237dd4u: goto label_237dd4;
        case 0x237dd8u: goto label_237dd8;
        case 0x237ddcu: goto label_237ddc;
        case 0x237de0u: goto label_237de0;
        case 0x237de4u: goto label_237de4;
        case 0x237de8u: goto label_237de8;
        case 0x237decu: goto label_237dec;
        case 0x237df0u: goto label_237df0;
        case 0x237df4u: goto label_237df4;
        case 0x237df8u: goto label_237df8;
        case 0x237dfcu: goto label_237dfc;
        case 0x237e00u: goto label_237e00;
        case 0x237e04u: goto label_237e04;
        case 0x237e08u: goto label_237e08;
        case 0x237e0cu: goto label_237e0c;
        case 0x237e10u: goto label_237e10;
        case 0x237e14u: goto label_237e14;
        case 0x237e18u: goto label_237e18;
        case 0x237e1cu: goto label_237e1c;
        case 0x237e20u: goto label_237e20;
        case 0x237e24u: goto label_237e24;
        case 0x237e28u: goto label_237e28;
        case 0x237e2cu: goto label_237e2c;
        case 0x237e30u: goto label_237e30;
        case 0x237e34u: goto label_237e34;
        case 0x237e38u: goto label_237e38;
        case 0x237e3cu: goto label_237e3c;
        case 0x237e40u: goto label_237e40;
        case 0x237e44u: goto label_237e44;
        case 0x237e48u: goto label_237e48;
        case 0x237e4cu: goto label_237e4c;
        case 0x237e50u: goto label_237e50;
        case 0x237e54u: goto label_237e54;
        case 0x237e58u: goto label_237e58;
        case 0x237e5cu: goto label_237e5c;
        case 0x237e60u: goto label_237e60;
        case 0x237e64u: goto label_237e64;
        case 0x237e68u: goto label_237e68;
        case 0x237e6cu: goto label_237e6c;
        case 0x237e70u: goto label_237e70;
        case 0x237e74u: goto label_237e74;
        case 0x237e78u: goto label_237e78;
        case 0x237e7cu: goto label_237e7c;
        case 0x237e80u: goto label_237e80;
        case 0x237e84u: goto label_237e84;
        case 0x237e88u: goto label_237e88;
        case 0x237e8cu: goto label_237e8c;
        case 0x237e90u: goto label_237e90;
        case 0x237e94u: goto label_237e94;
        case 0x237e98u: goto label_237e98;
        case 0x237e9cu: goto label_237e9c;
        case 0x237ea0u: goto label_237ea0;
        case 0x237ea4u: goto label_237ea4;
        case 0x237ea8u: goto label_237ea8;
        case 0x237eacu: goto label_237eac;
        case 0x237eb0u: goto label_237eb0;
        case 0x237eb4u: goto label_237eb4;
        case 0x237eb8u: goto label_237eb8;
        case 0x237ebcu: goto label_237ebc;
        case 0x237ec0u: goto label_237ec0;
        case 0x237ec4u: goto label_237ec4;
        case 0x237ec8u: goto label_237ec8;
        case 0x237eccu: goto label_237ecc;
        case 0x237ed0u: goto label_237ed0;
        case 0x237ed4u: goto label_237ed4;
        case 0x237ed8u: goto label_237ed8;
        case 0x237edcu: goto label_237edc;
        case 0x237ee0u: goto label_237ee0;
        case 0x237ee4u: goto label_237ee4;
        case 0x237ee8u: goto label_237ee8;
        case 0x237eecu: goto label_237eec;
        case 0x237ef0u: goto label_237ef0;
        case 0x237ef4u: goto label_237ef4;
        case 0x237ef8u: goto label_237ef8;
        case 0x237efcu: goto label_237efc;
        case 0x237f00u: goto label_237f00;
        case 0x237f04u: goto label_237f04;
        case 0x237f08u: goto label_237f08;
        case 0x237f0cu: goto label_237f0c;
        case 0x237f10u: goto label_237f10;
        case 0x237f14u: goto label_237f14;
        case 0x237f18u: goto label_237f18;
        case 0x237f1cu: goto label_237f1c;
        case 0x237f20u: goto label_237f20;
        case 0x237f24u: goto label_237f24;
        case 0x237f28u: goto label_237f28;
        case 0x237f2cu: goto label_237f2c;
        case 0x237f30u: goto label_237f30;
        case 0x237f34u: goto label_237f34;
        case 0x237f38u: goto label_237f38;
        case 0x237f3cu: goto label_237f3c;
        case 0x237f40u: goto label_237f40;
        case 0x237f44u: goto label_237f44;
        case 0x237f48u: goto label_237f48;
        case 0x237f4cu: goto label_237f4c;
        case 0x237f50u: goto label_237f50;
        case 0x237f54u: goto label_237f54;
        case 0x237f58u: goto label_237f58;
        case 0x237f5cu: goto label_237f5c;
        case 0x237f60u: goto label_237f60;
        case 0x237f64u: goto label_237f64;
        case 0x237f68u: goto label_237f68;
        case 0x237f6cu: goto label_237f6c;
        case 0x237f70u: goto label_237f70;
        case 0x237f74u: goto label_237f74;
        case 0x237f78u: goto label_237f78;
        case 0x237f7cu: goto label_237f7c;
        case 0x237f80u: goto label_237f80;
        case 0x237f84u: goto label_237f84;
        case 0x237f88u: goto label_237f88;
        case 0x237f8cu: goto label_237f8c;
        default: break;
    }

    ctx->pc = 0x237978u;

label_237978:
    // 0x237978: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x237978u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
label_23797c:
    // 0x23797c: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x23797cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
label_237980:
    // 0x237980: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x237980u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
label_237984:
    // 0x237984: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x237984u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_237988:
    // 0x237988: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x237988u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
label_23798c:
    // 0x23798c: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x23798cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237990:
    // 0x237990: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x237990u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
label_237994:
    // 0x237994: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x237994u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_237998:
    // 0x237998: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x237998u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
label_23799c:
    // 0x23799c: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x23799cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2379a0:
    // 0x2379a0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2379a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_2379a4:
    // 0x2379a4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2379a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2379a8:
    // 0x2379a8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x2379a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
label_2379ac:
    // 0x2379ac: 0x2e420007  sltiu       $v0, $s2, 0x7
    ctx->pc = 0x2379acu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
label_2379b0:
    // 0x2379b0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x2379b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
label_2379b4:
    // 0x2379b4: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x2379b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
label_2379b8:
    // 0x2379b8: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2379b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
label_2379bc:
    // 0x2379bc: 0xafa70000  sw          $a3, 0x0($sp)
    ctx->pc = 0x2379bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 7));
label_2379c0:
    // 0x2379c0: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x2379c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
label_2379c4:
    // 0x2379c4: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x2379c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
label_2379c8:
    // 0x2379c8: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
label_2379cc:
    if (ctx->pc == 0x2379CCu) {
        ctx->pc = 0x2379CCu;
            // 0x2379cc: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->pc = 0x2379D0u;
        goto label_2379d0;
    }
    ctx->pc = 0x2379C8u;
    {
        const bool branch_taken_0x2379c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2379CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2379C8u;
            // 0x2379cc: 0xafa0000c  sw          $zero, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2379c8) {
            ctx->pc = 0x237A14u;
            goto label_237a14;
        }
    }
    ctx->pc = 0x2379D0u;
label_2379d0:
    // 0x2379d0: 0x12303c  dsll32      $a2, $s2, 0
    ctx->pc = 0x2379d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
label_2379d4:
    // 0x2379d4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x2379d4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_2379d8:
    // 0x2379d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x2379d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_2379dc:
    // 0x2379dc: 0x24a54cb8  addiu       $a1, $a1, 0x4CB8
    ctx->pc = 0x2379dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19640));
label_2379e0:
    // 0x2379e0: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x2379e0u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2379e4:
    // 0x2379e4: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x2379e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_2379e8:
    // 0x2379e8: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x2379e8u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_2379ec:
    // 0x2379ec: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x2379ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_2379f0:
    // 0x2379f0: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x2379f0u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_2379f4:
    // 0x2379f4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x2379f4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_2379f8:
    // 0x2379f8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x2379f8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_2379fc:
    // 0x2379fc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x2379fcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_237a00:
    // 0x237a00: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x237a00u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_237a04:
    // 0x237a04: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x237a04u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_237a08:
    // 0x237a08: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x237a08u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237a0c:
    // 0x237a0c: 0x808b5ac  j           func_22D6B0
label_237a10:
    if (ctx->pc == 0x237A10u) {
        ctx->pc = 0x237A10u;
            // 0x237a10: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x237A14u;
        goto label_237a14;
    }
    ctx->pc = 0x237A0Cu;
    ctx->pc = 0x237A10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237A0Cu;
            // 0x237a10: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x237A14u;
label_237a14:
    // 0x237a14: 0x92060000  lbu         $a2, 0x0($s0)
    ctx->pc = 0x237a14u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_237a18:
    // 0x237a18: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x237a18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_237a1c:
    // 0x237a1c: 0x10c20010  beq         $a2, $v0, . + 4 + (0x10 << 2)
label_237a20:
    if (ctx->pc == 0x237A20u) {
        ctx->pc = 0x237A20u;
            // 0x237a20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->pc = 0x237A24u;
        goto label_237a24;
    }
    ctx->pc = 0x237A1Cu;
    {
        const bool branch_taken_0x237a1c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x237A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237A1Cu;
            // 0x237a20: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a1c) {
            ctx->pc = 0x237A60u;
            goto label_237a60;
        }
    }
    ctx->pc = 0x237A24u;
label_237a24:
    // 0x237a24: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x237a24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_237a28:
    // 0x237a28: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x237a28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_237a2c:
    // 0x237a2c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x237a2cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_237a30:
    // 0x237a30: 0x24a54cd8  addiu       $a1, $a1, 0x4CD8
    ctx->pc = 0x237a30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19672));
label_237a34:
    // 0x237a34: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x237a34u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_237a38:
    // 0x237a38: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x237a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_237a3c:
    // 0x237a3c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x237a3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_237a40:
    // 0x237a40: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x237a40u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_237a44:
    // 0x237a44: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x237a44u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_237a48:
    // 0x237a48: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x237a48u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_237a4c:
    // 0x237a4c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x237a4cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_237a50:
    // 0x237a50: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x237a50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_237a54:
    // 0x237a54: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x237a54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237a58:
    // 0x237a58: 0x808b5ac  j           func_22D6B0
label_237a5c:
    if (ctx->pc == 0x237A5Cu) {
        ctx->pc = 0x237A5Cu;
            // 0x237a5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x237A60u;
        goto label_237a60;
    }
    ctx->pc = 0x237A58u;
    ctx->pc = 0x237A5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237A58u;
            // 0x237a5c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x237A60u;
label_237a60:
    // 0x237a60: 0x92140000  lbu         $s4, 0x0($s0)
    ctx->pc = 0x237a60u;
    SET_GPR_U32(ctx, 20, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_237a64:
    // 0x237a64: 0x2652fffa  addiu       $s2, $s2, -0x6
    ctx->pc = 0x237a64u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967290));
label_237a68:
    // 0x237a68: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x237a68u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_237a6c:
    // 0x237a6c: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x237a6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_237a70:
    // 0x237a70: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x237a70u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_237a74:
    // 0x237a74: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x237a74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_237a78:
    // 0x237a78: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x237a78u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_237a7c:
    // 0x237a7c: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x237a7cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_237a80:
    // 0x237a80: 0xa2b825  or          $s7, $a1, $v0
    ctx->pc = 0x237a80u;
    SET_GPR_U64(ctx, 23, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_237a84:
    // 0x237a84: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x237a84u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_237a88:
    // 0x237a88: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x237a88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_237a8c:
    // 0x237a8c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x237a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_237a90:
    // 0x237a90: 0x244102b  sltu        $v0, $s2, $a0
    ctx->pc = 0x237a90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_237a94:
    // 0x237a94: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
label_237a98:
    if (ctx->pc == 0x237A98u) {
        ctx->pc = 0x237A98u;
            // 0x237a98: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x237A9Cu;
        goto label_237a9c;
    }
    ctx->pc = 0x237A94u;
    {
        const bool branch_taken_0x237a94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237A94u;
            // 0x237a98: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237a94) {
            ctx->pc = 0x237AE4u;
            goto label_237ae4;
        }
    }
    ctx->pc = 0x237A9Cu;
label_237a9c:
    // 0x237a9c: 0x12303c  dsll32      $a2, $s2, 0
    ctx->pc = 0x237a9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 18) << (32 + 0));
label_237aa0:
    // 0x237aa0: 0x80382d  daddu       $a3, $a0, $zero
    ctx->pc = 0x237aa0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237aa4:
    // 0x237aa4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x237aa4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_237aa8:
    // 0x237aa8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x237aa8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_237aac:
    // 0x237aac: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x237aacu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_237ab0:
    // 0x237ab0: 0x24a54d08  addiu       $a1, $a1, 0x4D08
    ctx->pc = 0x237ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19720));
label_237ab4:
    // 0x237ab4: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x237ab4u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_237ab8:
    // 0x237ab8: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x237ab8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
label_237abc:
    // 0x237abc: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x237abcu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_237ac0:
    // 0x237ac0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x237ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_237ac4:
    // 0x237ac4: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x237ac4u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_237ac8:
    // 0x237ac8: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x237ac8u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_237acc:
    // 0x237acc: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x237accu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_237ad0:
    // 0x237ad0: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x237ad0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_237ad4:
    // 0x237ad4: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x237ad4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_237ad8:
    // 0x237ad8: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x237ad8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237adc:
    // 0x237adc: 0x808b5ac  j           func_22D6B0
label_237ae0:
    if (ctx->pc == 0x237AE0u) {
        ctx->pc = 0x237AE0u;
            // 0x237ae0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x237AE4u;
        goto label_237ae4;
    }
    ctx->pc = 0x237ADCu;
    ctx->pc = 0x237AE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237ADCu;
            // 0x237ae0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x237AE4u;
label_237ae4:
    // 0x237ae4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x237ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_237ae8:
    // 0x237ae8: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x237ae8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_237aec:
    // 0x237aec: 0x14400042  bnez        $v0, . + 4 + (0x42 << 2)
label_237af0:
    if (ctx->pc == 0x237AF0u) {
        ctx->pc = 0x237AF0u;
            // 0x237af0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237AF4u;
        goto label_237af4;
    }
    ctx->pc = 0x237AECu;
    {
        const bool branch_taken_0x237aec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237AF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237AECu;
            // 0x237af0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237aec) {
            ctx->pc = 0x237BF8u;
            goto label_237bf8;
        }
    }
    ctx->pc = 0x237AF4u;
label_237af4:
    // 0x237af4: 0x0  nop
    ctx->pc = 0x237af4u;
    // NOP
label_237af8:
    // 0x237af8: 0x92020000  lbu         $v0, 0x0($s0)
    ctx->pc = 0x237af8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_237afc:
    // 0x237afc: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x237afcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_237b00:
    // 0x237b00: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x237b00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
label_237b04:
    // 0x237b04: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x237b04u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
label_237b08:
    // 0x237b08: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x237b08u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_237b0c:
    // 0x237b0c: 0xa23025  or          $a2, $a1, $v0
    ctx->pc = 0x237b0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_237b10:
    // 0x237b10: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x237b10u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_237b14:
    // 0x237b14: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x237b14u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
label_237b18:
    // 0x237b18: 0x838825  or          $s1, $a0, $v1
    ctx->pc = 0x237b18u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_237b1c:
    // 0x237b1c: 0x251102b  sltu        $v0, $s2, $s1
    ctx->pc = 0x237b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 17)) ? 1 : 0);
label_237b20:
    // 0x237b20: 0x14400102  bnez        $v0, . + 4 + (0x102 << 2)
label_237b24:
    if (ctx->pc == 0x237B24u) {
        ctx->pc = 0x237B24u;
            // 0x237b24: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->pc = 0x237B28u;
        goto label_237b28;
    }
    ctx->pc = 0x237B20u;
    {
        const bool branch_taken_0x237b20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237B20u;
            // 0x237b24: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b20) {
            ctx->pc = 0x237F2Cu;
            goto label_237f2c;
        }
    }
    ctx->pc = 0x237B28u;
label_237b28:
    // 0x237b28: 0x24020103  addiu       $v0, $zero, 0x103
    ctx->pc = 0x237b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 259));
label_237b2c:
    // 0x237b2c: 0x10c20016  beq         $a2, $v0, . + 4 + (0x16 << 2)
label_237b30:
    if (ctx->pc == 0x237B30u) {
        ctx->pc = 0x237B30u;
            // 0x237b30: 0x28c20104  slti        $v0, $a2, 0x104 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)260) ? 1 : 0);
        ctx->pc = 0x237B34u;
        goto label_237b34;
    }
    ctx->pc = 0x237B2Cu;
    {
        const bool branch_taken_0x237b2c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x237B30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237B2Cu;
            // 0x237b30: 0x28c20104  slti        $v0, $a2, 0x104 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)260) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b2c) {
            ctx->pc = 0x237B88u;
            goto label_237b88;
        }
    }
    ctx->pc = 0x237B34u;
label_237b34:
    // 0x237b34: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_237b38:
    if (ctx->pc == 0x237B38u) {
        ctx->pc = 0x237B38u;
            // 0x237b38: 0x24030201  addiu       $v1, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->pc = 0x237B3Cu;
        goto label_237b3c;
    }
    ctx->pc = 0x237B34u;
    {
        const bool branch_taken_0x237b34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b34) {
            ctx->pc = 0x237B38u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237B34u;
            // 0x237b38: 0x24030201  addiu       $v1, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237B4Cu;
            goto label_237b4c;
        }
    }
    ctx->pc = 0x237B3Cu;
label_237b3c:
    // 0x237b3c: 0x50c00021  beql        $a2, $zero, . + 4 + (0x21 << 2)
label_237b40:
    if (ctx->pc == 0x237B40u) {
        ctx->pc = 0x237B40u;
            // 0x237b40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237B44u;
        goto label_237b44;
    }
    ctx->pc = 0x237B3Cu;
    {
        const bool branch_taken_0x237b3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b3c) {
            ctx->pc = 0x237B40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237B3Cu;
            // 0x237b40: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237BC4u;
            goto label_237bc4;
        }
    }
    ctx->pc = 0x237B44u;
label_237b44:
    // 0x237b44: 0x1000001f  b           . + 4 + (0x1F << 2)
label_237b48:
    if (ctx->pc == 0x237B48u) {
        ctx->pc = 0x237B4Cu;
        goto label_237b4c;
    }
    ctx->pc = 0x237B44u;
    {
        const bool branch_taken_0x237b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b44) {
            ctx->pc = 0x237BC4u;
            goto label_237bc4;
        }
    }
    ctx->pc = 0x237B4Cu;
label_237b4c:
    // 0x237b4c: 0x10c3001a  beq         $a2, $v1, . + 4 + (0x1A << 2)
label_237b50:
    if (ctx->pc == 0x237B50u) {
        ctx->pc = 0x237B50u;
            // 0x237b50: 0x28c20202  slti        $v0, $a2, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)514) ? 1 : 0);
        ctx->pc = 0x237B54u;
        goto label_237b54;
    }
    ctx->pc = 0x237B4Cu;
    {
        const bool branch_taken_0x237b4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x237B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237B4Cu;
            // 0x237b50: 0x28c20202  slti        $v0, $a2, 0x202 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)514) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b4c) {
            ctx->pc = 0x237BB8u;
            goto label_237bb8;
        }
    }
    ctx->pc = 0x237B54u;
label_237b54:
    // 0x237b54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_237b58:
    if (ctx->pc == 0x237B58u) {
        ctx->pc = 0x237B58u;
            // 0x237b58: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->pc = 0x237B5Cu;
        goto label_237b5c;
    }
    ctx->pc = 0x237B54u;
    {
        const bool branch_taken_0x237b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237B54u;
            // 0x237b58: 0x24020104  addiu       $v0, $zero, 0x104 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 260));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b54) {
            ctx->pc = 0x237B6Cu;
            goto label_237b6c;
        }
    }
    ctx->pc = 0x237B5Cu;
label_237b5c:
    // 0x237b5c: 0x10c20011  beq         $a2, $v0, . + 4 + (0x11 << 2)
label_237b60:
    if (ctx->pc == 0x237B60u) {
        ctx->pc = 0x237B64u;
        goto label_237b64;
    }
    ctx->pc = 0x237B5Cu;
    {
        const bool branch_taken_0x237b5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x237b5c) {
            ctx->pc = 0x237BA4u;
            goto label_237ba4;
        }
    }
    ctx->pc = 0x237B64u;
label_237b64:
    // 0x237b64: 0x10000017  b           . + 4 + (0x17 << 2)
label_237b68:
    if (ctx->pc == 0x237B68u) {
        ctx->pc = 0x237B6Cu;
        goto label_237b6c;
    }
    ctx->pc = 0x237B64u;
    {
        const bool branch_taken_0x237b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b64) {
            ctx->pc = 0x237BC4u;
            goto label_237bc4;
        }
    }
    ctx->pc = 0x237B6Cu;
label_237b6c:
    // 0x237b6c: 0x24020202  addiu       $v0, $zero, 0x202
    ctx->pc = 0x237b6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
label_237b70:
    // 0x237b70: 0x10c20013  beq         $a2, $v0, . + 4 + (0x13 << 2)
label_237b74:
    if (ctx->pc == 0x237B74u) {
        ctx->pc = 0x237B74u;
            // 0x237b74: 0x24020203  addiu       $v0, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->pc = 0x237B78u;
        goto label_237b78;
    }
    ctx->pc = 0x237B70u;
    {
        const bool branch_taken_0x237b70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x237B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237B70u;
            // 0x237b74: 0x24020203  addiu       $v0, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b70) {
            ctx->pc = 0x237BC0u;
            goto label_237bc0;
        }
    }
    ctx->pc = 0x237B78u;
label_237b78:
    // 0x237b78: 0x50c20012  beql        $a2, $v0, . + 4 + (0x12 << 2)
label_237b7c:
    if (ctx->pc == 0x237B7Cu) {
        ctx->pc = 0x237B7Cu;
            // 0x237b7c: 0x24150203  addiu       $s5, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->pc = 0x237B80u;
        goto label_237b80;
    }
    ctx->pc = 0x237B78u;
    {
        const bool branch_taken_0x237b78 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        if (branch_taken_0x237b78) {
            ctx->pc = 0x237B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237B78u;
            // 0x237b7c: 0x24150203  addiu       $s5, $zero, 0x203 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237BC4u;
            goto label_237bc4;
        }
    }
    ctx->pc = 0x237B80u;
label_237b80:
    // 0x237b80: 0x10000010  b           . + 4 + (0x10 << 2)
label_237b84:
    if (ctx->pc == 0x237B84u) {
        ctx->pc = 0x237B88u;
        goto label_237b88;
    }
    ctx->pc = 0x237B80u;
    {
        const bool branch_taken_0x237b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237b80) {
            ctx->pc = 0x237BC4u;
            goto label_237bc4;
        }
    }
    ctx->pc = 0x237B88u;
label_237b88:
    // 0x237b88: 0x1660000e  bnez        $s3, . + 4 + (0xE << 2)
label_237b8c:
    if (ctx->pc == 0x237B8Cu) {
        ctx->pc = 0x237B8Cu;
            // 0x237b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237B90u;
        goto label_237b90;
    }
    ctx->pc = 0x237B88u;
    {
        const bool branch_taken_0x237b88 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x237B8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237B88u;
            // 0x237b8c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b88) {
            ctx->pc = 0x237BC4u;
            goto label_237bc4;
        }
    }
    ctx->pc = 0x237B90u;
label_237b90:
    // 0x237b90: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x237b90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237b94:
    // 0x237b94: 0xc08ddce  jal         func_237738
label_237b98:
    if (ctx->pc == 0x237B98u) {
        ctx->pc = 0x237B98u;
            // 0x237b98: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237B9Cu;
        goto label_237b9c;
    }
    ctx->pc = 0x237B94u;
    SET_GPR_U32(ctx, 31, 0x237B9Cu);
    ctx->pc = 0x237B98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237B94u;
            // 0x237b98: 0x2c0302d  daddu       $a2, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x237738u;
    if (runtime->hasFunction(0x237738u)) {
        auto targetFn = runtime->lookupFunction(0x237738u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237B9Cu; }
        if (ctx->pc != 0x237B9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00237738_0x237738(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237B9Cu; }
        if (ctx->pc != 0x237B9Cu) { return; }
    }
    ctx->pc = 0x237B9Cu;
label_237b9c:
    // 0x237b9c: 0x10000009  b           . + 4 + (0x9 << 2)
label_237ba0:
    if (ctx->pc == 0x237BA0u) {
        ctx->pc = 0x237BA0u;
            // 0x237ba0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237BA4u;
        goto label_237ba4;
    }
    ctx->pc = 0x237B9Cu;
    {
        const bool branch_taken_0x237b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237B9Cu;
            // 0x237ba0: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237b9c) {
            ctx->pc = 0x237BC4u;
            goto label_237bc4;
        }
    }
    ctx->pc = 0x237BA4u;
label_237ba4:
    // 0x237ba4: 0x17c00007  bnez        $fp, . + 4 + (0x7 << 2)
label_237ba8:
    if (ctx->pc == 0x237BA8u) {
        ctx->pc = 0x237BACu;
        goto label_237bac;
    }
    ctx->pc = 0x237BA4u;
    {
        const bool branch_taken_0x237ba4 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        if (branch_taken_0x237ba4) {
            ctx->pc = 0x237BC4u;
            goto label_237bc4;
        }
    }
    ctx->pc = 0x237BACu;
label_237bac:
    // 0x237bac: 0x200f02d  daddu       $fp, $s0, $zero
    ctx->pc = 0x237bacu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237bb0:
    // 0x237bb0: 0x10000004  b           . + 4 + (0x4 << 2)
label_237bb4:
    if (ctx->pc == 0x237BB4u) {
        ctx->pc = 0x237BB4u;
            // 0x237bb4: 0xafb1000c  sw          $s1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
        ctx->pc = 0x237BB8u;
        goto label_237bb8;
    }
    ctx->pc = 0x237BB0u;
    {
        const bool branch_taken_0x237bb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237BB0u;
            // 0x237bb4: 0xafb1000c  sw          $s1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bb0) {
            ctx->pc = 0x237BC4u;
            goto label_237bc4;
        }
    }
    ctx->pc = 0x237BB8u;
label_237bb8:
    // 0x237bb8: 0x10000002  b           . + 4 + (0x2 << 2)
label_237bbc:
    if (ctx->pc == 0x237BBCu) {
        ctx->pc = 0x237BBCu;
            // 0x237bbc: 0x24150201  addiu       $s5, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->pc = 0x237BC0u;
        goto label_237bc0;
    }
    ctx->pc = 0x237BB8u;
    {
        const bool branch_taken_0x237bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237BB8u;
            // 0x237bbc: 0x24150201  addiu       $s5, $zero, 0x201 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 513));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bb8) {
            ctx->pc = 0x237BC4u;
            goto label_237bc4;
        }
    }
    ctx->pc = 0x237BC0u;
label_237bc0:
    // 0x237bc0: 0x24150202  addiu       $s5, $zero, 0x202
    ctx->pc = 0x237bc0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
label_237bc4:
    // 0x237bc4: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_237bc8:
    if (ctx->pc == 0x237BC8u) {
        ctx->pc = 0x237BC8u;
            // 0x237bc8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->pc = 0x237BCCu;
        goto label_237bcc;
    }
    ctx->pc = 0x237BC4u;
    {
        const bool branch_taken_0x237bc4 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237BC4u;
            // 0x237bc8: 0x24020030  addiu       $v0, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bc4) {
            ctx->pc = 0x237BE0u;
            goto label_237be0;
        }
    }
    ctx->pc = 0x237BCCu;
label_237bcc:
    // 0x237bcc: 0x92030000  lbu         $v1, 0x0($s0)
    ctx->pc = 0x237bccu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_237bd0:
    // 0x237bd0: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
label_237bd4:
    if (ctx->pc == 0x237BD4u) {
        ctx->pc = 0x237BD4u;
            // 0x237bd4: 0x2642fffc  addiu       $v0, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->pc = 0x237BD8u;
        goto label_237bd8;
    }
    ctx->pc = 0x237BD0u;
    {
        const bool branch_taken_0x237bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237BD0u;
            // 0x237bd4: 0x2642fffc  addiu       $v0, $s2, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bd0) {
            ctx->pc = 0x237BE4u;
            goto label_237be4;
        }
    }
    ctx->pc = 0x237BD8u;
label_237bd8:
    // 0x237bd8: 0xafb00008  sw          $s0, 0x8($sp)
    ctx->pc = 0x237bd8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 16));
label_237bdc:
    // 0x237bdc: 0xafb10004  sw          $s1, 0x4($sp)
    ctx->pc = 0x237bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 17));
label_237be0:
    // 0x237be0: 0x2642fffc  addiu       $v0, $s2, -0x4
    ctx->pc = 0x237be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
label_237be4:
    // 0x237be4: 0x2111821  addu        $v1, $s0, $s1
    ctx->pc = 0x237be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_237be8:
    // 0x237be8: 0x519023  subu        $s2, $v0, $s1
    ctx->pc = 0x237be8u;
    SET_GPR_S32(ctx, 18, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_237bec:
    // 0x237bec: 0x2e420005  sltiu       $v0, $s2, 0x5
    ctx->pc = 0x237becu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
label_237bf0:
    // 0x237bf0: 0x1040ffc1  beqz        $v0, . + 4 + (-0x3F << 2)
label_237bf4:
    if (ctx->pc == 0x237BF4u) {
        ctx->pc = 0x237BF4u;
            // 0x237bf4: 0x71800b  movn        $s0, $v1, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->pc = 0x237BF8u;
        goto label_237bf8;
    }
    ctx->pc = 0x237BF0u;
    {
        const bool branch_taken_0x237bf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237BF0u;
            // 0x237bf4: 0x71800b  movn        $s0, $v1, $s1 (Delay Slot)
        if (GPR_U64(ctx, 17) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bf0) {
            ctx->pc = 0x237AF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_237af8;
        }
    }
    ctx->pc = 0x237BF8u;
label_237bf8:
    // 0x237bf8: 0x1660000b  bnez        $s3, . + 4 + (0xB << 2)
label_237bfc:
    if (ctx->pc == 0x237BFCu) {
        ctx->pc = 0x237BFCu;
            // 0x237bfc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237C00u;
        goto label_237c00;
    }
    ctx->pc = 0x237BF8u;
    {
        const bool branch_taken_0x237bf8 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x237BFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237BF8u;
            // 0x237bfc: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237bf8) {
            ctx->pc = 0x237C28u;
            goto label_237c28;
        }
    }
    ctx->pc = 0x237C00u;
label_237c00:
    // 0x237c00: 0xc08ddb8  jal         func_2376E0
label_237c04:
    if (ctx->pc == 0x237C04u) {
        ctx->pc = 0x237C04u;
            // 0x237c04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237C08u;
        goto label_237c08;
    }
    ctx->pc = 0x237C00u;
    SET_GPR_U32(ctx, 31, 0x237C08u);
    ctx->pc = 0x237C04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237C00u;
            // 0x237c04: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2376E0u;
    if (runtime->hasFunction(0x2376E0u)) {
        auto targetFn = runtime->lookupFunction(0x2376E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237C08u; }
        if (ctx->pc != 0x237C08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002376E0_0x2376e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237C08u; }
        if (ctx->pc != 0x237C08u) { return; }
    }
    ctx->pc = 0x237C08u;
label_237c08:
    // 0x237c08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x237c08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237c0c:
    // 0x237c0c: 0x16600006  bnez        $s3, . + 4 + (0x6 << 2)
label_237c10:
    if (ctx->pc == 0x237C10u) {
        ctx->pc = 0x237C14u;
        goto label_237c14;
    }
    ctx->pc = 0x237C0Cu;
    {
        const bool branch_taken_0x237c0c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x237c0c) {
            ctx->pc = 0x237C28u;
            goto label_237c28;
        }
    }
    ctx->pc = 0x237C14u;
label_237c14:
    // 0x237c14: 0xc08de0a  jal         func_237828
label_237c18:
    if (ctx->pc == 0x237C18u) {
        ctx->pc = 0x237C1Cu;
        goto label_237c1c;
    }
    ctx->pc = 0x237C14u;
    SET_GPR_U32(ctx, 31, 0x237C1Cu);
    ctx->pc = 0x237828u;
    if (runtime->hasFunction(0x237828u)) {
        auto targetFn = runtime->lookupFunction(0x237828u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237C1Cu; }
        if (ctx->pc != 0x237C1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00237828_0x237828(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237C1Cu; }
        if (ctx->pc != 0x237C1Cu) { return; }
    }
    ctx->pc = 0x237C1Cu;
label_237c1c:
    // 0x237c1c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x237c1cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237c20:
    // 0x237c20: 0x12600025  beqz        $s3, . + 4 + (0x25 << 2)
label_237c24:
    if (ctx->pc == 0x237C24u) {
        ctx->pc = 0x237C24u;
            // 0x237c24: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->pc = 0x237C28u;
        goto label_237c28;
    }
    ctx->pc = 0x237C20u;
    {
        const bool branch_taken_0x237c20 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C20u;
            // 0x237c24: 0x24020019  addiu       $v0, $zero, 0x19 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c20) {
            ctx->pc = 0x237CB8u;
            goto label_237cb8;
        }
    }
    ctx->pc = 0x237C28u;
label_237c28:
    // 0x237c28: 0x12a00022  beqz        $s5, . + 4 + (0x22 << 2)
label_237c2c:
    if (ctx->pc == 0x237C2Cu) {
        ctx->pc = 0x237C2Cu;
            // 0x237c2c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x237C30u;
        goto label_237c30;
    }
    ctx->pc = 0x237C28u;
    {
        const bool branch_taken_0x237c28 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C28u;
            // 0x237c2c: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c28) {
            ctx->pc = 0x237CB4u;
            goto label_237cb4;
        }
    }
    ctx->pc = 0x237C30u;
label_237c30:
    // 0x237c30: 0x12820006  beq         $s4, $v0, . + 4 + (0x6 << 2)
label_237c34:
    if (ctx->pc == 0x237C34u) {
        ctx->pc = 0x237C34u;
            // 0x237c34: 0xae754e88  sw          $s5, 0x4E88($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20104), GPR_U32(ctx, 21));
        ctx->pc = 0x237C38u;
        goto label_237c38;
    }
    ctx->pc = 0x237C30u;
    {
        const bool branch_taken_0x237c30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x237C34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C30u;
            // 0x237c34: 0xae754e88  sw          $s5, 0x4E88($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20104), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c30) {
            ctx->pc = 0x237C4Cu;
            goto label_237c4c;
        }
    }
    ctx->pc = 0x237C38u;
label_237c38:
    // 0x237c38: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x237c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_237c3c:
    // 0x237c3c: 0x1282000a  beq         $s4, $v0, . + 4 + (0xA << 2)
label_237c40:
    if (ctx->pc == 0x237C40u) {
        ctx->pc = 0x237C40u;
            // 0x237c40: 0x26714e8c  addiu       $s1, $s3, 0x4E8C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20108));
        ctx->pc = 0x237C44u;
        goto label_237c44;
    }
    ctx->pc = 0x237C3Cu;
    {
        const bool branch_taken_0x237c3c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x237C40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C3Cu;
            // 0x237c40: 0x26714e8c  addiu       $s1, $s3, 0x4E8C (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20108));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c3c) {
            ctx->pc = 0x237C68u;
            goto label_237c68;
        }
    }
    ctx->pc = 0x237C44u;
label_237c44:
    // 0x237c44: 0x1000000f  b           . + 4 + (0xF << 2)
label_237c48:
    if (ctx->pc == 0x237C48u) {
        ctx->pc = 0x237C48u;
            // 0x237c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237C4Cu;
        goto label_237c4c;
    }
    ctx->pc = 0x237C44u;
    {
        const bool branch_taken_0x237c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C44u;
            // 0x237c48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c44) {
            ctx->pc = 0x237C84u;
            goto label_237c84;
        }
    }
    ctx->pc = 0x237C4Cu;
label_237c4c:
    // 0x237c4c: 0x8e624e84  lw          $v0, 0x4E84($s3)
    ctx->pc = 0x237c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20100)));
label_237c50:
    // 0x237c50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x237c50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237c54:
    // 0x237c54: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x237c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237c58:
    // 0x237c58: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x237c58u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_237c5c:
    // 0x237c5c: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x237c5cu;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_237c60:
    // 0x237c60: 0x10000006  b           . + 4 + (0x6 << 2)
label_237c64:
    if (ctx->pc == 0x237C64u) {
        ctx->pc = 0x237C64u;
            // 0x237c64: 0xae624e84  sw          $v0, 0x4E84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20100), GPR_U32(ctx, 2));
        ctx->pc = 0x237C68u;
        goto label_237c68;
    }
    ctx->pc = 0x237C60u;
    {
        const bool branch_taken_0x237c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C60u;
            // 0x237c64: 0xae624e84  sw          $v0, 0x4E84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c60) {
            ctx->pc = 0x237C7Cu;
            goto label_237c7c;
        }
    }
    ctx->pc = 0x237C68u;
label_237c68:
    // 0x237c68: 0x8e624e84  lw          $v0, 0x4E84($s3)
    ctx->pc = 0x237c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20100)));
label_237c6c:
    // 0x237c6c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x237c6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_237c70:
    // 0x237c70: 0x28440004  slti        $a0, $v0, 0x4
    ctx->pc = 0x237c70u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_237c74:
    // 0x237c74: 0x44180a  movz        $v1, $v0, $a0
    ctx->pc = 0x237c74u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 2));
label_237c78:
    // 0x237c78: 0xae634e84  sw          $v1, 0x4E84($s3)
    ctx->pc = 0x237c78u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20100), GPR_U32(ctx, 3));
label_237c7c:
    // 0x237c7c: 0x26714e8c  addiu       $s1, $s3, 0x4E8C
    ctx->pc = 0x237c7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 19), 20108));
label_237c80:
    // 0x237c80: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x237c80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_237c84:
    // 0x237c84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237c84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237c88:
    // 0x237c88: 0xc049cb6  jal         func_1272D8
label_237c8c:
    if (ctx->pc == 0x237C8Cu) {
        ctx->pc = 0x237C8Cu;
            // 0x237c8c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x237C90u;
        goto label_237c90;
    }
    ctx->pc = 0x237C88u;
    SET_GPR_U32(ctx, 31, 0x237C90u);
    ctx->pc = 0x237C8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237C88u;
            // 0x237c8c: 0x24060100  addiu       $a2, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237C90u; }
        if (ctx->pc != 0x237C90u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237C90u; }
        if (ctx->pc != 0x237C90u) { return; }
    }
    ctx->pc = 0x237C90u;
label_237c90:
    // 0x237c90: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x237c90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_237c94:
    // 0x237c94: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_237c98:
    if (ctx->pc == 0x237C98u) {
        ctx->pc = 0x237C98u;
            // 0x237c98: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->pc = 0x237C9Cu;
        goto label_237c9c;
    }
    ctx->pc = 0x237C94u;
    {
        const bool branch_taken_0x237c94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237C98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237C94u;
            // 0x237c98: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237c94) {
            ctx->pc = 0x237CB4u;
            goto label_237cb4;
        }
    }
    ctx->pc = 0x237C9Cu;
label_237c9c:
    // 0x237c9c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x237c9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_237ca0:
    // 0x237ca0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x237ca0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237ca4:
    // 0x237ca4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x237ca4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237ca8:
    // 0x237ca8: 0x28620101  slti        $v0, $v1, 0x101
    ctx->pc = 0x237ca8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)257) ? 1 : 0);
label_237cac:
    // 0x237cac: 0xc08b538  jal         func_22D4E0
label_237cb0:
    if (ctx->pc == 0x237CB0u) {
        ctx->pc = 0x237CB0u;
            // 0x237cb0: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->pc = 0x237CB4u;
        goto label_237cb4;
    }
    ctx->pc = 0x237CACu;
    SET_GPR_U32(ctx, 31, 0x237CB4u);
    ctx->pc = 0x237CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237CACu;
            // 0x237cb0: 0x62300b  movn        $a2, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237CB4u; }
        if (ctx->pc != 0x237CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237CB4u; }
        if (ctx->pc != 0x237CB4u) { return; }
    }
    ctx->pc = 0x237CB4u;
label_237cb4:
    // 0x237cb4: 0x24020019  addiu       $v0, $zero, 0x19
    ctx->pc = 0x237cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
label_237cb8:
    // 0x237cb8: 0x128200a9  beq         $s4, $v0, . + 4 + (0xA9 << 2)
label_237cbc:
    if (ctx->pc == 0x237CBCu) {
        ctx->pc = 0x237CBCu;
            // 0x237cbc: 0x2a82001a  slti        $v0, $s4, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->pc = 0x237CC0u;
        goto label_237cc0;
    }
    ctx->pc = 0x237CB8u;
    {
        const bool branch_taken_0x237cb8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x237CBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CB8u;
            // 0x237cbc: 0x2a82001a  slti        $v0, $s4, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)26) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cb8) {
            ctx->pc = 0x237F60u;
            goto label_237f60;
        }
    }
    ctx->pc = 0x237CC0u;
label_237cc0:
    // 0x237cc0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_237cc4:
    if (ctx->pc == 0x237CC4u) {
        ctx->pc = 0x237CC4u;
            // 0x237cc4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->pc = 0x237CC8u;
        goto label_237cc8;
    }
    ctx->pc = 0x237CC0u;
    {
        const bool branch_taken_0x237cc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237CC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CC0u;
            // 0x237cc4: 0x24020007  addiu       $v0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cc0) {
            ctx->pc = 0x237CE0u;
            goto label_237ce0;
        }
    }
    ctx->pc = 0x237CC8u;
label_237cc8:
    // 0x237cc8: 0x1282000c  beq         $s4, $v0, . + 4 + (0xC << 2)
label_237ccc:
    if (ctx->pc == 0x237CCCu) {
        ctx->pc = 0x237CCCu;
            // 0x237ccc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->pc = 0x237CD0u;
        goto label_237cd0;
    }
    ctx->pc = 0x237CC8u;
    {
        const bool branch_taken_0x237cc8 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x237CCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CC8u;
            // 0x237ccc: 0x24020009  addiu       $v0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cc8) {
            ctx->pc = 0x237CFCu;
            goto label_237cfc;
        }
    }
    ctx->pc = 0x237CD0u;
label_237cd0:
    // 0x237cd0: 0x128200a3  beq         $s4, $v0, . + 4 + (0xA3 << 2)
label_237cd4:
    if (ctx->pc == 0x237CD4u) {
        ctx->pc = 0x237CD4u;
            // 0x237cd4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x237CD8u;
        goto label_237cd8;
    }
    ctx->pc = 0x237CD0u;
    {
        const bool branch_taken_0x237cd0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x237CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CD0u;
            // 0x237cd4: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cd0) {
            ctx->pc = 0x237F60u;
            goto label_237f60;
        }
    }
    ctx->pc = 0x237CD8u;
label_237cd8:
    // 0x237cd8: 0x10000090  b           . + 4 + (0x90 << 2)
label_237cdc:
    if (ctx->pc == 0x237CDCu) {
        ctx->pc = 0x237CE0u;
        goto label_237ce0;
    }
    ctx->pc = 0x237CD8u;
    {
        const bool branch_taken_0x237cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237cd8) {
            ctx->pc = 0x237F1Cu;
            goto label_237f1c;
        }
    }
    ctx->pc = 0x237CE0u;
label_237ce0:
    // 0x237ce0: 0x24020065  addiu       $v0, $zero, 0x65
    ctx->pc = 0x237ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 101));
label_237ce4:
    // 0x237ce4: 0x12820053  beq         $s4, $v0, . + 4 + (0x53 << 2)
label_237ce8:
    if (ctx->pc == 0x237CE8u) {
        ctx->pc = 0x237CE8u;
            // 0x237ce8: 0x240200a7  addiu       $v0, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->pc = 0x237CECu;
        goto label_237cec;
    }
    ctx->pc = 0x237CE4u;
    {
        const bool branch_taken_0x237ce4 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x237CE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CE4u;
            // 0x237ce8: 0x240200a7  addiu       $v0, $zero, 0xA7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 167));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237ce4) {
            ctx->pc = 0x237E34u;
            goto label_237e34;
        }
    }
    ctx->pc = 0x237CECu;
label_237cec:
    // 0x237cec: 0x12820069  beq         $s4, $v0, . + 4 + (0x69 << 2)
label_237cf0:
    if (ctx->pc == 0x237CF0u) {
        ctx->pc = 0x237CF0u;
            // 0x237cf0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x237CF4u;
        goto label_237cf4;
    }
    ctx->pc = 0x237CECu;
    {
        const bool branch_taken_0x237cec = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        ctx->pc = 0x237CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237CECu;
            // 0x237cf0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237cec) {
            ctx->pc = 0x237E94u;
            goto label_237e94;
        }
    }
    ctx->pc = 0x237CF4u;
label_237cf4:
    // 0x237cf4: 0x10000089  b           . + 4 + (0x89 << 2)
label_237cf8:
    if (ctx->pc == 0x237CF8u) {
        ctx->pc = 0x237CFCu;
        goto label_237cfc;
    }
    ctx->pc = 0x237CF4u;
    {
        const bool branch_taken_0x237cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x237cf4) {
            ctx->pc = 0x237F1Cu;
            goto label_237f1c;
        }
    }
    ctx->pc = 0x237CFCu;
label_237cfc:
    // 0x237cfc: 0x56600010  bnel        $s3, $zero, . + 4 + (0x10 << 2)
label_237d00:
    if (ctx->pc == 0x237D00u) {
        ctx->pc = 0x237D00u;
            // 0x237d00: 0x8e634e3c  lw          $v1, 0x4E3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20028)));
        ctx->pc = 0x237D04u;
        goto label_237d04;
    }
    ctx->pc = 0x237CFCu;
    {
        const bool branch_taken_0x237cfc = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x237cfc) {
            ctx->pc = 0x237D00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237CFCu;
            // 0x237d00: 0x8e634e3c  lw          $v1, 0x4E3C($s3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20028)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237D40u;
            goto label_237d40;
        }
    }
    ctx->pc = 0x237D04u;
label_237d04:
    // 0x237d04: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x237d04u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_237d08:
    // 0x237d08: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x237d08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_237d0c:
    // 0x237d0c: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x237d0cu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_237d10:
    // 0x237d10: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x237d10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_237d14:
    // 0x237d14: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x237d14u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_237d18:
    // 0x237d18: 0x24a54d80  addiu       $a1, $a1, 0x4D80
    ctx->pc = 0x237d18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19840));
label_237d1c:
    // 0x237d1c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x237d1cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_237d20:
    // 0x237d20: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x237d20u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_237d24:
    // 0x237d24: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x237d24u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_237d28:
    // 0x237d28: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x237d28u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_237d2c:
    // 0x237d2c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x237d2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_237d30:
    // 0x237d30: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x237d30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_237d34:
    // 0x237d34: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x237d34u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237d38:
    // 0x237d38: 0x808b5ac  j           func_22D6B0
label_237d3c:
    if (ctx->pc == 0x237D3Cu) {
        ctx->pc = 0x237D3Cu;
            // 0x237d3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x237D40u;
        goto label_237d40;
    }
    ctx->pc = 0x237D38u;
    ctx->pc = 0x237D3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237D38u;
            // 0x237d3c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x237D40u;
label_237d40:
    // 0x237d40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x237d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_237d44:
    // 0x237d44: 0x10620010  beq         $v1, $v0, . + 4 + (0x10 << 2)
label_237d48:
    if (ctx->pc == 0x237D48u) {
        ctx->pc = 0x237D48u;
            // 0x237d48: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->pc = 0x237D4Cu;
        goto label_237d4c;
    }
    ctx->pc = 0x237D44u;
    {
        const bool branch_taken_0x237d44 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x237D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D44u;
            // 0x237d48: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d44) {
            ctx->pc = 0x237D88u;
            goto label_237d88;
        }
    }
    ctx->pc = 0x237D4Cu;
label_237d4c:
    // 0x237d4c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x237d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_237d50:
    // 0x237d50: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x237d50u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_237d54:
    // 0x237d54: 0x24a54db8  addiu       $a1, $a1, 0x4DB8
    ctx->pc = 0x237d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19896));
label_237d58:
    // 0x237d58: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x237d58u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_237d5c:
    // 0x237d5c: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x237d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_237d60:
    // 0x237d60: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x237d60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_237d64:
    // 0x237d64: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x237d64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_237d68:
    // 0x237d68: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x237d68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_237d6c:
    // 0x237d6c: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x237d6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_237d70:
    // 0x237d70: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x237d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_237d74:
    // 0x237d74: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x237d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_237d78:
    // 0x237d78: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x237d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_237d7c:
    // 0x237d7c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x237d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237d80:
    // 0x237d80: 0x808b5ac  j           func_22D6B0
label_237d84:
    if (ctx->pc == 0x237D84u) {
        ctx->pc = 0x237D84u;
            // 0x237d84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x237D88u;
        goto label_237d88;
    }
    ctx->pc = 0x237D80u;
    ctx->pc = 0x237D84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237D80u;
            // 0x237d84: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x237D88u;
label_237d88:
    // 0x237d88: 0x13c0000c  beqz        $fp, . + 4 + (0xC << 2)
label_237d8c:
    if (ctx->pc == 0x237D8Cu) {
        ctx->pc = 0x237D8Cu;
            // 0x237d8c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x237D90u;
        goto label_237d90;
    }
    ctx->pc = 0x237D88u;
    {
        const bool branch_taken_0x237d88 = (GPR_U64(ctx, 30) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D88u;
            // 0x237d8c: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d88) {
            ctx->pc = 0x237DBCu;
            goto label_237dbc;
        }
    }
    ctx->pc = 0x237D90u;
label_237d90:
    // 0x237d90: 0xc098552  jal         func_261548
label_237d94:
    if (ctx->pc == 0x237D94u) {
        ctx->pc = 0x237D94u;
            // 0x237d94: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->pc = 0x237D98u;
        goto label_237d98;
    }
    ctx->pc = 0x237D90u;
    SET_GPR_U32(ctx, 31, 0x237D98u);
    ctx->pc = 0x237D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237D90u;
            // 0x237d94: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237D98u; }
        if (ctx->pc != 0x237D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237D98u; }
        if (ctx->pc != 0x237D98u) { return; }
    }
    ctx->pc = 0x237D98u;
label_237d98:
    // 0x237d98: 0x10400071  beqz        $v0, . + 4 + (0x71 << 2)
label_237d9c:
    if (ctx->pc == 0x237D9Cu) {
        ctx->pc = 0x237D9Cu;
            // 0x237d9c: 0xae624e50  sw          $v0, 0x4E50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20048), GPR_U32(ctx, 2));
        ctx->pc = 0x237DA0u;
        goto label_237da0;
    }
    ctx->pc = 0x237D98u;
    {
        const bool branch_taken_0x237d98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x237D9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237D98u;
            // 0x237d9c: 0xae624e50  sw          $v0, 0x4E50($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20048), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237d98) {
            ctx->pc = 0x237F60u;
            goto label_237f60;
        }
    }
    ctx->pc = 0x237DA0u;
label_237da0:
    // 0x237da0: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x237da0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_237da4:
    // 0x237da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x237da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_237da8:
    // 0x237da8: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x237da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
label_237dac:
    // 0x237dac: 0xae634e54  sw          $v1, 0x4E54($s3)
    ctx->pc = 0x237dacu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20052), GPR_U32(ctx, 3));
label_237db0:
    // 0x237db0: 0xc08b538  jal         func_22D4E0
label_237db4:
    if (ctx->pc == 0x237DB4u) {
        ctx->pc = 0x237DB4u;
            // 0x237db4: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->pc = 0x237DB8u;
        goto label_237db8;
    }
    ctx->pc = 0x237DB0u;
    SET_GPR_U32(ctx, 31, 0x237DB8u);
    ctx->pc = 0x237DB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237DB0u;
            // 0x237db4: 0x8fa6000c  lw          $a2, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DB8u; }
        if (ctx->pc != 0x237DB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DB8u; }
        if (ctx->pc != 0x237DB8u) { return; }
    }
    ctx->pc = 0x237DB8u;
label_237db8:
    // 0x237db8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x237db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_237dbc:
    // 0x237dbc: 0x26644e40  addiu       $a0, $s3, 0x4E40
    ctx->pc = 0x237dbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20032));
label_237dc0:
    // 0x237dc0: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x237dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_237dc4:
    // 0x237dc4: 0x26704e58  addiu       $s0, $s3, 0x4E58
    ctx->pc = 0x237dc4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 20056));
label_237dc8:
    // 0x237dc8: 0xc08b538  jal         func_22D4E0
label_237dcc:
    if (ctx->pc == 0x237DCCu) {
        ctx->pc = 0x237DCCu;
            // 0x237dcc: 0x24450006  addiu       $a1, $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x237DD0u;
        goto label_237dd0;
    }
    ctx->pc = 0x237DC8u;
    SET_GPR_U32(ctx, 31, 0x237DD0u);
    ctx->pc = 0x237DCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237DC8u;
            // 0x237dcc: 0x24450006  addiu       $a1, $v0, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DD0u; }
        if (ctx->pc != 0x237DD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DD0u; }
        if (ctx->pc != 0x237DD0u) { return; }
    }
    ctx->pc = 0x237DD0u;
label_237dd0:
    // 0x237dd0: 0xc08a08c  jal         func_228230
label_237dd4:
    if (ctx->pc == 0x237DD4u) {
        ctx->pc = 0x237DD4u;
            // 0x237dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237DD8u;
        goto label_237dd8;
    }
    ctx->pc = 0x237DD0u;
    SET_GPR_U32(ctx, 31, 0x237DD8u);
    ctx->pc = 0x237DD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237DD0u;
            // 0x237dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (runtime->hasFunction(0x228230u)) {
        auto targetFn = runtime->lookupFunction(0x228230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DD8u; }
        if (ctx->pc != 0x237DD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228230_0x228230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237DD8u; }
        if (ctx->pc != 0x237DD8u) { return; }
    }
    ctx->pc = 0x237DD8u;
label_237dd8:
    // 0x237dd8: 0x8e624e84  lw          $v0, 0x4E84($s3)
    ctx->pc = 0x237dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20100)));
label_237ddc:
    // 0x237ddc: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x237ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_237de0:
    // 0x237de0: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x237de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_237de4:
    // 0x237de4: 0xae644e3c  sw          $a0, 0x4E3C($s3)
    ctx->pc = 0x237de4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20028), GPR_U32(ctx, 4));
label_237de8:
    // 0x237de8: 0x82182b  sltu        $v1, $a0, $v0
    ctx->pc = 0x237de8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_237dec:
    // 0x237dec: 0xae604e7c  sw          $zero, 0x4E7C($s3)
    ctx->pc = 0x237decu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20092), GPR_U32(ctx, 0));
label_237df0:
    // 0x237df0: 0xa3100a  movz        $v0, $a1, $v1
    ctx->pc = 0x237df0u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 5));
label_237df4:
    // 0x237df4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x237df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_237df8:
    // 0x237df8: 0xc08e34a  jal         func_238D28
label_237dfc:
    if (ctx->pc == 0x237DFCu) {
        ctx->pc = 0x237DFCu;
            // 0x237dfc: 0xae624e84  sw          $v0, 0x4E84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20100), GPR_U32(ctx, 2));
        ctx->pc = 0x237E00u;
        goto label_237e00;
    }
    ctx->pc = 0x237DF8u;
    SET_GPR_U32(ctx, 31, 0x237E00u);
    ctx->pc = 0x237DFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237DF8u;
            // 0x237dfc: 0xae624e84  sw          $v0, 0x4E84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238D28u;
    if (runtime->hasFunction(0x238D28u)) {
        auto targetFn = runtime->lookupFunction(0x238D28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E00u; }
        if (ctx->pc != 0x237E00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238D28_0x238d28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E00u; }
        if (ctx->pc != 0x237E00u) { return; }
    }
    ctx->pc = 0x237E00u;
label_237e00:
    // 0x237e00: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_237e04:
    if (ctx->pc == 0x237E04u) {
        ctx->pc = 0x237E04u;
            // 0x237e04: 0x3c060024  lui         $a2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
        ctx->pc = 0x237E08u;
        goto label_237e08;
    }
    ctx->pc = 0x237E00u;
    {
        const bool branch_taken_0x237e00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x237E04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E00u;
            // 0x237e04: 0x3c060024  lui         $a2, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e00) {
            ctx->pc = 0x237E24u;
            goto label_237e24;
        }
    }
    ctx->pc = 0x237E08u;
label_237e08:
    // 0x237e08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x237e08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_237e0c:
    // 0x237e0c: 0x24c689b8  addiu       $a2, $a2, -0x7648
    ctx->pc = 0x237e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937016));
label_237e10:
    // 0x237e10: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x237e10u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_237e14:
    // 0x237e14: 0xc08a058  jal         func_228160
label_237e18:
    if (ctx->pc == 0x237E18u) {
        ctx->pc = 0x237E18u;
            // 0x237e18: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x237E1Cu;
        goto label_237e1c;
    }
    ctx->pc = 0x237E14u;
    SET_GPR_U32(ctx, 31, 0x237E1Cu);
    ctx->pc = 0x237E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237E14u;
            // 0x237e18: 0x24050014  addiu       $a1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228160u;
    if (runtime->hasFunction(0x228160u)) {
        auto targetFn = runtime->lookupFunction(0x228160u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E1Cu; }
        if (ctx->pc != 0x237E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228160_0x228160(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E1Cu; }
        if (ctx->pc != 0x237E1Cu) { return; }
    }
    ctx->pc = 0x237E1Cu;
label_237e1c:
    // 0x237e1c: 0x10000051  b           . + 4 + (0x51 << 2)
label_237e20:
    if (ctx->pc == 0x237E20u) {
        ctx->pc = 0x237E20u;
            // 0x237e20: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x237E24u;
        goto label_237e24;
    }
    ctx->pc = 0x237E1Cu;
    {
        const bool branch_taken_0x237e1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E1Cu;
            // 0x237e20: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e1c) {
            ctx->pc = 0x237F64u;
            goto label_237f64;
        }
    }
    ctx->pc = 0x237E24u;
label_237e24:
    // 0x237e24: 0xc08e334  jal         func_238CD0
label_237e28:
    if (ctx->pc == 0x237E28u) {
        ctx->pc = 0x237E28u;
            // 0x237e28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237E2Cu;
        goto label_237e2c;
    }
    ctx->pc = 0x237E24u;
    SET_GPR_U32(ctx, 31, 0x237E2Cu);
    ctx->pc = 0x237E28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237E24u;
            // 0x237e28: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x238CD0u;
    if (runtime->hasFunction(0x238CD0u)) {
        auto targetFn = runtime->lookupFunction(0x238CD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E2Cu; }
        if (ctx->pc != 0x237E2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00238CD0_0x238cd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E2Cu; }
        if (ctx->pc != 0x237E2Cu) { return; }
    }
    ctx->pc = 0x237E2Cu;
label_237e2c:
    // 0x237e2c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_237e30:
    if (ctx->pc == 0x237E30u) {
        ctx->pc = 0x237E30u;
            // 0x237e30: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x237E34u;
        goto label_237e34;
    }
    ctx->pc = 0x237E2Cu;
    {
        const bool branch_taken_0x237e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E2Cu;
            // 0x237e30: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e2c) {
            ctx->pc = 0x237F64u;
            goto label_237f64;
        }
    }
    ctx->pc = 0x237E34u;
label_237e34:
    // 0x237e34: 0x1260004b  beqz        $s3, . + 4 + (0x4B << 2)
label_237e38:
    if (ctx->pc == 0x237E38u) {
        ctx->pc = 0x237E38u;
            // 0x237e38: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x237E3Cu;
        goto label_237e3c;
    }
    ctx->pc = 0x237E34u;
    {
        const bool branch_taken_0x237e34 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E34u;
            // 0x237e38: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e34) {
            ctx->pc = 0x237F64u;
            goto label_237f64;
        }
    }
    ctx->pc = 0x237E3Cu;
label_237e3c:
    // 0x237e3c: 0xa6774e46  sh          $s7, 0x4E46($s3)
    ctx->pc = 0x237e3cu;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20038), (uint16_t)GPR_U32(ctx, 23));
label_237e40:
    // 0x237e40: 0xc08a08c  jal         func_228230
label_237e44:
    if (ctx->pc == 0x237E44u) {
        ctx->pc = 0x237E44u;
            // 0x237e44: 0x26644e58  addiu       $a0, $s3, 0x4E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20056));
        ctx->pc = 0x237E48u;
        goto label_237e48;
    }
    ctx->pc = 0x237E40u;
    SET_GPR_U32(ctx, 31, 0x237E48u);
    ctx->pc = 0x237E44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237E40u;
            // 0x237e44: 0x26644e58  addiu       $a0, $s3, 0x4E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (runtime->hasFunction(0x228230u)) {
        auto targetFn = runtime->lookupFunction(0x228230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E48u; }
        if (ctx->pc != 0x237E48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228230_0x228230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E48u; }
        if (ctx->pc != 0x237E48u) { return; }
    }
    ctx->pc = 0x237E48u;
label_237e48:
    // 0x237e48: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x237e48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_237e4c:
    // 0x237e4c: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x237e4cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_237e50:
    // 0x237e50: 0x24a54dd8  addiu       $a1, $a1, 0x4DD8
    ctx->pc = 0x237e50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19928));
label_237e54:
    // 0x237e54: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x237e54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_237e58:
    // 0x237e58: 0xc08b5ac  jal         func_22D6B0
label_237e5c:
    if (ctx->pc == 0x237E5Cu) {
        ctx->pc = 0x237E5Cu;
            // 0x237e5c: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->pc = 0x237E60u;
        goto label_237e60;
    }
    ctx->pc = 0x237E58u;
    SET_GPR_U32(ctx, 31, 0x237E60u);
    ctx->pc = 0x237E5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237E58u;
            // 0x237e5c: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E60u; }
        if (ctx->pc != 0x237E60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237E60u; }
        if (ctx->pc != 0x237E60u) { return; }
    }
    ctx->pc = 0x237E60u;
label_237e60:
    // 0x237e60: 0x8e634e84  lw          $v1, 0x4E84($s3)
    ctx->pc = 0x237e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20100)));
label_237e64:
    // 0x237e64: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x237e64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_237e68:
    // 0x237e68: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x237e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_237e6c:
    // 0x237e6c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x237e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_237e70:
    // 0x237e70: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x237e70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_237e74:
    // 0x237e74: 0x8e664e10  lw          $a2, 0x4E10($s3)
    ctx->pc = 0x237e74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19984)));
label_237e78:
    // 0x237e78: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x237e78u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
label_237e7c:
    // 0x237e7c: 0xae654e3c  sw          $a1, 0x4E3C($s3)
    ctx->pc = 0x237e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20028), GPR_U32(ctx, 5));
label_237e80:
    // 0x237e80: 0xae634e84  sw          $v1, 0x4E84($s3)
    ctx->pc = 0x237e80u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20100), GPR_U32(ctx, 3));
label_237e84:
    // 0x237e84: 0xc0f809  jalr        $a2
label_237e88:
    if (ctx->pc == 0x237E88u) {
        ctx->pc = 0x237E88u;
            // 0x237e88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237E8Cu;
        goto label_237e8c;
    }
    ctx->pc = 0x237E84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 6);
        SET_GPR_U32(ctx, 31, 0x237E8Cu);
        ctx->pc = 0x237E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E84u;
            // 0x237e88: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x237E8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x237E8Cu; }
            if (ctx->pc != 0x237E8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x237E8Cu;
label_237e8c:
    // 0x237e8c: 0x10000035  b           . + 4 + (0x35 << 2)
label_237e90:
    if (ctx->pc == 0x237E90u) {
        ctx->pc = 0x237E90u;
            // 0x237e90: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x237E94u;
        goto label_237e94;
    }
    ctx->pc = 0x237E8Cu;
    {
        const bool branch_taken_0x237e8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E8Cu;
            // 0x237e90: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e8c) {
            ctx->pc = 0x237F64u;
            goto label_237f64;
        }
    }
    ctx->pc = 0x237E94u;
label_237e94:
    // 0x237e94: 0x12600033  beqz        $s3, . + 4 + (0x33 << 2)
label_237e98:
    if (ctx->pc == 0x237E98u) {
        ctx->pc = 0x237E98u;
            // 0x237e98: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x237E9Cu;
        goto label_237e9c;
    }
    ctx->pc = 0x237E94u;
    {
        const bool branch_taken_0x237e94 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x237E98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237E94u;
            // 0x237e98: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237e94) {
            ctx->pc = 0x237F64u;
            goto label_237f64;
        }
    }
    ctx->pc = 0x237E9Cu;
label_237e9c:
    // 0x237e9c: 0xc08a08c  jal         func_228230
label_237ea0:
    if (ctx->pc == 0x237EA0u) {
        ctx->pc = 0x237EA0u;
            // 0x237ea0: 0x26644e58  addiu       $a0, $s3, 0x4E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20056));
        ctx->pc = 0x237EA4u;
        goto label_237ea4;
    }
    ctx->pc = 0x237E9Cu;
    SET_GPR_U32(ctx, 31, 0x237EA4u);
    ctx->pc = 0x237EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237E9Cu;
            // 0x237ea0: 0x26644e58  addiu       $a0, $s3, 0x4E58 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20056));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228230u;
    if (runtime->hasFunction(0x228230u)) {
        auto targetFn = runtime->lookupFunction(0x228230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EA4u; }
        if (ctx->pc != 0x237EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228230_0x228230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EA4u; }
        if (ctx->pc != 0x237EA4u) { return; }
    }
    ctx->pc = 0x237EA4u;
label_237ea4:
    // 0x237ea4: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x237ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_237ea8:
    // 0x237ea8: 0x2e0382d  daddu       $a3, $s7, $zero
    ctx->pc = 0x237ea8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_237eac:
    // 0x237eac: 0x24a54df8  addiu       $a1, $a1, 0x4DF8
    ctx->pc = 0x237eacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19960));
label_237eb0:
    // 0x237eb0: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x237eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_237eb4:
    // 0x237eb4: 0xc08b5ac  jal         func_22D6B0
label_237eb8:
    if (ctx->pc == 0x237EB8u) {
        ctx->pc = 0x237EB8u;
            // 0x237eb8: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->pc = 0x237EBCu;
        goto label_237ebc;
    }
    ctx->pc = 0x237EB4u;
    SET_GPR_U32(ctx, 31, 0x237EBCu);
    ctx->pc = 0x237EB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237EB4u;
            // 0x237eb8: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EBCu; }
        if (ctx->pc != 0x237EBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EBCu; }
        if (ctx->pc != 0x237EBCu) { return; }
    }
    ctx->pc = 0x237EBCu;
label_237ebc:
    // 0x237ebc: 0x8e644e84  lw          $a0, 0x4E84($s3)
    ctx->pc = 0x237ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20100)));
label_237ec0:
    // 0x237ec0: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x237ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_237ec4:
    // 0x237ec4: 0xae604e3c  sw          $zero, 0x4E3C($s3)
    ctx->pc = 0x237ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20028), GPR_U32(ctx, 0));
label_237ec8:
    // 0x237ec8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x237ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_237ecc:
    // 0x237ecc: 0x28830006  slti        $v1, $a0, 0x6
    ctx->pc = 0x237eccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)6) ? 1 : 0);
label_237ed0:
    // 0x237ed0: 0x24a5fd00  addiu       $a1, $a1, -0x300
    ctx->pc = 0x237ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966528));
label_237ed4:
    // 0x237ed4: 0x83100a  movz        $v0, $a0, $v1
    ctx->pc = 0x237ed4u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 4));
label_237ed8:
    // 0x237ed8: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x237ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_237edc:
    // 0x237edc: 0x26644e40  addiu       $a0, $s3, 0x4E40
    ctx->pc = 0x237edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20032));
label_237ee0:
    // 0x237ee0: 0xc08b538  jal         func_22D4E0
label_237ee4:
    if (ctx->pc == 0x237EE4u) {
        ctx->pc = 0x237EE4u;
            // 0x237ee4: 0xae624e84  sw          $v0, 0x4E84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20100), GPR_U32(ctx, 2));
        ctx->pc = 0x237EE8u;
        goto label_237ee8;
    }
    ctx->pc = 0x237EE0u;
    SET_GPR_U32(ctx, 31, 0x237EE8u);
    ctx->pc = 0x237EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237EE0u;
            // 0x237ee4: 0xae624e84  sw          $v0, 0x4E84($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EE8u; }
        if (ctx->pc != 0x237EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EE8u; }
        if (ctx->pc != 0x237EE8u) { return; }
    }
    ctx->pc = 0x237EE8u;
label_237ee8:
    // 0x237ee8: 0x8e644e50  lw          $a0, 0x4E50($s3)
    ctx->pc = 0x237ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20048)));
label_237eec:
    // 0x237eec: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_237ef0:
    if (ctx->pc == 0x237EF0u) {
        ctx->pc = 0x237EF0u;
            // 0x237ef0: 0xae604e54  sw          $zero, 0x4E54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20052), GPR_U32(ctx, 0));
        ctx->pc = 0x237EF4u;
        goto label_237ef4;
    }
    ctx->pc = 0x237EECu;
    {
        const bool branch_taken_0x237eec = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x237eec) {
            ctx->pc = 0x237EF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x237EECu;
            // 0x237ef0: 0xae604e54  sw          $zero, 0x4E54($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 20052), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x237F04u;
            goto label_237f04;
        }
    }
    ctx->pc = 0x237EF4u;
label_237ef4:
    // 0x237ef4: 0xc098560  jal         func_261580
label_237ef8:
    if (ctx->pc == 0x237EF8u) {
        ctx->pc = 0x237EFCu;
        goto label_237efc;
    }
    ctx->pc = 0x237EF4u;
    SET_GPR_U32(ctx, 31, 0x237EFCu);
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EFCu; }
        if (ctx->pc != 0x237EFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237EFCu; }
        if (ctx->pc != 0x237EFCu) { return; }
    }
    ctx->pc = 0x237EFCu;
label_237efc:
    // 0x237efc: 0xae604e50  sw          $zero, 0x4E50($s3)
    ctx->pc = 0x237efcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20048), GPR_U32(ctx, 0));
label_237f00:
    // 0x237f00: 0xae604e54  sw          $zero, 0x4E54($s3)
    ctx->pc = 0x237f00u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20052), GPR_U32(ctx, 0));
label_237f04:
    // 0x237f04: 0xa6604e46  sh          $zero, 0x4E46($s3)
    ctx->pc = 0x237f04u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 20038), (uint16_t)GPR_U32(ctx, 0));
label_237f08:
    // 0x237f08: 0x8e624e14  lw          $v0, 0x4E14($s3)
    ctx->pc = 0x237f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 19988)));
label_237f0c:
    // 0x237f0c: 0x40f809  jalr        $v0
label_237f10:
    if (ctx->pc == 0x237F10u) {
        ctx->pc = 0x237F10u;
            // 0x237f10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x237F14u;
        goto label_237f14;
    }
    ctx->pc = 0x237F0Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x237F14u);
        ctx->pc = 0x237F10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F0Cu;
            // 0x237f10: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x237F14u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x237F14u; }
            if (ctx->pc != 0x237F14u) { return; }
        }
        }
    }
    ctx->pc = 0x237F14u;
label_237f14:
    // 0x237f14: 0x10000013  b           . + 4 + (0x13 << 2)
label_237f18:
    if (ctx->pc == 0x237F18u) {
        ctx->pc = 0x237F18u;
            // 0x237f18: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x237F1Cu;
        goto label_237f1c;
    }
    ctx->pc = 0x237F14u;
    {
        const bool branch_taken_0x237f14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F14u;
            // 0x237f18: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f14) {
            ctx->pc = 0x237F64u;
            goto label_237f64;
        }
    }
    ctx->pc = 0x237F1Cu;
label_237f1c:
    // 0x237f1c: 0x1260000a  beqz        $s3, . + 4 + (0xA << 2)
label_237f20:
    if (ctx->pc == 0x237F20u) {
        ctx->pc = 0x237F20u;
            // 0x237f20: 0x24454e28  addiu       $a1, $v0, 0x4E28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20008));
        ctx->pc = 0x237F24u;
        goto label_237f24;
    }
    ctx->pc = 0x237F1Cu;
    {
        const bool branch_taken_0x237f1c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F1Cu;
            // 0x237f20: 0x24454e28  addiu       $a1, $v0, 0x4E28 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 20008));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f1c) {
            ctx->pc = 0x237F48u;
            goto label_237f48;
        }
    }
    ctx->pc = 0x237F24u;
label_237f24:
    // 0x237f24: 0x1000000a  b           . + 4 + (0xA << 2)
label_237f28:
    if (ctx->pc == 0x237F28u) {
        ctx->pc = 0x237F28u;
            // 0x237f28: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->pc = 0x237F2Cu;
        goto label_237f2c;
    }
    ctx->pc = 0x237F24u;
    {
        const bool branch_taken_0x237f24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F24u;
            // 0x237f28: 0x26660014  addiu       $a2, $s3, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f24) {
            ctx->pc = 0x237F50u;
            goto label_237f50;
        }
    }
    ctx->pc = 0x237F2Cu;
label_237f2c:
    // 0x237f2c: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x237f2cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
label_237f30:
    // 0x237f30: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x237f30u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_237f34:
    // 0x237f34: 0x24a54d58  addiu       $a1, $a1, 0x4D58
    ctx->pc = 0x237f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19800));
label_237f38:
    // 0x237f38: 0xc08b5ac  jal         func_22D6B0
label_237f3c:
    if (ctx->pc == 0x237F3Cu) {
        ctx->pc = 0x237F3Cu;
            // 0x237f3c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x237F40u;
        goto label_237f40;
    }
    ctx->pc = 0x237F38u;
    SET_GPR_U32(ctx, 31, 0x237F40u);
    ctx->pc = 0x237F3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237F38u;
            // 0x237f3c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237F40u; }
        if (ctx->pc != 0x237F40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237F40u; }
        if (ctx->pc != 0x237F40u) { return; }
    }
    ctx->pc = 0x237F40u;
label_237f40:
    // 0x237f40: 0x10000008  b           . + 4 + (0x8 << 2)
label_237f44:
    if (ctx->pc == 0x237F44u) {
        ctx->pc = 0x237F44u;
            // 0x237f44: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->pc = 0x237F48u;
        goto label_237f48;
    }
    ctx->pc = 0x237F40u;
    {
        const bool branch_taken_0x237f40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x237F44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F40u;
            // 0x237f44: 0xdfbf00a0  ld          $ra, 0xA0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x237f40) {
            ctx->pc = 0x237F64u;
            goto label_237f64;
        }
    }
    ctx->pc = 0x237F48u;
label_237f48:
    // 0x237f48: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x237f48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
label_237f4c:
    // 0x237f4c: 0x24464c20  addiu       $a2, $v0, 0x4C20
    ctx->pc = 0x237f4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 19488));
label_237f50:
    // 0x237f50: 0x280382d  daddu       $a3, $s4, $zero
    ctx->pc = 0x237f50u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_237f54:
    // 0x237f54: 0x2e0402d  daddu       $t0, $s7, $zero
    ctx->pc = 0x237f54u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_237f58:
    // 0x237f58: 0xc08b5ac  jal         func_22D6B0
label_237f5c:
    if (ctx->pc == 0x237F5Cu) {
        ctx->pc = 0x237F5Cu;
            // 0x237f5c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x237F60u;
        goto label_237f60;
    }
    ctx->pc = 0x237F58u;
    SET_GPR_U32(ctx, 31, 0x237F60u);
    ctx->pc = 0x237F5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x237F58u;
            // 0x237f5c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D6B0u;
    if (runtime->hasFunction(0x22D6B0u)) {
        auto targetFn = runtime->lookupFunction(0x22D6B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237F60u; }
        if (ctx->pc != 0x237F60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D6B0_0x22d6b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x237F60u; }
        if (ctx->pc != 0x237F60u) { return; }
    }
    ctx->pc = 0x237F60u;
label_237f60:
    // 0x237f60: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x237f60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_237f64:
    // 0x237f64: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x237f64u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_237f68:
    // 0x237f68: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x237f68u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_237f6c:
    // 0x237f6c: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x237f6cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_237f70:
    // 0x237f70: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x237f70u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_237f74:
    // 0x237f74: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x237f74u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_237f78:
    // 0x237f78: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x237f78u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_237f7c:
    // 0x237f7c: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x237f7cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_237f80:
    // 0x237f80: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x237f80u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_237f84:
    // 0x237f84: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x237f84u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_237f88:
    // 0x237f88: 0x3e00008  jr          $ra
label_237f8c:
    if (ctx->pc == 0x237F8Cu) {
        ctx->pc = 0x237F8Cu;
            // 0x237f8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->pc = 0x237F90u;
        goto label_fallthrough_0x237f88;
    }
    ctx->pc = 0x237F88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x237F8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x237F88u;
            // 0x237f8c: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x237f88:
    ctx->pc = 0x237F90u;
    ctx->pc = 0x237f90u;
}
