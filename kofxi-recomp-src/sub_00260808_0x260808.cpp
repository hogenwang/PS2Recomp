#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00260808
// Address: 0x260808 - 0x260d88
void sub_00260808_0x260808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00260808_0x260808");
#endif

    switch (ctx->pc) {
        case 0x260808u: goto label_260808;
        case 0x26080cu: goto label_26080c;
        case 0x260810u: goto label_260810;
        case 0x260814u: goto label_260814;
        case 0x260818u: goto label_260818;
        case 0x26081cu: goto label_26081c;
        case 0x260820u: goto label_260820;
        case 0x260824u: goto label_260824;
        case 0x260828u: goto label_260828;
        case 0x26082cu: goto label_26082c;
        case 0x260830u: goto label_260830;
        case 0x260834u: goto label_260834;
        case 0x260838u: goto label_260838;
        case 0x26083cu: goto label_26083c;
        case 0x260840u: goto label_260840;
        case 0x260844u: goto label_260844;
        case 0x260848u: goto label_260848;
        case 0x26084cu: goto label_26084c;
        case 0x260850u: goto label_260850;
        case 0x260854u: goto label_260854;
        case 0x260858u: goto label_260858;
        case 0x26085cu: goto label_26085c;
        case 0x260860u: goto label_260860;
        case 0x260864u: goto label_260864;
        case 0x260868u: goto label_260868;
        case 0x26086cu: goto label_26086c;
        case 0x260870u: goto label_260870;
        case 0x260874u: goto label_260874;
        case 0x260878u: goto label_260878;
        case 0x26087cu: goto label_26087c;
        case 0x260880u: goto label_260880;
        case 0x260884u: goto label_260884;
        case 0x260888u: goto label_260888;
        case 0x26088cu: goto label_26088c;
        case 0x260890u: goto label_260890;
        case 0x260894u: goto label_260894;
        case 0x260898u: goto label_260898;
        case 0x26089cu: goto label_26089c;
        case 0x2608a0u: goto label_2608a0;
        case 0x2608a4u: goto label_2608a4;
        case 0x2608a8u: goto label_2608a8;
        case 0x2608acu: goto label_2608ac;
        case 0x2608b0u: goto label_2608b0;
        case 0x2608b4u: goto label_2608b4;
        case 0x2608b8u: goto label_2608b8;
        case 0x2608bcu: goto label_2608bc;
        case 0x2608c0u: goto label_2608c0;
        case 0x2608c4u: goto label_2608c4;
        case 0x2608c8u: goto label_2608c8;
        case 0x2608ccu: goto label_2608cc;
        case 0x2608d0u: goto label_2608d0;
        case 0x2608d4u: goto label_2608d4;
        case 0x2608d8u: goto label_2608d8;
        case 0x2608dcu: goto label_2608dc;
        case 0x2608e0u: goto label_2608e0;
        case 0x2608e4u: goto label_2608e4;
        case 0x2608e8u: goto label_2608e8;
        case 0x2608ecu: goto label_2608ec;
        case 0x2608f0u: goto label_2608f0;
        case 0x2608f4u: goto label_2608f4;
        case 0x2608f8u: goto label_2608f8;
        case 0x2608fcu: goto label_2608fc;
        case 0x260900u: goto label_260900;
        case 0x260904u: goto label_260904;
        case 0x260908u: goto label_260908;
        case 0x26090cu: goto label_26090c;
        case 0x260910u: goto label_260910;
        case 0x260914u: goto label_260914;
        case 0x260918u: goto label_260918;
        case 0x26091cu: goto label_26091c;
        case 0x260920u: goto label_260920;
        case 0x260924u: goto label_260924;
        case 0x260928u: goto label_260928;
        case 0x26092cu: goto label_26092c;
        case 0x260930u: goto label_260930;
        case 0x260934u: goto label_260934;
        case 0x260938u: goto label_260938;
        case 0x26093cu: goto label_26093c;
        case 0x260940u: goto label_260940;
        case 0x260944u: goto label_260944;
        case 0x260948u: goto label_260948;
        case 0x26094cu: goto label_26094c;
        case 0x260950u: goto label_260950;
        case 0x260954u: goto label_260954;
        case 0x260958u: goto label_260958;
        case 0x26095cu: goto label_26095c;
        case 0x260960u: goto label_260960;
        case 0x260964u: goto label_260964;
        case 0x260968u: goto label_260968;
        case 0x26096cu: goto label_26096c;
        case 0x260970u: goto label_260970;
        case 0x260974u: goto label_260974;
        case 0x260978u: goto label_260978;
        case 0x26097cu: goto label_26097c;
        case 0x260980u: goto label_260980;
        case 0x260984u: goto label_260984;
        case 0x260988u: goto label_260988;
        case 0x26098cu: goto label_26098c;
        case 0x260990u: goto label_260990;
        case 0x260994u: goto label_260994;
        case 0x260998u: goto label_260998;
        case 0x26099cu: goto label_26099c;
        case 0x2609a0u: goto label_2609a0;
        case 0x2609a4u: goto label_2609a4;
        case 0x2609a8u: goto label_2609a8;
        case 0x2609acu: goto label_2609ac;
        case 0x2609b0u: goto label_2609b0;
        case 0x2609b4u: goto label_2609b4;
        case 0x2609b8u: goto label_2609b8;
        case 0x2609bcu: goto label_2609bc;
        case 0x2609c0u: goto label_2609c0;
        case 0x2609c4u: goto label_2609c4;
        case 0x2609c8u: goto label_2609c8;
        case 0x2609ccu: goto label_2609cc;
        case 0x2609d0u: goto label_2609d0;
        case 0x2609d4u: goto label_2609d4;
        case 0x2609d8u: goto label_2609d8;
        case 0x2609dcu: goto label_2609dc;
        case 0x2609e0u: goto label_2609e0;
        case 0x2609e4u: goto label_2609e4;
        case 0x2609e8u: goto label_2609e8;
        case 0x2609ecu: goto label_2609ec;
        case 0x2609f0u: goto label_2609f0;
        case 0x2609f4u: goto label_2609f4;
        case 0x2609f8u: goto label_2609f8;
        case 0x2609fcu: goto label_2609fc;
        case 0x260a00u: goto label_260a00;
        case 0x260a04u: goto label_260a04;
        case 0x260a08u: goto label_260a08;
        case 0x260a0cu: goto label_260a0c;
        case 0x260a10u: goto label_260a10;
        case 0x260a14u: goto label_260a14;
        case 0x260a18u: goto label_260a18;
        case 0x260a1cu: goto label_260a1c;
        case 0x260a20u: goto label_260a20;
        case 0x260a24u: goto label_260a24;
        case 0x260a28u: goto label_260a28;
        case 0x260a2cu: goto label_260a2c;
        case 0x260a30u: goto label_260a30;
        case 0x260a34u: goto label_260a34;
        case 0x260a38u: goto label_260a38;
        case 0x260a3cu: goto label_260a3c;
        case 0x260a40u: goto label_260a40;
        case 0x260a44u: goto label_260a44;
        case 0x260a48u: goto label_260a48;
        case 0x260a4cu: goto label_260a4c;
        case 0x260a50u: goto label_260a50;
        case 0x260a54u: goto label_260a54;
        case 0x260a58u: goto label_260a58;
        case 0x260a5cu: goto label_260a5c;
        case 0x260a60u: goto label_260a60;
        case 0x260a64u: goto label_260a64;
        case 0x260a68u: goto label_260a68;
        case 0x260a6cu: goto label_260a6c;
        case 0x260a70u: goto label_260a70;
        case 0x260a74u: goto label_260a74;
        case 0x260a78u: goto label_260a78;
        case 0x260a7cu: goto label_260a7c;
        case 0x260a80u: goto label_260a80;
        case 0x260a84u: goto label_260a84;
        case 0x260a88u: goto label_260a88;
        case 0x260a8cu: goto label_260a8c;
        case 0x260a90u: goto label_260a90;
        case 0x260a94u: goto label_260a94;
        case 0x260a98u: goto label_260a98;
        case 0x260a9cu: goto label_260a9c;
        case 0x260aa0u: goto label_260aa0;
        case 0x260aa4u: goto label_260aa4;
        case 0x260aa8u: goto label_260aa8;
        case 0x260aacu: goto label_260aac;
        case 0x260ab0u: goto label_260ab0;
        case 0x260ab4u: goto label_260ab4;
        case 0x260ab8u: goto label_260ab8;
        case 0x260abcu: goto label_260abc;
        case 0x260ac0u: goto label_260ac0;
        case 0x260ac4u: goto label_260ac4;
        case 0x260ac8u: goto label_260ac8;
        case 0x260accu: goto label_260acc;
        case 0x260ad0u: goto label_260ad0;
        case 0x260ad4u: goto label_260ad4;
        case 0x260ad8u: goto label_260ad8;
        case 0x260adcu: goto label_260adc;
        case 0x260ae0u: goto label_260ae0;
        case 0x260ae4u: goto label_260ae4;
        case 0x260ae8u: goto label_260ae8;
        case 0x260aecu: goto label_260aec;
        case 0x260af0u: goto label_260af0;
        case 0x260af4u: goto label_260af4;
        case 0x260af8u: goto label_260af8;
        case 0x260afcu: goto label_260afc;
        case 0x260b00u: goto label_260b00;
        case 0x260b04u: goto label_260b04;
        case 0x260b08u: goto label_260b08;
        case 0x260b0cu: goto label_260b0c;
        case 0x260b10u: goto label_260b10;
        case 0x260b14u: goto label_260b14;
        case 0x260b18u: goto label_260b18;
        case 0x260b1cu: goto label_260b1c;
        case 0x260b20u: goto label_260b20;
        case 0x260b24u: goto label_260b24;
        case 0x260b28u: goto label_260b28;
        case 0x260b2cu: goto label_260b2c;
        case 0x260b30u: goto label_260b30;
        case 0x260b34u: goto label_260b34;
        case 0x260b38u: goto label_260b38;
        case 0x260b3cu: goto label_260b3c;
        case 0x260b40u: goto label_260b40;
        case 0x260b44u: goto label_260b44;
        case 0x260b48u: goto label_260b48;
        case 0x260b4cu: goto label_260b4c;
        case 0x260b50u: goto label_260b50;
        case 0x260b54u: goto label_260b54;
        case 0x260b58u: goto label_260b58;
        case 0x260b5cu: goto label_260b5c;
        case 0x260b60u: goto label_260b60;
        case 0x260b64u: goto label_260b64;
        case 0x260b68u: goto label_260b68;
        case 0x260b6cu: goto label_260b6c;
        case 0x260b70u: goto label_260b70;
        case 0x260b74u: goto label_260b74;
        case 0x260b78u: goto label_260b78;
        case 0x260b7cu: goto label_260b7c;
        case 0x260b80u: goto label_260b80;
        case 0x260b84u: goto label_260b84;
        case 0x260b88u: goto label_260b88;
        case 0x260b8cu: goto label_260b8c;
        case 0x260b90u: goto label_260b90;
        case 0x260b94u: goto label_260b94;
        case 0x260b98u: goto label_260b98;
        case 0x260b9cu: goto label_260b9c;
        case 0x260ba0u: goto label_260ba0;
        case 0x260ba4u: goto label_260ba4;
        case 0x260ba8u: goto label_260ba8;
        case 0x260bacu: goto label_260bac;
        case 0x260bb0u: goto label_260bb0;
        case 0x260bb4u: goto label_260bb4;
        case 0x260bb8u: goto label_260bb8;
        case 0x260bbcu: goto label_260bbc;
        case 0x260bc0u: goto label_260bc0;
        case 0x260bc4u: goto label_260bc4;
        case 0x260bc8u: goto label_260bc8;
        case 0x260bccu: goto label_260bcc;
        case 0x260bd0u: goto label_260bd0;
        case 0x260bd4u: goto label_260bd4;
        case 0x260bd8u: goto label_260bd8;
        case 0x260bdcu: goto label_260bdc;
        case 0x260be0u: goto label_260be0;
        case 0x260be4u: goto label_260be4;
        case 0x260be8u: goto label_260be8;
        case 0x260becu: goto label_260bec;
        case 0x260bf0u: goto label_260bf0;
        case 0x260bf4u: goto label_260bf4;
        case 0x260bf8u: goto label_260bf8;
        case 0x260bfcu: goto label_260bfc;
        case 0x260c00u: goto label_260c00;
        case 0x260c04u: goto label_260c04;
        case 0x260c08u: goto label_260c08;
        case 0x260c0cu: goto label_260c0c;
        case 0x260c10u: goto label_260c10;
        case 0x260c14u: goto label_260c14;
        case 0x260c18u: goto label_260c18;
        case 0x260c1cu: goto label_260c1c;
        case 0x260c20u: goto label_260c20;
        case 0x260c24u: goto label_260c24;
        case 0x260c28u: goto label_260c28;
        case 0x260c2cu: goto label_260c2c;
        case 0x260c30u: goto label_260c30;
        case 0x260c34u: goto label_260c34;
        case 0x260c38u: goto label_260c38;
        case 0x260c3cu: goto label_260c3c;
        case 0x260c40u: goto label_260c40;
        case 0x260c44u: goto label_260c44;
        case 0x260c48u: goto label_260c48;
        case 0x260c4cu: goto label_260c4c;
        case 0x260c50u: goto label_260c50;
        case 0x260c54u: goto label_260c54;
        case 0x260c58u: goto label_260c58;
        case 0x260c5cu: goto label_260c5c;
        case 0x260c60u: goto label_260c60;
        case 0x260c64u: goto label_260c64;
        case 0x260c68u: goto label_260c68;
        case 0x260c6cu: goto label_260c6c;
        case 0x260c70u: goto label_260c70;
        case 0x260c74u: goto label_260c74;
        case 0x260c78u: goto label_260c78;
        case 0x260c7cu: goto label_260c7c;
        case 0x260c80u: goto label_260c80;
        case 0x260c84u: goto label_260c84;
        case 0x260c88u: goto label_260c88;
        case 0x260c8cu: goto label_260c8c;
        case 0x260c90u: goto label_260c90;
        case 0x260c94u: goto label_260c94;
        case 0x260c98u: goto label_260c98;
        case 0x260c9cu: goto label_260c9c;
        case 0x260ca0u: goto label_260ca0;
        case 0x260ca4u: goto label_260ca4;
        case 0x260ca8u: goto label_260ca8;
        case 0x260cacu: goto label_260cac;
        case 0x260cb0u: goto label_260cb0;
        case 0x260cb4u: goto label_260cb4;
        case 0x260cb8u: goto label_260cb8;
        case 0x260cbcu: goto label_260cbc;
        case 0x260cc0u: goto label_260cc0;
        case 0x260cc4u: goto label_260cc4;
        case 0x260cc8u: goto label_260cc8;
        case 0x260cccu: goto label_260ccc;
        case 0x260cd0u: goto label_260cd0;
        case 0x260cd4u: goto label_260cd4;
        case 0x260cd8u: goto label_260cd8;
        case 0x260cdcu: goto label_260cdc;
        case 0x260ce0u: goto label_260ce0;
        case 0x260ce4u: goto label_260ce4;
        case 0x260ce8u: goto label_260ce8;
        case 0x260cecu: goto label_260cec;
        case 0x260cf0u: goto label_260cf0;
        case 0x260cf4u: goto label_260cf4;
        case 0x260cf8u: goto label_260cf8;
        case 0x260cfcu: goto label_260cfc;
        case 0x260d00u: goto label_260d00;
        case 0x260d04u: goto label_260d04;
        case 0x260d08u: goto label_260d08;
        case 0x260d0cu: goto label_260d0c;
        case 0x260d10u: goto label_260d10;
        case 0x260d14u: goto label_260d14;
        case 0x260d18u: goto label_260d18;
        case 0x260d1cu: goto label_260d1c;
        case 0x260d20u: goto label_260d20;
        case 0x260d24u: goto label_260d24;
        case 0x260d28u: goto label_260d28;
        case 0x260d2cu: goto label_260d2c;
        case 0x260d30u: goto label_260d30;
        case 0x260d34u: goto label_260d34;
        case 0x260d38u: goto label_260d38;
        case 0x260d3cu: goto label_260d3c;
        case 0x260d40u: goto label_260d40;
        case 0x260d44u: goto label_260d44;
        case 0x260d48u: goto label_260d48;
        case 0x260d4cu: goto label_260d4c;
        case 0x260d50u: goto label_260d50;
        case 0x260d54u: goto label_260d54;
        case 0x260d58u: goto label_260d58;
        case 0x260d5cu: goto label_260d5c;
        case 0x260d60u: goto label_260d60;
        case 0x260d64u: goto label_260d64;
        case 0x260d68u: goto label_260d68;
        case 0x260d6cu: goto label_260d6c;
        case 0x260d70u: goto label_260d70;
        case 0x260d74u: goto label_260d74;
        case 0x260d78u: goto label_260d78;
        case 0x260d7cu: goto label_260d7c;
        case 0x260d80u: goto label_260d80;
        case 0x260d84u: goto label_260d84;
        default: break;
    }

    ctx->pc = 0x260808u;

label_260808:
    // 0x260808: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x260808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_26080c:
    // 0x26080c: 0xffb60090  sd          $s6, 0x90($sp)
    ctx->pc = 0x26080cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 22));
label_260810:
    // 0x260810: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x260810u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_260814:
    // 0x260814: 0xe0b02d  daddu       $s6, $a3, $zero
    ctx->pc = 0x260814u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_260818:
    // 0x260818: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x260818u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_26081c:
    // 0x26081c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x26081cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260820:
    // 0x260820: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x260820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_260824:
    // 0x260824: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x260824u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_260828:
    // 0x260828: 0xffb700a0  sd          $s7, 0xA0($sp)
    ctx->pc = 0x260828u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 23));
label_26082c:
    // 0x26082c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x26082cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_260830:
    // 0x260830: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x260830u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_260834:
    // 0x260834: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x260834u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_260838:
    // 0x260838: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x260838u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26083c:
    // 0x26083c: 0xffbf00b0  sd          $ra, 0xB0($sp)
    ctx->pc = 0x26083cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 31));
label_260840:
    // 0x260840: 0xc08c682  jal         func_231A08
label_260844:
    if (ctx->pc == 0x260844u) {
        ctx->pc = 0x260844u;
            // 0x260844: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->pc = 0x260848u;
        goto label_260848;
    }
    ctx->pc = 0x260840u;
    SET_GPR_U32(ctx, 31, 0x260848u);
    ctx->pc = 0x260844u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260840u;
            // 0x260844: 0xffb00030  sd          $s0, 0x30($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260848u; }
        if (ctx->pc != 0x260848u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260848u; }
        if (ctx->pc != 0x260848u) { return; }
    }
    ctx->pc = 0x260848u;
label_260848:
    // 0x260848: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x260848u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_26084c:
    // 0x26084c: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x26084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_260850:
    // 0x260850: 0x8c51fcd0  lw          $s1, -0x330($v0)
    ctx->pc = 0x260850u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
label_260854:
    // 0x260854: 0x0  nop
    ctx->pc = 0x260854u;
    // NOP
label_260858:
    // 0x260858: 0x1220000b  beqz        $s1, . + 4 + (0xB << 2)
label_26085c:
    if (ctx->pc == 0x26085Cu) {
        ctx->pc = 0x26085Cu;
            // 0x26085c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260860u;
        goto label_260860;
    }
    ctx->pc = 0x260858u;
    {
        const bool branch_taken_0x260858 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x26085Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260858u;
            // 0x26085c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260858) {
            ctx->pc = 0x260888u;
            goto label_260888;
        }
    }
    ctx->pc = 0x260860u;
label_260860:
    // 0x260860: 0x26250014  addiu       $a1, $s1, 0x14
    ctx->pc = 0x260860u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
label_260864:
    // 0x260864: 0xc04a8f8  jal         func_12A3E0
label_260868:
    if (ctx->pc == 0x260868u) {
        ctx->pc = 0x260868u;
            // 0x260868: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x26086Cu;
        goto label_26086c;
    }
    ctx->pc = 0x260864u;
    SET_GPR_U32(ctx, 31, 0x26086Cu);
    ctx->pc = 0x260868u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260864u;
            // 0x260868: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26086Cu; }
        if (ctx->pc != 0x26086Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x26086Cu; }
        if (ctx->pc != 0x26086Cu) { return; }
    }
    ctx->pc = 0x26086Cu;
label_26086c:
    // 0x26086c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_260870:
    if (ctx->pc == 0x260870u) {
        ctx->pc = 0x260870u;
            // 0x260870: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->pc = 0x260874u;
        goto label_260874;
    }
    ctx->pc = 0x26086Cu;
    {
        const bool branch_taken_0x26086c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26086c) {
            ctx->pc = 0x260870u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26086Cu;
            // 0x260870: 0x8e310004  lw          $s1, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260858u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_260858;
        }
    }
    ctx->pc = 0x260874u;
label_260874:
    // 0x260874: 0x8e30000c  lw          $s0, 0xC($s1)
    ctx->pc = 0x260874u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_260878:
    // 0x260878: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
label_26087c:
    if (ctx->pc == 0x26087Cu) {
        ctx->pc = 0x26087Cu;
            // 0x26087c: 0x2665ffff  addiu       $a1, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x260880u;
        goto label_260880;
    }
    ctx->pc = 0x260878u;
    {
        const bool branch_taken_0x260878 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x26087Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260878u;
            // 0x26087c: 0x2665ffff  addiu       $a1, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260878) {
            ctx->pc = 0x2608C8u;
            goto label_2608c8;
        }
    }
    ctx->pc = 0x260880u;
label_260880:
    // 0x260880: 0x10000003  b           . + 4 + (0x3 << 2)
label_260884:
    if (ctx->pc == 0x260884u) {
        ctx->pc = 0x260884u;
            // 0x260884: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x260888u;
        goto label_260888;
    }
    ctx->pc = 0x260880u;
    {
        const bool branch_taken_0x260880 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260884u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260880u;
            // 0x260884: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260880) {
            ctx->pc = 0x260890u;
            goto label_260890;
        }
    }
    ctx->pc = 0x260888u;
label_260888:
    // 0x260888: 0x100000f8  b           . + 4 + (0xF8 << 2)
label_26088c:
    if (ctx->pc == 0x26088Cu) {
        ctx->pc = 0x26088Cu;
            // 0x26088c: 0x2415ffe4  addiu       $s5, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->pc = 0x260890u;
        goto label_260890;
    }
    ctx->pc = 0x260888u;
    {
        const bool branch_taken_0x260888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26088Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260888u;
            // 0x26088c: 0x2415ffe4  addiu       $s5, $zero, -0x1C (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260888) {
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260890u;
label_260890:
    // 0x260890: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x260890u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_260894:
    // 0x260894: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x260894u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_260898:
    // 0x260898: 0x1064000b  beq         $v1, $a0, . + 4 + (0xB << 2)
label_26089c:
    if (ctx->pc == 0x26089Cu) {
        ctx->pc = 0x26089Cu;
            // 0x26089c: 0x2665ffff  addiu       $a1, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->pc = 0x2608A0u;
        goto label_2608a0;
    }
    ctx->pc = 0x260898u;
    {
        const bool branch_taken_0x260898 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        ctx->pc = 0x26089Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260898u;
            // 0x26089c: 0x2665ffff  addiu       $a1, $s3, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260898) {
            ctx->pc = 0x2608C8u;
            goto label_2608c8;
        }
    }
    ctx->pc = 0x2608A0u;
label_2608a0:
    // 0x2608a0: 0x8e100010  lw          $s0, 0x10($s0)
    ctx->pc = 0x2608a0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_2608a4:
    // 0x2608a4: 0x0  nop
    ctx->pc = 0x2608a4u;
    // NOP
label_2608a8:
    // 0x2608a8: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_2608ac:
    if (ctx->pc == 0x2608ACu) {
        ctx->pc = 0x2608ACu;
            // 0x2608ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2608B0u;
        goto label_2608b0;
    }
    ctx->pc = 0x2608A8u;
    {
        const bool branch_taken_0x2608a8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2608ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2608A8u;
            // 0x2608ac: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608a8) {
            ctx->pc = 0x2608C8u;
            goto label_2608c8;
        }
    }
    ctx->pc = 0x2608B0u;
label_2608b0:
    // 0x2608b0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2608b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2608b4:
    // 0x2608b4: 0x90430001  lbu         $v1, 0x1($v0)
    ctx->pc = 0x2608b4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_2608b8:
    // 0x2608b8: 0x5464fffb  bnel        $v1, $a0, . + 4 + (-0x5 << 2)
label_2608bc:
    if (ctx->pc == 0x2608BCu) {
        ctx->pc = 0x2608BCu;
            // 0x2608bc: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->pc = 0x2608C0u;
        goto label_2608c0;
    }
    ctx->pc = 0x2608B8u;
    {
        const bool branch_taken_0x2608b8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x2608b8) {
            ctx->pc = 0x2608BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2608B8u;
            // 0x2608bc: 0x8e100010  lw          $s0, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2608A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2608a8;
        }
    }
    ctx->pc = 0x2608C0u;
label_2608c0:
    // 0x2608c0: 0x10000002  b           . + 4 + (0x2 << 2)
label_2608c4:
    if (ctx->pc == 0x2608C4u) {
        ctx->pc = 0x2608C4u;
            // 0x2608c4: 0x2ca2000a  sltiu       $v0, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->pc = 0x2608C8u;
        goto label_2608c8;
    }
    ctx->pc = 0x2608C0u;
    {
        const bool branch_taken_0x2608c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2608C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2608C0u;
            // 0x2608c4: 0x2ca2000a  sltiu       $v0, $a1, 0xA (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608c0) {
            ctx->pc = 0x2608CCu;
            goto label_2608cc;
        }
    }
    ctx->pc = 0x2608C8u;
label_2608c8:
    // 0x2608c8: 0x2ca2000a  sltiu       $v0, $a1, 0xA
    ctx->pc = 0x2608c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
label_2608cc:
    // 0x2608cc: 0x104000e4  beqz        $v0, . + 4 + (0xE4 << 2)
label_2608d0:
    if (ctx->pc == 0x2608D0u) {
        ctx->pc = 0x2608D0u;
            // 0x2608d0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->pc = 0x2608D4u;
        goto label_2608d4;
    }
    ctx->pc = 0x2608CCu;
    {
        const bool branch_taken_0x2608cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2608D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2608CCu;
            // 0x2608d0: 0x3c02003f  lui         $v0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608cc) {
            ctx->pc = 0x260C60u;
            goto label_260c60;
        }
    }
    ctx->pc = 0x2608D4u;
label_2608d4:
    // 0x2608d4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x2608d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_2608d8:
    // 0x2608d8: 0x24427210  addiu       $v0, $v0, 0x7210
    ctx->pc = 0x2608d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 29200));
label_2608dc:
    // 0x2608dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2608dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_2608e0:
    // 0x2608e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2608e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2608e4:
    // 0x2608e4: 0x800008  jr          $a0
label_2608e8:
    if (ctx->pc == 0x2608E8u) {
        ctx->pc = 0x2608ECu;
        goto label_2608ec;
    }
    ctx->pc = 0x2608E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2608ECu: goto label_2608ec;
            case 0x26091Cu: goto label_26091c;
            case 0x260960u: goto label_260960;
            case 0x2609E4u: goto label_2609e4;
            case 0x260A0Cu: goto label_260a0c;
            case 0x260A60u: goto label_260a60;
            case 0x260B80u: goto label_260b80;
            case 0x260BA4u: goto label_260ba4;
            case 0x260BD0u: goto label_260bd0;
            case 0x260BFCu: goto label_260bfc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x2608ECu;
label_2608ec:
    // 0x2608ec: 0x124000de  beqz        $s2, . + 4 + (0xDE << 2)
label_2608f0:
    if (ctx->pc == 0x2608F0u) {
        ctx->pc = 0x2608F0u;
            // 0x2608f0: 0x24130100  addiu       $s3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x2608F4u;
        goto label_2608f4;
    }
    ctx->pc = 0x2608ECu;
    {
        const bool branch_taken_0x2608ec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2608F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2608ECu;
            // 0x2608f0: 0x24130100  addiu       $s3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2608ec) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x2608F4u;
label_2608f4:
    // 0x2608f4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2608f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2608f8:
    // 0x2608f8: 0x28420100  slti        $v0, $v0, 0x100
    ctx->pc = 0x2608f8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_2608fc:
    // 0x2608fc: 0x544000db  bnel        $v0, $zero, . + 4 + (0xDB << 2)
label_260900:
    if (ctx->pc == 0x260900u) {
        ctx->pc = 0x260900u;
            // 0x260900: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->pc = 0x260904u;
        goto label_260904;
    }
    ctx->pc = 0x2608FCu;
    {
        const bool branch_taken_0x2608fc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2608fc) {
            ctx->pc = 0x260900u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2608FCu;
            // 0x260900: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260904u;
label_260904:
    // 0x260904: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260908:
    // 0x260908: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x260908u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26090c:
    // 0x26090c: 0x24060100  addiu       $a2, $zero, 0x100
    ctx->pc = 0x26090cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_260910:
    // 0x260910: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x260910u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260914:
    // 0x260914: 0x1000000c  b           . + 4 + (0xC << 2)
label_260918:
    if (ctx->pc == 0x260918u) {
        ctx->pc = 0x260918u;
            // 0x260918: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x26091Cu;
        goto label_26091c;
    }
    ctx->pc = 0x260914u;
    {
        const bool branch_taken_0x260914 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260918u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260914u;
            // 0x260918: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260914) {
            ctx->pc = 0x260948u;
            goto label_260948;
        }
    }
    ctx->pc = 0x26091Cu;
label_26091c:
    // 0x26091c: 0x124000d2  beqz        $s2, . + 4 + (0xD2 << 2)
label_260920:
    if (ctx->pc == 0x260920u) {
        ctx->pc = 0x260920u;
            // 0x260920: 0x24130100  addiu       $s3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x260924u;
        goto label_260924;
    }
    ctx->pc = 0x26091Cu;
    {
        const bool branch_taken_0x26091c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260920u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x26091Cu;
            // 0x260920: 0x24130100  addiu       $s3, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x26091c) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260924u;
label_260924:
    // 0x260924: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x260924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_260928:
    // 0x260928: 0x28420100  slti        $v0, $v0, 0x100
    ctx->pc = 0x260928u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)256) ? 1 : 0);
label_26092c:
    // 0x26092c: 0x544000cf  bnel        $v0, $zero, . + 4 + (0xCF << 2)
label_260930:
    if (ctx->pc == 0x260930u) {
        ctx->pc = 0x260930u;
            // 0x260930: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->pc = 0x260934u;
        goto label_260934;
    }
    ctx->pc = 0x26092Cu;
    {
        const bool branch_taken_0x26092c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26092c) {
            ctx->pc = 0x260930u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x26092Cu;
            // 0x260930: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260934u;
label_260934:
    // 0x260934: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x260934u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260938:
    // 0x260938: 0x240382d  daddu       $a3, $s2, $zero
    ctx->pc = 0x260938u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_26093c:
    // 0x26093c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x26093cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260940:
    // 0x260940: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x260940u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260944:
    // 0x260944: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x260944u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_260948:
    // 0x260948: 0xc0989c6  jal         func_262718
label_26094c:
    if (ctx->pc == 0x26094Cu) {
        ctx->pc = 0x260950u;
        goto label_260950;
    }
    ctx->pc = 0x260948u;
    SET_GPR_U32(ctx, 31, 0x260950u);
    ctx->pc = 0x262718u;
    if (runtime->hasFunction(0x262718u)) {
        auto targetFn = runtime->lookupFunction(0x262718u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260950u; }
        if (ctx->pc != 0x260950u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00262718_0x262718(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260950u; }
        if (ctx->pc != 0x260950u) { return; }
    }
    ctx->pc = 0x260950u;
label_260950:
    // 0x260950: 0x504000c6  beql        $v0, $zero, . + 4 + (0xC6 << 2)
label_260954:
    if (ctx->pc == 0x260954u) {
        ctx->pc = 0x260954u;
            // 0x260954: 0xaed30000  sw          $s3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x260958u;
        goto label_260958;
    }
    ctx->pc = 0x260950u;
    {
        const bool branch_taken_0x260950 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260950) {
            ctx->pc = 0x260954u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260950u;
            // 0x260954: 0xaed30000  sw          $s3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260958u;
label_260958:
    // 0x260958: 0x100000c4  b           . + 4 + (0xC4 << 2)
label_26095c:
    if (ctx->pc == 0x26095Cu) {
        ctx->pc = 0x26095Cu;
            // 0x26095c: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->pc = 0x260960u;
        goto label_260960;
    }
    ctx->pc = 0x260958u;
    {
        const bool branch_taken_0x260958 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26095Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260958u;
            // 0x26095c: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260958) {
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260960u;
label_260960:
    // 0x260960: 0x124000c1  beqz        $s2, . + 4 + (0xC1 << 2)
label_260964:
    if (ctx->pc == 0x260964u) {
        ctx->pc = 0x260964u;
            // 0x260964: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x260968u;
        goto label_260968;
    }
    ctx->pc = 0x260960u;
    {
        const bool branch_taken_0x260960 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260960u;
            // 0x260964: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260960) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260968u;
label_260968:
    // 0x260968: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x260968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_26096c:
    // 0x26096c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x26096cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_260970:
    // 0x260970: 0x544000be  bnel        $v0, $zero, . + 4 + (0xBE << 2)
label_260974:
    if (ctx->pc == 0x260974u) {
        ctx->pc = 0x260974u;
            // 0x260974: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->pc = 0x260978u;
        goto label_260978;
    }
    ctx->pc = 0x260970u;
    {
        const bool branch_taken_0x260970 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260970) {
            ctx->pc = 0x260974u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260970u;
            // 0x260974: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260978u;
label_260978:
    // 0x260978: 0x92240038  lbu         $a0, 0x38($s1)
    ctx->pc = 0x260978u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_26097c:
    // 0x26097c: 0x24020017  addiu       $v0, $zero, 0x17
    ctx->pc = 0x26097cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
label_260980:
    // 0x260980: 0x10820013  beq         $a0, $v0, . + 4 + (0x13 << 2)
label_260984:
    if (ctx->pc == 0x260984u) {
        ctx->pc = 0x260984u;
            // 0x260984: 0x28820018  slti        $v0, $a0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->pc = 0x260988u;
        goto label_260988;
    }
    ctx->pc = 0x260980u;
    {
        const bool branch_taken_0x260980 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x260984u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260980u;
            // 0x260984: 0x28820018  slti        $v0, $a0, 0x18 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)24) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x260980) {
            ctx->pc = 0x2609D0u;
            goto label_2609d0;
        }
    }
    ctx->pc = 0x260988u;
label_260988:
    // 0x260988: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_26098c:
    if (ctx->pc == 0x26098Cu) {
        ctx->pc = 0x26098Cu;
            // 0x26098c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x260990u;
        goto label_260990;
    }
    ctx->pc = 0x260988u;
    {
        const bool branch_taken_0x260988 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x26098Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260988u;
            // 0x26098c: 0x24020006  addiu       $v0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260988) {
            ctx->pc = 0x2609A0u;
            goto label_2609a0;
        }
    }
    ctx->pc = 0x260990u;
label_260990:
    // 0x260990: 0x1082000d  beq         $a0, $v0, . + 4 + (0xD << 2)
label_260994:
    if (ctx->pc == 0x260994u) {
        ctx->pc = 0x260994u;
            // 0x260994: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x260998u;
        goto label_260998;
    }
    ctx->pc = 0x260990u;
    {
        const bool branch_taken_0x260990 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x260994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260990u;
            // 0x260994: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260990) {
            ctx->pc = 0x2609C8u;
            goto label_2609c8;
        }
    }
    ctx->pc = 0x260998u;
label_260998:
    // 0x260998: 0x100000b3  b           . + 4 + (0xB3 << 2)
label_26099c:
    if (ctx->pc == 0x26099Cu) {
        ctx->pc = 0x26099Cu;
            // 0x26099c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2609A0u;
        goto label_2609a0;
    }
    ctx->pc = 0x260998u;
    {
        const bool branch_taken_0x260998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x26099Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260998u;
            // 0x26099c: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260998) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x2609A0u;
label_2609a0:
    // 0x2609a0: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x2609a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_2609a4:
    // 0x2609a4: 0x10820005  beq         $a0, $v0, . + 4 + (0x5 << 2)
label_2609a8:
    if (ctx->pc == 0x2609A8u) {
        ctx->pc = 0x2609A8u;
            // 0x2609a8: 0x240200f4  addiu       $v0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->pc = 0x2609ACu;
        goto label_2609ac;
    }
    ctx->pc = 0x2609A4u;
    {
        const bool branch_taken_0x2609a4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x2609A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2609A4u;
            // 0x2609a8: 0x240200f4  addiu       $v0, $zero, 0xF4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 244));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609a4) {
            ctx->pc = 0x2609BCu;
            goto label_2609bc;
        }
    }
    ctx->pc = 0x2609ACu;
label_2609ac:
    // 0x2609ac: 0x508200ae  beql        $a0, $v0, . + 4 + (0xAE << 2)
label_2609b0:
    if (ctx->pc == 0x2609B0u) {
        ctx->pc = 0x2609B0u;
            // 0x2609b0: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x2609B4u;
        goto label_2609b4;
    }
    ctx->pc = 0x2609ACu;
    {
        const bool branch_taken_0x2609ac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x2609ac) {
            ctx->pc = 0x2609B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2609ACu;
            // 0x2609b0: 0xae530000  sw          $s3, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x2609B4u;
label_2609b4:
    // 0x2609b4: 0x10000009  b           . + 4 + (0x9 << 2)
label_2609b8:
    if (ctx->pc == 0x2609B8u) {
        ctx->pc = 0x2609B8u;
            // 0x2609b8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x2609BCu;
        goto label_2609bc;
    }
    ctx->pc = 0x2609B4u;
    {
        const bool branch_taken_0x2609b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2609B4u;
            // 0x2609b8: 0xae400000  sw          $zero, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609b4) {
            ctx->pc = 0x2609DCu;
            goto label_2609dc;
        }
    }
    ctx->pc = 0x2609BCu;
label_2609bc:
    // 0x2609bc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2609bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2609c0:
    // 0x2609c0: 0x100000a9  b           . + 4 + (0xA9 << 2)
label_2609c4:
    if (ctx->pc == 0x2609C4u) {
        ctx->pc = 0x2609C4u;
            // 0x2609c4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2609C8u;
        goto label_2609c8;
    }
    ctx->pc = 0x2609C0u;
    {
        const bool branch_taken_0x2609c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2609C0u;
            // 0x2609c4: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609c0) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x2609C8u;
label_2609c8:
    // 0x2609c8: 0x100000a7  b           . + 4 + (0xA7 << 2)
label_2609cc:
    if (ctx->pc == 0x2609CCu) {
        ctx->pc = 0x2609CCu;
            // 0x2609cc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2609D0u;
        goto label_2609d0;
    }
    ctx->pc = 0x2609C8u;
    {
        const bool branch_taken_0x2609c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2609C8u;
            // 0x2609cc: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609c8) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x2609D0u;
label_2609d0:
    // 0x2609d0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2609d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_2609d4:
    // 0x2609d4: 0x100000a4  b           . + 4 + (0xA4 << 2)
label_2609d8:
    if (ctx->pc == 0x2609D8u) {
        ctx->pc = 0x2609D8u;
            // 0x2609d8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2609DCu;
        goto label_2609dc;
    }
    ctx->pc = 0x2609D4u;
    {
        const bool branch_taken_0x2609d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2609D4u;
            // 0x2609d8: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609d4) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x2609DCu;
label_2609dc:
    // 0x2609dc: 0x100000a3  b           . + 4 + (0xA3 << 2)
label_2609e0:
    if (ctx->pc == 0x2609E0u) {
        ctx->pc = 0x2609E0u;
            // 0x2609e0: 0xaed30000  sw          $s3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x2609E4u;
        goto label_2609e4;
    }
    ctx->pc = 0x2609DCu;
    {
        const bool branch_taken_0x2609dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2609DCu;
            // 0x2609e0: 0xaed30000  sw          $s3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609dc) {
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x2609E4u;
label_2609e4:
    // 0x2609e4: 0x124000a0  beqz        $s2, . + 4 + (0xA0 << 2)
label_2609e8:
    if (ctx->pc == 0x2609E8u) {
        ctx->pc = 0x2609E8u;
            // 0x2609e8: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2609ECu;
        goto label_2609ec;
    }
    ctx->pc = 0x2609E4u;
    {
        const bool branch_taken_0x2609e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2609E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2609E4u;
            // 0x2609e8: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2609e4) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x2609ECu;
label_2609ec:
    // 0x2609ec: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x2609ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_2609f0:
    // 0x2609f0: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x2609f0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_2609f4:
    // 0x2609f4: 0x5440009d  bnel        $v0, $zero, . + 4 + (0x9D << 2)
label_2609f8:
    if (ctx->pc == 0x2609F8u) {
        ctx->pc = 0x2609F8u;
            // 0x2609f8: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->pc = 0x2609FCu;
        goto label_2609fc;
    }
    ctx->pc = 0x2609F4u;
    {
        const bool branch_taken_0x2609f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2609f4) {
            ctx->pc = 0x2609F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2609F4u;
            // 0x2609f8: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x2609FCu;
label_2609fc:
    // 0x2609fc: 0x96220030  lhu         $v0, 0x30($s1)
    ctx->pc = 0x2609fcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_260a00:
    // 0x260a00: 0x3042835b  andi        $v0, $v0, 0x835B
    ctx->pc = 0x260a00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)33627);
label_260a04:
    // 0x260a04: 0x10000098  b           . + 4 + (0x98 << 2)
label_260a08:
    if (ctx->pc == 0x260A08u) {
        ctx->pc = 0x260A08u;
            // 0x260a08: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x260A0Cu;
        goto label_260a0c;
    }
    ctx->pc = 0x260A04u;
    {
        const bool branch_taken_0x260a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260A04u;
            // 0x260a08: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a04) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260A0Cu;
label_260a0c:
    // 0x260a0c: 0x92230038  lbu         $v1, 0x38($s1)
    ctx->pc = 0x260a0cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_260a10:
    // 0x260a10: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x260a10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_260a14:
    // 0x260a14: 0x54620095  bnel        $v1, $v0, . + 4 + (0x95 << 2)
label_260a18:
    if (ctx->pc == 0x260A18u) {
        ctx->pc = 0x260A18u;
            // 0x260a18: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->pc = 0x260A1Cu;
        goto label_260a1c;
    }
    ctx->pc = 0x260A14u;
    {
        const bool branch_taken_0x260a14 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x260a14) {
            ctx->pc = 0x260A18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260A14u;
            // 0x260a18: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260A1Cu;
label_260a1c:
    // 0x260a1c: 0x8e2300f0  lw          $v1, 0xF0($s1)
    ctx->pc = 0x260a1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
label_260a20:
    // 0x260a20: 0x50600092  beql        $v1, $zero, . + 4 + (0x92 << 2)
label_260a24:
    if (ctx->pc == 0x260A24u) {
        ctx->pc = 0x260A24u;
            // 0x260a24: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->pc = 0x260A28u;
        goto label_260a28;
    }
    ctx->pc = 0x260A20u;
    {
        const bool branch_taken_0x260a20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x260a20) {
            ctx->pc = 0x260A24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260A20u;
            // 0x260a24: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260A28u;
label_260a28:
    // 0x260a28: 0x1240008f  beqz        $s2, . + 4 + (0x8F << 2)
label_260a2c:
    if (ctx->pc == 0x260A2Cu) {
        ctx->pc = 0x260A2Cu;
            // 0x260a2c: 0x24130006  addiu       $s3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x260A30u;
        goto label_260a30;
    }
    ctx->pc = 0x260A28u;
    {
        const bool branch_taken_0x260a28 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260A28u;
            // 0x260a2c: 0x24130006  addiu       $s3, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a28) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260A30u;
label_260a30:
    // 0x260a30: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x260a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_260a34:
    // 0x260a34: 0x28420006  slti        $v0, $v0, 0x6
    ctx->pc = 0x260a34u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)6) ? 1 : 0);
label_260a38:
    // 0x260a38: 0x5440008c  bnel        $v0, $zero, . + 4 + (0x8C << 2)
label_260a3c:
    if (ctx->pc == 0x260A3Cu) {
        ctx->pc = 0x260A3Cu;
            // 0x260a3c: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->pc = 0x260A40u;
        goto label_260a40;
    }
    ctx->pc = 0x260A38u;
    {
        const bool branch_taken_0x260a38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260a38) {
            ctx->pc = 0x260A3Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260A38u;
            // 0x260a3c: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260A40u;
label_260a40:
    // 0x260a40: 0x90650005  lbu         $a1, 0x5($v1)
    ctx->pc = 0x260a40u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5)));
label_260a44:
    // 0x260a44: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260a44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260a48:
    // 0x260a48: 0x24060006  addiu       $a2, $zero, 0x6
    ctx->pc = 0x260a48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_260a4c:
    // 0x260a4c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x260a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
label_260a50:
    // 0x260a50: 0xc08b538  jal         func_22D4E0
label_260a54:
    if (ctx->pc == 0x260A54u) {
        ctx->pc = 0x260A54u;
            // 0x260a54: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->pc = 0x260A58u;
        goto label_260a58;
    }
    ctx->pc = 0x260A50u;
    SET_GPR_U32(ctx, 31, 0x260A58u);
    ctx->pc = 0x260A54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260A50u;
            // 0x260a54: 0x652821  addu        $a1, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260A58u; }
        if (ctx->pc != 0x260A58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260A58u; }
        if (ctx->pc != 0x260A58u) { return; }
    }
    ctx->pc = 0x260A58u;
label_260a58:
    // 0x260a58: 0x10000084  b           . + 4 + (0x84 << 2)
label_260a5c:
    if (ctx->pc == 0x260A5Cu) {
        ctx->pc = 0x260A5Cu;
            // 0x260a5c: 0xaed30000  sw          $s3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x260A60u;
        goto label_260a60;
    }
    ctx->pc = 0x260A58u;
    {
        const bool branch_taken_0x260a58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260A58u;
            // 0x260a5c: 0xaed30000  sw          $s3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a58) {
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260A60u;
label_260a60:
    // 0x260a60: 0x92300038  lbu         $s0, 0x38($s1)
    ctx->pc = 0x260a60u;
    SET_GPR_U32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 56)));
label_260a64:
    // 0x260a64: 0x24020006  addiu       $v0, $zero, 0x6
    ctx->pc = 0x260a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_260a68:
    // 0x260a68: 0x56020080  bnel        $s0, $v0, . + 4 + (0x80 << 2)
label_260a6c:
    if (ctx->pc == 0x260A6Cu) {
        ctx->pc = 0x260A6Cu;
            // 0x260a6c: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->pc = 0x260A70u;
        goto label_260a70;
    }
    ctx->pc = 0x260A68u;
    {
        const bool branch_taken_0x260a68 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x260a68) {
            ctx->pc = 0x260A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260A68u;
            // 0x260a6c: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260A70u;
label_260a70:
    // 0x260a70: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x260a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_260a74:
    // 0x260a74: 0x5040007d  beql        $v0, $zero, . + 4 + (0x7D << 2)
label_260a78:
    if (ctx->pc == 0x260A78u) {
        ctx->pc = 0x260A78u;
            // 0x260a78: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->pc = 0x260A7Cu;
        goto label_260a7c;
    }
    ctx->pc = 0x260A74u;
    {
        const bool branch_taken_0x260a74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260a74) {
            ctx->pc = 0x260A78u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260A74u;
            // 0x260a78: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260A7Cu;
label_260a7c:
    // 0x260a7c: 0x1240007a  beqz        $s2, . + 4 + (0x7A << 2)
label_260a80:
    if (ctx->pc == 0x260A80u) {
        ctx->pc = 0x260A80u;
            // 0x260a80: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x260A84u;
        goto label_260a84;
    }
    ctx->pc = 0x260A7Cu;
    {
        const bool branch_taken_0x260a7c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260A7Cu;
            // 0x260a80: 0x24130002  addiu       $s3, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260a7c) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260A84u;
label_260a84:
    // 0x260a84: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x260a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_260a88:
    // 0x260a88: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x260a88u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_260a8c:
    // 0x260a8c: 0x54400077  bnel        $v0, $zero, . + 4 + (0x77 << 2)
label_260a90:
    if (ctx->pc == 0x260A90u) {
        ctx->pc = 0x260A90u;
            // 0x260a90: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->pc = 0x260A94u;
        goto label_260a94;
    }
    ctx->pc = 0x260A8Cu;
    {
        const bool branch_taken_0x260a8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260a8c) {
            ctx->pc = 0x260A90u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260A8Cu;
            // 0x260a90: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260A94u;
label_260a94:
    // 0x260a94: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x260a94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_260a98:
    // 0x260a98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x260a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_260a9c:
    // 0x260a9c: 0xc049cb6  jal         func_1272D8
label_260aa0:
    if (ctx->pc == 0x260AA0u) {
        ctx->pc = 0x260AA0u;
            // 0x260aa0: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->pc = 0x260AA4u;
        goto label_260aa4;
    }
    ctx->pc = 0x260A9Cu;
    SET_GPR_U32(ctx, 31, 0x260AA4u);
    ctx->pc = 0x260AA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260A9Cu;
            // 0x260aa0: 0x24060028  addiu       $a2, $zero, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260AA4u; }
        if (ctx->pc != 0x260AA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260AA4u; }
        if (ctx->pc != 0x260AA4u) { return; }
    }
    ctx->pc = 0x260AA4u;
label_260aa4:
    // 0x260aa4: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x260aa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260aa8:
    // 0x260aa8: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x260aa8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_260aac:
    // 0x260aac: 0xc04a966  jal         func_12A598
label_260ab0:
    if (ctx->pc == 0x260AB0u) {
        ctx->pc = 0x260AB0u;
            // 0x260ab0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x260AB4u;
        goto label_260ab4;
    }
    ctx->pc = 0x260AACu;
    SET_GPR_U32(ctx, 31, 0x260AB4u);
    ctx->pc = 0x260AB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260AACu;
            // 0x260ab0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A598u;
    if (runtime->hasFunction(0x12A598u)) {
        auto targetFn = runtime->lookupFunction(0x12A598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260AB4u; }
        if (ctx->pc != 0x260AB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A598_0x12a598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260AB4u; }
        if (ctx->pc != 0x260AB4u) { return; }
    }
    ctx->pc = 0x260AB4u;
label_260ab4:
    // 0x260ab4: 0x8e2200cc  lw          $v0, 0xCC($s1)
    ctx->pc = 0x260ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 204)));
label_260ab8:
    // 0x260ab8: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x260ab8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_260abc:
    // 0x260abc: 0x3405c028  ori         $a1, $zero, 0xC028
    ctx->pc = 0x260abcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49192);
label_260ac0:
    // 0x260ac0: 0x52c38  dsll        $a1, $a1, 16
    ctx->pc = 0x260ac0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 16);
label_260ac4:
    // 0x260ac4: 0x34a56936  ori         $a1, $a1, 0x6936
    ctx->pc = 0x260ac4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)26934);
label_260ac8:
    // 0x260ac8: 0x40f809  jalr        $v0
label_260acc:
    if (ctx->pc == 0x260ACCu) {
        ctx->pc = 0x260ACCu;
            // 0x260acc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260AD0u;
        goto label_260ad0;
    }
    ctx->pc = 0x260AC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x260AD0u);
        ctx->pc = 0x260ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260AC8u;
            // 0x260acc: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x260AD0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x260AD0u; }
            if (ctx->pc != 0x260AD0u) { return; }
        }
        }
    }
    ctx->pc = 0x260AD0u;
label_260ad0:
    // 0x260ad0: 0x54400066  bnel        $v0, $zero, . + 4 + (0x66 << 2)
label_260ad4:
    if (ctx->pc == 0x260AD4u) {
        ctx->pc = 0x260AD4u;
            // 0x260ad4: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->pc = 0x260AD8u;
        goto label_260ad8;
    }
    ctx->pc = 0x260AD0u;
    {
        const bool branch_taken_0x260ad0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260ad0) {
            ctx->pc = 0x260AD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260AD0u;
            // 0x260ad4: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260AD8u;
label_260ad8:
    // 0x260ad8: 0x8fa4001c  lw          $a0, 0x1C($sp)
    ctx->pc = 0x260ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
label_260adc:
    // 0x260adc: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x260adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_260ae0:
    // 0x260ae0: 0x308200e0  andi        $v0, $a0, 0xE0
    ctx->pc = 0x260ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)224);
label_260ae4:
    // 0x260ae4: 0x54430061  bnel        $v0, $v1, . + 4 + (0x61 << 2)
label_260ae8:
    if (ctx->pc == 0x260AE8u) {
        ctx->pc = 0x260AE8u;
            // 0x260ae8: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->pc = 0x260AECu;
        goto label_260aec;
    }
    ctx->pc = 0x260AE4u;
    {
        const bool branch_taken_0x260ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x260ae4) {
            ctx->pc = 0x260AE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260AE4u;
            // 0x260ae8: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260AECu;
label_260aec:
    // 0x260aec: 0x3083001f  andi        $v1, $a0, 0x1F
    ctx->pc = 0x260aecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)31);
label_260af0:
    // 0x260af0: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x260af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_260af4:
    // 0x260af4: 0x10620005  beq         $v1, $v0, . + 4 + (0x5 << 2)
label_260af8:
    if (ctx->pc == 0x260AF8u) {
        ctx->pc = 0x260AF8u;
            // 0x260af8: 0xa6400000  sh          $zero, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->pc = 0x260AFCu;
        goto label_260afc;
    }
    ctx->pc = 0x260AF4u;
    {
        const bool branch_taken_0x260af4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x260AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260AF4u;
            // 0x260af8: 0xa6400000  sh          $zero, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260af4) {
            ctx->pc = 0x260B0Cu;
            goto label_260b0c;
        }
    }
    ctx->pc = 0x260AFCu;
label_260afc:
    // 0x260afc: 0x10700005  beq         $v1, $s0, . + 4 + (0x5 << 2)
label_260b00:
    if (ctx->pc == 0x260B00u) {
        ctx->pc = 0x260B00u;
            // 0x260b00: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->pc = 0x260B04u;
        goto label_260b04;
    }
    ctx->pc = 0x260AFCu;
    {
        const bool branch_taken_0x260afc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 16));
        ctx->pc = 0x260B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260AFCu;
            // 0x260b00: 0x3c020010  lui         $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260afc) {
            ctx->pc = 0x260B14u;
            goto label_260b14;
        }
    }
    ctx->pc = 0x260B04u;
label_260b04:
    // 0x260b04: 0x10000007  b           . + 4 + (0x7 << 2)
label_260b08:
    if (ctx->pc == 0x260B08u) {
        ctx->pc = 0x260B08u;
            // 0x260b08: 0x821024  and         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->pc = 0x260B0Cu;
        goto label_260b0c;
    }
    ctx->pc = 0x260B04u;
    {
        const bool branch_taken_0x260b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260B04u;
            // 0x260b08: 0x821024  and         $v0, $a0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b04) {
            ctx->pc = 0x260B24u;
            goto label_260b24;
        }
    }
    ctx->pc = 0x260B0Cu;
label_260b0c:
    // 0x260b0c: 0x10000002  b           . + 4 + (0x2 << 2)
label_260b10:
    if (ctx->pc == 0x260B10u) {
        ctx->pc = 0x260B10u;
            // 0x260b10: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->pc = 0x260B14u;
        goto label_260b14;
    }
    ctx->pc = 0x260B0Cu;
    {
        const bool branch_taken_0x260b0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260B0Cu;
            // 0x260b10: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b0c) {
            ctx->pc = 0x260B18u;
            goto label_260b18;
        }
    }
    ctx->pc = 0x260B14u;
label_260b14:
    // 0x260b14: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x260b14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
label_260b18:
    // 0x260b18: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x260b18u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_260b1c:
    // 0x260b1c: 0x3c020010  lui         $v0, 0x10
    ctx->pc = 0x260b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16 << 16));
label_260b20:
    // 0x260b20: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x260b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_260b24:
    // 0x260b24: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_260b28:
    if (ctx->pc == 0x260B28u) {
        ctx->pc = 0x260B28u;
            // 0x260b28: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->pc = 0x260B2Cu;
        goto label_260b2c;
    }
    ctx->pc = 0x260B24u;
    {
        const bool branch_taken_0x260b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260B24u;
            // 0x260b28: 0x3c020020  lui         $v0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b24) {
            ctx->pc = 0x260B3Cu;
            goto label_260b3c;
        }
    }
    ctx->pc = 0x260B2Cu;
label_260b2c:
    // 0x260b2c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x260b2cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_260b30:
    // 0x260b30: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x260b30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_260b34:
    // 0x260b34: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x260b34u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_260b38:
    // 0x260b38: 0x3c020020  lui         $v0, 0x20
    ctx->pc = 0x260b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32 << 16));
label_260b3c:
    // 0x260b3c: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x260b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_260b40:
    // 0x260b40: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_260b44:
    if (ctx->pc == 0x260B44u) {
        ctx->pc = 0x260B44u;
            // 0x260b44: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->pc = 0x260B48u;
        goto label_260b48;
    }
    ctx->pc = 0x260B40u;
    {
        const bool branch_taken_0x260b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260B40u;
            // 0x260b44: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b40) {
            ctx->pc = 0x260B58u;
            goto label_260b58;
        }
    }
    ctx->pc = 0x260B48u;
label_260b48:
    // 0x260b48: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x260b48u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_260b4c:
    // 0x260b4c: 0x34420010  ori         $v0, $v0, 0x10
    ctx->pc = 0x260b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16);
label_260b50:
    // 0x260b50: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x260b50u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_260b54:
    // 0x260b54: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x260b54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
label_260b58:
    // 0x260b58: 0x821024  and         $v0, $a0, $v0
    ctx->pc = 0x260b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
label_260b5c:
    // 0x260b5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_260b60:
    if (ctx->pc == 0x260B60u) {
        ctx->pc = 0x260B60u;
            // 0x260b60: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->pc = 0x260B64u;
        goto label_260b64;
    }
    ctx->pc = 0x260B5Cu;
    {
        const bool branch_taken_0x260b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260B5Cu;
            // 0x260b60: 0x96420000  lhu         $v0, 0x0($s2) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b5c) {
            ctx->pc = 0x260B70u;
            goto label_260b70;
        }
    }
    ctx->pc = 0x260B64u;
label_260b64:
    // 0x260b64: 0x34420040  ori         $v0, $v0, 0x40
    ctx->pc = 0x260b64u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)64);
label_260b68:
    // 0x260b68: 0xa6420000  sh          $v0, 0x0($s2)
    ctx->pc = 0x260b68u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
label_260b6c:
    // 0x260b6c: 0x96420000  lhu         $v0, 0x0($s2)
    ctx->pc = 0x260b6cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
label_260b70:
    // 0x260b70: 0x97a30018  lhu         $v1, 0x18($sp)
    ctx->pc = 0x260b70u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 24)));
label_260b74:
    // 0x260b74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x260b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_260b78:
    // 0x260b78: 0x1000003b  b           . + 4 + (0x3B << 2)
label_260b7c:
    if (ctx->pc == 0x260B7Cu) {
        ctx->pc = 0x260B7Cu;
            // 0x260b7c: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->pc = 0x260B80u;
        goto label_260b80;
    }
    ctx->pc = 0x260B78u;
    {
        const bool branch_taken_0x260b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260B78u;
            // 0x260b7c: 0xa6420000  sh          $v0, 0x0($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 0), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b78) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260B80u;
label_260b80:
    // 0x260b80: 0x12400039  beqz        $s2, . + 4 + (0x39 << 2)
label_260b84:
    if (ctx->pc == 0x260B84u) {
        ctx->pc = 0x260B84u;
            // 0x260b84: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x260B88u;
        goto label_260b88;
    }
    ctx->pc = 0x260B80u;
    {
        const bool branch_taken_0x260b80 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260B80u;
            // 0x260b84: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b80) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260B88u;
label_260b88:
    // 0x260b88: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x260b88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_260b8c:
    // 0x260b8c: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x260b8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_260b90:
    // 0x260b90: 0x54400036  bnel        $v0, $zero, . + 4 + (0x36 << 2)
label_260b94:
    if (ctx->pc == 0x260B94u) {
        ctx->pc = 0x260B94u;
            // 0x260b94: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->pc = 0x260B98u;
        goto label_260b98;
    }
    ctx->pc = 0x260B90u;
    {
        const bool branch_taken_0x260b90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260b90) {
            ctx->pc = 0x260B94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260B90u;
            // 0x260b94: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260B98u;
label_260b98:
    // 0x260b98: 0x8e220040  lw          $v0, 0x40($s1)
    ctx->pc = 0x260b98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 64)));
label_260b9c:
    // 0x260b9c: 0x10000032  b           . + 4 + (0x32 << 2)
label_260ba0:
    if (ctx->pc == 0x260BA0u) {
        ctx->pc = 0x260BA0u;
            // 0x260ba0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x260BA4u;
        goto label_260ba4;
    }
    ctx->pc = 0x260B9Cu;
    {
        const bool branch_taken_0x260b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260B9Cu;
            // 0x260ba0: 0xae420000  sw          $v0, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260b9c) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260BA4u;
label_260ba4:
    // 0x260ba4: 0x52000031  beql        $s0, $zero, . + 4 + (0x31 << 2)
label_260ba8:
    if (ctx->pc == 0x260BA8u) {
        ctx->pc = 0x260BA8u;
            // 0x260ba8: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->pc = 0x260BACu;
        goto label_260bac;
    }
    ctx->pc = 0x260BA4u;
    {
        const bool branch_taken_0x260ba4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x260ba4) {
            ctx->pc = 0x260BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260BA4u;
            // 0x260ba8: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260BACu;
label_260bac:
    // 0x260bac: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
label_260bb0:
    if (ctx->pc == 0x260BB0u) {
        ctx->pc = 0x260BB0u;
            // 0x260bb0: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x260BB4u;
        goto label_260bb4;
    }
    ctx->pc = 0x260BACu;
    {
        const bool branch_taken_0x260bac = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260BACu;
            // 0x260bb0: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bac) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260BB4u;
label_260bb4:
    // 0x260bb4: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x260bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_260bb8:
    // 0x260bb8: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x260bb8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_260bbc:
    // 0x260bbc: 0x5440002b  bnel        $v0, $zero, . + 4 + (0x2B << 2)
label_260bc0:
    if (ctx->pc == 0x260BC0u) {
        ctx->pc = 0x260BC0u;
            // 0x260bc0: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->pc = 0x260BC4u;
        goto label_260bc4;
    }
    ctx->pc = 0x260BBCu;
    {
        const bool branch_taken_0x260bbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260bbc) {
            ctx->pc = 0x260BC0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260BBCu;
            // 0x260bc0: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260BC4u;
label_260bc4:
    // 0x260bc4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260bc8:
    // 0x260bc8: 0x10000021  b           . + 4 + (0x21 << 2)
label_260bcc:
    if (ctx->pc == 0x260BCCu) {
        ctx->pc = 0x260BCCu;
            // 0x260bcc: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->pc = 0x260BD0u;
        goto label_260bd0;
    }
    ctx->pc = 0x260BC8u;
    {
        const bool branch_taken_0x260bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260BC8u;
            // 0x260bcc: 0x26050060  addiu       $a1, $s0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bc8) {
            ctx->pc = 0x260C50u;
            goto label_260c50;
        }
    }
    ctx->pc = 0x260BD0u;
label_260bd0:
    // 0x260bd0: 0x52000026  beql        $s0, $zero, . + 4 + (0x26 << 2)
label_260bd4:
    if (ctx->pc == 0x260BD4u) {
        ctx->pc = 0x260BD4u;
            // 0x260bd4: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->pc = 0x260BD8u;
        goto label_260bd8;
    }
    ctx->pc = 0x260BD0u;
    {
        const bool branch_taken_0x260bd0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x260bd0) {
            ctx->pc = 0x260BD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260BD0u;
            // 0x260bd4: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260BD8u;
label_260bd8:
    // 0x260bd8: 0x12400023  beqz        $s2, . + 4 + (0x23 << 2)
label_260bdc:
    if (ctx->pc == 0x260BDCu) {
        ctx->pc = 0x260BDCu;
            // 0x260bdc: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x260BE0u;
        goto label_260be0;
    }
    ctx->pc = 0x260BD8u;
    {
        const bool branch_taken_0x260bd8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260BD8u;
            // 0x260bdc: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bd8) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260BE0u;
label_260be0:
    // 0x260be0: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x260be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_260be4:
    // 0x260be4: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x260be4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_260be8:
    // 0x260be8: 0x54400020  bnel        $v0, $zero, . + 4 + (0x20 << 2)
label_260bec:
    if (ctx->pc == 0x260BECu) {
        ctx->pc = 0x260BECu;
            // 0x260bec: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->pc = 0x260BF0u;
        goto label_260bf0;
    }
    ctx->pc = 0x260BE8u;
    {
        const bool branch_taken_0x260be8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260be8) {
            ctx->pc = 0x260BECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260BE8u;
            // 0x260bec: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260BF0u;
label_260bf0:
    // 0x260bf0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x260bf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_260bf4:
    // 0x260bf4: 0x10000016  b           . + 4 + (0x16 << 2)
label_260bf8:
    if (ctx->pc == 0x260BF8u) {
        ctx->pc = 0x260BF8u;
            // 0x260bf8: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->pc = 0x260BFCu;
        goto label_260bfc;
    }
    ctx->pc = 0x260BF4u;
    {
        const bool branch_taken_0x260bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260BF4u;
            // 0x260bf8: 0x26050080  addiu       $a1, $s0, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260bf4) {
            ctx->pc = 0x260C50u;
            goto label_260c50;
        }
    }
    ctx->pc = 0x260BFCu;
label_260bfc:
    // 0x260bfc: 0x5200001b  beql        $s0, $zero, . + 4 + (0x1B << 2)
label_260c00:
    if (ctx->pc == 0x260C00u) {
        ctx->pc = 0x260C00u;
            // 0x260c00: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->pc = 0x260C04u;
        goto label_260c04;
    }
    ctx->pc = 0x260BFCu;
    {
        const bool branch_taken_0x260bfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x260bfc) {
            ctx->pc = 0x260C00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260BFCu;
            // 0x260c00: 0x2415ffe2  addiu       $s5, $zero, -0x1E (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967266));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260C04u;
label_260c04:
    // 0x260c04: 0x12400018  beqz        $s2, . + 4 + (0x18 << 2)
label_260c08:
    if (ctx->pc == 0x260C08u) {
        ctx->pc = 0x260C08u;
            // 0x260c08: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x260C0Cu;
        goto label_260c0c;
    }
    ctx->pc = 0x260C04u;
    {
        const bool branch_taken_0x260c04 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260C04u;
            // 0x260c08: 0x24130004  addiu       $s3, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c04) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260C0Cu;
label_260c0c:
    // 0x260c0c: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x260c0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
label_260c10:
    // 0x260c10: 0x28420004  slti        $v0, $v0, 0x4
    ctx->pc = 0x260c10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
label_260c14:
    // 0x260c14: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
label_260c18:
    if (ctx->pc == 0x260C18u) {
        ctx->pc = 0x260C18u;
            // 0x260c18: 0x96230030  lhu         $v1, 0x30($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x260C1Cu;
        goto label_260c1c;
    }
    ctx->pc = 0x260C14u;
    {
        const bool branch_taken_0x260c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x260c14) {
            ctx->pc = 0x260C18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260C14u;
            // 0x260c18: 0x96230030  lhu         $v1, 0x30($s1) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260C24u;
            goto label_260c24;
        }
    }
    ctx->pc = 0x260C1Cu;
label_260c1c:
    // 0x260c1c: 0x10000013  b           . + 4 + (0x13 << 2)
label_260c20:
    if (ctx->pc == 0x260C20u) {
        ctx->pc = 0x260C20u;
            // 0x260c20: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->pc = 0x260C24u;
        goto label_260c24;
    }
    ctx->pc = 0x260C1Cu;
    {
        const bool branch_taken_0x260c1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260C1Cu;
            // 0x260c20: 0x2415ffe5  addiu       $s5, $zero, -0x1B (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967269));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c1c) {
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260C24u;
label_260c24:
    // 0x260c24: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x260c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
label_260c28:
    // 0x260c28: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_260c2c:
    if (ctx->pc == 0x260C2Cu) {
        ctx->pc = 0x260C2Cu;
            // 0x260c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260C30u;
        goto label_260c30;
    }
    ctx->pc = 0x260C28u;
    {
        const bool branch_taken_0x260c28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260C28u;
            // 0x260c2c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c28) {
            ctx->pc = 0x260C40u;
            goto label_260c40;
        }
    }
    ctx->pc = 0x260C30u;
label_260c30:
    // 0x260c30: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x260c30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_260c34:
    // 0x260c34: 0xc08b538  jal         func_22D4E0
label_260c38:
    if (ctx->pc == 0x260C38u) {
        ctx->pc = 0x260C38u;
            // 0x260c38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x260C3Cu;
        goto label_260c3c;
    }
    ctx->pc = 0x260C34u;
    SET_GPR_U32(ctx, 31, 0x260C3Cu);
    ctx->pc = 0x260C38u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260C34u;
            // 0x260c38: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260C3Cu; }
        if (ctx->pc != 0x260C3Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260C3Cu; }
        if (ctx->pc != 0x260C3Cu) { return; }
    }
    ctx->pc = 0x260C3Cu;
label_260c3c:
    // 0x260c3c: 0x96230030  lhu         $v1, 0x30($s1)
    ctx->pc = 0x260c3cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 48)));
label_260c40:
    // 0x260c40: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x260c40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
label_260c44:
    // 0x260c44: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_260c48:
    if (ctx->pc == 0x260C48u) {
        ctx->pc = 0x260C48u;
            // 0x260c48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260C4Cu;
        goto label_260c4c;
    }
    ctx->pc = 0x260C44u;
    {
        const bool branch_taken_0x260c44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260C44u;
            // 0x260c48: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c44) {
            ctx->pc = 0x260C68u;
            goto label_260c68;
        }
    }
    ctx->pc = 0x260C4Cu;
label_260c4c:
    // 0x260c4c: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x260c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
label_260c50:
    // 0x260c50: 0xc08b538  jal         func_22D4E0
label_260c54:
    if (ctx->pc == 0x260C54u) {
        ctx->pc = 0x260C54u;
            // 0x260c54: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x260C58u;
        goto label_260c58;
    }
    ctx->pc = 0x260C50u;
    SET_GPR_U32(ctx, 31, 0x260C58u);
    ctx->pc = 0x260C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260C50u;
            // 0x260c54: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (runtime->hasFunction(0x22D4E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D4E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260C58u; }
        if (ctx->pc != 0x260C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D4E0_0x22d4e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260C58u; }
        if (ctx->pc != 0x260C58u) { return; }
    }
    ctx->pc = 0x260C58u;
label_260c58:
    // 0x260c58: 0x10000004  b           . + 4 + (0x4 << 2)
label_260c5c:
    if (ctx->pc == 0x260C5Cu) {
        ctx->pc = 0x260C5Cu;
            // 0x260c5c: 0xaed30000  sw          $s3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
        ctx->pc = 0x260C60u;
        goto label_260c60;
    }
    ctx->pc = 0x260C58u;
    {
        const bool branch_taken_0x260c58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260C58u;
            // 0x260c5c: 0xaed30000  sw          $s3, 0x0($s6) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c58) {
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260C60u;
label_260c60:
    // 0x260c60: 0x10000002  b           . + 4 + (0x2 << 2)
label_260c64:
    if (ctx->pc == 0x260C64u) {
        ctx->pc = 0x260C64u;
            // 0x260c64: 0x2415ffe3  addiu       $s5, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->pc = 0x260C68u;
        goto label_260c68;
    }
    ctx->pc = 0x260C60u;
    {
        const bool branch_taken_0x260c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260C60u;
            // 0x260c64: 0x2415ffe3  addiu       $s5, $zero, -0x1D (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967267));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260c60) {
            ctx->pc = 0x260C6Cu;
            goto label_260c6c;
        }
    }
    ctx->pc = 0x260C68u;
label_260c68:
    // 0x260c68: 0xaed30000  sw          $s3, 0x0($s6)
    ctx->pc = 0x260c68u;
    WRITE32(ADD32(GPR_U32(ctx, 22), 0), GPR_U32(ctx, 19));
label_260c6c:
    // 0x260c6c: 0xc08c698  jal         func_231A60
label_260c70:
    if (ctx->pc == 0x260C70u) {
        ctx->pc = 0x260C70u;
            // 0x260c70: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260C74u;
        goto label_260c74;
    }
    ctx->pc = 0x260C6Cu;
    SET_GPR_U32(ctx, 31, 0x260C74u);
    ctx->pc = 0x260C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260C6Cu;
            // 0x260c70: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260C74u; }
        if (ctx->pc != 0x260C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260C74u; }
        if (ctx->pc != 0x260C74u) { return; }
    }
    ctx->pc = 0x260C74u;
label_260c74:
    // 0x260c74: 0x2a0102d  daddu       $v0, $s5, $zero
    ctx->pc = 0x260c74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_260c78:
    // 0x260c78: 0xdfbf00b0  ld          $ra, 0xB0($sp)
    ctx->pc = 0x260c78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 176)));
label_260c7c:
    // 0x260c7c: 0xdfb700a0  ld          $s7, 0xA0($sp)
    ctx->pc = 0x260c7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_260c80:
    // 0x260c80: 0xdfb60090  ld          $s6, 0x90($sp)
    ctx->pc = 0x260c80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_260c84:
    // 0x260c84: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x260c84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_260c88:
    // 0x260c88: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x260c88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_260c8c:
    // 0x260c8c: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x260c8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_260c90:
    // 0x260c90: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x260c90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_260c94:
    // 0x260c94: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x260c94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_260c98:
    // 0x260c98: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x260c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_260c9c:
    // 0x260c9c: 0x3e00008  jr          $ra
label_260ca0:
    if (ctx->pc == 0x260CA0u) {
        ctx->pc = 0x260CA0u;
            // 0x260ca0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->pc = 0x260CA4u;
        goto label_260ca4;
    }
    ctx->pc = 0x260C9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260C9Cu;
            // 0x260ca0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x260CA4u;
label_260ca4:
    // 0x260ca4: 0x0  nop
    ctx->pc = 0x260ca4u;
    // NOP
label_260ca8:
    // 0x260ca8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x260ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_260cac:
    // 0x260cac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x260cacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_260cb0:
    // 0x260cb0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x260cb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_260cb4:
    // 0x260cb4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x260cb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_260cb8:
    // 0x260cb8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x260cb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
label_260cbc:
    // 0x260cbc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x260cbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_260cc0:
    // 0x260cc0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x260cc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_260cc4:
    // 0x260cc4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x260cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_260cc8:
    // 0x260cc8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x260cc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_260ccc:
    // 0x260ccc: 0xc08c682  jal         func_231A08
label_260cd0:
    if (ctx->pc == 0x260CD0u) {
        ctx->pc = 0x260CD0u;
            // 0x260cd0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260CD4u;
        goto label_260cd4;
    }
    ctx->pc = 0x260CCCu;
    SET_GPR_U32(ctx, 31, 0x260CD4u);
    ctx->pc = 0x260CD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260CCCu;
            // 0x260cd0: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (runtime->hasFunction(0x231A08u)) {
        auto targetFn = runtime->lookupFunction(0x231A08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CD4u; }
        if (ctx->pc != 0x260CD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A08_0x231a08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CD4u; }
        if (ctx->pc != 0x260CD4u) { return; }
    }
    ctx->pc = 0x260CD4u;
label_260cd4:
    // 0x260cd4: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x260cd4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_260cd8:
    // 0x260cd8: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x260cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
label_260cdc:
    // 0x260cdc: 0x8c50fcd0  lw          $s0, -0x330($v0)
    ctx->pc = 0x260cdcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294966480)));
label_260ce0:
    // 0x260ce0: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
label_260ce4:
    if (ctx->pc == 0x260CE4u) {
        ctx->pc = 0x260CE4u;
            // 0x260ce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260CE8u;
        goto label_260ce8;
    }
    ctx->pc = 0x260CE0u;
    {
        const bool branch_taken_0x260ce0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x260CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260CE0u;
            // 0x260ce4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260ce0) {
            ctx->pc = 0x260D58u;
            goto label_260d58;
        }
    }
    ctx->pc = 0x260CE8u;
label_260ce8:
    // 0x260ce8: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x260ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
label_260cec:
    // 0x260cec: 0xc04a8f8  jal         func_12A3E0
label_260cf0:
    if (ctx->pc == 0x260CF0u) {
        ctx->pc = 0x260CF0u;
            // 0x260cf0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x260CF4u;
        goto label_260cf4;
    }
    ctx->pc = 0x260CECu;
    SET_GPR_U32(ctx, 31, 0x260CF4u);
    ctx->pc = 0x260CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260CECu;
            // 0x260cf0: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A3E0u;
    if (runtime->hasFunction(0x12A3E0u)) {
        auto targetFn = runtime->lookupFunction(0x12A3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CF4u; }
        if (ctx->pc != 0x260CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A3E0_0x12a3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260CF4u; }
        if (ctx->pc != 0x260CF4u) { return; }
    }
    ctx->pc = 0x260CF4u;
label_260cf4:
    // 0x260cf4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_260cf8:
    if (ctx->pc == 0x260CF8u) {
        ctx->pc = 0x260CF8u;
            // 0x260cf8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->pc = 0x260CFCu;
        goto label_260cfc;
    }
    ctx->pc = 0x260CF4u;
    {
        const bool branch_taken_0x260cf4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x260cf4) {
            ctx->pc = 0x260CF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x260CF4u;
            // 0x260cf8: 0x8e100004  lw          $s0, 0x4($s0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x260CE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_260ce0;
        }
    }
    ctx->pc = 0x260CFCu;
label_260cfc:
    // 0x260cfc: 0xde020058  ld          $v0, 0x58($s0)
    ctx->pc = 0x260cfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 88)));
label_260d00:
    // 0x260d00: 0xfe220000  sd          $v0, 0x0($s1)
    ctx->pc = 0x260d00u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 2));
label_260d04:
    // 0x260d04: 0xde030060  ld          $v1, 0x60($s0)
    ctx->pc = 0x260d04u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 96)));
label_260d08:
    // 0x260d08: 0xfe230008  sd          $v1, 0x8($s1)
    ctx->pc = 0x260d08u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 8), GPR_U64(ctx, 3));
label_260d0c:
    // 0x260d0c: 0xde020068  ld          $v0, 0x68($s0)
    ctx->pc = 0x260d0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 104)));
label_260d10:
    // 0x260d10: 0xfe220010  sd          $v0, 0x10($s1)
    ctx->pc = 0x260d10u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 16), GPR_U64(ctx, 2));
label_260d14:
    // 0x260d14: 0xde030070  ld          $v1, 0x70($s0)
    ctx->pc = 0x260d14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 112)));
label_260d18:
    // 0x260d18: 0xfe230018  sd          $v1, 0x18($s1)
    ctx->pc = 0x260d18u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 3));
label_260d1c:
    // 0x260d1c: 0xde020078  ld          $v0, 0x78($s0)
    ctx->pc = 0x260d1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 120)));
label_260d20:
    // 0x260d20: 0xfe220020  sd          $v0, 0x20($s1)
    ctx->pc = 0x260d20u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 2));
label_260d24:
    // 0x260d24: 0xde030080  ld          $v1, 0x80($s0)
    ctx->pc = 0x260d24u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 128)));
label_260d28:
    // 0x260d28: 0xfe230028  sd          $v1, 0x28($s1)
    ctx->pc = 0x260d28u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 40), GPR_U64(ctx, 3));
label_260d2c:
    // 0x260d2c: 0xde020088  ld          $v0, 0x88($s0)
    ctx->pc = 0x260d2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 136)));
label_260d30:
    // 0x260d30: 0xfe220030  sd          $v0, 0x30($s1)
    ctx->pc = 0x260d30u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 48), GPR_U64(ctx, 2));
label_260d34:
    // 0x260d34: 0xde030090  ld          $v1, 0x90($s0)
    ctx->pc = 0x260d34u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 144)));
label_260d38:
    // 0x260d38: 0xfe230038  sd          $v1, 0x38($s1)
    ctx->pc = 0x260d38u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 56), GPR_U64(ctx, 3));
label_260d3c:
    // 0x260d3c: 0xde020098  ld          $v0, 0x98($s0)
    ctx->pc = 0x260d3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 152)));
label_260d40:
    // 0x260d40: 0xfe220040  sd          $v0, 0x40($s1)
    ctx->pc = 0x260d40u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 64), GPR_U64(ctx, 2));
label_260d44:
    // 0x260d44: 0xde0300a0  ld          $v1, 0xA0($s0)
    ctx->pc = 0x260d44u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 16), 160)));
label_260d48:
    // 0x260d48: 0xfe230048  sd          $v1, 0x48($s1)
    ctx->pc = 0x260d48u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 72), GPR_U64(ctx, 3));
label_260d4c:
    // 0x260d4c: 0xde0200a8  ld          $v0, 0xA8($s0)
    ctx->pc = 0x260d4cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 168)));
label_260d50:
    // 0x260d50: 0x10000002  b           . + 4 + (0x2 << 2)
label_260d54:
    if (ctx->pc == 0x260D54u) {
        ctx->pc = 0x260D54u;
            // 0x260d54: 0xfe220050  sd          $v0, 0x50($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
        ctx->pc = 0x260D58u;
        goto label_260d58;
    }
    ctx->pc = 0x260D50u;
    {
        const bool branch_taken_0x260d50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x260D54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260D50u;
            // 0x260d54: 0xfe220050  sd          $v0, 0x50($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 80), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x260d50) {
            ctx->pc = 0x260D5Cu;
            goto label_260d5c;
        }
    }
    ctx->pc = 0x260D58u;
label_260d58:
    // 0x260d58: 0x2414ffe4  addiu       $s4, $zero, -0x1C
    ctx->pc = 0x260d58u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967268));
label_260d5c:
    // 0x260d5c: 0xc08c698  jal         func_231A60
label_260d60:
    if (ctx->pc == 0x260D60u) {
        ctx->pc = 0x260D60u;
            // 0x260d60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x260D64u;
        goto label_260d64;
    }
    ctx->pc = 0x260D5Cu;
    SET_GPR_U32(ctx, 31, 0x260D64u);
    ctx->pc = 0x260D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x260D5Cu;
            // 0x260d60: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (runtime->hasFunction(0x231A60u)) {
        auto targetFn = runtime->lookupFunction(0x231A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260D64u; }
        if (ctx->pc != 0x260D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00231A60_0x231a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x260D64u; }
        if (ctx->pc != 0x260D64u) { return; }
    }
    ctx->pc = 0x260D64u;
label_260d64:
    // 0x260d64: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x260d64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_260d68:
    // 0x260d68: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x260d68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_260d6c:
    // 0x260d6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x260d6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_260d70:
    // 0x260d70: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x260d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_260d74:
    // 0x260d74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x260d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_260d78:
    // 0x260d78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x260d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_260d7c:
    // 0x260d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x260d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_260d80:
    // 0x260d80: 0x3e00008  jr          $ra
label_260d84:
    if (ctx->pc == 0x260D84u) {
        ctx->pc = 0x260D84u;
            // 0x260d84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x260D88u;
        goto label_fallthrough_0x260d80;
    }
    ctx->pc = 0x260D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x260D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x260D80u;
            // 0x260d84: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x260d80:
    ctx->pc = 0x260D88u;
    ctx->pc = 0x260d88u;
}
