#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A9810
// Address: 0x2a9810 - 0x2a9bf8
void sub_002A9810_0x2a9810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A9810_0x2a9810");
#endif

    switch (ctx->pc) {
        case 0x2a9810u: goto label_2a9810;
        case 0x2a9814u: goto label_2a9814;
        case 0x2a9818u: goto label_2a9818;
        case 0x2a981cu: goto label_2a981c;
        case 0x2a9820u: goto label_2a9820;
        case 0x2a9824u: goto label_2a9824;
        case 0x2a9828u: goto label_2a9828;
        case 0x2a982cu: goto label_2a982c;
        case 0x2a9830u: goto label_2a9830;
        case 0x2a9834u: goto label_2a9834;
        case 0x2a9838u: goto label_2a9838;
        case 0x2a983cu: goto label_2a983c;
        case 0x2a9840u: goto label_2a9840;
        case 0x2a9844u: goto label_2a9844;
        case 0x2a9848u: goto label_2a9848;
        case 0x2a984cu: goto label_2a984c;
        case 0x2a9850u: goto label_2a9850;
        case 0x2a9854u: goto label_2a9854;
        case 0x2a9858u: goto label_2a9858;
        case 0x2a985cu: goto label_2a985c;
        case 0x2a9860u: goto label_2a9860;
        case 0x2a9864u: goto label_2a9864;
        case 0x2a9868u: goto label_2a9868;
        case 0x2a986cu: goto label_2a986c;
        case 0x2a9870u: goto label_2a9870;
        case 0x2a9874u: goto label_2a9874;
        case 0x2a9878u: goto label_2a9878;
        case 0x2a987cu: goto label_2a987c;
        case 0x2a9880u: goto label_2a9880;
        case 0x2a9884u: goto label_2a9884;
        case 0x2a9888u: goto label_2a9888;
        case 0x2a988cu: goto label_2a988c;
        case 0x2a9890u: goto label_2a9890;
        case 0x2a9894u: goto label_2a9894;
        case 0x2a9898u: goto label_2a9898;
        case 0x2a989cu: goto label_2a989c;
        case 0x2a98a0u: goto label_2a98a0;
        case 0x2a98a4u: goto label_2a98a4;
        case 0x2a98a8u: goto label_2a98a8;
        case 0x2a98acu: goto label_2a98ac;
        case 0x2a98b0u: goto label_2a98b0;
        case 0x2a98b4u: goto label_2a98b4;
        case 0x2a98b8u: goto label_2a98b8;
        case 0x2a98bcu: goto label_2a98bc;
        case 0x2a98c0u: goto label_2a98c0;
        case 0x2a98c4u: goto label_2a98c4;
        case 0x2a98c8u: goto label_2a98c8;
        case 0x2a98ccu: goto label_2a98cc;
        case 0x2a98d0u: goto label_2a98d0;
        case 0x2a98d4u: goto label_2a98d4;
        case 0x2a98d8u: goto label_2a98d8;
        case 0x2a98dcu: goto label_2a98dc;
        case 0x2a98e0u: goto label_2a98e0;
        case 0x2a98e4u: goto label_2a98e4;
        case 0x2a98e8u: goto label_2a98e8;
        case 0x2a98ecu: goto label_2a98ec;
        case 0x2a98f0u: goto label_2a98f0;
        case 0x2a98f4u: goto label_2a98f4;
        case 0x2a98f8u: goto label_2a98f8;
        case 0x2a98fcu: goto label_2a98fc;
        case 0x2a9900u: goto label_2a9900;
        case 0x2a9904u: goto label_2a9904;
        case 0x2a9908u: goto label_2a9908;
        case 0x2a990cu: goto label_2a990c;
        case 0x2a9910u: goto label_2a9910;
        case 0x2a9914u: goto label_2a9914;
        case 0x2a9918u: goto label_2a9918;
        case 0x2a991cu: goto label_2a991c;
        case 0x2a9920u: goto label_2a9920;
        case 0x2a9924u: goto label_2a9924;
        case 0x2a9928u: goto label_2a9928;
        case 0x2a992cu: goto label_2a992c;
        case 0x2a9930u: goto label_2a9930;
        case 0x2a9934u: goto label_2a9934;
        case 0x2a9938u: goto label_2a9938;
        case 0x2a993cu: goto label_2a993c;
        case 0x2a9940u: goto label_2a9940;
        case 0x2a9944u: goto label_2a9944;
        case 0x2a9948u: goto label_2a9948;
        case 0x2a994cu: goto label_2a994c;
        case 0x2a9950u: goto label_2a9950;
        case 0x2a9954u: goto label_2a9954;
        case 0x2a9958u: goto label_2a9958;
        case 0x2a995cu: goto label_2a995c;
        case 0x2a9960u: goto label_2a9960;
        case 0x2a9964u: goto label_2a9964;
        case 0x2a9968u: goto label_2a9968;
        case 0x2a996cu: goto label_2a996c;
        case 0x2a9970u: goto label_2a9970;
        case 0x2a9974u: goto label_2a9974;
        case 0x2a9978u: goto label_2a9978;
        case 0x2a997cu: goto label_2a997c;
        case 0x2a9980u: goto label_2a9980;
        case 0x2a9984u: goto label_2a9984;
        case 0x2a9988u: goto label_2a9988;
        case 0x2a998cu: goto label_2a998c;
        case 0x2a9990u: goto label_2a9990;
        case 0x2a9994u: goto label_2a9994;
        case 0x2a9998u: goto label_2a9998;
        case 0x2a999cu: goto label_2a999c;
        case 0x2a99a0u: goto label_2a99a0;
        case 0x2a99a4u: goto label_2a99a4;
        case 0x2a99a8u: goto label_2a99a8;
        case 0x2a99acu: goto label_2a99ac;
        case 0x2a99b0u: goto label_2a99b0;
        case 0x2a99b4u: goto label_2a99b4;
        case 0x2a99b8u: goto label_2a99b8;
        case 0x2a99bcu: goto label_2a99bc;
        case 0x2a99c0u: goto label_2a99c0;
        case 0x2a99c4u: goto label_2a99c4;
        case 0x2a99c8u: goto label_2a99c8;
        case 0x2a99ccu: goto label_2a99cc;
        case 0x2a99d0u: goto label_2a99d0;
        case 0x2a99d4u: goto label_2a99d4;
        case 0x2a99d8u: goto label_2a99d8;
        case 0x2a99dcu: goto label_2a99dc;
        case 0x2a99e0u: goto label_2a99e0;
        case 0x2a99e4u: goto label_2a99e4;
        case 0x2a99e8u: goto label_2a99e8;
        case 0x2a99ecu: goto label_2a99ec;
        case 0x2a99f0u: goto label_2a99f0;
        case 0x2a99f4u: goto label_2a99f4;
        case 0x2a99f8u: goto label_2a99f8;
        case 0x2a99fcu: goto label_2a99fc;
        case 0x2a9a00u: goto label_2a9a00;
        case 0x2a9a04u: goto label_2a9a04;
        case 0x2a9a08u: goto label_2a9a08;
        case 0x2a9a0cu: goto label_2a9a0c;
        case 0x2a9a10u: goto label_2a9a10;
        case 0x2a9a14u: goto label_2a9a14;
        case 0x2a9a18u: goto label_2a9a18;
        case 0x2a9a1cu: goto label_2a9a1c;
        case 0x2a9a20u: goto label_2a9a20;
        case 0x2a9a24u: goto label_2a9a24;
        case 0x2a9a28u: goto label_2a9a28;
        case 0x2a9a2cu: goto label_2a9a2c;
        case 0x2a9a30u: goto label_2a9a30;
        case 0x2a9a34u: goto label_2a9a34;
        case 0x2a9a38u: goto label_2a9a38;
        case 0x2a9a3cu: goto label_2a9a3c;
        case 0x2a9a40u: goto label_2a9a40;
        case 0x2a9a44u: goto label_2a9a44;
        case 0x2a9a48u: goto label_2a9a48;
        case 0x2a9a4cu: goto label_2a9a4c;
        case 0x2a9a50u: goto label_2a9a50;
        case 0x2a9a54u: goto label_2a9a54;
        case 0x2a9a58u: goto label_2a9a58;
        case 0x2a9a5cu: goto label_2a9a5c;
        case 0x2a9a60u: goto label_2a9a60;
        case 0x2a9a64u: goto label_2a9a64;
        case 0x2a9a68u: goto label_2a9a68;
        case 0x2a9a6cu: goto label_2a9a6c;
        case 0x2a9a70u: goto label_2a9a70;
        case 0x2a9a74u: goto label_2a9a74;
        case 0x2a9a78u: goto label_2a9a78;
        case 0x2a9a7cu: goto label_2a9a7c;
        case 0x2a9a80u: goto label_2a9a80;
        case 0x2a9a84u: goto label_2a9a84;
        case 0x2a9a88u: goto label_2a9a88;
        case 0x2a9a8cu: goto label_2a9a8c;
        case 0x2a9a90u: goto label_2a9a90;
        case 0x2a9a94u: goto label_2a9a94;
        case 0x2a9a98u: goto label_2a9a98;
        case 0x2a9a9cu: goto label_2a9a9c;
        case 0x2a9aa0u: goto label_2a9aa0;
        case 0x2a9aa4u: goto label_2a9aa4;
        case 0x2a9aa8u: goto label_2a9aa8;
        case 0x2a9aacu: goto label_2a9aac;
        case 0x2a9ab0u: goto label_2a9ab0;
        case 0x2a9ab4u: goto label_2a9ab4;
        case 0x2a9ab8u: goto label_2a9ab8;
        case 0x2a9abcu: goto label_2a9abc;
        case 0x2a9ac0u: goto label_2a9ac0;
        case 0x2a9ac4u: goto label_2a9ac4;
        case 0x2a9ac8u: goto label_2a9ac8;
        case 0x2a9accu: goto label_2a9acc;
        case 0x2a9ad0u: goto label_2a9ad0;
        case 0x2a9ad4u: goto label_2a9ad4;
        case 0x2a9ad8u: goto label_2a9ad8;
        case 0x2a9adcu: goto label_2a9adc;
        case 0x2a9ae0u: goto label_2a9ae0;
        case 0x2a9ae4u: goto label_2a9ae4;
        case 0x2a9ae8u: goto label_2a9ae8;
        case 0x2a9aecu: goto label_2a9aec;
        case 0x2a9af0u: goto label_2a9af0;
        case 0x2a9af4u: goto label_2a9af4;
        case 0x2a9af8u: goto label_2a9af8;
        case 0x2a9afcu: goto label_2a9afc;
        case 0x2a9b00u: goto label_2a9b00;
        case 0x2a9b04u: goto label_2a9b04;
        case 0x2a9b08u: goto label_2a9b08;
        case 0x2a9b0cu: goto label_2a9b0c;
        case 0x2a9b10u: goto label_2a9b10;
        case 0x2a9b14u: goto label_2a9b14;
        case 0x2a9b18u: goto label_2a9b18;
        case 0x2a9b1cu: goto label_2a9b1c;
        case 0x2a9b20u: goto label_2a9b20;
        case 0x2a9b24u: goto label_2a9b24;
        case 0x2a9b28u: goto label_2a9b28;
        case 0x2a9b2cu: goto label_2a9b2c;
        case 0x2a9b30u: goto label_2a9b30;
        case 0x2a9b34u: goto label_2a9b34;
        case 0x2a9b38u: goto label_2a9b38;
        case 0x2a9b3cu: goto label_2a9b3c;
        case 0x2a9b40u: goto label_2a9b40;
        case 0x2a9b44u: goto label_2a9b44;
        case 0x2a9b48u: goto label_2a9b48;
        case 0x2a9b4cu: goto label_2a9b4c;
        case 0x2a9b50u: goto label_2a9b50;
        case 0x2a9b54u: goto label_2a9b54;
        case 0x2a9b58u: goto label_2a9b58;
        case 0x2a9b5cu: goto label_2a9b5c;
        case 0x2a9b60u: goto label_2a9b60;
        case 0x2a9b64u: goto label_2a9b64;
        case 0x2a9b68u: goto label_2a9b68;
        case 0x2a9b6cu: goto label_2a9b6c;
        case 0x2a9b70u: goto label_2a9b70;
        case 0x2a9b74u: goto label_2a9b74;
        case 0x2a9b78u: goto label_2a9b78;
        case 0x2a9b7cu: goto label_2a9b7c;
        case 0x2a9b80u: goto label_2a9b80;
        case 0x2a9b84u: goto label_2a9b84;
        case 0x2a9b88u: goto label_2a9b88;
        case 0x2a9b8cu: goto label_2a9b8c;
        case 0x2a9b90u: goto label_2a9b90;
        case 0x2a9b94u: goto label_2a9b94;
        case 0x2a9b98u: goto label_2a9b98;
        case 0x2a9b9cu: goto label_2a9b9c;
        case 0x2a9ba0u: goto label_2a9ba0;
        case 0x2a9ba4u: goto label_2a9ba4;
        case 0x2a9ba8u: goto label_2a9ba8;
        case 0x2a9bacu: goto label_2a9bac;
        case 0x2a9bb0u: goto label_2a9bb0;
        case 0x2a9bb4u: goto label_2a9bb4;
        case 0x2a9bb8u: goto label_2a9bb8;
        case 0x2a9bbcu: goto label_2a9bbc;
        case 0x2a9bc0u: goto label_2a9bc0;
        case 0x2a9bc4u: goto label_2a9bc4;
        case 0x2a9bc8u: goto label_2a9bc8;
        case 0x2a9bccu: goto label_2a9bcc;
        case 0x2a9bd0u: goto label_2a9bd0;
        case 0x2a9bd4u: goto label_2a9bd4;
        case 0x2a9bd8u: goto label_2a9bd8;
        case 0x2a9bdcu: goto label_2a9bdc;
        case 0x2a9be0u: goto label_2a9be0;
        case 0x2a9be4u: goto label_2a9be4;
        case 0x2a9be8u: goto label_2a9be8;
        case 0x2a9becu: goto label_2a9bec;
        case 0x2a9bf0u: goto label_2a9bf0;
        case 0x2a9bf4u: goto label_2a9bf4;
        default: break;
    }

    ctx->pc = 0x2a9810u;

label_2a9810:
    // 0x2a9810: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x2a9810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
label_2a9814:
    // 0x2a9814: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a9814u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2a9818:
    // 0x2a9818: 0x8c626d28  lw          $v0, 0x6D28($v1)
    ctx->pc = 0x2a9818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 27944)));
label_2a981c:
    // 0x2a981c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a981cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2a9820:
    // 0x2a9820: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a9820u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2a9824:
    // 0x2a9824: 0x10400049  beqz        $v0, . + 4 + (0x49 << 2)
label_2a9828:
    if (ctx->pc == 0x2A9828u) {
        ctx->pc = 0x2A9828u;
            // 0x2a9828: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2A982Cu;
        goto label_2a982c;
    }
    ctx->pc = 0x2A9824u;
    {
        const bool branch_taken_0x2a9824 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9828u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9824u;
            // 0x2a9828: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9824) {
            ctx->pc = 0x2A994Cu;
            goto label_2a994c;
        }
    }
    ctx->pc = 0x2A982Cu;
label_2a982c:
    // 0x2a982c: 0x0  nop
    ctx->pc = 0x2a982cu;
    // NOP
label_2a9830:
    // 0x2a9830: 0xc0aa8dc  jal         func_2AA370
label_2a9834:
    if (ctx->pc == 0x2A9834u) {
        ctx->pc = 0x2A9834u;
            // 0x2a9834: 0x3c1001c9  lui         $s0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)457 << 16));
        ctx->pc = 0x2A9838u;
        goto label_2a9838;
    }
    ctx->pc = 0x2A9830u;
    SET_GPR_U32(ctx, 31, 0x2A9838u);
    ctx->pc = 0x2A9834u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9830u;
            // 0x2a9834: 0x3c1001c9  lui         $s0, 0x1C9 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)457 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AA370u;
    if (runtime->hasFunction(0x2AA370u)) {
        auto targetFn = runtime->lookupFunction(0x2AA370u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9838u; }
        if (ctx->pc != 0x2A9838u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AA370_0x2aa370(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9838u; }
        if (ctx->pc != 0x2A9838u) { return; }
    }
    ctx->pc = 0x2A9838u;
label_2a9838:
    // 0x2a9838: 0x260348c8  addiu       $v1, $s0, 0x48C8
    ctx->pc = 0x2a9838u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 18632));
label_2a983c:
    // 0x2a983c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2a983cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9840:
    // 0x2a9840: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x2a9840u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_2a9844:
    // 0x2a9844: 0xa61025  or          $v0, $a1, $a2
    ctx->pc = 0x2a9844u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) | GPR_U64(ctx, 6));
label_2a9848:
    // 0x2a9848: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x2a9848u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_2a984c:
    // 0x2a984c: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
label_2a9850:
    if (ctx->pc == 0x2A9850u) {
        ctx->pc = 0x2A9850u;
            // 0x2a9850: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9854u;
        goto label_2a9854;
    }
    ctx->pc = 0x2A984Cu;
    {
        const bool branch_taken_0x2a984c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9850u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A984Cu;
            // 0x2a9850: 0x200882d  daddu       $s1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a984c) {
            ctx->pc = 0x2A98BCu;
            goto label_2a98bc;
        }
    }
    ctx->pc = 0x2A9854u;
label_2a9854:
    // 0x2a9854: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x2a9854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_2a9858:
    // 0x2a9858: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2a9858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_2a985c:
    // 0x2a985c: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2a985cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2a9860:
    // 0x2a9860: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2a9860u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2a9864:
    // 0x2a9864: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2a9864u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2a9868:
    // 0x2a9868: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x2a9868u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2a986c:
    // 0x2a986c: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x2a986cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2a9870:
    // 0x2a9870: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x2a9870u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2a9874:
    // 0x2a9874: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x2a9874u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2a9878:
    // 0x2a9878: 0x68aa001f  ldl         $t2, 0x1F($a1)
    ctx->pc = 0x2a9878u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem << shift)); }
label_2a987c:
    // 0x2a987c: 0x6caa0018  ldr         $t2, 0x18($a1)
    ctx->pc = 0x2a987cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 10, (GPR_U64(ctx, 10) & keepMask) | (mem >> shift)); }
label_2a9880:
    // 0x2a9880: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x2a9880u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9884:
    // 0x2a9884: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x2a9884u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9888:
    // 0x2a9888: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x2a9888u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a988c:
    // 0x2a988c: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x2a988cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9890:
    // 0x2a9890: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x2a9890u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9894:
    // 0x2a9894: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x2a9894u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9898:
    // 0x2a9898: 0xb0ca001f  sdl         $t2, 0x1F($a2)
    ctx->pc = 0x2a9898u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a989c:
    // 0x2a989c: 0xb4ca0018  sdr         $t2, 0x18($a2)
    ctx->pc = 0x2a989cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 10); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a98a0:
    // 0x2a98a0: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2a98a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2a98a4:
    // 0x2a98a4: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2a98a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_2a98a8:
    // 0x2a98a8: 0x0  nop
    ctx->pc = 0x2a98a8u;
    // NOP
label_2a98ac:
    // 0x2a98ac: 0x14a2ffec  bne         $a1, $v0, . + 4 + (-0x14 << 2)
label_2a98b0:
    if (ctx->pc == 0x2A98B0u) {
        ctx->pc = 0x2A98B4u;
        goto label_2a98b4;
    }
    ctx->pc = 0x2A98ACu;
    {
        const bool branch_taken_0x2a98ac = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a98ac) {
            ctx->pc = 0x2A9860u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9860;
        }
    }
    ctx->pc = 0x2A98B4u;
label_2a98b4:
    // 0x2a98b4: 0x10000011  b           . + 4 + (0x11 << 2)
label_2a98b8:
    if (ctx->pc == 0x2A98B8u) {
        ctx->pc = 0x2A98BCu;
        goto label_2a98bc;
    }
    ctx->pc = 0x2A98B4u;
    {
        const bool branch_taken_0x2a98b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a98b4) {
            ctx->pc = 0x2A98FCu;
            goto label_2a98fc;
        }
    }
    ctx->pc = 0x2A98BCu;
label_2a98bc:
    // 0x2a98bc: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x2a98bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
label_2a98c0:
    // 0x2a98c0: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2a98c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_2a98c4:
    // 0x2a98c4: 0x3c03002b  lui         $v1, 0x2B
    ctx->pc = 0x2a98c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)43 << 16));
label_2a98c8:
    // 0x2a98c8: 0xdca70000  ld          $a3, 0x0($a1)
    ctx->pc = 0x2a98c8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 5), 0)));
label_2a98cc:
    // 0x2a98cc: 0xdca80008  ld          $t0, 0x8($a1)
    ctx->pc = 0x2a98ccu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 5), 8)));
label_2a98d0:
    // 0x2a98d0: 0xdca90010  ld          $t1, 0x10($a1)
    ctx->pc = 0x2a98d0u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 5), 16)));
label_2a98d4:
    // 0x2a98d4: 0xdcaa0018  ld          $t2, 0x18($a1)
    ctx->pc = 0x2a98d4u;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 5), 24)));
label_2a98d8:
    // 0x2a98d8: 0xfcc70000  sd          $a3, 0x0($a2)
    ctx->pc = 0x2a98d8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 7));
label_2a98dc:
    // 0x2a98dc: 0xfcc80008  sd          $t0, 0x8($a2)
    ctx->pc = 0x2a98dcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 8));
label_2a98e0:
    // 0x2a98e0: 0xfcc90010  sd          $t1, 0x10($a2)
    ctx->pc = 0x2a98e0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 9));
label_2a98e4:
    // 0x2a98e4: 0xfcca0018  sd          $t2, 0x18($a2)
    ctx->pc = 0x2a98e4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 10));
label_2a98e8:
    // 0x2a98e8: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x2a98e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
label_2a98ec:
    // 0x2a98ec: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x2a98ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
label_2a98f0:
    // 0x2a98f0: 0x0  nop
    ctx->pc = 0x2a98f0u;
    // NOP
label_2a98f4:
    // 0x2a98f4: 0x14a2fff4  bne         $a1, $v0, . + 4 + (-0xC << 2)
label_2a98f8:
    if (ctx->pc == 0x2A98F8u) {
        ctx->pc = 0x2A98FCu;
        goto label_2a98fc;
    }
    ctx->pc = 0x2A98F4u;
    {
        const bool branch_taken_0x2a98f4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x2a98f4) {
            ctx->pc = 0x2A98C8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a98c8;
        }
    }
    ctx->pc = 0x2A98FCu;
label_2a98fc:
    // 0x2a98fc: 0x68a70007  ldl         $a3, 0x7($a1)
    ctx->pc = 0x2a98fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_2a9900:
    // 0x2a9900: 0x6ca70000  ldr         $a3, 0x0($a1)
    ctx->pc = 0x2a9900u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_2a9904:
    // 0x2a9904: 0x68a8000f  ldl         $t0, 0xF($a1)
    ctx->pc = 0x2a9904u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_2a9908:
    // 0x2a9908: 0x6ca80008  ldr         $t0, 0x8($a1)
    ctx->pc = 0x2a9908u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_2a990c:
    // 0x2a990c: 0x68a90017  ldl         $t1, 0x17($a1)
    ctx->pc = 0x2a990cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
label_2a9910:
    // 0x2a9910: 0x6ca90010  ldr         $t1, 0x10($a1)
    ctx->pc = 0x2a9910u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
label_2a9914:
    // 0x2a9914: 0x8caa0018  lw          $t2, 0x18($a1)
    ctx->pc = 0x2a9914u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
label_2a9918:
    // 0x2a9918: 0xb0c70007  sdl         $a3, 0x7($a2)
    ctx->pc = 0x2a9918u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a991c:
    // 0x2a991c: 0xb4c70000  sdr         $a3, 0x0($a2)
    ctx->pc = 0x2a991cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9920:
    // 0x2a9920: 0xb0c8000f  sdl         $t0, 0xF($a2)
    ctx->pc = 0x2a9920u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9924:
    // 0x2a9924: 0xb4c80008  sdr         $t0, 0x8($a2)
    ctx->pc = 0x2a9924u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9928:
    // 0x2a9928: 0xb0c90017  sdl         $t1, 0x17($a2)
    ctx->pc = 0x2a9928u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a992c:
    // 0x2a992c: 0xb4c90010  sdr         $t1, 0x10($a2)
    ctx->pc = 0x2a992cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_2a9930:
    // 0x2a9930: 0x262248c8  addiu       $v0, $s1, 0x48C8
    ctx->pc = 0x2a9930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 18632));
label_2a9934:
    // 0x2a9934: 0xacca0018  sw          $t2, 0x18($a2)
    ctx->pc = 0x2a9934u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 24), GPR_U32(ctx, 10));
label_2a9938:
    // 0x2a9938: 0x24849968  addiu       $a0, $a0, -0x6698
    ctx->pc = 0x2a9938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941032));
label_2a993c:
    // 0x2a993c: 0x246397b0  addiu       $v1, $v1, -0x6850
    ctx->pc = 0x2a993cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940592));
label_2a9940:
    // 0x2a9940: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x2a9940u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
label_2a9944:
    // 0x2a9944: 0x10000002  b           . + 4 + (0x2 << 2)
label_2a9948:
    if (ctx->pc == 0x2A9948u) {
        ctx->pc = 0x2A9948u;
            // 0x2a9948: 0xac43004c  sw          $v1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
        ctx->pc = 0x2A994Cu;
        goto label_2a994c;
    }
    ctx->pc = 0x2A9944u;
    {
        const bool branch_taken_0x2a9944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9948u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9944u;
            // 0x2a9948: 0xac43004c  sw          $v1, 0x4C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 76), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9944) {
            ctx->pc = 0x2A9950u;
            goto label_2a9950;
        }
    }
    ctx->pc = 0x2A994Cu;
label_2a994c:
    // 0x2a994c: 0x3c1001c9  lui         $s0, 0x1C9
    ctx->pc = 0x2a994cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)457 << 16));
label_2a9950:
    // 0x2a9950: 0x260248c8  addiu       $v0, $s0, 0x48C8
    ctx->pc = 0x2a9950u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 18632));
label_2a9954:
    // 0x2a9954: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a9954u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9958:
    // 0x2a9958: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a9958u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a995c:
    // 0x2a995c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a995cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9960:
    // 0x2a9960: 0x3e00008  jr          $ra
label_2a9964:
    if (ctx->pc == 0x2A9964u) {
        ctx->pc = 0x2A9964u;
            // 0x2a9964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2A9968u;
        goto label_2a9968;
    }
    ctx->pc = 0x2A9960u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9964u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9960u;
            // 0x2a9964: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9968u;
label_2a9968:
    // 0x2a9968: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a9968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2a996c:
    // 0x2a996c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2a996cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
label_2a9970:
    // 0x2a9970: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2a9970u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2a9974:
    // 0x2a9974: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a9974u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_2a9978:
    // 0x2a9978: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x2a9978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
label_2a997c:
    // 0x2a997c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x2a997cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
label_2a9980:
    // 0x2a9980: 0xc0a8d8a  jal         func_2A3628
label_2a9984:
    if (ctx->pc == 0x2A9984u) {
        ctx->pc = 0x2A9984u;
            // 0x2a9984: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->pc = 0x2A9988u;
        goto label_2a9988;
    }
    ctx->pc = 0x2A9980u;
    SET_GPR_U32(ctx, 31, 0x2A9988u);
    ctx->pc = 0x2A9984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9980u;
            // 0x2a9984: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3628u;
    if (runtime->hasFunction(0x2A3628u)) {
        auto targetFn = runtime->lookupFunction(0x2A3628u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9988u; }
        if (ctx->pc != 0x2A9988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3628_0x2a3628(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9988u; }
        if (ctx->pc != 0x2A9988u) { return; }
    }
    ctx->pc = 0x2A9988u;
label_2a9988:
    // 0x2a9988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2a9988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a998c:
    // 0x2a998c: 0xc0a8d66  jal         func_2A3598
label_2a9990:
    if (ctx->pc == 0x2A9990u) {
        ctx->pc = 0x2A9990u;
            // 0x2a9990: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->pc = 0x2A9994u;
        goto label_2a9994;
    }
    ctx->pc = 0x2A998Cu;
    SET_GPR_U32(ctx, 31, 0x2A9994u);
    ctx->pc = 0x2A9990u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A998Cu;
            // 0x2a9990: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3598u;
    if (runtime->hasFunction(0x2A3598u)) {
        auto targetFn = runtime->lookupFunction(0x2A3598u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9994u; }
        if (ctx->pc != 0x2A9994u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3598_0x2a3598(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9994u; }
        if (ctx->pc != 0x2A9994u) { return; }
    }
    ctx->pc = 0x2A9994u;
label_2a9994:
    // 0x2a9994: 0xc0a56b6  jal         func_295AD8
label_2a9998:
    if (ctx->pc == 0x2A9998u) {
        ctx->pc = 0x2A999Cu;
        goto label_2a999c;
    }
    ctx->pc = 0x2A9994u;
    SET_GPR_U32(ctx, 31, 0x2A999Cu);
    ctx->pc = 0x295AD8u;
    if (runtime->hasFunction(0x295AD8u)) {
        auto targetFn = runtime->lookupFunction(0x295AD8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A999Cu; }
        if (ctx->pc != 0x2A999Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295AD8_0x295ad8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A999Cu; }
        if (ctx->pc != 0x2A999Cu) { return; }
    }
    ctx->pc = 0x2A999Cu;
label_2a999c:
    // 0x2a999c: 0xc0491f2  jal         func_1247C8
label_2a99a0:
    if (ctx->pc == 0x2A99A0u) {
        ctx->pc = 0x2A99A4u;
        goto label_2a99a4;
    }
    ctx->pc = 0x2A999Cu;
    SET_GPR_U32(ctx, 31, 0x2A99A4u);
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99A4u; }
        if (ctx->pc != 0x2A99A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99A4u; }
        if (ctx->pc != 0x2A99A4u) { return; }
    }
    ctx->pc = 0x2A99A4u;
label_2a99a4:
    // 0x2a99a4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x2a99a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_2a99a8:
    // 0x2a99a8: 0x8e2200c0  lw          $v0, 0xC0($s1)
    ctx->pc = 0x2a99a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 192)));
label_2a99ac:
    // 0x2a99ac: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_2a99b0:
    if (ctx->pc == 0x2A99B0u) {
        ctx->pc = 0x2A99B0u;
            // 0x2a99b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A99B4u;
        goto label_2a99b4;
    }
    ctx->pc = 0x2A99ACu;
    {
        const bool branch_taken_0x2a99ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A99B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99ACu;
            // 0x2a99b0: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99ac) {
            ctx->pc = 0x2A99BCu;
            goto label_2a99bc;
        }
    }
    ctx->pc = 0x2A99B4u;
label_2a99b4:
    // 0x2a99b4: 0x8e2200dc  lw          $v0, 0xDC($s1)
    ctx->pc = 0x2a99b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2a99b8:
    // 0x2a99b8: 0x8c52007c  lw          $s2, 0x7C($v0)
    ctx->pc = 0x2a99b8u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 124)));
label_2a99bc:
    // 0x2a99bc: 0xc0ac604  jal         func_2B1810
label_2a99c0:
    if (ctx->pc == 0x2A99C0u) {
        ctx->pc = 0x2A99C0u;
            // 0x2a99c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A99C4u;
        goto label_2a99c4;
    }
    ctx->pc = 0x2A99BCu;
    SET_GPR_U32(ctx, 31, 0x2A99C4u);
    ctx->pc = 0x2A99C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99BCu;
            // 0x2a99c0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (runtime->hasFunction(0x2B1810u)) {
        auto targetFn = runtime->lookupFunction(0x2B1810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99C4u; }
        if (ctx->pc != 0x2A99C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1810_0x2b1810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99C4u; }
        if (ctx->pc != 0x2A99C4u) { return; }
    }
    ctx->pc = 0x2A99C4u;
label_2a99c4:
    // 0x2a99c4: 0x30423000  andi        $v0, $v0, 0x3000
    ctx->pc = 0x2a99c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12288);
label_2a99c8:
    // 0x2a99c8: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_2a99cc:
    if (ctx->pc == 0x2A99CCu) {
        ctx->pc = 0x2A99D0u;
        goto label_2a99d0;
    }
    ctx->pc = 0x2A99C8u;
    {
        const bool branch_taken_0x2a99c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a99c8) {
            ctx->pc = 0x2A99E4u;
            goto label_2a99e4;
        }
    }
    ctx->pc = 0x2A99D0u;
label_2a99d0:
    // 0x2a99d0: 0xc0ac604  jal         func_2B1810
label_2a99d4:
    if (ctx->pc == 0x2A99D4u) {
        ctx->pc = 0x2A99D4u;
            // 0x2a99d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A99D8u;
        goto label_2a99d8;
    }
    ctx->pc = 0x2A99D0u;
    SET_GPR_U32(ctx, 31, 0x2A99D8u);
    ctx->pc = 0x2A99D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99D0u;
            // 0x2a99d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B1810u;
    if (runtime->hasFunction(0x2B1810u)) {
        auto targetFn = runtime->lookupFunction(0x2B1810u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99D8u; }
        if (ctx->pc != 0x2A99D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B1810_0x2b1810(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99D8u; }
        if (ctx->pc != 0x2A99D8u) { return; }
    }
    ctx->pc = 0x2A99D8u;
label_2a99d8:
    // 0x2a99d8: 0x30424000  andi        $v0, $v0, 0x4000
    ctx->pc = 0x2a99d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16384);
label_2a99dc:
    // 0x2a99dc: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_2a99e0:
    if (ctx->pc == 0x2A99E0u) {
        ctx->pc = 0x2A99E0u;
            // 0x2a99e0: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2A99E4u;
        goto label_2a99e4;
    }
    ctx->pc = 0x2A99DCu;
    {
        const bool branch_taken_0x2a99dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a99dc) {
            ctx->pc = 0x2A99E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99DCu;
            // 0x2a99e0: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A99F0u;
            goto label_2a99f0;
        }
    }
    ctx->pc = 0x2A99E4u;
label_2a99e4:
    // 0x2a99e4: 0xc0abede  jal         func_2AFB78
label_2a99e8:
    if (ctx->pc == 0x2A99E8u) {
        ctx->pc = 0x2A99E8u;
            // 0x2a99e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A99ECu;
        goto label_2a99ec;
    }
    ctx->pc = 0x2A99E4u;
    SET_GPR_U32(ctx, 31, 0x2A99ECu);
    ctx->pc = 0x2A99E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99E4u;
            // 0x2a99e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AFB78u;
    if (runtime->hasFunction(0x2AFB78u)) {
        auto targetFn = runtime->lookupFunction(0x2AFB78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99ECu; }
        if (ctx->pc != 0x2A99ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AFB78_0x2afb78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A99ECu; }
        if (ctx->pc != 0x2A99ECu) { return; }
    }
    ctx->pc = 0x2A99ECu;
label_2a99ec:
    // 0x2a99ec: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2a99ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a99f0:
    // 0x2a99f0: 0x8e300030  lw          $s0, 0x30($s1)
    ctx->pc = 0x2a99f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
label_2a99f4:
    // 0x2a99f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2a99f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_2a99f8:
    // 0x2a99f8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2a99fc:
    if (ctx->pc == 0x2A99FCu) {
        ctx->pc = 0x2A99FCu;
            // 0x2a99fc: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2A9A00u;
        goto label_2a9a00;
    }
    ctx->pc = 0x2A99F8u;
    {
        const bool branch_taken_0x2a99f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A99FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A99F8u;
            // 0x2a99fc: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a99f8) {
            ctx->pc = 0x2A9A18u;
            goto label_2a9a18;
        }
    }
    ctx->pc = 0x2A9A00u;
label_2a9a00:
    // 0x2a9a00: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x2a9a00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_2a9a04:
    // 0x2a9a04: 0x10000054  b           . + 4 + (0x54 << 2)
label_2a9a08:
    if (ctx->pc == 0x2A9A08u) {
        ctx->pc = 0x2A9A08u;
            // 0x2a9a08: 0x240600dd  addiu       $a2, $zero, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
        ctx->pc = 0x2A9A0Cu;
        goto label_2a9a0c;
    }
    ctx->pc = 0x2A9A04u;
    {
        const bool branch_taken_0x2a9a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A04u;
            // 0x2a9a08: 0x240600dd  addiu       $a2, $zero, 0xDD (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 221));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a04) {
            ctx->pc = 0x2A9B58u;
            goto label_2a9b58;
        }
    }
    ctx->pc = 0x2A9A0Cu;
label_2a9a0c:
    // 0x2a9a0c: 0x10000069  b           . + 4 + (0x69 << 2)
label_2a9a10:
    if (ctx->pc == 0x2A9A10u) {
        ctx->pc = 0x2A9A10u;
            // 0x2a9a10: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A9A14u;
        goto label_2a9a14;
    }
    ctx->pc = 0x2A9A0Cu;
    {
        const bool branch_taken_0x2a9a0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A0Cu;
            // 0x2a9a10: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a0c) {
            ctx->pc = 0x2A9BB4u;
            goto label_2a9bb4;
        }
    }
    ctx->pc = 0x2A9A14u;
label_2a9a14:
    // 0x2a9a14: 0x0  nop
    ctx->pc = 0x2a9a14u;
    // NOP
label_2a9a18:
    // 0x2a9a18: 0x2a021212  slti        $v0, $s0, 0x1212
    ctx->pc = 0x2a9a18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4626) ? 1 : 0);
label_2a9a1c:
    // 0x2a9a1c: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2a9a20:
    if (ctx->pc == 0x2A9A20u) {
        ctx->pc = 0x2A9A20u;
            // 0x2a9a20: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A24u;
        goto label_2a9a24;
    }
    ctx->pc = 0x2A9A1Cu;
    {
        const bool branch_taken_0x2a9a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A1Cu;
            // 0x2a9a20: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a1c) {
            ctx->pc = 0x2A9A48u;
            goto label_2a9a48;
        }
    }
    ctx->pc = 0x2A9A24u;
label_2a9a24:
    // 0x2a9a24: 0x2a021210  slti        $v0, $s0, 0x1210
    ctx->pc = 0x2a9a24u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4624) ? 1 : 0);
label_2a9a28:
    // 0x2a9a28: 0x1040003f  beqz        $v0, . + 4 + (0x3F << 2)
label_2a9a2c:
    if (ctx->pc == 0x2A9A2Cu) {
        ctx->pc = 0x2A9A2Cu;
            // 0x2a9a2c: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->pc = 0x2A9A30u;
        goto label_2a9a30;
    }
    ctx->pc = 0x2A9A28u;
    {
        const bool branch_taken_0x2a9a28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A28u;
            // 0x2a9a2c: 0x24021000  addiu       $v0, $zero, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a28) {
            ctx->pc = 0x2A9B28u;
            goto label_2a9b28;
        }
    }
    ctx->pc = 0x2A9A30u;
label_2a9a30:
    // 0x2a9a30: 0x12020017  beq         $s0, $v0, . + 4 + (0x17 << 2)
label_2a9a34:
    if (ctx->pc == 0x2A9A34u) {
        ctx->pc = 0x2A9A34u;
            // 0x2a9a34: 0x24021003  addiu       $v0, $zero, 0x1003 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
        ctx->pc = 0x2A9A38u;
        goto label_2a9a38;
    }
    ctx->pc = 0x2A9A30u;
    {
        const bool branch_taken_0x2a9a30 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A9A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A30u;
            // 0x2a9a34: 0x24021003  addiu       $v0, $zero, 0x1003 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4099));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a30) {
            ctx->pc = 0x2A9A90u;
            goto label_2a9a90;
        }
    }
    ctx->pc = 0x2A9A38u;
label_2a9a38:
    // 0x2a9a38: 0x12020015  beq         $s0, $v0, . + 4 + (0x15 << 2)
label_2a9a3c:
    if (ctx->pc == 0x2A9A3Cu) {
        ctx->pc = 0x2A9A3Cu;
            // 0x2a9a3c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2A9A40u;
        goto label_2a9a40;
    }
    ctx->pc = 0x2A9A38u;
    {
        const bool branch_taken_0x2a9a38 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A9A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A38u;
            // 0x2a9a3c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a38) {
            ctx->pc = 0x2A9A90u;
            goto label_2a9a90;
        }
    }
    ctx->pc = 0x2A9A40u;
label_2a9a40:
    // 0x2a9a40: 0x10000044  b           . + 4 + (0x44 << 2)
label_2a9a44:
    if (ctx->pc == 0x2A9A44u) {
        ctx->pc = 0x2A9A44u;
            // 0x2a9a44: 0x24050075  addiu       $a1, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->pc = 0x2A9A48u;
        goto label_2a9a48;
    }
    ctx->pc = 0x2A9A40u;
    {
        const bool branch_taken_0x2a9a40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A40u;
            // 0x2a9a44: 0x24050075  addiu       $a1, $zero, 0x75 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a40) {
            ctx->pc = 0x2A9B54u;
            goto label_2a9b54;
        }
    }
    ctx->pc = 0x2A9A48u;
label_2a9a48:
    // 0x2a9a48: 0x24024000  addiu       $v0, $zero, 0x4000
    ctx->pc = 0x2a9a48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
label_2a9a4c:
    // 0x2a9a4c: 0x12020010  beq         $s0, $v0, . + 4 + (0x10 << 2)
label_2a9a50:
    if (ctx->pc == 0x2A9A50u) {
        ctx->pc = 0x2A9A50u;
            // 0x2a9a50: 0x2a024001  slti        $v0, $s0, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16385) ? 1 : 0);
        ctx->pc = 0x2A9A54u;
        goto label_2a9a54;
    }
    ctx->pc = 0x2A9A4Cu;
    {
        const bool branch_taken_0x2a9a4c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2A9A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A4Cu;
            // 0x2a9a50: 0x2a024001  slti        $v0, $s0, 0x4001 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)16385) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a4c) {
            ctx->pc = 0x2A9A90u;
            goto label_2a9a90;
        }
    }
    ctx->pc = 0x2A9A54u;
label_2a9a54:
    // 0x2a9a54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_2a9a58:
    if (ctx->pc == 0x2A9A58u) {
        ctx->pc = 0x2A9A58u;
            // 0x2a9a58: 0x2a021222  slti        $v0, $s0, 0x1222 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4642) ? 1 : 0);
        ctx->pc = 0x2A9A5Cu;
        goto label_2a9a5c;
    }
    ctx->pc = 0x2A9A54u;
    {
        const bool branch_taken_0x2a9a54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A54u;
            // 0x2a9a58: 0x2a021222  slti        $v0, $s0, 0x1222 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4642) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a54) {
            ctx->pc = 0x2A9A84u;
            goto label_2a9a84;
        }
    }
    ctx->pc = 0x2A9A5Cu;
label_2a9a5c:
    // 0x2a9a5c: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
label_2a9a60:
    if (ctx->pc == 0x2A9A60u) {
        ctx->pc = 0x2A9A60u;
            // 0x2a9a60: 0x2a021220  slti        $v0, $s0, 0x1220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4640) ? 1 : 0);
        ctx->pc = 0x2A9A64u;
        goto label_2a9a64;
    }
    ctx->pc = 0x2A9A5Cu;
    {
        const bool branch_taken_0x2a9a5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A5Cu;
            // 0x2a9a60: 0x2a021220  slti        $v0, $s0, 0x1220 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4640) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a5c) {
            ctx->pc = 0x2A9B4Cu;
            goto label_2a9b4c;
        }
    }
    ctx->pc = 0x2A9A64u;
label_2a9a64:
    // 0x2a9a64: 0x1440003a  bnez        $v0, . + 4 + (0x3A << 2)
label_2a9a68:
    if (ctx->pc == 0x2A9A68u) {
        ctx->pc = 0x2A9A68u;
            // 0x2a9a68: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2A9A6Cu;
        goto label_2a9a6c;
    }
    ctx->pc = 0x2A9A64u;
    {
        const bool branch_taken_0x2a9a64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A64u;
            // 0x2a9a68: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a64) {
            ctx->pc = 0x2A9B50u;
            goto label_2a9b50;
        }
    }
    ctx->pc = 0x2A9A6Cu;
label_2a9a6c:
    // 0x2a9a6c: 0xc0aa7a2  jal         func_2A9E88
label_2a9a70:
    if (ctx->pc == 0x2A9A70u) {
        ctx->pc = 0x2A9A70u;
            // 0x2a9a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A74u;
        goto label_2a9a74;
    }
    ctx->pc = 0x2A9A6Cu;
    SET_GPR_U32(ctx, 31, 0x2A9A74u);
    ctx->pc = 0x2A9A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A6Cu;
            // 0x2a9a70: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9E88u;
    if (runtime->hasFunction(0x2A9E88u)) {
        auto targetFn = runtime->lookupFunction(0x2A9E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9A74u; }
        if (ctx->pc != 0x2A9A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9E88_0x2a9e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9A74u; }
        if (ctx->pc != 0x2A9A74u) { return; }
    }
    ctx->pc = 0x2A9A74u;
label_2a9a74:
    // 0x2a9a74: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9a74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9a78:
    // 0x2a9a78: 0x2a020000  slti        $v0, $s0, 0x0
    ctx->pc = 0x2a9a78u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)0) ? 1 : 0);
label_2a9a7c:
    // 0x2a9a7c: 0x1000004d  b           . + 4 + (0x4D << 2)
label_2a9a80:
    if (ctx->pc == 0x2A9A80u) {
        ctx->pc = 0x2A9A80u;
            // 0x2a9a80: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->pc = 0x2A9A84u;
        goto label_2a9a84;
    }
    ctx->pc = 0x2A9A7Cu;
    {
        const bool branch_taken_0x2a9a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A7Cu;
            // 0x2a9a80: 0x2900a  movz        $s2, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 18, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a7c) {
            ctx->pc = 0x2A9BB4u;
            goto label_2a9bb4;
        }
    }
    ctx->pc = 0x2A9A84u;
label_2a9a84:
    // 0x2a9a84: 0x24025000  addiu       $v0, $zero, 0x5000
    ctx->pc = 0x2a9a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20480));
label_2a9a88:
    // 0x2a9a88: 0x16020031  bne         $s0, $v0, . + 4 + (0x31 << 2)
label_2a9a8c:
    if (ctx->pc == 0x2A9A8Cu) {
        ctx->pc = 0x2A9A8Cu;
            // 0x2a9a8c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2A9A90u;
        goto label_2a9a90;
    }
    ctx->pc = 0x2A9A88u;
    {
        const bool branch_taken_0x2a9a88 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2A9A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A88u;
            // 0x2a9a8c: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a88) {
            ctx->pc = 0x2A9B50u;
            goto label_2a9b50;
        }
    }
    ctx->pc = 0x2A9A90u;
label_2a9a90:
    // 0x2a9a90: 0x8e2200b0  lw          $v0, 0xB0($s1)
    ctx->pc = 0x2a9a90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 176)));
label_2a9a94:
    // 0x2a9a94: 0x1440ffda  bnez        $v0, . + 4 + (-0x26 << 2)
label_2a9a98:
    if (ctx->pc == 0x2A9A98u) {
        ctx->pc = 0x2A9A98u;
            // 0x2a9a98: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->pc = 0x2A9A9Cu;
        goto label_2a9a9c;
    }
    ctx->pc = 0x2A9A94u;
    {
        const bool branch_taken_0x2a9a94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9A98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A94u;
            // 0x2a9a98: 0x24040014  addiu       $a0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a94) {
            ctx->pc = 0x2A9A00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9a00;
        }
    }
    ctx->pc = 0x2A9A9Cu;
label_2a9a9c:
    // 0x2a9a9c: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2a9aa0:
    if (ctx->pc == 0x2A9AA0u) {
        ctx->pc = 0x2A9AA0u;
            // 0x2a9aa0: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->pc = 0x2A9AA4u;
        goto label_2a9aa4;
    }
    ctx->pc = 0x2A9A9Cu;
    {
        const bool branch_taken_0x2a9a9c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9A9Cu;
            // 0x2a9aa0: 0xae200024  sw          $zero, 0x24($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9a9c) {
            ctx->pc = 0x2A9AB4u;
            goto label_2a9ab4;
        }
    }
    ctx->pc = 0x2A9AA4u;
label_2a9aa4:
    // 0x2a9aa4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9aa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9aa8:
    // 0x2a9aa8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x2a9aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_2a9aac:
    // 0x2a9aac: 0x240f809  jalr        $s2
label_2a9ab0:
    if (ctx->pc == 0x2A9AB0u) {
        ctx->pc = 0x2A9AB0u;
            // 0x2a9ab0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A9AB4u;
        goto label_2a9ab4;
    }
    ctx->pc = 0x2A9AACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2A9AB4u);
        ctx->pc = 0x2A9AB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AACu;
            // 0x2a9ab0: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9AB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9AB4u; }
            if (ctx->pc != 0x2A9AB4u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9AB4u;
label_2a9ab4:
    // 0x2a9ab4: 0x24021000  addiu       $v0, $zero, 0x1000
    ctx->pc = 0x2a9ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2a9ab8:
    // 0x2a9ab8: 0x8e23003c  lw          $v1, 0x3C($s1)
    ctx->pc = 0x2a9ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
label_2a9abc:
    // 0x2a9abc: 0x1460000b  bnez        $v1, . + 4 + (0xB << 2)
label_2a9ac0:
    if (ctx->pc == 0x2A9AC0u) {
        ctx->pc = 0x2A9AC0u;
            // 0x2a9ac0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x2A9AC4u;
        goto label_2a9ac4;
    }
    ctx->pc = 0x2A9ABCu;
    {
        const bool branch_taken_0x2a9abc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9ABCu;
            // 0x2a9ac0: 0xae220004  sw          $v0, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9abc) {
            ctx->pc = 0x2A9AECu;
            goto label_2a9aec;
        }
    }
    ctx->pc = 0x2A9AC4u;
label_2a9ac4:
    // 0x2a9ac4: 0xc0a32b4  jal         func_28CAD0
label_2a9ac8:
    if (ctx->pc == 0x2A9AC8u) {
        ctx->pc = 0x2A9ACCu;
        goto label_2a9acc;
    }
    ctx->pc = 0x2A9AC4u;
    SET_GPR_U32(ctx, 31, 0x2A9ACCu);
    ctx->pc = 0x28CAD0u;
    if (runtime->hasFunction(0x28CAD0u)) {
        auto targetFn = runtime->lookupFunction(0x28CAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9ACCu; }
        if (ctx->pc != 0x2A9ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CAD0_0x28cad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9ACCu; }
        if (ctx->pc != 0x2A9ACCu) { return; }
    }
    ctx->pc = 0x2A9ACCu;
label_2a9acc:
    // 0x2a9acc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9accu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9ad0:
    // 0x2a9ad0: 0x1200ffce  beqz        $s0, . + 4 + (-0x32 << 2)
label_2a9ad4:
    if (ctx->pc == 0x2A9AD4u) {
        ctx->pc = 0x2A9AD4u;
            // 0x2a9ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AD8u;
        goto label_2a9ad8;
    }
    ctx->pc = 0x2A9AD0u;
    {
        const bool branch_taken_0x2a9ad0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AD0u;
            // 0x2a9ad4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9ad0) {
            ctx->pc = 0x2A9A0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9a0c;
        }
    }
    ctx->pc = 0x2A9AD8u;
label_2a9ad8:
    // 0x2a9ad8: 0xc0a32e0  jal         func_28CB80
label_2a9adc:
    if (ctx->pc == 0x2A9ADCu) {
        ctx->pc = 0x2A9ADCu;
            // 0x2a9adc: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->pc = 0x2A9AE0u;
        goto label_2a9ae0;
    }
    ctx->pc = 0x2A9AD8u;
    SET_GPR_U32(ctx, 31, 0x2A9AE0u);
    ctx->pc = 0x2A9ADCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AD8u;
            // 0x2a9adc: 0x24050800  addiu       $a1, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28CB80u;
    if (runtime->hasFunction(0x28CB80u)) {
        auto targetFn = runtime->lookupFunction(0x28CB80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9AE0u; }
        if (ctx->pc != 0x2A9AE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028CB80_0x28cb80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9AE0u; }
        if (ctx->pc != 0x2A9AE0u) { return; }
    }
    ctx->pc = 0x2A9AE0u;
label_2a9ae0:
    // 0x2a9ae0: 0x50400034  beql        $v0, $zero, . + 4 + (0x34 << 2)
label_2a9ae4:
    if (ctx->pc == 0x2A9AE4u) {
        ctx->pc = 0x2A9AE4u;
            // 0x2a9ae4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A9AE8u;
        goto label_2a9ae8;
    }
    ctx->pc = 0x2A9AE0u;
    {
        const bool branch_taken_0x2a9ae0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2a9ae0) {
            ctx->pc = 0x2A9AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AE0u;
            // 0x2a9ae4: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A9BB4u;
            goto label_2a9bb4;
        }
    }
    ctx->pc = 0x2A9AE8u;
label_2a9ae8:
    // 0x2a9ae8: 0xae30003c  sw          $s0, 0x3C($s1)
    ctx->pc = 0x2a9ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 16));
label_2a9aec:
    // 0x2a9aec: 0xc0ab574  jal         func_2AD5D0
label_2a9af0:
    if (ctx->pc == 0x2A9AF0u) {
        ctx->pc = 0x2A9AF0u;
            // 0x2a9af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AF4u;
        goto label_2a9af4;
    }
    ctx->pc = 0x2A9AECu;
    SET_GPR_U32(ctx, 31, 0x2A9AF4u);
    ctx->pc = 0x2A9AF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AECu;
            // 0x2a9af0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AD5D0u;
    if (runtime->hasFunction(0x2AD5D0u)) {
        auto targetFn = runtime->lookupFunction(0x2AD5D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9AF4u; }
        if (ctx->pc != 0x2A9AF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AD5D0_0x2ad5d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9AF4u; }
        if (ctx->pc != 0x2A9AF4u) { return; }
    }
    ctx->pc = 0x2A9AF4u;
label_2a9af4:
    // 0x2a9af4: 0x1040002f  beqz        $v0, . + 4 + (0x2F << 2)
label_2a9af8:
    if (ctx->pc == 0x2A9AF8u) {
        ctx->pc = 0x2A9AF8u;
            // 0x2a9af8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A9AFCu;
        goto label_2a9afc;
    }
    ctx->pc = 0x2A9AF4u;
    {
        const bool branch_taken_0x2a9af4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9AF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AF4u;
            // 0x2a9af8: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9af4) {
            ctx->pc = 0x2A9BB4u;
            goto label_2a9bb4;
        }
    }
    ctx->pc = 0x2A9AFCu;
label_2a9afc:
    // 0x2a9afc: 0xc0ab988  jal         func_2AE620
label_2a9b00:
    if (ctx->pc == 0x2A9B00u) {
        ctx->pc = 0x2A9B00u;
            // 0x2a9b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B04u;
        goto label_2a9b04;
    }
    ctx->pc = 0x2A9AFCu;
    SET_GPR_U32(ctx, 31, 0x2A9B04u);
    ctx->pc = 0x2A9B00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9AFCu;
            // 0x2a9b00: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AE620u;
    if (runtime->hasFunction(0x2AE620u)) {
        auto targetFn = runtime->lookupFunction(0x2AE620u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B04u; }
        if (ctx->pc != 0x2A9B04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AE620_0x2ae620(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B04u; }
        if (ctx->pc != 0x2A9B04u) { return; }
    }
    ctx->pc = 0x2A9B04u;
label_2a9b04:
    // 0x2a9b04: 0x1040ffc1  beqz        $v0, . + 4 + (-0x3F << 2)
label_2a9b08:
    if (ctx->pc == 0x2A9B08u) {
        ctx->pc = 0x2A9B08u;
            // 0x2a9b08: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->pc = 0x2A9B0Cu;
        goto label_2a9b0c;
    }
    ctx->pc = 0x2A9B04u;
    {
        const bool branch_taken_0x2a9b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B04u;
            // 0x2a9b08: 0x24021210  addiu       $v0, $zero, 0x1210 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b04) {
            ctx->pc = 0x2A9A0Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9a0c;
        }
    }
    ctx->pc = 0x2A9B0Cu;
label_2a9b0c:
    // 0x2a9b0c: 0x8e2400dc  lw          $a0, 0xDC($s1)
    ctx->pc = 0x2a9b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 220)));
label_2a9b10:
    // 0x2a9b10: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x2a9b10u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
label_2a9b14:
    // 0x2a9b14: 0x8c83004c  lw          $v1, 0x4C($a0)
    ctx->pc = 0x2a9b14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 76)));
label_2a9b18:
    // 0x2a9b18: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x2a9b18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_2a9b1c:
    // 0x2a9b1c: 0xac83004c  sw          $v1, 0x4C($a0)
    ctx->pc = 0x2a9b1cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 76), GPR_U32(ctx, 3));
label_2a9b20:
    // 0x2a9b20: 0x10000013  b           . + 4 + (0x13 << 2)
label_2a9b24:
    if (ctx->pc == 0x2A9B24u) {
        ctx->pc = 0x2A9B24u;
            // 0x2a9b24: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->pc = 0x2A9B28u;
        goto label_2a9b28;
    }
    ctx->pc = 0x2A9B20u;
    {
        const bool branch_taken_0x2a9b20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B20u;
            // 0x2a9b24: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b20) {
            ctx->pc = 0x2A9B70u;
            goto label_2a9b70;
        }
    }
    ctx->pc = 0x2A9B28u;
label_2a9b28:
    // 0x2a9b28: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x2a9b28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
label_2a9b2c:
    // 0x2a9b2c: 0xc0aa6fe  jal         func_2A9BF8
label_2a9b30:
    if (ctx->pc == 0x2A9B30u) {
        ctx->pc = 0x2A9B30u;
            // 0x2a9b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B34u;
        goto label_2a9b34;
    }
    ctx->pc = 0x2A9B2Cu;
    SET_GPR_U32(ctx, 31, 0x2A9B34u);
    ctx->pc = 0x2A9B30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B2Cu;
            // 0x2a9b30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A9BF8u;
    if (runtime->hasFunction(0x2A9BF8u)) {
        auto targetFn = runtime->lookupFunction(0x2A9BF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B34u; }
        if (ctx->pc != 0x2A9B34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A9BF8_0x2a9bf8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B34u; }
        if (ctx->pc != 0x2A9B34u) { return; }
    }
    ctx->pc = 0x2A9B34u;
label_2a9b34:
    // 0x2a9b34: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2a9b34u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2a9b38:
    // 0x2a9b38: 0x1a00001e  blez        $s0, . + 4 + (0x1E << 2)
label_2a9b3c:
    if (ctx->pc == 0x2A9B3Cu) {
        ctx->pc = 0x2A9B3Cu;
            // 0x2a9b3c: 0x24021220  addiu       $v0, $zero, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4640));
        ctx->pc = 0x2A9B40u;
        goto label_2a9b40;
    }
    ctx->pc = 0x2A9B38u;
    {
        const bool branch_taken_0x2a9b38 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x2A9B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B38u;
            // 0x2a9b3c: 0x24021220  addiu       $v0, $zero, 0x1220 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4640));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b38) {
            ctx->pc = 0x2A9BB4u;
            goto label_2a9bb4;
        }
    }
    ctx->pc = 0x2A9B40u;
label_2a9b40:
    // 0x2a9b40: 0xae200040  sw          $zero, 0x40($s1)
    ctx->pc = 0x2a9b40u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
label_2a9b44:
    // 0x2a9b44: 0x1000000a  b           . + 4 + (0xA << 2)
label_2a9b48:
    if (ctx->pc == 0x2A9B48u) {
        ctx->pc = 0x2A9B48u;
            // 0x2a9b48: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->pc = 0x2A9B4Cu;
        goto label_2a9b4c;
    }
    ctx->pc = 0x2A9B44u;
    {
        const bool branch_taken_0x2a9b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B44u;
            // 0x2a9b48: 0xae220030  sw          $v0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b44) {
            ctx->pc = 0x2A9B70u;
            goto label_2a9b70;
        }
    }
    ctx->pc = 0x2A9B4Cu;
label_2a9b4c:
    // 0x2a9b4c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x2a9b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
label_2a9b50:
    // 0x2a9b50: 0x24050075  addiu       $a1, $zero, 0x75
    ctx->pc = 0x2a9b50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 117));
label_2a9b54:
    // 0x2a9b54: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x2a9b54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
label_2a9b58:
    // 0x2a9b58: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2a9b58u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9b5c:
    // 0x2a9b5c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x2a9b5cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9b60:
    // 0x2a9b60: 0xc0a5648  jal         func_295920
label_2a9b64:
    if (ctx->pc == 0x2A9B64u) {
        ctx->pc = 0x2A9B64u;
            // 0x2a9b64: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2A9B68u;
        goto label_2a9b68;
    }
    ctx->pc = 0x2A9B60u;
    SET_GPR_U32(ctx, 31, 0x2A9B68u);
    ctx->pc = 0x2A9B64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B60u;
            // 0x2a9b64: 0x2410ffff  addiu       $s0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B68u; }
        if (ctx->pc != 0x2A9B68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B68u; }
        if (ctx->pc != 0x2A9B68u) { return; }
    }
    ctx->pc = 0x2A9B68u;
label_2a9b68:
    // 0x2a9b68: 0x10000013  b           . + 4 + (0x13 << 2)
label_2a9b6c:
    if (ctx->pc == 0x2A9B6Cu) {
        ctx->pc = 0x2A9B6Cu;
            // 0x2a9b6c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->pc = 0x2A9B70u;
        goto label_2a9b70;
    }
    ctx->pc = 0x2A9B68u;
    {
        const bool branch_taken_0x2a9b68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B68u;
            // 0x2a9b6c: 0x8e22001c  lw          $v0, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b68) {
            ctx->pc = 0x2A9BB8u;
            goto label_2a9bb8;
        }
    }
    ctx->pc = 0x2A9B70u;
label_2a9b70:
    // 0x2a9b70: 0x8e2200e0  lw          $v0, 0xE0($s1)
    ctx->pc = 0x2a9b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 224)));
label_2a9b74:
    // 0x2a9b74: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_2a9b78:
    if (ctx->pc == 0x2A9B78u) {
        ctx->pc = 0x2A9B78u;
            // 0x2a9b78: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->pc = 0x2A9B7Cu;
        goto label_2a9b7c;
    }
    ctx->pc = 0x2A9B74u;
    {
        const bool branch_taken_0x2a9b74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B74u;
            // 0x2a9b78: 0x2405000b  addiu       $a1, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b74) {
            ctx->pc = 0x2A9B8Cu;
            goto label_2a9b8c;
        }
    }
    ctx->pc = 0x2A9B7Cu;
label_2a9b7c:
    // 0x2a9b7c: 0x8e240010  lw          $a0, 0x10($s1)
    ctx->pc = 0x2a9b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
label_2a9b80:
    // 0x2a9b80: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2a9b80u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2a9b84:
    // 0x2a9b84: 0xc0a1558  jal         func_285560
label_2a9b88:
    if (ctx->pc == 0x2A9B88u) {
        ctx->pc = 0x2A9B88u;
            // 0x2a9b88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B8Cu;
        goto label_2a9b8c;
    }
    ctx->pc = 0x2A9B84u;
    SET_GPR_U32(ctx, 31, 0x2A9B8Cu);
    ctx->pc = 0x2A9B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B84u;
            // 0x2a9b88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x285560u;
    if (runtime->hasFunction(0x285560u)) {
        auto targetFn = runtime->lookupFunction(0x285560u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B8Cu; }
        if (ctx->pc != 0x2A9B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00285560_0x285560(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A9B8Cu; }
        if (ctx->pc != 0x2A9B8Cu) { return; }
    }
    ctx->pc = 0x2A9B8Cu;
label_2a9b8c:
    // 0x2a9b8c: 0x1240ffa2  beqz        $s2, . + 4 + (-0x5E << 2)
label_2a9b90:
    if (ctx->pc == 0x2A9B90u) {
        ctx->pc = 0x2A9B90u;
            // 0x2a9b90: 0x8e300030  lw          $s0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->pc = 0x2A9B94u;
        goto label_2a9b94;
    }
    ctx->pc = 0x2A9B8Cu;
    {
        const bool branch_taken_0x2a9b8c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B8Cu;
            // 0x2a9b90: 0x8e300030  lw          $s0, 0x30($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b8c) {
            ctx->pc = 0x2A9A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9a18;
        }
    }
    ctx->pc = 0x2A9B94u;
label_2a9b94:
    // 0x2a9b94: 0x1213ffa0  beq         $s0, $s3, . + 4 + (-0x60 << 2)
label_2a9b98:
    if (ctx->pc == 0x2A9B98u) {
        ctx->pc = 0x2A9B98u;
            // 0x2a9b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9B9Cu;
        goto label_2a9b9c;
    }
    ctx->pc = 0x2A9B94u;
    {
        const bool branch_taken_0x2a9b94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 19));
        ctx->pc = 0x2A9B98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9B94u;
            // 0x2a9b98: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9b94) {
            ctx->pc = 0x2A9A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9a18;
        }
    }
    ctx->pc = 0x2A9B9Cu;
label_2a9b9c:
    // 0x2a9b9c: 0xae330030  sw          $s3, 0x30($s1)
    ctx->pc = 0x2a9b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 19));
label_2a9ba0:
    // 0x2a9ba0: 0x24051001  addiu       $a1, $zero, 0x1001
    ctx->pc = 0x2a9ba0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4097));
label_2a9ba4:
    // 0x2a9ba4: 0x240f809  jalr        $s2
label_2a9ba8:
    if (ctx->pc == 0x2A9BA8u) {
        ctx->pc = 0x2A9BA8u;
            // 0x2a9ba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2A9BACu;
        goto label_2a9bac;
    }
    ctx->pc = 0x2A9BA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2A9BACu);
        ctx->pc = 0x2A9BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BA4u;
            // 0x2a9ba8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9BACu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9BACu; }
            if (ctx->pc != 0x2A9BACu) { return; }
        }
        }
    }
    ctx->pc = 0x2A9BACu;
label_2a9bac:
    // 0x2a9bac: 0x1000ff9a  b           . + 4 + (-0x66 << 2)
label_2a9bb0:
    if (ctx->pc == 0x2A9BB0u) {
        ctx->pc = 0x2A9BB0u;
            // 0x2a9bb0: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
        ctx->pc = 0x2A9BB4u;
        goto label_2a9bb4;
    }
    ctx->pc = 0x2A9BACu;
    {
        const bool branch_taken_0x2a9bac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BACu;
            // 0x2a9bb0: 0xae300030  sw          $s0, 0x30($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bac) {
            ctx->pc = 0x2A9A18u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a9a18;
        }
    }
    ctx->pc = 0x2A9BB4u;
label_2a9bb4:
    // 0x2a9bb4: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x2a9bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
label_2a9bb8:
    // 0x2a9bb8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a9bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_2a9bbc:
    // 0x2a9bbc: 0x12400005  beqz        $s2, . + 4 + (0x5 << 2)
label_2a9bc0:
    if (ctx->pc == 0x2A9BC0u) {
        ctx->pc = 0x2A9BC0u;
            // 0x2a9bc0: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->pc = 0x2A9BC4u;
        goto label_2a9bc4;
    }
    ctx->pc = 0x2A9BBCu;
    {
        const bool branch_taken_0x2a9bbc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BBCu;
            // 0x2a9bc0: 0xae22001c  sw          $v0, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a9bbc) {
            ctx->pc = 0x2A9BD4u;
            goto label_2a9bd4;
        }
    }
    ctx->pc = 0x2A9BC4u;
label_2a9bc4:
    // 0x2a9bc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2a9bc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2a9bc8:
    // 0x2a9bc8: 0x24051002  addiu       $a1, $zero, 0x1002
    ctx->pc = 0x2a9bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4098));
label_2a9bcc:
    // 0x2a9bcc: 0x240f809  jalr        $s2
label_2a9bd0:
    if (ctx->pc == 0x2A9BD0u) {
        ctx->pc = 0x2A9BD0u;
            // 0x2a9bd0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2A9BD4u;
        goto label_2a9bd4;
    }
    ctx->pc = 0x2A9BCCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 18);
        SET_GPR_U32(ctx, 31, 0x2A9BD4u);
        ctx->pc = 0x2A9BD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BCCu;
            // 0x2a9bd0: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2A9BD4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2A9BD4u; }
            if (ctx->pc != 0x2A9BD4u) { return; }
        }
        }
    }
    ctx->pc = 0x2A9BD4u;
label_2a9bd4:
    // 0x2a9bd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2a9bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2a9bd8:
    // 0x2a9bd8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a9bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_2a9bdc:
    // 0x2a9bdc: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x2a9bdcu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2a9be0:
    // 0x2a9be0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x2a9be0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2a9be4:
    // 0x2a9be4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x2a9be4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2a9be8:
    // 0x2a9be8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2a9be8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2a9bec:
    // 0x2a9bec: 0x3e00008  jr          $ra
label_2a9bf0:
    if (ctx->pc == 0x2A9BF0u) {
        ctx->pc = 0x2A9BF0u;
            // 0x2a9bf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2A9BF4u;
        goto label_2a9bf4;
    }
    ctx->pc = 0x2A9BECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A9BF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A9BECu;
            // 0x2a9bf0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A9BF4u;
label_2a9bf4:
    // 0x2a9bf4: 0x0  nop
    ctx->pc = 0x2a9bf4u;
    // NOP
    ctx->pc = 0x2a9bf8u;
}
