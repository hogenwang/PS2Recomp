#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A28B0
// Address: 0x1a28b0 - 0x1a2ca0
void sub_001A28B0_0x1a28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A28B0_0x1a28b0");
#endif

    switch (ctx->pc) {
        case 0x1a28b0u: goto label_1a28b0;
        case 0x1a28b4u: goto label_1a28b4;
        case 0x1a28b8u: goto label_1a28b8;
        case 0x1a28bcu: goto label_1a28bc;
        case 0x1a28c0u: goto label_1a28c0;
        case 0x1a28c4u: goto label_1a28c4;
        case 0x1a28c8u: goto label_1a28c8;
        case 0x1a28ccu: goto label_1a28cc;
        case 0x1a28d0u: goto label_1a28d0;
        case 0x1a28d4u: goto label_1a28d4;
        case 0x1a28d8u: goto label_1a28d8;
        case 0x1a28dcu: goto label_1a28dc;
        case 0x1a28e0u: goto label_1a28e0;
        case 0x1a28e4u: goto label_1a28e4;
        case 0x1a28e8u: goto label_1a28e8;
        case 0x1a28ecu: goto label_1a28ec;
        case 0x1a28f0u: goto label_1a28f0;
        case 0x1a28f4u: goto label_1a28f4;
        case 0x1a28f8u: goto label_1a28f8;
        case 0x1a28fcu: goto label_1a28fc;
        case 0x1a2900u: goto label_1a2900;
        case 0x1a2904u: goto label_1a2904;
        case 0x1a2908u: goto label_1a2908;
        case 0x1a290cu: goto label_1a290c;
        case 0x1a2910u: goto label_1a2910;
        case 0x1a2914u: goto label_1a2914;
        case 0x1a2918u: goto label_1a2918;
        case 0x1a291cu: goto label_1a291c;
        case 0x1a2920u: goto label_1a2920;
        case 0x1a2924u: goto label_1a2924;
        case 0x1a2928u: goto label_1a2928;
        case 0x1a292cu: goto label_1a292c;
        case 0x1a2930u: goto label_1a2930;
        case 0x1a2934u: goto label_1a2934;
        case 0x1a2938u: goto label_1a2938;
        case 0x1a293cu: goto label_1a293c;
        case 0x1a2940u: goto label_1a2940;
        case 0x1a2944u: goto label_1a2944;
        case 0x1a2948u: goto label_1a2948;
        case 0x1a294cu: goto label_1a294c;
        case 0x1a2950u: goto label_1a2950;
        case 0x1a2954u: goto label_1a2954;
        case 0x1a2958u: goto label_1a2958;
        case 0x1a295cu: goto label_1a295c;
        case 0x1a2960u: goto label_1a2960;
        case 0x1a2964u: goto label_1a2964;
        case 0x1a2968u: goto label_1a2968;
        case 0x1a296cu: goto label_1a296c;
        case 0x1a2970u: goto label_1a2970;
        case 0x1a2974u: goto label_1a2974;
        case 0x1a2978u: goto label_1a2978;
        case 0x1a297cu: goto label_1a297c;
        case 0x1a2980u: goto label_1a2980;
        case 0x1a2984u: goto label_1a2984;
        case 0x1a2988u: goto label_1a2988;
        case 0x1a298cu: goto label_1a298c;
        case 0x1a2990u: goto label_1a2990;
        case 0x1a2994u: goto label_1a2994;
        case 0x1a2998u: goto label_1a2998;
        case 0x1a299cu: goto label_1a299c;
        case 0x1a29a0u: goto label_1a29a0;
        case 0x1a29a4u: goto label_1a29a4;
        case 0x1a29a8u: goto label_1a29a8;
        case 0x1a29acu: goto label_1a29ac;
        case 0x1a29b0u: goto label_1a29b0;
        case 0x1a29b4u: goto label_1a29b4;
        case 0x1a29b8u: goto label_1a29b8;
        case 0x1a29bcu: goto label_1a29bc;
        case 0x1a29c0u: goto label_1a29c0;
        case 0x1a29c4u: goto label_1a29c4;
        case 0x1a29c8u: goto label_1a29c8;
        case 0x1a29ccu: goto label_1a29cc;
        case 0x1a29d0u: goto label_1a29d0;
        case 0x1a29d4u: goto label_1a29d4;
        case 0x1a29d8u: goto label_1a29d8;
        case 0x1a29dcu: goto label_1a29dc;
        case 0x1a29e0u: goto label_1a29e0;
        case 0x1a29e4u: goto label_1a29e4;
        case 0x1a29e8u: goto label_1a29e8;
        case 0x1a29ecu: goto label_1a29ec;
        case 0x1a29f0u: goto label_1a29f0;
        case 0x1a29f4u: goto label_1a29f4;
        case 0x1a29f8u: goto label_1a29f8;
        case 0x1a29fcu: goto label_1a29fc;
        case 0x1a2a00u: goto label_1a2a00;
        case 0x1a2a04u: goto label_1a2a04;
        case 0x1a2a08u: goto label_1a2a08;
        case 0x1a2a0cu: goto label_1a2a0c;
        case 0x1a2a10u: goto label_1a2a10;
        case 0x1a2a14u: goto label_1a2a14;
        case 0x1a2a18u: goto label_1a2a18;
        case 0x1a2a1cu: goto label_1a2a1c;
        case 0x1a2a20u: goto label_1a2a20;
        case 0x1a2a24u: goto label_1a2a24;
        case 0x1a2a28u: goto label_1a2a28;
        case 0x1a2a2cu: goto label_1a2a2c;
        case 0x1a2a30u: goto label_1a2a30;
        case 0x1a2a34u: goto label_1a2a34;
        case 0x1a2a38u: goto label_1a2a38;
        case 0x1a2a3cu: goto label_1a2a3c;
        case 0x1a2a40u: goto label_1a2a40;
        case 0x1a2a44u: goto label_1a2a44;
        case 0x1a2a48u: goto label_1a2a48;
        case 0x1a2a4cu: goto label_1a2a4c;
        case 0x1a2a50u: goto label_1a2a50;
        case 0x1a2a54u: goto label_1a2a54;
        case 0x1a2a58u: goto label_1a2a58;
        case 0x1a2a5cu: goto label_1a2a5c;
        case 0x1a2a60u: goto label_1a2a60;
        case 0x1a2a64u: goto label_1a2a64;
        case 0x1a2a68u: goto label_1a2a68;
        case 0x1a2a6cu: goto label_1a2a6c;
        case 0x1a2a70u: goto label_1a2a70;
        case 0x1a2a74u: goto label_1a2a74;
        case 0x1a2a78u: goto label_1a2a78;
        case 0x1a2a7cu: goto label_1a2a7c;
        case 0x1a2a80u: goto label_1a2a80;
        case 0x1a2a84u: goto label_1a2a84;
        case 0x1a2a88u: goto label_1a2a88;
        case 0x1a2a8cu: goto label_1a2a8c;
        case 0x1a2a90u: goto label_1a2a90;
        case 0x1a2a94u: goto label_1a2a94;
        case 0x1a2a98u: goto label_1a2a98;
        case 0x1a2a9cu: goto label_1a2a9c;
        case 0x1a2aa0u: goto label_1a2aa0;
        case 0x1a2aa4u: goto label_1a2aa4;
        case 0x1a2aa8u: goto label_1a2aa8;
        case 0x1a2aacu: goto label_1a2aac;
        case 0x1a2ab0u: goto label_1a2ab0;
        case 0x1a2ab4u: goto label_1a2ab4;
        case 0x1a2ab8u: goto label_1a2ab8;
        case 0x1a2abcu: goto label_1a2abc;
        case 0x1a2ac0u: goto label_1a2ac0;
        case 0x1a2ac4u: goto label_1a2ac4;
        case 0x1a2ac8u: goto label_1a2ac8;
        case 0x1a2accu: goto label_1a2acc;
        case 0x1a2ad0u: goto label_1a2ad0;
        case 0x1a2ad4u: goto label_1a2ad4;
        case 0x1a2ad8u: goto label_1a2ad8;
        case 0x1a2adcu: goto label_1a2adc;
        case 0x1a2ae0u: goto label_1a2ae0;
        case 0x1a2ae4u: goto label_1a2ae4;
        case 0x1a2ae8u: goto label_1a2ae8;
        case 0x1a2aecu: goto label_1a2aec;
        case 0x1a2af0u: goto label_1a2af0;
        case 0x1a2af4u: goto label_1a2af4;
        case 0x1a2af8u: goto label_1a2af8;
        case 0x1a2afcu: goto label_1a2afc;
        case 0x1a2b00u: goto label_1a2b00;
        case 0x1a2b04u: goto label_1a2b04;
        case 0x1a2b08u: goto label_1a2b08;
        case 0x1a2b0cu: goto label_1a2b0c;
        case 0x1a2b10u: goto label_1a2b10;
        case 0x1a2b14u: goto label_1a2b14;
        case 0x1a2b18u: goto label_1a2b18;
        case 0x1a2b1cu: goto label_1a2b1c;
        case 0x1a2b20u: goto label_1a2b20;
        case 0x1a2b24u: goto label_1a2b24;
        case 0x1a2b28u: goto label_1a2b28;
        case 0x1a2b2cu: goto label_1a2b2c;
        case 0x1a2b30u: goto label_1a2b30;
        case 0x1a2b34u: goto label_1a2b34;
        case 0x1a2b38u: goto label_1a2b38;
        case 0x1a2b3cu: goto label_1a2b3c;
        case 0x1a2b40u: goto label_1a2b40;
        case 0x1a2b44u: goto label_1a2b44;
        case 0x1a2b48u: goto label_1a2b48;
        case 0x1a2b4cu: goto label_1a2b4c;
        case 0x1a2b50u: goto label_1a2b50;
        case 0x1a2b54u: goto label_1a2b54;
        case 0x1a2b58u: goto label_1a2b58;
        case 0x1a2b5cu: goto label_1a2b5c;
        case 0x1a2b60u: goto label_1a2b60;
        case 0x1a2b64u: goto label_1a2b64;
        case 0x1a2b68u: goto label_1a2b68;
        case 0x1a2b6cu: goto label_1a2b6c;
        case 0x1a2b70u: goto label_1a2b70;
        case 0x1a2b74u: goto label_1a2b74;
        case 0x1a2b78u: goto label_1a2b78;
        case 0x1a2b7cu: goto label_1a2b7c;
        case 0x1a2b80u: goto label_1a2b80;
        case 0x1a2b84u: goto label_1a2b84;
        case 0x1a2b88u: goto label_1a2b88;
        case 0x1a2b8cu: goto label_1a2b8c;
        case 0x1a2b90u: goto label_1a2b90;
        case 0x1a2b94u: goto label_1a2b94;
        case 0x1a2b98u: goto label_1a2b98;
        case 0x1a2b9cu: goto label_1a2b9c;
        case 0x1a2ba0u: goto label_1a2ba0;
        case 0x1a2ba4u: goto label_1a2ba4;
        case 0x1a2ba8u: goto label_1a2ba8;
        case 0x1a2bacu: goto label_1a2bac;
        case 0x1a2bb0u: goto label_1a2bb0;
        case 0x1a2bb4u: goto label_1a2bb4;
        case 0x1a2bb8u: goto label_1a2bb8;
        case 0x1a2bbcu: goto label_1a2bbc;
        case 0x1a2bc0u: goto label_1a2bc0;
        case 0x1a2bc4u: goto label_1a2bc4;
        case 0x1a2bc8u: goto label_1a2bc8;
        case 0x1a2bccu: goto label_1a2bcc;
        case 0x1a2bd0u: goto label_1a2bd0;
        case 0x1a2bd4u: goto label_1a2bd4;
        case 0x1a2bd8u: goto label_1a2bd8;
        case 0x1a2bdcu: goto label_1a2bdc;
        case 0x1a2be0u: goto label_1a2be0;
        case 0x1a2be4u: goto label_1a2be4;
        case 0x1a2be8u: goto label_1a2be8;
        case 0x1a2becu: goto label_1a2bec;
        case 0x1a2bf0u: goto label_1a2bf0;
        case 0x1a2bf4u: goto label_1a2bf4;
        case 0x1a2bf8u: goto label_1a2bf8;
        case 0x1a2bfcu: goto label_1a2bfc;
        case 0x1a2c00u: goto label_1a2c00;
        case 0x1a2c04u: goto label_1a2c04;
        case 0x1a2c08u: goto label_1a2c08;
        case 0x1a2c0cu: goto label_1a2c0c;
        case 0x1a2c10u: goto label_1a2c10;
        case 0x1a2c14u: goto label_1a2c14;
        case 0x1a2c18u: goto label_1a2c18;
        case 0x1a2c1cu: goto label_1a2c1c;
        case 0x1a2c20u: goto label_1a2c20;
        case 0x1a2c24u: goto label_1a2c24;
        case 0x1a2c28u: goto label_1a2c28;
        case 0x1a2c2cu: goto label_1a2c2c;
        case 0x1a2c30u: goto label_1a2c30;
        case 0x1a2c34u: goto label_1a2c34;
        case 0x1a2c38u: goto label_1a2c38;
        case 0x1a2c3cu: goto label_1a2c3c;
        case 0x1a2c40u: goto label_1a2c40;
        case 0x1a2c44u: goto label_1a2c44;
        case 0x1a2c48u: goto label_1a2c48;
        case 0x1a2c4cu: goto label_1a2c4c;
        case 0x1a2c50u: goto label_1a2c50;
        case 0x1a2c54u: goto label_1a2c54;
        case 0x1a2c58u: goto label_1a2c58;
        case 0x1a2c5cu: goto label_1a2c5c;
        case 0x1a2c60u: goto label_1a2c60;
        case 0x1a2c64u: goto label_1a2c64;
        case 0x1a2c68u: goto label_1a2c68;
        case 0x1a2c6cu: goto label_1a2c6c;
        case 0x1a2c70u: goto label_1a2c70;
        case 0x1a2c74u: goto label_1a2c74;
        case 0x1a2c78u: goto label_1a2c78;
        case 0x1a2c7cu: goto label_1a2c7c;
        case 0x1a2c80u: goto label_1a2c80;
        case 0x1a2c84u: goto label_1a2c84;
        case 0x1a2c88u: goto label_1a2c88;
        case 0x1a2c8cu: goto label_1a2c8c;
        case 0x1a2c90u: goto label_1a2c90;
        case 0x1a2c94u: goto label_1a2c94;
        case 0x1a2c98u: goto label_1a2c98;
        case 0x1a2c9cu: goto label_1a2c9c;
        default: break;
    }

    ctx->pc = 0x1a28b0u;

label_1a28b0:
    // 0x1a28b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x1a28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
label_1a28b4:
    // 0x1a28b4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x1a28b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_1a28b8:
    // 0x1a28b8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x1a28b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
label_1a28bc:
    // 0x1a28bc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x1a28bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
label_1a28c0:
    // 0x1a28c0: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x1a28c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_1a28c4:
    // 0x1a28c4: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x1a28c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_1a28c8:
    // 0x1a28c8: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x1a28c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_1a28cc:
    // 0x1a28cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1a28ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_1a28d0:
    // 0x1a28d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1a28d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_1a28d4:
    // 0x1a28d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1a28d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_1a28d8:
    // 0x1a28d8: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1a28d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a28dc:
    // 0x1a28dc: 0x309100ff  andi        $s1, $a0, 0xFF
    ctx->pc = 0x1a28dcu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
label_1a28e0:
    // 0x1a28e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1a28e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_1a28e4:
    // 0x1a28e4: 0x2a220002  slti        $v0, $s1, 0x2
    ctx->pc = 0x1a28e4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)2) ? 1 : 0);
label_1a28e8:
    // 0x1a28e8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_1a28ec:
    if (ctx->pc == 0x1A28ECu) {
        ctx->pc = 0x1A28ECu;
            // 0x1a28ec: 0xa7a500ee  sh          $a1, 0xEE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 238), (uint16_t)GPR_U32(ctx, 5));
        ctx->pc = 0x1A28F0u;
        goto label_1a28f0;
    }
    ctx->pc = 0x1A28E8u;
    {
        const bool branch_taken_0x1a28e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A28ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A28E8u;
            // 0x1a28ec: 0xa7a500ee  sh          $a1, 0xEE($sp) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 29), 238), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28e8) {
            ctx->pc = 0x1A28F8u;
            goto label_1a28f8;
        }
    }
    ctx->pc = 0x1A28F0u;
label_1a28f0:
    // 0x1a28f0: 0x100000df  b           . + 4 + (0xDF << 2)
label_1a28f4:
    if (ctx->pc == 0x1A28F4u) {
        ctx->pc = 0x1A28F4u;
            // 0x1a28f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A28F8u;
        goto label_1a28f8;
    }
    ctx->pc = 0x1A28F0u;
    {
        const bool branch_taken_0x1a28f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A28F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A28F0u;
            // 0x1a28f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a28f0) {
            ctx->pc = 0x1A2C70u;
            goto label_1a2c70;
        }
    }
    ctx->pc = 0x1A28F8u;
label_1a28f8:
    // 0x1a28f8: 0x1128c0  sll         $a1, $s1, 3
    ctx->pc = 0x1a28f8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1a28fc:
    // 0x1a28fc: 0x3c04009d  lui         $a0, 0x9D
    ctx->pc = 0x1a28fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)157 << 16));
label_1a2900:
    // 0x1a2900: 0x97a200ee  lhu         $v0, 0xEE($sp)
    ctx->pc = 0x1a2900u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 238)));
label_1a2904:
    // 0x1a2904: 0x2484b250  addiu       $a0, $a0, -0x4DB0
    ctx->pc = 0x1a2904u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947408));
label_1a2908:
    // 0x1a2908: 0xb12821  addu        $a1, $a1, $s1
    ctx->pc = 0x1a2908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 17)));
label_1a290c:
    // 0x1a290c: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x1a290cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
label_1a2910:
    // 0x1a2910: 0x858021  addu        $s0, $a0, $a1
    ctx->pc = 0x1a2910u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
label_1a2914:
    // 0x1a2914: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x1a2914u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
label_1a2918:
    // 0x1a2918: 0x3c050036  lui         $a1, 0x36
    ctx->pc = 0x1a2918u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)54 << 16));
label_1a291c:
    // 0x1a291c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x1a291cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a2920:
    // 0x1a2920: 0x40102d  daddu       $v0, $v0, $zero
    ctx->pc = 0x1a2920u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2924:
    // 0x1a2924: 0x24a563d0  addiu       $a1, $a1, 0x63D0
    ctx->pc = 0x1a2924u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 25552));
label_1a2928:
    // 0x1a2928: 0x24c6f400  addiu       $a2, $a2, -0xC00
    ctx->pc = 0x1a2928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294964224));
label_1a292c:
    // 0x1a292c: 0x250863f0  addiu       $t0, $t0, 0x63F0
    ctx->pc = 0x1a292cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 25584));
label_1a2930:
    // 0x1a2930: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x1a2930u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1a2934:
    // 0x1a2934: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x1a2934u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1a2938:
    // 0x1a2938: 0x1042021  addu        $a0, $t0, $a0
    ctx->pc = 0x1a2938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 4)));
label_1a293c:
    // 0x1a293c: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x1a293cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1a2940:
    // 0x1a2940: 0x442024  and         $a0, $v0, $a0
    ctx->pc = 0x1a2940u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_1a2944:
    // 0x1a2944: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
label_1a2948:
    if (ctx->pc == 0x1A2948u) {
        ctx->pc = 0x1A294Cu;
        goto label_1a294c;
    }
    ctx->pc = 0x1A2944u;
    {
        const bool branch_taken_0x1a2944 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2944) {
            ctx->pc = 0x1A2990u;
            goto label_1a2990;
        }
    }
    ctx->pc = 0x1A294Cu;
label_1a294c:
    // 0x1a294c: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x1a294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
label_1a2950:
    // 0x1a2950: 0x90870000  lbu         $a3, 0x0($a0)
    ctx->pc = 0x1a2950u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_1a2954:
    // 0x1a2954: 0x2ce1000d  sltiu       $at, $a3, 0xD
    ctx->pc = 0x1a2954u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
label_1a2958:
    // 0x1a2958: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
label_1a295c:
    if (ctx->pc == 0x1A295Cu) {
        ctx->pc = 0x1A2960u;
        goto label_1a2960;
    }
    ctx->pc = 0x1A2958u;
    {
        const bool branch_taken_0x1a2958 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2958) {
            ctx->pc = 0x1A2990u;
            goto label_1a2990;
        }
    }
    ctx->pc = 0x1A2960u;
label_1a2960:
    // 0x1a2960: 0x72080  sll         $a0, $a3, 2
    ctx->pc = 0x1a2960u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_1a2964:
    // 0x1a2964: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x1a2964u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
label_1a2968:
    // 0x1a2968: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x1a2968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_1a296c:
    // 0x1a296c: 0x800008  jr          $a0
label_1a2970:
    if (ctx->pc == 0x1A2970u) {
        ctx->pc = 0x1A2974u;
        goto label_1a2974;
    }
    ctx->pc = 0x1A296Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A2974u;
label_1a2974:
    // 0x1a2974: 0x0  nop
    ctx->pc = 0x1a2974u;
    // NOP
label_1a2978:
    // 0x1a2978: 0x72040  sll         $a0, $a3, 1
    ctx->pc = 0x1a2978u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1a297c:
    // 0x1a297c: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x1a297cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_1a2980:
    // 0x1a2980: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x1a2980u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
label_1a2984:
    // 0x1a2984: 0x2442025  or          $a0, $s2, $a0
    ctx->pc = 0x1a2984u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) | GPR_U64(ctx, 4));
label_1a2988:
    // 0x1a2988: 0x3092ffff  andi        $s2, $a0, 0xFFFF
    ctx->pc = 0x1a2988u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1a298c:
    // 0x1a298c: 0x0  nop
    ctx->pc = 0x1a298cu;
    // NOP
label_1a2990:
    // 0x1a2990: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a2990u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_1a2994:
    // 0x1a2994: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x1a2994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_1a2998:
    // 0x1a2998: 0x28640008  slti        $a0, $v1, 0x8
    ctx->pc = 0x1a2998u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)8) ? 1 : 0);
label_1a299c:
    // 0x1a299c: 0x5480ffe5  bnel        $a0, $zero, . + 4 + (-0x1B << 2)
label_1a29a0:
    if (ctx->pc == 0x1A29A0u) {
        ctx->pc = 0x1A29A0u;
            // 0x1a29a0: 0x3067ffff  andi        $a3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->pc = 0x1A29A4u;
        goto label_1a29a4;
    }
    ctx->pc = 0x1A299Cu;
    {
        const bool branch_taken_0x1a299c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a299c) {
            ctx->pc = 0x1A29A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A299Cu;
            // 0x1a29a0: 0x3067ffff  andi        $a3, $v1, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2934u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2934;
        }
    }
    ctx->pc = 0x1A29A4u;
label_1a29a4:
    // 0x1a29a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1a29a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1a29a8:
    // 0x1a29a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a29a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a29ac:
    // 0x1a29ac: 0xc068d08  jal         func_1A3420
label_1a29b0:
    if (ctx->pc == 0x1A29B0u) {
        ctx->pc = 0x1A29B0u;
            // 0x1a29b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A29B4u;
        goto label_1a29b4;
    }
    ctx->pc = 0x1A29ACu;
    SET_GPR_U32(ctx, 31, 0x1A29B4u);
    ctx->pc = 0x1A29B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1A29ACu;
            // 0x1a29b0: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (runtime->hasFunction(0x1A3420u)) {
        auto targetFn = runtime->lookupFunction(0x1A3420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29B4u; }
        if (ctx->pc != 0x1A29B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A3420_0x1a3420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A29B4u; }
        if (ctx->pc != 0x1A29B4u) { return; }
    }
    ctx->pc = 0x1A29B4u;
label_1a29b4:
    // 0x1a29b4: 0x3059ffff  andi        $t9, $v0, 0xFFFF
    ctx->pc = 0x1a29b4u;
    SET_GPR_U64(ctx, 25, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a29b8:
    // 0x1a29b8: 0x3c17009f  lui         $s7, 0x9F
    ctx->pc = 0x1a29b8u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)159 << 16));
label_1a29bc:
    // 0x1a29bc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a29bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_1a29c0:
    // 0x1a29c0: 0x3c03ff00  lui         $v1, 0xFF00
    ctx->pc = 0x1a29c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65280 << 16));
label_1a29c4:
    // 0x1a29c4: 0x8c449478  lw          $a0, -0x6B88($v0)
    ctx->pc = 0x1a29c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
label_1a29c8:
    // 0x1a29c8: 0x341ee612  ori         $fp, $zero, 0xE612
    ctx->pc = 0x1a29c8u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58898);
label_1a29cc:
    // 0x1a29cc: 0x26f78b10  addiu       $s7, $s7, -0x74F0
    ctx->pc = 0x1a29ccu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 4294937360));
label_1a29d0:
    // 0x1a29d0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1a29d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a29d4:
    // 0x1a29d4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1a29d8:
    // 0x1a29d8: 0x83c024  and         $t8, $a0, $v1
    ctx->pc = 0x1a29d8u;
    SET_GPR_U64(ctx, 24, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
label_1a29dc:
    // 0x1a29dc: 0x8c4fd590  lw          $t7, -0x2A70($v0)
    ctx->pc = 0x1a29dcu;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956432)));
label_1a29e0:
    // 0x1a29e0: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x1a29e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
label_1a29e4:
    // 0x1a29e4: 0x34650100  ori         $a1, $v1, 0x100
    ctx->pc = 0x1a29e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
label_1a29e8:
    // 0x1a29e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a29e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_1a29ec:
    // 0x1a29ec: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_1a29f0:
    // 0x1a29f0: 0x2463db50  addiu       $v1, $v1, -0x24B0
    ctx->pc = 0x1a29f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957904));
label_1a29f4:
    // 0x1a29f4: 0x904e9780  lbu         $t6, -0x6880($v0)
    ctx->pc = 0x1a29f4u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
label_1a29f8:
    // 0x1a29f8: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x1a29f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
label_1a29fc:
    // 0x1a29fc: 0x904dd9d0  lbu         $t5, -0x2630($v0)
    ctx->pc = 0x1a29fcu;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294957520)));
label_1a2a00:
    // 0x1a2a00: 0x3c0201d5  lui         $v0, 0x1D5
    ctx->pc = 0x1a2a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)469 << 16));
label_1a2a04:
    // 0x1a2a04: 0x8c46d918  lw          $a2, -0x26E8($v0)
    ctx->pc = 0x1a2a04u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294957336)));
label_1a2a08:
    // 0x1a2a08: 0x1110c0  sll         $v0, $s1, 3
    ctx->pc = 0x1a2a08u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 3));
label_1a2a0c:
    // 0x1a2a0c: 0xc55824  and         $t3, $a2, $a1
    ctx->pc = 0x1a2a0cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 6) & GPR_U64(ctx, 5));
label_1a2a10:
    // 0x1a2a10: 0x512021  addu        $a0, $v0, $s1
    ctx->pc = 0x1a2a10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a2a14:
    // 0x1a2a14: 0x30cc0004  andi        $t4, $a2, 0x4
    ctx->pc = 0x1a2a14u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
label_1a2a18:
    // 0x1a2a18: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x1a2a18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
label_1a2a1c:
    // 0x1a2a1c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a2a1cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1a2a20:
    // 0x1a2a20: 0x9049b240  lbu         $t1, -0x4DC0($v0)
    ctx->pc = 0x1a2a20u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294947392)));
label_1a2a24:
    // 0x1a2a24: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1a2a24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1a2a28:
    // 0x1a2a28: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x1a2a28u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
label_1a2a2c:
    // 0x1a2a2c: 0x645021  addu        $t2, $v1, $a0
    ctx->pc = 0x1a2a2cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a2a30:
    // 0x1a2a30: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a2a30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_1a2a34:
    // 0x1a2a34: 0x25550003  addiu       $s5, $t2, 0x3
    ctx->pc = 0x1a2a34u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 10), 3));
label_1a2a38:
    // 0x1a2a38: 0x904895c0  lbu         $t0, -0x6A40($v0)
    ctx->pc = 0x1a2a38u;
    SET_GPR_U32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940096)));
label_1a2a3c:
    // 0x1a2a3c: 0x2554000a  addiu       $s4, $t2, 0xA
    ctx->pc = 0x1a2a3cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 10), 10));
label_1a2a40:
    // 0x1a2a40: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a2a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_1a2a44:
    // 0x1a2a44: 0x90479730  lbu         $a3, -0x68D0($v0)
    ctx->pc = 0x1a2a44u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940464)));
label_1a2a48:
    // 0x1a2a48: 0x111040  sll         $v0, $s1, 1
    ctx->pc = 0x1a2a48u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 1));
label_1a2a4c:
    // 0x1a2a4c: 0x511821  addu        $v1, $v0, $s1
    ctx->pc = 0x1a2a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_1a2a50:
    // 0x1a2a50: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x1a2a50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_1a2a54:
    // 0x1a2a54: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a2a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
label_1a2a58:
    // 0x1a2a58: 0x240304b4  addiu       $v1, $zero, 0x4B4
    ctx->pc = 0x1a2a58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
label_1a2a5c:
    // 0x1a2a5c: 0x24428af0  addiu       $v0, $v0, -0x7510
    ctx->pc = 0x1a2a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937328));
label_1a2a60:
    // 0x1a2a60: 0x223b018  mult        $s6, $s1, $v1
    ctx->pc = 0x1a2a60u;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 22, (int32_t)result); }
label_1a2a64:
    // 0x1a2a64: 0x443021  addu        $a2, $v0, $a0
    ctx->pc = 0x1a2a64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a2a68:
    // 0x1a2a68: 0x24c50002  addiu       $a1, $a2, 0x2
    ctx->pc = 0x1a2a68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
label_1a2a6c:
    // 0x1a2a6c: 0x71840  sll         $v1, $a3, 1
    ctx->pc = 0x1a2a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
label_1a2a70:
    // 0x1a2a70: 0x2f6b821  addu        $s7, $s7, $s6
    ctx->pc = 0x1a2a70u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 22)));
label_1a2a74:
    // 0x1a2a74: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x1a2a74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_1a2a78:
    // 0x1a2a78: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x1a2a78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_1a2a7c:
    // 0x1a2a7c: 0x723e1818  mult1       $v1, $s1, $fp
    ctx->pc = 0x1a2a7cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 30); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a2a80:
    // 0x1a2a80: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1a2a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_1a2a84:
    // 0x1a2a84: 0x7fa300b0  sq          $v1, 0xB0($sp)
    ctx->pc = 0x1a2a84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
label_1a2a88:
    // 0x1a2a88: 0x245e0008  addiu       $fp, $v0, 0x8
    ctx->pc = 0x1a2a88u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
label_1a2a8c:
    // 0x1a2a8c: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x1a2a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
label_1a2a90:
    // 0x1a2a90: 0x24c20004  addiu       $v0, $a2, 0x4
    ctx->pc = 0x1a2a90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
label_1a2a94:
    // 0x1a2a94: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x1a2a94u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_1a2a98:
    // 0x1a2a98: 0x7fa200d0  sq          $v0, 0xD0($sp)
    ctx->pc = 0x1a2a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 2));
label_1a2a9c:
    // 0x1a2a9c: 0x2463b290  addiu       $v1, $v1, -0x4D70
    ctx->pc = 0x1a2a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947472));
label_1a2aa0:
    // 0x1a2aa0: 0x3c020036  lui         $v0, 0x36
    ctx->pc = 0x1a2aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)54 << 16));
label_1a2aa4:
    // 0x1a2aa4: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a2aa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a2aa8:
    // 0x1a2aa8: 0x244263f0  addiu       $v0, $v0, 0x63F0
    ctx->pc = 0x1a2aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 25584));
label_1a2aac:
    // 0x1a2aac: 0x7fa300a0  sq          $v1, 0xA0($sp)
    ctx->pc = 0x1a2aacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 3));
label_1a2ab0:
    // 0x1a2ab0: 0x7fa200c0  sq          $v0, 0xC0($sp)
    ctx->pc = 0x1a2ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 2));
label_1a2ab4:
    // 0x1a2ab4: 0x7ba200c0  lq          $v0, 0xC0($sp)
    ctx->pc = 0x1a2ab4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_1a2ab8:
    // 0x1a2ab8: 0x3264ffff  andi        $a0, $s3, 0xFFFF
    ctx->pc = 0x1a2ab8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 19) & (uint64_t)(uint16_t)65535);
label_1a2abc:
    // 0x1a2abc: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1a2abcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
label_1a2ac0:
    // 0x1a2ac0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a2ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a2ac4:
    // 0x1a2ac4: 0x94420000  lhu         $v0, 0x0($v0)
    ctx->pc = 0x1a2ac4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1a2ac8:
    // 0x1a2ac8: 0x3221024  and         $v0, $t9, $v0
    ctx->pc = 0x1a2ac8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 25) & GPR_U64(ctx, 2));
label_1a2acc:
    // 0x1a2acc: 0x10400044  beqz        $v0, . + 4 + (0x44 << 2)
label_1a2ad0:
    if (ctx->pc == 0x1A2AD0u) {
        ctx->pc = 0x1A2AD4u;
        goto label_1a2ad4;
    }
    ctx->pc = 0x1A2ACCu;
    {
        const bool branch_taken_0x1a2acc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2acc) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2AD4u;
label_1a2ad4:
    // 0x1a2ad4: 0x2041021  addu        $v0, $s0, $a0
    ctx->pc = 0x1a2ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
label_1a2ad8:
    // 0x1a2ad8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x1a2ad8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_1a2adc:
    // 0x1a2adc: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x1a2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_1a2ae0:
    // 0x1a2ae0: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
label_1a2ae4:
    if (ctx->pc == 0x1A2AE4u) {
        ctx->pc = 0x1A2AE8u;
        goto label_1a2ae8;
    }
    ctx->pc = 0x1A2AE0u;
    {
        const bool branch_taken_0x1a2ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2ae0) {
            ctx->pc = 0x1A2AF0u;
            goto label_1a2af0;
        }
    }
    ctx->pc = 0x1A2AE8u;
label_1a2ae8:
    // 0x1a2ae8: 0x1000003d  b           . + 4 + (0x3D << 2)
label_1a2aec:
    if (ctx->pc == 0x1A2AECu) {
        ctx->pc = 0x1A2AF0u;
        goto label_1a2af0;
    }
    ctx->pc = 0x1A2AE8u;
    {
        const bool branch_taken_0x1a2ae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ae8) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2AF0u;
label_1a2af0:
    // 0x1a2af0: 0x1700003b  bnez        $t8, . + 4 + (0x3B << 2)
label_1a2af4:
    if (ctx->pc == 0x1A2AF4u) {
        ctx->pc = 0x1A2AF8u;
        goto label_1a2af8;
    }
    ctx->pc = 0x1A2AF0u;
    {
        const bool branch_taken_0x1a2af0 = (GPR_U64(ctx, 24) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2af0) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2AF8u;
label_1a2af8:
    // 0x1a2af8: 0x15e00039  bnez        $t7, . + 4 + (0x39 << 2)
label_1a2afc:
    if (ctx->pc == 0x1A2AFCu) {
        ctx->pc = 0x1A2B00u;
        goto label_1a2b00;
    }
    ctx->pc = 0x1A2AF8u;
    {
        const bool branch_taken_0x1a2af8 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2af8) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2B00u;
label_1a2b00:
    // 0x1a2b00: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x1a2b00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_1a2b04:
    // 0x1a2b04: 0x11c20036  beq         $t6, $v0, . + 4 + (0x36 << 2)
label_1a2b08:
    if (ctx->pc == 0x1A2B08u) {
        ctx->pc = 0x1A2B0Cu;
        goto label_1a2b0c;
    }
    ctx->pc = 0x1A2B04u;
    {
        const bool branch_taken_0x1a2b04 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b04) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2B0Cu;
label_1a2b0c:
    // 0x1a2b0c: 0x240200ff  addiu       $v0, $zero, 0xFF
    ctx->pc = 0x1a2b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_1a2b10:
    // 0x1a2b10: 0x11a20033  beq         $t5, $v0, . + 4 + (0x33 << 2)
label_1a2b14:
    if (ctx->pc == 0x1A2B14u) {
        ctx->pc = 0x1A2B18u;
        goto label_1a2b18;
    }
    ctx->pc = 0x1A2B10u;
    {
        const bool branch_taken_0x1a2b10 = (GPR_U64(ctx, 13) == GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b10) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2B18u;
label_1a2b18:
    // 0x1a2b18: 0x11800031  beqz        $t4, . + 4 + (0x31 << 2)
label_1a2b1c:
    if (ctx->pc == 0x1A2B1Cu) {
        ctx->pc = 0x1A2B20u;
        goto label_1a2b20;
    }
    ctx->pc = 0x1A2B18u;
    {
        const bool branch_taken_0x1a2b18 = (GPR_U64(ctx, 12) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b18) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2B20u;
label_1a2b20:
    // 0x1a2b20: 0x1560002f  bnez        $t3, . + 4 + (0x2F << 2)
label_1a2b24:
    if (ctx->pc == 0x1A2B24u) {
        ctx->pc = 0x1A2B28u;
        goto label_1a2b28;
    }
    ctx->pc = 0x1A2B20u;
    {
        const bool branch_taken_0x1a2b20 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2b20) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2B28u;
label_1a2b28:
    // 0x1a2b28: 0x92a20000  lbu         $v0, 0x0($s5)
    ctx->pc = 0x1a2b28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 0)));
label_1a2b2c:
    // 0x1a2b2c: 0x92830000  lbu         $v1, 0x0($s4)
    ctx->pc = 0x1a2b2cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 0)));
label_1a2b30:
    // 0x1a2b30: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x1a2b30u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
label_1a2b34:
    // 0x1a2b34: 0x1421021  addu        $v0, $t2, $v0
    ctx->pc = 0x1a2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_1a2b38:
    // 0x1a2b38: 0x9044014d  lbu         $a0, 0x14D($v0)
    ctx->pc = 0x1a2b38u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 333)));
label_1a2b3c:
    // 0x1a2b3c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2b3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2b40:
    // 0x1a2b40: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
label_1a2b44:
    if (ctx->pc == 0x1A2B44u) {
        ctx->pc = 0x1A2B44u;
            // 0x1a2b44: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B48u;
        goto label_1a2b48;
    }
    ctx->pc = 0x1A2B40u;
    {
        const bool branch_taken_0x1a2b40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A2B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B40u;
            // 0x1a2b44: 0xb02d  daddu       $s6, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b40) {
            ctx->pc = 0x1A2B50u;
            goto label_1a2b50;
        }
    }
    ctx->pc = 0x1A2B48u;
label_1a2b48:
    // 0x1a2b48: 0x10000009  b           . + 4 + (0x9 << 2)
label_1a2b4c:
    if (ctx->pc == 0x1A2B4Cu) {
        ctx->pc = 0x1A2B4Cu;
            // 0x1a2b4c: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->pc = 0x1A2B50u;
        goto label_1a2b50;
    }
    ctx->pc = 0x1A2B48u;
    {
        const bool branch_taken_0x1a2b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B48u;
            // 0x1a2b4c: 0x64160001  daddiu      $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b48) {
            ctx->pc = 0x1A2B70u;
            goto label_1a2b70;
        }
    }
    ctx->pc = 0x1A2B50u;
label_1a2b50:
    // 0x1a2b50: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a2b50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a2b54:
    // 0x1a2b54: 0x15c20006  bne         $t6, $v0, . + 4 + (0x6 << 2)
label_1a2b58:
    if (ctx->pc == 0x1A2B58u) {
        ctx->pc = 0x1A2B5Cu;
        goto label_1a2b5c;
    }
    ctx->pc = 0x1A2B54u;
    {
        const bool branch_taken_0x1a2b54 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b54) {
            ctx->pc = 0x1A2B70u;
            goto label_1a2b70;
        }
    }
    ctx->pc = 0x1A2B5Cu;
label_1a2b5c:
    // 0x1a2b5c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1a2b5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2b60:
    // 0x1a2b60: 0x15220003  bne         $t1, $v0, . + 4 + (0x3 << 2)
label_1a2b64:
    if (ctx->pc == 0x1A2B64u) {
        ctx->pc = 0x1A2B68u;
        goto label_1a2b68;
    }
    ctx->pc = 0x1A2B60u;
    {
        const bool branch_taken_0x1a2b60 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b60) {
            ctx->pc = 0x1A2B70u;
            goto label_1a2b70;
        }
    }
    ctx->pc = 0x1A2B68u;
label_1a2b68:
    // 0x1a2b68: 0x64160001  daddiu      $s6, $zero, 0x1
    ctx->pc = 0x1a2b68u;
    SET_GPR_S64(ctx, 22, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_1a2b6c:
    // 0x1a2b6c: 0x0  nop
    ctx->pc = 0x1a2b6cu;
    // NOP
label_1a2b70:
    // 0x1a2b70: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x1a2b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_1a2b74:
    // 0x1a2b74: 0x15c2000c  bne         $t6, $v0, . + 4 + (0xC << 2)
label_1a2b78:
    if (ctx->pc == 0x1A2B78u) {
        ctx->pc = 0x1A2B7Cu;
        goto label_1a2b7c;
    }
    ctx->pc = 0x1A2B74u;
    {
        const bool branch_taken_0x1a2b74 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b74) {
            ctx->pc = 0x1A2BA8u;
            goto label_1a2ba8;
        }
    }
    ctx->pc = 0x1A2B7Cu;
label_1a2b7c:
    // 0x1a2b7c: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x1a2b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_1a2b80:
    // 0x1a2b80: 0x15020009  bne         $t0, $v0, . + 4 + (0x9 << 2)
label_1a2b84:
    if (ctx->pc == 0x1A2B84u) {
        ctx->pc = 0x1A2B88u;
        goto label_1a2b88;
    }
    ctx->pc = 0x1A2B80u;
    {
        const bool branch_taken_0x1a2b80 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        if (branch_taken_0x1a2b80) {
            ctx->pc = 0x1A2BA8u;
            goto label_1a2ba8;
        }
    }
    ctx->pc = 0x1A2B88u;
label_1a2b88:
    // 0x1a2b88: 0x16270015  bne         $s1, $a3, . + 4 + (0x15 << 2)
label_1a2b8c:
    if (ctx->pc == 0x1A2B8Cu) {
        ctx->pc = 0x1A2B90u;
        goto label_1a2b90;
    }
    ctx->pc = 0x1A2B88u;
    {
        const bool branch_taken_0x1a2b88 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 7));
        if (branch_taken_0x1a2b88) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2B90u;
label_1a2b90:
    // 0x1a2b90: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1a2b90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a2b94:
    // 0x1a2b94: 0xa0c20000  sb          $v0, 0x0($a2)
    ctx->pc = 0x1a2b94u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 2));
label_1a2b98:
    // 0x1a2b98: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x1a2b98u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_1a2b9c:
    // 0x1a2b9c: 0x10000010  b           . + 4 + (0x10 << 2)
label_1a2ba0:
    if (ctx->pc == 0x1A2BA0u) {
        ctx->pc = 0x1A2BA0u;
            // 0x1a2ba0: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
        ctx->pc = 0x1A2BA4u;
        goto label_1a2ba4;
    }
    ctx->pc = 0x1A2B9Cu;
    {
        const bool branch_taken_0x1a2b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A2BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2B9Cu;
            // 0x1a2ba0: 0xafd70000  sw          $s7, 0x0($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 0), GPR_U32(ctx, 23));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a2b9c) {
            ctx->pc = 0x1A2BE0u;
            goto label_1a2be0;
        }
    }
    ctx->pc = 0x1A2BA4u;
label_1a2ba4:
    // 0x1a2ba4: 0x0  nop
    ctx->pc = 0x1a2ba4u;
    // NOP
label_1a2ba8:
    // 0x1a2ba8: 0x12c0000b  beqz        $s6, . + 4 + (0xB << 2)
label_1a2bac:
    if (ctx->pc == 0x1A2BACu) {
        ctx->pc = 0x1A2BB0u;
        goto label_1a2bb0;
    }
    ctx->pc = 0x1A2BA8u;
    {
        const bool branch_taken_0x1a2ba8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2ba8) {
            ctx->pc = 0x1A2BD8u;
            goto label_1a2bd8;
        }
    }
    ctx->pc = 0x1A2BB0u;
label_1a2bb0:
    // 0x1a2bb0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x1a2bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_1a2bb4:
    // 0x1a2bb4: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x1a2bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_1a2bb8:
    // 0x1a2bb8: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x1a2bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
label_1a2bbc:
    // 0x1a2bbc: 0x240304b2  addiu       $v1, $zero, 0x4B2
    ctx->pc = 0x1a2bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1202));
label_1a2bc0:
    // 0x1a2bc0: 0xa4a00000  sh          $zero, 0x0($a1)
    ctx->pc = 0x1a2bc0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 0), (uint16_t)GPR_U32(ctx, 0));
label_1a2bc4:
    // 0x1a2bc4: 0x431818  mult        $v1, $v0, $v1
    ctx->pc = 0x1a2bc4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_1a2bc8:
    // 0x1a2bc8: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x1a2bc8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_1a2bcc:
    // 0x1a2bcc: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x1a2bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a2bd0:
    // 0x1a2bd0: 0x7ba200d0  lq          $v0, 0xD0($sp)
    ctx->pc = 0x1a2bd0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_1a2bd4:
    // 0x1a2bd4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a2bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_1a2bd8:
    // 0x1a2bd8: 0xa7a000ee  sh          $zero, 0xEE($sp)
    ctx->pc = 0x1a2bd8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 238), (uint16_t)GPR_U32(ctx, 0));
label_1a2bdc:
    // 0x1a2bdc: 0x0  nop
    ctx->pc = 0x1a2bdcu;
    // NOP
label_1a2be0:
    // 0x1a2be0: 0x26620001  addiu       $v0, $s3, 0x1
    ctx->pc = 0x1a2be0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1a2be4:
    // 0x1a2be4: 0x3053ffff  andi        $s3, $v0, 0xFFFF
    ctx->pc = 0x1a2be4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a2be8:
    // 0x1a2be8: 0x2a620008  slti        $v0, $s3, 0x8
    ctx->pc = 0x1a2be8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)8) ? 1 : 0);
label_1a2bec:
    // 0x1a2bec: 0x5440ffb2  bnel        $v0, $zero, . + 4 + (-0x4E << 2)
label_1a2bf0:
    if (ctx->pc == 0x1A2BF0u) {
        ctx->pc = 0x1A2BF0u;
            // 0x1a2bf0: 0x7ba200c0  lq          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->pc = 0x1A2BF4u;
        goto label_1a2bf4;
    }
    ctx->pc = 0x1A2BECu;
    {
        const bool branch_taken_0x1a2bec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a2bec) {
            ctx->pc = 0x1A2BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2BECu;
            // 0x1a2bf0: 0x7ba200c0  lq          $v0, 0xC0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 192)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2AB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1a2ab8;
        }
    }
    ctx->pc = 0x1A2BF4u;
label_1a2bf4:
    // 0x1a2bf4: 0x97a200ee  lhu         $v0, 0xEE($sp)
    ctx->pc = 0x1a2bf4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 238)));
label_1a2bf8:
    // 0x1a2bf8: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x1a2bf8u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1a2bfc:
    // 0x1a2bfc: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x1a2bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_1a2c00:
    // 0x1a2c00: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a2c04:
    if (ctx->pc == 0x1A2C04u) {
        ctx->pc = 0x1A2C04u;
            // 0x1a2c04: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->pc = 0x1A2C08u;
        goto label_1a2c08;
    }
    ctx->pc = 0x1A2C00u;
    {
        const bool branch_taken_0x1a2c00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c00) {
            ctx->pc = 0x1A2C04u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C00u;
            // 0x1a2c04: 0x30620040  andi        $v0, $v1, 0x40 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C14u;
            goto label_1a2c14;
        }
    }
    ctx->pc = 0x1A2C08u;
label_1a2c08:
    // 0x1a2c08: 0x36420001  ori         $v0, $s2, 0x1
    ctx->pc = 0x1a2c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)1);
label_1a2c0c:
    // 0x1a2c0c: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1a2c0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a2c10:
    // 0x1a2c10: 0x30620040  andi        $v0, $v1, 0x40
    ctx->pc = 0x1a2c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)64);
label_1a2c14:
    // 0x1a2c14: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a2c18:
    if (ctx->pc == 0x1A2C18u) {
        ctx->pc = 0x1A2C18u;
            // 0x1a2c18: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->pc = 0x1A2C1Cu;
        goto label_1a2c1c;
    }
    ctx->pc = 0x1A2C14u;
    {
        const bool branch_taken_0x1a2c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c14) {
            ctx->pc = 0x1A2C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C14u;
            // 0x1a2c18: 0x30620080  andi        $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C28u;
            goto label_1a2c28;
        }
    }
    ctx->pc = 0x1A2C1Cu;
label_1a2c1c:
    // 0x1a2c1c: 0x36420002  ori         $v0, $s2, 0x2
    ctx->pc = 0x1a2c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)2);
label_1a2c20:
    // 0x1a2c20: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1a2c20u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a2c24:
    // 0x1a2c24: 0x30620080  andi        $v0, $v1, 0x80
    ctx->pc = 0x1a2c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)128);
label_1a2c28:
    // 0x1a2c28: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a2c2c:
    if (ctx->pc == 0x1A2C2Cu) {
        ctx->pc = 0x1A2C2Cu;
            // 0x1a2c2c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->pc = 0x1A2C30u;
        goto label_1a2c30;
    }
    ctx->pc = 0x1A2C28u;
    {
        const bool branch_taken_0x1a2c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c28) {
            ctx->pc = 0x1A2C2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C28u;
            // 0x1a2c2c: 0x30620020  andi        $v0, $v1, 0x20 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C3Cu;
            goto label_1a2c3c;
        }
    }
    ctx->pc = 0x1A2C30u;
label_1a2c30:
    // 0x1a2c30: 0x36420004  ori         $v0, $s2, 0x4
    ctx->pc = 0x1a2c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)4);
label_1a2c34:
    // 0x1a2c34: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1a2c34u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a2c38:
    // 0x1a2c38: 0x30620020  andi        $v0, $v1, 0x20
    ctx->pc = 0x1a2c38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_1a2c3c:
    // 0x1a2c3c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1a2c40:
    if (ctx->pc == 0x1A2C40u) {
        ctx->pc = 0x1A2C40u;
            // 0x1a2c40: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->pc = 0x1A2C44u;
        goto label_1a2c44;
    }
    ctx->pc = 0x1A2C3Cu;
    {
        const bool branch_taken_0x1a2c3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a2c3c) {
            ctx->pc = 0x1A2C40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C3Cu;
            // 0x1a2c40: 0x112080  sll         $a0, $s1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A2C50u;
            goto label_1a2c50;
        }
    }
    ctx->pc = 0x1A2C44u;
label_1a2c44:
    // 0x1a2c44: 0x36420008  ori         $v0, $s2, 0x8
    ctx->pc = 0x1a2c44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) | (uint64_t)(uint16_t)8);
label_1a2c48:
    // 0x1a2c48: 0x3052ffff  andi        $s2, $v0, 0xFFFF
    ctx->pc = 0x1a2c48u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_1a2c4c:
    // 0x1a2c4c: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x1a2c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_1a2c50:
    // 0x1a2c50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x1a2c50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
label_1a2c54:
    // 0x1a2c54: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x1a2c54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
label_1a2c58:
    // 0x1a2c58: 0x2463e8c0  addiu       $v1, $v1, -0x1740
    ctx->pc = 0x1a2c58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961344));
label_1a2c5c:
    // 0x1a2c5c: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x1a2c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
label_1a2c60:
    // 0x1a2c60: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x1a2c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1a2c64:
    // 0x1a2c64: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1a2c64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_1a2c68:
    // 0x1a2c68: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x1a2c68u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1a2c6c:
    // 0x1a2c6c: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x1a2c6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_1a2c70:
    // 0x1a2c70: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x1a2c70u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_1a2c74:
    // 0x1a2c74: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x1a2c74u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_1a2c78:
    // 0x1a2c78: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x1a2c78u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_1a2c7c:
    // 0x1a2c7c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x1a2c7cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_1a2c80:
    // 0x1a2c80: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x1a2c80u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_1a2c84:
    // 0x1a2c84: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1a2c84u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_1a2c88:
    // 0x1a2c88: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1a2c88u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_1a2c8c:
    // 0x1a2c8c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1a2c8cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_1a2c90:
    // 0x1a2c90: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1a2c90u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1a2c94:
    // 0x1a2c94: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1a2c94u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_1a2c98:
    // 0x1a2c98: 0x3e00008  jr          $ra
label_1a2c9c:
    if (ctx->pc == 0x1A2C9Cu) {
        ctx->pc = 0x1A2C9Cu;
            // 0x1a2c9c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->pc = 0x1A2CA0u;
        goto label_fallthrough_0x1a2c98;
    }
    ctx->pc = 0x1A2C98u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A2C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A2C98u;
            // 0x1a2c9c: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1a2c98:
    ctx->pc = 0x1A2CA0u;
    ctx->pc = 0x1a2ca0u;
}
