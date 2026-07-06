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

// Function: sub_00116940
// Address: 0x116940 - 0x116ea0
void sub_00116940_0x116940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00116940_0x116940");
#endif

    switch (ctx->pc) {
        case 0x116940u: goto label_116940;
        case 0x116944u: goto label_116944;
        case 0x116948u: goto label_116948;
        case 0x11694cu: goto label_11694c;
        case 0x116950u: goto label_116950;
        case 0x116954u: goto label_116954;
        case 0x116958u: goto label_116958;
        case 0x11695cu: goto label_11695c;
        case 0x116960u: goto label_116960;
        case 0x116964u: goto label_116964;
        case 0x116968u: goto label_116968;
        case 0x11696cu: goto label_11696c;
        case 0x116970u: goto label_116970;
        case 0x116974u: goto label_116974;
        case 0x116978u: goto label_116978;
        case 0x11697cu: goto label_11697c;
        case 0x116980u: goto label_116980;
        case 0x116984u: goto label_116984;
        case 0x116988u: goto label_116988;
        case 0x11698cu: goto label_11698c;
        case 0x116990u: goto label_116990;
        case 0x116994u: goto label_116994;
        case 0x116998u: goto label_116998;
        case 0x11699cu: goto label_11699c;
        case 0x1169a0u: goto label_1169a0;
        case 0x1169a4u: goto label_1169a4;
        case 0x1169a8u: goto label_1169a8;
        case 0x1169acu: goto label_1169ac;
        case 0x1169b0u: goto label_1169b0;
        case 0x1169b4u: goto label_1169b4;
        case 0x1169b8u: goto label_1169b8;
        case 0x1169bcu: goto label_1169bc;
        case 0x1169c0u: goto label_1169c0;
        case 0x1169c4u: goto label_1169c4;
        case 0x1169c8u: goto label_1169c8;
        case 0x1169ccu: goto label_1169cc;
        case 0x1169d0u: goto label_1169d0;
        case 0x1169d4u: goto label_1169d4;
        case 0x1169d8u: goto label_1169d8;
        case 0x1169dcu: goto label_1169dc;
        case 0x1169e0u: goto label_1169e0;
        case 0x1169e4u: goto label_1169e4;
        case 0x1169e8u: goto label_1169e8;
        case 0x1169ecu: goto label_1169ec;
        case 0x1169f0u: goto label_1169f0;
        case 0x1169f4u: goto label_1169f4;
        case 0x1169f8u: goto label_1169f8;
        case 0x1169fcu: goto label_1169fc;
        case 0x116a00u: goto label_116a00;
        case 0x116a04u: goto label_116a04;
        case 0x116a08u: goto label_116a08;
        case 0x116a0cu: goto label_116a0c;
        case 0x116a10u: goto label_116a10;
        case 0x116a14u: goto label_116a14;
        case 0x116a18u: goto label_116a18;
        case 0x116a1cu: goto label_116a1c;
        case 0x116a20u: goto label_116a20;
        case 0x116a24u: goto label_116a24;
        case 0x116a28u: goto label_116a28;
        case 0x116a2cu: goto label_116a2c;
        case 0x116a30u: goto label_116a30;
        case 0x116a34u: goto label_116a34;
        case 0x116a38u: goto label_116a38;
        case 0x116a3cu: goto label_116a3c;
        case 0x116a40u: goto label_116a40;
        case 0x116a44u: goto label_116a44;
        case 0x116a48u: goto label_116a48;
        case 0x116a4cu: goto label_116a4c;
        case 0x116a50u: goto label_116a50;
        case 0x116a54u: goto label_116a54;
        case 0x116a58u: goto label_116a58;
        case 0x116a5cu: goto label_116a5c;
        case 0x116a60u: goto label_116a60;
        case 0x116a64u: goto label_116a64;
        case 0x116a68u: goto label_116a68;
        case 0x116a6cu: goto label_116a6c;
        case 0x116a70u: goto label_116a70;
        case 0x116a74u: goto label_116a74;
        case 0x116a78u: goto label_116a78;
        case 0x116a7cu: goto label_116a7c;
        case 0x116a80u: goto label_116a80;
        case 0x116a84u: goto label_116a84;
        case 0x116a88u: goto label_116a88;
        case 0x116a8cu: goto label_116a8c;
        case 0x116a90u: goto label_116a90;
        case 0x116a94u: goto label_116a94;
        case 0x116a98u: goto label_116a98;
        case 0x116a9cu: goto label_116a9c;
        case 0x116aa0u: goto label_116aa0;
        case 0x116aa4u: goto label_116aa4;
        case 0x116aa8u: goto label_116aa8;
        case 0x116aacu: goto label_116aac;
        case 0x116ab0u: goto label_116ab0;
        case 0x116ab4u: goto label_116ab4;
        case 0x116ab8u: goto label_116ab8;
        case 0x116abcu: goto label_116abc;
        case 0x116ac0u: goto label_116ac0;
        case 0x116ac4u: goto label_116ac4;
        case 0x116ac8u: goto label_116ac8;
        case 0x116accu: goto label_116acc;
        case 0x116ad0u: goto label_116ad0;
        case 0x116ad4u: goto label_116ad4;
        case 0x116ad8u: goto label_116ad8;
        case 0x116adcu: goto label_116adc;
        case 0x116ae0u: goto label_116ae0;
        case 0x116ae4u: goto label_116ae4;
        case 0x116ae8u: goto label_116ae8;
        case 0x116aecu: goto label_116aec;
        case 0x116af0u: goto label_116af0;
        case 0x116af4u: goto label_116af4;
        case 0x116af8u: goto label_116af8;
        case 0x116afcu: goto label_116afc;
        case 0x116b00u: goto label_116b00;
        case 0x116b04u: goto label_116b04;
        case 0x116b08u: goto label_116b08;
        case 0x116b0cu: goto label_116b0c;
        case 0x116b10u: goto label_116b10;
        case 0x116b14u: goto label_116b14;
        case 0x116b18u: goto label_116b18;
        case 0x116b1cu: goto label_116b1c;
        case 0x116b20u: goto label_116b20;
        case 0x116b24u: goto label_116b24;
        case 0x116b28u: goto label_116b28;
        case 0x116b2cu: goto label_116b2c;
        case 0x116b30u: goto label_116b30;
        case 0x116b34u: goto label_116b34;
        case 0x116b38u: goto label_116b38;
        case 0x116b3cu: goto label_116b3c;
        case 0x116b40u: goto label_116b40;
        case 0x116b44u: goto label_116b44;
        case 0x116b48u: goto label_116b48;
        case 0x116b4cu: goto label_116b4c;
        case 0x116b50u: goto label_116b50;
        case 0x116b54u: goto label_116b54;
        case 0x116b58u: goto label_116b58;
        case 0x116b5cu: goto label_116b5c;
        case 0x116b60u: goto label_116b60;
        case 0x116b64u: goto label_116b64;
        case 0x116b68u: goto label_116b68;
        case 0x116b6cu: goto label_116b6c;
        case 0x116b70u: goto label_116b70;
        case 0x116b74u: goto label_116b74;
        case 0x116b78u: goto label_116b78;
        case 0x116b7cu: goto label_116b7c;
        case 0x116b80u: goto label_116b80;
        case 0x116b84u: goto label_116b84;
        case 0x116b88u: goto label_116b88;
        case 0x116b8cu: goto label_116b8c;
        case 0x116b90u: goto label_116b90;
        case 0x116b94u: goto label_116b94;
        case 0x116b98u: goto label_116b98;
        case 0x116b9cu: goto label_116b9c;
        case 0x116ba0u: goto label_116ba0;
        case 0x116ba4u: goto label_116ba4;
        case 0x116ba8u: goto label_116ba8;
        case 0x116bacu: goto label_116bac;
        case 0x116bb0u: goto label_116bb0;
        case 0x116bb4u: goto label_116bb4;
        case 0x116bb8u: goto label_116bb8;
        case 0x116bbcu: goto label_116bbc;
        case 0x116bc0u: goto label_116bc0;
        case 0x116bc4u: goto label_116bc4;
        case 0x116bc8u: goto label_116bc8;
        case 0x116bccu: goto label_116bcc;
        case 0x116bd0u: goto label_116bd0;
        case 0x116bd4u: goto label_116bd4;
        case 0x116bd8u: goto label_116bd8;
        case 0x116bdcu: goto label_116bdc;
        case 0x116be0u: goto label_116be0;
        case 0x116be4u: goto label_116be4;
        case 0x116be8u: goto label_116be8;
        case 0x116becu: goto label_116bec;
        case 0x116bf0u: goto label_116bf0;
        case 0x116bf4u: goto label_116bf4;
        case 0x116bf8u: goto label_116bf8;
        case 0x116bfcu: goto label_116bfc;
        case 0x116c00u: goto label_116c00;
        case 0x116c04u: goto label_116c04;
        case 0x116c08u: goto label_116c08;
        case 0x116c0cu: goto label_116c0c;
        case 0x116c10u: goto label_116c10;
        case 0x116c14u: goto label_116c14;
        case 0x116c18u: goto label_116c18;
        case 0x116c1cu: goto label_116c1c;
        case 0x116c20u: goto label_116c20;
        case 0x116c24u: goto label_116c24;
        case 0x116c28u: goto label_116c28;
        case 0x116c2cu: goto label_116c2c;
        case 0x116c30u: goto label_116c30;
        case 0x116c34u: goto label_116c34;
        case 0x116c38u: goto label_116c38;
        case 0x116c3cu: goto label_116c3c;
        case 0x116c40u: goto label_116c40;
        case 0x116c44u: goto label_116c44;
        case 0x116c48u: goto label_116c48;
        case 0x116c4cu: goto label_116c4c;
        case 0x116c50u: goto label_116c50;
        case 0x116c54u: goto label_116c54;
        case 0x116c58u: goto label_116c58;
        case 0x116c5cu: goto label_116c5c;
        case 0x116c60u: goto label_116c60;
        case 0x116c64u: goto label_116c64;
        case 0x116c68u: goto label_116c68;
        case 0x116c6cu: goto label_116c6c;
        case 0x116c70u: goto label_116c70;
        case 0x116c74u: goto label_116c74;
        case 0x116c78u: goto label_116c78;
        case 0x116c7cu: goto label_116c7c;
        case 0x116c80u: goto label_116c80;
        case 0x116c84u: goto label_116c84;
        case 0x116c88u: goto label_116c88;
        case 0x116c8cu: goto label_116c8c;
        case 0x116c90u: goto label_116c90;
        case 0x116c94u: goto label_116c94;
        case 0x116c98u: goto label_116c98;
        case 0x116c9cu: goto label_116c9c;
        case 0x116ca0u: goto label_116ca0;
        case 0x116ca4u: goto label_116ca4;
        case 0x116ca8u: goto label_116ca8;
        case 0x116cacu: goto label_116cac;
        case 0x116cb0u: goto label_116cb0;
        case 0x116cb4u: goto label_116cb4;
        case 0x116cb8u: goto label_116cb8;
        case 0x116cbcu: goto label_116cbc;
        case 0x116cc0u: goto label_116cc0;
        case 0x116cc4u: goto label_116cc4;
        case 0x116cc8u: goto label_116cc8;
        case 0x116cccu: goto label_116ccc;
        case 0x116cd0u: goto label_116cd0;
        case 0x116cd4u: goto label_116cd4;
        case 0x116cd8u: goto label_116cd8;
        case 0x116cdcu: goto label_116cdc;
        case 0x116ce0u: goto label_116ce0;
        case 0x116ce4u: goto label_116ce4;
        case 0x116ce8u: goto label_116ce8;
        case 0x116cecu: goto label_116cec;
        case 0x116cf0u: goto label_116cf0;
        case 0x116cf4u: goto label_116cf4;
        case 0x116cf8u: goto label_116cf8;
        case 0x116cfcu: goto label_116cfc;
        case 0x116d00u: goto label_116d00;
        case 0x116d04u: goto label_116d04;
        case 0x116d08u: goto label_116d08;
        case 0x116d0cu: goto label_116d0c;
        case 0x116d10u: goto label_116d10;
        case 0x116d14u: goto label_116d14;
        case 0x116d18u: goto label_116d18;
        case 0x116d1cu: goto label_116d1c;
        case 0x116d20u: goto label_116d20;
        case 0x116d24u: goto label_116d24;
        case 0x116d28u: goto label_116d28;
        case 0x116d2cu: goto label_116d2c;
        case 0x116d30u: goto label_116d30;
        case 0x116d34u: goto label_116d34;
        case 0x116d38u: goto label_116d38;
        case 0x116d3cu: goto label_116d3c;
        case 0x116d40u: goto label_116d40;
        case 0x116d44u: goto label_116d44;
        case 0x116d48u: goto label_116d48;
        case 0x116d4cu: goto label_116d4c;
        case 0x116d50u: goto label_116d50;
        case 0x116d54u: goto label_116d54;
        case 0x116d58u: goto label_116d58;
        case 0x116d5cu: goto label_116d5c;
        case 0x116d60u: goto label_116d60;
        case 0x116d64u: goto label_116d64;
        case 0x116d68u: goto label_116d68;
        case 0x116d6cu: goto label_116d6c;
        case 0x116d70u: goto label_116d70;
        case 0x116d74u: goto label_116d74;
        case 0x116d78u: goto label_116d78;
        case 0x116d7cu: goto label_116d7c;
        case 0x116d80u: goto label_116d80;
        case 0x116d84u: goto label_116d84;
        case 0x116d88u: goto label_116d88;
        case 0x116d8cu: goto label_116d8c;
        case 0x116d90u: goto label_116d90;
        case 0x116d94u: goto label_116d94;
        case 0x116d98u: goto label_116d98;
        case 0x116d9cu: goto label_116d9c;
        case 0x116da0u: goto label_116da0;
        case 0x116da4u: goto label_116da4;
        case 0x116da8u: goto label_116da8;
        case 0x116dacu: goto label_116dac;
        case 0x116db0u: goto label_116db0;
        case 0x116db4u: goto label_116db4;
        case 0x116db8u: goto label_116db8;
        case 0x116dbcu: goto label_116dbc;
        case 0x116dc0u: goto label_116dc0;
        case 0x116dc4u: goto label_116dc4;
        case 0x116dc8u: goto label_116dc8;
        case 0x116dccu: goto label_116dcc;
        case 0x116dd0u: goto label_116dd0;
        case 0x116dd4u: goto label_116dd4;
        case 0x116dd8u: goto label_116dd8;
        case 0x116ddcu: goto label_116ddc;
        case 0x116de0u: goto label_116de0;
        case 0x116de4u: goto label_116de4;
        case 0x116de8u: goto label_116de8;
        case 0x116decu: goto label_116dec;
        case 0x116df0u: goto label_116df0;
        case 0x116df4u: goto label_116df4;
        case 0x116df8u: goto label_116df8;
        case 0x116dfcu: goto label_116dfc;
        case 0x116e00u: goto label_116e00;
        case 0x116e04u: goto label_116e04;
        case 0x116e08u: goto label_116e08;
        case 0x116e0cu: goto label_116e0c;
        case 0x116e10u: goto label_116e10;
        case 0x116e14u: goto label_116e14;
        case 0x116e18u: goto label_116e18;
        case 0x116e1cu: goto label_116e1c;
        case 0x116e20u: goto label_116e20;
        case 0x116e24u: goto label_116e24;
        case 0x116e28u: goto label_116e28;
        case 0x116e2cu: goto label_116e2c;
        case 0x116e30u: goto label_116e30;
        case 0x116e34u: goto label_116e34;
        case 0x116e38u: goto label_116e38;
        case 0x116e3cu: goto label_116e3c;
        case 0x116e40u: goto label_116e40;
        case 0x116e44u: goto label_116e44;
        case 0x116e48u: goto label_116e48;
        case 0x116e4cu: goto label_116e4c;
        case 0x116e50u: goto label_116e50;
        case 0x116e54u: goto label_116e54;
        case 0x116e58u: goto label_116e58;
        case 0x116e5cu: goto label_116e5c;
        case 0x116e60u: goto label_116e60;
        case 0x116e64u: goto label_116e64;
        case 0x116e68u: goto label_116e68;
        case 0x116e6cu: goto label_116e6c;
        case 0x116e70u: goto label_116e70;
        case 0x116e74u: goto label_116e74;
        case 0x116e78u: goto label_116e78;
        case 0x116e7cu: goto label_116e7c;
        case 0x116e80u: goto label_116e80;
        case 0x116e84u: goto label_116e84;
        case 0x116e88u: goto label_116e88;
        case 0x116e8cu: goto label_116e8c;
        case 0x116e90u: goto label_116e90;
        case 0x116e94u: goto label_116e94;
        case 0x116e98u: goto label_116e98;
        case 0x116e9cu: goto label_116e9c;
        default: break;
    }

    ctx->pc = 0x116940u;

label_116940:
    // 0x116940: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x116940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_116944:
    // 0x116944: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x116944u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_116948:
    // 0x116948: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x116948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_11694c:
    // 0x11694c: 0x2484aab0  addiu       $a0, $a0, -0x5550
    ctx->pc = 0x11694cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945456));
label_116950:
    // 0x116950: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x116950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_116954:
    // 0x116954: 0x3c120036  lui         $s2, 0x36
    ctx->pc = 0x116954u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
label_116958:
    // 0x116958: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x116958u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_11695c:
    // 0x11695c: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11695cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_116960:
    // 0x116960: 0x26508d98  addiu       $s0, $s2, -0x7268
    ctx->pc = 0x116960u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938008));
label_116964:
    // 0x116964: 0x8e458d98  lw          $a1, -0x7268($s2)
    ctx->pc = 0x116964u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938008)));
label_116968:
    // 0x116968: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x116968u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_11696c:
    // 0x11696c: 0x8e090008  lw          $t1, 0x8($s0)
    ctx->pc = 0x11696cu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_116970:
    // 0x116970: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x116970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_116974:
    // 0x116974: 0xa73821  addu        $a3, $a1, $a3
    ctx->pc = 0x116974u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_116978:
    // 0x116978: 0xe94821  addu        $t1, $a3, $t1
    ctx->pc = 0x116978u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
label_11697c:
    // 0x11697c: 0xe0402d  daddu       $t0, $a3, $zero
    ctx->pc = 0x11697cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_116980:
    // 0x116980: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x116980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_116984:
    // 0x116984: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x116984u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
label_116988:
    // 0x116988: 0xc043e72  jal         func_10F9C8
label_11698c:
    if (ctx->pc == 0x11698Cu) {
        ctx->pc = 0x11698Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116988u;
        // 0x11698c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116990u;
        goto label_116990;
    }
    ctx->pc = 0x116988u;
    SET_GPR_U32(ctx, 31, 0x116990u);
    ctx->pc = 0x11698Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116988u;
    // 0x11698c: 0x24e7ffff  addiu       $a3, $a3, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9C8u, 0x116988u, 0x116990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116990u;
label_116990:
    // 0x116990: 0x40803000  mtc0        $zero, Wired
    ctx->pc = 0x116990u;
    ctx->cop0_wired = GPR_U32(ctx, 0) & 0x3F; ctx->cop0_random = 47;
label_116994:
    // 0x116994: 0x40f  sync.p
    ctx->pc = 0x116994u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116998:
    // 0x116998: 0x8e518d98  lw          $s1, -0x7268($s2)
    ctx->pc = 0x116998u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294938008)));
label_11699c:
    // 0x11699c: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x11699cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_1169a0:
    // 0x1169a0: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
label_1169a4:
    if (ctx->pc == 0x1169A4u) {
        ctx->pc = 0x1169A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169A0u;
        // 0x1169a4: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1169A8u;
        goto label_1169a8;
    }
    ctx->pc = 0x1169A0u;
    {
        const bool branch_taken_0x1169a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1169A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169A0u;
        // 0x1169a4: 0xc82d  daddu       $t9, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 25, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169a0) {
            ctx->pc = 0x1169BCu;
            goto label_1169bc;
        }
    }
    ctx->pc = 0x1169A8u;
label_1169a8:
    // 0x1169a8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x1169a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_1169ac:
    // 0x1169ac: 0xc043e72  jal         func_10F9C8
label_1169b0:
    if (ctx->pc == 0x1169B0u) {
        ctx->pc = 0x1169B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169ACu;
        // 0x1169b0: 0x2484aae8  addiu       $a0, $a0, -0x5518 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945512));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1169B4u;
        goto label_1169b4;
    }
    ctx->pc = 0x1169ACu;
    SET_GPR_U32(ctx, 31, 0x1169B4u);
    ctx->pc = 0x1169B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169ACu;
    // 0x1169b0: 0x2484aae8  addiu       $a0, $a0, -0x5518 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9C8u, 0x1169ACu, 0x1169B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169B4u;
label_1169b4:
    // 0x1169b4: 0xc045d56  jal         func_117558
label_1169b8:
    if (ctx->pc == 0x1169B8u) {
        ctx->pc = 0x1169B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169B4u;
        // 0x1169b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1169BCu;
        goto label_1169bc;
    }
    ctx->pc = 0x1169B4u;
    SET_GPR_U32(ctx, 31, 0x1169BCu);
    ctx->pc = 0x1169B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169B4u;
    // 0x1169b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117558u, 0x1169B4u, 0x1169BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169BCu;
label_1169bc:
    // 0x1169bc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1169bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1169c0:
    // 0x1169c0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_1169c4:
    if (ctx->pc == 0x1169C4u) {
        ctx->pc = 0x1169C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169C0u;
        // 0x1169c4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1169C8u;
        goto label_1169c8;
    }
    ctx->pc = 0x1169C0u;
    {
        const bool branch_taken_0x1169c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1169C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169C0u;
        // 0x1169c4: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1169c0) {
            ctx->pc = 0x1169F8u;
            goto label_1169f8;
        }
    }
    ctx->pc = 0x1169C8u;
label_1169c8:
    // 0x1169c8: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1169c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1169cc:
    // 0x1169cc: 0x0  nop
    ctx->pc = 0x1169ccu;
    // NOP
label_1169d0:
    // 0x1169d0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x1169d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_1169d4:
    // 0x1169d4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1169d4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_1169d8:
    // 0x1169d8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x1169d8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_1169dc:
    // 0x1169dc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x1169dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_1169e0:
    // 0x1169e0: 0xc045a18  jal         func_116860
label_1169e4:
    if (ctx->pc == 0x1169E4u) {
        ctx->pc = 0x1169E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169E0u;
        // 0x1169e4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1169E8u;
        goto label_1169e8;
    }
    ctx->pc = 0x1169E0u;
    SET_GPR_U32(ctx, 31, 0x1169E8u);
    ctx->pc = 0x1169E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1169E0u;
    // 0x1169e4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116860u, 0x1169E0u, 0x1169E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1169E8u;
label_1169e8:
    // 0x1169e8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x1169e8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_1169ec:
    // 0x1169ec: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x1169ecu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_1169f0:
    // 0x1169f0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_1169f4:
    if (ctx->pc == 0x1169F4u) {
        ctx->pc = 0x1169F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1169F0u;
        // 0x1169f4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1169F8u;
        goto label_1169f8;
    }
    ctx->pc = 0x1169F0u;
    {
        const bool branch_taken_0x1169f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1169f0) {
            ctx->pc = 0x1169F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1169F0u;
            // 0x1169f4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1169D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1169d0;
        }
    }
    ctx->pc = 0x1169F8u;
label_1169f8:
    // 0x1169f8: 0x26508d98  addiu       $s0, $s2, -0x7268
    ctx->pc = 0x1169f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938008));
label_1169fc:
    // 0x1169fc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1169fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_116a00:
    // 0x116a00: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x116a00u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_116a04:
    // 0x116a04: 0x2a230031  slti        $v1, $s1, 0x31
    ctx->pc = 0x116a04u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_116a08:
    // 0x116a08: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
label_116a0c:
    if (ctx->pc == 0x116A0Cu) {
        ctx->pc = 0x116A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A08u;
        // 0x116a0c: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x116A10u;
        goto label_116a10;
    }
    ctx->pc = 0x116A08u;
    {
        const bool branch_taken_0x116a08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x116A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A08u;
        // 0x116a0c: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a08) {
            ctx->pc = 0x116A28u;
            goto label_116a28;
        }
    }
    ctx->pc = 0x116A10u;
label_116a10:
    // 0x116a10: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x116a10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_116a14:
    // 0x116a14: 0xc043e72  jal         func_10F9C8
label_116a18:
    if (ctx->pc == 0x116A18u) {
        ctx->pc = 0x116A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A14u;
        // 0x116a18: 0x2484ab00  addiu       $a0, $a0, -0x5500 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945536));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116A1Cu;
        goto label_116a1c;
    }
    ctx->pc = 0x116A14u;
    SET_GPR_U32(ctx, 31, 0x116A1Cu);
    ctx->pc = 0x116A18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A14u;
    // 0x116a18: 0x2484ab00  addiu       $a0, $a0, -0x5500 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945536));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9C8u, 0x116A14u, 0x116A1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A1Cu;
label_116a1c:
    // 0x116a1c: 0xc045d56  jal         func_117558
label_116a20:
    if (ctx->pc == 0x116A20u) {
        ctx->pc = 0x116A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A1Cu;
        // 0x116a20: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116A24u;
        goto label_116a24;
    }
    ctx->pc = 0x116A1Cu;
    SET_GPR_U32(ctx, 31, 0x116A24u);
    ctx->pc = 0x116A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A1Cu;
    // 0x116a20: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117558u, 0x116A1Cu, 0x116A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A24u;
label_116a24:
    // 0x116a24: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x116a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_116a28:
    // 0x116a28: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_116a2c:
    if (ctx->pc == 0x116A2Cu) {
        ctx->pc = 0x116A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A28u;
        // 0x116a2c: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116A30u;
        goto label_116a30;
    }
    ctx->pc = 0x116A28u;
    {
        const bool branch_taken_0x116a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A28u;
        // 0x116a2c: 0x8e100014  lw          $s0, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a28) {
            ctx->pc = 0x116A60u;
            goto label_116a60;
        }
    }
    ctx->pc = 0x116A30u;
label_116a30:
    // 0x116a30: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x116a30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_116a34:
    // 0x116a34: 0x0  nop
    ctx->pc = 0x116a34u;
    // NOP
label_116a38:
    // 0x116a38: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x116a38u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_116a3c:
    // 0x116a3c: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x116a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_116a40:
    // 0x116a40: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x116a40u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_116a44:
    // 0x116a44: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x116a44u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_116a48:
    // 0x116a48: 0xc045a18  jal         func_116860
label_116a4c:
    if (ctx->pc == 0x116A4Cu) {
        ctx->pc = 0x116A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A48u;
        // 0x116a4c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116A50u;
        goto label_116a50;
    }
    ctx->pc = 0x116A48u;
    SET_GPR_U32(ctx, 31, 0x116A50u);
    ctx->pc = 0x116A4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A48u;
    // 0x116a4c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116860u, 0x116A48u, 0x116A50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A50u;
label_116a50:
    // 0x116a50: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x116a50u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_116a54:
    // 0x116a54: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x116a54u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_116a58:
    // 0x116a58: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_116a5c:
    if (ctx->pc == 0x116A5Cu) {
        ctx->pc = 0x116A5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A58u;
        // 0x116a5c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116A60u;
        goto label_116a60;
    }
    ctx->pc = 0x116A58u;
    {
        const bool branch_taken_0x116a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116a58) {
            ctx->pc = 0x116A5Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116A58u;
            // 0x116a5c: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116a38;
        }
    }
    ctx->pc = 0x116A60u;
label_116a60:
    // 0x116a60: 0x26508d98  addiu       $s0, $s2, -0x7268
    ctx->pc = 0x116a60u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4294938008));
label_116a64:
    // 0x116a64: 0xae19000c  sw          $t9, 0xC($s0)
    ctx->pc = 0x116a64u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 25));
label_116a68:
    // 0x116a68: 0x40993000  mtc0        $t9, Wired
    ctx->pc = 0x116a68u;
    ctx->cop0_wired = GPR_U32(ctx, 25) & 0x3F; ctx->cop0_random = 47;
label_116a6c:
    // 0x116a6c: 0x40f  sync.p
    ctx->pc = 0x116a6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116a70:
    // 0x116a70: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x116a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_116a74:
    // 0x116a74: 0x58400019  blezl       $v0, . + 4 + (0x19 << 2)
label_116a78:
    if (ctx->pc == 0x116A78u) {
        ctx->pc = 0x116A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A74u;
        // 0x116a78: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116A7Cu;
        goto label_116a7c;
    }
    ctx->pc = 0x116A74u;
    {
        const bool branch_taken_0x116a74 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x116a74) {
            ctx->pc = 0x116A78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116A74u;
            // 0x116a78: 0x320802d  daddu       $s0, $t9, $zero (Delay Slot)
            SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116ADCu;
            goto label_116adc;
        }
    }
    ctx->pc = 0x116A7Cu;
label_116a7c:
    // 0x116a7c: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x116a7cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_116a80:
    // 0x116a80: 0x2a220031  slti        $v0, $s1, 0x31
    ctx->pc = 0x116a80u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)49) ? 1 : 0);
label_116a84:
    // 0x116a84: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_116a88:
    if (ctx->pc == 0x116A88u) {
        ctx->pc = 0x116A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A84u;
        // 0x116a88: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x116A8Cu;
        goto label_116a8c;
    }
    ctx->pc = 0x116A84u;
    {
        const bool branch_taken_0x116a84 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A84u;
        // 0x116a88: 0x331102a  slt         $v0, $t9, $s1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116a84) {
            ctx->pc = 0x116AA4u;
            goto label_116aa4;
        }
    }
    ctx->pc = 0x116A8Cu;
label_116a8c:
    // 0x116a8c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x116a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
label_116a90:
    // 0x116a90: 0xc043e72  jal         func_10F9C8
label_116a94:
    if (ctx->pc == 0x116A94u) {
        ctx->pc = 0x116A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A90u;
        // 0x116a94: 0x2484ab18  addiu       $a0, $a0, -0x54E8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116A98u;
        goto label_116a98;
    }
    ctx->pc = 0x116A90u;
    SET_GPR_U32(ctx, 31, 0x116A98u);
    ctx->pc = 0x116A94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A90u;
    // 0x116a94: 0x2484ab18  addiu       $a0, $a0, -0x54E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10F9C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10F9C8u, 0x116A90u, 0x116A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116A98u;
label_116a98:
    // 0x116a98: 0xc045d56  jal         func_117558
label_116a9c:
    if (ctx->pc == 0x116A9Cu) {
        ctx->pc = 0x116A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116A98u;
        // 0x116a9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116AA0u;
        goto label_116aa0;
    }
    ctx->pc = 0x116A98u;
    SET_GPR_U32(ctx, 31, 0x116AA0u);
    ctx->pc = 0x116A9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116A98u;
    // 0x116a9c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117558u, 0x116A98u, 0x116AA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AA0u;
label_116aa0:
    // 0x116aa0: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x116aa0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_116aa4:
    // 0x116aa4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_116aa8:
    if (ctx->pc == 0x116AA8u) {
        ctx->pc = 0x116AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AA4u;
        // 0x116aa8: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116AACu;
        goto label_116aac;
    }
    ctx->pc = 0x116AA4u;
    {
        const bool branch_taken_0x116aa4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AA4u;
        // 0x116aa8: 0x8e100018  lw          $s0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116aa4) {
            ctx->pc = 0x116AD8u;
            goto label_116ad8;
        }
    }
    ctx->pc = 0x116AACu;
label_116aac:
    // 0x116aac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x116aacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_116ab0:
    // 0x116ab0: 0x320202d  daddu       $a0, $t9, $zero
    ctx->pc = 0x116ab0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_116ab4:
    // 0x116ab4: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x116ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_116ab8:
    // 0x116ab8: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x116ab8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_116abc:
    // 0x116abc: 0x8e08000c  lw          $t0, 0xC($s0)
    ctx->pc = 0x116abcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_116ac0:
    // 0x116ac0: 0xc045a18  jal         func_116860
label_116ac4:
    if (ctx->pc == 0x116AC4u) {
        ctx->pc = 0x116AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AC0u;
        // 0x116ac4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116AC8u;
        goto label_116ac8;
    }
    ctx->pc = 0x116AC0u;
    SET_GPR_U32(ctx, 31, 0x116AC8u);
    ctx->pc = 0x116AC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116AC0u;
    // 0x116ac4: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116860u, 0x116AC0u, 0x116AC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116AC8u;
label_116ac8:
    // 0x116ac8: 0x27390001  addiu       $t9, $t9, 0x1
    ctx->pc = 0x116ac8u;
    SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 25), 1));
label_116acc:
    // 0x116acc: 0x331102a  slt         $v0, $t9, $s1
    ctx->pc = 0x116accu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 25) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
label_116ad0:
    // 0x116ad0: 0x5440fff7  bnel        $v0, $zero, . + 4 + (-0x9 << 2)
label_116ad4:
    if (ctx->pc == 0x116AD4u) {
        ctx->pc = 0x116AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AD0u;
        // 0x116ad4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116AD8u;
        goto label_116ad8;
    }
    ctx->pc = 0x116AD0u;
    {
        const bool branch_taken_0x116ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x116ad0) {
            ctx->pc = 0x116AD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116AD0u;
            // 0x116ad4: 0x8e050000  lw          $a1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116AB0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116ab0;
        }
    }
    ctx->pc = 0x116AD8u;
label_116ad8:
    // 0x116ad8: 0x320802d  daddu       $s0, $t9, $zero
    ctx->pc = 0x116ad8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_116adc:
    // 0x116adc: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x116adcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_116ae0:
    // 0x116ae0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_116ae4:
    if (ctx->pc == 0x116AE4u) {
        ctx->pc = 0x116AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AE0u;
        // 0x116ae4: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116AE8u;
        goto label_116ae8;
    }
    ctx->pc = 0x116AE0u;
    {
        const bool branch_taken_0x116ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AE0u;
        // 0x116ae4: 0x19cb40  sll         $t9, $t9, 13 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)SLL32(GPR_U32(ctx, 25), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ae0) {
            ctx->pc = 0x116B18u;
            goto label_116b18;
        }
    }
    ctx->pc = 0x116AE8u;
label_116ae8:
    // 0x116ae8: 0x3c02e000  lui         $v0, 0xE000
    ctx->pc = 0x116ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57344 << 16));
label_116aec:
    // 0x116aec: 0x3228821  addu        $s1, $t9, $v0
    ctx->pc = 0x116aecu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 25), GPR_U32(ctx, 2)));
label_116af0:
    // 0x116af0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x116af0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_116af4:
    // 0x116af4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x116af4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_116af8:
    // 0x116af8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x116af8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116afc:
    // 0x116afc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x116afcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116b00:
    // 0x116b00: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x116b00u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_116b04:
    // 0x116b04: 0xc045a18  jal         func_116860
label_116b08:
    if (ctx->pc == 0x116B08u) {
        ctx->pc = 0x116B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B04u;
        // 0x116b08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116B0Cu;
        goto label_116b0c;
    }
    ctx->pc = 0x116B04u;
    SET_GPR_U32(ctx, 31, 0x116B0Cu);
    ctx->pc = 0x116B08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116B04u;
    // 0x116b08: 0x26100001  addiu       $s0, $s0, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116860u, 0x116B04u, 0x116B0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116B0Cu;
label_116b0c:
    // 0x116b0c: 0x2a020030  slti        $v0, $s0, 0x30
    ctx->pc = 0x116b0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)48) ? 1 : 0);
label_116b10:
    // 0x116b10: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
label_116b14:
    if (ctx->pc == 0x116B14u) {
        ctx->pc = 0x116B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B10u;
        // 0x116b14: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116B18u;
        goto label_116b18;
    }
    ctx->pc = 0x116B10u;
    {
        const bool branch_taken_0x116b10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B10u;
        // 0x116b14: 0x26312000  addiu       $s1, $s1, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116b10) {
            ctx->pc = 0x116AF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_116af0;
        }
    }
    ctx->pc = 0x116B18u;
label_116b18:
    // 0x116b18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x116b18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_116b1c:
    // 0x116b1c: 0x320102d  daddu       $v0, $t9, $zero
    ctx->pc = 0x116b1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 25) + (uint64_t)GPR_U64(ctx, 0));
label_116b20:
    // 0x116b20: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x116b20u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_116b24:
    // 0x116b24: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x116b24u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_116b28:
    // 0x116b28: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x116b28u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_116b2c:
    // 0x116b2c: 0x3e00008  jr          $ra
label_116b30:
    if (ctx->pc == 0x116B30u) {
        ctx->pc = 0x116B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B2Cu;
        // 0x116b30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116B34u;
        goto label_116b34;
    }
    ctx->pc = 0x116B2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x116B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116B2Cu;
        // 0x116b30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116B2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x116B34u;
label_116b34:
    // 0x116b34: 0x0  nop
    ctx->pc = 0x116b34u;
    // NOP
label_116b38:
    // 0x116b38: 0x0  nop
    ctx->pc = 0x116b38u;
    // NOP
label_116b3c:
    // 0x116b3c: 0x0  nop
    ctx->pc = 0x116b3cu;
    // NOP
label_116b40:
    // 0x116b40: 0x3c1a0041  lui         $k0, 0x41
    ctx->pc = 0x116b40u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)65 << 16));
label_116b44:
    // 0x116b44: 0x275aaf00  addiu       $k0, $k0, -0x5100
    ctx->pc = 0x116b44u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294946560));
label_116b48:
    // 0x116b48: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x116b48u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_116b4c:
    // 0x116b4c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x116b4cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_116b50:
    // 0x116b50: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x116b50u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_116b54:
    // 0x116b54: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x116b54u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_116b58:
    // 0x116b58: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x116b58u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_116b5c:
    // 0x116b5c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x116b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_116b60:
    // 0x116b60: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x116b60u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_116b64:
    // 0x116b64: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x116b64u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_116b68:
    // 0x116b68: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x116b68u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_116b6c:
    // 0x116b6c: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x116b6cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_116b70:
    // 0x116b70: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x116b70u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_116b74:
    // 0x116b74: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x116b74u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_116b78:
    // 0x116b78: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x116b78u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_116b7c:
    // 0x116b7c: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x116b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_116b80:
    // 0x116b80: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x116b80u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_116b84:
    // 0x116b84: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x116b84u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_116b88:
    // 0x116b88: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x116b88u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_116b8c:
    // 0x116b8c: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x116b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_116b90:
    // 0x116b90: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x116b90u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_116b94:
    // 0x116b94: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x116b94u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_116b98:
    // 0x116b98: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x116b98u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_116b9c:
    // 0x116b9c: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x116b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_116ba0:
    // 0x116ba0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x116ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_116ba4:
    // 0x116ba4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x116ba4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_116ba8:
    // 0x116ba8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x116ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_116bac:
    // 0x116bac: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x116bacu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_116bb0:
    // 0x116bb0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x116bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_116bb4:
    // 0x116bb4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x116bb4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_116bb8:
    // 0x116bb8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x116bb8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_116bbc:
    // 0x116bbc: 0x1010  mfhi        $v0
    ctx->pc = 0x116bbcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_116bc0:
    // 0x116bc0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x116bc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_116bc4:
    // 0x116bc4: 0xfc22b100  sd          $v0, -0x4F00($at)
    ctx->pc = 0x116bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294947072), GPR_U64(ctx, 2));
label_116bc8:
    // 0x116bc8: 0x70001010  mfhi1       $v0
    ctx->pc = 0x116bc8u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_116bcc:
    // 0x116bcc: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x116bccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_116bd0:
    // 0x116bd0: 0xfc22b108  sd          $v0, -0x4EF8($at)
    ctx->pc = 0x116bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294947080), GPR_U64(ctx, 2));
label_116bd4:
    // 0x116bd4: 0x1012  mflo        $v0
    ctx->pc = 0x116bd4u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_116bd8:
    // 0x116bd8: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x116bd8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_116bdc:
    // 0x116bdc: 0xfc22b110  sd          $v0, -0x4EF0($at)
    ctx->pc = 0x116bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294947088), GPR_U64(ctx, 2));
label_116be0:
    // 0x116be0: 0x70001012  mflo1       $v0
    ctx->pc = 0x116be0u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_116be4:
    // 0x116be4: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x116be4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_116be8:
    // 0x116be8: 0xfc22b118  sd          $v0, -0x4EE8($at)
    ctx->pc = 0x116be8u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294947096), GPR_U64(ctx, 2));
label_116bec:
    // 0x116bec: 0x1028  mfsa        $v0
    ctx->pc = 0x116becu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_116bf0:
    // 0x116bf0: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x116bf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_116bf4:
    // 0x116bf4: 0xfc22b120  sd          $v0, -0x4EE0($at)
    ctx->pc = 0x116bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294947104), GPR_U64(ctx, 2));
label_116bf8:
    // 0x116bf8: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x116bf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_116bfc:
    // 0x116bfc: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x116bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_116c00:
    // 0x116c00: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x116c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_116c04:
    // 0x116c04: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x116c04u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_116c08:
    // 0x116c08: 0x3c080041  lui         $t0, 0x41
    ctx->pc = 0x116c08u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)65 << 16));
label_116c0c:
    // 0x116c0c: 0x2508af00  addiu       $t0, $t0, -0x5100
    ctx->pc = 0x116c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294946560));
label_116c10:
    // 0x116c10: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x116c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_116c14:
    // 0x116c14: 0xac26b128  sw          $a2, -0x4ED8($at)
    ctx->pc = 0x116c14u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294947112), GPR_U32(ctx, 6));
label_116c18:
    // 0x116c18: 0x3c010011  lui         $at, 0x11
    ctx->pc = 0x116c18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17 << 16));
label_116c1c:
    // 0x116c1c: 0x24216c40  addiu       $at, $at, 0x6C40
    ctx->pc = 0x116c1cu;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 27712));
label_116c20:
    // 0x116c20: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x116c20u;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_116c24:
    // 0x116c24: 0x40f  sync.p
    ctx->pc = 0x116c24u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116c28:
    // 0x116c28: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x116c28u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_116c2c:
    // 0x116c2c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x116c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_116c30:
    // 0x116c30: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x116c30u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_116c34:
    // 0x116c34: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x116c34u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_116c38:
    // 0x116c38: 0x40f  sync.p
    ctx->pc = 0x116c38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116c3c:
    // 0x116c3c: 0x42000018  eret
    ctx->pc = 0x116c3cu;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_116c40:
    // 0x116c40: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x116c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_116c44:
    // 0x116c44: 0x8c218a98  lw          $at, -0x7568($at)
    ctx->pc = 0x116c44u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937240)));
label_116c48:
    // 0x116c48: 0x3c1d0041  lui         $sp, 0x41
    ctx->pc = 0x116c48u;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)65 << 16));
label_116c4c:
    // 0x116c4c: 0x20f809  jalr        $at
label_116c50:
    if (ctx->pc == 0x116C50u) {
        ctx->pc = 0x116C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C4Cu;
        // 0x116c50: 0x27bdaf00  addiu       $sp, $sp, -0x5100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294946560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116C54u;
        goto label_116c54;
    }
    ctx->pc = 0x116C4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x116C54u);
        ctx->pc = 0x116C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116C4Cu;
        // 0x116c50: 0x27bdaf00  addiu       $sp, $sp, -0x5100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294946560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116C4Cu, 0x116C54u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116C54u;
label_116c54:
    // 0x116c54: 0x2403ffac  addiu       $v1, $zero, -0x54
    ctx->pc = 0x116c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967212));
label_116c58:
    // 0x116c58: 0xc  syscall     0
    ctx->pc = 0x116c58u;
    runtime->handleSyscall(rdram, ctx, 0x0u);
label_116c5c:
    // 0x116c5c: 0x0  nop
    ctx->pc = 0x116c5cu;
    // NOP
label_116c60:
    // 0x116c60: 0x0  nop
    ctx->pc = 0x116c60u;
    // NOP
label_116c64:
    // 0x116c64: 0x0  nop
    ctx->pc = 0x116c64u;
    // NOP
label_116c68:
    // 0x116c68: 0x0  nop
    ctx->pc = 0x116c68u;
    // NOP
label_116c6c:
    // 0x116c6c: 0x0  nop
    ctx->pc = 0x116c6cu;
    // NOP
label_116c70:
    // 0x116c70: 0x0  nop
    ctx->pc = 0x116c70u;
    // NOP
label_116c74:
    // 0x116c74: 0x0  nop
    ctx->pc = 0x116c74u;
    // NOP
label_116c78:
    // 0x116c78: 0x0  nop
    ctx->pc = 0x116c78u;
    // NOP
label_116c7c:
    // 0x116c7c: 0x0  nop
    ctx->pc = 0x116c7cu;
    // NOP
label_116c80:
    // 0x116c80: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x116c80u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_116c84:
    // 0x116c84: 0x241affe4  addiu       $k0, $zero, -0x1C
    ctx->pc = 0x116c84u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_116c88:
    // 0x116c88: 0x3a0824  and         $at, $at, $k0
    ctx->pc = 0x116c88u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 26));
label_116c8c:
    // 0x116c8c: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x116c8cu;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_116c90:
    // 0x116c90: 0x40f  sync.p
    ctx->pc = 0x116c90u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116c94:
    // 0x116c94: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x116c94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_116c98:
    // 0x116c98: 0x8c42b128  lw          $v0, -0x4ED8($v0)
    ctx->pc = 0x116c98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294947112)));
label_116c9c:
    // 0x116c9c: 0x40827000  mtc0        $v0, EPC
    ctx->pc = 0x116c9cu;
    ctx->cop0_epc = GPR_U32(ctx, 2);
label_116ca0:
    // 0x116ca0: 0x40f  sync.p
    ctx->pc = 0x116ca0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116ca4:
    // 0x116ca4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x116ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_116ca8:
    // 0x116ca8: 0xdc42b100  ld          $v0, -0x4F00($v0)
    ctx->pc = 0x116ca8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294947072)));
label_116cac:
    // 0x116cac: 0x400011  mthi        $v0
    ctx->pc = 0x116cacu;
    ctx->hi = GPR_U64(ctx, 2);
label_116cb0:
    // 0x116cb0: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x116cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_116cb4:
    // 0x116cb4: 0xdc42b108  ld          $v0, -0x4EF8($v0)
    ctx->pc = 0x116cb4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294947080)));
label_116cb8:
    // 0x116cb8: 0x70400011  mthi1       $v0
    ctx->pc = 0x116cb8u;
    ctx->hi1 = GPR_U64(ctx, 2);
label_116cbc:
    // 0x116cbc: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x116cbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_116cc0:
    // 0x116cc0: 0xdc42b110  ld          $v0, -0x4EF0($v0)
    ctx->pc = 0x116cc0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294947088)));
label_116cc4:
    // 0x116cc4: 0x400013  mtlo        $v0
    ctx->pc = 0x116cc4u;
    ctx->lo = GPR_U64(ctx, 2);
label_116cc8:
    // 0x116cc8: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x116cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_116ccc:
    // 0x116ccc: 0xdc42b118  ld          $v0, -0x4EE8($v0)
    ctx->pc = 0x116cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294947096)));
label_116cd0:
    // 0x116cd0: 0x70400013  mtlo1       $v0
    ctx->pc = 0x116cd0u;
    ctx->lo1 = GPR_U64(ctx, 2);
label_116cd4:
    // 0x116cd4: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x116cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
label_116cd8:
    // 0x116cd8: 0xdc42b120  ld          $v0, -0x4EE0($v0)
    ctx->pc = 0x116cd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4294947104)));
label_116cdc:
    // 0x116cdc: 0x400029  mtsa        $v0
    ctx->pc = 0x116cdcu;
    ctx->sa = GPR_U32(ctx, 2) & 0x7F;
label_116ce0:
    // 0x116ce0: 0x40f  sync.p
    ctx->pc = 0x116ce0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116ce4:
    // 0x116ce4: 0x3c1a0041  lui         $k0, 0x41
    ctx->pc = 0x116ce4u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)65 << 16));
label_116ce8:
    // 0x116ce8: 0x275aaf00  addiu       $k0, $k0, -0x5100
    ctx->pc = 0x116ce8u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294946560));
label_116cec:
    // 0x116cec: 0x7b410010  lq          $at, 0x10($k0)
    ctx->pc = 0x116cecu;
    SET_GPR_VEC(ctx, 1, READ128(ADD32(GPR_U32(ctx, 26), 16)));
label_116cf0:
    // 0x116cf0: 0x7b420020  lq          $v0, 0x20($k0)
    ctx->pc = 0x116cf0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 26), 32)));
label_116cf4:
    // 0x116cf4: 0x7b430030  lq          $v1, 0x30($k0)
    ctx->pc = 0x116cf4u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 26), 48)));
label_116cf8:
    // 0x116cf8: 0x7b440040  lq          $a0, 0x40($k0)
    ctx->pc = 0x116cf8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 26), 64)));
label_116cfc:
    // 0x116cfc: 0x7b450050  lq          $a1, 0x50($k0)
    ctx->pc = 0x116cfcu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 26), 80)));
label_116d00:
    // 0x116d00: 0x7b460060  lq          $a2, 0x60($k0)
    ctx->pc = 0x116d00u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 26), 96)));
label_116d04:
    // 0x116d04: 0x7b470070  lq          $a3, 0x70($k0)
    ctx->pc = 0x116d04u;
    SET_GPR_VEC(ctx, 7, READ128(ADD32(GPR_U32(ctx, 26), 112)));
label_116d08:
    // 0x116d08: 0x7b480080  lq          $t0, 0x80($k0)
    ctx->pc = 0x116d08u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 26), 128)));
label_116d0c:
    // 0x116d0c: 0x7b490090  lq          $t1, 0x90($k0)
    ctx->pc = 0x116d0cu;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 26), 144)));
label_116d10:
    // 0x116d10: 0x7b4a00a0  lq          $t2, 0xA0($k0)
    ctx->pc = 0x116d10u;
    SET_GPR_VEC(ctx, 10, READ128(ADD32(GPR_U32(ctx, 26), 160)));
label_116d14:
    // 0x116d14: 0x7b4b00b0  lq          $t3, 0xB0($k0)
    ctx->pc = 0x116d14u;
    SET_GPR_VEC(ctx, 11, READ128(ADD32(GPR_U32(ctx, 26), 176)));
label_116d18:
    // 0x116d18: 0x7b4c00c0  lq          $t4, 0xC0($k0)
    ctx->pc = 0x116d18u;
    SET_GPR_VEC(ctx, 12, READ128(ADD32(GPR_U32(ctx, 26), 192)));
label_116d1c:
    // 0x116d1c: 0x7b4d00d0  lq          $t5, 0xD0($k0)
    ctx->pc = 0x116d1cu;
    SET_GPR_VEC(ctx, 13, READ128(ADD32(GPR_U32(ctx, 26), 208)));
label_116d20:
    // 0x116d20: 0x7b4e00e0  lq          $t6, 0xE0($k0)
    ctx->pc = 0x116d20u;
    SET_GPR_VEC(ctx, 14, READ128(ADD32(GPR_U32(ctx, 26), 224)));
label_116d24:
    // 0x116d24: 0x7b4f00f0  lq          $t7, 0xF0($k0)
    ctx->pc = 0x116d24u;
    SET_GPR_VEC(ctx, 15, READ128(ADD32(GPR_U32(ctx, 26), 240)));
label_116d28:
    // 0x116d28: 0x7b500100  lq          $s0, 0x100($k0)
    ctx->pc = 0x116d28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 26), 256)));
label_116d2c:
    // 0x116d2c: 0x7b510110  lq          $s1, 0x110($k0)
    ctx->pc = 0x116d2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 26), 272)));
label_116d30:
    // 0x116d30: 0x7b520120  lq          $s2, 0x120($k0)
    ctx->pc = 0x116d30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 26), 288)));
label_116d34:
    // 0x116d34: 0x7b530130  lq          $s3, 0x130($k0)
    ctx->pc = 0x116d34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 26), 304)));
label_116d38:
    // 0x116d38: 0x7b540140  lq          $s4, 0x140($k0)
    ctx->pc = 0x116d38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 26), 320)));
label_116d3c:
    // 0x116d3c: 0x7b550150  lq          $s5, 0x150($k0)
    ctx->pc = 0x116d3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 26), 336)));
label_116d40:
    // 0x116d40: 0x7b560160  lq          $s6, 0x160($k0)
    ctx->pc = 0x116d40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 26), 352)));
label_116d44:
    // 0x116d44: 0x7b570170  lq          $s7, 0x170($k0)
    ctx->pc = 0x116d44u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 26), 368)));
label_116d48:
    // 0x116d48: 0x7b580180  lq          $t8, 0x180($k0)
    ctx->pc = 0x116d48u;
    SET_GPR_VEC(ctx, 24, READ128(ADD32(GPR_U32(ctx, 26), 384)));
label_116d4c:
    // 0x116d4c: 0x7b590190  lq          $t9, 0x190($k0)
    ctx->pc = 0x116d4cu;
    SET_GPR_VEC(ctx, 25, READ128(ADD32(GPR_U32(ctx, 26), 400)));
label_116d50:
    // 0x116d50: 0x7b5c01c0  lq          $gp, 0x1C0($k0)
    ctx->pc = 0x116d50u;
    SET_GPR_VEC(ctx, 28, READ128(ADD32(GPR_U32(ctx, 26), 448)));
label_116d54:
    // 0x116d54: 0x7b5d01d0  lq          $sp, 0x1D0($k0)
    ctx->pc = 0x116d54u;
    SET_GPR_VEC(ctx, 29, READ128(ADD32(GPR_U32(ctx, 26), 464)));
label_116d58:
    // 0x116d58: 0x7b5e01e0  lq          $fp, 0x1E0($k0)
    ctx->pc = 0x116d58u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 26), 480)));
label_116d5c:
    // 0x116d5c: 0x7b5f01f0  lq          $ra, 0x1F0($k0)
    ctx->pc = 0x116d5cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 26), 496)));
label_116d60:
    // 0x116d60: 0x401a6000  mfc0        $k0, Status
    ctx->pc = 0x116d60u;
    SET_GPR_S32(ctx, 26, (int32_t)ctx->cop0_status);
label_116d64:
    // 0x116d64: 0x375a0013  ori         $k0, $k0, 0x13
    ctx->pc = 0x116d64u;
    SET_GPR_U64(ctx, 26, GPR_U64(ctx, 26) | (uint64_t)(uint16_t)19);
label_116d68:
    // 0x116d68: 0x409a6000  mtc0        $k0, Status
    ctx->pc = 0x116d68u;
    ctx->cop0_status = GPR_U32(ctx, 26) & 0xFF57FFFF;
label_116d6c:
    // 0x116d6c: 0x40f  sync.p
    ctx->pc = 0x116d6cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116d70:
    // 0x116d70: 0x42000018  eret
    ctx->pc = 0x116d70u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_116d74:
    // 0x116d74: 0x0  nop
    ctx->pc = 0x116d74u;
    // NOP
label_116d78:
    // 0x116d78: 0x0  nop
    ctx->pc = 0x116d78u;
    // NOP
label_116d7c:
    // 0x116d7c: 0x0  nop
    ctx->pc = 0x116d7cu;
    // NOP
label_116d80:
    // 0x116d80: 0x3c1a0041  lui         $k0, 0x41
    ctx->pc = 0x116d80u;
    SET_GPR_S32(ctx, 26, (int32_t)((uint32_t)65 << 16));
label_116d84:
    // 0x116d84: 0x275aaf00  addiu       $k0, $k0, -0x5100
    ctx->pc = 0x116d84u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 26), 4294946560));
label_116d88:
    // 0x116d88: 0x7f410010  sq          $at, 0x10($k0)
    ctx->pc = 0x116d88u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 16), GPR_VEC(ctx, 1));
label_116d8c:
    // 0x116d8c: 0x7f420020  sq          $v0, 0x20($k0)
    ctx->pc = 0x116d8cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 32), GPR_VEC(ctx, 2));
label_116d90:
    // 0x116d90: 0x7f430030  sq          $v1, 0x30($k0)
    ctx->pc = 0x116d90u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 48), GPR_VEC(ctx, 3));
label_116d94:
    // 0x116d94: 0x7f440040  sq          $a0, 0x40($k0)
    ctx->pc = 0x116d94u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 64), GPR_VEC(ctx, 4));
label_116d98:
    // 0x116d98: 0x7f450050  sq          $a1, 0x50($k0)
    ctx->pc = 0x116d98u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 80), GPR_VEC(ctx, 5));
label_116d9c:
    // 0x116d9c: 0x7f460060  sq          $a2, 0x60($k0)
    ctx->pc = 0x116d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 96), GPR_VEC(ctx, 6));
label_116da0:
    // 0x116da0: 0x7f470070  sq          $a3, 0x70($k0)
    ctx->pc = 0x116da0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 112), GPR_VEC(ctx, 7));
label_116da4:
    // 0x116da4: 0x7f480080  sq          $t0, 0x80($k0)
    ctx->pc = 0x116da4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 128), GPR_VEC(ctx, 8));
label_116da8:
    // 0x116da8: 0x7f490090  sq          $t1, 0x90($k0)
    ctx->pc = 0x116da8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 144), GPR_VEC(ctx, 9));
label_116dac:
    // 0x116dac: 0x7f4a00a0  sq          $t2, 0xA0($k0)
    ctx->pc = 0x116dacu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 160), GPR_VEC(ctx, 10));
label_116db0:
    // 0x116db0: 0x7f4b00b0  sq          $t3, 0xB0($k0)
    ctx->pc = 0x116db0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 176), GPR_VEC(ctx, 11));
label_116db4:
    // 0x116db4: 0x7f4c00c0  sq          $t4, 0xC0($k0)
    ctx->pc = 0x116db4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 192), GPR_VEC(ctx, 12));
label_116db8:
    // 0x116db8: 0x7f4d00d0  sq          $t5, 0xD0($k0)
    ctx->pc = 0x116db8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 208), GPR_VEC(ctx, 13));
label_116dbc:
    // 0x116dbc: 0x7f4e00e0  sq          $t6, 0xE0($k0)
    ctx->pc = 0x116dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 224), GPR_VEC(ctx, 14));
label_116dc0:
    // 0x116dc0: 0x7f4f00f0  sq          $t7, 0xF0($k0)
    ctx->pc = 0x116dc0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 240), GPR_VEC(ctx, 15));
label_116dc4:
    // 0x116dc4: 0x7f500100  sq          $s0, 0x100($k0)
    ctx->pc = 0x116dc4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 256), GPR_VEC(ctx, 16));
label_116dc8:
    // 0x116dc8: 0x7f510110  sq          $s1, 0x110($k0)
    ctx->pc = 0x116dc8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 272), GPR_VEC(ctx, 17));
label_116dcc:
    // 0x116dcc: 0x7f520120  sq          $s2, 0x120($k0)
    ctx->pc = 0x116dccu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 288), GPR_VEC(ctx, 18));
label_116dd0:
    // 0x116dd0: 0x7f530130  sq          $s3, 0x130($k0)
    ctx->pc = 0x116dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 304), GPR_VEC(ctx, 19));
label_116dd4:
    // 0x116dd4: 0x7f540140  sq          $s4, 0x140($k0)
    ctx->pc = 0x116dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 320), GPR_VEC(ctx, 20));
label_116dd8:
    // 0x116dd8: 0x7f550150  sq          $s5, 0x150($k0)
    ctx->pc = 0x116dd8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 336), GPR_VEC(ctx, 21));
label_116ddc:
    // 0x116ddc: 0x7f560160  sq          $s6, 0x160($k0)
    ctx->pc = 0x116ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 352), GPR_VEC(ctx, 22));
label_116de0:
    // 0x116de0: 0x7f570170  sq          $s7, 0x170($k0)
    ctx->pc = 0x116de0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 368), GPR_VEC(ctx, 23));
label_116de4:
    // 0x116de4: 0x7f580180  sq          $t8, 0x180($k0)
    ctx->pc = 0x116de4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 384), GPR_VEC(ctx, 24));
label_116de8:
    // 0x116de8: 0x7f590190  sq          $t9, 0x190($k0)
    ctx->pc = 0x116de8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 400), GPR_VEC(ctx, 25));
label_116dec:
    // 0x116dec: 0x7f5c01c0  sq          $gp, 0x1C0($k0)
    ctx->pc = 0x116decu;
    WRITE128(ADD32(GPR_U32(ctx, 26), 448), GPR_VEC(ctx, 28));
label_116df0:
    // 0x116df0: 0x7f5d01d0  sq          $sp, 0x1D0($k0)
    ctx->pc = 0x116df0u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 464), GPR_VEC(ctx, 29));
label_116df4:
    // 0x116df4: 0x7f5e01e0  sq          $fp, 0x1E0($k0)
    ctx->pc = 0x116df4u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 480), GPR_VEC(ctx, 30));
label_116df8:
    // 0x116df8: 0x7f5f01f0  sq          $ra, 0x1F0($k0)
    ctx->pc = 0x116df8u;
    WRITE128(ADD32(GPR_U32(ctx, 26), 496), GPR_VEC(ctx, 31));
label_116dfc:
    // 0x116dfc: 0x1010  mfhi        $v0
    ctx->pc = 0x116dfcu;
    SET_GPR_U64(ctx, 2, ctx->hi);
label_116e00:
    // 0x116e00: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x116e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_116e04:
    // 0x116e04: 0xfc22b100  sd          $v0, -0x4F00($at)
    ctx->pc = 0x116e04u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294947072), GPR_U64(ctx, 2));
label_116e08:
    // 0x116e08: 0x70001010  mfhi1       $v0
    ctx->pc = 0x116e08u;
    SET_GPR_U64(ctx, 2, ctx->hi1);
label_116e0c:
    // 0x116e0c: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x116e0cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_116e10:
    // 0x116e10: 0xfc22b108  sd          $v0, -0x4EF8($at)
    ctx->pc = 0x116e10u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294947080), GPR_U64(ctx, 2));
label_116e14:
    // 0x116e14: 0x1012  mflo        $v0
    ctx->pc = 0x116e14u;
    SET_GPR_U64(ctx, 2, ctx->lo);
label_116e18:
    // 0x116e18: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x116e18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_116e1c:
    // 0x116e1c: 0xfc22b110  sd          $v0, -0x4EF0($at)
    ctx->pc = 0x116e1cu;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294947088), GPR_U64(ctx, 2));
label_116e20:
    // 0x116e20: 0x70001012  mflo1       $v0
    ctx->pc = 0x116e20u;
    SET_GPR_U64(ctx, 2, ctx->lo1);
label_116e24:
    // 0x116e24: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x116e24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_116e28:
    // 0x116e28: 0xfc22b118  sd          $v0, -0x4EE8($at)
    ctx->pc = 0x116e28u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294947096), GPR_U64(ctx, 2));
label_116e2c:
    // 0x116e2c: 0x1028  mfsa        $v0
    ctx->pc = 0x116e2cu;
    SET_GPR_U32(ctx, 2, ctx->sa);
label_116e30:
    // 0x116e30: 0x3c010041  lui         $at, 0x41
    ctx->pc = 0x116e30u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)65 << 16));
label_116e34:
    // 0x116e34: 0xfc22b120  sd          $v0, -0x4EE0($at)
    ctx->pc = 0x116e34u;
    WRITE64(ADD32(GPR_U32(ctx, 1), 4294947104), GPR_U64(ctx, 2));
label_116e38:
    // 0x116e38: 0x40046000  mfc0        $a0, Status
    ctx->pc = 0x116e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ctx->cop0_status);
label_116e3c:
    // 0x116e3c: 0x40056800  mfc0        $a1, Cause
    ctx->pc = 0x116e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ctx->cop0_cause);
label_116e40:
    // 0x116e40: 0x40067000  mfc0        $a2, EPC
    ctx->pc = 0x116e40u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_epc);
label_116e44:
    // 0x116e44: 0x40074000  mfc0        $a3, BadVaddr
    ctx->pc = 0x116e44u;
    SET_GPR_S32(ctx, 7, (int32_t)ctx->cop0_badvaddr);
label_116e48:
    // 0x116e48: 0x4008b800  mfc0        $t0, Reserved23
    ctx->pc = 0x116e48u;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_badpaddr);
label_116e4c:
    // 0x116e4c: 0x3c090041  lui         $t1, 0x41
    ctx->pc = 0x116e4cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)65 << 16));
label_116e50:
    // 0x116e50: 0x2529af00  addiu       $t1, $t1, -0x5100
    ctx->pc = 0x116e50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294946560));
label_116e54:
    // 0x116e54: 0x3c010011  lui         $at, 0x11
    ctx->pc = 0x116e54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17 << 16));
label_116e58:
    // 0x116e58: 0x24216e7c  addiu       $at, $at, 0x6E7C
    ctx->pc = 0x116e58u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), 28284));
label_116e5c:
    // 0x116e5c: 0x40817000  mtc0        $at, EPC
    ctx->pc = 0x116e5cu;
    ctx->cop0_epc = GPR_U32(ctx, 1);
label_116e60:
    // 0x116e60: 0x40f  sync.p
    ctx->pc = 0x116e60u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116e64:
    // 0x116e64: 0x40016000  mfc0        $at, Status
    ctx->pc = 0x116e64u;
    SET_GPR_S32(ctx, 1, (int32_t)ctx->cop0_status);
label_116e68:
    // 0x116e68: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x116e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
label_116e6c:
    // 0x116e6c: 0x220824  and         $at, $at, $v0
    ctx->pc = 0x116e6cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) & GPR_U64(ctx, 2));
label_116e70:
    // 0x116e70: 0x40816000  mtc0        $at, Status
    ctx->pc = 0x116e70u;
    ctx->cop0_status = GPR_U32(ctx, 1) & 0xFF57FFFF;
label_116e74:
    // 0x116e74: 0x40f  sync.p
    ctx->pc = 0x116e74u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
label_116e78:
    // 0x116e78: 0x42000018  eret
    ctx->pc = 0x116e78u;
    if (ctx->cop0_status & 0x4) { 
    ctx->pc = ctx->cop0_errorepc; 
    ctx->cop0_status &= ~0x4; 
} else { 
    ctx->pc = ctx->cop0_epc; 
    ctx->cop0_status &= ~0x2; 
} 
runtime->clearLLBit(ctx); 
return;
label_116e7c:
    // 0x116e7c: 0x30a2007c  andi        $v0, $a1, 0x7C
    ctx->pc = 0x116e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)124);
label_116e80:
    // 0x116e80: 0x3c010036  lui         $at, 0x36
    ctx->pc = 0x116e80u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)54 << 16));
label_116e84:
    // 0x116e84: 0x220821  addu        $at, $at, $v0
    ctx->pc = 0x116e84u;
    SET_GPR_S32(ctx, 1, (int32_t)ADD32(GPR_U32(ctx, 1), GPR_U32(ctx, 2)));
label_116e88:
    // 0x116e88: 0x8c218aa0  lw          $at, -0x7560($at)
    ctx->pc = 0x116e88u;
    SET_GPR_S32(ctx, 1, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294937248)));
label_116e8c:
    // 0x116e8c: 0x3c1d0041  lui         $sp, 0x41
    ctx->pc = 0x116e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)((uint32_t)65 << 16));
label_116e90:
    // 0x116e90: 0x20f809  jalr        $at
label_116e94:
    if (ctx->pc == 0x116E94u) {
        ctx->pc = 0x116E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E90u;
        // 0x116e94: 0x27bdaf00  addiu       $sp, $sp, -0x5100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294946560));
        ctx->in_delay_slot = false;
        ctx->pc = 0x116E98u;
        goto label_116e98;
    }
    ctx->pc = 0x116E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 1);
        SET_GPR_U32(ctx, 31, 0x116E98u);
        ctx->pc = 0x116E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116E90u;
        // 0x116e94: 0x27bdaf00  addiu       $sp, $sp, -0x5100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294946560));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x116E90u, 0x116E98u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x116E98u;
label_116e98:
    // 0x116e98: 0x3ffffcd  break       1023, 1023
    ctx->pc = 0x116e98u;
    runtime->handleBreak(rdram, ctx);
label_116e9c:
    // 0x116e9c: 0x0  nop
    ctx->pc = 0x116e9cu;
    // NOP
    if (ctx->pc == 0x116e9cu) { ctx->pc = 0x116ea0u; }
}
